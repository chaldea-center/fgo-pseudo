void FavoriteChangeListViewObject___ctor(FavoriteChangeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59333CD & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_59333CD = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void FavoriteChangeListViewObject__Awake(FavoriteChangeListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_59333C4 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewItemDraw___);
    byte_59333C4 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_21FFECC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewItemDraw___);
  this->fields.itemDraw = (struct FavoriteChangeListViewItemDraw_o *)Component_object;
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


UnityEngine_GameObject_o *FavoriteChangeListViewObject__CreateDragObject(
        FavoriteChangeListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_59333C8 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
    byte_59333C8 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___)) == 0) )
  {
    sub_21FFECC(DragObject, v4);
  }
  FavoriteChangeListViewObject__Init_39806788((FavoriteChangeListViewObject_o *)DragObject, 2, v6);
  return v5;
}


FavoriteChangeListViewItem_o *FavoriteChangeListViewObject__GetItem(
        FavoriteChangeListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_59333C6 & 1) == 0 )
  {
    sub_21FFC50(&FavoriteChangeListViewItem_TypeInfo);
    byte_59333C6 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (FavoriteChangeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FavoriteChangeListViewItem_TypeInfo )
    return (FavoriteChangeListViewItem_o *)this->fields.linkItem;
  return 0;
}


void FavoriteChangeListViewObject__Init(
        FavoriteChangeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x9
  ListViewItem_c *klass; // x9
  __int64 naturalAligment; // x10
  int v12; // w23
  int32_t dispMode; // w22
  int32_t state; // w24
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x21
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
  int32_t v31; // w8
  MissionNaviTransitionBoardItem_c *v32; // x19

  if ( (byte_59333C9 & 1) == 0 )
  {
    sub_21FFC50(&FavoriteChangeListViewItem_TypeInfo);
    byte_59333C9 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (klass = linkItem->klass,
        naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment,
        klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (FavoriteChangeListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] == FavoriteChangeListViewItem_TypeInfo )
      v12 = initMode;
    else
      v12 = 0;
  }
  else
  {
    v12 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v12 != 0, 0);
  ((void (__fastcall *)(FavoriteChangeListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v12 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_21FFECC(transform, v16);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callbackFunc,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( v12 <= 1 )
  {
    if ( v12 )
    {
      v31 = v12;
      if ( v12 != 1 )
      {
LABEL_18:
        if ( !state )
          goto LABEL_24;
        goto LABEL_23;
      }
LABEL_22:
      this->fields.dispMode = v31;
      this->fields.state = v12;
      if ( !state )
        goto LABEL_24;
LABEL_23:
      if ( dispMode == this->fields.dispMode )
        goto LABEL_25;
      goto LABEL_24;
    }
LABEL_20:
    v31 = v12;
    v12 = 1;
    goto LABEL_22;
  }
  if ( v12 == 2 )
    goto LABEL_20;
  if ( v12 == 3 )
  {
    v31 = 2;
    goto LABEL_22;
  }
  if ( v12 != 4 )
    goto LABEL_18;
  this->fields.dispMode = 2;
  this->fields.state = 1;
LABEL_24:
  FavoriteChangeListViewObject__SetupDisp(this, v24);
LABEL_25:
  v32 = p_callbackFunc->klass;
  if ( p_callbackFunc->klass )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, v25, v26, v27, v28, v29, v30);
    ((void (__fastcall *)(Il2CppClass *, _QWORD))v32->_1.namespaze)(
      v32->_1.element_class,
      *(_QWORD *)&v32->_1.byval_arg.bits);
  }
}


void FavoriteChangeListViewObject__InitItem(FavoriteChangeListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeListViewObject__Init_39806788(
        FavoriteChangeListViewObject_o *this,
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
  FavoriteChangeListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeListViewObject__Init_39807916(
        FavoriteChangeListViewObject_o *this,
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
  FavoriteChangeListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeListViewObject__Init_39808000(
        FavoriteChangeListViewObject_o *this,
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
  FavoriteChangeListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void FavoriteChangeListViewObject__OnClickSelect(FavoriteChangeListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_59333CB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10254/*"OnClickSelectListView"*/);
    byte_59333CB = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_21FFECC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10254/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0);
  }
}


void FavoriteChangeListViewObject__OnDestroy(FavoriteChangeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_59333C5 & 1) == 0 )
  {
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59333C5 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_21FFBF4(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void FavoriteChangeListViewObject__OnLongPush(FavoriteChangeListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_59333CC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10317/*"OnLongPushListView"*/);
    sub_21FFC50(&StringLiteral_10336/*"OnPressCancel"*/);
    byte_59333CC = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_83224792(gameObject, (System_String_o *)StringLiteral_10336/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_21FFECC(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10317/*"OnLongPushListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FavoriteChangeListViewObject__SetInput(
        FavoriteChangeListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v8; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v11; // x1
  FavoriteChangeListViewItemDraw_o *v12; // x0

  if ( (byte_59333C7 & 1) == 0 )
  {
    sub_21FFC50(&FavoriteChangeListViewItem_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59333C7 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (FavoriteChangeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FavoriteChangeListViewItem_TypeInfo )
        v11 = this->fields.linkItem;
      else
        v11 = 0;
    }
    else
    {
      v11 = 0;
    }
    v12 = this->fields.itemDraw;
    if ( !v12 )
      sub_21FFECC(0, v11);
    FavoriteChangeListViewItemDraw__SetInput(v12, (FavoriteChangeListViewItem_o *)v11, isInput, v8);
  }
}


void FavoriteChangeListViewObject__SetItem(
        FavoriteChangeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50780416((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void FavoriteChangeListViewObject__SetItem_39811756(
        FavoriteChangeListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void FavoriteChangeListViewObject__SetupDisp(FavoriteChangeListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x20
  __int64 naturalAligment; // x10
  bool v5; // w1
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  FavoriteChangeListViewItemDraw_o *v11; // x0

  if ( (byte_59333CA & 1) == 0 )
  {
    sub_21FFC50(&FavoriteChangeListViewItem_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59333CA = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (FavoriteChangeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != FavoriteChangeListViewItem_TypeInfo )
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
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_21FFECC(0, v9);
    FavoriteChangeListViewItemDraw__SetItem(v11, (FavoriteChangeListViewItem_o *)linkItem, this->fields.dispMode, v10);
  }
}


void FavoriteChangeListViewObject__add_callbackFunc(
        FavoriteChangeListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  FavoriteChangeListViewObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_59333C2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_59333C2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (FavoriteChangeListViewObject_o *)sub_220024C(v8, System_Action_TypeInfo, v9, v10);
  FavoriteChangeListViewObject__remove_callbackFunc(v13, v14, v15);
}


void FavoriteChangeListViewObject__remove_callbackFunc(
        FavoriteChangeListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  FavoriteChangeListViewObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_59333C3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_59333C3 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (FavoriteChangeListViewObject_o *)sub_220024C(v8, System_Action_TypeInfo, v9, v10);
  FavoriteChangeListViewObject__Awake(v13, v14);
}