void OpeningMovieEntity___ctor(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CE07 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2CE07 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
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
  if ( (byte_4D2CE06 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20059/*"grandPVparentId"*/);
    byte_4D2CE06 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20059/*"grandPVparentId"*/, 0, 0);
}


int32_t OpeningMovieEntity__GetGroupId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CE00 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20076/*"groupId"*/);
    byte_4D2CE00 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20076/*"groupId"*/, 0, 0);
}


System_String_o *OpeningMovieEntity__GetMoviePlayTime(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  int32_t moviePlayTime; // w19
  System_TimeSpan_o v4; // x0
  System_TimeSpan_o v5; // x0
  int32_t Minutes; // w19
  System_TimeSpan_o v7; // x0
  Il2CppObject *v8; // x19
  System_TimeSpan_o v9; // x0
  Il2CppObject *v10; // x0
  Il2CppObject *v12; // x0
  int32_t v13; // [xsp+0h] [xbp-30h] BYREF
  int32_t Seconds; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v15; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2CE01 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&System_TimeSpan_TypeInfo);
    sub_1C94098(&StringLiteral_25470/*"{0}分{1}秒"*/);
    sub_1C94098(&StringLiteral_25472/*"{0}秒"*/);
    byte_4D2CE01 = 1;
  }
  v15 = 0;
  moviePlayTime = this->fields.moviePlayTime;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v4.fields._ticks = (int64_t)&v15;
  System_TimeSpan___ctor_66028060(v4, 0, 0, moviePlayTime, 0);
  v5.fields._ticks = (int64_t)&v15;
  Minutes = System_TimeSpan__get_Minutes(v5, 0);
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v7.fields._ticks = (int64_t)&v15;
  if ( Minutes < 1 )
  {
    Seconds = System_TimeSpan__get_Seconds(v7, 0);
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
    return System_String__Format((System_String_o *)StringLiteral_25472/*"{0}秒"*/, v12, 0);
  }
  else
  {
    Seconds = System_TimeSpan__get_Minutes(v7, 0);
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
    v9.fields._ticks = (int64_t)&v15;
    v13 = System_TimeSpan__get_Seconds(v9, 0);
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
    return System_String__Format_64459052((System_String_o *)StringLiteral_25470/*"{0}分{1}秒"*/, v8, v10, 0);
  }
}


int32_t OpeningMovieEntity__GetTargetTiming(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CE02 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24332/*"timing"*/);
    byte_4D2CE02 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24332/*"timing"*/, 0, 0);
}


int32_t OpeningMovieEntity__GetTargetWarId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CE05 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_25006/*"warId"*/);
    byte_4D2CE05 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_25006/*"warId"*/, 0, 0);
}


System_String_o *OpeningMovieEntity__GetTransitionParam(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CE03 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16792/*"afterTransitionParam"*/);
    byte_4D2CE03 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_16792/*"afterTransitionParam"*/, 0, 0);
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

  if ( (byte_4D2CDFD & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CDFD = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v10);
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

  if ( (byte_4D2CE04 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_21105/*"isGrand"*/);
    byte_4D2CE04 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21105/*"isGrand"*/, 0, 0);
  return (IntValue > 0) | (OpeningMovieEntity__GetTargetTiming(this, v4) == 6);
}


bool OpeningMovieEntity__IsRegisterMaterial(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  CommonReleaseEntity_array *Instance; // x0
  __int64 v4; // x1
  CommonReleaseEntity_o *v5; // x8

  if ( (byte_4D2CDFF & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CDFF = 1;
  }
  Instance = (CommonReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (CommonReleaseEntity_array *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
    sub_1C942F0(Instance, v4);
  }
  return 1;
}


bool OpeningMovieEntity__IsValidPeriod(OpeningMovieEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  if ( (byte_4D2CDFE & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2CDFE = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  return this->fields.startedAt <= nowTime && nowTime < this->fields.endedAt;
}