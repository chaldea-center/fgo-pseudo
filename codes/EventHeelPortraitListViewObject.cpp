void __fastcall EventHeelPortraitListViewObject___ctor(
        EventHeelPortraitListViewObject_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A73DF8 & 1) == 0 )
  {
    sub_1B90010(&ListViewObject_TypeInfo, method);
    byte_4A73DF8 = 1;
  }
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventHeelPortraitListViewObject__Awake(
        EventHeelPortraitListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A73DF4 & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_EventHeelPortraitListViewItemDraw___, method);
    byte_4A73DF4 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_1B9026C(0LL, v3);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       dispObject,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_EventHeelPortraitListViewItemDraw___);
  this->fields.itemDraw = (struct EventHeelPortraitListViewItemDraw_o *)Component_object;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v6, v7);
}


void __fastcall EventHeelPortraitListViewObject__ClearNewImgSprite(
        EventHeelPortraitListViewObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  ShiningIconComponent_o *newImgSprite; // x0
  __int64 v5; // x1
  struct EventHeelPortraitListViewItemDraw_o *v6; // x8

  if ( (byte_4A73DF7 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A73DF7 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  newImgSprite = (ShiningIconComponent_o *)UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL);
  if ( ((unsigned __int8)newImgSprite & 1) == 0 )
  {
    v6 = this->fields.itemDraw;
    if ( !v6 || (newImgSprite = v6->fields.newImgSprite) == 0LL )
      sub_1B9026C(newImgSprite, v5);
    ShiningIconComponent__Clear(newImgSprite, 0LL);
  }
}


EventHeelPortraitListViewItem_o *__fastcall EventHeelPortraitListViewObject__GetItem(
        EventHeelPortraitListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A73DF6 & 1) == 0 )
  {
    sub_1B90010(&EventHeelPortraitListViewItem_TypeInfo, method);
    byte_4A73DF6 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(EventHeelPortraitListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (EventHeelPortraitListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventHeelPortraitListViewItem_TypeInfo )
    return (EventHeelPortraitListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


void __fastcall EventHeelPortraitListViewObject__SetItem(
        EventHeelPortraitListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  EventHeelPortraitListViewItemDraw_o *itemDraw; // x0
  __int64 methodPtr_low; // x9

  if ( (byte_4A73DF5 & 1) == 0 )
  {
    sub_1B90010(&EventHeelPortraitListViewItem_TypeInfo, item);
    byte_4A73DF5 = 1;
  }
  ListViewObject__SetItem_40810748((ListViewObject_o *)this, item, seed, 0LL);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_1B9026C(itemDraw, v7);
  if ( item )
  {
    methodPtr_low = LOBYTE(EventHeelPortraitListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventHeelPortraitListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] != EventHeelPortraitListViewItem_TypeInfo )
    {
      sub_1B9052C(item);
      goto LABEL_9;
    }
  }
  EventHeelPortraitListViewItemDraw__SetItem(itemDraw, (EventHeelPortraitListViewItem_o *)item, v8);
}