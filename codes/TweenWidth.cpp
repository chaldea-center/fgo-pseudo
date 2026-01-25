void TweenWidth___ctor(TweenWidth_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.from = 0x6400000064LL;
  UITweener___ctor((UITweener_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
TweenWidth_o *TweenWidth__Begin(UIWidget_o *widget, float duration, int32_t width, const MethodInfo *method)
{
  UIWidget_o *v6; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v8; // x2
  UnityEngine_Behaviour_o *v9; // x21

  v6 = widget;
  if ( (byte_4CF2EE1 & 1) == 0 )
  {
    widget = (UIWidget_o *)sub_1C7BAE8(&Method_UITweener_Begin_TweenWidth___);
    byte_4CF2EE1 = 1;
  }
  if ( !v6
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0),
        (widget = (UIWidget_o *)UITweener__Begin_object_(
                                  gameObject,
                                  duration,
                                  (const MethodInfo_3245DA8 *)Method_UITweener_Begin_TweenWidth___)) == 0) )
  {
    sub_1C7BD40(widget, *(_QWORD *)&width);
  }
  v9 = (UnityEngine_Behaviour_o *)widget;
  *(_DWORD *)&widget->fields.mRootSet = v6->fields.mWidth;
  *((_DWORD *)&widget->fields.mRootSet + 1) = width;
  if ( duration <= 0.0 )
  {
    UITweener__Sample((UITweener_o *)widget, 1.0, 1, v8);
    UnityEngine_Behaviour__set_enabled(v9, 0, 0);
  }
  return (TweenWidth_o *)v9;
}


void TweenWidth__OnUpdate(TweenWidth_o *this, float factor, bool isFinished, const MethodInfo *method)
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
  UITable_o **p_mTable; // x20
  UnityEngine_Object_o *mTable; // x21
  __int64 v18; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  UnityEngine_Object_o *v27; // x21
  double iptr; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CF2EE0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_NGUITools_FindInParents_UITable___);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2EE0 = 1;
  }
  v6 = (float)(1.0 - factor) * (float)this->fields.from;
  v7 = (float)this->fields.to * factor;
  if ( !byte_4CE8569 )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE8569 = 1;
  }
  v8 = v6 + v7;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v9 = v8;
  v11 = modf(v8, &iptr);
  if ( v8 >= 0.0 )
  {
    if ( v11 != 0.5 )
    {
      v12 = floor(v9 + 0.5);
      goto LABEL_17;
    }
    v12 = iptr;
    v13 = 1.0;
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
  TweenWidth__set_value(this, v15, v10);
  if ( this->fields.updateTable )
  {
    p_mTable = &this->fields.mTable;
    mTable = (UnityEngine_Object_o *)this->fields.mTable;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(mTable, 0, 0) )
      goto LABEL_31;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    v20 = NGUITools__FindInParents_object_(
            gameObject,
            (const MethodInfo_31F9E0C *)Method_NGUITools_FindInParents_UITable___);
    *p_mTable = (UITable_o *)v20;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mTable, (int32_t)v20, v21, v22, v23, v24, v25, v26);
    v27 = (UnityEngine_Object_o *)*p_mTable;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v27, 0, 0) )
    {
      this->fields.updateTable = 0;
    }
    else
    {
LABEL_31:
      if ( !*p_mTable )
        sub_1C7BD40(0, v18);
      UITable__set_repositionNow(*p_mTable, 1, 0);
    }
  }
}


void TweenWidth__SetCurrentValueToEnd(TweenWidth_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TweenWidth__set_value(this, this->fields.to, v2);
}


void TweenWidth__SetCurrentValueToStart(TweenWidth_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  TweenWidth__set_value(this, this->fields.from, v2);
}


void TweenWidth__SetEndToCurrentValue(TweenWidth_o *this, const MethodInfo *method)
{
  UIWidget_o *cachedWidget; // x0
  __int64 v4; // x1

  cachedWidget = TweenWidth__get_cachedWidget(this, method);
  if ( !cachedWidget )
    sub_1C7BD40(0, v4);
  this->fields.to = cachedWidget->fields.mWidth;
}


void TweenWidth__SetStartToCurrentValue(TweenWidth_o *this, const MethodInfo *method)
{
  UIWidget_o *cachedWidget; // x0
  __int64 v4; // x1

  cachedWidget = TweenWidth__get_cachedWidget(this, method);
  if ( !cachedWidget )
    sub_1C7BD40(0, v4);
  this->fields.from = cachedWidget->fields.mWidth;
}


UIWidget_o *TweenWidth__get_cachedWidget(TweenWidth_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mWidget; // x21
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CF2EDF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2EDF = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mWidget, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    this->fields.mWidget = (struct UIWidget_o *)Component_object;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.mWidget,
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


int32_t TweenWidth__get_value(TweenWidth_o *this, const MethodInfo *method)
{
  UIWidget_o *cachedWidget; // x0
  __int64 v3; // x1

  cachedWidget = TweenWidth__get_cachedWidget(this, method);
  if ( !cachedWidget )
    sub_1C7BD40(0, v3);
  return cachedWidget->fields.mWidth;
}


int32_t TweenWidth__get_width(TweenWidth_o *this, const MethodInfo *method)
{
  UIWidget_o *cachedWidget; // x0
  __int64 v3; // x1

  cachedWidget = TweenWidth__get_cachedWidget(this, method);
  if ( !cachedWidget )
    sub_1C7BD40(0, v3);
  return cachedWidget->fields.mWidth;
}


// local variable allocation has failed, the output may be wrong!
void TweenWidth__set_value(TweenWidth_o *this, int32_t value, const MethodInfo *method)
{
  UIWidget_o *cachedWidget; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  cachedWidget = TweenWidth__get_cachedWidget(this, *(const MethodInfo **)&value);
  if ( !cachedWidget )
    sub_1C7BD40(0, v5);
  UIWidget__set_width(cachedWidget, value, v6);
}


// attributes: thunk
void TweenWidth__set_width(TweenWidth_o *this, int32_t value, const MethodInfo *method)
{
  TweenWidth__set_value(this, value, method);
}