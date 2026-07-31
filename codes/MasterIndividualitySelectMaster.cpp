void MasterIndividualitySelectMaster___ctor(MasterIndividualitySelectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938BD8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_MasterIndividualitySelectMaster__MasterIndividualitySelectEntity__string___ctor__);
    byte_5938BD8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    555,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_MasterIndividualitySelectMaster__MasterIndividualitySelectEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
MasterIndividualitySelectEntity_o *MasterIndividualitySelectMaster__GetEntity(
        MasterIndividualitySelectMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938BD9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_MasterIndividualitySelectMaster__MasterIndividualitySelectEntity__string__GetEntity__);
    byte_5938BD9 = 1;
  }
  PK = (Il2CppObject *)MasterIndividualitySelectEntity__CreatePK(
                         questId,
                         phase,
                         priority,
                         *(const MethodInfo **)&priority);
  return (MasterIndividualitySelectEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_3EE2044 *)Method_DataMasterBase_MasterIndividualitySelectMaster__MasterIndividualitySelectEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool MasterIndividualitySelectMaster__TryGetEntity(
        MasterIndividualitySelectMaster_o *this,
        MasterIndividualitySelectEntity_o **entity,
        int32_t questId,
        int32_t phase,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938BDA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_MasterIndividualitySelectMaster__MasterIndividualitySelectEntity__string__TryGetEntity__);
    byte_5938BDA = 1;
  }
  PK = (Il2CppObject *)MasterIndividualitySelectEntity__CreatePK(questId, phase, priority, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_MasterIndividualitySelectMaster__MasterIndividualitySelectEntity__string__TryGetEntity__);
}


bool MasterIndividualitySelectMaster__TryGetEntityArray(
        MasterIndividualitySelectMaster_o *this,
        MasterIndividualitySelectEntity_array **entityArray,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x22
  System_Func_MasterIndividualitySelectEntity__bool__c *v13; // x0
  System_Func_object__bool__o *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  __int64 v16; // x1
  MasterIndividualitySelectMaster___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  struct MasterIndividualitySelectMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__0_1; // x21
  Il2CppObject *v21; // x22
  struct MasterIndividualitySelectMaster___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Object_array *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  if ( (byte_5938BD7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_MasterIndividualitySelectEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_MasterIndividualitySelectEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_MasterIndividualitySelectEntity___);
    sub_21FFC50(&System_Func_MasterIndividualitySelectEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_MasterIndividualitySelectEntity__int__TypeInfo);
    sub_21FFC50(&Method_MasterIndividualitySelectMaster___c__TryGetEntityArray_b__0_1__);
    sub_21FFC50(&Method_MasterIndividualitySelectMaster___c__DisplayClass0_0__TryGetEntityArray_b__0__);
    sub_21FFC50(&MasterIndividualitySelectMaster___c__DisplayClass0_0_TypeInfo);
    sub_21FFC50(&MasterIndividualitySelectMaster___c_TypeInfo);
    byte_5938BD7 = 1;
  }
  v9 = sub_21FFEBC(MasterIndividualitySelectMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_12;
  list = this->fields.list;
  v13 = System_Func_MasterIndividualitySelectEntity__bool__TypeInfo;
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = questPhase;
  v14 = (System_Func_object__bool__o *)sub_21FFEBC(v13);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_MasterIndividualitySelectMaster___c__DisplayClass0_0__TryGetEntityArray_b__0__,
    0);
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_MasterIndividualitySelectEntity___);
  v17 = MasterIndividualitySelectMaster___c_TypeInfo;
  v18 = v15;
  if ( !*(&MasterIndividualitySelectMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MasterIndividualitySelectMaster___c_TypeInfo, v16);
    v17 = MasterIndividualitySelectMaster___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__0_1 = (System_Func_object__int__o *)static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v16);
      static_fields = MasterIndividualitySelectMaster___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_MasterIndividualitySelectEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v21,
      Method_MasterIndividualitySelectMaster___c__TryGetEntityArray_b__0_1__,
      0);
    v22 = MasterIndividualitySelectMaster___c_TypeInfo->static_fields;
    v22->__9__0_1 = (struct System_Func_MasterIndividualitySelectEntity__int__o *)_9__0_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v22->__9__0_1, (int32_t)_9__0_1, v23, v24, v25, v26, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_MasterIndividualitySelectEntity__int___);
  v30 = System_Linq_Enumerable__ToArray_object_(
          v29,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_MasterIndividualitySelectEntity___);
  *entityArray = (MasterIndividualitySelectEntity_array *)v30;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)entityArray, (int32_t)v30, v31, v32, v33, v34, v35, v36);
  if ( !*entityArray )
LABEL_12:
    sub_21FFECC(v10, v11);
  return LODWORD((*entityArray)->max_length) != 0;
}


void MasterIndividualitySelectMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938BDB & 1) == 0 )
  {
    sub_21FFC50(&MasterIndividualitySelectMaster___c_TypeInfo);
    byte_5938BDB = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(MasterIndividualitySelectMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MasterIndividualitySelectMaster___c_TypeInfo->static_fields->__9 = (struct MasterIndividualitySelectMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)MasterIndividualitySelectMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MasterIndividualitySelectMaster___c___ctor(MasterIndividualitySelectMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t MasterIndividualitySelectMaster___c___TryGetEntityArray_b__0_1(
        MasterIndividualitySelectMaster___c_o *this,
        MasterIndividualitySelectEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.priority;
}


void MasterIndividualitySelectMaster___c__DisplayClass0_0___ctor(
        MasterIndividualitySelectMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MasterIndividualitySelectMaster___c__DisplayClass0_0___TryGetEntityArray_b__0(
        MasterIndividualitySelectMaster___c__DisplayClass0_0_o *this,
        MasterIndividualitySelectEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.questId == this->fields.questId && x->fields.phase == this->fields.questPhase;
}