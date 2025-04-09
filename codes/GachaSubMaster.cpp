void __fastcall GachaSubMaster___ctor(GachaSubMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB13B & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string___ctor__, method);
    byte_49BB13B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    191,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaSubEntity_o *__fastcall GachaSubMaster__GetEntity(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BB13C & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__GetEntity__, *(_QWORD *)&gachaId);
    byte_49BB13C = 1;
  }
  PK = (Il2CppObject *)GachaSubEntity__CreatePK(gachaId, id, *(const MethodInfo **)&id);
  return (GachaSubEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_31A2454 *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__GetEntity__);
}


// attributes: thunk
GachaSubEntity_o *__fastcall GachaSubMaster__GetFriendPointGachaImageInfo(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int64_t nowTime,
        const MethodInfo *method)
{
  return GachaSubMaster__GetOpenEntity_39920288(this, gachaId, nowTime, method);
}


// local variable allocation has failed, the output may be wrong!
GachaSubEntity_o *__fastcall GachaSubMaster__GetOpenEntity(
        GachaSubMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  int64_t Time; // x2
  const MethodInfo *v6; // x3

  if ( (byte_49BB139 & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, *(_QWORD *)&gachaId);
    byte_49BB139 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return GachaSubMaster__GetOpenEntity_39920288(this, gachaId, Time, v6);
}


// local variable allocation has failed, the output may be wrong!
GachaSubEntity_o *__fastcall GachaSubMaster__GetOpenEntity_39920288(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int64_t checkTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 saveNameList_low; // x1
  CommonReleaseMaster_o *v12; // x22
  int32_t Count; // w0
  int32_t v14; // w23
  GachaSubEntity_o *v15; // x24
  int32_t v16; // w25
  GachaSubEntity_o *v17; // x26

  if ( (byte_49BB13A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_GachaSubEntity__get_Count__, *(_QWORD *)&gachaId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_GachaSubEntity__get_Item__, v7);
    sub_1B4CF90(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49BB13A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_22;
  v12 = (CommonReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_GachaSubEntity__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0LL;
    v16 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v16,
                                    (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_GachaSubEntity__get_Item__);
      if ( !Instance )
        break;
      v17 = (GachaSubEntity_o *)Instance;
      if ( Instance->fields.m_CachedPtr == gachaId
        && (__int64)Instance->fields.lookup <= checkTime
        && (__int64)Instance->fields.masterDataBytes >= checkTime
        && (!v15 || SLODWORD(Instance->fields.m_CancellationTokenSource) > v15->fields.priority) )
      {
        saveNameList_low = LODWORD(Instance->fields.saveNameList);
        if ( !(_DWORD)saveNameList_low )
          goto LABEL_17;
        if ( !v12 )
          break;
        if ( CommonReleaseMaster__IsOpen(v12, saveNameList_low, 0LL, 0, 0LL) )
LABEL_17:
          v15 = v17;
      }
      if ( v14 == ++v16 )
        return v15;
    }
LABEL_22:
    sub_1B4D1EC(Instance, saveNameList_low);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaSubMaster__TryGetEntity(
        GachaSubMaster_o *this,
        GachaSubEntity_o **entity,
        int32_t gachaId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BB13D & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__TryGetEntity__, entity);
    byte_49BB13D = 1;
  }
  PK = (Il2CppObject *)GachaSubEntity__CreatePK(gachaId, id, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__TryGetEntity__);
}