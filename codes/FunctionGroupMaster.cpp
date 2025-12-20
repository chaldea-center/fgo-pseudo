void FunctionGroupMaster___ctor(FunctionGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CBD5 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string___ctor__);
    byte_4D2CBD5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    151,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FunctionGroupEntity_o *FunctionGroupMaster__GetEntity(
        FunctionGroupMaster_o *this,
        int32_t funcId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2CBD3 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__GetEntity__);
    byte_4D2CBD3 = 1;
  }
  PK = (Il2CppObject *)FunctionGroupEntity__CreatePK(funcId, eventId, *(const MethodInfo **)&eventId);
  return (FunctionGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_345FF78 *)Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool FunctionGroupMaster__TryGetEntity(
        FunctionGroupMaster_o *this,
        FunctionGroupEntity_o **entity,
        int32_t funcId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2CBD4 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__TryGetEntity__);
    byte_4D2CBD4 = 1;
  }
  PK = (Il2CppObject *)FunctionGroupEntity__CreatePK(funcId, eventId, *(const MethodInfo **)&funcId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__TryGetEntity__);
}