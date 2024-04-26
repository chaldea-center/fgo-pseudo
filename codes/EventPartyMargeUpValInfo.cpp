void __fastcall EventPartyMargeUpValInfo___ctor(
        EventPartyMargeUpValInfo_o *this,
        int32_t eventId,
        ServantEntity_array *svtEntityList,
        System_String_array *servantNameList,
        System_Boolean_array *isFollowerList,
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
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_4351E72 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    byte_4351E72 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v11;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.margeList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.svtEntityList = svtEntityList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtEntityList,
    (System_Int32_array **)svtEntityList,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.servantNameList = servantNameList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.servantNameList,
    (System_Int32_array **)servantNameList,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.isFollowerList = isFollowerList;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.isFollowerList,
    (System_Int32_array **)isFollowerList,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
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
          v7 = sub_B70798(this);
          sub_B70738(v7, 0LL);
        }
        EventPartyMargeUpValInfo__Add_25415192(this, dropItemInfoList->m_Items[v6], method);
        LODWORD(v3) = dropItemInfoList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)v3 );
    }
  }
}


void __fastcall EventPartyMargeUpValInfo__Add_25415192(
        EventPartyMargeUpValInfo_o *this,
        EventDropItemUpValInfo_o *dropItemInfo,
        const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v4; // x20
  int32_t baseFuncType; // w8
  struct ServantEntity_array *svtEntityList; // x8
  unsigned __int64 v7; // x21
  unsigned __int64 max_length; // x9
  int32_t targetType; // w8
  _BOOL4 v10; // w22
  struct System_Boolean_array *isFollowerList; // x8
  _BOOL8 v12; // x0
  __int64 v13; // x1
  EventMargeItemUpValInfo_o *v14; // x22
  const MethodInfo_22212C8 *v15; // x1
  struct System_String_array *servantNameList; // x8
  struct System_Boolean_array *v17; // x9
  System_String_o *v18; // x23
  bool v19; // w24
  int32_t rateCount; // w10
  _BOOL8 v21; // x0
  __int64 v22; // x1
  EventMargeItemUpValInfo_o *current; // x21
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x21
  _BOOL8 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w8
  int32_t v30; // w10
  EventMargeItemUpValInfo_o *v31; // x21
  __int64 v32; // x0
  System_Collections_Generic_List_Enumerator_T__o v33[2]; // [xsp+0h] [xbp-B0h] BYREF
  int v34; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+40h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_4351E76 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__);
    sub_B70694(&EventMargeItemUpValInfo_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    this = (EventPartyMargeUpValInfo_o *)sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    byte_4351E76 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v34 = 0;
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
        v33,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v35 = v33[0];
      while ( 1 )
      {
        v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v35,
                (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
        if ( !v21 )
          break;
        current = (EventMargeItemUpValInfo_o *)v35.fields.current;
        if ( !v35.fields.current )
          sub_B7076C(v21, v22);
        if ( LODWORD(v35.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
          goto LABEL_70;
      }
      current = 0LL;
LABEL_70:
      *((_DWORD *)&v33[1].fields.list + v34++) = 491;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v35,
        (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( v34 && *((_DWORD *)&v33[0].fields.current + v34 + 1) == 491 )
        --v34;
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
      v7 = 0LL;
      while ( 1 )
      {
        max_length = svtEntityList->max_length;
        if ( (__int64)v7 >= (int)max_length )
          return;
        if ( v7 >= max_length )
          goto LABEL_100;
        this = (EventPartyMargeUpValInfo_o *)svtEntityList->m_Items[v7];
        if ( !this )
          goto LABEL_50;
        targetType = dropItemInfo->fields.targetType;
        if ( targetType <= 3 )
          break;
        if ( targetType == 7 )
          goto LABEL_20;
        if ( targetType != 14 )
          goto LABEL_21;
        v10 = v7 != dropItemInfo->fields.member;
LABEL_23:
        if ( dropItemInfo->fields.baseFuncType == 111 )
        {
          this = (EventPartyMargeUpValInfo_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            goto LABEL_50;
          isFollowerList = v4->fields.isFollowerList;
          if ( !isFollowerList )
            goto LABEL_76;
          if ( v7 >= isFollowerList->max_length )
            goto LABEL_100;
          if ( isFollowerList->m_Items[v7 + 4] || !v10 )
            goto LABEL_50;
        }
        else if ( !v10 )
        {
          goto LABEL_50;
        }
        this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
        if ( !this )
          goto LABEL_76;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v33,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
          (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v35 = v33[0];
        while ( 1 )
        {
          v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v35,
                  (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
          if ( !v12 )
            break;
          v14 = (EventMargeItemUpValInfo_o *)v35.fields.current;
          if ( !v35.fields.current )
            sub_B7076C(v12, v13);
          if ( v7 == HIDWORD(v35.fields.current[1].klass)
            && LODWORD(v35.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
          {
            goto LABEL_39;
          }
        }
        v14 = 0LL;
LABEL_39:
        v15 = (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__;
        *((_DWORD *)&v33[1].fields.list + v34++) = 279;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(&v35, v15);
        if ( v34 && *((_DWORD *)&v33[0].fields.current + v34 + 1) == 279 )
          --v34;
        if ( !v14 )
        {
          servantNameList = v4->fields.servantNameList;
          if ( !servantNameList )
            goto LABEL_76;
          if ( v7 >= servantNameList->max_length )
            goto LABEL_100;
          v17 = v4->fields.isFollowerList;
          if ( !v17 )
            goto LABEL_76;
          if ( v7 >= v17->max_length )
          {
LABEL_100:
            v32 = sub_B70798(this);
            sub_B70738(v32, 0LL);
          }
          v18 = servantNameList->m_Items[v7];
          v19 = v17->m_Items[v7 + 4];
          v14 = (EventMargeItemUpValInfo_o *)sub_B70764(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor_27374592(v14, v7, v18, v19, 0, dropItemInfo, 0LL);
          this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
          if ( !this )
            goto LABEL_76;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
          if ( !v14 )
            goto LABEL_76;
        }
        v14->fields.isEquipUp |= dropItemInfo->fields.isEquipUp;
        rateCount = v14->fields.rateCount;
        v14->fields.addCount += dropItemInfo->fields.addCount;
        v14->fields.rateCount = dropItemInfo->fields.rateCount + rateCount;
LABEL_50:
        svtEntityList = v4->fields.svtEntityList;
        ++v7;
        if ( !svtEntityList )
          goto LABEL_76;
      }
      if ( !targetType )
      {
        v10 = v7 == dropItemInfo->fields.member;
        goto LABEL_23;
      }
      if ( targetType != 3 )
      {
LABEL_21:
        v10 = 0;
        goto LABEL_23;
      }
LABEL_20:
      v10 = 1;
      goto LABEL_23;
    }
LABEL_76:
    sub_B7076C(this, dropItemInfo);
  }
  this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
  if ( !this )
    goto LABEL_76;
  if ( baseFuncType != 116 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      v33,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v35 = v33[0];
    while ( 1 )
    {
      v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
      if ( !v27 )
        break;
      current = (EventMargeItemUpValInfo_o *)v35.fields.current;
      if ( !v35.fields.current )
        sub_B7076C(v27, v28);
      if ( LODWORD(v35.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
        && v35.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
      {
        goto LABEL_91;
      }
    }
    current = 0LL;
LABEL_91:
    *((_DWORD *)&v33[1].fields.list + v34++) = 863;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    if ( v34 && *((_DWORD *)&v33[0].fields.current + v34 + 1) == 863 )
      --v34;
    if ( current )
    {
LABEL_95:
      current->fields.isEquipUp |= dropItemInfo->fields.isEquipUp;
      v30 = current->fields.rateCount;
      current->fields.addCount += dropItemInfo->fields.addCount;
      current->fields.rateCount = dropItemInfo->fields.rateCount + v30;
      return;
    }
LABEL_74:
    current = (EventMargeItemUpValInfo_o *)sub_B70764(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor(current, dropItemInfo, 0LL);
    this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
    if ( !this )
      goto LABEL_76;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
      (EventMissionProgressRequest_Argument_ProgressData_o *)current,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    if ( !current )
      goto LABEL_76;
    goto LABEL_95;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v35 = v33[0];
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__);
    if ( !v24 )
      break;
    v26 = v35.fields.current;
    if ( !v35.fields.current )
      sub_B7076C(v24, v25);
    if ( LODWORD(v35.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
      && v35.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
    {
      goto LABEL_84;
    }
  }
  v26 = 0LL;
LABEL_84:
  *((_DWORD *)&v33[1].fields.list + v34++) = 678;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  if ( v34 && *((_DWORD *)&v33[0].fields.current + v34 + 1) == 678 )
    --v34;
  if ( v26 )
  {
    v29 = dropItemInfo->fields.rateCount;
    if ( SLODWORD(v26[6].klass) > v29 )
    {
      LODWORD(v26[6].klass) = v29;
      LOBYTE(v26[5].monitor) = dropItemInfo->fields.isEquipUp;
    }
  }
  else
  {
    v31 = (EventMargeItemUpValInfo_o *)sub_B70764(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor(v31, dropItemInfo, 0LL);
    if ( !v31 )
      goto LABEL_76;
    v31->fields.rateCount = dropItemInfo->fields.rateCount;
    v31->fields.isEquipUp = dropItemInfo->fields.isEquipUp;
    this = (EventPartyMargeUpValInfo_o *)v4->fields.margeList;
    if ( !this )
      goto LABEL_76;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
  }
}


int32_t __fastcall EventPartyMargeUpValInfo__GetCount(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4351E74 & 1) == 0 )
  {
    this = (EventPartyMargeUpValInfo_o *)sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4351E74 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_B7076C(this, method);
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventPartyMargeUpValInfo__GetList(
        EventPartyMargeUpValInfo_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  void *v4; // x0
  struct EventPartyMargeUpValInfo___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x21
  Il2CppObject *v7; // x22
  struct EventPartyMargeUpValInfo___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4351E77 & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    sub_B70694(&System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_B70694(&Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__);
    sub_B70694(&EventPartyMargeUpValInfo___c_TypeInfo);
    byte_4351E77 = 1;
  }
  margeList = this->fields.margeList;
  v4 = EventPartyMargeUpValInfo___c_TypeInfo;
  if ( (BYTE3(EventPartyMargeUpValInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventPartyMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPartyMargeUpValInfo___c_TypeInfo);
    v4 = EventPartyMargeUpValInfo___c_TypeInfo;
  }
  static_fields = (struct EventPartyMargeUpValInfo___c_StaticFields *)*((_QWORD *)v4 + 23);
  _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (*((_BYTE *)v4 + 307) & 4) != 0 && !*((_DWORD *)v4 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v7,
      Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v8 = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
    v8->__9__11_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__11_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__11_0,
      (System_Int32_array **)_9__11_0,
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
          (System_Comparison_T__o *)_9__11_0,
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
EventMargeItemUpValInfo_o *__fastcall EventPartyMargeUpValInfo__GetMargeItem(
        EventPartyMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v4; // x20
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  int32_t size; // w8

  v4 = this;
  if ( (byte_4351E75 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    this = (EventPartyMargeUpValInfo_o *)sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__);
    byte_4351E75 = 1;
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


bool __fastcall EventPartyMargeUpValInfo__IsEmpry(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  EventPartyMargeUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  v2 = this;
  if ( (byte_4351E73 & 1) == 0 )
  {
    this = (EventPartyMargeUpValInfo_o *)sub_B70694(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__);
    byte_4351E73 = 1;
  }
  margeList = v2->fields.margeList;
  if ( !margeList )
    sub_B7076C(this, method);
  return margeList->fields._size < 1;
}


void __fastcall EventPartyMargeUpValInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventPartyMargeUpValInfo___c_StaticFields *static_fields; // x0

  if ( (byte_434EA13 & 1) == 0 )
  {
    sub_B70694(&EventPartyMargeUpValInfo___c_TypeInfo);
    byte_434EA13 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EventPartyMargeUpValInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventPartyMargeUpValInfo___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, 0LL);
  return EventMargeItemUpValInfo__CompPartyPriority(a, b, 0LL);
}