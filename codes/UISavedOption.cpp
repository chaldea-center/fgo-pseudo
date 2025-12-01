void UISavedOption___ctor(UISavedOption_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UISavedOption__Awake(UISavedOption_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CCBB49 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIPopupList___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIProgressBar___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIToggle___);
    byte_4CCBB49 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIPopupList___);
  this->fields.mList = (struct UIPopupList_o *)Component_object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mList, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIToggle___);
  this->fields.mCheck = (struct UIToggle_o *)v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mCheck, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIProgressBar___);
  this->fields.mSlider = (struct UIProgressBar_o *)v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mSlider, (int32_t)v17, v18, v19, v20, v21, v22, v23);
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
  const MethodInfo *v16; // x2
  int max_length; // w8
  int v18; // w9
  Il2CppObject *v19; // x20
  __int64 v20; // x12
  System_String_o *key; // x19
  System_String_o *name; // x1

  if ( (byte_4CCBB4B & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_Callback_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIToggle___);
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_UISavedOption_SaveProgress__);
    sub_1C713B0(&Method_UISavedOption_SaveSelection__);
    sub_1C713B0(&Method_UISavedOption_SaveState__);
    byte_4CCBB4B = 1;
  }
  mCheck = (UnityEngine_Object_o *)this->fields.mCheck;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object = (System_Object_array *)UnityEngine_Object__op_Inequality(mCheck, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
  {
    v6 = this->fields.mCheck;
    if ( v6 )
    {
      onChange = v6->fields.onChange;
      v8 = (EventDelegate_Callback_o *)sub_1C715FC(EventDelegate_Callback_TypeInfo);
      v10 = &Method_UISavedOption_SaveState__;
LABEL_18:
      v15 = v8;
      EventDelegate_Callback___ctor(v8, (Il2CppObject *)this, *v10, v9);
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      EventDelegate__Remove(onChange, v15, v16);
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
    v12 = this->fields.mList;
    if ( v12 )
    {
      onChange = v12->fields.onChange;
      v8 = (EventDelegate_Callback_o *)sub_1C715FC(EventDelegate_Callback_TypeInfo);
      v10 = &Method_UISavedOption_SaveSelection__;
      goto LABEL_18;
    }
LABEL_32:
    sub_1C71608(ComponentsInChildren_object, v5);
  }
  mSlider = (UnityEngine_Object_o *)this->fields.mSlider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object = (System_Object_array *)UnityEngine_Object__op_Inequality(mSlider, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object & 1) != 0 )
  {
    v14 = this->fields.mSlider;
    if ( v14 )
    {
      onChange = v14->fields.onChange;
      v8 = (EventDelegate_Callback_o *)sub_1C715FC(EventDelegate_Callback_TypeInfo);
      v10 = &Method_UISavedOption_SaveProgress__;
      goto LABEL_18;
    }
    goto LABEL_32;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_UIToggle___);
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
    key = UISavedOption__get_key(this, v5);
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v19, 0);
    UnityEngine_PlayerPrefs__SetString(key, name, 0);
  }
}


void UISavedOption__OnEnable(UISavedOption_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mList; // x20
  System_String_o *key; // x0
  const MethodInfo *v5; // x1
  struct UIPopupList_o *v6; // x8
  System_Collections_Generic_List_EventDelegate__o *v7; // x20
  EventDelegate_Callback_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  System_String_o *v12; // x0
  System_String_o *v13; // x20
  UnityEngine_Object_o *mCheck; // x20
  struct UIToggle_o *v15; // x8
  System_Collections_Generic_List_EventDelegate__o *onChange; // x20
  EventDelegate_Callback_o *v17; // x21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  UIToggle_o *v20; // x20
  const MethodInfo *v21; // x1
  struct UIToggle_o *v22; // x8
  const MethodInfo *v23; // x2
  UnityEngine_Object_o *mSlider; // x20
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
  System_String_o *String_71682912; // x20
  System_String_c *klass; // x8
  System_String_o *v39; // x19
  int v40; // w22
  int v41; // w23
  System_String_c **v42; // x8
  UIToggle_o *v43; // x21
  System_String_o *name; // x0
  bool v45; // w0
  const MethodInfo *v46; // x2

  if ( (byte_4CCBB4A & 1) == 0 )
  {
    sub_1C713B0(&EventDelegate_Callback_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIToggle___);
    sub_1C713B0(&EventDelegate_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_UISavedOption_SaveProgress__);
    sub_1C713B0(&Method_UISavedOption_SaveSelection__);
    sub_1C713B0(&Method_UISavedOption_SaveState__);
    byte_4CCBB4A = 1;
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
      v15 = this->fields.mCheck;
      if ( v15 )
      {
        onChange = v15->fields.onChange;
        v17 = (EventDelegate_Callback_o *)sub_1C715FC(EventDelegate_Callback_TypeInfo);
        EventDelegate_Callback___ctor(v17, (Il2CppObject *)this, Method_UISavedOption_SaveState__, v18);
        if ( !EventDelegate_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
        EventDelegate__Add(onChange, v17, v19);
        v20 = this->fields.mCheck;
        key = UISavedOption__get_key(this, v21);
        v22 = this->fields.mCheck;
        if ( v22 )
        {
          key = (System_String_o *)UnityEngine_PlayerPrefs__GetInt(key, v22->fields.startsActive, 0);
          if ( v20 )
          {
            UIToggle__set_value(v20, (_DWORD)key != 0, v23);
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
          v27 = (EventDelegate_Callback_o *)sub_1C715FC(EventDelegate_Callback_TypeInfo);
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
        v36 = UISavedOption__get_key(this, v5);
        String_71682912 = UnityEngine_PlayerPrefs__GetString_71682912(v36, 0);
        key = (System_String_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                   (UnityEngine_Component_o *)this,
                                   1,
                                   (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_UIToggle___);
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
            v45 = System_String__op_Equality(name, String_71682912, 0);
            UIToggle__set_value(v43, v45, v46);
            if ( v40 == v41 )
              return;
            if ( (unsigned int)++v41 >= LODWORD(v39[1].klass) )
              sub_1C71610(key);
          }
        }
      }
    }
LABEL_38:
    sub_1C71608(key, v5);
  }
  v6 = this->fields.mList;
  if ( !v6 )
    goto LABEL_38;
  v7 = v6->fields.onChange;
  v8 = (EventDelegate_Callback_o *)sub_1C715FC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v8, (Il2CppObject *)this, Method_UISavedOption_SaveSelection__, v9);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Add(v7, v8, v10);
  v12 = UISavedOption__get_key(this, v11);
  v13 = UnityEngine_PlayerPrefs__GetString_71682912(v12, 0);
  if ( !System_String__IsNullOrEmpty(v13, 0) )
  {
    key = (System_String_o *)this->fields.mList;
    if ( key )
    {
      UIPopupList__set_value((UIPopupList_o *)key, v13, 0);
      return;
    }
    goto LABEL_38;
  }
}


void UISavedOption__SaveProgress(UISavedOption_o *this, const MethodInfo *method)
{
  System_String_o *key; // x0
  __int64 v4; // x1
  System_String_o *v5; // x19
  float value; // s0

  if ( (byte_4CCBB4E & 1) == 0 )
  {
    sub_1C713B0(&UIProgressBar_TypeInfo);
    byte_4CCBB4E = 1;
  }
  key = UISavedOption__get_key(this, method);
  if ( !UIProgressBar_TypeInfo->static_fields->current )
    sub_1C71608(key, v4);
  v5 = key;
  value = UIProgressBar__get_value(UIProgressBar_TypeInfo->static_fields->current, 0);
  UnityEngine_PlayerPrefs__SetFloat(v5, value, 0);
}


void UISavedOption__SaveSelection(UISavedOption_o *this, const MethodInfo *method)
{
  System_String_o *key; // x0
  __int64 v4; // x1
  struct UIPopupList_o *current; // x8

  if ( (byte_4CCBB4C & 1) == 0 )
  {
    sub_1C713B0(&UIPopupList_TypeInfo);
    byte_4CCBB4C = 1;
  }
  key = UISavedOption__get_key(this, method);
  current = UIPopupList_TypeInfo->static_fields->current;
  if ( !current )
    sub_1C71608(key, v4);
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

  if ( (byte_4CCBB4D & 1) == 0 )
  {
    sub_1C713B0(&UIToggle_TypeInfo);
    byte_4CCBB4D = 1;
  }
  key = UISavedOption__get_key(this, method);
  v5 = UIToggle_TypeInfo;
  v6 = key;
  if ( !UIToggle_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
    v5 = UIToggle_TypeInfo;
  }
  current = v5->static_fields->current;
  if ( !current )
    sub_1C71608(key, v4);
  v8 = 56;
  if ( current->fields.mStarted )
    v8 = 113;
  UnityEngine_PlayerPrefs__SetInt(v6, *((unsigned __int8 *)&current->klass + v8), 0);
}


System_String_o *UISavedOption__get_key(UISavedOption_o *this, const MethodInfo *method)
{
  System_String_o *name; // x0

  if ( (byte_4CCBB48 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_9269/*"NGUI State: "*/);
    byte_4CCBB48 = 1;
  }
  if ( !System_String__IsNullOrEmpty(this->fields.keyName, 0) )
    return this->fields.keyName;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  return System_String__Concat_64031724((System_String_o *)StringLiteral_9269/*"NGUI State: "*/, name, 0);
}