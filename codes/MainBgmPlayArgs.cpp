BgmPlayArgs_o *__fastcall MainBgmPlayArgs__Clone(MainBgmPlayArgs_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  float Volume_k__BackingField; // s0
  System_String_o *BgmName_k__BackingField; // x20
  float FadeTime_k__BackingField; // s8
  int64_t StartTime_k__BackingField; // x19
  BgmPlayArgs_o *v8; // x0
  BgmPlayArgs_o *v9; // x21
  const MethodInfo *v10; // x4
  System_Nullable_float__o volume; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v14; // 0:x2.8

  if ( (byte_4BB3CF5 & 1) == 0 )
  {
    sub_1C13D24(&MainBgmPlayArgs_TypeInfo, method);
    sub_1C13D24(&Method_System_Nullable_float___ctor__, v3);
    byte_4BB3CF5 = 1;
  }
  Volume_k__BackingField = this->fields._Volume_k__BackingField;
  BgmName_k__BackingField = this->fields._BgmName_k__BackingField;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(
    p_volume,
    Volume_k__BackingField,
    (const MethodInfo_374B620 *)Method_System_Nullable_float___ctor__);
  FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  StartTime_k__BackingField = this->fields._StartTime_k__BackingField;
  v8 = (BgmPlayArgs_o *)sub_1C13F70(MainBgmPlayArgs_TypeInfo);
  v14 = volume;
  v9 = v8;
  BgmPlayArgs___ctor(v8, BgmName_k__BackingField, v14, FadeTime_k__BackingField, StartTime_k__BackingField, v10);
  return v9;
}