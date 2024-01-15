void __fastcall OpeningMovieEntity___ctor(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F7F5C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40F7F5C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall OpeningMovieEntity__CreatePrimaryKey(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall OpeningMovieEntity__GetGroupId(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F7F5A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19013/*"groupId"*/, method);
    byte_40F7F5A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19013/*"groupId"*/, 0, 0LL);
}


System_String_o *__fastcall OpeningMovieEntity__GetMoviePlayTime(OpeningMovieEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  Il2CppObject *v6; // x0
  Il2CppObject *v8; // x0
  int32_t v9; // [xsp+0h] [xbp-20h] BYREF
  int32_t Seconds; // [xsp+4h] [xbp-1Ch] BYREF
  __int64 v11; // [xsp+8h] [xbp-18h] BYREF
  System_TimeSpan_o v12; // 0:x0.8
  System_TimeSpan_o v13; // 0:x0.8
  System_TimeSpan_o v14; // 0:x0.8
  System_TimeSpan_o v15; // 0:x0.8
  System_TimeSpan_o v16; // 0:x0.8

  if ( (byte_40F7F5B & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_23572/*"{0}分{1}秒"*/, v3);
    sub_B16FFC(&StringLiteral_23574/*"{0}秒"*/, v4);
    byte_40F7F5B = 1;
  }
  v11 = 0LL;
  v12.fields._ticks = (int64_t)&v11;
  System_TimeSpan___ctor_41331124(v12, 0, 0, this->fields.moviePlayTime, 0LL);
  v13.fields._ticks = (int64_t)&v11;
  if ( System_TimeSpan__get_Minutes(v13, 0LL) < 1 )
  {
    v16.fields._ticks = (int64_t)&v11;
    Seconds = System_TimeSpan__get_Seconds(v16, 0LL);
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
    return System_String__Format((System_String_o *)StringLiteral_23574/*"{0}秒"*/, v8, 0LL);
  }
  else
  {
    v14.fields._ticks = (int64_t)&v11;
    Seconds = System_TimeSpan__get_Minutes(v14, 0LL);
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Seconds);
    v15.fields._ticks = (int64_t)&v11;
    v9 = System_TimeSpan__get_Seconds(v15, 0LL);
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
    return System_String__Format_43739268((System_String_o *)StringLiteral_23572/*"{0}分{1}秒"*/, v5, v6, 0LL);
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
  WebViewManager_o *Instance; // x0
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  bool IsOpen; // w0

  Time = nowTime;
  if ( (byte_40F7F57 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, nowTime);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F7F57 = 1;
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
  v9 = 40LL;
  if ( isMaterial )
    v9 = 44LL;
  v10 = *(_DWORD *)((char *)&this->klass + v9);
  if ( v10 < 1 )
  {
    IsOpen = 1;
    if ( isMaterial )
      return IsOpen && Time >= this->fields.startedAt;
    return IsOpen && OpeningMovieEntity__IsEventPeriod(this, Time, (const MethodInfo *)isMaterial);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonReleaseMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  IsOpen = CommonReleaseMaster__IsOpen(MasterData_WarQuestSelectionMaster, v10, 0LL, 0, 0LL);
  if ( !isMaterial )
    return IsOpen && OpeningMovieEntity__IsEventPeriod(this, Time, (const MethodInfo *)isMaterial);
  return IsOpen && Time >= this->fields.startedAt;
}


bool __fastcall OpeningMovieEntity__IsEventPeriod(
        OpeningMovieEntity_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_40F7F58 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, nowTime);
    byte_40F7F58 = 1;
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
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  CommonReleaseEntity_array *List; // x0
  CommonReleaseEntity_o *v7; // x8

  if ( (byte_40F7F59 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40F7F59 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  List = CommonReleaseMaster__getList(MasterData_WarQuestSelectionMaster, this->fields.materialCommonReleaseId, 0LL);
  if ( !List )
    goto LABEL_10;
  if ( List->max_length == 1 )
  {
    v7 = List->m_Items[0];
    if ( v7 )
      return v7->fields.condType != 92;
LABEL_10:
    sub_B170D4();
  }
  return 1;
}