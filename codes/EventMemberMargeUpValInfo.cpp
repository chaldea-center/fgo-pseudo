// local variable allocation has failed, the output may be wrong!
void __fastcall EventMemberMargeUpValInfo___ctor(
        EventMemberMargeUpValInfo_o *this,
        int32_t eventId,
        int32_t member,
        ServantEntity_o *servantEntity,
        System_String_o *servantName,
        bool isFollower,
        const MethodInfo *method)
{
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x25
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

  if ( (byte_40F888D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v13);
    byte_40F888D = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  *(_QWORD *)&member,
                                                                                                  servantEntity,
                                                                                                  servantName);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v14;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.margeList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.member = member;
  this->fields.servantEntity = servantEntity;
  sub_B16F98(
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
  sub_B16F98(
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
          sub_B17100(this, dropItemInfoList, method);
          sub_B170A0();
        }
        EventMemberMargeUpValInfo__Add_22510664(this, dropItemInfoList->m_Items[v6], method);
        LODWORD(v3) = dropItemInfoList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)v3 );
    }
  }
}


void __fastcall EventMemberMargeUpValInfo__Add_22510664(
        EventMemberMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t targetType; // w8
  unsigned int baseFuncType; // w8
  int v12; // w9
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x0
  EventMargeItemUpValInfo_o *current; // x21
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  int v20; // w8
  int32_t v21; // w22
  System_String_o *v22; // x23
  bool v23; // w24
  const MethodInfo *v24; // x6
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *v25; // x0
  int32_t v26; // w10
  int32_t rateCount; // w8
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  int32_t member; // w22
  System_String_o *servantName; // x23
  bool isFollower; // w24
  EventMargeItemUpValInfo_o *v36; // x21
  const MethodInfo *v37; // x6
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *v38; // x0
  System_Collections_Generic_List_Enumerator_T__o v39[2]; // [xsp+0h] [xbp-90h] BYREF
  int v40; // [xsp+38h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_40F8891 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__, dropItemInfo);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v6);
    sub_B16FFC(&EventMargeItemUpValInfo_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__, v9);
    byte_40F8891 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v40 = 0;
  if ( dropItemInfo && dropItemInfo->fields.eventId == this->fields.eventId )
  {
    targetType = dropItemInfo->fields.targetType;
    if ( targetType <= 3 )
    {
      if ( targetType )
      {
        if ( targetType != 3 )
          return;
      }
      else if ( this->fields.member != dropItemInfo->fields.member )
      {
        return;
      }
    }
    else if ( targetType != 7 && targetType != 14 )
    {
      return;
    }
    baseFuncType = dropItemInfo->fields.baseFuncType;
    if ( baseFuncType - 111 <= 0x15 )
    {
      v12 = 1 << (baseFuncType - 111);
      if ( (v12 & 0x240001) != 0 )
        goto LABEL_24;
      if ( (v12 & 0x18) != 0 )
      {
        margeList = this->fields.margeList;
        if ( !margeList )
          goto LABEL_74;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v39,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)margeList,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v41 = v39[0];
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v41,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
        {
          current = (EventMargeItemUpValInfo_o *)v41.fields.current;
          if ( !v41.fields.current )
            sub_B170D4();
          if ( LODWORD(v41.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
            goto LABEL_35;
        }
        current = 0LL;
LABEL_35:
        *((_DWORD *)&v39[1].fields.list + v40++) = 382;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v41,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        if ( !v40 )
          goto LABEL_38;
        v20 = v40 - 1;
        if ( *((_DWORD *)&v39[0].fields.current + v40 + 1) != 382 )
          goto LABEL_38;
        goto LABEL_37;
      }
    }
    if ( baseFuncType > 0x10 || ((1 << baseFuncType) & 0x10082) == 0 )
    {
      v28 = this->fields.margeList;
      if ( !v28 )
        goto LABEL_74;
      if ( baseFuncType == 116 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v39,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v28,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v41 = v39[0];
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v41,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
        {
          current = (EventMargeItemUpValInfo_o *)v41.fields.current;
          if ( !v41.fields.current )
            sub_B170D4();
          if ( LODWORD(v41.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
            && v41.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
          {
            goto LABEL_59;
          }
        }
        current = 0LL;
LABEL_59:
        *((_DWORD *)&v39[1].fields.list + v40++) = 567;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v41,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        if ( v40 && *((_DWORD *)&v39[0].fields.current + v40 + 1) == 567 )
          --v40;
        if ( current )
        {
          rateCount = dropItemInfo->fields.rateCount;
          if ( current->fields.rateCount <= rateCount )
            return;
LABEL_42:
          current->fields.rateCount = rateCount;
          return;
        }
        member = this->fields.member;
        servantName = this->fields.servantName;
        isFollower = this->fields.isFollower;
        v36 = (EventMargeItemUpValInfo_o *)sub_B170CC(EventMargeItemUpValInfo_TypeInfo, v29, v30, v31, v32);
        EventMargeItemUpValInfo___ctor_22494728(v36, member, servantName, isFollower, 0, dropItemInfo, v37);
        if ( v36 )
        {
          v36->fields.rateCount = dropItemInfo->fields.rateCount;
          v38 = this->fields.margeList;
          if ( v38 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v38,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
            return;
          }
        }
LABEL_74:
        sub_B170D4();
      }
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v39,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v28,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v41 = v39[0];
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v41,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
      {
        current = (EventMargeItemUpValInfo_o *)v41.fields.current;
        if ( !v41.fields.current )
          sub_B170D4();
        if ( LODWORD(v41.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
          && v41.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
        {
          goto LABEL_66;
        }
      }
      current = 0LL;
LABEL_66:
      *((_DWORD *)&v39[1].fields.list + v40++) = 744;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v41,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( !v40 || (v20 = v40 - 1, *((_DWORD *)&v39[0].fields.current + v40 + 1) != 744) )
      {
LABEL_38:
        if ( current
          || (v21 = this->fields.member,
              v22 = this->fields.servantName,
              v23 = this->fields.isFollower,
              current = (EventMargeItemUpValInfo_o *)sub_B170CC(EventMargeItemUpValInfo_TypeInfo, v16, v17, v18, v19),
              EventMargeItemUpValInfo___ctor_22494728(current, v21, v22, v23, 0, dropItemInfo, v24),
              (v25 = this->fields.margeList) != 0LL)
          && (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v25,
                (EventMissionProgressRequest_Argument_ProgressData_o *)current,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__),
              current) )
        {
          v26 = current->fields.rateCount;
          current->fields.addCount += dropItemInfo->fields.addCount;
          rateCount = dropItemInfo->fields.rateCount + v26;
          goto LABEL_42;
        }
        goto LABEL_74;
      }
LABEL_37:
      v40 = v20;
      goto LABEL_38;
    }
LABEL_24:
    v15 = this->fields.margeList;
    if ( !v15 )
      goto LABEL_74;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      v39,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v15,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v41 = v39[0];
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v41,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
    {
      current = (EventMargeItemUpValInfo_o *)v41.fields.current;
      if ( !v41.fields.current )
        sub_B170D4();
      if ( LODWORD(v41.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
        goto LABEL_31;
    }
    current = 0LL;
LABEL_31:
    *((_DWORD *)&v39[1].fields.list + v40++) = 207;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v41,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    if ( !v40 )
      goto LABEL_38;
    v20 = v40 - 1;
    if ( *((_DWORD *)&v39[0].fields.current + v40 + 1) != 207 )
      goto LABEL_38;
    goto LABEL_37;
  }
}


int32_t __fastcall EventMemberMargeUpValInfo__GetCount(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  if ( (byte_40F888F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, method);
    byte_40F888F = 1;
  }
  margeList = this->fields.margeList;
  if ( !margeList )
    sub_B170D4();
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventMemberMargeUpValInfo__GetList(
        EventMemberMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  EventMemberMargeUpValInfo___c_c *v12; // x0
  struct EventMemberMargeUpValInfo___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__12_0; // x21
  Il2CppObject *v15; // x22
  struct EventMemberMargeUpValInfo___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *v23; // x0

  if ( (byte_40F8892 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__, method);
    sub_B16FFC(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v8);
    sub_B16FFC(&Method_EventMemberMargeUpValInfo___c__GetList_b__12_0__, v9);
    sub_B16FFC(&EventMemberMargeUpValInfo___c_TypeInfo, v10);
    byte_40F8892 = 1;
  }
  margeList = this->fields.margeList;
  v12 = EventMemberMargeUpValInfo___c_TypeInfo;
  if ( (BYTE3(EventMemberMargeUpValInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMemberMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMemberMargeUpValInfo___c_TypeInfo);
    v12 = EventMemberMargeUpValInfo___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventMargeItemUpValInfo__TypeInfo,
                                                                           method,
                                                                           v2,
                                                                           v3,
                                                                           v4);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__12_0,
      v15,
      Method_EventMemberMargeUpValInfo___c__GetList_b__12_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v16 = EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
    v16->__9__12_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__12_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !margeList
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)margeList,
          (System_Comparison_T__o *)_9__12_0,
          (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v23 = this->fields.margeList) == 0LL) )
  {
    sub_B170D4();
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMargeItemUpValInfo_o *__fastcall EventMemberMargeUpValInfo__GetMargeItem(
        EventMemberMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  int32_t size; // w8

  if ( (byte_40F8890 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__, v5);
    byte_40F8890 = 1;
  }
  margeList = this->fields.margeList;
  if ( !margeList )
    sub_B170D4();
  size = margeList->fields._size;
  if ( size <= index )
    return 0LL;
  if ( size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  return margeList->fields._items->m_Items[index];
}


bool __fastcall EventMemberMargeUpValInfo__IsEmpry(EventMemberMargeUpValInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  if ( (byte_40F888E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, method);
    byte_40F888E = 1;
  }
  margeList = this->fields.margeList;
  if ( !margeList )
    sub_B170D4();
  return margeList->fields._size < 1;
}


void __fastcall EventMemberMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FEC & 1) == 0 )
  {
    sub_B16FFC(&EventMemberMargeUpValInfo___c_TypeInfo, v1);
    byte_40F6FEC = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventMemberMargeUpValInfo___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventMemberMargeUpValInfo___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventMemberMargeUpValInfo___c___ctor(EventMemberMargeUpValInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventMemberMargeUpValInfo___c___GetList_b__12_0(
        EventMemberMargeUpValInfo___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_B170D4();
  return EventMargeItemUpValInfo__CompMemberPriority(a, b, 0LL);
}