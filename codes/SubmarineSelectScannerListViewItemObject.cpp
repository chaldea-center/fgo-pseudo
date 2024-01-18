void __fastcall SubmarineSelectScannerListViewItemObject___ctor(
        SubmarineSelectScannerListViewItemObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4185845 & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_4185845 = 1;
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

  if ( (byte_4185843 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerListViewItemDraw___, method);
    byte_4185843 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B2C434(0LL, v3);
  Component_srcLineSprite = (struct SubmarineSelectScannerListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                 dispObject,
                                                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B2C2F8(&this->fields.itemDraw, Component_srcLineSprite);
}


void __fastcall SubmarineSelectScannerListViewItemObject__SetItem(
        SubmarineSelectScannerListViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  SubmarineSelectScannerListViewItemDraw_o *itemDraw; // x0
  __int64 v10; // x9

  if ( (byte_4185844 & 1) == 0 )
  {
    sub_B2C35C(&SubmarineSelectScannerListViewItem_TypeInfo, item);
    byte_4185844 = 1;
  }
  ListViewObject__SetItem_33907092((ListViewObject_o *)this, item, seed, 0LL);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_B2C434(itemDraw, v7);
  if ( item )
  {
    v10 = *(&SubmarineSelectScannerListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v10
      || (SubmarineSelectScannerListViewItem_c *)item->klass->_2.typeHierarchy[v10 - 1] != SubmarineSelectScannerListViewItem_TypeInfo )
    {
      itemDraw = (SubmarineSelectScannerListViewItemDraw_o *)sub_B2C728(item);
      goto LABEL_9;
    }
  }
  SubmarineSelectScannerListViewItemDraw__UpdateUi(itemDraw, (SubmarineSelectScannerListViewItem_o *)item, v8);
}