void UIPlayAnimation___ctor(UIPlayAnimation_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventDelegate__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_597501A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_597501A = 1;
  }
  v3 = System_Collections_Generic_List_EventDelegate__TypeInfo;
  this->fields.playDirection = 1;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onFinished = (struct System_Collections_Generic_List_EventDelegate__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onFinished, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIPlayAnimation__Awake(UIPlayAnimation_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *eventReceiver; // x21
  __int64 v8; // x1
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_597500D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597500D = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIButton___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v5 )
  {
    if ( !Component_object )
      sub_2213CDC(v5, v6);
    this->fields.dragHighlight = BYTE4(Component_object[8].monitor);
  }
  eventReceiver = (UnityEngine_Object_o *)this->fields.eventReceiver;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(eventReceiver, 0, 0) )
  {
    onFinished = this->fields.onFinished;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v8);
    if ( EventDelegate__IsValid_56312868(onFinished, 0) )
    {
      this->fields.eventReceiver = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventReceiver, 0, v10, v11, v12, v13, v14, v15);
      this->fields.callWhenFinished = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callWhenFinished, 0, v16, v17, v18, v19, v20, v21);
    }
  }
}


void UIPlayAnimation__OnClick(UIPlayAnimation_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  const MethodInfo *v4; // x3

  if ( (byte_5975012 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5975012 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v3 = UICamera_TypeInfo;
  }
  if ( v3->static_fields->currentTouchID >= -1
    && UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0)
    && !this->fields.trigger )
  {
    UIPlayAnimation__Play_56251232(this, 1, 0, v4);
  }
}


void UIPlayAnimation__OnDisable(UIPlayAnimation_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Component_object; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_EventDelegate__o *m_CachedPtr; // x20
  EventDelegate_Callback_o *v8; // x21
  __int64 v9; // x1

  if ( (byte_5975010 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIToggle___);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UIPlayAnimation_OnToggle__);
    byte_5975010 = 1;
  }
  Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIToggle___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( v5 )
  {
    if ( !Component_object )
      sub_2213CDC(v5, v6);
    m_CachedPtr = (System_Collections_Generic_List_EventDelegate__o *)Component_object[2].fields.m_CachedPtr;
    v8 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v8, (Il2CppObject *)this, Method_UIPlayAnimation_OnToggle__, 0);
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v9);
    EventDelegate__Remove(m_CachedPtr, v8, 0);
  }
}


void UIPlayAnimation__OnDoubleClick(UIPlayAnimation_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  const MethodInfo *v4; // x3

  if ( (byte_5975013 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5975013 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v3 = UICamera_TypeInfo;
  }
  if ( v3->static_fields->currentTouchID >= -1
    && UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0)
    && this->fields.trigger == 10 )
  {
    UIPlayAnimation__Play_56251232(this, 1, 0, v4);
  }
}


void UIPlayAnimation__OnDragOut(UIPlayAnimation_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UICamera_c *v4; // x0
  UnityEngine_Object_o *hoveredObject; // x20
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x21
  const MethodInfo *v8; // x3

  if ( (byte_5975016 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5975016 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0)
    && (unsigned int)(this->fields.trigger - 1) <= 1 )
  {
    v4 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
      v4 = UICamera_TypeInfo;
    }
    hoveredObject = (UnityEngine_Object_o *)v4->static_fields->hoveredObject;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality(hoveredObject, gameObject, 0) )
      UIPlayAnimation__Play_56251232(this, 0, 1, v8);
  }
}


void UIPlayAnimation__OnDragOver(UIPlayAnimation_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UICamera_c *v4; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *dragged; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x21
  const MethodInfo *v9; // x3

  if ( (byte_5975015 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5975015 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0)
    && (unsigned int)(this->fields.trigger - 1) <= 1 )
  {
    v4 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
      v4 = UICamera_TypeInfo;
    }
    currentTouch = v4->static_fields->currentTouch;
    if ( !currentTouch )
      sub_2213CDC(v4, v3);
    dragged = (UnityEngine_Object_o *)currentTouch->fields.dragged;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Equality(dragged, gameObject, 0)
      || this->fields.dragHighlight && this->fields.trigger == 2 )
    {
      UIPlayAnimation__Play_56251232(this, 1, 1, v9);
    }
  }
}


void UIPlayAnimation__OnDrop(UIPlayAnimation_o *this, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  __int64 v4; // x1
  UICamera_c *v5; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *dragged; // x20
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x21
  const MethodInfo *v10; // x3

  if ( (byte_5975017 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5975017 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) && this->fields.trigger == 2 )
  {
    v5 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v4);
      v5 = UICamera_TypeInfo;
    }
    currentTouch = v5->static_fields->currentTouch;
    if ( !currentTouch )
      sub_2213CDC(v5, v4);
    dragged = (UnityEngine_Object_o *)currentTouch->fields.dragged;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(dragged, gameObject, 0) )
      UIPlayAnimation__Play_56251232(this, 0, 1, v10);
  }
}


void UIPlayAnimation__OnEnable(UIPlayAnimation_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsHighlighted; // w0
  const MethodInfo *v6; // x2
  UICamera_c *v7; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  int32_t trigger; // w9
  UICamera_c *v10; // x0
  UnityEngine_Object_o *pressed; // x20
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x21
  bool v14; // w0
  struct UICamera_MouseOrTouch_o *v15; // x8
  UnityEngine_Object_o *current; // x20
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x21
  __int64 v19; // x1
  UnityEngine_Object_o *Component_object; // x20
  System_Collections_Generic_List_EventDelegate__o *m_CachedPtr; // x20
  EventDelegate_Callback_o *v22; // x21
  __int64 v23; // x1

  if ( (byte_597500F & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIToggle___);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&Method_UIPlayAnimation_OnToggle__);
    byte_597500F = 1;
  }
  if ( this->fields.mStarted )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0);
    UIPlayAnimation__OnHover(this, IsHighlighted, v6);
  }
  v7 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v7 = UICamera_TypeInfo;
  }
  currentTouch = v7->static_fields->currentTouch;
  if ( currentTouch )
  {
    trigger = this->fields.trigger;
    if ( trigger == 5 || trigger == 2 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, method);
        currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
        if ( !currentTouch )
          goto LABEL_32;
      }
      pressed = (UnityEngine_Object_o *)currentTouch->fields.pressed;
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      v14 = UnityEngine_Object__op_Equality(pressed, v13, 0);
      trigger = this->fields.trigger;
      this->fields.mActivated = v14;
    }
    if ( (trigger | 2) == 3 )
    {
      v10 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
        v10 = UICamera_TypeInfo;
      }
      v15 = v10->static_fields->currentTouch;
      if ( !v15 )
        goto LABEL_32;
      current = (UnityEngine_Object_o *)v15->fields.current;
      v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      this->fields.mActivated = UnityEngine_Object__op_Equality(current, v18, 0);
    }
  }
  Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIToggle___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  v10 = (UICamera_c *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    if ( Component_object )
    {
      m_CachedPtr = (System_Collections_Generic_List_EventDelegate__o *)Component_object[2].fields.m_CachedPtr;
      v22 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(v22, (Il2CppObject *)this, Method_UIPlayAnimation_OnToggle__, 0);
      if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v23);
      EventDelegate__Add(m_CachedPtr, v22, 0);
      return;
    }
LABEL_32:
    sub_2213CDC(v10, method);
  }
}


void UIPlayAnimation__OnFinished(UIPlayAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  __int64 v12; // x1
  UnityEngine_GameObject_o **p_eventReceiver; // x20
  UnityEngine_Object_o *eventReceiver; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_5975019 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIPlayAnimation_TypeInfo);
    byte_5975019 = 1;
  }
  current = (UnityEngine_Object_o *)UIPlayAnimation_TypeInfo->static_fields->current;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(current, 0, 0) )
  {
    UIPlayAnimation_TypeInfo->static_fields->current = this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIPlayAnimation_TypeInfo->static_fields,
      (int32_t)this,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    onFinished = this->fields.onFinished;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v10);
    EventDelegate__Execute_56285144(onFinished, 0);
    p_eventReceiver = &this->fields.eventReceiver;
    eventReceiver = (UnityEngine_Object_o *)this->fields.eventReceiver;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( UnityEngine_Object__op_Inequality(eventReceiver, 0, 0)
      && !System_String__IsNullOrEmpty(this->fields.callWhenFinished, 0) )
    {
      if ( !*p_eventReceiver )
        sub_2213CDC(0, v21);
      UnityEngine_GameObject__SendMessage(*p_eventReceiver, this->fields.callWhenFinished, 1, 0);
    }
    *p_eventReceiver = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventReceiver, 0, v15, v16, v17, v18, v19, v20);
    UIPlayAnimation_TypeInfo->static_fields->current = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)UIPlayAnimation_TypeInfo->static_fields,
      0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
}


void UIPlayAnimation__OnHover(UIPlayAnimation_o *this, bool isOver, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  int32_t trigger; // w9
  _BOOL4 v7; // w10

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    trigger = this->fields.trigger;
    v7 = trigger == 3 && isOver;
    if ( trigger == 1 )
      v7 = 1;
    if ( v7 == (trigger != 4 || isOver) )
      UIPlayAnimation__Play_56251232(this, isOver, (unsigned int)(trigger - 1) < 2, v5);
  }
}


void UIPlayAnimation__OnPress(UIPlayAnimation_o *this, bool isPressed, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  UICamera_c *v7; // x0
  int32_t trigger; // w8
  _BOOL4 v9; // w9

  if ( (byte_5975011 & 1) == 0 )
  {
    sub_2213A60(&UICamera_TypeInfo);
    byte_5975011 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    v7 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v5);
      v7 = UICamera_TypeInfo;
    }
    if ( v7->static_fields->currentTouchID >= -1 )
    {
      trigger = this->fields.trigger;
      v9 = trigger == 5 && isPressed;
      if ( trigger == 2 )
        v9 = 1;
      if ( v9 == (trigger != 6 || isPressed) )
        UIPlayAnimation__Play_56251232(this, isPressed, (unsigned int)(trigger - 1) < 2, v6);
    }
  }
}


void UIPlayAnimation__OnSelect(UIPlayAnimation_o *this, bool isSelected, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  int32_t trigger; // w8
  _BOOL4 v7; // w9

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    trigger = this->fields.trigger;
    v7 = trigger == 12 && isSelected;
    if ( trigger == 11 )
      v7 = 1;
    if ( v7 == (trigger != 13 || isSelected) )
      UIPlayAnimation__Play_56251232(this, isSelected, 0, v5);
  }
}


void UIPlayAnimation__OnToggle(UIPlayAnimation_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIToggle_c *v4; // x0
  UnityEngine_Object_o *current; // x20
  __int64 v6; // x1
  int32_t trigger; // w8
  UIToggle_c *v8; // x0
  UIToggle_o *v9; // x0
  UIToggle_c *v10; // x0
  UIToggle_c *v11; // x0
  bool value; // w0
  const MethodInfo *v13; // x3

  if ( (byte_5975014 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIToggle_TypeInfo);
    byte_5975014 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    v4 = UIToggle_TypeInfo;
    if ( !*(&UIToggle_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo, v3);
      v4 = UIToggle_TypeInfo;
    }
    current = (UnityEngine_Object_o *)v4->static_fields->current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
    if ( !UnityEngine_Object__op_Equality(current, 0, 0) )
    {
      trigger = this->fields.trigger;
      if ( trigger != 7 )
      {
        if ( trigger == 8 )
        {
          v8 = UIToggle_TypeInfo;
          if ( !*(&UIToggle_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo, v6);
            v8 = UIToggle_TypeInfo;
          }
          v9 = v8->static_fields->current;
          if ( !v9 )
            goto LABEL_26;
          if ( UIToggle__get_value(v9, 0) )
            goto LABEL_22;
          trigger = this->fields.trigger;
        }
        if ( trigger != 9 )
          return;
        v10 = UIToggle_TypeInfo;
        if ( !*(&UIToggle_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo, v6);
          v10 = UIToggle_TypeInfo;
        }
        v9 = v10->static_fields->current;
        if ( !v9 )
LABEL_26:
          sub_2213CDC(v9, v6);
        if ( UIToggle__get_value(v9, 0) )
          return;
      }
LABEL_22:
      v11 = UIToggle_TypeInfo;
      if ( !*(&UIToggle_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo, v6);
        v11 = UIToggle_TypeInfo;
      }
      v9 = v11->static_fields->current;
      if ( v9 )
      {
        value = UIToggle__get_value(v9, 0);
        UIPlayAnimation__Play_56251232(this, value, (unsigned int)(this->fields.trigger - 1) < 2, v13);
        return;
      }
      goto LABEL_26;
    }
  }
}


void UIPlayAnimation__Play(UIPlayAnimation_o *this, bool forward, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  UIPlayAnimation__Play_56251232(this, forward, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
void UIPlayAnimation__Play_56251232(
        UIPlayAnimation_o *this,
        bool forward,
        bool onlyIfDifferent,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x22
  __int64 v8; // x1
  UnityEngine_Object_o *animator; // x22
  UnityEngine_Object_o *selectedObject; // x21
  __int64 v11; // x1
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *v13; // x21
  int playDirection; // w20
  ActiveAnimation_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *v17; // x20
  EventDelegate_o *v18; // x0
  __int64 v19; // x1
  struct System_Collections_Generic_List_EventDelegate__o *onFinished; // x8
  int v21; // w26
  System_Collections_Generic_List_EventDelegate__o *monitor; // x21
  EventDelegate_Callback_o *v23; // x22
  __int64 v24; // x1

  if ( (byte_5975018 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&Method_UIPlayAnimation_OnFinished__);
    byte_5975018 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, forward);
  if ( UnityEngine_Object__op_Implicit(target, 0) )
    goto LABEL_45;
  animator = (UnityEngine_Object_o *)this->fields.animator;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Implicit(animator, 0) )
  {
LABEL_45:
    if ( onlyIfDifferent )
    {
      if ( this->fields.mActivated == forward )
        return;
      this->fields.mActivated = forward;
    }
    if ( this->fields.clearSelection )
    {
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
      selectedObject = (UnityEngine_Object_o *)UICamera__get_selectedObject(0);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      if ( UnityEngine_Object__op_Equality(selectedObject, gameObject, 0) )
      {
        if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8);
        UICamera__set_selectedObject(0, 0);
      }
    }
    v13 = (UnityEngine_Object_o *)this->fields.target;
    if ( forward )
      playDirection = this->fields.playDirection;
    else
      playDirection = -this->fields.playDirection;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Implicit(v13, 0) )
      v15 = ActiveAnimation__Play_56313096(
              this->fields.target,
              this->fields.clipName,
              playDirection,
              this->fields.ifDisabledOnPlay,
              this->fields.disableWhenFinished,
              0);
    else
      v15 = ActiveAnimation__Play_56328640(
              this->fields.animator,
              this->fields.clipName,
              playDirection,
              this->fields.ifDisabledOnPlay,
              this->fields.disableWhenFinished,
              0);
    v17 = (UnityEngine_Object_o *)v15;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    v18 = (EventDelegate_o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
    if ( ((unsigned __int8)v18 & 1) != 0 )
    {
      if ( this->fields.resetOnPlay )
      {
        if ( !v17 )
          goto LABEL_42;
        ActiveAnimation__Reset((ActiveAnimation_o *)v17, 0);
      }
      onFinished = this->fields.onFinished;
      if ( onFinished )
      {
        v21 = -1;
        while ( ++v21 < onFinished->fields._size )
        {
          if ( v17 )
          {
            monitor = (System_Collections_Generic_List_EventDelegate__o *)v17[1].monitor;
            v23 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(v23, (Il2CppObject *)this, Method_UIPlayAnimation_OnFinished__, 0);
            if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v24);
            v18 = EventDelegate__Add_56341756(monitor, v23, 1, 0);
            onFinished = this->fields.onFinished;
            if ( onFinished )
              continue;
          }
          goto LABEL_42;
        }
        return;
      }
LABEL_42:
      sub_2213CDC(v18, v19);
    }
  }
}


void UIPlayAnimation__Start(UIPlayAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_c *v3; // x0
  struct UnityEngine_Animation_o **p_target; // x19
  UnityEngine_Object_o *target; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *animator; // x22
  Il2CppObject *ComponentInChildren_object__58855044; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UnityEngine_Object_o *v15; // x21
  __int64 v16; // x1
  UnityEngine_Behaviour_o *v17; // x0
  UnityEngine_Object_o *v18; // x21
  __int64 v19; // x1
  Il2CppObject *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  UnityEngine_Object_o *v27; // x20

  if ( (byte_597500E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_Animator___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597500E = 1;
  }
  v3 = UnityEngine_Object_TypeInfo;
  p_target = &this->fields.target;
  target = (UnityEngine_Object_o *)this->fields.target;
  this->fields.mStarted = 1;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( UnityEngine_Object__op_Equality(target, 0, 0) )
  {
    animator = (UnityEngine_Object_o *)this->fields.animator;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Equality(animator, 0, 0) )
    {
      ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_Animator___);
      this->fields.animator = (struct UnityEngine_Animator_o *)ComponentInChildren_object__58855044;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.animator,
        (int32_t)ComponentInChildren_object__58855044,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
  }
  v15 = (UnityEngine_Object_o *)this->fields.animator;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
  {
    v17 = (UnityEngine_Behaviour_o *)this->fields.animator;
    if ( !v17 )
      goto LABEL_29;
    if ( UnityEngine_Behaviour__get_enabled(v17, 0) )
    {
      v17 = (UnityEngine_Behaviour_o *)this->fields.animator;
      if ( !v17 )
LABEL_29:
        sub_2213CDC(v17, v16);
      goto LABEL_27;
    }
  }
  else
  {
    v18 = (UnityEngine_Object_o *)*p_target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    if ( UnityEngine_Object__op_Equality(v18, 0, 0) )
    {
      v20 = UnityEngine_Component__GetComponentInChildren_object__58855044(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
      this->fields.target = (struct UnityEngine_Animation_o *)v20;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.target, (int32_t)v20, v21, v22, v23, v24, v25, v26);
    }
    v27 = (UnityEngine_Object_o *)*p_target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
    {
      v17 = (UnityEngine_Behaviour_o *)*p_target;
      if ( !*p_target )
        goto LABEL_29;
      if ( UnityEngine_Behaviour__get_enabled(v17, 0) )
      {
        v17 = (UnityEngine_Behaviour_o *)*p_target;
        if ( !*p_target )
          goto LABEL_29;
LABEL_27:
        UnityEngine_Behaviour__set_enabled(v17, 0, 0);
      }
    }
  }
}


bool UIPlayAnimation__get_dualState(UIPlayAnimation_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.trigger - 1) < 2;
}