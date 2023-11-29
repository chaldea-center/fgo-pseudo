void __fastcall StoneShopMaster___ctor(StoneShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F7C02 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__, method);
    byte_40F7C02 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    42,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v18; // w22
  int32_t v19; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v20; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v22; // x10

  if ( (byte_40F7C03 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_StoneShopEntity__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_StoneShopEntity__TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&StoneShopEntity_TypeInfo, v9);
    byte_40F7C03 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_StoneShopEntity__TypeInfo,
                                                                                                  v11,
                                                                                                  v12,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      v20 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v20 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v20,
               v19,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v22 = *(&StoneShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
          && (StoneShopEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == StoneShopEntity_TypeInfo
          && Time >= SLODWORD(Item[3].klass)
          && Time <= SHIDWORD(Item[3].klass) )
        {
          if ( !v15 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_StoneShopEntity__Add__);
        }
      }
      if ( ++v19 >= v18 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B170D4();
  }
LABEL_18:
  if ( !v15 )
    goto LABEL_20;
  return (StoneShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
StoneShopEntity_array *__fastcall StoneShopMaster__GetEnableEntitiyList_20905636(
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v20; // w23
  int32_t v21; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v22; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v24; // x10

  if ( (byte_40F7C04 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&effect);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_StoneShopEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_StoneShopEntity__TypeInfo, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&StoneShopEntity_TypeInfo, v11);
    byte_40F7C04 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_StoneShopEntity__TypeInfo,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      v22 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v22 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v22,
               v21,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v24 = *(&StoneShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v24
          && (StoneShopEntity_c *)Item->klass->_2.typeHierarchy[v24 - 1] == StoneShopEntity_TypeInfo
          && LODWORD(Item[2].monitor) == effect
          && Time >= SLODWORD(Item[3].klass)
          && Time <= SHIDWORD(Item[3].klass) )
        {
          if ( !v17 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_StoneShopEntity__Add__);
        }
      }
      if ( ++v21 >= v20 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B170D4();
  }
LABEL_19:
  if ( !v17 )
    goto LABEL_21;
  return (StoneShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


int32_t __fastcall StoneShopMaster__GetPayMultiTimePrice(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  StoneShopMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40F7C06 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_StoneShopMaster___, v1);
    sub_B16FFC(&DataManager_TypeInfo, v2);
    byte_40F7C06 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (StoneShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_StoneShopMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  return StoneShopMaster__GetPrice(Master_WarQuestSelectionMaster, 5, v4);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StoneShopMaster__GetPrice(StoneShopMaster_o *this, int32_t id, const MethodInfo *method)
{
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F7C05 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__, *(_QWORD *)&id);
    byte_40F7C05 = 1;
  }
  entity = 0LL;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)this,
          &entity,
          id,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
    sub_B170D4();
  return HIDWORD(entity->fields.longName);
}