void __fastcall WarBoardMessageMaster___ctor(WarBoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AEA57 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__);
    byte_42AEA57 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    412,
    (const MethodInfo_23E268C *)Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__);
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
    sub_B52A5C(this, entity);
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
        v12 = sub_B52A88(this);
        sub_B52A28(v12, 0LL);
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
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v17; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x25
  __int64 v31; // x9
  _BOOL8 v32; // x0
  __int64 v33; // x1
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  _BOOL8 v38; // x0
  const MethodInfo *v39; // x2
  WarBoardMessageEntity_o *v40; // x0
  const MethodInfo *v41; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x19

  if ( (byte_42AEA58 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo);
    sub_B52984(&WarBoardMessageEntity_TypeInfo);
    byte_42AEA58 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v14);
  v17 = isValueByPlayer;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_17:
      v26 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v22);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    v30 = (EventMissionProgressRequest_Argument_ProgressData_o *)v27;
    if ( !v27 )
      goto LABEL_38;
    v31 = *(&WarBoardMessageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 300LL) < (unsigned int)v31
      || *(WarBoardMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * v31 - 8) != WarBoardMessageEntity_TypeInfo )
    {
      v27 = sub_B52D50(v27);
LABEL_38:
      sub_B52A5C(v27, v28);
    }
    if ( *(_DWORD *)(v27 + 16) == stageId && *(_DWORD *)(v27 + 20) == type )
    {
      v32 = WarBoardMessageMaster__CheckCondition(
              (WarBoardMessageMaster_o *)v27,
              (WarBoardMessageEntity_o *)v27,
              checkValue,
              v17,
              v29);
      if ( v32 )
      {
        if ( !v11 )
          sub_B52A5C(v32, v33);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v30,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__);
      }
    }
  }
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_31:
    v37 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  v38 = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
  if ( v38 )
  {
    v40 = WarBoardMessageMaster__Lottery(
            (WarBoardMessageMaster_o *)v38,
            (System_Collections_Generic_List_WarBoardMessageEntity__o *)v11,
            v39);
    return WarBoardMessageMaster__GetTaskList((WarBoardMessageMaster_o *)v40, v40, v41);
  }
  else
  {
    v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v42,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  }
  return (System_Collections_Generic_List_WarBoardTaskBase__o *)v42;
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

  if ( (byte_42AEA5A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_B52984(&WarBoardFaceMessagePerformance_TypeInfo);
    byte_42AEA5A = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
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
        v15 = sub_B52A88(v5);
        sub_B52A28(v15, 0LL);
      }
      v10 = scriptIds->m_Items[v9];
      stageId = result->fields.stageId;
      sceneType = result->fields.sceneType;
      v13 = (WarBoardFaceMessagePerformance_o *)sub_B52A54(WarBoardFaceMessagePerformance_TypeInfo);
      WarBoardFaceMessagePerformance___ctor(v13, stageId, sceneType, v10, 0LL);
      if ( !v4 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v4,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      LODWORD(v8) = scriptIds->max_length;
      if ( (__int64)++v9 >= (int)v8 )
        return (System_Collections_Generic_List_WarBoardTaskBase__o *)v4;
    }
LABEL_12:
    sub_B52A5C(v5, v6);
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

  if ( (byte_42AEA59 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B52984(&Method_System_Func_WarBoardMessageEntity__int___ctor__);
    sub_B52984(&System_Func_WarBoardMessageEntity__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardMessageEntity__get_Item__);
    sub_B52984(&Method_WarBoardMessageMaster___c__Lottery_b__4_0__);
    sub_B52984(&WarBoardMessageMaster___c_TypeInfo);
    byte_42AEA59 = 1;
  }
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___) )
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
    _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_WarBoardMessageEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__4_0,
      v7,
      Method_WarBoardMessageMaster___c__Lottery_b__4_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_WarBoardMessageEntity__int___ctor__);
    v8 = WarBoardMessageMaster___c_TypeInfo->static_fields;
    v8->__9__4_0 = (struct System_Func_WarBoardMessageEntity__int__o *)_9__4_0;
    sub_B52920(
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
                                                               (const MethodInfo_1B69DA4 *)Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___);
  v16 = System_Linq_Enumerable__ToArray_int_(
          v15,
          (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v16, 0, 0LL);
  if ( !entities )
    sub_B52A5C(RandomRangeIndex, v18);
  if ( entities->fields._size <= (unsigned int)RandomRangeIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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

  if ( (byte_42AE962 & 1) == 0 )
  {
    sub_B52984(&WarBoardMessageMaster___c_TypeInfo);
    byte_42AE962 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarBoardMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardMessageMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, 0LL);
  return ent->fields.playProbabirity;
}