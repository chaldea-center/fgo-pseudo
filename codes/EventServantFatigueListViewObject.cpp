void EventServantFatigueListViewObject___ctor(EventServantFatigueListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4D2B1DD & 1) == 0 )
  {
    sub_1C93AD4(&ListViewObject_TypeInfo);
    byte_4D2B1DD = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventServantFatigueListViewObject__Awake(EventServantFatigueListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4D2B1D5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewItemDraw___);
    byte_4D2B1D5 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C93D2C(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewItemDraw___);
  this->fields.itemDraw = (struct EventServantFatigueListViewItemDraw_o *)Component_object;
  sub_1C93A78(&this->fields.itemDraw, Component_object);
}


EventServantFatigueListViewItem_o *EventServantFatigueListViewObject__GetItem(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4D2B1D6 & 1) == 0 )
  {
    sub_1C93AD4(&EventServantFatigueListViewItem_TypeInfo);
    byte_4D2B1D6 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventServantFatigueListViewItem_TypeInfo )
    return (EventServantFatigueListViewItem_o *)this->fields.linkItem;
  return 0;
}


void EventServantFatigueListViewObject__Init(
        EventServantFatigueListViewObject_o *this,
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

  if ( (byte_4D2B1D7 & 1) == 0 )
  {
    sub_1C93AD4(&EventServantFatigueListViewItem_TypeInfo);
    byte_4D2B1D7 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventServantFatigueListViewItem_TypeInfo )
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
  ((void (__fastcall *)(EventServantFatigueListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v11 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C93D2C(transform, v16);
  }
  v17 = v13 || v14;
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.CallbackFunc = callbackFunc;
  p_CallbackFunc = &this->fields.CallbackFunc;
  sub_1C93A78(&this->fields.CallbackFunc, callbackFunc);
  if ( v11 <= 4 )
  {
    v20 = dword_D333E4[v11];
    this->fields.dispMode = dword_D333D0[v11];
    this->fields.state = v20;
  }
  if ( v17 || dispMode != this->fields.dispMode )
    EventServantFatigueListViewObject__SetupDisp(this, v19);
  v21 = *p_CallbackFunc;
  if ( *p_CallbackFunc )
  {
    *p_CallbackFunc = 0;
    sub_1C93A78(p_CallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v21->fields.invoke_impl)(v21->fields.method_code, v21->fields.method);
  }
}


void EventServantFatigueListViewObject__InitItem(EventServantFatigueListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void EventServantFatigueListViewObject__Init_32995344(
        EventServantFatigueListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Vector3_o v10; // 0:kr00_12.12

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v10.fields.x = v5;
  v10.fields.y = v6;
  v10.fields.z = v7;
  EventServantFatigueListViewObject__Init(this, initMode, 0, v4, v10, v3);
}


void EventServantFatigueListViewObject__Init_32995992(
        EventServantFatigueListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Vector3_o v11; // 0:kr00_12.12

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v11.fields.x = v5;
  v11.fields.y = v6;
  v11.fields.z = v7;
  EventServantFatigueListViewObject__Init(this, initMode, callbackFunc, v4, v11, method);
}


void EventServantFatigueListViewObject__Init_33012308(
        EventServantFatigueListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Vector3_o v11; // 0:kr00_12.12

  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  v11.fields.x = v5;
  v11.fields.y = v6;
  v11.fields.z = v7;
  EventServantFatigueListViewObject__Init(this, initMode, callbackFunc, delay, v11, method);
}


void EventServantFatigueListViewObject__OnClickSelect(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  EventServantFatigueListViewObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  EventServantFatigueListViewItem_o *v5; // x20
  EventServantFatigueListViewObject_o *manager; // x21
  __int64 v7; // x10
  int CallbackFunc_high; // w8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  __int64 *v13; // x8
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  v2 = this;
  if ( (byte_4D2B1DB & 1) == 0 )
  {
    sub_1C93AD4(&EventServantFatigueListViewItem_TypeInfo);
    sub_1C93AD4(&EventServantFatigueListViewManager_TypeInfo);
    sub_1C93AD4(&Method_EventServantFatigueListViewObject_OnClickSelect__);
    sub_1C93AD4(&StringLiteral_9925/*"OnClickSelectObject"*/);
    this = (EventServantFatigueListViewObject_o *)sub_1C93AD4(&StringLiteral_9926/*"OnClickSelectPush"*/);
    byte_4D2B1DB = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventServantFatigueListViewItem_TypeInfo )
        v5 = (EventServantFatigueListViewItem_o *)v2->fields.linkItem;
      else
        v5 = 0;
    }
    else
    {
      v5 = 0;
    }
    manager = (EventServantFatigueListViewObject_o *)v2->fields.manager;
    if ( !manager )
      goto LABEL_37;
    v7 = EventServantFatigueListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment < (unsigned int)v7
      || (EventServantFatigueListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != EventServantFatigueListViewManager_TypeInfo )
    {
      goto LABEL_37;
    }
    CallbackFunc_high = HIDWORD(manager[3].fields.CallbackFunc);
    if ( CallbackFunc_high == 2 )
    {
      v11 = Method_EventServantFatigueListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_EventServantFatigueListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1C93AEC(Method_EventServantFatigueListViewObject_OnClickSelect__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
      if ( v5 )
      {
        v5->fields.isSwapChoice ^= 1u;
        goto LABEL_23;
      }
LABEL_37:
      sub_1C93D2C(this, method);
    }
    if ( CallbackFunc_high == 1 )
    {
      v9 = Method_EventServantFatigueListViewObject_OnClickSelect__;
      if ( (*((_BYTE *)Method_EventServantFatigueListViewObject_OnClickSelect__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1C93AEC(Method_EventServantFatigueListViewObject_OnClickSelect__);
      v10 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 11, 0, 0);
      if ( v5 )
      {
        v5->fields.isSwapLock ^= 1u;
LABEL_23:
        EventServantFatigueListViewObject__SetupDisp(v2, method);
        return;
      }
      goto LABEL_37;
    }
    if ( !v5 )
      goto LABEL_37;
    if ( CallbackFunc_high == 3 )
    {
      if ( !EventServantFatigueListViewItem__get_IsCanNotSelectPush(v5, method) )
      {
        this = (EventServantFatigueListViewObject_o *)v2->fields.manager;
        if ( !this )
          goto LABEL_37;
        v13 = &StringLiteral_9926/*"OnClickSelectPush"*/;
        goto LABEL_31;
      }
    }
    else if ( EventServantFatigueListViewItem__get_IsBaseSvt(v5, method)
           || !v5->fields.isFatigueRecover && !v5->fields.isCanNotSelect )
    {
      v13 = &StringLiteral_9925/*"OnClickSelectObject"*/;
      this = manager;
LABEL_31:
      UnityEngine_Component__SendMessage(
        (UnityEngine_Component_o *)this,
        (System_String_o *)*v13,
        (Il2CppObject *)v2,
        0);
      return;
    }
    v14 = Method_EventServantFatigueListViewObject_OnClickSelect__;
    if ( (*((_BYTE *)Method_EventServantFatigueListViewObject_OnClickSelect__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1C93AEC(Method_EventServantFatigueListViewObject_OnClickSelect__);
    v15 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0);
  }
}


void EventServantFatigueListViewObject__OnLongPush(EventServantFatigueListViewObject_o *this, const MethodInfo *method)
{
  EventServantFatigueListViewObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  v2 = this;
  if ( (byte_4D2B1DC & 1) == 0 )
  {
    sub_1C93AD4(&EventServantFatigueListViewItem_TypeInfo);
    sub_1C93AD4(&StringLiteral_9984/*"OnLongPushListView"*/);
    this = (EventServantFatigueListViewObject_o *)sub_1C93AD4(&StringLiteral_10002/*"OnPressCancel"*/);
    byte_4D2B1DC = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != EventServantFatigueListViewItem_TypeInfo )
    {
      goto LABEL_11;
    }
    if ( linkItem[1].monitor )
    {
      this = (EventServantFatigueListViewObject_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v2,
                                                      0);
      if ( this )
      {
        UnityEngine_GameObject__SendMessage_72101276(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_10002/*"OnPressCancel"*/,
          0);
        this = (EventServantFatigueListViewObject_o *)v2->fields.manager;
        if ( this )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)StringLiteral_9984/*"OnLongPushListView"*/,
            (Il2CppObject *)v2,
            0);
          return;
        }
      }
LABEL_11:
      sub_1C93D2C(this, method);
    }
  }
}


void EventServantFatigueListViewObject__SetItem(
        EventServantFatigueListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_44518484((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void EventServantFatigueListViewObject__SetItem_33011608(
        EventServantFatigueListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void EventServantFatigueListViewObject__SetupDisp(EventServantFatigueListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  EventServantFatigueListViewItemDraw_o *v9; // x0

  if ( (byte_4D2B1D8 & 1) == 0 )
  {
    sub_1C93AD4(&EventServantFatigueListViewItem_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B1D8 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != EventServantFatigueListViewItem_TypeInfo )
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
      sub_1C93D2C(0, v7);
    EventServantFatigueListViewItemDraw__SetItem(
      v9,
      (EventServantFatigueListViewItem_o *)linkItem,
      this->fields.dispMode,
      v8);
  }
}


void EventServantFatigueListViewObject__Start(EventServantFatigueListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    EventServantFatigueListViewObject__Init_32995344(this, 2, v2);
}


System_String_o *EventServantFatigueListViewObject__ToString(
        EventServantFatigueListViewObject_o *this,
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

  if ( (byte_4D2B1DA & 1) == 0 )
  {
    sub_1C93AD4(&EventServantFatigueListViewItemDraw_DispMode_TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    byte_4D2B1DA = 1;
  }
  v11 = 0.0;
  v10 = 0;
  v8.klass = (System_Enum_c *)EventServantFatigueListViewItemDraw_DispMode_TypeInfo;
  v8.monitor = (void *)-1LL;
  dispMode = this->fields.dispMode;
  v3 = System_Enum__ToString(&v8, 0);
  z = this->fields.basePosition.fields.z;
  v5 = v3;
  v10 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v11 = z;
  v6 = (System_String_o *)sub_1E502DC(&v10, 0, 0, 0);
  return System_String__Concat_64463988(v5, (System_String_o *)StringLiteral_113/*" "*/, v6, 0);
}


void EventServantFatigueListViewObject__UpdateDisp(EventServantFatigueListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  __int64 naturalAligment; // x12
  struct ListViewItem_o *v5; // x20
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  EventServantFatigueListViewItemDraw_o *v9; // x0

  if ( (byte_4D2B1D9 & 1) == 0 )
  {
    sub_1C93AD4(&EventServantFatigueListViewItem_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B1D9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventServantFatigueListViewItem_TypeInfo )
      v5 = this->fields.linkItem;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C93D2C(0, v7);
    EventServantFatigueListViewItemDraw__SetFatigueMask(v9, (EventServantFatigueListViewItem_o *)v5, v8);
  }
}


void EventServantFatigueListViewObject__add_CallbackFunc(
        EventServantFatigueListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *CallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventServantFatigueListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2B1D3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2B1D3 = 1;
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
    v9 = sub_1CEF8A8(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventServantFatigueListViewObject_o *)sub_1C940C8(v8);
  EventServantFatigueListViewObject__remove_CallbackFunc(v11, v12, v13);
}


void EventServantFatigueListViewObject__remove_CallbackFunc(
        EventServantFatigueListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_CallbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *CallbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventServantFatigueListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2B1D4 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2B1D4 = 1;
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
    v9 = sub_1CEF8A8(p_CallbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventServantFatigueListViewObject_o *)sub_1C940C8(v8);
  EventServantFatigueListViewObject__Awake(v11, v12);
}