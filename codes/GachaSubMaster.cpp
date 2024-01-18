void __fastcall GachaSubMaster___ctor(GachaSubMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418B013 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string___ctor__, method);
    byte_418B013 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    185,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaSubEntity_o *__fastcall GachaSubMaster__GetEntity(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418B011 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__GetEntity__, *(_QWORD *)&gachaId);
    byte_418B011 = 1;
  }
  PK = GachaSubEntity__CreatePK(gachaId, id, *(const MethodInfo **)&id);
  return (GachaSubEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                               (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                               PK,
                               (const MethodInfo_24E4520 *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__GetEntity__);
}


// attributes: thunk
GachaSubEntity_o *__fastcall GachaSubMaster__GetFriendPointGachaImageInfo(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int64_t nowTime,
        const MethodInfo *method)
{
  return GachaSubMaster__GetOpenEntity_31318516(this, gachaId, nowTime, method);
}


// local variable allocation has failed, the output may be wrong!
GachaSubEntity_o *__fastcall GachaSubMaster__GetOpenEntity(
        GachaSubMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  int64_t Time; // x2
  const MethodInfo *v6; // x3

  if ( (byte_418B014 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, *(_QWORD *)&gachaId);
    byte_418B014 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return GachaSubMaster__GetOpenEntity_31318516(this, gachaId, Time, v6);
}


// local variable allocation has failed, the output may be wrong!
GachaSubEntity_o *__fastcall GachaSubMaster__GetOpenEntity_31318516(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int64_t checkTime,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 saveDataMapList_low; // x1
  CommonReleaseMaster_o *v13; // x22
  int32_t Count; // w0
  int32_t v15; // w23
  GachaSubEntity_o *v16; // x24
  int32_t v17; // w25
  GachaSubEntity_o *v18; // x26
  __int64 v19; // x10

  if ( (byte_418B015 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&gachaId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v8);
    sub_B2C35C(&GachaSubEntity_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_418B015 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_24;
  v13 = (CommonReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0LL;
    v17 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v17,
                                    (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v18 = (GachaSubEntity_o *)Instance;
      v19 = *(&GachaSubEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (GachaSubEntity_c *)Instance->klass->_2.typeHierarchy[v19 - 1] != GachaSubEntity_TypeInfo )
      {
        break;
      }
      if ( Instance->fields.m_CachedPtr == gachaId
        && (__int64)Instance->fields.masterDataBytes <= checkTime
        && (__int64)Instance->fields.saveNameList >= checkTime
        && (!v16 || SLODWORD(Instance->fields.datalist) > v16->fields.priority) )
      {
        saveDataMapList_low = LODWORD(Instance->fields.saveDataMapList);
        if ( !(_DWORD)saveDataMapList_low )
          goto LABEL_19;
        if ( !v13 )
          break;
        if ( CommonReleaseMaster__IsOpen(v13, saveDataMapList_low, 0LL, 0, 0LL) )
LABEL_19:
          v16 = v18;
      }
      if ( ++v17 >= v15 )
        return v16;
    }
LABEL_24:
    sub_B2C434(Instance, saveDataMapList_low);
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
  System_String_o *PK; // x2

  if ( (byte_418B012 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__TryGetEntity__, entity);
    byte_418B012 = 1;
  }
  PK = GachaSubEntity__CreatePK(gachaId, id, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__TryGetEntity__);
}