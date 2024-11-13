void __fastcall ClosedMessageEntity___ctor(ClosedMessageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15F9F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B15F9F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ClosedMessageEntity__CreatePrimaryKey(ClosedMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall ClosedMessageEntity__HasFlag(ClosedMessageEntity_o *this, int32_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


bool __fastcall ClosedMessageEntity__IsChangeDispClosedMessage(ClosedMessageEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool __fastcall ClosedMessageEntity__IsChangeDispPositionLeft(ClosedMessageEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 2) & 1;
}