void RecommendSupportMessageSelectListViewObject___ctor(
        RecommendSupportMessageSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ListViewObject_c *v4; // x0

  if ( (byte_596C4AC & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596C4AC = 1;
  }
  v4 = ListViewObject_TypeInfo;
  this->fields.isUpdateDisplay = 1;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void RecommendSupportMessageSelectListViewObject__Awake(
        RecommendSupportMessageSelectListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  struct RecommendSupportMessageSelectListViewItemDraw_o **p_itemDraw; // x19
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_596C4A6 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectListViewItemDraw___);
    byte_596C4A6 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectListViewItemDraw___),
        this->fields.itemDraw = (struct RecommendSupportMessageSelectListViewItemDraw_o *)Component_object,
        p_itemDraw = &this->fields.itemDraw,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)p_itemDraw,
          (int32_t)Component_object,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        (dispObject = (UnityEngine_GameObject_o *)*p_itemDraw) == 0) )
  {
    sub_2213CDC(dispObject, v3);
  }
  RecommendSupportMessageSelectListViewItemDraw__Init((RecommendSupportMessageSelectListViewItemDraw_o *)dispObject, v3);
}


RecommendSupportMessageSelectListViewItem_o *RecommendSupportMessageSelectListViewObject__GetItem(
        RecommendSupportMessageSelectListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596C4A8 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportMessageSelectListViewItem_TypeInfo);
    byte_596C4A8 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = RecommendSupportMessageSelectListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (RecommendSupportMessageSelectListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportMessageSelectListViewItem_TypeInfo )
    return (RecommendSupportMessageSelectListViewItem_o *)this->fields.linkItem;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportMessageSelectListViewObject__Init(
        RecommendSupportMessageSelectListViewObject_o *this,
        int32_t initMode,
        const MethodInfo *method)
{
  bool v5; // w1
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x1
  bool v10; // w8

  v5 = RecommendSupportMessageSelectListViewObject__GetItem(this, *(const MethodInfo **)&initMode) != 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, v5, 0);
  ((void (__fastcall *)(RecommendSupportMessageSelectListViewObject_o *, bool, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    initMode == 2,
    this->klass->vtable._9_SetInput.method);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, this->fields.basePosition, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(transform, v7);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  v10 = initMode == 3 || this->fields.isUpdateDisplay;
  this->fields.isUpdateDisplay = v10;
  RecommendSupportMessageSelectListViewObject__SetupDisplay(this, v8);
}


void RecommendSupportMessageSelectListViewObject__OnClickSelect(
        RecommendSupportMessageSelectListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *manager; // x0
  RecommendSupportMessageSelectListViewItemDraw_o *v7; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_596C4AB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_10267/*"OnClickSelectListView"*/);
    byte_596C4AB = 1;
  }
  if ( this->fields.linkItem )
  {
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
    {
      manager = (UnityEngine_Component_o *)this->fields.manager;
      if ( !manager
        || (UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_10267/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0),
            v7 = this->fields.itemDraw,
            manager = (UnityEngine_Component_o *)RecommendSupportMessageSelectListViewObject__GetItem(this, v8),
            !v7) )
      {
        sub_2213CDC(manager, v5);
      }
      RecommendSupportMessageSelectListViewItemDraw__SetItem(
        v7,
        (RecommendSupportMessageSelectListViewItem_o *)manager,
        v9);
    }
  }
}


void RecommendSupportMessageSelectListViewObject__OnDestroy(
        RecommendSupportMessageSelectListViewObject_o *this,
        const MethodInfo *method)
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

  if ( (byte_596C4A7 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C4A7 = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (MissionNaviTransitionBoardItem_o *)&this->fields.dragObject;
  v5 = (UnityEngine_Object_o *)dragObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v7, v8);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_2213A04(p_dragObject, 0, v10, v11, v12, v13, v14, v15);
  }
}


void RecommendSupportMessageSelectListViewObject__SetInput(
        RecommendSupportMessageSelectListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v8; // x1
  RecommendSupportMessageSelectListViewItemDraw_o *v9; // x20
  RecommendSupportMessageSelectListViewItem_o *Item; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_596C4A9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C4A9 = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v9 = this->fields.itemDraw;
    Item = RecommendSupportMessageSelectListViewObject__GetItem(this, v8);
    if ( !v9 )
      sub_2213CDC(Item, v11);
    RecommendSupportMessageSelectListViewItemDraw__SetInput(v9, Item, 0, v12);
  }
}


void RecommendSupportMessageSelectListViewObject__SetItem(
        RecommendSupportMessageSelectListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.isUpdateDisplay = 1;
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
}


void RecommendSupportMessageSelectListViewObject__SetItem_41586396(
        RecommendSupportMessageSelectListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  this->fields.isUpdateDisplay = 1;
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
}


void RecommendSupportMessageSelectListViewObject__SetupDisplay(
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

  if ( (byte_596C4AA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C4AA = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) && this->fields.isUpdateDisplay )
  {
    v6 = this->fields.itemDraw;
    this->fields.isUpdateDisplay = 0;
    Item = RecommendSupportMessageSelectListViewObject__GetItem(this, v5);
    if ( !v6 )
      sub_2213CDC(Item, v8);
    RecommendSupportMessageSelectListViewItemDraw__SetItem(v6, Item, v9);
  }
}