void __fastcall GachaSubMaster___ctor(GachaSubMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7D71 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string___ctor__, method);
    byte_4BC7D71 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    191,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaSubEntity_o *__fastcall GachaSubMaster__GetEntity(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC7D72 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__GetEntity__, *(_QWORD *)&gachaId);
    byte_4BC7D72 = 1;
  }
  PK = (Il2CppObject *)GachaSubEntity__CreatePK(gachaId, id, *(const MethodInfo **)&id);
  return (GachaSubEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_324D130 *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__GetEntity__);
}


// attributes: thunk
GachaSubEntity_o *__fastcall GachaSubMaster__GetFriendPointGachaImageInfo(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int64_t nowTime,
        const MethodInfo *method)
{
  return GachaSubMaster__GetOpenEntity_40569864(this, gachaId, nowTime, method);
}


// local variable allocation has failed, the output may be wrong!
GachaSubEntity_o *__fastcall GachaSubMaster__GetOpenEntity(
        GachaSubMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  int64_t Time; // x2
  const MethodInfo *v6; // x3

  if ( (byte_4BC7D6F & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, *(_QWORD *)&gachaId);
    byte_4BC7D6F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  return GachaSubMaster__GetOpenEntity_40569864(this, gachaId, Time, v6);
}


// local variable allocation has failed, the output may be wrong!
GachaSubEntity_o *__fastcall GachaSubMaster__GetOpenEntity_40569864(
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

  if ( (byte_4BC7D70 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_GachaSubEntity__get_Count__, *(_QWORD *)&gachaId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_GachaSubEntity__get_Item__, v7);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4BC7D70 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_22;
  v12 = (CommonReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_GachaSubEntity__get_Count__);
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
                                    (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_GachaSubEntity__get_Item__);
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
    sub_1C1AE30(Instance, saveNameList_low);
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

  if ( (byte_4BC7D73 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__TryGetEntity__, entity);
    byte_4BC7D73 = 1;
  }
  PK = (Il2CppObject *)GachaSubEntity__CreatePK(gachaId, id, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__TryGetEntity__);
}