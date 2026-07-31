void TerminalOverwriteEntity___ctor(TerminalOverwriteEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59393B5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59393B5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *TerminalOverwriteEntity__CreatePK(
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_59393B4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_59393B4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           priority,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *TerminalOverwriteEntity__CreatePrimaryKey(TerminalOverwriteEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return TerminalOverwriteEntity__CreatePK(this->fields.id, this->fields.type, this->fields.priority, v2);
}