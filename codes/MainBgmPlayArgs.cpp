void __fastcall MainBgmPlayArgs___ctor(
        MainBgmPlayArgs_o *this,
        System_String_o *bgmName,
        System_Nullable_float__o volume,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  BgmPlayArgs___ctor((BgmPlayArgs_o *)this, bgmName, volume, fadeTime, startTime, 0LL);
}


BgmPlayArgs_o *__fastcall MainBgmPlayArgs__Clone(MainBgmPlayArgs_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *BgmName_k__BackingField; // x20
  float Volume_k__BackingField; // s0
  float FadeTime_k__BackingField; // s8
  int64_t StartTime_k__BackingField; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  BgmPlayArgs_o *v12; // x0
  BgmPlayArgs_o *v13; // x21
  System_Nullable_float__o volume; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v17; // 0:x2.8

  if ( (byte_40F8E0C & 1) == 0 )
  {
    sub_B16FFC(&MainBgmPlayArgs_TypeInfo, method);
    sub_B16FFC(&Method_System_Nullable_float___ctor__, v3);
    byte_40F8E0C = 1;
  }
  BgmName_k__BackingField = this->fields._BgmName_k__BackingField;
  Volume_k__BackingField = this->fields._Volume_k__BackingField;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(
    p_volume,
    Volume_k__BackingField,
    (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
  FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  StartTime_k__BackingField = this->fields._StartTime_k__BackingField;
  v12 = (BgmPlayArgs_o *)sub_B170CC(MainBgmPlayArgs_TypeInfo, v8, v9, v10, v11);
  v17 = volume;
  v13 = v12;
  BgmPlayArgs___ctor(v12, BgmName_k__BackingField, v17, FadeTime_k__BackingField, StartTime_k__BackingField, 0LL);
  return v13;
}