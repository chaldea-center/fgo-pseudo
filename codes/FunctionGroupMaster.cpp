void __fastcall FunctionGroupMaster___ctor(FunctionGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66E17 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string___ctor__, method);
    byte_4B66E17 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    151,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
FunctionGroupEntity_o *__fastcall FunctionGroupMaster__GetEntity(
        FunctionGroupMaster_o *this,
        int32_t funcId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B66E15 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__GetEntity__,
      *(_QWORD *)&funcId);
    byte_4B66E15 = 1;
  }
  PK = (Il2CppObject *)FunctionGroupEntity__CreatePK(funcId, eventId, *(const MethodInfo **)&eventId);
  return (FunctionGroupEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31FDB1C *)Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall FunctionGroupMaster__TryGetEntity(
        FunctionGroupMaster_o *this,
        FunctionGroupEntity_o **entity,
        int32_t funcId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B66E16 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__TryGetEntity__, entity);
    byte_4B66E16 = 1;
  }
  PK = (Il2CppObject *)FunctionGroupEntity__CreatePK(funcId, eventId, *(const MethodInfo **)&funcId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_FunctionGroupMaster__FunctionGroupEntity__string__TryGetEntity__);
}