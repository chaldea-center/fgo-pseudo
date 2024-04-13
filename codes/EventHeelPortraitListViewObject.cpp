void __fastcall EventHeelPortraitListViewObject___ctor(
        EventHeelPortraitListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9F86 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9F86 = 1;
  }
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


void __fastcall EventHeelPortraitListViewObject__Awake(
        EventHeelPortraitListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  UnityEngine_GameObject_o *dispObject; // x0
  struct EventHeelPortraitListViewItemDraw_o *Component_srcLineSprite; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E9F82 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventHeelPortraitListViewItemDraw___, (_DWORD)method, v2, v3);
    byte_42E9F82 = 1;
  }
  ListViewObject__Awake((ListViewObject_o *)this, 0LL);
  dispObject = this->fields.dispObject;
  if ( !dispObject )
    sub_B5D69C(0LL, v5);
  Component_srcLineSprite = (struct EventHeelPortraitListViewItemDraw_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                            dispObject,
                                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventHeelPortraitListViewItemDraw___);
  this->fields.itemDraw = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)Component_srcLineSprite,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall EventHeelPortraitListViewObject__ClearNewImgSprite(
        EventHeelPortraitListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *itemDraw; // x20
  ShiningIconComponent_o *newImgSprite; // x0
  __int64 v7; // x1
  struct EventHeelPortraitListViewItemDraw_o *v8; // x8

  if ( (byte_42E9F85 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9F85 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  newImgSprite = (ShiningIconComponent_o *)UnityEngine_Object__op_Equality(itemDraw, 0LL, 0LL);
  if ( ((unsigned __int8)newImgSprite & 1) == 0 )
  {
    v8 = this->fields.itemDraw;
    if ( !v8 || (newImgSprite = v8->fields.newImgSprite) == 0LL )
      sub_B5D69C(newImgSprite, v7);
    ShiningIconComponent__Clear(newImgSprite, 0LL);
  }
}


EventHeelPortraitListViewItem_o *__fastcall EventHeelPortraitListViewObject__GetItem(
        EventHeelPortraitListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42E9F84 & 1) == 0 )
  {
    sub_B5D5C4(&EventHeelPortraitListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9F84 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&EventHeelPortraitListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (EventHeelPortraitListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == EventHeelPortraitListViewItem_TypeInfo )
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
  __int64 v10; // x9

  if ( (byte_42E9F83 & 1) == 0 )
  {
    sub_B5D5C4(&EventHeelPortraitListViewItem_TypeInfo, (_DWORD)item, (_DWORD)seed, method);
    byte_42E9F83 = 1;
  }
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
  itemDraw = this->fields.itemDraw;
  if ( !itemDraw )
LABEL_9:
    sub_B5D69C(itemDraw, v7);
  if ( item )
  {
    v10 = *(&EventHeelPortraitListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v10
      || (EventHeelPortraitListViewItem_c *)item->klass->_2.typeHierarchy[v10 - 1] != EventHeelPortraitListViewItem_TypeInfo )
    {
      itemDraw = (EventHeelPortraitListViewItemDraw_o *)sub_B5D990(item);
      goto LABEL_9;
    }
  }
  EventHeelPortraitListViewItemDraw__SetItem(itemDraw, (EventHeelPortraitListViewItem_o *)item, v8);
}