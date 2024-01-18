void __fastcall ClassBoardLineEntity___ctor(ClassBoardLineEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41894F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41894F2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassBoardLineEntity__CreatePK(
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_41894F1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&id);
    byte_41894F1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           classBoardBaseId,
           id,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ClassBoardLineEntity__CreatePrimaryKey(
        ClassBoardLineEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ClassBoardLineEntity__CreatePK(this->fields.classBoardBaseId, this->fields.id, v2);
}