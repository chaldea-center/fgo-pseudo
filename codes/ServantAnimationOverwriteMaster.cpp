void ServantAnimationOverwriteMaster___ctor(ServantAnimationOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59710E1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string___ctor__);
    byte_59710E1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    318,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string___ctor__);
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

  if ( (byte_59710DE & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__GetEntity__);
    byte_59710DE = 1;
  }
  PK = (Il2CppObject *)ServantAnimationOverwriteEntity__CreatePK(svtId, svtLimitCount, idx, *(const MethodInfo **)&idx);
  return (ServantAnimationOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_3F157EC *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__GetEntity__);
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
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Func_ServantAnimationOverwriteEntity__bool__c *v18; // x0
  int v19; // w8
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v21; // x20
  System_Collections_IEnumerable_o *v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_59710E2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Cast_ServantAnimationOverwriteEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_ServantAnimationOverwriteEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_ServantAnimationOverwriteEntity___);
    sub_2213A60(&System_Func_ServantAnimationOverwriteEntity__bool__TypeInfo);
    sub_2213A60(&Method_ServantAnimationOverwriteMaster___c__DisplayClass5_0__GetList_b__0__);
    sub_2213A60(&ServantAnimationOverwriteMaster___c__DisplayClass5_0_TypeInfo);
    byte_59710E2 = 1;
  }
  v9 = sub_2213CCC(ServantAnimationOverwriteMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  v18 = System_Func_ServantAnimationOverwriteEntity__bool__TypeInfo;
  *(_DWORD *)(v9 + 24) = svtId;
  *(_DWORD *)(v9 + 28) = limitCount;
  if ( isEnemy )
    v19 = 2;
  else
    v19 = 1;
  list = this->fields.list;
  *(_DWORD *)(v9 + 32) = v19;
  v21 = (System_Func_object__bool__o *)sub_2213CCC(v18);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_ServantAnimationOverwriteMaster___c__DisplayClass5_0__GetList_b__0__,
    0);
  v22 = (System_Collections_IEnumerable_o *)System_Linq_Enumerable__Where_object_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                              (System_Func_TSource__bool__o *)v21,
                                              (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_ServantAnimationOverwriteEntity___);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                               v22,
                                                               (const MethodInfo_3868AB0 *)Method_System_Linq_Enumerable_Cast_ServantAnimationOverwriteEntity___);
  return (ServantAnimationOverwriteEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                    v23,
                                                    (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_ServantAnimationOverwriteEntity___);
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
  int klass_high; // w8
  int klass; // w8

  if ( (byte_59710E3 & 1) == 0 )
  {
    sub_2213A60(&ServantAnimationOverwriteEntity_TypeInfo);
    byte_59710E3 = 1;
  }
  if ( !baseEnt )
    return 0;
  naturalAligment = ServantAnimationOverwriteEntity_TypeInfo->_2.naturalAligment;
  if ( baseEnt->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (ServantAnimationOverwriteEntity_c *)baseEnt->klass->_2.typeHierarchy[naturalAligment - 1] != ServantAnimationOverwriteEntity_TypeInfo )
    return 0;
  if ( LODWORD(baseEnt[1].klass) != svtId )
    return 0;
  klass_high = HIDWORD(baseEnt[1].klass);
  if ( klass_high != limit && klass_high != -1 )
    return 0;
  klass = (int)baseEnt[2].klass;
  return klass == target || klass == 3;
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

  if ( (byte_59710DF & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__TryGetEntity__);
    byte_59710DF = 1;
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
           (const MethodInfo_3F15838 *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__TryGetEntity__);
}


ServantAnimationOverwriteMaster_o *ServantAnimationOverwriteMaster__get_Master(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_59710E0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantAnimationOverwriteMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59710E0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v2);
  return (ServantAnimationOverwriteMaster_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantAnimationOverwriteMaster___);
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
    sub_2213CDC(this, x);
  return ServantAnimationOverwriteMaster__IsSvtMatch(
           (ServantAnimationOverwriteMaster_o *)this,
           (DataEntityBase_o *)x,
           this->fields.svtId,
           this->fields.limitCount,
           this->fields.applyTarget,
           v3);
}