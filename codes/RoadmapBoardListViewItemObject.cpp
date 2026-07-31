void RoadmapBoardListViewItemObject___ctor(RoadmapBoardListViewItemObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59326CF & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_59326CF = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void RoadmapBoardListViewItemObject__Awake(RoadmapBoardListViewItemObject_o *this, const MethodInfo *method)
{
  ;
}


void RoadmapBoardListViewItemObject__SetItem(
        RoadmapBoardListViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x3
  RoadmapBoardListViewItemDraw_o *itemDraw; // x0
  __int64 naturalAligment; // x9

  if ( (byte_59326CE & 1) == 0 )
  {
    sub_21FFC50(&RoadmapBoardListViewItem_TypeInfo);
    byte_59326CE = 1;
  }
  ListViewObject__SetItem_50780416((ListViewObject_o *)this, item, seed, 0);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_21FFECC(itemDraw, v7);
  if ( item )
  {
    naturalAligment = RoadmapBoardListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (RoadmapBoardListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != RoadmapBoardListViewItem_TypeInfo )
    {
      itemDraw = (RoadmapBoardListViewItemDraw_o *)sub_220024C(item, RoadmapBoardListViewItem_TypeInfo, v8, v9);
      goto LABEL_9;
    }
  }
  RoadmapBoardListViewItemDraw__UpdateBoard(itemDraw, (RoadmapBoardListViewItem_o *)item, v8);
}