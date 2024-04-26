void __fastcall EventBonusFilterGroupInfoEntity___ctor(
        EventBonusFilterGroupInfoEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_43550D8 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_int___ctor__);
    byte_43550D8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21C02EC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventBonusFilterGroupInfoEntity__CreatePrimaryKey(
        EventBonusFilterGroupInfoEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.groupId;
}