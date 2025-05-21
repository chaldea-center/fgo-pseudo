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
  const MethodInfo *v10; // x3
  struct ServantEntity_o **p_servantEntity; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B4460E & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, *(_QWORD *)&eventId);
    sub_1BDB878(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v7);
    byte_4B4460E = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v8;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.margeList, (int32_t)v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  *((_DWORD *)p_servantEntity - 2) = eventId;
  sub_1BDB81C((CGThumbnailListItem_o *)p_servantEntity, (int32_t)servantEntity, v12, v13);
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
  EventDropItemUpValInfo_o *v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  signed int max_length; // w8
  __int64 v17; // x22
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B44612 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__, dropItemInfoList);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v9);
    sub_1BDB878(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v10);
    byte_4B44612 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( dropItemInfoList )
  {
    v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v11,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    max_length = dropItemInfoList->max_length;
    if ( max_length >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v17 >= max_length )
          sub_1BDBADC(v12, v13, v14);
        v13 = dropItemInfoList->m_Items[v17];
        if ( !v13 )
          break;
        if ( v13->fields.isInvalid )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v19 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v13,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v13;
            sub_1BDB81C((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v13, v14, v15);
          }
        }
        else
        {
          EventPersonalMargeUpValInfo__Add_40727716(this, v13, 0, v15);
        }
        max_length = dropItemInfoList->max_length;
        if ( (int)++v17 >= max_length )
          goto LABEL_16;
      }
LABEL_22:
      sub_1BDBAD4(v12, v13);
    }
LABEL_16:
    if ( !v11 )
      goto LABEL_22;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      v11,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__) )
      EventPersonalMargeUpValInfo__Add_40727716(this, (EventDropItemUpValInfo_o *)v23.fields._current, 1, v22);
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
  }
}


void __fastcall EventPersonalMargeUpValInfo__Add_40727716(
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
  int32_t baseFuncType; // w8
  System_Collections_Generic_List_object__o *margeList; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  EventMargeItemUpValInfo_o *current; // x22
  __int64 v17; // x20
  const MethodInfo *v18; // x2
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8
  _BOOL8 v25; // x0
  __int64 v26; // x1
  _BOOL8 v27; // x0
  __int64 v28; // x1
  int32_t rateCount; // w8
  _BOOL8 v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x8
  const MethodInfo *v39; // x2
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B44613 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__, dropItemInfo);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v8);
    sub_1BDB878(&EventMargeItemUpValInfo_TypeInfo, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__, v11);
    byte_4B44613 = 1;
  }
  memset(&v41, 0, sizeof(v41));
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
            (System_Collections_Generic_List_Enumerator_T__o *)&v40,
            margeList,
            (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v41 = v40;
          while ( 1 )
          {
            v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v41,
                    (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v27 )
              break;
            current = (EventMargeItemUpValInfo_o *)v41.fields._current;
            if ( !v41.fields._current )
              sub_1BDBAD4(v27, v28);
            if ( LODWORD(v41.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
              && v41.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v41,
                (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
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
            &v41,
            (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
          v17 = sub_1BDBAC4(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v17, dropItemInfo, v39);
          if ( !v17 )
            goto LABEL_70;
          *(_DWORD *)(v17 + 96) = dropItemInfo->fields.rateCount;
LABEL_24:
          margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
          if ( margeList )
          {
            items = margeList->fields._items;
            v22 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++margeList->fields._version;
            if ( items )
            {
              size = margeList->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  margeList,
                  (Il2CppObject *)v17,
                  *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                margeList->fields._size = size + 1;
                v24[4] = (Il2CppClass *)v17;
                sub_1BDB81C((CGThumbnailListItem_o *)(v24 + 4), v17, v19, v20);
              }
              return;
            }
          }
LABEL_70:
          sub_1BDBAD4(margeList, dropItemInfo);
        }
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v40,
          margeList,
          (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v41 = v40;
        while ( 1 )
        {
          v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v41,
                  (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v30 )
            break;
          current = (EventMargeItemUpValInfo_o *)v41.fields._current;
          if ( !v41.fields._current )
            sub_1BDBAD4(v30, v31);
          if ( LODWORD(v41.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
            && v41.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
          {
            goto LABEL_33;
          }
        }
LABEL_52:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v41,
          (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        current = (EventMargeItemUpValInfo_o *)sub_1BDBAC4(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor(current, dropItemInfo, v32);
        margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( !margeList )
          goto LABEL_70;
        v35 = margeList->fields._items;
        v36 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
        ++margeList->fields._version;
        if ( !v35 )
          goto LABEL_70;
        v37 = margeList->fields._size;
        if ( (unsigned int)v37 >= v35->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            margeList,
            (Il2CppObject *)current,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          if ( !isInvalid )
            goto LABEL_56;
        }
        else
        {
          v38 = &v35->obj.klass + v37;
          margeList->fields._size = v37 + 1;
          v38[4] = (Il2CppClass *)current;
          sub_1BDB81C((CGThumbnailListItem_o *)(v38 + 4), (int32_t)current, v33, v34);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v40,
        margeList,
        (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v41 = v40;
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v41,
                (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v14 )
          goto LABEL_52;
        current = (EventMargeItemUpValInfo_o *)v41.fields._current;
        if ( !v41.fields._current )
          sub_1BDBAD4(v14, v15);
        if ( LODWORD(v41.fields._current[4].klass) == dropItemInfo->fields.targetType
          && LODWORD(v41.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
        {
          goto LABEL_33;
        }
      }
    }
    v17 = sub_1BDBAC4(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v17, dropItemInfo, v18);
    if ( !v17 )
      goto LABEL_70;
    *(_QWORD *)(v17 + 92) = *(_QWORD *)&dropItemInfo->fields.addCount;
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    margeList,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v41 = v40;
  do
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v25 )
      goto LABEL_52;
    current = (EventMargeItemUpValInfo_o *)v41.fields._current;
    if ( !v41.fields._current )
      sub_1BDBAD4(v25, v26);
  }
  while ( LODWORD(v41.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId );
LABEL_33:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
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


int32_t __fastcall EventPersonalMargeUpValInfo__GetCount(EventPersonalMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPersonalMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4B44610 & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_1BDB878(
                                              &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                              method);
    byte_4B44610 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1BDBAD4(this, method);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventPersonalMargeUpValInfo__GetList(
        EventPersonalMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  void *v7; // x0
  System_Collections_Generic_List_object__o *margeList; // x20
  System_Comparison_T__o *v9; // x21
  Il2CppObject *v10; // x22
  struct EventPersonalMargeUpValInfo___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B44614 & 1) == 0 )
  {
    sub_1BDB878(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v4);
    sub_1BDB878(&Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__, v5);
    sub_1BDB878(&EventPersonalMargeUpValInfo___c_TypeInfo, v6);
    byte_4B44614 = 1;
  }
  v7 = EventPersonalMargeUpValInfo___c_TypeInfo;
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !EventPersonalMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPersonalMargeUpValInfo___c_TypeInfo);
    v7 = EventPersonalMargeUpValInfo___c_TypeInfo;
  }
  v9 = *(System_Comparison_T__o **)(*((_QWORD *)v7 + 23) + 8LL);
  if ( !v9 )
  {
    if ( !*((_DWORD *)v7 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = EventPersonalMargeUpValInfo___c_TypeInfo;
    }
    v10 = (Il2CppObject *)**((_QWORD **)v7 + 23);
    v9 = (System_Comparison_T__o *)sub_1BDBAC4(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(v9, v10, Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__, 0LL);
    static_fields = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v9;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)v9, v12, v13);
  }
  if ( !margeList
    || (System_Collections_Generic_List_object___Sort_57505928(
          margeList,
          v9,
          (const MethodInfo_36D7888 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v7 = this->fields.margeList) == 0LL) )
  {
    sub_1BDBAD4(v7, method);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v7,
                                            (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMargeItemUpValInfo_o *__fastcall EventPersonalMargeUpValInfo__GetMargeItem(
        EventPersonalMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *margeList; // x0

  if ( (byte_4B44611 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, *(_QWORD *)&index);
    sub_1BDB878(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__, v5);
    byte_4B44611 = 1;
  }
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    sub_1BDBAD4(0LL, *(_QWORD *)&index);
  if ( margeList->fields._size <= index )
    return 0LL;
  else
    return (EventMargeItemUpValInfo_o *)System_Collections_Generic_List_object___get_Item(
                                          margeList,
                                          index,
                                          (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
}


bool __fastcall EventPersonalMargeUpValInfo__IsEmpty(EventPersonalMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPersonalMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4B4460F & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_1BDB878(
                                              &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                              method);
    byte_4B4460F = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1BDBAD4(this, method);
  return margeList->fields._size < 1;
}


void __fastcall EventPersonalMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B44615 & 1) == 0 )
  {
    sub_1BDB878(&EventPersonalMargeUpValInfo___c_TypeInfo, v1);
    byte_4B44615 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(EventPersonalMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventPersonalMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventPersonalMargeUpValInfo___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)EventPersonalMargeUpValInfo___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BDBAD4(this, a);
  priority1 = a->fields.priority1;
  v5 = b->fields.priority1;
  result = v5 - priority1;
  if ( v5 == priority1 )
    return a->fields.priority2 - b->fields.priority2;
  return result;
}