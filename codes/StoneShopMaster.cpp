void __fastcall StoneShopMaster___ctor(StoneShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AEDD3 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__);
    byte_42AEDD3 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    43,
    (const MethodInfo_23E223C *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__);
}


StoneShopEntity_array *__fastcall StoneShopMaster__GetEnableEntitiyList(
        StoneShopMaster_o *this,
        const MethodInfo *method)
{
  int64_t Time; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v5; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v7; // w22
  int32_t v8; // w23
  __int64 v9; // x10

  if ( (byte_42AEDD4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_StoneShopEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_StoneShopEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StoneShopEntity_TypeInfo);
    byte_42AEDD4 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_StoneShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v7 = (int)list;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v5 = list;
        v9 = *(&StoneShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (StoneShopEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == StoneShopEntity_TypeInfo
          && Time >= SLODWORD(list[1].fields.items)
          && Time <= SHIDWORD(list[1].fields.items) )
        {
          if ( !v4 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v4,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_StoneShopEntity__Add__);
        }
      }
      if ( ++v8 >= v7 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B52A5C(list, v5);
  }
LABEL_18:
  if ( !v4 )
    goto LABEL_20;
  return (StoneShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


StoneShopEntity_array *__fastcall StoneShopMaster__GetEnableEntitiyList_23095916(
        StoneShopMaster_o *this,
        int32_t effect,
        const MethodInfo *method)
{
  int64_t Time; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v7; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v9; // w23
  int32_t v10; // w24
  __int64 v11; // x10

  if ( (byte_42AEDD5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_StoneShopEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_StoneShopEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StoneShopEntity_TypeInfo);
    byte_42AEDD5 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_StoneShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v9 = (int)list;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v10,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v7 = list;
        v11 = *(&StoneShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (StoneShopEntity_c *)list->klass->_2.typeHierarchy[v11 - 1] == StoneShopEntity_TypeInfo
          && LODWORD(list[1].monitor) == effect
          && Time >= SLODWORD(list[1].fields.items)
          && Time <= SHIDWORD(list[1].fields.items) )
        {
          if ( !v6 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v6,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_StoneShopEntity__Add__);
        }
      }
      if ( ++v10 >= v9 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B52A5C(list, v7);
  }
LABEL_19:
  if ( !v6 )
    goto LABEL_21;
  return (StoneShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


int32_t __fastcall StoneShopMaster__GetPayMultiTimePrice(const MethodInfo *method)
{
  StoneShopMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v2; // x1
  const MethodInfo *v3; // x2

  if ( (byte_42AEDD7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_StoneShopMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42AEDD7 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (StoneShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_StoneShopMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(0LL, v2);
  return StoneShopMaster__GetPrice(Master_WarQuestSelectionMaster, 5, v3);
}


int32_t __fastcall StoneShopMaster__GetPrice(StoneShopMaster_o *this, int32_t id, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42AEDD6 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__);
    byte_42AEDD6 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         id,
         (const MethodInfo_23E2334 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__);
  if ( !v5 )
    return 0;
  if ( !entity )
    sub_B52A5C(v5, v6);
  return HIDWORD(entity->fields.longName);
}