void __fastcall EventPartyMargeUpValInfo___ctor(
        EventPartyMargeUpValInfo_o *this,
        int32_t eventId,
        ServantEntity_array *svtEntityList,
        System_String_array *servantNameList,
        System_Boolean_array *isFollowerList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x24
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A5AD20 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4A5AD20 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.margeList, (int32_t)v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.svtEntityList = svtEntityList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtEntityList, (int32_t)svtEntityList, v14, v15);
  this->fields.servantNameList = servantNameList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantNameList, (int32_t)servantNameList, v16, v17);
  this->fields.isFollowerList = isFollowerList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.isFollowerList, (int32_t)isFollowerList, v18, v19);
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
          sub_1B88814(this, dropItemInfoList);
        EventPartyMargeUpValInfo__Add_38896872(this, dropItemInfoList->m_Items[v6], method);
        LODWORD(v3) = dropItemInfoList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)v3 );
    }
  }
}


void __fastcall EventPartyMargeUpValInfo__Add_38896872(
        EventPartyMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v4; // x20
  int32_t baseFuncType; // w8
  struct ServantEntity_array *svtEntityList; // x8
  unsigned __int64 v7; // x21
  unsigned __int64 max_length; // x9
  int32_t targetType; // w8
  _BOOL4 v10; // w22
  struct System_Boolean_array *v11; // x8
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x22
  struct System_String_array *servantNameList; // x8
  struct System_Boolean_array *isFollowerList; // x9
  System_String_o *v17; // x23
  bool v18; // w24
  const MethodInfo *v19; // x6
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 svtEntityList_low; // x10
  __int64 v25; // x8
  int32x2_t v26; // d0
  _BOOL8 v27; // x0
  __int64 v28; // x1
  Il2CppObject *current; // x21
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppObject *v32; // x22
  int32_t rateCount; // w8
  _BOOL8 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  int32x2_t v43; // d0
  EventMargeItemUpValInfo_o *v44; // x21
  const MethodInfo *v45; // x2
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  __int64 v51; // x8
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4A5AD24 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_1B885B0(&EventMargeItemUpValInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    this = (EventPartyMargeUpValInfo_o *)sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    byte_4A5AD24 = 1;
  }
  memset(&v53, 0, sizeof(v53));
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v52,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v53 = v52;
        do
        {
          v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v53,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v27 )
            goto LABEL_76;
          current = v53.fields._current;
          if ( !v53.fields._current )
            sub_1B8880C(v27, v28);
        }
        while ( LODWORD(v53.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId );
LABEL_59:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v53,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
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
        v7 = 0LL;
        while ( 1 )
        {
          max_length = svtEntityList->max_length;
          if ( (__int64)v7 >= (int)max_length )
            return;
          if ( v7 >= max_length )
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
            (System_Collections_Generic_List_Enumerator_T__o *)&v52,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v53 = v52;
          while ( 1 )
          {
            v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v53,
                    (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v12 )
              break;
            v14 = v53.fields._current;
            if ( !v53.fields._current )
              sub_1B8880C(v12, v13);
            if ( v7 == HIDWORD(v53.fields._current[1].klass)
              && LODWORD(v53.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v53,
                (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
              goto LABEL_49;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v53,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
          servantNameList = v4->fields.servantNameList;
          if ( !servantNameList )
            goto LABEL_90;
          if ( v7 >= servantNameList->max_length )
            goto LABEL_91;
          isFollowerList = v4->fields.isFollowerList;
          if ( !isFollowerList )
            goto LABEL_90;
          if ( v7 >= isFollowerList->max_length )
            goto LABEL_91;
          v17 = servantNameList->m_Items[v7];
          v18 = isFollowerList->m_Items[v7 + 4];
          v14 = (Il2CppObject *)sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor_38889940((EventMargeItemUpValInfo_o *)v14, v7, v17, v18, 0, dropItemInfo, v19);
          this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
          if ( !this )
            goto LABEL_90;
          v22 = *(_QWORD *)&this->fields.eventId;
          v23 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++HIDWORD(this->fields.svtEntityList);
          if ( !v22 )
            goto LABEL_90;
          svtEntityList_low = SLODWORD(this->fields.svtEntityList);
          if ( (unsigned int)svtEntityList_low >= *(_DWORD *)(v22 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              v14,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = v22 + 8 * svtEntityList_low;
            LODWORD(this->fields.svtEntityList) = svtEntityList_low + 1;
            *(_QWORD *)(v25 + 32) = v14;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)v14, v20, v21);
          }
          if ( !v14 )
            goto LABEL_90;
LABEL_49:
          v26.n64_u64[0] = *(unsigned __int64 *)((char *)&v14[5].monitor + 4);
          LOBYTE(v14[5].monitor) |= dropItemInfo->fields.isEquipUp;
          *(int32x2_t *)((char *)&v14[5].monitor + 4) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, v26);
          goto LABEL_50;
        }
        v10 = 1;
LABEL_25:
        this = (EventPartyMargeUpValInfo_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_50;
        v11 = v4->fields.isFollowerList;
        if ( !v11 )
          goto LABEL_90;
        if ( v7 >= v11->max_length )
LABEL_91:
          sub_1B88814(this, dropItemInfo);
        if ( v11->m_Items[v7 + 4] || !v10 )
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v52,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v53 = v52;
      while ( 1 )
      {
        v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v53,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v30 )
          break;
        v32 = v53.fields._current;
        if ( !v53.fields._current )
          sub_1B8880C(v30, v31);
        if ( LODWORD(v53.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
          && v53.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v53,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
          rateCount = dropItemInfo->fields.rateCount;
          if ( SLODWORD(v32[6].klass) > rateCount )
          {
            LODWORD(v32[6].klass) = rateCount;
            LOBYTE(v32[5].monitor) = dropItemInfo->fields.isEquipUp;
          }
          return;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v53,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      v44 = (EventMargeItemUpValInfo_o *)sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
      EventMargeItemUpValInfo___ctor(v44, dropItemInfo, v45);
      if ( v44 )
      {
        v44->fields.rateCount = dropItemInfo->fields.rateCount;
        v44->fields.isEquipUp = dropItemInfo->fields.isEquipUp;
        this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
        if ( this )
        {
          v48 = *(_QWORD *)&this->fields.eventId;
          v49 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++HIDWORD(this->fields.svtEntityList);
          if ( v48 )
          {
            v50 = SLODWORD(this->fields.svtEntityList);
            if ( (unsigned int)v50 >= *(_DWORD *)(v48 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v44,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v51 = v48 + 8 * v50;
              LODWORD(this->fields.svtEntityList) = v50 + 1;
              *(_QWORD *)(v51 + 32) = v44;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v51 + 32), (int32_t)v44, v46, v47);
            }
            return;
          }
        }
      }
      goto LABEL_90;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v52,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v53 = v52;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v53,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
      if ( !v34 )
        break;
      current = v53.fields._current;
      if ( !v53.fields._current )
        sub_1B8880C(v34, v35);
      if ( LODWORD(v53.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
        && v53.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
      {
        goto LABEL_59;
      }
    }
LABEL_76:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v53,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    current = (Il2CppObject *)sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)current, dropItemInfo, v36);
    this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
    if ( !this )
      goto LABEL_90;
    v39 = *(_QWORD *)&this->fields.eventId;
    v40 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
    ++HIDWORD(this->fields.svtEntityList);
    if ( !v39 )
      goto LABEL_90;
    v41 = SLODWORD(this->fields.svtEntityList);
    if ( (unsigned int)v41 >= *(_DWORD *)(v39 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        current,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = v39 + 8 * v41;
      LODWORD(this->fields.svtEntityList) = v41 + 1;
      *(_QWORD *)(v42 + 32) = current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v42 + 32), (int32_t)current, v37, v38);
    }
    if ( !current )
LABEL_90:
      sub_1B8880C(this, dropItemInfo);
LABEL_82:
    v43.n64_u64[0] = *(unsigned __int64 *)((char *)&current[5].monitor + 4);
    LOBYTE(current[5].monitor) |= dropItemInfo->fields.isEquipUp;
    *(int32x2_t *)((char *)&current[5].monitor + 4) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, v43);
  }
}


int32_t __fastcall EventPartyMargeUpValInfo__GetCount(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4A5AD22 & 1) == 0 )
  {
    this = (EventPartyMargeUpValInfo_o *)sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4A5AD22 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1B8880C(this, method);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventPartyMargeUpValInfo__GetList(
        EventPartyMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  void *v3; // x0
  System_Collections_Generic_List_object__o *margeList; // x20
  System_Comparison_T__o *v5; // x21
  Il2CppObject *v6; // x22
  struct EventPartyMargeUpValInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5AD25 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1B885B0(&Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__);
    sub_1B885B0(&EventPartyMargeUpValInfo___c_TypeInfo);
    byte_4A5AD25 = 1;
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
    v5 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(v5, v6, Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__, 0LL);
    static_fields = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)v5, v8, v9);
  }
  if ( !margeList
    || (System_Collections_Generic_List_object___Sort_55571192(
          margeList,
          v5,
          (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v3 = this->fields.margeList) == 0LL) )
  {
    sub_1B8880C(v3, method);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v3,
                                            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMargeItemUpValInfo_o *__fastcall EventPartyMargeUpValInfo__GetMargeItem(
        EventPartyMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *margeList; // x0

  if ( (byte_4A5AD23 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
    byte_4A5AD23 = 1;
  }
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    sub_1B8880C(0LL, *(_QWORD *)&index);
  if ( margeList->fields._size <= index )
    return 0LL;
  else
    return (EventMargeItemUpValInfo_o *)System_Collections_Generic_List_object___get_Item(
                                          margeList,
                                          index,
                                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
}


bool __fastcall EventPartyMargeUpValInfo__IsEmpry(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4A5AD21 & 1) == 0 )
  {
    this = (EventPartyMargeUpValInfo_o *)sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4A5AD21 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1B8880C(this, method);
  return margeList->fields._size < 1;
}


void __fastcall EventPartyMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5AD26 & 1) == 0 )
  {
    sub_1B885B0(&EventPartyMargeUpValInfo___c_TypeInfo);
    byte_4A5AD26 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventPartyMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventPartyMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventPartyMargeUpValInfo___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventPartyMargeUpValInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return EventMargeItemUpValInfo__CompPartyPriority(a, b, (const MethodInfo *)b);
}