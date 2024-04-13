void __fastcall ClassBoardSquareEntity___ctor(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA8A1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA8A1 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ClassBoardSquareEntity__CreatePK(
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EA8A0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, id, (_DWORD)method, v3);
    byte_42EA8A0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           classBoardBaseId,
           id,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  int v2; // w2
  __int64 v3; // x3
  System_Enum_o *v5; // x19
  System_Enum_o *v6; // x0
  __int64 v7; // x1
  int v9; // [xsp+8h] [xbp-18h] BYREF
  int32_t flag; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EA89F & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardSquareEntity_Flag_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA89F = 1;
  }
  flag = this->fields.flag;
  v5 = (System_Enum_o *)j_il2cpp_value_box_0(ClassBoardSquareEntity_Flag_TypeInfo, &flag);
  v9 = 2;
  v6 = (System_Enum_o *)j_il2cpp_value_box_0(ClassBoardSquareEntity_Flag_TypeInfo, &v9);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  return System_Enum__HasFlag(v5, v6, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  System_Enum_o *v5; // x19
  System_Enum_o *v6; // x0
  __int64 v7; // x1
  int v9; // [xsp+8h] [xbp-18h] BYREF
  int32_t flag; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EA89E & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardSquareEntity_Flag_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA89E = 1;
  }
  flag = this->fields.flag;
  v5 = (System_Enum_o *)j_il2cpp_value_box_0(ClassBoardSquareEntity_Flag_TypeInfo, &flag);
  v9 = 1;
  v6 = (System_Enum_o *)j_il2cpp_value_box_0(ClassBoardSquareEntity_Flag_TypeInfo, &v9);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  return System_Enum__HasFlag(v5, v6, 0LL);
}