void __fastcall EventDataLostBattleEntity___ctor(EventDataLostBattleEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B172C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B172C3 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventDataLostBattleEntity__CreatePrimaryKey(
        EventDataLostBattleEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}