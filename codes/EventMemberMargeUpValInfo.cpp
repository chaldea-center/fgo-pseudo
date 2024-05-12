void __fastcall EventMemberMargeUpValInfo___ctor(
        EventMemberMargeUpValInfo_o *this,
        int32_t member,
        ServantEntity_o *servantEntity,
        System_String_o *servantName,
        bool isFollower,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x24
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_String_o **p_servantName; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_438C6AC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_438C6AC = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.margeList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.member = member;
  this->fields.servantEntity = servantEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.servantEntity,
    (System_Int32_array **)servantEntity,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.servantName = servantName;
  p_servantName = &this->fields.servantName;
  sub_B77560(
    (BattleServantConfConponent_o *)p_servantName,
    (System_Int32_array **)servantName,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
          v7 = sub_B776C8(this);
          sub_B77668(v7, 0LL);
        }
        EventMemberMargeUpValInfo__Add_27746364(this, dropItemInfoList->m_Items[v6], method);
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
  EventMargeItemUpValInfo_o *v8; // x21
  const MethodInfo *v9; // x6
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x0
  __int64 v11; // x1
  int32_t rateCount; // w10

  if ( (byte_438C6B1 & 1) == 0 )
  {
    sub_B775C4(&EventMargeItemUpValInfo_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    byte_438C6B1 = 1;
  }
  if ( EventMemberMargeUpValInfo__IsMemberTarget(this, dropItemInfo, method) )
  {
    member = this->fields.member;
    servantName = this->fields.servantName;
    isFollower = this->fields.isFollower;
    v8 = (EventMargeItemUpValInfo_o *)sub_B77694(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor_27730332(v8, member, servantName, isFollower, 0, dropItemInfo, v9);
    if ( !v8
      || !dropItemInfo
      || (rateCount = v8->fields.rateCount,
          v8->fields.addCount += dropItemInfo->fields.addCount,
          v8->fields.rateCount = dropItemInfo->fields.rateCount + rateCount,
          (margeList = this->fields.margeList) == 0LL) )
    {
      sub_B7769C(margeList, v11);
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)margeList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
  }
}


void __fastcall EventMemberMargeUpValInfo__Add_27746364(
        EventMemberMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *IsMemberTarget; // x0
  __int64 v6; // x1
  unsigned int baseFuncType; // w8
  int v8; // w9
  _BOOL8 v9; // x0
  __int64 v10; // x1
  EventMargeItemUpValInfo_o *current; // x21
  _BOOL8 v12; // x0
  __int64 v13; // x1
  int v14; // w8
  int32_t member; // w22
  System_String_o *servantName; // x23
  bool isFollower; // w24
  const MethodInfo *v18; // x6
  int32_t rateCount; // w10
  int32_t v20; // w8
  _BOOL8 v21; // x0
  __int64 v22; // x1
  _BOOL8 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w22
  System_String_o *v26; // x23
  bool v27; // w24
  EventMargeItemUpValInfo_o *v28; // x21
  const MethodInfo *v29; // x6
  System_Collections_Generic_List_Enumerator_T__o v30[2]; // [xsp+0h] [xbp-90h] BYREF
  int v31; // [xsp+38h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_438C6B0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_B775C4(&EventMargeItemUpValInfo_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    byte_438C6B0 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v31 = 0;
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
      v8 = 1 << (baseFuncType - 111);
      if ( (v8 & 0x240001) != 0 )
        goto LABEL_16;
      if ( (v8 & 0x18) != 0 )
      {
        IsMemberTarget = this->fields.margeList;
        if ( !IsMemberTarget )
          goto LABEL_66;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v30,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsMemberTarget,
          (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v32 = v30[0];
        while ( 1 )
        {
          v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v32,
                 (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v9 )
            break;
          current = (EventMargeItemUpValInfo_o *)v32.fields.current;
          if ( !v32.fields.current )
            sub_B7769C(v9, v10);
          if ( LODWORD(v32.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
            goto LABEL_27;
        }
        current = 0LL;
LABEL_27:
        *((_DWORD *)&v30[1].fields.list + v31++) = 317;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v32,
          (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        if ( !v31 )
          goto LABEL_30;
        v14 = v31 - 1;
        if ( *((_DWORD *)&v30[0].fields.current + v31 + 1) != 317 )
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
        v30,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsMemberTarget,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v32 = v30[0];
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v32,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v12 )
          break;
        current = (EventMargeItemUpValInfo_o *)v32.fields.current;
        if ( !v32.fields.current )
          sub_B7769C(v12, v13);
        if ( LODWORD(v32.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
          goto LABEL_23;
      }
      current = 0LL;
LABEL_23:
      *((_DWORD *)&v30[1].fields.list + v31++) = 144;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v32,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( !v31 )
        goto LABEL_30;
      v14 = v31 - 1;
      if ( *((_DWORD *)&v30[0].fields.current + v31 + 1) != 144 )
        goto LABEL_30;
      goto LABEL_29;
    }
    IsMemberTarget = this->fields.margeList;
    if ( !IsMemberTarget )
      goto LABEL_66;
    if ( baseFuncType != 116 )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v30,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsMemberTarget,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v32 = v30[0];
      while ( 1 )
      {
        v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v32,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v23 )
          break;
        current = (EventMargeItemUpValInfo_o *)v32.fields.current;
        if ( !v32.fields.current )
          sub_B7769C(v23, v24);
        if ( LODWORD(v32.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
          && v32.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
        {
          goto LABEL_58;
        }
      }
      current = 0LL;
LABEL_58:
      *((_DWORD *)&v30[1].fields.list + v31++) = 674;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v32,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( !v31 || (v14 = v31 - 1, *((_DWORD *)&v30[0].fields.current + v31 + 1) != 674) )
      {
LABEL_30:
        if ( current
          || (member = this->fields.member,
              servantName = this->fields.servantName,
              isFollower = this->fields.isFollower,
              current = (EventMargeItemUpValInfo_o *)sub_B77694(EventMargeItemUpValInfo_TypeInfo),
              EventMargeItemUpValInfo___ctor_27730332(current, member, servantName, isFollower, 0, dropItemInfo, v18),
              (IsMemberTarget = this->fields.margeList) != 0LL)
          && (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)IsMemberTarget,
                (EventMissionProgressRequest_Argument_ProgressData_o *)current,
                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__),
              current) )
        {
          rateCount = current->fields.rateCount;
          current->fields.addCount += dropItemInfo->fields.addCount;
          v20 = dropItemInfo->fields.rateCount + rateCount;
LABEL_34:
          current->fields.rateCount = v20;
          return;
        }
LABEL_66:
        sub_B7769C(IsMemberTarget, v6);
      }
LABEL_29:
      v31 = v14;
      goto LABEL_30;
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      v30,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsMemberTarget,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v32 = v30[0];
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v32,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
      if ( !v21 )
        break;
      current = (EventMargeItemUpValInfo_o *)v32.fields.current;
      if ( !v32.fields.current )
        sub_B7769C(v21, v22);
      if ( LODWORD(v32.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
        && v32.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
      {
        goto LABEL_51;
      }
    }
    current = 0LL;
LABEL_51:
    *((_DWORD *)&v30[1].fields.list + v31++) = 497;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v32,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    if ( v31 && *((_DWORD *)&v30[0].fields.current + v31 + 1) == 497 )
      --v31;
    if ( !current )
    {
      v25 = this->fields.member;
      v26 = this->fields.servantName;
      v27 = this->fields.isFollower;
      v28 = (EventMargeItemUpValInfo_o *)sub_B77694(EventMargeItemUpValInfo_TypeInfo);
      EventMargeItemUpValInfo___ctor_27730332(v28, v25, v26, v27, 0, dropItemInfo, v29);
      if ( v28 )
      {
        v28->fields.rateCount = dropItemInfo->fields.rateCount;
        IsMemberTarget = this->fields.margeList;
        if ( IsMemberTarget )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)IsMemberTarget,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
          return;
        }
      }
      goto LABEL_66;
    }
    v20 = dropItemInfo->fields.rateCount;
    if ( current->fields.rateCount > v20 )
      goto LABEL_34;
  }
}


int32_t __fastcall EventMemberMargeUpValInfo__GetCount(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_438C6AE & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_438C6AE = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_B7769C(this, method);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventMemberMargeUpValInfo__GetList(
        EventMemberMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  void *v4; // x0
  struct EventMemberMargeUpValInfo___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__13_0; // x21
  Il2CppObject *v7; // x22
  struct EventMemberMargeUpValInfo___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_438C6B2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    sub_B775C4(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_B775C4(&Method_EventMemberMargeUpValInfo___c__GetList_b__13_0__);
    sub_B775C4(&EventMemberMargeUpValInfo___c_TypeInfo);
    byte_438C6B2 = 1;
  }
  margeList = this->fields.margeList;
  v4 = EventMemberMargeUpValInfo___c_TypeInfo;
  if ( (BYTE3(EventMemberMargeUpValInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMemberMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMemberMargeUpValInfo___c_TypeInfo);
    v4 = EventMemberMargeUpValInfo___c_TypeInfo;
  }
  static_fields = (struct EventMemberMargeUpValInfo___c_StaticFields *)*((_QWORD *)v4 + 23);
  _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (*((_BYTE *)v4 + 307) & 4) != 0 && !*((_DWORD *)v4 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__13_0,
      v7,
      Method_EventMemberMargeUpValInfo___c__GetList_b__13_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v8 = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
    v8->__9__13_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__13_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !margeList
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)margeList,
          (System_Comparison_T__o *)_9__13_0,
          (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v4 = this->fields.margeList) == 0LL) )
  {
    sub_B7769C(v4, method);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                            (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMargeItemUpValInfo_o *__fastcall EventMemberMargeUpValInfo__GetMargeItem(
        EventMemberMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v4; // x20
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  int32_t size; // w8

  v4 = this;
  if ( (byte_438C6AF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    this = (EventMemberMargeUpValInfo_o *)sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
    byte_438C6AF = 1;
  }
  margeList = v4->fields.margeList;
  if ( !margeList )
    sub_B7769C(this, *(_QWORD *)&index);
  size = margeList->fields._size;
  if ( size <= index )
    return 0LL;
  if ( size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  return margeList->fields._items->m_Items[index];
}


bool __fastcall EventMemberMargeUpValInfo__IsEmpry(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventMemberMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_438C6AD & 1) == 0 )
  {
    this = (EventMemberMargeUpValInfo_o *)sub_B775C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_438C6AD = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_B7769C(this, method);
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
  struct EventMemberMargeUpValInfo___c_StaticFields *static_fields; // x0

  if ( (byte_4388686 & 1) == 0 )
  {
    sub_B775C4(&EventMemberMargeUpValInfo___c_TypeInfo);
    byte_4388686 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventMemberMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMemberMargeUpValInfo___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, 0LL);
  return EventMargeItemUpValInfo__CompMemberPriority(a, b, 0LL);
}