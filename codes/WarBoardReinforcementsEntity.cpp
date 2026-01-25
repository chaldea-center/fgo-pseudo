void WarBoardReinforcementsEntity___ctor(WarBoardReinforcementsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF828 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF828 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardReinforcementsEntity__CreatePK(int32_t id, const MethodInfo *method)
{
  if ( (byte_4CEF81F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_4CEF81F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           id,
           (const MethodInfo_316E410 *)Method_DataEntityBase_CreateMultiplePK_int___);
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

  if ( (byte_4CEF827 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22453/*"noMovedAfterDefend"*/);
    byte_4CEF827 = 1;
  }
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22453/*"noMovedAfterDefend"*/, -1, 0);
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

  if ( (byte_4CEF825 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18616/*"deadEffect"*/);
    byte_4CEF825 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18616/*"deadEffect"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetMoveAfterAttackType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *type,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4CEF826 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22450/*"noMoveAfterAttack"*/);
    byte_4CEF826 = 1;
  }
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22450/*"noMoveAfterAttack"*/, -1, 0);
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

  if ( (byte_4CEF823 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22740/*"overwriteAttackCost"*/);
    byte_4CEF823 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22740/*"overwriteAttackCost"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetOverwriteBaseActionPoint(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4CEF822 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22742/*"overwriteBaseActionPoint"*/);
    byte_4CEF822 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22742/*"overwriteBaseActionPoint"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetOverwriteMoveCost(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4CEF824 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22778/*"overwriteMoveCost"*/);
    byte_4CEF824 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22778/*"overwriteMoveCost"*/, -1, 0);
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

  if ( (byte_4CEF821 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22806/*"overwriteWallAttackCost"*/);
    byte_4CEF821 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22806/*"overwriteWallAttackCost"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetRoleType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4CEF820 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_24999/*"warBoardSvtDetail"*/);
    byte_4CEF820 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24999/*"warBoardSvtDetail"*/, -1, 0);
  *value = IntValue;
  return IntValue >= 0;
}