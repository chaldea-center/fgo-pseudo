void __fastcall EventRewardAnotherPayListViewItemObject___ctor(
        EventRewardAnotherPayListViewItemObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_49B5B5F & 1) == 0 )
  {
    sub_1B4CF90(&ListViewObject_TypeInfo, method);
    byte_49B5B5F = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventRewardAnotherPayListViewItemObject__Awake(
        EventRewardAnotherPayListViewItemObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_49B5B5C & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_EventRewardAnotherPayListViewItemDraw___, method);
    byte_49B5B5C = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B4D1EC(0LL, v3);
  this->fields.itemDraw = (struct EventRewardAnotherPayListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              dispObject,
                                                                              (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_EventRewardAnotherPayListViewItemDraw___);
  sub_1B4CF34(&this->fields.itemDraw);
}


EventRewardAnotherPayListViewItem_o *__fastcall EventRewardAnotherPayListViewItemObject__GetItem(
        EventRewardAnotherPayListViewItemObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_49B5B5E & 1) == 0 )
  {
    sub_1B4CF90(&EventRewardAnotherPayListViewItem_TypeInfo, method);
    byte_49B5B5E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(EventRewardAnotherPayListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (EventRewardAnotherPayListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRewardAnotherPayListViewItem_TypeInfo )
    return (EventRewardAnotherPayListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall EventRewardAnotherPayListViewItemObject__SetItem(
        EventRewardAnotherPayListViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  EventRewardAnotherPayListViewItemDraw_o *itemDraw; // x0
  __int64 methodPtr_low; // x9

  if ( (byte_49B5B5D & 1) == 0 )
  {
    sub_1B4CF90(&EventRewardAnotherPayListViewItem_TypeInfo, item);
    byte_49B5B5D = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1B4D1EC(itemDraw, item);
  if ( item )
  {
    methodPtr_low = LOBYTE(EventRewardAnotherPayListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventRewardAnotherPayListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != EventRewardAnotherPayListViewItem_TypeInfo )
    {
      itemDraw = (EventRewardAnotherPayListViewItemDraw_o *)sub_1B4D4AC(item);
      goto LABEL_9;
    }
  }
  EventRewardAnotherPayListViewItemDraw__SetUi(
    itemDraw,
    (EventRewardAnotherPayListViewItem_o *)item,
    (const MethodInfo *)seed);
  ListViewObject__SetItem_41356616((ListViewObject_o *)this, item, seed, 0LL);
}