void __fastcall SelectBonusEntity___ctor(SelectBonusEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD6BA & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_string___ctor__);
    byte_4BDD6BA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_325995C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall SelectBonusEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4BDD6B9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4BDD6B9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_2FAE028 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SelectBonusEntity__CreatePrimaryKey(SelectBonusEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SelectBonusEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}