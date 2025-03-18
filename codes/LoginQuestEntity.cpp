void __fastcall LoginQuestEntity___ctor(LoginQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C222B8 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_int___ctor__, method);
    byte_4C222B8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3298964 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall LoginQuestEntity__CreatePrimaryKey(LoginQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall LoginQuestEntity__IsEnablePeriod(LoginQuestEntity_o *this, int64_t time, const MethodInfo *method)
{
  return this->fields.startedAt <= time && (this->fields.endedAt == 0 || this->fields.endedAt >= time);
}