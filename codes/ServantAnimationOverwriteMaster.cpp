void ServantAnimationOverwriteMaster___ctor(ServantAnimationOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D31221 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string___ctor__);
    byte_4D31221 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    316,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string___ctor__);
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

  if ( (byte_4D3121E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__GetEntity__);
    byte_4D3121E = 1;
  }
  PK = (Il2CppObject *)ServantAnimationOverwriteEntity__CreatePK(svtId, svtLimitCount, idx, *(const MethodInfo **)&idx);
  return (ServantAnimationOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_34681D4 *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__GetEntity__);
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int v18; // w8
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v20; // x20
  System_Collections_IEnumerable_o *v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_4D31222 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Cast_ServantAnimationOverwriteEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_ServantAnimationOverwriteEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_ServantAnimationOverwriteEntity___);
    sub_1C93AD4(&System_Func_ServantAnimationOverwriteEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_ServantAnimationOverwriteMaster___c__DisplayClass5_0__GetList_b__0__);
    sub_1C93AD4(&ServantAnimationOverwriteMaster___c__DisplayClass5_0_TypeInfo);
    byte_4D31222 = 1;
  }
  v9 = sub_1C93D20(ServantAnimationOverwriteMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C93D2C(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  if ( isEnemy )
    v18 = 2;
  else
    v18 = 1;
  *(_DWORD *)(v9 + 24) = svtId;
  *(_DWORD *)(v9 + 28) = limitCount;
  *(_DWORD *)(v9 + 32) = v18;
  list = this->fields.list;
  v20 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ServantAnimationOverwriteEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_ServantAnimationOverwriteMaster___c__DisplayClass5_0__GetList_b__0__,
    0);
  v21 = (System_Collections_IEnumerable_o *)System_Linq_Enumerable__Where_object_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                              (System_Func_TSource__bool__o *)v20,
                                              (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_ServantAnimationOverwriteEntity___);
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                               v21,
                                                               (const MethodInfo_31B3350 *)Method_System_Linq_Enumerable_Cast_ServantAnimationOverwriteEntity___);
  return (ServantAnimationOverwriteEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                    v22,
                                                    (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_ServantAnimationOverwriteEntity___);
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

  if ( (byte_4D31223 & 1) == 0 )
  {
    sub_1C93AD4(&ServantAnimationOverwriteEntity_TypeInfo);
    byte_4D31223 = 1;
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

  if ( (byte_4D3121F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__TryGetEntity__);
    byte_4D3121F = 1;
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
           (const MethodInfo_3468220 *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__TryGetEntity__);
}


ServantAnimationOverwriteMaster_o *ServantAnimationOverwriteMaster__get_Master(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4D31220 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantAnimationOverwriteMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31220 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v2);
  return (ServantAnimationOverwriteMaster_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantAnimationOverwriteMaster___);
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
    sub_1C93D2C(this, x);
  return ServantAnimationOverwriteMaster__IsSvtMatch(
           (ServantAnimationOverwriteMaster_o *)this,
           (DataEntityBase_o *)x,
           this->fields.svtId,
           this->fields.limitCount,
           this->fields.applyTarget,
           v3);
}