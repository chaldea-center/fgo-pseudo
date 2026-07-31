void MyroomServantSpecialImageEntity___ctor(MyroomServantSpecialImageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939AA7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939AA7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MyroomServantSpecialImageEntity__CreatePK(int32_t svtId, int32_t num, const MethodInfo *method)
{
  if ( (byte_5939AA6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939AA6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           num,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *MyroomServantSpecialImageEntity__CreatePrimaryKey(
        MyroomServantSpecialImageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MyroomServantSpecialImageEntity__CreatePK(this->fields.svtId, this->fields.num, v2);
}