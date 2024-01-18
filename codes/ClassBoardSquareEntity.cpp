void __fastcall ClassBoardSquareEntity___ctor(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418958C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418958C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassBoardSquareEntity__CreatePK(
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_418958B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&id);
    byte_418958B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           classBoardBaseId,
           id,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  System_Enum_o *v3; // x19
  System_Enum_o *v4; // x0
  __int64 v5; // x1
  int v7; // [xsp+8h] [xbp-18h] BYREF
  int32_t flag; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418958A & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardSquareEntity_Flag_TypeInfo, method);
    byte_418958A = 1;
  }
  flag = this->fields.flag;
  v3 = (System_Enum_o *)j_il2cpp_value_box_0(ClassBoardSquareEntity_Flag_TypeInfo, &flag);
  v7 = 2;
  v4 = (System_Enum_o *)j_il2cpp_value_box_0(ClassBoardSquareEntity_Flag_TypeInfo, &v7);
  if ( !v3 )
    sub_B2C434(v4, v5);
  return System_Enum__HasFlag(v3, v4, 0LL);
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
  System_Enum_o *v3; // x19
  System_Enum_o *v4; // x0
  __int64 v5; // x1
  int v7; // [xsp+8h] [xbp-18h] BYREF
  int32_t flag; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4189589 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardSquareEntity_Flag_TypeInfo, method);
    byte_4189589 = 1;
  }
  flag = this->fields.flag;
  v3 = (System_Enum_o *)j_il2cpp_value_box_0(ClassBoardSquareEntity_Flag_TypeInfo, &flag);
  v7 = 1;
  v4 = (System_Enum_o *)j_il2cpp_value_box_0(ClassBoardSquareEntity_Flag_TypeInfo, &v7);
  if ( !v3 )
    sub_B2C434(v4, v5);
  return System_Enum__HasFlag(v3, v4, 0LL);
}