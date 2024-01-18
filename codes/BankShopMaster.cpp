void __fastcall BankShopMaster___ctor(BankShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41849D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__, method);
    byte_41849D8 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    43,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  int32_t v15; // w23
  __int64 v16; // x10

  if ( (byte_41849D9 & 1) == 0 )
  {
    sub_B2C35C(&BankShopEntity_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BankShopEntity__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BankShopEntity__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BankShopEntity___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_BankShopEntity__TypeInfo, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    byte_41849D9 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
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
        v16 = *(&BankShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (BankShopEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] == BankShopEntity_TypeInfo
          && Time >= (__int64)list[3].monitor
          && Time <= (__int64)list[3].fields.items )
        {
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BankShopEntity__Add__);
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
  return (BankShopEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                   (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
}


BankShopEntity_o *__fastcall BankShopMaster__SearchProductId(
        BankShopMaster_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  BankShopEntity_o *v11; // x23
  __int64 v12; // x10

  if ( (byte_41849DA & 1) == 0 )
  {
    sub_B2C35C(&BankShopEntity_TypeInfo, productId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    byte_41849DA = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v10,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v11 = (BankShopEntity_o *)list;
        v12 = *(&BankShopEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v12
          && *(BankShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v12 - 8) == BankShopEntity_TypeInfo )
        {
          if ( !productId )
            break;
          if ( System_String__Equals_44292872(productId, *((System_String_o **)list + 4), 0LL) )
            return v11;
        }
      }
      if ( ++v10 >= v9 )
        return 0LL;
    }
LABEL_15:
    sub_B2C434(list, productId);
  }
  return 0LL;
}