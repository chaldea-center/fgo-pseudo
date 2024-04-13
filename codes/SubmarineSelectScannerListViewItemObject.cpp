void __fastcall SubmarineSelectScannerListViewItemObject___ctor(
        SubmarineSelectScannerListViewItemObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA37A & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA37A = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall SubmarineSelectScannerListViewItemObject__Awake(
        SubmarineSelectScannerListViewItemObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct SubmarineSelectScannerListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EA378 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerListViewItemDraw___,
      (_DWORD)method,
      v2,
      v3);
    byte_42EA378 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct SubmarineSelectScannerListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 dispObject,
                                                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall SubmarineSelectScannerListViewItemObject__SetItem(
        SubmarineSelectScannerListViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  SubmarineSelectScannerListViewItemDraw_o *itemDraw; // x0
  __int64 v9; // x9

  if ( (byte_42EA379 & 1) == 0 )
  {
    sub_B5D5C4(&SubmarineSelectScannerListViewItem_TypeInfo, (_DWORD)item, (_DWORD)seed, method);
    byte_42EA379 = 1;
  }
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_B5D69C(itemDraw, v7);
  if ( item )
  {
    v9 = *(&SubmarineSelectScannerListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (SubmarineSelectScannerListViewItem_c *)item->klass->_2.typeHierarchy[v9 - 1] != SubmarineSelectScannerListViewItem_TypeInfo )
    {
      itemDraw = (SubmarineSelectScannerListViewItemDraw_o *)sub_B5D990(item);
      goto LABEL_9;
    }
  }
  SubmarineSelectScannerListViewItemDraw__UpdateUi(itemDraw, (SubmarineSelectScannerListViewItem_o *)item, 0LL);
}