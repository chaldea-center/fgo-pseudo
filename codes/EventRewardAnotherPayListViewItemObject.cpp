void EventRewardAnotherPayListViewItemObject___ctor(
        EventRewardAnotherPayListViewItemObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C21B1D & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    byte_4C21B1D = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventRewardAnotherPayListViewItemObject__Awake(
        EventRewardAnotherPayListViewItemObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4C21B1A & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventRewardAnotherPayListViewItemDraw___);
    byte_4C21B1A = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C2D6EC(0, v3);
  this->fields.itemDraw = (struct EventRewardAnotherPayListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                              dispObject,
                                                                              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventRewardAnotherPayListViewItemDraw___);
  sub_1C2D434(&this->fields.itemDraw);
}


EventRewardAnotherPayListViewItem_o *EventRewardAnotherPayListViewItemObject__GetItem(
        EventRewardAnotherPayListViewItemObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C21B1C & 1) == 0 )
  {
    sub_1C2D490(&EventRewardAnotherPayListViewItem_TypeInfo);
    byte_4C21B1C = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = EventRewardAnotherPayListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (EventRewardAnotherPayListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventRewardAnotherPayListViewItem_TypeInfo )
    return (EventRewardAnotherPayListViewItem_o *)this->fields.linkItem;
  return 0;
}


void EventRewardAnotherPayListViewItemObject__SetItem(
        EventRewardAnotherPayListViewItemObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  EventRewardAnotherPayListViewItemDraw_o *itemDraw; // x0
  __int64 naturalAligment; // x9

  if ( (byte_4C21B1B & 1) == 0 )
  {
    sub_1C2D490(&EventRewardAnotherPayListViewItem_TypeInfo);
    byte_4C21B1B = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1C2D6EC(itemDraw, item);
  if ( item )
  {
    naturalAligment = EventRewardAnotherPayListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (EventRewardAnotherPayListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != EventRewardAnotherPayListViewItem_TypeInfo )
    {
      itemDraw = (EventRewardAnotherPayListViewItemDraw_o *)sub_1C2D9AC(item);
      goto LABEL_9;
    }
  }
  EventRewardAnotherPayListViewItemDraw__SetUi(
    itemDraw,
    (EventRewardAnotherPayListViewItem_o *)item,
    (const MethodInfo *)seed);
  ListViewObject__SetItem_43593652((ListViewObject_o *)this, item, seed, 0);
}