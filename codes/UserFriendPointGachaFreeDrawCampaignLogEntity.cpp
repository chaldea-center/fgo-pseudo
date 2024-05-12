void __fastcall UserFriendPointGachaFreeDrawCampaignLogEntity___ctor(
        UserFriendPointGachaFreeDrawCampaignLogEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4389CF6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_4389CF6 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserFriendPointGachaFreeDrawCampaignLogEntity__CreatePrimaryKey(
        UserFriendPointGachaFreeDrawCampaignLogEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4389CF5 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389CF5 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}