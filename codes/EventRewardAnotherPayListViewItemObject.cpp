void EventRewardAnotherPayListViewItemObject___ctor(
        EventRewardAnotherPayListViewItemObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2B10C & 1) == 0 )
  {
    sub_1C93AD4(&ListViewObject_TypeInfo);
    byte_4D2B10C = 1;
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
  Il2CppObject *Component_object; // x0

  if ( (byte_4D2B109 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EventRewardAnotherPayListViewItemDraw___);
    byte_4D2B109 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C93D2C(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EventRewardAnotherPayListViewItemDraw___);
  this->fields.itemDraw = (struct EventRewardAnotherPayListViewItemDraw_o *)Component_object;
  sub_1C93A78(&this->fields.itemDraw, Component_object);
}


EventRewardAnotherPayListViewItem_o *EventRewardAnotherPayListViewItemObject__GetItem(
        EventRewardAnotherPayListViewItemObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4D2B10B & 1) == 0 )
  {
    sub_1C93AD4(&EventRewardAnotherPayListViewItem_TypeInfo);
    byte_4D2B10B = 1;
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

  if ( (byte_4D2B10A & 1) == 0 )
  {
    sub_1C93AD4(&EventRewardAnotherPayListViewItem_TypeInfo);
    byte_4D2B10A = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1C93D2C(itemDraw, item);
  if ( item )
  {
    naturalAligment = EventRewardAnotherPayListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (EventRewardAnotherPayListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != EventRewardAnotherPayListViewItem_TypeInfo )
    {
      itemDraw = (EventRewardAnotherPayListViewItemDraw_o *)sub_1C940C8(item);
      goto LABEL_9;
    }
  }
  EventRewardAnotherPayListViewItemDraw__SetUi(
    itemDraw,
    (EventRewardAnotherPayListViewItem_o *)item,
    (const MethodInfo *)seed);
  ListViewObject__SetItem_44518484((ListViewObject_o *)this, item, seed, 0);
}


void EventRewardAnotherPayListViewItemObject__SetSelectedFrame(
        EventRewardAnotherPayListViewItemObject_o *this,
        bool isSelected,
        const MethodInfo *method)
{
  long double v3; // q0
  struct EventRewardAnotherPayListViewItemDraw_o *itemDraw; // x8

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw || (this = (EventRewardAnotherPayListViewItemObject_o *)itemDraw->fields.frameObj) == 0 )
    sub_1C93D2C(this, isSelected);
  LODWORD(v3) = 0;
  if ( isSelected )
    *(float *)&v3 = 1.0;
  ((void (__fastcall *)(EventRewardAnotherPayListViewItemObject_o *, const MethodInfo *, long double))this->klass->vtable._8_CreateDragObject.methodPtr)(
    this,
    this->klass->vtable._8_CreateDragObject.method,
    v3);
}