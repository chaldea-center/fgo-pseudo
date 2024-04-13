void __fastcall EventBulletinBoardMaster___ctor(EventBulletinBoardMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB117 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EB117 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    235,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__);
}


System_Collections_Generic_List_EventBulletinBoardEntity__o *__fastcall EventBulletinBoardMaster__GetAvailableEntityList(
        EventBulletinBoardMaster_o *this,
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x21
  EventBulletinBoardReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v32; // x1
  EventBulletinBoardReleaseMaster_o *v33; // x22
  int32_t v34; // w23
  int32_t v35; // w24
  const MethodInfo *v36; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x25
  __int64 v38; // x10

  if ( (byte_42EB118 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&EventBulletinBoardEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo, v27, v28, v29);
    byte_42EB118 = 1;
  }
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventBulletinBoardReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v33 = Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (EventBulletinBoardReleaseMaster_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                                                                          (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Master_WarQuestSelectionMaster >= 1 )
  {
    v34 = (int)Master_WarQuestSelectionMaster;
    v35 = 0;
    while ( 1 )
    {
      Master_WarQuestSelectionMaster = (EventBulletinBoardReleaseMaster_o *)this->fields.list;
      if ( !Master_WarQuestSelectionMaster )
        break;
      Master_WarQuestSelectionMaster = (EventBulletinBoardReleaseMaster_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
                                                                              v35,
                                                                              (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Master_WarQuestSelectionMaster )
        break;
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Master_WarQuestSelectionMaster;
      v38 = *(&EventBulletinBoardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Master_WarQuestSelectionMaster->klass->_2.bitflags2 + 1) < (unsigned int)v38
        || (EventBulletinBoardEntity_c *)Master_WarQuestSelectionMaster->klass->_2.typeHierarchy[v38 - 1] != EventBulletinBoardEntity_TypeInfo )
      {
        break;
      }
      if ( *(&Master_WarQuestSelectionMaster->fields._MasterKind_k__BackingField + 1) == eventId )
      {
        if ( !v33 )
          break;
        Master_WarQuestSelectionMaster = (EventBulletinBoardReleaseMaster_o *)EventBulletinBoardReleaseMaster__IsOpen(
                                                                                v33,
                                                                                Master_WarQuestSelectionMaster->fields._MasterKind_k__BackingField,
                                                                                v36);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        {
          if ( !v30 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v30,
            v37,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__);
        }
      }
      if ( ++v35 >= v34 )
        goto LABEL_19;
    }
LABEL_23:
    sub_B5D69C(Master_WarQuestSelectionMaster, v32);
  }
LABEL_19:
  if ( !v30 )
    goto LABEL_23;
  if ( v30->fields._size <= 0 )
    return 0LL;
  else
    return (System_Collections_Generic_List_EventBulletinBoardEntity__o *)v30;
}


System_Collections_Generic_List_string__o *__fastcall EventBulletinBoardMaster__GetAvailableMessages(
        EventBulletinBoardMaster_o *this,
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  EventBulletinBoardReleaseMaster_o *v30; // x22
  int32_t Count; // w0
  int32_t v32; // w23
  char v33; // w28
  int32_t i; // w24
  const MethodInfo *v35; // x2
  DataManager_o *v36; // x25
  __int64 v37; // x10

  if ( (byte_42EB119 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventBulletinBoardReleaseMaster___, v9, v10, v11);
    sub_B5D5C4(&EventBulletinBoardEntity_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42EB119 = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventBulletinBoardReleaseMaster___),
        !this->fields.list) )
  {
LABEL_22:
    sub_B5D69C(Instance, v29);
  }
  v30 = (EventBulletinBoardReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v32 = Count;
  v33 = 0;
  for ( i = 0; i < v32; ++i )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                  i,
                                  (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_22;
    v36 = Instance;
    v37 = *(&EventBulletinBoardEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v37
      || (EventBulletinBoardEntity_c *)Instance->klass->_2.typeHierarchy[v37 - 1] != EventBulletinBoardEntity_TypeInfo )
    {
      goto LABEL_22;
    }
    if ( *(_DWORD *)&Instance->fields._DispLog == eventId )
    {
      if ( !v30 )
        goto LABEL_22;
      Instance = (DataManager_o *)EventBulletinBoardReleaseMaster__IsOpen(v30, Instance->fields.m_CachedPtr, v35);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v27 )
          goto LABEL_22;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v27,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v36->fields.datalist,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      }
      v33 = 1;
    }
  }
  if ( (v33 & 1) != 0 )
    return (System_Collections_Generic_List_string__o *)v27;
  else
    return 0LL;
}