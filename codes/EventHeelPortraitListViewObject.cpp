void EventHeelPortraitListViewObject___ctor(EventHeelPortraitListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5932845 & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_5932845 = 1;
  }
  if ( !*(&ListViewObject_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventHeelPortraitListViewObject__Awake(EventHeelPortraitListViewObject_o *this, const MethodInfo *method)
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

  if ( (byte_5932841 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_EventHeelPortraitListViewItemDraw___);
    byte_5932841 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_21FFECC(0, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_EventHeelPortraitListViewItemDraw___);
  this->fields.itemDraw = (struct EventHeelPortraitListViewItemDraw_o *)Component_object;
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


void EventHeelPortraitListViewObject__ClearNewImgSprite(
        EventHeelPortraitListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *itemDraw; // x20
  ShiningIconComponent_o *newImgSprite; // x0
  __int64 v6; // x1
  struct EventHeelPortraitListViewItemDraw_o *v7; // x8

  if ( (byte_5932844 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932844 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  newImgSprite = (ShiningIconComponent_o *)UnityEngine_Object__op_Equality(itemDraw, 0, 0);
  if ( ((unsigned __int8)newImgSprite & 1) == 0 )
  {
    v7 = this->fields.itemDraw;
    if ( !v7 || (newImgSprite = v7->fields.newImgSprite) == 0 )
      sub_21FFECC(newImgSprite, v6);
    ShiningIconComponent__Clear(newImgSprite, 0);
  }
}


EventHeelPortraitListViewItem_o *EventHeelPortraitListViewObject__GetItem(
        EventHeelPortraitListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_5932843 & 1) == 0 )
  {
    sub_21FFC50(&EventHeelPortraitListViewItem_TypeInfo);
    byte_5932843 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = EventHeelPortraitListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (EventHeelPortraitListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventHeelPortraitListViewItem_TypeInfo )
    return (EventHeelPortraitListViewItem_o *)this->fields.linkItem;
  return 0;
}


void EventHeelPortraitListViewObject__SetItem(
        EventHeelPortraitListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x3
  EventHeelPortraitListViewItemDraw_o *itemDraw; // x0
  __int64 naturalAligment; // x9

  if ( (byte_5932842 & 1) == 0 )
  {
    sub_21FFC50(&EventHeelPortraitListViewItem_TypeInfo);
    byte_5932842 = 1;
  }
  ListViewObject__SetItem_50780416((ListViewObject_o *)this, item, seed, 0);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_21FFECC(itemDraw, v7);
  if ( item )
  {
    naturalAligment = EventHeelPortraitListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (EventHeelPortraitListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != EventHeelPortraitListViewItem_TypeInfo )
    {
      itemDraw = (EventHeelPortraitListViewItemDraw_o *)sub_220024C(
                                                          item,
                                                          EventHeelPortraitListViewItem_TypeInfo,
                                                          v8,
                                                          v9);
      goto LABEL_9;
    }
  }
  EventHeelPortraitListViewItemDraw__SetItem(itemDraw, (EventHeelPortraitListViewItem_o *)item, v8);
}