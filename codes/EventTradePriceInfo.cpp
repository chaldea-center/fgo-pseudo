void __fastcall EventTradePriceInfo___ctor(EventTradePriceInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Collections_Generic_List_object__o *v15; // x20

  if ( (byte_4B112E1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemIconComponent___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIIconLabel___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_UIIconLabel__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_ItemIconComponent__TypeInfo, v9, v10);
    byte_4B112E1 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UIIconLabel__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIIconLabel___ctor__);
  this->fields.priceIconLabelList = (struct System_Collections_Generic_List_UIIconLabel__o *)v11;
  sub_1BCA784(&this->fields.priceIconLabelList, v11);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ItemIconComponent__TypeInfo,
                                                       v12,
                                                       v13,
                                                       v14);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
  this->fields.eventItemIconList = (struct System_Collections_Generic_List_ItemIconComponent__o *)v15;
  sub_1BCA784(&this->fields.eventItemIconList, v15);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventTradePriceInfo__Awake(EventTradePriceInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventTradePriceInfo_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_UIIconLabel__o *priceIconLabelList; // x8
  int size; // w8
  int v8; // w9
  struct System_Collections_Generic_List_ItemIconComponent__o *eventItemIconList; // x8
  int v10; // w8
  int v11; // w9

  v3 = this;
  if ( (byte_4B112DE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__, method, v2);
    this = (EventTradePriceInfo_o *)sub_1BCA7E0(
                                      &Method_System_Collections_Generic_List_ItemIconComponent__get_Count__,
                                      v4,
                                      v5);
    byte_4B112DE = 1;
  }
  priceIconLabelList = v3->fields.priceIconLabelList;
  if ( !priceIconLabelList )
    goto LABEL_10;
  size = priceIconLabelList->fields._size;
  v8 = -1;
  do
    ++v8;
  while ( v8 < size );
  eventItemIconList = v3->fields.eventItemIconList;
  if ( !eventItemIconList )
LABEL_10:
    sub_1BCAA3C(this, method);
  v10 = eventItemIconList->fields._size;
  v11 = -1;
  do
    ++v11;
  while ( v11 < v10 );
}


void __fastcall EventTradePriceInfo__SetItemIcon(
        EventTradePriceInfo_o *this,
        ItemIconComponent_o *itemIcon,
        CommonConsumeEntity_o *consumeEntity,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B112E0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, itemIcon, consumeEntity);
    byte_4B112E0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, itemIcon);
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
      sub_1BCAA3C(v6, v7);
    }
    if ( !itemIcon )
      goto LABEL_11;
    ItemIconComponent__Clear(itemIcon, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventTradePriceInfo__SetPriceInfo(
        EventTradePriceInfo_o *this,
        CommonConsumeEntity_array *consumeEntityList,
        bool useHoldCount,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  EventTradePriceInfo___c_c *v21; // x0
  System_Func_object__bool__o *_9__5_0; // x22
  Il2CppObject *v23; // x23
  struct EventTradePriceInfo___c_StaticFields *static_fields; // x0
  __int64 v25; // x1
  System_Collections_Generic_List_object__o *priceIconLabelList; // x0
  int size; // w8
  struct System_Collections_Generic_List_ItemIconComponent__o *eventItemIconList; // x9
  il2cpp_array_size_t v29; // w22
  Il2CppObject *Item; // x0
  UIIconLabel_o *v31; // x23
  int32_t syncRoot; // w24
  int32_t v33; // w3
  unsigned __int64 v34; // x21
  const MethodInfo *v35; // x3

  if ( (byte_4B112DF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_CommonConsumeEntity___, consumeEntityList, useHoldCount);
    sub_1BCA7E0(&System_Func_CommonConsumeEntity__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemIconComponent__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemIconComponent__get_Item__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIIconLabel__get_Item__, v15, v16);
    sub_1BCA7E0(&Method_EventTradePriceInfo___c__SetPriceInfo_b__5_0__, v17, v18);
    sub_1BCA7E0(&EventTradePriceInfo___c_TypeInfo, v19, v20);
    byte_4B112DF = 1;
  }
  v21 = EventTradePriceInfo___c_TypeInfo;
  if ( !EventTradePriceInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePriceInfo___c_TypeInfo, consumeEntityList);
    v21 = EventTradePriceInfo___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__bool__o *)v21->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21, consumeEntityList);
      v21 = EventTradePriceInfo___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__5_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                               System_Func_CommonConsumeEntity__bool__TypeInfo,
                                               consumeEntityList,
                                               useHoldCount,
                                               method);
    System_Func_object__bool____ctor(_9__5_0, v23, Method_EventTradePriceInfo___c__SetPriceInfo_b__5_0__, 0LL);
    static_fields = EventTradePriceInfo___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_CommonConsumeEntity__bool__o *)_9__5_0;
    sub_1BCA784(&static_fields->__9__5_0, _9__5_0);
  }
  if ( !BasicHelper__Any_object__49274176(
          (System_Object_array *)consumeEntityList,
          (System_Func_T__bool__o *)_9__5_0,
          (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_CommonConsumeEntity___) )
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
          v29 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     priceIconLabelList,
                     v29,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UIIconLabel__get_Item__);
            if ( v29 >= consumeEntityList->max_length )
LABEL_32:
              sub_1BCAA44(Item, v25);
            v31 = (UIIconLabel_o *)Item;
            priceIconLabelList = (System_Collections_Generic_List_object__o *)consumeEntityList->m_Items[v29];
            if ( !priceIconLabelList )
              break;
            syncRoot = (int32_t)priceIconLabelList->fields._syncRoot;
            if ( useHoldCount )
            {
              priceIconLabelList = (System_Collections_Generic_List_object__o *)CommonConsumeEntity__GetUserHasNum(
                                                                                  (CommonConsumeEntity_o *)priceIconLabelList,
                                                                                  0LL);
              v33 = (int)priceIconLabelList;
            }
            else
            {
              v33 = -1;
            }
            if ( !v31 )
              break;
            UIIconLabel__SetPurchaseDecision(v31, 27, syncRoot, v33, 0LL);
            priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.priceIconLabelList;
            if ( !priceIconLabelList )
              break;
            if ( (signed int)++v29 >= priceIconLabelList->fields._size )
              goto LABEL_25;
          }
LABEL_30:
          sub_1BCAA3C(priceIconLabelList, v25);
        }
LABEL_25:
        priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.eventItemIconList;
        if ( !priceIconLabelList )
          goto LABEL_30;
        v34 = 0LL;
        while ( (__int64)v34 < priceIconLabelList->fields._size )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   priceIconLabelList,
                   v34,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ItemIconComponent__get_Item__);
          if ( v34 >= consumeEntityList->max_length )
            goto LABEL_32;
          EventTradePriceInfo__SetItemIcon(
            (EventTradePriceInfo_o *)Item,
            (ItemIconComponent_o *)Item,
            consumeEntityList->m_Items[v34],
            v35);
          priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.eventItemIconList;
          ++v34;
          if ( !priceIconLabelList )
            goto LABEL_30;
        }
      }
    }
  }
}


int32_t __fastcall EventTradePriceInfo__get_DisplayCount(EventTradePriceInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_UIIconLabel__o *priceIconLabelList; // x8

  if ( (byte_4B112DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__, method, v2);
    byte_4B112DD = 1;
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B112E2 & 1) == 0 )
  {
    sub_1BCA7E0(&EventTradePriceInfo___c_TypeInfo, v1, v2);
    byte_4B112E2 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventTradePriceInfo___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventTradePriceInfo___c_TypeInfo->static_fields->__9 = (struct EventTradePriceInfo___c_o *)v4;
  sub_1BCA784(EventTradePriceInfo___c_TypeInfo->static_fields, v4);
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