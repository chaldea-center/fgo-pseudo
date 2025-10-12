void ItemLinkInfoListViewObject___ctor(ItemLinkInfoListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ItemLinkInfoListViewObject__Awake(ItemLinkInfoListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3A323 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewItemDraw___);
    byte_4C3A323 = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C32E7C(0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewItemDraw___);
  this->fields.itemDraw = (struct ItemLinkInfoListViewItemDraw_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
}


void ItemLinkInfoListViewObject__DeleteCallback(ItemLinkInfoListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v4; // x1
  ItemLinkInfoListViewItemDraw_o *v5; // x0

  if ( (byte_4C3A327 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A327 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v5 = this->fields.itemDraw;
    if ( !v5 )
      sub_1C32E7C(0);
    ItemLinkInfoListViewItemDraw__DeleteCallback(v5, v4);
  }
}


float ItemLinkInfoListViewObject__GetHeight(ItemLinkInfoListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v4; // x1
  ItemLinkInfoListViewItemDraw_o *v5; // x0
  ItemLinkInfoListViewItemDraw_c *v7; // x0

  if ( (byte_4C3A326 & 1) == 0 )
  {
    sub_1C32C20(&ItemLinkInfoListViewItemDraw_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A326 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v5 = this->fields.itemDraw;
    if ( !v5 )
      sub_1C32E7C(0);
    return ItemLinkInfoListViewItemDraw__GetHeight(v5, v4);
  }
  else
  {
    v7 = ItemLinkInfoListViewItemDraw_TypeInfo;
    if ( !ItemLinkInfoListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewItemDraw_TypeInfo);
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
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  this->fields.linkItem = item;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.linkItem, (int32_t)item, (int32_t)method, v3);
  ItemLinkInfoListViewObject__SetupDisp(this, v5);
}


void ItemLinkInfoListViewObject__SetVisible(
        ItemLinkInfoListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4C3A325 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A325 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
  {
    v6 = this->fields.dispObject;
    if ( !v6 )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive(v6, isVisible, 0);
  }
}


void ItemLinkInfoListViewObject__SetupDisp(ItemLinkInfoListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ItemLinkInfoListViewItem_o *linkItem; // x20
  UnityEngine_Object_o *itemDraw; // x21
  struct ItemLinkInfoListViewItemDraw_o *v6; // x0

  if ( (byte_4C3A324 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A324 = 1;
  }
  linkItem = this->fields.linkItem;
  ItemLinkInfoListViewObject__SetVisible(this, linkItem != 0, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 )
      sub_1C32E7C(0);
    ((void (__fastcall *)(struct ItemLinkInfoListViewItemDraw_o *, struct ItemLinkInfoListViewItem_o *, const MethodInfo *))v6->klass->vtable._4_SetItem.methodPtr)(
      v6,
      linkItem,
      v6->klass->vtable._4_SetItem.method);
  }
}