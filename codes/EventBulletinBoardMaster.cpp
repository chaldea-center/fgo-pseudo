void __fastcall EventBulletinBoardMaster___ctor(EventBulletinBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A2D6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__, method);
    byte_418A2D6 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    234,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventBulletinBoardEntity__o *__fastcall EventBulletinBoardMaster__GetAvailableEntityList(
        EventBulletinBoardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  EventBulletinBoardReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  EventBulletinBoardReleaseMaster_o *v16; // x22
  int32_t v17; // w23
  int32_t v18; // w24
  const MethodInfo *v19; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x25
  __int64 v21; // x10

  if ( (byte_418A2D7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&EventBulletinBoardEntity_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v11);
    sub_B2C35C(&System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo, v12);
    byte_418A2D7 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventBulletinBoardReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventBulletinBoardReleaseMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v16 = Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (EventBulletinBoardReleaseMaster_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
                                                                          (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)Master_WarQuestSelectionMaster >= 1 )
  {
    v17 = (int)Master_WarQuestSelectionMaster;
    v18 = 0;
    while ( 1 )
    {
      Master_WarQuestSelectionMaster = (EventBulletinBoardReleaseMaster_o *)this->fields.list;
      if ( !Master_WarQuestSelectionMaster )
        break;
      Master_WarQuestSelectionMaster = (EventBulletinBoardReleaseMaster_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                              (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster,
                                                                              v18,
                                                                              (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Master_WarQuestSelectionMaster )
        break;
      v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)Master_WarQuestSelectionMaster;
      v21 = *(&EventBulletinBoardEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Master_WarQuestSelectionMaster->klass->_2.bitflags2 + 1) < (unsigned int)v21
        || (EventBulletinBoardEntity_c *)Master_WarQuestSelectionMaster->klass->_2.typeHierarchy[v21 - 1] != EventBulletinBoardEntity_TypeInfo )
      {
        break;
      }
      if ( *(&Master_WarQuestSelectionMaster->fields._MasterKind_k__BackingField + 1) == eventId )
      {
        if ( !v16 )
          break;
        Master_WarQuestSelectionMaster = (EventBulletinBoardReleaseMaster_o *)EventBulletinBoardReleaseMaster__IsOpen(
                                                                                v16,
                                                                                Master_WarQuestSelectionMaster->fields._MasterKind_k__BackingField,
                                                                                v19);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        {
          if ( !v13 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            v20,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__);
        }
      }
      if ( ++v18 >= v17 )
        goto LABEL_19;
    }
LABEL_23:
    sub_B2C434(Master_WarQuestSelectionMaster, v15);
  }
LABEL_19:
  if ( !v13 )
    goto LABEL_23;
  if ( v13->fields._size <= 0 )
    return 0LL;
  else
    return (System_Collections_Generic_List_EventBulletinBoardEntity__o *)v13;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_string__o *__fastcall EventBulletinBoardMaster__GetAvailableMessages(
        EventBulletinBoardMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  EventBulletinBoardReleaseMaster_o *v15; // x22
  int32_t Count; // w0
  int32_t v17; // w23
  char v18; // w28
  int32_t i; // w24
  const MethodInfo *v20; // x2
  DataManager_o *v21; // x25
  __int64 v22; // x10

  if ( (byte_418A2D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventBulletinBoardReleaseMaster___, v6);
    sub_B2C35C(&EventBulletinBoardEntity_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v9);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_418A2D8 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventBulletinBoardReleaseMaster___),
        !this->fields.list) )
  {
LABEL_22:
    sub_B2C434(Instance, v14);
  }
  v15 = (EventBulletinBoardReleaseMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v17 = Count;
  v18 = 0;
  for ( i = 0; i < v17; ++i )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                                  i,
                                  (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_22;
    v21 = Instance;
    v22 = *(&EventBulletinBoardEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (EventBulletinBoardEntity_c *)Instance->klass->_2.typeHierarchy[v22 - 1] != EventBulletinBoardEntity_TypeInfo )
    {
      goto LABEL_22;
    }
    if ( *(_DWORD *)&Instance->fields._DispLog == eventId )
    {
      if ( !v15 )
        goto LABEL_22;
      Instance = (DataManager_o *)EventBulletinBoardReleaseMaster__IsOpen(v15, Instance->fields.m_CachedPtr, v20);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_22;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v21->fields.datalist,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      }
      v18 = 1;
    }
  }
  if ( (v18 & 1) != 0 )
    return (System_Collections_Generic_List_string__o *)v12;
  else
    return 0LL;
}