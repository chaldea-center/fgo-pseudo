void __fastcall OverwriteTimeComponent___ctor(OverwriteTimeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall OverwriteTimeComponent__Awake(OverwriteTimeComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall OverwriteTimeComponent__SetTime(OverwriteTimeComponent_o *this, int64_t time, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_IFormatProvider_o *CultureInfo_62930308; // x21
  UILabel_o *monthNum; // x22
  System_String_o *remain; // x0
  __int64 v18; // x1
  UILabel_o *v19; // x22
  UILabel_o *dayNum; // x22
  UILabel_o *day; // x22
  UILabel_o *week; // x22
  System_String_o *v23; // x0
  UILabel_o *minutes; // x21
  System_String_o *v25; // x22
  Il2CppObject *v26; // x0
  int32_t Month; // [xsp+4h] [xbp-4Ch] BYREF
  uint64_t dateData; // [xsp+8h] [xbp-48h] BYREF
  System_DateTime_o v29; // 0:x0.8
  System_DateTime_o v30; // 0:x0.8
  System_DateTime_o v31; // 0:x0.8

  if ( (byte_4A4AA2C & 1) == 0 )
  {
    sub_1B863B8(&System_Globalization_CultureInfo_TypeInfo, time);
    sub_1B863B8(&System_DateTime_TypeInfo, v5);
    sub_1B863B8(&LocalizationManager_TypeInfo, v6);
    sub_1B863B8(&NetworkManager_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_20721/*"ja-JP"*/, v8);
    sub_1B863B8(&StringLiteral_18268/*"ddd"*/, v9);
    sub_1B863B8(&StringLiteral_652/*"("*/, v10);
    sub_1B863B8(&StringLiteral_13219/*"TIME_STR_DAYS"*/, v11);
    sub_1B863B8(&StringLiteral_764/*")"*/, v12);
    sub_1B863B8(&StringLiteral_6836/*"GACHA_OVERWRITE_TIME_MESSAGE"*/, v13);
    sub_1B863B8(&StringLiteral_13222/*"TIME_STR_MONTH"*/, v14);
    byte_4A4AA2C = 1;
  }
  Month = 0;
  if ( !System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo);
  CultureInfo_62930308 = (System_IFormatProvider_o *)System_Globalization_CultureInfo__GetCultureInfo_62930308(
                                                       (System_String_o *)StringLiteral_20721/*"ja-JP"*/,
                                                       0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_39522968(time, 0LL).fields._dateData;
  monthNum = this->fields.monthNum;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v29.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v29, 0LL);
  remain = System_Int32__ToString((int32_t)&Month, 0LL);
  if ( !monthNum )
    goto LABEL_20;
  UILabel__set_text(monthNum, remain, 0LL);
  v19 = this->fields.month;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  remain = LocalizationManager__Get((System_String_o *)StringLiteral_13222/*"TIME_STR_MONTH"*/, 0LL);
  if ( !v19 )
    goto LABEL_20;
  UILabel__set_text(v19, remain, 0LL);
  dayNum = this->fields.dayNum;
  v30.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Day(v30, 0LL);
  remain = System_Int32__ToString((int32_t)&Month, 0LL);
  if ( !dayNum )
    goto LABEL_20;
  UILabel__set_text(dayNum, remain, 0LL);
  day = this->fields.day;
  remain = LocalizationManager__Get((System_String_o *)StringLiteral_13219/*"TIME_STR_DAYS"*/, 0LL);
  if ( !day )
    goto LABEL_20;
  UILabel__set_text(day, remain, 0LL);
  week = this->fields.week;
  v31.fields._dateData = (uint64_t)&dateData;
  v23 = System_DateTime__ToString_63048724(v31, (System_String_o *)StringLiteral_18268/*"ddd"*/, CultureInfo_62930308, 0LL);
  remain = System_String__Concat_61683424(
             (System_String_o *)StringLiteral_652/*"("*/,
             v23,
             (System_String_o *)StringLiteral_764/*")"*/,
             0LL);
  if ( !week )
    goto LABEL_20;
  UILabel__set_text(week, remain, 0LL);
  minutes = this->fields.minutes;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6836/*"GACHA_OVERWRITE_TIME_MESSAGE"*/, 0LL);
  v26 = (Il2CppObject *)LocalizationManager__GetTime(time, 0LL);
  remain = System_String__Format(v25, v26, 0LL);
  if ( !minutes
    || (UILabel__set_text(minutes, remain, 0LL), (remain = (System_String_o *)this->fields.remain) == 0LL)
    || (remain = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)remain, 0LL)) == 0LL )
  {
LABEL_20:
    sub_1B86614(remain, v18);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)remain, 0, 0LL);
}