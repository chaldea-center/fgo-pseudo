BgmPlayArgs_o *__fastcall MainBgmPlayArgs__Clone(MainBgmPlayArgs_o *this, const MethodInfo *method)
{
  float Volume_k__BackingField; // s0
  System_String_o *BgmName_k__BackingField; // x20
  float FadeTime_k__BackingField; // s8
  int64_t StartTime_k__BackingField; // x19
  BgmPlayArgs_o *v7; // x0
  BgmPlayArgs_o *v8; // x21
  const MethodInfo *v9; // x4
  System_Nullable_float__o volume; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v13; // 0:x2.8

  if ( (byte_4A5A7B5 & 1) == 0 )
  {
    sub_1B885B0(&MainBgmPlayArgs_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_float___ctor__);
    byte_4A5A7B5 = 1;
  }
  Volume_k__BackingField = this->fields._Volume_k__BackingField;
  BgmName_k__BackingField = this->fields._BgmName_k__BackingField;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(
    p_volume,
    Volume_k__BackingField,
    (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
  FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  StartTime_k__BackingField = this->fields._StartTime_k__BackingField;
  v7 = (BgmPlayArgs_o *)sub_1B887FC(MainBgmPlayArgs_TypeInfo);
  v13 = volume;
  v8 = v7;
  BgmPlayArgs___ctor(v7, BgmName_k__BackingField, v13, FadeTime_k__BackingField, StartTime_k__BackingField, v9);
  return v8;
}