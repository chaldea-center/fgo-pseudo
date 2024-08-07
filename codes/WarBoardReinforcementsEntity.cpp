void __fastcall WarBoardReinforcementsEntity___ctor(WarBoardReinforcementsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FFAFC & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FFAFC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardReinforcementsEntity__CreatePK(int32_t id, const MethodInfo *method)
{
  if ( (byte_49FFAF3 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int___, method);
    byte_49FFAF3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           id,
           (const MethodInfo_2E39D98 *)Method_DataEntityBase_CreateMultiplePK_int___);
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

  if ( (byte_49FFAFB & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22008/*"noMovedAfterDefend"*/, type);
    byte_49FFAFB = 1;
  }
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22008/*"noMovedAfterDefend"*/, -1, 0LL);
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

  if ( (byte_49FFAF9 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_18439/*"deadEffect"*/, value);
    byte_49FFAF9 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18439/*"deadEffect"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetMoveAfterAttackType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *type,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_49FFAFA & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22005/*"noMoveAfterAttack"*/, type);
    byte_49FFAFA = 1;
  }
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22005/*"noMoveAfterAttack"*/, -1, 0LL);
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

  if ( (byte_49FFAF7 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22289/*"overwriteAttackCost"*/, value);
    byte_49FFAF7 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22289/*"overwriteAttackCost"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetOverwriteBaseActionPoint(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_49FFAF6 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22291/*"overwriteBaseActionPoint"*/, value);
    byte_49FFAF6 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22291/*"overwriteBaseActionPoint"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetOverwriteMoveCost(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_49FFAF8 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22311/*"overwriteMoveCost"*/, value);
    byte_49FFAF8 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22311/*"overwriteMoveCost"*/, -1, 0LL);
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

  if ( (byte_49FFAF5 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_22330/*"overwriteWallAttackCost"*/, value);
    byte_49FFAF5 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22330/*"overwriteWallAttackCost"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetRoleType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_49FFAF4 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_24532/*"warBoardSvtDetail"*/, value);
    byte_49FFAF4 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24532/*"warBoardSvtDetail"*/, -1, 0LL);
  *value = IntValue;
  return IntValue >= 0;
}