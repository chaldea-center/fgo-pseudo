void __fastcall PhotoCampaignListViewObject___ctor(PhotoCampaignListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11BF1 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    byte_4B11BF1 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall PhotoCampaignListViewObject__Awake(PhotoCampaignListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4B11BE8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewItemDraw___, method, v2);
    byte_4B11BE8 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BCAA3C(0LL, v4);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewItemDraw___);
  this->fields.itemDraw = (struct PhotoCampaignListViewItemDraw_o *)Component_object;
  sub_1BCA784(&this->fields.itemDraw, Component_object);
}


UnityEngine_GameObject_o *__fastcall PhotoCampaignListViewObject__CreateDragObject(
        PhotoCampaignListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *DragObject; // x0
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x19
  const MethodInfo *v7; // x2

  if ( (byte_4B11BEC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___, method, v2);
    byte_4B11BEC = 1;
  }
  DragObject = ListViewObject__CreateDragObject((ListViewObject_o *)this, 0LL);
  if ( !DragObject
    || (v6 = DragObject,
        (DragObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    DragObject,
                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignListViewObject___)) == 0LL) )
  {
    sub_1BCAA3C(DragObject, v5);
  }
  PhotoCampaignListViewObject__Init_32243204((PhotoCampaignListViewObject_o *)DragObject, 2, v7);
  return v6;
}


PhotoCampaignListViewItem_o *__fastcall PhotoCampaignListViewObject__GetItem(
        PhotoCampaignListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B11BEA & 1) == 0 )
  {
    sub_1BCA7E0(&PhotoCampaignListViewItem_TypeInfo, method, v2);
    byte_4B11BEA = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (PhotoCampaignListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PhotoCampaignListViewItem_TypeInfo )
    return (PhotoCampaignListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewObject__Init(
        PhotoCampaignListViewObject_o *this,
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

  if ( (byte_4B11BED & 1) == 0 )
  {
    sub_1BCA7E0(&PhotoCampaignListViewItem_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B11BED = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PhotoCampaignListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PhotoCampaignListViewItem_TypeInfo )
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
  ((void (__fastcall *)(PhotoCampaignListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    v11 == 3,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(transform, v15);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.callbackFunc = callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  sub_1BCA784(&this->fields.callbackFunc, callbackFunc);
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
        PhotoCampaignListViewObject__SetupDisp(this, v17);
      v20 = *p_callbackFunc;
      if ( *p_callbackFunc )
      {
        *p_callbackFunc = 0LL;
        sub_1BCA784(p_callbackFunc, 0LL);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v20->fields.m_target)(
          v20->fields.original_method_info,
          *(_QWORD *)&v20->fields.extra_arg);
      }
      return;
  }
}


void __fastcall PhotoCampaignListViewObject__InitItem(PhotoCampaignListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewObject__Init_32243204(
        PhotoCampaignListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  float v4; // s0
  int v5; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, method);
    byte_4B109C1 = 1;
  }
  PhotoCampaignListViewObject__Init(this, initMode, 0LL, v4, *(UnityEngine_Vector3_o *)&v5, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewObject__Init_32243780(
        PhotoCampaignListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  float v4; // s0
  int v5; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B109C1 = 1;
  }
  PhotoCampaignListViewObject__Init(this, initMode, callbackFunc, v4, *(UnityEngine_Vector3_o *)&v5, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewObject__Init_32248944(
        PhotoCampaignListViewObject_o *this,
        int32_t initMode,
        System_Action_o *callbackFunc,
        float delay,
        const MethodInfo *method)
{
  int v5; // s1

  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&initMode, callbackFunc);
    byte_4B109C1 = 1;
  }
  PhotoCampaignListViewObject__Init(this, initMode, callbackFunc, delay, *(UnityEngine_Vector3_o *)&v5, method);
}


void __fastcall PhotoCampaignListViewObject__OnClickSelect(
        PhotoCampaignListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *manager; // x0

  if ( (byte_4B11BEF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_9997/*"OnClickSelectListView"*/, method, v2);
    byte_4B11BEF = 1;
  }
  if ( this->fields.linkItem )
  {
    manager = (UnityEngine_Component_o *)this->fields.manager;
    if ( !manager )
      sub_1BCAA3C(0LL, method);
    UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9997/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0LL);
  }
}


void __fastcall PhotoCampaignListViewObject__OnDestroy(PhotoCampaignListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_GameObject_o **p_dragObject; // x19
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20

  if ( (byte_4B11BE9 & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B11BE9 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = &this->fields.dragObject;
  v7 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
  {
    v10 = (UnityEngine_Object_o *)*p_dragObject;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v9);
    NGUITools__Destroy(v10, 0LL);
    *p_dragObject = 0LL;
    sub_1BCA784(p_dragObject, 0LL);
  }
}


void __fastcall PhotoCampaignListViewObject__OnLongPush(PhotoCampaignListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4B11BF0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10055/*"OnLongPushListView"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_10073/*"OnPressCancel"*/, v4, v5);
    byte_4B11BF0 = 1;
  }
  if ( this->fields.linkItem )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SendMessage_70135704(gameObject, (System_String_o *)StringLiteral_10073/*"OnPressCancel"*/, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.manager) == 0LL) )
    {
      sub_1BCAA3C(gameObject, v7);
    }
    UnityEngine_Component__SendMessage(
      (UnityEngine_Component_o *)gameObject,
      (System_String_o *)StringLiteral_10055/*"OnLongPushListView"*/,
      (Il2CppObject *)this,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoCampaignListViewObject__SetInput(
        PhotoCampaignListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v9; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v12; // x1
  PhotoCampaignListViewItemDraw_o *v13; // x0

  if ( (byte_4B11BEB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isInput, method);
    sub_1BCA7E0(&PhotoCampaignListViewItem_TypeInfo, v5, v6);
    byte_4B11BEB = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    linkItem = this->fields.linkItem;
    if ( linkItem
      && (methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (PhotoCampaignListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PhotoCampaignListViewItem_TypeInfo )
        v12 = this->fields.linkItem;
      else
        v12 = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    v13 = this->fields.itemDraw;
    if ( !v13 )
      sub_1BCAA3C(0LL, v12);
    PhotoCampaignListViewItemDraw__SetInput(v13, (PhotoCampaignListViewItem_o *)v12, isInput, v9);
  }
}


void __fastcall PhotoCampaignListViewObject__SetItem(
        PhotoCampaignListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_41478184((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall PhotoCampaignListViewObject__SetItem_32247860(
        PhotoCampaignListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall PhotoCampaignListViewObject__SetupDisp(PhotoCampaignListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct ListViewItem_o *linkItem; // x20
  __int64 methodPtr_low; // x10
  bool v8; // w1
  __int64 v9; // x1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  PhotoCampaignListViewItemDraw_o *v13; // x0

  if ( (byte_4B11BEE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&PhotoCampaignListViewItem_TypeInfo, v4, v5);
    byte_4B11BEE = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_7;
  methodPtr_low = LOBYTE(PhotoCampaignListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (PhotoCampaignListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != PhotoCampaignListViewItem_TypeInfo )
  {
    linkItem = 0LL;
LABEL_7:
    v8 = 0;
    goto LABEL_8;
  }
  v8 = this->fields.dispMode != 0;
LABEL_8:
  ListViewObject__SetVisible((ListViewObject_o *)this, v8, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v13 = this->fields.itemDraw;
    if ( !v13 )
      sub_1BCAA3C(0LL, v11);
    PhotoCampaignListViewItemDraw__SetItem(v13, (PhotoCampaignListViewItem_o *)linkItem, this->fields.dispMode, v12);
  }
}


void __fastcall PhotoCampaignListViewObject__add_callbackFunc(
        PhotoCampaignListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PhotoCampaignListViewObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B11BE6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11BE6 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PhotoCampaignListViewObject_o *)sub_1BCACFC(v8);
  PhotoCampaignListViewObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PhotoCampaignListViewObject__remove_callbackFunc(
        PhotoCampaignListViewObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PhotoCampaignListViewObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B11BE7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B11BE7 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PhotoCampaignListViewObject_o *)sub_1BCACFC(v8);
  PhotoCampaignListViewObject__Awake(v11, v12);
}