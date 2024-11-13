void __fastcall OpeningMovieEntity___ctor(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B165FA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B165FA = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall OpeningMovieEntity__CreatePrimaryKey(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall OpeningMovieEntity__GetGroupId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B165F7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20062/*"groupId"*/, method, v2);
    byte_4B165F7 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20062/*"groupId"*/, 0, 0LL);
}


System_String_o *__fastcall OpeningMovieEntity__GetMoviePlayTime(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t moviePlayTime; // w19
  __int64 v11; // x1
  int32_t Minutes; // w19
  Il2CppObject *v13; // x19
  Il2CppObject *v14; // x0
  Il2CppObject *v16; // x0
  int32_t v17; // [xsp+0h] [xbp-30h] BYREF
  int32_t Seconds; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v19; // [xsp+8h] [xbp-28h] BYREF
  System_TimeSpan_o v20; // 0:x0.8
  System_TimeSpan_o v21; // 0:x0.8
  System_TimeSpan_o v22; // 0:x0.8
  System_TimeSpan_o v23; // 0:x0.8

  if ( (byte_4B165F8 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&System_TimeSpan_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_25373/*"{0}分{1}秒"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_25375/*"{0}秒"*/, v8, v9);
    byte_4B165F8 = 1;
  }
  v19 = 0LL;
  moviePlayTime = this->fields.moviePlayTime;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, method);
  v20.fields._ticks = (int64_t)&v19;
  System_TimeSpan___ctor_63306412(v20, 0, 0, moviePlayTime, 0LL);
  v21.fields._ticks = (int64_t)&v19;
  Minutes = System_TimeSpan__get_Minutes(v21, 0LL);
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v11);
  v22.fields._ticks = (int64_t)&v19;
  if ( Minutes < 1 )
  {
    Seconds = System_TimeSpan__get_Seconds(v22, 0LL);
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
    return System_String__Format((System_String_o *)StringLiteral_25375/*"{0}秒"*/, v16, 0LL);
  }
  else
  {
    Seconds = System_TimeSpan__get_Minutes(v22, 0LL);
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
    v23.fields._ticks = (int64_t)&v19;
    v17 = System_TimeSpan__get_Seconds(v23, 0LL);
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    return System_String__Format_62415592((System_String_o *)StringLiteral_25373/*"{0}分{1}秒"*/, v13, v14, 0LL);
  }
}


int32_t __fastcall OpeningMovieEntity__GetTargetTiming(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B165F9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24203/*"timing"*/, method, v2);
    byte_4B165F9 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24203/*"timing"*/, 0, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x8
  int32_t v12; // w22
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  bool IsOpen; // w0

  Time = nowTime;
  if ( (byte_4B165F4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, nowTime, isMaterial);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B165F4 = 1;
  }
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0LL);
  }
  v11 = 40LL;
  if ( isMaterial )
    v11 = 44LL;
  v12 = *(_DWORD *)((char *)&this->klass + v11);
  if ( v12 < 1 )
  {
    if ( isMaterial )
      return Time >= this->fields.startedAt;
    goto LABEL_19;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v14);
  }
  IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v12, 0LL, 0, 0LL);
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
  if ( (byte_4B165F5 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, nowTime, method);
    byte_4B165F5 = 1;
  }
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0LL);
  }
  return this->fields.startedAt <= Time && Time < this->fields.endedAt;
}


bool __fastcall OpeningMovieEntity__IsRegisterMaterial(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CommonReleaseEntity_array *Instance; // x0
  __int64 v7; // x1
  CommonReleaseEntity_o *v8; // x8

  if ( (byte_4B165F6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B165F6 = 1;
  }
  Instance = (CommonReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (CommonReleaseEntity_array *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = CommonReleaseMaster__getList((CommonReleaseMaster_o *)Instance, this->fields.materialCommonReleaseId, 0LL);
  if ( !Instance )
    goto LABEL_10;
  if ( Instance->max_length == 1 )
  {
    v8 = Instance->m_Items[0];
    if ( v8 )
      return v8->fields.condType != 92;
LABEL_10:
    sub_1BCAA3C(Instance, v7);
  }
  return 1;
}