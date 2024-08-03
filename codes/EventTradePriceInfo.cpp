void __fastcall EventTradePriceInfo___ctor(EventTradePriceInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A006F4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemIconComponent___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIIconLabel___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_UIIconLabel__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_List_ItemIconComponent__TypeInfo, v6);
    byte_4A006F4 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_UIIconLabel__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIIconLabel___ctor__);
  this->fields.priceIconLabelList = (struct System_Collections_Generic_List_UIIconLabel__o *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.priceIconLabelList, (int32_t)v7, v8, v9);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ItemIconComponent__TypeInfo,
                                                       v10,
                                                       v11);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
  this->fields.eventItemIconList = (struct System_Collections_Generic_List_ItemIconComponent__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventItemIconList, (int32_t)v12, v13, v14);
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
  if ( (byte_4A006F1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__, method);
    this = (EventTradePriceInfo_o *)sub_1B640C8(
                                      &Method_System_Collections_Generic_List_ItemIconComponent__get_Count__,
                                      v3);
    byte_4A006F1 = 1;
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
    sub_1B64324(this);
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

  if ( (byte_4A006F3 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, itemIcon);
    byte_4A006F3 = 1;
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
      sub_1B64324(v6);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  EventTradePriceInfo___c_c *v12; // x0
  System_Func_object__bool__o *_9__3_0; // x21
  Il2CppObject *v14; // x22
  struct EventTradePriceInfo___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_List_object__o *priceIconLabelList; // x0
  int size; // w8
  struct System_Collections_Generic_List_ItemIconComponent__o *eventItemIconList; // x9
  il2cpp_array_size_t v21; // w21
  Il2CppObject *Item; // x0
  __int64 v23; // x1
  UIIconLabel_o *v24; // x22
  int32_t syncRoot; // w23
  unsigned __int64 v26; // x21
  const MethodInfo *v27; // x3

  if ( (byte_4A006F2 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_CommonConsumeEntity___, consumeEntityList);
    sub_1B640C8(&System_Func_CommonConsumeEntity__bool__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemIconComponent__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ItemIconComponent__get_Item__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIIconLabel__get_Item__, v9);
    sub_1B640C8(&Method_EventTradePriceInfo___c__SetPriceInfo_b__3_0__, v10);
    sub_1B640C8(&EventTradePriceInfo___c_TypeInfo, v11);
    byte_4A006F2 = 1;
  }
  v12 = EventTradePriceInfo___c_TypeInfo;
  if ( !EventTradePriceInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventTradePriceInfo___c_TypeInfo);
    v12 = EventTradePriceInfo___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__bool__o *)v12->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = EventTradePriceInfo___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__3_0 = (System_Func_object__bool__o *)sub_1B64314(
                                               System_Func_CommonConsumeEntity__bool__TypeInfo,
                                               consumeEntityList,
                                               method);
    System_Func_object__bool____ctor(_9__3_0, v14, Method_EventTradePriceInfo___c__SetPriceInfo_b__3_0__, 0LL);
    static_fields = EventTradePriceInfo___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_CommonConsumeEntity__bool__o *)_9__3_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v16, v17);
  }
  if ( !BasicHelper__Any_object__48384284(
          (System_Object_array *)consumeEntityList,
          (System_Func_T__bool__o *)_9__3_0,
          (const MethodInfo_2E2491C *)Method_BasicHelper_Any_CommonConsumeEntity___) )
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
          v21 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     priceIconLabelList,
                     v21,
                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UIIconLabel__get_Item__);
            if ( v21 >= consumeEntityList->max_length )
LABEL_29:
              sub_1B6432C(Item, v23);
            v24 = (UIIconLabel_o *)Item;
            priceIconLabelList = (System_Collections_Generic_List_object__o *)consumeEntityList->m_Items[v21];
            if ( !priceIconLabelList )
              break;
            syncRoot = (int32_t)priceIconLabelList->fields._syncRoot;
            priceIconLabelList = (System_Collections_Generic_List_object__o *)CommonConsumeEntity__GetUserHasNum(
                                                                                (CommonConsumeEntity_o *)priceIconLabelList,
                                                                                0LL);
            if ( !v24 )
              break;
            UIIconLabel__SetPurchaseDecision(v24, 27, syncRoot, (int32_t)priceIconLabelList, 0LL);
            priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.priceIconLabelList;
            if ( !priceIconLabelList )
              break;
            if ( (signed int)++v21 >= priceIconLabelList->fields._size )
              goto LABEL_22;
          }
LABEL_27:
          sub_1B64324(priceIconLabelList);
        }
LABEL_22:
        priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.eventItemIconList;
        if ( !priceIconLabelList )
          goto LABEL_27;
        v26 = 0LL;
        while ( (__int64)v26 < priceIconLabelList->fields._size )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   priceIconLabelList,
                   v26,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ItemIconComponent__get_Item__);
          if ( v26 >= consumeEntityList->max_length )
            goto LABEL_29;
          EventTradePriceInfo__SetItemIcon(
            (EventTradePriceInfo_o *)Item,
            (ItemIconComponent_o *)Item,
            consumeEntityList->m_Items[v26],
            v27);
          priceIconLabelList = (System_Collections_Generic_List_object__o *)this->fields.eventItemIconList;
          ++v26;
          if ( !priceIconLabelList )
            goto LABEL_27;
        }
      }
    }
  }
}


void __fastcall EventTradePriceInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A006F5 & 1) == 0 )
  {
    sub_1B640C8(&EventTradePriceInfo___c_TypeInfo, v1);
    byte_4A006F5 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventTradePriceInfo___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventTradePriceInfo___c_TypeInfo->static_fields->__9 = (struct EventTradePriceInfo___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)EventTradePriceInfo___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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