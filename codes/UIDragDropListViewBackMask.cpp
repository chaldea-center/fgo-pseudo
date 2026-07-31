void UIDragDropListViewBackMask___ctor(UIDragDropListViewBackMask_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragDropListViewBackMask__DragEnd(UIDragDropListViewBackMask_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_5939F0D & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939F0D = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_12;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             maskObject,
                                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !maskObject )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, 0, 0);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       maskObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)maskObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      return;
    }
LABEL_12:
    sub_21FFECC(maskObject, method);
  }
}


void UIDragDropListViewBackMask__DragEndMultiTouch(
        UIDragDropListViewBackMask_o *this,
        EventDelegate_Callback_o *click,
        EventDelegate_Callback_o *drag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *Component_object; // x22
  System_Collections_Generic_List_object__o *m_CachedPtr; // x23
  EventDelegate_o *v11; // x24
  System_Collections_Generic_List_object__o *monitor; // x21
  EventDelegate_o *v13; // x22
  bool oldMultiTouchEnabled; // w0
  __int64 v15; // x1
  CTouch_c *v16; // x0

  if ( (byte_5939F10 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIMultiTouch___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate__Remove__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939F10 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_22;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               maskObject,
                                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIMultiTouch___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)maskObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      m_CachedPtr = (System_Collections_Generic_List_object__o *)Component_object[1].fields.m_CachedPtr;
      v11 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
      EventDelegate___ctor_56132624(v11, click, 0);
      if ( m_CachedPtr )
      {
        System_Collections_Generic_List_object___Remove(
          m_CachedPtr,
          (Il2CppObject *)v11,
          (const MethodInfo_445101C *)Method_System_Collections_Generic_List_EventDelegate__Remove__);
        monitor = (System_Collections_Generic_List_object__o *)Component_object[1].monitor;
        v13 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
        EventDelegate___ctor_56132624(v13, drag, 0);
        if ( monitor )
        {
          System_Collections_Generic_List_object___Remove(
            monitor,
            (Il2CppObject *)v13,
            (const MethodInfo_445101C *)Method_System_Collections_Generic_List_EventDelegate__Remove__);
          goto LABEL_11;
        }
      }
    }
LABEL_22:
    sub_21FFECC(maskObject, click);
  }
LABEL_11:
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_22;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             maskObject,
                                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !maskObject )
    goto LABEL_22;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, 0, 0);
  if ( this->fields.isMultiTouch )
  {
    oldMultiTouchEnabled = this->fields.oldMultiTouchEnabled;
    this->fields.isMultiTouch = 0;
    UnityEngine_Input__set_multiTouchEnabled(oldMultiTouchEnabled, 0);
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v15);
    if ( !byte_5939FA4 )
    {
      sub_21FFC50(&CTouch_TypeInfo);
      byte_5939FA4 = 1;
    }
    v16 = CTouch_TypeInfo;
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v15);
      v16 = CTouch_TypeInfo;
    }
    v16->static_fields->mIsClassEnabled = 1;
  }
}


void UIDragDropListViewBackMask__DragEnd_50884316(
        UIDragDropListViewBackMask_o *this,
        EventDelegate_Callback_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *Component_object; // x21
  System_Collections_Generic_List_object__o *monitor; // x21
  EventDelegate_o *v9; // x22

  if ( (byte_5939F0E & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate__Remove__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939F0E = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_13;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               maskObject,
                                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)maskObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      monitor = (System_Collections_Generic_List_object__o *)Component_object[1].monitor;
      v9 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
      EventDelegate___ctor_56132624(v9, call, 0);
      if ( monitor )
      {
        System_Collections_Generic_List_object___Remove(
          monitor,
          (Il2CppObject *)v9,
          (const MethodInfo_445101C *)Method_System_Collections_Generic_List_EventDelegate__Remove__);
        goto LABEL_10;
      }
    }
LABEL_13:
    sub_21FFECC(maskObject, call);
  }
LABEL_10:
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_13;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             maskObject,
                                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !maskObject )
    goto LABEL_13;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, 0, 0);
}


void UIDragDropListViewBackMask__DragStart(UIDragDropListViewBackMask_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_5939F0B & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939F0B = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_12;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             maskObject,
                                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !maskObject )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, 1, 0);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       maskObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)maskObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
      return;
    }
LABEL_12:
    sub_21FFECC(maskObject, method);
  }
}


void UIDragDropListViewBackMask__DragStartMultiTouch(
        UIDragDropListViewBackMask_o *this,
        EventDelegate_Callback_o *click,
        EventDelegate_Callback_o *drag,
        const MethodInfo *method)
{
  __int64 v7; // x1
  CTouch_c *v8; // x0
  UnityEngine_GameObject_o *maskObject; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *Component_object; // x21
  System_Collections_Generic_List_object__o *m_CachedPtr; // x22
  EventDelegate_o *v13; // x23
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_object__o *monitor; // x20
  EventDelegate_o *v25; // x22
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0

  if ( (byte_5939F0F & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIMultiTouch___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939F0F = 1;
  }
  if ( UnityEngine_Input__get_touchSupported(0) )
  {
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v7);
    if ( !byte_5939FA4 )
    {
      sub_21FFC50(&CTouch_TypeInfo);
      byte_5939FA4 = 1;
    }
    v8 = CTouch_TypeInfo;
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v7);
      v8 = CTouch_TypeInfo;
    }
    v8->static_fields->mIsClassEnabled = 0;
    this->fields.oldMultiTouchEnabled = UnityEngine_Input__get_multiTouchEnabled(0);
    this->fields.isMultiTouch = 1;
    UnityEngine_Input__set_multiTouchEnabled(1, 0);
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_30;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             maskObject,
                                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !maskObject )
    goto LABEL_30;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, 1, 0);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_30;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               maskObject,
                                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIMultiTouch___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)maskObject & 1) != 0 )
  {
    if ( Component_object )
    {
      m_CachedPtr = (System_Collections_Generic_List_object__o *)Component_object[1].fields.m_CachedPtr;
      v13 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
      EventDelegate___ctor_56132624(v13, click, 0);
      if ( m_CachedPtr )
      {
        items = m_CachedPtr->fields._items;
        v21 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++m_CachedPtr->fields._version;
        if ( items )
        {
          size = m_CachedPtr->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              m_CachedPtr,
              (Il2CppObject *)v13,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            m_CachedPtr->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v13;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v13, v14, v15, v16, v17, v18, v19);
          }
          monitor = (System_Collections_Generic_List_object__o *)Component_object[1].monitor;
          v25 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
          EventDelegate___ctor_56132624(v25, drag, 0);
          if ( monitor )
          {
            v32 = monitor->fields._items;
            v33 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++monitor->fields._version;
            if ( v32 )
            {
              v34 = monitor->fields._size;
              if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  monitor,
                  (Il2CppObject *)v25,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
              }
              else
              {
                v35 = &v32->obj.klass + v34;
                monitor->fields._size = v34 + 1;
                v35[4] = (Il2CppClass *)v25;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v25, v26, v27, v28, v29, v30, v31);
              }
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
              return;
            }
          }
        }
      }
    }
LABEL_30:
    sub_21FFECC(maskObject, v7);
  }
}


void UIDragDropListViewBackMask__DragStart_50883680(
        UIDragDropListViewBackMask_o *this,
        EventDelegate_Callback_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *Component_object; // x20
  System_Collections_Generic_List_object__o *monitor; // x21
  EventDelegate_o *v9; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_5939F0C & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939F0C = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_17;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             maskObject,
                                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !maskObject )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, 1, 0);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_17;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               maskObject,
                                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)maskObject & 1) != 0 )
  {
    if ( Component_object )
    {
      monitor = (System_Collections_Generic_List_object__o *)Component_object[1].monitor;
      v9 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
      EventDelegate___ctor_56132624(v9, call, 0);
      if ( monitor )
      {
        items = monitor->fields._items;
        v17 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++monitor->fields._version;
        if ( items )
        {
          size = monitor->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              monitor,
              (Il2CppObject *)v9,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            monitor->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v9;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v9, v10, v11, v12, v13, v14, v15);
          }
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
          return;
        }
      }
    }
LABEL_17:
    sub_21FFECC(maskObject, call);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIDragDropListViewBackMask__SetEnabledCollider(
        UIDragDropListViewBackMask_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0

  if ( (byte_5939F11 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    byte_5939F11 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject
    || (maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   maskObject,
                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Collider___)) == 0 )
  {
    sub_21FFECC(maskObject, value);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, value, 0);
}