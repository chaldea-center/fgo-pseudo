void UISavedOption___ctor(UISavedOption_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UISavedOption__Awake(UISavedOption_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  Il2CppObject *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_593CD81 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIPopupList___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIProgressBar___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIToggle___);
    byte_593CD81 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPopupList___);
  this->fields.mList = (struct UIPopupList_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mList,
    (int32_t)Component_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIToggle___);
  this->fields.mCheck = (struct UIToggle_o *)v10;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mCheck, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIProgressBar___);
  this->fields.mSlider = (struct UIProgressBar_o *)v17;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mSlider, (int32_t)v17, v18, v19, v20, v21, v22, v23);
}


void UISavedOption__OnDisable(UISavedOption_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mCheck; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  const MethodInfo *v5; // x1
  struct UIToggle_o *v6; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  EventDelegate_Callback_o *v8; // x0
  const MethodInfo *v9; // x3
  intptr_t *v10; // x8
  UnityEngine_Object_o *mList; // x20
  struct UIPopupList_o *v12; // x8
  UnityEngine_Object_o *mSlider; // x20
  struct UIProgressBar_o *v14; // x8
  EventDelegate_Callback_o *v15; // x21
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  int max_length; // w8
  Il2CppObject **i; // x9
  Il2CppObject *v20; // x20
  __int64 v21; // x12
  System_String_o *key; // x19
  System_String_o *name; // x1

  if ( (byte_593CD83 & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_UIToggle___);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UISavedOption_SaveProgress__);
    sub_21FFC50(&Method_UISavedOption_SaveSelection__);
    sub_21FFC50(&Method_UISavedOption_SaveState__);
    byte_593CD83 = 1;
  }
  mCheck = (UnityEngine_Object_o *)this->fields.mCheck;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  ComponentsInChildren_object = (System_Object_array *)UnityEngine_Object__op_Inequality(mCheck, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
  {
    v6 = this->fields.mCheck;
    if ( v6 )
    {
      onChange = v6->fields.onChange;
      v8 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
      v10 = &Method_UISavedOption_SaveState__;
LABEL_18:
      v15 = v8;
      EventDelegate_Callback___ctor(v8, (Il2CppObject *)this, *v10, v9);
      if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v16);
      EventDelegate__Remove(onChange, v15, v17);
      return;
    }
    goto LABEL_32;
  }
  mList = (UnityEngine_Object_o *)this->fields.mList;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  ComponentsInChildren_object = (System_Object_array *)UnityEngine_Object__op_Inequality(mList, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
  {
    v12 = this->fields.mList;
    if ( v12 )
    {
      onChange = v12->fields.onChange;
      v8 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
      v10 = &Method_UISavedOption_SaveSelection__;
      goto LABEL_18;
    }
LABEL_32:
    sub_21FFECC(ComponentsInChildren_object, v5);
  }
  mSlider = (UnityEngine_Object_o *)this->fields.mSlider;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  ComponentsInChildren_object = (System_Object_array *)UnityEngine_Object__op_Inequality(mSlider, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
  {
    v14 = this->fields.mSlider;
    if ( v14 )
    {
      onChange = v14->fields.onChange;
      v8 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
      v10 = &Method_UISavedOption_SaveProgress__;
      goto LABEL_18;
    }
    goto LABEL_32;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_UIToggle___);
  if ( !ComponentsInChildren_object )
    goto LABEL_32;
  max_length = ComponentsInChildren_object->max_length;
  if ( max_length >= 1 )
  {
    for ( i = ComponentsInChildren_object->m_Items; ; ++i )
    {
      v20 = *i;
      if ( !*i )
        goto LABEL_32;
      v21 = BYTE2(v20[7].klass) ? 113LL : 56LL;
      if ( *((_BYTE *)&v20->klass + v21) )
        break;
      if ( !--max_length )
        return;
    }
    key = UISavedOption__get_key(this, v5);
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v20, 0);
    UnityEngine_PlayerPrefs__SetString(key, name, 0);
  }
}


void UISavedOption__OnEnable(UISavedOption_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mList; // x20
  UIPopupList_o *Int; // x0
  const MethodInfo *v5; // x1
  struct UIPopupList_o *v6; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  EventDelegate_Callback_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  System_String_o *key; // x0
  System_String_o *String_83184936; // x20
  UnityEngine_Object_o *mCheck; // x20
  struct UIToggle_o *v16; // x8
  System_Collections_Generic_List_EventDelegate__o *v17; // x20
  EventDelegate_Callback_o *v18; // x21
  const MethodInfo *v19; // x3
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  UIToggle_o *v22; // x20
  const MethodInfo *v23; // x1
  struct UIToggle_o *v24; // x8
  const MethodInfo *v25; // x2
  UnityEngine_Object_o *mSlider; // x20
  struct UIProgressBar_o *v27; // x8
  System_Collections_Generic_List_EventDelegate__o *v28; // x20
  EventDelegate_Callback_o *v29; // x21
  const MethodInfo *v30; // x3
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  UIProgressBar_o *v33; // x20
  const MethodInfo *v34; // x1
  UIProgressBar_o *v35; // x8
  System_String_o *v36; // x19
  float value; // s0
  float Float; // s0
  System_String_o *v39; // x0
  System_String_o *v40; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x22
  UIPopupList_o *v42; // x19
  __int64 v43; // x23
  UIToggle_o *v44; // x21
  System_String_o *name; // x0
  bool v46; // w0
  const MethodInfo *v47; // x2

  if ( (byte_593CD82 & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_UIToggle___);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UISavedOption_SaveProgress__);
    sub_21FFC50(&Method_UISavedOption_SaveSelection__);
    sub_21FFC50(&Method_UISavedOption_SaveState__);
    byte_593CD82 = 1;
  }
  mList = (UnityEngine_Object_o *)this->fields.mList;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Int = (UIPopupList_o *)UnityEngine_Object__op_Inequality(mList, 0, 0);
  if ( ((unsigned __int8)Int & 1) != 0 )
  {
    v6 = this->fields.mList;
    if ( !v6 )
      goto LABEL_37;
    onChange = v6->fields.onChange;
    v8 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(v8, (Il2CppObject *)this, Method_UISavedOption_SaveSelection__, v9);
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v10);
    EventDelegate__Add(onChange, v8, v11);
    key = UISavedOption__get_key(this, v12);
    String_83184936 = UnityEngine_PlayerPrefs__GetString_83184936(key, 0);
    if ( !System_String__IsNullOrEmpty(String_83184936, 0) )
    {
      Int = this->fields.mList;
      if ( Int )
      {
        UIPopupList__set_value(Int, String_83184936, 0);
        return;
      }
LABEL_37:
      sub_21FFECC(Int, v5);
    }
  }
  else
  {
    mCheck = (UnityEngine_Object_o *)this->fields.mCheck;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    Int = (UIPopupList_o *)UnityEngine_Object__op_Inequality(mCheck, 0, 0);
    if ( ((unsigned __int8)Int & 1) != 0 )
    {
      v16 = this->fields.mCheck;
      if ( !v16 )
        goto LABEL_37;
      v17 = v16->fields.onChange;
      v18 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
      EventDelegate_Callback___ctor(v18, (Il2CppObject *)this, Method_UISavedOption_SaveState__, v19);
      if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v20);
      EventDelegate__Add(v17, v18, v21);
      v22 = this->fields.mCheck;
      Int = (UIPopupList_o *)UISavedOption__get_key(this, v23);
      v24 = this->fields.mCheck;
      if ( !v24 )
        goto LABEL_37;
      Int = (UIPopupList_o *)UnityEngine_PlayerPrefs__GetInt((System_String_o *)Int, v24->fields.startsActive, 0);
      if ( !v22 )
        goto LABEL_37;
      UIToggle__set_value(v22, (_DWORD)Int != 0, v25);
    }
    else
    {
      mSlider = (UnityEngine_Object_o *)this->fields.mSlider;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
      Int = (UIPopupList_o *)UnityEngine_Object__op_Inequality(mSlider, 0, 0);
      if ( ((unsigned __int8)Int & 1) != 0 )
      {
        v27 = this->fields.mSlider;
        if ( !v27 )
          goto LABEL_37;
        v28 = v27->fields.onChange;
        v29 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(v29, (Il2CppObject *)this, Method_UISavedOption_SaveProgress__, v30);
        if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v31);
        EventDelegate__Add(v28, v29, v32);
        v33 = this->fields.mSlider;
        Int = (UIPopupList_o *)UISavedOption__get_key(this, v34);
        v35 = this->fields.mSlider;
        if ( !v35 )
          goto LABEL_37;
        v36 = (System_String_o *)Int;
        value = UIProgressBar__get_value(v35, 0);
        Float = UnityEngine_PlayerPrefs__GetFloat(v36, value, 0);
        if ( !v33 )
          goto LABEL_37;
        UIProgressBar__set_value(v33, Float, 0);
      }
      else
      {
        v39 = UISavedOption__get_key(this, v5);
        v40 = UnityEngine_PlayerPrefs__GetString_83184936(v39, 0);
        Int = (UIPopupList_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                 (UnityEngine_Component_o *)this,
                                 1,
                                 (const MethodInfo_37EE304 *)Method_UnityEngine_Component_GetComponentsInChildren_UIToggle___);
        if ( !Int )
          goto LABEL_37;
        m_CancellationTokenSource = Int->fields.m_CancellationTokenSource;
        v42 = Int;
        if ( (int)m_CancellationTokenSource >= 1 )
        {
          v43 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v43 >= LODWORD(v42->fields.m_CancellationTokenSource) )
              sub_21FFED4(Int);
            v44 = (UIToggle_o *)*((_QWORD *)&v42->fields.isAligument + v43);
            if ( !v44 )
              break;
            name = UnityEngine_Object__get_name(*((UnityEngine_Object_o **)&v42->fields.isAligument + v43), 0);
            v46 = System_String__op_Equality(name, v40, 0);
            UIToggle__set_value(v44, v46, v47);
            if ( (_DWORD)m_CancellationTokenSource == (_DWORD)++v43 )
              return;
          }
          goto LABEL_37;
        }
      }
    }
  }
}


void UISavedOption__SaveProgress(UISavedOption_o *this, const MethodInfo *method)
{
  System_String_o *key; // x0
  __int64 v4; // x1
  System_String_o *v5; // x19
  float value; // s0

  if ( (byte_593CD86 & 1) == 0 )
  {
    sub_21FFC50(&UIProgressBar_TypeInfo);
    byte_593CD86 = 1;
  }
  key = UISavedOption__get_key(this, method);
  if ( !UIProgressBar_TypeInfo->static_fields->current )
    sub_21FFECC(key, v4);
  v5 = key;
  value = UIProgressBar__get_value(UIProgressBar_TypeInfo->static_fields->current, 0);
  UnityEngine_PlayerPrefs__SetFloat(v5, value, 0);
}


void UISavedOption__SaveSelection(UISavedOption_o *this, const MethodInfo *method)
{
  System_String_o *key; // x0
  __int64 v4; // x1
  struct UIPopupList_o *current; // x8

  if ( (byte_593CD84 & 1) == 0 )
  {
    sub_21FFC50(&UIPopupList_TypeInfo);
    byte_593CD84 = 1;
  }
  key = UISavedOption__get_key(this, method);
  current = UIPopupList_TypeInfo->static_fields->current;
  if ( !current )
    sub_21FFECC(key, v4);
  UnityEngine_PlayerPrefs__SetString(key, current->fields.mSelectedItem, 0);
}


void UISavedOption__SaveState(UISavedOption_o *this, const MethodInfo *method)
{
  System_String_o *key; // x0
  __int64 v4; // x1
  UIToggle_c *v5; // x8
  System_String_o *v6; // x19
  struct UIToggle_o *current; // x8
  __int64 v8; // x9

  if ( (byte_593CD85 & 1) == 0 )
  {
    sub_21FFC50(&UIToggle_TypeInfo);
    byte_593CD85 = 1;
  }
  key = UISavedOption__get_key(this, method);
  v5 = UIToggle_TypeInfo;
  v6 = key;
  if ( !*(&UIToggle_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo, v4);
    v5 = UIToggle_TypeInfo;
  }
  current = v5->static_fields->current;
  if ( !current )
    sub_21FFECC(key, v4);
  v8 = 113;
  if ( !current->fields.mStarted )
    v8 = 56;
  UnityEngine_PlayerPrefs__SetInt(v6, *((unsigned __int8 *)&current->klass + v8), 0);
}


System_String_o *UISavedOption__get_key(UISavedOption_o *this, const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( (byte_593CD80 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9640/*"NGUI State: "*/);
    byte_593CD80 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.keyName, 0) )
    return this->fields.keyName;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  return System_String__Concat_75438412((System_String_o *)StringLiteral_9640/*"NGUI State: "*/, name, 0);
}