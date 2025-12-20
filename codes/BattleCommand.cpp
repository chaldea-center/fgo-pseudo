void BattleCommand___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct BattleCommand_TYPE_array *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2B5FE & 1) == 0 )
  {
    sub_1C94098(&BattleCommand_TypeInfo);
    sub_1C94098(&BattleCommand_TYPE___TypeInfo);
    sub_1C94098(&Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A);
    byte_4D2B5FE = 1;
  }
  v1 = (System_Array_o *)sub_1C94140(BattleCommand_TYPE___TypeInfo, 6);
  v2.fields.value = Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A;
  v3 = (struct BattleCommand_TYPE_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65116968(v1, v2, 0);
  BattleCommand_TypeInfo->static_fields->COMMAND_TYPES = v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)BattleCommand_TypeInfo->static_fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


System_String_o *BattleCommand__GetCardTypeChangeSpriteNameSuffix(
        int32_t type,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 *v5; // x8

  if ( (byte_4D2B5FC & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_16974/*"arts_quick"*/);
    sub_1C94098(&StringLiteral_23133/*"quick_buster"*/);
    sub_1C94098(&StringLiteral_17725/*"buster_arts"*/);
    byte_4D2B5FC = 1;
  }
  switch ( type )
  {
    case 1:
    case 3:
      v5 = &StringLiteral_17725/*"buster_arts"*/;
      goto LABEL_7;
    case 2:
    case 5:
      v5 = &StringLiteral_16974/*"arts_quick"*/;
      goto LABEL_7;
    case 4:
    case 6:
      v5 = &StringLiteral_23133/*"quick_buster"*/;
LABEL_7:
      defaultValue = (System_String_o *)*v5;
      break;
    default:
      return defaultValue;
  }
  return defaultValue;
}


System_String_o *BattleCommand__GetCommandTypeName(
        int32_t type,
        System_String_o *defaultText,
        const MethodInfo *method)
{
  __int64 *v5; // x8

  if ( (byte_4D2B5F3 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_3253/*"Buster"*/);
    sub_1C94098(&StringLiteral_10982/*"Quick"*/);
    sub_1C94098(&StringLiteral_2361/*"Arts"*/);
    byte_4D2B5F3 = 1;
  }
  switch ( type )
  {
    case 1:
      v5 = &StringLiteral_2361/*"Arts"*/;
      return (System_String_o *)*v5;
    case 3:
      v5 = &StringLiteral_10982/*"Quick"*/;
      return (System_String_o *)*v5;
    case 2:
      v5 = &StringLiteral_3253/*"Buster"*/;
      return (System_String_o *)*v5;
  }
  return defaultText;
}


bool BattleCommand__IsSTRENGTH(int32_t type, const MethodInfo *method)
{
  return type == 11;
}


bool BattleCommand__IsWEAK(int32_t type, const MethodInfo *method)
{
  return type == 10;
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleCommand__JudgeCommandCardTypeChange(
        int32_t beforeTypeRawValue,
        int32_t afterTypeRawValue,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  bool isARTS_41027964; // w21
  const MethodInfo *v7; // x1
  const MethodInfo *v9; // x1
  bool isBUSTER_41028064; // w21
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4D2B5FD & 1) == 0 )
  {
    sub_1C94098(&BattleCommand_TypeInfo);
    byte_4D2B5FD = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  isARTS_41027964 = BattleCommand__isARTS_41027964(beforeTypeRawValue, *(const MethodInfo **)&afterTypeRawValue);
  if ( BattleCommand_TypeInfo->_2.cctor_finished )
  {
    if ( isARTS_41027964 )
      goto LABEL_7;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    if ( isARTS_41027964 )
    {
LABEL_7:
      if ( BattleCommand__isBUSTER_41028064(afterTypeRawValue, v5) )
        return 1;
      if ( !BattleCommand_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
      if ( BattleCommand__isQUICK_41028164(afterTypeRawValue, v7) )
        return 2;
      return 0;
    }
  }
  isBUSTER_41028064 = BattleCommand__isBUSTER_41028064(beforeTypeRawValue, v5);
  if ( BattleCommand_TypeInfo->_2.cctor_finished )
  {
    if ( isBUSTER_41028064 )
      goto LABEL_12;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    if ( isBUSTER_41028064 )
    {
LABEL_12:
      if ( BattleCommand__isARTS_41027964(afterTypeRawValue, v9) )
        return 3;
      if ( !BattleCommand_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
      if ( BattleCommand__isQUICK_41028164(afterTypeRawValue, v11) )
        return 4;
      return 0;
    }
  }
  if ( BattleCommand__isQUICK_41028164(beforeTypeRawValue, v9) )
  {
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    if ( BattleCommand__isARTS_41027964(afterTypeRawValue, v12) )
      return 5;
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    if ( BattleCommand__isBUSTER_41028064(afterTypeRawValue, v13) )
      return 6;
  }
  return 0;
}


float BattleCommand__getCriticalMagnification(BattleCommandData_o *data, const MethodInfo *method)
{
  BattleCommandData_o *v2; // x19
  int32_t CommandType; // w0
  int32_t actionIndex; // w19
  int32_t v5; // w20

  v2 = data;
  if ( (byte_4D2B5F6 & 1) == 0 )
  {
    data = (BattleCommandData_o *)sub_1C94098(&BattleCommand_TypeInfo);
    byte_4D2B5F6 = 1;
  }
  if ( !v2 )
    sub_1C942F0(data, method);
  CommandType = BattleCommandData__getCommandType(v2, 0);
  actionIndex = v2->fields.actionIndex;
  v5 = CommandType;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return CardMaster__getCritical(v5, actionIndex, 0);
}


float BattleCommand__getCriticalMagnification_41027936(int32_t type, int32_t index, const MethodInfo *method)
{
  return CardMaster__getCritical(type, index, 0);
}


System_Int32_array *BattleCommand__getIndividuality(int32_t type, int32_t num, const MethodInfo *method)
{
  return CardMaster__getIndividualities(type, num, 0);
}


float BattleCommand__getMagnification(BattleCommandData_o *data, const MethodInfo *method)
{
  BattleCommandData_o *v2; // x19
  int32_t CommandType; // w0
  int32_t actionIndex; // w19
  int32_t v5; // w20

  v2 = data;
  if ( (byte_4D2B5F4 & 1) == 0 )
  {
    data = (BattleCommandData_o *)sub_1C94098(&BattleCommand_TypeInfo);
    byte_4D2B5F4 = 1;
  }
  if ( !v2 )
    sub_1C942F0(data, method);
  CommandType = BattleCommandData__getCommandType(v2, 0);
  actionIndex = v2->fields.actionIndex;
  v5 = CommandType;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return CardMaster__getAtk(v5, actionIndex, 0);
}


float BattleCommand__getMagnification_41027672(int32_t type, int32_t index, const MethodInfo *method)
{
  return CardMaster__getAtk(type, index, 0);
}


float BattleCommand__getNpMagnification(BattleCommandData_o *command, const MethodInfo *method)
{
  BattleCommandData_o *v2; // x19
  int32_t CommandType; // w0
  int32_t actionIndex; // w19
  int32_t v5; // w20

  v2 = command;
  if ( (byte_4D2B5F5 & 1) == 0 )
  {
    command = (BattleCommandData_o *)sub_1C94098(&BattleCommand_TypeInfo);
    byte_4D2B5F5 = 1;
  }
  if ( !v2 )
    sub_1C942F0(command, method);
  CommandType = BattleCommandData__getCommandType(v2, 0);
  actionIndex = v2->fields.actionIndex;
  v5 = CommandType;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return CardMaster__getTdGauge(v5, actionIndex, 0);
}


float BattleCommand__getNpMagnification_41027804(int32_t type, int32_t index, const MethodInfo *method)
{
  return CardMaster__getTdGauge(type, index, 0);
}


int32_t BattleCommand__getType(int32_t type, const MethodInfo *method)
{
  return type;
}


bool BattleCommand__isADDATTACK(int32_t type, const MethodInfo *method)
{
  return type == 4;
}


bool BattleCommand__isARTS(int32_t type, const MethodInfo *method)
{
  return type == 1;
}


bool BattleCommand__isARTS_41027964(int32_t type, const MethodInfo *method)
{
  if ( (byte_4D2B5F7 & 1) == 0 )
  {
    sub_1C94098(&BattleCommand_TypeInfo);
    byte_4D2B5F7 = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return type == 1;
}


bool BattleCommand__isBLANK(int32_t type, const MethodInfo *method)
{
  return type == 5;
}


bool BattleCommand__isBUSTER(int32_t type, const MethodInfo *method)
{
  return type == 2;
}


bool BattleCommand__isBUSTER_41028064(int32_t type, const MethodInfo *method)
{
  if ( (byte_4D2B5F8 & 1) == 0 )
  {
    sub_1C94098(&BattleCommand_TypeInfo);
    byte_4D2B5F8 = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return type == 2;
}


bool BattleCommand__isQUICK(int32_t type, const MethodInfo *method)
{
  return type == 3;
}


bool BattleCommand__isQUICK_41028164(int32_t type, const MethodInfo *method)
{
  if ( (byte_4D2B5F9 & 1) == 0 )
  {
    sub_1C94098(&BattleCommand_TypeInfo);
    byte_4D2B5F9 = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return type == 3;
}


bool BattleCommand__isShowCommandAction(int32_t type, const MethodInfo *method)
{
  if ( (byte_4D2B5FA & 1) == 0 )
  {
    sub_1C94098(&BattleCommand_TypeInfo);
    byte_4D2B5FA = 1;
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
void BattleCommand__setSprite(UISprite_o *sprite, int32_t type, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *v4; // x19
  __int64 *v5; // x8

  v4 = (UnityEngine_Behaviour_o *)sprite;
  if ( (byte_4D2B5FB & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_20341/*"icon_commandcard_quick"*/);
    sub_1C94098(&StringLiteral_20339/*"icon_commandcard_buster"*/);
    sprite = (UISprite_o *)sub_1C94098(&StringLiteral_20338/*"icon_commandcard_arts"*/);
    byte_4D2B5FB = 1;
  }
  switch ( type )
  {
    case 3:
      if ( v4 )
      {
        UnityEngine_Behaviour__set_enabled(v4, 1, 0);
        v5 = &StringLiteral_20341/*"icon_commandcard_quick"*/;
        goto LABEL_12;
      }
      goto LABEL_15;
    case 2:
      if ( v4 )
      {
        UnityEngine_Behaviour__set_enabled(v4, 1, 0);
        v5 = &StringLiteral_20339/*"icon_commandcard_buster"*/;
        goto LABEL_12;
      }
LABEL_15:
      sub_1C942F0(sprite, *(_QWORD *)&type);
    case 1:
      if ( v4 )
      {
        UnityEngine_Behaviour__set_enabled(v4, 1, 0);
        v5 = &StringLiteral_20338/*"icon_commandcard_arts"*/;
LABEL_12:
        UISprite__set_spriteName((UISprite_o *)v4, (System_String_o *)*v5, 0);
        return;
      }
      goto LABEL_15;
  }
  if ( !v4 )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled(v4, 0, 0);
}