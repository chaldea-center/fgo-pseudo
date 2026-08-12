void UnlockSlider___ctor(UnlockSlider_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596F42D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21576/*"img_slider_thumb_locked"*/);
    sub_2213A60(&StringLiteral_21575/*"img_slider_thumb"*/);
    byte_596F42D = 1;
  }
  v9 = StringLiteral_21576/*"img_slider_thumb_locked"*/;
  this->fields.sliderThumbLockSpriteName = (struct System_String_o *)StringLiteral_21576/*"img_slider_thumb_locked"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sliderThumbLockSpriteName, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_21575/*"img_slider_thumb"*/;
  this->fields.sliderThumbUnlockSpriteName = (struct System_String_o *)StringLiteral_21575/*"img_slider_thumb"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.sliderThumbUnlockSpriteName,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.unlockRate = 0.9;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UnlockSlider__Awake(UnlockSlider_o *this, const MethodInfo *method)
{
  ;
}


bool UnlockSlider__IsLocked(UnlockSlider_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0

  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    sub_2213CDC(0, method);
  return UIProgressBar__get_value(checkSlider, 0) < 1.0;
}


void UnlockSlider__OnSliderDragFinished(UnlockSlider_o *this, const MethodInfo *method)
{
  UIProgressBar_o *checkSlider; // x0
  float value; // s0
  float v5; // s8
  float unlockRate; // s9
  float v7; // s0
  bool v8; // w20
  const MethodInfo *v9; // x2
  struct UnlockSlider_OnDragFinished_o *onDragFinished; // x8

  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    goto LABEL_8;
  value = UIProgressBar__get_value(checkSlider, 0);
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider )
    goto LABEL_8;
  v5 = value;
  unlockRate = this->fields.unlockRate;
  v7 = 0.0;
  if ( v5 < unlockRate )
  {
    v8 = 0;
  }
  else
  {
    v7 = 1.0;
    v8 = 1;
  }
  UIProgressBar__set_value(checkSlider, v7, 0);
  UnlockSlider__SetSliderThumbSprite(this, v8, v9);
  onDragFinished = this->fields.onDragFinished;
  if ( !onDragFinished )
LABEL_8:
    sub_2213CDC(checkSlider, method);
  ((void (__fastcall *)(intptr_t, bool, intptr_t))onDragFinished->fields.invoke_impl)(
    onDragFinished->fields.method_code,
    v5 >= unlockRate,
    onDragFinished->fields.method);
}


// local variable allocation has failed, the output may be wrong!
void UnlockSlider__SetSliderThumbSprite(UnlockSlider_o *this, bool isUnlocked, const MethodInfo *method)
{
  UISprite_o *sliderThumbSprite; // x0
  __int64 v5; // x9

  sliderThumbSprite = this->fields.sliderThumbSprite;
  if ( !sliderThumbSprite )
    sub_2213CDC(0, isUnlocked);
  v5 = 64;
  if ( isUnlocked )
    v5 = 72;
  UISprite__set_spriteName(sliderThumbSprite, *(System_String_o **)((char *)&this->klass + v5), 0);
}


void UnlockSlider__Setup(
        UnlockSlider_o *this,
        UnlockSlider_OnDragFinished_o *dragFinishedAction,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  UIProgressBar_o *checkSlider; // x0
  struct UISlider_o *v12; // x20
  UIProgressBar_OnDragFinished_o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x1

  if ( (byte_596F42C & 1) == 0 )
  {
    sub_2213A60(&UIProgressBar_OnDragFinished_TypeInfo);
    sub_2213A60(&Method_UnlockSlider_OnSliderDragFinished__);
    byte_596F42C = 1;
  }
  this->fields.onDragFinished = dragFinishedAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onDragFinished,
    (int32_t)dragFinishedAction,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  checkSlider = (UIProgressBar_o *)this->fields.checkSlider;
  if ( !checkSlider
    || (UIProgressBar__set_value(checkSlider, 0.0, 0),
        v12 = this->fields.checkSlider,
        v13 = (UIProgressBar_OnDragFinished_o *)sub_2213CCC(UIProgressBar_OnDragFinished_TypeInfo),
        UIProgressBar_OnDragFinished___ctor(v13, (Il2CppObject *)this, Method_UnlockSlider_OnSliderDragFinished__, 0),
        !v12) )
  {
    sub_2213CDC(checkSlider, v10);
  }
  v12->fields.onDragFinished = v13;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v12->fields.onDragFinished,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  UnlockSlider__OnSliderDragFinished(this, v20);
}


void UnlockSlider_OnDragFinished___ctor(
        UnlockSlider_OnDragFinished_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_200BD1C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200BCD4;
}


System_IAsyncResult_o *UnlockSlider_OnDragFinished__BeginInvoke(
        UnlockSlider_OnDragFinished_o *this,
        bool isUnlocked,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isUnlocked;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void UnlockSlider_OnDragFinished__EndInvoke(
        UnlockSlider_OnDragFinished_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void UnlockSlider_OnDragFinished__Invoke(
        UnlockSlider_OnDragFinished_o *this,
        bool isUnlocked,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isUnlocked,
    this->fields.method);
}