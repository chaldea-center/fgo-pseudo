void __fastcall EventFatigueRecoveryMaster___ctor(EventFatigueRecoveryMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB215 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EB215 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    298,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFatigueRecoveryEntity_o *__fastcall EventFatigueRecoveryMaster__GetEntity(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EB213 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__GetEntity__,
      eventId,
      priority,
      method);
    byte_42EB213 = 1;
  }
  PK = EventFatigueRecoveryEntity__CreatePK(eventId, priority, *(const MethodInfo **)&priority);
  return (EventFatigueRecoveryEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                           (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                           PK,
                                           (const MethodInfo_23FB260 *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__GetEntity__);
}


EventFatigueRecoveryEntity_o *__fastcall EventFatigueRecoveryMaster__GetEntityDefinitely(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  EventFatigueRecoveryEntity_o *v13; // x22
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v17; // w23
  __int64 v18; // x10

  if ( (byte_42EB216 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, eventId, idx, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&EventFatigueRecoveryEntity_TypeInfo, v10, v11, v12);
    byte_42EB216 = 1;
  }
  v13 = (EventFatigueRecoveryEntity_o *)sub_B5D694(EventFatigueRecoveryEntity_TypeInfo);
  EventFatigueRecoveryEntity___ctor(v13, v14);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B5D69C(list, v15);
  v17 = 0;
  while ( v17 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v17,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = *(&EventFatigueRecoveryEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (EventFatigueRecoveryEntity_c *)list->klass->_2.typeHierarchy[v18 - 1] == EventFatigueRecoveryEntity_TypeInfo )
        {
          if ( LODWORD(list->fields.items) == eventId && LODWORD(list->fields._syncRoot) == idx )
            v13 = (EventFatigueRecoveryEntity_o *)list;
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v17;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
  return v13;
}


System_Int32_array *__fastcall EventFatigueRecoveryMaster__GetOpenRecoveryNum(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_int__o *v24; // x21
  const MethodInfo *v25; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v27; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v28; // x23
  __int64 v29; // x10

  if ( (byte_42EB217 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&EventFatigueRecoveryEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v21, v22, v23);
    byte_42EB217 = 1;
  }
  v24 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v27 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v27 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v28 = list;
        v29 = *(&EventFatigueRecoveryEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (EventFatigueRecoveryEntity_c *)list->klass->_2.typeHierarchy[v29 - 1] == EventFatigueRecoveryEntity_TypeInfo )
        {
          if ( LODWORD(list->fields.items) == eventId )
          {
            if ( LODWORD(list->fields._syncRoot) )
            {
              list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)EventFatigueRecoveryEntity__IsOpen(
                                                                                                   (EventFatigueRecoveryEntity_o *)list,
                                                                                                   v25);
              if ( ((unsigned __int8)list & 1) != 0 )
              {
                if ( !v24 )
                  goto LABEL_19;
                System_Collections_Generic_List_int___Add(
                  v24,
                  (int32_t)v28->fields._syncRoot,
                  (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
              }
            }
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v27;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_19;
  }
  if ( !v24 )
LABEL_19:
    sub_B5D69C(list, v25);
  return System_Collections_Generic_List_int___ToArray(
           v24,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall EventFatigueRecoveryMaster__GetRecoverydBgId(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  DataManager_o *Instance; // x0
  __int64 saveNameList_low; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  CommonReleaseMaster_o *v21; // x21
  int32_t saveNameList_high; // w23
  int v23; // w25
  int32_t v24; // w22
  DataManager_o *v25; // x24
  __int64 v26; // x10

  if ( (byte_42EB218 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v9, v10, v11);
    sub_B5D5C4(&EventFatigueRecoveryEntity_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42EB218 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
LABEL_18:
    sub_B5D69C(Instance, saveNameList_low);
  }
  v21 = (CommonReleaseMaster_o *)Instance;
  saveNameList_high = 0;
  v23 = 0;
  v24 = 0;
  while ( v24 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                  list,
                  (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                    (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                    v24,
                                    (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v25 = Instance;
        v26 = *(&EventFatigueRecoveryEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v26
          && (EventFatigueRecoveryEntity_c *)Instance->klass->_2.typeHierarchy[v26 - 1] == EventFatigueRecoveryEntity_TypeInfo )
        {
          if ( Instance->fields.m_CachedPtr == eventId )
          {
            saveNameList_low = LODWORD(Instance->fields.saveNameList);
            if ( (int)saveNameList_low < 1 )
              goto LABEL_15;
            if ( !v21 )
              goto LABEL_18;
            Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v21, saveNameList_low, 0LL, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
LABEL_15:
              if ( v23 < *(_DWORD *)&v25->fields._DispLog )
              {
                saveNameList_high = HIDWORD(v25->fields.saveNameList);
                v23 = *(_DWORD *)&v25->fields._DispLog;
              }
            }
          }
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          ++v24;
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

  if ( (byte_42EB214 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__TryGetEntity__,
      (_DWORD)entity,
      eventId,
      *(_QWORD *)&priority);
    byte_42EB214 = 1;
  }
  PK = EventFatigueRecoveryEntity__CreatePK(eventId, priority, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__TryGetEntity__);
}