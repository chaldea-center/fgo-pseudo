void DropAddMaster___ctor(DropAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4E0488C & 1) == 0 )
  {
    sub_1CE6700(&Method_DataMasterBase_DropAddMaster__DropAddEntity__string___ctor__);
    byte_4E0488C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    556,
    (const MethodInfo_34EBC44 *)Method_DataMasterBase_DropAddMaster__DropAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
DropAddEntity_o *DropAddMaster__GetEntity(
        DropAddMaster_o *this,
        int32_t eventId,
        int32_t giftId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4E0488D & 1) == 0 )
  {
    sub_1CE6700(&Method_DataMasterBase_DropAddMaster__DropAddEntity__string__GetEntity__);
    byte_4E0488D = 1;
  }
  PK = (Il2CppObject *)DropAddEntity__CreatePK(eventId, giftId, *(const MethodInfo **)&giftId);
  return (DropAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_34EE1BC *)Method_DataMasterBase_DropAddMaster__DropAddEntity__string__GetEntity__);
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

  if ( (byte_4E0488E & 1) == 0 )
  {
    sub_1CE6700(&Method_DataMasterBase_DropAddMaster__DropAddEntity__string__TryGetEntity__);
    byte_4E0488E = 1;
  }
  PK = (Il2CppObject *)DropAddEntity__CreatePK(eventId, giftId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_34EE208 *)Method_DataMasterBase_DropAddMaster__DropAddEntity__string__TryGetEntity__);
}