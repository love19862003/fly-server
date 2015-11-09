function initDataBaseList()
  MysqlTest()
  RedisTest()
end 
function MysqlTest()
  local fun = function( rows)
          for rid = 1,#rows do 
            local row = "row:"
            for k ,v in pairs (rows[rid]) do
              row = row.." row["..k.."]="..v
            end
            logDB(row)
          end 
        end
  -- 测试静态调用
  assert(MYSQLDATA:Instance():SQuery("10.103.252.96:3306", "root", "root", "test", "SELECT * FROM test;", {{"int", "id"}, {"string","test"},{"int", "t1"}}, fun))
  assert(MYSQLDATA:Instance():SPsQuery("10.103.252.96:3306", "root", "root", "test", "Update test_copy set test=?, t1=? where id=1;",{{"string", "xxxxxx"}, {"int",222223121}}))
  
  -- 测试多线程调用
  assert(MYSQLDATA:Instance():AddDataBase("test","10.103.252.96:3306", "root", "root", 1))     
  assert(MYSQLDATA:Instance():Query("test","SELECT * FROM test;", 2, {{"int", "id"}, {"string","test"},{"int", "t1"}}, fun))
  assert(MYSQLDATA:Instance():PsQuery("test", "Update test_copy set test=?, t1=? where id=1;", 1,{{"string", "xxxxxx"}, {"int",222223121}}))
end

function RedisTest()
  -- 测试redis
  REDISDATA:Instance():AddDataBase("redis", "127.0.0.1:6379",1, 1)
  REDISDATA:Instance():Query("redis", "set player aaa", nil, 0)
  REDISDATA:Instance():Query("redis", "get player",
  function( r)
    print("handle redis result.............................")
    for k, v in pairs(r) do
      if v[1] ~= nil then
        print("redis value:"..v[1].." redis type:"..v[2])
      else
        print("redis nil".." redis type:"..v[2])
      end
    end
  end, 0)
  REDISDATA:Instance():Query("redis", "get xxxxx",
  function( r)
    print("handle redis result.............................")
    for k, v in pairs(r) do
      if v[1] ~= nil then
        print("redis value:"..v[1].." redis type:"..v[2])
      else
        print("redis nil".." redis type:"..v[2])
      end
    end
  end, 0)
end

  