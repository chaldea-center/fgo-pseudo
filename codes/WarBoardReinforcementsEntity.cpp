void WarBoardReinforcementsEntity___ctor(WarBoardReinforcementsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC85F4 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC85F4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardReinforcementsEntity__CreatePK(int32_t id, const MethodInfo *method)
{
  if ( (byte_4CC85EB & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_4CC85EB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           id,
           (const MethodInfo_3149128 *)Method_DataEntityBase_CreateMultiplePK_int___);
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

  if ( (byte_4CC85F3 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22349/*"noMovedAfterDefend"*/);
    byte_4CC85F3 = 1;
  }
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22349/*"noMovedAfterDefend"*/, -1, 0);
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

  if ( (byte_4CC85F1 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_18548/*"deadEffect"*/);
    byte_4CC85F1 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18548/*"deadEffect"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetMoveAfterAttackType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *type,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4CC85F2 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22346/*"noMoveAfterAttack"*/);
    byte_4CC85F2 = 1;
  }
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22346/*"noMoveAfterAttack"*/, -1, 0);
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

  if ( (byte_4CC85EF & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22636/*"overwriteAttackCost"*/);
    byte_4CC85EF = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22636/*"overwriteAttackCost"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetOverwriteBaseActionPoint(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4CC85EE & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22638/*"overwriteBaseActionPoint"*/);
    byte_4CC85EE = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22638/*"overwriteBaseActionPoint"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetOverwriteMoveCost(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4CC85F0 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22672/*"overwriteMoveCost"*/);
    byte_4CC85F0 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22672/*"overwriteMoveCost"*/, -1, 0);
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

  if ( (byte_4CC85ED & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22700/*"overwriteWallAttackCost"*/);
    byte_4CC85ED = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22700/*"overwriteWallAttackCost"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetRoleType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4CC85EC & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_24876/*"warBoardSvtDetail"*/);
    byte_4CC85EC = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24876/*"warBoardSvtDetail"*/, -1, 0);
  *value = IntValue;
  return IntValue >= 0;
}