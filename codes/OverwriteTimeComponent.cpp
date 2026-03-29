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
  System_IFormatProvider_o *CultureInfo_65635232; // x21
  UILabel_o *monthNum; // x22
  System_String_o *remain; // x0
  __int64 v8; // x1
  UILabel_o *v9; // x22
  UILabel_o *dayNum; // x22
  UILabel_o *day; // x22
  UILabel_o *week; // x22
  System_String_o *v13; // x0
  UILabel_o *minutes; // x21
  System_String_o *v15; // x22
  Il2CppObject *v16; // x0
  int32_t Month; // [xsp+4h] [xbp-4Ch] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2CCCB & 1) == 0 )
  {
    sub_1C93AD4(&System_Globalization_CultureInfo_TypeInfo);
    sub_1C93AD4(&System_DateTime_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_21301/*"ja-JP"*/);
    sub_1C93AD4(&StringLiteral_18656/*"ddd"*/);
    sub_1C93AD4(&StringLiteral_651/*"("*/);
    sub_1C93AD4(&StringLiteral_13540/*"TIME_STR_DAYS"*/);
    sub_1C93AD4(&StringLiteral_757/*")"*/);
    sub_1C93AD4(&StringLiteral_6946/*"GACHA_OVERWRITE_TIME_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_13543/*"TIME_STR_MONTH"*/);
    byte_4D2CCCB = 1;
  }
  Month = 0;
  if ( !System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo);
  CultureInfo_65635232 = (System_IFormatProvider_o *)System_Globalization_CultureInfo__GetCultureInfo_65635232(
                                                       (System_String_o *)StringLiteral_21301/*"ja-JP"*/,
                                                       0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_42097084(time, 0).fields._dateData;
  monthNum = this->fields.monthNum;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  Month = System_DateTime__get_Month((System_DateTime_o)&dateData, 0);
  remain = System_Int32__ToString((int32_t)&Month, 0);
  if ( !monthNum )
    goto LABEL_20;
  UILabel__set_text(monthNum, remain, 0);
  v9 = this->fields.month;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  remain = LocalizationManager__Get((System_String_o *)StringLiteral_13543/*"TIME_STR_MONTH"*/, 0);
  if ( !v9 )
    goto LABEL_20;
  UILabel__set_text(v9, remain, 0);
  dayNum = this->fields.dayNum;
  Month = System_DateTime__get_Day((System_DateTime_o)&dateData, 0);
  remain = System_Int32__ToString((int32_t)&Month, 0);
  if ( !dayNum )
    goto LABEL_20;
  UILabel__set_text(dayNum, remain, 0);
  day = this->fields.day;
  remain = LocalizationManager__Get((System_String_o *)StringLiteral_13540/*"TIME_STR_DAYS"*/, 0);
  if ( !day )
    goto LABEL_20;
  UILabel__set_text(day, remain, 0);
  week = this->fields.week;
  v13 = System_DateTime__ToString_65824124(
          (System_DateTime_o)&dateData,
          (System_String_o *)StringLiteral_18656/*"ddd"*/,
          CultureInfo_65635232,
          0);
  remain = System_String__Concat_64463988(
             (System_String_o *)StringLiteral_651/*"("*/,
             v13,
             (System_String_o *)StringLiteral_757/*")"*/,
             0);
  if ( !week )
    goto LABEL_20;
  UILabel__set_text(week, remain, 0);
  minutes = this->fields.minutes;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_6946/*"GACHA_OVERWRITE_TIME_MESSAGE"*/, 0);
  v16 = (Il2CppObject *)LocalizationManager__GetTime(time, 0);
  remain = System_String__Format(v15, v16, 0);
  if ( !minutes
    || (UILabel__set_text(minutes, remain, 0), (remain = (System_String_o *)this->fields.remain) == 0)
    || (remain = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)remain, 0)) == 0 )
  {
LABEL_20:
    sub_1C93D2C(remain, v8);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)remain, 0, 0);
}