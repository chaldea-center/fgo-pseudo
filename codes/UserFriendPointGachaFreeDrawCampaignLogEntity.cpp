void __fastcall UserFriendPointGachaFreeDrawCampaignLogEntity___ctor(
        UserFriendPointGachaFreeDrawCampaignLogEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5BE58 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BE58 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserFriendPointGachaFreeDrawCampaignLogEntity__CreatePrimaryKey(
        UserFriendPointGachaFreeDrawCampaignLogEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5BE57 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BE57 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}