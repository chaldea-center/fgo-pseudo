void __fastcall OpeningMovieEntity___ctor(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7ED6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_int___ctor__, method);
    byte_4BC7ED6 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3246194 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall OpeningMovieEntity__CreatePrimaryKey(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall OpeningMovieEntity__GetGroupId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7ED3 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_20188/*"groupId"*/, method);
    byte_4BC7ED3 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20188/*"groupId"*/, 0, 0LL);
}


System_String_o *__fastcall OpeningMovieEntity__GetMoviePlayTime(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t moviePlayTime; // w19
  int32_t Minutes; // w19
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x19
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  int32_t v21; // [xsp+0h] [xbp-30h] BYREF
  int32_t Seconds; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v23; // [xsp+8h] [xbp-28h] BYREF
  System_TimeSpan_o v24; // 0:x0.8
  System_TimeSpan_o v25; // 0:x0.8
  System_TimeSpan_o v26; // 0:x0.8
  System_TimeSpan_o v27; // 0:x0.8

  if ( (byte_4BC7ED4 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, method);
    sub_1C1ABD4(&System_TimeSpan_TypeInfo, v3);
    sub_1C1ABD4(&StringLiteral_25543/*"{0}分{1}秒"*/, v4);
    sub_1C1ABD4(&StringLiteral_25545/*"{0}秒"*/, v5);
    byte_4BC7ED4 = 1;
  }
  v23 = 0LL;
  moviePlayTime = this->fields.moviePlayTime;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v24.fields._ticks = (int64_t)&v23;
  System_TimeSpan___ctor_63945728(v24, 0, 0, moviePlayTime, 0LL);
  v25.fields._ticks = (int64_t)&v23;
  Minutes = System_TimeSpan__get_Minutes(v25, 0LL);
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v26.fields._ticks = (int64_t)&v23;
  if ( Minutes < 1 )
  {
    Seconds = System_TimeSpan__get_Seconds(v26, 0LL);
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v17, v18, v19);
    return System_String__Format((System_String_o *)StringLiteral_25545/*"{0}秒"*/, v20, 0LL);
  }
  else
  {
    Seconds = System_TimeSpan__get_Minutes(v26, 0LL);
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v8, v9, v10);
    v27.fields._ticks = (int64_t)&v23;
    v21 = System_TimeSpan__get_Seconds(v27, 0LL);
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v12, v13, v14);
    return System_String__Format_63054740((System_String_o *)StringLiteral_25543/*"{0}分{1}秒"*/, v11, v15, 0LL);
  }
}


int32_t __fastcall OpeningMovieEntity__GetTargetTiming(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7ED5 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_24365/*"timing"*/, method);
    byte_4BC7ED5 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24365/*"timing"*/, 0, 0LL);
}


bool __fastcall OpeningMovieEntity__HasFlag(OpeningMovieEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall OpeningMovieEntity__IsEnable(
        OpeningMovieEntity_o *this,
        int64_t nowTime,
        bool isMaterial,
        const MethodInfo *method)
{
  int64_t Time; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x8
  int32_t v10; // w22
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  bool IsOpen; // w0

  Time = nowTime;
  if ( (byte_4BC7ED0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, nowTime);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BC7ED0 = 1;
  }
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
  }
  v9 = 40LL;
  if ( isMaterial )
    v9 = 44LL;
  v10 = *(_DWORD *)((char *)&this->klass + v9);
  if ( v10 < 1 )
  {
    if ( isMaterial )
      return Time >= this->fields.startedAt;
    goto LABEL_19;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1C1AE30(Instance, v12);
  }
  IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v10, 0LL, 0, 0LL);
  if ( isMaterial )
  {
    if ( !IsOpen )
      return 0;
    return Time >= this->fields.startedAt;
  }
  if ( IsOpen )
  {
LABEL_19:
    if ( OpeningMovieEntity__IsEventPeriod(this, Time, (const MethodInfo *)isMaterial) )
      return 1;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall OpeningMovieEntity__IsEnableTiming(
        OpeningMovieEntity_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  int32_t TargetTiming; // w0

  TargetTiming = OpeningMovieEntity__GetTargetTiming(this, *(const MethodInfo **)&timing);
  return TargetTiming == 0 || TargetTiming == timing;
}


bool __fastcall OpeningMovieEntity__IsEventPeriod(
        OpeningMovieEntity_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_4BC7ED1 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, nowTime);
    byte_4BC7ED1 = 1;
  }
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
  }
  return this->fields.startedAt <= Time && Time < this->fields.endedAt;
}


bool __fastcall OpeningMovieEntity__IsRegisterMaterial(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonReleaseEntity_array *Instance; // x0
  __int64 v5; // x1
  CommonReleaseEntity_o *v6; // x8

  if ( (byte_4BC7ED2 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC7ED2 = 1;
  }
  Instance = (CommonReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (CommonReleaseEntity_array *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Instance, this->fields.materialCommonReleaseId, 0LL);
  if ( !Instance )
    goto LABEL_10;
  if ( Instance->max_length == 1 )
  {
    v6 = Instance->m_Items[0];
    if ( v6 )
      return v6->fields.condType != 92;
LABEL_10:
    sub_1C1AE30(Instance, v5);
  }
  return 1;
}