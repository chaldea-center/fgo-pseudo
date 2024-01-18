void __fastcall GachaBonusSelectMaster___ctor(GachaBonusSelectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418AFD4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string___ctor__, method);
    byte_418AFD4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    187,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string___ctor__);
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

  if ( (byte_418AFD2 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_418AFD2 = 1;
  }
  PK = GachaBonusSelectEntity__CreatePK(gachaId, gachaBonusId, slot, *(const MethodInfo **)&slot);
  return (GachaBonusSelectEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_24E4520 *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__GetEntity__);
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

  if ( (byte_418AFD3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__TryGetEntity__, entity);
    byte_418AFD3 = 1;
  }
  PK = GachaBonusSelectEntity__CreatePK(gachaId, gachaBonusId, slot, *(const MethodInfo **)&gachaBonusId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__TryGetEntity__);
}


bool __fastcall GachaBonusSelectMaster__TryGetEntityArray(
        GachaBonusSelectMaster_o *this,
        GachaBonusSelectEntity_array **entityArray,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v23; // x1
  __int64 v24; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v30; // x3
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x11
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  GachaBonusSelectMaster___c_c *v42; // x0
  struct GachaBonusSelectMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x21
  Il2CppObject *v45; // x22
  struct GachaBonusSelectMaster___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  GachaBonusSelectEntity_array *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7

  if ( (byte_418AFD5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, entityArray);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_GachaBonusSelectEntity__int___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_GachaBonusSelectEntity___, v8);
    sub_B2C35C(&Method_System_Func_GachaBonusSelectEntity__int___ctor__, v9);
    sub_B2C35C(&System_Func_GachaBonusSelectEntity__int__TypeInfo, v10);
    sub_B2C35C(&GachaBonusSelectEntity_TypeInfo, v11);
    sub_B2C35C(&System_IDisposable_TypeInfo, v12);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v13);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaBonusSelectEntity__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_GachaBonusSelectEntity___ctor__, v16);
    sub_B2C35C(&System_Collections_Generic_List_GachaBonusSelectEntity__TypeInfo, v17);
    sub_B2C35C(&Method_GachaBonusSelectMaster___c__TryGetEntityArray_b__3_0__, v18);
    sub_B2C35C(&GachaBonusSelectMaster___c_TypeInfo, v19);
    byte_418AFD5 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GachaBonusSelectEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GachaBonusSelectEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v23);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v27;
        p_offset += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v24);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v31 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_16:
      v34 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v30);
    }
    v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v34 + 8));
    if ( !v35
      || (v37 = *(&GachaBonusSelectEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v35->klass->_2.bitflags2 + 1) < (unsigned int)v37)
      || (GachaBonusSelectEntity_c *)v35->klass->_2.typeHierarchy[v37 - 1] != GachaBonusSelectEntity_TypeInfo )
    {
      sub_B2C434(v35, v36);
    }
    if ( v35->fields.missionTargetId == gachaId )
    {
      if ( !v20 )
        sub_B2C434(v35, v36);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v20,
        v35,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GachaBonusSelectEntity__Add__);
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
        goto LABEL_28;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_28:
    v41 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v30);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  v42 = GachaBonusSelectMaster___c_TypeInfo;
  if ( (BYTE3(GachaBonusSelectMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBonusSelectMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBonusSelectMaster___c_TypeInfo);
    v42 = GachaBonusSelectMaster___c_TypeInfo;
  }
  static_fields = v42->static_fields;
  _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      static_fields = GachaBonusSelectMaster___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_GachaBonusSelectEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_0,
      v45,
      Method_GachaBonusSelectMaster___c__TryGetEntityArray_b__3_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_GachaBonusSelectEntity__int___ctor__);
    v46 = GachaBonusSelectMaster___c_TypeInfo->static_fields;
    v46->__9__3_0 = (struct System_Func_GachaBonusSelectEntity__int__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v46->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_1A93658 *)Method_System_Linq_Enumerable_OrderBy_GachaBonusSelectEntity__int___);
  v54 = (GachaBonusSelectEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                          v53,
                                          (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_GachaBonusSelectEntity___);
  *entityArray = v54;
  sub_B2C2F8((BattleServantConfConponent_o *)entityArray, (System_Int32_array **)v54, v55, v56, v57, v58, v59, v60);
  if ( !*entityArray )
LABEL_42:
    sub_B2C434(list, v21);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v18; // x1
  System_String_array **v19; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x3
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  GachaBonusSelectEntity_o *v30; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x11
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0

  if ( (byte_418AFD6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, selectEntity);
    sub_B2C35C(&GachaBonusSelectEntity_TypeInfo, v12);
    sub_B2C35C(&System_IDisposable_TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v15);
    byte_418AFD6 = 1;
  }
  *selectEntity = 0LL;
  sub_B2C2F8(
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
    sub_B2C434(0LL, v16);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v28 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v25);
    }
    v30 = (GachaBonusSelectEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
                                        Enumerator,
                                        *(_QWORD *)(v29 + 8));
    if ( !v30
      || (v37 = *(&GachaBonusSelectEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v37)
      || (GachaBonusSelectEntity_c *)v30->klass->_2.typeHierarchy[v37 - 1] != GachaBonusSelectEntity_TypeInfo )
    {
      sub_B2C434(v30, v31);
    }
    if ( v30->fields.gachaId == gachaId && v30->fields.slot == slot )
    {
      *selectEntity = v30;
      sub_B2C2F8((BattleServantConfConponent_o *)selectEntity, (System_Int32_array **)v30, v32, v19, v33, v34, v35, v36);
      break;
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
        goto LABEL_28;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_28:
    v41 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v25);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  return *selectEntity != 0LL;
}


void __fastcall GachaBonusSelectMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct GachaBonusSelectMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41841E8 & 1) == 0 )
  {
    sub_B2C35C(&GachaBonusSelectMaster___c_TypeInfo, v1);
    byte_41841E8 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(GachaBonusSelectMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = GachaBonusSelectMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct GachaBonusSelectMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return x->fields.slot;
}