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
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_49FBFDD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, *(_QWORD *)&eventId);
    sub_1B640C8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v11);
    byte_49FBFDD = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       svtEntityList);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.margeList, (int32_t)v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.svtEntityList = svtEntityList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.svtEntityList, (int32_t)svtEntityList, v15, v16);
  this->fields.servantNameList = servantNameList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantNameList, (int32_t)servantNameList, v17, v18);
  this->fields.isFollowerList = isFollowerList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.isFollowerList, (int32_t)isFollowerList, v19, v20);
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
          sub_1B6432C(this, dropItemInfoList);
        EventPartyMargeUpValInfo__Add_38579640(this, dropItemInfoList->m_Items[v6], method);
        LODWORD(v3) = dropItemInfoList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)v3 );
    }
  }
}


void __fastcall EventPartyMargeUpValInfo__Add_38579640(
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
  Il2CppObject *v18; // x22
  __int64 v19; // x2
  struct System_String_array *servantNameList; // x8
  struct System_Boolean_array *isFollowerList; // x9
  System_String_o *v22; // x23
  bool v23; // w24
  const MethodInfo *v24; // x6
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 svtEntityList_low; // x10
  __int64 v30; // x8
  int32x2_t v31; // d0
  _BOOL8 v32; // x0
  Il2CppObject *current; // x21
  _BOOL8 v34; // x0
  Il2CppObject *v35; // x22
  int32_t rateCount; // w8
  _BOOL8 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  const MethodInfo *v40; // x2
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  __int64 v46; // x8
  int32x2_t v47; // d0
  __int64 v48; // x1
  __int64 v49; // x2
  EventMargeItemUpValInfo_o *v50; // x21
  const MethodInfo *v51; // x2
  int32_t v52; // w2
  int32_t v53; // w3
  __int64 v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  __int64 v57; // x8
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_49FBFE1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__, dropItemInfo);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v6);
    sub_1B640C8(&EventMargeItemUpValInfo_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v8);
    this = (EventPartyMargeUpValInfo_o *)sub_1B640C8(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__,
                                           v9);
    byte_49FBFE1 = 1;
  }
  memset(&v59, 0, sizeof(v59));
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v58,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v59 = v58;
        do
        {
          v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v59,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v32 )
            goto LABEL_76;
          current = v59.fields._current;
          if ( !v59.fields._current )
            sub_1B64324(v32);
        }
        while ( LODWORD(v59.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId );
LABEL_59:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v59,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
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
            (System_Collections_Generic_List_Enumerator_T__o *)&v58,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v59 = v58;
          while ( 1 )
          {
            v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v59,
                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v17 )
              break;
            v18 = v59.fields._current;
            if ( !v59.fields._current )
              sub_1B64324(v17);
            if ( v12 == HIDWORD(v59.fields._current[1].klass)
              && LODWORD(v59.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v59,
                (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
              goto LABEL_49;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v59,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
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
          v18 = (Il2CppObject *)sub_1B64314(EventMargeItemUpValInfo_TypeInfo, dropItemInfo, v19);
          EventMargeItemUpValInfo___ctor_38572708((EventMargeItemUpValInfo_o *)v18, v12, v22, v23, 0, dropItemInfo, v24);
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
              v18,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = v27 + 8 * svtEntityList_low;
            LODWORD(this->fields.svtEntityList) = svtEntityList_low + 1;
            *(_QWORD *)(v30 + 32) = v18;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)v18, v25, v26);
          }
          if ( !v18 )
            goto LABEL_90;
LABEL_49:
          v31.n64_u64[0] = *(unsigned __int64 *)((char *)&v18[5].monitor + 4);
          LOBYTE(v18[5].monitor) |= dropItemInfo->fields.isEquipUp;
          *(int32x2_t *)((char *)&v18[5].monitor + 4) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, v31);
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
          sub_1B6432C(this, dropItemInfo);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v58,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v59 = v58;
      while ( 1 )
      {
        v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v59,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v34 )
          break;
        v35 = v59.fields._current;
        if ( !v59.fields._current )
          sub_1B64324(v34);
        if ( LODWORD(v59.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
          && v59.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v59,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
          rateCount = dropItemInfo->fields.rateCount;
          if ( SLODWORD(v35[6].klass) > rateCount )
          {
            LODWORD(v35[6].klass) = rateCount;
            LOBYTE(v35[5].monitor) = dropItemInfo->fields.isEquipUp;
          }
          return;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v59,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      v50 = (EventMargeItemUpValInfo_o *)sub_1B64314(EventMargeItemUpValInfo_TypeInfo, v48, v49);
      EventMargeItemUpValInfo___ctor(v50, dropItemInfo, v51);
      if ( v50 )
      {
        v50->fields.rateCount = dropItemInfo->fields.rateCount;
        v50->fields.isEquipUp = dropItemInfo->fields.isEquipUp;
        this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
        if ( this )
        {
          v54 = *(_QWORD *)&this->fields.eventId;
          v55 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++HIDWORD(this->fields.svtEntityList);
          if ( v54 )
          {
            v56 = SLODWORD(this->fields.svtEntityList);
            if ( (unsigned int)v56 >= *(_DWORD *)(v54 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v50,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
            }
            else
            {
              v57 = v54 + 8 * v56;
              LODWORD(this->fields.svtEntityList) = v56 + 1;
              *(_QWORD *)(v57 + 32) = v50;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v57 + 32), (int32_t)v50, v52, v53);
            }
            return;
          }
        }
      }
      goto LABEL_90;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v58,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v59 = v58;
    while ( 1 )
    {
      v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v59,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
      if ( !v37 )
        break;
      current = v59.fields._current;
      if ( !v59.fields._current )
        sub_1B64324(v37);
      if ( LODWORD(v59.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
        && v59.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
      {
        goto LABEL_59;
      }
    }
LABEL_76:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v59,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    current = (Il2CppObject *)sub_1B64314(EventMargeItemUpValInfo_TypeInfo, v38, v39);
    EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)current, dropItemInfo, v40);
    this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
    if ( !this )
      goto LABEL_90;
    v43 = *(_QWORD *)&this->fields.eventId;
    v44 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
    ++HIDWORD(this->fields.svtEntityList);
    if ( !v43 )
      goto LABEL_90;
    v45 = SLODWORD(this->fields.svtEntityList);
    if ( (unsigned int)v45 >= *(_DWORD *)(v43 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        current,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    }
    else
    {
      v46 = v43 + 8 * v45;
      LODWORD(this->fields.svtEntityList) = v45 + 1;
      *(_QWORD *)(v46 + 32) = current;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 32), (int32_t)current, v41, v42);
    }
    if ( !current )
LABEL_90:
      sub_1B64324(this);
LABEL_82:
    v47.n64_u64[0] = *(unsigned __int64 *)((char *)&current[5].monitor + 4);
    LOBYTE(current[5].monitor) |= dropItemInfo->fields.isEquipUp;
    *(int32x2_t *)((char *)&current[5].monitor + 4) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, v47);
  }
}


int32_t __fastcall EventPartyMargeUpValInfo__GetCount(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_49FBFDF & 1) == 0 )
  {
    this = (EventPartyMargeUpValInfo_o *)sub_1B640C8(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                           method);
    byte_49FBFDF = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1B64324(this);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventPartyMargeUpValInfo__GetList(
        EventPartyMargeUpValInfo_o *this,
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
  struct EventPartyMargeUpValInfo___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FBFE2 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v5);
    sub_1B640C8(&Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__, v6);
    sub_1B640C8(&EventPartyMargeUpValInfo___c_TypeInfo, v7);
    byte_49FBFE2 = 1;
  }
  v8 = EventPartyMargeUpValInfo___c_TypeInfo;
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !EventPartyMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPartyMargeUpValInfo___c_TypeInfo);
    v8 = EventPartyMargeUpValInfo___c_TypeInfo;
  }
  v10 = *(System_Comparison_T__o **)(*((_QWORD *)v8 + 23) + 8LL);
  if ( !v10 )
  {
    if ( !*((_DWORD *)v8 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = EventPartyMargeUpValInfo___c_TypeInfo;
    }
    v11 = (Il2CppObject *)**((_QWORD **)v8 + 23);
    v10 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventMargeItemUpValInfo__TypeInfo, method, v2);
    System_Comparison_object____ctor(v10, v11, Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__, 0LL);
    static_fields = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v10;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)v10, v13, v14);
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
EventMargeItemUpValInfo_o *__fastcall EventPartyMargeUpValInfo__GetMargeItem(
        EventPartyMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *margeList; // x0

  if ( (byte_49FBFE0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__, v5);
    byte_49FBFE0 = 1;
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


bool __fastcall EventPartyMargeUpValInfo__IsEmpry(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_49FBFDE & 1) == 0 )
  {
    this = (EventPartyMargeUpValInfo_o *)sub_1B640C8(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                           method);
    byte_49FBFDE = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1B64324(this);
  return margeList->fields._size < 1;
}


void __fastcall EventPartyMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FBFE3 & 1) == 0 )
  {
    sub_1B640C8(&EventPartyMargeUpValInfo___c_TypeInfo, v1);
    byte_49FBFE3 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventPartyMargeUpValInfo___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventPartyMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventPartyMargeUpValInfo___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventPartyMargeUpValInfo___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return EventMargeItemUpValInfo__CompPartyPriority(a, b, (const MethodInfo *)b);
}