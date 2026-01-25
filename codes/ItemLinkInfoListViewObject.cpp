void ItemLinkInfoListViewObject___ctor(ItemLinkInfoListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ItemLinkInfoListViewObject__Awake(ItemLinkInfoListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CF0EEE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewItemDraw___);
    byte_4CF0EEE = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C7BD40(0, method);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewItemDraw___);
  this->fields.itemDraw = (struct ItemLinkInfoListViewItemDraw_o *)Component_object;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6, v7, v8, v9, v10);
}


void ItemLinkInfoListViewObject__DeleteCallback(ItemLinkInfoListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v4; // x1
  ItemLinkInfoListViewItemDraw_o *v5; // x0

  if ( (byte_4CF0EF2 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0EF2 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v5 = this->fields.itemDraw;
    if ( !v5 )
      sub_1C7BD40(0, v4);
    ItemLinkInfoListViewItemDraw__DeleteCallback(v5, v4);
  }
}


float ItemLinkInfoListViewObject__GetHeight(ItemLinkInfoListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v4; // x1
  ItemLinkInfoListViewItemDraw_o *v5; // x0
  ItemLinkInfoListViewItemDraw_c *v7; // x0

  if ( (byte_4CF0EF1 & 1) == 0 )
  {
    sub_1C7BAE8(&ItemLinkInfoListViewItemDraw_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0EF1 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v5 = this->fields.itemDraw;
    if ( !v5 )
      sub_1C7BD40(0, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.linkItem = item;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.linkItem, (int32_t)item, (int32_t)method, v3, v4, v5, v6, v7);
  ItemLinkInfoListViewObject__SetupDisp(this, v9);
}


void ItemLinkInfoListViewObject__SetVisible(
        ItemLinkInfoListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4CF0EF0 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0EF0 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
  {
    v7 = this->fields.dispObject;
    if ( !v7 )
      sub_1C7BD40(0, v6);
    UnityEngine_GameObject__SetActive(v7, isVisible, 0);
  }
}


void ItemLinkInfoListViewObject__SetupDisp(ItemLinkInfoListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ItemLinkInfoListViewItem_o *linkItem; // x20
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v6; // x1
  struct ItemLinkInfoListViewItemDraw_o *v7; // x0

  if ( (byte_4CF0EEF & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF0EEF = 1;
  }
  linkItem = this->fields.linkItem;
  ItemLinkInfoListViewObject__SetVisible(this, linkItem != 0, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v7 = this->fields.itemDraw;
    if ( !v7 )
      sub_1C7BD40(0, v6);
    ((void (__fastcall *)(struct ItemLinkInfoListViewItemDraw_o *, struct ItemLinkInfoListViewItem_o *, const MethodInfo *))v7->klass->vtable._4_SetItem.methodPtr)(
      v7,
      linkItem,
      v7->klass->vtable._4_SetItem.method);
  }
}