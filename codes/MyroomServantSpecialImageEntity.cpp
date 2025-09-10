void MyroomServantSpecialImageEntity___ctor(MyroomServantSpecialImageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C28580 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C28580 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MyroomServantSpecialImageEntity__CreatePK(int32_t svtId, int32_t num, const MethodInfo *method)
{
  if ( (byte_4C2857F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C2857F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           num,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *MyroomServantSpecialImageEntity__CreatePrimaryKey(
        MyroomServantSpecialImageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MyroomServantSpecialImageEntity__CreatePK(this->fields.svtId, this->fields.num, v2);
}