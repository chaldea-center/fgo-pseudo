void __fastcall GachaReleaseMaster___ctor(GachaReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418B007 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string___ctor__, method);
    byte_418B007 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    55,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaReleaseEntity_o *__fastcall GachaReleaseMaster__GetEntity(
        GachaReleaseMaster_o *this,
        int32_t gachaId,
        int32_t type,
        int32_t targetId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418B005 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string__GetEntity__, *(_QWORD *)&gachaId);
    byte_418B005 = 1;
  }
  PK = GachaReleaseEntity__CreatePK(gachaId, type, targetId, *(const MethodInfo **)&targetId);
  return (GachaReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_24E4520 *)Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaReleaseMaster__IsEnableRelease(
        GachaReleaseMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  __int64 v11; // x10

  if ( (byte_418B008 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&gachaId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&GachaReleaseEntity_TypeInfo, v6);
    byte_418B008 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B2C434(list, *(_QWORD *)&gachaId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v10,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_14;
    v11 = *(&GachaReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (GachaReleaseEntity_c *)list->klass->_2.typeHierarchy[v11 - 1] != GachaReleaseEntity_TypeInfo )
    {
      goto LABEL_14;
    }
    if ( LODWORD(list->fields.items) == gachaId )
      return GachaReleaseEntity__IsEnable((GachaReleaseEntity_o *)list, *(const MethodInfo **)&gachaId);
    if ( ++v10 >= v9 )
      return 1;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaReleaseMaster__TryGetEntity(
        GachaReleaseMaster_o *this,
        GachaReleaseEntity_o **entity,
        int32_t gachaId,
        int32_t type,
        int32_t targetId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418B006 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string__TryGetEntity__, entity);
    byte_418B006 = 1;
  }
  PK = GachaReleaseEntity__CreatePK(gachaId, type, targetId, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string__TryGetEntity__);
}