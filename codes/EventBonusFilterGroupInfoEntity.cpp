void __fastcall EventBonusFilterGroupInfoEntity___ctor(
        EventBonusFilterGroupInfoEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5B022 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5B022 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventBonusFilterGroupInfoEntity__CreatePrimaryKey(
        EventBonusFilterGroupInfoEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.groupId;
}