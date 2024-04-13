void __fastcall GachaSubMaster___ctor(GachaSubMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC637 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EC637 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    186,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaSubEntity_o *__fastcall GachaSubMaster__GetEntity(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EC635 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__GetEntity__, gachaId, id, method);
    byte_42EC635 = 1;
  }
  PK = GachaSubEntity__CreatePK(gachaId, id, *(const MethodInfo **)&id);
  return (GachaSubEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                               (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                               PK,
                               (const MethodInfo_23FB260 *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__GetEntity__);
}


// attributes: thunk
GachaSubEntity_o *__fastcall GachaSubMaster__GetFriendPointGachaImageInfo(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int64_t nowTime,
        const MethodInfo *method)
{
  return GachaSubMaster__GetOpenEntity_32421964(this, gachaId, nowTime, method);
}


GachaSubEntity_o *__fastcall GachaSubMaster__GetOpenEntity(
        GachaSubMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t Time; // x2
  const MethodInfo *v7; // x3

  if ( (byte_42EC638 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, gachaId, (_DWORD)method, v3);
    byte_42EC638 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  return GachaSubMaster__GetOpenEntity_32421964(this, gachaId, Time, v7);
}


GachaSubEntity_o *__fastcall GachaSubMaster__GetOpenEntity_32421964(
        GachaSubMaster_o *this,
        int32_t gachaId,
        int64_t checkTime,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  DataManager_o *Instance; // x0
  __int64 saveDataMapList_low; // x1
  CommonReleaseMaster_o *v21; // x22
  int32_t Count; // w0
  int32_t v23; // w23
  GachaSubEntity_o *v24; // x24
  int32_t v25; // w25
  GachaSubEntity_o *v26; // x26
  __int64 v27; // x10

  if ( (byte_42EC639 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      gachaId,
      checkTime,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v10, v11, v12);
    sub_B5D5C4(&GachaSubEntity_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42EC639 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_24;
  v21 = (CommonReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0LL;
    v25 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v25,
                                    (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v26 = (GachaSubEntity_o *)Instance;
      v27 = *(&GachaSubEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v27
        || (GachaSubEntity_c *)Instance->klass->_2.typeHierarchy[v27 - 1] != GachaSubEntity_TypeInfo )
      {
        break;
      }
      if ( Instance->fields.m_CachedPtr == gachaId
        && (__int64)Instance->fields.masterDataBytes <= checkTime
        && (__int64)Instance->fields.saveNameList >= checkTime
        && (!v24 || SLODWORD(Instance->fields.datalist) > v24->fields.priority) )
      {
        saveDataMapList_low = LODWORD(Instance->fields.saveDataMapList);
        if ( !(_DWORD)saveDataMapList_low )
          goto LABEL_19;
        if ( !v21 )
          break;
        if ( CommonReleaseMaster__IsOpen(v21, saveDataMapList_low, 0LL, 0, 0LL) )
LABEL_19:
          v24 = v26;
      }
      if ( ++v25 >= v23 )
        return v24;
    }
LABEL_24:
    sub_B5D69C(Instance, saveDataMapList_low);
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

  if ( (byte_42EC636 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__TryGetEntity__,
      (_DWORD)entity,
      gachaId,
      *(_QWORD *)&id);
    byte_42EC636 = 1;
  }
  PK = GachaSubEntity__CreatePK(gachaId, id, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_GachaSubMaster__GachaSubEntity__string__TryGetEntity__);
}