void __fastcall NoticeNumberComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct NoticeNumberComponent_StaticFields *static_fields; // x8

  if ( (byte_4B12ECD & 1) == 0 )
  {
    sub_1BCA7E0(&NoticeNumberComponent_TypeInfo, v1, v2);
    byte_4B12ECD = 1;
  }
  static_fields = NoticeNumberComponent_TypeInfo->static_fields;
  static_fields->ALPHA_SPEED_RATE = 0.4;
  *(_QWORD *)&static_fields->ALPHA_FADE_FRAME_NUM = 0x3E70000000ALL;
}


void __fastcall NoticeNumberComponent___ctor(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall NoticeNumberComponent__Awake(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B12EC7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method, v2);
    byte_4B12EC7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v5);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mWidget, (int64_t)Component_object, v7, v8, v9, v10, v11, v12);
}


AlphaTransitionCalculator_o *__fastcall NoticeNumberComponent__CreateWidgetAlphaCalculator(
        NoticeNumberComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  NoticeNumberComponent_c *v5; // x0
  float v6; // s8
  System_Func_float__float__float__float__o *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  AlphaTransitionCalculator_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_4B12ECC & 1) == 0 )
  {
    sub_1BCA7E0(&AlphaTransitionCalculator_TypeInfo, method, v2);
    sub_1BCA7E0(&NoticeNumberComponent_TypeInfo, v3, v4);
    byte_4B12ECC = 1;
  }
  v5 = NoticeNumberComponent_TypeInfo;
  if ( !NoticeNumberComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeNumberComponent_TypeInfo, method);
    v5 = NoticeNumberComponent_TypeInfo;
  }
  v6 = ChangedFPSUtil__CovertFrameNumToSecond(v5->static_fields->ALPHA_FADE_FRAME_NUM, 0LL);
  v7 = ExtraEasing__AsymptoticSeriesFloat(
         NoticeNumberComponent_TypeInfo->static_fields->ALPHA_SPEED_RATE,
         (float)NoticeNumberComponent_TypeInfo->static_fields->ALPHA_FADE_FRAME_NUM,
         0LL);
  v11 = (AlphaTransitionCalculator_o *)sub_1BCAA2C(AlphaTransitionCalculator_TypeInfo, v8, v9, v10);
  AlphaTransitionCalculator___ctor(v11, v6, v7, v12);
  return v11;
}


int32_t __fastcall NoticeNumberComponent__GetNumber(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  return this->fields.mNumber;
}


UISprite_o *__fastcall NoticeNumberComponent__GetNumberBg(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_4B12EC9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method, v2);
    byte_4B12EC9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v5);
  return (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
}


UILabel_o *__fastcall NoticeNumberComponent__GetNumberLabel(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  return this->fields.numberLabel;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NoticeNumberComponent__SetDisp(NoticeNumberComponent_o *this, bool is_disp, const MethodInfo *method)
{
  AlphaTransitionCalculator_o *WidgetAlphaCalculator; // x0
  const MethodInfo *v5; // x1

  WidgetAlphaCalculator = NoticeNumberComponent__get_WidgetAlphaCalculator(this, (const MethodInfo *)is_disp);
  if ( !WidgetAlphaCalculator )
    sub_1BCAA3C(0LL, v5);
  if ( is_disp )
    AlphaTransitionCalculator__SwitchFadeIn(WidgetAlphaCalculator, v5);
  else
    AlphaTransitionCalculator__SwitchFadeOut(WidgetAlphaCalculator, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NoticeNumberComponent__SetDispForce(
        NoticeNumberComponent_o *this,
        bool is_disp,
        const MethodInfo *method)
{
  AlphaTransitionCalculator_o *WidgetAlphaCalculator; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  UIWidget_o *MyWidget; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4B12ECB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_TransitionCalculator_float__get_Current__, is_disp, method);
    byte_4B12ECB = 1;
  }
  WidgetAlphaCalculator = NoticeNumberComponent__get_WidgetAlphaCalculator(this, (const MethodInfo *)is_disp);
  if ( !WidgetAlphaCalculator )
    goto LABEL_10;
  if ( is_disp )
    AlphaTransitionCalculator__MakeFadeInFinished(WidgetAlphaCalculator, v6);
  else
    AlphaTransitionCalculator__MakeFadeOutFinished(WidgetAlphaCalculator, v6);
  MyWidget = NoticeNumberComponent__get_MyWidget(this, v7);
  WidgetAlphaCalculator = NoticeNumberComponent__get_WidgetAlphaCalculator(this, v9);
  if ( !WidgetAlphaCalculator || !MyWidget )
LABEL_10:
    sub_1BCAA3C(WidgetAlphaCalculator, v6);
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer, float))MyWidget->klass->vtable._8_set_alpha.method)(
    MyWidget,
    MyWidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    WidgetAlphaCalculator->fields._Current_k__BackingField);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NoticeNumberComponent__SetNumber(
        NoticeNumberComponent_o *this,
        int32_t number,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t v7; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x1
  __int64 v10; // x1
  NoticeNumberComponent_c *v11; // x0
  UILabel_o *numberLabel; // x19
  int32_t mNumber; // w21
  int32_t DISP_NUMBER_MAX; // w8
  System_String_o *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B12ECA & 1) == 0 )
  {
    sub_1BCA7E0(&NoticeNumberComponent_TypeInfo, *(_QWORD *)&number, method);
    sub_1BCA7E0(&StringLiteral_855/*"+"*/, v5, v6);
    byte_4B12ECA = 1;
  }
  v16 = 0;
  this->fields.mNumber = number;
  v7 = (_DWORD)this + 40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, this->fields.mNumber > 0, 0LL);
  v11 = NoticeNumberComponent_TypeInfo;
  numberLabel = this->fields.numberLabel;
  mNumber = this->fields.mNumber;
  if ( !NoticeNumberComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeNumberComponent_TypeInfo, v10);
    v11 = NoticeNumberComponent_TypeInfo;
  }
  DISP_NUMBER_MAX = v11->static_fields->DISP_NUMBER_MAX;
  if ( mNumber <= DISP_NUMBER_MAX )
  {
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString(v7, 0LL);
  }
  else
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, v10);
      DISP_NUMBER_MAX = NoticeNumberComponent_TypeInfo->static_fields->DISP_NUMBER_MAX;
    }
    v16 = DISP_NUMBER_MAX;
    v15 = System_Int32__ToString((int32_t)&v16, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_String__Concat_62401220(
                                               v15,
                                               (System_String_o *)StringLiteral_855/*"+"*/,
                                               0LL);
  }
  v9 = gameObject;
  if ( !numberLabel )
LABEL_13:
    sub_1BCAA3C(gameObject, v9);
  UILabel__set_text(numberLabel, (System_String_o *)gameObject, 0LL);
}


void __fastcall NoticeNumberComponent__Update(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UIWidget_o *MyWidget; // x19
  const MethodInfo *v5; // x1
  TransitionCalculator_float__o *WidgetAlphaCalculator; // x0
  __int64 v7; // x1
  float v8; // s0

  if ( (byte_4B12EC8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_TransitionCalculator_float__Update__, method, v2);
    byte_4B12EC8 = 1;
  }
  MyWidget = NoticeNumberComponent__get_MyWidget(this, method);
  WidgetAlphaCalculator = (TransitionCalculator_float__o *)NoticeNumberComponent__get_WidgetAlphaCalculator(this, v5);
  if ( !WidgetAlphaCalculator
    || (v8 = TransitionCalculator_float___Update(
               WidgetAlphaCalculator,
               (const MethodInfo_3860390 *)Method_TransitionCalculator_float__Update__),
        !MyWidget) )
  {
    sub_1BCAA3C(WidgetAlphaCalculator, v7);
  }
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer, float))MyWidget->klass->vtable._8_set_alpha.method)(
    MyWidget,
    MyWidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    v8);
}


UIWidget_o *__fastcall NoticeNumberComponent__get_MyWidget(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UIWidget_o **p_mWidget; // x19
  UnityEngine_Object_o *mWidget; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B12EC6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B12EC6 = 1;
  }
  p_mWidget = &this->fields.mWidget;
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mWidget, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_1BCAA3C(0LL, v9);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    *p_mWidget = (UIWidget_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.mWidget,
      (int64_t)Component_object,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return *p_mWidget;
}


AlphaTransitionCalculator_o *__fastcall NoticeNumberComponent__get_WidgetAlphaCalculator(
        NoticeNumberComponent_o *this,
        const MethodInfo *method)
{
  AlphaTransitionCalculator_o *result; // x0
  PartyOrganizationUtility_o *p_widgetAlphaCalculator; // x19
  AlphaTransitionCalculator_o *WidgetAlphaCalculator; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x1

  p_widgetAlphaCalculator = (PartyOrganizationUtility_o *)&this->fields.widgetAlphaCalculator;
  result = this->fields.widgetAlphaCalculator;
  if ( !result )
  {
    WidgetAlphaCalculator = NoticeNumberComponent__CreateWidgetAlphaCalculator(0LL, method);
    p_widgetAlphaCalculator->klass = (PartyOrganizationUtility_c *)WidgetAlphaCalculator;
    sub_1BCA784(p_widgetAlphaCalculator, (int64_t)WidgetAlphaCalculator, v5, v6, v7, v8, v9, v10);
    if ( !p_widgetAlphaCalculator->klass )
      sub_1BCAA3C(0LL, v11);
    AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass, v11);
    return (AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass;
  }
  return result;
}