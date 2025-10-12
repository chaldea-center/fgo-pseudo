void EventPersonalMargeUpValInfo___ctor(
        EventPersonalMargeUpValInfo_o *this,
        int32_t eventId,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct ServantEntity_o **p_servantEntity; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C37517 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4C37517 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.margeList, (int32_t)v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  *((_DWORD *)p_servantEntity - 2) = eventId;
  sub_1C32BC4((CGThumbnailListItem_o *)p_servantEntity, (int32_t)servantEntity, v11, v12);
}


void EventPersonalMargeUpValInfo__Add(
        EventPersonalMargeUpValInfo_o *this,
        EventDropItemUpValInfo_array *dropItemInfoList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int max_length; // w8
  __int64 v10; // x22
  EventDropItemUpValInfo_o *v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C3751B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    byte_4C3751B = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( dropItemInfoList )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    max_length = dropItemInfoList->max_length;
    if ( max_length >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v10 >= max_length )
          sub_1C32E84(v6);
        v11 = dropItemInfoList->m_Items[v10];
        if ( !v11 )
          break;
        if ( v11->fields.isInvalid )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v13 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v11,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v11;
            sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v11, v7, v8);
          }
        }
        else
        {
          EventPersonalMargeUpValInfo__Add_41628540(this, v11, 0, v8);
        }
        max_length = dropItemInfoList->max_length;
        if ( (int)++v10 >= max_length )
          goto LABEL_16;
      }
LABEL_22:
      sub_1C32E7C(v6);
    }
LABEL_16:
    if ( !v5 )
      goto LABEL_22;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      v5,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__) )
      EventPersonalMargeUpValInfo__Add_41628540(this, (EventDropItemUpValInfo_o *)v17.fields._current, 1, v16);
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
  }
}


void EventPersonalMargeUpValInfo__Add_41628540(
        EventPersonalMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        bool isInvalid,
        const MethodInfo *method)
{
  int32_t baseFuncType; // w8
  System_Collections_Generic_List_object__o *margeList; // x0
  _BOOL8 v9; // x0
  EventMargeItemUpValInfo_o *current; // x22
  __int64 v11; // x20
  const MethodInfo *v12; // x2
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8
  _BOOL8 v19; // x0
  _BOOL8 v20; // x0
  int32_t rateCount; // w8
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x2
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x8
  const MethodInfo *v30; // x2
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C3751C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_1C32C20(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    byte_4C3751C = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( !dropItemInfo || dropItemInfo->fields.eventId != this->fields.eventId )
    return;
  baseFuncType = dropItemInfo->fields.baseFuncType;
  if ( baseFuncType <= 113 )
  {
    if ( baseFuncType > 15 )
    {
      if ( baseFuncType != 16 && baseFuncType != 111 )
        goto LABEL_36;
    }
    else if ( baseFuncType != 1 )
    {
      if ( baseFuncType != 7 )
      {
LABEL_36:
        margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( !margeList )
          goto LABEL_70;
        if ( baseFuncType == 116 )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v31,
            margeList,
            (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v32 = v31;
          while ( 1 )
          {
            v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v32,
                    (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v20 )
              break;
            current = (EventMargeItemUpValInfo_o *)v32.fields._current;
            if ( !v32.fields._current )
              sub_1C32E7C(v20);
            if ( LODWORD(v32.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
              && v32.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v32,
                (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
              if ( isInvalid )
                return;
              rateCount = dropItemInfo->fields.rateCount;
              if ( current->fields.rateCount <= rateCount )
                return;
LABEL_64:
              current->fields.rateCount = rateCount;
              return;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v32,
            (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
          v11 = sub_1C32E6C(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v11, dropItemInfo, v30);
          if ( !v11 )
            goto LABEL_70;
          *(_DWORD *)(v11 + 96) = dropItemInfo->fields.rateCount;
LABEL_24:
          margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
          if ( margeList )
          {
            items = margeList->fields._items;
            v16 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++margeList->fields._version;
            if ( items )
            {
              size = margeList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  margeList,
                  (Il2CppObject *)v11,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
              }
              else
              {
                v18 = &items->obj.klass + size;
                margeList->fields._size = size + 1;
                v18[4] = (Il2CppClass *)v11;
                sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 4), v11, v13, v14);
              }
              return;
            }
          }
LABEL_70:
          sub_1C32E7C(margeList);
        }
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v31,
          margeList,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v32 = v31;
        while ( 1 )
        {
          v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v32,
                  (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v22 )
            break;
          current = (EventMargeItemUpValInfo_o *)v32.fields._current;
          if ( !v32.fields._current )
            sub_1C32E7C(v22);
          if ( LODWORD(v32.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
            && v32.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
          {
            goto LABEL_33;
          }
        }
LABEL_52:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v32,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        current = (EventMargeItemUpValInfo_o *)sub_1C32E6C(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor(current, dropItemInfo, v23);
        margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( !margeList )
          goto LABEL_70;
        v26 = margeList->fields._items;
        v27 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
        ++margeList->fields._version;
        if ( !v26 )
          goto LABEL_70;
        v28 = margeList->fields._size;
        if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            margeList,
            (Il2CppObject *)current,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          if ( !isInvalid )
            goto LABEL_56;
        }
        else
        {
          v29 = &v26->obj.klass + v28;
          margeList->fields._size = v28 + 1;
          v29[4] = (Il2CppClass *)current;
          sub_1C32BC4((CGThumbnailListItem_o *)(v29 + 4), (int32_t)current, v24, v25);
          if ( !isInvalid )
          {
LABEL_56:
            if ( !current )
              goto LABEL_70;
            current->fields.addCount += dropItemInfo->fields.addCount;
            goto LABEL_63;
          }
        }
        goto LABEL_59;
      }
LABEL_13:
      margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
      if ( !margeList )
        goto LABEL_70;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v31,
        margeList,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v32 = v31;
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v32,
               (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v9 )
          goto LABEL_52;
        current = (EventMargeItemUpValInfo_o *)v32.fields._current;
        if ( !v32.fields._current )
          sub_1C32E7C(v9);
        if ( LODWORD(v32.fields._current[4].klass) == dropItemInfo->fields.targetType
          && LODWORD(v32.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
        {
          goto LABEL_33;
        }
      }
    }
    v11 = sub_1C32E6C(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v11, dropItemInfo, v12);
    if ( !v11 )
      goto LABEL_70;
    *(_QWORD *)(v11 + 92) = *(_QWORD *)&dropItemInfo->fields.addCount;
    goto LABEL_24;
  }
  if ( (unsigned int)(baseFuncType - 114) >= 2 )
  {
    if ( baseFuncType != 129 && baseFuncType != 132 )
      goto LABEL_36;
    goto LABEL_13;
  }
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    goto LABEL_70;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    margeList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v32 = v31;
  do
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v19 )
      goto LABEL_52;
    current = (EventMargeItemUpValInfo_o *)v32.fields._current;
    if ( !v32.fields._current )
      sub_1C32E7C(v19);
  }
  while ( LODWORD(v32.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId );
LABEL_33:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  if ( !isInvalid )
    goto LABEL_56;
LABEL_59:
  if ( !current )
    goto LABEL_70;
  if ( !current->fields.addCount )
    current->fields.addCount += dropItemInfo->fields.addCount;
  if ( !current->fields.rateCount )
  {
LABEL_63:
    rateCount = dropItemInfo->fields.rateCount + current->fields.rateCount;
    goto LABEL_64;
  }
}


int32_t EventPersonalMargeUpValInfo__GetCount(EventPersonalMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPersonalMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4C37519 & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4C37519 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1C32E7C(this);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *EventPersonalMargeUpValInfo__GetList(
        EventPersonalMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  void *v3; // x0
  System_Collections_Generic_List_object__o *margeList; // x20
  System_Comparison_T__o *v5; // x21
  Il2CppObject *v6; // x22
  struct EventPersonalMargeUpValInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C3751D & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C32C20(&Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__);
    sub_1C32C20(&EventPersonalMargeUpValInfo___c_TypeInfo);
    byte_4C3751D = 1;
  }
  v3 = EventPersonalMargeUpValInfo___c_TypeInfo;
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !EventPersonalMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPersonalMargeUpValInfo___c_TypeInfo);
    v3 = EventPersonalMargeUpValInfo___c_TypeInfo;
  }
  v5 = *(System_Comparison_T__o **)(*((_QWORD *)v3 + 23) + 8LL);
  if ( !v5 )
  {
    if ( !*((_DWORD *)v3 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EventPersonalMargeUpValInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)v3 + 23);
    v5 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(v5, v6, Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__, 0);
    static_fields = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v5;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)v5, v8, v9);
  }
  if ( !margeList
    || (System_Collections_Generic_List_object___Sort_58303104(
          margeList,
          v5,
          (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v3 = this->fields.margeList) == 0) )
  {
    sub_1C32E7C(v3);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v3,
                                            (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


EventMargeItemUpValInfo_o *EventPersonalMargeUpValInfo__GetMargeItem(
        EventPersonalMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *margeList; // x0

  if ( (byte_4C3751A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
    byte_4C3751A = 1;
  }
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    sub_1C32E7C(0);
  if ( margeList->fields._size <= index )
    return 0;
  else
    return (EventMargeItemUpValInfo_o *)System_Collections_Generic_List_object___get_Item(
                                          margeList,
                                          index,
                                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
}


bool EventPersonalMargeUpValInfo__IsEmpty(EventPersonalMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPersonalMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4C37518 & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_1C32C20(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4C37518 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1C32E7C(this);
  return margeList->fields._size < 1;
}


void EventPersonalMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3751E & 1) == 0 )
  {
    sub_1C32C20(&EventPersonalMargeUpValInfo___c_TypeInfo);
    byte_4C3751E = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventPersonalMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventPersonalMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventPersonalMargeUpValInfo___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)EventPersonalMargeUpValInfo___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventPersonalMargeUpValInfo___c___ctor(EventPersonalMargeUpValInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventPersonalMargeUpValInfo___c___GetList_b__9_0(
        EventPersonalMargeUpValInfo___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  int32_t priority1; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !a || !b )
    sub_1C32E7C(this);
  priority1 = a->fields.priority1;
  v5 = b->fields.priority1;
  result = v5 - priority1;
  if ( v5 == priority1 )
    return a->fields.priority2 - b->fields.priority2;
  return result;
}