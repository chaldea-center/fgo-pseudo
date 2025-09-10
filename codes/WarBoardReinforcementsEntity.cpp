void WarBoardReinforcementsEntity___ctor(WarBoardReinforcementsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C28498 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C28498 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardReinforcementsEntity__CreatePK(int32_t id, const MethodInfo *method)
{
  if ( (byte_4C2848F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_4C2848F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           id,
           (const MethodInfo_30CC96C *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *WarBoardReinforcementsEntity__CreatePrimaryKey(
        WarBoardReinforcementsEntity_o *this,
        const MethodInfo *method)
{
  return WarBoardReinforcementsEntity__CreatePK(this->fields.id, method);
}


bool WarBoardReinforcementsEntity__GetMovedAfterDefendType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *type,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4C28497 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22228/*"noMovedAfterDefend"*/);
    byte_4C28497 = 1;
  }
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22228/*"noMovedAfterDefend"*/, -1, 0);
  if ( (IntValue & 0x80000000) == 0 )
    *type = IntValue;
  return IntValue >= 0;
}


bool WarBoardReinforcementsEntity__HasFlag(
        WarBoardReinforcementsEntity_o *this,
        int32_t targetFlag,
        const MethodInfo *method)
{
  return (this->fields.flag & targetFlag) != 0;
}


bool WarBoardReinforcementsEntity__IsNotIncludeWin(WarBoardReinforcementsEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}


bool WarBoardReinforcementsEntity__TryGetDeadEffectType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4C28495 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18502/*"deadEffect"*/);
    byte_4C28495 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18502/*"deadEffect"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetMoveAfterAttackType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *type,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4C28496 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22225/*"noMoveAfterAttack"*/);
    byte_4C28496 = 1;
  }
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22225/*"noMoveAfterAttack"*/, -1, 0);
  if ( (IntValue & 0x80000000) == 0 )
    *type = IntValue;
  return IntValue >= 0;
}


bool WarBoardReinforcementsEntity__TryGetOverwriteAttackCost(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4C28493 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22510/*"overwriteAttackCost"*/);
    byte_4C28493 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22510/*"overwriteAttackCost"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetOverwriteBaseActionPoint(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4C28492 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22512/*"overwriteBaseActionPoint"*/);
    byte_4C28492 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22512/*"overwriteBaseActionPoint"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetOverwriteMoveCost(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4C28494 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22546/*"overwriteMoveCost"*/);
    byte_4C28494 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22546/*"overwriteMoveCost"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetOverwriteValue(
        WarBoardReinforcementsEntity_o *this,
        System_String_o *key,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, key, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetOverwriteWallAttackCost(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4C28491 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22574/*"overwriteWallAttackCost"*/);
    byte_4C28491 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22574/*"overwriteWallAttackCost"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetRoleType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4C28490 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24723/*"warBoardSvtDetail"*/);
    byte_4C28490 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24723/*"warBoardSvtDetail"*/, -1, 0);
  *value = IntValue;
  return IntValue >= 0;
}