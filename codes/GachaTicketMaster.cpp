void __fastcall GachaTicketMaster___ctor(GachaTicketMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418B01A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string___ctor__, method);
    byte_418B01A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    36,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaTicketEntity_o *__fastcall GachaTicketMaster__GetEntity(
        GachaTicketMaster_o *this,
        int32_t gachaId,
        int32_t ticketItemId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418B018 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string__GetEntity__, *(_QWORD *)&gachaId);
    byte_418B018 = 1;
  }
  PK = GachaTicketEntity__CreatePK(gachaId, ticketItemId, *(const MethodInfo **)&ticketItemId);
  return (GachaTicketEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                  (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_24E4520 *)Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaTicketMaster__TryGetEntity(
        GachaTicketMaster_o *this,
        GachaTicketEntity_o **entity,
        int32_t gachaId,
        int32_t ticketItemId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418B019 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string__TryGetEntity__, entity);
    byte_418B019 = 1;
  }
  PK = GachaTicketEntity__CreatePK(gachaId, ticketItemId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string__TryGetEntity__);
}