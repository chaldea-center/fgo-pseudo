void __fastcall PaymentHistoryListViewObject___ctor(PaymentHistoryListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_49F88B8 & 1) == 0 )
  {
    sub_1B640C8(&ListViewObject_TypeInfo, method);
    byte_49F88B8 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall PaymentHistoryListViewObject__Awake(PaymentHistoryListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49F88B6 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_PaymentHistoryListViewItemDraw___, method);
    byte_49F88B6 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B64324(0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_PaymentHistoryListViewItemDraw___);
  this->fields.itemDraw = (struct PaymentHistoryListViewItemDraw_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v5, v6);
}


void __fastcall PaymentHistoryListViewObject__SetupDisp(PaymentHistoryListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v6; // x20
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v8; // x2
  PaymentHistoryListViewItemDraw_o *v9; // x0

  if ( (byte_49F88B7 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&PaymentHistoryListViewItem_TypeInfo, v3);
    byte_49F88B7 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(PaymentHistoryListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (PaymentHistoryListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PaymentHistoryListViewItem_TypeInfo )
      v6 = this->fields.linkItem;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v6 != 0LL, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B64324(0LL);
    PaymentHistoryListViewItemDraw__SetItem(v9, (PaymentHistoryListViewItem_o *)v6, v8);
  }
}