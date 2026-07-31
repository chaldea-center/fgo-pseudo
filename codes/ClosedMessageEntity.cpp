void ClosedMessageEntity___ctor(ClosedMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938408 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5938408 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t ClosedMessageEntity__CreatePrimaryKey(ClosedMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool ClosedMessageEntity__HasFlag(ClosedMessageEntity_o *this, int32_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


bool ClosedMessageEntity__IsChangeDispClosedMessage(ClosedMessageEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool ClosedMessageEntity__IsChangeDispPositionLeft(ClosedMessageEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 2) & 1;
}