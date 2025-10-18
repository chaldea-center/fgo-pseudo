void EventHeelPortraitListViewObject___ctor(EventHeelPortraitListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C3D53E & 1) == 0 )
  {
    sub_1C37058(&ListViewObject_TypeInfo);
    byte_4C3D53E = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


void EventHeelPortraitListViewObject__Awake(EventHeelPortraitListViewObject_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0

  if ( (byte_4C3D53A & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_EventHeelPortraitListViewItemDraw___);
    byte_4C3D53A = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1C372B4(0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_EventHeelPortraitListViewItemDraw___);
  this->fields.itemDraw = (struct EventHeelPortraitListViewItemDraw_o *)Component_object;
  sub_1C36FFC(&this->fields.itemDraw, Component_object);
}


void EventHeelPortraitListViewObject__ClearNewImgSprite(
        EventHeelPortraitListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  ShiningIconComponent_o *newImgSprite; // x0
  struct EventHeelPortraitListViewItemDraw_o *v5; // x8

  if ( (byte_4C3D53D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D53D = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  newImgSprite = (ShiningIconComponent_o *)UnityEngine_Object__op_Equality(itemDraw, 0, 0);
  if ( ((unsigned __int8)newImgSprite & 1) == 0 )
  {
    v5 = this->fields.itemDraw;
    if ( !v5 || (newImgSprite = v5->fields.newImgSprite) == 0 )
      sub_1C372B4(newImgSprite);
    ShiningIconComponent__Clear(newImgSprite, 0);
  }
}


EventHeelPortraitListViewItem_o *EventHeelPortraitListViewObject__GetItem(
        EventHeelPortraitListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C3D53C & 1) == 0 )
  {
    sub_1C37058(&EventHeelPortraitListViewItem_TypeInfo);
    byte_4C3D53C = 1;
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
  const MethodInfo *v7; // x2
  EventHeelPortraitListViewItemDraw_o *itemDraw; // x0
  __int64 naturalAligment; // x9

  if ( (byte_4C3D53B & 1) == 0 )
  {
    sub_1C37058(&EventHeelPortraitListViewItem_TypeInfo);
    byte_4C3D53B = 1;
  }
  ListViewObject__SetItem_43831492((ListViewObject_o *)this, item, seed, 0);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1C372B4(itemDraw);
  if ( item )
  {
    naturalAligment = EventHeelPortraitListViewItem_TypeInfo->_2.naturalAligment;
    if ( item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (EventHeelPortraitListViewItem_c *)item->klass->_2.typeHierarchy[naturalAligment - 1] != EventHeelPortraitListViewItem_TypeInfo )
    {
      itemDraw = (EventHeelPortraitListViewItemDraw_o *)sub_1C37574(item);
      goto LABEL_9;
    }
  }
  EventHeelPortraitListViewItemDraw__SetItem(itemDraw, (EventHeelPortraitListViewItem_o *)item, v7);
}