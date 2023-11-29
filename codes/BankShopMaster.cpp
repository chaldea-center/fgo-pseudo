void __fastcall BankShopMaster___ctor(BankShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F6ED3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__, method);
    byte_40F6ED3 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    43,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__);
}


BankShopEntity_array *__fastcall BankShopMaster__GetEnableEntitiyList(BankShopMaster_o *this, const MethodInfo *method)
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

  if ( (byte_40F6ED4 & 1) == 0 )
  {
    sub_B16FFC(&BankShopEntity_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_BankShopEntity__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BankShopEntity__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BankShopEntity___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_BankShopEntity__TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    byte_40F6ED4 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BankShopEntity__TypeInfo,
                                                                                                  v11,
                                                                                                  v12,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
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
        v22 = *(&BankShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
          && (BankShopEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == BankShopEntity_TypeInfo
          && Time >= (__int64)Item[6].monitor
          && Time <= (__int64)Item[7].klass )
        {
          if ( !v15 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BankShopEntity__Add__);
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
  return (BankShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
}


BankShopEntity_o *__fastcall BankShopMaster__SearchProductId(
        BankShopMaster_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x0
  System_String_o **Item; // x0
  BankShopEntity_o *v13; // x23
  __int64 v14; // x10

  if ( (byte_40F6ED5 & 1) == 0 )
  {
    sub_B16FFC(&BankShopEntity_TypeInfo, productId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    byte_40F6ED5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      v11 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v11 )
        break;
      Item = (System_String_o **)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                   v11,
                                   v10,
                                   (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v13 = (BankShopEntity_o *)Item;
        v14 = *(&BankShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( BYTE4((*Item)[12].monitor) >= (unsigned int)v14
          && *((BankShopEntity_c **)(*Item)[8].monitor + v14 - 1) == BankShopEntity_TypeInfo )
        {
          if ( !productId )
            break;
          if ( System_String__Equals_43731072(productId, Item[4], 0LL) )
            return v13;
        }
      }
      if ( ++v10 >= v9 )
        return 0LL;
    }
LABEL_15:
    sub_B170D4();
  }
  return 0LL;
}