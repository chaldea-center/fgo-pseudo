// local variable allocation has failed, the output may be wrong!
void __fastcall EventPartyMargeUpValInfo___ctor(
        EventPartyMargeUpValInfo_o *this,
        int32_t eventId,
        ServantEntity_array *svtEntityList,
        System_String_array *servantNameList,
        System_Boolean_array *isFollowerList,
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
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_4214D2A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, *(_QWORD *)&eventId);
    sub_B0D8A4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v11);
    byte_4214D2A = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  svtEntityList);
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
  this->fields.eventId = eventId;
  this->fields.svtEntityList = svtEntityList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.svtEntityList,
    (System_Int32_array **)svtEntityList,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.servantNameList = servantNameList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantNameList,
    (System_Int32_array **)servantNameList,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.isFollowerList = isFollowerList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.isFollowerList,
    (System_Int32_array **)isFollowerList,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
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
          v7 = sub_B0D9A8(this);
          sub_B0D948(v7, 0LL);
        }
        EventPartyMargeUpValInfo__Add_25223344(this, dropItemInfoList->m_Items[v6], method);
        LODWORD(v3) = dropItemInfoList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)v3 );
    }
  }
}


void __fastcall EventPartyMargeUpValInfo__Add_25223344(
        EventPartyMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t baseFuncType; // w8
  struct ServantEntity_array *svtEntityList; // x8
  unsigned __int64 v12; // x21
  unsigned __int64 max_length; // x9
  int32_t targetType; // w8
  _BOOL4 v15; // w22
  struct System_Boolean_array *isFollowerList; // x8
  _BOOL8 v17; // x0
  EventMargeItemUpValInfo_o *v18; // x22
  const MethodInfo_211254C *v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  struct System_String_array *servantNameList; // x8
  struct System_Boolean_array *v23; // x9
  System_String_o *v24; // x23
  bool v25; // w24
  int32_t rateCount; // w10
  _BOOL8 v27; // x0
  EventMargeItemUpValInfo_o *current; // x21
  _BOOL8 v29; // x0
  Il2CppObject *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  _BOOL8 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  int32_t v36; // w8
  int32_t v37; // w10
  EventMargeItemUpValInfo_o *v38; // x21
  __int64 v39; // x0
  System_Collections_Generic_List_Enumerator_T__o v40[2]; // [xsp+0h] [xbp-B0h] BYREF
  int v41; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+40h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_4214D2E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__, dropItemInfo);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v6);
    sub_B0D8A4(&EventMargeItemUpValInfo_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v8);
    this = (EventPartyMargeUpValInfo_o *)sub_B0D8A4(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__,
                                           v9);
    byte_4214D2E = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v41 = 0;
  if ( !dropItemInfo || dropItemInfo->fields.eventId != v4->fields.eventId )
    return;
  baseFuncType = dropItemInfo->fields.baseFuncType;
  if ( baseFuncType > 113 )
  {
    if ( (unsigned int)(baseFuncType - 114) < 2 )
    {
      this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
      if ( !this )
        goto LABEL_76;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v40,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v42 = v40[0];
      while ( 1 )
      {
        v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v42,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v27 )
          break;
        current = (EventMargeItemUpValInfo_o *)v42.fields.current;
        if ( !v42.fields.current )
          sub_B0D97C(v27);
        if ( LODWORD(v42.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
          goto LABEL_70;
      }
      current = 0LL;
LABEL_70:
      *((_DWORD *)&v40[1].fields.list + v41++) = 491;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v42,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( v41 && *((_DWORD *)&v40[0].fields.current + v41 + 1) == 491 )
        --v41;
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
    svtEntityList = v4->fields.svtEntityList;
    if ( svtEntityList )
    {
      v12 = 0LL;
      while ( 1 )
      {
        max_length = svtEntityList->max_length;
        if ( (__int64)v12 >= (int)max_length )
          return;
        if ( v12 >= max_length )
          goto LABEL_100;
        this = (EventPartyMargeUpValInfo_o *)svtEntityList->m_Items[v12];
        if ( !this )
          goto LABEL_50;
        targetType = dropItemInfo->fields.targetType;
        if ( targetType <= 3 )
          break;
        if ( targetType == 7 )
          goto LABEL_20;
        if ( targetType != 14 )
          goto LABEL_21;
        v15 = v12 != dropItemInfo->fields.member;
LABEL_23:
        if ( dropItemInfo->fields.baseFuncType == 111 )
        {
          this = (EventPartyMargeUpValInfo_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            goto LABEL_50;
          isFollowerList = v4->fields.isFollowerList;
          if ( !isFollowerList )
            goto LABEL_76;
          if ( v12 >= isFollowerList->max_length )
            goto LABEL_100;
          if ( isFollowerList->m_Items[v12 + 4] || !v15 )
            goto LABEL_50;
        }
        else if ( !v15 )
        {
          goto LABEL_50;
        }
        this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
        if ( !this )
          goto LABEL_76;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v40,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v42 = v40[0];
        while ( 1 )
        {
          v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v42,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v17 )
            break;
          v18 = (EventMargeItemUpValInfo_o *)v42.fields.current;
          if ( !v42.fields.current )
            sub_B0D97C(v17);
          if ( v12 == HIDWORD(v42.fields.current[1].klass)
            && LODWORD(v42.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
          {
            goto LABEL_39;
          }
        }
        v18 = 0LL;
LABEL_39:
        v19 = (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__;
        *((_DWORD *)&v40[1].fields.list + v41++) = 279;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(&v42, v19);
        if ( v41 && *((_DWORD *)&v40[0].fields.current + v41 + 1) == 279 )
          --v41;
        if ( !v18 )
        {
          servantNameList = v4->fields.servantNameList;
          if ( !servantNameList )
            goto LABEL_76;
          if ( v12 >= servantNameList->max_length )
            goto LABEL_100;
          v23 = v4->fields.isFollowerList;
          if ( !v23 )
            goto LABEL_76;
          if ( v12 >= v23->max_length )
          {
LABEL_100:
            v39 = sub_B0D9A8(this);
            sub_B0D948(v39, 0LL);
          }
          v24 = servantNameList->m_Items[v12];
          v25 = v23->m_Items[v12 + 4];
          v18 = (EventMargeItemUpValInfo_o *)sub_B0D974(EventMargeItemUpValInfo_TypeInfo, v20, v21);
          EventMargeItemUpValInfo___ctor_26623760(v18, v12, v24, v25, 0, dropItemInfo, 0LL);
          this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
          if ( !this )
            goto LABEL_76;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
          if ( !v18 )
            goto LABEL_76;
        }
        v18->fields.isEquipUp |= dropItemInfo->fields.isEquipUp;
        rateCount = v18->fields.rateCount;
        v18->fields.addCount += dropItemInfo->fields.addCount;
        v18->fields.rateCount = dropItemInfo->fields.rateCount + rateCount;
LABEL_50:
        svtEntityList = v4->fields.svtEntityList;
        ++v12;
        if ( !svtEntityList )
          goto LABEL_76;
      }
      if ( !targetType )
      {
        v15 = v12 == dropItemInfo->fields.member;
        goto LABEL_23;
      }
      if ( targetType != 3 )
      {
LABEL_21:
        v15 = 0;
        goto LABEL_23;
      }
LABEL_20:
      v15 = 1;
      goto LABEL_23;
    }
LABEL_76:
    sub_B0D97C(this);
  }
  this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
  if ( !this )
    goto LABEL_76;
  if ( baseFuncType != 116 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      v40,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v42 = v40[0];
    while ( 1 )
    {
      v33 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v42,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
      if ( !v33 )
        break;
      current = (EventMargeItemUpValInfo_o *)v42.fields.current;
      if ( !v42.fields.current )
        sub_B0D97C(v33);
      if ( LODWORD(v42.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
        && v42.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
      {
        goto LABEL_91;
      }
    }
    current = 0LL;
LABEL_91:
    *((_DWORD *)&v40[1].fields.list + v41++) = 863;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v42,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    if ( v41 && *((_DWORD *)&v40[0].fields.current + v41 + 1) == 863 )
      --v41;
    if ( current )
    {
LABEL_95:
      current->fields.isEquipUp |= dropItemInfo->fields.isEquipUp;
      v37 = current->fields.rateCount;
      current->fields.addCount += dropItemInfo->fields.addCount;
      current->fields.rateCount = dropItemInfo->fields.rateCount + v37;
      return;
    }
LABEL_74:
    current = (EventMargeItemUpValInfo_o *)sub_B0D974(EventMargeItemUpValInfo_TypeInfo, v31, v32);
    EventMargeItemUpValInfo___ctor(current, dropItemInfo, 0LL);
    this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
    if ( !this )
      goto LABEL_76;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
      (EventMissionProgressRequest_Argument_ProgressData_o *)current,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    if ( !current )
      goto LABEL_76;
    goto LABEL_95;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v40,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v42 = v40[0];
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v42,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v29 )
      break;
    v30 = v42.fields.current;
    if ( !v42.fields.current )
      sub_B0D97C(v29);
    if ( LODWORD(v42.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
      && v42.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
    {
      goto LABEL_84;
    }
  }
  v30 = 0LL;
LABEL_84:
  *((_DWORD *)&v40[1].fields.list + v41++) = 678;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v42,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  if ( v41 && *((_DWORD *)&v40[0].fields.current + v41 + 1) == 678 )
    --v41;
  if ( v30 )
  {
    v36 = dropItemInfo->fields.rateCount;
    if ( SLODWORD(v30[6].klass) > v36 )
    {
      LODWORD(v30[6].klass) = v36;
      LOBYTE(v30[5].monitor) = dropItemInfo->fields.isEquipUp;
    }
  }
  else
  {
    v38 = (EventMargeItemUpValInfo_o *)sub_B0D974(EventMargeItemUpValInfo_TypeInfo, v34, v35);
    EventMargeItemUpValInfo___ctor(v38, dropItemInfo, 0LL);
    if ( !v38 )
      goto LABEL_76;
    v38->fields.rateCount = dropItemInfo->fields.rateCount;
    v38->fields.isEquipUp = dropItemInfo->fields.isEquipUp;
    this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
    if ( !this )
      goto LABEL_76;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
  }
}


int32_t __fastcall EventPartyMargeUpValInfo__GetCount(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4214D2C & 1) == 0 )
  {
    this = (EventPartyMargeUpValInfo_o *)sub_B0D8A4(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                           method);
    byte_4214D2C = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_B0D97C(this);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventPartyMargeUpValInfo__GetList(
        EventPartyMargeUpValInfo_o *this,
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
  struct EventPartyMargeUpValInfo___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x21
  Il2CppObject *v13; // x22
  struct EventPartyMargeUpValInfo___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_4214D2F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__, method);
    sub_B0D8A4(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v6);
    sub_B0D8A4(&Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__, v7);
    sub_B0D8A4(&EventPartyMargeUpValInfo___c_TypeInfo, v8);
    byte_4214D2F = 1;
  }
  margeList = this->fields.margeList;
  v10 = EventPartyMargeUpValInfo___c_TypeInfo;
  if ( (BYTE3(EventPartyMargeUpValInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventPartyMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPartyMargeUpValInfo___c_TypeInfo);
    v10 = EventPartyMargeUpValInfo___c_TypeInfo;
  }
  static_fields = (struct EventPartyMargeUpValInfo___c_StaticFields *)*((_QWORD *)v10 + 23);
  _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (*((_BYTE *)v10 + 307) & 4) != 0 && !*((_DWORD *)v10 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_EventMargeItemUpValInfo__TypeInfo,
                                                                           method,
                                                                           v2);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v13,
      Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v14 = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
    v14->__9__11_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__11_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__11_0,
      (System_Int32_array **)_9__11_0,
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
          (System_Comparison_T__o *)_9__11_0,
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
EventMargeItemUpValInfo_o *__fastcall EventPartyMargeUpValInfo__GetMargeItem(
        EventPartyMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v4; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  int32_t size; // w8

  v4 = this;
  if ( (byte_4214D2D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, *(_QWORD *)&index);
    this = (EventPartyMargeUpValInfo_o *)sub_B0D8A4(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__,
                                           v5);
    byte_4214D2D = 1;
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


bool __fastcall EventPartyMargeUpValInfo__IsEmpry(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4214D2B & 1) == 0 )
  {
    this = (EventPartyMargeUpValInfo_o *)sub_B0D8A4(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__,
                                           method);
    byte_4214D2B = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_B0D97C(this);
  return margeList->fields._size < 1;
}


void __fastcall EventPartyMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventPartyMargeUpValInfo___c_StaticFields *static_fields; // x0

  if ( (byte_4211BA6 & 1) == 0 )
  {
    sub_B0D8A4(&EventPartyMargeUpValInfo___c_TypeInfo, v1);
    byte_4211BA6 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventPartyMargeUpValInfo___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventPartyMargeUpValInfo___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return EventMargeItemUpValInfo__CompPartyPriority(a, b, 0LL);
}