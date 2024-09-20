void __fastcall SpotImageEntity___ctor(SpotImageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BBEC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BBEC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall SpotImageEntity__CreatePK(int32_t spotId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4A5BBEB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5BBEB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           spotId,
           priority,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall SpotImageEntity__CreatePrimaryKey(SpotImageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SpotImageEntity__CreatePK(this->fields.spotId, this->fields.priority, v2);
}