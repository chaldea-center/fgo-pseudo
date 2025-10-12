void EventTradePriceInfo___ctor(EventTradePriceInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *v4; // x20

  if ( (byte_4C32446 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIIconLabel___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UIIconLabel__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_ItemIconComponent__TypeInfo);
    byte_4C32446 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UIIconLabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UIIconLabel___ctor__);
  this->fields.priceIconLabelList = (struct System_Collections_Generic_List_UIIconLabel__o *)v3;
  sub_1C32BC4(&this->fields.priceIconLabelList, v3);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
  this->fields.eventItemIconList = (struct System_Collections_Generic_List_ItemIconComponent__o *)v4;
  sub_1C32BC4(&this->fields.eventItemIconList, v4);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventTradePriceInfo__Awake(EventTradePriceInfo_o *this, const MethodInfo *method)
{
  EventTradePriceInfo_o *v2; // x19
  struct System_Collections_Generic_List_UIIconLabel__o *priceIconLabelList; // x8
  int size; // w8
  int v5; // w9
  struct System_Collections_Generic_List_ItemIconComponent__o *eventItemIconList; // x8
  int v7; // w8
  int v8; // w9

  v2 = this;
  if ( (byte_4C32443 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__);
    this = (EventTradePriceInfo_o *)sub_1C32C20(&Method_System_Collections_Generic_List_ItemIconComponent__get_Count__);
    byte_4C32443 = 1;
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
    sub_1C32E7C(this);
  v7 = eventItemIconList->fields._size;
  v8 = -1;
  do
    ++v8;
  while ( v8 < v7 );
}


void EventTradePriceInfo__SetItemIcon(
        EventTradePriceInfo_o *this,
        ItemIconComponent_o *itemIcon,
        CommonConsumeEntity_o *consumeEntity,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0

  if ( (byte_4C32445 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32445 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemIcon, 0, 0);
  if ( !v6 )
  {
    if ( consumeEntity )
    {
      if ( itemIcon )
      {
        ItemIconComponent__SetItem(itemIcon, consumeEntity->fields.objectId, -1, 1, 0);
        return;
      }
LABEL_11:
      sub_1C32E7C(v6);
    }
    if ( !itemIcon )
      goto LABEL_11;
    ItemIconComponent__Clear(itemIcon, 0);
  }
}


void EventTradePriceInfo__SetPriceInfo(
        EventTradePriceInfo_o *this,
        CommonConsumeEntity_array *consumeEntityList,
        bool useHoldCount,
        const MethodInfo *method)
{
  EventTradePriceInfo___c_c *v7; // x0
  System_Func_object__bool__o *_9__5_0; // x22
  Il2CppObject *v9; // x23
  struct EventTradePriceInfo___c_StaticFields *static_fields; // x0
  System_Collections_Generic_List_object__o *priceIconLabelList; // x0
  int size; // w8
  struct System_Collections_Generic_List_ItemIconComponent__o *eventItemIconList; // x9
  unsigned int v14; // w22
  Il2CppObject *Item; // x0
  UIIconLabel_o *v16; // x23
  int32_t syncRoot; // w24
  int32_t v18; // w3
  unsigned __int64 v19; // x21
  const MethodInfo *v20; // x3

  if ( (byte_4C32444 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_CommonConsumeEntity___);
    sub_1C32C20(&System_Func_CommonConsumeEntity__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemIconComponent__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ItemIconComponent__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIIconLabel__get_Item__);
    sub_1C32C20(&Method_EventTradePriceInfo___c__SetPriceInfo_b__5_0__);
    sub_1C32C20(&EventTradePriceInfo___c_TypeInfo);
    byte_4C32444 = 1;
  }
  v7 = EventTradePriceInfo___c_TypeInfo;
  if ( !EventTradePriceInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePriceInfo___c_TypeInfo);
    v7 = EventTradePriceInfo___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__bool__o *)v7->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = EventTradePriceInfo___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__5_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_CommonConsumeEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__5_0, v9, Method_EventTradePriceInfo___c__SetPriceInfo_b__5_0__, 0);
    static_fields = EventTradePriceInfo___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_CommonConsumeEntity__bool__o *)_9__5_0;
    sub_1C32BC4(&static_fields->__9__5_0, _9__5_0);
  }
  if ( !BasicHelper__Any_object__51144764(
          (System_Object_array *)consumeEntityList,
          (System_Func_T__bool__o *)_9__5_0,
          (const MethodInfo_30C683C *)Method_BasicHelper_Any_CommonConsumeEntity___) )
  {
    priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.priceIconLabelList;
    if ( !priceIconLabelList || !consumeEntityList )
      goto LABEL_30;
    size = priceIconLabelList->fields._size;
    if ( size == LODWORD(consumeEntityList->max_length) )
    {
      eventItemIconList = this->fields.eventItemIconList;
      if ( !eventItemIconList )
        goto LABEL_30;
      if ( eventItemIconList->fields._size == size )
      {
        if ( size >= 1 )
        {
          v14 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     priceIconLabelList,
                     v14,
                     (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIIconLabel__get_Item__);
            if ( v14 >= LODWORD(consumeEntityList->max_length) )
LABEL_32:
              sub_1C32E84(Item);
            v16 = (UIIconLabel_o *)Item;
            priceIconLabelList = (System_Collections_Generic_List_object__o *)consumeEntityList->m_Items[v14];
            if ( !priceIconLabelList )
              break;
            syncRoot = (int32_t)priceIconLabelList->fields._syncRoot;
            if ( useHoldCount )
            {
              priceIconLabelList = (System_Collections_Generic_List_object__o *)CommonConsumeEntity__GetUserHasNum(
                                                                                  (CommonConsumeEntity_o *)priceIconLabelList,
                                                                                  0);
              v18 = (int)priceIconLabelList;
            }
            else
            {
              v18 = -1;
            }
            if ( !v16 )
              break;
            UIIconLabel__SetPurchaseDecision(v16, 27, syncRoot, v18, 0);
            priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.priceIconLabelList;
            if ( !priceIconLabelList )
              break;
            if ( (signed int)++v14 >= priceIconLabelList->fields._size )
              goto LABEL_25;
          }
LABEL_30:
          sub_1C32E7C(priceIconLabelList);
        }
LABEL_25:
        priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.eventItemIconList;
        if ( !priceIconLabelList )
          goto LABEL_30;
        v19 = 0;
        while ( (__int64)v19 < priceIconLabelList->fields._size )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   priceIconLabelList,
                   v19,
                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ItemIconComponent__get_Item__);
          if ( v19 >= LODWORD(consumeEntityList->max_length) )
            goto LABEL_32;
          EventTradePriceInfo__SetItemIcon(
            (EventTradePriceInfo_o *)Item,
            (ItemIconComponent_o *)Item,
            consumeEntityList->m_Items[v19],
            v20);
          priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.eventItemIconList;
          ++v19;
          if ( !priceIconLabelList )
            goto LABEL_30;
        }
      }
    }
  }
}


int32_t EventTradePriceInfo__get_DisplayCount(EventTradePriceInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIIconLabel__o *priceIconLabelList; // x8

  if ( (byte_4C32442 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__);
    byte_4C32442 = 1;
  }
  priceIconLabelList = this->fields.priceIconLabelList;
  if ( priceIconLabelList )
    return priceIconLabelList->fields._size;
  else
    return 0;
}


void EventTradePriceInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C32447 & 1) == 0 )
  {
    sub_1C32C20(&EventTradePriceInfo___c_TypeInfo);
    byte_4C32447 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventTradePriceInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTradePriceInfo___c_TypeInfo->static_fields->__9 = (struct EventTradePriceInfo___c_o *)v1;
  sub_1C32BC4(EventTradePriceInfo___c_TypeInfo->static_fields, v1);
}


void EventTradePriceInfo___c___ctor(EventTradePriceInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventTradePriceInfo___c___SetPriceInfo_b__5_0(
        EventTradePriceInfo___c_o *this,
        CommonConsumeEntity_o *entity,
        const MethodInfo *method)
{
  return entity == 0;
}