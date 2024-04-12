void __fastcall GachaExtraGiftMaster___ctor(GachaExtraGiftMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B3B1F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string___ctor__);
    byte_42B3B1F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    457,
    (const MethodInfo_23E268C *)Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string___ctor__);
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

  if ( (byte_42B3B20 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__GetEntity__);
    byte_42B3B20 = 1;
  }
  PK = GachaExtraGiftEntity__CreatePK(gachaId, idx, giftId, *(const MethodInfo **)&giftId);
  return (GachaExtraGiftEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23E2728 *)Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__GetEntity__);
}


GachaExtraGiftEntity_array *__fastcall GachaExtraGiftMaster__GetListGachaExtraGift(
        GachaExtraGiftMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  __int64 v10; // x10

  if ( (byte_42B3B1E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&GachaExtraGiftEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GachaExtraGiftEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaExtraGiftEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaExtraGiftEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaExtraGiftEntity__get_Count__);
    sub_B52984(&System_Collections_Generic_List_GachaExtraGiftEntity__TypeInfo);
    byte_42B3B1E = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GachaExtraGiftEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GachaExtraGiftEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v9,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        v10 = *(&GachaExtraGiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (GachaExtraGiftEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == GachaExtraGiftEntity_TypeInfo
          && LODWORD(list->fields.items) == gachaId )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GachaExtraGiftEntity__Add__);
        }
      }
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
LABEL_18:
    sub_B52A5C(list, v6);
  }
LABEL_14:
  if ( !v5 )
    goto LABEL_18;
  if ( v5->fields._size )
    return (GachaExtraGiftEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                           (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_GachaExtraGiftEntity__ToArray__);
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

  if ( (byte_42B3B21 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__TryGetEntity__);
    byte_42B3B21 = 1;
  }
  PK = GachaExtraGiftEntity__CreatePK(gachaId, idx, giftId, *(const MethodInfo **)&idx);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_GachaExtraGiftMaster__GachaExtraGiftEntity__string__TryGetEntity__);
}