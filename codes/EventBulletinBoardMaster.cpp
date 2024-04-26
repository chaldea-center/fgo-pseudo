void __fastcall EventBulletinBoardMaster___ctor(EventBulletinBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43544B6 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__);
    byte_43544B6 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    235,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__);
}


System_Collections_Generic_List_EventBulletinBoardEntity__o *__fastcall EventBulletinBoardMaster__GetAvailableEntityList(
        EventBulletinBoardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  EventBulletinBoardReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  EventBulletinBoardReleaseMaster_o *v8; // x22
  int32_t v9; // w23
  int32_t v10; // w24
  const MethodInfo *v11; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v12; // x25
  __int64 v13; // x10

  if ( (byte_43544B7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&EventBulletinBoardEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_B70694(&System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
    byte_43544B7 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventBulletinBoardReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v8 = Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (EventBulletinBoardReleaseMaster_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                                                                          (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Master_WarQuestSelectionMaster >= 1 )
  {
    v9 = (int)Master_WarQuestSelectionMaster;
    v10 = 0;
    while ( 1 )
    {
      Master_WarQuestSelectionMaster = (EventBulletinBoardReleaseMaster_o *)this->fields.list;
      if ( !Master_WarQuestSelectionMaster )
        break;
      Master_WarQuestSelectionMaster = (EventBulletinBoardReleaseMaster_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
                                                                              v10,
                                                                              (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Master_WarQuestSelectionMaster )
        break;
      v12 = (EventMissionProgressRequest_Argument_ProgressData_o *)Master_WarQuestSelectionMaster;
      v13 = *(&EventBulletinBoardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Master_WarQuestSelectionMaster->klass->_2.bitflags2 + 1) < (unsigned int)v13
        || (EventBulletinBoardEntity_c *)Master_WarQuestSelectionMaster->klass->_2.typeHierarchy[v13 - 1] != EventBulletinBoardEntity_TypeInfo )
      {
        break;
      }
      if ( *(&Master_WarQuestSelectionMaster->fields._MasterKind_k__BackingField + 1) == eventId )
      {
        if ( !v8 )
          break;
        Master_WarQuestSelectionMaster = (EventBulletinBoardReleaseMaster_o *)EventBulletinBoardReleaseMaster__IsOpen(
                                                                                v8,
                                                                                Master_WarQuestSelectionMaster->fields._MasterKind_k__BackingField,
                                                                                v11);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            v12,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__);
        }
      }
      if ( ++v10 >= v9 )
        goto LABEL_19;
    }
LABEL_23:
    sub_B7076C(Master_WarQuestSelectionMaster, v7);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_23;
  if ( v5->fields._size <= 0 )
    return 0LL;
  else
    return (System_Collections_Generic_List_EventBulletinBoardEntity__o *)v5;
}


System_Collections_Generic_List_string__o *__fastcall EventBulletinBoardMaster__GetAvailableMessages(
        EventBulletinBoardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  EventBulletinBoardReleaseMaster_o *v8; // x22
  int32_t Count; // w0
  int32_t v10; // w23
  char v11; // w28
  int32_t i; // w24
  const MethodInfo *v13; // x2
  DataManager_o *v14; // x25
  __int64 v15; // x10

  if ( (byte_43544B8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_DataManager_GetMasterData_EventBulletinBoardReleaseMaster___);
    sub_B70694(&EventBulletinBoardEntity_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43544B8 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventBulletinBoardReleaseMaster___),
        !this->fields.list) )
  {
LABEL_22:
    sub_B7076C(Instance, v7);
  }
  v8 = (EventBulletinBoardReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v10 = Count;
  v11 = 0;
  for ( i = 0; i < v10; ++i )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                  i,
                                  (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_22;
    v14 = Instance;
    v15 = *(&EventBulletinBoardEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (EventBulletinBoardEntity_c *)Instance->klass->_2.typeHierarchy[v15 - 1] != EventBulletinBoardEntity_TypeInfo )
    {
      goto LABEL_22;
    }
    if ( *(_DWORD *)&Instance->fields._DispLog == eventId )
    {
      if ( !v8 )
        goto LABEL_22;
      Instance = (DataManager_o *)EventBulletinBoardReleaseMaster__IsOpen(v8, Instance->fields.m_CachedPtr, v13);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v5 )
          goto LABEL_22;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v14->fields.datalist,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
      }
      v11 = 1;
    }
  }
  if ( (v11 & 1) != 0 )
    return (System_Collections_Generic_List_string__o *)v5;
  else
    return 0LL;
}