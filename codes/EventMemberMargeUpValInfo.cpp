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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x24
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_String_o **p_servantName; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_4215A43 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, *(_QWORD *)&member);
    sub_B0D8A4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v11);
    byte_4215A43 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                  *(_QWORD *)&member,
                                                                                                  servantEntity);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v12;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.margeList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.member = member;
  this->fields.servantEntity = servantEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)servantEntity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.servantName = servantName;
  p_servantName = &this->fields.servantName;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_servantName,
    (System_Int32_array **)servantName,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
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
          v7 = sub_B0D9A8(this);
          sub_B0D948(v7, 0LL);
        }
        EventMemberMargeUpValInfo__Add_26639624(this, dropItemInfoList->m_Items[v6], method);
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
  EventMargeItemUpValInfo_o *v11; // x21
  const MethodInfo *v12; // x6
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x0
  int32_t rateCount; // w10

  if ( (byte_4215A48 & 1) == 0 )
  {
    sub_B0D8A4(&EventMargeItemUpValInfo_TypeInfo, dropItemInfo);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v5);
    byte_4215A48 = 1;
  }
  if ( EventMemberMargeUpValInfo__IsMemberTarget(this, dropItemInfo, method) )
  {
    member = this->fields.member;
    servantName = this->fields.servantName;
    isFollower = this->fields.isFollower;
    v11 = (EventMargeItemUpValInfo_o *)sub_B0D974(EventMargeItemUpValInfo_TypeInfo, v6, v7);
    EventMargeItemUpValInfo___ctor_26623760(v11, member, servantName, isFollower, 0, dropItemInfo, v12);
    if ( !v11
      || !dropItemInfo
      || (rateCount = v11->fields.rateCount,
          v11->fields.addCount += dropItemInfo->fields.addCount,
          v11->fields.rateCount = dropItemInfo->fields.rateCount + rateCount,
          (margeList = this->fields.margeList) == 0LL) )
    {
      sub_B0D97C(margeList);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)margeList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
  }
}


void __fastcall EventMemberMargeUpValInfo__Add_26639624(
        EventMemberMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *IsMemberTarget; // x0
  unsigned int baseFuncType; // w8
  int v12; // w9
  _BOOL8 v13; // x0
  EventMargeItemUpValInfo_o *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  int v18; // w8
  int32_t member; // w22
  System_String_o *servantName; // x23
  bool isFollower; // w24
  const MethodInfo *v22; // x6
  int32_t rateCount; // w10
  int32_t v24; // w8
  _BOOL8 v25; // x0
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  int32_t v29; // w22
  System_String_o *v30; // x23
  bool v31; // w24
  EventMargeItemUpValInfo_o *v32; // x21
  const MethodInfo *v33; // x6
  System_Collections_Generic_List_Enumerator_T__o v34[2]; // [xsp+0h] [xbp-90h] BYREF
  int v35; // [xsp+38h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4215A47 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__, dropItemInfo);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v6);
    sub_B0D8A4(&EventMargeItemUpValInfo_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__, v9);
    byte_4215A47 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v35 = 0;
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
      v12 = 1 << (baseFuncType - 111);
      if ( (v12 & 0x240001) != 0 )
        goto LABEL_16;
      if ( (v12 & 0x18) != 0 )
      {
        IsMemberTarget = this->fields.margeList;
        if ( !IsMemberTarget )
          goto LABEL_66;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v34,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsMemberTarget,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v36 = v34[0];
        while ( 1 )
        {
          v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v36,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v13 )
            break;
          current = (EventMargeItemUpValInfo_o *)v36.fields.current;
          if ( !v36.fields.current )
            sub_B0D97C(v13);
          if ( LODWORD(v36.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
            goto LABEL_27;
        }
        current = 0LL;
LABEL_27:
        *((_DWORD *)&v34[1].fields.list + v35++) = 317;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v36,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        if ( !v35 )
          goto LABEL_30;
        v18 = v35 - 1;
        if ( *((_DWORD *)&v34[0].fields.current + v35 + 1) != 317 )
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
        v34,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsMemberTarget,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v36 = v34[0];
      while ( 1 )
      {
        v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v36,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v15 )
          break;
        current = (EventMargeItemUpValInfo_o *)v36.fields.current;
        if ( !v36.fields.current )
          sub_B0D97C(v15);
        if ( LODWORD(v36.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
          goto LABEL_23;
      }
      current = 0LL;
LABEL_23:
      *((_DWORD *)&v34[1].fields.list + v35++) = 144;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v36,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( !v35 )
        goto LABEL_30;
      v18 = v35 - 1;
      if ( *((_DWORD *)&v34[0].fields.current + v35 + 1) != 144 )
        goto LABEL_30;
      goto LABEL_29;
    }
    IsMemberTarget = this->fields.margeList;
    if ( !IsMemberTarget )
      goto LABEL_66;
    if ( baseFuncType != 116 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v34,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsMemberTarget,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v36 = v34[0];
      while ( 1 )
      {
        v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v36,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v26 )
          break;
        current = (EventMargeItemUpValInfo_o *)v36.fields.current;
        if ( !v36.fields.current )
          sub_B0D97C(v26);
        if ( LODWORD(v36.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
          && v36.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
        {
          goto LABEL_58;
        }
      }
      current = 0LL;
LABEL_58:
      *((_DWORD *)&v34[1].fields.list + v35++) = 674;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v36,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( !v35 || (v18 = v35 - 1, *((_DWORD *)&v34[0].fields.current + v35 + 1) != 674) )
      {
LABEL_30:
        if ( current
          || (member = this->fields.member,
              servantName = this->fields.servantName,
              isFollower = this->fields.isFollower,
              current = (EventMargeItemUpValInfo_o *)sub_B0D974(EventMargeItemUpValInfo_TypeInfo, v16, v17),
              EventMargeItemUpValInfo___ctor_26623760(current, member, servantName, isFollower, 0, dropItemInfo, v22),
              (IsMemberTarget = this->fields.margeList) != 0LL)
          && (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)IsMemberTarget,
                (EventMissionProgressRequest_Argument_ProgressData_o *)current,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__),
              current) )
        {
          rateCount = current->fields.rateCount;
          current->fields.addCount += dropItemInfo->fields.addCount;
          v24 = dropItemInfo->fields.rateCount + rateCount;
LABEL_34:
          current->fields.rateCount = v24;
          return;
        }
LABEL_66:
        sub_B0D97C(IsMemberTarget);
      }
LABEL_29:
      v35 = v18;
      goto LABEL_30;
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      v34,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsMemberTarget,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v36 = v34[0];
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
      if ( !v25 )
        break;
      current = (EventMargeItemUpValInfo_o *)v36.fields.current;
      if ( !v36.fields.current )
        sub_B0D97C(v25);
      if ( LODWORD(v36.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
        && v36.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
      {
        goto LABEL_51;
      }
    }
    current = 0LL;
LABEL_51:
    *((_DWORD *)&v34[1].fields.list + v35++) = 497;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    if ( v35 && *((_DWORD *)&v34[0].fields.current + v35 + 1) == 497 )
      --v35;
    if ( !current )
    {
      v29 = this->fields.member;
      v30 = this->fields.servantName;
      v31 = this->fields.isFollower;
      v32 = (EventMargeItemUpValInfo_o *)sub_B0D974(EventMargeItemUpValInfo_TypeInfo, v27, v28);
      EventMargeItemUpValInfo___ctor_26623760(v32, v29, v30, v31, 0, dropItemInfo, v33);
      if ( v32 )
      {
        v32->fields.rateCount = dropItemInfo->fields.rateCount;
        IsMemberTarget = this->fields.margeList;
        if ( IsMemberTarget )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)IsMemberTarget,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
          return;
        }
      }
      goto LABEL_66;
    }
    v24 = dropItemInfo->fields.rateCount;
    if ( current->fields.rateCount > v24 )
      goto LABEL_34;
  }
}


int32_t __fastcall EventMemberMargeUpValInfo__GetCount(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4215A45 & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_B0D8A4(
                                            &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                            method);
    byte_4215A45 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_B0D97C(this);
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
  __int64 v8; // x1
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  void *v10; // x0
  struct EventMemberMargeUpValInfo___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__13_0; // x21
  Il2CppObject *v13; // x22
  struct EventMemberMargeUpValInfo___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4215A49 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__, method);
    sub_B0D8A4(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v6);
    sub_B0D8A4(&Method_EventMemberMargeUpValInfo___c__GetList_b__13_0__, v7);
    sub_B0D8A4(&EventMemberMargeUpValInfo___c_TypeInfo, v8);
    byte_4215A49 = 1;
  }
  margeList = this->fields.margeList;
  v10 = EventMemberMargeUpValInfo___c_TypeInfo;
  if ( (BYTE3(EventMemberMargeUpValInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMemberMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMemberMargeUpValInfo___c_TypeInfo);
    v10 = EventMemberMargeUpValInfo___c_TypeInfo;
  }
  static_fields = (struct EventMemberMargeUpValInfo___c_StaticFields *)*((_QWORD *)v10 + 23);
  _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (*((_BYTE *)v10 + 307) & 4) != 0 && !*((_DWORD *)v10 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_EventMargeItemUpValInfo__TypeInfo,
                                                                           method,
                                                                           v2);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__13_0,
      v13,
      Method_EventMemberMargeUpValInfo___c__GetList_b__13_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v14 = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
    v14->__9__13_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__13_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !margeList
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)margeList,
          (System_Comparison_T__o *)_9__13_0,
          (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v10 = this->fields.margeList) == 0LL) )
  {
    sub_B0D97C(v10);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMargeItemUpValInfo_o *__fastcall EventMemberMargeUpValInfo__GetMargeItem(
        EventMemberMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v4; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  int32_t size; // w8

  v4 = this;
  if ( (byte_4215A46 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, *(_QWORD *)&index);
    this = (EventMemberMargeUpValInfo_o *)sub_B0D8A4(
                                            &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__,
                                            v5);
    byte_4215A46 = 1;
  }
  margeList = v4->fields.margeList;
  if ( !margeList )
    sub_B0D97C(this);
  size = margeList->fields._size;
  if ( size <= index )
    return 0LL;
  if ( size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  return margeList->fields._items->m_Items[index];
}


bool __fastcall EventMemberMargeUpValInfo__IsEmpry(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4215A44 & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_B0D8A4(
                                            &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                            method);
    byte_4215A44 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_B0D97C(this);
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
  struct EventMemberMargeUpValInfo___c_StaticFields *static_fields; // x0

  if ( (byte_4211B85 & 1) == 0 )
  {
    sub_B0D8A4(&EventMemberMargeUpValInfo___c_TypeInfo, v1);
    byte_4211B85 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventMemberMargeUpValInfo___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMemberMargeUpValInfo___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return EventMargeItemUpValInfo__CompMemberPriority(a, b, 0LL);
}