void MasterIndividualitySelectMaster___ctor(MasterIndividualitySelectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37EB5 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_MasterIndividualitySelectMaster__MasterIndividualitySelectEntity__string___ctor__);
    byte_4C37EB5 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    553,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_MasterIndividualitySelectMaster__MasterIndividualitySelectEntity__string___ctor__);
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

  if ( (byte_4C37EB6 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_MasterIndividualitySelectMaster__MasterIndividualitySelectEntity__string__GetEntity__);
    byte_4C37EB6 = 1;
  }
  PK = (Il2CppObject *)MasterIndividualitySelectEntity__CreatePK(
                         questId,
                         phase,
                         priority,
                         *(const MethodInfo **)&priority);
  return (MasterIndividualitySelectEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_339B2F0 *)Method_DataMasterBase_MasterIndividualitySelectMaster__MasterIndividualitySelectEntity__string__GetEntity__);
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

  if ( (byte_4C37EB7 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_MasterIndividualitySelectMaster__MasterIndividualitySelectEntity__string__TryGetEntity__);
    byte_4C37EB7 = 1;
  }
  PK = (Il2CppObject *)MasterIndividualitySelectEntity__CreatePK(questId, phase, priority, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_MasterIndividualitySelectMaster__MasterIndividualitySelectEntity__string__TryGetEntity__);
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
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  MasterIndividualitySelectMaster___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_object__int__o *_9__0_1; // x21
  Il2CppObject *v17; // x22
  struct MasterIndividualitySelectMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Object_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4C37EB4 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_MasterIndividualitySelectEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_MasterIndividualitySelectEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_MasterIndividualitySelectEntity___);
    sub_1C32C20(&System_Func_MasterIndividualitySelectEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_MasterIndividualitySelectEntity__int__TypeInfo);
    sub_1C32C20(&Method_MasterIndividualitySelectMaster___c__TryGetEntityArray_b__0_1__);
    sub_1C32C20(&Method_MasterIndividualitySelectMaster___c__DisplayClass0_0__TryGetEntityArray_b__0__);
    sub_1C32C20(&MasterIndividualitySelectMaster___c__DisplayClass0_0_TypeInfo);
    sub_1C32C20(&MasterIndividualitySelectMaster___c_TypeInfo);
    byte_4C37EB4 = 1;
  }
  v9 = sub_1C32E6C(MasterIndividualitySelectMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_12;
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = questPhase;
  list = this->fields.list;
  v12 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_MasterIndividualitySelectEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v9,
    Method_MasterIndividualitySelectMaster___c__DisplayClass0_0__TryGetEntityArray_b__0__,
    0);
  v13 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_MasterIndividualitySelectEntity___);
  v14 = MasterIndividualitySelectMaster___c_TypeInfo;
  v15 = v13;
  if ( !MasterIndividualitySelectMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterIndividualitySelectMaster___c_TypeInfo);
    v14 = MasterIndividualitySelectMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v14->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = MasterIndividualitySelectMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_MasterIndividualitySelectEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v17,
      Method_MasterIndividualitySelectMaster___c__TryGetEntityArray_b__0_1__,
      0);
    static_fields = MasterIndividualitySelectMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_1 = (struct System_Func_MasterIndividualitySelectEntity__int__o *)_9__0_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__0_1, (int32_t)_9__0_1, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v15,
                                                               (System_Func_TSource__TKey__o *)_9__0_1,
                                                               (const MethodInfo_310D0C4 *)Method_System_Linq_Enumerable_OrderByDescending_MasterIndividualitySelectEntity__int___);
  v22 = System_Linq_Enumerable__ToArray_object_(
          v21,
          (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_MasterIndividualitySelectEntity___);
  *entityArray = (MasterIndividualitySelectEntity_array *)v22;
  sub_1C32BC4((CGThumbnailListItem_o *)entityArray, (int32_t)v22, v23, v24);
  if ( !*entityArray )
LABEL_12:
    sub_1C32E7C(v10);
  return LODWORD((*entityArray)->max_length) != 0;
}


void MasterIndividualitySelectMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37EB8 & 1) == 0 )
  {
    sub_1C32C20(&MasterIndividualitySelectMaster___c_TypeInfo);
    byte_4C37EB8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(MasterIndividualitySelectMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MasterIndividualitySelectMaster___c_TypeInfo->static_fields->__9 = (struct MasterIndividualitySelectMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)MasterIndividualitySelectMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return x->fields.questId == this->fields.questId && x->fields.phase == this->fields.questPhase;
}