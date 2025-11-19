void UIToggledComponents___ctor(UIToggledComponents_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIToggledComponents__Awake(UIToggledComponents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  Il2CppObject *v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  char *activate; // x0
  struct System_Collections_Generic_List_MonoBehaviour__o *deactivate; // x8
  struct UnityEngine_MonoBehaviour_o **p_target; // x0
  System_Collections_Generic_List_EventDelegate__o *v10; // x20
  EventDelegate_Callback_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  _QWORD *v14; // x9
  __int64 v15; // x8
  const MethodInfo_3800974 *v16; // x2

  if ( (byte_4CBAA27 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_Callback_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIToggle___);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MonoBehaviour__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MonoBehaviour__get_Count__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_UIToggledComponents_Toggle__);
    byte_4CBAA27 = 1;
  }
  target = (UnityEngine_Object_o *)this->fields.target;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(target, 0, 0) )
  {
    activate = (char *)this->fields.activate;
    if ( !activate )
      goto LABEL_26;
    if ( *((_DWORD *)activate + 6) )
      goto LABEL_10;
    deactivate = this->fields.deactivate;
    if ( !deactivate )
      goto LABEL_26;
    if ( deactivate->fields._size )
    {
LABEL_10:
      p_target = &this->fields.target;
      LODWORD(v4) = 0;
      this->fields.target = 0;
LABEL_11:
      sub_1C6B9AC((CGThumbnailListItem_o *)p_target, (int32_t)v4, v5, v6);
      goto LABEL_12;
    }
    v4 = (Il2CppObject *)this->fields.target;
    v14 = Method_System_Collections_Generic_List_MonoBehaviour__Add__;
    if ( this->fields.inverse )
    {
      activate = (char *)deactivate->fields._items;
      ++deactivate->fields._version;
      if ( activate )
      {
        if ( *((_DWORD *)activate + 6) )
        {
          deactivate->fields._size = 1;
          *((_QWORD *)activate + 4) = v4;
          p_target = (struct UnityEngine_MonoBehaviour_o **)(activate + 32);
          goto LABEL_11;
        }
        activate = (char *)deactivate;
        v16 = *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL);
        goto LABEL_25;
      }
    }
    else
    {
      v15 = *((_QWORD *)activate + 2);
      ++*((_DWORD *)activate + 7);
      if ( v15 )
      {
        if ( *(_DWORD *)(v15 + 24) )
        {
          *((_DWORD *)activate + 6) = 1;
          *(_QWORD *)(v15 + 32) = v4;
          p_target = (struct UnityEngine_MonoBehaviour_o **)(v15 + 32);
          goto LABEL_11;
        }
        v16 = *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL);
LABEL_25:
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)activate,
          v4,
          v16);
        goto LABEL_12;
      }
    }
LABEL_26:
    sub_1C6BC60(activate, v4);
  }
LABEL_12:
  activate = (char *)UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIToggle___);
  if ( !activate )
    goto LABEL_26;
  v10 = (System_Collections_Generic_List_EventDelegate__o *)*((_QWORD *)activate + 8);
  v11 = (EventDelegate_Callback_o *)sub_1C6BC54(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v11, (Il2CppObject *)this, Method_UIToggledComponents_Toggle__, v12);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Add(v10, v11, v13);
}


void UIToggledComponents__Toggle(UIToggledComponents_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *activate; // x0
  int32_t v5; // w20
  UIToggle_c *v6; // x8
  UnityEngine_Behaviour_o *v7; // x21
  struct UIToggle_o *current; // x8
  __int64 v9; // x9
  int32_t v10; // w20
  UIToggle_c *v11; // x8
  UnityEngine_Behaviour_o *v12; // x21
  struct UIToggle_o *v13; // x8
  __int64 v14; // x9

  if ( (byte_4CBAA28 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_MonoBehaviour__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MonoBehaviour__get_Item__);
    sub_1C6BA08(&UIToggle_TypeInfo);
    byte_4CBAA28 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    activate = (System_Collections_Generic_List_object__o *)this->fields.activate;
    if ( !activate )
      goto LABEL_27;
    v5 = 0;
    while ( v5 < activate->fields._size )
    {
      activate = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                activate,
                                                                v5,
                                                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_MonoBehaviour__get_Item__);
      v6 = UIToggle_TypeInfo;
      v7 = (UnityEngine_Behaviour_o *)activate;
      if ( !UIToggle_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
        v6 = UIToggle_TypeInfo;
      }
      current = v6->static_fields->current;
      if ( current && v7 )
      {
        v9 = current->fields.mStarted ? 113LL : 56LL;
        UnityEngine_Behaviour__set_enabled(v7, *((_BYTE *)&current->klass + v9), 0);
        activate = (System_Collections_Generic_List_object__o *)this->fields.activate;
        ++v5;
        if ( activate )
          continue;
      }
      goto LABEL_27;
    }
    activate = (System_Collections_Generic_List_object__o *)this->fields.deactivate;
    if ( !activate )
LABEL_27:
      sub_1C6BC60(activate, v3);
    v10 = 0;
    while ( v10 < activate->fields._size )
    {
      activate = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                activate,
                                                                v10,
                                                                (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_MonoBehaviour__get_Item__);
      v11 = UIToggle_TypeInfo;
      v12 = (UnityEngine_Behaviour_o *)activate;
      if ( !UIToggle_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
        v11 = UIToggle_TypeInfo;
      }
      v13 = v11->static_fields->current;
      if ( v13 && v12 )
      {
        v14 = v13->fields.mStarted ? 113LL : 56LL;
        UnityEngine_Behaviour__set_enabled(v12, *((_BYTE *)&v13->klass + v14) == 0, 0);
        activate = (System_Collections_Generic_List_object__o *)this->fields.deactivate;
        ++v10;
        if ( activate )
          continue;
      }
      goto LABEL_27;
    }
  }
}