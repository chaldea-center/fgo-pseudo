void __fastcall LoginQuestEntity___ctor(LoginQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AE60C & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42AE60C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall LoginQuestEntity__CreatePrimaryKey(LoginQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall LoginQuestEntity__IsEnablePeriod(LoginQuestEntity_o *this, int64_t time, const MethodInfo *method)
{
  return this->fields.startedAt <= time && (this->fields.endedAt == 0 || this->fields.endedAt >= time);
}