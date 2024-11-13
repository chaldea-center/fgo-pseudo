BgmPlayArgs_o *__fastcall MainBgmPlayArgs__Clone(MainBgmPlayArgs_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  float Volume_k__BackingField; // s0
  System_String_o *BgmName_k__BackingField; // x20
  float FadeTime_k__BackingField; // s8
  int64_t StartTime_k__BackingField; // x19
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  BgmPlayArgs_o *v13; // x0
  BgmPlayArgs_o *v14; // x21
  const MethodInfo *v15; // x4
  System_Nullable_float__o volume; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v19; // 0:x2.8

  if ( (byte_4B1581E & 1) == 0 )
  {
    sub_1BCA7E0(&MainBgmPlayArgs_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v4, v5);
    byte_4B1581E = 1;
  }
  Volume_k__BackingField = this->fields._Volume_k__BackingField;
  BgmName_k__BackingField = this->fields._BgmName_k__BackingField;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(
    p_volume,
    Volume_k__BackingField,
    (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
  FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  StartTime_k__BackingField = this->fields._StartTime_k__BackingField;
  v13 = (BgmPlayArgs_o *)sub_1BCAA2C(MainBgmPlayArgs_TypeInfo, v10, v11, v12);
  v19 = volume;
  v14 = v13;
  BgmPlayArgs___ctor(v13, BgmName_k__BackingField, v19, FadeTime_k__BackingField, StartTime_k__BackingField, v15);
  return v14;
}