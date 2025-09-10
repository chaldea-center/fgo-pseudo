void BlankEarthGimmickAddMaster___ctor(BlankEarthGimmickAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C26F4B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_BlankEarthGimmickAddMaster__BlankEarthGimmickAddEntity__string___ctor__);
    byte_4C26F4B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    523,
    (const MethodInfo_338A52C *)Method_DataMasterBase_BlankEarthGimmickAddMaster__BlankEarthGimmickAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthGimmickAddEntity_o *BlankEarthGimmickAddMaster__GetEntity(
        BlankEarthGimmickAddMaster_o *this,
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C26F4C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_BlankEarthGimmickAddMaster__BlankEarthGimmickAddEntity__string__GetEntity__);
    byte_4C26F4C = 1;
  }
  PK = (Il2CppObject *)BlankEarthGimmickAddEntity__CreatePK(
                         blankEarthSpotId,
                         priority,
                         overwriteType,
                         *(const MethodInfo **)&overwriteType);
  return (BlankEarthGimmickAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_338C850 *)Method_DataMasterBase_BlankEarthGimmickAddMaster__BlankEarthGimmickAddEntity__string__GetEntity__);
}


BlankEarthGimmickAddEntity_o *BlankEarthGimmickAddMaster__GetPrioredAvailableEntity(
        BlankEarthGimmickAddMaster_o *this,
        int32_t type,
        int32_t blankEarthSpotId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  __int64 v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_object__bool__o *v15; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  BlankEarthGimmickAddMaster___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  System_Func_object__int__o *_9__4_1; // x21
  Il2CppObject *v20; // x22
  struct BlankEarthGimmickAddMaster___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_object__bool__o *v25; // x21

  if ( (byte_4C26F4F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthGimmickAddEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_OfType_BlankEarthGimmickAddEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderBy_BlankEarthGimmickAddEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_BlankEarthGimmickAddEntity___);
    sub_1C2D490(&System_Func_BlankEarthGimmickAddEntity__bool__TypeInfo);
    sub_1C2D490(&System_Func_BlankEarthGimmickAddEntity__int__TypeInfo);
    sub_1C2D490(&Method_BlankEarthGimmickAddMaster___c__GetPrioredAvailableEntity_b__4_1__);
    sub_1C2D490(&Method_BlankEarthGimmickAddMaster___c__DisplayClass4_0__GetPrioredAvailableEntity_b__0__);
    sub_1C2D490(&Method_BlankEarthGimmickAddMaster___c__DisplayClass4_0__GetPrioredAvailableEntity_b__2__);
    sub_1C2D490(&BlankEarthGimmickAddMaster___c__DisplayClass4_0_TypeInfo);
    sub_1C2D490(&BlankEarthGimmickAddMaster___c_TypeInfo);
    byte_4C26F4F = 1;
  }
  v11 = sub_1C2D6DC(BlankEarthGimmickAddMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C2D6EC(v12, v13);
  *(_DWORD *)(v11 + 20) = type;
  *(_DWORD *)(v11 + 24) = beforeClearQuestId;
  *(_DWORD *)(v11 + 16) = blankEarthSpotId;
  *(_BYTE *)(v11 + 28) = isCheckResetFlag;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_30FDB2C *)Method_System_Linq_Enumerable_OfType_BlankEarthGimmickAddEntity___);
  v15 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BlankEarthGimmickAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_BlankEarthGimmickAddMaster___c__DisplayClass4_0__GetPrioredAvailableEntity_b__0__,
    0);
  v16 = System_Linq_Enumerable__Where_object_(
          v14,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_BlankEarthGimmickAddEntity___);
  v17 = BlankEarthGimmickAddMaster___c_TypeInfo;
  v18 = v16;
  if ( !BlankEarthGimmickAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthGimmickAddMaster___c_TypeInfo);
    v17 = BlankEarthGimmickAddMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__int__o *)v17->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = BlankEarthGimmickAddMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__4_1 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BlankEarthGimmickAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__4_1,
      v20,
      Method_BlankEarthGimmickAddMaster___c__GetPrioredAvailableEntity_b__4_1__,
      0);
    static_fields = BlankEarthGimmickAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = (struct System_Func_BlankEarthGimmickAddEntity__int__o *)_9__4_1;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__4_1, (int32_t)_9__4_1, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TKey__o *)_9__4_1,
                                                               (const MethodInfo_30FE0A4 *)Method_System_Linq_Enumerable_OrderBy_BlankEarthGimmickAddEntity__int___);
  v25 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BlankEarthGimmickAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v11,
    Method_BlankEarthGimmickAddMaster___c__DisplayClass4_0__GetPrioredAvailableEntity_b__2__,
    0);
  return (BlankEarthGimmickAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51348472(
                                           v24,
                                           (System_Func_TSource__bool__o *)v25,
                                           (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthGimmickAddEntity___);
}


bool BlankEarthGimmickAddMaster__HasAnyRecord(BlankEarthGimmickAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4C26F4E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickAddEntity__get_Count__);
    byte_4C26F4E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_BlankEarthGimmickAddEntity__get_Count__) > 0;
}


// local variable allocation has failed, the output may be wrong!
bool BlankEarthGimmickAddMaster__TryGetEntity(
        BlankEarthGimmickAddMaster_o *this,
        BlankEarthGimmickAddEntity_o **entity,
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C26F4D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_BlankEarthGimmickAddMaster__BlankEarthGimmickAddEntity__string__TryGetEntity__);
    byte_4C26F4D = 1;
  }
  PK = (Il2CppObject *)BlankEarthGimmickAddEntity__CreatePK(
                         blankEarthSpotId,
                         priority,
                         overwriteType,
                         *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_BlankEarthGimmickAddMaster__BlankEarthGimmickAddEntity__string__TryGetEntity__);
}


void BlankEarthGimmickAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C26F50 & 1) == 0 )
  {
    sub_1C2D490(&BlankEarthGimmickAddMaster___c_TypeInfo);
    byte_4C26F50 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BlankEarthGimmickAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BlankEarthGimmickAddMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthGimmickAddMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BlankEarthGimmickAddMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BlankEarthGimmickAddMaster___c___ctor(BlankEarthGimmickAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BlankEarthGimmickAddMaster___c___GetPrioredAvailableEntity_b__4_1(
        BlankEarthGimmickAddMaster___c_o *this,
        BlankEarthGimmickAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return -x->fields.priority;
}


void BlankEarthGimmickAddMaster___c__DisplayClass4_0___ctor(
        BlankEarthGimmickAddMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BlankEarthGimmickAddMaster___c__DisplayClass4_0___GetPrioredAvailableEntity_b__0(
        BlankEarthGimmickAddMaster___c__DisplayClass4_0_o *this,
        BlankEarthGimmickAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.gimmickId == this->fields.blankEarthSpotId && x->fields.overwriteType == this->fields.typeAsInt;
}


bool BlankEarthGimmickAddMaster___c__DisplayClass4_0___GetPrioredAvailableEntity_b__2(
        BlankEarthGimmickAddMaster___c__DisplayClass4_0_o *this,
        BlankEarthGimmickAddEntity_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !x )
    sub_1C2D6EC(this, 0);
  return BlankEarthGimmickAddEntity__IsOpen(x, this->fields.beforeClearQuestId, this->fields.isCheckResetFlag, v3);
}