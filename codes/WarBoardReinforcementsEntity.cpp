void __fastcall WarBoardReinforcementsEntity___ctor(WarBoardReinforcementsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418924F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418924F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardReinforcementsEntity__CreatePK(int32_t id, const MethodInfo *method)
{
  if ( (byte_4189246 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int___, method);
    byte_4189246 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           id,
           (const MethodInfo_173289C *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *__fastcall WarBoardReinforcementsEntity__CreatePrimaryKey(
        WarBoardReinforcementsEntity_o *this,
        const MethodInfo *method)
{
  return WarBoardReinforcementsEntity__CreatePK(this->fields.id, method);
}


bool __fastcall WarBoardReinforcementsEntity__GetMovedAfterDefendType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *type,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_418924E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21098/*"noMovedAfterDefend"*/, type);
    byte_418924E = 1;
  }
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21098/*"noMovedAfterDefend"*/, -1, 0LL);
  if ( (IntValue & 0x80000000) == 0 )
    *type = IntValue;
  return IntValue >= 0;
}


bool __fastcall WarBoardReinforcementsEntity__HasFlag(
        WarBoardReinforcementsEntity_o *this,
        int32_t targetFlag,
        const MethodInfo *method)
{
  return (this->fields.flag & targetFlag) != 0;
}


bool __fastcall WarBoardReinforcementsEntity__IsNotIncludeWin(
        WarBoardReinforcementsEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.flag & 1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetDeadEffectType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_418924C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17915/*"deadEffect"*/, value);
    byte_418924C = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17915/*"deadEffect"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetMoveAfterAttackType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *type,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_418924D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21095/*"noMoveAfterAttack"*/, type);
    byte_418924D = 1;
  }
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21095/*"noMoveAfterAttack"*/, -1, 0LL);
  if ( (IntValue & 0x80000000) == 0 )
    *type = IntValue;
  return IntValue >= 0;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetOverwriteAttackCost(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_418924A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21352/*"overwriteAttackCost"*/, value);
    byte_418924A = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21352/*"overwriteAttackCost"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetOverwriteBaseActionPoint(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4189249 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21353/*"overwriteBaseActionPoint"*/, value);
    byte_4189249 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21353/*"overwriteBaseActionPoint"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetOverwriteMoveCost(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_418924B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21372/*"overwriteMoveCost"*/, value);
    byte_418924B = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21372/*"overwriteMoveCost"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetOverwriteValue(
        WarBoardReinforcementsEntity_o *this,
        System_String_o *key,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, key, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetOverwriteWallAttackCost(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4189248 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21388/*"overwriteWallAttackCost"*/, value);
    byte_4189248 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21388/*"overwriteWallAttackCost"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetRoleType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4189247 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_23216/*"warBoardSvtDetail"*/, value);
    byte_4189247 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23216/*"warBoardSvtDetail"*/, -1, 0LL);
  *value = IntValue;
  return IntValue >= 0;
}