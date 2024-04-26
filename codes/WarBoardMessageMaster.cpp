void __fastcall WarBoardMessageMaster___ctor(WarBoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4351715 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__);
    byte_4351715 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    412,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__);
}


bool __fastcall WarBoardMessageMaster__CheckCondition(
        WarBoardMessageMaster_o *this,
        WarBoardMessageEntity_o *entity,
        int32_t checkValue,
        bool isValueByPlayer,
        const MethodInfo *method)
{
  bool result; // w0
  struct System_Int64_array *playCondValues; // x8
  struct System_Int64_array *v10; // x8
  struct System_Int64_array *v11; // x8
  __int64 v12; // x0

  if ( !entity )
LABEL_24:
    sub_B7076C(this, entity);
  this = (WarBoardMessageMaster_o *)BasicHelper__IsNullOrEmpty(
                                      (System_Collections_ICollection_o *)entity->fields.playCondValues,
                                      0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 1;
  switch ( entity->fields.playCondType )
  {
    case 0:
      return 1;
    case 1:
      if ( !isValueByPlayer )
        return 0;
      goto LABEL_8;
    case 2:
      if ( !isValueByPlayer )
        return 0;
      goto LABEL_16;
    case 3:
      if ( isValueByPlayer )
        goto LABEL_21;
      return 0;
    case 4:
      if ( isValueByPlayer )
        return 0;
LABEL_8:
      playCondValues = entity->fields.playCondValues;
      if ( !playCondValues )
        goto LABEL_24;
      if ( !playCondValues->max_length )
        goto LABEL_25;
      result = playCondValues->m_Items[0] == checkValue;
      break;
    case 5:
      if ( isValueByPlayer )
        return 0;
LABEL_16:
      v10 = entity->fields.playCondValues;
      if ( !v10 )
        goto LABEL_24;
      if ( !v10->max_length )
        goto LABEL_25;
      result = v10->m_Items[0] >= checkValue;
      break;
    case 6:
      if ( isValueByPlayer )
        return 0;
LABEL_21:
      v11 = entity->fields.playCondValues;
      if ( !v11 )
        goto LABEL_24;
      if ( !v11->max_length )
      {
LABEL_25:
        v12 = sub_B70798(this);
        sub_B70738(v12, 0LL);
      }
      result = v11->m_Items[0] <= checkValue;
      break;
    default:
      return 0;
  }
  return result;
}


System_Collections_Generic_List_WarBoardTaskBase__o *__fastcall WarBoardMessageMaster__GetMessageTasks(
        WarBoardMessageMaster_o *this,
        int32_t stageId,
        int32_t type,
        int32_t checkValue,
        bool isValueByPlayer,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v16; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x25
  __int64 v29; // x9
  _BOOL8 v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  _BOOL8 v36; // x0
  const MethodInfo *v37; // x2
  WarBoardMessageEntity_o *v38; // x0
  const MethodInfo *v39; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x19

  if ( (byte_4351716 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo);
    sub_B70694(&WarBoardMessageEntity_TypeInfo);
    byte_4351716 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7076C(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v14);
  v16 = isValueByPlayer;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_17:
      v24 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)v25;
    if ( !v25 )
      goto LABEL_38;
    v29 = *(&WarBoardMessageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 300LL) < (unsigned int)v29
      || *(WarBoardMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * v29 - 8) != WarBoardMessageEntity_TypeInfo )
    {
      v25 = sub_B70A60(v25);
LABEL_38:
      sub_B7076C(v25, v26);
    }
    if ( *(_DWORD *)(v25 + 16) == stageId && *(_DWORD *)(v25 + 20) == type )
    {
      v30 = WarBoardMessageMaster__CheckCondition(
              (WarBoardMessageMaster_o *)v25,
              (WarBoardMessageEntity_o *)v25,
              checkValue,
              v16,
              v27);
      if ( v30 )
      {
        if ( !v11 )
          sub_B7076C(v30, v31);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v28,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__);
      }
    }
  }
  v32 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_31:
    v35 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  v36 = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
  if ( v36 )
  {
    v38 = WarBoardMessageMaster__Lottery(
            (WarBoardMessageMaster_o *)v36,
            (System_Collections_Generic_List_WarBoardMessageEntity__o *)v11,
            v37);
    return WarBoardMessageMaster__GetTaskList((WarBoardMessageMaster_o *)v38, v38, v39);
  }
  else
  {
    v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v40,
      (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  }
  return (System_Collections_Generic_List_WarBoardTaskBase__o *)v40;
}


System_Collections_Generic_List_WarBoardTaskBase__o *__fastcall WarBoardMessageMaster__GetTaskList(
        WarBoardMessageMaster_o *this,
        WarBoardMessageEntity_o *result,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Int64_array *scriptIds; // x25
  __int64 v8; // x8
  unsigned __int64 v9; // x26
  int64_t v10; // x22
  int32_t stageId; // w23
  int32_t sceneType; // w24
  WarBoardFaceMessagePerformance_o *v13; // x21
  __int64 v15; // x0

  if ( (byte_4351718 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B70694(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B70694(&WarBoardFaceMessagePerformance_TypeInfo);
    byte_4351718 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !result )
    goto LABEL_12;
  scriptIds = result->fields.scriptIds;
  if ( !scriptIds )
    goto LABEL_12;
  v8 = *(_QWORD *)&scriptIds->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v8 )
      {
        v15 = sub_B70798(v5);
        sub_B70738(v15, 0LL);
      }
      v10 = scriptIds->m_Items[v9];
      stageId = result->fields.stageId;
      sceneType = result->fields.sceneType;
      v13 = (WarBoardFaceMessagePerformance_o *)sub_B70764(WarBoardFaceMessagePerformance_TypeInfo);
      WarBoardFaceMessagePerformance___ctor(v13, stageId, sceneType, v10, 0LL);
      if ( !v4 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v4,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      LODWORD(v8) = scriptIds->max_length;
      if ( (__int64)++v9 >= (int)v8 )
        return (System_Collections_Generic_List_WarBoardTaskBase__o *)v4;
    }
LABEL_12:
    sub_B7076C(v5, v6);
  }
  return (System_Collections_Generic_List_WarBoardTaskBase__o *)v4;
}


WarBoardMessageEntity_o *__fastcall WarBoardMessageMaster__Lottery(
        WarBoardMessageMaster_o *this,
        System_Collections_Generic_List_WarBoardMessageEntity__o *entities,
        const MethodInfo *method)
{
  WarBoardMessageMaster___c_c *v4; // x0
  struct WarBoardMessageMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardMessageMaster___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Int32_array *v16; // x0
  __int64 RandomRangeIndex; // x0
  __int64 v18; // x1

  if ( (byte_4351717 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Func_WarBoardMessageEntity__int___ctor__);
    sub_B70694(&System_Func_WarBoardMessageEntity__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardMessageEntity__get_Item__);
    sub_B70694(&Method_WarBoardMessageMaster___c__Lottery_b__4_0__);
    sub_B70694(&WarBoardMessageMaster___c_TypeInfo);
    byte_4351717 = 1;
  }
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___) )
    return 0LL;
  v4 = WarBoardMessageMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageMaster___c_TypeInfo);
    v4 = WarBoardMessageMaster___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = WarBoardMessageMaster___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_WarBoardMessageEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__4_0,
      v7,
      Method_WarBoardMessageMaster___c__Lottery_b__4_0__,
      (const MethodInfo_29AD124 *)Method_System_Func_WarBoardMessageEntity__int___ctor__);
    v8 = WarBoardMessageMaster___c_TypeInfo->static_fields;
    v8->__9__4_0 = (struct System_Func_WarBoardMessageEntity__int__o *)_9__4_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)entities,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___);
  v16 = System_Linq_Enumerable__ToArray_int_(
          v15,
          (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v16, 0, 0LL);
  if ( !entities )
    sub_B7076C(RandomRangeIndex, v18);
  if ( entities->fields._size <= (unsigned int)RandomRangeIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  return entities->fields._items->m_Items[(int)RandomRangeIndex];
}


void __fastcall WarBoardMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434FC6D & 1) == 0 )
  {
    sub_B70694(&WarBoardMessageMaster___c_TypeInfo);
    byte_434FC6D = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(WarBoardMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardMessageMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall WarBoardMessageMaster___c___ctor(WarBoardMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarBoardMessageMaster___c___Lottery_b__4_0(
        WarBoardMessageMaster___c_o *this,
        WarBoardMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_B7076C(this, 0LL);
  return ent->fields.playProbabirity;
}