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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_String_o **p_servantName; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_5970369 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_5970369 = 1;
  }
  v11 = isFollower;
  v12 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.margeList, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.member = member;
  this->fields.servantEntity = servantEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantEntity,
    (int32_t)servantEntity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.servantName = servantName;
  p_servantName = &this->fields.servantName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_servantName, (int32_t)servantName, v26, v27, v28, v29, v30, v31);
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
          sub_2213CE4(this);
        EventMemberMargeUpValInfo__Add_48726724(this, dropItemInfoList->m_Items[v6], method);
        LODWORD(max_length) = dropItemInfoList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)max_length );
    }
  }
}


void EventMemberMargeUpValInfo__Add_48726724(
        EventMemberMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  int32_t targetType; // w8
  unsigned int baseFuncType; // w8
  char v7; // w9
  System_Collections_Generic_List_object__o *margeList; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x22
  int32_t rateCount; // w8
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w22
  System_String_o *v19; // x23
  bool v20; // w24
  const MethodInfo *v21; // x6
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8
  _BOOL8 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w22
  System_String_o *v35; // x23
  bool v36; // w24
  EventMargeItemUpValInfo_o *v37; // x21
  const MethodInfo *v38; // x6
  int32_t member; // w22
  System_String_o *servantName; // x23
  bool isFollower; // w24
  const MethodInfo *v42; // x6
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_597036B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_2213A60(&EventMargeItemUpValInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    byte_597036B = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( dropItemInfo )
  {
    targetType = dropItemInfo->fields.targetType;
    if ( targetType <= 3 )
    {
      if ( targetType != 3 && (targetType || this->fields.member != dropItemInfo->fields.member) )
        return;
    }
    else if ( targetType != 14 && targetType != 7 )
    {
      return;
    }
    baseFuncType = dropItemInfo->fields.baseFuncType;
    v7 = baseFuncType - 111;
    if ( baseFuncType - 111 <= 0x15 )
    {
      if ( ((1 << v7) & 0x240001) != 0 )
        goto LABEL_31;
      if ( ((1 << v7) & 0x18) != 0 )
      {
        margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( !margeList )
          goto LABEL_62;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v43,
          margeList,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v44 = v43;
        v43.fields._list = 0;
        *(_QWORD *)&v43.fields._index = &v44;
        while ( 1 )
        {
          v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v44,
                 (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v9 )
            break;
          current = v44.fields._current;
          if ( !v44.fields._current )
            sub_2213CDC(v9, v10);
          if ( LODWORD(v44.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId )
            goto LABEL_19;
        }
LABEL_57:
        sub_200462C(&v43);
        member = this->fields.member;
        servantName = this->fields.servantName;
        isFollower = this->fields.isFollower;
        current = (Il2CppObject *)sub_2213CCC(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor_48722760(
          (EventMargeItemUpValInfo_o *)current,
          member,
          servantName,
          isFollower,
          0,
          dropItemInfo,
          v42);
        margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( !margeList )
          goto LABEL_62;
        margeList = (System_Collections_Generic_List_object__o *)sub_1FFEDA8(
                                                                   margeList,
                                                                   current,
                                                                   Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
        goto LABEL_59;
      }
      if ( baseFuncType == 116 )
      {
        margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
        if ( margeList )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v43,
            margeList,
            (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
          v44 = v43;
          v43.fields._list = 0;
          *(_QWORD *)&v43.fields._index = &v44;
          while ( 1 )
          {
            v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v44,
                    (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
            if ( !v12 )
              break;
            v14 = v44.fields._current;
            if ( !v44.fields._current )
              sub_2213CDC(v12, v13);
            if ( LODWORD(v44.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
              && v44.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
            {
              sub_200462C(&v43);
              rateCount = dropItemInfo->fields.rateCount;
              if ( SLODWORD(v14[6].klass) > rateCount )
                LODWORD(v14[6].klass) = rateCount;
              return;
            }
          }
          sub_200462C(&v43);
          v34 = this->fields.member;
          v35 = this->fields.servantName;
          v36 = this->fields.isFollower;
          v37 = (EventMargeItemUpValInfo_o *)sub_2213CCC(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor_48722760(v37, v34, v35, v36, 0, dropItemInfo, v38);
          if ( v37 )
          {
            v37->fields.rateCount = dropItemInfo->fields.rateCount;
            margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
            if ( margeList )
            {
              sub_1FFEDA8(margeList, v37, Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
              return;
            }
          }
        }
        goto LABEL_62;
      }
    }
    if ( baseFuncType > 0x10 || ((1 << baseFuncType) & 0x10082) == 0 )
    {
      margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
      if ( !margeList )
        goto LABEL_62;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v43,
        margeList,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v44 = v43;
      v43.fields._list = 0;
      *(_QWORD *)&v43.fields._index = &v44;
      while ( 1 )
      {
        v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v44,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v32 )
          break;
        current = v44.fields._current;
        if ( !v44.fields._current )
          sub_2213CDC(v32, v33);
        if ( LODWORD(v44.fields._current[3].monitor) == dropItemInfo->fields.baseFuncId
          && v44.fields._current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
        {
LABEL_19:
          sub_200462C(&v43);
LABEL_60:
          *(int32x2_t *)((char *)&current[5].monitor + 4) = vadd_s32(
                                                              *(int32x2_t *)&dropItemInfo->fields.addCount,
                                                              *(int32x2_t *)((char *)&current[5].monitor + 4));
          return;
        }
      }
      goto LABEL_57;
    }
LABEL_31:
    margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
    if ( !margeList )
      goto LABEL_62;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v44,
      margeList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v43.fields._list = 0;
    *(_QWORD *)&v43.fields._index = &v44;
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v44,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
      if ( !v16 )
        break;
      current = v44.fields._current;
      if ( !v44.fields._current )
        sub_2213CDC(v16, v17);
      if ( *(_DWORD *)((char *)&v44.fields._current->klass + (unsigned __int64)&word_38) == dropItemInfo->fields.baseFuncId )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v44,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        goto LABEL_60;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v44,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    v18 = this->fields.member;
    v19 = this->fields.servantName;
    v20 = this->fields.isFollower;
    current = (Il2CppObject *)sub_2213CCC(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor_48722760((EventMargeItemUpValInfo_o *)current, v18, v19, v20, 0, dropItemInfo, v21);
    margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
    if ( !margeList
      || (items = margeList->fields._items,
          v29 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__,
          ++margeList->fields._version,
          !items) )
    {
LABEL_62:
      sub_2213CDC(margeList, dropItemInfo);
    }
    size = margeList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        margeList,
        current,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &items->obj.klass + size;
      margeList->fields._size = size + 1;
      v31[4] = (Il2CppClass *)current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)current, v22, v23, v24, v25, v26, v27);
    }
LABEL_59:
    if ( current )
      goto LABEL_60;
    goto LABEL_62;
  }
}


EventMargeItemUpValInfo_array *EventMemberMargeUpValInfo__GetList(
        EventMemberMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  void *v3; // x0
  System_Collections_Generic_List_object__o *margeList; // x20
  struct EventMemberMargeUpValInfo___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__10_0; // x21
  Il2CppObject *v7; // x22
  struct EventMemberMargeUpValInfo___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_597036C & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_2213A60(&Method_EventMemberMargeUpValInfo___c__GetList_b__10_0__);
    sub_2213A60(&EventMemberMargeUpValInfo___c_TypeInfo);
    byte_597036C = 1;
  }
  v3 = EventMemberMargeUpValInfo___c_TypeInfo;
  margeList = (System_Collections_Generic_List_object__o *)this->fields.margeList;
  if ( !*(&EventMemberMargeUpValInfo___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMemberMargeUpValInfo___c_TypeInfo, method);
    v3 = EventMemberMargeUpValInfo___c_TypeInfo;
  }
  static_fields = (struct EventMemberMargeUpValInfo___c_StaticFields *)*((_QWORD *)v3 + 23);
  _9__10_0 = (System_Comparison_T__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !*((_DWORD *)v3 + 57) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(_9__10_0, v7, Method_EventMemberMargeUpValInfo___c__GetList_b__10_0__, 0);
    v8 = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
    v8->__9__10_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__10_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__10_0, (int32_t)_9__10_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !margeList
    || (System_Collections_Generic_List_object___Sort_71849708(
          margeList,
          _9__10_0,
          (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v3 = this->fields.margeList) == 0) )
  {
    sub_2213CDC(v3, method);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v3,
                                            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


bool EventMemberMargeUpValInfo__IsEmpty(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_597036A & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_2213A60(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_597036A = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_2213CDC(this, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597036D & 1) == 0 )
  {
    sub_2213A60(&EventMemberMargeUpValInfo___c_TypeInfo);
    byte_597036D = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventMemberMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMemberMargeUpValInfo___c_TypeInfo->static_fields->__9 = (struct EventMemberMargeUpValInfo___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventMemberMargeUpValInfo___c_TypeInfo->static_fields,
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


int32_t EventMemberMargeUpValInfo___c___GetList_b__10_0(
        EventMemberMargeUpValInfo___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_2213CDC(this, 0);
  return EventMargeItemUpValInfo__CompMemberPriority(a, b, (const MethodInfo *)b);
}