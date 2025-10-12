void UIDragDropListViewBackMask___ctor(UIDragDropListViewBackMask_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragDropListViewBackMask__DragEnd(UIDragDropListViewBackMask_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  Il2CppObject *Component_object; // x19

  if ( (byte_4C391D9 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C391D9 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_12;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             maskObject,
                                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !maskObject )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, 0, 0);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       maskObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C32E7C(maskObject);
  }
}


void UIDragDropListViewBackMask__DragEndMultiTouch(
        UIDragDropListViewBackMask_o *this,
        EventDelegate_Callback_o *click,
        EventDelegate_Callback_o *drag,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  UnityEngine_Object_o *Component_object; // x22
  System_Collections_Generic_List_object__o *m_CachedPtr; // x23
  EventDelegate_o *v10; // x24
  System_Collections_Generic_List_object__o *monitor; // x21
  EventDelegate_o *v12; // x22
  bool oldMultiTouchEnabled; // w0
  CTouch_c *v14; // x0

  if ( (byte_4C391DC & 1) == 0 )
  {
    sub_1C32C20(&CTouch_TypeInfo);
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIMultiTouch___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate__Remove__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C391DC = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_22;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               maskObject,
                                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIMultiTouch___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)maskObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      m_CachedPtr = (System_Collections_Generic_List_object__o *)Component_object[1].fields.m_CachedPtr;
      v10 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
      EventDelegate___ctor_49230836(v10, click, 0);
      if ( m_CachedPtr )
      {
        System_Collections_Generic_List_object___Remove(
          m_CachedPtr,
          (Il2CppObject *)v10,
          (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_EventDelegate__Remove__);
        monitor = (System_Collections_Generic_List_object__o *)Component_object[1].monitor;
        v12 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
        EventDelegate___ctor_49230836(v12, drag, 0);
        if ( monitor )
        {
          System_Collections_Generic_List_object___Remove(
            monitor,
            (Il2CppObject *)v12,
            (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_EventDelegate__Remove__);
          goto LABEL_11;
        }
      }
    }
LABEL_22:
    sub_1C32E7C(maskObject);
  }
LABEL_11:
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_22;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             maskObject,
                                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !maskObject )
    goto LABEL_22;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, 0, 0);
  if ( this->fields.isMultiTouch )
  {
    oldMultiTouchEnabled = this->fields.oldMultiTouchEnabled;
    this->fields.isMultiTouch = 0;
    UnityEngine_Input__set_multiTouchEnabled(oldMultiTouchEnabled, 0);
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( !byte_4C3924A )
    {
      sub_1C32C20(&CTouch_TypeInfo);
      byte_4C3924A = 1;
    }
    v14 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v14 = CTouch_TypeInfo;
    }
    v14->static_fields->mIsClassEnabled = 1;
  }
}


void UIDragDropListViewBackMask__DragEnd_43837340(
        UIDragDropListViewBackMask_o *this,
        EventDelegate_Callback_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  UnityEngine_Object_o *Component_object; // x21
  System_Collections_Generic_List_object__o *monitor; // x21
  EventDelegate_o *v8; // x22

  if ( (byte_4C391DA & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate__Remove__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C391DA = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_13;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               maskObject,
                                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)maskObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      monitor = (System_Collections_Generic_List_object__o *)Component_object[1].monitor;
      v8 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
      EventDelegate___ctor_49230836(v8, call, 0);
      if ( monitor )
      {
        System_Collections_Generic_List_object___Remove(
          monitor,
          (Il2CppObject *)v8,
          (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_EventDelegate__Remove__);
        goto LABEL_10;
      }
    }
LABEL_13:
    sub_1C32E7C(maskObject);
  }
LABEL_10:
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_13;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             maskObject,
                                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !maskObject )
    goto LABEL_13;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, 0, 0);
}


void UIDragDropListViewBackMask__DragStart(UIDragDropListViewBackMask_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  Il2CppObject *Component_object; // x19

  if ( (byte_4C391D7 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C391D7 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_12;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             maskObject,
                                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !maskObject )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, 1, 0);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       maskObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C32E7C(maskObject);
  }
}


void UIDragDropListViewBackMask__DragStartMultiTouch(
        UIDragDropListViewBackMask_o *this,
        EventDelegate_Callback_o *click,
        EventDelegate_Callback_o *drag,
        const MethodInfo *method)
{
  CTouch_c *v7; // x0
  UnityEngine_GameObject_o *maskObject; // x0
  UnityEngine_Object_o *Component_object; // x21
  System_Collections_Generic_List_object__o *m_CachedPtr; // x22
  EventDelegate_o *v11; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Collections_Generic_List_object__o *monitor; // x20
  EventDelegate_o *v19; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4C391DB & 1) == 0 )
  {
    sub_1C32C20(&CTouch_TypeInfo);
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIMultiTouch___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C391DB = 1;
  }
  if ( UnityEngine_Input__get_touchSupported(0) )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( !byte_4C3924A )
    {
      sub_1C32C20(&CTouch_TypeInfo);
      byte_4C3924A = 1;
    }
    v7 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v7 = CTouch_TypeInfo;
    }
    v7->static_fields->mIsClassEnabled = 0;
    this->fields.oldMultiTouchEnabled = UnityEngine_Input__get_multiTouchEnabled(0);
    this->fields.isMultiTouch = 1;
    UnityEngine_Input__set_multiTouchEnabled(1, 0);
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_30;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             maskObject,
                                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !maskObject )
    goto LABEL_30;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, 1, 0);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_30;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               maskObject,
                                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIMultiTouch___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)maskObject & 1) != 0 )
  {
    if ( Component_object )
    {
      m_CachedPtr = (System_Collections_Generic_List_object__o *)Component_object[1].fields.m_CachedPtr;
      v11 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
      EventDelegate___ctor_49230836(v11, click, 0);
      if ( m_CachedPtr )
      {
        items = m_CachedPtr->fields._items;
        v15 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++m_CachedPtr->fields._version;
        if ( items )
        {
          size = m_CachedPtr->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              m_CachedPtr,
              (Il2CppObject *)v11,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = &items->obj.klass + size;
            m_CachedPtr->fields._size = size + 1;
            v17[4] = (Il2CppClass *)v11;
            sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v11, v12, v13);
          }
          monitor = (System_Collections_Generic_List_object__o *)Component_object[1].monitor;
          v19 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
          EventDelegate___ctor_49230836(v19, drag, 0);
          if ( monitor )
          {
            v22 = monitor->fields._items;
            v23 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++monitor->fields._version;
            if ( v22 )
            {
              v24 = monitor->fields._size;
              if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  monitor,
                  (Il2CppObject *)v19,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
              }
              else
              {
                v25 = &v22->obj.klass + v24;
                monitor->fields._size = v24 + 1;
                v25[4] = (Il2CppClass *)v19;
                sub_1C32BC4((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v19, v20, v21);
              }
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
              return;
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C32E7C(maskObject);
  }
}


void UIDragDropListViewBackMask__DragStart_43836704(
        UIDragDropListViewBackMask_o *this,
        EventDelegate_Callback_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  UnityEngine_Object_o *Component_object; // x20
  System_Collections_Generic_List_object__o *monitor; // x21
  EventDelegate_o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C391D8 & 1) == 0 )
  {
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C391D8 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_17;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             maskObject,
                                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !maskObject )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, 1, 0);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_17;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               maskObject,
                                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)maskObject & 1) != 0 )
  {
    if ( Component_object )
    {
      monitor = (System_Collections_Generic_List_object__o *)Component_object[1].monitor;
      v8 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
      EventDelegate___ctor_49230836(v8, call, 0);
      if ( monitor )
      {
        items = monitor->fields._items;
        v12 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++monitor->fields._version;
        if ( items )
        {
          size = monitor->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              monitor,
              (Il2CppObject *)v8,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            monitor->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v8;
            sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
          }
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
          return;
        }
      }
    }
LABEL_17:
    sub_1C32E7C(maskObject);
  }
}


void UIDragDropListViewBackMask__SetEnabledCollider(
        UIDragDropListViewBackMask_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0

  if ( (byte_4C391DD & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    byte_4C391DD = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject
    || (maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   maskObject,
                                                   (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Collider___)) == 0 )
  {
    sub_1C32E7C(maskObject);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, value, 0);
}