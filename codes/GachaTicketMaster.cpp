void __fastcall GachaTicketMaster___ctor(GachaTicketMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66E91 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string___ctor__, method);
    byte_4B66E91 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    38,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaTicketEntity_o *__fastcall GachaTicketMaster__GetEntity(
        GachaTicketMaster_o *this,
        int32_t gachaId,
        int32_t ticketItemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B66E8F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string__GetEntity__, *(_QWORD *)&gachaId);
    byte_4B66E8F = 1;
  }
  PK = (Il2CppObject *)GachaTicketEntity__CreatePK(gachaId, ticketItemId, *(const MethodInfo **)&ticketItemId);
  return (GachaTicketEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_31FDB1C *)Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaTicketMaster__TryGetEntity(
        GachaTicketMaster_o *this,
        GachaTicketEntity_o **entity,
        int32_t gachaId,
        int32_t ticketItemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B66E90 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string__TryGetEntity__, entity);
    byte_4B66E90 = 1;
  }
  PK = (Il2CppObject *)GachaTicketEntity__CreatePK(gachaId, ticketItemId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string__TryGetEntity__);
}