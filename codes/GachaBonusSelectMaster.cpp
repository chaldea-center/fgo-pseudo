void __fastcall GachaBonusSelectMaster___ctor(GachaBonusSelectMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC5F8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EC5F8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    188,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string___ctor__);
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

  if ( (byte_42EC5F6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__GetEntity__,
      gachaId,
      gachaBonusId,
      *(_QWORD *)&slot);
    byte_42EC5F6 = 1;
  }
  PK = GachaBonusSelectEntity__CreatePK(gachaId, gachaBonusId, slot, *(const MethodInfo **)&slot);
  return (GachaBonusSelectEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23FB260 *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__GetEntity__);
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

  if ( (byte_42EC5F7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__TryGetEntity__,
      (_DWORD)entity,
      gachaId,
      *(_QWORD *)&gachaBonusId);
    byte_42EC5F7 = 1;
  }
  PK = GachaBonusSelectEntity__CreatePK(gachaId, gachaBonusId, slot, *(const MethodInfo **)&gachaBonusId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__TryGetEntity__);
}


bool __fastcall GachaBonusSelectMaster__TryGetEntityArray(
        GachaBonusSelectMaster_o *this,
        GachaBonusSelectEntity_array **entityArray,
        int32_t gachaId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x20
  __int64 v47; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v49; // x1
  __int64 v50; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v53; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v56; // x3
  System_Collections_Generic_IEnumerator_T__c *v57; // x8
  unsigned __int64 v58; // x10
  int32_t *v59; // x11
  __int64 v60; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x11
  System_Collections_Generic_IEnumerator_T__c *v64; // x8
  unsigned __int64 v65; // x10
  int32_t *v66; // x11
  __int64 v67; // x0
  GachaBonusSelectMaster___c_c *v68; // x0
  struct GachaBonusSelectMaster___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x21
  Il2CppObject *v71; // x22
  struct GachaBonusSelectMaster___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  GachaBonusSelectEntity_array *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7

  if ( (byte_42EC5F9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)entityArray,
      gachaId,
      method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_GachaBonusSelectEntity__int___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_GachaBonusSelectEntity___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Func_GachaBonusSelectEntity__int___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Func_GachaBonusSelectEntity__int__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&GachaBonusSelectEntity_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaBonusSelectEntity__Add__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GachaBonusSelectEntity___ctor__, v34, v35, v36);
    sub_B5D5C4(&System_Collections_Generic_List_GachaBonusSelectEntity__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_GachaBonusSelectMaster___c__TryGetEntityArray_b__3_0__, v40, v41, v42);
    sub_B5D5C4(&GachaBonusSelectMaster___c_TypeInfo, v43, v44, v45);
    byte_42EC5F9 = 1;
  }
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GachaBonusSelectEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GachaBonusSelectEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v49);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v53 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v53;
        p_offset += 4;
        if ( v53 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v50);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v57 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v58 = 0LL;
      v59 = &v57->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v59 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v58;
        v59 += 4;
        if ( v58 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v60 = (__int64)&v57->vtable[*v59].method;
    }
    else
    {
LABEL_16:
      v60 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v56);
    }
    v61 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v60)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v60 + 8));
    if ( !v61
      || (v63 = *(&GachaBonusSelectEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v61->klass->_2.bitflags2 + 1) < (unsigned int)v63)
      || (GachaBonusSelectEntity_c *)v61->klass->_2.typeHierarchy[v63 - 1] != GachaBonusSelectEntity_TypeInfo )
    {
      sub_B5D69C(v61, v62);
    }
    if ( v61->fields.missionTargetId == gachaId )
    {
      if ( !v46 )
        sub_B5D69C(v61, v62);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v46,
        v61,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GachaBonusSelectEntity__Add__);
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
        goto LABEL_28;
    }
    v67 = (__int64)&v64->vtable[*v66].method;
  }
  else
  {
LABEL_28:
    v67 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v56);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v67)(Enumerator, *(_QWORD *)(v67 + 8));
  v68 = GachaBonusSelectMaster___c_TypeInfo;
  if ( (BYTE3(GachaBonusSelectMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaBonusSelectMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBonusSelectMaster___c_TypeInfo);
    v68 = GachaBonusSelectMaster___c_TypeInfo;
  }
  static_fields = v68->static_fields;
  _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      static_fields = GachaBonusSelectMaster___c_TypeInfo->static_fields;
    }
    v71 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_GachaBonusSelectEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_0,
      v71,
      Method_GachaBonusSelectMaster___c__TryGetEntityArray_b__3_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_GachaBonusSelectEntity__int___ctor__);
    v72 = GachaBonusSelectMaster___c_TypeInfo->static_fields;
    v72->__9__3_0 = (struct System_Func_GachaBonusSelectEntity__int__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v72->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
  }
  v79 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v46,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_GachaBonusSelectEntity__int___);
  v80 = (GachaBonusSelectEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                          v79,
                                          (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_GachaBonusSelectEntity___);
  *entityArray = v80;
  sub_B5D560((BattleServantConfConponent_o *)entityArray, (System_Int32_array **)v80, v81, v82, v83, v84, v85, v86);
  if ( !*entityArray )
LABEL_42:
    sub_B5D69C(list, v47);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v26; // x1
  System_String_array **v27; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v33; // x3
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  GachaBonusSelectEntity_o *v38; // x0
  __int64 v39; // x1
  System_String_array **v40; // x2
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x11
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0

  if ( (byte_42EC5FA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)selectEntity,
      gachaId,
      *(_QWORD *)&slot);
    sub_B5D5C4(&GachaBonusSelectEntity_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v21, v22, v23);
    byte_42EC5FA = 1;
  }
  *selectEntity = 0LL;
  sub_B5D560(
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
    sub_B5D69C(0LL, v24);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v26);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v30;
        p_offset += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v27);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v34 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v36 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v37 = (__int64)&v34->vtable[*v36].method;
    }
    else
    {
LABEL_16:
      v37 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v33);
    }
    v38 = (GachaBonusSelectEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(
                                        Enumerator,
                                        *(_QWORD *)(v37 + 8));
    if ( !v38
      || (v45 = *(&GachaBonusSelectEntity_TypeInfo->_2.bitflags2 + 1),
          *(&v38->klass->_2.bitflags2 + 1) < (unsigned int)v45)
      || (GachaBonusSelectEntity_c *)v38->klass->_2.typeHierarchy[v45 - 1] != GachaBonusSelectEntity_TypeInfo )
    {
      sub_B5D69C(v38, v39);
    }
    if ( v38->fields.gachaId == gachaId && v38->fields.slot == slot )
    {
      *selectEntity = v38;
      sub_B5D560((BattleServantConfConponent_o *)selectEntity, (System_Int32_array **)v38, v40, v27, v41, v42, v43, v44);
      break;
    }
  }
  v46 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_28:
    v49 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v33);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  return *selectEntity != 0LL;
}


void __fastcall GachaBonusSelectMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct GachaBonusSelectMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E56EB & 1) == 0 )
  {
    sub_B5D5C4(&GachaBonusSelectMaster___c_TypeInfo, v1, v2, v3);
    byte_42E56EB = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(GachaBonusSelectMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = GachaBonusSelectMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct GachaBonusSelectMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return x->fields.slot;
}