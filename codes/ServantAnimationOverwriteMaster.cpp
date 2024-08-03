void __fastcall ServantAnimationOverwriteMaster___ctor(
        ServantAnimationOverwriteMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FCA29 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string___ctor__,
      method);
    byte_49FCA29 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    310,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantAnimationOverwriteEntity_o *__fastcall ServantAnimationOverwriteMaster__GetEntity(
        ServantAnimationOverwriteMaster_o *this,
        int32_t svtId,
        int32_t svtLimitCount,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FCA26 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49FCA26 = 1;
  }
  PK = (Il2CppObject *)ServantAnimationOverwriteEntity__CreatePK(svtId, svtLimitCount, idx, *(const MethodInfo **)&idx);
  return (ServantAnimationOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_30D41FC *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantAnimationOverwriteEntity_array *__fastcall ServantAnimationOverwriteMaster__GetList(
        ServantAnimationOverwriteMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x23
  __int64 v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  int v20; // w8
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__bool__o *v22; // x20
  System_Collections_IEnumerable_o *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_49FCA2A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Cast_ServantAnimationOverwriteEntity___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_ServantAnimationOverwriteEntity___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_DataEntityBase___, v10);
    sub_1B640C8(&System_Func_DataEntityBase__bool__TypeInfo, v11);
    sub_1B640C8(&Method_ServantAnimationOverwriteMaster___c__DisplayClass5_0__GetList_b__0__, v12);
    sub_1B640C8(&ServantAnimationOverwriteMaster___c__DisplayClass5_0_TypeInfo, v13);
    byte_49FCA2A = 1;
  }
  v14 = sub_1B64314(
          ServantAnimationOverwriteMaster___c__DisplayClass5_0_TypeInfo,
          *(_QWORD *)&svtId,
          *(_QWORD *)&limitCount);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1B64324(v15);
  *(_QWORD *)(v14 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v16, v17);
  if ( isEnemy )
    v20 = 2;
  else
    v20 = 1;
  *(_DWORD *)(v14 + 24) = svtId;
  *(_DWORD *)(v14 + 28) = limitCount;
  *(_DWORD *)(v14 + 32) = v20;
  list = this->fields.list;
  v22 = (System_Func_object__bool__o *)sub_1B64314(System_Func_DataEntityBase__bool__TypeInfo, v18, v19);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v14,
    Method_ServantAnimationOverwriteMaster___c__DisplayClass5_0__GetList_b__0__,
    0LL);
  v23 = (System_Collections_IEnumerable_o *)System_Linq_Enumerable__Where_object_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                              (System_Func_TSource__bool__o *)v22,
                                              (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_DataEntityBase___);
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                               v23,
                                                               (const MethodInfo_2E491D0 *)Method_System_Linq_Enumerable_Cast_ServantAnimationOverwriteEntity___);
  return (ServantAnimationOverwriteEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                    v24,
                                                    (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_ServantAnimationOverwriteEntity___);
}


bool __fastcall ServantAnimationOverwriteMaster__IsSvtMatch(
        ServantAnimationOverwriteMaster_o *this,
        DataEntityBase_o *baseEnt,
        int32_t svtId,
        int32_t limit,
        int32_t target,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  DataEntityBase_o *v11; // x8
  int klass_high; // w9

  if ( (byte_49FCA2B & 1) == 0 )
  {
    sub_1B640C8(&ServantAnimationOverwriteEntity_TypeInfo, baseEnt);
    byte_49FCA2B = 1;
  }
  if ( baseEnt
    && (methodPtr_low = LOBYTE(ServantAnimationOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(baseEnt->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && ((ServantAnimationOverwriteEntity_c *)baseEnt->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantAnimationOverwriteEntity_TypeInfo
      ? (v11 = 0LL)
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
bool __fastcall ServantAnimationOverwriteMaster__TryGetEntity(
        ServantAnimationOverwriteMaster_o *this,
        ServantAnimationOverwriteEntity_o **entity,
        int32_t svtId,
        int32_t svtLimitCount,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49FCA27 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__TryGetEntity__,
      entity);
    byte_49FCA27 = 1;
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
           (const MethodInfo_30D424C *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__TryGetEntity__);
}


ServantAnimationOverwriteMaster_o *__fastcall ServantAnimationOverwriteMaster__get_Master(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FCA28 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantAnimationOverwriteMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49FCA28 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (ServantAnimationOverwriteMaster_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantAnimationOverwriteMaster___);
}


void __fastcall ServantAnimationOverwriteMaster___c__DisplayClass5_0___ctor(
        ServantAnimationOverwriteMaster___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantAnimationOverwriteMaster___c__DisplayClass5_0___GetList_b__0(
        ServantAnimationOverwriteMaster___c__DisplayClass5_0_o *this,
        DataEntityBase_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( !this->fields.__4__this )
    sub_1B64324(this);
  return ServantAnimationOverwriteMaster__IsSvtMatch(
           (ServantAnimationOverwriteMaster_o *)this,
           x,
           this->fields.svtId,
           this->fields.limitCount,
           this->fields.applyTarget,
           v3);
}