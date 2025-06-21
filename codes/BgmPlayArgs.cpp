void __fastcall BgmPlayArgs___ctor(
        BgmPlayArgs_o *this,
        System_String_o *bgmName,
        System_Nullable_float__o volume,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  float value; // s0
  BgmManager_c *v16; // x0

  if ( (byte_4B1BB96 & 1) == 0 )
  {
    sub_1BCAFF8(&BgmManager_TypeInfo, bgmName);
    sub_1BCAFF8(&Method_System_Nullable_float__GetValueOrDefault__, v11);
    sub_1BCAFF8(&Method_System_Nullable_float__get_HasValue__, v12);
    byte_4B1BB96 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._BgmName_k__BackingField = bgmName;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)bgmName, v13, v14);
  if ( volume.fields.hasValue )
  {
    value = volume.fields.value;
  }
  else
  {
    v16 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v16 = BgmManager_TypeInfo;
    }
    value = v16->static_fields->DEFAULT_VOLUME;
  }
  this->fields._Volume_k__BackingField = value;
  this->fields._FadeTime_k__BackingField = fadeTime;
  this->fields._StartTime_k__BackingField = startTime;
}


void __fastcall BgmPlayArgs__Update(
        BgmPlayArgs_o *this,
        System_Nullable_float__o volume,
        System_Nullable_float__o fadeTime,
        System_Nullable_long__o startTime,
        const MethodInfo *method)
{
  int64_t value; // x19
  bool hasValue; // w21
  BgmPlayArgs_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  float Volume_k__BackingField; // s0
  float FadeTime_k__BackingField; // s0

  value = startTime.fields.value;
  hasValue = startTime.fields.hasValue;
  v9 = this;
  if ( (byte_4B1BB97 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Nullable_float__GetValueOrDefault__, volume);
    sub_1BCAFF8(&Method_System_Nullable_long__GetValueOrDefault__, v10);
    sub_1BCAFF8(&Method_System_Nullable_long__get_HasValue__, v11);
    this = (BgmPlayArgs_o *)sub_1BCAFF8(&Method_System_Nullable_float__get_HasValue__, v12);
    byte_4B1BB97 = 1;
  }
  if ( volume.fields.hasValue )
  {
    if ( !v9 )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1BCB254)(this, volume);
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


System_String_o *__fastcall BgmPlayArgs__get_BgmName(BgmPlayArgs_o *this, const MethodInfo *method)
{
  return this->fields._BgmName_k__BackingField;
}


float __fastcall BgmPlayArgs__get_FadeTime(BgmPlayArgs_o *this, const MethodInfo *method)
{
  return this->fields._FadeTime_k__BackingField;
}


int64_t __fastcall BgmPlayArgs__get_StartTime(BgmPlayArgs_o *this, const MethodInfo *method)
{
  return this->fields._StartTime_k__BackingField;
}


float __fastcall BgmPlayArgs__get_Volume(BgmPlayArgs_o *this, const MethodInfo *method)
{
  return this->fields._Volume_k__BackingField;
}


void __fastcall BgmPlayArgs__set_BgmName(BgmPlayArgs_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BgmName_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BgmPlayArgs__set_FadeTime(BgmPlayArgs_o *this, float value, const MethodInfo *method)
{
  this->fields._FadeTime_k__BackingField = value;
}


void __fastcall BgmPlayArgs__set_StartTime(BgmPlayArgs_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._StartTime_k__BackingField = value;
}


void __fastcall BgmPlayArgs__set_Volume(BgmPlayArgs_o *this, float value, const MethodInfo *method)
{
  this->fields._Volume_k__BackingField = value;
}