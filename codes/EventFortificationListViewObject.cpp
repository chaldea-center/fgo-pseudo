void EventFortificationListViewObject___ctor(EventFortificationListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4D26A49 & 1) == 0 )
  {
    sub_1C94098(&ListViewObject_TypeInfo);
    byte_4D26A49 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventFortificationListViewObject__Awake(EventFortificationListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4D26A42 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewItemDraw___);
    byte_4D26A42 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C942F0(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationListViewItemDraw___);
  this->fields.itemDraw = (struct EventFortificationListViewItemDraw_o *)Component_object;
  sub_1C9403C(&this->fields.itemDraw, Component_object);
}


EventFortificationListViewItem_o *EventFortificationListViewObject__GetItem(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4D26A43 & 1) == 0 )
  {
    sub_1C94098(&EventFortificationListViewItem_TypeInfo);
    byte_4D26A43 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventFortificationListViewItem_TypeInfo )
    return (EventFortificationListViewItem_o *)this->fields.linkItem;
  return 0;
}


void EventFortificationListViewObject__Init(
        EventFortificationListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  __int64 naturalAligment; // x11
  unsigned int v11; // w23
  int32_t dispMode; // w22
  bool v13; // w21
  bool v14; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  bool v17; // w24
  struct System_Action_o **p_CallbackFunc; // x21
  const MethodInfo *v19; // x1
  int32_t v20; // w9
  struct System_Action_o *v21; // x19

  if ( (byte_4D26A44 & 1) == 0 )
  {
    sub_1C94098(&EventFortificationListViewItem_TypeInfo);
    byte_4D26A44 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventFortificationListViewItem_TypeInfo )
      v11 = initMode;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  dispMode = this->fields.dispMode;
  v13 = initMode == 4;
  v14 = this->fields.state == 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0);
  ((void (__fastcall *)(EventFortificationListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v11 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C942F0(transform, v16);
  }
  v17 = v13 || v14;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.CallbackFunc = callbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  sub_1C9403C(&this->fields.CallbackFunc, callbackFunc);
  if ( v11 <= 4 )
  {
    v20 = dword_D31360[v11];
    this->fields.dispMode = dword_D3134C[v11];
    this->fields.state = v20;
  }
  if ( v17 || dispMode != this->fields.dispMode )
    EventFortificationListViewObject__SetupDisp(this, v19);
  v21 = *p_CallbackFunc;
  if ( *p_CallbackFunc )
  {
    *p_CallbackFunc = 0;
    sub_1C9403C(p_CallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v21->fields.invoke_impl)(v21->fields.method_code, v21->fields.method);
  }
}


void EventFortificationListViewObject__InitItem(EventFortificationListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void EventFortificationListViewObject__Init_32376868(
        EventFortificationListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  EventFortificationListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void EventFortificationListViewObject__Init_32377516(
        EventFortificationListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  EventFortificationListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void EventFortificationListViewObject__Init_32394668(
        EventFortificationListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  EventFortificationListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void EventFortificationListViewObject__OnClickSelect(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  EventFortificationListViewItem_o *v5; // x20
  UnityEngine_Component_o *manager; // x0
  __int64 v7; // x10
  int monitor_high; // w8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  __int64 *v13; // x8
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  if ( (byte_4D26A47 & 1) == 0 )
  {
    sub_1C94098(&EventFortificationListViewItem_TypeInfo);
    sub_1C94098(&EventFortificationListViewManager_TypeInfo);
    sub_1C94098(&Method_EventFortificationListViewObject_OnClickSelect__);
    sub_1C94098(&StringLiteral_9891/*"OnClickSelectObject"*/);
    sub_1C94098(&StringLiteral_9892/*"OnClickSelectPush"*/);
    byte_4D26A47 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventFortificationListViewItem_TypeInfo )
        v5 = (EventFortificationListViewItem_o *)this->fields.linkItem;
      else
        v5 = 0;
    }
    else
    {
      v5 = 0;
    }
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      goto LABEL_35;
    v7 = EventFortificationListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment < (unsigned int)v7
      || (EventFortificationListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != EventFortificationListViewManager_TypeInfo )
    {
      goto LABEL_35;
    }
    monitor_high = HIDWORD(manager[21].monitor);
    if ( monitor_high == 2 )
    {
      v11 = Method_EventFortificationListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_EventFortificationListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1C940B0(Method_EventFortificationListViewObject_OnClickSelect__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C9407C(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
      if ( v5 )
      {
        v5->fields.isSwapChoice ^= 1u;
        goto LABEL_23;
      }
LABEL_35:
      sub_1C942F0(manager, method);
    }
    if ( monitor_high == 1 )
    {
      v9 = Method_EventFortificationListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_EventFortificationListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C940B0(Method_EventFortificationListViewObject_OnClickSelect__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C9407C(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 11, 0, 0);
      if ( v5 )
      {
        v5->fields.isSwapLock ^= 1u;
LABEL_23:
        EventFortificationListViewObject__SetupDisp(this, method);
        return;
      }
      goto LABEL_35;
    }
    if ( !v5 )
      goto LABEL_35;
    if ( monitor_high == 3 )
    {
      if ( !EventFortificationListViewItem__get_IsCanNotSelectPush(v5, method) )
      {
        manager = (UnityEngine_Component_o *)this->fields.manager;
        if ( !manager )
          goto LABEL_35;
        v13 = &StringLiteral_9892/*"OnClickSelectPush"*/;
        goto LABEL_34;
      }
    }
    else if ( !v5->fields.isCanNotSelect )
    {
      v13 = &StringLiteral_9891/*"OnClickSelectObject"*/;
LABEL_34:
      UnityEngine_Component__SendMessage(manager, (System_String_o *)*v13, (Il2CppObject *)this, 0);
      return;
    }
    v14 = Method_EventFortificationListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_EventFortificationListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1C940B0(Method_EventFortificationListViewObject_OnClickSelect__);
    v15 = (System_Reflection_MethodBase_o *)sub_1C9407C(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0);
  }
}


void EventFortificationListViewObject__OnLongPush(EventFortificationListViewObject_o *this, const MethodInfo *method)
{
  EventFortificationListViewObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  v2 = this;
  if ( (byte_4D26A48 & 1) == 0 )
  {
    sub_1C94098(&EventFortificationListViewItem_TypeInfo);
    sub_1C94098(&Method_EventFortificationListViewObject_OnLongPush__);
    sub_1C94098(&StringLiteral_9950/*"OnLongPushListView"*/);
    this = (EventFortificationListViewObject_o *)sub_1C94098(&StringLiteral_9968/*"OnPressCancel"*/);
    byte_4D26A48 = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventFortificationListViewItem_TypeInfo )
    {
      if ( BYTE3(linkItem[1].fields.sortValue2B) )
      {
        v5 = Method_EventFortificationListViewObject_OnLongPush__;
        if ( (*((_BYTE *)Method_EventFortificationListViewObject_OnLongPush__ + 83) & 2) != 0 )
          v5 = (_QWORD *)sub_1C940B0(Method_EventFortificationListViewObject_OnLongPush__);
        v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
        OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
        return;
      }
      if ( !linkItem[1].monitor )
        return;
      this = (EventFortificationListViewObject_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v2,
                                                     0);
      if ( this )
      {
        UnityEngine_GameObject__SendMessage_72092340(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_9968/*"OnPressCancel"*/,
          0);
        this = (EventFortificationListViewObject_o *)v2->fields.manager;
        if ( this )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)StringLiteral_9950/*"OnLongPushListView"*/,
            (Il2CppObject *)v2,
            0);
          return;
        }
      }
    }
    sub_1C942F0(this, method);
  }
}


void EventFortificationListViewObject__SetItem(
        EventFortificationListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44621212((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void EventFortificationListViewObject__SetItem_32393968(
        EventFortificationListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void EventFortificationListViewObject__SetupDisp(EventFortificationListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  EventFortificationListViewItemDraw_o *v9; // x0

  if ( (byte_4D26A45 & 1) == 0 )
  {
    sub_1C94098(&EventFortificationListViewItem_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26A45 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = EventFortificationListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventFortificationListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != EventFortificationListViewItem_TypeInfo )
  {
    linkItem = 0;
LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  v5 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C942F0(0, v7);
    EventFortificationListViewItemDraw__SetItem(
      v9,
      (EventFortificationListViewItem_o *)linkItem,
      this->fields.dispMode,
      v8);
  }
}


void EventFortificationListViewObject__Start(EventFortificationListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    EventFortificationListViewObject__Init_32376868(this, 2, v2);
}


System_String_o *EventFortificationListViewObject__ToString(
        EventFortificationListViewObject_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  float z; // w9
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  System_Enum_o v8; // [xsp+8h] [xbp-58h] BYREF
  int32_t dispMode; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h] BYREF
  float v11; // [xsp+28h] [xbp-38h]

  if ( (byte_4D26A46 & 1) == 0 )
  {
    sub_1C94098(&EventFortificationListViewItemDraw_DispMode_TypeInfo);
    sub_1C94098(&StringLiteral_113/*" "*/);
    byte_4D26A46 = 1;
  }
  v11 = 0.0;
  v10 = 0;
  v8.klass = (System_Enum_c *)EventFortificationListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1E54120(&v10, 0, 0, 0);
  return System_String__Concat_64456008(v5, (System_String_o *)StringLiteral_113/*" "*/, v6, 0);
}


void EventFortificationListViewObject__add_CallbackFunc(
        EventFortificationListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *CallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventFortificationListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D26A40 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D26A40 = 1;
  }
  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  v6 = (System_Delegate_o *)CallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventFortificationListViewObject_o *)sub_1C9468C(v8);
  EventFortificationListViewObject__remove_CallbackFunc(v11, v12, v13);
}


void EventFortificationListViewObject__remove_CallbackFunc(
        EventFortificationListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *CallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventFortificationListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D26A41 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D26A41 = 1;
  }
  CallbackFunc = this->fields.CallbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  v6 = (System_Delegate_o *)CallbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CEFE6C(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventFortificationListViewObject_o *)sub_1C9468C(v8);
  EventFortificationListViewObject__Awake(v11, v12);
}