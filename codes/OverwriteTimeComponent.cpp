void OverwriteTimeComponent___ctor(OverwriteTimeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void OverwriteTimeComponent__Awake(OverwriteTimeComponent_o *this, const MethodInfo *method)
{
  ;
}


void OverwriteTimeComponent__SetTime(OverwriteTimeComponent_o *this, int64_t time, const MethodInfo *method)
{
  int v5; // w8
  __int64 v6; // x1
  __int64 v7; // x2
  System_IFormatProvider_o *CultureInfo_76764288; // x21
  System_DateTime_o v9; // x1
  System_DateTime_o v10; // x2
  uint64_t dateData; // x8
  UILabel_o *monthNum; // x22
  System_String_o *remain; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *v17; // x22
  UILabel_o *dayNum; // x22
  UILabel_o *day; // x22
  UILabel_o *week; // x22
  System_String_o *v21; // x0
  UILabel_o *minutes; // x21
  System_String_o *v23; // x22
  Il2CppObject *v24; // x0
  int32_t Month; // [xsp+4h] [xbp-4Ch] BYREF
  uint64_t v26; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_596C9D7 & 1) == 0 )
  {
    sub_2213A60(&System_Globalization_CultureInfo_TypeInfo);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_22091/*"ja-JP"*/);
    sub_2213A60(&StringLiteral_19334/*"ddd"*/);
    sub_2213A60(&StringLiteral_681/*"("*/);
    sub_2213A60(&StringLiteral_13998/*"TIME_STR_DAYS"*/);
    sub_2213A60(&StringLiteral_789/*")"*/);
    sub_2213A60(&StringLiteral_7204/*"GACHA_OVERWRITE_TIME_MESSAGE"*/);
    sub_2213A60(&StringLiteral_14001/*"TIME_STR_MONTH"*/);
    byte_596C9D7 = 1;
  }
  v5 = *(&System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished + 1);
  v26 = 0;
  Month = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo, time, method);
  CultureInfo_76764288 = (System_IFormatProvider_o *)System_Globalization_CultureInfo__GetCultureInfo_76764288(
                                                       (System_String_o *)StringLiteral_22091/*"ja-JP"*/,
                                                       0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  dateData = NetworkManager__getServerDateTime_48347596(time, 0).fields._dateData;
  monthNum = this->fields.monthNum;
  v26 = dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v9.fields._dateData, v10.fields._dateData);
  Month = System_DateTime__get_Month((System_DateTime_o)&v26, 0);
  remain = System_Int32__ToString((int32_t)&Month, 0);
  if ( !monthNum )
    goto LABEL_20;
  UILabel__set_text(monthNum, remain, 0);
  v17 = this->fields.month;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
  remain = LocalizationManager__Get((System_String_o *)StringLiteral_14001/*"TIME_STR_MONTH"*/, 0);
  if ( !v17 )
    goto LABEL_20;
  UILabel__set_text(v17, remain, 0);
  dayNum = this->fields.dayNum;
  Month = System_DateTime__get_Day((System_DateTime_o)&v26, 0);
  remain = System_Int32__ToString((int32_t)&Month, 0);
  if ( !dayNum )
    goto LABEL_20;
  UILabel__set_text(dayNum, remain, 0);
  day = this->fields.day;
  remain = LocalizationManager__Get((System_String_o *)StringLiteral_13998/*"TIME_STR_DAYS"*/, 0);
  if ( !day )
    goto LABEL_20;
  UILabel__set_text(day, remain, 0);
  week = this->fields.week;
  v21 = System_DateTime__ToString_77027988(
          (System_DateTime_o)&v26,
          (System_String_o *)StringLiteral_19334/*"ddd"*/,
          CultureInfo_76764288,
          0);
  remain = System_String__Concat_75694928(
             (System_String_o *)StringLiteral_681/*"("*/,
             v21,
             (System_String_o *)StringLiteral_789/*")"*/,
             0);
  if ( !week )
    goto LABEL_20;
  UILabel__set_text(week, remain, 0);
  minutes = this->fields.minutes;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_7204/*"GACHA_OVERWRITE_TIME_MESSAGE"*/, 0);
  v24 = (Il2CppObject *)LocalizationManager__GetTime(time, 0);
  remain = System_String__Format(v23, v24, 0);
  if ( !minutes
    || (UILabel__set_text(minutes, remain, 0), (remain = (System_String_o *)this->fields.remain) == 0)
    || (remain = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)remain, 0)) == 0 )
  {
LABEL_20:
    sub_2213CDC(remain, v14);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)remain, 0, 0);
}