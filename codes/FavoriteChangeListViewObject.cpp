void FavoriteChangeListViewObject___ctor(FavoriteChangeListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C22286 & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    byte_4C22286 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void FavoriteChangeListViewObject__Awake(FavoriteChangeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4C2227D & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewItemDraw___);
    byte_4C2227D = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C2D6EC(0, v3);
  this->fields.itemDraw = (struct FavoriteChangeListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       dispObject,
                                                                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewItemDraw___);
  sub_1C2D434(&this->fields.itemDraw);
}


UnityEngine_GameObject_o *FavoriteChangeListViewObject__CreateDragObject(
        FavoriteChangeListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4C22281 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___);
    byte_4C22281 = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___)) == 0) )
  {
    sub_1C2D6EC(DragObject, v4);
  }
  FavoriteChangeListViewObject__Init_32901152((FavoriteChangeListViewObject_o *)DragObject, 2, v6);
  return v5;
}


FavoriteChangeListViewItem_o *FavoriteChangeListViewObject__GetItem(
        FavoriteChangeListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C2227F & 1) == 0 )
  {
    sub_1C2D490(&FavoriteChangeListViewItem_TypeInfo);
    byte_4C2227F = 1;
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
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x10
  int32_t v11; // w24
  int32_t dispMode; // w22
  int32_t state; // w23
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  struct System_Action_o **p_callbackFunc; // x21
  const MethodInfo *v17; // x1
  int32_t v18; // w9
  int32_t v19; // w8
  struct System_Action_o *v20; // x19

  if ( (byte_4C22282 & 1) == 0 )
  {
    sub_1C2D490(&FavoriteChangeListViewItem_TypeInfo);
    byte_4C22282 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (FavoriteChangeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FavoriteChangeListViewItem_TypeInfo )
      v11 = initMode;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  dispMode = this->fields.dispMode;
  state = this->fields.state;
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0);
  ((void (__fastcall *)(FavoriteChangeListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v11 == 3,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_1C2D6EC(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1C2D434(&this->fields.callbackFunc);
  v18 = 1;
  v19 = v11;
  switch ( v11 )
  {
    case 0:
    case 2:
      goto LABEL_15;
    case 1:
      v19 = v11;
      goto LABEL_14;
    case 3:
      v19 = 2;
LABEL_14:
      v18 = v11;
LABEL_15:
      this->fields.dispMode = v19;
      this->fields.state = v18;
      goto LABEL_16;
    case 4:
      this->fields.dispMode = 2;
      this->fields.state = 1;
      goto LABEL_20;
    default:
LABEL_16:
      if ( !state || dispMode != this->fields.dispMode )
LABEL_20:
        FavoriteChangeListViewObject__SetupDisp(this, v17);
      v20 = *p_callbackFunc;
      if ( *p_callbackFunc )
      {
        *p_callbackFunc = 0;
        sub_1C2D434(p_callbackFunc);
        ((void (__fastcall *)(intptr_t, intptr_t))v20->fields.invoke_impl)(v20->fields.method_code, v20->fields.method);
      }
      return;
  }
}


void FavoriteChangeListViewObject__InitItem(FavoriteChangeListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeListViewObject__Init_32901152(
        FavoriteChangeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  FavoriteChangeListViewObject__Init(this, initMode, 0, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeListViewObject__Init_32902460(
        FavoriteChangeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1 OVERLAPPED

  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  FavoriteChangeListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void FavoriteChangeListViewObject__Init_32902544(
        FavoriteChangeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1 OVERLAPPED

  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  FavoriteChangeListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void FavoriteChangeListViewObject__OnClickSelect(FavoriteChangeListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C22284 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9862/*"OnClickSelectListView"*/);
    byte_4C22284 = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C2D6EC(0, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9862/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0);
  }
}


void FavoriteChangeListViewObject__OnDestroy(FavoriteChangeListViewObject_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4C2227E & 1) == 0 )
  {
    sub_1C2D490(&NGUITools_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2227E = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    v6 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v6, 0);
    *p_dragObject = 0;
    sub_1C2D434(p_dragObject);
  }
}


void FavoriteChangeListViewObject__OnLongPush(FavoriteChangeListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C22285 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9922/*"OnLongPushListView"*/);
    sub_1C2D490(&StringLiteral_9940/*"OnPressCancel"*/);
    byte_4C22285 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_71145580(gameObject, (System_String_o *)StringLiteral_9940/*"OnPressCancel"*/, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0) )
    {
      sub_1C2D6EC(gameObject, v4);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_9922/*"OnLongPushListView"*/,
      (Il2CppObject *)this,
      0);
  }
}


void FavoriteChangeListViewObject__SetInput(
        FavoriteChangeListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v6; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v9; // x1
  FavoriteChangeListViewItemDraw_o *v10; // x0

  if ( (byte_4C22280 & 1) == 0 )
  {
    sub_1C2D490(&FavoriteChangeListViewItem_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22280 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (naturalAligment = FavoriteChangeListViewItem_TypeInfo->_2.naturalAligment,
          linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (FavoriteChangeListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == FavoriteChangeListViewItem_TypeInfo )
        v9 = this->fields.linkItem;
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1C2D6EC(0, v9);
    FavoriteChangeListViewItemDraw__SetInput(v10, (FavoriteChangeListViewItem_o *)v9, isInput, v6);
  }
}


void FavoriteChangeListViewObject__SetItem(
        FavoriteChangeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_43593652((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void FavoriteChangeListViewObject__SetItem_32909184(
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
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  FavoriteChangeListViewItemDraw_o *v9; // x0

  if ( (byte_4C22283 & 1) == 0 )
  {
    sub_1C2D490(&FavoriteChangeListViewItem_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22283 = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C2D6EC(0, v7);
    FavoriteChangeListViewItemDraw__SetItem(v9, (FavoriteChangeListViewItem_o *)linkItem, this->fields.dispMode, v8);
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
  __int64 v9; // x0
  bool v10; // zf
  FavoriteChangeListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C2227B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C2227B = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FavoriteChangeListViewObject_o *)sub_1C2D9AC(v8);
  FavoriteChangeListViewObject__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  FavoriteChangeListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C2227C & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C2227C = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FavoriteChangeListViewObject_o *)sub_1C2D9AC(v8);
  FavoriteChangeListViewObject__Awake(v11, v12);
}