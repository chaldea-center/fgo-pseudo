void __fastcall SummonHistoryListViewObject___ctor(SummonHistoryListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_42B3E9D & 1) == 0 )
  {
    sub_B52984(&ListViewObject_TypeInfo);
    byte_42B3E9D = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall SummonHistoryListViewObject__Awake(SummonHistoryListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct SummonHistoryListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42B3E9B & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SummonHistoryListViewItemDraw___);
    byte_42B3E9B = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B52A5C(0LL, v3);
  Component_srcLineSprite = (struct SummonHistoryListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        dispObject,
                                                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SummonHistoryListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void __fastcall SummonHistoryListViewObject__SetupDisp(SummonHistoryListViewObject_o *this, const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11
  struct ListViewItem_o *v5; // x20
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  SummonHistoryListViewItemDraw_o *v9; // x0

  if ( (byte_42B3E9C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SummonHistoryListViewItem_TypeInfo);
    byte_42B3E9C = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem
    && (v4 = *(&SummonHistoryListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v4) )
  {
    if ( (SummonHistoryListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == SummonHistoryListViewItem_TypeInfo )
      v5 = this->fields.linkItem;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  ListViewObject__SetVisible((ListViewObject_o *)this, v5 != 0LL, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_B52A5C(0LL, v7);
    SummonHistoryListViewItemDraw__SetItem(v9, (SummonHistoryListViewItem_o *)v5, v8);
  }
}