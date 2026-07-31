void SpotAddEntity___ctor(SpotAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59392FB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59392FB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *SpotAddEntity__CreatePK(
        int32_t spotId,
        int32_t priority,
        int32_t overrideType,
        const MethodInfo *method)
{
  if ( (byte_59392FA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_59392FA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           spotId,
           priority,
           overrideType,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *SpotAddEntity__CreatePrimaryKey(SpotAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return SpotAddEntity__CreatePK(this->fields.spotId, this->fields.priority, this->fields.overrideType, v2);
}


int32_t SpotAddEntity__GetCondType(SpotAddEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}