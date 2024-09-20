void __fastcall WarBoardReinforcementsEntity___ctor(WarBoardReinforcementsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C15B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C15B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardReinforcementsEntity__CreatePK(int32_t id, const MethodInfo *method)
{
  if ( (byte_4A5C152 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_4A5C152 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           id,
           (const MethodInfo_2E7D9C0 *)Method_DataEntityBase_CreateMultiplePK_int___);
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

  if ( (byte_4A5C15A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22092/*"noMovedAfterDefend"*/);
    byte_4A5C15A = 1;
  }
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22092/*"noMovedAfterDefend"*/, -1, 0LL);
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

  if ( (byte_4A5C158 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18508/*"deadEffect"*/);
    byte_4A5C158 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18508/*"deadEffect"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetMoveAfterAttackType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *type,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4A5C159 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22089/*"noMoveAfterAttack"*/);
    byte_4A5C159 = 1;
  }
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22089/*"noMoveAfterAttack"*/, -1, 0LL);
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

  if ( (byte_4A5C156 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22374/*"overwriteAttackCost"*/);
    byte_4A5C156 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22374/*"overwriteAttackCost"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetOverwriteBaseActionPoint(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4A5C155 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22376/*"overwriteBaseActionPoint"*/);
    byte_4A5C155 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22376/*"overwriteBaseActionPoint"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetOverwriteMoveCost(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4A5C157 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22397/*"overwriteMoveCost"*/);
    byte_4A5C157 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22397/*"overwriteMoveCost"*/, -1, 0LL);
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

  if ( (byte_4A5C154 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22418/*"overwriteWallAttackCost"*/);
    byte_4A5C154 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22418/*"overwriteWallAttackCost"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetRoleType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4A5C153 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24627/*"warBoardSvtDetail"*/);
    byte_4A5C153 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24627/*"warBoardSvtDetail"*/, -1, 0LL);
  *value = IntValue;
  return IntValue >= 0;
}