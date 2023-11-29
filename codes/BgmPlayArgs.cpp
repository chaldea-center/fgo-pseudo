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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  float value; // s0
  BgmManager_c *v20; // x0

  if ( (byte_40F9061 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, bgmName);
    sub_B16FFC(&Method_System_Nullable_float__GetValueOrDefault__, v11);
    sub_B16FFC(&Method_System_Nullable_float__get_HasValue__, v12);
    byte_40F9061 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._BgmName_k__BackingField = bgmName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)bgmName,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( (*(_QWORD *)&volume & 0xFF00000000LL) != 0 )
  {
    value = volume.fields.value;
  }
  else
  {
    v20 = BgmManager_TypeInfo;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v20 = BgmManager_TypeInfo;
    }
    value = v20->static_fields->DEFAULT_VOLUME;
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
  bool has_value; // w21
  int64_t value; // x19
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  float Volume_k__BackingField; // s0
  float FadeTime_k__BackingField; // s0

  has_value = startTime.fields.has_value;
  value = startTime.fields.value;
  if ( (byte_40F9062 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_long__GetValueOrDefault__, volume);
    sub_B16FFC(&Method_System_Nullable_float__GetValueOrDefault__, v10);
    sub_B16FFC(&Method_System_Nullable_long__get_HasValue__, v11);
    sub_B16FFC(&Method_System_Nullable_float__get_HasValue__, v12);
    byte_40F9062 = 1;
  }
  if ( (*(_QWORD *)&volume & 0xFF00000000LL) != 0 )
  {
    if ( !this )
      sub_B170D4();
    Volume_k__BackingField = volume.fields.value;
  }
  else
  {
    Volume_k__BackingField = this->fields._Volume_k__BackingField;
  }
  this->fields._Volume_k__BackingField = Volume_k__BackingField;
  if ( (*(_QWORD *)&fadeTime & 0xFF00000000LL) != 0 )
    FadeTime_k__BackingField = fadeTime.fields.value;
  else
    FadeTime_k__BackingField = this->fields._FadeTime_k__BackingField;
  this->fields._FadeTime_k__BackingField = FadeTime_k__BackingField;
  if ( !has_value )
    value = this->fields._StartTime_k__BackingField;
  this->fields._StartTime_k__BackingField = value;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._BgmName_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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