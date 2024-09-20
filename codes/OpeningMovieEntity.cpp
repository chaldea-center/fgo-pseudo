void __fastcall OpeningMovieEntity___ctor(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B54E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5B54E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall OpeningMovieEntity__CreatePrimaryKey(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall OpeningMovieEntity__GetGroupId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B54C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19854/*"groupId"*/);
    byte_4A5B54C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19854/*"groupId"*/, 0, 0LL);
}


System_String_o *__fastcall OpeningMovieEntity__GetMoviePlayTime(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  int32_t moviePlayTime; // w19
  int32_t Minutes; // w19
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  Il2CppObject *v8; // x19
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  int32_t v18; // [xsp+0h] [xbp-30h] BYREF
  int32_t Seconds; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v20; // [xsp+8h] [xbp-28h] BYREF
  System_TimeSpan_o v21; // 0:x0.8
  System_TimeSpan_o v22; // 0:x0.8
  System_TimeSpan_o v23; // 0:x0.8
  System_TimeSpan_o v24; // 0:x0.8

  if ( (byte_4A5B54D & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&System_TimeSpan_TypeInfo);
    sub_1B885B0(&StringLiteral_25118/*"{0}分{1}秒"*/);
    sub_1B885B0(&StringLiteral_25120/*"{0}秒"*/);
    byte_4A5B54D = 1;
  }
  v20 = 0LL;
  moviePlayTime = this->fields.moviePlayTime;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v21.fields._ticks = (int64_t)&v20;
  System_TimeSpan___ctor_62611896(v21, 0, 0, moviePlayTime, 0LL);
  v22.fields._ticks = (int64_t)&v20;
  Minutes = System_TimeSpan__get_Minutes(v22, 0LL);
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v23.fields._ticks = (int64_t)&v20;
  if ( Minutes < 1 )
  {
    Seconds = System_TimeSpan__get_Seconds(v23, 0LL);
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v14, v15, v16);
    return System_String__Format((System_String_o *)StringLiteral_25120/*"{0}秒"*/, v17, 0LL);
  }
  else
  {
    Seconds = System_TimeSpan__get_Minutes(v23, 0LL);
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v5, v6, v7);
    v24.fields._ticks = (int64_t)&v20;
    v18 = System_TimeSpan__get_Seconds(v24, 0LL);
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v9, v10, v11);
    return System_String__Format_61721404((System_String_o *)StringLiteral_25118/*"{0}分{1}秒"*/, v8, v12, 0LL);
  }
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
  __int64 v7; // x8
  int32_t v8; // w22
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  bool IsOpen; // w0

  if ( (byte_4A5B549 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B549 = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  v7 = 40LL;
  if ( isMaterial )
    v7 = 44LL;
  v8 = *(_DWORD *)((char *)&this->klass + v7);
  if ( v8 < 1 )
  {
    if ( isMaterial )
      return nowTime >= this->fields.startedAt;
    goto LABEL_19;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v10);
  }
  IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v8, 0LL, 0, 0LL);
  if ( isMaterial )
  {
    if ( !IsOpen )
      return 0;
    return nowTime >= this->fields.startedAt;
  }
  if ( IsOpen )
  {
LABEL_19:
    if ( OpeningMovieEntity__IsEventPeriod(this, nowTime, (const MethodInfo *)isMaterial) )
      return 1;
  }
  return 0;
}


bool __fastcall OpeningMovieEntity__IsEventPeriod(
        OpeningMovieEntity_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  if ( (byte_4A5B54A & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B54A = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  return this->fields.startedAt <= nowTime && nowTime < this->fields.endedAt;
}


bool __fastcall OpeningMovieEntity__IsRegisterMaterial(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  CommonReleaseEntity_array *Instance; // x0
  __int64 v4; // x1
  CommonReleaseEntity_o *v5; // x8

  if ( (byte_4A5B54B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B54B = 1;
  }
  Instance = (CommonReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (CommonReleaseEntity_array *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Instance, this->fields.materialCommonReleaseId, 0LL);
  if ( !Instance )
    goto LABEL_10;
  if ( Instance->max_length == 1 )
  {
    v5 = Instance->m_Items[0];
    if ( v5 )
      return v5->fields.condType != 92;
LABEL_10:
    sub_1B8880C(Instance, v4);
  }
  return 1;
}