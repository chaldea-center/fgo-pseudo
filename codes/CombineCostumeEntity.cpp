void __fastcall CombineCostumeEntity___ctor(CombineCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AF17 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5AF17 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall CombineCostumeEntity__CreatePK(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  if ( (byte_4A5AF16 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5AF16 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           costumeId,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall CombineCostumeEntity__CreatePrimaryKey(
        CombineCostumeEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineCostumeEntity__CreatePK(this->fields.svtId, this->fields.costumeId, v2);
}