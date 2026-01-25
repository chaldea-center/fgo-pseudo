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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7

  if ( (byte_4CEE1ED & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4CEE1ED = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v11;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.margeList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventId = eventId;
  this->fields.svtEntityList = svtEntityList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtEntityList,
    (int32_t)svtEntityList,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.servantNameList = servantNameList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantNameList,
    (int32_t)servantNameList,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.isFollowerList = isFollowerList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.isFollowerList,
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
          sub_1C7BD48(this);
        EventPartyMargeUpValInfo__Add_42298920(this, dropItemInfoList->m_Items[v6], method);
        LODWORD(max_length) = dropItemInfoList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)max_length );
    }
  }
}


void EventPartyMargeUpValInfo__Add_42298920(
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
  __int64 v13; // x1
  Il2CppObject *v14; // x22
  struct System_String_array *servantNameList; // x8
  struct System_Boolean_array *isFollowerList; // x9
  System_String_o *v17; // x23
  bool v18; // w24
  const MethodInfo *v19; // x6
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 svtEntityList_low; // x10
  __int64 v29; // x8
  int32x2_t v30; // d0
  _BOOL8 v31; // x0
  __int64 v32; // x1
  Il2CppObject *current; // x21
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *v36; // x22
  int32_t rateCount; // w8
  _BOOL8 v38; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x2
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x8
  int32x2_t v51; // d0
  EventMargeItemUpValInfo_o *v52; // x21
  const MethodInfo *v53; // x2
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  __int64 v63; // x8
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4CEE1EE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_1C7BAE8(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    this = (EventPartyMargeUpValInfo_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    byte_4CEE1EE = 1;
  }
  memset(&v65, 0, sizeof(v65));
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v64,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v65 = v64;
        do
        {
          v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v65,
                  (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v31 )
            goto LABEL_76;
          current = v65.fields._current;
          if ( !v65.fields._current )
            sub_1C7BD40(v31, v32);
        }
        while ( LODWORD(v65.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId );
LABEL_59:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v65,
          (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
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
            (System_Collections_Generic_List_Enumerator_T__o *)&v64,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v65 = v64;
          while ( 1 )
          {
            v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v65,
                    (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v12 )
              break;
            v14 = v65.fields._current;
            if ( !v65.fields._current )
              sub_1C7BD40(v12, v13);
            if ( v7 == HIDWORD(v65.fields._current[1].klass)
              && LODWORD(v65.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v65,
                (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
              goto LABEL_49;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v65,
            (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
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
          v17 = servantNameList->m_Items[v7];
          v18 = isFollowerList->m_Items[v7];
          v14 = (Il2CppObject *)sub_1C7BD34(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor_42292596((EventMargeItemUpValInfo_o *)v14, v7, v17, v18, 0, dropItemInfo, v19);
          this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
          if ( !this )
            goto LABEL_90;
          v26 = *(_QWORD *)&this->fields.eventId;
          v27 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++HIDWORD(this->fields.svtEntityList);
          if ( !v26 )
            goto LABEL_90;
          svtEntityList_low = SLODWORD(this->fields.svtEntityList);
          if ( (unsigned int)svtEntityList_low >= *(_DWORD *)(v26 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              v14,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = v26 + 8 * svtEntityList_low;
            LODWORD(this->fields.svtEntityList) = svtEntityList_low + 1;
            *(_QWORD *)(v29 + 32) = v14;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v29 + 32), (int32_t)v14, v20, v21, v22, v23, v24, v25);
          }
          if ( !v14 )
            goto LABEL_90;
LABEL_49:
          v30.n64_u64[0] = *(unsigned __int64 *)((char *)&v14[5].monitor + 4);
          LOBYTE(v14[5].monitor) |= dropItemInfo->fields.isEquipUp;
          *(int32x2_t *)((char *)&v14[5].monitor + 4) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, v30);
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
          sub_1C7BD48(this);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v64,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v65 = v64;
      while ( 1 )
      {
        v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v65,
                (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v34 )
          break;
        v36 = v65.fields._current;
        if ( !v65.fields._current )
          sub_1C7BD40(v34, v35);
        if ( LODWORD(v65.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
          && v65.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v65,
            (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
          rateCount = dropItemInfo->fields.rateCount;
          if ( SLODWORD(v36[6].klass) > rateCount )
          {
            LODWORD(v36[6].klass) = rateCount;
            LOBYTE(v36[5].monitor) = dropItemInfo->fields.isEquipUp;
          }
          return;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v65,
        (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      v52 = (EventMargeItemUpValInfo_o *)sub_1C7BD34(EventMargeItemUpValInfo_TypeInfo);
      EventMargeItemUpValInfo___ctor(v52, dropItemInfo, v53);
      if ( v52 )
      {
        v52->fields.rateCount = dropItemInfo->fields.rateCount;
        v52->fields.isEquipUp = dropItemInfo->fields.isEquipUp;
        this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
        if ( this )
        {
          v60 = *(_QWORD *)&this->fields.eventId;
          v61 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++HIDWORD(this->fields.svtEntityList);
          if ( v60 )
          {
            v62 = SLODWORD(this->fields.svtEntityList);
            if ( (unsigned int)v62 >= *(_DWORD *)(v60 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v52,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
            }
            else
            {
              v63 = v60 + 8 * v62;
              LODWORD(this->fields.svtEntityList) = v62 + 1;
              *(_QWORD *)(v63 + 32) = v52;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v63 + 32), (int32_t)v52, v54, v55, v56, v57, v58, v59);
            }
            return;
          }
        }
      }
      goto LABEL_90;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v64,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v65 = v64;
    while ( 1 )
    {
      v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v65,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
      if ( !v38 )
        break;
      current = v65.fields._current;
      if ( !v65.fields._current )
        sub_1C7BD40(v38, v39);
      if ( LODWORD(v65.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
        && v65.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
      {
        goto LABEL_59;
      }
    }
LABEL_76:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v65,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    current = (Il2CppObject *)sub_1C7BD34(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)current, dropItemInfo, v40);
    this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
    if ( !this )
      goto LABEL_90;
    v47 = *(_QWORD *)&this->fields.eventId;
    v48 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
    ++HIDWORD(this->fields.svtEntityList);
    if ( !v47 )
      goto LABEL_90;
    v49 = SLODWORD(this->fields.svtEntityList);
    if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        current,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
    }
    else
    {
      v50 = v47 + 8 * v49;
      LODWORD(this->fields.svtEntityList) = v49 + 1;
      *(_QWORD *)(v50 + 32) = current;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v50 + 32), (int32_t)current, v41, v42, v43, v44, v45, v46);
    }
    if ( !current )
LABEL_90:
      sub_1C7BD40(this, dropItemInfo);
LABEL_82:
    v51.n64_u64[0] = *(unsigned __int64 *)((char *)&current[5].monitor + 4);
    LOBYTE(current[5].monitor) |= dropItemInfo->fields.isEquipUp;
    *(int32x2_t *)((char *)&current[5].monitor + 4) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, v51);
  }
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CEE1EF & 1) == 0 )
  {
    sub_1C7BAE8(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C7BAE8(&Method_EventPartyMargeUpValInfo___c__GetList_b__8_0__);
    sub_1C7BAE8(&EventPartyMargeUpValInfo___c_TypeInfo);
    byte_4CEE1EF = 1;
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
    v5 = (System_Comparison_T__o *)sub_1C7BD34(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(v5, v6, Method_EventPartyMargeUpValInfo___c__GetList_b__8_0__, 0);
    static_fields = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v5;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0, (int32_t)v5, v8, v9, v10, v11, v12, v13);
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


void EventPartyMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEE1F0 & 1) == 0 )
  {
    sub_1C7BAE8(&EventPartyMargeUpValInfo___c_TypeInfo);
    byte_4CEE1F0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(EventPartyMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventPartyMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventPartyMargeUpValInfo___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)EventPartyMargeUpValInfo___c_TypeInfo->static_fields,
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
    sub_1C7BD40(this, 0);
  return EventMargeItemUpValInfo__CompPartyPriority(a, b, (const MethodInfo *)b);
}