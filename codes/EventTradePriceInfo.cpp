void EventTradePriceInfo___ctor(EventTradePriceInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *v4; // x20

  if ( (byte_4D27149 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIIconLabel___ctor__);
    sub_1C94098(&System_Collections_Generic_List_UIIconLabel__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_ItemIconComponent__TypeInfo);
    byte_4D27149 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UIIconLabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UIIconLabel___ctor__);
  this->fields.priceIconLabelList = (struct System_Collections_Generic_List_UIIconLabel__o *)v3;
  sub_1C9403C(&this->fields.priceIconLabelList, v3);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
  this->fields.eventItemIconList = (struct System_Collections_Generic_List_ItemIconComponent__o *)v4;
  sub_1C9403C(&this->fields.eventItemIconList, v4);
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
  if ( (byte_4D27146 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__);
    this = (EventTradePriceInfo_o *)sub_1C94098(&Method_System_Collections_Generic_List_ItemIconComponent__get_Count__);
    byte_4D27146 = 1;
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
    sub_1C942F0(this, method);
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
  __int64 v7; // x1

  if ( (byte_4D27148 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D27148 = 1;
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
      sub_1C942F0(v6, v7);
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
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *priceIconLabelList; // x0
  int size; // w8
  struct System_Collections_Generic_List_ItemIconComponent__o *eventItemIconList; // x9
  unsigned int v15; // w22
  Il2CppObject *Item; // x0
  UIIconLabel_o *v17; // x23
  int32_t syncRoot; // w24
  int32_t v19; // w3
  unsigned __int64 v20; // x21
  const MethodInfo *v21; // x3

  if ( (byte_4D27147 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_CommonConsumeEntity___);
    sub_1C94098(&System_Func_CommonConsumeEntity__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ItemIconComponent__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_ItemIconComponent__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIIconLabel__get_Item__);
    sub_1C94098(&Method_EventTradePriceInfo___c__SetPriceInfo_b__5_0__);
    sub_1C94098(&EventTradePriceInfo___c_TypeInfo);
    byte_4D27147 = 1;
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
    _9__5_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_CommonConsumeEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__5_0, v9, Method_EventTradePriceInfo___c__SetPriceInfo_b__5_0__, 0);
    static_fields = EventTradePriceInfo___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_CommonConsumeEntity__bool__o *)_9__5_0;
    sub_1C9403C(&static_fields->__9__5_0, _9__5_0);
  }
  if ( !BasicHelper__Any_object__51926292(
          (System_Object_array *)consumeEntityList,
          (System_Func_T__bool__o *)_9__5_0,
          (const MethodInfo_3185514 *)Method_BasicHelper_Any_CommonConsumeEntity___) )
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
          v15 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     priceIconLabelList,
                     v15,
                     (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_UIIconLabel__get_Item__);
            if ( v15 >= LODWORD(consumeEntityList->max_length) )
LABEL_32:
              sub_1C942F8(Item);
            v17 = (UIIconLabel_o *)Item;
            priceIconLabelList = (System_Collections_Generic_List_object__o *)consumeEntityList->m_Items[v15];
            if ( !priceIconLabelList )
              break;
            syncRoot = (int32_t)priceIconLabelList->fields._syncRoot;
            if ( useHoldCount )
            {
              priceIconLabelList = (System_Collections_Generic_List_object__o *)CommonConsumeEntity__GetUserHasNum(
                                                                                  (CommonConsumeEntity_o *)priceIconLabelList,
                                                                                  0);
              v19 = (int)priceIconLabelList;
            }
            else
            {
              v19 = -1;
            }
            if ( !v17 )
              break;
            UIIconLabel__SetPurchaseDecision(v17, 27, syncRoot, v19, 0);
            priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.priceIconLabelList;
            if ( !priceIconLabelList )
              break;
            if ( (signed int)++v15 >= priceIconLabelList->fields._size )
              goto LABEL_25;
          }
LABEL_30:
          sub_1C942F0(priceIconLabelList, v11);
        }
LABEL_25:
        priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.eventItemIconList;
        if ( !priceIconLabelList )
          goto LABEL_30;
        v20 = 0;
        while ( (__int64)v20 < priceIconLabelList->fields._size )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   priceIconLabelList,
                   v20,
                   (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ItemIconComponent__get_Item__);
          if ( v20 >= LODWORD(consumeEntityList->max_length) )
            goto LABEL_32;
          EventTradePriceInfo__SetItemIcon(
            (EventTradePriceInfo_o *)Item,
            (ItemIconComponent_o *)Item,
            consumeEntityList->m_Items[v20],
            v21);
          priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.eventItemIconList;
          ++v20;
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

  if ( (byte_4D27145 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__);
    byte_4D27145 = 1;
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

  if ( (byte_4D2714A & 1) == 0 )
  {
    sub_1C94098(&EventTradePriceInfo___c_TypeInfo);
    byte_4D2714A = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(EventTradePriceInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTradePriceInfo___c_TypeInfo->static_fields->__9 = (struct EventTradePriceInfo___c_o *)v1;
  sub_1C9403C(EventTradePriceInfo___c_TypeInfo->static_fields, v1);
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