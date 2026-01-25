void DropAddMaster___ctor(DropAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE4F3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_DropAddMaster__DropAddEntity__string___ctor__);
    byte_4CEE4F3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    556,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_DropAddMaster__DropAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
DropAddEntity_o *DropAddMaster__GetEntity(
        DropAddMaster_o *this,
        int32_t eventId,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEE4F4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_DropAddMaster__DropAddEntity__string__GetEntity__);
    byte_4CEE4F4 = 1;
  }
  PK = (Il2CppObject *)DropAddEntity__CreatePK(eventId, giftId, *(const MethodInfo **)&giftId);
  return (DropAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_3432DB4 *)Method_DataMasterBase_DropAddMaster__DropAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool DropAddMaster__TryGetEntity(
        DropAddMaster_o *this,
        DropAddEntity_o **entity,
        int32_t eventId,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEE4F5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_DropAddMaster__DropAddEntity__string__TryGetEntity__);
    byte_4CEE4F5 = 1;
  }
  PK = (Il2CppObject *)DropAddEntity__CreatePK(eventId, giftId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_DropAddMaster__DropAddEntity__string__TryGetEntity__);
}