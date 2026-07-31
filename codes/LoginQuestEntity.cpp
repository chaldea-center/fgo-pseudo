void LoginQuestEntity___ctor(LoginQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938B74 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938B74 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t LoginQuestEntity__CreatePrimaryKey(LoginQuestEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool LoginQuestEntity__IsEnablePeriod(LoginQuestEntity_o *this, int64_t time, const MethodInfo *method)
{
  int64_t endedAt; // x8
  bool v5; // cc

  if ( this->fields.startedAt > time )
    return 0;
  endedAt = this->fields.endedAt;
  if ( endedAt )
    v5 = endedAt < time;
  else
    v5 = 0;
  return !v5;
}