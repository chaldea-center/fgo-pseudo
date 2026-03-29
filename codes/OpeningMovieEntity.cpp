void OpeningMovieEntity___ctor(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30F8B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D30F8B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
}


int32_t OpeningMovieEntity__CreatePrimaryKey(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t OpeningMovieEntity__GetGrandPvEventTutorialFlag(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  return 65;
}


int32_t OpeningMovieEntity__GetGrandPvParentId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30F8A & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_20108/*"grandPVparentId"*/);
    byte_4D30F8A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20108/*"grandPVparentId"*/, 0, 0);
}


int32_t OpeningMovieEntity__GetGroupId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30F84 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_20125/*"groupId"*/);
    byte_4D30F84 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20125/*"groupId"*/, 0, 0);
}


System_String_o *OpeningMovieEntity__GetMoviePlayTime(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  int32_t moviePlayTime; // w19
  int32_t Minutes; // w19
  Il2CppObject *v5; // x19
  Il2CppObject *v6; // x0
  Il2CppObject *v8; // x0
  int32_t v9; // [xsp+0h] [xbp-30h] BYREF
  int32_t Seconds; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D30F85 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&System_TimeSpan_TypeInfo);
    sub_1C93AD4(&StringLiteral_25543/*"{0}分{1}秒"*/);
    sub_1C93AD4(&StringLiteral_25545/*"{0}秒"*/);
    byte_4D30F85 = 1;
  }
  v11 = 0;
  moviePlayTime = this->fields.moviePlayTime;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  System_TimeSpan___ctor_66036040((System_TimeSpan_o)&v11, 0, 0, moviePlayTime, 0);
  Minutes = System_TimeSpan__get_Minutes((System_TimeSpan_o)&v11, 0);
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  if ( Minutes < 1 )
  {
    Seconds = System_TimeSpan__get_Seconds((System_TimeSpan_o)&v11, 0);
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
    return System_String__Format((System_String_o *)StringLiteral_25545/*"{0}秒"*/, v8, 0);
  }
  else
  {
    Seconds = System_TimeSpan__get_Minutes((System_TimeSpan_o)&v11, 0);
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
    v9 = System_TimeSpan__get_Seconds((System_TimeSpan_o)&v11, 0);
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
    return System_String__Format_64467032((System_String_o *)StringLiteral_25543/*"{0}分{1}秒"*/, v5, v6, 0);
  }
}


int32_t OpeningMovieEntity__GetTargetTiming(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30F86 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_24398/*"timing"*/);
    byte_4D30F86 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24398/*"timing"*/, 0, 0);
}


int32_t OpeningMovieEntity__GetTargetWarId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30F89 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_25076/*"warId"*/);
    byte_4D30F89 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_25076/*"warId"*/, 0, 0);
}


System_String_o *OpeningMovieEntity__GetTransitionParam(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30F87 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16836/*"afterTransitionParam"*/);
    byte_4D30F87 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_16836/*"afterTransitionParam"*/, 0, 0);
}


bool OpeningMovieEntity__HasFlag(OpeningMovieEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool OpeningMovieEntity__IsEnable(
        OpeningMovieEntity_o *this,
        int64_t nowTime,
        bool isMaterial,
        const MethodInfo *method)
{
  __int64 v7; // x8
  int32_t v8; // w22
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  bool IsOpen; // w0

  if ( (byte_4D30F81 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30F81 = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  v7 = 40;
  if ( isMaterial )
    v7 = 44;
  v8 = *(_DWORD *)((char *)&this->klass + v7);
  if ( v8 < 1 )
  {
    if ( isMaterial )
      return nowTime >= this->fields.startedAt;
    goto LABEL_19;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v10);
  }
  IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v8, 0, 0, 0);
  if ( isMaterial )
  {
    if ( !IsOpen )
      return 0;
    return nowTime >= this->fields.startedAt;
  }
  if ( IsOpen )
  {
LABEL_19:
    if ( OpeningMovieEntity__IsValidPeriod(this, nowTime, (const MethodInfo *)isMaterial) )
      return 1;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool OpeningMovieEntity__IsEnableTiming(OpeningMovieEntity_o *this, int32_t timing, const MethodInfo *method)
{
  int32_t TargetTiming; // w0

  TargetTiming = OpeningMovieEntity__GetTargetTiming(this, *(const MethodInfo **)&timing);
  return TargetTiming == 0 || TargetTiming == timing;
}


bool OpeningMovieEntity__IsGrand(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  int32_t IntValue; // w20
  const MethodInfo *v4; // x1

  if ( (byte_4D30F88 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_21163/*"isGrand"*/);
    byte_4D30F88 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21163/*"isGrand"*/, 0, 0);
  return (IntValue > 0) | (OpeningMovieEntity__GetTargetTiming(this, v4) == 6);
}


bool OpeningMovieEntity__IsRegisterMaterial(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  CommonReleaseEntity_array *Instance; // x0
  __int64 v4; // x1
  CommonReleaseEntity_o *v5; // x8

  if ( (byte_4D30F83 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30F83 = 1;
  }
  Instance = (CommonReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (CommonReleaseEntity_array *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Instance, this->fields.materialCommonReleaseId, 0);
  if ( !Instance )
    goto LABEL_10;
  if ( LODWORD(Instance->max_length) == 1 )
  {
    v5 = Instance->m_Items[0];
    if ( v5 )
      return v5->fields.condType != 92;
LABEL_10:
    sub_1C93D2C(Instance, v4);
  }
  return 1;
}


bool OpeningMovieEntity__IsValidPeriod(OpeningMovieEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  if ( (byte_4D30F82 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D30F82 = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  return this->fields.startedAt <= nowTime && nowTime < this->fields.endedAt;
}