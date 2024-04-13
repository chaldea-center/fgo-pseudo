void __fastcall EventMemberMargeUpValInfo___ctor(
        EventMemberMargeUpValInfo_o *this,
        int32_t member,
        ServantEntity_o *servantEntity,
        System_String_o *servantName,
        bool isFollower,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x24
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_String_o **p_servantName; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42E9B50 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__,
      member,
      (_DWORD)servantEntity,
      servantName);
    sub_B5D5C4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v11, v12, v13);
    byte_42E9B50 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.margeList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.member = member;
  this->fields.servantEntity = servantEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)servantEntity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.servantName = servantName;
  p_servantName = &this->fields.servantName;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_servantName,
    (System_Int32_array **)servantName,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  *((_BYTE *)p_servantName + 8) = isFollower;
}


void __fastcall EventMemberMargeUpValInfo__Add(
        EventMemberMargeUpValInfo_o *this,
        EventDropItemUpValInfo_array *dropItemInfoList,
        const MethodInfo *method)
{
  __int64 v3; // x8
  unsigned __int64 v6; // x21
  __int64 v7; // x0

  if ( dropItemInfoList )
  {
    v3 = *(_QWORD *)&dropItemInfoList->max_length;
    if ( (int)v3 >= 1 )
    {
      v6 = 0LL;
      do
      {
        if ( v6 >= (unsigned int)v3 )
        {
          v7 = sub_B5D6C8(this);
          sub_B5D668(v7, 0LL);
        }
        EventMemberMargeUpValInfo__Add_27148952(this, dropItemInfoList->m_Items[v6], method);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t member; // w22
  System_String_o *servantName; // x23
  bool isFollower; // w24
  EventMargeItemUpValInfo_o *v12; // x21
  const MethodInfo *v13; // x6
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x0
  __int64 v15; // x1
  int32_t rateCount; // w10

  if ( (byte_42E9B55 & 1) == 0 )
  {
    sub_B5D5C4(&EventMargeItemUpValInfo_TypeInfo, (_DWORD)dropItemInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v6, v7, v8);
    byte_42E9B55 = 1;
  }
  if ( EventMemberMargeUpValInfo__IsMemberTarget(this, dropItemInfo, method) )
  {
    member = this->fields.member;
    servantName = this->fields.servantName;
    isFollower = this->fields.isFollower;
    v12 = (EventMargeItemUpValInfo_o *)sub_B5D694(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor_27133088(v12, member, servantName, isFollower, 0, dropItemInfo, v13);
    if ( !v12
      || !dropItemInfo
      || (rateCount = v12->fields.rateCount,
          v12->fields.addCount += dropItemInfo->fields.addCount,
          v12->fields.rateCount = dropItemInfo->fields.rateCount + rateCount,
          (margeList = this->fields.margeList) == 0LL) )
    {
      sub_B5D69C(margeList, v15);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)margeList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
  }
}


void __fastcall EventMemberMargeUpValInfo__Add_27148952(
        EventMemberMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *IsMemberTarget; // x0
  __int64 v22; // x1
  unsigned int baseFuncType; // w8
  int v24; // w9
  _BOOL8 v25; // x0
  __int64 v26; // x1
  EventMargeItemUpValInfo_o *current; // x21
  _BOOL8 v28; // x0
  __int64 v29; // x1
  int v30; // w8
  int32_t member; // w22
  System_String_o *servantName; // x23
  bool isFollower; // w24
  const MethodInfo *v34; // x6
  int32_t rateCount; // w10
  int32_t v36; // w8
  _BOOL8 v37; // x0
  __int64 v38; // x1
  _BOOL8 v39; // x0
  __int64 v40; // x1
  int32_t v41; // w22
  System_String_o *v42; // x23
  bool v43; // w24
  EventMargeItemUpValInfo_o *v44; // x21
  const MethodInfo *v45; // x6
  System_Collections_Generic_List_Enumerator_T__o v46[2]; // [xsp+0h] [xbp-90h] BYREF
  int v47; // [xsp+38h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_42E9B54 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__,
      (_DWORD)dropItemInfo,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v9, v10, v11);
    sub_B5D5C4(&EventMargeItemUpValInfo_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__, v18, v19, v20);
    byte_42E9B54 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v47 = 0;
  IsMemberTarget = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)EventMemberMargeUpValInfo__IsMemberTarget(
                                                                                          this,
                                                                                          dropItemInfo,
                                                                                          method);
  if ( ((unsigned __int8)IsMemberTarget & 1) != 0 )
  {
    if ( !dropItemInfo )
      goto LABEL_66;
    baseFuncType = dropItemInfo->fields.baseFuncType;
    if ( baseFuncType - 111 <= 0x15 )
    {
      v24 = 1 << (baseFuncType - 111);
      if ( (v24 & 0x240001) != 0 )
        goto LABEL_16;
      if ( (v24 & 0x18) != 0 )
      {
        IsMemberTarget = this->fields.margeList;
        if ( !IsMemberTarget )
          goto LABEL_66;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v46,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsMemberTarget,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v48 = v46[0];
        while ( 1 )
        {
          v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v48,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v25 )
            break;
          current = (EventMargeItemUpValInfo_o *)v48.fields.current;
          if ( !v48.fields.current )
            sub_B5D69C(v25, v26);
          if ( LODWORD(v48.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
            goto LABEL_27;
        }
        current = 0LL;
LABEL_27:
        *((_DWORD *)&v46[1].fields.list + v47++) = 317;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v48,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        if ( !v47 )
          goto LABEL_30;
        v30 = v47 - 1;
        if ( *((_DWORD *)&v46[0].fields.current + v47 + 1) != 317 )
          goto LABEL_30;
        goto LABEL_29;
      }
    }
    if ( baseFuncType <= 0x10 && ((1 << baseFuncType) & 0x10082) != 0 )
    {
LABEL_16:
      IsMemberTarget = this->fields.margeList;
      if ( !IsMemberTarget )
        goto LABEL_66;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v46,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsMemberTarget,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v48 = v46[0];
      while ( 1 )
      {
        v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v48,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v28 )
          break;
        current = (EventMargeItemUpValInfo_o *)v48.fields.current;
        if ( !v48.fields.current )
          sub_B5D69C(v28, v29);
        if ( LODWORD(v48.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
          goto LABEL_23;
      }
      current = 0LL;
LABEL_23:
      *((_DWORD *)&v46[1].fields.list + v47++) = 144;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v48,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( !v47 )
        goto LABEL_30;
      v30 = v47 - 1;
      if ( *((_DWORD *)&v46[0].fields.current + v47 + 1) != 144 )
        goto LABEL_30;
      goto LABEL_29;
    }
    IsMemberTarget = this->fields.margeList;
    if ( !IsMemberTarget )
      goto LABEL_66;
    if ( baseFuncType != 116 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v46,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsMemberTarget,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v48 = v46[0];
      while ( 1 )
      {
        v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v48,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v39 )
          break;
        current = (EventMargeItemUpValInfo_o *)v48.fields.current;
        if ( !v48.fields.current )
          sub_B5D69C(v39, v40);
        if ( LODWORD(v48.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
          && v48.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
        {
          goto LABEL_58;
        }
      }
      current = 0LL;
LABEL_58:
      *((_DWORD *)&v46[1].fields.list + v47++) = 674;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v48,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( !v47 || (v30 = v47 - 1, *((_DWORD *)&v46[0].fields.current + v47 + 1) != 674) )
      {
LABEL_30:
        if ( current
          || (member = this->fields.member,
              servantName = this->fields.servantName,
              isFollower = this->fields.isFollower,
              current = (EventMargeItemUpValInfo_o *)sub_B5D694(EventMargeItemUpValInfo_TypeInfo),
              EventMargeItemUpValInfo___ctor_27133088(current, member, servantName, isFollower, 0, dropItemInfo, v34),
              (IsMemberTarget = this->fields.margeList) != 0LL)
          && (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)IsMemberTarget,
                (EventMissionProgressRequest_Argument_ProgressData_o *)current,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__),
              current) )
        {
          rateCount = current->fields.rateCount;
          current->fields.addCount += dropItemInfo->fields.addCount;
          v36 = dropItemInfo->fields.rateCount + rateCount;
LABEL_34:
          current->fields.rateCount = v36;
          return;
        }
LABEL_66:
        sub_B5D69C(IsMemberTarget, v22);
      }
LABEL_29:
      v47 = v30;
      goto LABEL_30;
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      v46,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsMemberTarget,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v48 = v46[0];
    while ( 1 )
    {
      v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v48,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
      if ( !v37 )
        break;
      current = (EventMargeItemUpValInfo_o *)v48.fields.current;
      if ( !v48.fields.current )
        sub_B5D69C(v37, v38);
      if ( LODWORD(v48.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
        && v48.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
      {
        goto LABEL_51;
      }
    }
    current = 0LL;
LABEL_51:
    *((_DWORD *)&v46[1].fields.list + v47++) = 497;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v48,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    if ( v47 && *((_DWORD *)&v46[0].fields.current + v47 + 1) == 497 )
      --v47;
    if ( !current )
    {
      v41 = this->fields.member;
      v42 = this->fields.servantName;
      v43 = this->fields.isFollower;
      v44 = (EventMargeItemUpValInfo_o *)sub_B5D694(EventMargeItemUpValInfo_TypeInfo);
      EventMargeItemUpValInfo___ctor_27133088(v44, v41, v42, v43, 0, dropItemInfo, v45);
      if ( v44 )
      {
        v44->fields.rateCount = dropItemInfo->fields.rateCount;
        IsMemberTarget = this->fields.margeList;
        if ( IsMemberTarget )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)IsMemberTarget,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
          return;
        }
      }
      goto LABEL_66;
    }
    v36 = dropItemInfo->fields.rateCount;
    if ( current->fields.rateCount > v36 )
      goto LABEL_34;
  }
}


int32_t __fastcall EventMemberMargeUpValInfo__GetCount(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventMemberMargeUpValInfo_o *v4; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v4 = this;
  if ( (byte_42E9B52 & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_B5D5C4(
                                            &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                            (_DWORD)method,
                                            v2,
                                            v3);
    byte_42E9B52 = 1;
  }
  margeList = v4->fields.margeList;
  if ( !margeList )
    sub_B5D69C(this, method);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventMemberMargeUpValInfo__GetList(
        EventMemberMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  void *v21; // x0
  struct EventMemberMargeUpValInfo___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__13_0; // x21
  Il2CppObject *v24; // x22
  struct EventMemberMargeUpValInfo___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42E9B56 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_EventMemberMargeUpValInfo___c__GetList_b__13_0__, v14, v15, v16);
    sub_B5D5C4(&EventMemberMargeUpValInfo___c_TypeInfo, v17, v18, v19);
    byte_42E9B56 = 1;
  }
  margeList = this->fields.margeList;
  v21 = EventMemberMargeUpValInfo___c_TypeInfo;
  if ( (BYTE3(EventMemberMargeUpValInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMemberMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMemberMargeUpValInfo___c_TypeInfo);
    v21 = EventMemberMargeUpValInfo___c_TypeInfo;
  }
  static_fields = (struct EventMemberMargeUpValInfo___c_StaticFields *)*((_QWORD *)v21 + 23);
  _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (*((_BYTE *)v21 + 307) & 4) != 0 && !*((_DWORD *)v21 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__13_0,
      v24,
      Method_EventMemberMargeUpValInfo___c__GetList_b__13_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v25 = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
    v25->__9__13_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__13_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !margeList
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)margeList,
          (System_Comparison_T__o *)_9__13_0,
          (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v21 = this->fields.margeList) == 0LL) )
  {
    sub_B5D69C(v21, method);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMargeItemUpValInfo_o *__fastcall EventMemberMargeUpValInfo__GetMargeItem(
        EventMemberMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventMemberMargeUpValInfo_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  int32_t size; // w8

  v5 = this;
  if ( (byte_42E9B53 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, index, (_DWORD)method, v3);
    this = (EventMemberMargeUpValInfo_o *)sub_B5D5C4(
                                            &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__,
                                            v6,
                                            v7,
                                            v8);
    byte_42E9B53 = 1;
  }
  margeList = v5->fields.margeList;
  if ( !margeList )
    sub_B5D69C(this, *(_QWORD *)&index);
  size = margeList->fields._size;
  if ( size <= index )
    return 0LL;
  if ( size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return margeList->fields._items->m_Items[index];
}


bool __fastcall EventMemberMargeUpValInfo__IsEmpry(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventMemberMargeUpValInfo_o *v4; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v4 = this;
  if ( (byte_42E9B51 & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_B5D5C4(
                                            &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                            (_DWORD)method,
                                            v2,
                                            v3);
    byte_42E9B51 = 1;
  }
  margeList = v4->fields.margeList;
  if ( !margeList )
    sub_B5D69C(this, method);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventMemberMargeUpValInfo___c_StaticFields *static_fields; // x0

  if ( (byte_42E655A & 1) == 0 )
  {
    sub_B5D5C4(&EventMemberMargeUpValInfo___c_TypeInfo, v1, v2, v3);
    byte_42E655A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventMemberMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMemberMargeUpValInfo___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return EventMargeItemUpValInfo__CompMemberPriority(a, b, 0LL);
}