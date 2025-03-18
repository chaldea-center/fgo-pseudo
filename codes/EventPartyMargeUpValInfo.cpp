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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4C21B06 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, *(_QWORD *)&eventId);
    sub_1C3B764(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v11);
    byte_4C21B06 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v12;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.margeList, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.svtEntityList = svtEntityList;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.svtEntityList,
    (int64_t)svtEntityList,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.servantNameList = servantNameList;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.servantNameList,
    (int64_t)servantNameList,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.isFollowerList = isFollowerList;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.isFollowerList,
    (int64_t)isFollowerList,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
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
          sub_1C3B9C8(this, dropItemInfoList);
        EventPartyMargeUpValInfo__Add_40338344(this, dropItemInfoList->m_Items[v6], method);
        LODWORD(v3) = dropItemInfoList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)v3 );
    }
  }
}


void __fastcall EventPartyMargeUpValInfo__Add_40338344(
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 svtEntityList_low; // x10
  __int64 v34; // x8
  int32x2_t v35; // d0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  Il2CppObject *current; // x21
  _BOOL8 v39; // x0
  __int64 v40; // x1
  Il2CppObject *v41; // x22
  int32_t rateCount; // w8
  _BOOL8 v43; // x0
  __int64 v44; // x1
  const MethodInfo *v45; // x2
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  __int64 v55; // x8
  int32x2_t v56; // d0
  EventMargeItemUpValInfo_o *v57; // x21
  const MethodInfo *v58; // x2
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  __int64 v68; // x8
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4C21B0A & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__, dropItemInfo);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v6);
    sub_1C3B764(&EventMargeItemUpValInfo_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v8);
    this = (EventPartyMargeUpValInfo_o *)sub_1C3B764(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__,
                                           v9);
    byte_4C21B0A = 1;
  }
  memset(&v70, 0, sizeof(v70));
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v69,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v70 = v69;
        do
        {
          v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v70,
                  (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v36 )
            goto LABEL_76;
          current = v70.fields._current;
          if ( !v70.fields._current )
            sub_1C3B9C0(v36, v37);
        }
        while ( LODWORD(v70.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId );
LABEL_59:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v70,
          (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
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
            (System_Collections_Generic_List_Enumerator_T__o *)&v69,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v70 = v69;
          while ( 1 )
          {
            v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v70,
                    (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v17 )
              break;
            v19 = v70.fields._current;
            if ( !v70.fields._current )
              sub_1C3B9C0(v17, v18);
            if ( v12 == HIDWORD(v70.fields._current[1].klass)
              && LODWORD(v70.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v70,
                (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
              goto LABEL_49;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v70,
            (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
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
          v19 = (Il2CppObject *)sub_1C3B9B0(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor_40331412((EventMargeItemUpValInfo_o *)v19, v12, v22, v23, 0, dropItemInfo, v24);
          this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
          if ( !this )
            goto LABEL_90;
          v31 = *(_QWORD *)&this->fields.eventId;
          v32 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++HIDWORD(this->fields.svtEntityList);
          if ( !v31 )
            goto LABEL_90;
          svtEntityList_low = SLODWORD(this->fields.svtEntityList);
          if ( (unsigned int)svtEntityList_low >= *(_DWORD *)(v31 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              v19,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = v31 + 8 * svtEntityList_low;
            LODWORD(this->fields.svtEntityList) = svtEntityList_low + 1;
            *(_QWORD *)(v34 + 32) = v19;
            sub_1C3B708((PartyOrganizationUtility_o *)(v34 + 32), (int64_t)v19, v25, v26, v27, v28, v29, v30);
          }
          if ( !v19 )
            goto LABEL_90;
LABEL_49:
          v35.n64_u64[0] = *(unsigned __int64 *)((char *)&v19[5].monitor + 4);
          LOBYTE(v19[5].monitor) |= dropItemInfo->fields.isEquipUp;
          *(int32x2_t *)((char *)&v19[5].monitor + 4) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, v35);
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
          sub_1C3B9C8(this, dropItemInfo);
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v69,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v70 = v69;
      while ( 1 )
      {
        v39 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v70,
                (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v39 )
          break;
        v41 = v70.fields._current;
        if ( !v70.fields._current )
          sub_1C3B9C0(v39, v40);
        if ( LODWORD(v70.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
          && v70.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v70,
            (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
          rateCount = dropItemInfo->fields.rateCount;
          if ( SLODWORD(v41[6].klass) > rateCount )
          {
            LODWORD(v41[6].klass) = rateCount;
            LOBYTE(v41[5].monitor) = dropItemInfo->fields.isEquipUp;
          }
          return;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v70,
        (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      v57 = (EventMargeItemUpValInfo_o *)sub_1C3B9B0(EventMargeItemUpValInfo_TypeInfo);
      EventMargeItemUpValInfo___ctor(v57, dropItemInfo, v58);
      if ( v57 )
      {
        v57->fields.rateCount = dropItemInfo->fields.rateCount;
        v57->fields.isEquipUp = dropItemInfo->fields.isEquipUp;
        this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
        if ( this )
        {
          v65 = *(_QWORD *)&this->fields.eventId;
          v66 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++HIDWORD(this->fields.svtEntityList);
          if ( v65 )
          {
            v67 = SLODWORD(this->fields.svtEntityList);
            if ( (unsigned int)v67 >= *(_DWORD *)(v65 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v57,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
            }
            else
            {
              v68 = v65 + 8 * v67;
              LODWORD(this->fields.svtEntityList) = v67 + 1;
              *(_QWORD *)(v68 + 32) = v57;
              sub_1C3B708((PartyOrganizationUtility_o *)(v68 + 32), (int64_t)v57, v59, v60, v61, v62, v63, v64);
            }
            return;
          }
        }
      }
      goto LABEL_90;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v69,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v70 = v69;
    while ( 1 )
    {
      v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v70,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
      if ( !v43 )
        break;
      current = v70.fields._current;
      if ( !v70.fields._current )
        sub_1C3B9C0(v43, v44);
      if ( LODWORD(v70.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
        && v70.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
      {
        goto LABEL_59;
      }
    }
LABEL_76:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v70,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    current = (Il2CppObject *)sub_1C3B9B0(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)current, dropItemInfo, v45);
    this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
    if ( !this )
      goto LABEL_90;
    v52 = *(_QWORD *)&this->fields.eventId;
    v53 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
    ++HIDWORD(this->fields.svtEntityList);
    if ( !v52 )
      goto LABEL_90;
    v54 = SLODWORD(this->fields.svtEntityList);
    if ( (unsigned int)v54 >= *(_DWORD *)(v52 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        current,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = v52 + 8 * v54;
      LODWORD(this->fields.svtEntityList) = v54 + 1;
      *(_QWORD *)(v55 + 32) = current;
      sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 32), (int64_t)current, v46, v47, v48, v49, v50, v51);
    }
    if ( !current )
LABEL_90:
      sub_1C3B9C0(this, dropItemInfo);
LABEL_82:
    v56.n64_u64[0] = *(unsigned __int64 *)((char *)&current[5].monitor + 4);
    LOBYTE(current[5].monitor) |= dropItemInfo->fields.isEquipUp;
    *(int32x2_t *)((char *)&current[5].monitor + 4) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, v56);
  }
}


int32_t __fastcall EventPartyMargeUpValInfo__GetCount(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4C21B08 & 1) == 0 )
  {
    this = (EventPartyMargeUpValInfo_o *)sub_1C3B764(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                           method);
    byte_4C21B08 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1C3B9C0(this, method);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C21B0B & 1) == 0 )
  {
    sub_1C3B764(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v4);
    sub_1C3B764(&Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__, v5);
    sub_1C3B764(&EventPartyMargeUpValInfo___c_TypeInfo, v6);
    byte_4C21B0B = 1;
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
    v9 = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(v9, v10, Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__, 0LL);
    static_fields = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v9;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__11_0, (int64_t)v9, v12, v13, v14, v15, v16, v17);
  }
  if ( !margeList
    || (System_Collections_Generic_List_object___Sort_57202480(
          margeList,
          v9,
          (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v7 = this->fields.margeList) == 0LL) )
  {
    sub_1C3B9C0(v7, method);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v7,
                                            (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMargeItemUpValInfo_o *__fastcall EventPartyMargeUpValInfo__GetMargeItem(
        EventPartyMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *margeList; // x0

  if ( (byte_4C21B09 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, *(_QWORD *)&index);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__, v5);
    byte_4C21B09 = 1;
  }
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    sub_1C3B9C0(0LL, *(_QWORD *)&index);
  if ( margeList->fields._size <= index )
    return 0LL;
  else
    return (EventMargeItemUpValInfo_o *)System_Collections_Generic_List_object___get_Item(
                                          margeList,
                                          index,
                                          (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
}


bool __fastcall EventPartyMargeUpValInfo__IsEmpry(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4C21B07 & 1) == 0 )
  {
    this = (EventPartyMargeUpValInfo_o *)sub_1C3B764(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                           method);
    byte_4C21B07 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1C3B9C0(this, method);
  return margeList->fields._size < 1;
}


void __fastcall EventPartyMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C21B0C & 1) == 0 )
  {
    sub_1C3B764(&EventPartyMargeUpValInfo___c_TypeInfo, v1);
    byte_4C21B0C = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(EventPartyMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventPartyMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventPartyMargeUpValInfo___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventPartyMargeUpValInfo___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
  return EventMargeItemUpValInfo__CompPartyPriority(a, b, (const MethodInfo *)b);
}