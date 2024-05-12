void __fastcall EventFatigueRecoveryMaster___ctor(EventFatigueRecoveryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438DE72 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string___ctor__);
    byte_438DE72 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    298,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFatigueRecoveryEntity_o *__fastcall EventFatigueRecoveryMaster__GetEntity(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438DE70 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__GetEntity__);
    byte_438DE70 = 1;
  }
  PK = EventFatigueRecoveryEntity__CreatePK(eventId, priority, *(const MethodInfo **)&priority);
  return (EventFatigueRecoveryEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_21FBCE4 *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__GetEntity__);
}


EventFatigueRecoveryEntity_o *__fastcall EventFatigueRecoveryMaster__GetEntityDefinitely(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  EventFatigueRecoveryEntity_o *v7; // x22
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v11; // w23
  __int64 v12; // x10

  if ( (byte_438DE73 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventFatigueRecoveryEntity_TypeInfo);
    byte_438DE73 = 1;
  }
  v7 = (EventFatigueRecoveryEntity_o *)sub_B77694(EventFatigueRecoveryEntity_TypeInfo);
  EventFatigueRecoveryEntity___ctor(v7, v8);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B7769C(list, v9);
  v11 = 0;
  while ( v11 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v11,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = *(&EventFatigueRecoveryEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (EventFatigueRecoveryEntity_c *)list->klass->_2.typeHierarchy[v12 - 1] == EventFatigueRecoveryEntity_TypeInfo )
        {
          if ( LODWORD(list->fields.items) == eventId && LODWORD(list->fields._syncRoot) == idx )
            v7 = (EventFatigueRecoveryEntity_o *)list;
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v11;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
  return v7;
}


System_Int32_array *__fastcall EventFatigueRecoveryMaster__GetOpenRecoveryNum(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  const MethodInfo *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v9; // x23
  __int64 v10; // x10

  if ( (byte_438DE74 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&EventFatigueRecoveryEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_438DE74 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v9 = list;
        v10 = *(&EventFatigueRecoveryEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (EventFatigueRecoveryEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == EventFatigueRecoveryEntity_TypeInfo )
        {
          if ( LODWORD(list->fields.items) == eventId )
          {
            if ( LODWORD(list->fields._syncRoot) )
            {
              list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)EventFatigueRecoveryEntity__IsOpen(
                                                                                                   (EventFatigueRecoveryEntity_o *)list,
                                                                                                   v6);
              if ( ((unsigned __int8)list & 1) != 0 )
              {
                if ( !v5 )
                  goto LABEL_19;
                System_Collections_Generic_List_int___Add(
                  v5,
                  (int32_t)v9->fields._syncRoot,
                  (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v8;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_19;
  }
  if ( !v5 )
LABEL_19:
    sub_B7769C(list, v6);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall EventFatigueRecoveryMaster__GetRecoverydBgId(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 saveNameList_low; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  CommonReleaseMaster_o *v8; // x21
  int32_t saveNameList_high; // w23
  int v10; // w25
  int32_t v11; // w22
  DataManager_o *v12; // x24
  __int64 v13; // x10

  if ( (byte_438DE75 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B775C4(&EventFatigueRecoveryEntity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DE75 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
LABEL_18:
    sub_B7769C(Instance, saveNameList_low);
  }
  v8 = (CommonReleaseMaster_o *)Instance;
  saveNameList_high = 0;
  v10 = 0;
  v11 = 0;
  while ( v11 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v11,
                                    (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v12 = Instance;
        v13 = *(&EventFatigueRecoveryEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (EventFatigueRecoveryEntity_c *)Instance->klass->_2.typeHierarchy[v13 - 1] == EventFatigueRecoveryEntity_TypeInfo )
        {
          if ( Instance->fields.m_CachedPtr == eventId )
          {
            saveNameList_low = LODWORD(Instance->fields.saveNameList);
            if ( (int)saveNameList_low < 1 )
              goto LABEL_15;
            if ( !v8 )
              goto LABEL_18;
            Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v8, saveNameList_low, 0LL, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
LABEL_15:
              if ( v10 < *(_DWORD *)&v12->fields._DispLog )
              {
                saveNameList_high = HIDWORD(v12->fields.saveNameList);
                v10 = *(_DWORD *)&v12->fields._DispLog;
              }
            }
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v11;
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

  if ( (byte_438DE71 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__TryGetEntity__);
    byte_438DE71 = 1;
  }
  PK = EventFatigueRecoveryEntity__CreatePK(eventId, priority, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__TryGetEntity__);
}