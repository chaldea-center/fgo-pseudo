void __fastcall EventTradePriceInfo___ctor(EventTradePriceInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *v4; // x20

  if ( (byte_4A563BD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIIconLabel___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UIIconLabel__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_ItemIconComponent__TypeInfo);
    byte_4A563BD = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIIconLabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIIconLabel___ctor__);
  this->fields.priceIconLabelList = (struct System_Collections_Generic_List_UIIconLabel__o *)v3;
  sub_1B88554(&this->fields.priceIconLabelList, v3);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
  this->fields.eventItemIconList = (struct System_Collections_Generic_List_ItemIconComponent__o *)v4;
  sub_1B88554(&this->fields.eventItemIconList, v4);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventTradePriceInfo__Awake(EventTradePriceInfo_o *this, const MethodInfo *method)
{
  EventTradePriceInfo_o *v2; // x19
  struct System_Collections_Generic_List_UIIconLabel__o *priceIconLabelList; // x8
  int size; // w8
  int v5; // w9
  struct System_Collections_Generic_List_ItemIconComponent__o *eventItemIconList; // x8
  int v7; // w8
  int v8; // w9

  v2 = this;
  if ( (byte_4A563BA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__);
    this = (EventTradePriceInfo_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ItemIconComponent__get_Count__);
    byte_4A563BA = 1;
  }
  priceIconLabelList = v2->fields.priceIconLabelList;
  if ( !priceIconLabelList )
    goto LABEL_10;
  size = priceIconLabelList->fields._size;
  v5 = -1;
  do
    ++v5;
  while ( v5 < size );
  eventItemIconList = v2->fields.eventItemIconList;
  if ( !eventItemIconList )
LABEL_10:
    sub_1B8880C(this, method);
  v7 = eventItemIconList->fields._size;
  v8 = -1;
  do
    ++v8;
  while ( v8 < v7 );
}


void __fastcall EventTradePriceInfo__SetItemIcon(
        EventTradePriceInfo_o *this,
        ItemIconComponent_o *itemIcon,
        CommonConsumeEntity_o *consumeEntity,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A563BC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A563BC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemIcon, 0LL, 0LL);
  if ( !v6 )
  {
    if ( consumeEntity )
    {
      if ( itemIcon )
      {
        ItemIconComponent__SetItem(itemIcon, consumeEntity->fields.objectId, -1, 0LL);
        return;
      }
LABEL_11:
      sub_1B8880C(v6, v7);
    }
    if ( !itemIcon )
      goto LABEL_11;
    ItemIconComponent__Clear(itemIcon, 0LL);
  }
}


void __fastcall EventTradePriceInfo__SetPriceInfo(
        EventTradePriceInfo_o *this,
        CommonConsumeEntity_array *consumeEntityList,
        const MethodInfo *method)
{
  EventTradePriceInfo___c_c *v5; // x0
  System_Func_object__bool__o *_9__3_0; // x21
  Il2CppObject *v7; // x22
  struct EventTradePriceInfo___c_StaticFields *static_fields; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *priceIconLabelList; // x0
  int size; // w8
  struct System_Collections_Generic_List_ItemIconComponent__o *eventItemIconList; // x9
  il2cpp_array_size_t v13; // w21
  Il2CppObject *Item; // x0
  UIIconLabel_o *v15; // x22
  int32_t syncRoot; // w23
  unsigned __int64 v17; // x21
  const MethodInfo *v18; // x3

  if ( (byte_4A563BB & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_CommonConsumeEntity___);
    sub_1B885B0(&System_Func_CommonConsumeEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemIconComponent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemIconComponent__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIIconLabel__get_Item__);
    sub_1B885B0(&Method_EventTradePriceInfo___c__SetPriceInfo_b__3_0__);
    sub_1B885B0(&EventTradePriceInfo___c_TypeInfo);
    byte_4A563BB = 1;
  }
  v5 = EventTradePriceInfo___c_TypeInfo;
  if ( !EventTradePriceInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePriceInfo___c_TypeInfo);
    v5 = EventTradePriceInfo___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__bool__o *)v5->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = EventTradePriceInfo___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__3_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_CommonConsumeEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__3_0, v7, Method_EventTradePriceInfo___c__SetPriceInfo_b__3_0__, 0LL);
    static_fields = EventTradePriceInfo___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_CommonConsumeEntity__bool__o *)_9__3_0;
    sub_1B88554(&static_fields->__9__3_0, _9__3_0);
  }
  if ( !BasicHelper__Any_object__48672124(
          (System_Object_array *)consumeEntityList,
          (System_Func_T__bool__o *)_9__3_0,
          (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_CommonConsumeEntity___) )
  {
    priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.priceIconLabelList;
    if ( !priceIconLabelList || !consumeEntityList )
      goto LABEL_27;
    size = priceIconLabelList->fields._size;
    if ( size == consumeEntityList->max_length )
    {
      eventItemIconList = this->fields.eventItemIconList;
      if ( !eventItemIconList )
        goto LABEL_27;
      if ( eventItemIconList->fields._size == size )
      {
        if ( size >= 1 )
        {
          v13 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     priceIconLabelList,
                     v13,
                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UIIconLabel__get_Item__);
            if ( v13 >= consumeEntityList->max_length )
LABEL_29:
              sub_1B88814(Item, v9);
            v15 = (UIIconLabel_o *)Item;
            priceIconLabelList = (System_Collections_Generic_List_object__o *)consumeEntityList->m_Items[v13];
            if ( !priceIconLabelList )
              break;
            syncRoot = (int32_t)priceIconLabelList->fields._syncRoot;
            priceIconLabelList = (System_Collections_Generic_List_object__o *)CommonConsumeEntity__GetUserHasNum(
                                                                                (CommonConsumeEntity_o *)priceIconLabelList,
                                                                                0LL);
            if ( !v15 )
              break;
            UIIconLabel__SetPurchaseDecision(v15, 27, syncRoot, (int32_t)priceIconLabelList, 0LL);
            priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.priceIconLabelList;
            if ( !priceIconLabelList )
              break;
            if ( (signed int)++v13 >= priceIconLabelList->fields._size )
              goto LABEL_22;
          }
LABEL_27:
          sub_1B8880C(priceIconLabelList, v9);
        }
LABEL_22:
        priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.eventItemIconList;
        if ( !priceIconLabelList )
          goto LABEL_27;
        v17 = 0LL;
        while ( (__int64)v17 < priceIconLabelList->fields._size )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   priceIconLabelList,
                   v17,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ItemIconComponent__get_Item__);
          if ( v17 >= consumeEntityList->max_length )
            goto LABEL_29;
          EventTradePriceInfo__SetItemIcon(
            (EventTradePriceInfo_o *)Item,
            (ItemIconComponent_o *)Item,
            consumeEntityList->m_Items[v17],
            v18);
          priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.eventItemIconList;
          ++v17;
          if ( !priceIconLabelList )
            goto LABEL_27;
        }
      }
    }
  }
}


void __fastcall EventTradePriceInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4A563BE & 1) == 0 )
  {
    sub_1B885B0(&EventTradePriceInfo___c_TypeInfo);
    byte_4A563BE = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventTradePriceInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventTradePriceInfo___c_TypeInfo->static_fields->__9 = (struct EventTradePriceInfo___c_o *)v1;
  sub_1B88554(EventTradePriceInfo___c_TypeInfo->static_fields, v1);
}


void __fastcall EventTradePriceInfo___c___ctor(EventTradePriceInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventTradePriceInfo___c___SetPriceInfo_b__3_0(
        EventTradePriceInfo___c_o *this,
        CommonConsumeEntity_o *entity,
        const MethodInfo *method)
{
  return entity == 0LL;
}