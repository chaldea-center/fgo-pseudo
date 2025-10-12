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

  if ( (byte_4C3A921 & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_ExtraBattleUserInterfaceButtonComponent_ExecType___);
    sub_1C32C20(&Method_ExtraBattleUserInterfaceButtonComponent_OnTap__);
    byte_4C3A921 = 1;
  }
  IsEnable_k__BackingField = this->fields._IsEnable_k__BackingField;
  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.disableTapSeName, 0);
  if ( IsEnable_k__BackingField )
  {
    if ( !IsNullOrEmpty )
    {
      v5 = Method_ExtraBattleUserInterfaceButtonComponent_OnTap__;
      if ( (*((_BYTE *)Method_ExtraBattleUserInterfaceButtonComponent_OnTap__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C32C38(Method_ExtraBattleUserInterfaceButtonComponent_OnTap__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
      OverwriteAssetSoundName__PlaySe(v6, this->fields.enableTapSeName, 0, 0);
    }
    ActionExtensions__Call_Int32Enum_(
      (System_Action_T__o *)this->fields.onTapCallback,
      this->fields.execType,
      (const MethodInfo_3029C90 *)Method_ActionExtensions_Call_ExtraBattleUserInterfaceButtonComponent_ExecType___);
  }
  else if ( !IsNullOrEmpty )
  {
    v7 = Method_ExtraBattleUserInterfaceButtonComponent_OnTap__;
    if ( (*((_BYTE *)Method_ExtraBattleUserInterfaceButtonComponent_OnTap__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C32C38(Method_ExtraBattleUserInterfaceButtonComponent_OnTap__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C32C04(v7, v7[4]);
    OverwriteAssetSoundName__PlaySe(v8, this->fields.disableTapSeName, 0, 0);
  }
}


void ExtraBattleUserInterfaceButtonComponent__SetActiveStateObjects(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *stateObjects; // x20
  System_Action_object__o *v4; // x21

  if ( (byte_4C3A91D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_ExtraBattleUserInterfaceButtonComponent_StateObject__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_ExtraBattleUserInterfaceButtonComponent_StateObject___);
    sub_1C32C20(&Method_ExtraBattleUserInterfaceButtonComponent__SetActiveStateObjects_b__19_0__);
    byte_4C3A91D = 1;
  }
  stateObjects = (System_Collections_Generic_IEnumerable_T__o *)this->fields.stateObjects;
  v4 = (System_Action_object__o *)sub_1C32E6C(System_Action_ExtraBattleUserInterfaceButtonComponent_StateObject__TypeInfo);
  System_Action_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_ExtraBattleUserInterfaceButtonComponent__SetActiveStateObjects_b__19_0__,
    0);
  BasicHelper__ForEach_object_(
    stateObjects,
    (System_Action_T__o *)v4,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_ExtraBattleUserInterfaceButtonComponent_StateObject___);
}


void ExtraBattleUserInterfaceButtonComponent__SetButtonLabel(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        System_String_o *text,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonLabel; // x21
  UILabel_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C3A91E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A91E = 1;
  }
  buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buttonLabel, 0, 0) )
  {
    v6 = this->fields.buttonLabel;
    if ( !v6 )
      sub_1C32E7C(0);
    UILabel__set_text(v6, text, 0);
    ExtraBattleUserInterfaceButtonComponent__SetActiveStateObjects(this, v7);
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
  UIWidget_o *v9; // x0
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4C3A91F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A91F = 1;
  }
  buttonLabel = (UnityEngine_Object_o *)this->fields.buttonLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(buttonLabel, 0, 0) )
  {
    v9 = (UIWidget_o *)this->fields.buttonLabel;
    if ( !v9 )
      sub_1C32E7C(0);
    v10.fields.b = b;
    v10.fields.a = a;
    v10.fields.r = r;
    v10.fields.g = g;
    UIWidget__set_color(v9, v10, 0);
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
    sub_1C32E7C(0);
  v5 = 136;
  if ( value )
    v5 = 120;
  UISprite__set_spriteName(buttonSprite, *(System_String_o **)((char *)&this->klass + v5), 0);
  ExtraBattleUserInterfaceButtonComponent__SetActiveStateObjects(this, v6);
}


void ExtraBattleUserInterfaceButtonComponent__SetOnTapCallback(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        System_Action_ExtraBattleUserInterfaceButtonComponent_ExecType__o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onTapCallback = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onTapCallback, (int32_t)callback, (int32_t)method, v3);
}


void ExtraBattleUserInterfaceButtonComponent__UpdateData(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        ExtraBattleUserInterfaceData_o *uiData,
        BattleData_o *battleData,
        int32_t addTurn,
        ExtraBattleUserInterfaceData_LabelType_array *updateLabelTypes,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceButtonComponent_o *v11; // x0
  bool v12; // w0
  const MethodInfo *v13; // x2
  bool v14; // zf
  bool v15; // w9
  ExtraBattleUserInterfaceButtonComponent_o *v16; // x8
  const MethodInfo *v17; // x2
  System_String_o *v18; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1
  int32_t targetIndex; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3A920 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_5833/*"EX_BATTLE_UI_SWITCH_PARTY_BUTTON_ALL_OTHER_PARTY_LOSE_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3A920 = 1;
  }
  targetIndex = 0;
  ExtraBattleUserInterfaceComponent__UpdateData(
    (ExtraBattleUserInterfaceComponent_o *)this,
    uiData,
    battleData,
    addTurn,
    updateLabelTypes,
    method);
  if ( this->fields.execType == 1 )
  {
    if ( !battleData )
      goto LABEL_19;
    v12 = BattleData__TrySearchNextAlivePartyIndex(battleData, &targetIndex, 0);
    v14 = !v12;
    v15 = v12;
    if ( v12 )
      v11 = this;
    else
      v11 = 0;
    if ( v14 )
      v16 = this;
    else
      v16 = 0;
    if ( v15 )
    {
      if ( v11 )
      {
        ExtraBattleUserInterfaceButtonComponent__SetEnable(
          v11,
          battleData->fields._SwitchPartyChargeTurn_k__BackingField < 1,
          v13);
        ExtraBattleUserInterfaceButtonComponent__SetButtonLabel(this, (System_String_o *)StringLiteral_1/*""*/, v17);
        return;
      }
LABEL_19:
      sub_1C32E7C(v11);
    }
    if ( !v16 )
      goto LABEL_19;
    ExtraBattleUserInterfaceButtonComponent__SetEnable(v16, 0, v13);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5833/*"EX_BATTLE_UI_SWITCH_PARTY_BUTTON_ALL_OTHER_PARTY_LOSE_MESSAGE"*/, 0);
    ExtraBattleUserInterfaceButtonComponent__SetButtonLabel(this, v18, v19);
    v22.fields.g = 0.92157;
    v22.fields.b = 0.015686;
    v22.fields.r = 1.0;
    v22.fields.a = 1.0;
    ExtraBattleUserInterfaceButtonComponent__SetButtonLabelColor(this, v22, v20);
  }
}


void ExtraBattleUserInterfaceButtonComponent___SetActiveStateObjects_b__19_0(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        ExtraBattleUserInterfaceButtonComponent_StateObject_o *obj,
        const MethodInfo *method)
{
  System_Func_T__TResult__o *v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C3A922 & 1) == 0 )
  {
    sub_1C32C20(&Method_ExtraBattleUserInterfaceButtonComponent__SetActiveStateObjects_b__19_1__);
    sub_1C32C20(&System_Func_ExtraBattleUserInterfaceButtonComponent_ShowCondition__bool__TypeInfo);
    byte_4C3A922 = 1;
  }
  v5 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_ExtraBattleUserInterfaceButtonComponent_ShowCondition__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(
    v5,
    (Il2CppObject *)this,
    Method_ExtraBattleUserInterfaceButtonComponent__SetActiveStateObjects_b__19_1__,
    0);
  if ( !obj )
    sub_1C32E7C(v6);
  ExtraBattleUserInterfaceButtonComponent_StateObject__SetActiveCondition(
    obj,
    (System_Func_ExtraBattleUserInterfaceButtonComponent_ShowCondition__bool__o *)v5,
    v7);
}


bool ExtraBattleUserInterfaceButtonComponent___SetActiveStateObjects_b__19_1(
        ExtraBattleUserInterfaceButtonComponent_o *this,
        int32_t condtion,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonLabel; // x20
  _BOOL8 v7; // x0
  struct UILabel_o *v8; // x8
  UnityEngine_Object_o *v9; // x20
  struct UILabel_o *v10; // x8

  if ( (byte_4C3A923 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A923 = 1;
  }
  switch ( condtion )
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
      v8 = this->fields.buttonLabel;
      if ( !v8 )
        goto LABEL_18;
      return !System_String__IsNullOrEmpty(v8->fields.mText, 0);
    case 3:
      v9 = (UnityEngine_Object_o *)this->fields.buttonLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = UnityEngine_Object__op_Inequality(v9, 0, 0);
      if ( !v7 )
        return 0;
      v10 = this->fields.buttonLabel;
      if ( !v10 )
LABEL_18:
        sub_1C32E7C(v7);
      return System_String__IsNullOrEmpty(v10->fields.mText, 0);
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
    sub_1C32E7C(v4);
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