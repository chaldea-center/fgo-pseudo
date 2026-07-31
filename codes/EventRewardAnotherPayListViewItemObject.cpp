void EventRewardAnotherPayListViewItemObject___ctor(
        EventRewardAnotherPayListViewItemObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5932AE6 & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_5932AE6 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventRewardAnotherPayListViewItemObject__Awake(
        EventRewardAnotherPayListViewItemObject_o *this,
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

  if ( (byte_5932AE3 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventRewardAnotherPayListViewItemDraw___);
    byte_5932AE3 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_21FFECC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventRewardAnotherPayListViewItemDraw___);
  this->fields.itemDraw = (struct EventRewardAnotherPayListViewItemDraw_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


EventRewardAnotherPayListViewItem_o *EventRewardAnotherPayListViewItemObject__GetItem(
        EventRewardAnotherPayListViewItemObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_5932AE5 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardAnotherPayListViewItem_TypeInfo);
    byte_5932AE5 = 1;
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

  if ( (byte_5932AE4 & 1) == 0 )
  {
    sub_21FFC50(&EventRewardAnotherPayListViewItem_TypeInfo);
    byte_5932AE4 = 1;
  }
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_21FFECC(itemDraw, item);
  if ( item )
  {
    naturalAligment = EventRewardAnotherPayListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (EventRewardAnotherPayListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != EventRewardAnotherPayListViewItem_TypeInfo )
    {
      itemDraw = (EventRewardAnotherPayListViewItemDraw_o *)sub_220024C(
                                                              item,
                                                              EventRewardAnotherPayListViewItem_TypeInfo,
                                                              seed,
                                                              method);
      goto LABEL_9;
    }
  }
  EventRewardAnotherPayListViewItemDraw__SetUi(
    itemDraw,
    (EventRewardAnotherPayListViewItem_o *)item,
    (const MethodInfo *)seed);
  ListViewObject__SetItem_50780416((ListViewObject_o *)this, item, seed, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventRewardAnotherPayListViewItemObject__SetSelectedFrame(
        EventRewardAnotherPayListViewItemObject_o *this,
        bool isSelected,
        const MethodInfo *method)
{
  long double v3; // q0
  struct EventRewardAnotherPayListViewItemDraw_o *itemDraw; // x8

  itemDraw = this->fields.itemDraw;
  if ( !itemDraw || (this = (EventRewardAnotherPayListViewItemObject_o *)itemDraw->fields.frameObj) == 0 )
    sub_21FFECC(this, isSelected);
  *(_QWORD *)&v3 = 0;
  if ( isSelected )
    *(float *)&v3 = 1.0;
  ((void (__fastcall *)(EventRewardAnotherPayListViewItemObject_o *, const MethodInfo *, long double))this->klass->vtable._8_CreateDragObject.methodPtr)(
    this,
    this->klass->vtable._8_CreateDragObject.method,
    v3);
}