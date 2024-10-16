void __fastcall RecommendSupportQuestBoardListViewObject___ctor(
        RecommendSupportQuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB1F86 & 1) == 0 )
  {
    sub_1BAB41C(&ListViewObject_TypeInfo, method);
    byte_4AB1F86 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall RecommendSupportQuestBoardListViewObject__Awake(
        RecommendSupportQuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4AB1F83 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestBoardListViewItemDraw___, method);
    byte_4AB1F83 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1BAB678(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportQuestBoardListViewItemDraw___);
  this->fields.itemDraw = (struct RecommendSupportQuestBoardListViewItemDraw_o *)Component_object;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


RecommendSupportQuestBoardListViewItem_o *__fastcall RecommendSupportQuestBoardListViewObject__GetItem(
        RecommendSupportQuestBoardListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4AB1F85 & 1) == 0 )
  {
    sub_1BAB41C(&RecommendSupportQuestBoardListViewItem_TypeInfo, method);
    byte_4AB1F85 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(RecommendSupportQuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (RecommendSupportQuestBoardListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == RecommendSupportQuestBoardListViewItem_TypeInfo )
    return (RecommendSupportQuestBoardListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall RecommendSupportQuestBoardListViewObject__SetItem(
        RecommendSupportQuestBoardListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  RecommendSupportQuestBoardListViewItemDraw_o *itemDraw; // x0
  __int64 methodPtr_low; // x9

  if ( (byte_4AB1F84 & 1) == 0 )
  {
    sub_1BAB41C(&RecommendSupportQuestBoardListViewItem_TypeInfo, item);
    byte_4AB1F84 = 1;
  }
  ListViewObject__SetItem_41133552((ListViewObject_o *)this, item, seed, 0LL);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1BAB678(itemDraw, v7);
  if ( item )
  {
    methodPtr_low = LOBYTE(RecommendSupportQuestBoardListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (RecommendSupportQuestBoardListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != RecommendSupportQuestBoardListViewItem_TypeInfo )
    {
      itemDraw = (RecommendSupportQuestBoardListViewItemDraw_o *)sub_1BAB938(item);
      goto LABEL_9;
    }
  }
  RecommendSupportQuestBoardListViewItemDraw__SetItem(itemDraw, (RecommendSupportQuestBoardListViewItem_o *)item, v8);
}