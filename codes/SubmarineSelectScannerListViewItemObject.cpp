void __fastcall SubmarineSelectScannerListViewItemObject___ctor(
        SubmarineSelectScannerListViewItemObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B18F43 & 1) == 0 )
  {
    sub_1BCAFF8(&ListViewObject_TypeInfo, method);
    byte_4B18F43 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall SubmarineSelectScannerListViewItemObject__Awake(
        SubmarineSelectScannerListViewItemObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B18F41 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerListViewItemDraw___, method);
    byte_4B18F41 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BCB254(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerListViewItemDraw___);
  this->fields.itemDraw = (struct SubmarineSelectScannerListViewItemDraw_o *)Component_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
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
  __int64 methodPtr_low; // x9

  if ( (byte_4B18F42 & 1) == 0 )
  {
    sub_1BCAFF8(&SubmarineSelectScannerListViewItem_TypeInfo, item);
    byte_4B18F42 = 1;
  }
  ListViewObject__SetItem_42963052((ListViewObject_o *)this, item, seed, 0LL);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1BCB254(itemDraw, v7);
  if ( item )
  {
    methodPtr_low = LOBYTE(SubmarineSelectScannerListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (SubmarineSelectScannerListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != SubmarineSelectScannerListViewItem_TypeInfo )
    {
      sub_1BCB514(item);
      goto LABEL_9;
    }
  }
  SubmarineSelectScannerListViewItemDraw__UpdateUi(itemDraw, (SubmarineSelectScannerListViewItem_o *)item, v8);
}