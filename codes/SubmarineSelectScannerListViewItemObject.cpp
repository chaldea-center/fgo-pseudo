void __fastcall SubmarineSelectScannerListViewItemObject___ctor(
        SubmarineSelectScannerListViewItemObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B190A & 1) == 0 )
  {
    sub_B52984(&ListViewObject_TypeInfo);
    byte_42B190A = 1;
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
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct SubmarineSelectScannerListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42B1908 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerListViewItemDraw___);
    byte_42B1908 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B52A5C(0LL, v3);
  Component_srcLineSprite = (struct SubmarineSelectScannerListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 dispObject,
                                                                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerListViewItemDraw___);
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


void __fastcall SubmarineSelectScannerListViewItemObject__SetItem(
        SubmarineSelectScannerListViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  SubmarineSelectScannerListViewItemDraw_o *itemDraw; // x0
  __int64 v9; // x9

  if ( (byte_42B1909 & 1) == 0 )
  {
    sub_B52984(&SubmarineSelectScannerListViewItem_TypeInfo);
    byte_42B1909 = 1;
  }
  ListViewObject__SetItem_33992116((ListViewObject_o *)this, item, seed, 0LL);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_B52A5C(itemDraw, v7);
  if ( item )
  {
    v9 = *(&SubmarineSelectScannerListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (SubmarineSelectScannerListViewItem_c *)item->klass->_2.typeHierarchy[v9 - 1] != SubmarineSelectScannerListViewItem_TypeInfo )
    {
      itemDraw = (SubmarineSelectScannerListViewItemDraw_o *)sub_B52D50(item);
      goto LABEL_9;
    }
  }
  SubmarineSelectScannerListViewItemDraw__UpdateUi(itemDraw, (SubmarineSelectScannerListViewItem_o *)item, 0LL);
}