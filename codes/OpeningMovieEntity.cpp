void OpeningMovieEntity___ctor(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970E3C & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5970E3C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
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
  if ( (byte_5970E3A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20836/*"grandPVparentId"*/);
    byte_5970E3A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20836/*"grandPVparentId"*/, 0, 0);
}


int32_t OpeningMovieEntity__GetGroupId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970E34 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20853/*"groupId"*/);
    byte_5970E34 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20853/*"groupId"*/, 0, 0);
}


System_String_o *OpeningMovieEntity__GetMoviePlayTime(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  int32_t moviePlayTime; // w19
  bool v4; // cc
  __int64 v5; // x1
  int v6; // w8
  Il2CppObject *v7; // x19
  Il2CppObject *v8; // x0
  Il2CppObject *v10; // x0
  int32_t v11; // [xsp+0h] [xbp-30h] BYREF
  int32_t Seconds; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v13; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970E35 & 1) == 0 )
  {
    sub_2213A60(&System_TimeSpan_TypeInfo);
    sub_2213A60(&StringLiteral_26618/*"{0}分{1}秒"*/);
    sub_2213A60(&StringLiteral_26620/*"{0}秒"*/);
    byte_5970E35 = 1;
  }
  moviePlayTime = this->fields.moviePlayTime;
  v13 = 0;
  if ( !*(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, method);
  System_TimeSpan___ctor_77242956((System_TimeSpan_o)&v13, 0, 0, moviePlayTime, 0);
  v4 = System_TimeSpan__get_Minutes((System_TimeSpan_o)&v13, 0) < 1;
  v6 = *(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1);
  if ( v4 )
  {
    if ( !v6 )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v5);
    Seconds = System_TimeSpan__get_Seconds((System_TimeSpan_o)&v13, 0);
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &Seconds);
    return System_String__Format((System_String_o *)StringLiteral_26620/*"{0}秒"*/, v10, 0);
  }
  else
  {
    if ( !v6 )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v5);
    Seconds = System_TimeSpan__get_Minutes((System_TimeSpan_o)&v13, 0);
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &Seconds);
    v11 = System_TimeSpan__get_Seconds((System_TimeSpan_o)&v13, 0);
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v11);
    return System_String__Format_75697880((System_String_o *)StringLiteral_26618/*"{0}分{1}秒"*/, v7, v8, 0);
  }
}


int32_t OpeningMovieEntity__GetPlayedEventTutorialFlagId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970E3B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23891/*"playedFlagId"*/);
    byte_5970E3B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23891/*"playedFlagId"*/, 65, 0);
}


int32_t OpeningMovieEntity__GetTargetTiming(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970E36 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25388/*"timing"*/);
    byte_5970E36 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_25388/*"timing"*/, 0, 0);
}


int32_t OpeningMovieEntity__GetTargetWarId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970E39 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26126/*"warId"*/);
    byte_5970E39 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_26126/*"warId"*/, 0, 0);
}


System_String_o *OpeningMovieEntity__GetTransitionParam(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970E37 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17412/*"afterTransitionParam"*/);
    byte_5970E37 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_17412/*"afterTransitionParam"*/, 0, 0);
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
  int64_t Time; // x21
  __int64 v7; // x8
  int32_t v8; // w22
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  bool IsOpen; // w0

  Time = nowTime;
  if ( (byte_5970E31 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970E31 = 1;
  }
  if ( !Time )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0);
  }
  v7 = 40;
  if ( isMaterial )
    v7 = 44;
  v8 = *(_DWORD *)((char *)&this->klass + v7);
  if ( v8 < 1 )
  {
    if ( isMaterial )
      return Time >= this->fields.startedAt;
    goto LABEL_19;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v10);
  }
  IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v8, 0, 0, 0);
  if ( isMaterial )
  {
    if ( !IsOpen )
      return 0;
    return Time >= this->fields.startedAt;
  }
  if ( IsOpen )
  {
LABEL_19:
    if ( OpeningMovieEntity__IsValidPeriod(this, Time, (const MethodInfo *)isMaterial) )
      return 1;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool OpeningMovieEntity__IsEnableTiming(
        OpeningMovieEntity_o *this,
        int32_t timing,
        bool timingOnly,
        const MethodInfo *method)
{
  int32_t TargetTiming; // w0

  TargetTiming = OpeningMovieEntity__GetTargetTiming(this, *(const MethodInfo **)&timing);
  if ( TargetTiming == timing )
    return 1;
  else
    return (TargetTiming == 0) & ~timingOnly;
}


bool OpeningMovieEntity__IsGrand(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  int32_t IntValue; // w20
  const MethodInfo *v4; // x1
  int32_t TargetTiming; // w0

  if ( (byte_5970E38 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21938/*"isGrand"*/);
    byte_5970E38 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21938/*"isGrand"*/, 0, 0);
  TargetTiming = OpeningMovieEntity__GetTargetTiming(this, v4);
  return IntValue > 0 || TargetTiming == 6;
}


bool OpeningMovieEntity__IsRegisterMaterial(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  CommonReleaseEntity_array *Instance; // x0
  __int64 v4; // x1
  CommonReleaseEntity_o *v5; // x8

  if ( (byte_5970E33 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970E33 = 1;
  }
  Instance = (CommonReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (CommonReleaseEntity_array *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
    sub_2213CDC(Instance, v4);
  }
  return 1;
}


bool OpeningMovieEntity__IsValidPeriod(OpeningMovieEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_5970E32 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970E32 = 1;
  }
  if ( !Time )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0);
  }
  return this->fields.startedAt <= Time && Time < this->fields.endedAt;
}