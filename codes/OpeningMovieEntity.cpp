void __fastcall OpeningMovieEntity___ctor(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438A26A & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438A26A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall OpeningMovieEntity__CreatePrimaryKey(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall OpeningMovieEntity__GetGroupId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438A268 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19473/*"groupId"*/);
    byte_438A268 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19473/*"groupId"*/, 0, 0LL);
}


System_String_o *__fastcall OpeningMovieEntity__GetMoviePlayTime(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x2
  Il2CppObject *v4; // x19
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  __int64 v8; // x2
  Il2CppObject *v9; // x0
  int32_t v10; // [xsp+0h] [xbp-20h] BYREF
  int32_t Seconds; // [xsp+4h] [xbp-1Ch] BYREF
  __int64 v12; // [xsp+8h] [xbp-18h] BYREF
  System_TimeSpan_o v13; // 0:x0.8
  System_TimeSpan_o v14; // 0:x0.8
  System_TimeSpan_o v15; // 0:x0.8
  System_TimeSpan_o v16; // 0:x0.8
  System_TimeSpan_o v17; // 0:x0.8

  if ( (byte_438A269 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_24154/*"{0}分{1}秒"*/);
    sub_B775C4(&StringLiteral_24156/*"{0}秒"*/);
    byte_438A269 = 1;
  }
  v12 = 0LL;
  v13.fields._ticks = (int64_t)&v12;
  System_TimeSpan___ctor_42295408(v13, 0, 0, this->fields.moviePlayTime, 0LL);
  v14.fields._ticks = (int64_t)&v12;
  if ( System_TimeSpan__get_Minutes(v14, 0LL) < 1 )
  {
    v17.fields._ticks = (int64_t)&v12;
    Seconds = System_TimeSpan__get_Seconds(v17, 0LL);
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v8);
    return System_String__Format((System_String_o *)StringLiteral_24156/*"{0}秒"*/, v9, 0LL);
  }
  else
  {
    v15.fields._ticks = (int64_t)&v12;
    Seconds = System_TimeSpan__get_Minutes(v15, 0LL);
    v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds, v3);
    v16.fields._ticks = (int64_t)&v12;
    v10 = System_TimeSpan__get_Seconds(v16, 0LL);
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, v5);
    return System_String__Format_44897472((System_String_o *)StringLiteral_24154/*"{0}分{1}秒"*/, v4, v6, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  bool IsOpen; // w0

  if ( (byte_438A265 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A265 = 1;
  }
  if ( !nowTime )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    nowTime = NetworkManager__getTime(0LL);
  }
  v7 = 40LL;
  if ( isMaterial )
    v7 = 44LL;
  v8 = *(_DWORD *)((char *)&this->klass + v7);
  if ( v8 < 1 )
  {
    IsOpen = 1;
    if ( isMaterial )
      return IsOpen && nowTime >= this->fields.startedAt;
    return IsOpen && OpeningMovieEntity__IsEventPeriod(this, nowTime, (const MethodInfo *)isMaterial);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v10);
  }
  IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v8, 0LL, 0, 0LL);
  if ( !isMaterial )
    return IsOpen && OpeningMovieEntity__IsEventPeriod(this, nowTime, (const MethodInfo *)isMaterial);
  return IsOpen && nowTime >= this->fields.startedAt;
}


bool __fastcall OpeningMovieEntity__IsEventPeriod(
        OpeningMovieEntity_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  if ( (byte_438A266 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438A266 = 1;
  }
  if ( !nowTime )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    nowTime = NetworkManager__getTime(0LL);
  }
  return this->fields.startedAt <= nowTime && nowTime < this->fields.endedAt;
}


bool __fastcall OpeningMovieEntity__IsRegisterMaterial(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8

  if ( (byte_438A267 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A267 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)CommonReleaseMaster__getList(
                                (CommonReleaseMaster_o *)Instance,
                                this->fields.materialCommonReleaseId,
                                0LL);
  if ( !Instance )
    goto LABEL_10;
  if ( LODWORD(Instance->fields.datalist) == 1 )
  {
    lookup = Instance->fields.lookup;
    if ( lookup )
      return HIDWORD(lookup->fields.entries) != 92;
LABEL_10:
    sub_B7769C(Instance, v4);
  }
  return 1;
}