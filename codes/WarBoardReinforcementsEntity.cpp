void WarBoardReinforcementsEntity___ctor(WarBoardReinforcementsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59398E1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59398E1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardReinforcementsEntity__CreatePK(int32_t id, const MethodInfo *method)
{
  if ( (byte_59398D8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_59398D8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           id,
           (const MethodInfo_3820DF8 *)Method_DataEntityBase_CreateMultiplePK_int___);
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
  System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *v6; // x1
  int32_t IntValue; // w0

  if ( (byte_59398E0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23324/*"noMovedAfterDefend"*/);
    byte_59398E0 = 1;
  }
  script = this->fields.script;
  v6 = (System_String_o *)StringLiteral_23324/*"noMovedAfterDefend"*/;
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(script, v6, -1, 0);
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

  if ( (byte_59398DE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19303/*"deadEffect"*/);
    byte_59398DE = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19303/*"deadEffect"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetMoveAfterAttackType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *type,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_String_o *v6; // x1
  int32_t IntValue; // w0

  if ( (byte_59398DF & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23321/*"noMoveAfterAttack"*/);
    byte_59398DF = 1;
  }
  script = this->fields.script;
  v6 = (System_String_o *)StringLiteral_23321/*"noMoveAfterAttack"*/;
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(script, v6, -1, 0);
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

  if ( (byte_59398DC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23623/*"overwriteAttackCost"*/);
    byte_59398DC = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23623/*"overwriteAttackCost"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetOverwriteBaseActionPoint(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_59398DB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23625/*"overwriteBaseActionPoint"*/);
    byte_59398DB = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23625/*"overwriteBaseActionPoint"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetOverwriteMoveCost(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_59398DD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23665/*"overwriteMoveCost"*/);
    byte_59398DD = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23665/*"overwriteMoveCost"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetOverwriteValue(
        WarBoardReinforcementsEntity_o *this,
        System_String_o *key,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w8
  bool result; // w0

  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, key, -1, 0);
  result = IntValue != -1;
  *value = IntValue;
  return result;
}


bool WarBoardReinforcementsEntity__TryGetOverwriteWallAttackCost(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_59398DA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23700/*"overwriteWallAttackCost"*/);
    byte_59398DA = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23700/*"overwriteWallAttackCost"*/, -1, 0);
  *value = IntValue;
  return IntValue != -1;
}


bool WarBoardReinforcementsEntity__TryGetRoleType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_59398D9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26068/*"warBoardSvtDetail"*/);
    byte_59398D9 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_26068/*"warBoardSvtDetail"*/, -1, 0);
  *value = IntValue;
  return IntValue >= 0;
}