void WarBoardReinforcementsEntity___ctor(WarBoardReinforcementsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DA8A & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2DA8A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardReinforcementsEntity__CreatePK(int32_t id, const MethodInfo *method)
{
  if ( (byte_4D2DA81 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_4D2DA81 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           id,
           (const MethodInfo_319A150 *)Method_DataEntityBase_CreateMultiplePK_int___);
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

  if ( (byte_4D2DA89 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22457/*"noMovedAfterDefend"*/);
    byte_4D2DA89 = 1;
  }
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22457/*"noMovedAfterDefend"*/, -1, 0);
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

  if ( (byte_4D2DA87 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_18616/*"deadEffect"*/);
    byte_4D2DA87 = 1;
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

  if ( (byte_4D2DA88 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22454/*"noMoveAfterAttack"*/);
    byte_4D2DA88 = 1;
  }
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22454/*"noMoveAfterAttack"*/, -1, 0);
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

  if ( (byte_4D2DA85 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22744/*"overwriteAttackCost"*/);
    byte_4D2DA85 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22744/*"overwriteAttackCost"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetOverwriteBaseActionPoint(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4D2DA84 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22746/*"overwriteBaseActionPoint"*/);
    byte_4D2DA84 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22746/*"overwriteBaseActionPoint"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetOverwriteMoveCost(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4D2DA86 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22782/*"overwriteMoveCost"*/);
    byte_4D2DA86 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22782/*"overwriteMoveCost"*/, -1, 0);
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

  if ( (byte_4D2DA83 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22811/*"overwriteWallAttackCost"*/);
    byte_4D2DA83 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22811/*"overwriteWallAttackCost"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetRoleType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4D2DA82 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_24998/*"warBoardSvtDetail"*/);
    byte_4D2DA82 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24998/*"warBoardSvtDetail"*/, -1, 0);
  *value = IntValue;
  return IntValue >= 0;
}