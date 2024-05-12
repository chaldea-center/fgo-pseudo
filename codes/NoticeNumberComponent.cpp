void __fastcall NoticeNumberComponent___cctor(const MethodInfo *method)
{
  if ( (byte_438BAA1 & 1) == 0 )
  {
    sub_B775C4(&NoticeNumberComponent_TypeInfo);
    byte_438BAA1 = 1;
  }
  NoticeNumberComponent_TypeInfo->static_fields->ALPHA_SPEED_RATE = 0.4;
  NoticeNumberComponent_TypeInfo->static_fields->ALPHA_FADE_FRAME_NUM = 10;
  NoticeNumberComponent_TypeInfo->static_fields->DISP_NUMBER_MAX = 999;
}


void __fastcall NoticeNumberComponent___ctor(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall NoticeNumberComponent__Awake(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct UIWidget_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438BA9B & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    byte_438BA9B = 1;
  }
  this->fields.mIsActive = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v4);
  Component_srcLineSprite = (struct UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   gameObject,
                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  this->fields.mWidget = Component_srcLineSprite;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mWidget,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


AlphaTransitionCalculator_o *__fastcall NoticeNumberComponent__CreateWidgetAlphaCalculator(
        NoticeNumberComponent_o *this,
        const MethodInfo *method)
{
  NoticeNumberComponent_c *v2; // x0
  float v3; // s8
  System_Func_float__float__float__float__o *v4; // x19
  AlphaTransitionCalculator_o *v5; // x20

  if ( (byte_438BAA0 & 1) == 0 )
  {
    sub_B775C4(&AlphaTransitionCalculator_TypeInfo);
    sub_B775C4(&NoticeNumberComponent_TypeInfo);
    byte_438BAA0 = 1;
  }
  v2 = NoticeNumberComponent_TypeInfo;
  if ( (BYTE3(NoticeNumberComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NoticeNumberComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeNumberComponent_TypeInfo);
    v2 = NoticeNumberComponent_TypeInfo;
  }
  v3 = ChangedFPSUtil__CovertFrameNumToSecond(v2->static_fields->ALPHA_FADE_FRAME_NUM, 0LL);
  v4 = ExtraEasing__AsymptoticSeriesFloat(
         NoticeNumberComponent_TypeInfo->static_fields->ALPHA_SPEED_RATE,
         (float)NoticeNumberComponent_TypeInfo->static_fields->ALPHA_FADE_FRAME_NUM,
         0LL);
  v5 = (AlphaTransitionCalculator_o *)sub_B77694(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v5, v3, v4, 0LL);
  return v5;
}


int32_t __fastcall NoticeNumberComponent__GetNumber(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  return this->fields.mNumber;
}


UISprite_o *__fastcall NoticeNumberComponent__GetNumberBg(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_438BA9D & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    byte_438BA9D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v4);
  return (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         gameObject,
                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
}


UILabel_o *__fastcall NoticeNumberComponent__GetNumberLabel(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  return this->fields.numberLabel;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NoticeNumberComponent__SetDisp(NoticeNumberComponent_o *this, bool is_disp, const MethodInfo *method)
{
  AlphaTransitionCalculator_o *WidgetAlphaCalculator; // x0
  __int64 v5; // x1

  WidgetAlphaCalculator = NoticeNumberComponent__get_WidgetAlphaCalculator(this, (const MethodInfo *)is_disp);
  if ( !WidgetAlphaCalculator )
    sub_B7769C(0LL, v5);
  if ( is_disp )
    AlphaTransitionCalculator__StartFadeIn(WidgetAlphaCalculator, 0LL);
  else
    AlphaTransitionCalculator__StartFadeOut(WidgetAlphaCalculator, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NoticeNumberComponent__SetDispForce(
        NoticeNumberComponent_o *this,
        bool is_disp,
        const MethodInfo *method)
{
  AlphaTransitionCalculator_o *WidgetAlphaCalculator; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  UIWidget_o *MyWidget; // x20
  const MethodInfo *v9; // x1

  if ( (byte_438BA9F & 1) == 0 )
  {
    sub_B775C4(&Method_TransitionCalculator_float__get_Current__);
    byte_438BA9F = 1;
  }
  WidgetAlphaCalculator = NoticeNumberComponent__get_WidgetAlphaCalculator(this, (const MethodInfo *)is_disp);
  if ( !WidgetAlphaCalculator )
    goto LABEL_10;
  if ( is_disp )
    AlphaTransitionCalculator__MakeFadeInFinished(WidgetAlphaCalculator, 0LL);
  else
    AlphaTransitionCalculator__MakeFadeOutFinished(WidgetAlphaCalculator, 0LL);
  MyWidget = NoticeNumberComponent__get_MyWidget(this, v7);
  WidgetAlphaCalculator = NoticeNumberComponent__get_WidgetAlphaCalculator(this, v9);
  if ( !WidgetAlphaCalculator || !MyWidget )
LABEL_10:
    sub_B7769C(WidgetAlphaCalculator, v6);
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer, float))MyWidget->klass->vtable._8_set_alpha.method)(
    MyWidget,
    MyWidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    WidgetAlphaCalculator->fields._Current_k__BackingField);
}


void __fastcall NoticeNumberComponent__SetNumber(
        NoticeNumberComponent_o *this,
        int32_t number,
        const MethodInfo *method)
{
  int32_t v5; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v7; // x1
  UILabel_o *numberLabel; // x19
  int32_t mNumber; // w21
  NoticeNumberComponent_c *v10; // x0
  int32_t DISP_NUMBER_MAX; // w8
  System_String_o *v12; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438BA9E & 1) == 0 )
  {
    sub_B775C4(&NoticeNumberComponent_TypeInfo);
    sub_B775C4(&StringLiteral_706/*"+"*/);
    byte_438BA9E = 1;
  }
  v13 = 0;
  this->fields.mNumber = number;
  v5 = (_DWORD)this + 32;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, this->fields.mNumber > 0, 0LL);
  numberLabel = this->fields.numberLabel;
  mNumber = this->fields.mNumber;
  v10 = NoticeNumberComponent_TypeInfo;
  if ( (BYTE3(NoticeNumberComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NoticeNumberComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeNumberComponent_TypeInfo);
    v10 = NoticeNumberComponent_TypeInfo;
  }
  DISP_NUMBER_MAX = v10->static_fields->DISP_NUMBER_MAX;
  if ( mNumber <= DISP_NUMBER_MAX )
  {
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString(v5, 0LL);
  }
  else
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      DISP_NUMBER_MAX = NoticeNumberComponent_TypeInfo->static_fields->DISP_NUMBER_MAX;
    }
    v13 = DISP_NUMBER_MAX;
    v12 = System_Int32__ToString((int32_t)&v13, 0LL);
    gameObject = (UnityEngine_GameObject_o *)System_String__Concat_44901936(
                                               v12,
                                               (System_String_o *)StringLiteral_706/*"+"*/,
                                               0LL);
  }
  v7 = gameObject;
  if ( !numberLabel )
LABEL_15:
    sub_B7769C(gameObject, v7);
  UILabel__set_text(numberLabel, (System_String_o *)gameObject, 0LL);
}


void __fastcall NoticeNumberComponent__Update(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  UIWidget_o *MyWidget; // x19
  const MethodInfo *v4; // x1
  TransitionCalculator_float__o *WidgetAlphaCalculator; // x0
  __int64 v6; // x1
  float v7; // s0

  if ( (byte_438BA9C & 1) == 0 )
  {
    sub_B775C4(&Method_TransitionCalculator_float__Update__);
    byte_438BA9C = 1;
  }
  MyWidget = NoticeNumberComponent__get_MyWidget(this, method);
  WidgetAlphaCalculator = (TransitionCalculator_float__o *)NoticeNumberComponent__get_WidgetAlphaCalculator(this, v4);
  if ( !WidgetAlphaCalculator
    || (v7 = TransitionCalculator_float___Update(
               WidgetAlphaCalculator,
               (const MethodInfo_2A1A8DC *)Method_TransitionCalculator_float__Update__),
        !MyWidget) )
  {
    sub_B7769C(WidgetAlphaCalculator, v6);
  }
  ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer, float))MyWidget->klass->vtable._8_set_alpha.method)(
    MyWidget,
    MyWidget->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    v7);
}


UIWidget_o *__fastcall NoticeNumberComponent__get_MyWidget(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  UIWidget_o **p_mWidget; // x19
  UnityEngine_Object_o *mWidget; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_438BA9A & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438BA9A = 1;
  }
  p_mWidget = &this->fields.mWidget;
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(mWidget, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_B7769C(0LL, v6);
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       gameObject,
                                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    *p_mWidget = (UIWidget_o *)Component_srcLineSprite;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.mWidget,
      Component_srcLineSprite,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return *p_mWidget;
}


AlphaTransitionCalculator_o *__fastcall NoticeNumberComponent__get_WidgetAlphaCalculator(
        NoticeNumberComponent_o *this,
        const MethodInfo *method)
{
  AlphaTransitionCalculator_o *result; // x0
  BattleServantConfConponent_o *p_widgetAlphaCalculator; // x19
  System_Int32_array **WidgetAlphaCalculator; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1

  p_widgetAlphaCalculator = (BattleServantConfConponent_o *)&this->fields.widgetAlphaCalculator;
  result = this->fields.widgetAlphaCalculator;
  if ( !result )
  {
    WidgetAlphaCalculator = (System_Int32_array **)NoticeNumberComponent__CreateWidgetAlphaCalculator(0LL, method);
    p_widgetAlphaCalculator->klass = (BattleServantConfConponent_c *)WidgetAlphaCalculator;
    sub_B77560(p_widgetAlphaCalculator, WidgetAlphaCalculator, v5, v6, v7, v8, v9, v10);
    if ( !p_widgetAlphaCalculator->klass )
      sub_B7769C(0LL, v11);
    AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass, 0LL);
    return (AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass;
  }
  return result;
}