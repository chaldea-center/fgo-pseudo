void __fastcall GachaTicketMaster___ctor(GachaTicketMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438F18B & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string___ctor__);
    byte_438F18B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    37,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaTicketEntity_o *__fastcall GachaTicketMaster__GetEntity(
        GachaTicketMaster_o *this,
        int32_t gachaId,
        int32_t ticketItemId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438F189 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string__GetEntity__);
    byte_438F189 = 1;
  }
  PK = GachaTicketEntity__CreatePK(gachaId, ticketItemId, *(const MethodInfo **)&ticketItemId);
  return (GachaTicketEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_21FBCE4 *)Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string__GetEntity__);
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

  if ( (byte_438F18A & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string__TryGetEntity__);
    byte_438F18A = 1;
  }
  PK = GachaTicketEntity__CreatePK(gachaId, ticketItemId, *(const MethodInfo **)&gachaId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_GachaTicketMaster__GachaTicketEntity__string__TryGetEntity__);
}