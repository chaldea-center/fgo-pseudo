void __fastcall WarBoardReinforcementsEntity___ctor(WarBoardReinforcementsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67C14 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B67C14 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardReinforcementsEntity__CreatePK(int32_t id, const MethodInfo *method)
{
  if ( (byte_4B67C0B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int___, method);
    byte_4B67C0B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           id,
           (const MethodInfo_2F571C8 *)Method_DataEntityBase_CreateMultiplePK_int___);
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

  if ( (byte_4B67C13 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22408/*"noMovedAfterDefend"*/, type);
    byte_4B67C13 = 1;
  }
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22408/*"noMovedAfterDefend"*/, -1, 0LL);
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

  if ( (byte_4B67C11 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_18746/*"deadEffect"*/, value);
    byte_4B67C11 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18746/*"deadEffect"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetMoveAfterAttackType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *type,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4B67C12 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22405/*"noMoveAfterAttack"*/, type);
    byte_4B67C12 = 1;
  }
  *type = 0;
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22405/*"noMoveAfterAttack"*/, -1, 0LL);
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

  if ( (byte_4B67C0F & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22692/*"overwriteAttackCost"*/, value);
    byte_4B67C0F = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22692/*"overwriteAttackCost"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetOverwriteBaseActionPoint(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4B67C0E & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22694/*"overwriteBaseActionPoint"*/, value);
    byte_4B67C0E = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22694/*"overwriteBaseActionPoint"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetOverwriteMoveCost(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4B67C10 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22716/*"overwriteMoveCost"*/, value);
    byte_4B67C10 = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22716/*"overwriteMoveCost"*/, -1, 0LL);
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

  if ( (byte_4B67C0D & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_22739/*"overwriteWallAttackCost"*/, value);
    byte_4B67C0D = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22739/*"overwriteWallAttackCost"*/, -1, 0LL);
  *value = IntValue;
  return IntValue != -1;
}


bool __fastcall WarBoardReinforcementsEntity__TryGetRoleType(
        WarBoardReinforcementsEntity_o *this,
        int32_t *value,
        const MethodInfo *method)
{
  int32_t IntValue; // w0

  if ( (byte_4B67C0C & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_24969/*"warBoardSvtDetail"*/, value);
    byte_4B67C0C = 1;
  }
  IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24969/*"warBoardSvtDetail"*/, -1, 0LL);
  *value = IntValue;
  return IntValue >= 0;
}