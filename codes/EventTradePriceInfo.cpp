void EventTradePriceInfo___ctor(EventTradePriceInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5932C80 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIIconLabel___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UIIconLabel__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ItemIconComponent__TypeInfo);
    byte_5932C80 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UIIconLabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UIIconLabel___ctor__);
  this->fields.priceIconLabelList = (struct System_Collections_Generic_List_UIIconLabel__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.priceIconLabelList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
  this->fields.eventItemIconList = (struct System_Collections_Generic_List_ItemIconComponent__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventItemIconList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventTradePriceInfo__Awake(EventTradePriceInfo_o *this, const MethodInfo *method)
{
  EventTradePriceInfo_o *v2; // x19

  v2 = this;
  if ( (byte_5932C7D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__);
    this = (EventTradePriceInfo_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ItemIconComponent__get_Count__);
    byte_5932C7D = 1;
  }
  if ( !v2->fields.priceIconLabelList || !v2->fields.eventItemIconList )
    sub_21FFECC(this, method);
}


void EventTradePriceInfo__SetItemIcon(
        EventTradePriceInfo_o *this,
        ItemIconComponent_o *itemIcon,
        CommonConsumeEntity_o *consumeEntity,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_5932C7F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932C7F = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, itemIcon, consumeEntity);
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
      sub_21FFECC(v6, v7);
    }
    if ( !itemIcon )
      goto LABEL_11;
    ItemIconComponent__Clear(itemIcon, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventTradePriceInfo__SetPriceInfo(
        EventTradePriceInfo_o *this,
        CommonConsumeEntity_array *consumeEntityList,
        bool useHoldCount,
        const MethodInfo *method)
{
  EventTradePriceInfo___c_c *v7; // x0
  struct EventTradePriceInfo___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__5_0; // x22
  Il2CppObject *v10; // x23
  struct EventTradePriceInfo___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *priceIconLabelList; // x0
  int32_t size; // w8
  struct System_Collections_Generic_List_ItemIconComponent__o *eventItemIconList; // x9
  int32_t v22; // w22
  Il2CppObject *Item; // x0
  UIIconLabel_o *v24; // x23
  int32_t syncRoot; // w24
  int32_t v26; // w3
  unsigned __int64 v27; // x21
  const MethodInfo *v28; // x3

  if ( (byte_5932C7E & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_CommonConsumeEntity___);
    sub_21FFC50(&System_Func_CommonConsumeEntity__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemIconComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemIconComponent__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UIIconLabel__get_Item__);
    sub_21FFC50(&Method_EventTradePriceInfo___c__SetPriceInfo_b__5_0__);
    sub_21FFC50(&EventTradePriceInfo___c_TypeInfo);
    byte_5932C7E = 1;
  }
  v7 = EventTradePriceInfo___c_TypeInfo;
  if ( !*(&EventTradePriceInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventTradePriceInfo___c_TypeInfo, consumeEntityList, useHoldCount);
    v7 = EventTradePriceInfo___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__5_0 = (System_Func_object__bool__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, consumeEntityList, useHoldCount);
      static_fields = EventTradePriceInfo___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CommonConsumeEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__5_0, v10, Method_EventTradePriceInfo___c__SetPriceInfo_b__5_0__, 0);
    v11 = EventTradePriceInfo___c_TypeInfo->static_fields;
    v11->__9__5_0 = (struct System_Func_CommonConsumeEntity__bool__o *)_9__5_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__5_0, (int32_t)_9__5_0, v12, v13, v14, v15, v16, v17);
  }
  if ( !BasicHelper__Any_object__58575580(
          (System_Object_array *)consumeEntityList,
          (System_Func_T__bool__o *)_9__5_0,
          (const MethodInfo_37DCADC *)Method_BasicHelper_Any_CommonConsumeEntity___) )
  {
    priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.priceIconLabelList;
    if ( !priceIconLabelList || !consumeEntityList )
      goto LABEL_30;
    size = priceIconLabelList->fields._size;
    if ( size != LODWORD(consumeEntityList->max_length) )
      return;
    eventItemIconList = this->fields.eventItemIconList;
    if ( !eventItemIconList )
      goto LABEL_30;
    if ( eventItemIconList->fields._size != size )
      return;
    v22 = 0;
    while ( v22 < priceIconLabelList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               priceIconLabelList,
               v22,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UIIconLabel__get_Item__);
      if ( (unsigned int)v22 >= LODWORD(consumeEntityList->max_length) )
LABEL_32:
        sub_21FFED4(Item);
      v24 = (UIIconLabel_o *)Item;
      priceIconLabelList = (System_Collections_Generic_List_object__o *)consumeEntityList->m_Items[v22];
      if ( priceIconLabelList )
      {
        syncRoot = (int32_t)priceIconLabelList->fields._syncRoot;
        if ( useHoldCount )
        {
          priceIconLabelList = (System_Collections_Generic_List_object__o *)CommonConsumeEntity__GetUserHasNum(
                                                                              (CommonConsumeEntity_o *)priceIconLabelList,
                                                                              0);
          v26 = (int)priceIconLabelList;
        }
        else
        {
          v26 = -1;
        }
        if ( v24 )
        {
          UIIconLabel__SetPurchaseDecision(v24, 27, syncRoot, v26, 0);
          priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.priceIconLabelList;
          ++v22;
          if ( priceIconLabelList )
            continue;
        }
      }
      goto LABEL_30;
    }
    priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.eventItemIconList;
    if ( !priceIconLabelList )
LABEL_30:
      sub_21FFECC(priceIconLabelList, v18);
    v27 = 0;
    while ( (__int64)v27 < priceIconLabelList->fields._size )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               priceIconLabelList,
               v27,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ItemIconComponent__get_Item__);
      if ( v27 >= LODWORD(consumeEntityList->max_length) )
        goto LABEL_32;
      EventTradePriceInfo__SetItemIcon(
        (EventTradePriceInfo_o *)Item,
        (ItemIconComponent_o *)Item,
        consumeEntityList->m_Items[v27],
        v28);
      priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.eventItemIconList;
      ++v27;
      if ( !priceIconLabelList )
        goto LABEL_30;
    }
  }
}


int32_t EventTradePriceInfo__get_DisplayCount(EventTradePriceInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIIconLabel__o *priceIconLabelList; // x8

  if ( (byte_5932C7C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__);
    byte_5932C7C = 1;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5932C81 & 1) == 0 )
  {
    sub_21FFC50(&EventTradePriceInfo___c_TypeInfo);
    byte_5932C81 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventTradePriceInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventTradePriceInfo___c_TypeInfo->static_fields->__9 = (struct EventTradePriceInfo___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventTradePriceInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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