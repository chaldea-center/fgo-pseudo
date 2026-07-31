void MasterPhotoMaster___ctor(MasterPhotoMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939AA2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_MasterPhotoMaster__MasterPhotoEntity__string___ctor__);
    byte_5939AA2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    491,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_MasterPhotoMaster__MasterPhotoEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MasterPhotoEntity_o *MasterPhotoMaster__GetEntity(
        MasterPhotoMaster_o *this,
        int32_t equipId,
        int32_t type,
        int32_t position,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939AA3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_MasterPhotoMaster__MasterPhotoEntity__string__GetEntity__);
    byte_5939AA3 = 1;
  }
  PK = (Il2CppObject *)MasterPhotoEntity__CreatePK(equipId, type, position, *(const MethodInfo **)&position);
  return (MasterPhotoEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_3EE2044 *)Method_DataMasterBase_MasterPhotoMaster__MasterPhotoEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool MasterPhotoMaster__TryGetEntity(
        MasterPhotoMaster_o *this,
        MasterPhotoEntity_o **entity,
        int32_t equipId,
        int32_t type,
        int32_t position,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5939AA4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_MasterPhotoMaster__MasterPhotoEntity__string__TryGetEntity__);
    byte_5939AA4 = 1;
  }
  PK = (Il2CppObject *)MasterPhotoEntity__CreatePK(equipId, type, position, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_MasterPhotoMaster__MasterPhotoEntity__string__TryGetEntity__);
}