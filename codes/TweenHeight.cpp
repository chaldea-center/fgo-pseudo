void TweenHeight___ctor(TweenHeight_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.from = 0x6400000064LL;
  UITweener___ctor((UITweener_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
TweenHeight_o *TweenHeight__Begin(UIWidget_o *widget, float duration, int32_t height, const MethodInfo *method)
{
  UIWidget_o *v6; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v8; // x2
  UnityEngine_Behaviour_o *v9; // x21

  v6 = widget;
  if ( (byte_593CF17 & 1) == 0 )
  {
    widget = (UIWidget_o *)sub_21FFC50(&Method_UITweener_Begin_TweenHeight___);
    byte_593CF17 = 1;
  }
  if ( !v6
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0),
        (widget = (UIWidget_o *)UITweener__Begin_object_(
                                  gameObject,
                                  duration,
                                  (const MethodInfo_39D1264 *)Method_UITweener_Begin_TweenHeight___)) == 0) )
  {
    sub_21FFECC(widget, *(_QWORD *)&height);
  }
  v9 = (UnityEngine_Behaviour_o *)widget;
  *(_DWORD *)&widget->fields.mRootSet = v6->fields.mHeight;
  *((_DWORD *)&widget->fields.mRootSet + 1) = height;
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)widget, 1.0, 1, v8);
    UnityEngine_Behaviour__set_enabled(v9, 0, 0);
  }
  return (TweenHeight_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
void TweenHeight__OnUpdate(TweenHeight_o *this, float factor, bool isFinished, const MethodInfo *method)
{
  float v6; // s9
  float v7; // s8
  float v8; // s9
  double v9; // d8
  const MethodInfo *v10; // x2
  double v11; // d0
  double v12; // d0
  double v13; // d1
  double v14; // d1
  int32_t v15; // w1
  __int64 v16; // x1
  UITable_o **p_mTable; // x20
  UnityEngine_Object_o *mTable; // x21
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  Il2CppObject *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x1
  UnityEngine_Object_o *v30; // x21
  double iptr; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_593CF16 & 1) == 0 )
  {
    sub_21FFC50(&Method_NGUITools_FindInParents_UITable___);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CF16 = 1;
  }
  v6 = (float)(1.0 - factor) * (float)this->fields.from;
  v7 = (float)this->fields.to * factor;
  if ( !byte_593220B )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593220B = 1;
  }
  v8 = v6 + v7;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, isFinished);
  v9 = v8;
  v11 = modf(v8, &iptr);
  if ( v8 >= 0.0 )
  {
    if ( v11 != 0.5 )
    {
      v12 = floor(v9 + 0.5);
      goto LABEL_17;
    }
    v13 = 1.0;
    v12 = iptr;
  }
  else
  {
    if ( v11 != -0.5 )
    {
      v12 = ceil(v9 + -0.5);
      goto LABEL_17;
    }
    v12 = iptr;
    v13 = -1.0;
  }
  v14 = v12 + v13;
  if ( ((__int64)v12 & 1) != 0 )
    v12 = v14;
LABEL_17:
  if ( v12 == INFINITY )
    v15 = 0x80000000;
  else
    v15 = (int)v12;
  TweenHeight__set_value(this, v15, v10);
  if ( this->fields.updateTable )
  {
    p_mTable = &this->fields.mTable;
    mTable = (UnityEngine_Object_o *)this->fields.mTable;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( !UnityEngine_Object__op_Equality(mTable, 0, 0) )
      goto LABEL_31;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v20);
    v22 = NGUITools__FindInParents_object_(
            gameObject,
            (const MethodInfo_38BD680 *)Method_NGUITools_FindInParents_UITable___);
    *p_mTable = (UITable_o *)v22;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mTable, (int32_t)v22, v23, v24, v25, v26, v27, v28);
    v30 = (UnityEngine_Object_o *)*p_mTable;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
    if ( UnityEngine_Object__op_Equality(v30, 0, 0) )
    {
      this->fields.updateTable = 0;
    }
    else
    {
LABEL_31:
      if ( !*p_mTable )
        sub_21FFECC(0, v19);
      UITable__set_repositionNow(*p_mTable, 1, 0);
    }
  }
}


void TweenHeight__SetCurrentValueToEnd(TweenHeight_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TweenHeight__set_value(this, this->fields.to, v2);
}


void TweenHeight__SetCurrentValueToStart(TweenHeight_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TweenHeight__set_value(this, this->fields.from, v2);
}


void TweenHeight__SetEndToCurrentValue(TweenHeight_o *this, const MethodInfo *method)
{
  UIWidget_o *cachedWidget; // x0
  __int64 v4; // x1

  cachedWidget = TweenHeight__get_cachedWidget(this, method);
  if ( !cachedWidget )
    sub_21FFECC(0, v4);
  this->fields.to = cachedWidget->fields.mHeight;
}


void TweenHeight__SetStartToCurrentValue(TweenHeight_o *this, const MethodInfo *method)
{
  UIWidget_o *cachedWidget; // x0
  __int64 v4; // x1

  cachedWidget = TweenHeight__get_cachedWidget(this, method);
  if ( !cachedWidget )
    sub_21FFECC(0, v4);
  this->fields.from = cachedWidget->fields.mHeight;
}


UIWidget_o *TweenHeight__get_cachedWidget(TweenHeight_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mWidget; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_593CF15 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CF15 = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(mWidget, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    this->fields.mWidget = (struct UIWidget_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mWidget,
      (int32_t)Component_object,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  return this->fields.mWidget;
}


int32_t TweenHeight__get_height(TweenHeight_o *this, const MethodInfo *method)
{
  UIWidget_o *cachedWidget; // x0
  __int64 v3; // x1

  cachedWidget = TweenHeight__get_cachedWidget(this, method);
  if ( !cachedWidget )
    sub_21FFECC(0, v3);
  return cachedWidget->fields.mHeight;
}


int32_t TweenHeight__get_value(TweenHeight_o *this, const MethodInfo *method)
{
  UIWidget_o *cachedWidget; // x0
  __int64 v3; // x1

  cachedWidget = TweenHeight__get_cachedWidget(this, method);
  if ( !cachedWidget )
    sub_21FFECC(0, v3);
  return cachedWidget->fields.mHeight;
}


// attributes: thunk
void TweenHeight__set_height(TweenHeight_o *this, int32_t value, const MethodInfo *method)
{
  TweenHeight__set_value(this, value, method);
}


// local variable allocation has failed, the output may be wrong!
void TweenHeight__set_value(TweenHeight_o *this, int32_t value, const MethodInfo *method)
{
  UIWidget_o *cachedWidget; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  cachedWidget = TweenHeight__get_cachedWidget(this, *(const MethodInfo **)&value);
  if ( !cachedWidget )
    sub_21FFECC(0, v5);
  UIWidget__set_height(cachedWidget, value, v6);
}