void __fastcall ServantScriptMultipleMaster___ctor(ServantScriptMultipleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF312 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_ServantScriptMultipleMaster__ServantScriptMultipleEntity__string___ctor__,
      method);
    byte_49FF312 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    404,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_ServantScriptMultipleMaster__ServantScriptMultipleEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantScriptMultipleEntity_o *__fastcall ServantScriptMultipleMaster__GetEntity(
        ServantScriptMultipleMaster_o *this,
        int32_t id,
        int32_t form,
        int32_t position,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FF310 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_ServantScriptMultipleMaster__ServantScriptMultipleEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_49FF310 = 1;
  }
  PK = (Il2CppObject *)ServantScriptMultipleEntity__CreatePK(id, form, position, *(const MethodInfo **)&position);
  return (ServantScriptMultipleEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                            PK,
                                            (const MethodInfo_30D6AF0 *)Method_DataMasterBase_ServantScriptMultipleMaster__ServantScriptMultipleEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantScriptMultipleMaster__TryGetEntity(
        ServantScriptMultipleMaster_o *this,
        ServantScriptMultipleEntity_o **entity,
        int32_t id,
        int32_t form,
        int32_t position,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FF311 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_ServantScriptMultipleMaster__ServantScriptMultipleEntity__string__TryGetEntity__,
      entity);
    byte_49FF311 = 1;
  }
  PK = (Il2CppObject *)ServantScriptMultipleEntity__CreatePK(id, form, position, *(const MethodInfo **)&form);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_ServantScriptMultipleMaster__ServantScriptMultipleEntity__string__TryGetEntity__);
}