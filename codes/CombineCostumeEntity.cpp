void CombineCostumeEntity___ctor(CombineCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938410 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938410 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *CombineCostumeEntity__CreatePK(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  if ( (byte_593840F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_593840F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           costumeId,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *CombineCostumeEntity__CreatePrimaryKey(CombineCostumeEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineCostumeEntity__CreatePK(this->fields.svtId, this->fields.costumeId, v2);
}