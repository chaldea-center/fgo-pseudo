void __fastcall EventStatusEntity___ctor(EventStatusEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418AA03 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418AA03 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventStatusEntity__CreatePK(int32_t eventId, int32_t statusId, const MethodInfo *method)
{
  if ( (byte_418AA02 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&statusId);
    byte_418AA02 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           statusId,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventStatusEntity__CreatePrimaryKey(EventStatusEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventStatusEntity__CreatePK(this->fields.eventId, this->fields.statusId, v2);
}


int32_t __fastcall EventStatusEntity__GetDay(EventStatusEntity_o *this, const MethodInfo *method)
{
  int32_t status; // w8
  int32_t result; // w0
  unsigned int v4; // w10

  status = this->fields.status;
  for ( result = 1; ; ++result )
  {
    v4 = result + 1;
    if ( (status & (1 << (result + 1))) != 0 )
      break;
    if ( v4 >= 8 )
      return 0;
  }
  return result;
}


bool __fastcall EventStatusEntity__HasFlag(EventStatusEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.status & flag) != 0;
}


bool __fastcall EventStatusEntity__IsNight(EventStatusEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.status) >> 1) & 1;
}


bool __fastcall EventStatusEntity__IsScenario(EventStatusEntity_o *this, const MethodInfo *method)
{
  return this->fields.status & 1;
}