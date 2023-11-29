// local variable allocation has failed, the output may be wrong!
void __fastcall EventPersonalMargeUpValInfo___ctor(
        EventPersonalMargeUpValInfo_o *this,
        int32_t eventId,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40FAC02 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v8);
    byte_40FAC02 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                 *(_QWORD *)&eventId,
                                                                                                 servantEntity,
                                                                                                 method,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.margeList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  *((_DWORD *)p_servantEntity - 2) = eventId;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_servantEntity,
    (System_Int32_array **)servantEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


void __fastcall EventPersonalMargeUpValInfo__Add(
        EventPersonalMargeUpValInfo_o *this,
        EventDropItemUpValInfo_array *dropItemInfoList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  signed int max_length; // w8
  __int64 v19; // x22
  EventDropItemUpValInfo_o *v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FAC06 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__, dropItemInfoList);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v12);
    byte_40FAC06 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( dropItemInfoList )
  {
    v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo,
                                                                                                    dropItemInfoList,
                                                                                                    method,
                                                                                                    v3,
                                                                                                    v4);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v13,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    max_length = dropItemInfoList->max_length;
    if ( max_length >= 1 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v19 >= max_length )
        {
          sub_B17100(v14, v15, v16);
          sub_B170A0();
        }
        v20 = dropItemInfoList->m_Items[v19];
        if ( !v20 )
          break;
        if ( v20->fields.isInvalid )
        {
          if ( !v13 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v13,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
        }
        else
        {
          EventPersonalMargeUpValInfo__Add_26616368(this, v20, 0, v17);
        }
        max_length = dropItemInfoList->max_length;
        if ( (int)++v19 >= max_length )
          goto LABEL_13;
      }
LABEL_19:
      sub_B170D4();
    }
LABEL_13:
    if ( !v13 )
      goto LABEL_19;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v13,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__) )
      EventPersonalMargeUpValInfo__Add_26616368(this, (EventDropItemUpValInfo_o *)v22.fields.current, 1, v21);
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
  }
}


void __fastcall EventPersonalMargeUpValInfo__Add_26616368(
        EventPersonalMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        bool isInvalid,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  unsigned int baseFuncType; // w8
  int v13; // w9
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *v14; // x0
  EventMargeItemUpValInfo_o *current; // x22
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  int v21; // w8
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *v22; // x0
  int32_t rateCount; // w8
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  EventMargeItemUpValInfo_o *v29; // x20
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *v30; // x0
  System_Collections_Generic_List_Enumerator_T__o v31[2]; // [xsp+0h] [xbp-90h] BYREF
  int v32; // [xsp+38h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_40FAC07 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__, dropItemInfo);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v8);
    sub_B16FFC(&EventMargeItemUpValInfo_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__, v11);
    byte_40FAC07 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v32 = 0;
  if ( !dropItemInfo || dropItemInfo->fields.eventId != this->fields.eventId )
    return;
  baseFuncType = dropItemInfo->fields.baseFuncType;
  if ( baseFuncType - 111 > 0x15 )
    goto LABEL_15;
  v13 = 1 << (baseFuncType - 111);
  if ( (v13 & 0x240001) != 0 )
  {
LABEL_16:
    margeList = this->fields.margeList;
    if ( !margeList )
      goto LABEL_76;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      v31,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)margeList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v33 = v31[0];
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v33,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
    {
      current = (EventMargeItemUpValInfo_o *)v33.fields.current;
      if ( !v33.fields.current )
        sub_B170D4();
      if ( LODWORD(v33.fields.current[4].klass) == dropItemInfo->fields.targetType
        && LODWORD(v33.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
      {
        goto LABEL_24;
      }
    }
    current = 0LL;
LABEL_24:
    *((_DWORD *)&v31[1].fields.list + v32++) = 167;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v33,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    if ( v32 )
    {
      v21 = v32 - 1;
      if ( *((_DWORD *)&v31[0].fields.current + v32 + 1) == 167 )
        goto LABEL_30;
    }
    goto LABEL_31;
  }
  if ( (v13 & 0x18) == 0 )
  {
LABEL_15:
    if ( baseFuncType > 0x10 || ((1 << baseFuncType) & 0x10082) == 0 )
    {
      v24 = this->fields.margeList;
      if ( !v24 )
        goto LABEL_76;
      if ( baseFuncType == 116 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v31,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v24,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v33 = v31[0];
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v33,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
        {
          current = (EventMargeItemUpValInfo_o *)v33.fields.current;
          if ( !v33.fields.current )
            sub_B170D4();
          if ( LODWORD(v33.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
            && v33.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
          {
            goto LABEL_60;
          }
        }
        current = 0LL;
LABEL_60:
        *((_DWORD *)&v31[1].fields.list + v32++) = 532;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v33,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        if ( v32 && *((_DWORD *)&v31[0].fields.current + v32 + 1) == 532 )
          --v32;
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
        v29 = (EventMargeItemUpValInfo_o *)sub_B170CC(EventMargeItemUpValInfo_TypeInfo, v25, v26, v27, v28);
        EventMargeItemUpValInfo___ctor(v29, dropItemInfo, 0LL);
        if ( v29 )
        {
          v29->fields.rateCount = dropItemInfo->fields.rateCount;
          v30 = this->fields.margeList;
          if ( v30 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v30,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
            return;
          }
        }
LABEL_76:
        sub_B170D4();
      }
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v31,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v24,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v33 = v31[0];
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v33,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
      {
        current = (EventMargeItemUpValInfo_o *)v33.fields.current;
        if ( !v33.fields.current )
          sub_B170D4();
        if ( LODWORD(v33.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
          && v33.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
        {
          goto LABEL_68;
        }
      }
      current = 0LL;
LABEL_68:
      *((_DWORD *)&v31[1].fields.list + v32++) = 696;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v33,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( v32 )
      {
        v21 = v32 - 1;
        if ( *((_DWORD *)&v31[0].fields.current + v32 + 1) == 696 )
          goto LABEL_30;
      }
      goto LABEL_31;
    }
    goto LABEL_16;
  }
  v14 = this->fields.margeList;
  if ( !v14 )
    goto LABEL_76;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v31,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v14,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v33 = v31[0];
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
  {
    current = (EventMargeItemUpValInfo_o *)v33.fields.current;
    if ( !v33.fields.current )
      sub_B170D4();
    if ( LODWORD(v33.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
      goto LABEL_28;
  }
  current = 0LL;
LABEL_28:
  *((_DWORD *)&v31[1].fields.list + v32++) = 346;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  if ( v32 )
  {
    v21 = v32 - 1;
    if ( *((_DWORD *)&v31[0].fields.current + v32 + 1) == 346 )
LABEL_30:
      v32 = v21;
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
  current = (EventMargeItemUpValInfo_o *)sub_B170CC(EventMargeItemUpValInfo_TypeInfo, v17, v18, v19, v20);
  EventMargeItemUpValInfo___ctor(current, dropItemInfo, 0LL);
  v22 = this->fields.margeList;
  if ( !v22 )
    goto LABEL_76;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v22,
    (EventMissionProgressRequest_Argument_ProgressData_o *)current,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
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
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  if ( (byte_40FAC04 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, method);
    byte_40FAC04 = 1;
  }
  margeList = this->fields.margeList;
  if ( !margeList )
    sub_B170D4();
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventPersonalMargeUpValInfo__GetList(
        EventPersonalMargeUpValInfo_o *this,
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
  EventPersonalMargeUpValInfo___c_c *v12; // x0
  struct EventPersonalMargeUpValInfo___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__9_0; // x21
  Il2CppObject *v15; // x22
  struct EventPersonalMargeUpValInfo___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *v23; // x0

  if ( (byte_40FAC08 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__, method);
    sub_B16FFC(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v8);
    sub_B16FFC(&Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__, v9);
    sub_B16FFC(&EventPersonalMargeUpValInfo___c_TypeInfo, v10);
    byte_40FAC08 = 1;
  }
  margeList = this->fields.margeList;
  v12 = EventPersonalMargeUpValInfo___c_TypeInfo;
  if ( (BYTE3(EventPersonalMargeUpValInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventPersonalMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPersonalMargeUpValInfo___c_TypeInfo);
    v12 = EventPersonalMargeUpValInfo___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__9_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_EventMargeItemUpValInfo__TypeInfo,
                                                                          method,
                                                                          v2,
                                                                          v3,
                                                                          v4);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__9_0,
      v15,
      Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v16 = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
    v16->__9__9_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__9_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__9_0,
      (System_Int32_array **)_9__9_0,
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
          (System_Comparison_T__o *)_9__9_0,
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
EventMargeItemUpValInfo_o *__fastcall EventPersonalMargeUpValInfo__GetMargeItem(
        EventPersonalMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  int32_t size; // w8

  if ( (byte_40FAC05 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__, v5);
    byte_40FAC05 = 1;
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


bool __fastcall EventPersonalMargeUpValInfo__IsEmpty(EventPersonalMargeUpValInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  if ( (byte_40FAC03 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, method);
    byte_40FAC03 = 1;
  }
  margeList = this->fields.margeList;
  if ( !margeList )
    sub_B170D4();
  return margeList->fields._size < 1;
}


void __fastcall EventPersonalMargeUpValInfo___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F700E & 1) == 0 )
  {
    sub_B16FFC(&EventPersonalMargeUpValInfo___c_TypeInfo, v1);
    byte_40F700E = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventPersonalMargeUpValInfo___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}