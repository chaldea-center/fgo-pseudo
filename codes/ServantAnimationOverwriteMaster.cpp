void __fastcall ServantAnimationOverwriteMaster___ctor(
        ServantAnimationOverwriteMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16849 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string___ctor__,
      method,
      v2);
    byte_4B16849 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    310,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string___ctor__);
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

  if ( (byte_4B16846 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&svtLimitCount);
    byte_4B16846 = 1;
  }
  PK = (Il2CppObject *)ServantAnimationOverwriteEntity__CreatePK(svtId, svtLimitCount, idx, *(const MethodInfo **)&idx);
  return (ServantAnimationOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__GetEntity__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x23
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  int v31; // w8
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x19
  System_Func_object__bool__o *v33; // x20
  System_Collections_IEnumerable_o *v34; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0

  if ( (byte_4B1684A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Cast_ServantAnimationOverwriteEntity___,
      *(_QWORD *)&svtId,
      *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_ServantAnimationOverwriteEntity___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_DataEntityBase___, v11, v12);
    sub_1BCA7E0(&System_Func_DataEntityBase__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_ServantAnimationOverwriteMaster___c__DisplayClass5_0__GetList_b__0__, v15, v16);
    sub_1BCA7E0(&ServantAnimationOverwriteMaster___c__DisplayClass5_0_TypeInfo, v17, v18);
    byte_4B1684A = 1;
  }
  v19 = sub_1BCAA2C(
          ServantAnimationOverwriteMaster___c__DisplayClass5_0_TypeInfo,
          *(_QWORD *)&svtId,
          *(_QWORD *)&limitCount,
          isEnemy);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    sub_1BCAA3C(v20, v21);
  *(_QWORD *)(v19 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)this, v22, v23, v24, v25, v26, v27);
  if ( isEnemy )
    v31 = 2;
  else
    v31 = 1;
  *(_DWORD *)(v19 + 24) = svtId;
  *(_DWORD *)(v19 + 28) = limitCount;
  *(_DWORD *)(v19 + 32) = v31;
  list = this->fields.list;
  v33 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_DataEntityBase__bool__TypeInfo, v28, v29, v30);
  System_Func_object__bool____ctor(
    v33,
    (Il2CppObject *)v19,
    Method_ServantAnimationOverwriteMaster___c__DisplayClass5_0__GetList_b__0__,
    0LL);
  v34 = (System_Collections_IEnumerable_o *)System_Linq_Enumerable__Where_object_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                              (System_Func_TSource__bool__o *)v33,
                                              (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_DataEntityBase___);
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                               v34,
                                                               (const MethodInfo_2F20F80 *)Method_System_Linq_Enumerable_Cast_ServantAnimationOverwriteEntity___);
  return (ServantAnimationOverwriteEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                    v35,
                                                    (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_ServantAnimationOverwriteEntity___);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B1684B & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAnimationOverwriteEntity_TypeInfo, baseEnt, *(_QWORD *)&svtId);
    byte_4B1684B = 1;
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

  if ( (byte_4B16847 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B16847 = 1;
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
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantAnimationOverwriteMaster__ServantAnimationOverwriteEntity__string__TryGetEntity__);
}


ServantAnimationOverwriteMaster_o *__fastcall ServantAnimationOverwriteMaster__get_Master(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B16848 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantAnimationOverwriteMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B16848 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  return (ServantAnimationOverwriteMaster_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantAnimationOverwriteMaster___);
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
    sub_1BCAA3C(this, x);
  return ServantAnimationOverwriteMaster__IsSvtMatch(
           (ServantAnimationOverwriteMaster_o *)this,
           x,
           this->fields.svtId,
           this->fields.limitCount,
           this->fields.applyTarget,
           v3);
}