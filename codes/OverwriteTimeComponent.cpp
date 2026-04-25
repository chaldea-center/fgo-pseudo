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
  System_IFormatProvider_o *CultureInfo_66332336; // x21
  UILabel_o *monthNum; // x22
  System_DateTime_o v7; // x0
  System_String_o *remain; // x0
  __int64 v9; // x1
  UILabel_o *v10; // x22
  UILabel_o *dayNum; // x22
  System_DateTime_o v12; // x0
  UILabel_o *day; // x22
  UILabel_o *week; // x22
  System_DateTime_o v15; // x0
  System_String_o *v16; // x0
  UILabel_o *minutes; // x21
  System_String_o *v18; // x22
  Il2CppObject *v19; // x0
  int32_t Month; // [xsp+4h] [xbp-4Ch] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4E00D2E & 1) == 0 )
  {
    sub_1CE6700(&System_Globalization_CultureInfo_TypeInfo);
    sub_1CE6700(&System_DateTime_TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&StringLiteral_21370/*"ja-JP"*/);
    sub_1CE6700(&StringLiteral_18716/*"ddd"*/);
    sub_1CE6700(&StringLiteral_652/*"("*/);
    sub_1CE6700(&StringLiteral_13580/*"TIME_STR_DAYS"*/);
    sub_1CE6700(&StringLiteral_758/*")"*/);
    sub_1CE6700(&StringLiteral_6962/*"GACHA_OVERWRITE_TIME_MESSAGE"*/);
    sub_1CE6700(&StringLiteral_13583/*"TIME_STR_MONTH"*/);
    byte_4E00D2E = 1;
  }
  Month = 0;
  if ( !System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo);
  CultureInfo_66332336 = (System_IFormatProvider_o *)System_Globalization_CultureInfo__GetCultureInfo_66332336(
                                                       (System_String_o *)StringLiteral_21370/*"ja-JP"*/,
                                                       0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_42521056(time, 0).fields._dateData;
  monthNum = this->fields.monthNum;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v7.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v7, 0);
  remain = System_Int32__ToString((int32_t)&Month, 0);
  if ( !monthNum )
    goto LABEL_20;
  UILabel__set_text(monthNum, remain, 0);
  v10 = this->fields.month;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  remain = LocalizationManager__Get((System_String_o *)StringLiteral_13583/*"TIME_STR_MONTH"*/, 0);
  if ( !v10 )
    goto LABEL_20;
  UILabel__set_text(v10, remain, 0);
  dayNum = this->fields.dayNum;
  v12.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Day(v12, 0);
  remain = System_Int32__ToString((int32_t)&Month, 0);
  if ( !dayNum )
    goto LABEL_20;
  UILabel__set_text(dayNum, remain, 0);
  day = this->fields.day;
  remain = LocalizationManager__Get((System_String_o *)StringLiteral_13580/*"TIME_STR_DAYS"*/, 0);
  if ( !day )
    goto LABEL_20;
  UILabel__set_text(day, remain, 0);
  week = this->fields.week;
  v15.fields._dateData = (uint64_t)&dateData;
  v16 = System_DateTime__ToString_66521228(v15, (System_String_o *)StringLiteral_18716/*"ddd"*/, CultureInfo_66332336, 0);
  remain = System_String__Concat_65161092(
             (System_String_o *)StringLiteral_652/*"("*/,
             v16,
             (System_String_o *)StringLiteral_758/*")"*/,
             0);
  if ( !week )
    goto LABEL_20;
  UILabel__set_text(week, remain, 0);
  minutes = this->fields.minutes;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6962/*"GACHA_OVERWRITE_TIME_MESSAGE"*/, 0);
  v19 = (Il2CppObject *)LocalizationManager__GetTime(time, 0);
  remain = System_String__Format(v18, v19, 0);
  if ( !minutes
    || (UILabel__set_text(minutes, remain, 0), (remain = (System_String_o *)this->fields.remain) == 0)
    || (remain = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)remain, 0)) == 0 )
  {
LABEL_20:
    sub_1CE6958(remain, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)remain, 0, 0);
}