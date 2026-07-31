void EventPartyMargeUpValInfo___ctor(
        EventPartyMargeUpValInfo_o *this,
        int32_t eventId,
        ServantEntity_array *svtEntityList,
        System_String_array *servantNameList,
        System_Boolean_array *isFollowerList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x24
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7

  if ( (byte_59381C6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_59381C6 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.margeList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventId = eventId;
  this->fields.svtEntityList = svtEntityList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtEntityList,
    (int32_t)svtEntityList,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.servantNameList = servantNameList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantNameList,
    (int32_t)servantNameList,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.isFollowerList = isFollowerList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.isFollowerList,
    (int32_t)isFollowerList,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
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
          sub_21FFED4(this);
        EventPartyMargeUpValInfo__Add_48675548(this, dropItemInfoList->m_Items[v6], method);
        LODWORD(max_length) = dropItemInfoList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)max_length );
    }
  }
}


void EventPartyMargeUpValInfo__Add_48675548(
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
  __int128 v13; // q0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x22
  struct System_String_array *servantNameList; // x8
  struct System_Boolean_array *isFollowerList; // x9
  bool v19; // w24
  System_String_o *v20; // x23
  const MethodInfo *v21; // x6
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 svtEntityList_low; // x10
  __int64 v31; // x8
  int32x2_t v32; // d0
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppObject *current; // x21
  _BOOL8 v36; // x0
  __int64 v37; // x1
  _BOOL8 v38; // x0
  __int64 v39; // x1
  Il2CppObject *v40; // x22
  int32_t rateCount; // w8
  EventMargeItemUpValInfo_o *v42; // x21
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x2
  int32x2_t v45; // d0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_59381C7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_21FFC50(&EventMargeItemUpValInfo_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    this = (EventPartyMargeUpValInfo_o *)sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    byte_59381C7 = 1;
  }
  memset(&v47, 0, sizeof(v47));
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v46,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v47 = v46;
        v46.fields._list = 0;
        *(_QWORD *)&v46.fields._index = &v47;
        do
        {
          v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v47,
                  (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v36 )
            goto LABEL_86;
          current = v47.fields._current;
          if ( !v47.fields._current )
            sub_21FFECC(v36, v37);
        }
        while ( LODWORD(v47.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId );
LABEL_64:
        sub_1FF16B4(&v46);
        goto LABEL_88;
      }
      if ( baseFuncType == 116 )
      {
        this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
        if ( this )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v46,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v47 = v46;
          v46.fields._list = 0;
          *(_QWORD *)&v46.fields._index = &v47;
          while ( 1 )
          {
            v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v47,
                    (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v38 )
              break;
            v40 = v47.fields._current;
            if ( !v47.fields._current )
              sub_21FFECC(v38, v39);
            if ( LODWORD(v47.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
              && v47.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
            {
              sub_1FF16B4(&v46);
              rateCount = dropItemInfo->fields.rateCount;
              if ( SLODWORD(v40[6].klass) > rateCount )
              {
                LODWORD(v40[6].klass) = rateCount;
                LOBYTE(v40[5].monitor) = dropItemInfo->fields.isEquipUp;
              }
              return;
            }
          }
          sub_1FF16B4(&v46);
          v42 = (EventMargeItemUpValInfo_o *)sub_21FFEBC(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor(v42, dropItemInfo, v43);
          if ( v42 )
          {
            v42->fields.rateCount = dropItemInfo->fields.rateCount;
            v42->fields.isEquipUp = dropItemInfo->fields.isEquipUp;
            this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
            if ( this )
            {
              sub_1FEBF38(this, v42, Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
              return;
            }
          }
        }
        goto LABEL_90;
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
            goto LABEL_79;
          this = (EventPartyMargeUpValInfo_o *)svtEntityList->m_Items[v7];
          if ( this )
            break;
LABEL_52:
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
                goto LABEL_52;
              goto LABEL_34;
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
LABEL_34:
          this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
          if ( !this )
            goto LABEL_90;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v46,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v13 = *(_OWORD *)&v46.fields._list;
          v46.fields._list = 0;
          *(_QWORD *)&v46.fields._index = &v47;
          *(_OWORD *)&v47.fields._list = v13;
          v47.fields._current = v46.fields._current;
          while ( 1 )
          {
            v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v47,
                    (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v14 )
              break;
            v16 = v47.fields._current;
            if ( !v47.fields._current )
              sub_21FFECC(v14, v15);
            if ( v7 == HIDWORD(v47.fields._current[1].klass)
              && LODWORD(v47.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v47,
                (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
              goto LABEL_51;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v47,
            (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
          servantNameList = v4->fields.servantNameList;
          if ( !servantNameList )
            goto LABEL_90;
          if ( v7 >= LODWORD(servantNameList->max_length) )
            goto LABEL_79;
          isFollowerList = v4->fields.isFollowerList;
          if ( !isFollowerList )
            goto LABEL_90;
          if ( v7 >= LODWORD(isFollowerList->max_length) )
            goto LABEL_79;
          v19 = isFollowerList->m_Items[v7];
          v20 = servantNameList->m_Items[v7];
          v16 = (Il2CppObject *)sub_21FFEBC(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor_48669268((EventMargeItemUpValInfo_o *)v16, v7, v20, v19, 0, dropItemInfo, v21);
          this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
          if ( !this )
            goto LABEL_90;
          v28 = *(_QWORD *)&this->fields.eventId;
          v29 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++HIDWORD(this->fields.svtEntityList);
          if ( !v28 )
            goto LABEL_90;
          svtEntityList_low = SLODWORD(this->fields.svtEntityList);
          if ( (unsigned int)svtEntityList_low >= *(_DWORD *)(v28 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              v16,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = v28 + 8 * svtEntityList_low;
            LODWORD(this->fields.svtEntityList) = svtEntityList_low + 1;
            *(_QWORD *)(v31 + 32) = v16;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 32), (int32_t)v16, v22, v23, v24, v25, v26, v27);
          }
          if ( !v16 )
            goto LABEL_90;
LABEL_51:
          v32.n64_u64[0] = *(unsigned __int64 *)((char *)&v16[5].monitor + 4);
          LOBYTE(v16[5].monitor) |= dropItemInfo->fields.isEquipUp;
          *(int32x2_t *)((char *)&v16[5].monitor + 4) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, v32);
          goto LABEL_52;
        }
        LOBYTE(v10) = 1;
LABEL_25:
        this = (EventPartyMargeUpValInfo_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)this, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_52;
        v11 = v4->fields.isFollowerList;
        if ( !v11 )
          goto LABEL_90;
        if ( v7 >= LODWORD(v11->max_length) )
LABEL_79:
          sub_21FFED4(this);
        if ( v11->m_Items[v7] || !v10 )
          goto LABEL_52;
        goto LABEL_34;
      }
LABEL_90:
      sub_21FFECC(this, dropItemInfo);
    }
    this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
    if ( !this )
      goto LABEL_90;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v46,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v47 = v46;
    v46.fields._list = 0;
    *(_QWORD *)&v46.fields._index = &v47;
    while ( 1 )
    {
      v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v47,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
      if ( !v33 )
        break;
      current = v47.fields._current;
      if ( !v47.fields._current )
        sub_21FFECC(v33, v34);
      if ( LODWORD(v47.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
        && v47.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
      {
        goto LABEL_64;
      }
    }
LABEL_86:
    sub_1FF16B4(&v46);
    current = (Il2CppObject *)sub_21FFEBC(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)current, dropItemInfo, v44);
    this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
    if ( !this )
      goto LABEL_90;
    this = (EventPartyMargeUpValInfo_o *)sub_1FEBF38(
                                           this,
                                           current,
                                           Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    if ( !current )
      goto LABEL_90;
LABEL_88:
    v45.n64_u64[0] = *(unsigned __int64 *)((char *)&current[5].monitor + 4);
    LOBYTE(current[5].monitor) |= dropItemInfo->fields.isEquipUp;
    *(int32x2_t *)((char *)&current[5].monitor + 4) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, v45);
  }
}


EventMargeItemUpValInfo_array *EventPartyMargeUpValInfo__GetList(
        EventPartyMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  void *v3; // x0
  System_Collections_Generic_List_object__o *margeList; // x20
  struct EventPartyMargeUpValInfo___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__8_0; // x21
  Il2CppObject *v7; // x22
  struct EventPartyMargeUpValInfo___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_59381C8 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_21FFC50(&Method_EventPartyMargeUpValInfo___c__GetList_b__8_0__);
    sub_21FFC50(&EventPartyMargeUpValInfo___c_TypeInfo);
    byte_59381C8 = 1;
  }
  v3 = EventPartyMargeUpValInfo___c_TypeInfo;
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !*(&EventPartyMargeUpValInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventPartyMargeUpValInfo___c_TypeInfo, method);
    v3 = EventPartyMargeUpValInfo___c_TypeInfo;
  }
  static_fields = (struct EventPartyMargeUpValInfo___c_StaticFields *)*((_QWORD *)v3 + 23);
  _9__8_0 = (System_Comparison_T__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !*((_DWORD *)v3 + 57) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(_9__8_0, v7, Method_EventPartyMargeUpValInfo___c__GetList_b__8_0__, 0);
    v8 = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
    v8->__9__8_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__8_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__8_0, (int32_t)_9__8_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !margeList
    || (System_Collections_Generic_List_object___Sort_71636404(
          margeList,
          _9__8_0,
          (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v3 = this->fields.margeList) == 0) )
  {
    sub_21FFECC(v3, method);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v3,
                                            (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


void EventPartyMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59381C9 & 1) == 0 )
  {
    sub_21FFC50(&EventPartyMargeUpValInfo___c_TypeInfo);
    byte_59381C9 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventPartyMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventPartyMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventPartyMargeUpValInfo___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventPartyMargeUpValInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventPartyMargeUpValInfo___c___ctor(EventPartyMargeUpValInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventPartyMargeUpValInfo___c___GetList_b__8_0(
        EventPartyMargeUpValInfo___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_21FFECC(this, 0);
  return EventMargeItemUpValInfo__CompPartyPriority(a, b, (const MethodInfo *)b);
}