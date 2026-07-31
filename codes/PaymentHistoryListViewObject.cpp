void PaymentHistoryListViewObject___ctor(PaymentHistoryListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5934539 & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_5934539 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void PaymentHistoryListViewObject__Awake(PaymentHistoryListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5934537 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_PaymentHistoryListViewItemDraw___);
    byte_5934537 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_21FFECC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_PaymentHistoryListViewItemDraw___);
  this->fields.itemDraw = (struct PaymentHistoryListViewItemDraw_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void PaymentHistoryListViewObject__SetupDisp(PaymentHistoryListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ListViewItem_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  PaymentHistoryListViewItemDraw_o *v11; // x0

  if ( (byte_5934538 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&PaymentHistoryListViewItem_TypeInfo);
    byte_5934538 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (naturalAligment = PaymentHistoryListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (PaymentHistoryListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == PaymentHistoryListViewItem_TypeInfo )
      v5 = this->fields.linkItem;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v5 != 0, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v11 = this->fields.itemDraw;
    if ( !v11 )
      sub_21FFECC(0, v9);
    PaymentHistoryListViewItemDraw__SetItem(v11, (PaymentHistoryListViewItem_o *)v5, v10);
  }
}