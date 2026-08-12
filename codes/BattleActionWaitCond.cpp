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
  return this->fields.limit > elapsedTime
      && ((bool (__fastcall *)(BattleActionWaitCond_LimitTime_o *, const MethodInfo *))this->klass->vtable._6_IsWaitCond.methodPtr)(
           this,
           this->klass->vtable._6_IsWaitCond.method);
}


bool BattleActionWaitCond_LimitTime__IsWaitCond(BattleActionWaitCond_LimitTime_o *this, const MethodInfo *method)
{
  return 0;
}


void BattleActionWaitCond_UntilAddUniqueCameraLoadComplete___ctor(
        BattleActionWaitCond_UntilAddUniqueCameraLoadComplete_o *this,
        System_Int32_array *cameraIds,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._addUniqueCameraIds = cameraIds;
  this->fields.limit = 60.0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._addUniqueCameraIds,
    (int32_t)cameraIds,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


bool BattleActionWaitCond_UntilAddUniqueCameraLoadComplete__IsWaitCond(
        BattleActionWaitCond_UntilAddUniqueCameraLoadComplete_o *this,
        const MethodInfo *method)
{
  return this->fields._isLoading;
}


void BattleActionWaitCond_UntilAddUniqueCameraLoadComplete__ProcBeforeWait(
        BattleActionWaitCond_UntilAddUniqueCameraLoadComplete_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattlePerformance_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_c *v20; // x0
  BattlePerformance_o *v21; // x21
  System_Action_o *v22; // x19

  if ( (byte_5973111 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleActionWaitCond_UntilAddUniqueCameraLoadComplete___c__DisplayClass5_0__ProcBeforeWait_b__0__);
    sub_2213A60(&BattleActionWaitCond_UntilAddUniqueCameraLoadComplete___c__DisplayClass5_0_TypeInfo);
    byte_5973111 = 1;
  }
  v5 = sub_2213CCC(BattleActionWaitCond_UntilAddUniqueCameraLoadComplete___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_7;
  *(_QWORD *)(v5 + 16) = perf;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)perf, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  v6 = *(BattlePerformance_o **)(v5 + 16);
  if ( !v6
    || (BattlePerformance__SetOverwriteAddUniqueCamera(v6, this->fields._addUniqueCameraIds, 1, 0),
        v20 = System_Action_TypeInfo,
        v21 = *(BattlePerformance_o **)(v5 + 16),
        this->fields._isLoading = 1,
        v22 = (System_Action_o *)sub_2213CCC(v20),
        System_Action___ctor(
          v22,
          (Il2CppObject *)v5,
          Method_BattleActionWaitCond_UntilAddUniqueCameraLoadComplete___c__DisplayClass5_0__ProcBeforeWait_b__0__,
          0),
        !v21) )
  {
LABEL_7:
    sub_2213CDC(v6, v7);
  }
  BattlePerformance__LoadOverwriteAddUniqueCamera(v21, v22, 0);
}


void BattleActionWaitCond_UntilAddUniqueCameraLoadComplete___c__DisplayClass5_0___ctor(
        BattleActionWaitCond_UntilAddUniqueCameraLoadComplete___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionWaitCond_UntilAddUniqueCameraLoadComplete___c__DisplayClass5_0___ProcBeforeWait_b__0(
        BattleActionWaitCond_UntilAddUniqueCameraLoadComplete___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  struct BattleActionWaitCond_UntilAddUniqueCameraLoadComplete_o *_4__this; // x8

  perf = this->fields.perf;
  if ( !perf || (BattlePerformance__UpdateFieldCameraFsm(perf, 0), (_4__this = this->fields.__4__this) == 0) )
    sub_2213CDC(perf, method);
  _4__this->fields._isLoading = 0;
}


void BattleActionWaitCond_UntilChangeModelLoadComplete___ctor(
        BattleActionWaitCond_UntilChangeModelLoadComplete_o *this,
        System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *inChangeModelList,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.changeModelList = inChangeModelList;
  this->fields.limit = 10.0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.changeModelList,
    (int32_t)inChangeModelList,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


bool BattleActionWaitCond_UntilChangeModelLoadComplete__IsWaitCond(
        BattleActionWaitCond_UntilChangeModelLoadComplete_o *this,
        const MethodInfo *method)
{
  if ( (byte_597310E & 1) == 0 )
  {
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    byte_597310E = 1;
  }
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
  return ServantAssetLoadManager__checkLoad(0);
}


void BattleActionWaitCond_UntilChangeModelLoadComplete__ProcBeforeWait(
        BattleActionWaitCond_UntilChangeModelLoadComplete_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *changeModelList; // x0
  struct System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  BattleData_o *data; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x22
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v13; // x20
  ChangeModelData_o *ChangeModelData_k__BackingField; // x21
  ServantAssetArgs_o *v15; // x22
  __int64 v16; // x1
  _BOOL4 isForceAppearance; // w26
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_597310F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData__GetEnumerator__);
    sub_2213A60(&ServantAssetArgs_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    byte_597310F = 1;
  }
  changeModelList = (System_Collections_ICollection_o *)this->fields.changeModelList;
  memset(&v19, 0, sizeof(v19));
  IsNullOrEmpty = (struct System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *)BasicHelper__IsNullOrEmpty(changeModelList, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !perf || (IsNullOrEmpty = this->fields.changeModelList) == 0 )
      sub_2213CDC(IsNullOrEmpty, v7);
    data = perf->fields.data;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData__GetEnumerator__);
    v19 = v18;
    v18.fields._list = 0;
    *(_QWORD *)&v18.fields._index = &v19;
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v19,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__MoveNext__);
      if ( !v9 )
        break;
      current = v19.fields._current;
      if ( !v19.fields._current )
        sub_2213CDC(v9, v10);
      if ( !data )
        sub_2213CDC(v9, v10);
      ServantData = BattleData__getServantData(data, (int32_t)v19.fields._current[3].klass, 0);
      v13 = ServantData;
      if ( ServantData )
      {
        ChangeModelData_k__BackingField = ServantData->fields._ChangeModelData_k__BackingField;
        BattleServantData__SetChangeModelData(ServantData, (ChangeModelData_o *)current[3].monitor, 0);
        v15 = (ServantAssetArgs_o *)sub_2213CCC(ServantAssetArgs_TypeInfo);
        ServantAssetArgs___ctor(v15, v13, 0);
        isForceAppearance = v13->fields.isForceAppearance;
        if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v16);
        ServantAssetLoadManager__preloadBattleActor(v15, isForceAppearance, 0);
        BattleServantData__SetChangeModelData(v13, ChangeModelData_k__BackingField, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__Dispose__);
  }
}


void BattleActionWaitCond_UntilSideEffectInvisible___ctor(
        BattleActionWaitCond_UntilSideEffectInvisible_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.perf = perf;
  this->fields.limit = 1.25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.perf, (int32_t)perf, v5, v6, v7, v8, v9, v10);
}


bool BattleActionWaitCond_UntilSideEffectInvisible__IsWaitCond(
        BattleActionWaitCond_UntilSideEffectInvisible_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf )
    sub_2213CDC(this, method);
  return perf->fields._WaitDispEffectCount_k__BackingField > 0;
}


void BattleActionWaitCond_WaitFinishMovie___ctor(
        BattleActionWaitCond_WaitFinishMovie_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionWaitCond_WaitFinishMovie__IsWait(
        BattleActionWaitCond_WaitFinishMovie_o *this,
        float elapsedTime,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf )
    sub_2213CDC(this, method);
  return perf->fields._IsPlayingMovie_k__BackingField;
}


void BattleActionWaitCond_WaitFinishMovie__ProcBeforeWait(
        BattleActionWaitCond_WaitFinishMovie_o *this,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.perf = inPerf;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)inPerf,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionWaitCond_WaitLoadMovieComplete___ctor(
        BattleActionWaitCond_WaitLoadMovieComplete_o *this,
        System_String_o *inMovieName,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.movieName = inMovieName;
  this->fields.limit = 10.0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.movieName,
    (int32_t)inMovieName,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


bool BattleActionWaitCond_WaitLoadMovieComplete__IsWaitCond(
        BattleActionWaitCond_WaitLoadMovieComplete_o *this,
        const MethodInfo *method)
{
  return !this->fields.isLoaded;
}


void BattleActionWaitCond_WaitLoadMovieComplete__ProcBeforeWait(
        BattleActionWaitCond_WaitLoadMovieComplete_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_Action_bool__c *v5; // x0
  System_String_o *movieName; // x21
  System_Action_bool__o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_5973110 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&Method_BattleActionWaitCond_WaitLoadMovieComplete__ProcBeforeWait_b__5_0__);
    byte_5973110 = 1;
  }
  v5 = System_Action_bool__TypeInfo;
  movieName = this->fields.movieName;
  this->fields.isLoaded = 0;
  v7 = (System_Action_bool__o *)sub_2213CCC(v5);
  System_Action_bool____ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleActionWaitCond_WaitLoadMovieComplete__ProcBeforeWait_b__5_0__,
    0);
  if ( !perf )
    sub_2213CDC(v8, v9);
  BattlePerformance__LoadMovie(perf, movieName, v7, 0);
}


void BattleActionWaitCond_WaitLoadMovieComplete___ProcBeforeWait_b__5_0(
        BattleActionWaitCond_WaitLoadMovieComplete_o *this,
        bool _,
        const MethodInfo *method)
{
  this->fields.isLoaded = 1;
}