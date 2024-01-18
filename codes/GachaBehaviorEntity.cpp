void __fastcall GachaBehaviorEntity___ctor(GachaBehaviorEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418AFC1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418AFC1 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaBehaviorEntity__CreatePK(int32_t gachaId, int32_t svtId, const MethodInfo *method)
{
  if ( (byte_418AFC0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&svtId);
    byte_418AFC0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           svtId,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall GachaBehaviorEntity__CreatePrimaryKey(
        GachaBehaviorEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaBehaviorEntity__CreatePK(this->fields.gachaId, this->fields.svtId, v2);
}