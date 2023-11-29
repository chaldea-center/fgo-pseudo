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

  if ( (byte_40FABFC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v11);
    byte_40FABFC = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  svtEntityList,
                                                                                                  servantNameList,
                                                                                                  isFollowerList);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  this->fields.margeList = (struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v12;
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtEntityList,
    (System_Int32_array **)svtEntityList,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.servantNameList = servantNameList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantNameList,
    (System_Int32_array **)servantNameList,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.isFollowerList = isFollowerList;
  sub_B16F98(
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
        EventPartyMargeUpValInfo__Add_26613136(this, dropItemInfoList->m_Items[v6], method);
        LODWORD(v3) = dropItemInfoList->max_length;
        ++v6;
      }
      while ( (__int64)v6 < (int)v3 );
    }
  }
}


void __fastcall EventPartyMargeUpValInfo__Add_26613136(
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v17; // x0
  EventMargeItemUpValInfo_o *v18; // x22
  const MethodInfo_2074050 *v19; // x1
  __int64 v20; // x3
  __int64 v21; // x4
  struct System_String_array *servantNameList; // x8
  struct System_Boolean_array *v23; // x9
  System_String_o *v24; // x23
  bool v25; // w24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x0
  int32_t rateCount; // w10
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *margeList; // x0
  EventMargeItemUpValInfo_o *current; // x21
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v30; // x0
  Il2CppObject *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  int32_t v41; // w8
  int32_t v42; // w10
  EventMargeItemUpValInfo_o *v43; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x0
  System_Collections_Generic_List_Enumerator_T__o v45[2]; // [xsp+0h] [xbp-B0h] BYREF
  int v46; // [xsp+38h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+40h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_40FAC00 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__, dropItemInfo);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__get_Current__, v6);
    sub_B16FFC(&EventMargeItemUpValInfo_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v8);
    this = (EventPartyMargeUpValInfo_o *)sub_B16FFC(
                                           &Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__,
                                           v9);
    byte_40FAC00 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v46 = 0;
  if ( !dropItemInfo || dropItemInfo->fields.eventId != v4->fields.eventId )
    return;
  baseFuncType = dropItemInfo->fields.baseFuncType;
  if ( baseFuncType > 113 )
  {
    if ( (unsigned int)(baseFuncType - 114) < 2 )
    {
      margeList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4->fields.margeList;
      if ( !margeList )
        goto LABEL_76;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v45,
        margeList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
      v47 = v45[0];
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v47,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
      {
        current = (EventMargeItemUpValInfo_o *)v47.fields.current;
        if ( !v47.fields.current )
          sub_B170D4();
        if ( LODWORD(v47.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
          goto LABEL_70;
      }
      current = 0LL;
LABEL_70:
      *((_DWORD *)&v45[1].fields.list + v46++) = 491;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v47,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
      if ( v46 && *((_DWORD *)&v45[0].fields.current + v46 + 1) == 491 )
        --v46;
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
        v17 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4->fields.margeList;
        if ( !v17 )
          goto LABEL_76;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v45,
          v17,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
        v47 = v45[0];
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v47,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
        {
          v18 = (EventMargeItemUpValInfo_o *)v47.fields.current;
          if ( !v47.fields.current )
            sub_B170D4();
          if ( v12 == HIDWORD(v47.fields.current[1].klass)
            && LODWORD(v47.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId )
          {
            goto LABEL_39;
          }
        }
        v18 = 0LL;
LABEL_39:
        v19 = (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__;
        *((_DWORD *)&v45[1].fields.list + v46++) = 279;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(&v47, v19);
        if ( v46 && *((_DWORD *)&v45[0].fields.current + v46 + 1) == 279 )
          --v46;
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
            sub_B17100(this, dropItemInfo, method);
            sub_B170A0();
          }
          v24 = servantNameList->m_Items[v12];
          v25 = v23->m_Items[v12 + 4];
          v18 = (EventMargeItemUpValInfo_o *)sub_B170CC(
                                               EventMargeItemUpValInfo_TypeInfo,
                                               dropItemInfo,
                                               method,
                                               v20,
                                               v21);
          EventMargeItemUpValInfo___ctor_22494728(v18, v12, v24, v25, 0, dropItemInfo, 0LL);
          v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.margeList;
          if ( !v26 )
            goto LABEL_76;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
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
    sub_B170D4();
  }
  v30 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4->fields.margeList;
  if ( !v30 )
    goto LABEL_76;
  if ( baseFuncType != 116 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      v45,
      v30,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
    v47 = v45[0];
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v47,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
    {
      current = (EventMargeItemUpValInfo_o *)v47.fields.current;
      if ( !v47.fields.current )
        sub_B170D4();
      if ( LODWORD(v47.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
        && v47.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
      {
        goto LABEL_91;
      }
    }
    current = 0LL;
LABEL_91:
    *((_DWORD *)&v45[1].fields.list + v46++) = 863;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v47,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
    if ( v46 && *((_DWORD *)&v45[0].fields.current + v46 + 1) == 863 )
      --v46;
    if ( current )
    {
LABEL_95:
      current->fields.isEquipUp |= dropItemInfo->fields.isEquipUp;
      v42 = current->fields.rateCount;
      current->fields.addCount += dropItemInfo->fields.addCount;
      current->fields.rateCount = dropItemInfo->fields.rateCount + v42;
      return;
    }
LABEL_74:
    current = (EventMargeItemUpValInfo_o *)sub_B170CC(EventMargeItemUpValInfo_TypeInfo, v32, v33, v34, v35);
    EventMargeItemUpValInfo___ctor(current, dropItemInfo, 0LL);
    v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.margeList;
    if ( !v36 )
      goto LABEL_76;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v36,
      (EventMissionProgressRequest_Argument_ProgressData_o *)current,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    if ( !current )
      goto LABEL_76;
    goto LABEL_95;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v45,
    v30,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__GetEnumerator__);
  v47 = v45[0];
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__MoveNext__) )
  {
    v31 = v47.fields.current;
    if ( !v47.fields.current )
      sub_B170D4();
    if ( LODWORD(v47.fields.current[3].monitor) == dropItemInfo->fields.baseFuncId
      && v47.fields.current[5].klass == (Il2CppClass *)dropItemInfo->fields.itemEntity )
    {
      goto LABEL_84;
    }
  }
  v31 = 0LL;
LABEL_84:
  *((_DWORD *)&v45[1].fields.list + v46++) = 678;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v47,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMargeItemUpValInfo__Dispose__);
  if ( v46 && *((_DWORD *)&v45[0].fields.current + v46 + 1) == 678 )
    --v46;
  if ( v31 )
  {
    v41 = dropItemInfo->fields.rateCount;
    if ( SLODWORD(v31[6].klass) > v41 )
    {
      LODWORD(v31[6].klass) = v41;
      LOBYTE(v31[5].monitor) = dropItemInfo->fields.isEquipUp;
    }
  }
  else
  {
    v43 = (EventMargeItemUpValInfo_o *)sub_B170CC(EventMargeItemUpValInfo_TypeInfo, v37, v38, v39, v40);
    EventMargeItemUpValInfo___ctor(v43, dropItemInfo, 0LL);
    if ( !v43 )
      goto LABEL_76;
    v43->fields.rateCount = dropItemInfo->fields.rateCount;
    v43->fields.isEquipUp = dropItemInfo->fields.isEquipUp;
    v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.margeList;
    if ( !v44 )
      goto LABEL_76;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v44,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
  }
}


int32_t __fastcall EventPartyMargeUpValInfo__GetCount(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  if ( (byte_40FABFE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, method);
    byte_40FABFE = 1;
  }
  margeList = this->fields.margeList;
  if ( !margeList )
    sub_B170D4();
  return margeList->fields._size;
}


EventMargeItemUpValInfo_array *__fastcall EventPartyMargeUpValInfo__GetList(
        EventPartyMargeUpValInfo_o *this,
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
  EventPartyMargeUpValInfo___c_c *v12; // x0
  struct EventPartyMargeUpValInfo___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__11_0; // x21
  Il2CppObject *v15; // x22
  struct EventPartyMargeUpValInfo___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *v23; // x0

  if ( (byte_40FAC01 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventMargeItemUpValInfo___ctor__, method);
    sub_B16FFC(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v8);
    sub_B16FFC(&Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__, v9);
    sub_B16FFC(&EventPartyMargeUpValInfo___c_TypeInfo, v10);
    byte_40FAC01 = 1;
  }
  margeList = this->fields.margeList;
  v12 = EventPartyMargeUpValInfo___c_TypeInfo;
  if ( (BYTE3(EventPartyMargeUpValInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventPartyMargeUpValInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventPartyMargeUpValInfo___c_TypeInfo);
    v12 = EventPartyMargeUpValInfo___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventMargeItemUpValInfo__TypeInfo,
                                                                           method,
                                                                           v2,
                                                                           v3,
                                                                           v4);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__11_0,
      v15,
      Method_EventPartyMargeUpValInfo___c__GetList_b__11_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventMargeItemUpValInfo___ctor__);
    v16 = EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
    v16->__9__11_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)_9__11_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__11_0,
      (System_Int32_array **)_9__11_0,
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
          (System_Comparison_T__o *)_9__11_0,
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
EventMargeItemUpValInfo_o *__fastcall EventPartyMargeUpValInfo__GetMargeItem(
        EventPartyMargeUpValInfo_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x20
  int32_t size; // w8

  if ( (byte_40FABFF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Item__, v5);
    byte_40FABFF = 1;
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


bool __fastcall EventPartyMargeUpValInfo__IsEmpry(EventPartyMargeUpValInfo_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventMargeItemUpValInfo__o *margeList; // x8

  if ( (byte_40FABFD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__get_Count__, method);
    byte_40FABFD = 1;
  }
  margeList = this->fields.margeList;
  if ( !margeList )
    sub_B170D4();
  return margeList->fields._size < 1;
}


void __fastcall EventPartyMargeUpValInfo___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F700D & 1) == 0 )
  {
    sub_B16FFC(&EventPartyMargeUpValInfo___c_TypeInfo, v1);
    byte_40F700D = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventPartyMargeUpValInfo___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventPartyMargeUpValInfo___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return EventMargeItemUpValInfo__CompPartyPriority(a, b, 0LL);
}