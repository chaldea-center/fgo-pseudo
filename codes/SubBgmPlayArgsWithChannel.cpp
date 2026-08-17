void SubBgmPlayArgsWithChannel___ctor(
        SubBgmPlayArgsWithChannel_o *this,
        System_String_o *bgmName,
        int32_t channelId,
        System_Nullable_float__o volume,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  BgmPlayArgs___ctor((BgmPlayArgs_o *)this, bgmName, volume, fadeTime, startTime, (const MethodInfo *)startTime);
  this->fields._ChannelId_k__BackingField = channelId;
}


System_String_o *SubBgmPlayArgsWithChannel__BuildChannelName(
        System_String_o *bgmName,
        int32_t channelId,
        const MethodInfo *method)
{
  System_String_o *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = channelId;
  if ( (byte_596FE1B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4539/*"Channel"*/);
    byte_596FE1B = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  return System_String__Concat_75694928(bgmName, (System_String_o *)StringLiteral_4539/*"Channel"*/, v4, 0);
}


BgmPlayArgs_o *SubBgmPlayArgsWithChannel__Clone(SubBgmPlayArgsWithChannel_o *this, const MethodInfo *method)
{
  float Volume_k__BackingField; // s0
  System_Nullable_float__o p_volume; // x0
  System_String_o *BgmName_k__BackingField; // x20
  int32_t ChannelId_k__BackingField; // w23
  float FadeTime_k__BackingField; // s8
  int64_t StartTime_k__BackingField; // x19
  BgmPlayArgs_o *v9; // x0
  System_Nullable_float__o v10; // x2
  BgmPlayArgs_o *v11; // x21
  const MethodInfo *v12; // x4
  BgmPlayArgs_o *result; // x0
  System_Nullable_float__o volume; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596FE1A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&SubBgmPlayArgsWithChannel_TypeInfo);
    byte_596FE1A = 1;
  }
  Volume_k__BackingField = this->fields._Volume_k__BackingField;
  p_volume = (System_Nullable_float__o)&volume;
  BgmName_k__BackingField = this->fields._BgmName_k__BackingField;
  ChannelId_k__BackingField = this->fields._ChannelId_k__BackingField;
  volume = 0;
  System_Nullable_float____ctor(
    p_volume,
    Volume_k__BackingField,
    (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
  FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  StartTime_k__BackingField = this->fields._StartTime_k__BackingField;
  v9 = (BgmPlayArgs_o *)sub_2213CCC(SubBgmPlayArgsWithChannel_TypeInfo);
  v10 = volume;
  v11 = v9;
  BgmPlayArgs___ctor(v9, BgmName_k__BackingField, v10, FadeTime_k__BackingField, StartTime_k__BackingField, v12);
  result = v11;
  LODWORD(v11[1].klass) = ChannelId_k__BackingField;
  return result;
}


int32_t SubBgmPlayArgsWithChannel__get_ChannelId(SubBgmPlayArgsWithChannel_o *this, const MethodInfo *method)
{
  return this->fields._ChannelId_k__BackingField;
}


void SubBgmPlayArgsWithChannel__set_ChannelId(
        SubBgmPlayArgsWithChannel_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ChannelId_k__BackingField = value;
}