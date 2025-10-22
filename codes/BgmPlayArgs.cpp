void BgmPlayArgs___ctor(
        BgmPlayArgs_o *this,
        System_String_o *bgmName,
        System_Nullable_float__o volume,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  float value; // s0
  BgmManager_c *v14; // x0

  if ( (byte_4C5639D & 1) == 0 )
  {
    sub_1C3E564(&BgmManager_TypeInfo);
    sub_1C3E564(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C3E564(&Method_System_Nullable_float__get_HasValue__);
    byte_4C5639D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._BgmName_k__BackingField = bgmName;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)bgmName, v11, v12);
  if ( volume.fields.hasValue )
  {
    value = volume.fields.value;
  }
  else
  {
    v14 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v14 = BgmManager_TypeInfo;
    }
    value = v14->static_fields->DEFAULT_VOLUME;
  }
  this->fields._Volume_k__BackingField = value;
  this->fields._FadeTime_k__BackingField = fadeTime;
  this->fields._StartTime_k__BackingField = startTime;
}


void BgmPlayArgs__Update(
        BgmPlayArgs_o *this,
        System_Nullable_float__o volume,
        System_Nullable_float__o fadeTime,
        System_Nullable_long__o startTime,
        const MethodInfo *method)
{
  int64_t value; // x19
  bool hasValue; // w21
  BgmPlayArgs_o *v9; // x20
  float Volume_k__BackingField; // s0
  float FadeTime_k__BackingField; // s0

  value = startTime.fields.value;
  hasValue = startTime.fields.hasValue;
  v9 = this;
  if ( (byte_4C5639E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C3E564(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1C3E564(&Method_System_Nullable_long__get_HasValue__);
    this = (BgmPlayArgs_o *)sub_1C3E564(&Method_System_Nullable_float__get_HasValue__);
    byte_4C5639E = 1;
  }
  if ( volume.fields.hasValue )
  {
    if ( !v9 )
      sub_1C3E7C0(this, volume);
    Volume_k__BackingField = volume.fields.value;
  }
  else
  {
    Volume_k__BackingField = v9->fields._Volume_k__BackingField;
  }
  v9->fields._Volume_k__BackingField = Volume_k__BackingField;
  if ( fadeTime.fields.hasValue )
    FadeTime_k__BackingField = fadeTime.fields.value;
  else
    FadeTime_k__BackingField = v9->fields._FadeTime_k__BackingField;
  v9->fields._FadeTime_k__BackingField = FadeTime_k__BackingField;
  if ( !hasValue )
    value = v9->fields._StartTime_k__BackingField;
  v9->fields._StartTime_k__BackingField = value;
}


System_String_o *BgmPlayArgs__get_BgmName(BgmPlayArgs_o *this, const MethodInfo *method)
{
  return this->fields._BgmName_k__BackingField;
}


float BgmPlayArgs__get_FadeTime(BgmPlayArgs_o *this, const MethodInfo *method)
{
  return this->fields._FadeTime_k__BackingField;
}


int64_t BgmPlayArgs__get_StartTime(BgmPlayArgs_o *this, const MethodInfo *method)
{
  return this->fields._StartTime_k__BackingField;
}


float BgmPlayArgs__get_Volume(BgmPlayArgs_o *this, const MethodInfo *method)
{
  return this->fields._Volume_k__BackingField;
}


void BgmPlayArgs__set_BgmName(BgmPlayArgs_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BgmName_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void BgmPlayArgs__set_FadeTime(BgmPlayArgs_o *this, float value, const MethodInfo *method)
{
  this->fields._FadeTime_k__BackingField = value;
}


void BgmPlayArgs__set_StartTime(BgmPlayArgs_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._StartTime_k__BackingField = value;
}


void BgmPlayArgs__set_Volume(BgmPlayArgs_o *this, float value, const MethodInfo *method)
{
  this->fields._Volume_k__BackingField = value;
}