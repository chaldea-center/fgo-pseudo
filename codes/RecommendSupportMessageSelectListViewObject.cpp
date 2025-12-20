void RecommendSupportMessageSelectListViewObject___ctor(
        RecommendSupportMessageSelectListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D285A1 & 1) == 0 )
  {
    sub_1C94098(&ListViewObject_TypeInfo);
    byte_4D285A1 = 1;
  }
  this->fields.isUpdateDisplay = 1;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D2859B & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectListViewItemDraw___);
    byte_4D2859B = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             dispObject,
                             (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectListViewItemDraw___),
        this->fields.itemDraw = (struct RecommendSupportMessageSelectListViewItemDraw_o *)Component_object,
        p_itemDraw = &this->fields.itemDraw,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)p_itemDraw, (int32_t)Component_object, v7, v8, v9, v10, v11, v12),
        (dispObject = (UnityEngine_GameObject_o *)*p_itemDraw) == 0) )
  {
    sub_1C942F0(dispObject, v3);
  }
  RecommendSupportMessageSelectListViewItemDraw__Init((RecommendSupportMessageSelectListViewItemDraw_o *)dispObject, v3);
}


RecommendSupportMessageSelectListViewItem_o *RecommendSupportMessageSelectListViewObject__GetItem(
        RecommendSupportMessageSelectListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4D2859D & 1) == 0 )
  {
    sub_1C94098(&RecommendSupportMessageSelectListViewItem_TypeInfo);
    byte_4D2859D = 1;
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
    sub_1C942F0(transform, v7);
  }
  UnityEngine_Transform__set_localScale(transform, this->fields.baseScale, 0);
  this->fields.isUpdateDisplay |= initMode == 3;
  RecommendSupportMessageSelectListViewObject__SetupDisplay(this, v8);
}


void RecommendSupportMessageSelectListViewObject__OnClickSelect(
        RecommendSupportMessageSelectListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *manager; // x0
  RecommendSupportMessageSelectListViewItemDraw_o *v6; // x20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4D285A0 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_9889/*"OnClickSelectListView"*/);
    byte_4D285A0 = 1;
  }
  if ( this->fields.linkItem )
  {
    itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) )
    {
      manager = (UnityEngine_Component_o *)this->fields.manager;
      if ( !manager
        || (UnityEngine_Component__SendMessage(manager, (System_String_o *)StringLiteral_9889/*"OnClickSelectListView"*/, (Il2CppObject *)this, 0),
            v6 = this->fields.itemDraw,
            manager = (UnityEngine_Component_o *)RecommendSupportMessageSelectListViewObject__GetItem(this, v7),
            !v6) )
      {
        sub_1C942F0(manager, v4);
      }
      RecommendSupportMessageSelectListViewItemDraw__SetItem(
        v6,
        (RecommendSupportMessageSelectListViewItem_o *)manager,
        v8);
    }
  }
}


void RecommendSupportMessageSelectListViewObject__OnDestroy(
        RecommendSupportMessageSelectListViewObject_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_dragObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *dragObject; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D2859C & 1) == 0 )
  {
    sub_1C94098(&NGUITools_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2859C = 1;
  }
  dragObject = this->fields.dragObject;
  p_dragObject = (GrandQuestFolderBoardItem_o *)&this->fields.dragObject;
  v4 = (UnityEngine_Object_o *)dragObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_dragObject->klass;
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__Destroy(klass, 0);
    p_dragObject->klass = 0;
    sub_1C9403C(p_dragObject, 0, v7, v8, v9, v10, v11, v12);
  }
}


void RecommendSupportMessageSelectListViewObject__SetInput(
        RecommendSupportMessageSelectListViewObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v6; // x1
  RecommendSupportMessageSelectListViewItemDraw_o *v7; // x20
  RecommendSupportMessageSelectListViewItem_o *Item; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4D2859E & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2859E = 1;
  }
  ListViewObject__SetInput((ListViewObject_o *)this, isInput, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v7 = this->fields.itemDraw;
    Item = RecommendSupportMessageSelectListViewObject__GetItem(this, v6);
    if ( !v7 )
      sub_1C942F0(Item, v9);
    RecommendSupportMessageSelectListViewItemDraw__SetInput(v7, Item, 0, v10);
  }
}


void RecommendSupportMessageSelectListViewObject__SetItem(
        RecommendSupportMessageSelectListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  this->fields.isUpdateDisplay = 1;
  ListViewObject__SetItem_44621212((ListViewObject_o *)this, item, seed, 0);
}


void RecommendSupportMessageSelectListViewObject__SetItem_35423748(
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
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v4; // x1
  RecommendSupportMessageSelectListViewItemDraw_o *v5; // x20
  RecommendSupportMessageSelectListViewItem_o *Item; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4D2859F & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2859F = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(itemDraw, 0, 0) && this->fields.isUpdateDisplay )
  {
    v5 = this->fields.itemDraw;
    this->fields.isUpdateDisplay = 0;
    Item = RecommendSupportMessageSelectListViewObject__GetItem(this, v4);
    if ( !v5 )
      sub_1C942F0(Item, v7);
    RecommendSupportMessageSelectListViewItemDraw__SetItem(v5, Item, v8);
  }
}