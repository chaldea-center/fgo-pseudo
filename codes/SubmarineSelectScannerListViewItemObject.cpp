void SubmarineSelectScannerListViewItemObject___ctor(
        SubmarineSelectScannerListViewItemObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC3D63 & 1) == 0 )
  {
    sub_1C713B0(&ListViewObject_TypeInfo);
    byte_4CC3D63 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void SubmarineSelectScannerListViewItemObject__Awake(
        SubmarineSelectScannerListViewItemObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CC3D61 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerListViewItemDraw___);
    byte_4CC3D61 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C71608(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerListViewItemDraw___);
  this->fields.itemDraw = (struct SubmarineSelectScannerListViewItemDraw_o *)Component_object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void SubmarineSelectScannerListViewItemObject__SetItem(
        SubmarineSelectScannerListViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  SubmarineSelectScannerListViewItemDraw_o *itemDraw; // x0
  __int64 naturalAligment; // x9

  if ( (byte_4CC3D62 & 1) == 0 )
  {
    sub_1C713B0(&SubmarineSelectScannerListViewItem_TypeInfo);
    byte_4CC3D62 = 1;
  }
  ListViewObject__SetItem_44123920((ListViewObject_o *)this, item, seed, 0);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1C71608(itemDraw, v7);
  if ( item )
  {
    naturalAligment = SubmarineSelectScannerListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (SubmarineSelectScannerListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != SubmarineSelectScannerListViewItem_TypeInfo )
    {
      sub_1C719A4(item);
      goto LABEL_9;
    }
  }
  SubmarineSelectScannerListViewItemDraw__UpdateUi(itemDraw, (SubmarineSelectScannerListViewItem_o *)item, v8);
}