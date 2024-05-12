void __fastcall ClassBoardLineEntity___ctor(ClassBoardLineEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438D3B9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438D3B9 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ClassBoardLineEntity__CreatePK(
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_438D3B8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438D3B8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           classBoardBaseId,
           id,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ClassBoardLineEntity__CreatePrimaryKey(
        ClassBoardLineEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ClassBoardLineEntity__CreatePK(this->fields.classBoardBaseId, this->fields.id, v2);
}