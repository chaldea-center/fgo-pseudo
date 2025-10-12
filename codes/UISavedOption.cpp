void UISavedOption___ctor(UISavedOption_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UISavedOption__Awake(UISavedOption_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3C0A1 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIPopupList___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIProgressBar___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIToggle___);
    byte_4C3C0A1 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIPopupList___);
  this->fields.mList = (struct UIPopupList_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mList, (int32_t)Component_object, v4, v5);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIToggle___);
  this->fields.mCheck = (struct UIToggle_o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mCheck, (int32_t)v6, v7, v8);
  v9 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIProgressBar___);
  this->fields.mSlider = (struct UIProgressBar_o *)v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mSlider, (int32_t)v9, v10, v11);
}


void UISavedOption__OnDisable(UISavedOption_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mCheck; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  struct UIToggle_o *v5; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  EventDelegate_Callback_o *v7; // x0
  const MethodInfo *v8; // x3
  intptr_t *v9; // x8
  UnityEngine_Object_o *mList; // x20
  struct UIPopupList_o *v11; // x8
  UnityEngine_Object_o *mSlider; // x20
  struct UIProgressBar_o *v13; // x8
  EventDelegate_Callback_o *v14; // x21
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  int max_length; // w8
  int v18; // w9
  Il2CppObject *v19; // x20
  __int64 v20; // x12
  System_String_o *key; // x19
  System_String_o *name; // x1

  if ( (byte_4C3C0A3 & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_UIToggle___);
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_UISavedOption_SaveProgress__);
    sub_1C32C20(&Method_UISavedOption_SaveSelection__);
    sub_1C32C20(&Method_UISavedOption_SaveState__);
    byte_4C3C0A3 = 1;
  }
  mCheck = (UnityEngine_Object_o *)this->fields.mCheck;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object = (System_Object_array *)UnityEngine_Object__op_Inequality(mCheck, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
  {
    v5 = this->fields.mCheck;
    if ( v5 )
    {
      onChange = v5->fields.onChange;
      v7 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
      v9 = &Method_UISavedOption_SaveState__;
LABEL_18:
      v14 = v7;
      EventDelegate_Callback___ctor(v7, (Il2CppObject *)this, *v9, v8);
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Remove(onChange, v14, v15);
      return;
    }
    goto LABEL_32;
  }
  mList = (UnityEngine_Object_o *)this->fields.mList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object = (System_Object_array *)UnityEngine_Object__op_Inequality(mList, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
  {
    v11 = this->fields.mList;
    if ( v11 )
    {
      onChange = v11->fields.onChange;
      v7 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
      v9 = &Method_UISavedOption_SaveSelection__;
      goto LABEL_18;
    }
LABEL_32:
    sub_1C32E7C(ComponentsInChildren_object);
  }
  mSlider = (UnityEngine_Object_o *)this->fields.mSlider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object = (System_Object_array *)UnityEngine_Object__op_Inequality(mSlider, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
  {
    v13 = this->fields.mSlider;
    if ( v13 )
    {
      onChange = v13->fields.onChange;
      v7 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
      v9 = &Method_UISavedOption_SaveProgress__;
      goto LABEL_18;
    }
    goto LABEL_32;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_UIToggle___);
  if ( !ComponentsInChildren_object )
    goto LABEL_32;
  max_length = ComponentsInChildren_object->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      v19 = ComponentsInChildren_object->m_Items[v18];
      if ( !v19 )
        goto LABEL_32;
      v20 = BYTE2(v19[7].klass) ? 113LL : 56LL;
      if ( *((_BYTE *)&v19->klass + v20) )
        break;
      if ( max_length == ++v18 )
        return;
    }
    key = UISavedOption__get_key(this, v16);
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v19, 0);
    UnityEngine_PlayerPrefs__SetString(key, name, 0);
  }
}


void UISavedOption__OnEnable(UISavedOption_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mList; // x20
  System_String_o *key; // x0
  struct UIPopupList_o *v5; // x8
  System_Collections_Generic_List_EventDelegate__o *v6; // x20
  EventDelegate_Callback_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  System_String_o *v11; // x0
  System_String_o *v12; // x20
  UnityEngine_Object_o *mCheck; // x20
  struct UIToggle_o *v14; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  EventDelegate_Callback_o *v16; // x21
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  UIToggle_o *v19; // x20
  const MethodInfo *v20; // x1
  struct UIToggle_o *v21; // x8
  const MethodInfo *v22; // x2
  UnityEngine_Object_o *mSlider; // x20
  const MethodInfo *v24; // x1
  struct UIProgressBar_o *v25; // x8
  System_Collections_Generic_List_EventDelegate__o *v26; // x20
  EventDelegate_Callback_o *v27; // x21
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x2
  UIProgressBar_o *v30; // x20
  const MethodInfo *v31; // x1
  UIProgressBar_o *v32; // x8
  System_String_o *v33; // x19
  float value; // s0
  float Float; // s0
  System_String_o *v36; // x0
  System_String_o *String_71182452; // x20
  System_String_c *klass; // x8
  System_String_o *v39; // x19
  int v40; // w22
  int v41; // w23
  System_String_c **v42; // x8
  UIToggle_o *v43; // x21
  System_String_o *name; // x0
  bool v45; // w0
  const MethodInfo *v46; // x2

  if ( (byte_4C3C0A2 & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentsInChildren_UIToggle___);
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_UISavedOption_SaveProgress__);
    sub_1C32C20(&Method_UISavedOption_SaveSelection__);
    sub_1C32C20(&Method_UISavedOption_SaveState__);
    byte_4C3C0A2 = 1;
  }
  mList = (UnityEngine_Object_o *)this->fields.mList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  key = (System_String_o *)UnityEngine_Object__op_Inequality(mList, 0, 0);
  if ( ((unsigned __int8)key & 1) == 0 )
  {
    mCheck = (UnityEngine_Object_o *)this->fields.mCheck;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    key = (System_String_o *)UnityEngine_Object__op_Inequality(mCheck, 0, 0);
    if ( ((unsigned __int8)key & 1) != 0 )
    {
      v14 = this->fields.mCheck;
      if ( v14 )
      {
        onChange = v14->fields.onChange;
        v16 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(v16, (Il2CppObject *)this, Method_UISavedOption_SaveState__, v17);
        if ( !EventDelegate_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
        EventDelegate__Add(onChange, v16, v18);
        v19 = this->fields.mCheck;
        key = UISavedOption__get_key(this, v20);
        v21 = this->fields.mCheck;
        if ( v21 )
        {
          key = (System_String_o *)UnityEngine_PlayerPrefs__GetInt(key, v21->fields.startsActive, 0);
          if ( v19 )
          {
            UIToggle__set_value(v19, (_DWORD)key != 0, v22);
            return;
          }
        }
      }
    }
    else
    {
      mSlider = (UnityEngine_Object_o *)this->fields.mSlider;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      key = (System_String_o *)UnityEngine_Object__op_Inequality(mSlider, 0, 0);
      if ( ((unsigned __int8)key & 1) != 0 )
      {
        v25 = this->fields.mSlider;
        if ( v25 )
        {
          v26 = v25->fields.onChange;
          v27 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
          EventDelegate_Callback___ctor(v27, (Il2CppObject *)this, Method_UISavedOption_SaveProgress__, v28);
          if ( !EventDelegate_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
          EventDelegate__Add(v26, v27, v29);
          v30 = this->fields.mSlider;
          key = UISavedOption__get_key(this, v31);
          v32 = this->fields.mSlider;
          if ( v32 )
          {
            v33 = key;
            value = UIProgressBar__get_value(v32, 0);
            Float = UnityEngine_PlayerPrefs__GetFloat(v33, value, 0);
            if ( v30 )
            {
              UIProgressBar__set_value(v30, Float, 0);
              return;
            }
          }
        }
      }
      else
      {
        v36 = UISavedOption__get_key(this, v24);
        String_71182452 = UnityEngine_PlayerPrefs__GetString_71182452(v36, 0);
        key = (System_String_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                   (UnityEngine_Component_o *)this,
                                   1,
                                   (const MethodInfo_30D48E4 *)Method_UnityEngine_Component_GetComponentsInChildren_UIToggle___);
        if ( key )
        {
          klass = key[1].klass;
          v39 = key;
          v40 = (_DWORD)klass - 1;
          if ( (int)klass < 1 )
            return;
          v41 = 0;
          while ( 1 )
          {
            v42 = &v39->klass + v41;
            v43 = (UIToggle_o *)v42[4];
            if ( !v43 )
              break;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v42[4], 0);
            v45 = System_String__op_Equality(name, String_71182452, 0);
            UIToggle__set_value(v43, v45, v46);
            if ( v40 == v41 )
              return;
            if ( (unsigned int)++v41 >= LODWORD(v39[1].klass) )
              sub_1C32E84(key);
          }
        }
      }
    }
LABEL_38:
    sub_1C32E7C(key);
  }
  v5 = this->fields.mList;
  if ( !v5 )
    goto LABEL_38;
  v6 = v5->fields.onChange;
  v7 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v7, (Il2CppObject *)this, Method_UISavedOption_SaveSelection__, v8);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Add(v6, v7, v9);
  v11 = UISavedOption__get_key(this, v10);
  v12 = UnityEngine_PlayerPrefs__GetString_71182452(v11, 0);
  if ( !System_String__IsNullOrEmpty(v12, 0) )
  {
    key = (System_String_o *)this->fields.mList;
    if ( key )
    {
      UIPopupList__set_value((UIPopupList_o *)key, v12, 0);
      return;
    }
    goto LABEL_38;
  }
}


void UISavedOption__SaveProgress(UISavedOption_o *this, const MethodInfo *method)
{
  System_String_o *key; // x0
  System_String_o *v4; // x19
  float value; // s0

  if ( (byte_4C3C0A6 & 1) == 0 )
  {
    sub_1C32C20(&UIProgressBar_TypeInfo);
    byte_4C3C0A6 = 1;
  }
  key = UISavedOption__get_key(this, method);
  if ( !UIProgressBar_TypeInfo->static_fields->current )
    sub_1C32E7C(key);
  v4 = key;
  value = UIProgressBar__get_value(UIProgressBar_TypeInfo->static_fields->current, 0);
  UnityEngine_PlayerPrefs__SetFloat(v4, value, 0);
}


void UISavedOption__SaveSelection(UISavedOption_o *this, const MethodInfo *method)
{
  System_String_o *key; // x0
  struct UIPopupList_o *current; // x8

  if ( (byte_4C3C0A4 & 1) == 0 )
  {
    sub_1C32C20(&UIPopupList_TypeInfo);
    byte_4C3C0A4 = 1;
  }
  key = UISavedOption__get_key(this, method);
  current = UIPopupList_TypeInfo->static_fields->current;
  if ( !current )
    sub_1C32E7C(key);
  UnityEngine_PlayerPrefs__SetString(key, current->fields.mSelectedItem, 0);
}


void UISavedOption__SaveState(UISavedOption_o *this, const MethodInfo *method)
{
  System_String_o *key; // x0
  UIToggle_c *v4; // x8
  System_String_o *v5; // x19
  struct UIToggle_o *current; // x8
  __int64 v7; // x9

  if ( (byte_4C3C0A5 & 1) == 0 )
  {
    sub_1C32C20(&UIToggle_TypeInfo);
    byte_4C3C0A5 = 1;
  }
  key = UISavedOption__get_key(this, method);
  v4 = UIToggle_TypeInfo;
  v5 = key;
  if ( !UIToggle_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
    v4 = UIToggle_TypeInfo;
  }
  current = v4->static_fields->current;
  if ( !current )
    sub_1C32E7C(key);
  v7 = 56;
  if ( current->fields.mStarted )
    v7 = 113;
  UnityEngine_PlayerPrefs__SetInt(v5, *((unsigned __int8 *)&current->klass + v7), 0);
}


System_String_o *UISavedOption__get_key(UISavedOption_o *this, const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( (byte_4C3C0A0 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_9267/*"NGUI State: "*/);
    byte_4C3C0A0 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.keyName, 0) )
    return this->fields.keyName;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  return System_String__Concat_63518544((System_String_o *)StringLiteral_9267/*"NGUI State: "*/, name, 0);
}