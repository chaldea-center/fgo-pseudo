void __fastcall ShopDetailMaster___ctor(ShopDetailMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE58C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EE58C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    177,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_ShopDetailMaster__ShopDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ShopDetailEntity_o *__fastcall ShopDetailMaster__getShopDetailEntity(
        ShopDetailMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ShopDetailEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v14; // w21
  int32_t v15; // w22
  __int64 v16; // x10

  if ( (byte_42EE58D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, id, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&ShopDetailEntity_TypeInfo, v9, v10, v11);
    byte_42EE58D = 1;
  }
  result = (ShopDetailEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      result = (ShopDetailEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (ShopDetailEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                       (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)result,
                                       v15,
                                       (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !result )
        break;
      v16 = *(&ShopDetailEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (ShopDetailEntity_c *)result->klass->_2.typeHierarchy[v16 - 1] != ShopDetailEntity_TypeInfo )
      {
        break;
      }
      if ( result->fields.shopId == id )
        return result;
      if ( ++v15 >= v14 )
        return 0LL;
    }
LABEL_14:
    sub_B5D69C(result, *(_QWORD *)&id);
  }
  return 0LL;
}


ShopDetailEntity_array *__fastcall ShopDetailMaster__getShopDetailEntityList(
        ShopDetailMaster_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v26; // w21
  int32_t v27; // w22
  __int64 v28; // x10

  if ( (byte_42EE58E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopDetailEntity__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopDetailEntity___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_ShopDetailEntity__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&ShopDetailEntity_TypeInfo, v20, v21, v22);
    byte_42EE58E = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopDetailEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopDetailEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v26 = (int)list;
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list
        && (v28 = *(&ShopDetailEntity_TypeInfo->_2.bitflags2 + 1), *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28) )
      {
        if ( (ShopDetailEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == ShopDetailEntity_TypeInfo )
          v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        else
          v24 = 0LL;
        if ( !v23 )
          break;
      }
      else
      {
        v24 = 0LL;
        if ( !v23 )
          break;
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        v24,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopDetailEntity__Add__);
      if ( ++v27 >= v26 )
        return (ShopDetailEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
    }
LABEL_19:
    sub_B5D69C(list, v24);
  }
  if ( !v23 )
    goto LABEL_19;
  return (ShopDetailEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                     (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ShopDetailEntity__ToArray__);
}