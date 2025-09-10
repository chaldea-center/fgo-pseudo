void RecommendSupportQuestBoardListViewObject___ctor(
        RecommendSupportQuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C23211 & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    byte_4C23211 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void RecommendSupportQuestBoardListViewObject__Awake(
        RecommendSupportQuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2320E & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestBoardListViewItemDraw___);
    byte_4C2320E = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C2D6EC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestBoardListViewItemDraw___);
  this->fields.itemDraw = (struct RecommendSupportQuestBoardListViewItemDraw_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


RecommendSupportQuestBoardListViewItem_o *RecommendSupportQuestBoardListViewObject__GetItem(
        RecommendSupportQuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C23210 & 1) == 0 )
  {
    sub_1C2D490(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    byte_4C23210 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = RecommendSupportQuestBoardListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (RecommendSupportQuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == RecommendSupportQuestBoardListViewItem_TypeInfo )
    return (RecommendSupportQuestBoardListViewItem_o *)this->fields.linkItem;
  return 0;
}


void RecommendSupportQuestBoardListViewObject__SetItem(
        RecommendSupportQuestBoardListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  RecommendSupportQuestBoardListViewItemDraw_o *itemDraw; // x0
  __int64 naturalAligment; // x9

  if ( (byte_4C2320F & 1) == 0 )
  {
    sub_1C2D490(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    byte_4C2320F = 1;
  }
  ListViewObject__SetItem_43593652((ListViewObject_o *)this, item, seed, 0);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1C2D6EC(itemDraw, v7);
  if ( item )
  {
    naturalAligment = RecommendSupportQuestBoardListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (RecommendSupportQuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != RecommendSupportQuestBoardListViewItem_TypeInfo )
    {
      itemDraw = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1C2D9AC(item);
      goto LABEL_9;
    }
  }
  RecommendSupportQuestBoardListViewItemDraw__SetItem(itemDraw, (RecommendSupportQuestBoardListViewItem_o *)item, v8);
}