void __fastcall WarBoardMessageMaster___ctor(WarBoardMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F8572 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__, method);
    byte_40F8572 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    411,
    (const MethodInfo_266F73C *)Method_DataMasterBase_WarBoardMessageMaster__WarBoardMessageEntity__string___ctor__);
}


bool __fastcall WarBoardMessageMaster__CheckCondition(
        WarBoardMessageMaster_o *this,
        WarBoardMessageEntity_o *entity,
        int32_t checkValue,
        bool isValueByPlayer,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  bool result; // w0
  struct System_Int64_array *playCondValues; // x8
  struct System_Int64_array *v13; // x8
  struct System_Int64_array *v14; // x8

  if ( !entity )
LABEL_24:
    sub_B170D4();
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity->fields.playCondValues, 0LL);
  if ( IsNullOrEmpty )
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
      v13 = entity->fields.playCondValues;
      if ( !v13 )
        goto LABEL_24;
      if ( !v13->max_length )
        goto LABEL_25;
      result = v13->m_Items[0] >= checkValue;
      break;
    case 6:
      if ( isValueByPlayer )
        return 0;
LABEL_21:
      v14 = entity->fields.playCondValues;
      if ( !v14 )
        goto LABEL_24;
      if ( !v14->max_length )
      {
LABEL_25:
        sub_B17100(IsNullOrEmpty, v9, v10);
        sub_B170A0();
      }
      result = v14->m_Items[0] <= checkValue;
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
  WarBoardMessageMaster_o *v33; // x0
  const MethodInfo *v34; // x4
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x25
  __int64 v36; // x9
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  _BOOL8 v41; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  WarBoardMessageEntity_o *v46; // x0
  const MethodInfo *v47; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x19

  if ( (byte_40F8573 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&stageId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___, v11);
    sub_B16FFC(&System_IDisposable_TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__, v17);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v18);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo, v19);
    sub_B16FFC(&WarBoardMessageEntity_TypeInfo, v20);
    byte_40F8573 = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardMessageEntity__TypeInfo,
                                                                                                  *(_QWORD *)&stageId,
                                                                                                  *(_QWORD *)&type,
                                                                                                  *(_QWORD *)&checkValue,
                                                                                                  isValueByPlayer);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardMessageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
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
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v32 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v33 = (WarBoardMessageMaster_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                       Enumerator,
                                       *(_QWORD *)(v32 + 8));
    v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)v33;
    if ( !v33 )
      goto LABEL_38;
    v36 = *(&WarBoardMessageEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v33->klass->_2.bitflags2 + 1) < (unsigned int)v36
      || (WarBoardMessageEntity_c *)v33->klass->_2.typeHierarchy[v36 - 1] != WarBoardMessageEntity_TypeInfo )
    {
      sub_B173C8(v33);
LABEL_38:
      sub_B170D4();
    }
    if ( v33->fields._MasterKind_k__BackingField == stageId
      && *(&v33->fields._MasterKind_k__BackingField + 1) == type
      && WarBoardMessageMaster__CheckCondition(v33, (WarBoardMessageEntity_o *)v33, checkValue, v24, v34) )
    {
      if ( !v21 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v21,
        v35,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardMessageEntity__Add__);
    }
  }
  v37 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_31:
    v40 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  v41 = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___);
  if ( v41 )
  {
    v46 = WarBoardMessageMaster__Lottery(
            (WarBoardMessageMaster_o *)v41,
            (System_Collections_Generic_List_WarBoardMessageEntity__o *)v21,
            v43);
    return WarBoardMessageMaster__GetTaskList((WarBoardMessageMaster_o *)v46, v46, v47);
  }
  else
  {
    v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                    v42,
                                                                                                    v43,
                                                                                                    v44,
                                                                                                    v45);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v48,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  }
  return (System_Collections_Generic_List_WarBoardTaskBase__o *)v48;
}


System_Collections_Generic_List_WarBoardTaskBase__o *__fastcall WarBoardMessageMaster__GetTaskList(
        WarBoardMessageMaster_o *this,
        WarBoardMessageEntity_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct System_Int64_array *scriptIds; // x25
  __int64 v16; // x8
  unsigned __int64 v17; // x26
  int64_t v18; // x22
  int32_t stageId; // w23
  int32_t sceneType; // w24
  WarBoardFaceMessagePerformance_o *v21; // x21

  if ( (byte_40F8575 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, result);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v7);
    sub_B16FFC(&WarBoardFaceMessagePerformance_TypeInfo, v8);
    byte_40F8575 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                 result,
                                                                                                 method,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  if ( !result )
    goto LABEL_12;
  scriptIds = result->fields.scriptIds;
  if ( !scriptIds )
    goto LABEL_12;
  v16 = *(_QWORD *)&scriptIds->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
      {
        sub_B17100(v10, v11, v12);
        sub_B170A0();
      }
      v18 = scriptIds->m_Items[v17];
      stageId = result->fields.stageId;
      sceneType = result->fields.sceneType;
      v21 = (WarBoardFaceMessagePerformance_o *)sub_B170CC(WarBoardFaceMessagePerformance_TypeInfo, v11, v12, v13, v14);
      WarBoardFaceMessagePerformance___ctor(v21, stageId, sceneType, v18, 0LL);
      if ( !v9 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
      LODWORD(v16) = scriptIds->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        return (System_Collections_Generic_List_WarBoardTaskBase__o *)v9;
    }
LABEL_12:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_WarBoardTaskBase__o *)v9;
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
  __int64 v13; // x3
  __int64 v14; // x4
  WarBoardMessageMaster___c_c *v15; // x0
  struct WarBoardMessageMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__4_0; // x20
  Il2CppObject *v18; // x21
  struct WarBoardMessageMaster___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Int32_array *v27; // x0
  unsigned int RandomRangeIndex; // w0

  if ( (byte_40F8574 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___, entities);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_B16FFC(&Method_System_Func_WarBoardMessageEntity__int___ctor__, v6);
    sub_B16FFC(&System_Func_WarBoardMessageEntity__int__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardMessageEntity__get_Item__, v8);
    sub_B16FFC(&Method_WarBoardMessageMaster___c__Lottery_b__4_0__, v9);
    sub_B16FFC(&WarBoardMessageMaster___c_TypeInfo, v10);
    byte_40F8574 = 1;
  }
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)entities,
          (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_WarBoardMessageEntity___) )
    return 0LL;
  v15 = WarBoardMessageMaster___c_TypeInfo;
  if ( (BYTE3(WarBoardMessageMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageMaster___c_TypeInfo);
    v15 = WarBoardMessageMaster___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = WarBoardMessageMaster___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_WarBoardMessageEntity__int__TypeInfo,
                                                                                v11,
                                                                                v12,
                                                                                v13,
                                                                                v14);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__4_0,
      v18,
      Method_WarBoardMessageMaster___c__Lottery_b__4_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_WarBoardMessageEntity__int___ctor__);
    v19 = WarBoardMessageMaster___c_TypeInfo->static_fields;
    v19->__9__4_0 = (struct System_Func_WarBoardMessageEntity__int__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v19->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)entities,
                                                               (System_Func_TSource__TResult__o *)_9__4_0,
                                                               (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_WarBoardMessageEntity__int___);
  v27 = System_Linq_Enumerable__ToArray_int_(
          v26,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  RandomRangeIndex = RandomUtility__GetRandomRangeIndex(v27, 0, 0LL);
  if ( !entities )
    sub_B170D4();
  if ( entities->fields._size <= RandomRangeIndex )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  return entities->fields._items->m_Items[RandomRangeIndex];
}


void __fastcall WarBoardMessageMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7847 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardMessageMaster___c_TypeInfo, v1);
    byte_40F7847 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardMessageMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardMessageMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return ent->fields.playProbabirity;
}