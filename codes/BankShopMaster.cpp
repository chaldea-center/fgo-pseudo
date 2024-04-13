void __fastcall BankShopMaster___ctor(BankShopMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E660F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E660F = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    44,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__);
}


BankShopEntity_array *__fastcall BankShopMaster__GetEnableEntitiyList(BankShopMaster_o *this, const MethodInfo *method)
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

  if ( (byte_42E6610 & 1) == 0 )
  {
    sub_B5D5C4(&BankShopEntity_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BankShopEntity__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BankShopEntity__ToArray__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BankShopEntity___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_BankShopEntity__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&NetworkManager_TypeInfo, v23, v24, v25);
    byte_42E6610 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
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
        v32 = *(&BankShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v32
          && (BankShopEntity_c *)list->klass->_2.typeHierarchy[v32 - 1] == BankShopEntity_TypeInfo
          && Time >= (__int64)list[3].monitor
          && Time <= (__int64)list[3].fields.items )
        {
          if ( !v27 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v27,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BankShopEntity__Add__);
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
  return (BankShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                   (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
}


BankShopEntity_o *__fastcall BankShopMaster__SearchProductId(
        BankShopMaster_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  void *list; // x0
  int32_t Count; // w0
  int32_t v14; // w21
  int32_t v15; // w22
  BankShopEntity_o *v16; // x23
  __int64 v17; // x10

  if ( (byte_42E6611 & 1) == 0 )
  {
    sub_B5D5C4(&BankShopEntity_TypeInfo, (_DWORD)productId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    byte_42E6611 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v15,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = (BankShopEntity_o *)list;
        v17 = *(&BankShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v17
          && *(BankShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v17 - 8) == BankShopEntity_TypeInfo )
        {
          if ( !productId )
            break;
          if ( System_String__Equals_44565128(productId, *((System_String_o **)list + 4), 0LL) )
            return v16;
        }
      }
      if ( ++v15 >= v14 )
        return 0LL;
    }
LABEL_15:
    sub_B5D69C(list, productId);
  }
  return 0LL;
}