void __fastcall UserFriendPointGachaFreeDrawCampaignLogEntity___ctor(
        UserFriendPointGachaFreeDrawCampaignLogEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A2EC28 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataEntityBase_string___ctor__, method);
    byte_4A2EC28 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30FF5F8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserFriendPointGachaFreeDrawCampaignLogEntity__CreatePrimaryKey(
        UserFriendPointGachaFreeDrawCampaignLogEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A2EC27 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_1/*""*/, method);
    byte_4A2EC27 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}