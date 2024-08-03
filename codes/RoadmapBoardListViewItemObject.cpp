void __fastcall RoadmapBoardListViewItemObject___ctor(RoadmapBoardListViewItemObject_o *this, const MethodInfo *method)
{
  if ( (byte_49FFF3A & 1) == 0 )
  {
    sub_1B640C8(&ListViewObject_TypeInfo, method);
    byte_49FFF3A = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall RoadmapBoardListViewItemObject__Awake(RoadmapBoardListViewItemObject_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall RoadmapBoardListViewItemObject__SetItem(
        RoadmapBoardListViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  RoadmapBoardListViewItemDraw_o *itemDraw; // x0
  __int64 methodPtr_low; // x9

  if ( (byte_49FFF39 & 1) == 0 )
  {
    sub_1B640C8(&RoadmapBoardListViewItem_TypeInfo, item);
    byte_49FFF39 = 1;
  }
  ListViewObject__SetItem_40419096((ListViewObject_o *)this, item, seed, 0LL);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1B64324(itemDraw);
  if ( item )
  {
    methodPtr_low = LOBYTE(RoadmapBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (RoadmapBoardListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != RoadmapBoardListViewItem_TypeInfo )
    {
      sub_1B645E4(item);
      goto LABEL_9;
    }
  }
  RoadmapBoardListViewItemDraw__UpdateBoard(itemDraw, (RoadmapBoardListViewItem_o *)item, v7);
}