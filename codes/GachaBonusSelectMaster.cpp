void __fastcall GachaBonusSelectMaster___ctor(GachaBonusSelectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B3B08 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string___ctor__);
    byte_42B3B08 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    188,
    (const MethodInfo_23E268C *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBonusSelectEntity_o *__fastcall GachaBonusSelectMaster__GetEntity(
        GachaBonusSelectMaster_o *this,
        int32_t gachaId,
        int32_t gachaBonusId,
        int32_t slot,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B3B06 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__GetEntity__);
    byte_42B3B06 = 1;
  }
  PK = GachaBonusSelectEntity__CreatePK(gachaId, gachaBonusId, slot, *(const MethodInfo **)&slot);
  return (GachaBonusSelectEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23E2728 *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaBonusSelectMaster__TryGetEntity(
        GachaBonusSelectMaster_o *this,
        GachaBonusSelectEntity_o **entity,
        int32_t gachaId,
        int32_t gachaBonusId,
        int32_t slot,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B3B07 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__TryGetEntity__);
    byte_42B3B07 = 1;
  }
  PK = GachaBonusSelectEntity__CreatePK(gachaId, gachaBonusId, slot, *(const MethodInfo **)&gachaBonusId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__TryGetEntity__);
}


bool __fastcall GachaBonusSelectMaster__TryGetEntityArray(
        GachaBonusSelectMaster_o *this,
        GachaBonusSelectEntity_array **entityArray,
        int32_t gachaId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x11
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  GachaBonusSelectMaster___c_c *v29; // x0
  struct GachaBonusSelectMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x21
  Il2CppObject *v32; // x22
  struct GachaBonusSelectMaster___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  GachaBonusSelectEntity_array *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_42B3B09 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Linq_Enumerable_OrderBy_GachaBonusSelectEntity__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_GachaBonusSelectEntity___);
    sub_B52984(&Method_System_Func_GachaBonusSelectEntity__int___ctor__);
    sub_B52984(&System_Func_GachaBonusSelectEntity__int__TypeInfo);
    sub_B52984(&GachaBonusSelectEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GachaBonusSelectEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GachaBonusSelectEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_GachaBonusSelectEntity__TypeInfo);
    sub_B52984(&Method_GachaBonusSelectMaster___c__TryGetEntityArray_b__3_0__);
    sub_B52984(&GachaBonusSelectMaster___c_TypeInfo);
    byte_42B3B09 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GachaBonusSelectEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GachaBonusSelectEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v17);
    }
    v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v21 + 8));
    if ( !v22
      || (v24 = *(&GachaBonusSelectEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v22->klass->_2.bitflags2 + 1) < (unsigned int)v24)
      || (GachaBonusSelectEntity_c *)v22->klass->_2.typeHierarchy[v24 - 1] != GachaBonusSelectEntity_TypeInfo )
    {
      sub_B52A5C(v22, v23);
    }
    if ( v22->fields.missionTargetId == gachaId )
    {
      if ( !v7 )
        sub_B52A5C(v22, v23);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v7,
        v22,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GachaBonusSelectEntity__Add__);
    }
  }
  v25 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_28:
    v28 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  v29 = GachaBonusSelectMaster___c_TypeInfo;
  if ( (BYTE3(GachaBonusSelectMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBonusSelectMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBonusSelectMaster___c_TypeInfo);
    v29 = GachaBonusSelectMaster___c_TypeInfo;
  }
  static_fields = v29->static_fields;
  _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = GachaBonusSelectMaster___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_GachaBonusSelectEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_0,
      v32,
      Method_GachaBonusSelectMaster___c__TryGetEntityArray_b__3_0__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_GachaBonusSelectEntity__int___ctor__);
    v33 = GachaBonusSelectMaster___c_TypeInfo->static_fields;
    v33->__9__3_0 = (struct System_Func_GachaBonusSelectEntity__int__o *)_9__3_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v33->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_1B66330 *)Method_System_Linq_Enumerable_OrderBy_GachaBonusSelectEntity__int___);
  v41 = (GachaBonusSelectEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                          v40,
                                          (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_GachaBonusSelectEntity___);
  *entityArray = v41;
  sub_B52920((BattleServantConfConponent_o *)entityArray, (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
  if ( !*entityArray )
LABEL_42:
    sub_B52A5C(list, v8);
  return (*entityArray)->max_length != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaBonusSelectMaster__TryGetEntitySlot(
        GachaBonusSelectMaster_o *this,
        GachaBonusSelectEntity_o **selectEntity,
        int32_t gachaId,
        int32_t slot,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v14; // x1
  System_String_array **v15; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  GachaBonusSelectEntity_o *v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x11
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0

  if ( (byte_42B3B0A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&GachaBonusSelectEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42B3B0A = 1;
  }
  *selectEntity = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)selectEntity,
    0LL,
    *(System_String_array ***)&gachaId,
    *(System_String_array ***)&slot,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v14);
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v15);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v21);
    }
    v26 = (GachaBonusSelectEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                        Enumerator,
                                        *(_QWORD *)(v25 + 8));
    if ( !v26
      || (v33 = *(&GachaBonusSelectEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v33)
      || (GachaBonusSelectEntity_c *)v26->klass->_2.typeHierarchy[v33 - 1] != GachaBonusSelectEntity_TypeInfo )
    {
      sub_B52A5C(v26, v27);
    }
    if ( v26->fields.gachaId == gachaId && v26->fields.slot == slot )
    {
      *selectEntity = v26;
      sub_B52920((BattleServantConfConponent_o *)selectEntity, (System_Int32_array **)v26, v28, v15, v29, v30, v31, v32);
      break;
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
        goto LABEL_28;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_28:
    v37 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v21);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return *selectEntity != 0LL;
}


void __fastcall GachaBonusSelectMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct GachaBonusSelectMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42ACE33 & 1) == 0 )
  {
    sub_B52984(&GachaBonusSelectMaster___c_TypeInfo);
    byte_42ACE33 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(GachaBonusSelectMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = GachaBonusSelectMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct GachaBonusSelectMaster___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall GachaBonusSelectMaster___c___ctor(GachaBonusSelectMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall GachaBonusSelectMaster___c___TryGetEntityArray_b__3_0(
        GachaBonusSelectMaster___c_o *this,
        GachaBonusSelectEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.slot;
}