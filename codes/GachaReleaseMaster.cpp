void __fastcall GachaReleaseMaster___ctor(GachaReleaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC62B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EC62B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    56,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string___ctor__);
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

  if ( (byte_42EC629 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string__GetEntity__,
      gachaId,
      type,
      *(_QWORD *)&targetId);
    byte_42EC629 = 1;
  }
  PK = GachaReleaseEntity__CreatePK(gachaId, type, targetId, *(const MethodInfo **)&targetId);
  return (GachaReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_23FB260 *)Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaReleaseMaster__IsEnableRelease(
        GachaReleaseMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w21
  int32_t v15; // w22
  __int64 v16; // x10

  if ( (byte_42EC62C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      gachaId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&GachaReleaseEntity_TypeInfo, v9, v10, v11);
    byte_42EC62C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B5D69C(list, *(_QWORD *)&gachaId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v15,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_14;
    v16 = *(&GachaReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (GachaReleaseEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] != GachaReleaseEntity_TypeInfo )
    {
      goto LABEL_14;
    }
    if ( LODWORD(list->fields.items) == gachaId )
      return GachaReleaseEntity__IsEnable((GachaReleaseEntity_o *)list, *(const MethodInfo **)&gachaId);
    if ( ++v15 >= v14 )
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

  if ( (byte_42EC62A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string__TryGetEntity__,
      (_DWORD)entity,
      gachaId,
      *(_QWORD *)&type);
    byte_42EC62A = 1;
  }
  PK = GachaReleaseEntity__CreatePK(gachaId, type, targetId, *(const MethodInfo **)&type);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string__TryGetEntity__);
}