void ServantAnimationOverwriteMaster___ctor(ServantAnimationOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C437E4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string___ctor__);
    byte_4C437E4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    316,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantAnimationOverwriteEntity_o *ServantAnimationOverwriteMaster__GetEntity(
        ServantAnimationOverwriteMaster_o *this,
        int32_t svtId,
        int32_t svtLimitCount,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C437E1 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__GetEntity__);
    byte_4C437E1 = 1;
  }
  PK = (Il2CppObject *)ServantAnimationOverwriteEntity__CreatePK(svtId, svtLimitCount, idx, *(const MethodInfo **)&idx);
  return (ServantAnimationOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_33A5B58 *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__GetEntity__);
}


ServantAnimationOverwriteEntity_array *ServantAnimationOverwriteMaster__GetList(
        ServantAnimationOverwriteMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int v13; // w8
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v15; // x20
  System_Collections_IEnumerable_o *v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4C437E5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Cast_ServantAnimationOverwriteEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_ServantAnimationOverwriteEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_ServantAnimationOverwriteEntity___);
    sub_1C37058(&System_Func_ServantAnimationOverwriteEntity__bool__TypeInfo);
    sub_1C37058(&Method_ServantAnimationOverwriteMaster___c__DisplayClass5_0__GetList_b__0__);
    sub_1C37058(&ServantAnimationOverwriteMaster___c__DisplayClass5_0_TypeInfo);
    byte_4C437E5 = 1;
  }
  v9 = sub_1C372A4(ServantAnimationOverwriteMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  if ( isEnemy )
    v13 = 2;
  else
    v13 = 1;
  *(_DWORD *)(v9 + 24) = svtId;
  *(_DWORD *)(v9 + 28) = limitCount;
  *(_DWORD *)(v9 + 32) = v13;
  list = this->fields.list;
  v15 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ServantAnimationOverwriteEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_ServantAnimationOverwriteMaster___c__DisplayClass5_0__GetList_b__0__,
    0);
  v16 = (System_Collections_IEnumerable_o *)System_Linq_Enumerable__Where_object_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                              (System_Func_TSource__bool__o *)v15,
                                              (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_ServantAnimationOverwriteEntity___);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                               v16,
                                                               (const MethodInfo_30F6330 *)Method_System_Linq_Enumerable_Cast_ServantAnimationOverwriteEntity___);
  return (ServantAnimationOverwriteEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                    v17,
                                                    (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_ServantAnimationOverwriteEntity___);
}


bool ServantAnimationOverwriteMaster__IsSvtMatch(
        ServantAnimationOverwriteMaster_o *this,
        DataEntityBase_o *baseEnt,
        int32_t svtId,
        int32_t limit,
        int32_t target,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  DataEntityBase_o *v11; // x8
  int klass_high; // w9

  if ( (byte_4C437E6 & 1) == 0 )
  {
    sub_1C37058(&ServantAnimationOverwriteEntity_TypeInfo);
    byte_4C437E6 = 1;
  }
  if ( baseEnt
    && (naturalAligment = ServantAnimationOverwriteEntity_TypeInfo->_2.naturalAligment,
        baseEnt->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && ((ServantAnimationOverwriteEntity_c *)baseEnt->klass->_2.typeHierarchy[naturalAligment - 1] != ServantAnimationOverwriteEntity_TypeInfo
      ? (v11 = 0)
      : (v11 = baseEnt),
        v11
     && LODWORD(v11[1].klass) == svtId
     && ((klass_high = HIDWORD(v11[1].klass), klass_high == limit) || klass_high == -1)) )
  {
    return LODWORD(v11[2].klass) == target || LODWORD(v11[2].klass) == 3;
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool ServantAnimationOverwriteMaster__TryGetEntity(
        ServantAnimationOverwriteMaster_o *this,
        ServantAnimationOverwriteEntity_o **entity,
        int32_t svtId,
        int32_t svtLimitCount,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C437E2 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__TryGetEntity__);
    byte_4C437E2 = 1;
  }
  PK = (Il2CppObject *)ServantAnimationOverwriteEntity__CreatePK(
                         svtId,
                         svtLimitCount,
                         idx,
                         *(const MethodInfo **)&svtLimitCount);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__TryGetEntity__);
}


ServantAnimationOverwriteMaster_o *ServantAnimationOverwriteMaster__get_Master(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C437E3 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantAnimationOverwriteMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C437E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return (ServantAnimationOverwriteMaster_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantAnimationOverwriteMaster___);
}


void ServantAnimationOverwriteMaster___c__DisplayClass5_0___ctor(
        ServantAnimationOverwriteMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantAnimationOverwriteMaster___c__DisplayClass5_0___GetList_b__0(
        ServantAnimationOverwriteMaster___c__DisplayClass5_0_o *this,
        ServantAnimationOverwriteEntity_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1C372B4(this);
  return ServantAnimationOverwriteMaster__IsSvtMatch(
           (ServantAnimationOverwriteMaster_o *)this,
           (DataEntityBase_o *)x,
           this->fields.svtId,
           this->fields.limitCount,
           this->fields.applyTarget,
           v3);
}