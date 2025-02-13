void __fastcall BattleCommand___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  struct BattleCommand_TYPE_array *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  System_RuntimeFieldHandle_o v9; // 0:w1.4

  if ( (byte_4BDB3EC & 1) == 0 )
  {
    sub_1C21E38(&BattleCommand_TypeInfo);
    sub_1C21E38(&BattleCommand_TYPE___TypeInfo);
    sub_1C21E38(&Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A);
    byte_4BDB3EC = 1;
  }
  v1 = (System_Array_o *)sub_1C21EE0(BattleCommand_TYPE___TypeInfo, 6LL);
  v9.fields.value = Field__PrivateImplementationDetails__D0EE47FA46F276FE089AC8624109AA30225984329C335054459E360DBE11E12A;
  v2 = (struct BattleCommand_TYPE_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63022812(v1, v9, 0LL);
  BattleCommand_TypeInfo->static_fields->COMMAND_TYPES = v2;
  sub_1C21DDC((PartyOrganizationUtility_o *)BattleCommand_TypeInfo->static_fields, (int64_t)v2, v3, v4, v5, v6, v7, v8);
}


System_String_o *__fastcall BattleCommand__GetCardTypeChangeSpriteNameSuffix(
        int32_t type,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 *v5; // x8

  if ( (byte_4BDB3EA & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_17202/*"arts_quick"*/);
    sub_1C21E38(&StringLiteral_23146/*"quick_buster"*/);
    sub_1C21E38(&StringLiteral_17941/*"buster_arts"*/);
    byte_4BDB3EA = 1;
  }
  switch ( type )
  {
    case 1:
    case 3:
      v5 = &StringLiteral_17941/*"buster_arts"*/;
      goto LABEL_7;
    case 2:
    case 5:
      v5 = &StringLiteral_17202/*"arts_quick"*/;
      goto LABEL_7;
    case 4:
    case 6:
      v5 = &StringLiteral_23146/*"quick_buster"*/;
LABEL_7:
      defaultValue = (System_String_o *)*v5;
      break;
    default:
      return defaultValue;
  }
  return defaultValue;
}


System_String_o *__fastcall BattleCommand__GetCommandTypeName(
        int32_t type,
        System_String_o *defaultText,
        const MethodInfo *method)
{
  __int64 *v5; // x8

  if ( (byte_4BDB3E1 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3417/*"Buster"*/);
    sub_1C21E38(&StringLiteral_11146/*"Quick"*/);
    sub_1C21E38(&StringLiteral_2517/*"Arts"*/);
    byte_4BDB3E1 = 1;
  }
  switch ( type )
  {
    case 1:
      v5 = &StringLiteral_2517/*"Arts"*/;
      return (System_String_o *)*v5;
    case 3:
      v5 = &StringLiteral_11146/*"Quick"*/;
      return (System_String_o *)*v5;
    case 2:
      v5 = &StringLiteral_3417/*"Buster"*/;
      return (System_String_o *)*v5;
  }
  return defaultText;
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
  bool isARTS_38796124; // w21
  const MethodInfo *v7; // x1
  const MethodInfo *v9; // x1
  bool isBUSTER_38796224; // w21
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4BDB3EB & 1) == 0 )
  {
    sub_1C21E38(&BattleCommand_TypeInfo);
    byte_4BDB3EB = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  isARTS_38796124 = BattleCommand__isARTS_38796124(beforeTypeRawValue, *(const MethodInfo **)&afterTypeRawValue);
  if ( BattleCommand_TypeInfo->_2.cctor_finished )
  {
    if ( isARTS_38796124 )
      goto LABEL_7;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    if ( isARTS_38796124 )
    {
LABEL_7:
      if ( BattleCommand__isBUSTER_38796224(afterTypeRawValue, v5) )
        return 1;
      if ( !BattleCommand_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
      if ( BattleCommand__isQUICK_38796324(afterTypeRawValue, v7) )
        return 2;
      return 0;
    }
  }
  isBUSTER_38796224 = BattleCommand__isBUSTER_38796224(beforeTypeRawValue, v5);
  if ( BattleCommand_TypeInfo->_2.cctor_finished )
  {
    if ( isBUSTER_38796224 )
      goto LABEL_12;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    if ( isBUSTER_38796224 )
    {
LABEL_12:
      if ( BattleCommand__isARTS_38796124(afterTypeRawValue, v9) )
        return 3;
      if ( !BattleCommand_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
      if ( BattleCommand__isQUICK_38796324(afterTypeRawValue, v11) )
        return 4;
      return 0;
    }
  }
  if ( BattleCommand__isQUICK_38796324(beforeTypeRawValue, v9) )
  {
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    if ( BattleCommand__isARTS_38796124(afterTypeRawValue, v12) )
      return 5;
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    if ( BattleCommand__isBUSTER_38796224(afterTypeRawValue, v13) )
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
  if ( (byte_4BDB3E4 & 1) == 0 )
  {
    data = (BattleCommandData_o *)sub_1C21E38(&BattleCommand_TypeInfo);
    byte_4BDB3E4 = 1;
  }
  if ( !v2 )
    sub_1C22094(data, method);
  CommandType = BattleCommandData__getCommandType(v2, 0LL);
  actionIndex = v2->fields.actionIndex;
  v5 = CommandType;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return CardMaster__getCritical(v5, actionIndex, 0LL);
}


float __fastcall BattleCommand__getCriticalMagnification_38796096(
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
  if ( (byte_4BDB3E2 & 1) == 0 )
  {
    data = (BattleCommandData_o *)sub_1C21E38(&BattleCommand_TypeInfo);
    byte_4BDB3E2 = 1;
  }
  if ( !v2 )
    sub_1C22094(data, method);
  CommandType = BattleCommandData__getCommandType(v2, 0LL);
  actionIndex = v2->fields.actionIndex;
  v5 = CommandType;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return CardMaster__getAtk(v5, actionIndex, 0LL);
}


float __fastcall BattleCommand__getMagnification_38795832(int32_t type, int32_t index, const MethodInfo *method)
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
  if ( (byte_4BDB3E3 & 1) == 0 )
  {
    command = (BattleCommandData_o *)sub_1C21E38(&BattleCommand_TypeInfo);
    byte_4BDB3E3 = 1;
  }
  if ( !v2 )
    sub_1C22094(command, method);
  CommandType = BattleCommandData__getCommandType(v2, 0LL);
  actionIndex = v2->fields.actionIndex;
  v5 = CommandType;
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return CardMaster__getTdGauge(v5, actionIndex, 0LL);
}


float __fastcall BattleCommand__getNpMagnification_38795964(int32_t type, int32_t index, const MethodInfo *method)
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


bool __fastcall BattleCommand__isARTS_38796124(int32_t type, const MethodInfo *method)
{
  if ( (byte_4BDB3E5 & 1) == 0 )
  {
    sub_1C21E38(&BattleCommand_TypeInfo);
    byte_4BDB3E5 = 1;
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


bool __fastcall BattleCommand__isBUSTER_38796224(int32_t type, const MethodInfo *method)
{
  if ( (byte_4BDB3E6 & 1) == 0 )
  {
    sub_1C21E38(&BattleCommand_TypeInfo);
    byte_4BDB3E6 = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return type == 2;
}


bool __fastcall BattleCommand__isQUICK(int32_t type, const MethodInfo *method)
{
  return type == 3;
}


bool __fastcall BattleCommand__isQUICK_38796324(int32_t type, const MethodInfo *method)
{
  if ( (byte_4BDB3E7 & 1) == 0 )
  {
    sub_1C21E38(&BattleCommand_TypeInfo);
    byte_4BDB3E7 = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  return type == 3;
}


bool __fastcall BattleCommand__isShowCommandAction(int32_t type, const MethodInfo *method)
{
  if ( (byte_4BDB3E8 & 1) == 0 )
  {
    sub_1C21E38(&BattleCommand_TypeInfo);
    byte_4BDB3E8 = 1;
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
  __int64 *v5; // x8

  v4 = (UnityEngine_Behaviour_o *)sprite;
  if ( (byte_4BDB3E9 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_20477/*"icon_commandcard_quick"*/);
    sub_1C21E38(&StringLiteral_20475/*"icon_commandcard_buster"*/);
    sprite = (UISprite_o *)sub_1C21E38(&StringLiteral_20474/*"icon_commandcard_arts"*/);
    byte_4BDB3E9 = 1;
  }
  switch ( type )
  {
    case 3:
      if ( v4 )
      {
        UnityEngine_Behaviour__set_enabled(v4, 1, 0LL);
        v5 = &StringLiteral_20477/*"icon_commandcard_quick"*/;
        goto LABEL_12;
      }
      goto LABEL_15;
    case 2:
      if ( v4 )
      {
        UnityEngine_Behaviour__set_enabled(v4, 1, 0LL);
        v5 = &StringLiteral_20475/*"icon_commandcard_buster"*/;
        goto LABEL_12;
      }
LABEL_15:
      sub_1C22094(sprite, *(_QWORD *)&type);
    case 1:
      if ( v4 )
      {
        UnityEngine_Behaviour__set_enabled(v4, 1, 0LL);
        v5 = &StringLiteral_20474/*"icon_commandcard_arts"*/;
LABEL_12:
        UISprite__set_spriteName((UISprite_o *)v4, (System_String_o *)*v5, 0LL);
        return;
      }
      goto LABEL_15;
  }
  if ( !v4 )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled(v4, 0, 0LL);
}