void __fastcall EventMemberMargeUpValInfo___ctor(
        EventMemberMargeUpValInfo_o *this,
        int32_t member,
        ServantEntity_o *servantEntity,
        System_String_o *servantName,
        bool isFollower,
        const MethodInfo *method)
{
  bool v11; // w25
  System_Collections_Generic_List_object__o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_String_o **p_servantName; // x20
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A5AD18 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4A5AD18 = 1;
  }
  v11 = isFollower;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.margeList, (int32_t)v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.member = member;
  this->fields.servantEntity = servantEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)servantEntity, v15, v16);
  this->fields.servantName = servantName;
  p_servantName = &this->fields.servantName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_servantName, (int32_t)servantName, v18, v19);
  *((_BYTE *)p_servantName + 8) = v11;
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
          sub_1B88814(this, dropItemInfoList);
        EventMemberMargeUpValInfo__Add_38893896(this, dropItemInfoList->m_Items[v6], method);
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
  int32_t member; // w22
  System_String_o *servantName; // x23
  bool isFollower; // w24
  __int64 v8; // x19
  const MethodInfo *v9; // x6
  System_Collections_Generic_List_object__o *margeList; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8

  if ( (byte_4A5AD1D & 1) == 0 )
  {
    sub_1B885B0(&EventMargeItemUpValInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    byte_4A5AD1D = 1;
  }
  if ( EventMemberMargeUpValInfo__IsMemberTarget(this, dropItemInfo, method) )
  {
    member = this->fields.member;
    servantName = this->fields.servantName;
    isFollower = this->fields.isFollower;
    v8 = sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor_38889940(
      (EventMargeItemUpValInfo_o *)v8,
      member,
      servantName,
      isFollower,
      0,
      dropItemInfo,
      v9);
    if ( !v8
      || !dropItemInfo
      || (*(int32x2_t *)(v8 + 92) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, *(int32x2_t *)(v8 + 92)),
          (margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList) == 0LL)
      || (items = margeList->fields._items,
          v15 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__,
          ++margeList->fields._version,
          !items) )
    {
      sub_1B8880C(margeList, v11);
    }
    size = margeList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        margeList,
        (Il2CppObject *)v8,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = &items->obj.klass + size;
      margeList->fields._size = size + 1;
      v17[4] = (Il2CppClass *)v8;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), v8, v12, v13);
    }
  }
}


void __fastcall EventMemberMargeUpValInfo__Add_38893896(
        EventMemberMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *IsMemberTarget; // x0
  __int64 v6; // x1
  unsigned int baseFuncType; // w8
  int v8; // w9
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  _BOOL8 v12; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x22
  int32_t rateCount; // w8
  _BOOL8 v18; // x0
  __int64 v19; // x1
  int32_t member; // w22
  System_String_o *servantName; // x23
  bool isFollower; // w24
  const MethodInfo *v23; // x6
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  int32_t v30; // w22
  System_String_o *v31; // x23
  bool v32; // w24
  EventMargeItemUpValInfo_o *v33; // x21
  const MethodInfo *v34; // x6
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x8
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5AD1C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_1B885B0(&EventMargeItemUpValInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    byte_4A5AD1C = 1;
  }
  memset(&v42, 0, sizeof(v42));
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
      v8 = 1 << (baseFuncType - 111);
      if ( (v8 & 0x240001) != 0 )
      {
LABEL_16:
        IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( !IsMemberTarget )
          goto LABEL_52;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v41,
          IsMemberTarget,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v42 = v41;
        while ( 1 )
        {
          v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v42,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v12 )
            goto LABEL_37;
          current = v42.fields._current;
          if ( !v42.fields._current )
            sub_1B8880C(v12, v13);
          if ( LODWORD(v42.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            goto LABEL_21;
        }
      }
      if ( (v8 & 0x18) != 0 )
      {
        IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( !IsMemberTarget )
          goto LABEL_52;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v41,
          IsMemberTarget,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v42 = v41;
        while ( 1 )
        {
          v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v42,
                 (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v9 )
            break;
          current = v42.fields._current;
          if ( !v42.fields._current )
            sub_1B8880C(v9, v10);
          if ( LODWORD(v42.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            goto LABEL_21;
        }
LABEL_37:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v42,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        member = this->fields.member;
        servantName = this->fields.servantName;
        isFollower = this->fields.isFollower;
        current = (Il2CppObject *)sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor_38889940(
          (EventMargeItemUpValInfo_o *)current,
          member,
          servantName,
          isFollower,
          0,
          dropItemInfo,
          v23);
        IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( IsMemberTarget )
        {
          items = IsMemberTarget->fields._items;
          v27 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++IsMemberTarget->fields._version;
          if ( items )
          {
            size = IsMemberTarget->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                IsMemberTarget,
                current,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &items->obj.klass + size;
              IsMemberTarget->fields._size = size + 1;
              v29[4] = (Il2CppClass *)current;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)current, v24, v25);
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
            (System_Collections_Generic_List_Enumerator_T__o *)&v41,
            IsMemberTarget,
            (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v42 = v41;
          do
          {
            v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v42,
                    (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v18 )
              goto LABEL_37;
            current = v42.fields._current;
            if ( !v42.fields._current )
              sub_1B8880C(v18, v19);
          }
          while ( LODWORD(v42.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId
               || v42.fields._current[5].klass != (Il2CppClass *)dropItemInfo->fields.itemEntity );
LABEL_21:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v42,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
LABEL_43:
          *(int32x2_t *)((char *)&current[5].monitor + 4) = vadd_s32(
                                                              *(int32x2_t *)&dropItemInfo->fields.addCount,
                                                              *(int32x2_t *)((char *)&current[5].monitor + 4));
          return;
        }
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v41,
          IsMemberTarget,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v42 = v41;
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v42,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v14 )
            break;
          v16 = v42.fields._current;
          if ( !v42.fields._current )
            sub_1B8880C(v14, v15);
          if ( LODWORD(v42.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
            && v42.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v42,
              (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
            rateCount = dropItemInfo->fields.rateCount;
            if ( SLODWORD(v16[6].klass) > rateCount )
              LODWORD(v16[6].klass) = rateCount;
            return;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v42,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        v30 = this->fields.member;
        v31 = this->fields.servantName;
        v32 = this->fields.isFollower;
        v33 = (EventMargeItemUpValInfo_o *)sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor_38889940(v33, v30, v31, v32, 0, dropItemInfo, v34);
        if ( v33 )
        {
          v33->fields.rateCount = dropItemInfo->fields.rateCount;
          IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
          if ( IsMemberTarget )
          {
            v37 = IsMemberTarget->fields._items;
            v38 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++IsMemberTarget->fields._version;
            if ( v37 )
            {
              v39 = IsMemberTarget->fields._size;
              if ( (unsigned int)v39 >= v37->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  IsMemberTarget,
                  (Il2CppObject *)v33,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
              }
              else
              {
                v40 = &v37->obj.klass + v39;
                IsMemberTarget->fields._size = v39 + 1;
                v40[4] = (Il2CppClass *)v33;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v33, v35, v36);
              }
              return;
            }
          }
        }
      }
LABEL_52:
      sub_1B8880C(IsMemberTarget, v6);
    }
    goto LABEL_16;
  }
}


int32_t __fastcall EventMemberMargeUpValInfo__GetCount(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4A5AD1A & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4A5AD1A = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1B8880C(this, method);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventMemberMargeUpValInfo__GetList(
        EventMemberMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  void *v3; // x0
  System_Collections_Generic_List_object__o *margeList; // x20
  System_Comparison_T__o *v5; // x21
  Il2CppObject *v6; // x22
  struct EventMemberMargeUpValInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5AD1E & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1B885B0(&Method_EventMemberMargeUpValInfo___c__GetList_b__13_0__);
    sub_1B885B0(&EventMemberMargeUpValInfo___c_TypeInfo);
    byte_4A5AD1E = 1;
  }
  v3 = EventMemberMargeUpValInfo___c_TypeInfo;
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !EventMemberMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMemberMargeUpValInfo___c_TypeInfo);
    v3 = EventMemberMargeUpValInfo___c_TypeInfo;
  }
  v5 = *(System_Comparison_T__o **)(*((_QWORD *)v3 + 23) + 8LL);
  if ( !v5 )
  {
    if ( !*((_DWORD *)v3 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EventMemberMargeUpValInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)v3 + 23);
    v5 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(v5, v6, Method_EventMemberMargeUpValInfo___c__GetList_b__13_0__, 0LL);
    static_fields = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)v5, v8, v9);
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
EventMargeItemUpValInfo_o *__fastcall EventMemberMargeUpValInfo__GetMargeItem(
        EventMemberMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *margeList; // x0

  if ( (byte_4A5AD1B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
    byte_4A5AD1B = 1;
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


bool __fastcall EventMemberMargeUpValInfo__IsEmpry(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4A5AD19 & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4A5AD19 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1B8880C(this, method);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5AD1F & 1) == 0 )
  {
    sub_1B885B0(&EventMemberMargeUpValInfo___c_TypeInfo);
    byte_4A5AD1F = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventMemberMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventMemberMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventMemberMargeUpValInfo___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventMemberMargeUpValInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return EventMargeItemUpValInfo__CompMemberPriority(a, b, (const MethodInfo *)b);
}