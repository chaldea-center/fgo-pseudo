void __fastcall EventPartyMargeUpValInfo___ctor(
        EventPartyMargeUpValInfo_o *this,
        int32_t eventId,
        ServantEntity_array *svtEntityList,
        System_String_array *servantNameList,
        System_Boolean_array *isFollowerList,
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
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_42E9091 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__,
      eventId,
      (_DWORD)svtEntityList,
      servantNameList);
    sub_B5D5C4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v11, v12, v13);
    byte_42E9091 = 1;
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
  this->fields.eventId = eventId;
  this->fields.svtEntityList = svtEntityList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtEntityList,
    (System_Int32_array **)svtEntityList,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.servantNameList = servantNameList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantNameList,
    (System_Int32_array **)servantNameList,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.isFollowerList = isFollowerList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.isFollowerList,
    (System_Int32_array **)isFollowerList,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
}


void __fastcall EventPartyMargeUpValInfo__Add(
        EventPartyMargeUpValInfo_o *this,
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
        EventPartyMargeUpValInfo__Add_26015760(this, dropItemInfoList->m_Items[v6], method);
        LODWORD(v3) = dropItemInfoList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)v3 );
    }
  }
}


void __fastcall EventPartyMargeUpValInfo__Add_26015760(
        EventPartyMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventPartyMargeUpValInfo_o *v5; // x20
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
  int32_t baseFuncType; // w8
  struct ServantEntity_array *svtEntityList; // x8
  unsigned __int64 v23; // x21
  unsigned __int64 max_length; // x9
  int32_t targetType; // w8
  _BOOL4 v26; // w22
  struct System_Boolean_array *isFollowerList; // x8
  _BOOL8 v28; // x0
  __int64 v29; // x1
  EventMargeItemUpValInfo_o *v30; // x22
  const MethodInfo_201EFCC *v31; // x1
  struct System_String_array *servantNameList; // x8
  struct System_Boolean_array *v33; // x9
  System_String_o *v34; // x23
  bool v35; // w24
  int32_t rateCount; // w10
  _BOOL8 v37; // x0
  __int64 v38; // x1
  EventMargeItemUpValInfo_o *current; // x21
  _BOOL8 v40; // x0
  __int64 v41; // x1
  Il2CppObject *v42; // x21
  _BOOL8 v43; // x0
  __int64 v44; // x1
  int32_t v45; // w8
  int32_t v46; // w10
  EventMargeItemUpValInfo_o *v47; // x21
  __int64 v48; // x0
  System_Collections_Generic_List_Enumerator_T__o v49[2]; // [xsp+0h] [xbp-B0h] BYREF
  int v50; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+40h] [xbp-70h] BYREF

  v5 = this;
  if ( (byte_42E9095 & 1) == 0 )
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
    this = (EventPartyMargeUpValInfo_o *)sub_B5D5C4(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__,
                                           v18,
                                           v19,
                                           v20);
    byte_42E9095 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  v50 = 0;
  if ( !dropItemInfo || dropItemInfo->fields.eventId != v5->fields.eventId )
    return;
  baseFuncType = dropItemInfo->fields.baseFuncType;
  if ( baseFuncType > 113 )
  {
    if ( (unsigned int)(baseFuncType - 114) < 2 )
    {
      this = (EventPartyMargeUpValInfo_o *)v5->fields.margeList;
      if ( !this )
        goto LABEL_76;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v49,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v51 = v49[0];
      while ( 1 )
      {
        v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v51,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v37 )
          break;
        current = (EventMargeItemUpValInfo_o *)v51.fields.current;
        if ( !v51.fields.current )
          sub_B5D69C(v37, v38);
        if ( LODWORD(v51.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
          goto LABEL_70;
      }
      current = 0LL;
LABEL_70:
      *((_DWORD *)&v49[1].fields.list + v50++) = 491;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v51,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( v50 && *((_DWORD *)&v49[0].fields.current + v50 + 1) == 491 )
        --v50;
      if ( current )
        goto LABEL_95;
      goto LABEL_74;
    }
    if ( baseFuncType == 129 )
      goto LABEL_9;
  }
  else if ( (unsigned int)baseFuncType <= 0x10 && ((1 << baseFuncType) & 0x10082) != 0 || baseFuncType == 111 )
  {
LABEL_9:
    svtEntityList = v5->fields.svtEntityList;
    if ( svtEntityList )
    {
      v23 = 0LL;
      while ( 1 )
      {
        max_length = svtEntityList->max_length;
        if ( (__int64)v23 >= (int)max_length )
          return;
        if ( v23 >= max_length )
          goto LABEL_100;
        this = (EventPartyMargeUpValInfo_o *)svtEntityList->m_Items[v23];
        if ( !this )
          goto LABEL_50;
        targetType = dropItemInfo->fields.targetType;
        if ( targetType <= 3 )
          break;
        if ( targetType == 7 )
          goto LABEL_20;
        if ( targetType != 14 )
          goto LABEL_21;
        v26 = v23 != dropItemInfo->fields.member;
LABEL_23:
        if ( dropItemInfo->fields.baseFuncType == 111 )
        {
          this = (EventPartyMargeUpValInfo_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            goto LABEL_50;
          isFollowerList = v5->fields.isFollowerList;
          if ( !isFollowerList )
            goto LABEL_76;
          if ( v23 >= isFollowerList->max_length )
            goto LABEL_100;
          if ( isFollowerList->m_Items[v23 + 4] || !v26 )
            goto LABEL_50;
        }
        else if ( !v26 )
        {
          goto LABEL_50;
        }
        this = (EventPartyMargeUpValInfo_o *)v5->fields.margeList;
        if ( !this )
          goto LABEL_76;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v49,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v51 = v49[0];
        while ( 1 )
        {
          v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v51,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v28 )
            break;
          v30 = (EventMargeItemUpValInfo_o *)v51.fields.current;
          if ( !v51.fields.current )
            sub_B5D69C(v28, v29);
          if ( v23 == HIDWORD(v51.fields.current[1].klass)
            && LODWORD(v51.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
          {
            goto LABEL_39;
          }
        }
        v30 = 0LL;
LABEL_39:
        v31 = (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__;
        *((_DWORD *)&v49[1].fields.list + v50++) = 279;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(&v51, v31);
        if ( v50 && *((_DWORD *)&v49[0].fields.current + v50 + 1) == 279 )
          --v50;
        if ( !v30 )
        {
          servantNameList = v5->fields.servantNameList;
          if ( !servantNameList )
            goto LABEL_76;
          if ( v23 >= servantNameList->max_length )
            goto LABEL_100;
          v33 = v5->fields.isFollowerList;
          if ( !v33 )
            goto LABEL_76;
          if ( v23 >= v33->max_length )
          {
LABEL_100:
            v48 = sub_B5D6C8(this);
            sub_B5D668(v48, 0LL);
          }
          v34 = servantNameList->m_Items[v23];
          v35 = v33->m_Items[v23 + 4];
          v30 = (EventMargeItemUpValInfo_o *)sub_B5D694(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor_27133088(v30, v23, v34, v35, 0, dropItemInfo, 0LL);
          this = (EventPartyMargeUpValInfo_o *)v5->fields.margeList;
          if ( !this )
            goto LABEL_76;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
          if ( !v30 )
            goto LABEL_76;
        }
        v30->fields.isEquipUp |= dropItemInfo->fields.isEquipUp;
        rateCount = v30->fields.rateCount;
        v30->fields.addCount += dropItemInfo->fields.addCount;
        v30->fields.rateCount = dropItemInfo->fields.rateCount + rateCount;
LABEL_50:
        svtEntityList = v5->fields.svtEntityList;
        ++v23;
        if ( !svtEntityList )
          goto LABEL_76;
      }
      if ( !targetType )
      {
        v26 = v23 == dropItemInfo->fields.member;
        goto LABEL_23;
      }
      if ( targetType != 3 )
      {
LABEL_21:
        v26 = 0;
        goto LABEL_23;
      }
LABEL_20:
      v26 = 1;
      goto LABEL_23;
    }
LABEL_76:
    sub_B5D69C(this, dropItemInfo);
  }
  this = (EventPartyMargeUpValInfo_o *)v5->fields.margeList;
  if ( !this )
    goto LABEL_76;
  if ( baseFuncType != 116 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      v49,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v51 = v49[0];
    while ( 1 )
    {
      v43 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v51,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
      if ( !v43 )
        break;
      current = (EventMargeItemUpValInfo_o *)v51.fields.current;
      if ( !v51.fields.current )
        sub_B5D69C(v43, v44);
      if ( LODWORD(v51.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
        && v51.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
      {
        goto LABEL_91;
      }
    }
    current = 0LL;
LABEL_91:
    *((_DWORD *)&v49[1].fields.list + v50++) = 863;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v51,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    if ( v50 && *((_DWORD *)&v49[0].fields.current + v50 + 1) == 863 )
      --v50;
    if ( current )
    {
LABEL_95:
      current->fields.isEquipUp |= dropItemInfo->fields.isEquipUp;
      v46 = current->fields.rateCount;
      current->fields.addCount += dropItemInfo->fields.addCount;
      current->fields.rateCount = dropItemInfo->fields.rateCount + v46;
      return;
    }
LABEL_74:
    current = (EventMargeItemUpValInfo_o *)sub_B5D694(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor(current, dropItemInfo, 0LL);
    this = (EventPartyMargeUpValInfo_o *)v5->fields.margeList;
    if ( !this )
      goto LABEL_76;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
      (EventMissionProgressRequest_Argument_ProgressData_o *)current,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    if ( !current )
      goto LABEL_76;
    goto LABEL_95;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v49,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v51 = v49[0];
  while ( 1 )
  {
    v40 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v51,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v40 )
      break;
    v42 = v51.fields.current;
    if ( !v51.fields.current )
      sub_B5D69C(v40, v41);
    if ( LODWORD(v51.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
      && v51.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
    {
      goto LABEL_84;
    }
  }
  v42 = 0LL;
LABEL_84:
  *((_DWORD *)&v49[1].fields.list + v50++) = 678;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v51,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  if ( v50 && *((_DWORD *)&v49[0].fields.current + v50 + 1) == 678 )
    --v50;
  if ( v42 )
  {
    v45 = dropItemInfo->fields.rateCount;
    if ( SLODWORD(v42[6].klass) > v45 )
    {
      LODWORD(v42[6].klass) = v45;
      LOBYTE(v42[5].monitor) = dropItemInfo->fields.isEquipUp;
    }
  }
  else
  {
    v47 = (EventMargeItemUpValInfo_o *)sub_B5D694(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor(v47, dropItemInfo, 0LL);
    if ( !v47 )
      goto LABEL_76;
    v47->fields.rateCount = dropItemInfo->fields.rateCount;
    v47->fields.isEquipUp = dropItemInfo->fields.isEquipUp;
    this = (EventPartyMargeUpValInfo_o *)v5->fields.margeList;
    if ( !this )
      goto LABEL_76;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
  }
}


int32_t __fastcall EventPartyMargeUpValInfo__GetCount(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventPartyMargeUpValInfo_o *v4; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v4 = this;
  if ( (byte_42E9093 & 1) == 0 )
  {
    this = (EventPartyMargeUpValInfo_o *)sub_B5D5C4(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                           (_DWORD)method,
                                           v2,
                                           v3);
    byte_42E9093 = 1;
  }
  margeList = v4->fields.margeList;
  if ( !margeList )
    sub_B5D69C(this, method);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventPartyMargeUpValInfo__GetList(
        EventPartyMargeUpValInfo_o *this,
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
  struct EventPartyMargeUpValInfo___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x21
  Il2CppObject *v24; // x22
  struct EventPartyMargeUpValInfo___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42E9096 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__, v14, v15, v16);
    sub_B5D5C4(&EventPartyMargeUpValInfo___c_TypeInfo, v17, v18, v19);
    byte_42E9096 = 1;
  }
  margeList = this->fields.margeList;
  v21 = EventPartyMargeUpValInfo___c_TypeInfo;
  if ( (BYTE3(EventPartyMargeUpValInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventPartyMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPartyMargeUpValInfo___c_TypeInfo);
    v21 = EventPartyMargeUpValInfo___c_TypeInfo;
  }
  static_fields = (struct EventPartyMargeUpValInfo___c_StaticFields *)*((_QWORD *)v21 + 23);
  _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (*((_BYTE *)v21 + 307) & 4) != 0 && !*((_DWORD *)v21 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v24,
      Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v25 = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
    v25->__9__11_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__11_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__11_0,
      (System_Int32_array **)_9__11_0,
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
          (System_Comparison_T__o *)_9__11_0,
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
EventMargeItemUpValInfo_o *__fastcall EventPartyMargeUpValInfo__GetMargeItem(
        EventPartyMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventPartyMargeUpValInfo_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  int32_t size; // w8

  v5 = this;
  if ( (byte_42E9094 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, index, (_DWORD)method, v3);
    this = (EventPartyMargeUpValInfo_o *)sub_B5D5C4(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__,
                                           v6,
                                           v7,
                                           v8);
    byte_42E9094 = 1;
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


bool __fastcall EventPartyMargeUpValInfo__IsEmpry(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventPartyMargeUpValInfo_o *v4; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v4 = this;
  if ( (byte_42E9092 & 1) == 0 )
  {
    this = (EventPartyMargeUpValInfo_o *)sub_B5D5C4(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                           (_DWORD)method,
                                           v2,
                                           v3);
    byte_42E9092 = 1;
  }
  margeList = v4->fields.margeList;
  if ( !margeList )
    sub_B5D69C(this, method);
  return margeList->fields._size < 1;
}


void __fastcall EventPartyMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventPartyMargeUpValInfo___c_StaticFields *static_fields; // x0

  if ( (byte_42E657B & 1) == 0 )
  {
    sub_B5D5C4(&EventPartyMargeUpValInfo___c_TypeInfo, v1, v2, v3);
    byte_42E657B = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventPartyMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventPartyMargeUpValInfo___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall EventPartyMargeUpValInfo___c___ctor(EventPartyMargeUpValInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventPartyMargeUpValInfo___c___GetList_b__11_0(
        EventPartyMargeUpValInfo___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_B5D69C(this, 0LL);
  return EventMargeItemUpValInfo__CompPartyPriority(a, b, 0LL);
}