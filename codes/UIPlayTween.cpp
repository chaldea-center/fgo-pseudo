void UIPlayTween___ctor(UIPlayTween_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventDelegate__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_593CD54 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_593CD54 = 1;
  }
  v3 = System_Collections_Generic_List_EventDelegate__TypeInfo;
  this->fields.playDirection = 1;
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onFinished = (struct System_Collections_Generic_List_EventDelegate__o *)v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onFinished, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIPlayTween__Awake(UIPlayTween_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventReceiver; // x21
  __int64 v4; // x1
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_593CD4C & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CD4C = 1;
  }
  eventReceiver = (UnityEngine_Object_o *)this->fields.eventReceiver;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(eventReceiver, 0, 0) )
  {
    onFinished = this->fields.onFinished;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v4);
    if ( EventDelegate__IsValid_56108212(onFinished, 0) )
    {
      this->fields.eventReceiver = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.eventReceiver, 0, v6, v7, v8, v9, v10, v11);
      this->fields.callWhenFinished = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callWhenFinished, 0, v12, v13, v14, v15, v16, v17);
    }
  }
}


void UIPlayTween__OnClick(UIPlayTween_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) && !this->fields.trigger )
    UIPlayTween__Play(this, 1, v3);
}


void UIPlayTween__OnDisable(UIPlayTween_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *Component_object; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_EventDelegate__o *m_CachedPtr; // x20
  EventDelegate_Callback_o *v8; // x21
  __int64 v9; // x1

  if ( (byte_593CD4F & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIToggle___);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UIPlayTween_OnToggle__);
    byte_593CD4F = 1;
  }
  Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIToggle___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  v5 = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( v5 )
  {
    if ( !Component_object )
      sub_21FFECC(v5, v6);
    m_CachedPtr = (System_Collections_Generic_List_EventDelegate__o *)Component_object[2].fields.m_CachedPtr;
    v8 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v8, (Il2CppObject *)this, Method_UIPlayTween_OnToggle__, 0);
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v9);
    EventDelegate__Remove(m_CachedPtr, v8, 0);
  }
}


void UIPlayTween__OnDoubleClick(UIPlayTween_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) && this->fields.trigger == 10 )
    UIPlayTween__Play(this, 1, v3);
}


void UIPlayTween__OnDragOut(UIPlayTween_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) && this->fields.mActivated )
  {
    this->fields.mActivated = 0;
    UIPlayTween__Play(this, 0, v3);
  }
}


void UIPlayTween__OnDragOver(UIPlayTween_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.trigger == 1 )
    UIPlayTween__OnHover(this, 1, v2);
}


void UIPlayTween__OnEnable(UIPlayTween_o *this, const MethodInfo *method)
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

  if ( (byte_593CD4E & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIToggle___);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    sub_21FFC50(&Method_UIPlayTween_OnToggle__);
    byte_593CD4E = 1;
  }
  if ( this->fields.mStarted )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v3);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0);
    UIPlayTween__OnHover(this, IsHighlighted, v6);
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
                                               (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIToggle___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  v10 = (UICamera_c *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    if ( Component_object )
    {
      m_CachedPtr = (System_Collections_Generic_List_EventDelegate__o *)Component_object[2].fields.m_CachedPtr;
      v22 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(v22, (Il2CppObject *)this, Method_UIPlayTween_OnToggle__, 0);
      if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v23);
      EventDelegate__Add(m_CachedPtr, v22, 0);
      return;
    }
LABEL_32:
    sub_21FFECC(v10, method);
  }
}


void UIPlayTween__OnFinished(UIPlayTween_o *this, const MethodInfo *method)
{
  int32_t v3; // w8
  UnityEngine_Object_o *current; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  __int64 v13; // x1
  UnityEngine_GameObject_o **p_eventReceiver; // x20
  UnityEngine_Object_o *eventReceiver; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_593CD53 & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIPlayTween_TypeInfo);
    byte_593CD53 = 1;
  }
  v3 = this->fields.mActive - 1;
  this->fields.mActive = v3;
  if ( !v3 )
  {
    current = (UnityEngine_Object_o *)UIPlayTween_TypeInfo->static_fields->current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Equality(current, 0, 0) )
    {
      UIPlayTween_TypeInfo->static_fields->current = this;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)UIPlayTween_TypeInfo->static_fields,
        (int32_t)this,
        v5,
        v6,
        v7,
        v8,
        v9,
        v10);
      onFinished = this->fields.onFinished;
      if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v11);
      EventDelegate__Execute_56080488(onFinished, 0);
      p_eventReceiver = &this->fields.eventReceiver;
      eventReceiver = (UnityEngine_Object_o *)this->fields.eventReceiver;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      if ( UnityEngine_Object__op_Inequality(eventReceiver, 0, 0)
        && !System_String__IsNullOrEmpty(this->fields.callWhenFinished, 0) )
      {
        if ( !*p_eventReceiver )
          sub_21FFECC(0, v22);
        UnityEngine_GameObject__SendMessage(*p_eventReceiver, this->fields.callWhenFinished, 1, 0);
      }
      *p_eventReceiver = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.eventReceiver, 0, v16, v17, v18, v19, v20, v21);
      UIPlayTween_TypeInfo->static_fields->current = 0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)UIPlayTween_TypeInfo->static_fields,
        0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
  }
}


void UIPlayTween__OnHover(UIPlayTween_o *this, bool isOver, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t trigger; // w8
  _BOOL4 v7; // w9

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    trigger = this->fields.trigger;
    v7 = trigger == 3 && isOver;
    if ( trigger == 1 )
      v7 = 1;
    if ( v7 == (trigger != 4 || isOver) )
    {
      this->fields.mActivated = trigger == 1 && isOver;
      UIPlayTween__Play(this, isOver, v5);
    }
  }
}


void UIPlayTween__OnPress(UIPlayTween_o *this, bool isPressed, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t trigger; // w8
  _BOOL4 v7; // w9

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    trigger = this->fields.trigger;
    v7 = trigger == 5 && isPressed;
    if ( trigger == 2 )
      v7 = 1;
    if ( v7 == (trigger != 6 || isPressed) )
    {
      this->fields.mActivated = trigger == 2 && isPressed;
      UIPlayTween__Play(this, isPressed, v5);
    }
  }
}


void UIPlayTween__OnSelect(UIPlayTween_o *this, bool isSelected, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t trigger; // w8
  _BOOL4 v7; // w9

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    trigger = this->fields.trigger;
    v7 = trigger == 12 && isSelected;
    if ( trigger == 11 )
      v7 = 1;
    if ( v7 == (trigger != 13 || isSelected) )
    {
      this->fields.mActivated = trigger == 11 && isSelected;
      UIPlayTween__Play(this, isSelected, v5);
    }
  }
}


void UIPlayTween__OnToggle(UIPlayTween_o *this, const MethodInfo *method)
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
  bool value; // w8
  const MethodInfo *v13; // x2

  if ( (byte_593CD50 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIToggle_TypeInfo);
    byte_593CD50 = 1;
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
          sub_21FFECC(v9, v6);
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
        UIPlayTween__Play(this, value, v13);
        return;
      }
      goto LABEL_26;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIPlayTween__Play(UIPlayTween_o *this, bool forward, const MethodInfo *method)
{
  UnityEngine_Object_c *v5; // x0
  UnityEngine_Object_o *tweenTarget; // x20
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  _BOOL8 Active_56206348; // x0
  __int64 v10; // x1
  System_Object_array *ComponentsInChildren_object__59262092; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct UITweener_array **p_mTweens; // x21
  il2cpp_array_size_t max_length; // x26
  __int64 v20; // x27
  char v21; // w29
  char v22; // w28
  struct UITweener_array *v23; // x8
  UITweener_o *v24; // x22
  __int64 v25; // x1
  int32_t playDirection; // w9
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x23
  EventDelegate_Callback_o *v28; // x24
  __int64 v29; // x1
  System_Collections_Generic_List_EventDelegate__o *v30; // x23
  EventDelegate_Callback_o *v31; // x24
  __int64 v32; // x1
  UnityEngine_GameObject_o *v33; // x19

  if ( (byte_593CD52 & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponents_UITweener___);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UIPlayTween_OnFinished__);
    byte_593CD52 = 1;
  }
  v5 = UnityEngine_Object_TypeInfo;
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  this->fields.mActive = 0;
  if ( !*(&v5->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v5, forward);
  if ( UnityEngine_Object__op_Equality(tweenTarget, 0, 0) )
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  else
    gameObject = this->fields.tweenTarget;
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7);
  Active_56206348 = NGUITools__GetActive_56206348(gameObject, 0);
  if ( !Active_56206348 )
  {
    if ( this->fields.ifDisabledOnPlay != 1 )
      return;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v10);
    NGUITools__SetActive(gameObject, 1, 0);
  }
  if ( this->fields.includeChildren )
  {
    if ( !gameObject )
      goto LABEL_56;
    ComponentsInChildren_object__59262092 = UnityEngine_GameObject__GetComponentsInChildren_object__59262092(
                                              gameObject,
                                              (const MethodInfo_388448C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener___);
  }
  else
  {
    if ( !gameObject )
      goto LABEL_56;
    ComponentsInChildren_object__59262092 = UnityEngine_GameObject__GetComponents_object_(
                                              gameObject,
                                              (const MethodInfo_388420C *)Method_UnityEngine_GameObject_GetComponents_UITweener___);
  }
  this->fields.mTweens = (struct UITweener_array *)ComponentsInChildren_object__59262092;
  p_mTweens = &this->fields.mTweens;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mTweens,
    (int32_t)ComponentsInChildren_object__59262092,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !this->fields.mTweens )
LABEL_56:
    sub_21FFECC(Active_56206348, v10);
  max_length = this->fields.mTweens->max_length;
  if ( max_length )
  {
    if ( (int)max_length >= 1 )
    {
      v20 = 0;
      v21 = 0;
      v22 = (this->fields.playDirection == -1) ^ forward;
      while ( 1 )
      {
        v23 = *p_mTweens;
        if ( !*p_mTweens )
          break;
        if ( (unsigned int)v20 >= LODWORD(v23->max_length) )
          sub_21FFED4(Active_56206348);
        v24 = v23->m_Items[v20];
        if ( !v24 )
          break;
        if ( v24->fields.tweenGroup == this->fields.tweenGroup )
        {
          if ( (v21 & 1) != 0 )
          {
            v21 = 1;
          }
          else
          {
            if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v10);
            if ( NGUITools__GetActive_56206348(gameObject, 0) )
            {
              v21 = 0;
            }
            else
            {
              if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v25);
              v21 = 1;
              NGUITools__SetActive(gameObject, 1, 0);
            }
          }
          playDirection = this->fields.playDirection;
          ++this->fields.mActive;
          if ( playDirection )
          {
            if ( this->fields.resetOnPlay
              || this->fields.resetIfDisabled && !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v24, 0) )
            {
              UITweener__Play_56313484(v24, v22 & 1, 0);
              UITweener__ResetToBeginning(v24, 0);
            }
            onFinished = v24->fields.onFinished;
            v28 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(v28, (Il2CppObject *)this, Method_UIPlayTween_OnFinished__, 0);
            if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v29);
            EventDelegate__Add_56137100(onFinished, v28, 1, 0);
            UITweener__Play_56313484(v24, v22 & 1, 0);
          }
          else
          {
            v30 = v24->fields.onFinished;
            v31 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(v31, (Il2CppObject *)this, Method_UIPlayTween_OnFinished__, 0);
            if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v32);
            EventDelegate__Add_56137100(v30, v31, 1, 0);
            UITweener__Toggle(v24, 0);
          }
        }
        if ( (_DWORD)max_length == (_DWORD)++v20 )
          return;
      }
      goto LABEL_56;
    }
  }
  else if ( this->fields.disableWhenFinished )
  {
    v33 = this->fields.tweenTarget;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v10);
    NGUITools__SetActive(v33, 0, 0);
  }
}


void UIPlayTween__Start(UIPlayTween_o *this, const MethodInfo *method)
{
  UnityEngine_Object_c *v3; // x0
  UnityEngine_Object_o *tweenTarget; // x21
  struct UnityEngine_GameObject_o *gameObject; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_593CD4D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CD4D = 1;
  }
  v3 = UnityEngine_Object_TypeInfo;
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  this->fields.mStarted = 1;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( UnityEngine_Object__op_Equality(tweenTarget, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this->fields.tweenTarget = gameObject;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tweenTarget,
      (int32_t)gameObject,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
}


void UIPlayTween__Update(UIPlayTween_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UIPlayTween_o *v8; // x20
  struct UITweener_array *mTweens; // x8
  MissionNaviTransitionBoardItem_o *p_mTweens; // x19
  il2cpp_array_size_t max_length; // x22
  __int64 v12; // x23
  char v13; // w24
  MissionNaviTransitionBoardItem_c *klass; // x8
  __int64 v15; // x21
  UnityEngine_GameObject_o *tweenTarget; // x20

  v8 = this;
  if ( (byte_593CD51 & 1) == 0 )
  {
    this = (UIPlayTween_o *)sub_21FFC50(&NGUITools_TypeInfo);
    byte_593CD51 = 1;
  }
  if ( v8->fields.disableWhenFinished )
  {
    p_mTweens = (MissionNaviTransitionBoardItem_o *)&v8->fields.mTweens;
    mTweens = v8->fields.mTweens;
    if ( mTweens )
    {
      max_length = mTweens->max_length;
      if ( (int)max_length < 1 )
        goto LABEL_15;
      v12 = 0;
      v13 = 1;
      do
      {
        klass = p_mTweens->klass;
        if ( !p_mTweens->klass )
          goto LABEL_20;
        if ( (unsigned int)v12 >= LODWORD(klass->_1.namespaze) )
          sub_21FFED4(this);
        v15 = *((_QWORD *)&klass->_1.byval_arg.data + v12);
        if ( !v15 )
LABEL_20:
          sub_21FFECC(this, method);
        if ( *(_DWORD *)(v15 + 64) == v8->fields.tweenGroup )
        {
          if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v15, 0) )
            return;
          this = (UIPlayTween_o *)UITweener__get_direction((UITweener_o *)v15, 0);
          v13 &= (_DWORD)this == v8->fields.disableWhenFinished;
        }
        ++v12;
      }
      while ( (_DWORD)max_length != (_DWORD)v12 );
      if ( (v13 & 1) != 0 )
      {
LABEL_15:
        tweenTarget = v8->fields.tweenTarget;
        if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
        NGUITools__SetActive(tweenTarget, 0, 0);
      }
      p_mTweens->klass = 0;
      sub_21FFBF4(p_mTweens, 0, v2, v3, v4, v5, v6, v7);
    }
  }
}