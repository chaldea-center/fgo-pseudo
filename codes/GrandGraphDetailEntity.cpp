void __fastcall GrandGraphDetailEntity___ctor(GrandGraphDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C84C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1C84C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GrandGraphDetailEntity__CreatePK(
        int32_t grandGraphId,
        int32_t baseClassId,
        const MethodInfo *method)
{
  if ( (byte_4B1C84B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&baseClassId);
    byte_4B1C84B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           grandGraphId,
           baseClassId,
           (const MethodInfo_3018C2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall GrandGraphDetailEntity__CreatePrimaryKey(
        GrandGraphDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GrandGraphDetailEntity__CreatePK(this->fields.grandGraphId, this->fields.baseClassId, v2);
}


bool __fastcall GrandGraphDetailEntity__IsOpen(GrandGraphDetailEntity_o *this, const MethodInfo *method)
{
  int32_t condTargetId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4B1C84A & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    byte_4B1C84A = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL);
}