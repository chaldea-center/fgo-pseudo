void __fastcall WarBoardMessageMaster___ctor(WarBoardMessageMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E75AF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E75AF = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    412,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__);
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
    sub_B5D69C(this, entity);
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
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
      }
      result = v11->m_Items[0] <= checkValue;
      break;
    default:
      return 0;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarBoardTaskBase__o *__fastcall WarBoardMessageMaster__GetMessageTasks(
        WarBoardMessageMaster_o *this,
        int32_t stageId,
        int32_t type,
        int32_t checkValue,
        bool isValueByPlayer,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x19
  __int64 v42; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v44; // x1
  __int64 v45; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v47; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v52; // x3
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  unsigned __int64 v54; // x10
  int32_t *v55; // x11
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x1
  const MethodInfo *v59; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v60; // x25
  __int64 v61; // x9
  _BOOL8 v62; // x0
  __int64 v63; // x1
  System_Collections_Generic_IEnumerator_T__c *v64; // x8
  unsigned __int64 v65; // x10
  int32_t *v66; // x11
  __int64 v67; // x0
  _BOOL8 v68; // x0
  const MethodInfo *v69; // x2
  WarBoardMessageEntity_o *v70; // x0
  const MethodInfo *v71; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v72; // x19

  if ( (byte_42E75B0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      stageId,
      type,
      *(_QWORD *)&checkValue);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___, v11, v12, v13);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&WarBoardMessageEntity_TypeInfo, v38, v39, v40);
    byte_42E75B0 = 1;
  }
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v42);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v44);
  v47 = isValueByPlayer;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v49;
        p_offset += 4;
        if ( v49 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v45);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v53 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v54 = 0LL;
      v55 = &v53->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v55 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v54;
        v55 += 4;
        if ( v54 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v56 = (__int64)&v53->vtable[*v55].method;
    }
    else
    {
LABEL_17:
      v56 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v52);
    }
    v57 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
            Enumerator,
            *(_QWORD *)(v56 + 8));
    v60 = (EventMissionProgressRequest_Argument_ProgressData_o *)v57;
    if ( !v57 )
      goto LABEL_38;
    v61 = *(&WarBoardMessageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v57 + 300LL) < (unsigned int)v61
      || *(WarBoardMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)v57 + 200LL) + 8 * v61 - 8) != WarBoardMessageEntity_TypeInfo )
    {
      v57 = sub_B5D990(v57);
LABEL_38:
      sub_B5D69C(v57, v58);
    }
    if ( *(_DWORD *)(v57 + 16) == stageId && *(_DWORD *)(v57 + 20) == type )
    {
      v62 = WarBoardMessageMaster__CheckCondition(
              (WarBoardMessageMaster_o *)v57,
              (WarBoardMessageEntity_o *)v57,
              checkValue,
              v47,
              v59);
      if ( v62 )
      {
        if ( !v41 )
          sub_B5D69C(v62, v63);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v41,
          v60,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__);
      }
    }
  }
  v64 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v65 = 0LL;
    v66 = &v64->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
    {
      ++v65;
      v66 += 4;
      if ( v65 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v67 = (__int64)&v64->vtable[*v66].method;
  }
  else
  {
LABEL_31:
    v67 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v52);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v67)(Enumerator, *(_QWORD *)(v67 + 8));
  v68 = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v41,
          (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
  if ( v68 )
  {
    v70 = WarBoardMessageMaster__Lottery(
            (WarBoardMessageMaster_o *)v68,
            (System_Collections_Generic_List_WarBoardMessageEntity__o *)v41,
            v69);
    return WarBoardMessageMaster__GetTaskList((WarBoardMessageMaster_o *)v70, v70, v71);
  }
  else
  {
    v72 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v72,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  }
  return (System_Collections_Generic_List_WarBoardTaskBase__o *)v72;
}


System_Collections_Generic_List_WarBoardTaskBase__o *__fastcall WarBoardMessageMaster__GetTaskList(
        WarBoardMessageMaster_o *this,
        WarBoardMessageEntity_o *result,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  struct System_Int64_array *scriptIds; // x25
  __int64 v18; // x8
  unsigned __int64 v19; // x26
  int64_t v20; // x22
  int32_t stageId; // w23
  int32_t sceneType; // w24
  WarBoardFaceMessagePerformance_o *v23; // x21
  __int64 v25; // x0

  if ( (byte_42E75B2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&WarBoardFaceMessagePerformance_TypeInfo, v11, v12, v13);
    byte_42E75B2 = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !result )
    goto LABEL_12;
  scriptIds = result->fields.scriptIds;
  if ( !scriptIds )
    goto LABEL_12;
  v18 = *(_QWORD *)&scriptIds->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v18 )
      {
        v25 = sub_B5D6C8(v15);
        sub_B5D668(v25, 0LL);
      }
      v20 = scriptIds->m_Items[v19];
      stageId = result->fields.stageId;
      sceneType = result->fields.sceneType;
      v23 = (WarBoardFaceMessagePerformance_o *)sub_B5D694(WarBoardFaceMessagePerformance_TypeInfo);
      WarBoardFaceMessagePerformance___ctor(v23, stageId, sceneType, v20, 0LL);
      if ( !v14 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      LODWORD(v18) = scriptIds->max_length;
      if ( (__int64)++v19 >= (int)v18 )
        return (System_Collections_Generic_List_WarBoardTaskBase__o *)v14;
    }
LABEL_12:
    sub_B5D69C(v15, v16);
  }
  return (System_Collections_Generic_List_WarBoardTaskBase__o *)v14;
}


WarBoardMessageEntity_o *__fastcall WarBoardMessageMaster__Lottery(
        WarBoardMessageMaster_o *this,
        System_Collections_Generic_List_WarBoardMessageEntity__o *entities,
        const MethodInfo *method)
{
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  WarBoardMessageMaster___c_c *v26; // x0
  struct WarBoardMessageMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x20
  Il2CppObject *v29; // x21
  struct WarBoardMessageMaster___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Int32_array *v38; // x0
  __int64 RandomRangeIndex; // x0
  __int64 v40; // x1

  if ( (byte_42E75B1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___, (_DWORD)entities, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_WarBoardMessageEntity__int___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_WarBoardMessageEntity__int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardMessageEntity__get_Item__, v17, v18, v19);
    sub_B5D5C4(&Method_WarBoardMessageMaster___c__Lottery_b__4_0__, v20, v21, v22);
    sub_B5D5C4(&WarBoardMessageMaster___c_TypeInfo, v23, v24, v25);
    byte_42E75B1 = 1;
  }
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___) )
    return 0LL;
  v26 = WarBoardMessageMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageMaster___c_TypeInfo);
    v26 = WarBoardMessageMaster___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = WarBoardMessageMaster___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_WarBoardMessageEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__4_0,
      v29,
      Method_WarBoardMessageMaster___c__Lottery_b__4_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_WarBoardMessageEntity__int___ctor__);
    v30 = WarBoardMessageMaster___c_TypeInfo->static_fields;
    v30->__9__4_0 = (struct System_Func_WarBoardMessageEntity__int__o *)_9__4_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v30->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)entities,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___);
  v38 = System_Linq_Enumerable__ToArray_int_(
          v37,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v38, 0, 0LL);
  if ( !entities )
    sub_B5D69C(RandomRangeIndex, v40);
  if ( entities->fields._size <= (unsigned int)RandomRangeIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return entities->fields._items->m_Items[(int)RandomRangeIndex];
}


void __fastcall WarBoardMessageMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct WarBoardMessageMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5FA2 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardMessageMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5FA2 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardMessageMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = WarBoardMessageMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardMessageMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return ent->fields.playProbabirity;
}