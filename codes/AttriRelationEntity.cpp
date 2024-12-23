void __fastcall AttriRelationEntity___ctor(AttriRelationEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B667EC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B667EC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall AttriRelationEntity__CreatePK(int32_t atkAttri, int32_t defAttri, const MethodInfo *method)
{
  if ( (byte_4B667EB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&defAttri);
    byte_4B667EB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           atkAttri,
           defAttri,
           (const MethodInfo_2F57334 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall AttriRelationEntity__CreatePrimaryKey(
        AttriRelationEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return AttriRelationEntity__CreatePK(this->fields.atkAttri, this->fields.defAttri, v2);
}


float __fastcall AttriRelationEntity__getRate(AttriRelationEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.attackRate / 1000.0;
}