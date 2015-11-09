/********************************************************************

  Filename:   MyLog

  Description:MyLog

  Version:  1.0
  Created:  30:3:2015   12:01
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __MyLog_H__
#define __MyLog_H__
#include <string>
#include <assert.h>
namespace ShareSpace {
  namespace MyLog {
    struct Log {

      static bool log_init(const std::string& f);
      static void log_release();
      static void log_error(const std::string& s);
      static void log_debug(const std::string& s);
      static void log_warning(const std::string& s);
      static void log_info(const std::string& s);
      static void log_fatal(const std::string& s);

      static std::string toString(const char* t) {
        return std::string(t);
      }
      static const std::string& toString(const std::string& t) {
        return t;
      }
      template<typename T>
      static std::string toString(const T& t) {
        return std::to_string(t);
      }
     
      template<typename T1>
      static std::string makeString(const T1& t1) {
        return toString(t1);
      }
      template<typename T1, typename T2>
      static std::string makeString(const T1& t1, const T2& t2) {
        return toString(t1) + toString(t2);
      }
      template<typename T1, typename T2, typename T3>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3) {
        return toString(t1) + toString(t2) + toString(t3);
      }
      template<typename T1, typename T2, typename T3, typename T4>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11) + toString(t12);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11) + toString(t12) + toString(t13);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11) + toString(t12) + toString(t13) + toString(t14);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11) + toString(t12) + toString(t13) + toString(t14) + toString(t15);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11) + toString(t12) + toString(t13) + toString(t14) + toString(t15) + toString(t16);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11) + toString(t12) + toString(t13) + toString(t14) + toString(t15) + toString(t16) + toString(t17);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11) + toString(t12) + toString(t13) + toString(t14) + toString(t15) + toString(t16) + toString(t17) + toString(t18);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11) + toString(t12) + toString(t13) + toString(t14) + toString(t15) + toString(t16) + toString(t17) + toString(t18) + toString(t19);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11) + toString(t12) + toString(t13) + toString(t14) + toString(t15) + toString(t16) + toString(t17) + toString(t18) + toString(t19) + toString(t20);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20, const T21& t21) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11) + toString(t12) + toString(t13) + toString(t14) + toString(t15) + toString(t16) + toString(t17) + toString(t18) + toString(t19) + toString(t20) + toString(t21);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20, const T21& t21, const T22& t22) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11) + toString(t12) + toString(t13) + toString(t14) + toString(t15) + toString(t16) + toString(t17) + toString(t18) + toString(t19) + toString(t20) + toString(t21) + toString(t22);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20, const T21& t21, const T22& t22, const T23& t23) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11) + toString(t12) + toString(t13) + toString(t14) + toString(t15) + toString(t16) + toString(t17) + toString(t18) + toString(t19) + toString(t20) + toString(t21) + toString(t22) + toString(t23);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20, const T21& t21, const T22& t22, const T23& t23, const T24& t24) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11) + toString(t12) + toString(t13) + toString(t14) + toString(t15) + toString(t16) + toString(t17) + toString(t18) + toString(t19) + toString(t20) + toString(t21) + toString(t22) + toString(t23) + toString(t24);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20, const T21& t21, const T22& t22, const T23& t23, const T24& t24, const T25& t25) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11) + toString(t12) + toString(t13) + toString(t14) + toString(t15) + toString(t16) + toString(t17) + toString(t18) + toString(t19) + toString(t20) + toString(t21) + toString(t22) + toString(t23) + toString(t24) + toString(t25);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20, const T21& t21, const T22& t22, const T23& t23, const T24& t24, const T25& t25, const T26& t26) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11) + toString(t12) + toString(t13) + toString(t14) + toString(t15) + toString(t16) + toString(t17) + toString(t18) + toString(t19) + toString(t20) + toString(t21) + toString(t22) + toString(t23) + toString(t24) + toString(t25) + toString(t26);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20, const T21& t21, const T22& t22, const T23& t23, const T24& t24, const T25& t25, const T26& t26, const T27& t27) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11) + toString(t12) + toString(t13) + toString(t14) + toString(t15) + toString(t16) + toString(t17) + toString(t18) + toString(t19) + toString(t20) + toString(t21) + toString(t22) + toString(t23) + toString(t24) + toString(t25) + toString(t26) + toString(t27);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20, const T21& t21, const T22& t22, const T23& t23, const T24& t24, const T25& t25, const T26& t26, const T27& t27, const T28& t28) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11) + toString(t12) + toString(t13) + toString(t14) + toString(t15) + toString(t16) + toString(t17) + toString(t18) + toString(t19) + toString(t20) + toString(t21) + toString(t22) + toString(t23) + toString(t24) + toString(t25) + toString(t26) + toString(t27) + toString(t28);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20, const T21& t21, const T22& t22, const T23& t23, const T24& t24, const T25& t25, const T26& t26, const T27& t27, const T28& t28, const T29& t29) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11) + toString(t12) + toString(t13) + toString(t14) + toString(t15) + toString(t16) + toString(t17) + toString(t18) + toString(t19) + toString(t20) + toString(t21) + toString(t22) + toString(t23) + toString(t24) + toString(t25) + toString(t26) + toString(t27) + toString(t28) + toString(t29);
      }
      template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30>
      static std::string makeString(const T1& t1, const T2& t2, const T3& t3, const T4& t4, const T5& t5, const T6& t6, const T7& t7, const T8& t8, const T9& t9, const T10& t10, const T11& t11, const T12& t12, const T13& t13, const T14& t14, const T15& t15, const T16& t16, const T17& t17, const T18& t18, const T19& t19, const T20& t20, const T21& t21, const T22& t22, const T23& t23, const T24& t24, const T25& t25, const T26& t26, const T27& t27, const T28& t28, const T29& t29, const T30& t30) {
        return toString(t1) + toString(t2) + toString(t3) + toString(t4) + toString(t5) + toString(t6) + toString(t7) + toString(t8) + toString(t9) + toString(t10) + toString(t11) + toString(t12) + toString(t13) + toString(t14) + toString(t15) + toString(t16) + toString(t17) + toString(t18) + toString(t19) + toString(t20) + toString(t21) + toString(t22) + toString(t23) + toString(t24) + toString(t25) + toString(t26) + toString(t27) + toString(t28) + toString(t29) + toString(t30);
      }
    };
#define LOGINIT( file)  ShareSpace::MyLog::Log::log_init(file)
#define LOGRELEASE()      ShareSpace::MyLog::Log::log_release()

#define FILE_FUNTION_LINE ("File:" +  std::string(__FILE__) + " Fun:" + std::string(__FUNCTION__) + " Line:" + std::to_string(__LINE__) + " ")

//#define LOGFILEFUN
#ifdef LOGFILEFUN
#define FILESTR     FILE_FUNTION_LINE
#else
#define FILESTR ("")
#endif

#ifndef NDEBUG
#define MYASSERT(condition, ...) do {  \
      if( !(condition) ){\
        ShareSpace::MyLog::Log::log_error( ShareSpace::MyLog::Log::makeString(FILE_FUNTION_LINE,  ##__VA_ARGS__));\
        assert(false);\
         }\
       } while(0)  
#else
#define MYASSERT(condition, ...) do {  \
      if( !(condition) ){\
        ShareSpace::MyLog::Log::log_error(ShareSpace::MyLog::Log::makeString(FILE_FUNTION_LINE,  ##__VA_ARGS__));\
        }\
       } while(0)  
#endif // _DEBUG



#define LOGDEBUG(s,...)  do { std::string _str = FILESTR + ShareSpace::MyLog::Log::makeString(s,  ##__VA_ARGS__);\
                                   ShareSpace::MyLog::Log::log_debug(std::move(_str)); } while(0)

#define LOGERROR(s,...)  do { std::string _str = FILESTR + ShareSpace::MyLog::Log::makeString(s, ##__VA_ARGS__);\
                                   ShareSpace::MyLog::Log::log_error(std::move(_str)); } while(0)

#define LOGWARNING(s,...)  do { std::string _str = FILESTR + ShareSpace::MyLog::Log::makeString(s, ##__VA_ARGS__);\
                                     ShareSpace::MyLog::Log::log_warning(std::move(_str)); } while(0)

#define LOGINFO(s,...)  do { std::string _str = FILESTR + ShareSpace::MyLog::Log::makeString(s, ##__VA_ARGS__);\
                                  ShareSpace::MyLog::Log::log_info(std::move(_str)); } while(0)

#define LOGFATAL(s,...)  do { std::string _str = FILESTR + ShareSpace::MyLog::Log::makeString(s, ##__VA_ARGS__);\
                                   ShareSpace::MyLog::Log::log_fatal(std::move(_str)); } while(0)

  }
}
#endif