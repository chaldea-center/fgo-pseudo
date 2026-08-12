void RecommendSupportQuestBoardListViewObject___ctor(
        RecommendSupportQuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C4E2 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596C4E2 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void RecommendSupportQuestBoardListViewObject__Awake(
        RecommendSupportQuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596C4DF & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestBoardListViewItemDraw___);
    byte_596C4DF = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_2213CDC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestBoardListViewItemDraw___);
  this->fields.itemDraw = (struct RecommendSupportQuestBoardListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


RecommendSupportQuestBoardListViewItem_o *RecommendSupportQuestBoardListViewObject__GetItem(
        RecommendSupportQuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596C4E1 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    byte_596C4E1 = 1;
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


void RecommendSupportQuestBoardListViewObject__OnUpdate(
        RecommendSupportQuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  RecommendSupportQuestBoardListViewItemDraw_o *itemDraw; // x0

  if ( RecommendSupportQuestBoardListViewObject__GetItem(this, method) )
  {
    itemDraw = this->fields.itemDraw;
    if ( !itemDraw )
      sub_2213CDC(0, v3);
    RecommendSupportQuestBoardListViewItemDraw__OnUpdate(itemDraw, v3);
  }
}


void RecommendSupportQuestBoardListViewObject__SetItem(
        RecommendSupportQuestBoardListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x3
  RecommendSupportQuestBoardListViewItemDraw_o *itemDraw; // x0
  __int64 naturalAligment; // x9

  if ( (byte_596C4E0 & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportQuestBoardListViewItem_TypeInfo);
    byte_596C4E0 = 1;
  }
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_2213CDC(itemDraw, v7);
  if ( item )
  {
    naturalAligment = RecommendSupportQuestBoardListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (RecommendSupportQuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != RecommendSupportQuestBoardListViewItem_TypeInfo )
    {
      itemDraw = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_221405C(
                                                                   item,
                                                                   RecommendSupportQuestBoardListViewItem_TypeInfo,
                                                                   v8,
                                                                   v9);
      goto LABEL_9;
    }
  }
  RecommendSupportQuestBoardListViewItemDraw__SetItem(itemDraw, (RecommendSupportQuestBoardListViewItem_o *)item, v8);
}