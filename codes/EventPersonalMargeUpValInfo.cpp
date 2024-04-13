void __fastcall EventPersonalMargeUpValInfo___ctor(
        EventPersonalMargeUpValInfo_o *this,
        int32_t eventId,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct ServantEntity_o **p_servantEntity; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E9097 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__,
      eventId,
      (_DWORD)servantEntity,
      method);
    sub_B5D5C4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v7, v8, v9);
    byte_42E9097 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.margeList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.servantEntity = servantEntity;
  p_servantEntity = &this->fields.servantEntity;
  *((_DWORD *)p_servantEntity - 2) = eventId;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_servantEntity,
    (System_Int32_array **)servantEntity,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


void __fastcall EventPersonalMargeUpValInfo__Add(
        EventPersonalMargeUpValInfo_o *this,
        EventDropItemUpValInfo_array *dropItemInfoList,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  __int64 v25; // x0
  EventDropItemUpValInfo_o *v26; // x1
  const MethodInfo *v27; // x3
  signed int max_length; // w8
  __int64 v29; // x22
  const MethodInfo *v30; // x3
  __int64 v31; // x0
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E909B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__,
      (_DWORD)dropItemInfoList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v21, v22, v23);
    byte_42E909B = 1;
  }
  memset(&v32, 0, sizeof(v32));
  if ( dropItemInfoList )
  {
    v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v24,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    max_length = dropItemInfoList->max_length;
    if ( max_length >= 1 )
    {
      v29 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v29 >= max_length )
        {
          v31 = sub_B5D6C8(v25);
          sub_B5D668(v31, 0LL);
        }
        v26 = dropItemInfoList->m_Items[v29];
        if ( !v26 )
          break;
        if ( v26->fields.isInvalid )
        {
          if ( !v24 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v24,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
        }
        else
        {
          EventPersonalMargeUpValInfo__Add_26018992(this, v26, 0, v27);
        }
        max_length = dropItemInfoList->max_length;
        if ( (int)++v29 >= max_length )
          goto LABEL_13;
      }
LABEL_19:
      sub_B5D69C(v25, v26);
    }
LABEL_13:
    if ( !v24 )
      goto LABEL_19;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v32,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v24,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v32,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__MoveNext__) )
      EventPersonalMargeUpValInfo__Add_26018992(this, (EventDropItemUpValInfo_o *)v32.fields.current, 1, v30);
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v32,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventDropItemUpValInfo__Dispose__);
  }
}


void __fastcall EventPersonalMargeUpValInfo__Add_26018992(
        EventPersonalMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        bool isInvalid,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  unsigned int baseFuncType; // w8
  int v23; // w9
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  EventMargeItemUpValInfo_o *current; // x22
  _BOOL8 v28; // x0
  __int64 v29; // x1
  int v30; // w8
  int32_t rateCount; // w8
  _BOOL8 v32; // x0
  __int64 v33; // x1
  _BOOL8 v34; // x0
  __int64 v35; // x1
  EventMargeItemUpValInfo_o *v36; // x20
  System_Collections_Generic_List_Enumerator_T__o v37[2]; // [xsp+0h] [xbp-90h] BYREF
  int v38; // [xsp+38h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+40h] [xbp-50h] BYREF

  if ( (byte_42E909C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__,
      (_DWORD)dropItemInfo,
      isInvalid,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v10, v11, v12);
    sub_B5D5C4(&EventMargeItemUpValInfo_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__, v19, v20, v21);
    byte_42E909C = 1;
  }
  memset(&v39, 0, sizeof(v39));
  v38 = 0;
  if ( !dropItemInfo || dropItemInfo->fields.eventId != this->fields.eventId )
    return;
  baseFuncType = dropItemInfo->fields.baseFuncType;
  if ( baseFuncType - 111 > 0x15 )
    goto LABEL_15;
  v23 = 1 << (baseFuncType - 111);
  if ( (v23 & 0x240001) != 0 )
  {
LABEL_16:
    margeList = this->fields.margeList;
    if ( !margeList )
      goto LABEL_76;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      v37,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)margeList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v39 = v37[0];
    while ( 1 )
    {
      v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v39,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
      if ( !v28 )
        break;
      current = (EventMargeItemUpValInfo_o *)v39.fields.current;
      if ( !v39.fields.current )
        sub_B5D69C(v28, v29);
      if ( LODWORD(v39.fields.current[4].klass) == dropItemInfo->fields.targetType
        && LODWORD(v39.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
      {
        goto LABEL_24;
      }
    }
    current = 0LL;
LABEL_24:
    *((_DWORD *)&v37[1].fields.list + v38++) = 167;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v39,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    if ( v38 )
    {
      v30 = v38 - 1;
      if ( *((_DWORD *)&v37[0].fields.current + v38 + 1) == 167 )
        goto LABEL_30;
    }
    goto LABEL_31;
  }
  if ( (v23 & 0x18) == 0 )
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
          v37,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)margeList,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v39 = v37[0];
        while ( 1 )
        {
          v32 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v39,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v32 )
            break;
          current = (EventMargeItemUpValInfo_o *)v39.fields.current;
          if ( !v39.fields.current )
            sub_B5D69C(v32, v33);
          if ( LODWORD(v39.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
            && v39.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
          {
            goto LABEL_60;
          }
        }
        current = 0LL;
LABEL_60:
        *((_DWORD *)&v37[1].fields.list + v38++) = 532;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v39,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
        if ( v38 && *((_DWORD *)&v37[0].fields.current + v38 + 1) == 532 )
          --v38;
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
        v36 = (EventMargeItemUpValInfo_o *)sub_B5D694(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor(v36, dropItemInfo, 0LL);
        if ( v36 )
        {
          v36->fields.rateCount = dropItemInfo->fields.rateCount;
          margeList = this->fields.margeList;
          if ( margeList )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)margeList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
            return;
          }
        }
LABEL_76:
        sub_B5D69C(margeList, dropItemInfo);
      }
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v37,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)margeList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v39 = v37[0];
      while ( 1 )
      {
        v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v39,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v34 )
          break;
        current = (EventMargeItemUpValInfo_o *)v39.fields.current;
        if ( !v39.fields.current )
          sub_B5D69C(v34, v35);
        if ( LODWORD(v39.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
          && v39.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
        {
          goto LABEL_68;
        }
      }
      current = 0LL;
LABEL_68:
      *((_DWORD *)&v37[1].fields.list + v38++) = 696;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v39,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( v38 )
      {
        v30 = v38 - 1;
        if ( *((_DWORD *)&v37[0].fields.current + v38 + 1) == 696 )
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
    v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)margeList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v39 = v37[0];
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v39,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v25 )
      break;
    current = (EventMargeItemUpValInfo_o *)v39.fields.current;
    if ( !v39.fields.current )
      sub_B5D69C(v25, v26);
    if ( LODWORD(v39.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
      goto LABEL_28;
  }
  current = 0LL;
LABEL_28:
  *((_DWORD *)&v37[1].fields.list + v38++) = 346;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v39,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  if ( v38 )
  {
    v30 = v38 - 1;
    if ( *((_DWORD *)&v37[0].fields.current + v38 + 1) == 346 )
LABEL_30:
      v38 = v30;
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
  current = (EventMargeItemUpValInfo_o *)sub_B5D694(EventMargeItemUpValInfo_TypeInfo);
  EventMargeItemUpValInfo___ctor(current, dropItemInfo, 0LL);
  margeList = this->fields.margeList;
  if ( !margeList )
    goto LABEL_76;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)margeList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)current,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
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
  int v2; // w2
  __int64 v3; // x3
  EventPersonalMargeUpValInfo_o *v4; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v4 = this;
  if ( (byte_42E9099 & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_B5D5C4(
                                              &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                              (_DWORD)method,
                                              v2,
                                              v3);
    byte_42E9099 = 1;
  }
  margeList = v4->fields.margeList;
  if ( !margeList )
    sub_B5D69C(this, method);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventPersonalMargeUpValInfo__GetList(
        EventPersonalMargeUpValInfo_o *this,
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
  struct EventPersonalMargeUpValInfo___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__9_0; // x21
  Il2CppObject *v24; // x22
  struct EventPersonalMargeUpValInfo___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42E909D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__, v14, v15, v16);
    sub_B5D5C4(&EventPersonalMargeUpValInfo___c_TypeInfo, v17, v18, v19);
    byte_42E909D = 1;
  }
  margeList = this->fields.margeList;
  v21 = EventPersonalMargeUpValInfo___c_TypeInfo;
  if ( (BYTE3(EventPersonalMargeUpValInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventPersonalMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPersonalMargeUpValInfo___c_TypeInfo);
    v21 = EventPersonalMargeUpValInfo___c_TypeInfo;
  }
  static_fields = (struct EventPersonalMargeUpValInfo___c_StaticFields *)*((_QWORD *)v21 + 23);
  _9__9_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( (*((_BYTE *)v21 + 307) & 4) != 0 && !*((_DWORD *)v21 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__9_0,
      v24,
      Method_EventPersonalMargeUpValInfo___c__GetList_b__9_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v25 = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
    v25->__9__9_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__9_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__9_0,
      (System_Int32_array **)_9__9_0,
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
          (System_Comparison_T__o *)_9__9_0,
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
EventMargeItemUpValInfo_o *__fastcall EventPersonalMargeUpValInfo__GetMargeItem(
        EventPersonalMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventPersonalMargeUpValInfo_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  int32_t size; // w8

  v5 = this;
  if ( (byte_42E909A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, index, (_DWORD)method, v3);
    this = (EventPersonalMargeUpValInfo_o *)sub_B5D5C4(
                                              &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__,
                                              v6,
                                              v7,
                                              v8);
    byte_42E909A = 1;
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


bool __fastcall EventPersonalMargeUpValInfo__IsEmpty(EventPersonalMargeUpValInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventPersonalMargeUpValInfo_o *v4; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v4 = this;
  if ( (byte_42E9098 & 1) == 0 )
  {
    this = (EventPersonalMargeUpValInfo_o *)sub_B5D5C4(
                                              &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                              (_DWORD)method,
                                              v2,
                                              v3);
    byte_42E9098 = 1;
  }
  margeList = v4->fields.margeList;
  if ( !margeList )
    sub_B5D69C(this, method);
  return margeList->fields._size < 1;
}


void __fastcall EventPersonalMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventPersonalMargeUpValInfo___c_StaticFields *static_fields; // x0

  if ( (byte_42E657C & 1) == 0 )
  {
    sub_B5D5C4(&EventPersonalMargeUpValInfo___c_TypeInfo, v1, v2, v3);
    byte_42E657C = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventPersonalMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventPersonalMargeUpValInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventPersonalMargeUpValInfo___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}