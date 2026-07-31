void ClassBoardLineEntity___ctor(ClassBoardLineEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939A72 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939A72 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ClassBoardLineEntity__CreatePK(int32_t classBoardBaseId, int32_t id, const MethodInfo *method)
{
  if ( (byte_5939A71 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939A71 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           classBoardBaseId,
           id,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ClassBoardLineEntity__CreatePrimaryKey(ClassBoardLineEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ClassBoardLineEntity__CreatePK(this->fields.classBoardBaseId, this->fields.id, v2);
}