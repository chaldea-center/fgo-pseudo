void __fastcall ServantCardEntity___ctor(ServantCardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4187C2B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4187C2B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCardEntity__CreatePK(int32_t svtId, int32_t cardId, const MethodInfo *method)
{
  if ( (byte_4187C2A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&cardId);
    byte_4187C2A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           cardId,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantCardEntity__CreatePrimaryKey(ServantCardEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantCardEntity__CreatePK(this->fields.svtId, this->fields.cardId, v2);
}


bool __fastcall ServantCardEntity__IsAttackType(ServantCardEntity_o *this, int32_t type, const MethodInfo *method)
{
  return this->fields.attackType == type;
}