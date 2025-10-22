void NGUIFader___ctor(NGUIFader_o *this, const MethodInfo *method)
{
  this->fields.color.fields.a = 1.0;
  *(_OWORD *)&this->fields.duration = xmmword_C12A80;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void NGUIFader__FadeStart(
        NGUIFader_o *this,
        UnityEngine_Color_o col,
        float dur,
        bool isIn,
        NGUIFader_OnFinished_o *callback,
        bool noSetColor,
        const MethodInfo *method)
{
  struct NGUIFader_OnFinished_o **p_finishedCallback; // x20
  float a; // s9
  float b; // s10
  float g; // s11
  float r; // s12
  __int64 v16; // x1
  struct UIWidget_o *fadeWidget; // x0
  float v18; // s0

  this->fields.finishedCallback = callback;
  p_finishedCallback = &this->fields.finishedCallback;
  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.finishedCallback,
    (int32_t)callback,
    (int32_t)callback,
    (const MethodInfo *)noSetColor);
  if ( !*((_BYTE *)p_finishedCallback - 20) )
  {
    if ( !noSetColor )
    {
      this->fields.color.fields.r = r;
      this->fields.color.fields.g = g;
      this->fields.color.fields.b = b;
      this->fields.color.fields.a = a;
    }
    fadeWidget = this->fields.fadeWidget;
    this->fields.duration = dur;
    this->fields.isFadeIn = isIn;
    if ( !fadeWidget )
      sub_1C3E7C0(0, v16);
    v18 = fadeWidget->fields.mColor.fields.a;
    if ( isIn )
    {
      if ( v18 != 0.0 )
      {
        UIWidget__set_color(fadeWidget, this->fields.color, 0);
        this->fields.color.fields.a = 1.0;
LABEL_12:
        this->fields.offsetTime = 0.0;
        this->fields.durTime = dur;
        this->fields.isFading = 1;
        return;
      }
    }
    else if ( v18 != 1.0 )
    {
      goto LABEL_12;
    }
    if ( *p_finishedCallback )
      ((void (__fastcall *)(intptr_t, intptr_t))(*p_finishedCallback)->fields.invoke_impl)(
        (*p_finishedCallback)->fields.method_code,
        (*p_finishedCallback)->fields.method);
  }
}


// attributes: thunk
void NGUIFader__Start(NGUIFader_o *this, const MethodInfo *method)
{
  NGUIFader__setup(this, method);
}


void NGUIFader__Update(NGUIFader_o *this, const MethodInfo *method)
{
  float deltaTime; // s0
  const MethodInfo *v4; // x1

  deltaTime = UnityEngine_Time__get_deltaTime(0);
  NGUIFader__updateColor(this, deltaTime, v4);
}


bool NGUIFader__isFaded(NGUIFader_o *this, const MethodInfo *method)
{
  float a; // s0

  a = this->fields.color.fields.a;
  if ( a < 0.01 )
  {
    a = 0.0;
    this->fields.color.fields.a = 0.0;
    this->fields.isFading = 0;
  }
  return a != 0.0;
}


void NGUIFader__setColor(NGUIFader_o *this, UnityEngine_Color_o col, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v8; // x1
  UIWidget_o *fadeWidget; // x0
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  this->fields.color = col;
  NGUIFader__setup(this, method);
  fadeWidget = this->fields.fadeWidget;
  if ( !fadeWidget )
    sub_1C3E7C0(0, v8);
  v10.fields.b = b;
  v10.fields.a = a;
  v10.fields.r = r;
  v10.fields.g = g;
  UIWidget__set_color(fadeWidget, v10, 0);
}


void NGUIFader__setup(NGUIFader_o *this, const MethodInfo *method)
{
  struct UIWidget_o **p_fadeWidget; // x20
  UnityEngine_Object_o *fadeWidget; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIWidget_o *v10; // x8
  __int64 v11; // d0
  float b; // s1

  if ( (byte_4C5852E & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5852E = 1;
  }
  p_fadeWidget = &this->fields.fadeWidget;
  fadeWidget = (UnityEngine_Object_o *)this->fields.fadeWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(fadeWidget, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               gameObject,
                               (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___),
          *p_fadeWidget = (struct UIWidget_o *)Component_object,
          sub_1C3E508((CGThumbnailListItem_o *)&this->fields.fadeWidget, (int32_t)Component_object, v8, v9),
          (v10 = *p_fadeWidget) == 0) )
    {
      sub_1C3E7C0(gameObject, v6);
    }
    v11 = *(_QWORD *)&v10->fields.mColor.fields.r;
    b = v10->fields.mColor.fields.b;
    this->fields.color.fields.a = 0.0;
    *(_QWORD *)&this->fields.color.fields.r = v11;
    this->fields.color.fields.b = b;
    this->fields.isFadeIn = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void NGUIFader__updateColor(NGUIFader_o *this, float deltaTime, const MethodInfo *method)
{
  _BOOL4 isFading; // w8
  float v4; // s0
  float durTime; // s1
  float v7; // s3 OVERLAPPED
  UIWidget_o *fadeWidget; // x0
  float g; // s1
  float b; // s2
  float r; // s0
  struct NGUIFader_OnFinished_o *finishedCallback; // x8

  isFading = this->fields.isFading;
  v4 = this->fields.offsetTime + deltaTime;
  this->fields.offsetTime = v4;
  if ( isFading )
  {
    durTime = this->fields.durTime;
    if ( v4 <= durTime )
    {
      v7 = 0.0;
      if ( v4 > 0.0 )
        v7 = v4 / durTime;
    }
    else
    {
      this->fields.isFading = 0;
      v7 = 1.0;
    }
    fadeWidget = this->fields.fadeWidget;
    if ( !fadeWidget )
      sub_1C3E7C0(0, method);
    if ( this->fields.isFadeIn )
      v7 = 1.0 - v7;
    r = this->fields.color.fields.r;
    g = this->fields.color.fields.g;
    b = this->fields.color.fields.b;
    UIWidget__set_color(fadeWidget, *(UnityEngine_Color_o *)(&v7 - 3), 0);
    if ( !this->fields.isFading )
    {
      finishedCallback = this->fields.finishedCallback;
      if ( finishedCallback )
        ((void (__fastcall *)(intptr_t, intptr_t))finishedCallback->fields.invoke_impl)(
          finishedCallback->fields.method_code,
          finishedCallback->fields.method);
    }
  }
}


void NGUIFader_OnFinished___ctor(
        NGUIFader_OnFinished_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A83CD8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A83C98;
}


System_IAsyncResult_o *NGUIFader_OnFinished__BeginInvoke(
        NGUIFader_OnFinished_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3E518(this, &v5, callback, object);
}


void NGUIFader_OnFinished__EndInvoke(
        NGUIFader_OnFinished_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void NGUIFader_OnFinished__Invoke(NGUIFader_OnFinished_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}