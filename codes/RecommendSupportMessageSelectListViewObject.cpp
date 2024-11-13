void __fastcall RecommendSupportMessageSelectListViewObject___ctor(
        RecommendSupportMessageSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B123BF & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    byte_4B123BF = 1;
  }
  this->fields.isUpdateDisplay = 1;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall RecommendSupportMessageSelectListViewObject__Awake(
        RecommendSupportMessageSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  struct RecommendSupportMessageSelectListViewItemDraw_o **p_itemDraw; // x19
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B123B9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectListViewItemDraw___,
      method,
      v2);
    byte_4B123B9 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectListViewItemDraw___),
        this->fields.itemDraw = (struct RecommendSupportMessageSelectListViewItemDraw_o *)Component_object,
        p_itemDraw = &this->fields.itemDraw,
        sub_1BCA784((PartyOrganizationUtility_o *)p_itemDraw, (int64_t)Component_object, v8, v9, v10, v11, v12, v13),
        (dispObject = (UnityEngine_GameObject_o *)*p_itemDraw) == 0LL) )
  {
    sub_1BCAA3C(dispObject, v4);
  }
  RecommendSupportMessageSelectListViewItemDraw__Init((RecommendSupportMessageSelectListViewItemDraw_o *)dispObject, v4);
}


RecommendSupportMessageSelectListViewItem_o *__fastcall RecommendSupportMessageSelectListViewObject__GetItem(
        RecommendSupportMessageSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B123BB & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportMessageSelectListViewItem_TypeInfo, method, v2);
    byte_4B123BB = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(RecommendSupportMessageSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (RecommendSupportMessageSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportMessageSelectListViewItem_TypeInfo )
    return (RecommendSupportMessageSelectListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectListViewObject__Init(
        RecommendSupportMessageSelectListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  bool v5; // w1
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1

  v5 = RecommendSupportMessageSelectListViewObject__GetItem(this, *(const MethodInfo **)&initMode) != 0LL;
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0LL);
  ((void (__fastcall *)(RecommendSupportMessageSelectListViewObject_o *, bool, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    initMode == 2,
    this->klass->vtable._10_Invalidation.methodPtr);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0LL),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(transform, v7);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0LL);
  this->fields.isUpdateDisplay |= initMode == 3;
  RecommendSupportMessageSelectListViewObject__SetupDisplay(this, v8);
}


void __fastcall RecommendSupportMessageSelectListViewObject__OnClickSelect(
        RecommendSupportMessageSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *manager; // x0
  RecommendSupportMessageSelectListViewItemDraw_o *v9; // x20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B123BE & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_9997/*"OnClickSelectListView"*/, v4, v5);
    byte_4B123BE = 1;
  }
  if ( this->fields.linkItem )
  {
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) )
    {
      manager = (UnityEngine_Component_o *)this->fields.manager;
      if ( !manager
        || (UnityEngine_Component__SendMessage(
              manager,
              (System_String_o *)StringLiteral_9997/*"OnClickSelectListView"*/,
              (Il2CppObject *)this,
              0LL),
            v9 = this->fields.itemDraw,
            manager = (UnityEngine_Component_o *)RecommendSupportMessageSelectListViewObject__GetItem(this, v10),
            !v9) )
      {
        sub_1BCAA3C(manager, v7);
      }
      RecommendSupportMessageSelectListViewItemDraw__SetItem(
        v9,
        (RecommendSupportMessageSelectListViewItem_o *)manager,
        v11);
    }
  }
}


void __fastcall RecommendSupportMessageSelectListViewObject__OnDestroy(
        RecommendSupportMessageSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_o *p_dragObject; // x19
  UnityEngine_Object_o *v7; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  __int64 v9; // x1
  UnityEngine_Object_o *klass; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B123BA & 1) == 0 )
  {
    sub_1BCA7E0(&NGUITools_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B123BA = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (PartyOrganizationUtility_o *)&this->fields.dragObject;
  v7 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(v7, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v9);
    NGUITools__Destroy(klass, 0LL);
    p_dragObject->klass = 0LL;
    sub_1BCA784(p_dragObject, 0LL, v11, v12, v13, v14, v15, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectListViewObject__SetInput(
        RecommendSupportMessageSelectListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v7; // x1
  RecommendSupportMessageSelectListViewItemDraw_o *v8; // x20
  RecommendSupportMessageSelectListViewItem_o *Item; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4B123BC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isInput, method);
    byte_4B123BC = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v8 = this->fields.itemDraw;
    Item = RecommendSupportMessageSelectListViewObject__GetItem(this, v7);
    if ( !v8 )
      sub_1BCAA3C(Item, v10);
    RecommendSupportMessageSelectListViewItemDraw__SetInput(v8, Item, 0, v11);
  }
}


void __fastcall RecommendSupportMessageSelectListViewObject__SetItem(
        RecommendSupportMessageSelectListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.isUpdateDisplay = 1;
  ListViewObject__SetItem_41478184((ListViewObject_o *)this, item, seed, 0LL);
}


void __fastcall RecommendSupportMessageSelectListViewObject__SetItem_33129964(
        RecommendSupportMessageSelectListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  this->fields.isUpdateDisplay = 1;
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
}


void __fastcall RecommendSupportMessageSelectListViewObject__SetupDisplay(
        RecommendSupportMessageSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v5; // x1
  RecommendSupportMessageSelectListViewItemDraw_o *v6; // x20
  RecommendSupportMessageSelectListViewItem_o *Item; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4B123BD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B123BD = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL) && this->fields.isUpdateDisplay )
  {
    v6 = this->fields.itemDraw;
    this->fields.isUpdateDisplay = 0;
    Item = RecommendSupportMessageSelectListViewObject__GetItem(this, v5);
    if ( !v6 )
      sub_1BCAA3C(Item, v8);
    RecommendSupportMessageSelectListViewItemDraw__SetItem(v6, Item, v9);
  }
}