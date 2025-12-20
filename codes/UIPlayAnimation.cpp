void UIPlayAnimation___ctor(UIPlayAnimation_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D30EBD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C94098(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_4D30EBD = 1;
  }
  this->fields.playDirection = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onFinished = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.onFinished, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIPlayAnimation__Awake(UIPlayAnimation_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *eventReceiver; // x21
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D30EB0 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_1C94098(&EventDelegate_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30EB0 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIButton___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v4 )
  {
    if ( !Component_object )
      sub_1C942F0(v4, v5);
    this->fields.dragHighlight = BYTE4(Component_object[8].monitor);
  }
  eventReceiver = (UnityEngine_Object_o *)this->fields.eventReceiver;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventReceiver, 0, 0) )
  {
    onFinished = this->fields.onFinished;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    if ( EventDelegate__IsValid_49939720(onFinished, 0) )
    {
      this->fields.eventReceiver = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.eventReceiver, 0, v8, v9, v10, v11, v12, v13);
      this->fields.callWhenFinished = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callWhenFinished, 0, v14, v15, v16, v17, v18, v19);
    }
  }
}


void UIPlayAnimation__OnClick(UIPlayAnimation_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4D30EB5 & 1) == 0 )
  {
    sub_1C94098(&UICamera_TypeInfo);
    byte_4D30EB5 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  if ( v3->static_fields->currentTouchID >= -1
    && UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0)
    && !this->fields.trigger )
  {
    UIPlayAnimation__Play_49876480(this, 1, 0, v4);
  }
}


void UIPlayAnimation__OnDisable(UIPlayAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *Component_object; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_EventDelegate__o *m_CachedPtr; // x20
  EventDelegate_Callback_o *v7; // x21

  if ( (byte_4D30EB3 & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_Callback_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIToggle___);
    sub_1C94098(&EventDelegate_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_UIPlayAnimation_OnToggle__);
    byte_4D30EB3 = 1;
  }
  Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIToggle___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( v4 )
  {
    if ( !Component_object )
      sub_1C942F0(v4, v5);
    m_CachedPtr = (System_Collections_Generic_List_EventDelegate__o *)Component_object[2].fields.m_CachedPtr;
    v7 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v7, (Il2CppObject *)this, Method_UIPlayAnimation_OnToggle__, 0);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Remove(m_CachedPtr, v7, 0);
  }
}


void UIPlayAnimation__OnDoubleClick(UIPlayAnimation_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4D30EB6 & 1) == 0 )
  {
    sub_1C94098(&UICamera_TypeInfo);
    byte_4D30EB6 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  if ( v3->static_fields->currentTouchID >= -1
    && UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0)
    && this->fields.trigger == 10 )
  {
    UIPlayAnimation__Play_49876480(this, 1, 0, v4);
  }
}


void UIPlayAnimation__OnDragOut(UIPlayAnimation_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  UnityEngine_Object_o *hoveredObject; // x20
  UnityEngine_Object_o *gameObject; // x21
  const MethodInfo *v6; // x3

  if ( (byte_4D30EB9 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&UICamera_TypeInfo);
    byte_4D30EB9 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0)
    && (unsigned int)(this->fields.trigger - 1) <= 1 )
  {
    v3 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v3 = UICamera_TypeInfo;
    }
    hoveredObject = (UnityEngine_Object_o *)v3->static_fields->hoveredObject;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hoveredObject, gameObject, 0) )
      UIPlayAnimation__Play_49876480(this, 0, 1, v6);
  }
}


void UIPlayAnimation__OnDragOver(UIPlayAnimation_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UICamera_c *v4; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *dragged; // x20
  UnityEngine_Object_o *gameObject; // x21
  const MethodInfo *v8; // x3

  if ( (byte_4D30EB8 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&UICamera_TypeInfo);
    byte_4D30EB8 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0)
    && (unsigned int)(this->fields.trigger - 1) <= 1 )
  {
    v4 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v4 = UICamera_TypeInfo;
    }
    currentTouch = v4->static_fields->currentTouch;
    if ( !currentTouch )
      sub_1C942F0(v4, v3);
    dragged = (UnityEngine_Object_o *)currentTouch->fields.dragged;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(dragged, gameObject, 0)
      || this->fields.dragHighlight && this->fields.trigger == 2 )
    {
      UIPlayAnimation__Play_49876480(this, 1, 1, v8);
    }
  }
}


void UIPlayAnimation__OnDrop(UIPlayAnimation_o *this, UnityEngine_GameObject_o *go, const MethodInfo *method)
{
  __int64 v4; // x1
  UICamera_c *v5; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  UnityEngine_Object_o *dragged; // x20
  UnityEngine_Object_o *gameObject; // x21
  const MethodInfo *v9; // x3

  if ( (byte_4D30EBA & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&UICamera_TypeInfo);
    byte_4D30EBA = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) && this->fields.trigger == 2 )
  {
    v5 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v5 = UICamera_TypeInfo;
    }
    currentTouch = v5->static_fields->currentTouch;
    if ( !currentTouch )
      sub_1C942F0(v5, v4);
    dragged = (UnityEngine_Object_o *)currentTouch->fields.dragged;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dragged, gameObject, 0) )
      UIPlayAnimation__Play_49876480(this, 0, 1, v9);
  }
}


void UIPlayAnimation__OnEnable(UIPlayAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  bool IsHighlighted; // w0
  const MethodInfo *v5; // x2
  UICamera_c *v6; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x8
  int32_t trigger; // w9
  UICamera_c *v9; // x0
  UnityEngine_Object_o *pressed; // x20
  UnityEngine_Object_o *v11; // x21
  bool v12; // w0
  struct UICamera_MouseOrTouch_o *v13; // x8
  UnityEngine_Object_o *current; // x20
  UnityEngine_Object_o *v15; // x21
  UnityEngine_Object_o *Component_object; // x20
  System_Collections_Generic_List_EventDelegate__o *m_CachedPtr; // x20
  EventDelegate_Callback_o *v18; // x21

  if ( (byte_4D30EB2 & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_Callback_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIToggle___);
    sub_1C94098(&EventDelegate_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&UICamera_TypeInfo);
    sub_1C94098(&Method_UIPlayAnimation_OnToggle__);
    byte_4D30EB2 = 1;
  }
  if ( this->fields.mStarted )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0);
    UIPlayAnimation__OnHover(this, IsHighlighted, v5);
  }
  v6 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v6 = UICamera_TypeInfo;
  }
  currentTouch = v6->static_fields->currentTouch;
  if ( currentTouch )
  {
    trigger = this->fields.trigger;
    if ( trigger == 5 || trigger == 2 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        currentTouch = UICamera_TypeInfo->static_fields->currentTouch;
        if ( !currentTouch )
          goto LABEL_32;
      }
      pressed = (UnityEngine_Object_o *)currentTouch->fields.pressed;
      v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = UnityEngine_Object__op_Equality(pressed, v11, 0);
      trigger = this->fields.trigger;
      this->fields.mActivated = v12;
    }
    if ( (trigger | 2) == 3 )
    {
      v9 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v9 = UICamera_TypeInfo;
      }
      v13 = v9->static_fields->currentTouch;
      if ( !v13 )
        goto LABEL_32;
      current = (UnityEngine_Object_o *)v13->fields.current;
      v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this->fields.mActivated = UnityEngine_Object__op_Equality(current, v15, 0);
    }
  }
  Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIToggle___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (UICamera_c *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    if ( Component_object )
    {
      m_CachedPtr = (System_Collections_Generic_List_EventDelegate__o *)Component_object[2].fields.m_CachedPtr;
      v18 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(v18, (Il2CppObject *)this, Method_UIPlayAnimation_OnToggle__, 0);
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Add(m_CachedPtr, v18, 0);
      return;
    }
LABEL_32:
    sub_1C942F0(v9, method);
  }
}


void UIPlayAnimation__OnFinished(UIPlayAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *current; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  UnityEngine_GameObject_o **p_eventReceiver; // x20
  UnityEngine_Object_o *eventReceiver; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4D30EBC & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&UIPlayAnimation_TypeInfo);
    byte_4D30EBC = 1;
  }
  current = (UnityEngine_Object_o *)UIPlayAnimation_TypeInfo->static_fields->current;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(current, 0, 0) )
  {
    UIPlayAnimation_TypeInfo->static_fields->current = this;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)UIPlayAnimation_TypeInfo->static_fields,
      (int32_t)this,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    onFinished = this->fields.onFinished;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_49911148(onFinished, 0);
    p_eventReceiver = &this->fields.eventReceiver;
    eventReceiver = (UnityEngine_Object_o *)this->fields.eventReceiver;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(eventReceiver, 0, 0)
      && !System_String__IsNullOrEmpty(this->fields.callWhenFinished, 0) )
    {
      if ( !*p_eventReceiver )
        sub_1C942F0(0, v19);
      UnityEngine_GameObject__SendMessage(*p_eventReceiver, this->fields.callWhenFinished, 1, 0);
    }
    *p_eventReceiver = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.eventReceiver, 0, v13, v14, v15, v16, v17, v18);
    UIPlayAnimation_TypeInfo->static_fields->current = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)UIPlayAnimation_TypeInfo->static_fields, 0, v20, v21, v22, v23, v24, v25);
  }
}


void UIPlayAnimation__OnHover(UIPlayAnimation_o *this, bool isOver, const MethodInfo *method)
{
  _BOOL4 v3; // w20
  const MethodInfo *v5; // x3
  int32_t trigger; // w8

  v3 = isOver;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    trigger = this->fields.trigger;
    if ( trigger == 4 && !v3 || trigger == 1 || trigger == 3 && v3 )
      UIPlayAnimation__Play_49876480(this, v3, (unsigned int)(trigger - 1) < 2, v5);
  }
}


void UIPlayAnimation__OnPress(UIPlayAnimation_o *this, bool isPressed, const MethodInfo *method)
{
  _BOOL4 v3; // w19
  const MethodInfo *v5; // x3
  UICamera_c *v6; // x0
  int32_t trigger; // w8

  v3 = isPressed;
  if ( (byte_4D30EB4 & 1) == 0 )
  {
    sub_1C94098(&UICamera_TypeInfo);
    byte_4D30EB4 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    v6 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v6 = UICamera_TypeInfo;
    }
    if ( v6->static_fields->currentTouchID >= -1 )
    {
      trigger = this->fields.trigger;
      if ( trigger == 6 && !v3 || trigger == 2 || trigger == 5 && v3 )
        UIPlayAnimation__Play_49876480(this, v3, (unsigned int)(trigger - 1) < 2, v5);
    }
  }
}


void UIPlayAnimation__OnSelect(UIPlayAnimation_o *this, bool isSelected, const MethodInfo *method)
{
  _BOOL4 v3; // w20
  const MethodInfo *v5; // x3
  int32_t trigger; // w8

  v3 = isSelected;
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    trigger = this->fields.trigger;
    if ( trigger == 13 && !v3 || trigger == 11 || trigger == 12 && v3 )
      UIPlayAnimation__Play_49876480(this, v3, (unsigned int)(trigger - 1) < 2, v5);
  }
}


void UIPlayAnimation__OnToggle(UIPlayAnimation_o *this, const MethodInfo *method)
{
  UIToggle_c *v3; // x0
  UnityEngine_Object_o *current; // x20
  __int64 v5; // x1
  int32_t trigger; // w8
  UIToggle_c *v7; // x0
  UIToggle_o *v8; // x0
  UIToggle_c *v9; // x0
  UIToggle_c *v10; // x0
  bool value; // w0
  const MethodInfo *v12; // x3

  if ( (byte_4D30EB7 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&UIToggle_TypeInfo);
    byte_4D30EB7 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    v3 = UIToggle_TypeInfo;
    if ( !UIToggle_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
      v3 = UIToggle_TypeInfo;
    }
    current = (UnityEngine_Object_o *)v3->static_fields->current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(current, 0, 0) )
    {
      trigger = this->fields.trigger;
      if ( trigger != 7 )
      {
        if ( trigger == 8 )
        {
          v7 = UIToggle_TypeInfo;
          if ( !UIToggle_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
            v7 = UIToggle_TypeInfo;
          }
          v8 = v7->static_fields->current;
          if ( !v8 )
            goto LABEL_26;
          if ( UIToggle__get_value(v8, 0) )
            goto LABEL_22;
          trigger = this->fields.trigger;
        }
        if ( trigger != 9 )
          return;
        v9 = UIToggle_TypeInfo;
        if ( !UIToggle_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
          v9 = UIToggle_TypeInfo;
        }
        v8 = v9->static_fields->current;
        if ( !v8 )
LABEL_26:
          sub_1C942F0(v8, v5);
        if ( UIToggle__get_value(v8, 0) )
          return;
      }
LABEL_22:
      v10 = UIToggle_TypeInfo;
      if ( !UIToggle_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
        v10 = UIToggle_TypeInfo;
      }
      v8 = v10->static_fields->current;
      if ( v8 )
      {
        value = UIToggle__get_value(v8, 0);
        UIPlayAnimation__Play_49876480(this, value, (unsigned int)(this->fields.trigger - 1) < 2, v12);
        return;
      }
      goto LABEL_26;
    }
  }
}


void UIPlayAnimation__Play(UIPlayAnimation_o *this, bool forward, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  UIPlayAnimation__Play_49876480(this, forward, 1, v3);
}


void UIPlayAnimation__Play_49876480(
        UIPlayAnimation_o *this,
        bool forward,
        bool onlyIfDifferent,
        const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x22
  UnityEngine_Object_o *animator; // x22
  UnityEngine_Object_o *selectedObject; // x21
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Object_o *v11; // x21
  int playDirection; // w20
  ActiveAnimation_o *v13; // x0
  UnityEngine_Object_o *v14; // x20
  EventDelegate_o *v15; // x0
  __int64 v16; // x1
  struct System_Collections_Generic_List_EventDelegate__o *onFinished; // x8
  int v18; // w23
  System_Collections_Generic_List_EventDelegate__o *monitor; // x21
  EventDelegate_Callback_o *v20; // x22

  if ( (byte_4D30EBB & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_Callback_TypeInfo);
    sub_1C94098(&EventDelegate_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_EventDelegate__get_Count__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&UICamera_TypeInfo);
    sub_1C94098(&Method_UIPlayAnimation_OnFinished__);
    byte_4D30EBB = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit(target, 0) )
    goto LABEL_45;
  animator = (UnityEngine_Object_o *)this->fields.animator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      if ( !UICamera_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      selectedObject = (UnityEngine_Object_o *)UICamera__get_selectedObject(0);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(selectedObject, gameObject, 0) )
      {
        if ( !UICamera_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        UICamera__set_selectedObject(0, 0);
      }
    }
    v11 = (UnityEngine_Object_o *)this->fields.target;
    if ( forward )
      playDirection = this->fields.playDirection;
    else
      playDirection = -this->fields.playDirection;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit(v11, 0) )
      v13 = ActiveAnimation__Play_49939948(
              this->fields.target,
              this->fields.clipName,
              playDirection,
              this->fields.ifDisabledOnPlay,
              this->fields.disableWhenFinished,
              0);
    else
      v13 = ActiveAnimation__Play_49955896(
              this->fields.animator,
              this->fields.clipName,
              playDirection,
              this->fields.ifDisabledOnPlay,
              this->fields.disableWhenFinished,
              0);
    v14 = (UnityEngine_Object_o *)v13;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = (EventDelegate_o *)UnityEngine_Object__op_Inequality(v14, 0, 0);
    if ( ((unsigned __int8)v15 & 1) != 0 )
    {
      if ( this->fields.resetOnPlay )
      {
        if ( !v14 )
          goto LABEL_42;
        ActiveAnimation__Reset((ActiveAnimation_o *)v14, 0);
      }
      onFinished = this->fields.onFinished;
      if ( onFinished )
      {
        v18 = -1;
        while ( ++v18 < onFinished->fields._size )
        {
          if ( v14 )
          {
            monitor = (System_Collections_Generic_List_EventDelegate__o *)v14[1].monitor;
            v20 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(v20, (Il2CppObject *)this, Method_UIPlayAnimation_OnFinished__, 0);
            if ( !EventDelegate_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
            v15 = EventDelegate__Add_49969256(monitor, v20, 1, 0);
            onFinished = this->fields.onFinished;
            if ( onFinished )
              continue;
          }
          goto LABEL_42;
        }
        return;
      }
LABEL_42:
      sub_1C942F0(v15, v16);
    }
  }
}


void UIPlayAnimation__Start(UIPlayAnimation_o *this, const MethodInfo *method)
{
  struct UnityEngine_Animation_o **p_target; // x19
  UnityEngine_Object_o *target; // x21
  UnityEngine_Object_o *animator; // x22
  Il2CppObject *ComponentInChildren_object__51981160; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UnityEngine_Object_o *v13; // x21
  __int64 v14; // x1
  UnityEngine_Behaviour_o *v15; // x0
  UnityEngine_Object_o *v16; // x21
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UnityEngine_Object_o *v24; // x20

  if ( (byte_4D30EB1 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponentInChildren_Animation___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponentInChildren_Animator___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30EB1 = 1;
  }
  p_target = &this->fields.target;
  target = (UnityEngine_Object_o *)this->fields.target;
  this->fields.mStarted = 1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(target, 0, 0) )
  {
    animator = (UnityEngine_Object_o *)this->fields.animator;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(animator, 0, 0) )
    {
      ComponentInChildren_object__51981160 = UnityEngine_Component__GetComponentInChildren_object__51981160(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_3192B68 *)Method_UnityEngine_Component_GetComponentInChildren_Animator___);
      this->fields.animator = (struct UnityEngine_Animator_o *)ComponentInChildren_object__51981160;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.animator,
        (int32_t)ComponentInChildren_object__51981160,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
    }
  }
  v13 = (UnityEngine_Object_o *)this->fields.animator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v13, 0, 0) )
  {
    v15 = (UnityEngine_Behaviour_o *)this->fields.animator;
    if ( !v15 )
      goto LABEL_29;
    if ( UnityEngine_Behaviour__get_enabled(v15, 0) )
    {
      v15 = (UnityEngine_Behaviour_o *)this->fields.animator;
      if ( !v15 )
LABEL_29:
        sub_1C942F0(v15, v14);
      goto LABEL_27;
    }
  }
  else
  {
    v16 = (UnityEngine_Object_o *)*p_target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v16, 0, 0) )
    {
      v17 = UnityEngine_Component__GetComponentInChildren_object__51981160(
              (UnityEngine_Component_o *)this,
              (const MethodInfo_3192B68 *)Method_UnityEngine_Component_GetComponentInChildren_Animation___);
      this->fields.target = (struct UnityEngine_Animation_o *)v17;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.target, (int32_t)v17, v18, v19, v20, v21, v22, v23);
    }
    v24 = (UnityEngine_Object_o *)*p_target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v24, 0, 0) )
    {
      v15 = (UnityEngine_Behaviour_o *)*p_target;
      if ( !*p_target )
        goto LABEL_29;
      if ( UnityEngine_Behaviour__get_enabled(v15, 0) )
      {
        v15 = (UnityEngine_Behaviour_o *)*p_target;
        if ( !*p_target )
          goto LABEL_29;
LABEL_27:
        UnityEngine_Behaviour__set_enabled(v15, 0, 0);
      }
    }
  }
}


bool UIPlayAnimation__get_dualState(UIPlayAnimation_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.trigger - 1) < 2;
}