void EventServantFatigueListViewObject___ctor(EventServantFatigueListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5932BB9 & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_5932BB9 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventServantFatigueListViewObject__Awake(EventServantFatigueListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5932BB1 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewItemDraw___);
    byte_5932BB1 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_21FFECC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventServantFatigueListViewItemDraw___);
  this->fields.itemDraw = (struct EventServantFatigueListViewItemDraw_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


EventServantFatigueListViewItem_o *EventServantFatigueListViewObject__GetItem(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_5932BB2 & 1) == 0 )
  {
    sub_21FFC50(&EventServantFatigueListViewItem_TypeInfo);
    byte_5932BB2 = 1;
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
  struct ListViewItem_o *linkItem; // x8
  bool v10; // w22
  ListViewItem_c *klass; // x10
  unsigned int naturalAligment; // w11
  unsigned int v13; // w23
  int32_t dispMode; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  MissionNaviTransitionBoardItem_o *p_CallbackFunc; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w9
  MissionNaviTransitionBoardItem_c *v32; // x19

  if ( (byte_5932BB3 & 1) == 0 )
  {
    sub_21FFC50(&EventServantFatigueListViewItem_TypeInfo);
    byte_5932BB3 = 1;
  }
  linkItem = this->fields.linkItem;
  v10 = this->fields.state == 0;
  if ( initMode == 4 )
  {
    if ( !linkItem )
    {
      v13 = 0;
      v10 = 1;
      goto LABEL_14;
    }
    klass = linkItem->klass;
    naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment;
    v10 = 1;
  }
  else
  {
    if ( !linkItem )
    {
LABEL_9:
      v13 = 0;
      goto LABEL_14;
    }
    klass = linkItem->klass;
    naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment;
  }
  if ( klass->_2.naturalAligment < naturalAligment )
    goto LABEL_9;
  if ( (EventServantFatigueListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == EventServantFatigueListViewItem_TypeInfo )
    v13 = initMode;
  else
    v13 = 0;
LABEL_14:
  dispMode = this->fields.dispMode;
  ListViewObject__SetVisible((ListViewObject_o *)this, v13 != 0, 0);
  ((void (__fastcall *)(EventServantFatigueListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v13 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_21FFECC(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.CallbackFunc = callbackFunc;
  p_CallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.CallbackFunc;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.CallbackFunc,
    (int32_t)callbackFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( v13 <= 4 )
  {
    v31 = dword_ECFAA0[v13];
    this->fields.dispMode = dword_ECFA8C[v13];
    this->fields.state = v31;
  }
  if ( v10 || dispMode != this->fields.dispMode )
    EventServantFatigueListViewObject__SetupDisp(this, v24);
  v32 = p_CallbackFunc->klass;
  if ( p_CallbackFunc->klass )
  {
    p_CallbackFunc->klass = 0;
    sub_21FFBF4(p_CallbackFunc, 0, v25, v26, v27, v28, v29, v30);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))v32->_1.namespaze)(
      v32->_1.element_class,
      *(_QWORD *)&v32->_1.byval_arg.bits);
  }
}


void EventServantFatigueListViewObject__InitItem(EventServantFatigueListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void EventServantFatigueListViewObject__Init_38932268(
        EventServantFatigueListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  EventServantFatigueListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void EventServantFatigueListViewObject__Init_38933236(
        EventServantFatigueListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  EventServantFatigueListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void EventServantFatigueListViewObject__Init_38933320(
        EventServantFatigueListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  EventServantFatigueListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
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
  const MethodInfo *v11; // x1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  __int64 *v16; // x8

  v2 = this;
  if ( (byte_5932BB7 & 1) == 0 )
  {
    sub_21FFC50(&EventServantFatigueListViewItem_TypeInfo);
    sub_21FFC50(&EventServantFatigueListViewManager_TypeInfo);
    sub_21FFC50(&Method_EventServantFatigueListViewObject_OnClickSelect__);
    sub_21FFC50(&StringLiteral_10256/*"OnClickSelectObject"*/);
    this = (EventServantFatigueListViewObject_o *)sub_21FFC50(&StringLiteral_10257/*"OnClickSelectPush"*/);
    byte_5932BB7 = 1;
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
      goto LABEL_40;
    v7 = EventServantFatigueListViewManager_TypeInfo->_2.naturalAligment;
    if ( manager->klass->_2.naturalAligment < (unsigned int)v7
      || (EventServantFatigueListViewManager_c *)manager->klass->_2.typeHierarchy[v7 - 1] != EventServantFatigueListViewManager_TypeInfo )
    {
      goto LABEL_40;
    }
    CallbackFunc_high = HIDWORD(manager[3].fields.CallbackFunc);
    switch ( CallbackFunc_high )
    {
      case 3:
        if ( !v5 )
          goto LABEL_40;
        if ( EventServantFatigueListViewItem__get_IsCanNotSelectPush(v5, 0) )
        {
          v14 = Method_EventServantFatigueListViewObject_OnClickSelect__;
          if ( (*((_BYTE *)Method_EventServantFatigueListViewObject_OnClickSelect__ + 83) & 2) != 0 )
            v14 = (_QWORD *)sub_21FFC68(Method_EventServantFatigueListViewObject_OnClickSelect__);
          v15 = (System_Reflection_MethodBase_o *)sub_21FFC34(v14, v14[4]);
          goto LABEL_39;
        }
        this = (EventServantFatigueListViewObject_o *)v2->fields.manager;
        if ( !this )
          goto LABEL_40;
        v16 = &StringLiteral_10257/*"OnClickSelectPush"*/;
        break;
      case 2:
        v12 = Method_EventServantFatigueListViewObject_OnClickSelect__;
        if ( (*((_BYTE *)Method_EventServantFatigueListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v12 = (_QWORD *)sub_21FFC68(Method_EventServantFatigueListViewObject_OnClickSelect__);
        v13 = (System_Reflection_MethodBase_o *)sub_21FFC34(v12, v12[4]);
        OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
        if ( v5 )
        {
          EventServantFatigueListViewItem__SwapChoice(v5, 0);
          goto LABEL_24;
        }
LABEL_40:
        sub_21FFECC(this, method);
      case 1:
        v9 = Method_EventServantFatigueListViewObject_OnClickSelect__;
        if ( (*((_BYTE *)Method_EventServantFatigueListViewObject_OnClickSelect__ + 83) & 2) != 0 )
          v9 = (_QWORD *)sub_21FFC68(Method_EventServantFatigueListViewObject_OnClickSelect__);
        v10 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 11, 0, 0);
        if ( v5 )
        {
          EventServantFatigueListViewItem__SwapLock(v5, 0);
LABEL_24:
          EventServantFatigueListViewObject__SetupDisp(v2, v11);
          return;
        }
        goto LABEL_40;
      default:
        if ( !v5 )
          goto LABEL_40;
        if ( !EventServantFatigueListViewItem__get_IsBaseSvt(v5, 0)
          && (v5->fields.isFatigueRecover || v5->fields.isCanNotSelect) )
        {
          v15 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_EventServantFatigueListViewObject_OnClickSelect__);
LABEL_39:
          OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0);
          return;
        }
        this = manager;
        v16 = &StringLiteral_10256/*"OnClickSelectObject"*/;
        break;
    }
    UnityEngine_Component__SendMessage((UnityEngine_Component_o *)this, (System_String_o *)*v16, (Il2CppObject *)v2, 0);
  }
}


void EventServantFatigueListViewObject__OnLongPush(EventServantFatigueListViewObject_o *this, const MethodInfo *method)
{
  EventServantFatigueListViewObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  v2 = this;
  if ( (byte_5932BB8 & 1) == 0 )
  {
    sub_21FFC50(&EventServantFatigueListViewItem_TypeInfo);
    sub_21FFC50(&StringLiteral_10317/*"OnLongPushListView"*/);
    this = (EventServantFatigueListViewObject_o *)sub_21FFC50(&StringLiteral_10336/*"OnPressCancel"*/);
    byte_5932BB8 = 1;
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
        UnityEngine_GameObject__SendMessage_83224792(
          (UnityEngine_GameObject_o *)this,
          (System_String_o *)StringLiteral_10336/*"OnPressCancel"*/,
          0);
        this = (EventServantFatigueListViewObject_o *)v2->fields.manager;
        if ( this )
        {
          UnityEngine_Component__SendMessage(
            (UnityEngine_Component_o *)this,
            (System_String_o *)StringLiteral_10317/*"OnLongPushListView"*/,
            (Il2CppObject *)v2,
            0);
          return;
        }
      }
LABEL_11:
      sub_21FFECC(this, method);
    }
  }
}


void EventServantFatigueListViewObject__SetItem(
        EventServantFatigueListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50780416((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void EventServantFatigueListViewObject__SetItem_38932500(
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
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  EventServantFatigueListViewItemDraw_o *v10; // x0

  if ( (byte_5932BB4 & 1) == 0 )
  {
    sub_21FFC50(&EventServantFatigueListViewItem_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932BB4 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_21FFECC(0, v9);
    EventServantFatigueListViewItemDraw__SetItem(
      v10,
      (EventServantFatigueListViewItem_o *)linkItem,
      this->fields.dispMode,
      0);
  }
}


void EventServantFatigueListViewObject__Start(EventServantFatigueListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.state )
    EventServantFatigueListViewObject__Init_38932268(this, 2, v2);
}


System_String_o *EventServantFatigueListViewObject__ToString(
        EventServantFatigueListViewObject_o *this,
        const MethodInfo *method)
{
  int32_t dispMode; // w10
  System_String_o *v4; // x0
  float z; // w9
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_Enum_o v9; // [xsp+8h] [xbp-58h] BYREF
  int32_t v10; // [xsp+18h] [xbp-48h]
  __int64 v11; // [xsp+20h] [xbp-40h] BYREF
  float v12; // [xsp+28h] [xbp-38h]

  if ( (byte_5932BB6 & 1) == 0 )
  {
    sub_21FFC50(&EventServantFatigueListViewItemDraw_DispMode_TypeInfo);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    byte_5932BB6 = 1;
  }
  dispMode = this->fields.dispMode;
  v12 = 0.0;
  v11 = 0;
  v9.klass = (System_Enum_c *)EventServantFatigueListViewItemDraw_DispMode_TypeInfo;
  v9.monitor = (void *)-1LL;
  v10 = dispMode;
  v4 = System_Enum__ToString(&v9, 0);
  z = this->fields.basePosition.fields.z;
  v6 = v4;
  v11 = *(_QWORD *)&this->fields.basePosition.fields.x;
  v12 = z;
  v7 = (System_String_o *)sub_240362C(&v11, 0, 0, 0);
  return System_String__Concat_75481624(v6, (System_String_o *)StringLiteral_113/*" "*/, v7, 0);
}


void EventServantFatigueListViewObject__UpdateDisp(EventServantFatigueListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x9
  __int64 naturalAligment; // x12
  struct ListViewItem_o *v6; // x20
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  EventServantFatigueListViewItemDraw_o *v9; // x0

  if ( (byte_5932BB5 & 1) == 0 )
  {
    sub_21FFC50(&EventServantFatigueListViewItem_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932BB5 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = EventServantFatigueListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (EventServantFatigueListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventServantFatigueListViewItem_TypeInfo )
      v6 = this->fields.linkItem;
    else
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_21FFECC(0, v8);
    EventServantFatigueListViewItemDraw__UpdateDisp(v9, (EventServantFatigueListViewItem_o *)v6, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  EventServantFatigueListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5932BAF & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5932BAF = 1;
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
    v11 = sub_223767C(p_CallbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (EventServantFatigueListViewObject_o *)sub_220024C(v8, System_Action_TypeInfo, v9, v10);
  EventServantFatigueListViewObject__remove_CallbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  EventServantFatigueListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5932BB0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5932BB0 = 1;
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
    v11 = sub_223767C(p_CallbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (EventServantFatigueListViewObject_o *)sub_220024C(v8, System_Action_TypeInfo, v9, v10);
  EventServantFatigueListViewObject__Awake(v13, v14);
}