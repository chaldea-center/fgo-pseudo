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

  if ( (byte_4D2F8C9 & 1) == 0 )
  {
    sub_1C94098(&Method_ActionExtensions_Call_ExtraBattleUserInterfaceButtonComponent_ExecType__ExtraBattleUserInterfaceData___);
    sub_1C94098(&Method_ExtraBattleUserInterfaceButtonComponent_OnTap__);
    byte_4D2F8C9 = 1;
  }
  IsEnable_k__BackingField = this->fields._IsEnable_k__BackingField;
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.disableTapSeName, 0);
  if ( IsEnable_k__BackingField )
  {
    if ( !IsNullOrEmpty )
    {
      v5 = Method_ExtraBattleUserInterfaceButtonComponent_OnTap__;
      if ( (*((_BYTE *)Method_ExtraBattleUserInterfaceButtonComponent_OnTap__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C940B0(Method_ExtraBattleUserInterfaceButtonComponent_OnTap__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
      OverwriteAssetSoundName__PlaySe(v6, this->fields.enableTapSeName, 0, 0);
    }
    ActionExtensions__Call_Int32Enum__object_(
      (System_Action_T1__T2__o *)this->fields.onTapCallback,
      this->fields.execType,
      (Il2CppObject *)this->fields.exUiData,
      (const MethodInfo_30E5C64 *)Method_ActionExtensions_Call_ExtraBattleUserInterfaceButtonComponent_ExecType__ExtraBattleUserInterfaceData___);
  }
  else if ( !IsNullOrEmpty )
  {
    v7 = Method_ExtraBattleUserInterfaceButtonComponent_OnTap__;
    if ( (*((_BYTE *)Method_ExtraBattleUserInterfaceButtonComponent_OnTap__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C940B0(Method_ExtraBattleUserInterfaceButtonComponent_OnTap__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C9407C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySe(v8, this->fields.disableTapSeName, 0, 0);
  }
}


void ExtraBattleUserInterfaceButtonComponent__SetActiveStateObjects(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *stateObjects; // x20
  System_Action_object__o *v4; // x21

  if ( (byte_4D2F8C5 & 1) == 0 )
  {
    sub_1C94098(&System_Action_ExtraBattleUserInterfaceButtonComponent_StateObject__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_ExtraBattleUserInterfaceButtonComponent_StateObject___);
    sub_1C94098(&Method_ExtraBattleUserInterfaceButtonComponent__SetActiveStateObjects_b__19_0__);
    byte_4D2F8C5 = 1;
  }
  stateObjects = (System_Collections_Generic_IEnumerable_T__o *)this->fields.stateObjects;
  v4 = (System_Action_object__o *)sub_1C942E4(System_Action_ExtraBattleUserInterfaceButtonComponent_StateObject__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_ExtraBattleUserInterfaceButtonComponent__SetActiveStateObjects_b__19_0__,
    0);
  BasicHelper__ForEach_object_(
    stateObjects,
    (System_Action_T__o *)v4,
    (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_ExtraBattleUserInterfaceButtonComponent_StateObject___);
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

  if ( (byte_4D2F8C6 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2F8C6 = 1;
  }
  buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buttonLabel, 0, 0) )
  {
    v7 = this->fields.buttonLabel;
    if ( !v7 )
      sub_1C942F0(0, v6);
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
  if ( (byte_4D2F8C7 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2F8C7 = 1;
  }
  buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buttonLabel, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.buttonLabel;
    if ( !v10 )
      sub_1C942F0(0, v9);
    v11.fields.b = b;
    v11.fields.a = a;
    v11.fields.r = r;
    v11.fields.g = g;
    UIWidget__set_color(v10, v11, 0);
  }
}


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
    sub_1C942F0(0, value);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.onTapCallback = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onTapCallback,
    (int32_t)callback,
    (int32_t)method,
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
  const MethodInfo *v21; // x2
  System_String_o *v22; // x0
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x1
  bool v25; // w8
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  System_String_o *v28; // x1
  int32_t targetIndex; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2F8C8 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_5839/*"EX_BATTLE_UI_SWITCH_PARTY_BUTTON_ALL_OTHER_PARTY_LOSE_MESSAGE"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_5838/*"EX_BATTLE_UI_EXECUTE_SKILL_BUTTON_COND_NO_ALIVE_SUB_MEMBER"*/);
    byte_4D2F8C8 = 1;
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
    goto LABEL_28;
  Cond_k__BackingField = uiData->fields._Cond_k__BackingField;
  if ( !Cond_k__BackingField )
    goto LABEL_28;
  ExtraBattleUserInterfaceData_CondDataWrapper__UpdateVerification(Cond_k__BackingField, battleData, v13);
  Cond_k__BackingField = uiData->fields._Cond_k__BackingField;
  if ( !Cond_k__BackingField )
    goto LABEL_28;
  Cond_k__BackingField = (ExtraBattleUserInterfaceData_CondDataWrapper_o *)ExtraBattleUserInterfaceData_CondDataWrapper__IsAllVerified(
                                                                             Cond_k__BackingField,
                                                                             executeSkill);
  execType = this->fields.execType;
  v15 = (int)Cond_k__BackingField;
  if ( execType == 2 )
  {
    data = uiData->fields.data;
    if ( data )
    {
      executeSkill = (MethodInfo *)data->fields.executeSkill;
      if ( !battleData )
        goto LABEL_28;
    }
    else
    {
      executeSkill = 0;
      if ( !battleData )
        goto LABEL_28;
    }
    v25 = BattleData__GetChargeTurnOfExBattleUiSkill(
            battleData,
            (ExtraBattleUserInterfaceData_ExecSkillData_o *)executeSkill,
            0) < 1;
    ExtraBattleUserInterfaceButtonComponent__SetEnable(this, v15 & v25, v26);
    Cond_k__BackingField = uiData->fields._Cond_k__BackingField;
    if ( Cond_k__BackingField )
    {
      if ( !ExtraBattleUserInterfaceData_CondDataWrapper__IsVerified(Cond_k__BackingField, 0, v27) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_5838/*"EX_BATTLE_UI_EXECUTE_SKILL_BUTTON_COND_NO_ALIVE_SUB_MEMBER"*/, 0);
        goto LABEL_26;
      }
LABEL_22:
      v28 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_26:
      ExtraBattleUserInterfaceButtonComponent__SetButtonLabel(this, v28, v21);
      return;
    }
LABEL_28:
    sub_1C942F0(Cond_k__BackingField, executeSkill);
  }
  if ( execType != 1 )
    return;
  if ( !battleData )
    goto LABEL_28;
  v16 = BattleData__TrySearchNextAlivePartyIndex(battleData, &targetIndex, 0);
  v18 = v16;
  v19 = (v15 & v16 & 1) != 0 && battleData->fields._SwitchPartyChargeTurn_k__BackingField < 1;
  ExtraBattleUserInterfaceButtonComponent__SetEnable(this, v19, v17);
  if ( v18 )
    goto LABEL_22;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5839/*"EX_BATTLE_UI_SWITCH_PARTY_BUTTON_ALL_OTHER_PARTY_LOSE_MESSAGE"*/, 0);
  ExtraBattleUserInterfaceButtonComponent__SetButtonLabel(this, v22, v23);
  v30.fields.g = 0.92157;
  v30.fields.b = 0.015686;
  v30.fields.r = 1.0;
  v30.fields.a = 1.0;
  ExtraBattleUserInterfaceButtonComponent__SetButtonLabelColor(this, v30, v24);
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

  if ( (byte_4D2F8CA & 1) == 0 )
  {
    sub_1C94098(&Method_ExtraBattleUserInterfaceButtonComponent__SetActiveStateObjects_b__19_1__);
    sub_1C94098(&System_Func_ExtraBattleUserInterfaceButtonComponent_ShowCondition__bool__TypeInfo);
    byte_4D2F8CA = 1;
  }
  v5 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_ExtraBattleUserInterfaceButtonComponent_ShowCondition__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(
    v5,
    (Il2CppObject *)this,
    Method_ExtraBattleUserInterfaceButtonComponent__SetActiveStateObjects_b__19_1__,
    0);
  if ( !obj )
    sub_1C942F0(v6, v7);
  ExtraBattleUserInterfaceButtonComponent_StateObject__SetActiveCondition(
    obj,
    (System_Func_ExtraBattleUserInterfaceButtonComponent_ShowCondition__bool__o *)v5,
    v8);
}


bool ExtraBattleUserInterfaceButtonComponent___SetActiveStateObjects_b__19_1(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        int32_t condition,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonLabel; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  struct UILabel_o *v9; // x8
  UnityEngine_Object_o *v10; // x20
  struct UILabel_o *v11; // x8

  if ( (byte_4D2F8CB & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2F8CB = 1;
  }
  switch ( condition )
  {
    case 0:
      return this->fields._IsEnable_k__BackingField;
    case 1:
      return !this->fields._IsEnable_k__BackingField;
    case 2:
      buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = UnityEngine_Object__op_Inequality(buttonLabel, 0, 0);
      if ( !v7 )
        return 0;
      v9 = this->fields.buttonLabel;
      if ( !v9 )
        goto LABEL_18;
      return !System_String__IsNullOrEmpty(v9->fields.mText, 0);
    case 3:
      v10 = (UnityEngine_Object_o *)this->fields.buttonLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = UnityEngine_Object__op_Inequality(v10, 0, 0);
      if ( !v7 )
        return 0;
      v11 = this->fields.buttonLabel;
      if ( !v11 )
LABEL_18:
        sub_1C942F0(v7, v8);
      return System_String__IsNullOrEmpty(v11->fields.mText, 0);
    default:
      return 0;
  }
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
    sub_1C942F0(v4, func);
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