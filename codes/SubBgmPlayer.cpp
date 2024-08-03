void __fastcall SubBgmPlayer___ctor(SubBgmPlayer_o *this, const MethodInfo *method)
{
  this->fields.bgmFadeTime = -1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BgmPlayArgs_o *__fastcall SubBgmPlayer__ExportPlayArgs(SubBgmPlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *bgmName; // x19
  float bgmVolume; // s0
  const MethodInfo *v6; // x1
  int32_t PlayTime; // w21
  __int64 v8; // x1
  __int64 v9; // x2
  BgmPlayArgs_o *v10; // x0
  BgmPlayArgs_o *v11; // x20
  const MethodInfo *v12; // x4
  System_Nullable_float__o volume; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o p_volume; // 0:x0.8
  System_Nullable_float__o v16; // 0:x2.8

  if ( (byte_49FBA84 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Nullable_float___ctor__, method);
    sub_1B640C8(&SubBgmPlayArgs_TypeInfo, v3);
    byte_49FBA84 = 1;
  }
  bgmName = this->fields.bgmName;
  if ( !bgmName )
    return 0LL;
  bgmVolume = this->fields.bgmVolume;
  p_volume = (System_Nullable_float__o)&volume;
  volume = 0LL;
  System_Nullable_float____ctor(p_volume, bgmVolume, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
  PlayTime = BgmPlayerBase__get_PlayTime((BgmPlayerBase_o *)this, v6);
  v10 = (BgmPlayArgs_o *)sub_1B64314(SubBgmPlayArgs_TypeInfo, v8, v9);
  v16 = volume;
  v11 = v10;
  BgmPlayArgs___ctor(v10, bgmName, v16, 0.0, PlayTime, v12);
  return v11;
}