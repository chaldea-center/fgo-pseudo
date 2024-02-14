void __fastcall WarBoardMessageMaster___ctor(WarBoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42132DB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__, method);
    byte_42132DB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    411,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__);
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
    sub_B0D97C(this);
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
        v12 = sub_B0D9A8(this);
        sub_B0D948(v12, 0LL);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  bool v24; // w24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  __int64 v33; // x0
  const MethodInfo *v34; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x25
  __int64 v36; // x9
  _BOOL8 v37; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  _BOOL8 v42; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x2
  WarBoardMessageEntity_o *v45; // x0
  const MethodInfo *v46; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x19

  if ( (byte_42132DC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&stageId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___, v11);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v12);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__, v17);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v18);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo, v19);
    sub_B0D8A4(&WarBoardMessageEntity_TypeInfo, v20);
    byte_42132DC = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo,
                                                                                                  *(_QWORD *)&stageId,
                                                                                                  *(_QWORD *)&type);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B0D97C(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  v24 = isValueByPlayer;
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        p_offset += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_17:
      v32 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
            Enumerator,
            *(_QWORD *)(v32 + 8));
    v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)v33;
    if ( !v33 )
      goto LABEL_38;
    v36 = *(&WarBoardMessageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v33 + 300LL) < (unsigned int)v36
      || *(WarBoardMessageEntity_c **)(*(_QWORD *)(*(_QWORD *)v33 + 200LL) + 8 * v36 - 8) != WarBoardMessageEntity_TypeInfo )
    {
      v33 = sub_B0DC70(v33);
LABEL_38:
      sub_B0D97C(v33);
    }
    if ( *(_DWORD *)(v33 + 16) == stageId && *(_DWORD *)(v33 + 20) == type )
    {
      v37 = WarBoardMessageMaster__CheckCondition(
              (WarBoardMessageMaster_o *)v33,
              (WarBoardMessageEntity_o *)v33,
              checkValue,
              v24,
              v34);
      if ( v37 )
      {
        if ( !v21 )
          sub_B0D97C(v37);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          v35,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__);
      }
    }
  }
  v38 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_31:
    v41 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  v42 = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
  if ( v42 )
  {
    v45 = WarBoardMessageMaster__Lottery(
            (WarBoardMessageMaster_o *)v42,
            (System_Collections_Generic_List_WarBoardMessageEntity__o *)v21,
            v44);
    return WarBoardMessageMaster__GetTaskList((WarBoardMessageMaster_o *)v45, v45, v46);
  }
  else
  {
    v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                    v43,
                                                                                                    v44);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v47,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  }
  return (System_Collections_Generic_List_WarBoardTaskBase__o *)v47;
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
  __int64 v10; // x2
  struct System_Int64_array *scriptIds; // x25
  __int64 v12; // x8
  unsigned __int64 v13; // x26
  int64_t v14; // x22
  int32_t stageId; // w23
  int32_t sceneType; // w24
  WarBoardFaceMessagePerformance_o *v17; // x21
  __int64 v19; // x0

  if ( (byte_42132DE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, result);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v5);
    sub_B0D8A4(&WarBoardFaceMessagePerformance_TypeInfo, v6);
    byte_42132DE = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                 result,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !result )
    goto LABEL_12;
  scriptIds = result->fields.scriptIds;
  if ( !scriptIds )
    goto LABEL_12;
  v12 = *(_QWORD *)&scriptIds->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
      {
        v19 = sub_B0D9A8(v8);
        sub_B0D948(v19, 0LL);
      }
      v14 = scriptIds->m_Items[v13];
      stageId = result->fields.stageId;
      sceneType = result->fields.sceneType;
      v17 = (WarBoardFaceMessagePerformance_o *)sub_B0D974(WarBoardFaceMessagePerformance_TypeInfo, v9, v10);
      WarBoardFaceMessagePerformance___ctor(v17, stageId, sceneType, v14, 0LL);
      if ( !v7 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      LODWORD(v12) = scriptIds->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        return (System_Collections_Generic_List_WarBoardTaskBase__o *)v7;
    }
LABEL_12:
    sub_B0D97C(v8);
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
  __int64 v11; // x1
  __int64 v12; // x2
  WarBoardMessageMaster___c_c *v13; // x0
  struct WarBoardMessageMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x20
  Il2CppObject *v16; // x21
  struct WarBoardMessageMaster___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Int32_array *v25; // x0
  __int64 RandomRangeIndex; // x0

  if ( (byte_42132DD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___, entities);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_B0D8A4(&Method_System_Func_WarBoardMessageEntity__int___ctor__, v6);
    sub_B0D8A4(&System_Func_WarBoardMessageEntity__int__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardMessageEntity__get_Item__, v8);
    sub_B0D8A4(&Method_WarBoardMessageMaster___c__Lottery_b__4_0__, v9);
    sub_B0D8A4(&WarBoardMessageMaster___c_TypeInfo, v10);
    byte_42132DD = 1;
  }
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___) )
    return 0LL;
  v13 = WarBoardMessageMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageMaster___c_TypeInfo);
    v13 = WarBoardMessageMaster___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = WarBoardMessageMaster___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                System_Func_WarBoardMessageEntity__int__TypeInfo,
                                                                                v11,
                                                                                v12);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__4_0,
      v16,
      Method_WarBoardMessageMaster___c__Lottery_b__4_0__,
      (const MethodInfo_2619564 *)Method_System_Func_WarBoardMessageEntity__int___ctor__);
    v17 = WarBoardMessageMaster___c_TypeInfo->static_fields;
    v17->__9__4_0 = (struct System_Func_WarBoardMessageEntity__int__o *)_9__4_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v17->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)entities,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___);
  v25 = System_Linq_Enumerable__ToArray_int_(
          v24,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v25, 0, 0LL);
  if ( !entities )
    sub_B0D97C(RandomRangeIndex);
  if ( entities->fields._size <= (unsigned int)RandomRangeIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  return entities->fields._items->m_Items[(int)RandomRangeIndex];
}


void __fastcall WarBoardMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_421386E & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardMessageMaster___c_TypeInfo, v1);
    byte_421386E = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardMessageMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardMessageMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
  return ent->fields.playProbabirity;
}