void __fastcall EventScriptReleaseEntity___ctor(EventScriptReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4217959 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4217959 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventScriptReleaseEntity__CreatePK(
        int32_t eventId,
        int32_t flagId,
        int32_t type,
        int32_t targetId,
        const MethodInfo *method)
{
  if ( (byte_4217957 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&flagId);
    byte_4217957 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           eventId,
           flagId,
           type,
           targetId,
           (const MethodInfo_1713C34 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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

  if ( (byte_4217958 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, method);
    byte_4217958 = 1;
  }
  type = this->fields.type;
  targetId = this->fields.targetId;
  value = this->fields.value;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(type, targetId, value, 0, 0LL);
}