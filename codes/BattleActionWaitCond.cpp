void BattleActionWaitCond___ctor(BattleActionWaitCond_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionWaitCond_Base___ctor(BattleActionWaitCond_Base_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionWaitCond_Base__IsWait(BattleActionWaitCond_Base_o *this, float elapsedTime, const MethodInfo *method)
{
  return 0;
}


void BattleActionWaitCond_Base__ProcBeforeWait(
        BattleActionWaitCond_Base_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  ;
}


void BattleActionWaitCond_LimitTime___ctor(
        BattleActionWaitCond_LimitTime_o *this,
        float limit,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.limit = limit;
}


bool BattleActionWaitCond_LimitTime__IsInLimitTime(
        BattleActionWaitCond_LimitTime_o *this,
        float elapsedTime,
        const MethodInfo *method)
{
  return this->fields.limit > elapsedTime;
}


bool BattleActionWaitCond_LimitTime__IsWait(
        BattleActionWaitCond_LimitTime_o *this,
        float elapsedTime,
        const MethodInfo *method)
{
  if ( this->fields.limit <= elapsedTime )
    return 0;
  else
    return ((__int64 (__fastcall *)(BattleActionWaitCond_LimitTime_o *, const MethodInfo *))this->klass->vtable._6_IsWaitCond.methodPtr)(
             this,
             this->klass->vtable._6_IsWaitCond.method);
}


bool BattleActionWaitCond_LimitTime__IsWaitCond(BattleActionWaitCond_LimitTime_o *this, const MethodInfo *method)
{
  return 0;
}


void BattleActionWaitCond_UntilChangeModelLoadComplete___ctor(
        BattleActionWaitCond_UntilChangeModelLoadComplete_o *this,
        System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *inChangeModelList,
        const MethodInfo *method)
{
  BattleActionWaitCond_UntilChangeModelLoadComplete_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v4->fields.changeModelList = inChangeModelList;
  v4 = (BattleActionWaitCond_UntilChangeModelLoadComplete_o *)((char *)v4 + 24);
  LODWORD(v4[-1].fields.changeModelList) = 1092616192;
  sub_1C32BC4((CGThumbnailListItem_o *)v4, (int32_t)inChangeModelList, v5, v6);
}


bool BattleActionWaitCond_UntilChangeModelLoadComplete__IsWaitCond(
        BattleActionWaitCond_UntilChangeModelLoadComplete_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C39F95 & 1) == 0 )
  {
    sub_1C32C20(&ServantAssetLoadManager_TypeInfo);
    byte_4C39F95 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  return ServantAssetLoadManager__checkLoad(0);
}


void BattleActionWaitCond_UntilChangeModelLoadComplete__ProcBeforeWait(
        BattleActionWaitCond_UntilChangeModelLoadComplete_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *IsNullOrEmpty; // x0
  BattleData_o *data; // x19
  _BOOL8 v7; // x0
  Il2CppObject *current; // x22
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v10; // x20
  ChangeModelData_o *ChangeModelData_k__BackingField; // x21
  ServantAssetArgs_o *v12; // x22
  _BOOL4 isForceAppearance; // w26
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C39F96 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData__GetEnumerator__);
    sub_1C32C20(&ServantAssetArgs_TypeInfo);
    sub_1C32C20(&ServantAssetLoadManager_TypeInfo);
    byte_4C39F96 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  IsNullOrEmpty = (struct System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.changeModelList, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !perf || (IsNullOrEmpty = this->fields.changeModelList) == 0 )
      sub_1C32E7C(IsNullOrEmpty);
    data = perf->fields.data;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData__GetEnumerator__);
    v15 = v14;
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v15,
             (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__MoveNext__);
      if ( !v7 )
        break;
      current = v15.fields._current;
      if ( !v15.fields._current )
        sub_1C32E7C(v7);
      if ( !data )
        sub_1C32E7C(v7);
      ServantData = BattleData__getServantData(data, HIDWORD(v15.fields._current[1].monitor), 0);
      v10 = ServantData;
      if ( ServantData )
      {
        ChangeModelData_k__BackingField = ServantData->fields._ChangeModelData_k__BackingField;
        BattleServantData__SetChangeModelData(ServantData, (ChangeModelData_o *)current[2].klass, 0);
        v12 = (ServantAssetArgs_o *)sub_1C32E6C(ServantAssetArgs_TypeInfo);
        ServantAssetArgs___ctor(v12, v10, 0);
        isForceAppearance = v10->fields.isForceAppearance;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        ServantAssetLoadManager__preloadBattleActor(v12, isForceAppearance, 0);
        BattleServantData__SetChangeModelData(v10, ChangeModelData_k__BackingField, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__Dispose__);
  }
}


void BattleActionWaitCond_UntilSideEffectInvisible___ctor(
        BattleActionWaitCond_UntilSideEffectInvisible_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  BattleActionWaitCond_UntilSideEffectInvisible_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v4->fields.perf = perf;
  v4 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)((char *)v4 + 24);
  LODWORD(v4[-1].fields.perf) = 1067450368;
  sub_1C32BC4((CGThumbnailListItem_o *)v4, (int32_t)perf, v5, v6);
}


bool BattleActionWaitCond_UntilSideEffectInvisible__IsWaitCond(
        BattleActionWaitCond_UntilSideEffectInvisible_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf )
    sub_1C32E7C(this);
  return perf->fields._WaitDispEffectCount_k__BackingField > 0;
}