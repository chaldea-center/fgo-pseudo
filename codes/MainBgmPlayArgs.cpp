BgmPlayArgs_o *MainBgmPlayArgs__Clone(MainBgmPlayArgs_o *this, const MethodInfo *method)
{
  float Volume_k__BackingField; // s0
  System_String_o *BgmName_k__BackingField; // x20
  float FadeTime_k__BackingField; // s8
  int64_t StartTime_k__BackingField; // x19
  BgmPlayArgs_o *v7; // x21
  const MethodInfo *v8; // x4
  System_Nullable_float__o volume; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596FE0F & 1) == 0 )
  {
    sub_2213A60(&MainBgmPlayArgs_TypeInfo);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    byte_596FE0F = 1;
  }
  Volume_k__BackingField = this->fields._Volume_k__BackingField;
  BgmName_k__BackingField = this->fields._BgmName_k__BackingField;
  volume = 0;
  System_Nullable_float____ctor(
    (System_Nullable_float__o)&volume,
    Volume_k__BackingField,
    (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
  FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  StartTime_k__BackingField = this->fields._StartTime_k__BackingField;
  v7 = (BgmPlayArgs_o *)sub_2213CCC(MainBgmPlayArgs_TypeInfo);
  BgmPlayArgs___ctor(v7, BgmName_k__BackingField, volume, FadeTime_k__BackingField, StartTime_k__BackingField, v8);
  return v7;
}