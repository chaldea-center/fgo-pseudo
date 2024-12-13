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
  bool v12; // w25
  System_Collections_Generic_List_object__o *v13; // x23
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
  struct System_String_o **p_servantName; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B36D3E & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, *(_QWORD *)&member);
    sub_1BD3458(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v11);
    byte_4B36D3E = 1;
  }
  v12 = isFollower;
  v13 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v13;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.margeList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.member = member;
  this->fields.servantEntity = servantEntity;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.servantEntity,
    (int64_t)servantEntity,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.servantName = servantName;
  p_servantName = &this->fields.servantName;
  sub_1BD33FC((PartyOrganizationUtility_o *)p_servantName, (int64_t)servantName, v27, v28, v29, v30, v31, v32);
  *((_BYTE *)p_servantName + 8) = v12;
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
          sub_1BD36BC(this, dropItemInfoList);
        EventMemberMargeUpValInfo__Add_39685448(this, dropItemInfoList->m_Items[v6], method);
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
  int32_t member; // w22
  System_String_o *servantName; // x23
  bool isFollower; // w24
  int64_t v9; // x19
  const MethodInfo *v10; // x6
  System_Collections_Generic_List_object__o *margeList; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8

  if ( (byte_4B36D43 & 1) == 0 )
  {
    sub_1BD3458(&EventMargeItemUpValInfo_TypeInfo, dropItemInfo);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v5);
    byte_4B36D43 = 1;
  }
  if ( EventMemberMargeUpValInfo__IsMemberTarget(this, dropItemInfo, method) )
  {
    member = this->fields.member;
    servantName = this->fields.servantName;
    isFollower = this->fields.isFollower;
    v9 = sub_1BD36A4(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor_39681492(
      (EventMargeItemUpValInfo_o *)v9,
      member,
      servantName,
      isFollower,
      0,
      dropItemInfo,
      v10);
    if ( !v9
      || !dropItemInfo
      || (*(int32x2_t *)(v9 + 92) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, *(int32x2_t *)(v9 + 92)),
          (margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList) == 0LL)
      || (items = margeList->fields._items,
          v20 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__,
          ++margeList->fields._version,
          !items) )
    {
      sub_1BD36B4(margeList, v12);
    }
    size = margeList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        margeList,
        (Il2CppObject *)v9,
        *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &items->obj.klass + size;
      margeList->fields._size = size + 1;
      v22[4] = (Il2CppClass *)v9;
      sub_1BD33FC((PartyOrganizationUtility_o *)(v22 + 4), v9, v13, v14, v15, v16, v17, v18);
    }
  }
}


void __fastcall EventMemberMargeUpValInfo__Add_39685448(
        EventMemberMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *IsMemberTarget; // x0
  __int64 v11; // x1
  unsigned int baseFuncType; // w8
  int v13; // w9
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x21
  _BOOL8 v17; // x0
  __int64 v18; // x1
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x22
  int32_t rateCount; // w8
  _BOOL8 v23; // x0
  __int64 v24; // x1
  int32_t member; // w22
  System_String_o *servantName; // x23
  bool isFollower; // w24
  const MethodInfo *v28; // x6
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x8
  int32_t v39; // w22
  System_String_o *v40; // x23
  bool v41; // w24
  EventMargeItemUpValInfo_o *v42; // x21
  const MethodInfo *v43; // x6
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x8
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B36D42 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__, dropItemInfo);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v6);
    sub_1BD3458(&EventMargeItemUpValInfo_TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__, v9);
    byte_4B36D42 = 1;
  }
  memset(&v55, 0, sizeof(v55));
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
      v13 = 1 << (baseFuncType - 111);
      if ( (v13 & 0x240001) != 0 )
      {
LABEL_16:
        IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( !IsMemberTarget )
          goto LABEL_52;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v54,
          IsMemberTarget,
          (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v55 = v54;
        while ( 1 )
        {
          v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v55,
                  (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v17 )
            goto LABEL_37;
          current = v55.fields._current;
          if ( !v55.fields._current )
            sub_1BD36B4(v17, v18);
          if ( LODWORD(v55.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            goto LABEL_21;
        }
      }
      if ( (v13 & 0x18) != 0 )
      {
        IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( !IsMemberTarget )
          goto LABEL_52;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v54,
          IsMemberTarget,
          (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v55 = v54;
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v55,
                  (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v14 )
            break;
          current = v55.fields._current;
          if ( !v55.fields._current )
            sub_1BD36B4(v14, v15);
          if ( LODWORD(v55.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            goto LABEL_21;
        }
LABEL_37:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v55,
          (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        member = this->fields.member;
        servantName = this->fields.servantName;
        isFollower = this->fields.isFollower;
        current = (Il2CppObject *)sub_1BD36A4(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor_39681492(
          (EventMargeItemUpValInfo_o *)current,
          member,
          servantName,
          isFollower,
          0,
          dropItemInfo,
          v28);
        IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( IsMemberTarget )
        {
          items = IsMemberTarget->fields._items;
          v36 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++IsMemberTarget->fields._version;
          if ( items )
          {
            size = IsMemberTarget->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                IsMemberTarget,
                current,
                *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v38 = &items->obj.klass + size;
              IsMemberTarget->fields._size = size + 1;
              v38[4] = (Il2CppClass *)current;
              sub_1BD33FC((PartyOrganizationUtility_o *)(v38 + 4), (int64_t)current, v29, v30, v31, v32, v33, v34);
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
            (System_Collections_Generic_List_Enumerator_T__o *)&v54,
            IsMemberTarget,
            (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v55 = v54;
          do
          {
            v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v55,
                    (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v23 )
              goto LABEL_37;
            current = v55.fields._current;
            if ( !v55.fields._current )
              sub_1BD36B4(v23, v24);
          }
          while ( LODWORD(v55.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId
               || v55.fields._current[5].klass != (Il2CppClass *)dropItemInfo->fields.itemEntity );
LABEL_21:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v55,
            (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
LABEL_43:
          *(int32x2_t *)((char *)&current[5].monitor + 4) = vadd_s32(
                                                              *(int32x2_t *)&dropItemInfo->fields.addCount,
                                                              *(int32x2_t *)((char *)&current[5].monitor + 4));
          return;
        }
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v54,
          IsMemberTarget,
          (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v55 = v54;
        while ( 1 )
        {
          v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v55,
                  (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v19 )
            break;
          v21 = v55.fields._current;
          if ( !v55.fields._current )
            sub_1BD36B4(v19, v20);
          if ( LODWORD(v55.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
            && v55.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v55,
              (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
            rateCount = dropItemInfo->fields.rateCount;
            if ( SLODWORD(v21[6].klass) > rateCount )
              LODWORD(v21[6].klass) = rateCount;
            return;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v55,
          (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        v39 = this->fields.member;
        v40 = this->fields.servantName;
        v41 = this->fields.isFollower;
        v42 = (EventMargeItemUpValInfo_o *)sub_1BD36A4(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor_39681492(v42, v39, v40, v41, 0, dropItemInfo, v43);
        if ( v42 )
        {
          v42->fields.rateCount = dropItemInfo->fields.rateCount;
          IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
          if ( IsMemberTarget )
          {
            v50 = IsMemberTarget->fields._items;
            v51 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++IsMemberTarget->fields._version;
            if ( v50 )
            {
              v52 = IsMemberTarget->fields._size;
              if ( (unsigned int)v52 >= v50->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  IsMemberTarget,
                  (Il2CppObject *)v42,
                  *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
              }
              else
              {
                v53 = &v50->obj.klass + v52;
                IsMemberTarget->fields._size = v52 + 1;
                v53[4] = (Il2CppClass *)v42;
                sub_1BD33FC((PartyOrganizationUtility_o *)(v53 + 4), (int64_t)v42, v44, v45, v46, v47, v48, v49);
              }
              return;
            }
          }
        }
      }
LABEL_52:
      sub_1BD36B4(IsMemberTarget, v11);
    }
    goto LABEL_16;
  }
}


int32_t __fastcall EventMemberMargeUpValInfo__GetCount(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4B36D40 & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_1BD3458(
                                            &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                            method);
    byte_4B36D40 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1BD36B4(this, method);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventMemberMargeUpValInfo__GetList(
        EventMemberMargeUpValInfo_o *this,
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
  struct EventMemberMargeUpValInfo___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B36D44 & 1) == 0 )
  {
    sub_1BD3458(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v4);
    sub_1BD3458(&Method_EventMemberMargeUpValInfo___c__GetList_b__13_0__, v5);
    sub_1BD3458(&EventMemberMargeUpValInfo___c_TypeInfo, v6);
    byte_4B36D44 = 1;
  }
  v7 = EventMemberMargeUpValInfo___c_TypeInfo;
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !EventMemberMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMemberMargeUpValInfo___c_TypeInfo);
    v7 = EventMemberMargeUpValInfo___c_TypeInfo;
  }
  v9 = *(System_Comparison_T__o **)(*((_QWORD *)v7 + 23) + 8LL);
  if ( !v9 )
  {
    if ( !*((_DWORD *)v7 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = EventMemberMargeUpValInfo___c_TypeInfo;
    }
    v10 = (Il2CppObject *)**((_QWORD **)v7 + 23);
    v9 = (System_Comparison_T__o *)sub_1BD36A4(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(v9, v10, Method_EventMemberMargeUpValInfo___c__GetList_b__13_0__, 0LL);
    static_fields = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v9;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__13_0, (int64_t)v9, v12, v13, v14, v15, v16, v17);
  }
  if ( !margeList
    || (System_Collections_Generic_List_object___Sort_56371284(
          margeList,
          v9,
          (const MethodInfo_35C2854 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v7 = this->fields.margeList) == 0LL) )
  {
    sub_1BD36B4(v7, method);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v7,
                                            (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMargeItemUpValInfo_o *__fastcall EventMemberMargeUpValInfo__GetMargeItem(
        EventMemberMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *margeList; // x0

  if ( (byte_4B36D41 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, *(_QWORD *)&index);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__, v5);
    byte_4B36D41 = 1;
  }
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    sub_1BD36B4(0LL, *(_QWORD *)&index);
  if ( margeList->fields._size <= index )
    return 0LL;
  else
    return (EventMargeItemUpValInfo_o *)System_Collections_Generic_List_object___get_Item(
                                          margeList,
                                          index,
                                          (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
}


bool __fastcall EventMemberMargeUpValInfo__IsEmpry(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4B36D3F & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_1BD3458(
                                            &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                            method);
    byte_4B36D3F = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1BD36B4(this, method);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B36D45 & 1) == 0 )
  {
    sub_1BD3458(&EventMemberMargeUpValInfo___c_TypeInfo, v1);
    byte_4B36D45 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(EventMemberMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMemberMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventMemberMargeUpValInfo___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)EventMemberMargeUpValInfo___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1BD36B4(this, 0LL);
  return EventMargeItemUpValInfo__CompMemberPriority(a, b, (const MethodInfo *)b);
}