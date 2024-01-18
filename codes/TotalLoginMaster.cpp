void __fastcall TotalLoginMaster___ctor(TotalLoginMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189958 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string___ctor__, method);
    byte_4189958 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    201,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TotalLoginEntity_o *__fastcall TotalLoginMaster__GetEntity(
        TotalLoginMaster_o *this,
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4189956 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_4189956 = 1;
  }
  PK = TotalLoginEntity__CreatePK(eventId, day, *(const MethodInfo **)&day);
  return (TotalLoginEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_24E4520 *)Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string__GetEntity__);
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

  if ( (byte_4189957 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string__TryGetEntity__, entity);
    byte_4189957 = 1;
  }
  PK = TotalLoginEntity__CreatePK(eventId, day, *(const MethodInfo **)&eventId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_TotalLoginMaster__TotalLoginEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TotalLoginMaster__getNextLoginBonusDay(
        TotalLoginMaster_o *this,
        int32_t totalLoginCnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x10

  if ( (byte_4189959 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&totalLoginCnt);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&TotalLoginEntity_TypeInfo, v6);
    byte_4189959 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_11;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           0,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v8 = *(&TotalLoginEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v8
          && (TotalLoginEntity_c *)list->klass->_2.typeHierarchy[v8 - 1] == TotalLoginEntity_TypeInfo )
        {
          return HIDWORD(list->fields.items) - totalLoginCnt;
        }
      }
    }
LABEL_11:
    sub_B2C434(list, *(_QWORD *)&totalLoginCnt);
  }
  return 0;
}