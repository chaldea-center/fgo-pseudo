void UIToggledComponents___ctor(UIToggledComponents_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIToggledComponents__Awake(UIToggledComponents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  char *activate; // x0
  struct System_Collections_Generic_List_MonoBehaviour__o *deactivate; // x8
  struct UnityEngine_MonoBehaviour_o **p_target; // x0
  Il2CppObject *v9; // x1
  System_Collections_Generic_List_EventDelegate__o *v10; // x20
  EventDelegate_Callback_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  _QWORD *v14; // x9
  __int64 v15; // x8
  const MethodInfo_37987BC *v16; // x2

  if ( (byte_4C3C0D8 & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_Callback_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIToggle___);
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_MonoBehaviour__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MonoBehaviour__get_Count__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_UIToggledComponents_Toggle__);
    byte_4C3C0D8 = 1;
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
      LODWORD(v9) = 0;
      this->fields.target = 0;
LABEL_11:
      sub_1C32BC4((CGThumbnailListItem_o *)p_target, (int32_t)v9, v4, v5);
      goto LABEL_12;
    }
    v9 = (Il2CppObject *)this->fields.target;
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
          *((_QWORD *)activate + 4) = v9;
          p_target = (struct UnityEngine_MonoBehaviour_o **)(activate + 32);
          goto LABEL_11;
        }
        activate = (char *)deactivate;
        v16 = *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL);
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
          *(_QWORD *)(v15 + 32) = v9;
          p_target = (struct UnityEngine_MonoBehaviour_o **)(v15 + 32);
          goto LABEL_11;
        }
        v16 = *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL);
LABEL_25:
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)activate,
          v9,
          v16);
        goto LABEL_12;
      }
    }
LABEL_26:
    sub_1C32E7C(activate);
  }
LABEL_12:
  activate = (char *)UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIToggle___);
  if ( !activate )
    goto LABEL_26;
  v10 = (System_Collections_Generic_List_EventDelegate__o *)*((_QWORD *)activate + 8);
  v11 = (EventDelegate_Callback_o *)sub_1C32E6C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v11, (Il2CppObject *)this, Method_UIToggledComponents_Toggle__, v12);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Add(v10, v11, v13);
}


void UIToggledComponents__Toggle(UIToggledComponents_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *activate; // x0
  int32_t v4; // w20
  UIToggle_c *v5; // x8
  UnityEngine_Behaviour_o *v6; // x21
  struct UIToggle_o *current; // x8
  __int64 v8; // x9
  int32_t v9; // w20
  UIToggle_c *v10; // x8
  UnityEngine_Behaviour_o *v11; // x21
  struct UIToggle_o *v12; // x8
  __int64 v13; // x9

  if ( (byte_4C3C0D9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_MonoBehaviour__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MonoBehaviour__get_Item__);
    sub_1C32C20(&UIToggle_TypeInfo);
    byte_4C3C0D9 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    activate = (System_Collections_Generic_List_object__o *)this->fields.activate;
    if ( !activate )
      goto LABEL_27;
    v4 = 0;
    while ( v4 < activate->fields._size )
    {
      activate = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                activate,
                                                                v4,
                                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_MonoBehaviour__get_Item__);
      v5 = UIToggle_TypeInfo;
      v6 = (UnityEngine_Behaviour_o *)activate;
      if ( !UIToggle_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
        v5 = UIToggle_TypeInfo;
      }
      current = v5->static_fields->current;
      if ( current && v6 )
      {
        v8 = current->fields.mStarted ? 113LL : 56LL;
        UnityEngine_Behaviour__set_enabled(v6, *((_BYTE *)&current->klass + v8), 0);
        activate = (System_Collections_Generic_List_object__o *)this->fields.activate;
        ++v4;
        if ( activate )
          continue;
      }
      goto LABEL_27;
    }
    activate = (System_Collections_Generic_List_object__o *)this->fields.deactivate;
    if ( !activate )
LABEL_27:
      sub_1C32E7C(activate);
    v9 = 0;
    while ( v9 < activate->fields._size )
    {
      activate = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                activate,
                                                                v9,
                                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_MonoBehaviour__get_Item__);
      v10 = UIToggle_TypeInfo;
      v11 = (UnityEngine_Behaviour_o *)activate;
      if ( !UIToggle_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
        v10 = UIToggle_TypeInfo;
      }
      v12 = v10->static_fields->current;
      if ( v12 && v11 )
      {
        v13 = v12->fields.mStarted ? 113LL : 56LL;
        UnityEngine_Behaviour__set_enabled(v11, *((_BYTE *)&v12->klass + v13) == 0, 0);
        activate = (System_Collections_Generic_List_object__o *)this->fields.deactivate;
        ++v9;
        if ( activate )
          continue;
      }
      goto LABEL_27;
    }
  }
}