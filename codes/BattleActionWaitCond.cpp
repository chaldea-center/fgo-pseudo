void __fastcall BattleActionWaitCond___ctor(BattleActionWaitCond_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionWaitCond_Base___ctor(BattleActionWaitCond_Base_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionWaitCond_Base__IsWait(
        BattleActionWaitCond_Base_o *this,
        float elapsedTime,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall BattleActionWaitCond_Base__ProcBeforeWait(
        BattleActionWaitCond_Base_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActionWaitCond_LimitTime___ctor(
        BattleActionWaitCond_LimitTime_o *this,
        float limit,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.limit = limit;
}


bool __fastcall BattleActionWaitCond_LimitTime__IsInLimitTime(
        BattleActionWaitCond_LimitTime_o *this,
        float elapsedTime,
        const MethodInfo *method)
{
  return this->fields.limit > elapsedTime;
}


bool __fastcall BattleActionWaitCond_LimitTime__IsWait(
        BattleActionWaitCond_LimitTime_o *this,
        float elapsedTime,
        const MethodInfo *method)
{
  if ( this->fields.limit <= elapsedTime )
    return 0;
  else
    return ((__int64 (__fastcall *)(BattleActionWaitCond_LimitTime_o *, void *))this->klass->vtable._6_IsWaitCond.method)(
             this,
             this->klass[1]._1.image);
}


bool __fastcall BattleActionWaitCond_LimitTime__IsWaitCond(
        BattleActionWaitCond_LimitTime_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall BattleActionWaitCond_UntilChangeModelLoadComplete___ctor(
        BattleActionWaitCond_UntilChangeModelLoadComplete_o *this,
        System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *inChangeModelList,
        const MethodInfo *method)
{
  BattleActionWaitCond_UntilChangeModelLoadComplete_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields.changeModelList = inChangeModelList;
  v4 = (BattleActionWaitCond_UntilChangeModelLoadComplete_o *)((char *)v4 + 24);
  LODWORD(v4[-1].fields.changeModelList) = 1092616192;
  sub_1B8635C((CGThumbnailListItem_o *)v4, (int32_t)inChangeModelList, v5, v6);
}


bool __fastcall BattleActionWaitCond_UntilChangeModelLoadComplete__IsWaitCond(
        BattleActionWaitCond_UntilChangeModelLoadComplete_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5093A & 1) == 0 )
  {
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, method);
    byte_4A5093A = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  return ServantAssetLoadManager__checkLoad(0LL);
}


void __fastcall BattleActionWaitCond_UntilChangeModelLoadComplete__ProcBeforeWait(
        BattleActionWaitCond_UntilChangeModelLoadComplete_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *IsNullOrEmpty; // x0
  __int64 v11; // x1
  BattleData_o *data; // x19
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x22
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v17; // x20
  ChangeModelData_o *ChangeModelData_k__BackingField; // x21
  ServantAssetArgs_o *v19; // x22
  _BOOL4 isForceAppearance; // w26
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5093B & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__Dispose__,
      perf);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__MoveNext__,
      v5);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__get_Current__,
      v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData__GetEnumerator__, v7);
    sub_1B863B8(&ServantAssetArgs_TypeInfo, v8);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v9);
    byte_4A5093B = 1;
  }
  memset(&v22, 0, sizeof(v22));
  IsNullOrEmpty = (struct System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.changeModelList, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !perf || (IsNullOrEmpty = this->fields.changeModelList) == 0LL )
      sub_1B86614(IsNullOrEmpty, v11);
    data = perf->fields.data;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData__GetEnumerator__);
    v22 = v21;
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__MoveNext__);
      if ( !v13 )
        break;
      current = v22.fields._current;
      if ( !v22.fields._current )
        sub_1B86614(v13, v14);
      if ( !data )
        sub_1B86614(v13, v14);
      ServantData = BattleData__getServantData(data, HIDWORD(v22.fields._current[1].monitor), 0LL);
      v17 = ServantData;
      if ( ServantData )
      {
        ChangeModelData_k__BackingField = ServantData->fields._ChangeModelData_k__BackingField;
        BattleServantData__SetChangeModelData(ServantData, (ChangeModelData_o *)current[2].klass, 0LL);
        v19 = (ServantAssetArgs_o *)sub_1B86604(ServantAssetArgs_TypeInfo);
        ServantAssetArgs___ctor(v19, v17, 0LL);
        isForceAppearance = v17->fields.isForceAppearance;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        ServantAssetLoadManager__preloadBattleActor(v19, isForceAppearance, 0LL);
        BattleServantData__SetChangeModelData(v17, ChangeModelData_k__BackingField, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__Dispose__);
  }
}


void __fastcall BattleActionWaitCond_UntilSideEffectInvisible___ctor(
        BattleActionWaitCond_UntilSideEffectInvisible_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  BattleActionWaitCond_UntilSideEffectInvisible_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields.perf = perf;
  v4 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)((char *)v4 + 24);
  LODWORD(v4[-1].fields.perf) = 1067450368;
  sub_1B8635C((CGThumbnailListItem_o *)v4, (int32_t)perf, v5, v6);
}


bool __fastcall BattleActionWaitCond_UntilSideEffectInvisible__IsWaitCond(
        BattleActionWaitCond_UntilSideEffectInvisible_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf )
    sub_1B86614(this, method);
  return perf->fields._WaitDispEffectCount_k__BackingField > 0;
}