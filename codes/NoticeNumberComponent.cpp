void __fastcall NoticeNumberComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct NoticeNumberComponent_StaticFields *static_fields; // x8

  if ( (byte_4C1EB8E & 1) == 0 )
  {
    sub_1C3B764(&NoticeNumberComponent_TypeInfo, v1);
    byte_4C1EB8E = 1;
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4C1EB88 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    byte_4C1EB88 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C3B9C0(0LL, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.mWidget, (int64_t)Component_object, v6, v7, v8, v9, v10, v11);
}


AlphaTransitionCalculator_o *__fastcall NoticeNumberComponent__CreateWidgetAlphaCalculator(
        NoticeNumberComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  NoticeNumberComponent_c *v3; // x0
  float v4; // s8
  System_Func_float__float__float__float__o *v5; // x19
  AlphaTransitionCalculator_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4C1EB8D & 1) == 0 )
  {
    sub_1C3B764(&AlphaTransitionCalculator_TypeInfo, method);
    sub_1C3B764(&NoticeNumberComponent_TypeInfo, v2);
    byte_4C1EB8D = 1;
  }
  v3 = NoticeNumberComponent_TypeInfo;
  if ( !NoticeNumberComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeNumberComponent_TypeInfo);
    v3 = NoticeNumberComponent_TypeInfo;
  }
  v4 = ChangedFPSUtil__CovertFrameNumToSecond(v3->static_fields->ALPHA_FADE_FRAME_NUM, 0LL);
  v5 = ExtraEasing__AsymptoticSeriesFloat(
         NoticeNumberComponent_TypeInfo->static_fields->ALPHA_SPEED_RATE,
         (float)NoticeNumberComponent_TypeInfo->static_fields->ALPHA_FADE_FRAME_NUM,
         0LL);
  v6 = (AlphaTransitionCalculator_o *)sub_1C3B9B0(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v6, v4, v5, v7);
  return v6;
}


int32_t __fastcall NoticeNumberComponent__GetNumber(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  return this->fields.mNumber;
}


UISprite_o *__fastcall NoticeNumberComponent__GetNumberBg(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C1EB8A & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UISprite___, method);
    byte_4C1EB8A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C3B9C0(0LL, v4);
  return (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    sub_1C3B9C0(0LL, v5);
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

  if ( (byte_4C1EB8C & 1) == 0 )
  {
    sub_1C3B764(&Method_TransitionCalculator_float__get_Current__, is_disp);
    byte_4C1EB8C = 1;
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
    sub_1C3B9C0(WidgetAlphaCalculator, v6);
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
  int32_t v6; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v8; // x1
  NoticeNumberComponent_c *v9; // x0
  UILabel_o *numberLabel; // x19
  int32_t mNumber; // w21
  int32_t DISP_NUMBER_MAX; // w8
  System_String_o *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C1EB8B & 1) == 0 )
  {
    sub_1C3B764(&NoticeNumberComponent_TypeInfo, *(_QWORD *)&number);
    sub_1C3B764(&StringLiteral_837/*", applePrice:"*/, v5);
    byte_4C1EB8B = 1;
  }
  v14 = 0;
  this->fields.mNumber = number;
  v6 = (_DWORD)this + 40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, this->fields.mNumber > 0, 0LL);
  v9 = NoticeNumberComponent_TypeInfo;
  numberLabel = this->fields.numberLabel;
  mNumber = this->fields.mNumber;
  if ( !NoticeNumberComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeNumberComponent_TypeInfo);
    v9 = NoticeNumberComponent_TypeInfo;
  }
  DISP_NUMBER_MAX = v9->static_fields->DISP_NUMBER_MAX;
  if ( mNumber <= DISP_NUMBER_MAX )
  {
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString(v6, 0LL);
  }
  else
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      DISP_NUMBER_MAX = NoticeNumberComponent_TypeInfo->static_fields->DISP_NUMBER_MAX;
    }
    v14 = DISP_NUMBER_MAX;
    v13 = System_Int32__ToString((int32_t)&v14, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_String__Concat_63368612(
                                               v13,
                                               (System_String_o *)StringLiteral_837/*", applePrice:"*/,
                                               0LL);
  }
  v8 = gameObject;
  if ( !numberLabel )
LABEL_13:
    sub_1C3B9C0(gameObject, v8);
  UILabel__set_text(numberLabel, (System_String_o *)gameObject, 0LL);
}


void __fastcall NoticeNumberComponent__Update(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  UIWidget_o *MyWidget; // x19
  const MethodInfo *v4; // x1
  TransitionCalculator_float__o *WidgetAlphaCalculator; // x0
  __int64 v6; // x1
  float v7; // s0

  if ( (byte_4C1EB89 & 1) == 0 )
  {
    sub_1C3B764(&Method_TransitionCalculator_float__Update__, method);
    byte_4C1EB89 = 1;
  }
  MyWidget = NoticeNumberComponent__get_MyWidget(this, method);
  WidgetAlphaCalculator = (TransitionCalculator_float__o *)NoticeNumberComponent__get_WidgetAlphaCalculator(this, v4);
  if ( !WidgetAlphaCalculator
    || (v7 = TransitionCalculator_float___Update(
               WidgetAlphaCalculator,
               (const MethodInfo_394A868 *)Method_TransitionCalculator_float__Update__),
        !MyWidget) )
  {
    sub_1C3B9C0(WidgetAlphaCalculator, v6);
  }
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer, float))MyWidget->klass->vtable._8_set_alpha.method)(
    MyWidget,
    MyWidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    v7);
}


UIWidget_o *__fastcall NoticeNumberComponent__get_MyWidget(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIWidget_o **p_mWidget; // x19
  UnityEngine_Object_o *mWidget; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4C1EB87 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C1EB87 = 1;
  }
  p_mWidget = &this->fields.mWidget;
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mWidget, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_1C3B9C0(0LL, v7);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    *p_mWidget = (UIWidget_o *)Component_object;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.mWidget,
      (int64_t)Component_object,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
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
    sub_1C3B708(p_widgetAlphaCalculator, (int64_t)WidgetAlphaCalculator, v5, v6, v7, v8, v9, v10);
    if ( !p_widgetAlphaCalculator->klass )
      sub_1C3B9C0(0LL, v11);
    AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass, v11);
    return (AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass;
  }
  return result;
}