void __fastcall OpeningMovieEntity___ctor(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC7F0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_int___ctor__, method);
    byte_49FC7F0 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D3CA4 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall OpeningMovieEntity__CreatePrimaryKey(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall OpeningMovieEntity__GetGroupId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC7EE & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19775/*"groupId"*/, method);
    byte_49FC7EE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19775/*"groupId"*/, 0, 0LL);
}


System_String_o *__fastcall OpeningMovieEntity__GetMoviePlayTime(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t moviePlayTime; // w19
  int32_t Minutes; // w19
  Il2CppObject *v8; // x19
  Il2CppObject *v9; // x0
  Il2CppObject *v11; // x0
  int32_t v12; // [xsp+0h] [xbp-30h] BYREF
  int32_t Seconds; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v14; // [xsp+8h] [xbp-28h] BYREF
  System_TimeSpan_o v15; // 0:x0.8
  System_TimeSpan_o v16; // 0:x0.8
  System_TimeSpan_o v17; // 0:x0.8
  System_TimeSpan_o v18; // 0:x0.8

  if ( (byte_49FC7EF & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&System_TimeSpan_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_25017/*"{0}分{1}秒"*/, v4);
    sub_1B640C8(&StringLiteral_25019/*"{0}秒"*/, v5);
    byte_49FC7EF = 1;
  }
  v14 = 0LL;
  moviePlayTime = this->fields.moviePlayTime;
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v15.fields._ticks = (int64_t)&v14;
  System_TimeSpan___ctor_62280252(v15, 0, 0, moviePlayTime, 0LL);
  v16.fields._ticks = (int64_t)&v14;
  Minutes = System_TimeSpan__get_Minutes(v16, 0LL);
  if ( !System_TimeSpan_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo);
  v17.fields._ticks = (int64_t)&v14;
  if ( Minutes < 1 )
  {
    Seconds = System_TimeSpan__get_Seconds(v17, 0LL);
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
    return System_String__Format((System_String_o *)StringLiteral_25019/*"{0}秒"*/, v11, 0LL);
  }
  else
  {
    Seconds = System_TimeSpan__get_Minutes(v17, 0LL);
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
    v18.fields._ticks = (int64_t)&v14;
    v12 = System_TimeSpan__get_Seconds(v18, 0LL);
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
    return System_String__Format_61389768((System_String_o *)StringLiteral_25017/*"{0}分{1}秒"*/, v8, v9, 0LL);
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
  int64_t Time; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x8
  int32_t v10; // w22
  Il2CppObject *Instance; // x0
  bool IsOpen; // w0

  Time = nowTime;
  if ( (byte_49FC7EB & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, nowTime);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FC7EB = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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


bool __fastcall OpeningMovieEntity__IsEventPeriod(
        OpeningMovieEntity_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_49FC7EC & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, nowTime);
    byte_49FC7EC = 1;
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
  CommonReleaseEntity_o *v5; // x8

  if ( (byte_49FC7ED & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FC7ED = 1;
  }
  Instance = (CommonReleaseEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (CommonReleaseEntity_array *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
    sub_1B64324(Instance);
  }
  return 1;
}