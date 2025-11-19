void NoticeNumberComponent___cctor(const MethodInfo *method)
{
  struct NoticeNumberComponent_StaticFields *static_fields; // x8

  if ( (byte_4CB2D0F & 1) == 0 )
  {
    sub_1C6BA08(&NoticeNumberComponent_TypeInfo);
    byte_4CB2D0F = 1;
  }
  static_fields = NoticeNumberComponent_TypeInfo->static_fields;
  static_fields->ALPHA_SPEED_RATE = 0.4;
  *(_QWORD *)&static_fields->ALPHA_FADE_FRAME_NUM = 0x3E70000000ALL;
}


void NoticeNumberComponent___ctor(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void NoticeNumberComponent__Awake(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB2D09 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    byte_4CB2D09 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mWidget, (int32_t)Component_object, v6, v7);
}


AlphaTransitionCalculator_o *NoticeNumberComponent__CreateWidgetAlphaCalculator(
        NoticeNumberComponent_o *this,
        const MethodInfo *method)
{
  NoticeNumberComponent_c *v2; // x0
  float v3; // s8
  System_Func_float__float__float__float__o *v4; // x19
  AlphaTransitionCalculator_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4CB2D0E & 1) == 0 )
  {
    sub_1C6BA08(&AlphaTransitionCalculator_TypeInfo);
    sub_1C6BA08(&NoticeNumberComponent_TypeInfo);
    byte_4CB2D0E = 1;
  }
  v2 = NoticeNumberComponent_TypeInfo;
  if ( !NoticeNumberComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeNumberComponent_TypeInfo);
    v2 = NoticeNumberComponent_TypeInfo;
  }
  v3 = ChangedFPSUtil__CovertFrameNumToSecond(v2->static_fields->ALPHA_FADE_FRAME_NUM, 0);
  v4 = ExtraEasing__AsymptoticSeriesFloat(
         NoticeNumberComponent_TypeInfo->static_fields->ALPHA_SPEED_RATE,
         (float)NoticeNumberComponent_TypeInfo->static_fields->ALPHA_FADE_FRAME_NUM,
         0);
  v5 = (AlphaTransitionCalculator_o *)sub_1C6BC54(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v5, v3, v4, v6);
  return v5;
}


int32_t NoticeNumberComponent__GetNumber(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  return this->fields.mNumber;
}


UISprite_o *NoticeNumberComponent__GetNumberBg(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4CB2D0B & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    byte_4CB2D0B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v4);
  return (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
}


UILabel_o *NoticeNumberComponent__GetNumberLabel(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  return this->fields.numberLabel;
}


// local variable allocation has failed, the output may be wrong!
void NoticeNumberComponent__SetDisp(NoticeNumberComponent_o *this, bool is_disp, const MethodInfo *method)
{
  AlphaTransitionCalculator_o *WidgetAlphaCalculator; // x0
  const MethodInfo *v5; // x1

  WidgetAlphaCalculator = NoticeNumberComponent__get_WidgetAlphaCalculator(this, (const MethodInfo *)is_disp);
  if ( !WidgetAlphaCalculator )
    sub_1C6BC60(0, v5);
  if ( is_disp )
    AlphaTransitionCalculator__SwitchFadeIn(WidgetAlphaCalculator, v5);
  else
    AlphaTransitionCalculator__SwitchFadeOut(WidgetAlphaCalculator, v5);
}


// local variable allocation has failed, the output may be wrong!
void NoticeNumberComponent__SetDispForce(NoticeNumberComponent_o *this, bool is_disp, const MethodInfo *method)
{
  AlphaTransitionCalculator_o *WidgetAlphaCalculator; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  UIWidget_o *MyWidget; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4CB2D0D & 1) == 0 )
  {
    sub_1C6BA08(&Method_TransitionCalculator_float__get_Current__);
    byte_4CB2D0D = 1;
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
    sub_1C6BC60(WidgetAlphaCalculator, v6);
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *, float))MyWidget->klass->vtable._8_set_alpha.methodPtr)(
    MyWidget,
    MyWidget->klass->vtable._8_set_alpha.method,
    WidgetAlphaCalculator->fields._Current_k__BackingField);
}


void NoticeNumberComponent__SetNumber(NoticeNumberComponent_o *this, int32_t number, const MethodInfo *method)
{
  int32_t v5; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v7; // x1
  NoticeNumberComponent_c *v8; // x0
  UILabel_o *numberLabel; // x19
  int32_t mNumber; // w21
  int32_t DISP_NUMBER_MAX; // w8
  System_String_o *v12; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB2D0C & 1) == 0 )
  {
    sub_1C6BA08(&NoticeNumberComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_800/*"+"*/);
    byte_4CB2D0C = 1;
  }
  v13 = 0;
  this->fields.mNumber = number;
  v5 = (_DWORD)this + 40;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(gameObject, this->fields.mNumber > 0, 0);
  v8 = NoticeNumberComponent_TypeInfo;
  numberLabel = this->fields.numberLabel;
  mNumber = this->fields.mNumber;
  if ( !NoticeNumberComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NoticeNumberComponent_TypeInfo);
    v8 = NoticeNumberComponent_TypeInfo;
  }
  DISP_NUMBER_MAX = v8->static_fields->DISP_NUMBER_MAX;
  if ( mNumber <= DISP_NUMBER_MAX )
  {
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString(v5, 0);
  }
  else
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      DISP_NUMBER_MAX = NoticeNumberComponent_TypeInfo->static_fields->DISP_NUMBER_MAX;
    }
    v13 = DISP_NUMBER_MAX;
    v12 = System_Int32__ToString((int32_t)&v13, 0);
    gameObject = (UnityEngine_GameObject_o *)System_String__Concat_63966792(
                                               v12,
                                               (System_String_o *)StringLiteral_800/*"+"*/,
                                               0);
  }
  v7 = gameObject;
  if ( !numberLabel )
LABEL_13:
    sub_1C6BC60(gameObject, v7);
  UILabel__set_text(numberLabel, (System_String_o *)gameObject, 0);
}


void NoticeNumberComponent__Update(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  UIWidget_o *MyWidget; // x19
  const MethodInfo *v4; // x1
  TransitionCalculator_float__o *WidgetAlphaCalculator; // x0
  __int64 v6; // x1
  float v7; // s0

  if ( (byte_4CB2D0A & 1) == 0 )
  {
    sub_1C6BA08(&Method_TransitionCalculator_float__Update__);
    byte_4CB2D0A = 1;
  }
  MyWidget = NoticeNumberComponent__get_MyWidget(this, method);
  WidgetAlphaCalculator = (TransitionCalculator_float__o *)NoticeNumberComponent__get_WidgetAlphaCalculator(this, v4);
  if ( !WidgetAlphaCalculator
    || (v7 = TransitionCalculator_float___Update(
               WidgetAlphaCalculator,
               (const MethodInfo_3AF12A0 *)Method_TransitionCalculator_float__Update__),
        !MyWidget) )
  {
    sub_1C6BC60(WidgetAlphaCalculator, v6);
  }
  ((void (__fastcall *)(UIWidget_o *, const MethodInfo *, float))MyWidget->klass->vtable._8_set_alpha.methodPtr)(
    MyWidget,
    MyWidget->klass->vtable._8_set_alpha.method,
    v7);
}


UIWidget_o *NoticeNumberComponent__get_MyWidget(NoticeNumberComponent_o *this, const MethodInfo *method)
{
  UIWidget_o **p_mWidget; // x19
  UnityEngine_Object_o *mWidget; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB2D08 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2D08 = 1;
  }
  p_mWidget = &this->fields.mWidget;
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mWidget, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_1C6BC60(0, v6);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         gameObject,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    *p_mWidget = (UIWidget_o *)Component_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mWidget, (int32_t)Component_object, v8, v9);
  }
  return *p_mWidget;
}


AlphaTransitionCalculator_o *NoticeNumberComponent__get_WidgetAlphaCalculator(
        NoticeNumberComponent_o *this,
        const MethodInfo *method)
{
  AlphaTransitionCalculator_o *result; // x0
  CGThumbnailListItem_o *p_widgetAlphaCalculator; // x19
  AlphaTransitionCalculator_o *WidgetAlphaCalculator; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  p_widgetAlphaCalculator = (CGThumbnailListItem_o *)&this->fields.widgetAlphaCalculator;
  result = this->fields.widgetAlphaCalculator;
  if ( !result )
  {
    WidgetAlphaCalculator = NoticeNumberComponent__CreateWidgetAlphaCalculator(0, method);
    p_widgetAlphaCalculator->klass = (CGThumbnailListItem_c *)WidgetAlphaCalculator;
    sub_1C6B9AC(p_widgetAlphaCalculator, (int32_t)WidgetAlphaCalculator, v5, v6);
    if ( !p_widgetAlphaCalculator->klass )
      sub_1C6BC60(0, v7);
    AlphaTransitionCalculator__MakeFadeInFinished((AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass, v7);
    return (AlphaTransitionCalculator_o *)p_widgetAlphaCalculator->klass;
  }
  return result;
}