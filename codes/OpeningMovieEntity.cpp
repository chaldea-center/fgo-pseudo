void OpeningMovieEntity___ctor(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37F4F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_int___ctor__);
    byte_4C37F4F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3394354 *)Method_DataEntityBase_int___ctor__);
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
  if ( (byte_4C37F4E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19894/*"grandPVparentId"*/);
    byte_4C37F4E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19894/*"grandPVparentId"*/, 0, 0);
}


int32_t OpeningMovieEntity__GetGroupId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37F48 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19909/*"groupId"*/);
    byte_4C37F48 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19909/*"groupId"*/, 0, 0);
}


System_String_o *OpeningMovieEntity__GetMoviePlayTime(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  int32_t moviePlayTime; // w19
  System_TimeSpan_o v4; // x0
  System_TimeSpan_o v5; // x0
  int32_t Minutes; // w19
  System_TimeSpan_o v7; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  Il2CppObject *v14; // x19
  System_TimeSpan_o v15; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  Il2CppObject *v22; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  Il2CppObject *v30; // x0
  int32_t v31; // [xsp+0h] [xbp-30h] BYREF
  int32_t Seconds; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v33; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C37F49 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&System_TimeSpan_TypeInfo);
    sub_1C32C20(&StringLiteral_25212/*"{0}分{1}秒"*/);
    sub_1C32C20(&StringLiteral_25214/*"{0}秒"*/);
    byte_4C37F49 = 1;
  }
  v33 = 0;
  moviePlayTime = this->fields.moviePlayTime;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v4.fields._ticks = (int64_t)&v33;
  System_TimeSpan___ctor_65130472(v4, 0, 0, moviePlayTime, 0);
  v5.fields._ticks = (int64_t)&v33;
  Minutes = System_TimeSpan__get_Minutes(v5, 0);
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v7.fields._ticks = (int64_t)&v33;
  if ( Minutes < 1 )
  {
    Seconds = System_TimeSpan__get_Seconds(v7, 0);
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v24, v25, v26, v27, v28, v29);
    return System_String__Format((System_String_o *)StringLiteral_25214/*"{0}秒"*/, v30, 0);
  }
  else
  {
    Seconds = System_TimeSpan__get_Minutes(v7, 0);
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v8, v9, v10, v11, v12, v13);
    v15.fields._ticks = (int64_t)&v33;
    v31 = System_TimeSpan__get_Seconds(v15, 0);
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v16, v17, v18, v19, v20, v21);
    return System_String__Format_63559836((System_String_o *)StringLiteral_25212/*"{0}分{1}秒"*/, v14, v22, 0);
  }
}


int32_t OpeningMovieEntity__GetTargetTiming(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37F4A & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24089/*"timing"*/);
    byte_4C37F4A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24089/*"timing"*/, 0, 0);
}


int32_t OpeningMovieEntity__GetTargetWarId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37F4D & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_24749/*"warId"*/);
    byte_4C37F4D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24749/*"warId"*/, 0, 0);
}


System_String_o *OpeningMovieEntity__GetTransitionParam(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37F4B & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_16714/*"afterTransitionParam"*/);
    byte_4C37F4B = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_16714/*"afterTransitionParam"*/, 0, 0);
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
  bool IsOpen; // w0

  if ( (byte_4C37F45 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37F45 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
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
  if ( (byte_4C37F4C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_20921/*"isGrand"*/);
    byte_4C37F4C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20921/*"isGrand"*/, 0, 0) > 0;
}


bool OpeningMovieEntity__IsRegisterMaterial(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  CommonReleaseEntity_array *Instance; // x0
  CommonReleaseEntity_o *v4; // x8

  if ( (byte_4C37F47 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37F47 = 1;
  }
  Instance = (CommonReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (CommonReleaseEntity_array *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Instance, this->fields.materialCommonReleaseId, 0);
  if ( !Instance )
    goto LABEL_10;
  if ( LODWORD(Instance->max_length) == 1 )
  {
    v4 = Instance->m_Items[0];
    if ( v4 )
      return v4->fields.condType != 92;
LABEL_10:
    sub_1C32E7C(Instance);
  }
  return 1;
}


bool OpeningMovieEntity__IsValidPeriod(OpeningMovieEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  if ( (byte_4C37F46 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C37F46 = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  return this->fields.startedAt <= nowTime && nowTime < this->fields.endedAt;
}