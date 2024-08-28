void __fastcall RoadmapBoardListViewItemObject___ctor(RoadmapBoardListViewItemObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A23638 & 1) == 0 )
  {
    sub_1B715CC(&ListViewObject_TypeInfo, method);
    byte_4A23638 = 1;
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  RoadmapBoardListViewItemDraw_o *itemDraw; // x0
  __int64 methodPtr_low; // x9

  if ( (byte_4A23637 & 1) == 0 )
  {
    sub_1B715CC(&RoadmapBoardListViewItem_TypeInfo, item);
    byte_4A23637 = 1;
  }
  ListViewObject__SetItem_40546388((ListViewObject_o *)this, item, seed, 0LL);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1B71828(itemDraw, v7);
  if ( item )
  {
    methodPtr_low = LOBYTE(RoadmapBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (RoadmapBoardListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != RoadmapBoardListViewItem_TypeInfo )
    {
      sub_1B71AE8(item);
      goto LABEL_9;
    }
  }
  RoadmapBoardListViewItemDraw__UpdateBoard(itemDraw, (RoadmapBoardListViewItem_o *)item, v8);
}