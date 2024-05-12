void __fastcall WarBoardReinforcementsEntity___ctor(WarBoardReinforcementsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438D211 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438D211 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardReinforcementsEntity__CreatePK(int32_t id, const MethodInfo *method)
{
  if ( (byte_438D208 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_438D208 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           id,
           (const MethodInfo_1D17150 *)Method_DataEntityBase_CreateMultiplePK_int___);
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

  if ( (byte_438D210 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21535/*"noMovedAfterDefend"*/);
    byte_438D210 = 1;
  }
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21535/*"noMovedAfterDefend"*/, -1, 0LL);
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

  if ( (byte_438D20E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18269/*"deadEffect"*/);
    byte_438D20E = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18269/*"deadEffect"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetMoveAfterAttackType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *type,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_438D20F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21532/*"noMoveAfterAttack"*/);
    byte_438D20F = 1;
  }
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21532/*"noMoveAfterAttack"*/, -1, 0LL);
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

  if ( (byte_438D20C & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21791/*"overwriteAttackCost"*/);
    byte_438D20C = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21791/*"overwriteAttackCost"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetOverwriteBaseActionPoint(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_438D20B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21793/*"overwriteBaseActionPoint"*/);
    byte_438D20B = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21793/*"overwriteBaseActionPoint"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetOverwriteMoveCost(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_438D20D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21813/*"overwriteMoveCost"*/);
    byte_438D20D = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21813/*"overwriteMoveCost"*/, -1, 0LL);
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

  if ( (byte_438D20A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21832/*"overwriteWallAttackCost"*/);
    byte_438D20A = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21832/*"overwriteWallAttackCost"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetRoleType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_438D209 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23699/*"warBoardSvtDetail"*/);
    byte_438D209 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23699/*"warBoardSvtDetail"*/, -1, 0LL);
  *value = IntValue;
  return IntValue >= 0;
}