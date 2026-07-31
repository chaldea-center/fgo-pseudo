void BattleCommand___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct BattleCommand_TYPE_array *v3; // x19
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5937415 & 1) == 0 )
  {
    sub_21FFC50(&BattleCommand_TypeInfo);
    sub_21FFC50(&BattleCommand_TYPE___TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A);
    byte_5937415 = 1;
  }
  v1 = (System_Array_o *)sub_21FFD10(BattleCommand_TYPE___TypeInfo, 6);
  v2.fields.value = Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A;
  v3 = (struct BattleCommand_TYPE_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v1, v2, 0);
  BattleCommand_TypeInfo->static_fields->COMMAND_TYPES = v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleCommand_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


System_String_o *BattleCommand__GetCardTypeChangeSpriteNameSuffix(
        int32_t type,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 *v5; // x8

  if ( (byte_5937413 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17570/*"arts_quick"*/);
    sub_21FFC50(&StringLiteral_24053/*"quick_buster"*/);
    sub_21FFC50(&StringLiteral_18376/*"buster_arts"*/);
    byte_5937413 = 1;
  }
  if ( type > 3 )
  {
    if ( type != 4 )
    {
      if ( type == 5 )
        goto LABEL_12;
      if ( type != 6 )
        return defaultValue;
    }
    v5 = &StringLiteral_24053/*"quick_buster"*/;
    return (System_String_o *)*v5;
  }
  switch ( type )
  {
    case 1:
LABEL_7:
      v5 = &StringLiteral_18376/*"buster_arts"*/;
      return (System_String_o *)*v5;
    case 2:
LABEL_12:
      v5 = &StringLiteral_17570/*"arts_quick"*/;
      return (System_String_o *)*v5;
    case 3:
      goto LABEL_7;
  }
  return defaultValue;
}


System_String_o *BattleCommand__GetCommandTypeName(
        int32_t type,
        System_String_o *defaultText,
        const MethodInfo *method)
{
  __int64 *v5; // x8

  if ( (byte_593740A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3374/*"Buster"*/);
    sub_21FFC50(&StringLiteral_11398/*"Quick"*/);
    sub_21FFC50(&StringLiteral_2469/*"Arts"*/);
    byte_593740A = 1;
  }
  switch ( type )
  {
    case 1:
      v5 = &StringLiteral_2469/*"Arts"*/;
      return (System_String_o *)*v5;
    case 3:
      v5 = &StringLiteral_11398/*"Quick"*/;
      return (System_String_o *)*v5;
    case 2:
      v5 = &StringLiteral_3374/*"Buster"*/;
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
  __int64 v6; // x2
  bool isARTS_47209072; // w8
  int v8; // w9
  const MethodInfo *v9; // x1
  __int64 v10; // x2
  const MethodInfo *v12; // x1
  __int64 v13; // x2
  bool isBUSTER_47209172; // w8
  int v15; // w9
  const MethodInfo *v16; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x1
  __int64 v21; // x2

  if ( (byte_5937414 & 1) == 0 )
  {
    sub_21FFC50(&BattleCommand_TypeInfo);
    byte_5937414 = 1;
  }
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, *(_QWORD *)&afterTypeRawValue, method);
  isARTS_47209072 = BattleCommand__isARTS_47209072(beforeTypeRawValue, *(const MethodInfo **)&afterTypeRawValue);
  v8 = *(&BattleCommand_TypeInfo->_2.cctor_finished + 1);
  if ( isARTS_47209072 )
  {
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v5, v6);
    if ( BattleCommand__isBUSTER_47209172(afterTypeRawValue, v5) )
      return 1;
    if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v9, v10);
    if ( BattleCommand__isQUICK_47209272(afterTypeRawValue, v9) )
      return 2;
  }
  else
  {
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v5, v6);
    isBUSTER_47209172 = BattleCommand__isBUSTER_47209172(beforeTypeRawValue, v5);
    v15 = *(&BattleCommand_TypeInfo->_2.cctor_finished + 1);
    if ( isBUSTER_47209172 )
    {
      if ( !v15 )
        j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v12, v13);
      if ( BattleCommand__isARTS_47209072(afterTypeRawValue, v12) )
        return 3;
      if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v16, v17);
      if ( BattleCommand__isQUICK_47209272(afterTypeRawValue, v16) )
        return 4;
    }
    else
    {
      if ( !v15 )
        j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v12, v13);
      if ( BattleCommand__isQUICK_47209272(beforeTypeRawValue, v12) )
      {
        if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v18, v19);
        if ( BattleCommand__isARTS_47209072(afterTypeRawValue, v18) )
          return 5;
        if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v20, v21);
        if ( BattleCommand__isBUSTER_47209172(afterTypeRawValue, v20) )
          return 6;
      }
    }
  }
  return 0;
}


float BattleCommand__getCriticalMagnification(BattleCommandData_o *data, const MethodInfo *method)
{
  BattleCommandData_o *v2; // x19
  int32_t CommandType; // w0
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t actionIndex; // w19
  int32_t v7; // w20

  v2 = data;
  if ( (byte_593740D & 1) == 0 )
  {
    data = (BattleCommandData_o *)sub_21FFC50(&BattleCommand_TypeInfo);
    byte_593740D = 1;
  }
  if ( !v2 )
    sub_21FFECC(data, method);
  CommandType = BattleCommandData__getCommandType(v2, 0);
  actionIndex = v2->fields.actionIndex;
  v7 = CommandType;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v4, v5);
  return CardMaster__getCritical(v7, actionIndex, 0);
}


float BattleCommand__getCriticalMagnification_47209052(int32_t type, int32_t index, const MethodInfo *method)
{
  return CardMaster__getCritical(type, index, 0);
}


float BattleCommand__getMagnification(BattleCommandData_o *data, const MethodInfo *method)
{
  BattleCommandData_o *v2; // x19
  int32_t CommandType; // w0
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t actionIndex; // w19
  int32_t v7; // w20

  v2 = data;
  if ( (byte_593740B & 1) == 0 )
  {
    data = (BattleCommandData_o *)sub_21FFC50(&BattleCommand_TypeInfo);
    byte_593740B = 1;
  }
  if ( !v2 )
    sub_21FFECC(data, method);
  CommandType = BattleCommandData__getCommandType(v2, 0);
  actionIndex = v2->fields.actionIndex;
  v7 = CommandType;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v4, v5);
  return CardMaster__getAtk(v7, actionIndex, 0);
}


float BattleCommand__getMagnification_47208788(int32_t type, int32_t index, const MethodInfo *method)
{
  return CardMaster__getAtk(type, index, 0);
}


float BattleCommand__getNpMagnification(BattleCommandData_o *command, const MethodInfo *method)
{
  BattleCommandData_o *v2; // x19
  int32_t CommandType; // w0
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t actionIndex; // w19
  int32_t v7; // w20

  v2 = command;
  if ( (byte_593740C & 1) == 0 )
  {
    command = (BattleCommandData_o *)sub_21FFC50(&BattleCommand_TypeInfo);
    byte_593740C = 1;
  }
  if ( !v2 )
    sub_21FFECC(command, method);
  CommandType = BattleCommandData__getCommandType(v2, 0);
  actionIndex = v2->fields.actionIndex;
  v7 = CommandType;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v4, v5);
  return CardMaster__getTdGauge(v7, actionIndex, 0);
}


float BattleCommand__getNpMagnification_47208920(int32_t type, int32_t index, const MethodInfo *method)
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


bool BattleCommand__isARTS_47209072(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593740E & 1) == 0 )
  {
    sub_21FFC50(&BattleCommand_TypeInfo);
    byte_593740E = 1;
  }
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method, v2);
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


bool BattleCommand__isBUSTER_47209172(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593740F & 1) == 0 )
  {
    sub_21FFC50(&BattleCommand_TypeInfo);
    byte_593740F = 1;
  }
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method, v2);
  return type == 2;
}


bool BattleCommand__isQUICK(int32_t type, const MethodInfo *method)
{
  return type == 3;
}


bool BattleCommand__isQUICK_47209272(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5937410 & 1) == 0 )
  {
    sub_21FFC50(&BattleCommand_TypeInfo);
    byte_5937410 = 1;
  }
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method, v2);
  return type == 3;
}


bool BattleCommand__isShowCommandAction(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5937411 & 1) == 0 )
  {
    sub_21FFC50(&BattleCommand_TypeInfo);
    byte_5937411 = 1;
  }
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method, v2);
  if ( type == 1 )
    return 1;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method, v2);
  if ( type == 3 )
    return 1;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method, v2);
  if ( type == 2 )
    return 1;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method, v2);
  if ( type == 4 )
    return 1;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method, v2);
  if ( type == 10 )
    return 1;
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method, v2);
  return type == 11;
}


// local variable allocation has failed, the output may be wrong!
void BattleCommand__setSprite(UISprite_o *sprite, int32_t type, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *v4; // x19
  __int64 *v5; // x8

  v4 = (UnityEngine_Behaviour_o *)sprite;
  if ( (byte_5937412 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21102/*"icon_commandcard_quick"*/);
    sub_21FFC50(&StringLiteral_21100/*"icon_commandcard_buster"*/);
    sprite = (UISprite_o *)sub_21FFC50(&StringLiteral_21099/*"icon_commandcard_arts"*/);
    byte_5937412 = 1;
  }
  switch ( type )
  {
    case 3:
      if ( v4 )
      {
        UnityEngine_Behaviour__set_enabled(v4, 1, 0);
        v5 = &StringLiteral_21102/*"icon_commandcard_quick"*/;
        goto LABEL_12;
      }
      goto LABEL_15;
    case 2:
      if ( v4 )
      {
        UnityEngine_Behaviour__set_enabled(v4, 1, 0);
        v5 = &StringLiteral_21100/*"icon_commandcard_buster"*/;
        goto LABEL_12;
      }
LABEL_15:
      sub_21FFECC(sprite, *(_QWORD *)&type);
    case 1:
      if ( v4 )
      {
        UnityEngine_Behaviour__set_enabled(v4, 1, 0);
        v5 = &StringLiteral_21099/*"icon_commandcard_arts"*/;
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