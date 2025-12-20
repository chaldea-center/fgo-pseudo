void CombineCostumeEntity___ctor(CombineCostumeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C5F4 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2C5F4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *CombineCostumeEntity__CreatePK(int32_t svtId, int32_t costumeId, const MethodInfo *method)
{
  if ( (byte_4D2C5F3 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D2C5F3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           costumeId,
           (const MethodInfo_319A2BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *CombineCostumeEntity__CreatePrimaryKey(CombineCostumeEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineCostumeEntity__CreatePK(this->fields.svtId, this->fields.costumeId, v2);
}