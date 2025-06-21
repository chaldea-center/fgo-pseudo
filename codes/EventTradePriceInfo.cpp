void __fastcall EventTradePriceInfo___ctor(EventTradePriceInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  System_Collections_Generic_List_object__o *v7; // x20

  if ( (byte_4B16FAB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemIconComponent___ctor__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIIconLabel___ctor__, v3);
    sub_1BCAFF8(&System_Collections_Generic_List_UIIconLabel__TypeInfo, v4);
    sub_1BCAFF8(&System_Collections_Generic_List_ItemIconComponent__TypeInfo, v5);
    byte_4B16FAB = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UIIconLabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_UIIconLabel___ctor__);
  this->fields.priceIconLabelList = (struct System_Collections_Generic_List_UIIconLabel__o *)v6;
  sub_1BCAF9C(&this->fields.priceIconLabelList);
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
  this->fields.eventItemIconList = (struct System_Collections_Generic_List_ItemIconComponent__o *)v7;
  sub_1BCAF9C(&this->fields.eventItemIconList);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventTradePriceInfo__Awake(EventTradePriceInfo_o *this, const MethodInfo *method)
{
  EventTradePriceInfo_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_UIIconLabel__o *priceIconLabelList; // x8
  int size; // w8
  int v6; // w9
  struct System_Collections_Generic_List_ItemIconComponent__o *eventItemIconList; // x8
  int v8; // w8
  int v9; // w9

  v2 = this;
  if ( (byte_4B16FA8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__, method);
    this = (EventTradePriceInfo_o *)sub_1BCAFF8(
                                      &Method_System_Collections_Generic_List_ItemIconComponent__get_Count__,
                                      v3);
    byte_4B16FA8 = 1;
  }
  priceIconLabelList = v2->fields.priceIconLabelList;
  if ( !priceIconLabelList )
    goto LABEL_10;
  size = priceIconLabelList->fields._size;
  v6 = -1;
  do
    ++v6;
  while ( v6 < size );
  eventItemIconList = v2->fields.eventItemIconList;
  if ( !eventItemIconList )
LABEL_10:
    sub_1BCB254(this, method);
  v8 = eventItemIconList->fields._size;
  v9 = -1;
  do
    ++v9;
  while ( v9 < v8 );
}


void __fastcall EventTradePriceInfo__SetItemIcon(
        EventTradePriceInfo_o *this,
        ItemIconComponent_o *itemIcon,
        CommonConsumeEntity_o *consumeEntity,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B16FAA & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, itemIcon);
    byte_4B16FAA = 1;
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
        ItemIconComponent__SetItem(itemIcon, consumeEntity->fields.objectId, -1, 1, 0LL);
        return;
      }
LABEL_11:
      sub_1BCB254(v6, v7);
    }
    if ( !itemIcon )
      goto LABEL_11;
    ItemIconComponent__Clear(itemIcon, 0LL);
  }
}


void __fastcall EventTradePriceInfo__SetPriceInfo(
        EventTradePriceInfo_o *this,
        CommonConsumeEntity_array *consumeEntityList,
        bool useHoldCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  EventTradePriceInfo___c_c *v14; // x0
  System_Func_object__bool__o *_9__5_0; // x22
  Il2CppObject *v16; // x23
  struct EventTradePriceInfo___c_StaticFields *static_fields; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *priceIconLabelList; // x0
  int size; // w8
  struct System_Collections_Generic_List_ItemIconComponent__o *eventItemIconList; // x9
  il2cpp_array_size_t v22; // w22
  Il2CppObject *Item; // x0
  __int64 v24; // x2
  UIIconLabel_o *v25; // x23
  int32_t syncRoot; // w24
  int32_t v27; // w3
  unsigned __int64 v28; // x21
  const MethodInfo *v29; // x3

  if ( (byte_4B16FA9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_CommonConsumeEntity___, consumeEntityList);
    sub_1BCAFF8(&System_Func_CommonConsumeEntity__bool__TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemIconComponent__get_Count__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ItemIconComponent__get_Item__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIIconLabel__get_Item__, v11);
    sub_1BCAFF8(&Method_EventTradePriceInfo___c__SetPriceInfo_b__5_0__, v12);
    sub_1BCAFF8(&EventTradePriceInfo___c_TypeInfo, v13);
    byte_4B16FA9 = 1;
  }
  v14 = EventTradePriceInfo___c_TypeInfo;
  if ( !EventTradePriceInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePriceInfo___c_TypeInfo);
    v14 = EventTradePriceInfo___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__bool__o *)v14->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = EventTradePriceInfo___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__5_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_CommonConsumeEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__5_0, v16, Method_EventTradePriceInfo___c__SetPriceInfo_b__5_0__, 0LL);
    static_fields = EventTradePriceInfo___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_CommonConsumeEntity__bool__o *)_9__5_0;
    sub_1BCAF9C(&static_fields->__9__5_0);
  }
  if ( !BasicHelper__Any_object__50347976(
          (System_Object_array *)consumeEntityList,
          (System_Func_T__bool__o *)_9__5_0,
          (const MethodInfo_3003FC8 *)Method_BasicHelper_Any_CommonConsumeEntity___) )
  {
    priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.priceIconLabelList;
    if ( !priceIconLabelList || !consumeEntityList )
      goto LABEL_30;
    size = priceIconLabelList->fields._size;
    if ( size == consumeEntityList->max_length )
    {
      eventItemIconList = this->fields.eventItemIconList;
      if ( !eventItemIconList )
        goto LABEL_30;
      if ( eventItemIconList->fields._size == size )
      {
        if ( size >= 1 )
        {
          v22 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     priceIconLabelList,
                     v22,
                     (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_UIIconLabel__get_Item__);
            if ( v22 >= consumeEntityList->max_length )
LABEL_32:
              sub_1BCB25C(Item, v18, v24);
            v25 = (UIIconLabel_o *)Item;
            priceIconLabelList = (System_Collections_Generic_List_object__o *)consumeEntityList->m_Items[v22];
            if ( !priceIconLabelList )
              break;
            syncRoot = (int32_t)priceIconLabelList->fields._syncRoot;
            if ( useHoldCount )
            {
              priceIconLabelList = (System_Collections_Generic_List_object__o *)CommonConsumeEntity__GetUserHasNum(
                                                                                  (CommonConsumeEntity_o *)priceIconLabelList,
                                                                                  0LL);
              v27 = (int)priceIconLabelList;
            }
            else
            {
              v27 = -1;
            }
            if ( !v25 )
              break;
            UIIconLabel__SetPurchaseDecision(v25, 27, syncRoot, v27, 0LL);
            priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.priceIconLabelList;
            if ( !priceIconLabelList )
              break;
            if ( (signed int)++v22 >= priceIconLabelList->fields._size )
              goto LABEL_25;
          }
LABEL_30:
          sub_1BCB254(priceIconLabelList, v18);
        }
LABEL_25:
        priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.eventItemIconList;
        if ( !priceIconLabelList )
          goto LABEL_30;
        v28 = 0LL;
        while ( (__int64)v28 < priceIconLabelList->fields._size )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   priceIconLabelList,
                   v28,
                   (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ItemIconComponent__get_Item__);
          if ( v28 >= consumeEntityList->max_length )
            goto LABEL_32;
          EventTradePriceInfo__SetItemIcon(
            (EventTradePriceInfo_o *)Item,
            (ItemIconComponent_o *)Item,
            consumeEntityList->m_Items[v28],
            v29);
          priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.eventItemIconList;
          ++v28;
          if ( !priceIconLabelList )
            goto LABEL_30;
        }
      }
    }
  }
}


int32_t __fastcall EventTradePriceInfo__get_DisplayCount(EventTradePriceInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIIconLabel__o *priceIconLabelList; // x8

  if ( (byte_4B16FA7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__, method);
    byte_4B16FA7 = 1;
  }
  priceIconLabelList = this->fields.priceIconLabelList;
  if ( priceIconLabelList )
    return priceIconLabelList->fields._size;
  else
    return 0;
}


void __fastcall EventTradePriceInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B16FAC & 1) == 0 )
  {
    sub_1BCAFF8(&EventTradePriceInfo___c_TypeInfo, v1);
    byte_4B16FAC = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(EventTradePriceInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventTradePriceInfo___c_TypeInfo->static_fields->__9 = (struct EventTradePriceInfo___c_o *)v2;
  sub_1BCAF9C(EventTradePriceInfo___c_TypeInfo->static_fields);
}


void __fastcall EventTradePriceInfo___c___ctor(EventTradePriceInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventTradePriceInfo___c___SetPriceInfo_b__5_0(
        EventTradePriceInfo___c_o *this,
        CommonConsumeEntity_o *entity,
        const MethodInfo *method)
{
  return entity == 0LL;
}