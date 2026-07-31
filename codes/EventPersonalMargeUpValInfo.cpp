void EventPersonalMargeUpValInfo___ctor(
        EventPersonalMargeUpValInfo_o *this,
        int32_t eventId,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_59381CA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_59381CA = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.margeList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.servantEntity = servantEntity;
  this->fields.eventId = eventId;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)servantEntity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void EventPersonalMargeUpValInfo__Add(
        EventPersonalMargeUpValInfo_o *this,
        EventDropItemUpValInfo_array *dropItemInfoList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  __int64 v6; // x0
  EventDropItemUpValInfo_o *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int max_length; // w8
  __int64 v15; // x22
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  const MethodInfo *v20; // x3
  __int64 v21; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o *v22; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_59381CC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    byte_59381CC = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( dropItemInfoList )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    max_length = dropItemInfoList->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= max_length )
          sub_21FFED4(v6);
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
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v7;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v7, v8, v9, v10, v11, v12, v13);
          }
        }
        else
        {
          EventPersonalMargeUpValInfo__Add_48678552(this, v7, 0, (const MethodInfo *)v9);
        }
        max_length = dropItemInfoList->max_length;
        if ( (int)++v15 >= max_length )
          goto LABEL_16;
      }
LABEL_22:
      sub_21FFECC(v6, v7);
    }
LABEL_16:
    if ( !v5 )
      goto LABEL_22;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      v5,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    v21 = 0;
    v22 = &v23;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__) )
      EventPersonalMargeUpValInfo__Add_48678552(this, (EventDropItemUpValInfo_o *)v23.fields._current, 1, v20);
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
  }
}


void EventPersonalMargeUpValInfo__Add_48678552(
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8
  _BOOL8 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  int32_t v27; // w8
  _BOOL8 v28; // x0
  __int64 v29; // x1
  Il2CppObject *v30; // x23
  int32_t rateCount; // w8
  _BOOL8 v32; // x0
  __int64 v33; // x1
  EventMargeItemUpValInfo_o *v34; // x20
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x2
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_59381CD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_21FFC50(&EventMargeItemUpValInfo_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    byte_59381CD = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( dropItemInfo && dropItemInfo->fields.eventId == this->fields.eventId )
  {
    baseFuncType = dropItemInfo->fields.baseFuncType;
    if ( baseFuncType > 113 )
    {
      if ( baseFuncType <= 128 )
      {
        if ( (unsigned int)(baseFuncType - 114) < 2 )
        {
          margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
          if ( !margeList )
            goto LABEL_74;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v37,
            margeList,
            (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v38 = v37;
          v37.fields._list = 0;
          *(_QWORD *)&v37.fields._index = &v38;
          while ( 1 )
          {
            v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                   &v38,
                   (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v9 )
              break;
            current = (EventMargeItemUpValInfo_o *)v38.fields._current;
            if ( !v38.fields._current )
              sub_21FFECC(v9, v10);
            if ( LODWORD(v38.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
              goto LABEL_13;
          }
LABEL_65:
          sub_1FF16B4(&v37);
          current = (EventMargeItemUpValInfo_o *)sub_21FFEBC(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor(current, dropItemInfo, v36);
          margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
          if ( !margeList )
            goto LABEL_74;
          margeList = (System_Collections_Generic_List_object__o *)sub_1FEBF38(
                                                                     margeList,
                                                                     current,
                                                                     Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
          goto LABEL_67;
        }
        if ( baseFuncType == 116 )
        {
          margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
          if ( margeList )
          {
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v37,
              margeList,
              (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
            v38 = v37;
            v37.fields._list = 0;
            *(_QWORD *)&v37.fields._index = &v38;
            while ( 1 )
            {
              v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v38,
                      (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
              if ( !v28 )
                break;
              v30 = v38.fields._current;
              if ( !v38.fields._current )
                sub_21FFECC(v28, v29);
              if ( LODWORD(v38.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
                && v38.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
              {
                sub_1FF16B4(&v37);
                if ( !isInvalid )
                {
                  rateCount = dropItemInfo->fields.rateCount;
                  if ( SLODWORD(v30[6].klass) > rateCount )
                    LODWORD(v30[6].klass) = rateCount;
                }
                return;
              }
            }
            sub_1FF16B4(&v37);
            v34 = (EventMargeItemUpValInfo_o *)sub_21FFEBC(EventMargeItemUpValInfo_TypeInfo);
            EventMargeItemUpValInfo___ctor(v34, dropItemInfo, v35);
            if ( v34 )
            {
              v34->fields.rateCount = dropItemInfo->fields.rateCount;
              margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
              if ( margeList )
              {
                sub_1FEBF38(margeList, v34, Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
                return;
              }
            }
          }
          goto LABEL_74;
        }
LABEL_50:
        margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( !margeList )
          goto LABEL_74;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v37,
          margeList,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v38 = v37;
        v37.fields._list = 0;
        *(_QWORD *)&v37.fields._index = &v38;
        do
        {
          v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v38,
                  (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v32 )
            goto LABEL_65;
          current = (EventMargeItemUpValInfo_o *)v38.fields._current;
          if ( !v38.fields._current )
            sub_21FFECC(v32, v33);
        }
        while ( LODWORD(v38.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId
             || v38.fields._current[5].klass != (Il2CppClass *)dropItemInfo->fields.itemEntity );
LABEL_13:
        margeList = (System_Collections_Generic_List_object__o *)sub_1FF16B4(&v37);
LABEL_67:
        if ( isInvalid )
          goto LABEL_68;
        goto LABEL_37;
      }
      if ( baseFuncType != 129 && baseFuncType != 132 )
        goto LABEL_50;
LABEL_27:
      margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
      if ( !margeList )
        goto LABEL_74;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v37,
        margeList,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v38 = v37;
      v37.fields._list = 0;
      *(_QWORD *)&v37.fields._index = &v38;
      do
      {
        v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v38,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v24 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v38,
            (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
          current = (EventMargeItemUpValInfo_o *)sub_21FFEBC(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor(current, dropItemInfo, v26);
          margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
          if ( !margeList )
            goto LABEL_74;
          margeList = (System_Collections_Generic_List_object__o *)sub_1FEBF38(
                                                                     margeList,
                                                                     current,
                                                                     Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
          if ( isInvalid )
            goto LABEL_68;
          goto LABEL_37;
        }
        current = (EventMargeItemUpValInfo_o *)v38.fields._current;
        if ( !v38.fields._current )
          sub_21FFECC(v24, v25);
      }
      while ( LODWORD(v38.fields._current[4].klass) != dropItemInfo->fields.targetType
           || LODWORD(v38.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId );
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v38,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( isInvalid )
      {
LABEL_68:
        if ( current )
        {
          if ( !current->fields.addCount )
            current->fields.addCount = dropItemInfo->fields.addCount;
          v27 = current->fields.rateCount;
          if ( v27 )
            return;
LABEL_72:
          current->fields.rateCount = dropItemInfo->fields.rateCount + v27;
          return;
        }
LABEL_74:
        sub_21FFECC(margeList, dropItemInfo);
      }
LABEL_37:
      if ( current )
      {
        v27 = current->fields.rateCount;
        current->fields.addCount += dropItemInfo->fields.addCount;
        goto LABEL_72;
      }
      goto LABEL_74;
    }
    if ( baseFuncType > 15 )
    {
      if ( baseFuncType != 16 && baseFuncType != 111 )
        goto LABEL_50;
    }
    else if ( baseFuncType != 1 )
    {
      if ( baseFuncType != 7 )
        goto LABEL_50;
      goto LABEL_27;
    }
    v12 = sub_21FFEBC(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v12, dropItemInfo, v13);
    if ( v12 )
    {
      *(_QWORD *)(v12 + 92) = *(_QWORD *)&dropItemInfo->fields.addCount;
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
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            margeList->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v12;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), v12, v14, v15, v16, v17, v18, v19);
          }
          return;
        }
      }
    }
    goto LABEL_74;
  }
}


EventMargeItemUpValInfo_array *EventPersonalMargeUpValInfo__GetList(
        EventPersonalMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  void *v3; // x0
  System_Collections_Generic_List_object__o *margeList; // x20
  struct EventPersonalMargeUpValInfo___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__7_0; // x21
  Il2CppObject *v7; // x22
  struct EventPersonalMargeUpValInfo___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_59381CE & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_21FFC50(&Method_EventPersonalMargeUpValInfo___c__GetList_b__7_0__);
    sub_21FFC50(&EventPersonalMargeUpValInfo___c_TypeInfo);
    byte_59381CE = 1;
  }
  v3 = EventPersonalMargeUpValInfo___c_TypeInfo;
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !*(&EventPersonalMargeUpValInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventPersonalMargeUpValInfo___c_TypeInfo, method);
    v3 = EventPersonalMargeUpValInfo___c_TypeInfo;
  }
  static_fields = (struct EventPersonalMargeUpValInfo___c_StaticFields *)*((_QWORD *)v3 + 23);
  _9__7_0 = (System_Comparison_T__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !*((_DWORD *)v3 + 57) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(_9__7_0, v7, Method_EventPersonalMargeUpValInfo___c__GetList_b__7_0__, 0);
    v8 = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
    v8->__9__7_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__7_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__7_0, (int32_t)_9__7_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !margeList
    || (System_Collections_Generic_List_object___Sort_71636404(
          margeList,
          _9__7_0,
          (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v3 = this->fields.margeList) == 0) )
  {
    sub_21FFECC(v3, method);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v3,
                                            (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


bool EventPersonalMargeUpValInfo__IsEmpty(EventPersonalMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPersonalMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_59381CB & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_59381CB = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_21FFECC(this, method);
  return margeList->fields._size < 1;
}


void EventPersonalMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59381CF & 1) == 0 )
  {
    sub_21FFC50(&EventPersonalMargeUpValInfo___c_TypeInfo);
    byte_59381CF = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventPersonalMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventPersonalMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventPersonalMargeUpValInfo___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventPersonalMargeUpValInfo___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, a);
  priority1 = a->fields.priority1;
  v5 = b->fields.priority1;
  result = v5 - priority1;
  if ( v5 == priority1 )
    return a->fields.priority2 - b->fields.priority2;
  return result;
}