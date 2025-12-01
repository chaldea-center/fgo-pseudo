void EventMemberMargeUpValInfo___ctor(
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
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct System_String_o **p_servantName; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4CC6F24 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4CC6F24 = 1;
  }
  v11 = isFollower;
  v12 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v12;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.margeList, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.member = member;
  this->fields.servantEntity = servantEntity;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.servantEntity,
    (int32_t)servantEntity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.servantName = servantName;
  p_servantName = &this->fields.servantName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_servantName, (int32_t)servantName, v26, v27, v28, v29, v30, v31);
  *((_BYTE *)p_servantName + 8) = v11;
}


void EventMemberMargeUpValInfo__Add(
        EventMemberMargeUpValInfo_o *this,
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
          sub_1C71610(this);
        EventMemberMargeUpValInfo__Add_41999620(this, dropItemInfoList->m_Items[v6], method);
        LODWORD(max_length) = dropItemInfoList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)max_length );
    }
  }
}


void EventMemberMargeUpValInfo__AddCampaignFriendshipUpVal(
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
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x8

  if ( (byte_4CC6F29 & 1) == 0 )
  {
    sub_1C713B0(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    byte_4CC6F29 = 1;
  }
  if ( EventMemberMargeUpValInfo__IsMemberTarget(this, dropItemInfo, method) )
  {
    member = this->fields.member;
    servantName = this->fields.servantName;
    isFollower = this->fields.isFollower;
    v8 = sub_1C715FC(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor_41995440(
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
          (margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList) == 0)
      || (items = margeList->fields._items,
          v19 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__,
          ++margeList->fields._version,
          !items) )
    {
      sub_1C71608(margeList, v11);
    }
    size = margeList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        margeList,
        (Il2CppObject *)v8,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      margeList->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v8;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v21 + 4), v8, v12, v13, v14, v15, v16, v17);
    }
  }
}


void EventMemberMargeUpValInfo__Add_41999620(
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
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8
  int32_t v34; // w22
  System_String_o *v35; // x23
  bool v36; // w24
  EventMargeItemUpValInfo_o *v37; // x21
  const MethodInfo *v38; // x6
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x8
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CC6F28 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_1C713B0(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    byte_4CC6F28 = 1;
  }
  memset(&v50, 0, sizeof(v50));
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v49,
          IsMemberTarget,
          (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v50 = v49;
        while ( 1 )
        {
          v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v50,
                  (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v12 )
            goto LABEL_37;
          current = v50.fields._current;
          if ( !v50.fields._current )
            sub_1C71608(v12, v13);
          if ( LODWORD(v50.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            goto LABEL_21;
        }
      }
      if ( (v8 & 0x18) != 0 )
      {
        IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( !IsMemberTarget )
          goto LABEL_52;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v49,
          IsMemberTarget,
          (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v50 = v49;
        while ( 1 )
        {
          v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v50,
                 (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v9 )
            break;
          current = v50.fields._current;
          if ( !v50.fields._current )
            sub_1C71608(v9, v10);
          if ( LODWORD(v50.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            goto LABEL_21;
        }
LABEL_37:
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v50,
          (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        member = this->fields.member;
        servantName = this->fields.servantName;
        isFollower = this->fields.isFollower;
        current = (Il2CppObject *)sub_1C715FC(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor_41995440(
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
          v31 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++IsMemberTarget->fields._version;
          if ( items )
          {
            size = IsMemberTarget->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                IsMemberTarget,
                current,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              IsMemberTarget->fields._size = size + 1;
              v33[4] = (Il2CppClass *)current;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)current, v24, v25, v26, v27, v28, v29);
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
            (System_Collections_Generic_List_Enumerator_T__o *)&v49,
            IsMemberTarget,
            (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v50 = v49;
          do
          {
            v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v50,
                    (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v18 )
              goto LABEL_37;
            current = v50.fields._current;
            if ( !v50.fields._current )
              sub_1C71608(v18, v19);
          }
          while ( LODWORD(v50.fields._current[3].monitor) != dropItemInfo->fields.baseFuncId
               || v50.fields._current[5].klass != (Il2CppClass *)dropItemInfo->fields.itemEntity );
LABEL_21:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v50,
            (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
LABEL_43:
          *(int32x2_t *)((char *)&current[5].monitor + 4) = vadd_s32(
                                                              *(int32x2_t *)&dropItemInfo->fields.addCount,
                                                              *(int32x2_t *)((char *)&current[5].monitor + 4));
          return;
        }
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v49,
          IsMemberTarget,
          (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v50 = v49;
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v50,
                  (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v14 )
            break;
          v16 = v50.fields._current;
          if ( !v50.fields._current )
            sub_1C71608(v14, v15);
          if ( LODWORD(v50.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
            && v50.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
          {
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v50,
              (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
            rateCount = dropItemInfo->fields.rateCount;
            if ( SLODWORD(v16[6].klass) > rateCount )
              LODWORD(v16[6].klass) = rateCount;
            return;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v50,
          (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        v34 = this->fields.member;
        v35 = this->fields.servantName;
        v36 = this->fields.isFollower;
        v37 = (EventMargeItemUpValInfo_o *)sub_1C715FC(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor_41995440(v37, v34, v35, v36, 0, dropItemInfo, v38);
        if ( v37 )
        {
          v37->fields.rateCount = dropItemInfo->fields.rateCount;
          IsMemberTarget = (System_Collections_Generic_List_object__o *)this->fields.margeList;
          if ( IsMemberTarget )
          {
            v45 = IsMemberTarget->fields._items;
            v46 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++IsMemberTarget->fields._version;
            if ( v45 )
            {
              v47 = IsMemberTarget->fields._size;
              if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  IsMemberTarget,
                  (Il2CppObject *)v37,
                  *(const MethodInfo_3810718 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
              }
              else
              {
                v48 = &v45->obj.klass + v47;
                IsMemberTarget->fields._size = v47 + 1;
                v48[4] = (Il2CppClass *)v37;
                sub_1C71354((GrandQuestFolderBoardItem_o *)(v48 + 4), (int32_t)v37, v39, v40, v41, v42, v43, v44);
              }
              return;
            }
          }
        }
      }
LABEL_52:
      sub_1C71608(IsMemberTarget, v6);
    }
    goto LABEL_16;
  }
}


int32_t EventMemberMargeUpValInfo__GetCount(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4CC6F26 & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4CC6F26 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1C71608(this, method);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *EventMemberMargeUpValInfo__GetList(
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
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CC6F2A & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C713B0(&Method_EventMemberMargeUpValInfo___c__GetList_b__13_0__);
    sub_1C713B0(&EventMemberMargeUpValInfo___c_TypeInfo);
    byte_4CC6F2A = 1;
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
    v5 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(v5, v6, Method_EventMemberMargeUpValInfo___c__GetList_b__13_0__, 0);
    static_fields = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v5;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__13_0, (int32_t)v5, v8, v9, v10, v11, v12, v13);
  }
  if ( !margeList
    || (System_Collections_Generic_List_object___Sort_58794460(
          margeList,
          v5,
          (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v3 = this->fields.margeList) == 0) )
  {
    sub_1C71608(v3, method);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v3,
                                            (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMargeItemUpValInfo_o *EventMemberMargeUpValInfo__GetMargeItem(
        EventMemberMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *margeList; // x0

  if ( (byte_4CC6F27 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
    byte_4CC6F27 = 1;
  }
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !margeList )
    sub_1C71608(0, *(_QWORD *)&index);
  if ( margeList->fields._size <= index )
    return 0;
  else
    return (EventMargeItemUpValInfo_o *)System_Collections_Generic_List_object___get_Item(
                                          margeList,
                                          index,
                                          (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
}


bool EventMemberMargeUpValInfo__IsEmpty(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4CC6F25 & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_1C713B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4CC6F25 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_1C71608(this, method);
  return margeList->fields._size < 1;
}


bool EventMemberMargeUpValInfo__IsMemberTarget(
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


void EventMemberMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC6F2B & 1) == 0 )
  {
    sub_1C713B0(&EventMemberMargeUpValInfo___c_TypeInfo);
    byte_4CC6F2B = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(EventMemberMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMemberMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventMemberMargeUpValInfo___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)EventMemberMargeUpValInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventMemberMargeUpValInfo___c___ctor(EventMemberMargeUpValInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventMemberMargeUpValInfo___c___GetList_b__13_0(
        EventMemberMargeUpValInfo___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C71608(this, 0);
  return EventMargeItemUpValInfo__CompMemberPriority(a, b, (const MethodInfo *)b);
}