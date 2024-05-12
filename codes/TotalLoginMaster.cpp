void __fastcall TotalLoginMaster___ctor(TotalLoginMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D5F6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string___ctor__);
    byte_438D5F6 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    202,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalLoginEntity_o *__fastcall TotalLoginMaster__GetEntity(
        TotalLoginMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438D5F4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string__GetEntity__);
    byte_438D5F4 = 1;
  }
  PK = TotalLoginEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (TotalLoginEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_21FBCE4 *)Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TotalLoginMaster__TryGetEntity(
        TotalLoginMaster_o *this,
        TotalLoginEntity_o **entity,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438D5F5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string__TryGetEntity__);
    byte_438D5F5 = 1;
  }
  PK = TotalLoginEntity__CreatePK(eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TotalLoginMaster__getNextLoginBonusDay(
        TotalLoginMaster_o *this,
        int32_t totalLoginCnt,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x10

  if ( (byte_438D5F7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&TotalLoginEntity_TypeInfo);
    byte_438D5F7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_11;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           0,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = *(&TotalLoginEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v6
          && (TotalLoginEntity_c *)list->klass->_2.typeHierarchy[v6 - 1] == TotalLoginEntity_TypeInfo )
        {
          return HIDWORD(list->fields.items) - totalLoginCnt;
        }
      }
    }
LABEL_11:
    sub_B7769C(list, *(_QWORD *)&totalLoginCnt);
  }
  return 0;
}