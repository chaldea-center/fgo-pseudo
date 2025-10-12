void BlankEarthSpotAddMaster___ctor(BlankEarthSpotAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37650 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string___ctor__);
    byte_4C37650 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    19,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotAddEntity_o *BlankEarthSpotAddMaster__GetEntity(
        BlankEarthSpotAddMaster_o *this,
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37651 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__GetEntity__);
    byte_4C37651 = 1;
  }
  PK = (Il2CppObject *)BlankEarthSpotAddEntity__CreatePK(
                         blankEarthSpotId,
                         priority,
                         overwriteType,
                         *(const MethodInfo **)&overwriteType);
  return (BlankEarthSpotAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_339B2F0 *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__GetEntity__);
}


BlankEarthSpotAddEntity_o *BlankEarthSpotAddMaster__GetPrioredAvailableEntity(
        BlankEarthSpotAddMaster_o *this,
        int32_t type,
        int32_t blankEarthSpotId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v11; // x19
  __int64 v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  System_Func_object__bool__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  BlankEarthSpotAddMaster___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  System_Func_object__int__o *_9__1_1; // x21
  Il2CppObject *v19; // x22
  struct BlankEarthSpotAddMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  System_Func_object__bool__o *v24; // x21

  if ( (byte_4C3764F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAddEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OfType_BlankEarthSpotAddEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAddEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BlankEarthSpotAddEntity___);
    sub_1C32C20(&System_Func_BlankEarthSpotAddEntity__int__TypeInfo);
    sub_1C32C20(&System_Func_BlankEarthSpotAddEntity__bool__TypeInfo);
    sub_1C32C20(&Method_BlankEarthSpotAddMaster___c__GetPrioredAvailableEntity_b__1_1__);
    sub_1C32C20(&Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__0__);
    sub_1C32C20(&Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__2__);
    sub_1C32C20(&BlankEarthSpotAddMaster___c__DisplayClass1_0_TypeInfo);
    sub_1C32C20(&BlankEarthSpotAddMaster___c_TypeInfo);
    byte_4C3764F = 1;
  }
  v11 = sub_1C32E6C(BlankEarthSpotAddMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C32E7C(v12);
  *(_DWORD *)(v11 + 20) = type;
  *(_DWORD *)(v11 + 24) = beforeClearQuestId;
  *(_DWORD *)(v11 + 16) = blankEarthSpotId;
  *(_BYTE *)(v11 + 28) = isCheckResetFlag;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_310C5CC *)Method_System_Linq_Enumerable_OfType_BlankEarthSpotAddEntity___);
  v14 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BlankEarthSpotAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v11,
    Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__0__,
    0);
  v15 = System_Linq_Enumerable__Where_object_(
          v13,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BlankEarthSpotAddEntity___);
  v16 = BlankEarthSpotAddMaster___c_TypeInfo;
  v17 = v15;
  if ( !BlankEarthSpotAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotAddMaster___c_TypeInfo);
    v16 = BlankEarthSpotAddMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v16->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BlankEarthSpotAddMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_BlankEarthSpotAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__1_1,
      v19,
      Method_BlankEarthSpotAddMaster___c__GetPrioredAvailableEntity_b__1_1__,
      0);
    static_fields = BlankEarthSpotAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_1 = (struct System_Func_BlankEarthSpotAddEntity__int__o *)_9__1_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__1_1, (int32_t)_9__1_1, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v17,
                                                               (System_Func_TSource__TKey__o *)_9__1_1,
                                                               (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAddEntity__int___);
  v24 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BlankEarthSpotAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v11,
    Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__2__,
    0);
  return (BlankEarthSpotAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                        v23,
                                        (System_Func_TSource__bool__o *)v24,
                                        (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAddEntity___);
}


bool BlankEarthSpotAddMaster__HasAnyRecord(BlankEarthSpotAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4C3764E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_BlankEarthSpotAddEntity__get_Count__);
    byte_4C3764E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_BlankEarthSpotAddEntity__get_Count__) > 0;
}


// local variable allocation has failed, the output may be wrong!
bool BlankEarthSpotAddMaster__TryGetEntity(
        BlankEarthSpotAddMaster_o *this,
        BlankEarthSpotAddEntity_o **entity,
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37652 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__TryGetEntity__);
    byte_4C37652 = 1;
  }
  PK = (Il2CppObject *)BlankEarthSpotAddEntity__CreatePK(
                         blankEarthSpotId,
                         priority,
                         overwriteType,
                         *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__TryGetEntity__);
}


void BlankEarthSpotAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37653 & 1) == 0 )
  {
    sub_1C32C20(&BlankEarthSpotAddMaster___c_TypeInfo);
    byte_4C37653 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BlankEarthSpotAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BlankEarthSpotAddMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotAddMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BlankEarthSpotAddMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BlankEarthSpotAddMaster___c___ctor(BlankEarthSpotAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BlankEarthSpotAddMaster___c___GetPrioredAvailableEntity_b__1_1(
        BlankEarthSpotAddMaster___c_o *this,
        BlankEarthSpotAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return -x->fields.priority;
}


void BlankEarthSpotAddMaster___c__DisplayClass1_0___ctor(
        BlankEarthSpotAddMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BlankEarthSpotAddMaster___c__DisplayClass1_0___GetPrioredAvailableEntity_b__0(
        BlankEarthSpotAddMaster___c__DisplayClass1_0_o *this,
        BlankEarthSpotAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.blankEarthSpotId == this->fields.blankEarthSpotId
      && x->fields.overwriteType == this->fields.typeAsInt;
}


bool BlankEarthSpotAddMaster___c__DisplayClass1_0___GetPrioredAvailableEntity_b__2(
        BlankEarthSpotAddMaster___c__DisplayClass1_0_o *this,
        BlankEarthSpotAddEntity_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !x )
    sub_1C32E7C(this);
  return BlankEarthSpotAddEntity__IsOpen(x, this->fields.beforeClearQuestId, this->fields.isCheckResetFlag, v3);
}