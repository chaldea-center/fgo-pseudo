void UIDragDropListViewBackMask___ctor(UIDragDropListViewBackMask_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIDragDropListViewBackMask__DragEnd(UIDragDropListViewBackMask_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  Il2CppObject *Component_object; // x19

  if ( (byte_4CB7B15 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7B15 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_12;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             maskObject,
                                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !maskObject )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, 0, 0);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       maskObject,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
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
    sub_1C6BC60(maskObject, method);
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

  if ( (byte_4CB7B18 & 1) == 0 )
  {
    sub_1C6BA08(&CTouch_TypeInfo);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIMultiTouch___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Remove__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7B18 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_22;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               maskObject,
                                               (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIMultiTouch___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)maskObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      m_CachedPtr = (System_Collections_Generic_List_object__o *)Component_object[1].fields.m_CachedPtr;
      v10 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
      EventDelegate___ctor_49576072(v10, click, 0);
      if ( m_CachedPtr )
      {
        System_Collections_Generic_List_object___Remove(
          m_CachedPtr,
          (Il2CppObject *)v10,
          (const MethodInfo_3801E9C *)Method_System_Collections_Generic_List_EventDelegate__Remove__);
        monitor = (System_Collections_Generic_List_object__o *)Component_object[1].monitor;
        v12 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
        EventDelegate___ctor_49576072(v12, drag, 0);
        if ( monitor )
        {
          System_Collections_Generic_List_object___Remove(
            monitor,
            (Il2CppObject *)v12,
            (const MethodInfo_3801E9C *)Method_System_Collections_Generic_List_EventDelegate__Remove__);
          goto LABEL_11;
        }
      }
    }
LABEL_22:
    sub_1C6BC60(maskObject, click);
  }
LABEL_11:
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_22;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             maskObject,
                                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
    if ( !byte_4CB7B7E )
    {
      sub_1C6BA08(&CTouch_TypeInfo);
      byte_4CB7B7E = 1;
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


void UIDragDropListViewBackMask__DragEnd_44188156(
        UIDragDropListViewBackMask_o *this,
        EventDelegate_Callback_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  UnityEngine_Object_o *Component_object; // x21
  System_Collections_Generic_List_object__o *monitor; // x21
  EventDelegate_o *v8; // x22

  if ( (byte_4CB7B16 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Remove__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7B16 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_13;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               maskObject,
                                               (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)maskObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      monitor = (System_Collections_Generic_List_object__o *)Component_object[1].monitor;
      v8 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
      EventDelegate___ctor_49576072(v8, call, 0);
      if ( monitor )
      {
        System_Collections_Generic_List_object___Remove(
          monitor,
          (Il2CppObject *)v8,
          (const MethodInfo_3801E9C *)Method_System_Collections_Generic_List_EventDelegate__Remove__);
        goto LABEL_10;
      }
    }
LABEL_13:
    sub_1C6BC60(maskObject, call);
  }
LABEL_10:
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_13;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             maskObject,
                                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !maskObject )
    goto LABEL_13;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, 0, 0);
}


void UIDragDropListViewBackMask__DragStart(UIDragDropListViewBackMask_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  Il2CppObject *Component_object; // x19

  if ( (byte_4CB7B13 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7B13 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_12;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             maskObject,
                                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !maskObject )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, 1, 0);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_12;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       maskObject,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
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
    sub_1C6BC60(maskObject, method);
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
  UnityEngine_Object_o *Component_object; // x21
  System_Collections_Generic_List_object__o *m_CachedPtr; // x22
  EventDelegate_o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Collections_Generic_List_object__o *monitor; // x20
  EventDelegate_o *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4CB7B17 & 1) == 0 )
  {
    sub_1C6BA08(&CTouch_TypeInfo);
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIMultiTouch___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7B17 = 1;
  }
  if ( UnityEngine_Input__get_touchSupported(0) )
  {
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( !byte_4CB7B7E )
    {
      sub_1C6BA08(&CTouch_TypeInfo);
      byte_4CB7B7E = 1;
    }
    v8 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
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
                                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !maskObject )
    goto LABEL_30;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, 1, 0);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_30;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               maskObject,
                                               (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIMultiTouch___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)maskObject & 1) != 0 )
  {
    if ( Component_object )
    {
      m_CachedPtr = (System_Collections_Generic_List_object__o *)Component_object[1].fields.m_CachedPtr;
      v12 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
      EventDelegate___ctor_49576072(v12, click, 0);
      if ( m_CachedPtr )
      {
        items = m_CachedPtr->fields._items;
        v16 = Method_System_Collections_Generic_List_EventDelegate__Add__;
        ++m_CachedPtr->fields._version;
        if ( items )
        {
          size = m_CachedPtr->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              m_CachedPtr,
              (Il2CppObject *)v12,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            m_CachedPtr->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v12;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
          }
          monitor = (System_Collections_Generic_List_object__o *)Component_object[1].monitor;
          v20 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
          EventDelegate___ctor_49576072(v20, drag, 0);
          if ( monitor )
          {
            v23 = monitor->fields._items;
            v24 = Method_System_Collections_Generic_List_EventDelegate__Add__;
            ++monitor->fields._version;
            if ( v23 )
            {
              v25 = monitor->fields._size;
              if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  monitor,
                  (Il2CppObject *)v20,
                  *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
              }
              else
              {
                v26 = &v23->obj.klass + v25;
                monitor->fields._size = v25 + 1;
                v26[4] = (Il2CppClass *)v20;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v20, v21, v22);
              }
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
              return;
            }
          }
        }
      }
    }
LABEL_30:
    sub_1C6BC60(maskObject, v7);
  }
}


void UIDragDropListViewBackMask__DragStart_44187520(
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

  if ( (byte_4CB7B14 & 1) == 0 )
  {
    sub_1C6BA08(&EventDelegate_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB7B14 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_17;
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             maskObject,
                                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !maskObject )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, 1, 0);
  maskObject = this->fields.maskObject;
  if ( !maskObject )
    goto LABEL_17;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               maskObject,
                                               (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_object, 0, 0);
  if ( ((unsigned __int8)maskObject & 1) != 0 )
  {
    if ( Component_object )
    {
      monitor = (System_Collections_Generic_List_object__o *)Component_object[1].monitor;
      v8 = (EventDelegate_o *)sub_1C6BC54(EventDelegate_TypeInfo);
      EventDelegate___ctor_49576072(v8, call, 0);
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
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            monitor->fields._size = size + 1;
            v14[4] = (Il2CppClass *)v8;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
          }
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
          return;
        }
      }
    }
LABEL_17:
    sub_1C6BC60(maskObject, call);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIDragDropListViewBackMask__SetEnabledCollider(
        UIDragDropListViewBackMask_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0

  if ( (byte_4CB7B19 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    byte_4CB7B19 = 1;
  }
  maskObject = this->fields.maskObject;
  if ( !maskObject
    || (maskObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   maskObject,
                                                   (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_Collider___)) == 0 )
  {
    sub_1C6BC60(maskObject, value);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)maskObject, value, 0);
}