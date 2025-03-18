void __fastcall FavoriteChangeListViewObject___ctor(FavoriteChangeListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C1D1C1 & 1) == 0 )
  {
    sub_1C3B764(&ListViewObject_TypeInfo, method);
    byte_4C1D1C1 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall FavoriteChangeListViewObject__Awake(FavoriteChangeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4C1D1B8 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewItemDraw___, method);
    byte_4C1D1B8 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C3B9C0(0LL, v3);
  this->fields.itemDraw = (struct FavoriteChangeListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                       dispObject,
                                                                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewItemDraw___);
  sub_1C3B708(&this->fields.itemDraw);
}


UnityEngine_GameObject_o *__fastcall FavoriteChangeListViewObject__CreateDragObject(
        FavoriteChangeListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x19
  const MethodInfo *v6; // x2

  if ( (byte_4C1D1BC & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___, method);
    byte_4C1D1BC = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v5 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_FavoriteChangeListViewObject___)) == 0LL) )
  {
    sub_1C3B9C0(DragObject, v4);
  }
  FavoriteChangeListViewObject__Init_32112776((FavoriteChangeListViewObject_o *)DragObject, 2, v6);
  return v5;
}


FavoriteChangeListViewItem_o *__fastcall FavoriteChangeListViewObject__GetItem(
        FavoriteChangeListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4C1D1BA & 1) == 0 )
  {
    sub_1C3B764(&FavoriteChangeListViewItem_TypeInfo, method);
    byte_4C1D1BA = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(FavoriteChangeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (FavoriteChangeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == FavoriteChangeListViewItem_TypeInfo )
    return (FavoriteChangeListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewObject__Init(
        FavoriteChangeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x10
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

  if ( (byte_4C1D1BD & 1) == 0 )
  {
    sub_1C3B764(&FavoriteChangeListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4C1D1BD = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(FavoriteChangeListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (FavoriteChangeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == FavoriteChangeListViewItem_TypeInfo )
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
  ListViewObject__SetVisible((ListViewObject_o *)this, v11 != 0, 0LL);
  ((void (__fastcall *)(FavoriteChangeListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v11 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C3B9C0(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1C3B708(&this->fields.callbackFunc);
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
        *p_callbackFunc = 0LL;
        sub_1C3B708(p_callbackFunc);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v20->fields.m_target)(
          v20->fields.original_method_info,
          *(_QWORD *)&v20->fields.extra_arg);
      }
      return;
  }
}


void __fastcall FavoriteChangeListViewObject__InitItem(FavoriteChangeListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewObject__Init_32112776(
        FavoriteChangeListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4C1C511 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4C1C511 = 1;
  }
  FavoriteChangeListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewObject__Init_32113552(
        FavoriteChangeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4C1C511 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4C1C511 = 1;
  }
  FavoriteChangeListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewObject__Init_32113636(
        FavoriteChangeListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4C1C511 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode);
    byte_4C1C511 = 1;
  }
  FavoriteChangeListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall FavoriteChangeListViewObject__OnClickSelect(
        FavoriteChangeListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4C1D1BF & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_10057/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, method);
    byte_4C1D1BF = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1C3B9C0(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10057/*"PARTY_ORGANIZATION_SERVANT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall FavoriteChangeListViewObject__OnDestroy(FavoriteChangeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *v7; // x20

  if ( (byte_4C1D1B9 & 1) == 0 )
  {
    sub_1C3B764(&NGUITools_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C1D1B9 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(v7, 0LL);
    *p_dragObject = 0LL;
    sub_1C3B708(p_dragObject);
  }
}


void __fastcall FavoriteChangeListViewObject__OnLongPush(
        FavoriteChangeListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_4C1D1C0 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_10115/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, method);
    sub_1C3B764(&StringLiteral_10133/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_RIGHT"*/, v3);
    byte_4C1D1C0 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_71104208(gameObject, (System_String_o *)StringLiteral_10133/*"PHOTO_TARGET_SELECT_DIALOG_MESSAGE_RIGHT"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_1C3B9C0(gameObject, v5);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10115/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FavoriteChangeListViewObject__SetInput(
        FavoriteChangeListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v9; // x1
  FavoriteChangeListViewItemDraw_o *v10; // x0

  if ( (byte_4C1D1BB & 1) == 0 )
  {
    sub_1C3B764(&FavoriteChangeListViewItem_TypeInfo, isInput);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    byte_4C1D1BB = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(FavoriteChangeListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (FavoriteChangeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == FavoriteChangeListViewItem_TypeInfo )
        v9 = this->fields.linkItem;
      else
        v9 = 0LL;
    }
    else
    {
      v9 = 0LL;
    }
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1C3B9C0(0LL, v9);
    FavoriteChangeListViewItemDraw__SetInput(v10, (FavoriteChangeListViewItem_o *)v9, isInput, 0LL);
  }
}


void __fastcall FavoriteChangeListViewObject__SetItem(
        FavoriteChangeListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_42230072((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall FavoriteChangeListViewObject__SetItem_32112388(
        FavoriteChangeListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall FavoriteChangeListViewObject__SetupDisp(FavoriteChangeListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v6; // w1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  FavoriteChangeListViewItemDraw_o *v9; // x0

  if ( (byte_4C1D1BE & 1) == 0 )
  {
    sub_1C3B764(&FavoriteChangeListViewItem_TypeInfo, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C1D1BE = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(FavoriteChangeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (FavoriteChangeListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != FavoriteChangeListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  v6 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v6, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1C3B9C0(0LL, v8);
    FavoriteChangeListViewItemDraw__SetItem(v9, (FavoriteChangeListViewItem_o *)linkItem, this->fields.dispMode, 0LL);
  }
}


void __fastcall FavoriteChangeListViewObject__add_callbackFunc(
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

  if ( (byte_4C1D1B6 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, value);
    byte_4C1D1B6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FavoriteChangeListViewObject_o *)sub_1C3BC80(v8);
  FavoriteChangeListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall FavoriteChangeListViewObject__remove_callbackFunc(
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

  if ( (byte_4C1D1B7 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, value);
    byte_4C1D1B7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (FavoriteChangeListViewObject_o *)sub_1C3BC80(v8);
  FavoriteChangeListViewObject__Awake(v11, v12);
}