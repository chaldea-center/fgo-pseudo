void CombineTdEntity___ctor(CombineTdEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593843B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_593843B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *CombineTdEntity__CreatePK(int32_t id, int32_t treasureDeviceLv, const MethodInfo *method)
{
  if ( (byte_593843A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_593843A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           treasureDeviceLv,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *CombineTdEntity__CreatePrimaryKey(CombineTdEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return CombineTdEntity__CreatePK(this->fields.id, this->fields.treasureDeviceLv, v2);
}