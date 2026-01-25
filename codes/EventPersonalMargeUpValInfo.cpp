void EventPersonalMargeUpValInfo___ctor(
        EventPersonalMargeUpValInfo_o *this,
        int32_t eventId,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct ServantEntity_o **p_servantEntity; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4CEE1F1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4CEE1F1 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v7;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.margeList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  *((_DWORD *)p_servantEntity - 2) = eventId;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_servantEntity, (int32_t)servantEntity, v15, v16, v17, v18, v19, v20);
}


void EventPersonalMargeUpValInfo__Add(
        EventPersonalMargeUpValInfo_o *this,
        EventDropItemUpValInfo_array *dropItemInfoList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 v6; // x0
  EventDropItemUpValInfo_o *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int max_length; // w8
  __int64 v15; // x22
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CEE1F3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    byte_4CEE1F3 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( dropItemInfoList )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    max_length = dropItemInfoList->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= max_length )
          sub_1C7BD48(v6);
        v7 = dropItemInfoList->m_Items[v15];
        if ( !v7 )
          break;
        if ( v7->fields.isInvalid )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v17 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v7,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v7;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v7, v8, (int32_t)v9, v10, v11, v12, v13);
          }
        }
        else
        {
          EventPersonalMargeUpValInfo__Add_42302240(this, v7, 0, v9);
        }
        max_length = dropItemInfoList->max_length;
        if ( (int)++v15 >= max_length )
          goto LABEL_16;
      }
LABEL_22:
      sub_1C7BD40(v6, v7);
    }
LABEL_16:
    if ( !v5 )
      goto LABEL_22;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      v5,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__) )
      EventPersonalMargeUpValInfo__Add_42302240(this, (EventDropItemUpValInfo_o *)v21.fields._current, 1, v20);
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
  }
}


void EventPersonalMargeUpValInfo__Add_42302240(
        EventPersonalMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        bool isInvalid,
        const MethodInfo *method)
{
  int32_t baseFuncType; // w8
  System_Collections_Generic_List_object__o *margeList; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  EventMargeItemUpValInfo_o *current; // x22
  __int64 v12; // x20
  const MethodInfo *v13; // x2
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8
  _BOOL8 v24; // x0
  __int64 v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  int32_t rateCount; // w8
  _BOOL8 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x2
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x8
  const MethodInfo *v42; // x2
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CEE1F4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_1C7BAE8(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    byte_4CEE1F4 = 1;
  }
  memset(&v44, 0, sizeof(v44));
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
            (System_Collections_Generic_List_Enumerator_T__o *)&v43,
            margeList,
            (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v44 = v43;
          while ( 1 )
          {
            v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v44,
                    (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v26 )
              break;
            current = (EventMargeItemUpValInfo_o *)v44.fields._current;
            if ( !v44.fields._current )
              sub_1C7BD40(v26, v27);
            if ( LODWORD(v44.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
              && v44.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v44,
                (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
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
            &v44,
            (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
          v12 = sub_1C7BD34(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v12, dropItemInfo, v42);
          if ( !v12 )
            goto LABEL_70;
          *(_DWORD *)(v12 + 96) = dropItemInfo->fields.rateCount;
LABEL_24:
          margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
          if ( margeList )
          {
            items = margeList->fields._items;
            v21 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++margeList->fields._version;
            if ( items )
            {
              size = margeList->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  margeList,
                  (Il2CppObject *)v12,
                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v23 = &items->obj.klass + size;
                margeList->fields._size = size + 1;
                v23[4] = (Il2CppClass *)v12;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v23 + 4), v12, v14, v15, v16, v17, v18, v19);
              }
              return;
            }
          }
LABEL_70:
          sub_1C7BD40(margeList, dropItemInfo);
        }
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v43,
          margeList,
          (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v44 = v43;
        while ( 1 )
        {
          v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v44,
                  (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v29 )
            break;
          current = (EventMargeItemUpValInfo_o *)v44.fields._current;
          if ( !v44.fields._current )
            sub_1C7BD40(v29, v30);
          if ( LODWORD(v44.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
            && v44.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
          {
            goto LABEL_33;
          }
        }
LABEL_52:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v44,
          (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        current = (EventMargeItemUpValInfo_o *)sub_1C7BD34(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor(current, dropItemInfo, v31);
        margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( !margeList )
          goto LABEL_70;
        v38 = margeList->fields._items;
        v39 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
        ++margeList->fields._version;
        if ( !v38 )
          goto LABEL_70;
        v40 = margeList->fields._size;
        if ( (unsigned int)v40 >= LODWORD(v38->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            margeList,
            (Il2CppObject *)current,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          if ( !isInvalid )
            goto LABEL_56;
        }
        else
        {
          v41 = &v38->obj.klass + v40;
          margeList->fields._size = v40 + 1;
          v41[4] = (Il2CppClass *)current;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)current, v32, v33, v34, v35, v36, v37);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v43,
        margeList,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v44 = v43;
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v44,
               (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v9 )
          goto LABEL_52;
        current = (EventMargeItemUpValInfo_o *)v44.fields._current;
        if ( !v44.fields._current )
          sub_1C7BD40(v9, v10);
        if ( LODWORD(v44.fields._current[4].klass) == dropItemInfo->fields.targetType
          && LODWORD(v44.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
        {
          goto LABEL_33;
        }
      }
    }
    v12 = sub_1C7BD34(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v12, dropItemInfo, v13);
    if ( !v12 )
      goto LABEL_70;
    *(_QWORD *)(v12 + 92) = *(_QWORD *)&dropItemInfo->fields.addCount;
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    margeList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v44 = v43;
  do
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v44,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v24 )
      goto LABEL_52;
    current = (EventMargeItemUpValInfo_o *)v44.fields._current;
    if ( !v44.fields._current )
      sub_1C7BD40(v24, v25);
  }
  while ( LODWORD(v44.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId );
LABEL_33:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CEE1F5 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C7BAE8(&Method_EventPersonalMargeUpValInfo___c__GetList_b__7_0__);
    sub_1C7BAE8(&EventPersonalMargeUpValInfo___c_TypeInfo);
    byte_4CEE1F5 = 1;
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
    v5 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(v5, v6, Method_EventPersonalMargeUpValInfo___c__GetList_b__7_0__, 0);
    static_fields = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v5;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__7_0, (int32_t)v5, v8, v9, v10, v11, v12, v13);
  }
  if ( !margeList
    || (System_Collections_Generic_List_object___Sort_58984640(
          margeList,
          v5,
          (const MethodInfo_38408C0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v3 = this->fields.margeList) == 0) )
  {
    sub_1C7BD40(v3, method);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v3,
                                            (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


bool EventPersonalMargeUpValInfo__IsEmpty(EventPersonalMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPersonalMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4CEE1F2 & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4CEE1F2 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1C7BD40(this, method);
  return margeList->fields._size < 1;
}


void EventPersonalMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEE1F6 & 1) == 0 )
  {
    sub_1C7BAE8(&EventPersonalMargeUpValInfo___c_TypeInfo);
    byte_4CEE1F6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(EventPersonalMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventPersonalMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventPersonalMargeUpValInfo___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)EventPersonalMargeUpValInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventPersonalMargeUpValInfo___c___ctor(EventPersonalMargeUpValInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventPersonalMargeUpValInfo___c___GetList_b__7_0(
        EventPersonalMargeUpValInfo___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  int32_t priority1; // w8
  int32_t v5; // w9
  int32_t result; // w0

  if ( !a || !b )
    sub_1C7BD40(this, a);
  priority1 = a->fields.priority1;
  v5 = b->fields.priority1;
  result = v5 - priority1;
  if ( v5 == priority1 )
    return a->fields.priority2 - b->fields.priority2;
  return result;
}