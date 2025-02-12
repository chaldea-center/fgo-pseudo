void __fastcall GachaReleaseMaster___ctor(GachaReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7D60 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string___ctor__, method);
    byte_4BC7D60 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    61,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaReleaseEntity_o *__fastcall GachaReleaseMaster__GetEntity(
        GachaReleaseMaster_o *this,
        int32_t gachaId,
        int32_t type,
        int32_t targetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC7D5E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string__GetEntity__, *(_QWORD *)&gachaId);
    byte_4BC7D5E = 1;
  }
  PK = (Il2CppObject *)GachaReleaseEntity__CreatePK(gachaId, type, targetId, *(const MethodInfo **)&targetId);
  return (GachaReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_324D130 *)Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaReleaseMaster__IsEnableRelease(
        GachaReleaseMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22

  if ( (byte_4BC7D61 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_GachaReleaseEntity__get_Count__, *(_QWORD *)&gachaId);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_GachaReleaseEntity__get_Item__, v5);
    byte_4BC7D61 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_1C1AE30(list, *(_QWORD *)&gachaId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_GachaReleaseEntity__get_Count__);
  if ( Count < 1 )
    return 1;
  v8 = Count;
  v9 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_12;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v9,
                                                               (const MethodInfo_31E2A0C *)Method_System_Collections_ObjectModel_Collection_GachaReleaseEntity__get_Item__);
    if ( !list )
      goto LABEL_12;
    if ( LODWORD(list->fields.items) == gachaId )
      return GachaReleaseEntity__IsEnable((GachaReleaseEntity_o *)list, *(const MethodInfo **)&gachaId);
    if ( v8 == ++v9 )
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
  Il2CppObject *PK; // x2

  if ( (byte_4BC7D5F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string__TryGetEntity__, entity);
    byte_4BC7D5F = 1;
  }
  PK = (Il2CppObject *)GachaReleaseEntity__CreatePK(gachaId, type, targetId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string__TryGetEntity__);
}