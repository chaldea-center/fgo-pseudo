// local variable allocation has failed, the output may be wrong!
void __fastcall EventMemberMargeUpValInfo___ctor(
        EventMemberMargeUpValInfo_o *this,
        int32_t member,
        ServantEntity_o *servantEntity,
        System_String_o *servantName,
        bool isFollower,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  bool v13; // w25
  System_Collections_Generic_List_object__o *v14; // x23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_String_o **p_servantName; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4B15DA1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__,
      *(_QWORD *)&member,
      servantEntity);
    sub_1BCA7E0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v11, v12);
    byte_4B15DA1 = 1;
  }
  v13 = isFollower;
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                       *(_QWORD *)&member,
                                                       servantEntity,
                                                       servantName);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.margeList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.member = member;
  this->fields.servantEntity = servantEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantEntity,
    (int64_t)servantEntity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.servantName = servantName;
  p_servantName = &this->fields.servantName;
  sub_1BCA784((PartyOrganizationUtility_o *)p_servantName, (int64_t)servantName, v28, v29, v30, v31, v32, v33);
  *((_BYTE *)p_servantName + 8) = v13;
}


void __fastcall EventMemberMargeUpValInfo__Add(
        EventMemberMargeUpValInfo_o *this,
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
        EventMemberMargeUpValInfo__Add_39613396(this, dropItemInfoList->m_Items[v6], method);
        LODWORD(v3) = dropItemInfoList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)v3 );
    }
  }
}


void __fastcall EventMemberMargeUpValInfo__AddCampaignFriendshipUpVal(
        EventMemberMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  int32_t member; // w22
  System_String_o *servantName; // x23
  bool isFollower; // w24
  int64_t v13; // x19
  const MethodInfo *v14; // x6
  System_Collections_Generic_List_object__o *margeList; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8

  if ( (byte_4B15DA6 & 1) == 0 )
  {
    sub_1BCA7E0(&EventMargeItemUpValInfo_TypeInfo, dropItemInfo, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v5, v6);
    byte_4B15DA6 = 1;
  }
  if ( EventMemberMargeUpValInfo__IsMemberTarget(this, dropItemInfo, method) )
  {
    member = this->fields.member;
    servantName = this->fields.servantName;
    isFollower = this->fields.isFollower;
    v13 = sub_1BCAA2C(EventMargeItemUpValInfo_TypeInfo, v7, v8, v9);
    EventMargeItemUpValInfo___ctor_39609440(
      (EventMargeItemUpValInfo_o *)v13,
      member,
      servantName,
      isFollower,
      0,
      dropItemInfo,
      v14);
    if ( !v13
      || !dropItemInfo
      || (*(int32x2_t *)(v13 + 92) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, *(int32x2_t *)(v13 + 92)),
          (margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList) == 0LL)
      || (items = margeList->fields._items,
          v24 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__,
          ++margeList->fields._version,
          !items) )
    {
      sub_1BCAA3C(margeList, v16);
    }
    size = margeList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        margeList,
        (Il2CppObject *)v13,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      margeList->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v13;
      sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 4), v13, v17, v18, v19, v20, v21, v22);
    }
  }
}


void __fastcall EventMemberMargeUpValInfo__Add_39613396(
        EventMemberMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *IsMemberTarget; // x0
  __int64 v16; // x1
  unsigned int baseFuncType; // w8
  int v18; // w9
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x21
  _BOOL8 v22; // x0
  __int64 v23; // x1
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x22
  int32_t rateCount; // w8
  _BOOL8 v28; // x0
  __int64 v29; // x1
  int32_t member; // w22
  System_String_o *servantName; // x23
  bool isFollower; // w24
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  const MethodInfo *v36; // x6
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x8
  int32_t v47; // w22
  System_String_o *v48; // x23
  bool v49; // w24
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  EventMargeItemUpValInfo_o *v53; // x21
  const MethodInfo *v54; // x6
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass **v64; // x8
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B15DA5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__,
      dropItemInfo,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v7, v8);
    sub_1BCA7E0(&EventMargeItemUpValInfo_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__, v13, v14);
    byte_4B15DA5 = 1;
  }
  memset(&v66, 0, sizeof(v66));
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
      v18 = 1 << (baseFuncType - 111);
      if ( (v18 & 0x240001) != 0 )
      {
LABEL_16:
        IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( !IsMemberTarget )
          goto LABEL_52;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v65,
          IsMemberTarget,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v66 = v65;
        while ( 1 )
        {
          v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v66,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v22 )
            goto LABEL_37;
          current = v66.fields._current;
          if ( !v66.fields._current )
            sub_1BCAA3C(v22, v23);
          if ( LODWORD(v66.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            goto LABEL_21;
        }
      }
      if ( (v18 & 0x18) != 0 )
      {
        IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( !IsMemberTarget )
          goto LABEL_52;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v65,
          IsMemberTarget,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v66 = v65;
        while ( 1 )
        {
          v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v66,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v19 )
            break;
          current = v66.fields._current;
          if ( !v66.fields._current )
            sub_1BCAA3C(v19, v20);
          if ( LODWORD(v66.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            goto LABEL_21;
        }
LABEL_37:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v66,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        member = this->fields.member;
        servantName = this->fields.servantName;
        isFollower = this->fields.isFollower;
        current = (Il2CppObject *)sub_1BCAA2C(EventMargeItemUpValInfo_TypeInfo, v33, v34, v35);
        EventMargeItemUpValInfo___ctor_39609440(
          (EventMargeItemUpValInfo_o *)current,
          member,
          servantName,
          isFollower,
          0,
          dropItemInfo,
          v36);
        IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( IsMemberTarget )
        {
          items = IsMemberTarget->fields._items;
          v44 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++IsMemberTarget->fields._version;
          if ( items )
          {
            size = IsMemberTarget->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                IsMemberTarget,
                current,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
            }
            else
            {
              v46 = &items->obj.klass + size;
              IsMemberTarget->fields._size = size + 1;
              v46[4] = (Il2CppClass *)current;
              sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 4), (int64_t)current, v37, v38, v39, v40, v41, v42);
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
            (System_Collections_Generic_List_Enumerator_T__o *)&v65,
            IsMemberTarget,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v66 = v65;
          do
          {
            v28 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v66,
                    (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v28 )
              goto LABEL_37;
            current = v66.fields._current;
            if ( !v66.fields._current )
              sub_1BCAA3C(v28, v29);
          }
          while ( LODWORD(v66.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId
               || v66.fields._current[5].klass != (Il2CppClass *)dropItemInfo->fields.itemEntity );
LABEL_21:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v66,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
LABEL_43:
          *(int32x2_t *)((char *)&current[5].monitor + 4) = vadd_s32(
                                                              *(int32x2_t *)&dropItemInfo->fields.addCount,
                                                              *(int32x2_t *)((char *)&current[5].monitor + 4));
          return;
        }
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v65,
          IsMemberTarget,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v66 = v65;
        while ( 1 )
        {
          v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v66,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v24 )
            break;
          v26 = v66.fields._current;
          if ( !v66.fields._current )
            sub_1BCAA3C(v24, v25);
          if ( LODWORD(v66.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
            && v66.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v66,
              (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
            rateCount = dropItemInfo->fields.rateCount;
            if ( SLODWORD(v26[6].klass) > rateCount )
              LODWORD(v26[6].klass) = rateCount;
            return;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v66,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        v47 = this->fields.member;
        v48 = this->fields.servantName;
        v49 = this->fields.isFollower;
        v53 = (EventMargeItemUpValInfo_o *)sub_1BCAA2C(EventMargeItemUpValInfo_TypeInfo, v50, v51, v52);
        EventMargeItemUpValInfo___ctor_39609440(v53, v47, v48, v49, 0, dropItemInfo, v54);
        if ( v53 )
        {
          v53->fields.rateCount = dropItemInfo->fields.rateCount;
          IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
          if ( IsMemberTarget )
          {
            v61 = IsMemberTarget->fields._items;
            v62 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++IsMemberTarget->fields._version;
            if ( v61 )
            {
              v63 = IsMemberTarget->fields._size;
              if ( (unsigned int)v63 >= v61->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  IsMemberTarget,
                  (Il2CppObject *)v53,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
              }
              else
              {
                v64 = &v61->obj.klass + v63;
                IsMemberTarget->fields._size = v63 + 1;
                v64[4] = (Il2CppClass *)v53;
                sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 4), (int64_t)v53, v55, v56, v57, v58, v59, v60);
              }
              return;
            }
          }
        }
      }
LABEL_52:
      sub_1BCAA3C(IsMemberTarget, v16);
    }
    goto LABEL_16;
  }
}


int32_t __fastcall EventMemberMargeUpValInfo__GetCount(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventMemberMargeUpValInfo_o *v3; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v3 = this;
  if ( (byte_4B15DA3 & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_1BCA7E0(
                                            &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                            method,
                                            v2);
    byte_4B15DA3 = 1;
  }
  margeList = v3->fields.margeList;
  if ( !margeList )
    sub_1BCAA3C(this, method);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventMemberMargeUpValInfo__GetList(
        EventMemberMargeUpValInfo_o *this,
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
  struct EventMemberMargeUpValInfo___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B15DA7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_EventMemberMargeUpValInfo___c__GetList_b__13_0__, v9, v10);
    sub_1BCA7E0(&EventMemberMargeUpValInfo___c_TypeInfo, v11, v12);
    byte_4B15DA7 = 1;
  }
  v13 = EventMemberMargeUpValInfo___c_TypeInfo;
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !EventMemberMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMemberMargeUpValInfo___c_TypeInfo, method);
    v13 = EventMemberMargeUpValInfo___c_TypeInfo;
  }
  v15 = *(System_Comparison_T__o **)(*((_QWORD *)v13 + 23) + 8LL);
  if ( !v15 )
  {
    if ( !*((_DWORD *)v13 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = EventMemberMargeUpValInfo___c_TypeInfo;
    }
    v16 = (Il2CppObject *)**((_QWORD **)v13 + 23);
    v15 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventMargeItemUpValInfo__TypeInfo, method, v2, v3);
    System_Comparison_object____ctor(v15, v16, Method_EventMemberMargeUpValInfo___c__GetList_b__13_0__, 0LL);
    static_fields = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v15;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__13_0, (int64_t)v15, v18, v19, v20, v21, v22, v23);
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
EventMargeItemUpValInfo_o *__fastcall EventMemberMargeUpValInfo__GetMargeItem(
        EventMemberMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *margeList; // x0

  if ( (byte_4B15DA4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__, v5, v6);
    byte_4B15DA4 = 1;
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


bool __fastcall EventMemberMargeUpValInfo__IsEmpry(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventMemberMargeUpValInfo_o *v3; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v3 = this;
  if ( (byte_4B15DA2 & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_1BCA7E0(
                                            &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                            method,
                                            v2);
    byte_4B15DA2 = 1;
  }
  margeList = v3->fields.margeList;
  if ( !margeList )
    sub_1BCAA3C(this, method);
  return margeList->fields._size < 1;
}


bool __fastcall EventMemberMargeUpValInfo__IsMemberTarget(
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


void __fastcall EventMemberMargeUpValInfo___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B15DA8 & 1) == 0 )
  {
    sub_1BCA7E0(&EventMemberMargeUpValInfo___c_TypeInfo, v1, v2);
    byte_4B15DA8 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventMemberMargeUpValInfo___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventMemberMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventMemberMargeUpValInfo___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventMemberMargeUpValInfo___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EventMemberMargeUpValInfo___c___ctor(EventMemberMargeUpValInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventMemberMargeUpValInfo___c___GetList_b__13_0(
        EventMemberMargeUpValInfo___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1BCAA3C(this, 0LL);
  return EventMargeItemUpValInfo__CompMemberPriority(a, b, (const MethodInfo *)b);
}