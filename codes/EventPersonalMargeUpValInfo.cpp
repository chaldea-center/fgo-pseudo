// local variable allocation has failed, the output may be wrong!
void __fastcall EventPersonalMargeUpValInfo___ctor(
        EventPersonalMargeUpValInfo_o *this,
        int32_t eventId,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  struct ServantEntity_o **p_servantEntity; // x21
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FBFE4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, *(_QWORD *)&eventId);
    sub_1B640C8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v7);
    byte_49FBFE4 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                      *(_QWORD *)&eventId,
                                                      servantEntity);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.margeList, (int32_t)v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  *((_DWORD *)p_servantEntity - 2) = eventId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_servantEntity, (int32_t)servantEntity, v12, v13);
}


void __fastcall EventPersonalMargeUpValInfo__Add(
        EventPersonalMargeUpValInfo_o *this,
        EventDropItemUpValInfo_array *dropItemInfoList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  signed int max_length; // w8
  __int64 v17; // x22
  EventDropItemUpValInfo_o *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FBFE8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__, dropItemInfoList);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v10);
    byte_49FBFE8 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( dropItemInfoList )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo,
                                                         dropItemInfoList,
                                                         method);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    max_length = dropItemInfoList->max_length;
    if ( max_length >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v17 >= max_length )
          sub_1B6432C(v12, v13);
        v18 = dropItemInfoList->m_Items[v17];
        if ( !v18 )
          break;
        if ( v18->fields.isInvalid )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v20 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v18,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v18;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v18, v14, (int32_t)v15);
          }
        }
        else
        {
          EventPersonalMargeUpValInfo__Add_38583160(this, v18, 0, v15);
        }
        max_length = dropItemInfoList->max_length;
        if ( (int)++v17 >= max_length )
          goto LABEL_16;
      }
LABEL_22:
      sub_1B64324(v12);
    }
LABEL_16:
    if ( !v11 )
      goto LABEL_22;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      v11,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v24,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__) )
      EventPersonalMargeUpValInfo__Add_38583160(this, (EventDropItemUpValInfo_o *)v24.fields._current, 1, v23);
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
  }
}


void __fastcall EventPersonalMargeUpValInfo__Add_38583160(
        EventPersonalMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        bool isInvalid,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  unsigned int baseFuncType; // w8
  int v13; // w9
  System_Collections_Generic_List_object__o *margeList; // x0
  _BOOL8 v15; // x0
  EventMargeItemUpValInfo_o *current; // x22
  _BOOL8 v17; // x0
  _BOOL8 v18; // x0
  int32_t rateCount; // w8
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  const MethodInfo *v23; // x2
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  EventMargeItemUpValInfo_o *v32; // x20
  const MethodInfo *v33; // x2
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FBFE9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__, dropItemInfo);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v8);
    sub_1B640C8(&EventMargeItemUpValInfo_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__, v11);
    byte_49FBFE9 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  if ( !dropItemInfo || dropItemInfo->fields.eventId != this->fields.eventId )
    return;
  baseFuncType = dropItemInfo->fields.baseFuncType;
  if ( baseFuncType - 111 > 0x15 )
  {
LABEL_14:
    if ( baseFuncType > 0x10 || ((1 << baseFuncType) & 0x10082) == 0 )
    {
      margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
      if ( !margeList )
        goto LABEL_63;
      if ( baseFuncType == 116 )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v40,
          margeList,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v41 = v40;
        while ( 1 )
        {
          v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v41,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v18 )
            break;
          current = (EventMargeItemUpValInfo_o *)v41.fields._current;
          if ( !v41.fields._current )
            sub_1B64324(v18);
          if ( LODWORD(v41.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
            && v41.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v41,
              (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
            if ( isInvalid )
              return;
            rateCount = dropItemInfo->fields.rateCount;
            if ( current->fields.rateCount <= rateCount )
              return;
LABEL_53:
            current->fields.rateCount = rateCount;
            return;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v41,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        v32 = (EventMargeItemUpValInfo_o *)sub_1B64314(EventMargeItemUpValInfo_TypeInfo, v30, v31);
        EventMargeItemUpValInfo___ctor(v32, dropItemInfo, v33);
        if ( v32 )
        {
          v32->fields.rateCount = dropItemInfo->fields.rateCount;
          margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
          if ( margeList )
          {
            items = margeList->fields._items;
            v37 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++margeList->fields._version;
            if ( items )
            {
              size = margeList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  margeList,
                  (Il2CppObject *)v32,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v39 = &items->obj.klass + size;
                margeList->fields._size = size + 1;
                v39[4] = (Il2CppClass *)v32;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v32, v34, v35);
              }
              return;
            }
          }
        }
LABEL_63:
        sub_1B64324(margeList);
      }
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v40,
        margeList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v41 = v40;
      do
      {
        v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v41,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v20 )
          goto LABEL_40;
        current = (EventMargeItemUpValInfo_o *)v41.fields._current;
        if ( !v41.fields._current )
          sub_1B64324(v20);
      }
      while ( LODWORD(v41.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId
           || v41.fields._current[5].klass != (Il2CppClass *)dropItemInfo->fields.itemEntity );
LABEL_22:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v41,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( !isInvalid )
        goto LABEL_50;
      goto LABEL_44;
    }
    goto LABEL_16;
  }
  v13 = 1 << (baseFuncType - 111);
  if ( (v13 & 0x240001) == 0 )
  {
    if ( (v13 & 0x18) != 0 )
    {
      margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
      if ( !margeList )
        goto LABEL_63;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v40,
        margeList,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v41 = v40;
      while ( 1 )
      {
        v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v41,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v15 )
          goto LABEL_40;
        current = (EventMargeItemUpValInfo_o *)v41.fields._current;
        if ( !v41.fields._current )
          sub_1B64324(v15);
        if ( LODWORD(v41.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
          goto LABEL_22;
      }
    }
    goto LABEL_14;
  }
LABEL_16:
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    goto LABEL_63;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    margeList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v41 = v40;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v17 )
      break;
    current = (EventMargeItemUpValInfo_o *)v41.fields._current;
    if ( !v41.fields._current )
      sub_1B64324(v17);
    if ( LODWORD(v41.fields._current[4].klass) == dropItemInfo->fields.targetType
      && LODWORD(v41.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
    {
      goto LABEL_22;
    }
  }
LABEL_40:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  current = (EventMargeItemUpValInfo_o *)sub_1B64314(EventMargeItemUpValInfo_TypeInfo, v21, v22);
  EventMargeItemUpValInfo___ctor(current, dropItemInfo, v23);
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    goto LABEL_63;
  v26 = margeList->fields._items;
  v27 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
  ++margeList->fields._version;
  if ( !v26 )
    goto LABEL_63;
  v28 = margeList->fields._size;
  if ( (unsigned int)v28 < v26->max_length )
  {
    v29 = &v26->obj.klass + v28;
    margeList->fields._size = v28 + 1;
    v29[4] = (Il2CppClass *)current;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)current, v24, v25);
    if ( isInvalid )
      goto LABEL_44;
    goto LABEL_50;
  }
  System_Collections_Generic_List_object___AddWithResize(
    margeList,
    (Il2CppObject *)current,
    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  if ( !isInvalid )
  {
LABEL_50:
    if ( current )
    {
      current->fields.addCount += dropItemInfo->fields.addCount;
LABEL_52:
      rateCount = dropItemInfo->fields.rateCount + current->fields.rateCount;
      goto LABEL_53;
    }
    goto LABEL_63;
  }
LABEL_44:
  if ( !current )
    goto LABEL_63;
  if ( !current->fields.addCount )
    current->fields.addCount += dropItemInfo->fields.addCount;
  if ( !current->fields.rateCount )
    goto LABEL_52;
}


int32_t __fastcall EventPersonalMargeUpValInfo__GetCount(EventPersonalMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPersonalMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_49FBFE6 & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_1B640C8(
                                              &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                              method);
    byte_49FBFE6 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1B64324(this);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventPersonalMargeUpValInfo__GetList(
        EventPersonalMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *v8; // x0
  System_Collections_Generic_List_object__o *margeList; // x20
  System_Comparison_T__o *v10; // x21
  Il2CppObject *v11; // x22
  struct EventPersonalMargeUpValInfo___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FBFEA & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v5);
    sub_1B640C8(&Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__, v6);
    sub_1B640C8(&EventPersonalMargeUpValInfo___c_TypeInfo, v7);
    byte_49FBFEA = 1;
  }
  v8 = EventPersonalMargeUpValInfo___c_TypeInfo;
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !EventPersonalMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPersonalMargeUpValInfo___c_TypeInfo);
    v8 = EventPersonalMargeUpValInfo___c_TypeInfo;
  }
  v10 = *(System_Comparison_T__o **)(*((_QWORD *)v8 + 23) + 8LL);
  if ( !v10 )
  {
    if ( !*((_DWORD *)v8 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = EventPersonalMargeUpValInfo___c_TypeInfo;
    }
    v11 = (Il2CppObject *)**((_QWORD **)v8 + 23);
    v10 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventMargeItemUpValInfo__TypeInfo, method, v2);
    System_Comparison_object____ctor(v10, v11, Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__, 0LL);
    static_fields = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v10;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_0, (int32_t)v10, v13, v14);
  }
  if ( !margeList
    || (System_Collections_Generic_List_object___Sort_55243320(
          margeList,
          v10,
          (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v8 = this->fields.margeList) == 0LL) )
  {
    sub_1B64324(v8);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v8,
                                            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMargeItemUpValInfo_o *__fastcall EventPersonalMargeUpValInfo__GetMargeItem(
        EventPersonalMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *margeList; // x0

  if ( (byte_49FBFE7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__, v5);
    byte_49FBFE7 = 1;
  }
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    sub_1B64324(0LL);
  if ( margeList->fields._size <= index )
    return 0LL;
  else
    return (EventMargeItemUpValInfo_o *)System_Collections_Generic_List_object___get_Item(
                                          margeList,
                                          index,
                                          (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
}


bool __fastcall EventPersonalMargeUpValInfo__IsEmpty(EventPersonalMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPersonalMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_49FBFE5 & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_1B640C8(
                                              &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                              method);
    byte_49FBFE5 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1B64324(this);
  return margeList->fields._size < 1;
}


void __fastcall EventPersonalMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FBFEB & 1) == 0 )
  {
    sub_1B640C8(&EventPersonalMargeUpValInfo___c_TypeInfo, v1);
    byte_49FBFEB = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventPersonalMargeUpValInfo___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventPersonalMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventPersonalMargeUpValInfo___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventPersonalMargeUpValInfo___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall EventPersonalMargeUpValInfo___c___ctor(
        EventPersonalMargeUpValInfo___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventPersonalMargeUpValInfo___c___GetList_b__9_0(
        EventPersonalMargeUpValInfo___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  int32_t priority1; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !a || !b )
    sub_1B64324(this);
  priority1 = a->fields.priority1;
  v5 = b->fields.priority1;
  result = v5 - priority1;
  if ( v5 == priority1 )
    return a->fields.priority2 - b->fields.priority2;
  return result;
}