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


void BattleActionWaitCond_UntilAddUniqueCameraLoadComplete___ctor(
        BattleActionWaitCond_UntilAddUniqueCameraLoadComplete_o *this,
        System_Int32_array *cameraIds,
        const MethodInfo *method)
{
  BattleActionWaitCond_UntilAddUniqueCameraLoadComplete_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v4->fields._addUniqueCameraIds = cameraIds;
  v4 = (BattleActionWaitCond_UntilAddUniqueCameraLoadComplete_o *)((char *)v4 + 24);
  *(_DWORD *)&v4[-1].fields._isLoading = 1114636288;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v4, (int32_t)cameraIds, v5, v6, v7, v8, v9, v10);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  BattlePerformance_o *v20; // x19
  System_Action_o *v21; // x21

  if ( (byte_4D2EEE5 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleActionWaitCond_UntilAddUniqueCameraLoadComplete___c__DisplayClass5_0__ProcBeforeWait_b__0__);
    sub_1C94098(&BattleActionWaitCond_UntilAddUniqueCameraLoadComplete___c__DisplayClass5_0_TypeInfo);
    byte_4D2EEE5 = 1;
  }
  v5 = sub_1C942E4(BattleActionWaitCond_UntilAddUniqueCameraLoadComplete___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_7;
  *(_QWORD *)(v5 + 16) = perf;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)perf, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  v6 = *(BattlePerformance_o **)(v5 + 16);
  if ( !v6
    || (BattlePerformance__SetOverwriteAddUniqueCamera(v6, this->fields._addUniqueCameraIds, 1, 0),
        this->fields._isLoading = 1,
        v20 = *(BattlePerformance_o **)(v5 + 16),
        v21 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo),
        System_Action___ctor(
          v21,
          (Il2CppObject *)v5,
          Method_BattleActionWaitCond_UntilAddUniqueCameraLoadComplete___c__DisplayClass5_0__ProcBeforeWait_b__0__,
          0),
        !v20) )
  {
LABEL_7:
    sub_1C942F0(v6, v7);
  }
  BattlePerformance__LoadOverwriteAddUniqueCamera(v20, v21, 0);
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
    sub_1C942F0(perf, method);
  _4__this->fields._isLoading = 0;
}


void BattleActionWaitCond_UntilChangeModelLoadComplete___ctor(
        BattleActionWaitCond_UntilChangeModelLoadComplete_o *this,
        System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *inChangeModelList,
        const MethodInfo *method)
{
  BattleActionWaitCond_UntilChangeModelLoadComplete_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v4->fields.changeModelList = inChangeModelList;
  v4 = (BattleActionWaitCond_UntilChangeModelLoadComplete_o *)((char *)v4 + 24);
  LODWORD(v4[-1].fields.changeModelList) = 1092616192;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v4, (int32_t)inChangeModelList, v5, v6, v7, v8, v9, v10);
}


bool BattleActionWaitCond_UntilChangeModelLoadComplete__IsWaitCond(
        BattleActionWaitCond_UntilChangeModelLoadComplete_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2EEE2 & 1) == 0 )
  {
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2EEE2 = 1;
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
  __int64 v6; // x1
  BattleData_o *data; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x22
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v12; // x20
  ChangeModelData_o *ChangeModelData_k__BackingField; // x21
  ServantAssetArgs_o *v14; // x22
  _BOOL4 isForceAppearance; // w26
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D2EEE3 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData__GetEnumerator__);
    sub_1C94098(&ServantAssetArgs_TypeInfo);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D2EEE3 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  IsNullOrEmpty = (struct System_Collections_Generic_List_BattleActionData_ChangeModelActionData__o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.changeModelList, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !perf || (IsNullOrEmpty = this->fields.changeModelList) == 0 )
      sub_1C942F0(IsNullOrEmpty, v6);
    data = perf->fields.data;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_BattleActionData_ChangeModelActionData__GetEnumerator__);
    v17 = v16;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v17,
             (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__MoveNext__);
      if ( !v8 )
        break;
      current = v17.fields._current;
      if ( !v17.fields._current )
        sub_1C942F0(v8, v9);
      if ( !data )
        sub_1C942F0(v8, v9);
      ServantData = BattleData__getServantData(data, (int32_t)v17.fields._current[2].klass, 0);
      v12 = ServantData;
      if ( ServantData )
      {
        ChangeModelData_k__BackingField = ServantData->fields._ChangeModelData_k__BackingField;
        BattleServantData__SetChangeModelData(ServantData, (ChangeModelData_o *)current[2].monitor, 0);
        v14 = (ServantAssetArgs_o *)sub_1C942E4(ServantAssetArgs_TypeInfo);
        ServantAssetArgs___ctor(v14, v12, 0);
        isForceAppearance = v12->fields.isForceAppearance;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        ServantAssetLoadManager__preloadBattleActor(v14, isForceAppearance, 0);
        BattleServantData__SetChangeModelData(v12, ChangeModelData_k__BackingField, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_ChangeModelActionData__Dispose__);
  }
}


void BattleActionWaitCond_UntilSideEffectInvisible___ctor(
        BattleActionWaitCond_UntilSideEffectInvisible_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  BattleActionWaitCond_UntilSideEffectInvisible_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v4->fields.perf = perf;
  v4 = (BattleActionWaitCond_UntilSideEffectInvisible_o *)((char *)v4 + 24);
  LODWORD(v4[-1].fields.perf) = 1067450368;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v4, (int32_t)perf, v5, v6, v7, v8, v9, v10);
}


bool BattleActionWaitCond_UntilSideEffectInvisible__IsWaitCond(
        BattleActionWaitCond_UntilSideEffectInvisible_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *perf; // x8

  perf = this->fields.perf;
  if ( !perf )
    sub_1C942F0(this, method);
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
    sub_1C942F0(this, method);
  return perf->fields._IsPlayingMovie_k__BackingField;
}


void BattleActionWaitCond_WaitFinishMovie__ProcBeforeWait(
        BattleActionWaitCond_WaitFinishMovie_o *this,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.perf = inPerf;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)inPerf, (int32_t)method, v3, v4, v5, v6, v7);
}


void BattleActionWaitCond_WaitLoadMovieComplete___ctor(
        BattleActionWaitCond_WaitLoadMovieComplete_o *this,
        System_String_o *inMovieName,
        const MethodInfo *method)
{
  BattleActionWaitCond_WaitLoadMovieComplete_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v4->fields.movieName = inMovieName;
  v4 = (BattleActionWaitCond_WaitLoadMovieComplete_o *)((char *)v4 + 24);
  *(_DWORD *)&v4[-1].fields.isLoaded = 1092616192;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v4, (int32_t)inMovieName, v5, v6, v7, v8, v9, v10);
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
  System_String_o *movieName; // x21
  System_Action_bool__o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4D2EEE4 & 1) == 0 )
  {
    sub_1C94098(&System_Action_bool__TypeInfo);
    sub_1C94098(&Method_BattleActionWaitCond_WaitLoadMovieComplete__ProcBeforeWait_b__5_0__);
    byte_4D2EEE4 = 1;
  }
  this->fields.isLoaded = 0;
  movieName = this->fields.movieName;
  v6 = (System_Action_bool__o *)sub_1C942E4(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v6,
    (Il2CppObject *)this,
    Method_BattleActionWaitCond_WaitLoadMovieComplete__ProcBeforeWait_b__5_0__,
    0);
  if ( !perf )
    sub_1C942F0(v7, v8);
  BattlePerformance__LoadMovie(perf, movieName, v6, 0);
}


void BattleActionWaitCond_WaitLoadMovieComplete___ProcBeforeWait_b__5_0(
        BattleActionWaitCond_WaitLoadMovieComplete_o *this,
        bool _,
        const MethodInfo *method)
{
  this->fields.isLoaded = 1;
}