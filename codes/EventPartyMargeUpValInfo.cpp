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
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x24
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4B15DA9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__,
      *(_QWORD *)&eventId,
      svtEntityList);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v11, v12);
    byte_4B15DA9 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       svtEntityList,
                                                       servantNameList);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v13;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.margeList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.svtEntityList = svtEntityList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.svtEntityList,
    (int64_t)svtEntityList,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.servantNameList = servantNameList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantNameList,
    (int64_t)servantNameList,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.isFollowerList = isFollowerList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.isFollowerList,
    (int64_t)isFollowerList,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
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
          sub_1BCAA44(this, dropItemInfoList);
        EventPartyMargeUpValInfo__Add_39616372(this, dropItemInfoList->m_Items[v6], method);
        LODWORD(v3) = dropItemInfoList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)v3 );
    }
  }
}


void __fastcall EventPartyMargeUpValInfo__Add_39616372(
        EventPartyMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t baseFuncType; // w8
  struct ServantEntity_array *svtEntityList; // x8
  unsigned __int64 v17; // x21
  unsigned __int64 max_length; // x9
  int32_t targetType; // w8
  _BOOL4 v20; // w22
  struct System_Boolean_array *v21; // x8
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *v24; // x22
  __int64 v25; // x2
  __int64 v26; // x3
  struct System_String_array *servantNameList; // x8
  struct System_Boolean_array *isFollowerList; // x9
  System_String_o *v29; // x23
  bool v30; // w24
  const MethodInfo *v31; // x6
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 svtEntityList_low; // x10
  __int64 v41; // x8
  int32x2_t v42; // d0
  _BOOL8 v43; // x0
  __int64 v44; // x1
  Il2CppObject *current; // x21
  _BOOL8 v46; // x0
  __int64 v47; // x1
  Il2CppObject *v48; // x22
  int32_t rateCount; // w8
  _BOOL8 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  const MethodInfo *v55; // x2
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  __int64 v65; // x8
  int32x2_t v66; // d0
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  EventMargeItemUpValInfo_o *v70; // x21
  const MethodInfo *v71; // x2
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  __int64 v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  __int64 v81; // x8
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+20h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4B15DAD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__,
      dropItemInfo,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v7, v8);
    sub_1BCA7E0(&EventMargeItemUpValInfo_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v11, v12);
    this = (EventPartyMargeUpValInfo_o *)sub_1BCA7E0(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__,
                                           v13,
                                           v14);
    byte_4B15DAD = 1;
  }
  memset(&v83, 0, sizeof(v83));
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v82,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v83 = v82;
        do
        {
          v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v83,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v43 )
            goto LABEL_76;
          current = v83.fields._current;
          if ( !v83.fields._current )
            sub_1BCAA3C(v43, v44);
        }
        while ( LODWORD(v83.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId );
LABEL_59:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v83,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
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
        v17 = 0LL;
        while ( 1 )
        {
          max_length = svtEntityList->max_length;
          if ( (__int64)v17 >= (int)max_length )
            return;
          if ( v17 >= max_length )
            goto LABEL_91;
          this = (EventPartyMargeUpValInfo_o *)svtEntityList->m_Items[v17];
          if ( this )
            break;
LABEL_50:
          svtEntityList = v4->fields.svtEntityList;
          ++v17;
          if ( !svtEntityList )
            goto LABEL_90;
        }
        targetType = dropItemInfo->fields.targetType;
        if ( targetType <= 3 )
        {
          if ( !targetType )
          {
            v20 = v17 == dropItemInfo->fields.member;
LABEL_24:
            if ( dropItemInfo->fields.baseFuncType != 111 )
            {
              if ( !v20 )
                goto LABEL_50;
              goto LABEL_32;
            }
            goto LABEL_25;
          }
          if ( targetType != 3 )
          {
LABEL_22:
            v20 = 0;
            goto LABEL_24;
          }
        }
        else if ( targetType != 7 )
        {
          if ( targetType == 14 )
          {
            v20 = v17 != dropItemInfo->fields.member;
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
            (System_Collections_Generic_List_Enumerator_T__o *)&v82,
            (System_Collections_Generic_List_object__o *)this,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v83 = v82;
          while ( 1 )
          {
            v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v83,
                    (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v22 )
              break;
            v24 = v83.fields._current;
            if ( !v83.fields._current )
              sub_1BCAA3C(v22, v23);
            if ( v17 == HIDWORD(v83.fields._current[1].klass)
              && LODWORD(v83.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v83,
                (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
              goto LABEL_49;
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v83,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
          servantNameList = v4->fields.servantNameList;
          if ( !servantNameList )
            goto LABEL_90;
          if ( v17 >= servantNameList->max_length )
            goto LABEL_91;
          isFollowerList = v4->fields.isFollowerList;
          if ( !isFollowerList )
            goto LABEL_90;
          if ( v17 >= isFollowerList->max_length )
            goto LABEL_91;
          v29 = servantNameList->m_Items[v17];
          v30 = isFollowerList->m_Items[v17 + 4];
          v24 = (Il2CppObject *)sub_1BCAA2C(EventMargeItemUpValInfo_TypeInfo, dropItemInfo, v25, v26);
          EventMargeItemUpValInfo___ctor_39609440((EventMargeItemUpValInfo_o *)v24, v17, v29, v30, 0, dropItemInfo, v31);
          this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
          if ( !this )
            goto LABEL_90;
          v38 = *(_QWORD *)&this->fields.eventId;
          v39 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++HIDWORD(this->fields.svtEntityList);
          if ( !v38 )
            goto LABEL_90;
          svtEntityList_low = SLODWORD(this->fields.svtEntityList);
          if ( (unsigned int)svtEntityList_low >= *(_DWORD *)(v38 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              v24,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = v38 + 8 * svtEntityList_low;
            LODWORD(this->fields.svtEntityList) = svtEntityList_low + 1;
            *(_QWORD *)(v41 + 32) = v24;
            sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 32), (int64_t)v24, v32, v33, v34, v35, v36, v37);
          }
          if ( !v24 )
            goto LABEL_90;
LABEL_49:
          v42.n64_u64[0] = *(unsigned __int64 *)((char *)&v24[5].monitor + 4);
          LOBYTE(v24[5].monitor) |= dropItemInfo->fields.isEquipUp;
          *(int32x2_t *)((char *)&v24[5].monitor + 4) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, v42);
          goto LABEL_50;
        }
        v20 = 1;
LABEL_25:
        this = (EventPartyMargeUpValInfo_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_50;
        v21 = v4->fields.isFollowerList;
        if ( !v21 )
          goto LABEL_90;
        if ( v17 >= v21->max_length )
LABEL_91:
          sub_1BCAA44(this, dropItemInfo);
        if ( v21->m_Items[v17 + 4] || !v20 )
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v82,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v83 = v82;
      while ( 1 )
      {
        v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v83,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v46 )
          break;
        v48 = v83.fields._current;
        if ( !v83.fields._current )
          sub_1BCAA3C(v46, v47);
        if ( LODWORD(v83.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
          && v83.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v83,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
          rateCount = dropItemInfo->fields.rateCount;
          if ( SLODWORD(v48[6].klass) > rateCount )
          {
            LODWORD(v48[6].klass) = rateCount;
            LOBYTE(v48[5].monitor) = dropItemInfo->fields.isEquipUp;
          }
          return;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v83,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      v70 = (EventMargeItemUpValInfo_o *)sub_1BCAA2C(EventMargeItemUpValInfo_TypeInfo, v67, v68, v69);
      EventMargeItemUpValInfo___ctor(v70, dropItemInfo, v71);
      if ( v70 )
      {
        v70->fields.rateCount = dropItemInfo->fields.rateCount;
        v70->fields.isEquipUp = dropItemInfo->fields.isEquipUp;
        this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
        if ( this )
        {
          v78 = *(_QWORD *)&this->fields.eventId;
          v79 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++HIDWORD(this->fields.svtEntityList);
          if ( v78 )
          {
            v80 = SLODWORD(this->fields.svtEntityList);
            if ( (unsigned int)v80 >= *(_DWORD *)(v78 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v70,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
            }
            else
            {
              v81 = v78 + 8 * v80;
              LODWORD(this->fields.svtEntityList) = v80 + 1;
              *(_QWORD *)(v81 + 32) = v70;
              sub_1BCA784((PartyOrganizationUtility_o *)(v81 + 32), (int64_t)v70, v72, v73, v74, v75, v76, v77);
            }
            return;
          }
        }
      }
      goto LABEL_90;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v82,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v83 = v82;
    while ( 1 )
    {
      v50 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v83,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
      if ( !v50 )
        break;
      current = v83.fields._current;
      if ( !v83.fields._current )
        sub_1BCAA3C(v50, v51);
      if ( LODWORD(v83.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
        && v83.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
      {
        goto LABEL_59;
      }
    }
LABEL_76:
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v83,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    current = (Il2CppObject *)sub_1BCAA2C(EventMargeItemUpValInfo_TypeInfo, v52, v53, v54);
    EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)current, dropItemInfo, v55);
    this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
    if ( !this )
      goto LABEL_90;
    v62 = *(_QWORD *)&this->fields.eventId;
    v63 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
    ++HIDWORD(this->fields.svtEntityList);
    if ( !v62 )
      goto LABEL_90;
    v64 = SLODWORD(this->fields.svtEntityList);
    if ( (unsigned int)v64 >= *(_DWORD *)(v62 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        current,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
    }
    else
    {
      v65 = v62 + 8 * v64;
      LODWORD(this->fields.svtEntityList) = v64 + 1;
      *(_QWORD *)(v65 + 32) = current;
      sub_1BCA784((PartyOrganizationUtility_o *)(v65 + 32), (int64_t)current, v56, v57, v58, v59, v60, v61);
    }
    if ( !current )
LABEL_90:
      sub_1BCAA3C(this, dropItemInfo);
LABEL_82:
    v66.n64_u64[0] = *(unsigned __int64 *)((char *)&current[5].monitor + 4);
    LOBYTE(current[5].monitor) |= dropItemInfo->fields.isEquipUp;
    *(int32x2_t *)((char *)&current[5].monitor + 4) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, v66);
  }
}


int32_t __fastcall EventPartyMargeUpValInfo__GetCount(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventPartyMargeUpValInfo_o *v3; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v3 = this;
  if ( (byte_4B15DAB & 1) == 0 )
  {
    this = (EventPartyMargeUpValInfo_o *)sub_1BCA7E0(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                           method,
                                           v2);
    byte_4B15DAB = 1;
  }
  margeList = v3->fields.margeList;
  if ( !margeList )
    sub_1BCAA3C(this, method);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventPartyMargeUpValInfo__GetList(
        EventPartyMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  void *v13; // x0
  System_Collections_Generic_List_object__o *margeList; // x20
  System_Comparison_T__o *v15; // x21
  Il2CppObject *v16; // x22
  struct EventPartyMargeUpValInfo___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B15DAE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__, v9, v10);
    sub_1BCA7E0(&EventPartyMargeUpValInfo___c_TypeInfo, v11, v12);
    byte_4B15DAE = 1;
  }
  v13 = EventPartyMargeUpValInfo___c_TypeInfo;
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !EventPartyMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPartyMargeUpValInfo___c_TypeInfo, method);
    v13 = EventPartyMargeUpValInfo___c_TypeInfo;
  }
  v15 = *(System_Comparison_T__o **)(*((_QWORD *)v13 + 23) + 8LL);
  if ( !v15 )
  {
    if ( !*((_DWORD *)v13 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = EventPartyMargeUpValInfo___c_TypeInfo;
    }
    v16 = (Il2CppObject *)**((_QWORD **)v13 + 23);
    v15 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventMargeItemUpValInfo__TypeInfo, method, v2, v3);
    System_Comparison_object____ctor(v15, v16, Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__, 0LL);
    static_fields = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v15;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__11_0, (int64_t)v15, v18, v19, v20, v21, v22, v23);
  }
  if ( !margeList
    || (System_Collections_Generic_List_object___Sort_56244000(
          margeList,
          v15,
          (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v13 = this->fields.margeList) == 0LL) )
  {
    sub_1BCAA3C(v13, method);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v13,
                                            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMargeItemUpValInfo_o *__fastcall EventPartyMargeUpValInfo__GetMargeItem(
        EventPartyMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *margeList; // x0

  if ( (byte_4B15DAC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__, v5, v6);
    byte_4B15DAC = 1;
  }
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    sub_1BCAA3C(0LL, *(_QWORD *)&index);
  if ( margeList->fields._size <= index )
    return 0LL;
  else
    return (EventMargeItemUpValInfo_o *)System_Collections_Generic_List_object___get_Item(
                                          margeList,
                                          index,
                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
}


bool __fastcall EventPartyMargeUpValInfo__IsEmpry(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventPartyMargeUpValInfo_o *v3; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v3 = this;
  if ( (byte_4B15DAA & 1) == 0 )
  {
    this = (EventPartyMargeUpValInfo_o *)sub_1BCA7E0(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                           method,
                                           v2);
    byte_4B15DAA = 1;
  }
  margeList = v3->fields.margeList;
  if ( !margeList )
    sub_1BCAA3C(this, method);
  return margeList->fields._size < 1;
}


void __fastcall EventPartyMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15DAF & 1) == 0 )
  {
    sub_1BCA7E0(&EventPartyMargeUpValInfo___c_TypeInfo, v1, v2);
    byte_4B15DAF = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventPartyMargeUpValInfo___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventPartyMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventPartyMargeUpValInfo___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventPartyMargeUpValInfo___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return EventMargeItemUpValInfo__CompPartyPriority(a, b, (const MethodInfo *)b);
}