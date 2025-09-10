void EventHeelPortraitListViewObject___ctor(EventHeelPortraitListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C21885 & 1) == 0 )
  {
    sub_1C2D490(&ListViewObject_TypeInfo);
    byte_4C21885 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventHeelPortraitListViewObject__Awake(EventHeelPortraitListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0

  if ( (byte_4C21881 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventHeelPortraitListViewItemDraw___);
    byte_4C21881 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C2D6EC(0, v3);
  this->fields.itemDraw = (struct EventHeelPortraitListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                          dispObject,
                                                                          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventHeelPortraitListViewItemDraw___);
  sub_1C2D434(&this->fields.itemDraw);
}


void EventHeelPortraitListViewObject__ClearNewImgSprite(
        EventHeelPortraitListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  ShiningIconComponent_o *newImgSprite; // x0
  __int64 v5; // x1
  struct EventHeelPortraitListViewItemDraw_o *v6; // x8

  if ( (byte_4C21884 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21884 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  newImgSprite = (ShiningIconComponent_o *)UnityEngine_Object__op_Equality(itemDraw, 0, 0);
  if ( ((unsigned __int8)newImgSprite & 1) == 0 )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 || (newImgSprite = v6->fields.newImgSprite) == 0 )
      sub_1C2D6EC(newImgSprite, v5);
    ShiningIconComponent__Clear(newImgSprite, 0);
  }
}


EventHeelPortraitListViewItem_o *EventHeelPortraitListViewObject__GetItem(
        EventHeelPortraitListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C21883 & 1) == 0 )
  {
    sub_1C2D490(&EventHeelPortraitListViewItem_TypeInfo);
    byte_4C21883 = 1;
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
  EventHeelPortraitListViewItemDraw_o *itemDraw; // x0
  __int64 naturalAligment; // x9

  if ( (byte_4C21882 & 1) == 0 )
  {
    sub_1C2D490(&EventHeelPortraitListViewItem_TypeInfo);
    byte_4C21882 = 1;
  }
  ListViewObject__SetItem_43593652((ListViewObject_o *)this, item, seed, 0);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1C2D6EC(itemDraw, v7);
  if ( item )
  {
    naturalAligment = EventHeelPortraitListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (EventHeelPortraitListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != EventHeelPortraitListViewItem_TypeInfo )
    {
      itemDraw = (EventHeelPortraitListViewItemDraw_o *)sub_1C2D9AC(item);
      goto LABEL_9;
    }
  }
  EventHeelPortraitListViewItemDraw__SetItem(itemDraw, (EventHeelPortraitListViewItem_o *)item, v8);
}