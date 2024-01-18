void __fastcall StoneShopMaster___ctor(StoneShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418576E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__, method);
    byte_418576E = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    42,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__);
}


StoneShopEntity_array *__fastcall StoneShopMaster__GetEnableEntitiyList(
        StoneShopMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Time; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  int32_t v15; // w23
  __int64 v16; // x10

  if ( (byte_418576F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_StoneShopEntity__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_StoneShopEntity__TypeInfo, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&StoneShopEntity_TypeInfo, v9);
    byte_418576F = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_StoneShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v15,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        v16 = *(&StoneShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (StoneShopEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] == StoneShopEntity_TypeInfo
          && Time >= SLODWORD(list[1].fields.items)
          && Time <= SHIDWORD(list[1].fields.items) )
        {
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_StoneShopEntity__Add__);
        }
      }
      if ( ++v15 >= v14 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B2C434(list, v12);
  }
LABEL_18:
  if ( !v11 )
    goto LABEL_20;
  return (StoneShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
StoneShopEntity_array *__fastcall StoneShopMaster__GetEnableEntitiyList_20878924(
        StoneShopMaster_o *this,
        int32_t effect,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t Time; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v16; // w23
  int32_t v17; // w24
  __int64 v18; // x10

  if ( (byte_4185770 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&effect);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_StoneShopEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_StoneShopEntity__TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&StoneShopEntity_TypeInfo, v11);
    byte_4185770 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_StoneShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v16 = (int)list;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v17,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v14 = list;
        v18 = *(&StoneShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (StoneShopEntity_c *)list->klass->_2.typeHierarchy[v18 - 1] == StoneShopEntity_TypeInfo
          && LODWORD(list[1].monitor) == effect
          && Time >= SLODWORD(list[1].fields.items)
          && Time <= SHIDWORD(list[1].fields.items) )
        {
          if ( !v13 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_StoneShopEntity__Add__);
        }
      }
      if ( ++v17 >= v16 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B2C434(list, v14);
  }
LABEL_19:
  if ( !v13 )
    goto LABEL_21;
  return (StoneShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


int32_t __fastcall StoneShopMaster__GetPayMultiTimePrice(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  StoneShopMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4185772 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_StoneShopMaster___, v1);
    sub_B2C35C(&DataManager_TypeInfo, v2);
    byte_4185772 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (StoneShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_StoneShopMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v4);
  return StoneShopMaster__GetPrice(Master_WarQuestSelectionMaster, 5, v5);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StoneShopMaster__GetPrice(StoneShopMaster_o *this, int32_t id, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4185771 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__, *(_QWORD *)&id);
    byte_4185771 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         id,
         (const MethodInfo_24E412C *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_B2C434(v5, v6);
  return HIDWORD(entity->fields.longName);
}