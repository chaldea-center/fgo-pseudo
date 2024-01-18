void __fastcall EventFatigueRecoveryMaster___ctor(EventFatigueRecoveryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A3D3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string___ctor__, method);
    byte_418A3D3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    297,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFatigueRecoveryEntity_o *__fastcall EventFatigueRecoveryMaster__GetEntity(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418A3D1 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_418A3D1 = 1;
  }
  PK = EventFatigueRecoveryEntity__CreatePK(eventId, priority, *(const MethodInfo **)&priority);
  return (EventFatigueRecoveryEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                           (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_24E4520 *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventFatigueRecoveryEntity_o *__fastcall EventFatigueRecoveryMaster__GetEntityDefinitely(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  EventFatigueRecoveryEntity_o *v9; // x22
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v13; // w23
  __int64 v14; // x10

  if ( (byte_418A3D4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&EventFatigueRecoveryEntity_TypeInfo, v8);
    byte_418A3D4 = 1;
  }
  v9 = (EventFatigueRecoveryEntity_o *)sub_B2C42C(EventFatigueRecoveryEntity_TypeInfo);
  EventFatigueRecoveryEntity___ctor(v9, v10);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B2C434(list, v11);
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v13,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v14 = *(&EventFatigueRecoveryEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (EventFatigueRecoveryEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] == EventFatigueRecoveryEntity_TypeInfo )
        {
          if ( LODWORD(list->fields.items) == eventId && LODWORD(list->fields._syncRoot) == idx )
            v9 = (EventFatigueRecoveryEntity_o *)list;
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v13;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventFatigueRecoveryMaster__GetOpenRecoveryNum(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x21
  const MethodInfo *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x23
  __int64 v16; // x10

  if ( (byte_418A3D5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&EventFatigueRecoveryEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_418A3D5 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v14,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v15 = list;
        v16 = *(&EventFatigueRecoveryEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (EventFatigueRecoveryEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] == EventFatigueRecoveryEntity_TypeInfo )
        {
          if ( LODWORD(list->fields.items) == eventId )
          {
            if ( LODWORD(list->fields._syncRoot) )
            {
              list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)EventFatigueRecoveryEntity__IsOpen(
                                                                                                   (EventFatigueRecoveryEntity_o *)list,
                                                                                                   v12);
              if ( ((unsigned __int8)list & 1) != 0 )
              {
                if ( !v11 )
                  goto LABEL_19;
                System_Collections_Generic_List_int___Add(
                  v11,
                  (int32_t)v15->fields._syncRoot,
                  (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v14;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_19;
  }
  if ( !v11 )
LABEL_19:
    sub_B2C434(list, v12);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventFatigueRecoveryMaster__GetRecoverydBgId(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 saveNameList_low; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  CommonReleaseMaster_o *v12; // x21
  int32_t saveNameList_high; // w23
  int v14; // w25
  int32_t v15; // w22
  DataManager_o *v16; // x24
  __int64 v17; // x10

  if ( (byte_418A3D6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v6);
    sub_B2C35C(&EventFatigueRecoveryEntity_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418A3D6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
LABEL_18:
    sub_B2C434(Instance, saveNameList_low);
  }
  v12 = (CommonReleaseMaster_o *)Instance;
  saveNameList_high = 0;
  v14 = 0;
  v15 = 0;
  while ( v15 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v15,
                                    (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v16 = Instance;
        v17 = *(&EventFatigueRecoveryEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (EventFatigueRecoveryEntity_c *)Instance->klass->_2.typeHierarchy[v17 - 1] == EventFatigueRecoveryEntity_TypeInfo )
        {
          if ( Instance->fields.m_CachedPtr == eventId )
          {
            saveNameList_low = LODWORD(Instance->fields.saveNameList);
            if ( (int)saveNameList_low < 1 )
              goto LABEL_15;
            if ( !v12 )
              goto LABEL_18;
            Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v12, saveNameList_low, 0LL, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
LABEL_15:
              if ( v14 < *(_DWORD *)&v16->fields._DispLog )
              {
                saveNameList_high = HIDWORD(v16->fields.saveNameList);
                v14 = *(_DWORD *)&v16->fields._DispLog;
              }
            }
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v15;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_18;
  }
  return saveNameList_high;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventFatigueRecoveryMaster__TryGetEntity(
        EventFatigueRecoveryMaster_o *this,
        EventFatigueRecoveryEntity_o **entity,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418A3D2 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__TryGetEntity__,
      entity);
    byte_418A3D2 = 1;
  }
  PK = EventFatigueRecoveryEntity__CreatePK(eventId, priority, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__TryGetEntity__);
}