void __fastcall SummonHistoryListViewObject___ctor(SummonHistoryListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4AB243A & 1) == 0 )
  {
    sub_1BAB41C(&ListViewObject_TypeInfo, method);
    byte_4AB243A = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall SummonHistoryListViewObject__Awake(SummonHistoryListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4AB2438 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_SummonHistoryListViewItemDraw___, method);
    byte_4AB2438 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BAB678(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_SummonHistoryListViewItemDraw___);
  this->fields.itemDraw = (struct SummonHistoryListViewItemDraw_o *)Component_object;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


void __fastcall SummonHistoryListViewObject__SetupDisp(SummonHistoryListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ListViewItem_o *v6; // x20
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  SummonHistoryListViewItemDraw_o *v10; // x0

  if ( (byte_4AB2439 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    sub_1BAB41C(&SummonHistoryListViewItem_TypeInfo, v3);
    byte_4AB2439 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (methodPtr_low = LOBYTE(SummonHistoryListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (SummonHistoryListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == SummonHistoryListViewItem_TypeInfo )
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
    v10 = this->fields.itemDraw;
    if ( !v10 )
      sub_1BAB678(0LL, v8);
    SummonHistoryListViewItemDraw__SetItem(v10, (SummonHistoryListViewItem_o *)v6, v9);
  }
}