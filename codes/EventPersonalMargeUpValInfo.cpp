void __fastcall EventPersonalMargeUpValInfo___ctor(
        EventPersonalMargeUpValInfo_o *this,
        int32_t eventId,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4351E78 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4351E78 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v7;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.margeList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  *((_DWORD *)p_servantEntity - 2) = eventId;
  sub_B70630(
    (BattleServantConfConponent_o *)p_servantEntity,
    (System_Int32_array **)servantEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void __fastcall EventPersonalMargeUpValInfo__Add(
        EventPersonalMargeUpValInfo_o *this,
        EventDropItemUpValInfo_array *dropItemInfoList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  __int64 v6; // x0
  EventDropItemUpValInfo_o *v7; // x1
  const MethodInfo *v8; // x3
  signed int max_length; // w8
  __int64 v10; // x22
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4351E7C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    byte_4351E7C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( dropItemInfoList )
  {
    v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v5,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    max_length = dropItemInfoList->max_length;
    if ( max_length >= 1 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v10 >= max_length )
        {
          v12 = sub_B70798(v6);
          sub_B70738(v12, 0LL);
        }
        v7 = dropItemInfoList->m_Items[v10];
        if ( !v7 )
          break;
        if ( v7->fields.isInvalid )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
        }
        else
        {
          EventPersonalMargeUpValInfo__Add_25418424(this, v7, 0, v8);
        }
        max_length = dropItemInfoList->max_length;
        if ( (int)++v10 >= max_length )
          goto LABEL_13;
      }
LABEL_19:
      sub_B7076C(v6, v7);
    }
LABEL_13:
    if ( !v5 )
      goto LABEL_19;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__) )
      EventPersonalMargeUpValInfo__Add_25418424(this, (EventDropItemUpValInfo_o *)v13.fields.current, 1, v11);
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
  }
}


void __fastcall EventPersonalMargeUpValInfo__Add_25418424(
        EventPersonalMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        bool isInvalid,
        const MethodInfo *method)
{
  unsigned int baseFuncType; // w8
  int v8; // w9
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  EventMargeItemUpValInfo_o *current; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  int v15; // w8
  int32_t rateCount; // w8
  _BOOL8 v17; // x0
  __int64 v18; // x1
  _BOOL8 v19; // x0
  __int64 v20; // x1
  EventMargeItemUpValInfo_o *v21; // x20
  System_Collections_Generic_List_Enumerator_T__o v22[2]; // [xsp+0h] [xbp-90h] BYREF
  int v23; // [xsp+38h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4351E7D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_B70694(&EventMargeItemUpValInfo_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    byte_4351E7D = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v23 = 0;
  if ( !dropItemInfo || dropItemInfo->fields.eventId != this->fields.eventId )
    return;
  baseFuncType = dropItemInfo->fields.baseFuncType;
  if ( baseFuncType - 111 > 0x15 )
    goto LABEL_15;
  v8 = 1 << (baseFuncType - 111);
  if ( (v8 & 0x240001) != 0 )
  {
LABEL_16:
    margeList = this->fields.margeList;
    if ( !margeList )
      goto LABEL_76;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)margeList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v24 = v22[0];
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v24,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
      if ( !v13 )
        break;
      current = (EventMargeItemUpValInfo_o *)v24.fields.current;
      if ( !v24.fields.current )
        sub_B7076C(v13, v14);
      if ( LODWORD(v24.fields.current[4].klass) == dropItemInfo->fields.targetType
        && LODWORD(v24.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
      {
        goto LABEL_24;
      }
    }
    current = 0LL;
LABEL_24:
    *((_DWORD *)&v22[1].fields.list + v23++) = 167;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v24,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    if ( v23 )
    {
      v15 = v23 - 1;
      if ( *((_DWORD *)&v22[0].fields.current + v23 + 1) == 167 )
        goto LABEL_30;
    }
    goto LABEL_31;
  }
  if ( (v8 & 0x18) == 0 )
  {
LABEL_15:
    if ( baseFuncType > 0x10 || ((1 << baseFuncType) & 0x10082) == 0 )
    {
      margeList = this->fields.margeList;
      if ( !margeList )
        goto LABEL_76;
      if ( baseFuncType == 116 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v22,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)margeList,
          (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v24 = v22[0];
        while ( 1 )
        {
          v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v24,
                  (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v17 )
            break;
          current = (EventMargeItemUpValInfo_o *)v24.fields.current;
          if ( !v24.fields.current )
            sub_B7076C(v17, v18);
          if ( LODWORD(v24.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
            && v24.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
          {
            goto LABEL_60;
          }
        }
        current = 0LL;
LABEL_60:
        *((_DWORD *)&v22[1].fields.list + v23++) = 532;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v24,
          (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        if ( v23 && *((_DWORD *)&v22[0].fields.current + v23 + 1) == 532 )
          --v23;
        if ( current )
        {
          if ( !isInvalid )
          {
            rateCount = dropItemInfo->fields.rateCount;
            if ( current->fields.rateCount > rateCount )
              goto LABEL_43;
          }
          return;
        }
        v21 = (EventMargeItemUpValInfo_o *)sub_B70764(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor(v21, dropItemInfo, 0LL);
        if ( v21 )
        {
          v21->fields.rateCount = dropItemInfo->fields.rateCount;
          margeList = this->fields.margeList;
          if ( margeList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)margeList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
            return;
          }
        }
LABEL_76:
        sub_B7076C(margeList, dropItemInfo);
      }
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v22,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)margeList,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v24 = v22[0];
      while ( 1 )
      {
        v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v24,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v19 )
          break;
        current = (EventMargeItemUpValInfo_o *)v24.fields.current;
        if ( !v24.fields.current )
          sub_B7076C(v19, v20);
        if ( LODWORD(v24.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
          && v24.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
        {
          goto LABEL_68;
        }
      }
      current = 0LL;
LABEL_68:
      *((_DWORD *)&v22[1].fields.list + v23++) = 696;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v24,
        (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( v23 )
      {
        v15 = v23 - 1;
        if ( *((_DWORD *)&v22[0].fields.current + v23 + 1) == 696 )
          goto LABEL_30;
      }
      goto LABEL_31;
    }
    goto LABEL_16;
  }
  margeList = this->fields.margeList;
  if ( !margeList )
    goto LABEL_76;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)margeList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v24 = v22[0];
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v10 )
      break;
    current = (EventMargeItemUpValInfo_o *)v24.fields.current;
    if ( !v24.fields.current )
      sub_B7076C(v10, v11);
    if ( LODWORD(v24.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
      goto LABEL_28;
  }
  current = 0LL;
LABEL_28:
  *((_DWORD *)&v22[1].fields.list + v23++) = 346;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  if ( v23 )
  {
    v15 = v23 - 1;
    if ( *((_DWORD *)&v22[0].fields.current + v23 + 1) == 346 )
LABEL_30:
      v23 = v15;
  }
LABEL_31:
  if ( current )
  {
    if ( isInvalid )
      goto LABEL_33;
LABEL_40:
    if ( current )
    {
      current->fields.addCount += dropItemInfo->fields.addCount;
LABEL_42:
      rateCount = dropItemInfo->fields.rateCount + current->fields.rateCount;
LABEL_43:
      current->fields.rateCount = rateCount;
      return;
    }
    goto LABEL_76;
  }
  current = (EventMargeItemUpValInfo_o *)sub_B70764(EventMargeItemUpValInfo_TypeInfo);
  EventMargeItemUpValInfo___ctor(current, dropItemInfo, 0LL);
  margeList = this->fields.margeList;
  if ( !margeList )
    goto LABEL_76;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)margeList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)current,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
  if ( !isInvalid )
    goto LABEL_40;
LABEL_33:
  if ( !current )
    goto LABEL_76;
  if ( !current->fields.addCount )
    current->fields.addCount += dropItemInfo->fields.addCount;
  if ( !current->fields.rateCount )
    goto LABEL_42;
}


int32_t __fastcall EventPersonalMargeUpValInfo__GetCount(EventPersonalMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPersonalMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4351E7A & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4351E7A = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_B7076C(this, method);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventPersonalMargeUpValInfo__GetList(
        EventPersonalMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  void *v4; // x0
  struct EventPersonalMargeUpValInfo___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__9_0; // x21
  Il2CppObject *v7; // x22
  struct EventPersonalMargeUpValInfo___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4351E7E & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    sub_B70694(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_B70694(&Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__);
    sub_B70694(&EventPersonalMargeUpValInfo___c_TypeInfo);
    byte_4351E7E = 1;
  }
  margeList = this->fields.margeList;
  v4 = EventPersonalMargeUpValInfo___c_TypeInfo;
  if ( (BYTE3(EventPersonalMargeUpValInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventPersonalMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPersonalMargeUpValInfo___c_TypeInfo);
    v4 = EventPersonalMargeUpValInfo___c_TypeInfo;
  }
  static_fields = (struct EventPersonalMargeUpValInfo___c_StaticFields *)*((_QWORD *)v4 + 23);
  _9__9_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (*((_BYTE *)v4 + 307) & 4) != 0 && !*((_DWORD *)v4 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__9_0,
      v7,
      Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v8 = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
    v8->__9__9_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__9_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__9_0,
      (System_Int32_array **)_9__9_0,
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
          (System_Comparison_T__o *)_9__9_0,
          (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v4 = this->fields.margeList) == 0LL) )
  {
    sub_B7076C(v4, method);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                            (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMargeItemUpValInfo_o *__fastcall EventPersonalMargeUpValInfo__GetMargeItem(
        EventPersonalMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventPersonalMargeUpValInfo_o *v4; // x20
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  int32_t size; // w8

  v4 = this;
  if ( (byte_4351E7B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    this = (EventPersonalMargeUpValInfo_o *)sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
    byte_4351E7B = 1;
  }
  margeList = v4->fields.margeList;
  if ( !margeList )
    sub_B7076C(this, *(_QWORD *)&index);
  size = margeList->fields._size;
  if ( size <= index )
    return 0LL;
  if ( size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  return margeList->fields._items->m_Items[index];
}


bool __fastcall EventPersonalMargeUpValInfo__IsEmpty(EventPersonalMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPersonalMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4351E79 & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4351E79 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_B7076C(this, method);
  return margeList->fields._size < 1;
}


void __fastcall EventPersonalMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventPersonalMargeUpValInfo___c_StaticFields *static_fields; // x0

  if ( (byte_434EA14 & 1) == 0 )
  {
    sub_B70694(&EventPersonalMargeUpValInfo___c_TypeInfo);
    byte_434EA14 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EventPersonalMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventPersonalMargeUpValInfo___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall EventPersonalMargeUpValInfo___c___ctor(
        EventPersonalMargeUpValInfo___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventPersonalMargeUpValInfo___c___GetList_b__9_0(
        EventPersonalMargeUpValInfo___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_B7076C(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}