void __fastcall UserFriendPointGachaFreeDrawCampaignLogEntity___ctor(
        UserFriendPointGachaFreeDrawCampaignLogEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B67904 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B67904 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserFriendPointGachaFreeDrawCampaignLogEntity__CreatePrimaryKey(
        UserFriendPointGachaFreeDrawCampaignLogEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B67903 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B67903 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}