void __fastcall EventTradePriceInfo___ctor(EventTradePriceInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A32287 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_ItemIconComponent___ctor__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_UIIconLabel___ctor__, v3);
    sub_1B761C0(&System_Collections_Generic_List_UIIconLabel__TypeInfo, v4);
    sub_1B761C0(&System_Collections_Generic_List_ItemIconComponent__TypeInfo, v5);
    byte_4A32287 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_UIIconLabel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_UIIconLabel___ctor__);
  this->fields.priceIconLabelList = (struct System_Collections_Generic_List_UIIconLabel__o *)v6;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.priceIconLabelList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ItemIconComponent___ctor__);
  this->fields.eventItemIconList = (struct System_Collections_Generic_List_ItemIconComponent__o *)v9;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.eventItemIconList, (int32_t)v9, v10, v11);
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
  if ( (byte_4A32284 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__, method);
    this = (EventTradePriceInfo_o *)sub_1B761C0(
                                      &Method_System_Collections_Generic_List_ItemIconComponent__get_Count__,
                                      v3);
    byte_4A32284 = 1;
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
    sub_1B7641C(this, method);
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

  if ( (byte_4A32286 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, itemIcon);
    byte_4A32286 = 1;
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
      sub_1B7641C(v6, v7);
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
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *priceIconLabelList; // x0
  int size; // w8
  struct System_Collections_Generic_List_ItemIconComponent__o *eventItemIconList; // x9
  il2cpp_array_size_t v22; // w21
  Il2CppObject *Item; // x0
  UIIconLabel_o *v24; // x22
  int32_t syncRoot; // w23
  unsigned __int64 v26; // x21
  const MethodInfo *v27; // x3

  if ( (byte_4A32285 & 1) == 0 )
  {
    sub_1B761C0(&Method_BasicHelper_Any_CommonConsumeEntity___, consumeEntityList);
    sub_1B761C0(&System_Func_CommonConsumeEntity__bool__TypeInfo, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_UIIconLabel__get_Count__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_ItemIconComponent__get_Count__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_ItemIconComponent__get_Item__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_UIIconLabel__get_Item__, v9);
    sub_1B761C0(&Method_EventTradePriceInfo___c__SetPriceInfo_b__3_0__, v10);
    sub_1B761C0(&EventTradePriceInfo___c_TypeInfo, v11);
    byte_4A32285 = 1;
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
    _9__3_0 = (System_Func_object__bool__o *)sub_1B7640C(System_Func_CommonConsumeEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__3_0, v14, Method_EventTradePriceInfo___c__SetPriceInfo_b__3_0__, 0LL);
    static_fields = EventTradePriceInfo___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_CommonConsumeEntity__bool__o *)_9__3_0;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v16, v17);
  }
  if ( !BasicHelper__Any_object__48552060(
          (System_Object_array *)consumeEntityList,
          (System_Func_T__bool__o *)_9__3_0,
          (const MethodInfo_2E4D87C *)Method_BasicHelper_Any_CommonConsumeEntity___) )
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
          v22 = 0;
          while ( 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     priceIconLabelList,
                     v22,
                     (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_UIIconLabel__get_Item__);
            if ( v22 >= consumeEntityList->max_length )
LABEL_29:
              sub_1B76424(Item, v18);
            v24 = (UIIconLabel_o *)Item;
            priceIconLabelList = (System_Collections_Generic_List_object__o *)consumeEntityList->m_Items[v22];
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
            if ( (signed int)++v22 >= priceIconLabelList->fields._size )
              goto LABEL_22;
          }
LABEL_27:
          sub_1B7641C(priceIconLabelList, v18);
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
                   (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_ItemIconComponent__get_Item__);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A32288 & 1) == 0 )
  {
    sub_1B761C0(&EventTradePriceInfo___c_TypeInfo, v1);
    byte_4A32288 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(EventTradePriceInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventTradePriceInfo___c_TypeInfo->static_fields->__9 = (struct EventTradePriceInfo___c_o *)v2;
  sub_1B76164((ServantStatusBattleListViewItem_o *)EventTradePriceInfo___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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