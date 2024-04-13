void __fastcall OpeningMovieEntity___ctor(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E62C6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42E62C6 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall OpeningMovieEntity__CreatePrimaryKey(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall OpeningMovieEntity__GetGroupId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E62C4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19326/*"groupId"*/, (_DWORD)method, v2, v3);
    byte_42E62C4 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19326/*"groupId"*/, 0, 0LL);
}


System_String_o *__fastcall OpeningMovieEntity__GetMoviePlayTime(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppObject *v11; // x19
  Il2CppObject *v12; // x0
  Il2CppObject *v14; // x0
  int32_t v15; // [xsp+0h] [xbp-20h] BYREF
  int32_t Seconds; // [xsp+4h] [xbp-1Ch] BYREF
  __int64 v17; // [xsp+8h] [xbp-18h] BYREF
  System_TimeSpan_o v18; // 0:x0.8
  System_TimeSpan_o v19; // 0:x0.8
  System_TimeSpan_o v20; // 0:x0.8
  System_TimeSpan_o v21; // 0:x0.8
  System_TimeSpan_o v22; // 0:x0.8

  if ( (byte_42E62C5 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_23978/*"{0}分{1}秒"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_23980/*"{0}秒"*/, v8, v9, v10);
    byte_42E62C5 = 1;
  }
  v17 = 0LL;
  v18.fields._ticks = (int64_t)&v17;
  System_TimeSpan___ctor_42304124(v18, 0, 0, this->fields.moviePlayTime, 0LL);
  v19.fields._ticks = (int64_t)&v17;
  if ( System_TimeSpan__get_Minutes(v19, 0LL) < 1 )
  {
    v22.fields._ticks = (int64_t)&v17;
    Seconds = System_TimeSpan__get_Seconds(v22, 0LL);
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
    return System_String__Format((System_String_o *)StringLiteral_23980/*"{0}秒"*/, v14, 0LL);
  }
  else
  {
    v20.fields._ticks = (int64_t)&v17;
    Seconds = System_TimeSpan__get_Minutes(v20, 0LL);
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
    v21.fields._ticks = (int64_t)&v17;
    v15 = System_TimeSpan__get_Seconds(v21, 0LL);
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    return System_String__Format_44573324((System_String_o *)StringLiteral_23978/*"{0}分{1}秒"*/, v11, v12, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x8
  int32_t v14; // w22
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  bool IsOpen; // w0

  Time = nowTime;
  if ( (byte_42E62C1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, nowTime, isMaterial, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42E62C1 = 1;
  }
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
  }
  v13 = 40LL;
  if ( isMaterial )
    v13 = 44LL;
  v14 = *(_DWORD *)((char *)&this->klass + v13);
  if ( v14 < 1 )
  {
    IsOpen = 1;
    if ( isMaterial )
      return IsOpen && Time >= this->fields.startedAt;
    return IsOpen && OpeningMovieEntity__IsEventPeriod(this, Time, (const MethodInfo *)isMaterial);
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v16);
  }
  IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, v14, 0LL, 0, 0LL);
  if ( !isMaterial )
    return IsOpen && OpeningMovieEntity__IsEventPeriod(this, Time, (const MethodInfo *)isMaterial);
  return IsOpen && Time >= this->fields.startedAt;
}


bool __fastcall OpeningMovieEntity__IsEventPeriod(
        OpeningMovieEntity_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_42E62C2 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, nowTime, (_DWORD)method, v3);
    byte_42E62C2 = 1;
  }
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
  }
  return this->fields.startedAt <= Time && Time < this->fields.endedAt;
}


bool __fastcall OpeningMovieEntity__IsRegisterMaterial(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8

  if ( (byte_42E62C3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E62C3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
    sub_B5D69C(Instance, v9);
  }
  return 1;
}