void OpeningMovieEntity___ctor(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938C7D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938C7D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
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
  if ( (byte_5938C7B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20795/*"grandPVparentId"*/);
    byte_5938C7B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20795/*"grandPVparentId"*/, 0, 0);
}


int32_t OpeningMovieEntity__GetGroupId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938C75 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20812/*"groupId"*/);
    byte_5938C75 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20812/*"groupId"*/, 0, 0);
}


System_String_o *OpeningMovieEntity__GetMoviePlayTime(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  int32_t moviePlayTime; // w19
  System_TimeSpan_o v4; // x0
  System_TimeSpan_o v5; // x0
  bool v6; // cc
  __int64 v7; // x1
  int v8; // w8
  System_TimeSpan_o v9; // x0
  Il2CppObject *v10; // x19
  System_TimeSpan_o v11; // x0
  Il2CppObject *v12; // x0
  System_TimeSpan_o v14; // x0
  Il2CppObject *v15; // x0
  int32_t v16; // [xsp+0h] [xbp-30h] BYREF
  int32_t Seconds; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v18; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938C76 & 1) == 0 )
  {
    sub_21FFC50(&System_TimeSpan_TypeInfo);
    sub_21FFC50(&StringLiteral_26566/*"{0}分{1}秒"*/);
    sub_21FFC50(&StringLiteral_26568/*"{0}秒"*/);
    byte_5938C76 = 1;
  }
  moviePlayTime = this->fields.moviePlayTime;
  v18 = 0;
  if ( !*(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, method);
  v4.fields._ticks = (int64_t)&v18;
  System_TimeSpan___ctor_77029652(v4, 0, 0, moviePlayTime, 0);
  v5.fields._ticks = (int64_t)&v18;
  v6 = System_TimeSpan__get_Minutes(v5, 0) < 1;
  v8 = *(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1);
  if ( v6 )
  {
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v7);
    v14.fields._ticks = (int64_t)&v18;
    Seconds = System_TimeSpan__get_Seconds(v14, 0);
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &Seconds);
    return System_String__Format((System_String_o *)StringLiteral_26568/*"{0}秒"*/, v15, 0);
  }
  else
  {
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v7);
    v9.fields._ticks = (int64_t)&v18;
    Seconds = System_TimeSpan__get_Minutes(v9, 0);
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &Seconds);
    v11.fields._ticks = (int64_t)&v18;
    v16 = System_TimeSpan__get_Seconds(v11, 0);
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v16);
    return System_String__Format_75484576((System_String_o *)StringLiteral_26566/*"{0}分{1}秒"*/, v10, v12, 0);
  }
}


int32_t OpeningMovieEntity__GetPlayedEventTutorialFlagId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938C7C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23844/*"playedFlagId"*/);
    byte_5938C7C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23844/*"playedFlagId"*/, 65, 0);
}


int32_t OpeningMovieEntity__GetTargetTiming(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938C77 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25340/*"timing"*/);
    byte_5938C77 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_25340/*"timing"*/, 0, 0);
}


int32_t OpeningMovieEntity__GetTargetWarId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938C7A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26076/*"warId"*/);
    byte_5938C7A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_26076/*"warId"*/, 0, 0);
}


System_String_o *OpeningMovieEntity__GetTransitionParam(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938C78 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17376/*"afterTransitionParam"*/);
    byte_5938C78 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_17376/*"afterTransitionParam"*/, 0, 0);
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
  if ( (byte_5938C72 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938C72 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v10);
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

  if ( (byte_5938C79 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21896/*"isGrand"*/);
    byte_5938C79 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21896/*"isGrand"*/, 0, 0);
  TargetTiming = OpeningMovieEntity__GetTargetTiming(this, v4);
  return IntValue > 0 || TargetTiming == 6;
}


bool OpeningMovieEntity__IsRegisterMaterial(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  CommonReleaseEntity_array *Instance; // x0
  __int64 v4; // x1
  CommonReleaseEntity_o *v5; // x8

  if ( (byte_5938C74 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5938C74 = 1;
  }
  Instance = (CommonReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (CommonReleaseEntity_array *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
    sub_21FFECC(Instance, v4);
  }
  return 1;
}


bool OpeningMovieEntity__IsValidPeriod(OpeningMovieEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_5938C73 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5938C73 = 1;
  }
  if ( !Time )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0);
  }
  return this->fields.startedAt <= Time && Time < this->fields.endedAt;
}