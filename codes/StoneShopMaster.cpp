void __fastcall StoneShopMaster___ctor(StoneShopMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7AFA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E7AFA = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    43,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int___ctor__);
}


StoneShopEntity_array *__fastcall StoneShopMaster__GetEnableEntitiyList(
        StoneShopMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int64_t Time; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v28; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v30; // w22
  int32_t v31; // w23
  __int64 v32; // x10

  if ( (byte_42E7AFB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StoneShopEntity__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_StoneShopEntity__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StoneShopEntity_TypeInfo, v23, v24, v25);
    byte_42E7AFB = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_StoneShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v30 = (int)list;
    v31 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v31,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v28 = list;
        v32 = *(&StoneShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v32
          && (StoneShopEntity_c *)list->klass->_2.typeHierarchy[v32 - 1] == StoneShopEntity_TypeInfo
          && Time >= SLODWORD(list[1].fields.items)
          && Time <= SHIDWORD(list[1].fields.items) )
        {
          if ( !v27 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v27,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_StoneShopEntity__Add__);
        }
      }
      if ( ++v31 >= v30 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B5D69C(list, v28);
  }
LABEL_18:
  if ( !v27 )
    goto LABEL_20;
  return (StoneShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


StoneShopEntity_array *__fastcall StoneShopMaster__GetEnableEntitiyList_23586212(
        StoneShopMaster_o *this,
        int32_t effect,
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
  int64_t Time; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v29; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v31; // w23
  int32_t v32; // w24
  __int64 v33; // x10

  if ( (byte_42E7AFC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      effect,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StoneShopEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StoneShopEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_StoneShopEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_StoneShopEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StoneShopEntity_TypeInfo, v24, v25, v26);
    byte_42E7AFC = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_StoneShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_StoneShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v31 = (int)list;
    v32 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v32,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v29 = list;
        v33 = *(&StoneShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v33
          && (StoneShopEntity_c *)list->klass->_2.typeHierarchy[v33 - 1] == StoneShopEntity_TypeInfo
          && LODWORD(list[1].monitor) == effect
          && Time >= SLODWORD(list[1].fields.items)
          && Time <= SHIDWORD(list[1].fields.items) )
        {
          if ( !v28 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v28,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_StoneShopEntity__Add__);
        }
      }
      if ( ++v32 >= v31 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B5D69C(list, v29);
  }
LABEL_19:
  if ( !v28 )
    goto LABEL_21;
  return (StoneShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v28,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_StoneShopEntity__ToArray__);
}


int32_t __fastcall StoneShopMaster__GetPayMultiTimePrice(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  StoneShopMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_42E7AFE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_StoneShopMaster___, v1, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v4, v5, v6);
    byte_42E7AFE = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (StoneShopMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_StoneShopMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v8);
  return StoneShopMaster__GetPrice(Master_WarQuestSelectionMaster, 5, v9);
}


int32_t __fastcall StoneShopMaster__GetPrice(StoneShopMaster_o *this, int32_t id, const MethodInfo *method)
{
  __int64 v3; // x3
  _BOOL8 v6; // x0
  __int64 v7; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7AFD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__, id, (_DWORD)method, v3);
    byte_42E7AFD = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         id,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_StoneShopMaster__StoneShopEntity__int__TryGetEntity__);
  if ( !v6 )
    return 0;
  if ( !entity )
    sub_B5D69C(v6, v7);
  return HIDWORD(entity->fields.longName);
}