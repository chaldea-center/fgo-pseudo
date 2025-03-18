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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  float value; // s0
  BgmManager_c *v20; // x0

  if ( (byte_4C2156B & 1) == 0 )
  {
    sub_1C3B764(&BgmManager_TypeInfo, bgmName);
    sub_1C3B764(&Method_System_Nullable_float__GetValueOrDefault__, v11);
    sub_1C3B764(&Method_System_Nullable_float__get_HasValue__, v12);
    byte_4C2156B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._BgmName_k__BackingField = bgmName;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)bgmName, v13, v14, v15, v16, v17, v18);
  if ( volume.fields.hasValue )
  {
    value = volume.fields.value;
  }
  else
  {
    v20 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
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
  if ( (byte_4C2156C & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Nullable_float__GetValueOrDefault__, volume);
    sub_1C3B764(&Method_System_Nullable_long__GetValueOrDefault__, v10);
    sub_1C3B764(&Method_System_Nullable_long__get_HasValue__, v11);
    this = (BgmPlayArgs_o *)sub_1C3B764(&Method_System_Nullable_float__get_HasValue__, v12);
    byte_4C2156C = 1;
  }
  if ( volume.fields.hasValue )
  {
    if ( !v9 )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C3B9C0)(this, volume);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._BgmName_k__BackingField = value;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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