void __fastcall GachaAdjustAddEntity___ctor(GachaAdjustAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BC013 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BC013 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaAdjustAddEntity__CreatePK(
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  if ( (byte_49BC012 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_49BC012 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           giftId,
           (const MethodInfo_2F0013C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall GachaAdjustAddEntity__CreatePrimaryKey(
        GachaAdjustAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GachaAdjustAddEntity__CreatePK(this->fields.id, this->fields.type, this->fields.giftId, v2);
}