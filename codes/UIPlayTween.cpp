void UIPlayTween___ctor(UIPlayTween_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CCBB1C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_4CCBB1C = 1;
  }
  this->fields.playDirection = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onFinished = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onFinished, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIPlayTween__Awake(UIPlayTween_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventReceiver; // x21
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CCBB14 & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBB14 = 1;
  }
  eventReceiver = (UnityEngine_Object_o *)this->fields.eventReceiver;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventReceiver, 0, 0) )
  {
    onFinished = this->fields.onFinished;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    if ( EventDelegate__IsValid_49616128(onFinished, 0) )
    {
      this->fields.eventReceiver = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.eventReceiver, 0, v5, v6, v7, v8, v9, v10);
      this->fields.callWhenFinished = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callWhenFinished, 0, v11, v12, v13, v14, v15, v16);
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
  UnityEngine_Object_o *Component_object; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_EventDelegate__o *m_CachedPtr; // x20
  EventDelegate_Callback_o *v7; // x21

  if ( (byte_4CCBB17 & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_Callback_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIToggle___);
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_UIPlayTween_OnToggle__);
    byte_4CCBB17 = 1;
  }
  Component_object = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIToggle___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( v4 )
  {
    if ( !Component_object )
      sub_1C71608(v4, v5);
    m_CachedPtr = (System_Collections_Generic_List_EventDelegate__o *)Component_object[2].fields.m_CachedPtr;
    v7 = (EventDelegate_Callback_o *)sub_1C715FC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v7, (Il2CppObject *)this, Method_UIPlayTween_OnToggle__, 0);
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Remove(m_CachedPtr, v7, 0);
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

  if ( (byte_4CCBB16 & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_Callback_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIToggle___);
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    sub_1C713B0(&Method_UIPlayTween_OnToggle__);
    byte_4CCBB16 = 1;
  }
  if ( this->fields.mStarted )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UICamera_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    IsHighlighted = UICamera__IsHighlighted(gameObject, 0);
    UIPlayTween__OnHover(this, IsHighlighted, v5);
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
                                               (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIToggle___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (UICamera_c *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    if ( Component_object )
    {
      m_CachedPtr = (System_Collections_Generic_List_EventDelegate__o *)Component_object[2].fields.m_CachedPtr;
      v18 = (EventDelegate_Callback_o *)sub_1C715FC(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(v18, (Il2CppObject *)this, Method_UIPlayTween_OnToggle__, 0);
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Add(m_CachedPtr, v18, 0);
      return;
    }
LABEL_32:
    sub_1C71608(v9, method);
  }
}


void UIPlayTween__OnFinished(UIPlayTween_o *this, const MethodInfo *method)
{
  int32_t v3; // w8
  UnityEngine_Object_o *current; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  UnityEngine_GameObject_o **p_eventReceiver; // x20
  UnityEngine_Object_o *eventReceiver; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  if ( (byte_4CCBB1B & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIPlayTween_TypeInfo);
    byte_4CCBB1B = 1;
  }
  v3 = this->fields.mActive - 1;
  this->fields.mActive = v3;
  if ( !v3 )
  {
    current = (UnityEngine_Object_o *)UIPlayTween_TypeInfo->static_fields->current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(current, 0, 0) )
    {
      UIPlayTween_TypeInfo->static_fields->current = this;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)UIPlayTween_TypeInfo->static_fields,
        (int32_t)this,
        v5,
        v6,
        v7,
        v8,
        v9,
        v10);
      onFinished = this->fields.onFinished;
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Execute_49587556(onFinished, 0);
      p_eventReceiver = &this->fields.eventReceiver;
      eventReceiver = (UnityEngine_Object_o *)this->fields.eventReceiver;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(eventReceiver, 0, 0)
        && !System_String__IsNullOrEmpty(this->fields.callWhenFinished, 0) )
      {
        if ( !*p_eventReceiver )
          sub_1C71608(0, v20);
        UnityEngine_GameObject__SendMessage(*p_eventReceiver, this->fields.callWhenFinished, 1, 0);
      }
      *p_eventReceiver = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.eventReceiver, 0, v14, v15, v16, v17, v18, v19);
      UIPlayTween_TypeInfo->static_fields->current = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)UIPlayTween_TypeInfo->static_fields, 0, v21, v22, v23, v24, v25, v26);
    }
  }
}


void UIPlayTween__OnHover(UIPlayTween_o *this, bool isOver, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t trigger; // w8

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    trigger = this->fields.trigger;
    if ( trigger == 1 || trigger == 3 && isOver || trigger == 4 && !isOver )
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

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    trigger = this->fields.trigger;
    if ( trigger == 2 || trigger == 5 && isPressed || trigger == 6 && !isPressed )
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

  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    trigger = this->fields.trigger;
    if ( trigger == 11 || trigger == 12 && isSelected || trigger == 13 && !isSelected )
    {
      this->fields.mActivated = trigger == 11 && isSelected;
      UIPlayTween__Play(this, isSelected, v5);
    }
  }
}


void UIPlayTween__OnToggle(UIPlayTween_o *this, const MethodInfo *method)
{
  UIToggle_c *v3; // x0
  UnityEngine_Object_o *current; // x20
  __int64 v5; // x1
  int32_t trigger; // w8
  UIToggle_c *v7; // x0
  UIToggle_o *v8; // x0
  UIToggle_c *v9; // x0
  UIToggle_c *v10; // x0
  bool value; // w1
  const MethodInfo *v12; // x2

  if ( (byte_4CCBB18 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIToggle_TypeInfo);
    byte_4CCBB18 = 1;
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
          sub_1C71608(v8, v5);
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
        UIPlayTween__Play(this, value, v12);
        return;
      }
      goto LABEL_26;
    }
  }
}


void UIPlayTween__Play(UIPlayTween_o *this, bool forward, const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x20
  UnityEngine_GameObject_o *gameObject; // x20
  _BOOL8 Active_49712152; // x0
  __int64 v8; // x1
  struct UITweener_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct UITweener_array **p_mTweens; // x21
  struct UITweener_array *mTweens; // x8
  il2cpp_array_size_t max_length; // x26
  unsigned int v19; // w27
  char v20; // w25
  char v21; // w28
  UITweener_o *v22; // x22
  int32_t playDirection; // w9
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x23
  EventDelegate_Callback_o *v25; // x24
  System_Collections_Generic_List_EventDelegate__o *v26; // x23
  EventDelegate_Callback_o *v27; // x24
  UnityEngine_GameObject_o *v28; // x19

  if ( (byte_4CCBB1A & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_Callback_TypeInfo);
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponents_UITweener___);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_UIPlayTween_OnFinished__);
    byte_4CCBB1A = 1;
  }
  this->fields.mActive = 0;
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(tweenTarget, 0, 0) )
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  else
    gameObject = this->fields.tweenTarget;
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  Active_49712152 = NGUITools__GetActive_49712152(gameObject, 0);
  if ( !Active_49712152 )
  {
    if ( this->fields.ifDisabledOnPlay != 1 )
      return;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetActive(gameObject, 1, 0);
  }
  if ( !gameObject )
    goto LABEL_55;
  v9 = (struct UITweener_array *)(this->fields.includeChildren
                                ? UnityEngine_GameObject__GetComponentsInChildren_object__52050676(
                                    gameObject,
                                    (const MethodInfo_31A3AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener___)
                                : UnityEngine_GameObject__GetComponents_object_(
                                    gameObject,
                                    (const MethodInfo_31A382C *)Method_UnityEngine_GameObject_GetComponents_UITweener___));
  this->fields.mTweens = v9;
  p_mTweens = &this->fields.mTweens;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mTweens, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  mTweens = this->fields.mTweens;
  if ( !mTweens )
    goto LABEL_55;
  max_length = mTweens->max_length;
  if ( max_length )
  {
    if ( (int)max_length >= 1 )
    {
      v19 = 0;
      v20 = 0;
      v21 = (this->fields.playDirection == -1) ^ forward;
      do
      {
        if ( v19 >= LODWORD(mTweens->max_length) )
          sub_1C71610(Active_49712152);
        v22 = mTweens->m_Items[v19];
        if ( !v22 )
          break;
        if ( v22->fields.tweenGroup == this->fields.tweenGroup )
        {
          if ( (v20 & 1) != 0 )
          {
            v20 = 1;
          }
          else
          {
            if ( !NGUITools_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
            if ( NGUITools__GetActive_49712152(gameObject, 0) )
            {
              v20 = 0;
            }
            else
            {
              if ( !NGUITools_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
              v20 = 1;
              NGUITools__SetActive(gameObject, 1, 0);
            }
          }
          playDirection = this->fields.playDirection;
          ++this->fields.mActive;
          if ( playDirection )
          {
            if ( this->fields.resetOnPlay
              || this->fields.resetIfDisabled && !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v22, 0) )
            {
              UITweener__Play_49819504(v22, v21 & 1, 0);
              UITweener__ResetToBeginning(v22, 0);
            }
            onFinished = v22->fields.onFinished;
            v25 = (EventDelegate_Callback_o *)sub_1C715FC(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(v25, (Il2CppObject *)this, Method_UIPlayTween_OnFinished__, 0);
            if ( !EventDelegate_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
            EventDelegate__Add_49645664(onFinished, v25, 1, 0);
            UITweener__Play_49819504(v22, v21 & 1, 0);
          }
          else
          {
            v26 = v22->fields.onFinished;
            v27 = (EventDelegate_Callback_o *)sub_1C715FC(EventDelegate_Callback_TypeInfo);
            EventDelegate_Callback___ctor(v27, (Il2CppObject *)this, Method_UIPlayTween_OnFinished__, 0);
            if ( !EventDelegate_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
            EventDelegate__Add_49645664(v26, v27, 1, 0);
            UITweener__Toggle(v22, 0);
          }
        }
        if ( (_DWORD)max_length == ++v19 )
          return;
        mTweens = *p_mTweens;
      }
      while ( *p_mTweens );
LABEL_55:
      sub_1C71608(Active_49712152, v8);
    }
  }
  else if ( this->fields.disableWhenFinished )
  {
    v28 = this->fields.tweenTarget;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetActive(v28, 0, 0);
  }
}


void UIPlayTween__Start(UIPlayTween_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *tweenTarget; // x21
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CCBB15 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBB15 = 1;
  }
  tweenTarget = (UnityEngine_Object_o *)this->fields.tweenTarget;
  this->fields.mStarted = 1;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(tweenTarget, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this->fields.tweenTarget = gameObject;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.tweenTarget, (int32_t)gameObject, v5, v6, v7, v8, v9, v10);
  }
}


void UIPlayTween__Update(UIPlayTween_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UIPlayTween_o *v8; // x20
  _DWORD *mTweens; // x8
  GrandQuestFolderBoardItem_o *p_mTweens; // x19
  int v11; // w22
  unsigned int v12; // w24
  char v13; // w23
  __int64 v14; // x21
  UnityEngine_GameObject_o *tweenTarget; // x20

  v8 = this;
  if ( (byte_4CCBB19 & 1) == 0 )
  {
    this = (UIPlayTween_o *)sub_1C713B0(&NGUITools_TypeInfo);
    byte_4CCBB19 = 1;
  }
  if ( v8->fields.disableWhenFinished )
  {
    p_mTweens = (GrandQuestFolderBoardItem_o *)&v8->fields.mTweens;
    mTweens = v8->fields.mTweens;
    if ( mTweens )
    {
      v11 = mTweens[6];
      if ( v11 < 1 )
        goto LABEL_17;
      v12 = 0;
      v13 = 1;
      while ( 1 )
      {
        if ( v12 >= mTweens[6] )
          sub_1C71610(this);
        v14 = *(_QWORD *)&mTweens[2 * v12 + 8];
        if ( !v14 )
LABEL_14:
          sub_1C71608(this, method);
        if ( *(_DWORD *)(v14 + 64) == v8->fields.tweenGroup )
        {
          if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v14, 0) )
            return;
          this = (UIPlayTween_o *)UITweener__get_direction((UITweener_o *)v14, 0);
          v13 &= (_DWORD)this == v8->fields.disableWhenFinished;
        }
        if ( v11 == ++v12 )
          break;
        mTweens = p_mTweens->klass;
        if ( !p_mTweens->klass )
          goto LABEL_14;
      }
      if ( (v13 & 1) != 0 )
      {
LABEL_17:
        tweenTarget = v8->fields.tweenTarget;
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        NGUITools__SetActive(tweenTarget, 0, 0);
      }
      p_mTweens->klass = 0;
      sub_1C71354(p_mTweens, 0, v2, v3, v4, v5, v6, v7);
    }
  }
}