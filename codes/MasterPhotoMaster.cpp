void __fastcall MasterPhotoMaster___ctor(MasterPhotoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FFBBF & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_MasterPhotoMaster__MasterPhotoEntity__string___ctor__, method);
    byte_49FFBBF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    483,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_MasterPhotoMaster__MasterPhotoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MasterPhotoEntity_o *__fastcall MasterPhotoMaster__GetEntity(
        MasterPhotoMaster_o *this,
        int32_t equipId,
        int32_t type,
        int32_t position,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FFBC0 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_MasterPhotoMaster__MasterPhotoEntity__string__GetEntity__, *(_QWORD *)&equipId);
    byte_49FFBC0 = 1;
  }
  PK = (Il2CppObject *)MasterPhotoEntity__CreatePK(equipId, type, position, *(const MethodInfo **)&position);
  return (MasterPhotoEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_30D6AF0 *)Method_DataMasterBase_MasterPhotoMaster__MasterPhotoEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MasterPhotoMaster__TryGetEntity(
        MasterPhotoMaster_o *this,
        MasterPhotoEntity_o **entity,
        int32_t equipId,
        int32_t type,
        int32_t position,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FFBC1 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_MasterPhotoMaster__MasterPhotoEntity__string__TryGetEntity__, entity);
    byte_49FFBC1 = 1;
  }
  PK = (Il2CppObject *)MasterPhotoEntity__CreatePK(equipId, type, position, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_MasterPhotoMaster__MasterPhotoEntity__string__TryGetEntity__);
}