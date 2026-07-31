void GachaTicketMaster___ctor(GachaTicketMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938AB4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string___ctor__);
    byte_5938AB4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    38,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaTicketEntity_o *GachaTicketMaster__GetEntity(
        GachaTicketMaster_o *this,
        int32_t gachaId,
        int32_t ticketItemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938AB2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string__GetEntity__);
    byte_5938AB2 = 1;
  }
  PK = (Il2CppObject *)GachaTicketEntity__CreatePK(gachaId, ticketItemId, *(const MethodInfo **)&ticketItemId);
  return (GachaTicketEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_3EE2044 *)Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool GachaTicketMaster__TryGetEntity(
        GachaTicketMaster_o *this,
        GachaTicketEntity_o **entity,
        int32_t gachaId,
        int32_t ticketItemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938AB3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string__TryGetEntity__);
    byte_5938AB3 = 1;
  }
  PK = (Il2CppObject *)GachaTicketEntity__CreatePK(gachaId, ticketItemId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string__TryGetEntity__);
}