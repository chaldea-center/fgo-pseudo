void __fastcall ClassBoardSquareEntity___ctor(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15F8C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B15F8C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassBoardSquareEntity__CreatePK(
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4B15F8B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&id, method);
    byte_4B15F8B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           classBoardBaseId,
           id,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ClassBoardSquareEntity__CreatePrimaryKey(
        ClassBoardSquareEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ClassBoardSquareEntity__CreatePK(this->fields.classBoardBaseId, this->fields.id, v2);
}


bool __fastcall ClassBoardSquareEntity__get_HasLockId(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  return this->fields.lockId != 0;
}


bool __fastcall ClassBoardSquareEntity__get_IsBlank(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool __fastcall ClassBoardSquareEntity__get_IsCommandSpell(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  return this->fields.skillType == 2;
}


bool __fastcall ClassBoardSquareEntity__get_IsPassive(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  return this->fields.skillType == 1;
}


bool __fastcall ClassBoardSquareEntity__get_IsStart(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}