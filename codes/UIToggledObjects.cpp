void UIToggledObjects___ctor(UIToggledObjects_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIToggledObjects__Awake(UIToggledObjects_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *target; // x21
  Il2CppObject *v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  char *activate; // x0
  struct System_Collections_Generic_List_GameObject__o *deactivate; // x8
  struct UnityEngine_GameObject_o **p_target; // x0
  System_Collections_Generic_List_EventDelegate__o *v10; // x20
  EventDelegate_Callback_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  _QWORD *v14; // x9
  __int64 v15; // x8
  const MethodInfo_37B5460 *v16; // x2

  if ( (byte_4C5B44C & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_UIToggle___);
    sub_1C3E564(&EventDelegate_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_UIToggledObjects_Toggle__);
    byte_4C5B44C = 1;
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
      sub_1C3E508((CGThumbnailListItem_o *)p_target, (int32_t)v4, v5, v6);
      goto LABEL_12;
    }
    v4 = (Il2CppObject *)this->fields.target;
    v14 = Method_System_Collections_Generic_List_GameObject__Add__;
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
          p_target = (struct UnityEngine_GameObject_o **)(activate + 32);
          goto LABEL_11;
        }
        activate = (char *)deactivate;
        v16 = *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL);
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
          p_target = (struct UnityEngine_GameObject_o **)(v15 + 32);
          goto LABEL_11;
        }
        v16 = *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL);
LABEL_25:
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)activate,
          v4,
          v16);
        goto LABEL_12;
      }
    }
LABEL_26:
    sub_1C3E7C0(activate, v4);
  }
LABEL_12:
  activate = (char *)UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_UIToggle___);
  if ( !activate )
    goto LABEL_26;
  v10 = (System_Collections_Generic_List_EventDelegate__o *)*((_QWORD *)activate + 8);
  v11 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v11, (Il2CppObject *)this, Method_UIToggledObjects_Toggle__, v12);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Add(v10, v11, v13);
}


void UIToggledObjects__Set(
        UIToggledObjects_o *this,
        UnityEngine_GameObject_o *go,
        bool state,
        const MethodInfo *method)
{
  if ( (byte_4C5B44E & 1) == 0 )
  {
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B44E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)go, 0, 0) )
  {
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetActive(go, state, 0);
  }
}


void UIToggledObjects__Toggle(UIToggledObjects_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *activate; // x0
  __int64 v4; // x8
  __int64 v5; // x9
  int v6; // w23
  int32_t v7; // w20
  Il2CppObject *Item; // x0
  const MethodInfo *v9; // x3
  int32_t v10; // w20
  Il2CppObject *v11; // x0
  const MethodInfo *v12; // x3

  if ( (byte_4C5B44D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C3E564(&UIToggle_TypeInfo);
    byte_4C5B44D = 1;
  }
  activate = (System_Collections_Generic_List_object__o *)UIToggle_TypeInfo;
  if ( !UIToggle_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIToggle_TypeInfo);
    activate = (System_Collections_Generic_List_object__o *)UIToggle_TypeInfo;
  }
  v4 = *(_QWORD *)(*(_QWORD *)&activate[4].fields._size + 8LL);
  if ( !v4 )
    goto LABEL_18;
  v5 = 56;
  if ( *(_BYTE *)(v4 + 114) )
    v5 = 113;
  v6 = *(unsigned __int8 *)(v4 + v5);
  if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
    return;
  activate = (System_Collections_Generic_List_object__o *)this->fields.activate;
  if ( !activate )
    goto LABEL_18;
  v7 = 0;
  while ( v7 < activate->fields._size )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             activate,
             v7,
             (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    UIToggledObjects__Set((UIToggledObjects_o *)Item, (UnityEngine_GameObject_o *)Item, v6 != 0, v9);
    activate = (System_Collections_Generic_List_object__o *)this->fields.activate;
    ++v7;
    if ( !activate )
      goto LABEL_18;
  }
  activate = (System_Collections_Generic_List_object__o *)this->fields.deactivate;
  if ( !activate )
LABEL_18:
    sub_1C3E7C0(activate, method);
  v10 = 0;
  while ( v10 < activate->fields._size )
  {
    v11 = System_Collections_Generic_List_object___get_Item(
            activate,
            v10,
            (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
    UIToggledObjects__Set((UIToggledObjects_o *)v11, (UnityEngine_GameObject_o *)v11, v6 == 0, v12);
    activate = (System_Collections_Generic_List_object__o *)this->fields.deactivate;
    ++v10;
    if ( !activate )
      goto LABEL_18;
  }
}