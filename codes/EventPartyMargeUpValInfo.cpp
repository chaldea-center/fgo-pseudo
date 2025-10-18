void EventPartyMargeUpValInfo___ctor(
        EventPartyMargeUpValInfo_o *this,
        int32_t eventId,
        ServantEntity_array *svtEntityList,
        System_String_array *servantNameList,
        System_Boolean_array *isFollowerList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x24
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C42B02 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4C42B02 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.margeList, (int32_t)v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventId = eventId;
  this->fields.svtEntityList = svtEntityList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.svtEntityList, (int32_t)svtEntityList, v14, v15);
  this->fields.servantNameList = servantNameList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.servantNameList, (int32_t)servantNameList, v16, v17);
  this->fields.isFollowerList = isFollowerList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.isFollowerList, (int32_t)isFollowerList, v18, v19);
}


void EventPartyMargeUpValInfo__Add(
        EventPartyMargeUpValInfo_o *this,
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
        EventPartyMargeUpValInfo__Add_41724828(this, dropItemInfoList->m_Items[v6], method);
        LODWORD(max_length) = dropItemInfoList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)max_length );
    }
  }
}


void EventPartyMargeUpValInfo__Add_41724828(
        EventPartyMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v4; // x20
  int32_t baseFuncType; // w8
  struct ServantEntity_array *svtEntityList; // x8
  unsigned __int64 v7; // x21
  unsigned __int64 max_length_low; // x9
  int32_t targetType; // w8
  _BOOL4 v10; // w22
  struct System_Boolean_array *v11; // x8
  _BOOL8 v12; // x0
  Il2CppObject *v13; // x22
  struct System_String_array *servantNameList; // x8
  struct System_Boolean_array *isFollowerList; // x9
  System_String_o *v16; // x23
  bool v17; // w24
  const MethodInfo *v18; // x6
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 svtEntityList_low; // x10
  __int64 v24; // x8
  int32x2_t v25; // d0
  _BOOL8 v26; // x0
  Il2CppObject *current; // x21
  _BOOL8 v28; // x0
  Il2CppObject *v29; // x22
  int32_t rateCount; // w8
  _BOOL8 v31; // x0
  const MethodInfo *v32; // x2
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  __int64 v38; // x8
  int32x2_t v39; // d0
  EventMargeItemUpValInfo_o *v40; // x21
  const MethodInfo *v41; // x2
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4C42B06 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_1C37058(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    this = (EventPartyMargeUpValInfo_o *)sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    byte_4C42B06 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( dropItemInfo && dropItemInfo->fields.eventId == v4->fields.eventId )
  {
    baseFuncType = dropItemInfo->fields.baseFuncType;
    if ( baseFuncType > 113 )
    {
      if ( (unsigned int)(baseFuncType - 114) < 2 )
      {
        this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
        if ( !this )
          goto LABEL_90;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v48,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v49 = v48;
        do
        {
          v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v49,
                  (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v26 )
            goto LABEL_76;
          current = v49.fields._current;
          if ( !v49.fields._current )
            sub_1C372B4(v26);
        }
        while ( LODWORD(v49.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId );
LABEL_59:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v49,
          (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        goto LABEL_82;
      }
      if ( baseFuncType == 129 )
        goto LABEL_9;
    }
    else if ( (unsigned int)baseFuncType <= 0x10 && ((1 << baseFuncType) & 0x10082) != 0 || baseFuncType == 111 )
    {
LABEL_9:
      svtEntityList = v4->fields.svtEntityList;
      if ( svtEntityList )
      {
        v7 = 0;
        while ( 1 )
        {
          max_length_low = LODWORD(svtEntityList->max_length);
          if ( (__int64)v7 >= (int)max_length_low )
            return;
          if ( v7 >= max_length_low )
            goto LABEL_91;
          this = (EventPartyMargeUpValInfo_o *)svtEntityList->m_Items[v7];
          if ( this )
            break;
LABEL_50:
          svtEntityList = v4->fields.svtEntityList;
          ++v7;
          if ( !svtEntityList )
            goto LABEL_90;
        }
        targetType = dropItemInfo->fields.targetType;
        if ( targetType <= 3 )
        {
          if ( !targetType )
          {
            v10 = v7 == dropItemInfo->fields.member;
LABEL_24:
            if ( dropItemInfo->fields.baseFuncType != 111 )
            {
              if ( !v10 )
                goto LABEL_50;
              goto LABEL_32;
            }
            goto LABEL_25;
          }
          if ( targetType != 3 )
          {
LABEL_22:
            v10 = 0;
            goto LABEL_24;
          }
        }
        else if ( targetType != 7 )
        {
          if ( targetType == 14 )
          {
            v10 = v7 != dropItemInfo->fields.member;
            goto LABEL_24;
          }
          goto LABEL_22;
        }
        if ( dropItemInfo->fields.baseFuncType != 111 )
        {
LABEL_32:
          this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
          if ( !this )
            goto LABEL_90;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v48,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v49 = v48;
          while ( 1 )
          {
            v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v49,
                    (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v12 )
              break;
            v13 = v49.fields._current;
            if ( !v49.fields._current )
              sub_1C372B4(v12);
            if ( v7 == HIDWORD(v49.fields._current[1].klass)
              && LODWORD(v49.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v49,
                (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
              goto LABEL_49;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v49,
            (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
          servantNameList = v4->fields.servantNameList;
          if ( !servantNameList )
            goto LABEL_90;
          if ( v7 >= LODWORD(servantNameList->max_length) )
            goto LABEL_91;
          isFollowerList = v4->fields.isFollowerList;
          if ( !isFollowerList )
            goto LABEL_90;
          if ( v7 >= LODWORD(isFollowerList->max_length) )
            goto LABEL_91;
          v16 = servantNameList->m_Items[v7];
          v17 = isFollowerList->m_Items[v7];
          v13 = (Il2CppObject *)sub_1C372A4(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor_41717876((EventMargeItemUpValInfo_o *)v13, v7, v16, v17, 0, dropItemInfo, v18);
          this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
          if ( !this )
            goto LABEL_90;
          v21 = *(_QWORD *)&this->fields.eventId;
          v22 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++HIDWORD(this->fields.svtEntityList);
          if ( !v21 )
            goto LABEL_90;
          svtEntityList_low = SLODWORD(this->fields.svtEntityList);
          if ( (unsigned int)svtEntityList_low >= *(_DWORD *)(v21 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              v13,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = v21 + 8 * svtEntityList_low;
            LODWORD(this->fields.svtEntityList) = svtEntityList_low + 1;
            *(_QWORD *)(v24 + 32) = v13;
            sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v13, v19, v20);
          }
          if ( !v13 )
            goto LABEL_90;
LABEL_49:
          v25.n64_u64[0] = *(unsigned __int64 *)((char *)&v13[5].monitor + 4);
          LOBYTE(v13[5].monitor) |= dropItemInfo->fields.isEquipUp;
          *(int32x2_t *)((char *)&v13[5].monitor + 4) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, v25);
          goto LABEL_50;
        }
        v10 = 1;
LABEL_25:
        this = (EventPartyMargeUpValInfo_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)this, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_50;
        v11 = v4->fields.isFollowerList;
        if ( !v11 )
          goto LABEL_90;
        if ( v7 >= LODWORD(v11->max_length) )
LABEL_91:
          sub_1C372BC(this);
        if ( v11->m_Items[v7] || !v10 )
          goto LABEL_50;
        goto LABEL_32;
      }
      goto LABEL_90;
    }
    this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
    if ( !this )
      goto LABEL_90;
    if ( baseFuncType == 116 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v48,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v49 = v48;
      while ( 1 )
      {
        v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v49,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v28 )
          break;
        v29 = v49.fields._current;
        if ( !v49.fields._current )
          sub_1C372B4(v28);
        if ( LODWORD(v49.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
          && v49.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v49,
            (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
          rateCount = dropItemInfo->fields.rateCount;
          if ( SLODWORD(v29[6].klass) > rateCount )
          {
            LODWORD(v29[6].klass) = rateCount;
            LOBYTE(v29[5].monitor) = dropItemInfo->fields.isEquipUp;
          }
          return;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v49,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      v40 = (EventMargeItemUpValInfo_o *)sub_1C372A4(EventMargeItemUpValInfo_TypeInfo);
      EventMargeItemUpValInfo___ctor(v40, dropItemInfo, v41);
      if ( v40 )
      {
        v40->fields.rateCount = dropItemInfo->fields.rateCount;
        v40->fields.isEquipUp = dropItemInfo->fields.isEquipUp;
        this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
        if ( this )
        {
          v44 = *(_QWORD *)&this->fields.eventId;
          v45 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++HIDWORD(this->fields.svtEntityList);
          if ( v44 )
          {
            v46 = SLODWORD(this->fields.svtEntityList);
            if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v40,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v47 = v44 + 8 * v46;
              LODWORD(this->fields.svtEntityList) = v46 + 1;
              *(_QWORD *)(v47 + 32) = v40;
              sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 32), (int32_t)v40, v42, v43);
            }
            return;
          }
        }
      }
      goto LABEL_90;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v48,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v49 = v48;
    while ( 1 )
    {
      v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v49,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
      if ( !v31 )
        break;
      current = v49.fields._current;
      if ( !v49.fields._current )
        sub_1C372B4(v31);
      if ( LODWORD(v49.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
        && v49.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
      {
        goto LABEL_59;
      }
    }
LABEL_76:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v49,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    current = (Il2CppObject *)sub_1C372A4(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)current, dropItemInfo, v32);
    this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
    if ( !this )
      goto LABEL_90;
    v35 = *(_QWORD *)&this->fields.eventId;
    v36 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
    ++HIDWORD(this->fields.svtEntityList);
    if ( !v35 )
      goto LABEL_90;
    v37 = SLODWORD(this->fields.svtEntityList);
    if ( (unsigned int)v37 >= *(_DWORD *)(v35 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        current,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = v35 + 8 * v37;
      LODWORD(this->fields.svtEntityList) = v37 + 1;
      *(_QWORD *)(v38 + 32) = current;
      sub_1C36FFC((CGThumbnailListItem_o *)(v38 + 32), (int32_t)current, v33, v34);
    }
    if ( !current )
LABEL_90:
      sub_1C372B4(this);
LABEL_82:
    v39.n64_u64[0] = *(unsigned __int64 *)((char *)&current[5].monitor + 4);
    LOBYTE(current[5].monitor) |= dropItemInfo->fields.isEquipUp;
    *(int32x2_t *)((char *)&current[5].monitor + 4) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, v39);
  }
}


int32_t EventPartyMargeUpValInfo__GetCount(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4C42B04 & 1) == 0 )
  {
    this = (EventPartyMargeUpValInfo_o *)sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4C42B04 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1C372B4(this);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *EventPartyMargeUpValInfo__GetList(
        EventPartyMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  void *v3; // x0
  System_Collections_Generic_List_object__o *margeList; // x20
  System_Comparison_T__o *v5; // x21
  Il2CppObject *v6; // x22
  struct EventPartyMargeUpValInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C42B07 & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C37058(&Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__);
    sub_1C37058(&EventPartyMargeUpValInfo___c_TypeInfo);
    byte_4C42B07 = 1;
  }
  v3 = EventPartyMargeUpValInfo___c_TypeInfo;
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !EventPartyMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPartyMargeUpValInfo___c_TypeInfo);
    v3 = EventPartyMargeUpValInfo___c_TypeInfo;
  }
  v5 = *(System_Comparison_T__o **)(*((_QWORD *)v3 + 23) + 8LL);
  if ( !v5 )
  {
    if ( !*((_DWORD *)v3 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EventPartyMargeUpValInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)v3 + 23);
    v5 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(v5, v6, Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__, 0);
    static_fields = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v5;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)v5, v8, v9);
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


EventMargeItemUpValInfo_o *EventPartyMargeUpValInfo__GetMargeItem(
        EventPartyMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *margeList; // x0

  if ( (byte_4C42B05 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
    byte_4C42B05 = 1;
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


bool EventPartyMargeUpValInfo__IsEmpry(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4C42B03 & 1) == 0 )
  {
    this = (EventPartyMargeUpValInfo_o *)sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4C42B03 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1C372B4(this);
  return margeList->fields._size < 1;
}


void EventPartyMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C42B08 & 1) == 0 )
  {
    sub_1C37058(&EventPartyMargeUpValInfo___c_TypeInfo);
    byte_4C42B08 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EventPartyMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventPartyMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventPartyMargeUpValInfo___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)EventPartyMargeUpValInfo___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventPartyMargeUpValInfo___c___ctor(EventPartyMargeUpValInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventPartyMargeUpValInfo___c___GetList_b__11_0(
        EventPartyMargeUpValInfo___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C372B4(this);
  return EventMargeItemUpValInfo__CompPartyPriority(a, b, (const MethodInfo *)b);
}