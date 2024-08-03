System_String_o *__fastcall BattleCommand__GetCardTypeChangeSpriteNameSuffix(
        int32_t type,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 *v7; // x8

  v3 = defaultValue;
  if ( (byte_49FB329 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16848/*"arts_quick"*/, defaultValue);
    sub_1B640C8(&StringLiteral_22639/*"quick_buster"*/, v5);
    sub_1B640C8(&StringLiteral_17574/*"buster_arts"*/, v6);
    byte_49FB329 = 1;
  }
  switch ( type )
  {
    case 1:
    case 3:
      v7 = &StringLiteral_17574/*"buster_arts"*/;
      goto LABEL_7;
    case 2:
    case 5:
      v7 = &StringLiteral_16848/*"arts_quick"*/;
      goto LABEL_7;
    case 4:
    case 6:
      v7 = &StringLiteral_22639/*"quick_buster"*/;
LABEL_7:
      v3 = (System_String_o *)*v7;
      break;
    default:
      return v3;
  }
  return v3;
}


System_String_o *__fastcall BattleCommand__GetCommandTypeName(
        int32_t type,
        System_String_o *defaultText,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 *v7; // x8

  v3 = defaultText;
  if ( (byte_49FB327 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3348/*"Buster"*/, defaultText);
    sub_1B640C8(&StringLiteral_10881/*"Quick"*/, v5);
    sub_1B640C8(&StringLiteral_2474/*"Arts"*/, v6);
    byte_49FB327 = 1;
  }
  switch ( type )
  {
    case 1:
      v7 = &StringLiteral_2474/*"Arts"*/;
      return (System_String_o *)*v7;
    case 3:
      v7 = &StringLiteral_10881/*"Quick"*/;
      return (System_String_o *)*v7;
    case 2:
      v7 = &StringLiteral_3348/*"Buster"*/;
      return (System_String_o *)*v7;
  }
  return v3;
}


int32_t __fastcall BattleCommand__JudgeCommandCardTypeChange(
        int32_t beforeTypeRawValue,
        int32_t afterTypeRawValue,
        const MethodInfo *method)
{
  int32_t v4; // w8
  bool v5; // zf
  int32_t v6; // w9

  switch ( beforeTypeRawValue )
  {
    case 3:
      if ( afterTypeRawValue == 2 )
        v4 = 6;
      else
        v4 = 0;
      v5 = afterTypeRawValue == 1;
      v6 = 5;
      break;
    case 2:
      v5 = afterTypeRawValue == 1;
      v4 = 4 * (afterTypeRawValue == 3);
      v6 = 3;
      break;
    case 1:
      if ( afterTypeRawValue == 2 )
        return 1;
      return 2 * (afterTypeRawValue == 3);
    default:
      return 0;
  }
  if ( v5 )
    return v6;
  else
    return v4;
}


float __fastcall BattleCommand__getCriticalMagnification(BattleCommandData_o *data, const MethodInfo *method)
{
  int32_t CommandType; // w0

  if ( !data )
    sub_1B64324(0LL);
  CommandType = BattleCommandData__getCommandType(data, 0LL);
  return CardMaster__getCritical(CommandType, data->fields.actionIndex, 0LL);
}


float __fastcall BattleCommand__getCriticalMagnification_37251772(
        int32_t type,
        int32_t index,
        const MethodInfo *method)
{
  return CardMaster__getCritical(type, index, 0LL);
}


System_Int32_array *__fastcall BattleCommand__getIndividuality(int32_t type, int32_t num, const MethodInfo *method)
{
  return CardMaster__getIndividualities(type, num, 0LL);
}


float __fastcall BattleCommand__getMagnification(BattleCommandData_o *data, const MethodInfo *method)
{
  int32_t CommandType; // w0

  if ( !data )
    sub_1B64324(0LL);
  CommandType = BattleCommandData__getCommandType(data, 0LL);
  return CardMaster__getAtk(CommandType, data->fields.actionIndex, 0LL);
}


float __fastcall BattleCommand__getMagnification_37251676(int32_t type, int32_t index, const MethodInfo *method)
{
  return CardMaster__getAtk(type, index, 0LL);
}


float __fastcall BattleCommand__getNpMagnification(BattleCommandData_o *command, const MethodInfo *method)
{
  int32_t CommandType; // w0

  if ( !command )
    sub_1B64324(0LL);
  CommandType = BattleCommandData__getCommandType(command, 0LL);
  return CardMaster__getTdGauge(CommandType, command->fields.actionIndex, 0LL);
}


float __fastcall BattleCommand__getNpMagnification_37251724(int32_t type, int32_t index, const MethodInfo *method)
{
  return CardMaster__getTdGauge(type, index, 0LL);
}


int32_t __fastcall BattleCommand__getType(int32_t type, const MethodInfo *method)
{
  return type;
}


bool __fastcall BattleCommand__isADDATTACK(int32_t type, const MethodInfo *method)
{
  return type == 4;
}


bool __fastcall BattleCommand__isARTS(int32_t type, const MethodInfo *method)
{
  return type == 1;
}


bool __fastcall BattleCommand__isBLANK(int32_t type, const MethodInfo *method)
{
  return type == 5;
}


bool __fastcall BattleCommand__isBUSTER(int32_t type, const MethodInfo *method)
{
  return type == 2;
}


bool __fastcall BattleCommand__isNomalCommand(int32_t type, const MethodInfo *method)
{
  return (unsigned int)(type - 1) < 3;
}


bool __fastcall BattleCommand__isQUICK(int32_t type, const MethodInfo *method)
{
  return type == 3;
}


bool __fastcall BattleCommand__isShowCommandAction(int32_t type, const MethodInfo *method)
{
  _BOOL4 v2; // w0

  if ( (unsigned int)(type - 1) > 0xA )
    LOBYTE(v2) = 0;
  else
    return (0x60Fu >> (type - 1)) & 1;
  return v2;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommand__setSprite(UISprite_o *sprite, int32_t type, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 *v7; // x8

  v4 = (UnityEngine_Behaviour_o *)sprite;
  if ( (byte_49FB328 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20048/*"icon_commandcard_quick"*/, *(_QWORD *)&type);
    sub_1B640C8(&StringLiteral_20046/*"icon_commandcard_buster"*/, v5);
    sprite = (UISprite_o *)sub_1B640C8(&StringLiteral_20045/*"icon_commandcard_arts"*/, v6);
    byte_49FB328 = 1;
  }
  switch ( type )
  {
    case 3:
      if ( v4 )
      {
        UnityEngine_Behaviour__set_enabled(v4, 1, 0LL);
        v7 = &StringLiteral_20048/*"icon_commandcard_quick"*/;
        goto LABEL_12;
      }
      goto LABEL_15;
    case 2:
      if ( v4 )
      {
        UnityEngine_Behaviour__set_enabled(v4, 1, 0LL);
        v7 = &StringLiteral_20046/*"icon_commandcard_buster"*/;
        goto LABEL_12;
      }
LABEL_15:
      sub_1B64324(sprite);
    case 1:
      if ( v4 )
      {
        UnityEngine_Behaviour__set_enabled(v4, 1, 0LL);
        v7 = &StringLiteral_20045/*"icon_commandcard_arts"*/;
LABEL_12:
        UISprite__set_spriteName((UISprite_o *)v4, (System_String_o *)*v7, 0LL);
        return;
      }
      goto LABEL_15;
  }
  if ( !v4 )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled(v4, 0, 0LL);
}