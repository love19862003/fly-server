local Config = {
    login = {
              client  = {name = "ListenClient", ip = "127.0.0.1", port = 10000, maxConn = 10000,}, -- 侦听客户端端口
              gate    = {name = "ListenGate",     ip = "127.0.0.1", port = 10001, maxConn = 255,}, -- 侦听gate端口
              live    = 3000,   --活跃的时间 心跳在这个时间内的gate 按照负载均衡的方式分配
              heart   = 10000,  --检测心跳时间
              enable  = true,   --是否激活login
              name    = "login",--login名字
            },
    gates = {
               -- gate list信息
              { client    = {name = "ListenClient", ip = "127.0.0.1", port = 10002, maxConn = 10000,}, --侦听客户端端口
                game      = {name = "ConnGame",   ip = "127.0.0.1", port = 10003,}, --连接的game server信息
                login     = {name = "ConnLogin",  ip = "127.0.0.1", port = 10001,}, --连接的login信息
                outip     = "127.0.0.1",  --对外的IP信息
                name      = "gate1",  --gate注册名字
                enable    = true, --是否激活gate
               },
              {
                client    = {name = "ListenClient",   ip = "127.0.0.1", port = 10004, maxConn = 10000,},
                game      = {name = "ConnGameServer", ip = "127.0.0.1", port = 10006,},
                login     = {name = "ConnLogin",  ip = "127.0.0.1", port = 10001,},
                outip     = "127.0.0.1",
                name      = "gate2",
                enable    = true,
              },
            },
    games = {
                -- game list信息
                {
                    gate    = {name = "ListenGate", ip = "127.0.0.1", port = 10003, maxConn = 255,}, --侦听gate端口
                    center  = {name = "ConnCenter", ip = "127.0.0.1", port = 10005,}, --连接center的信息
                    name    = "game1", -- game server 名字
                    enable  = true, -- 是否激活game
                },
                {
                    gate    = {name = "ListenGate", ip = "127.0.0.1", port = 10006, maxConn = 255,},
                    center  = {name = "ConnCenter", ip = "127.0.0.1", port = 10005,},
                    name    = "game2",
                    enable  = true,
                },
            },
    center = {
               --侦听game 和cell的端口
               server   = {name = "ListenGameAndCell", ip = "127.0.0.1", port = 10005, maxConn = 255},
               db       = "share", -- 连接的数据库
               name     = "center", -- center名字
               enable   = true, -- 是否激活
              },
    cells = {
              -- cell list信息
                {
                    center  = {name = "ConnCenter", ip = "127.0.0.1", port = 10005,}, --连接center信息
                    name    = "cell1", -- cell名字
                    db      = "cell1", -- cell对应的数据库名字
                    enable  = true, -- 是否激活
                },
                {
                    center  = {name = "ConnCenter", ip = "127.0.0.1", port = 10005,},
                    name    = "cell2",
                    db      = "cell2",
                    enable  = true,
                },
            },
    db = {
            -- 数据库配置列表信息
            share = {name ="share", ip = "10.103.252.96:3306", user = "root", password = "root", thread = 1,},
            cell1 = {name ="cell1", ip = "10.103.252.96:3306", user = "root", password = "root", thread = 1,},
            cell2 = {name ="cell2", ip = "10.103.252.96:3306", user = "root", password = "root", thread = 1,},
            cell3 = {name ="cell3", ip = "10.103.252.96:3306", user = "root", password = "root", thread = 1,},
         },
}
return Config
