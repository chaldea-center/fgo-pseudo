void __fastcall ClosedMessageEntity___ctor(ClosedMessageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA911 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42EA911 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
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