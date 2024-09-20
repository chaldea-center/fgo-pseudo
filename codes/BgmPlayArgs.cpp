void __fastcall BgmPlayArgs___ctor(
        BgmPlayArgs_o *this,
        System_String_o *bgmName,
        System_Nullable_float__o volume,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  float value; // s0
  BgmManager_c *v14; // x0

  if ( (byte_4A5A7B3 & 1) == 0 )
  {
    sub_1B885B0(&BgmManager_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_float__get_HasValue__);
    byte_4A5A7B3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._BgmName_k__BackingField = bgmName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)bgmName, v11, v12);
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
  float Volume_k__BackingField; // s0
  float FadeTime_k__BackingField; // s0

  value = startTime.fields.value;
  hasValue = startTime.fields.hasValue;
  v9 = this;
  if ( (byte_4A5A7B4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_long__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_long__get_HasValue__);
    this = (BgmPlayArgs_o *)sub_1B885B0(&Method_System_Nullable_float__get_HasValue__);
    byte_4A5A7B4 = 1;
  }
  if ( volume.fields.hasValue )
  {
    if ( !v9 )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B8880C)(this, volume);
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
  int32_t v3; // w3

  this->fields._BgmName_k__BackingField = value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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