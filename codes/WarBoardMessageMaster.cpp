void __fastcall WarBoardMessageMaster___ctor(WarBoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186529 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__, method);
    byte_4186529 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    411,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__);
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
    sub_B2C434(this, entity);
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
        v12 = sub_B2C460(this);
        sub_B2C400(v12, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x19
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v27; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v32; // x3
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  unsigned __int64 v34; // x10
  int32_t *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v40; // x25
  __int64 v41; // x9
  _BOOL8 v42; // x0
  __int64 v43; // x1
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  unsigned __int64 v45; // x10
  int32_t *v46; // x11
  __int64 v47; // x0
  _BOOL8 v48; // x0
  const MethodInfo *v49; // x2
  WarBoardMessageEntity_o *v50; // x0
  const MethodInfo *v51; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x19

  if ( (byte_418652A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&stageId);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___, v11);
    sub_B2C35C(&System_IDisposable_TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__, v17);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v18);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo, v19);
    sub_B2C35C(&WarBoardMessageEntity_TypeInfo, v20);
    byte_418652A = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v22);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v24);
  v27 = isValueByPlayer;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v29;
        p_offset += 4;
        if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v25);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v33 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v35 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_17:
      v36 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v32);
    }
    v37 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(
            Enumerator,
            *(_QWORD *)(v36 + 8));
    v40 = (EventMissionProgressRequest_Argument_ProgressData_o *)v37;
    if ( !v37 )
      goto LABEL_38;
    v41 = *(&WarBoardMessageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v37 + 300LL) < (unsigned int)v41
      || *(WarBoardMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)v37 + 200LL) + 8 * v41 - 8) != WarBoardMessageEntity_TypeInfo )
    {
      v37 = sub_B2C728(v37);
LABEL_38:
      sub_B2C434(v37, v38);
    }
    if ( *(_DWORD *)(v37 + 16) == stageId && *(_DWORD *)(v37 + 20) == type )
    {
      v42 = WarBoardMessageMaster__CheckCondition(
              (WarBoardMessageMaster_o *)v37,
              (WarBoardMessageEntity_o *)v37,
              checkValue,
              v27,
              v39);
      if ( v42 )
      {
        if ( !v21 )
          sub_B2C434(v42, v43);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          v40,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__);
      }
    }
  }
  v44 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v45 = 0LL;
    v46 = &v44->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      ++v45;
      v46 += 4;
      if ( v45 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v47 = (__int64)&v44->vtable[*v46].method;
  }
  else
  {
LABEL_31:
    v47 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v32);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(Enumerator, *(_QWORD *)(v47 + 8));
  v48 = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
  if ( v48 )
  {
    v50 = WarBoardMessageMaster__Lottery(
            (WarBoardMessageMaster_o *)v48,
            (System_Collections_Generic_List_WarBoardMessageEntity__o *)v21,
            v49);
    return WarBoardMessageMaster__GetTaskList((WarBoardMessageMaster_o *)v50, v50, v51);
  }
  else
  {
    v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v52,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  }
  return (System_Collections_Generic_List_WarBoardTaskBase__o *)v52;
}


System_Collections_Generic_List_WarBoardTaskBase__o *__fastcall WarBoardMessageMaster__GetTaskList(
        WarBoardMessageMaster_o *this,
        WarBoardMessageEntity_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Int64_array *scriptIds; // x25
  __int64 v11; // x8
  unsigned __int64 v12; // x26
  int64_t v13; // x22
  int32_t stageId; // w23
  int32_t sceneType; // w24
  WarBoardFaceMessagePerformance_o *v16; // x21
  __int64 v18; // x0

  if ( (byte_418652C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, result);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v5);
    sub_B2C35C(&WarBoardFaceMessagePerformance_TypeInfo, v6);
    byte_418652C = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !result )
    goto LABEL_12;
  scriptIds = result->fields.scriptIds;
  if ( !scriptIds )
    goto LABEL_12;
  v11 = *(_QWORD *)&scriptIds->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
      {
        v18 = sub_B2C460(v8);
        sub_B2C400(v18, 0LL);
      }
      v13 = scriptIds->m_Items[v12];
      stageId = result->fields.stageId;
      sceneType = result->fields.sceneType;
      v16 = (WarBoardFaceMessagePerformance_o *)sub_B2C42C(WarBoardFaceMessagePerformance_TypeInfo);
      WarBoardFaceMessagePerformance___ctor(v16, stageId, sceneType, v13, 0LL);
      if ( !v7 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      LODWORD(v11) = scriptIds->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        return (System_Collections_Generic_List_WarBoardTaskBase__o *)v7;
    }
LABEL_12:
    sub_B2C434(v8, v9);
  }
  return (System_Collections_Generic_List_WarBoardTaskBase__o *)v7;
}


WarBoardMessageEntity_o *__fastcall WarBoardMessageMaster__Lottery(
        WarBoardMessageMaster_o *this,
        System_Collections_Generic_List_WarBoardMessageEntity__o *entities,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardMessageMaster___c_c *v11; // x0
  struct WarBoardMessageMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x20
  Il2CppObject *v14; // x21
  struct WarBoardMessageMaster___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Int32_array *v23; // x0
  __int64 RandomRangeIndex; // x0
  __int64 v25; // x1

  if ( (byte_418652B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___, entities);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_B2C35C(&Method_System_Func_WarBoardMessageEntity__int___ctor__, v6);
    sub_B2C35C(&System_Func_WarBoardMessageEntity__int__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardMessageEntity__get_Item__, v8);
    sub_B2C35C(&Method_WarBoardMessageMaster___c__Lottery_b__4_0__, v9);
    sub_B2C35C(&WarBoardMessageMaster___c_TypeInfo, v10);
    byte_418652B = 1;
  }
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___) )
    return 0LL;
  v11 = WarBoardMessageMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageMaster___c_TypeInfo);
    v11 = WarBoardMessageMaster___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = WarBoardMessageMaster___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_WarBoardMessageEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__4_0,
      v14,
      Method_WarBoardMessageMaster___c__Lottery_b__4_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_WarBoardMessageEntity__int___ctor__);
    v15 = WarBoardMessageMaster___c_TypeInfo->static_fields;
    v15->__9__4_0 = (struct System_Func_WarBoardMessageEntity__int__o *)_9__4_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v15->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)entities,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___);
  v23 = System_Linq_Enumerable__ToArray_int_(
          v22,
          (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v23, 0, 0LL);
  if ( !entities )
    sub_B2C434(RandomRangeIndex, v25);
  if ( entities->fields._size <= (unsigned int)RandomRangeIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  return entities->fields._items->m_Items[(int)RandomRangeIndex];
}


void __fastcall WarBoardMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_41866F3 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardMessageMaster___c_TypeInfo, v1);
    byte_41866F3 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardMessageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardMessageMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, 0LL);
  return ent->fields.playProbabirity;
}