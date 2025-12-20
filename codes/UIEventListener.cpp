void UIEventListener___ctor(UIEventListener_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UIEventListener_o *UIEventListener__Get(UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  UnityEngine_GameObject_o *v2; // x19
  Il2CppObject *Component_object; // x20

  v2 = go;
  if ( (byte_4D31042 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_AddComponent_UIEventListener___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIEventListener___);
    go = (UnityEngine_GameObject_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D31042 = 1;
  }
  if ( !v2 )
    sub_1C942F0(go, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v2,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIEventListener___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
    return (UIEventListener_o *)UnityEngine_GameObject__AddComponent_object_(
                                  v2,
                                  (const MethodInfo_31F46A8 *)Method_UnityEngine_GameObject_AddComponent_UIEventListener___);
  else
    return (UIEventListener_o *)Component_object;
}


void UIEventListener__OnClick(UIEventListener_o *this, const MethodInfo *method)
{
  struct UIEventListener_VoidDelegate_o *onClick; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  onClick = this->fields.onClick;
  if ( onClick )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t))onClick->fields.invoke_impl)(
      onClick->fields.method_code,
      gameObject,
      onClick->fields.method);
  }
}


void UIEventListener__OnDoubleClick(UIEventListener_o *this, const MethodInfo *method)
{
  struct UIEventListener_VoidDelegate_o *onDoubleClick; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  onDoubleClick = this->fields.onDoubleClick;
  if ( onDoubleClick )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t))onDoubleClick->fields.invoke_impl)(
      onDoubleClick->fields.method_code,
      gameObject,
      onDoubleClick->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIEventListener__OnDrag(UIEventListener_o *this, UnityEngine_Vector2_o delta, const MethodInfo *method)
{
  struct UIEventListener_VectorDelegate_o *onDrag; // x19
  long double v4; // q8
  long double v5; // q9
  UnityEngine_GameObject_o *gameObject; // x0

  onDrag = this->fields.onDrag;
  if ( onDrag )
  {
    v4 = *(long double *)&delta.fields.y;
    v5 = *(long double *)&delta.fields.x;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t, long double, long double))onDrag->fields.invoke_impl)(
      onDrag->fields.method_code,
      gameObject,
      onDrag->fields.method,
      v5,
      v4);
  }
}


void UIEventListener__OnDragEnd(UIEventListener_o *this, const MethodInfo *method)
{
  struct UIEventListener_VoidDelegate_o *onDragEnd; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  onDragEnd = this->fields.onDragEnd;
  if ( onDragEnd )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t))onDragEnd->fields.invoke_impl)(
      onDragEnd->fields.method_code,
      gameObject,
      onDragEnd->fields.method);
  }
}


void UIEventListener__OnDragOut(UIEventListener_o *this, const MethodInfo *method)
{
  struct UIEventListener_VoidDelegate_o *onDragOut; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  onDragOut = this->fields.onDragOut;
  if ( onDragOut )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t))onDragOut->fields.invoke_impl)(
      onDragOut->fields.method_code,
      gameObject,
      onDragOut->fields.method);
  }
}


void UIEventListener__OnDragOver(UIEventListener_o *this, const MethodInfo *method)
{
  struct UIEventListener_VoidDelegate_o *onDragOver; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  onDragOver = this->fields.onDragOver;
  if ( onDragOver )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t))onDragOver->fields.invoke_impl)(
      onDragOver->fields.method_code,
      gameObject,
      onDragOver->fields.method);
  }
}


void UIEventListener__OnDragStart(UIEventListener_o *this, const MethodInfo *method)
{
  struct UIEventListener_VoidDelegate_o *onDragStart; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  onDragStart = this->fields.onDragStart;
  if ( onDragStart )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t))onDragStart->fields.invoke_impl)(
      onDragStart->fields.method_code,
      gameObject,
      onDragStart->fields.method);
  }
}


void UIEventListener__OnDrop(UIEventListener_o *this, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  struct UIEventListener_ObjectDelegate_o *onDrop; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  onDrop = this->fields.onDrop;
  if ( onDrop )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, UnityEngine_GameObject_o *, intptr_t))onDrop->fields.invoke_impl)(
      onDrop->fields.method_code,
      gameObject,
      go,
      onDrop->fields.method);
  }
}


void UIEventListener__OnHover(UIEventListener_o *this, bool isOver, const MethodInfo *method)
{
  struct UIEventListener_BoolDelegate_o *onHover; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  onHover = this->fields.onHover;
  if ( onHover )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, bool, intptr_t))onHover->fields.invoke_impl)(
      onHover->fields.method_code,
      gameObject,
      isOver,
      onHover->fields.method);
  }
}


void UIEventListener__OnKey(UIEventListener_o *this, int32_t key, const MethodInfo *method)
{
  struct UIEventListener_KeyCodeDelegate_o *onKey; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  onKey = this->fields.onKey;
  if ( onKey )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, _QWORD, intptr_t))onKey->fields.invoke_impl)(
      onKey->fields.method_code,
      gameObject,
      (unsigned int)key,
      onKey->fields.method);
  }
}


void UIEventListener__OnPress(UIEventListener_o *this, bool isPressed, const MethodInfo *method)
{
  struct UIEventListener_BoolDelegate_o *onPress; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  onPress = this->fields.onPress;
  if ( onPress )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, bool, intptr_t))onPress->fields.invoke_impl)(
      onPress->fields.method_code,
      gameObject,
      isPressed,
      onPress->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIEventListener__OnScroll(UIEventListener_o *this, float delta, const MethodInfo *method)
{
  struct UIEventListener_FloatDelegate_o *onScroll; // x19
  long double v4; // q8
  UnityEngine_GameObject_o *gameObject; // x0

  onScroll = this->fields.onScroll;
  if ( onScroll )
  {
    v4 = *(long double *)&delta;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t, long double))onScroll->fields.invoke_impl)(
      onScroll->fields.method_code,
      gameObject,
      onScroll->fields.method,
      v4);
  }
}


void UIEventListener__OnSelect(UIEventListener_o *this, bool selected, const MethodInfo *method)
{
  struct UIEventListener_BoolDelegate_o *onSelect; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  onSelect = this->fields.onSelect;
  if ( onSelect )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, bool, intptr_t))onSelect->fields.invoke_impl)(
      onSelect->fields.method_code,
      gameObject,
      selected,
      onSelect->fields.method);
  }
}


void UIEventListener__OnSubmit(UIEventListener_o *this, const MethodInfo *method)
{
  struct UIEventListener_VoidDelegate_o *onSubmit; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  onSubmit = this->fields.onSubmit;
  if ( onSubmit )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t))onSubmit->fields.invoke_impl)(
      onSubmit->fields.method_code,
      gameObject,
      onSubmit->fields.method);
  }
}


void UIEventListener__OnTooltip(UIEventListener_o *this, bool show, const MethodInfo *method)
{
  struct UIEventListener_BoolDelegate_o *onTooltip; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  onTooltip = this->fields.onTooltip;
  if ( onTooltip )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, bool, intptr_t))onTooltip->fields.invoke_impl)(
      onTooltip->fields.method_code,
      gameObject,
      show,
      onTooltip->fields.method);
  }
}


void UIEventListener_BoolDelegate___ctor(
        UIEventListener_BoolDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AD01B4;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = sub_1AD01DC;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AD015C;
}


System_IAsyncResult_o *UIEventListener_BoolDelegate__BeginInvoke(
        UIEventListener_BoolDelegate_o *this,
        UnityEngine_GameObject_o *go,
        bool state,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  bool v12[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v12[0] = state;
  if ( (byte_4D31043 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D31043 = 1;
  }
  v11[2] = 0;
  v11[0] = go;
  v11[1] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v11, callback, object);
}


void UIEventListener_BoolDelegate__EndInvoke(
        UIEventListener_BoolDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void UIEventListener_BoolDelegate__Invoke(
        UIEventListener_BoolDelegate_o *this,
        UnityEngine_GameObject_o *go,
        bool state,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    go,
    state,
    this->fields.method);
}


void UIEventListener_FloatDelegate___ctor(
        UIEventListener_FloatDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AD024C;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = sub_1AD026C;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AD01F4;
}


System_IAsyncResult_o *UIEventListener_FloatDelegate__BeginInvoke(
        UIEventListener_FloatDelegate_o *this,
        UnityEngine_GameObject_o *go,
        float delta,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  float v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = delta;
  if ( (byte_4D31044 & 1) == 0 )
  {
    sub_1C94098(&float_TypeInfo);
    byte_4D31044 = 1;
  }
  v11[2] = 0;
  v11[0] = go;
  v11[1] = j_il2cpp_value_box_0(float_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v11, callback, object);
}


void UIEventListener_FloatDelegate__EndInvoke(
        UIEventListener_FloatDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void UIEventListener_FloatDelegate__Invoke(
        UIEventListener_FloatDelegate_o *this,
        UnityEngine_GameObject_o *go,
        float delta,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t, float))this->fields.invoke_impl)(
    this->fields.method_code,
    go,
    this->fields.method,
    delta);
}


void UIEventListener_KeyCodeDelegate___ctor(
        UIEventListener_KeyCodeDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AD03F4;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = sub_1AD0418;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AD039C;
}


System_IAsyncResult_o *UIEventListener_KeyCodeDelegate__BeginInvoke(
        UIEventListener_KeyCodeDelegate_o *this,
        UnityEngine_GameObject_o *go,
        int32_t key,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = key;
  if ( (byte_4D31046 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_KeyCode_TypeInfo);
    byte_4D31046 = 1;
  }
  v11[2] = 0;
  v11[0] = go;
  v11[1] = j_il2cpp_value_box_0(UnityEngine_KeyCode_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v11, callback, object);
}


void UIEventListener_KeyCodeDelegate__EndInvoke(
        UIEventListener_KeyCodeDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void UIEventListener_KeyCodeDelegate__Invoke(
        UIEventListener_KeyCodeDelegate_o *this,
        UnityEngine_GameObject_o *go,
        int32_t key,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    go,
    key,
    this->fields.method);
}


void UIEventListener_ObjectDelegate___ctor(
        UIEventListener_ObjectDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AD0364;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = sub_1AD0388;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AD030C;
}


System_IAsyncResult_o *UIEventListener_ObjectDelegate__BeginInvoke(
        UIEventListener_ObjectDelegate_o *this,
        UnityEngine_GameObject_o *go,
        UnityEngine_GameObject_o *obj,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v7[2]; // [xsp+8h] [xbp-28h] BYREF

  v7[0] = go;
  v7[1] = obj;
  return (System_IAsyncResult_o *)sub_1C9404C(this, v7, callback, object);
}


void UIEventListener_ObjectDelegate__EndInvoke(
        UIEventListener_ObjectDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void UIEventListener_ObjectDelegate__Invoke(
        UIEventListener_ObjectDelegate_o *this,
        UnityEngine_GameObject_o *go,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, UnityEngine_GameObject_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    go,
    obj,
    this->fields.method);
}


void UIEventListener_VectorDelegate___ctor(
        UIEventListener_VectorDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AD02DC;
      goto LABEL_6;
    }
    if ( !object )
    {
      v15 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v15, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v12 != 2 )
    goto LABEL_8;
  v13 = sub_1AD02FC;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v13;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AD027C;
}


System_IAsyncResult_o *UIEventListener_VectorDelegate__BeginInvoke(
        UIEventListener_VectorDelegate_o *this,
        UnityEngine_GameObject_o *go,
        UnityEngine_Vector2_o delta,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector2_o v12; // [xsp+28h] [xbp-38h] BYREF

  v12 = delta;
  if ( (byte_4D31045 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Vector2_TypeInfo);
    byte_4D31045 = 1;
  }
  v11[2] = 0;
  v11[0] = go;
  v11[1] = j_il2cpp_value_box_0(UnityEngine_Vector2_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v11, callback, object);
}


void UIEventListener_VectorDelegate__EndInvoke(
        UIEventListener_VectorDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


// local variable allocation has failed, the output may be wrong!
void UIEventListener_VectorDelegate__Invoke(
        UIEventListener_VectorDelegate_o *this,
        UnityEngine_GameObject_o *go,
        UnityEngine_Vector2_o delta,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t, long double, long double))this->fields.invoke_impl)(
    this->fields.method_code,
    go,
    this->fields.method,
    *(long double *)&delta.fields.x,
    *(long double *)&delta.fields.y);
}


void UIEventListener_VoidDelegate___ctor(
        UIEventListener_VoidDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AD014C;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_1AD012C;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1AD00E4;
}


System_IAsyncResult_o *UIEventListener_VoidDelegate__BeginInvoke(
        UIEventListener_VoidDelegate_o *this,
        UnityEngine_GameObject_o *go,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = go;
  return (System_IAsyncResult_o *)sub_1C9404C(this, &v6, callback, object);
}


void UIEventListener_VoidDelegate__EndInvoke(
        UIEventListener_VoidDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void UIEventListener_VoidDelegate__Invoke(
        UIEventListener_VoidDelegate_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UnityEngine_GameObject_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    go,
    this->fields.method);
}