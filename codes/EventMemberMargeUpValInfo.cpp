void EventMemberMargeUpValInfo___ctor(
        EventMemberMargeUpValInfo_o *this,
        int32_t member,
        ServantEntity_o *servantEntity,
        System_String_o *servantName,
        bool isFollower,
        const MethodInfo *method)
{
  bool v11; // w25
  System_Collections_Generic_List_object__o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_String_o **p_servantName; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C42AFA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4C42AFA = 1;
  }
  v11 = isFollower;
  v12 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.margeList, (int32_t)v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.member = member;
  this->fields.servantEntity = servantEntity;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.servantEntity, (int32_t)servantEntity, v15, v16);
  this->fields.servantName = servantName;
  p_servantName = &this->fields.servantName;
  sub_1C36FFC((CGThumbnailListItem_o *)p_servantName, (int32_t)servantName, v18, v19);
  *((_BYTE *)p_servantName + 8) = v11;
}


void EventMemberMargeUpValInfo__Add(
        EventMemberMargeUpValInfo_o *this,
        EventDropItemUpValInfo_array *dropItemInfoList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v6; // x21

  if ( dropItemInfoList )
  {
    max_length = dropItemInfoList->max_length;
    if ( (int)max_length >= 1 )
    {
      v6 = 0;
      do
      {
        if ( v6 >= (unsigned int)max_length )
          sub_1C372BC(this);
        EventMemberMargeUpValInfo__Add_41721852(this, dropItemInfoList->m_Items[v6], method);
        LODWORD(max_length) = dropItemInfoList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)max_length );
    }
  }
}


void EventMemberMargeUpValInfo__AddCampaignFriendshipUpVal(
        EventMemberMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  int32_t member; // w22
  System_String_o *servantName; // x23
  bool isFollower; // w24
  __int64 v8; // x19
  const MethodInfo *v9; // x6
  System_Collections_Generic_List_object__o *margeList; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4C42AFF & 1) == 0 )
  {
    sub_1C37058(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    byte_4C42AFF = 1;
  }
  if ( EventMemberMargeUpValInfo__IsMemberTarget(this, dropItemInfo, method) )
  {
    member = this->fields.member;
    servantName = this->fields.servantName;
    isFollower = this->fields.isFollower;
    v8 = sub_1C372A4(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor_41717876(
      (EventMargeItemUpValInfo_o *)v8,
      member,
      servantName,
      isFollower,
      0,
      dropItemInfo,
      v9);
    if ( !v8
      || !dropItemInfo
      || (*(int32x2_t *)(v8 + 92) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, *(int32x2_t *)(v8 + 92)),
          (margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList) == 0)
      || (items = margeList->fields._items,
          v14 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__,
          ++margeList->fields._version,
          !items) )
    {
      sub_1C372B4(margeList);
    }
    size = margeList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        margeList,
        (Il2CppObject *)v8,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = &items->obj.klass + size;
      margeList->fields._size = size + 1;
      v16[4] = (Il2CppClass *)v8;
      sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), v8, v11, v12);
    }
  }
}


void EventMemberMargeUpValInfo__Add_41721852(
        EventMemberMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *IsMemberTarget; // x0
  unsigned int baseFuncType; // w8
  int v7; // w9
  _BOOL8 v8; // x0
  Il2CppObject *current; // x21
  _BOOL8 v10; // x0
  _BOOL8 v11; // x0
  Il2CppObject *v12; // x22
  int32_t rateCount; // w8
  _BOOL8 v14; // x0
  int32_t member; // w22
  System_String_o *servantName; // x23
  bool isFollower; // w24
  const MethodInfo *v18; // x6
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8
  int32_t v25; // w22
  System_String_o *v26; // x23
  bool v27; // w24
  EventMargeItemUpValInfo_o *v28; // x21
  const MethodInfo *v29; // x6
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x8
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C42AFE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_1C37058(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    byte_4C42AFE = 1;
  }
  memset(&v37, 0, sizeof(v37));
  IsMemberTarget = (System_Collections_Generic_List_object__o *)EventMemberMargeUpValInfo__IsMemberTarget(
                                                                  this,
                                                                  dropItemInfo,
                                                                  method);
  if ( ((unsigned __int8)IsMemberTarget & 1) != 0 )
  {
    if ( !dropItemInfo )
      goto LABEL_52;
    baseFuncType = dropItemInfo->fields.baseFuncType;
    if ( baseFuncType - 111 <= 0x15 )
    {
      v7 = 1 << (baseFuncType - 111);
      if ( (v7 & 0x240001) != 0 )
      {
LABEL_16:
        IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( !IsMemberTarget )
          goto LABEL_52;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v36,
          IsMemberTarget,
          (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v37 = v36;
        while ( 1 )
        {
          v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v37,
                  (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v10 )
            goto LABEL_37;
          current = v37.fields._current;
          if ( !v37.fields._current )
            sub_1C372B4(v10);
          if ( LODWORD(v37.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            goto LABEL_21;
        }
      }
      if ( (v7 & 0x18) != 0 )
      {
        IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( !IsMemberTarget )
          goto LABEL_52;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v36,
          IsMemberTarget,
          (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v37 = v36;
        while ( 1 )
        {
          v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v37,
                 (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v8 )
            break;
          current = v37.fields._current;
          if ( !v37.fields._current )
            sub_1C372B4(v8);
          if ( LODWORD(v37.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            goto LABEL_21;
        }
LABEL_37:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v37,
          (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        member = this->fields.member;
        servantName = this->fields.servantName;
        isFollower = this->fields.isFollower;
        current = (Il2CppObject *)sub_1C372A4(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor_41717876(
          (EventMargeItemUpValInfo_o *)current,
          member,
          servantName,
          isFollower,
          0,
          dropItemInfo,
          v18);
        IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( IsMemberTarget )
        {
          items = IsMemberTarget->fields._items;
          v22 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++IsMemberTarget->fields._version;
          if ( items )
          {
            size = IsMemberTarget->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                IsMemberTarget,
                current,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              IsMemberTarget->fields._size = size + 1;
              v24[4] = (Il2CppClass *)current;
              sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)current, v19, v20);
            }
            if ( current )
              goto LABEL_43;
          }
        }
        goto LABEL_52;
      }
    }
    if ( baseFuncType > 0x10 || ((1 << baseFuncType) & 0x10082) == 0 )
    {
      IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
      if ( IsMemberTarget )
      {
        if ( baseFuncType != 116 )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v36,
            IsMemberTarget,
            (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v37 = v36;
          do
          {
            v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v37,
                    (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v14 )
              goto LABEL_37;
            current = v37.fields._current;
            if ( !v37.fields._current )
              sub_1C372B4(v14);
          }
          while ( LODWORD(v37.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId
               || v37.fields._current[5].klass != (Il2CppClass *)dropItemInfo->fields.itemEntity );
LABEL_21:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v37,
            (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
LABEL_43:
          *(int32x2_t *)((char *)&current[5].monitor + 4) = vadd_s32(
                                                              *(int32x2_t *)&dropItemInfo->fields.addCount,
                                                              *(int32x2_t *)((char *)&current[5].monitor + 4));
          return;
        }
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v36,
          IsMemberTarget,
          (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v37 = v36;
        while ( 1 )
        {
          v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v37,
                  (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v11 )
            break;
          v12 = v37.fields._current;
          if ( !v37.fields._current )
            sub_1C372B4(v11);
          if ( LODWORD(v37.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
            && v37.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v37,
              (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
            rateCount = dropItemInfo->fields.rateCount;
            if ( SLODWORD(v12[6].klass) > rateCount )
              LODWORD(v12[6].klass) = rateCount;
            return;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v37,
          (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        v25 = this->fields.member;
        v26 = this->fields.servantName;
        v27 = this->fields.isFollower;
        v28 = (EventMargeItemUpValInfo_o *)sub_1C372A4(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor_41717876(v28, v25, v26, v27, 0, dropItemInfo, v29);
        if ( v28 )
        {
          v28->fields.rateCount = dropItemInfo->fields.rateCount;
          IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
          if ( IsMemberTarget )
          {
            v32 = IsMemberTarget->fields._items;
            v33 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++IsMemberTarget->fields._version;
            if ( v32 )
            {
              v34 = IsMemberTarget->fields._size;
              if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  IsMemberTarget,
                  (Il2CppObject *)v28,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
              }
              else
              {
                v35 = &v32->obj.klass + v34;
                IsMemberTarget->fields._size = v34 + 1;
                v35[4] = (Il2CppClass *)v28;
                sub_1C36FFC((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v28, v30, v31);
              }
              return;
            }
          }
        }
      }
LABEL_52:
      sub_1C372B4(IsMemberTarget);
    }
    goto LABEL_16;
  }
}


int32_t EventMemberMargeUpValInfo__GetCount(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4C42AFC & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4C42AFC = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1C372B4(this);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *EventMemberMargeUpValInfo__GetList(
        EventMemberMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  void *v3; // x0
  System_Collections_Generic_List_object__o *margeList; // x20
  System_Comparison_T__o *v5; // x21
  Il2CppObject *v6; // x22
  struct EventMemberMargeUpValInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C42B00 & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C37058(&Method_EventMemberMargeUpValInfo___c__GetList_b__13_0__);
    sub_1C37058(&EventMemberMargeUpValInfo___c_TypeInfo);
    byte_4C42B00 = 1;
  }
  v3 = EventMemberMargeUpValInfo___c_TypeInfo;
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !EventMemberMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMemberMargeUpValInfo___c_TypeInfo);
    v3 = EventMemberMargeUpValInfo___c_TypeInfo;
  }
  v5 = *(System_Comparison_T__o **)(*((_QWORD *)v3 + 23) + 8LL);
  if ( !v5 )
  {
    if ( !*((_DWORD *)v3 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EventMemberMargeUpValInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)v3 + 23);
    v5 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(v5, v6, Method_EventMemberMargeUpValInfo___c__GetList_b__13_0__, 0);
    static_fields = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v5;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)v5, v8, v9);
  }
  if ( !margeList
    || (System_Collections_Generic_List_object___Sort_58346216(
          margeList,
          v5,
          (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v3 = this->fields.margeList) == 0) )
  {
    sub_1C372B4(v3);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v3,
                                            (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


EventMargeItemUpValInfo_o *EventMemberMargeUpValInfo__GetMargeItem(
        EventMemberMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *margeList; // x0

  if ( (byte_4C42AFD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
    byte_4C42AFD = 1;
  }
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    sub_1C372B4(0);
  if ( margeList->fields._size <= index )
    return 0;
  else
    return (EventMargeItemUpValInfo_o *)System_Collections_Generic_List_object___get_Item(
                                          margeList,
                                          index,
                                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
}


bool EventMemberMargeUpValInfo__IsEmpty(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4C42AFB & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4C42AFB = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1C372B4(this);
  return margeList->fields._size < 1;
}


bool EventMemberMargeUpValInfo__IsMemberTarget(
        EventMemberMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  int32_t targetType; // w8

  if ( !dropItemInfo )
    return 0;
  targetType = dropItemInfo->fields.targetType;
  if ( targetType <= 3 )
  {
    if ( targetType )
    {
      if ( targetType == 3 )
        return 1;
    }
    else if ( this->fields.member == dropItemInfo->fields.member )
    {
      return 1;
    }
    return 0;
  }
  return targetType == 7 || targetType == 14;
}


void EventMemberMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C42B01 & 1) == 0 )
  {
    sub_1C37058(&EventMemberMargeUpValInfo___c_TypeInfo);
    byte_4C42B01 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EventMemberMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMemberMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventMemberMargeUpValInfo___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)EventMemberMargeUpValInfo___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventMemberMargeUpValInfo___c___ctor(EventMemberMargeUpValInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventMemberMargeUpValInfo___c___GetList_b__13_0(
        EventMemberMargeUpValInfo___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C372B4(this);
  return EventMargeItemUpValInfo__CompMemberPriority(a, b, (const MethodInfo *)b);
}