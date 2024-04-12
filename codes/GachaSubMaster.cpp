void __fastcall GachaSubMaster___ctor(GachaSubMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B3B47 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string___ctor__);
    byte_42B3B47 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    186,
    (const MethodInfo_23E268C *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaSubEntity_o *__fastcall GachaSubMaster__GetEntity(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B3B45 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__GetEntity__);
    byte_42B3B45 = 1;
  }
  PK = GachaSubEntity__CreatePK(gachaId, id, *(const MethodInfo **)&id);
  return (GachaSubEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                               PK,
                               (const MethodInfo_23E2728 *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__GetEntity__);
}


// attributes: thunk
GachaSubEntity_o *__fastcall GachaSubMaster__GetFriendPointGachaImageInfo(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int64_t nowTime,
        const MethodInfo *method)
{
  return GachaSubMaster__GetOpenEntity_32076528(this, gachaId, nowTime, method);
}


GachaSubEntity_o *__fastcall GachaSubMaster__GetOpenEntity(
        GachaSubMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  int64_t Time; // x2
  const MethodInfo *v6; // x3

  if ( (byte_42B3B48 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42B3B48 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return GachaSubMaster__GetOpenEntity_32076528(this, gachaId, Time, v6);
}


GachaSubEntity_o *__fastcall GachaSubMaster__GetOpenEntity_32076528(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int64_t checkTime,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 saveDataMapList_low; // x1
  CommonReleaseMaster_o *v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  GachaSubEntity_o *v12; // x24
  int32_t v13; // w25
  GachaSubEntity_o *v14; // x26
  __int64 v15; // x10

  if ( (byte_42B3B49 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B52984(&GachaSubEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3B49 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_24;
  v9 = (CommonReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0LL;
    v13 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v13,
                                    (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v14 = (GachaSubEntity_o *)Instance;
      v15 = *(&GachaSubEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (GachaSubEntity_c *)Instance->klass->_2.typeHierarchy[v15 - 1] != GachaSubEntity_TypeInfo )
      {
        break;
      }
      if ( Instance->fields.m_CachedPtr == gachaId
        && (__int64)Instance->fields.masterDataBytes <= checkTime
        && (__int64)Instance->fields.saveNameList >= checkTime
        && (!v12 || SLODWORD(Instance->fields.datalist) > v12->fields.priority) )
      {
        saveDataMapList_low = LODWORD(Instance->fields.saveDataMapList);
        if ( !(_DWORD)saveDataMapList_low )
          goto LABEL_19;
        if ( !v9 )
          break;
        if ( CommonReleaseMaster__IsOpen(v9, saveDataMapList_low, 0LL, 0, 0LL) )
LABEL_19:
          v12 = v14;
      }
      if ( ++v13 >= v11 )
        return v12;
    }
LABEL_24:
    sub_B52A5C(Instance, saveDataMapList_low);
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

  if ( (byte_42B3B46 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__TryGetEntity__);
    byte_42B3B46 = 1;
  }
  PK = GachaSubEntity__CreatePK(gachaId, id, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__TryGetEntity__);
}