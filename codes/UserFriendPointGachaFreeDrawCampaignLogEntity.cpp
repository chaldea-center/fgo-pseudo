void __fastcall UserFriendPointGachaFreeDrawCampaignLogEntity___ctor(
        UserFriendPointGachaFreeDrawCampaignLogEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4186FB2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4186FB2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserFriendPointGachaFreeDrawCampaignLogEntity__CreatePrimaryKey(
        UserFriendPointGachaFreeDrawCampaignLogEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4186FB1 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4186FB1 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}