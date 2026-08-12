void ItemLinkInfoListViewObject___ctor(ItemLinkInfoListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ItemLinkInfoListViewObject__Awake(ItemLinkInfoListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5973AD6 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewItemDraw___);
    byte_5973AD6 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewItemDraw___);
  this->fields.itemDraw = (struct ItemLinkInfoListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void ItemLinkInfoListViewObject__DeleteCallback(ItemLinkInfoListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  ItemLinkInfoListViewItemDraw_o *v5; // x0

  if ( (byte_5973ADA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973ADA = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v5 = this->fields.itemDraw;
    if ( !v5 )
      sub_2213CDC(0, v4);
    ItemLinkInfoListViewItemDraw__DeleteCallback(v5, 0);
  }
}


float ItemLinkInfoListViewObject__GetHeight(ItemLinkInfoListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  ItemLinkInfoListViewItemDraw_o *v5; // x0
  ItemLinkInfoListViewItemDraw_c *v7; // x0

  if ( (byte_5973AD9 & 1) == 0 )
  {
    sub_2213A60(&ItemLinkInfoListViewItemDraw_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973AD9 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v5 = this->fields.itemDraw;
    if ( !v5 )
      sub_2213CDC(0, v4);
    return ItemLinkInfoListViewItemDraw__GetHeight(v5, 0);
  }
  else
  {
    v7 = ItemLinkInfoListViewItemDraw_TypeInfo;
    if ( !*(&ItemLinkInfoListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewItemDraw_TypeInfo, v4);
      v7 = ItemLinkInfoListViewItemDraw_TypeInfo;
    }
    return v7->static_fields->DEFAULT_FRAME_SIZE_HEIGHT;
  }
}


void ItemLinkInfoListViewObject__SetItem(
        ItemLinkInfoListViewObject_o *this,
        ItemLinkInfoListViewItem_o *item,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1

  this->fields.linkItem = item;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.linkItem,
    (int32_t)item,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ItemLinkInfoListViewObject__SetupDisp(this, v9);
}


// local variable allocation has failed, the output may be wrong!
void ItemLinkInfoListViewObject__SetVisible(
        ItemLinkInfoListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_5973AD8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973AD8 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isVisible);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
  {
    v7 = this->fields.dispObject;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UnityEngine_GameObject__SetActive(v7, isVisible, 0);
  }
}


void ItemLinkInfoListViewObject__SetupDisp(ItemLinkInfoListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ItemLinkInfoListViewItem_o *linkItem; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  struct ItemLinkInfoListViewItemDraw_o *v8; // x0

  if ( (byte_5973AD7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973AD7 = 1;
  }
  linkItem = this->fields.linkItem;
  ItemLinkInfoListViewObject__SetVisible(this, linkItem != 0, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 )
      sub_2213CDC(0, v7);
    ((void (__fastcall *)(struct ItemLinkInfoListViewItemDraw_o *, struct ItemLinkInfoListViewItem_o *, const MethodInfo *))v8->klass->vtable._4_SetItem.methodPtr)(
      v8,
      linkItem,
      v8->klass->vtable._4_SetItem.method);
  }
}