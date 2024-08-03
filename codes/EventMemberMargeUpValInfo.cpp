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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_String_o **p_servantName; // x20
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_49FBFD5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, *(_QWORD *)&member);
    sub_1B640C8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v11);
    byte_49FBFD5 = 1;
  }
  v12 = isFollower;
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                       *(_QWORD *)&member,
                                                       servantEntity);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.margeList, (int32_t)v13, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.member = member;
  this->fields.servantEntity = servantEntity;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantEntity, (int32_t)servantEntity, v16, v17);
  this->fields.servantName = servantName;
  p_servantName = &this->fields.servantName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_servantName, (int32_t)servantName, v19, v20);
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
          sub_1B6432C(this, dropItemInfoList);
        EventMemberMargeUpValInfo__Add_38576664(this, dropItemInfoList->m_Items[v6], method);
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
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t member; // w22
  System_String_o *servantName; // x23
  bool isFollower; // w24
  __int64 v11; // x19
  const MethodInfo *v12; // x6
  System_Collections_Generic_List_object__o *margeList; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8

  if ( (byte_49FBFDA & 1) == 0 )
  {
    sub_1B640C8(&EventMargeItemUpValInfo_TypeInfo, dropItemInfo);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v5);
    byte_49FBFDA = 1;
  }
  if ( EventMemberMargeUpValInfo__IsMemberTarget(this, dropItemInfo, method) )
  {
    member = this->fields.member;
    servantName = this->fields.servantName;
    isFollower = this->fields.isFollower;
    v11 = sub_1B64314(EventMargeItemUpValInfo_TypeInfo, v6, v7);
    EventMargeItemUpValInfo___ctor_38572708(
      (EventMargeItemUpValInfo_o *)v11,
      member,
      servantName,
      isFollower,
      0,
      dropItemInfo,
      v12);
    if ( !v11
      || !dropItemInfo
      || (*(int32x2_t *)(v11 + 92) = vadd_s32(*(int32x2_t *)&dropItemInfo->fields.addCount, *(int32x2_t *)(v11 + 92)),
          (margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList) == 0LL)
      || (items = margeList->fields._items,
          v17 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__,
          ++margeList->fields._version,
          !items) )
    {
      sub_1B64324(margeList);
    }
    size = margeList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        margeList,
        (Il2CppObject *)v11,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &items->obj.klass + size;
      margeList->fields._size = size + 1;
      v19[4] = (Il2CppClass *)v11;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 4), v11, v14, v15);
    }
  }
}


void __fastcall EventMemberMargeUpValInfo__Add_38576664(
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
  unsigned int baseFuncType; // w8
  int v12; // w9
  _BOOL8 v13; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  _BOOL8 v16; // x0
  Il2CppObject *v17; // x22
  int32_t rateCount; // w8
  _BOOL8 v19; // x0
  int32_t member; // w22
  System_String_o *servantName; // x23
  bool isFollower; // w24
  __int64 v23; // x1
  __int64 v24; // x2
  const MethodInfo *v25; // x6
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8
  int32_t v32; // w22
  System_String_o *v33; // x23
  bool v34; // w24
  __int64 v35; // x1
  __int64 v36; // x2
  EventMargeItemUpValInfo_o *v37; // x21
  const MethodInfo *v38; // x6
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x8
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FBFD9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__, dropItemInfo);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v6);
    sub_1B640C8(&EventMargeItemUpValInfo_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__, v9);
    byte_49FBFD9 = 1;
  }
  memset(&v46, 0, sizeof(v46));
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
      v12 = 1 << (baseFuncType - 111);
      if ( (v12 & 0x240001) != 0 )
      {
LABEL_16:
        IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( !IsMemberTarget )
          goto LABEL_52;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v45,
          IsMemberTarget,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v46 = v45;
        while ( 1 )
        {
          v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v46,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v15 )
            goto LABEL_37;
          current = v46.fields._current;
          if ( !v46.fields._current )
            sub_1B64324(v15);
          if ( LODWORD(v46.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            goto LABEL_21;
        }
      }
      if ( (v12 & 0x18) != 0 )
      {
        IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( !IsMemberTarget )
          goto LABEL_52;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v45,
          IsMemberTarget,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v46 = v45;
        while ( 1 )
        {
          v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v46,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v13 )
            break;
          current = v46.fields._current;
          if ( !v46.fields._current )
            sub_1B64324(v13);
          if ( LODWORD(v46.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            goto LABEL_21;
        }
LABEL_37:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v46,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        member = this->fields.member;
        servantName = this->fields.servantName;
        isFollower = this->fields.isFollower;
        current = (Il2CppObject *)sub_1B64314(EventMargeItemUpValInfo_TypeInfo, v23, v24);
        EventMargeItemUpValInfo___ctor_38572708(
          (EventMargeItemUpValInfo_o *)current,
          member,
          servantName,
          isFollower,
          0,
          dropItemInfo,
          v25);
        IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( IsMemberTarget )
        {
          items = IsMemberTarget->fields._items;
          v29 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++IsMemberTarget->fields._version;
          if ( items )
          {
            size = IsMemberTarget->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                IsMemberTarget,
                current,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              v31 = &items->obj.klass + size;
              IsMemberTarget->fields._size = size + 1;
              v31[4] = (Il2CppClass *)current;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)current, v26, v27);
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
            (System_Collections_Generic_List_Enumerator_T__o *)&v45,
            IsMemberTarget,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v46 = v45;
          do
          {
            v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v46,
                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v19 )
              goto LABEL_37;
            current = v46.fields._current;
            if ( !v46.fields._current )
              sub_1B64324(v19);
          }
          while ( LODWORD(v46.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId
               || v46.fields._current[5].klass != (Il2CppClass *)dropItemInfo->fields.itemEntity );
LABEL_21:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v46,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
LABEL_43:
          *(int32x2_t *)((char *)&current[5].monitor + 4) = vadd_s32(
                                                              *(int32x2_t *)&dropItemInfo->fields.addCount,
                                                              *(int32x2_t *)((char *)&current[5].monitor + 4));
          return;
        }
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v45,
          IsMemberTarget,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v46 = v45;
        while ( 1 )
        {
          v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v46,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v16 )
            break;
          v17 = v46.fields._current;
          if ( !v46.fields._current )
            sub_1B64324(v16);
          if ( LODWORD(v46.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
            && v46.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v46,
              (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
            rateCount = dropItemInfo->fields.rateCount;
            if ( SLODWORD(v17[6].klass) > rateCount )
              LODWORD(v17[6].klass) = rateCount;
            return;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v46,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        v32 = this->fields.member;
        v33 = this->fields.servantName;
        v34 = this->fields.isFollower;
        v37 = (EventMargeItemUpValInfo_o *)sub_1B64314(EventMargeItemUpValInfo_TypeInfo, v35, v36);
        EventMargeItemUpValInfo___ctor_38572708(v37, v32, v33, v34, 0, dropItemInfo, v38);
        if ( v37 )
        {
          v37->fields.rateCount = dropItemInfo->fields.rateCount;
          IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
          if ( IsMemberTarget )
          {
            v41 = IsMemberTarget->fields._items;
            v42 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++IsMemberTarget->fields._version;
            if ( v41 )
            {
              v43 = IsMemberTarget->fields._size;
              if ( (unsigned int)v43 >= v41->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  IsMemberTarget,
                  (Il2CppObject *)v37,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
              }
              else
              {
                v44 = &v41->obj.klass + v43;
                IsMemberTarget->fields._size = v43 + 1;
                v44[4] = (Il2CppClass *)v37;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v37, v39, v40);
              }
              return;
            }
          }
        }
      }
LABEL_52:
      sub_1B64324(IsMemberTarget);
    }
    goto LABEL_16;
  }
}


int32_t __fastcall EventMemberMargeUpValInfo__GetCount(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_49FBFD7 & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_1B640C8(
                                            &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                            method);
    byte_49FBFD7 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1B64324(this);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventMemberMargeUpValInfo__GetList(
        EventMemberMargeUpValInfo_o *this,
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
  struct EventMemberMargeUpValInfo___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FBFDB & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v5);
    sub_1B640C8(&Method_EventMemberMargeUpValInfo___c__GetList_b__13_0__, v6);
    sub_1B640C8(&EventMemberMargeUpValInfo___c_TypeInfo, v7);
    byte_49FBFDB = 1;
  }
  v8 = EventMemberMargeUpValInfo___c_TypeInfo;
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !EventMemberMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMemberMargeUpValInfo___c_TypeInfo);
    v8 = EventMemberMargeUpValInfo___c_TypeInfo;
  }
  v10 = *(System_Comparison_T__o **)(*((_QWORD *)v8 + 23) + 8LL);
  if ( !v10 )
  {
    if ( !*((_DWORD *)v8 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = EventMemberMargeUpValInfo___c_TypeInfo;
    }
    v11 = (Il2CppObject *)**((_QWORD **)v8 + 23);
    v10 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventMargeItemUpValInfo__TypeInfo, method, v2);
    System_Comparison_object____ctor(v10, v11, Method_EventMemberMargeUpValInfo___c__GetList_b__13_0__, 0LL);
    static_fields = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v10;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)v10, v13, v14);
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
EventMargeItemUpValInfo_o *__fastcall EventMemberMargeUpValInfo__GetMargeItem(
        EventMemberMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *margeList; // x0

  if ( (byte_49FBFD8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__, v5);
    byte_49FBFD8 = 1;
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


bool __fastcall EventMemberMargeUpValInfo__IsEmpry(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_49FBFD6 & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_1B640C8(
                                            &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                            method);
    byte_49FBFD6 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1B64324(this);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FBFDC & 1) == 0 )
  {
    sub_1B640C8(&EventMemberMargeUpValInfo___c_TypeInfo, v1);
    byte_49FBFDC = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventMemberMargeUpValInfo___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventMemberMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventMemberMargeUpValInfo___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventMemberMargeUpValInfo___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return EventMargeItemUpValInfo__CompMemberPriority(a, b, (const MethodInfo *)b);
}