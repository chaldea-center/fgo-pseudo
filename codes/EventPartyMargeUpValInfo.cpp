// local variable allocation has failed, the output may be wrong!
void __fastcall EventPartyMargeUpValInfo___ctor(
        EventPartyMargeUpValInfo_o *this,
        int32_t eventId,
        ServantEntity_array *svtEntityList,
        System_String_array *servantNameList,
        System_Boolean_array *isFollowerList,
        const MethodInfo *method)
{
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x24
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4B01B99 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, *(_QWORD *)&eventId);
    sub_1BC3008(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v11);
    byte_4B01B99 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v12;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.margeList, (int32_t)v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.svtEntityList = svtEntityList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.svtEntityList, (int32_t)svtEntityList, v15, v16);
  this->fields.servantNameList = servantNameList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.servantNameList, (int32_t)servantNameList, v17, v18);
  this->fields.isFollowerList = isFollowerList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.isFollowerList, (int32_t)isFollowerList, v19, v20);
}


void __fastcall EventPartyMargeUpValInfo__Add(
        EventPartyMargeUpValInfo_o *this,
        EventDropItemUpValInfo_array *dropItemInfoList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21

  if ( dropItemInfoList )
  {
    v3 = *(_QWORD *)&dropItemInfoList->max_length;
    if ( (int)v3 >= 1 )
    {
      v6 = 0LL;
      do
      {
        if ( v6 >= (unsigned int)v3 )
          sub_1BC326C(this, dropItemInfoList, method);
        EventPartyMargeUpValInfo__Add_40742980(this, dropItemInfoList->m_Items[v6], method);
        LODWORD(v3) = dropItemInfoList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)v3 );
    }
  }
}


void __fastcall EventPartyMargeUpValInfo__Add_40742980(
        EventPartyMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t baseFuncType; // w8
  struct ServantEntity_array *svtEntityList; // x8
  unsigned __int64 v12; // x21
  unsigned __int64 max_length; // x9
  int32_t targetType; // w8
  _BOOL4 v15; // w22
  struct System_Boolean_array *v16; // x8
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x22
  struct System_String_array *servantNameList; // x8
  struct System_Boolean_array *isFollowerList; // x9
  System_String_o *v22; // x23
  bool v23; // w24
  const MethodInfo *v24; // x6
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 svtEntityList_low; // x10
  __int64 v30; // x8
  int32x2_t v31; // d0
  _BOOL8 v32; // x0
  __int64 v33; // x1
  Il2CppObject *current; // x21
  _BOOL8 v35; // x0
  __int64 v36; // x1
  Il2CppObject *v37; // x22
  int32_t rateCount; // w8
  _BOOL8 v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  int32x2_t v48; // d0
  EventMargeItemUpValInfo_o *v49; // x21
  const MethodInfo *v50; // x2
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  __int64 v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  __int64 v56; // x8
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4B01B9D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__, dropItemInfo);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v6);
    sub_1BC3008(&EventMargeItemUpValInfo_TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v8);
    this = (EventPartyMargeUpValInfo_o *)sub_1BC3008(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__,
                                           v9);
    byte_4B01B9D = 1;
  }
  memset(&v58, 0, sizeof(v58));
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v57,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v58 = v57;
        do
        {
          v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v58,
                  (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v32 )
            goto LABEL_76;
          current = v58.fields._current;
          if ( !v58.fields._current )
            sub_1BC3264(v32, v33);
        }
        while ( LODWORD(v58.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId );
LABEL_59:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v58,
          (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
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
        v12 = 0LL;
        while ( 1 )
        {
          max_length = svtEntityList->max_length;
          if ( (__int64)v12 >= (int)max_length )
            return;
          if ( v12 >= max_length )
            goto LABEL_91;
          this = (EventPartyMargeUpValInfo_o *)svtEntityList->m_Items[v12];
          if ( this )
            break;
LABEL_50:
          svtEntityList = v4->fields.svtEntityList;
          ++v12;
          if ( !svtEntityList )
            goto LABEL_90;
        }
        targetType = dropItemInfo->fields.targetType;
        if ( targetType <= 3 )
        {
          if ( !targetType )
          {
            v15 = v12 == dropItemInfo->fields.member;
LABEL_24:
            if ( dropItemInfo->fields.baseFuncType != 111 )
            {
              if ( !v15 )
                goto LABEL_50;
              goto LABEL_32;
            }
            goto LABEL_25;
          }
          if ( targetType != 3 )
          {
LABEL_22:
            v15 = 0;
            goto LABEL_24;
          }
        }
        else if ( targetType != 7 )
        {
          if ( targetType == 14 )
          {
            v15 = v12 != dropItemInfo->fields.member;
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
            (System_Collections_Generic_List_Enumerator_T__o *)&v57,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v58 = v57;
          while ( 1 )
          {
            v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v58,
                    (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v17 )
              break;
            v19 = v58.fields._current;
            if ( !v58.fields._current )
              sub_1BC3264(v17, v18);
            if ( v12 == HIDWORD(v58.fields._current[1].klass)
              && LODWORD(v58.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v58,
                (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
              goto LABEL_49;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v58,
            (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
          servantNameList = v4->fields.servantNameList;
          if ( !servantNameList )
            goto LABEL_90;
          if ( v12 >= servantNameList->max_length )
            goto LABEL_91;
          isFollowerList = v4->fields.isFollowerList;
          if ( !isFollowerList )
            goto LABEL_90;
          if ( v12 >= isFollowerList->max_length )
            goto LABEL_91;
          v22 = servantNameList->m_Items[v12];
          v23 = isFollowerList->m_Items[v12 + 4];
          v19 = (Il2CppObject *)sub_1BC3254(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor_40736028((EventMargeItemUpValInfo_o *)v19, v12, v22, v23, 0, dropItemInfo, v24);
          this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
          if ( !this )
            goto LABEL_90;
          v27 = *(_QWORD *)&this->fields.eventId;
          v28 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++HIDWORD(this->fields.svtEntityList);
          if ( !v27 )
            goto LABEL_90;
          svtEntityList_low = SLODWORD(this->fields.svtEntityList);
          if ( (unsigned int)svtEntityList_low >= *(_DWORD *)(v27 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              v19,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = v27 + 8 * svtEntityList_low;
            LODWORD(this->fields.svtEntityList) = svtEntityList_low + 1;
            *(_QWORD *)(v30 + 32) = v19;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 32), (int32_t)v19, v25, v26);
          }
          if ( !v19 )
            goto LABEL_90;
LABEL_49:
          v31.n64_u64[0] = *(unsigned __int64 *)((char *)&v19[5].monitor + 4);
          LOBYTE(v19[5].monitor) |= dropItemInfo->fields.isEquipUp;
          *(int32x2_t *)((char *)&v19[5].monitor + 4) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, v31);
          goto LABEL_50;
        }
        v15 = 1;
LABEL_25:
        this = (EventPartyMargeUpValInfo_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_50;
        v16 = v4->fields.isFollowerList;
        if ( !v16 )
          goto LABEL_90;
        if ( v12 >= v16->max_length )
LABEL_91:
          sub_1BC326C(this, dropItemInfo, method);
        if ( v16->m_Items[v12 + 4] || !v15 )
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v57,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v58 = v57;
      while ( 1 )
      {
        v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v58,
                (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v35 )
          break;
        v37 = v58.fields._current;
        if ( !v58.fields._current )
          sub_1BC3264(v35, v36);
        if ( LODWORD(v58.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
          && v58.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v58,
            (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
          rateCount = dropItemInfo->fields.rateCount;
          if ( SLODWORD(v37[6].klass) > rateCount )
          {
            LODWORD(v37[6].klass) = rateCount;
            LOBYTE(v37[5].monitor) = dropItemInfo->fields.isEquipUp;
          }
          return;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v58,
        (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      v49 = (EventMargeItemUpValInfo_o *)sub_1BC3254(EventMargeItemUpValInfo_TypeInfo);
      EventMargeItemUpValInfo___ctor(v49, dropItemInfo, v50);
      if ( v49 )
      {
        v49->fields.rateCount = dropItemInfo->fields.rateCount;
        v49->fields.isEquipUp = dropItemInfo->fields.isEquipUp;
        this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
        if ( this )
        {
          v53 = *(_QWORD *)&this->fields.eventId;
          v54 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++HIDWORD(this->fields.svtEntityList);
          if ( v53 )
          {
            v55 = SLODWORD(this->fields.svtEntityList);
            if ( (unsigned int)v55 >= *(_DWORD *)(v53 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v49,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
            }
            else
            {
              v56 = v53 + 8 * v55;
              LODWORD(this->fields.svtEntityList) = v55 + 1;
              *(_QWORD *)(v56 + 32) = v49;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v56 + 32), (int32_t)v49, v51, v52);
            }
            return;
          }
        }
      }
      goto LABEL_90;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v57,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v58 = v57;
    while ( 1 )
    {
      v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v58,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
      if ( !v39 )
        break;
      current = v58.fields._current;
      if ( !v58.fields._current )
        sub_1BC3264(v39, v40);
      if ( LODWORD(v58.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
        && v58.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
      {
        goto LABEL_59;
      }
    }
LABEL_76:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v58,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    current = (Il2CppObject *)sub_1BC3254(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)current, dropItemInfo, v41);
    this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
    if ( !this )
      goto LABEL_90;
    v44 = *(_QWORD *)&this->fields.eventId;
    v45 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
    ++HIDWORD(this->fields.svtEntityList);
    if ( !v44 )
      goto LABEL_90;
    v46 = SLODWORD(this->fields.svtEntityList);
    if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        current,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    }
    else
    {
      v47 = v44 + 8 * v46;
      LODWORD(this->fields.svtEntityList) = v46 + 1;
      *(_QWORD *)(v47 + 32) = current;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v47 + 32), (int32_t)current, v42, v43);
    }
    if ( !current )
LABEL_90:
      sub_1BC3264(this, dropItemInfo);
LABEL_82:
    v48.n64_u64[0] = *(unsigned __int64 *)((char *)&current[5].monitor + 4);
    LOBYTE(current[5].monitor) |= dropItemInfo->fields.isEquipUp;
    *(int32x2_t *)((char *)&current[5].monitor + 4) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, v48);
  }
}


int32_t __fastcall EventPartyMargeUpValInfo__GetCount(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4B01B9B & 1) == 0 )
  {
    this = (EventPartyMargeUpValInfo_o *)sub_1BC3008(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                           method);
    byte_4B01B9B = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1BC3264(this, method);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventPartyMargeUpValInfo__GetList(
        EventPartyMargeUpValInfo_o *this,
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
  struct EventPartyMargeUpValInfo___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B01B9E & 1) == 0 )
  {
    sub_1BC3008(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v4);
    sub_1BC3008(&Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__, v5);
    sub_1BC3008(&EventPartyMargeUpValInfo___c_TypeInfo, v6);
    byte_4B01B9E = 1;
  }
  v7 = EventPartyMargeUpValInfo___c_TypeInfo;
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !EventPartyMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPartyMargeUpValInfo___c_TypeInfo);
    v7 = EventPartyMargeUpValInfo___c_TypeInfo;
  }
  v9 = *(System_Comparison_T__o **)(*((_QWORD *)v7 + 23) + 8LL);
  if ( !v9 )
  {
    if ( !*((_DWORD *)v7 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = EventPartyMargeUpValInfo___c_TypeInfo;
    }
    v10 = (Il2CppObject *)**((_QWORD **)v7 + 23);
    v9 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(v9, v10, Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__, 0LL);
    static_fields = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v9;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)v9, v12, v13);
  }
  if ( !margeList
    || (System_Collections_Generic_List_object___Sort_57288964(
          margeList,
          v9,
          (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v7 = this->fields.margeList) == 0LL) )
  {
    sub_1BC3264(v7, method);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v7,
                                            (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMargeItemUpValInfo_o *__fastcall EventPartyMargeUpValInfo__GetMargeItem(
        EventPartyMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *margeList; // x0

  if ( (byte_4B01B9C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, *(_QWORD *)&index);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__, v5);
    byte_4B01B9C = 1;
  }
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    sub_1BC3264(0LL, *(_QWORD *)&index);
  if ( margeList->fields._size <= index )
    return 0LL;
  else
    return (EventMargeItemUpValInfo_o *)System_Collections_Generic_List_object___get_Item(
                                          margeList,
                                          index,
                                          (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
}


bool __fastcall EventPartyMargeUpValInfo__IsEmpry(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4B01B9A & 1) == 0 )
  {
    this = (EventPartyMargeUpValInfo_o *)sub_1BC3008(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                           method);
    byte_4B01B9A = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1BC3264(this, method);
  return margeList->fields._size < 1;
}


void __fastcall EventPartyMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B01B9F & 1) == 0 )
  {
    sub_1BC3008(&EventPartyMargeUpValInfo___c_TypeInfo, v1);
    byte_4B01B9F = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(EventPartyMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventPartyMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventPartyMargeUpValInfo___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)EventPartyMargeUpValInfo___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventPartyMargeUpValInfo___c___ctor(EventPartyMargeUpValInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventPartyMargeUpValInfo___c___GetList_b__11_0(
        EventPartyMargeUpValInfo___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BC3264(this, 0LL);
  return EventMargeItemUpValInfo__CompPartyPriority(a, b, (const MethodInfo *)b);
}