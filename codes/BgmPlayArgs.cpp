void BgmPlayArgs___ctor(
        BgmPlayArgs_o *this,
        System_String_o *bgmName,
        System_Nullable_float__o volume,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  unsigned __int64 v18; // x8
  BgmManager_c *v19; // x0

  if ( (byte_5937CA2 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_float__get_HasValue__);
    byte_5937CA2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._BgmName_k__BackingField = bgmName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)bgmName, v11, v12, v13, v14, v15, v16);
  if ( volume.fields.hasValue )
  {
    v18 = HIDWORD(*(unsigned __int64 *)&volume);
  }
  else
  {
    v19 = BgmManager_TypeInfo;
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v17);
      v19 = BgmManager_TypeInfo;
    }
    *(float *)&v18 = v19->static_fields->DEFAULT_VOLUME;
  }
  LODWORD(this->fields._Volume_k__BackingField) = v18;
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
  unsigned __int64 v10; // x8
  unsigned __int64 v11; // x8

  value = startTime.fields.value;
  hasValue = startTime.fields.hasValue;
  v9 = this;
  if ( (byte_5937CA3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_long__get_HasValue__);
    this = (BgmPlayArgs_o *)sub_21FFC50(&Method_System_Nullable_float__get_HasValue__);
    byte_5937CA3 = 1;
  }
  if ( volume.fields.hasValue )
  {
    if ( !v9 )
      sub_21FFECC(this, volume);
    v10 = HIDWORD(*(unsigned __int64 *)&volume);
  }
  else
  {
    *(float *)&v10 = v9->fields._Volume_k__BackingField;
  }
  LODWORD(v9->fields._Volume_k__BackingField) = v10;
  if ( fadeTime.fields.hasValue )
    v11 = HIDWORD(*(unsigned __int64 *)&fadeTime);
  else
    *(float *)&v11 = v9->fields._FadeTime_k__BackingField;
  LODWORD(v9->fields._FadeTime_k__BackingField) = v11;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BgmName_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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