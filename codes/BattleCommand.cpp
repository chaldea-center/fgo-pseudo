void __fastcall BattleCommand___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Array_o *v4; // x0
  struct BattleCommand_TYPE_array *v5; // x19
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_4B1B324 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleCommand_TypeInfo, v1);
    sub_1BCAFF8(&BattleCommand_TYPE___TypeInfo, v2);
    sub_1BCAFF8(
      &Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A,
      v3);
    byte_4B1B324 = 1;
  }
  v4 = (System_Array_o *)sub_1BCB0A0(BattleCommand_TYPE___TypeInfo, 6LL);
  v8.fields.value = Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A;
  v5 = (struct BattleCommand_TYPE_array *)v4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63149500(v4, v8, 0LL);
  BattleCommand_TypeInfo->static_fields->COMMAND_TYPES = v5;
  sub_1BCAF9C((CGThumbnailListItem_o *)BattleCommand_TypeInfo->static_fields, (int32_t)v5, v6, v7);
}


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
  if ( (byte_4B1B322 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16758/*"arts_quick"*/, defaultValue);
    sub_1BCAFF8(&StringLiteral_22701/*"quick_buster"*/, v5);
    sub_1BCAFF8(&StringLiteral_17490/*"buster_arts"*/, v6);
    byte_4B1B322 = 1;
  }
  switch ( type )
  {
    case 1:
    case 3:
      v7 = &StringLiteral_17490/*"buster_arts"*/;
      goto LABEL_7;
    case 2:
    case 5:
      v7 = &StringLiteral_16758/*"arts_quick"*/;
      goto LABEL_7;
    case 4:
    case 6:
      v7 = &StringLiteral_22701/*"quick_buster"*/;
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
  if ( (byte_4B1B319 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_3225/*"Buster"*/, defaultText);
    sub_1BCAFF8(&StringLiteral_10859/*"Quick"*/, v5);
    sub_1BCAFF8(&StringLiteral_2350/*"Arts"*/, v6);
    byte_4B1B319 = 1;
  }
  switch ( type )
  {
    case 1:
      v7 = &StringLiteral_2350/*"Arts"*/;
      return (System_String_o *)*v7;
    case 3:
      v7 = &StringLiteral_10859/*"Quick"*/;
      return (System_String_o *)*v7;
    case 2:
      v7 = &StringLiteral_3225/*"Buster"*/;
      return (System_String_o *)*v7;
  }
  return v3;
}


bool __fastcall BattleCommand__IsSTRENGTH(int32_t type, const MethodInfo *method)
{
  return type == 11;
}


bool __fastcall BattleCommand__IsWEAK(int32_t type, const MethodInfo *method)
{
  return type == 10;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleCommand__JudgeCommandCardTypeChange(
        int32_t beforeTypeRawValue,
        int32_t afterTypeRawValue,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  bool isARTS_39475264; // w21
  const MethodInfo *v7; // x1
  const MethodInfo *v9; // x1
  bool isBUSTER_39475364; // w21
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4B1B323 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleCommand_TypeInfo, *(_QWORD *)&afterTypeRawValue);
    byte_4B1B323 = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  isARTS_39475264 = BattleCommand__isARTS_39475264(beforeTypeRawValue, *(const MethodInfo **)&afterTypeRawValue);
  if ( BattleCommand_TypeInfo->_2.cctor_finished )
  {
    if ( isARTS_39475264 )
      goto LABEL_7;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    if ( isARTS_39475264 )
    {
LABEL_7:
      if ( BattleCommand__isBUSTER_39475364(afterTypeRawValue, v5) )
        return 1;
      if ( !BattleCommand_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
      if ( BattleCommand__isQUICK_39475464(afterTypeRawValue, v7) )
        return 2;
      return 0;
    }
  }
  isBUSTER_39475364 = BattleCommand__isBUSTER_39475364(beforeTypeRawValue, v5);
  if ( BattleCommand_TypeInfo->_2.cctor_finished )
  {
    if ( isBUSTER_39475364 )
      goto LABEL_12;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    if ( isBUSTER_39475364 )
    {
LABEL_12:
      if ( BattleCommand__isARTS_39475264(afterTypeRawValue, v9) )
        return 3;
      if ( !BattleCommand_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
      if ( BattleCommand__isQUICK_39475464(afterTypeRawValue, v11) )
        return 4;
      return 0;
    }
  }
  if ( BattleCommand__isQUICK_39475464(beforeTypeRawValue, v9) )
  {
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    if ( BattleCommand__isARTS_39475264(afterTypeRawValue, v12) )
      return 5;
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    if ( BattleCommand__isBUSTER_39475364(afterTypeRawValue, v13) )
      return 6;
  }
  return 0;
}


float __fastcall BattleCommand__getCriticalMagnification(BattleCommandData_o *data, const MethodInfo *method)
{
  BattleCommandData_o *v2; // x19
  int32_t CommandType; // w0
  int32_t actionIndex; // w19
  int32_t v5; // w20

  v2 = data;
  if ( (byte_4B1B31C & 1) == 0 )
  {
    data = (BattleCommandData_o *)sub_1BCAFF8(&BattleCommand_TypeInfo, method);
    byte_4B1B31C = 1;
  }
  if ( !v2 )
    sub_1BCB254(data, method);
  CommandType = BattleCommandData__getCommandType(v2, 0LL);
  actionIndex = v2->fields.actionIndex;
  v5 = CommandType;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return CardMaster__getCritical(v5, actionIndex, 0LL);
}


float __fastcall BattleCommand__getCriticalMagnification_39475236(
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
  BattleCommandData_o *v2; // x19
  int32_t CommandType; // w0
  int32_t actionIndex; // w19
  int32_t v5; // w20

  v2 = data;
  if ( (byte_4B1B31A & 1) == 0 )
  {
    data = (BattleCommandData_o *)sub_1BCAFF8(&BattleCommand_TypeInfo, method);
    byte_4B1B31A = 1;
  }
  if ( !v2 )
    sub_1BCB254(data, method);
  CommandType = BattleCommandData__getCommandType(v2, 0LL);
  actionIndex = v2->fields.actionIndex;
  v5 = CommandType;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return CardMaster__getAtk(v5, actionIndex, 0LL);
}


float __fastcall BattleCommand__getMagnification_39474972(int32_t type, int32_t index, const MethodInfo *method)
{
  return CardMaster__getAtk(type, index, 0LL);
}


float __fastcall BattleCommand__getNpMagnification(BattleCommandData_o *command, const MethodInfo *method)
{
  BattleCommandData_o *v2; // x19
  int32_t CommandType; // w0
  int32_t actionIndex; // w19
  int32_t v5; // w20

  v2 = command;
  if ( (byte_4B1B31B & 1) == 0 )
  {
    command = (BattleCommandData_o *)sub_1BCAFF8(&BattleCommand_TypeInfo, method);
    byte_4B1B31B = 1;
  }
  if ( !v2 )
    sub_1BCB254(command, method);
  CommandType = BattleCommandData__getCommandType(v2, 0LL);
  actionIndex = v2->fields.actionIndex;
  v5 = CommandType;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return CardMaster__getTdGauge(v5, actionIndex, 0LL);
}


float __fastcall BattleCommand__getNpMagnification_39475104(int32_t type, int32_t index, const MethodInfo *method)
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


bool __fastcall BattleCommand__isARTS_39475264(int32_t type, const MethodInfo *method)
{
  if ( (byte_4B1B31D & 1) == 0 )
  {
    sub_1BCAFF8(&BattleCommand_TypeInfo, method);
    byte_4B1B31D = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
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


bool __fastcall BattleCommand__isBUSTER_39475364(int32_t type, const MethodInfo *method)
{
  if ( (byte_4B1B31E & 1) == 0 )
  {
    sub_1BCAFF8(&BattleCommand_TypeInfo, method);
    byte_4B1B31E = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return type == 2;
}


bool __fastcall BattleCommand__isQUICK(int32_t type, const MethodInfo *method)
{
  return type == 3;
}


bool __fastcall BattleCommand__isQUICK_39475464(int32_t type, const MethodInfo *method)
{
  if ( (byte_4B1B31F & 1) == 0 )
  {
    sub_1BCAFF8(&BattleCommand_TypeInfo, method);
    byte_4B1B31F = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return type == 3;
}


bool __fastcall BattleCommand__isShowCommandAction(int32_t type, const MethodInfo *method)
{
  if ( (byte_4B1B320 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleCommand_TypeInfo, method);
    byte_4B1B320 = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  if ( type == 1 )
    return 1;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  if ( type == 3 )
    return 1;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  if ( type == 2 )
    return 1;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  if ( type == 4 )
    return 1;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  if ( type == 10 )
    return 1;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return type == 11;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommand__setSprite(UISprite_o *sprite, int32_t type, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 *v7; // x8

  v4 = (UnityEngine_Behaviour_o *)sprite;
  if ( (byte_4B1B321 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_19992/*"icon_commandcard_quick"*/, *(_QWORD *)&type);
    sub_1BCAFF8(&StringLiteral_19990/*"icon_commandcard_buster"*/, v5);
    sprite = (UISprite_o *)sub_1BCAFF8(&StringLiteral_19989/*"icon_commandcard_arts"*/, v6);
    byte_4B1B321 = 1;
  }
  switch ( type )
  {
    case 3:
      if ( v4 )
      {
        UnityEngine_Behaviour__set_enabled(v4, 1, 0LL);
        v7 = &StringLiteral_19992/*"icon_commandcard_quick"*/;
        goto LABEL_12;
      }
      goto LABEL_15;
    case 2:
      if ( v4 )
      {
        UnityEngine_Behaviour__set_enabled(v4, 1, 0LL);
        v7 = &StringLiteral_19990/*"icon_commandcard_buster"*/;
        goto LABEL_12;
      }
LABEL_15:
      sub_1BCB254(sprite, *(_QWORD *)&type);
    case 1:
      if ( v4 )
      {
        UnityEngine_Behaviour__set_enabled(v4, 1, 0LL);
        v7 = &StringLiteral_19989/*"icon_commandcard_arts"*/;
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