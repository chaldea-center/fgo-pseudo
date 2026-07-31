void ExtraBattleUserInterfaceButtonComponent___ctor(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ExtraBattleUserInterfaceButtonComponent__Awake(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void ExtraBattleUserInterfaceButtonComponent__OnTap(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        const MethodInfo *method)
{
  _BOOL4 IsEnable_k__BackingField; // w20
  bool IsNullOrEmpty; // w0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_593B6EB & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_ExtraBattleUserInterfaceButtonComponent_ExecType__ExtraBattleUserInterfaceData___);
    sub_21FFC50(&Method_ExtraBattleUserInterfaceButtonComponent_OnTap__);
    byte_593B6EB = 1;
  }
  IsEnable_k__BackingField = this->fields._IsEnable_k__BackingField;
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.disableTapSeName, 0);
  if ( IsEnable_k__BackingField )
  {
    if ( !IsNullOrEmpty )
    {
      v5 = Method_ExtraBattleUserInterfaceButtonComponent_OnTap__;
      if ( (*((_BYTE *)Method_ExtraBattleUserInterfaceButtonComponent_OnTap__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_21FFC68(Method_ExtraBattleUserInterfaceButtonComponent_OnTap__);
      v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
      OverwriteAssetSoundName__PlaySe(v6, this->fields.enableTapSeName, 0, 0);
    }
    ActionExtensions__Call_Int32Enum__object_(
      (System_Action_T1__T2__o *)this->fields.onTapCallback,
      this->fields.execType,
      (Il2CppObject *)this->fields.exUiData,
      (const MethodInfo_36CE28C *)Method_ActionExtensions_Call_ExtraBattleUserInterfaceButtonComponent_ExecType__ExtraBattleUserInterfaceData___);
  }
  else if ( !IsNullOrEmpty )
  {
    v7 = Method_ExtraBattleUserInterfaceButtonComponent_OnTap__;
    if ( (*((_BYTE *)Method_ExtraBattleUserInterfaceButtonComponent_OnTap__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_21FFC68(Method_ExtraBattleUserInterfaceButtonComponent_OnTap__);
    v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v7, v7[4]);
    OverwriteAssetSoundName__PlaySe(v8, this->fields.disableTapSeName, 0, 0);
  }
}


void ExtraBattleUserInterfaceButtonComponent__SetActiveStateObjects(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *stateObjects; // x20
  System_Action_object__o *v4; // x21

  if ( (byte_593B6E7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_ExtraBattleUserInterfaceButtonComponent_StateObject__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_ExtraBattleUserInterfaceButtonComponent_StateObject___);
    sub_21FFC50(&Method_ExtraBattleUserInterfaceButtonComponent__SetActiveStateObjects_b__19_0__);
    byte_593B6E7 = 1;
  }
  stateObjects = (System_Collections_Generic_IEnumerable_T__o *)this->fields.stateObjects;
  v4 = (System_Action_object__o *)sub_21FFEBC(System_Action_ExtraBattleUserInterfaceButtonComponent_StateObject__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_ExtraBattleUserInterfaceButtonComponent__SetActiveStateObjects_b__19_0__,
    0);
  BasicHelper__ForEach_object_(
    stateObjects,
    (System_Action_T__o *)v4,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_ExtraBattleUserInterfaceButtonComponent_StateObject___);
}


void ExtraBattleUserInterfaceButtonComponent__SetButtonLabel(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_593B6E8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B6E8 = 1;
  }
  buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, text);
  if ( !UnityEngine_Object__op_Equality(buttonLabel, 0, 0) )
  {
    v7 = this->fields.buttonLabel;
    if ( !v7 )
      sub_21FFECC(0, v6);
    UILabel__set_text(v7, text, 0);
    ExtraBattleUserInterfaceButtonComponent__SetActiveStateObjects(this, v8);
  }
}


void ExtraBattleUserInterfaceButtonComponent__SetButtonLabelColor(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *buttonLabel; // x20
  __int64 v9; // x1
  UIWidget_o *v10; // x0
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_593B6E9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B6E9 = 1;
  }
  buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(buttonLabel, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.buttonLabel;
    if ( !v10 )
      sub_21FFECC(0, v9);
    v11.fields.b = b;
    v11.fields.a = a;
    v11.fields.r = r;
    v11.fields.g = g;
    UIWidget__set_color(v10, v11, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ExtraBattleUserInterfaceButtonComponent__SetEnable(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  UISprite_o *buttonSprite; // x0
  __int64 v5; // x8
  const MethodInfo *v6; // x1

  buttonSprite = this->fields.buttonSprite;
  this->fields._IsEnable_k__BackingField = value;
  if ( !buttonSprite )
    sub_21FFECC(0, value);
  v5 = 144;
  if ( value )
    v5 = 128;
  UISprite__set_spriteName(buttonSprite, *(System_String_o **)((char *)&this->klass + v5), 0);
  ExtraBattleUserInterfaceButtonComponent__SetActiveStateObjects(this, v6);
}


void ExtraBattleUserInterfaceButtonComponent__SetOnTapCallback(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        System_Action_ExtraBattleUserInterfaceButtonComponent_ExecType__ExtraBattleUserInterfaceData__o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onTapCallback = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onTapCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExtraBattleUserInterfaceButtonComponent__UpdateData(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        ExtraBattleUserInterfaceData_o *uiData,
        BattleData_o *battleData,
        int32_t addTurn,
        ExtraBattleUserInterfaceData_LabelType_array *updateLabelTypes,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceData_CondDataWrapper_o *Cond_k__BackingField; // x0
  MethodInfo *executeSkill; // x1
  const MethodInfo *v13; // x2
  int32_t execType; // w8
  int v15; // w22
  _BOOL4 v16; // w0
  const MethodInfo *v17; // x2
  bool v18; // w21
  bool v19; // w1
  struct ExtraBattleUserInterfaceData_JsonConvertData_o *data; // x8
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  System_String_o *v23; // x0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x1
  bool v26; // w8
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  System_String_o *v31; // x1
  int32_t targetIndex; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593B6EA & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6055/*"EX_BATTLE_UI_SWITCH_PARTY_BUTTON_ALL_OTHER_PARTY_LOSE_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_6054/*"EX_BATTLE_UI_EXECUTE_SKILL_BUTTON_COND_NO_ALIVE_SUB_MEMBER"*/);
    byte_593B6EA = 1;
  }
  targetIndex = 0;
  ExtraBattleUserInterfaceComponent__UpdateData(
    (ExtraBattleUserInterfaceComponent_o *)this,
    uiData,
    battleData,
    addTurn,
    updateLabelTypes,
    method);
  if ( !uiData )
    goto LABEL_29;
  Cond_k__BackingField = uiData->fields._Cond_k__BackingField;
  if ( !Cond_k__BackingField )
    goto LABEL_29;
  ExtraBattleUserInterfaceData_CondDataWrapper__UpdateVerification(Cond_k__BackingField, battleData, v13);
  Cond_k__BackingField = uiData->fields._Cond_k__BackingField;
  if ( !Cond_k__BackingField )
    goto LABEL_29;
  Cond_k__BackingField = (ExtraBattleUserInterfaceData_CondDataWrapper_o *)ExtraBattleUserInterfaceData_CondDataWrapper__IsAllVerified(
                                                                             Cond_k__BackingField,
                                                                             executeSkill);
  execType = this->fields.execType;
  v15 = (int)Cond_k__BackingField;
  if ( execType != 2 )
  {
    if ( execType != 1 )
      return;
    if ( battleData )
    {
      v16 = BattleData__TrySearchNextAlivePartyIndex(battleData, &targetIndex, 0);
      v18 = v16;
      v19 = (v15 & v16 & 1) != 0 && battleData->fields._SwitchPartyChargeTurn_k__BackingField < 1;
      ExtraBattleUserInterfaceButtonComponent__SetEnable(this, v19, v17);
      if ( v18 )
      {
        ExtraBattleUserInterfaceButtonComponent__SetButtonLabel(this, (System_String_o *)StringLiteral_1/*""*/, v22);
      }
      else
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_6055/*"EX_BATTLE_UI_SWITCH_PARTY_BUTTON_ALL_OTHER_PARTY_LOSE_MESSAGE"*/, 0);
        ExtraBattleUserInterfaceButtonComponent__SetButtonLabel(this, v23, v24);
        v33.fields.r = 1.0;
        v33.fields.a = 1.0;
        v33.fields.g = 0.92157;
        v33.fields.b = 0.015686;
        ExtraBattleUserInterfaceButtonComponent__SetButtonLabelColor(this, v33, v25);
      }
      return;
    }
LABEL_29:
    sub_21FFECC(Cond_k__BackingField, executeSkill);
  }
  data = uiData->fields.data;
  if ( data )
  {
    executeSkill = (MethodInfo *)data->fields.executeSkill;
    if ( !battleData )
      goto LABEL_29;
  }
  else
  {
    executeSkill = 0;
    if ( !battleData )
      goto LABEL_29;
  }
  v26 = BattleData__GetChargeTurnOfExBattleUiSkill(
          battleData,
          (ExtraBattleUserInterfaceData_ExecSkillData_o *)executeSkill,
          0) < 1;
  ExtraBattleUserInterfaceButtonComponent__SetEnable(this, v15 & v26, v27);
  Cond_k__BackingField = uiData->fields._Cond_k__BackingField;
  if ( !Cond_k__BackingField )
    goto LABEL_29;
  if ( ExtraBattleUserInterfaceData_CondDataWrapper__IsVerified(Cond_k__BackingField, 0, v28) )
  {
    v31 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_6054/*"EX_BATTLE_UI_EXECUTE_SKILL_BUTTON_COND_NO_ALIVE_SUB_MEMBER"*/, 0);
  }
  ExtraBattleUserInterfaceButtonComponent__SetButtonLabel(this, v31, v30);
}


void ExtraBattleUserInterfaceButtonComponent___SetActiveStateObjects_b__19_0(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        ExtraBattleUserInterfaceButtonComponent_StateObject_o *obj,
        const MethodInfo *method)
{
  System_Func_T__TResult__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_593B6EC & 1) == 0 )
  {
    sub_21FFC50(&Method_ExtraBattleUserInterfaceButtonComponent__SetActiveStateObjects_b__19_1__);
    sub_21FFC50(&System_Func_ExtraBattleUserInterfaceButtonComponent_ShowCondition__bool__TypeInfo);
    byte_593B6EC = 1;
  }
  v5 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_ExtraBattleUserInterfaceButtonComponent_ShowCondition__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(
    v5,
    (Il2CppObject *)this,
    Method_ExtraBattleUserInterfaceButtonComponent__SetActiveStateObjects_b__19_1__,
    0);
  if ( !obj )
    sub_21FFECC(v6, v7);
  ExtraBattleUserInterfaceButtonComponent_StateObject__SetActiveCondition(
    obj,
    (System_Func_ExtraBattleUserInterfaceButtonComponent_ShowCondition__bool__o *)v5,
    v8);
}


// local variable allocation has failed, the output may be wrong!
bool ExtraBattleUserInterfaceButtonComponent___SetActiveStateObjects_b__19_1(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        int32_t condition,
        const MethodInfo *method)
{
  bool v5; // w8
  UnityEngine_Object_o *v6; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  struct UILabel_o *v9; // x8
  UnityEngine_Object_o *buttonLabel; // x20
  struct UILabel_o *v12; // x8

  if ( (byte_593B6ED & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B6ED = 1;
  }
  v5 = 0;
  if ( condition <= 1 )
  {
    if ( condition )
    {
      if ( condition == 1 )
        return !this->fields._IsEnable_k__BackingField;
    }
    else
    {
      return this->fields._IsEnable_k__BackingField;
    }
    return v5;
  }
  if ( condition == 2 )
  {
    buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&condition);
    v7 = UnityEngine_Object__op_Inequality(buttonLabel, 0, 0);
    if ( !v7 )
      return 0;
    v12 = this->fields.buttonLabel;
    if ( !v12 )
      goto LABEL_22;
    return !System_String__IsNullOrEmpty(v12->fields.mText, 0);
  }
  else if ( condition == 3 )
  {
    v6 = (UnityEngine_Object_o *)this->fields.buttonLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&condition);
    v7 = UnityEngine_Object__op_Inequality(v6, 0, 0);
    if ( v7 )
    {
      v9 = this->fields.buttonLabel;
      if ( v9 )
        return System_String__IsNullOrEmpty(v9->fields.mText, 0);
LABEL_22:
      sub_21FFECC(v7, v8);
    }
    return 0;
  }
  return v5;
}


bool ExtraBattleUserInterfaceButtonComponent__get_IsEnable(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEnable_k__BackingField;
}


void ExtraBattleUserInterfaceButtonComponent__set_IsEnable(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEnable_k__BackingField = value;
}


void ExtraBattleUserInterfaceButtonComponent_StateObject___ctor(
        ExtraBattleUserInterfaceButtonComponent_StateObject_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExtraBattleUserInterfaceButtonComponent_StateObject__SetActiveCondition(
        ExtraBattleUserInterfaceButtonComponent_StateObject_o *this,
        System_Func_ExtraBattleUserInterfaceButtonComponent_ShowCondition__bool__o *func,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj; // x19
  __int64 v4; // x0

  obj = this->fields.obj;
  if ( !func )
  {
    v4 = 0;
    if ( obj )
      goto LABEL_3;
LABEL_5:
    sub_21FFECC(v4, func);
  }
  v4 = ((__int64 (__fastcall *)(intptr_t, _QWORD, intptr_t))func->fields.invoke_impl)(
         func->fields.method_code,
         (unsigned int)this->fields.condition,
         func->fields.method);
  if ( !obj )
    goto LABEL_5;
LABEL_3:
  UnityEngine_GameObject__SetActive(obj, v4 & 1, 0);
}