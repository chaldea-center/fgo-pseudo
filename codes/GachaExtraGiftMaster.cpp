void __fastcall GachaExtraGiftMaster___ctor(GachaExtraGiftMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418AFEB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string___ctor__, method);
    byte_418AFEB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    456,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaExtraGiftEntity_o *__fastcall GachaExtraGiftMaster__GetEntity(
        GachaExtraGiftMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        int32_t giftId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418AFEC & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_418AFEC = 1;
  }
  PK = GachaExtraGiftEntity__CreatePK(gachaId, idx, giftId, *(const MethodInfo **)&giftId);
  return (GachaExtraGiftEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_24E4520 *)Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GachaExtraGiftEntity_array *__fastcall GachaExtraGiftMaster__GetListGachaExtraGift(
        GachaExtraGiftMaster_o *this,
        int32_t gachaId,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v15; // w22
  int32_t v16; // w23
  __int64 v17; // x10

  if ( (byte_418AFEA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&gachaId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&GachaExtraGiftEntity_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaExtraGiftEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaExtraGiftEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaExtraGiftEntity___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaExtraGiftEntity__get_Count__, v10);
    sub_B2C35C(&System_Collections_Generic_List_GachaExtraGiftEntity__TypeInfo, v11);
    byte_418AFEA = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GachaExtraGiftEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GachaExtraGiftEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v15 = (int)list;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v16,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v13 = list;
        v17 = *(&GachaExtraGiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (GachaExtraGiftEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] == GachaExtraGiftEntity_TypeInfo
          && LODWORD(list->fields.items) == gachaId )
        {
          if ( !v12 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GachaExtraGiftEntity__Add__);
        }
      }
      if ( ++v16 >= v15 )
        goto LABEL_14;
    }
LABEL_18:
    sub_B2C434(list, v13);
  }
LABEL_14:
  if ( !v12 )
    goto LABEL_18;
  if ( v12->fields._size )
    return (GachaExtraGiftEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                           (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_GachaExtraGiftEntity__ToArray__);
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaExtraGiftMaster__TryGetEntity(
        GachaExtraGiftMaster_o *this,
        GachaExtraGiftEntity_o **entity,
        int32_t gachaId,
        int32_t idx,
        int32_t giftId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418AFED & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__TryGetEntity__, entity);
    byte_418AFED = 1;
  }
  PK = GachaExtraGiftEntity__CreatePK(gachaId, idx, giftId, *(const MethodInfo **)&idx);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__TryGetEntity__);
}