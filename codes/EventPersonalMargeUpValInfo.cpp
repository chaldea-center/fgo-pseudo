// local variable allocation has failed, the output may be wrong!
void __fastcall EventPersonalMargeUpValInfo___ctor(
        EventPersonalMargeUpValInfo_o *this,
        int32_t eventId,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_418788C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v7);
    byte_418788C = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.margeList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  *((_DWORD *)p_servantEntity - 2) = eventId;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_servantEntity,
    (System_Int32_array **)servantEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void __fastcall EventPersonalMargeUpValInfo__Add(
        EventPersonalMargeUpValInfo_o *this,
        EventDropItemUpValInfo_array *dropItemInfoList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  __int64 v12; // x0
  EventDropItemUpValInfo_o *v13; // x1
  const MethodInfo *v14; // x3
  signed int max_length; // w8
  __int64 v16; // x22
  const MethodInfo *v17; // x3
  __int64 v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4187890 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__, dropItemInfoList);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v10);
    byte_4187890 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( dropItemInfoList )
  {
    v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v11,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    max_length = dropItemInfoList->max_length;
    if ( max_length >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= max_length )
        {
          v18 = sub_B2C460(v12);
          sub_B2C400(v18, 0LL);
        }
        v13 = dropItemInfoList->m_Items[v16];
        if ( !v13 )
          break;
        if ( v13->fields.isInvalid )
        {
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
        }
        else
        {
          EventPersonalMargeUpValInfo__Add_25015228(this, v13, 0, v14);
        }
        max_length = dropItemInfoList->max_length;
        if ( (int)++v16 >= max_length )
          goto LABEL_13;
      }
LABEL_19:
      sub_B2C434(v12, v13);
    }
LABEL_13:
    if ( !v11 )
      goto LABEL_19;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v11,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__) )
      EventPersonalMargeUpValInfo__Add_25015228(this, (EventDropItemUpValInfo_o *)v19.fields.current, 1, v17);
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
  }
}


void __fastcall EventPersonalMargeUpValInfo__Add_25015228(
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
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMargeItemUpValInfo_o *current; // x22
  _BOOL8 v18; // x0
  __int64 v19; // x1
  int v20; // w8
  int32_t rateCount; // w8
  _BOOL8 v22; // x0
  __int64 v23; // x1
  _BOOL8 v24; // x0
  __int64 v25; // x1
  EventMargeItemUpValInfo_o *v26; // x20
  System_Collections_Generic_List_Enumerator_T__o v27[2]; // [xsp+0h] [xbp-90h] BYREF
  int v28; // [xsp+38h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_4187891 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__, dropItemInfo);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v8);
    sub_B2C35C(&EventMargeItemUpValInfo_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__, v11);
    byte_4187891 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v28 = 0;
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
      v27,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)margeList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v29 = v27[0];
    while ( 1 )
    {
      v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v29,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
      if ( !v18 )
        break;
      current = (EventMargeItemUpValInfo_o *)v29.fields.current;
      if ( !v29.fields.current )
        sub_B2C434(v18, v19);
      if ( LODWORD(v29.fields.current[4].klass) == dropItemInfo->fields.targetType
        && LODWORD(v29.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
      {
        goto LABEL_24;
      }
    }
    current = 0LL;
LABEL_24:
    *((_DWORD *)&v27[1].fields.list + v28++) = 167;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v29,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    if ( v28 )
    {
      v20 = v28 - 1;
      if ( *((_DWORD *)&v27[0].fields.current + v28 + 1) == 167 )
        goto LABEL_30;
    }
    goto LABEL_31;
  }
  if ( (v13 & 0x18) == 0 )
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
          v27,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)margeList,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v29 = v27[0];
        while ( 1 )
        {
          v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v29,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v22 )
            break;
          current = (EventMargeItemUpValInfo_o *)v29.fields.current;
          if ( !v29.fields.current )
            sub_B2C434(v22, v23);
          if ( LODWORD(v29.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
            && v29.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
          {
            goto LABEL_60;
          }
        }
        current = 0LL;
LABEL_60:
        *((_DWORD *)&v27[1].fields.list + v28++) = 532;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v29,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        if ( v28 && *((_DWORD *)&v27[0].fields.current + v28 + 1) == 532 )
          --v28;
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
        v26 = (EventMargeItemUpValInfo_o *)sub_B2C42C(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor(v26, dropItemInfo, 0LL);
        if ( v26 )
        {
          v26->fields.rateCount = dropItemInfo->fields.rateCount;
          margeList = this->fields.margeList;
          if ( margeList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)margeList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
            return;
          }
        }
LABEL_76:
        sub_B2C434(margeList, dropItemInfo);
      }
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v27,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)margeList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v29 = v27[0];
      while ( 1 )
      {
        v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v29,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v24 )
          break;
        current = (EventMargeItemUpValInfo_o *)v29.fields.current;
        if ( !v29.fields.current )
          sub_B2C434(v24, v25);
        if ( LODWORD(v29.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
          && v29.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
        {
          goto LABEL_68;
        }
      }
      current = 0LL;
LABEL_68:
      *((_DWORD *)&v27[1].fields.list + v28++) = 696;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v29,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( v28 )
      {
        v20 = v28 - 1;
        if ( *((_DWORD *)&v27[0].fields.current + v28 + 1) == 696 )
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
    v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)margeList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v29 = v27[0];
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v15 )
      break;
    current = (EventMargeItemUpValInfo_o *)v29.fields.current;
    if ( !v29.fields.current )
      sub_B2C434(v15, v16);
    if ( LODWORD(v29.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
      goto LABEL_28;
  }
  current = 0LL;
LABEL_28:
  *((_DWORD *)&v27[1].fields.list + v28++) = 346;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  if ( v28 )
  {
    v20 = v28 - 1;
    if ( *((_DWORD *)&v27[0].fields.current + v28 + 1) == 346 )
LABEL_30:
      v28 = v20;
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
  current = (EventMargeItemUpValInfo_o *)sub_B2C42C(EventMargeItemUpValInfo_TypeInfo);
  EventMargeItemUpValInfo___ctor(current, dropItemInfo, 0LL);
  margeList = this->fields.margeList;
  if ( !margeList )
    goto LABEL_76;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)margeList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)current,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
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
  if ( (byte_418788E & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_B2C35C(
                                              &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                              method);
    byte_418788E = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_B2C434(this, method);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventPersonalMargeUpValInfo__GetList(
        EventPersonalMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  void *v9; // x0
  struct EventPersonalMargeUpValInfo___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__9_0; // x21
  Il2CppObject *v12; // x22
  struct EventPersonalMargeUpValInfo___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4187892 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__, method);
    sub_B2C35C(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v5);
    sub_B2C35C(&Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__, v6);
    sub_B2C35C(&EventPersonalMargeUpValInfo___c_TypeInfo, v7);
    byte_4187892 = 1;
  }
  margeList = this->fields.margeList;
  v9 = EventPersonalMargeUpValInfo___c_TypeInfo;
  if ( (BYTE3(EventPersonalMargeUpValInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventPersonalMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPersonalMargeUpValInfo___c_TypeInfo);
    v9 = EventPersonalMargeUpValInfo___c_TypeInfo;
  }
  static_fields = (struct EventPersonalMargeUpValInfo___c_StaticFields *)*((_QWORD *)v9 + 23);
  _9__9_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (*((_BYTE *)v9 + 307) & 4) != 0 && !*((_DWORD *)v9 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__9_0,
      v12,
      Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v13 = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
    v13->__9__9_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__9_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__9_0,
      (System_Int32_array **)_9__9_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !margeList
    || (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)margeList,
          (System_Comparison_T__o *)_9__9_0,
          (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        (v9 = this->fields.margeList) == 0LL) )
  {
    sub_B2C434(v9, method);
  }
  return (EventMargeItemUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventMargeItemUpValInfo_o *__fastcall EventPersonalMargeUpValInfo__GetMargeItem(
        EventPersonalMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventPersonalMargeUpValInfo_o *v4; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  int32_t size; // w8

  v4 = this;
  if ( (byte_418788F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, *(_QWORD *)&index);
    this = (EventPersonalMargeUpValInfo_o *)sub_B2C35C(
                                              &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__,
                                              v5);
    byte_418788F = 1;
  }
  margeList = v4->fields.margeList;
  if ( !margeList )
    sub_B2C434(this, *(_QWORD *)&index);
  size = margeList->fields._size;
  if ( size <= index )
    return 0LL;
  if ( size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  return margeList->fields._items->m_Items[index];
}


bool __fastcall EventPersonalMargeUpValInfo__IsEmpty(EventPersonalMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPersonalMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_418788D & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_B2C35C(
                                              &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                              method);
    byte_418788D = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_B2C434(this, method);
  return margeList->fields._size < 1;
}


void __fastcall EventPersonalMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EventPersonalMargeUpValInfo___c_StaticFields *static_fields; // x0

  if ( (byte_4184B41 & 1) == 0 )
  {
    sub_B2C35C(&EventPersonalMargeUpValInfo___c_TypeInfo, v1);
    byte_4184B41 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventPersonalMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventPersonalMargeUpValInfo___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}