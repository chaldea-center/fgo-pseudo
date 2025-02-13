void __fastcall EventScriptReleaseEntity___ctor(EventScriptReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC672 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_string___ctor__);
    byte_4BDC672 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_325995C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventScriptReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t flagId,
        int32_t type,
        int32_t targetId,
        const MethodInfo *method)
{
  if ( (byte_4BDC670 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_4BDC670 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           flagId,
           type,
           targetId,
           (const MethodInfo_2FAE978 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall EventScriptReleaseEntity__CreatePrimaryKey(
        EventScriptReleaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventScriptReleaseEntity__CreatePK(
           this->fields.eventId,
           this->fields.flagId,
           this->fields.type,
           this->fields.targetId,
           v2);
}


int32_t __fastcall EventScriptReleaseEntity__GetCondType(EventScriptReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


bool __fastcall EventScriptReleaseEntity__isAvailable(EventScriptReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t targetId; // w20
  int32_t type; // w21
  int64_t value; // x19

  if ( (byte_4BDC671 & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    byte_4BDC671 = 1;
  }
  type = this->fields.type;
  targetId = this->fields.targetId;
  value = this->fields.value;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(type, targetId, value, 0, 0LL, 0LL);
}