void __fastcall ItemLinkInfoListViewObject___ctor(ItemLinkInfoListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ItemLinkInfoListViewObject__Awake(ItemLinkInfoListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FE62D & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewItemDraw___, method);
    byte_49FE62D = 1;
  }
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B64324(0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoListViewItemDraw___);
  this->fields.itemDraw = (struct ItemLinkInfoListViewItemDraw_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
}


float __fastcall ItemLinkInfoListViewObject__GetHeight(ItemLinkInfoListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *itemDraw; // x20
  const MethodInfo *v5; // x1
  ItemLinkInfoListViewItemDraw_o *v6; // x0
  ItemLinkInfoListViewItemDraw_c *v8; // x0

  if ( (byte_49FE630 & 1) == 0 )
  {
    sub_1B640C8(&ItemLinkInfoListViewItemDraw_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FE630 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 )
      sub_1B64324(0LL);
    return ItemLinkInfoListViewItemDraw__GetHeight(v6, v5);
  }
  else
  {
    v8 = ItemLinkInfoListViewItemDraw_TypeInfo;
    if ( !ItemLinkInfoListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoListViewItemDraw_TypeInfo);
      v8 = ItemLinkInfoListViewItemDraw_TypeInfo;
    }
    return v8->static_fields->DEFAULT_FRAME_SIZE_HEIGHT;
  }
}


void __fastcall ItemLinkInfoListViewObject__SetItem(
        ItemLinkInfoListViewObject_o *this,
        ItemLinkInfoListViewItem_o *item,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v5; // x1

  this->fields.linkItem = item;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.linkItem, (int32_t)item, (int32_t)method, v3);
  ItemLinkInfoListViewObject__SetupDisp(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemLinkInfoListViewObject__SetVisible(
        ItemLinkInfoListViewObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_49FE62F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isVisible);
    byte_49FE62F = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL) )
  {
    v6 = this->fields.dispObject;
    if ( !v6 )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(v6, isVisible, 0LL);
  }
}


void __fastcall ItemLinkInfoListViewObject__SetupDisp(ItemLinkInfoListViewObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct ItemLinkInfoListViewItem_o *linkItem; // x20
  UnityEngine_Object_o *itemDraw; // x21
  struct ItemLinkInfoListViewItemDraw_o *v6; // x0

  if ( (byte_49FE62E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE62E = 1;
  }
  linkItem = this->fields.linkItem;
  ItemLinkInfoListViewObject__SetVisible(this, linkItem != 0LL, v2);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 )
      sub_1B64324(0LL);
    ((void (__fastcall *)(struct ItemLinkInfoListViewItemDraw_o *, struct ItemLinkInfoListViewItem_o *, void *))v6->klass->vtable._4_SetItem.method)(
      v6,
      linkItem,
      v6->klass[1]._1.image);
  }
}