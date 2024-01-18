void __fastcall ShopDetailMaster___ctor(ShopDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418D4CC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int___ctor__, method);
    byte_418D4CC = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    176,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ShopDetailEntity_o *__fastcall ShopDetailMaster__getShopDetailEntity(
        ShopDetailMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ShopDetailEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  __int64 v11; // x10

  if ( (byte_418D4CD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&ShopDetailEntity_TypeInfo, v6);
    byte_418D4CD = 1;
  }
  result = (ShopDetailEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      result = (ShopDetailEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (ShopDetailEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                       (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                       v10,
                                       (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      v11 = *(&ShopDetailEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (ShopDetailEntity_c *)result->klass->_2.typeHierarchy[v11 - 1] != ShopDetailEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.shopId == id )
        return result;
      if ( ++v10 >= v9 )
        return 0LL;
    }
LABEL_14:
    sub_B2C434(result, *(_QWORD *)&id);
  }
  return 0LL;
}


ShopDetailEntity_array *__fastcall ShopDetailMaster__getShopDetailEntityList(
        ShopDetailMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v12; // w21
  int32_t v13; // w22
  __int64 v14; // x10

  if ( (byte_418D4CE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopDetailEntity__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopDetailEntity___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ShopDetailEntity__TypeInfo, v7);
    sub_B2C35C(&ShopDetailEntity_TypeInfo, v8);
    byte_418D4CE = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopDetailEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v12 = (int)list;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v13,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list
        && (v14 = *(&ShopDetailEntity_TypeInfo->_2.bitflags2 + 1), *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v14) )
      {
        if ( (ShopDetailEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] == ShopDetailEntity_TypeInfo )
          v10 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        else
          v10 = 0LL;
        if ( !v9 )
          break;
      }
      else
      {
        v10 = 0LL;
        if ( !v9 )
          break;
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        v10,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ShopDetailEntity__Add__);
      if ( ++v13 >= v12 )
        return (ShopDetailEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
    }
LABEL_19:
    sub_B2C434(list, v10);
  }
  if ( !v9 )
    goto LABEL_19;
  return (ShopDetailEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
}