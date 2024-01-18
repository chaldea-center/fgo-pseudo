void __fastcall MissionNotifyManager___ctor(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_int__o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_418735C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_List_MissionNotifyComponent__TypeInfo, v9);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager___ctor__, v10);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v11);
    byte_418735C = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v12;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mNoDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v19;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mNoDispInfos,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MissionNotifyComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__);
  this->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v26;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.mMissionNotifyComps,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.assetLoadedEventIdList = v33;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.assetLoadedEventIdList,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B2C42C(System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v40,
    (const MethodInfo_2D873F8 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__);
  this->fields.noDisplayMissionCondTypeHashSet = v40;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.noDisplayMissionCondTypeHashSet,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2841CD4 *)Method_SingletonTemplate_MissionNotifyManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyManager__AddNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *noDisplayMissionCondTypeHashSet; // x0

  if ( (byte_418734D & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__,
      *(_QWORD *)&missionCondType);
    byte_418734D = 1;
  }
  noDisplayMissionCondTypeHashSet = this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_B2C434(0LL, *(_QWORD *)&missionCondType);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_2D885D4 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__);
}


void __fastcall MissionNotifyManager__CancelPause(MissionNotifyManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  __int64 v4; // x1
  NoticeNumberComponent_o *v5; // x0

  if ( (byte_418734C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418734C = 1;
  }
  this->fields.mPauseCount = 0;
  MissionNotifyManager__StartDisp(this, method);
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v5 = this->fields.mNoticeNumberComp;
    if ( !v5 )
      sub_B2C434(0LL, v4);
    NoticeNumberComponent__SetDisp(v5, 1, 0LL);
  }
}


void __fastcall MissionNotifyManager__ClearRequest(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x0
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  const MethodInfo *v6; // x1
  NoticeNumberComponent_o *v7; // x20

  if ( (byte_4187351 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Clear__, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4187351 = 1;
  }
  mDispInfos = this->fields.mDispInfos;
  if ( !mDispInfos )
    goto LABEL_11;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mDispInfos,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__Clear__);
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v7 = this->fields.mNoticeNumberComp;
    mDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)MissionNotifyManager__GetDispInfoCount(
                                                                                      this,
                                                                                      v6);
    if ( v7 )
    {
      NoticeNumberComponent__SetNumber(v7, (int32_t)mDispInfos, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_B2C434(mDispInfos, method);
  }
LABEL_10:
  MissionNotifyManager__ReleaseEventAsset(this, v6);
}


void __fastcall MissionNotifyManager__Destroy(MissionNotifyManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Component_o **p_mNoticeNumberComp; // x19
  UnityEngine_Object_o *v5; // x20
  struct NoticeNumberComponent_o *mNoticeNumberComp; // t1
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4187350 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187350 = 1;
  }
  MissionNotifyManager__ClearRequest(this, method);
  MissionNotifyManager__DestroyAllMissionNotifyComponentObject(this, v3);
  mNoticeNumberComp = this->fields.mNoticeNumberComp;
  p_mNoticeNumberComp = (UnityEngine_Component_o **)&this->fields.mNoticeNumberComp;
  v5 = (UnityEngine_Object_o *)mNoticeNumberComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    if ( !*p_mNoticeNumberComp )
      sub_B2C434(0LL, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mNoticeNumberComp, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    *p_mNoticeNumberComp = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)p_mNoticeNumberComp, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall MissionNotifyManager__DestroyAllMissionNotifyComponentObject(
        MissionNotifyManager_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x21
  int32_t v8; // w20
  __int64 v9; // x24
  UnityEngine_Object_o *gameObject; // x21

  v2 = this;
  if ( (byte_418735A & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Item__, v5);
    this = (MissionNotifyManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_418735A = 1;
  }
  mMissionNotifyComps = v2->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_18;
  v8 = mMissionNotifyComps->fields._size - 1;
  if ( v8 >= 0 )
  {
    v9 = 8LL * v8 + 32;
    do
    {
      if ( mMissionNotifyComps->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      this = *(MissionNotifyManager_o **)((char *)&mMissionNotifyComps->fields._items->obj.klass + v9);
      if ( !this )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
      this = (MissionNotifyManager_o *)v2->fields.mMissionNotifyComps;
      if ( !this )
        break;
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
        v8,
        (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__ReleaseNotification(0LL);
      if ( (--v8 & 0x80000000) != 0 )
        return;
      mMissionNotifyComps = v2->fields.mMissionNotifyComps;
      v9 -= 8LL;
    }
    while ( mMissionNotifyComps );
LABEL_18:
    sub_B2C434(this, method);
  }
}


void __fastcall MissionNotifyManager__DragStartCallback(MissionNotifyManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  __int64 v4; // x1
  NoticeNumberComponent_o *v5; // x0

  if ( (byte_4187357 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187357 = 1;
  }
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v5 = this->fields.mNoticeNumberComp;
    if ( !v5 )
      sub_B2C434(0LL, v4);
    NoticeNumberComponent__SetDisp(v5, 0, 0LL);
  }
}


void __fastcall MissionNotifyManager__EndPause(MissionNotifyManager_o *this, const MethodInfo *method)
{
  int32_t mPauseCount; // w8
  int32_t v3; // w8

  mPauseCount = this->fields.mPauseCount;
  if ( mPauseCount )
  {
    v3 = mPauseCount - 1;
    this->fields.mPauseCount = v3;
    if ( !v3 )
      MissionNotifyManager__CancelPause(this, method);
  }
}


void __fastcall MissionNotifyManager__FrameOutEndCallback(
        MissionNotifyManager_o *this,
        MissionNotifyComponent_o *comp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4187358 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, comp);
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4187358 = 1;
  }
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_14;
  if ( mMissionNotifyComps->fields._size < 1 )
    return;
  mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                                                              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)mMissionNotifyComps,
                                                                                              (WarBoardManager_TaskList_o *)comp,
                                                                                              (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__);
  if ( !comp )
LABEL_14:
    sub_B2C434(mMissionNotifyComps, comp);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)comp, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
}


int32_t __fastcall MissionNotifyManager__GetDispInfoCount(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *v2; // x19
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8

  v2 = this;
  if ( (byte_418734F & 1) == 0 )
  {
    this = (MissionNotifyManager_o *)sub_B2C35C(
                                       &Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__,
                                       method);
    byte_418734F = 1;
  }
  mDispInfos = v2->fields.mDispInfos;
  if ( !mDispInfos )
    sub_B2C434(this, method);
  return mDispInfos->fields._size;
}


void __fastcall MissionNotifyManager__Init(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager__Destroy(this, method);
  this->fields.mPauseCount = 0;
}


bool __fastcall MissionNotifyManager__IsBusy(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  const MethodInfo *v8; // x1
  char v9; // w19
  int v10; // w20
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187359 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__, v5);
    byte_4187359 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( this->fields.mPauseCount > 0 )
    return 1;
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mMissionNotifyComps,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__) )
  {
    if ( !v11.fields.current )
      sub_B2C434(0LL, v8);
    if ( MissionNotifyComponent__IsBusy((MissionNotifyComponent_o *)v11.fields.current, v8) )
    {
      v9 = 1;
      v10 = 5;
      goto LABEL_12;
    }
  }
  v9 = 0;
  v10 = 3;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  return (v10 == 5) & v9;
}


bool __fastcall MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *missionNotifyDispInfo,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( !missionNotifyDispInfo )
    sub_B2C434(this, 0LL);
  return MissionNotifyDispInfo__IsDispPossible(missionNotifyDispInfo, (const MethodInfo *)missionNotifyDispInfo)
      && !MissionNotifyDispInfo__ContainsMissionCondType(
            missionNotifyDispInfo,
            this->fields.noDisplayMissionCondTypeHashSet,
            v5);
}


bool __fastcall MissionNotifyManager__IsPause(MissionNotifyManager_o *this, const MethodInfo *method)
{
  return this->fields.mPauseCount > 0;
}


bool __fastcall MissionNotifyManager__IsPress(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  int v9; // w19
  int v10; // w20
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418734B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__, v5);
    byte_418734B = 1;
  }
  memset(&v13, 0, sizeof(v13));
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mMissionNotifyComps,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v13,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    if ( !v7 )
      break;
    if ( !v13.fields.current )
      sub_B2C434(v7, v8);
    if ( LOBYTE(v13.fields.current[11].monitor) )
    {
      v9 = 1;
      v10 = 3;
      goto LABEL_10;
    }
  }
  v9 = 0;
  v10 = 1;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  return v9 & ((unsigned int)(v10 + 1) >> 2);
}


void __fastcall MissionNotifyManager__LoadEventAsset(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 Instance; // x0
  __int64 v15; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t age_high; // w20
  __int64 v18; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187353 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, disp_info);
    sub_B2C35C(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v9);
    sub_B2C35C(&long___TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4187353 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !disp_info || !Instance )
    goto LABEL_26;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          disp_info->fields.eventMissionId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
    goto LABEL_24;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  Instance = sub_B2C374(long___TypeInfo, 1LL);
  if ( !entity )
    goto LABEL_26;
  v15 = Instance;
  if ( !Instance )
    goto LABEL_26;
  if ( !*(_DWORD *)(Instance + 24) )
  {
    v18 = sub_B2C460(Instance);
    sub_B2C400(v18, 0LL);
  }
  *(_QWORD *)(Instance + 32) = SHIDWORD(entity->fields.age);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  Instance = DataMasterBase__isEntityExistsFromId(
               MasterData_WarQuestSelectionMaster,
               (System_Int64_array *)Instance,
               0LL);
  if ( (Instance & 1) == 0 )
  {
LABEL_24:
    ActionExtensions__Call(finishCallback, 0LL);
    return;
  }
  if ( !entity )
    goto LABEL_26;
  Instance = (__int64)this->fields.assetLoadedEventIdList;
  if ( !Instance )
    goto LABEL_26;
  Instance = System_Collections_Generic_List_int___Contains(
               (System_Collections_Generic_List_int__o *)Instance,
               HIDWORD(entity->fields.age),
               (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
  if ( (Instance & 1) != 0 )
    goto LABEL_19;
  if ( !entity || (Instance = (__int64)this->fields.assetLoadedEventIdList) == 0 )
LABEL_26:
    sub_B2C434(Instance, v15);
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)Instance,
    HIDWORD(entity->fields.age),
    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
LABEL_19:
  if ( !entity )
    goto LABEL_26;
  age_high = HIDWORD(entity->fields.age);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28451024(age_high, finishCallback, 1, 0LL);
}


void __fastcall MissionNotifyManager__LoadNotificationEnd(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *mDispInfos; // x0
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  const MethodInfo *v9; // x1
  NoticeNumberComponent_o *v10; // x20

  if ( (byte_4187354 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__, disp_info);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4187354 = 1;
  }
  if ( MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(this, disp_info, method) )
  {
    mDispInfos = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.mDispInfos;
    if ( !mDispInfos )
      goto LABEL_15;
  }
  else
  {
    mDispInfos = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.mNoDispInfos;
    if ( !mDispInfos )
      goto LABEL_15;
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    mDispInfos,
    (EventMissionProgressRequest_Argument_ProgressData_o *)disp_info,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v10 = this->fields.mNoticeNumberComp;
    mDispInfos = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)MissionNotifyManager__GetDispInfoCount(this, v9);
    if ( !v10
      || (NoticeNumberComponent__SetNumber(v10, (int32_t)mDispInfos, 0LL),
          (mDispInfos = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.mNoticeNumberComp) == 0LL) )
    {
LABEL_15:
      sub_B2C434(mDispInfos, v6);
    }
    NoticeNumberComponent__SetDispForce((NoticeNumberComponent_o *)mDispInfos, this->fields.mPauseCount < 1, 0LL);
  }
  MissionNotifyManager__StartDisp(this, v9);
}


void __fastcall MissionNotifyManager__Reboot(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager__Destroy(this, method);
  this->fields.mPauseCount = 0;
}


void __fastcall MissionNotifyManager__ReleaseEventAsset(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *assetLoadedEventIdList; // x0
  int32_t current; // w20
  System_Collections_Generic_List_Enumerator_int__o v10; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v11; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_418735B & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    byte_418735B = 1;
  }
  memset(&v11, 0, sizeof(v11));
  assetLoadedEventIdList = this->fields.assetLoadedEventIdList;
  if ( !assetLoadedEventIdList )
    goto LABEL_12;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    assetLoadedEventIdList,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v11,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v11.fields.current;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__ReleaseEventUI_28451204(current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v11,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  assetLoadedEventIdList = this->fields.assetLoadedEventIdList;
  if ( !assetLoadedEventIdList )
LABEL_12:
    sub_B2C434(assetLoadedEventIdList, method);
  System_Collections_Generic_List_int___Clear(
    assetLoadedEventIdList,
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyManager__RemoveNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *noDisplayMissionCondTypeHashSet; // x0
  const MethodInfo *v6; // x1

  if ( (byte_418734E & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__,
      *(_QWORD *)&missionCondType);
    byte_418734E = 1;
  }
  noDisplayMissionCondTypeHashSet = this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_B2C434(0LL, *(_QWORD *)&missionCondType);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Remove(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_2D87C38 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__);
  MissionNotifyManager__TryMoveNoDisplayToDisplay(this, v6);
}


void __fastcall MissionNotifyManager__RequestDisp(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Action_o *v23; // x19

  if ( (byte_4187352 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, disp_info);
    sub_B2C35C(&AtlasManager_TypeInfo, v5);
    sub_B2C35C(&Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__0__, v6);
    sub_B2C35C(&MissionNotifyManager___c__DisplayClass24_0_TypeInfo, v7);
    byte_4187352 = 1;
  }
  v8 = sub_B2C42C(MissionNotifyManager___c__DisplayClass24_0_TypeInfo);
  MissionNotifyManager___c__DisplayClass24_0___ctor((MissionNotifyManager___c__DisplayClass24_0_o *)v8, 0LL);
  if ( !v8 )
    sub_B2C434(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = disp_info;
  sub_B2C2F8((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)disp_info, v17, v18, v19, v20, v21, v22);
  v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v8,
    Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v23, 0LL);
}


MissionNotifyComponent_o *__fastcall MissionNotifyManager__StartDisp(
        MissionNotifyManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  struct NoticeNumberComponent_o **p_mNoticeNumberComp; // x20
  UnityEngine_Object_o *mNoticeNumberComp; // x21
  const MethodInfo *v21; // x1
  void *Instance; // x0
  const MethodInfo *v23; // x1
  MissionNotifyComponent_o *Component_srcLineSprite; // x21
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  UnityEngine_Object_o *MissionNotify; // x23
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x21
  MissionNotifyDispInfo_o *v29; // x22
  System_Action_o *v30; // x23
  System_Func_Task_ContingentProperties__o *v31; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v32; // x25
  const MethodInfo *v33; // x5
  UnityEngine_Object_o *v34; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *noticeNumberPrefab; // x22
  UnityEngine_Component_o *v36; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v38; // x24
  UnityEngine_GameObject_o *v39; // x23
  int v40; // w24
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int v47; // w8
  void *v48; // x23
  unsigned int v49; // w25
  NoticeNumberComponent_o *v50; // x20
  const MethodInfo *v51; // x1
  __int64 v53; // x0
  UnityEngine_Vector2_o v54; // 0:s0.4,4:s1.4

  if ( (byte_4187355 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_MissionNotifyComponent___ctor__, method);
    sub_B2C35C(&System_Action_MissionNotifyComponent__TypeInfo, v3);
    sub_B2C35C(&System_Action_TypeInfo, v4);
    sub_B2C35C(&Method_System_Func_MissionNotifyComponent___ctor__, v5);
    sub_B2C35C(&System_Func_MissionNotifyComponent__TypeInfo, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionNotifyComponent__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__, v12);
    sub_B2C35C(&Method_MissionNotifyManager_DragStartCallback__, v13);
    sub_B2C35C(&Method_MissionNotifyManager_FrameOutEndCallback__, v14);
    sub_B2C35C(&Method_MissionNotifyManager_FrameOutStartCallback__, v15);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    byte_4187355 = 1;
  }
  p_mNoticeNumberComp = &this->fields.mNoticeNumberComp;
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    Instance = *p_mNoticeNumberComp;
    if ( !*p_mNoticeNumberComp )
      goto LABEL_47;
    NoticeNumberComponent__SetDisp((NoticeNumberComponent_o *)Instance, this->fields.mPauseCount < 1, 0LL);
  }
  if ( MissionNotifyManager__IsBusy(this, v21) )
    return 0LL;
  if ( MissionNotifyManager__GetDispInfoCount(this, v23) <= 0 )
  {
    MissionNotifyManager__TryMoveNoDisplayToDisplay(this, v25);
    if ( MissionNotifyManager__GetDispInfoCount(this, v26) < 1 )
      return 0LL;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MissionNotify = (UnityEngine_Object_o *)CommonUI__CreateMissionNotify((CommonUI_o *)Instance, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (void *)UnityEngine_Object__op_Equality(MissionNotify, 0LL, 0LL);
  Component_srcLineSprite = 0LL;
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    mDispInfos = this->fields.mDispInfos;
    if ( !mDispInfos )
      goto LABEL_47;
    if ( !mDispInfos->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( !MissionNotify )
      goto LABEL_47;
    v29 = mDispInfos->fields._items->m_Items[0];
    Component_srcLineSprite = (MissionNotifyComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)MissionNotify,
                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___);
    v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_MissionNotifyManager_DragStartCallback__, 0LL);
    v31 = (System_Func_Task_ContingentProperties__o *)sub_B2C42C(System_Func_MissionNotifyComponent__TypeInfo);
    System_Func_Task_ContingentProperties____ctor(
      v31,
      (Il2CppObject *)this,
      Method_MissionNotifyManager_FrameOutStartCallback__,
      (const MethodInfo_26FF07C *)Method_System_Func_MissionNotifyComponent___ctor__);
    v32 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_MissionNotifyComponent__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v32,
      (Il2CppObject *)this,
      Method_MissionNotifyManager_FrameOutEndCallback__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_MissionNotifyComponent___ctor__);
    if ( !Component_srcLineSprite )
      goto LABEL_47;
    MissionNotifyComponent__SetupAndPlay(
      Component_srcLineSprite,
      v29,
      v30,
      (System_Func_MissionNotifyComponent__o *)v31,
      (System_Action_MissionNotifyComponent__o *)v32,
      v33);
    v34 = (UnityEngine_Object_o *)*p_mNoticeNumberComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v34, 0LL, 0LL) )
    {
      noticeNumberPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)Component_srcLineSprite->fields.noticeNumberPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v36 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         noticeNumberPrefab,
                                         (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
      Instance = GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( !Instance )
        goto LABEL_47;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !v36 )
        goto LABEL_47;
      v38 = (UnityEngine_GameObject_o *)Instance;
      v39 = UnityEngine_Component__get_gameObject(v36, 0LL);
      GameObjectExtensions__SafeSetParent_31331952(v39, v38, 0LL);
      v54.fields.x = 270.0;
      v54.fields.y = 275.0;
      GameObjectExtensions__SetLocalPosition_31325816(v39, v54, 0LL);
      GameObjectExtensions__SetLocalScale_31328080(v39, 0.75, 0LL);
      if ( !v38 )
        goto LABEL_47;
      Instance = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                   v38,
                   (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_47;
      if ( !v39 )
        goto LABEL_47;
      v40 = *((_DWORD *)Instance + 42);
      Instance = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                   v39,
                   (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_47;
      v47 = *((_DWORD *)Instance + 6);
      v48 = Instance;
      if ( v47 >= 1 )
      {
        v49 = 0;
        while ( 1 )
        {
          if ( v49 >= v47 )
          {
            v53 = sub_B2C460(Instance);
            sub_B2C400(v53, 0LL);
          }
          Instance = (void *)*((_QWORD *)v48 + (int)v49 + 4);
          if ( !Instance )
            break;
          UIWidget__set_depth((UIWidget_o *)Instance, *((_DWORD *)Instance + 42) + v40, 0LL);
          v47 = *((_DWORD *)v48 + 6);
          if ( (int)++v49 >= v47 )
            goto LABEL_41;
        }
LABEL_47:
        sub_B2C434(Instance, v21);
      }
LABEL_41:
      *p_mNoticeNumberComp = (struct NoticeNumberComponent_o *)v36;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.mNoticeNumberComp,
        (System_Int32_array **)v36,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
    }
    Instance = this->fields.mMissionNotifyComps;
    if ( !Instance )
      goto LABEL_47;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MissionNotifyComponent__Add__);
    Instance = this->fields.mDispInfos;
    if ( !Instance )
      goto LABEL_47;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
      0,
      (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    v50 = this->fields.mNoticeNumberComp;
    Instance = (void *)MissionNotifyManager__GetDispInfoCount(this, v51);
    if ( !v50 )
      goto LABEL_47;
    NoticeNumberComponent__SetNumber(v50, (int32_t)Instance, 0LL);
  }
  return Component_srcLineSprite;
}


void __fastcall MissionNotifyManager__StartPause(MissionNotifyManager_o *this, const MethodInfo *method)
{
  ++this->fields.mPauseCount;
}


void __fastcall MissionNotifyManager__TryMoveNoDisplayToDisplay(MissionNotifyManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MissionNotifyManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mNoDispInfos; // x20
  __int64 size; // x8
  __int64 v9; // x21
  int v10; // w22
  MissionNotifyDispInfo_o *v11; // x20

  v3 = this;
  if ( (byte_4187356 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__, v5);
    this = (MissionNotifyManager_o *)sub_B2C35C(
                                       &Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__,
                                       v6);
    byte_4187356 = 1;
  }
  mNoDispInfos = v3->fields.mNoDispInfos;
  if ( !mNoDispInfos )
    goto LABEL_14;
  size = mNoDispInfos->fields._size;
  if ( (int)size >= 1 )
  {
    v9 = size + 3;
    v10 = size - 2;
    do
    {
      if ( v9 - 4 >= (unsigned __int64)(unsigned int)mNoDispInfos->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v11 = (MissionNotifyDispInfo_o *)*((_QWORD *)&mNoDispInfos->fields._items->obj.klass + v9);
      this = (MissionNotifyManager_o *)MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(v3, v11, v2);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (MissionNotifyManager_o *)v3->fields.mDispInfos;
        if ( !this )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
        this = (MissionNotifyManager_o *)v3->fields.mNoDispInfos;
        if ( !this )
          break;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          v9 - 4,
          (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
      }
      if ( (v10 & 0x80000000) != 0 )
        return;
      mNoDispInfos = v3->fields.mNoDispInfos;
      --v9;
      --v10;
    }
    while ( mNoDispInfos );
LABEL_14:
    sub_B2C434(this, method);
  }
}


void __fastcall MissionNotifyManager___c__DisplayClass24_0___ctor(
        MissionNotifyManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNotifyManager___c__DisplayClass24_0___RequestDisp_b__0(
        MissionNotifyManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager___c__DisplayClass24_0_o *v2; // x19
  __int64 v3; // x1
  System_Action_o *_9__1; // x22
  MissionNotifyManager_o *_4__this; // x20
  MissionNotifyDispInfo_o *disp_info; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v2 = this;
  if ( (byte_4185D40 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    this = (MissionNotifyManager___c__DisplayClass24_0_o *)sub_B2C35C(
                                                             &Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__1__,
                                                             v3);
    byte_4185D40 = 1;
  }
  _9__1 = v2->fields.__9__1;
  _4__this = v2->fields.__4__this;
  disp_info = v2->fields.disp_info;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v2->fields.__9__1,
      (System_Int32_array **)_9__1,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !_4__this )
    sub_B2C434(this, method);
  MissionNotifyManager__LoadEventAsset(_4__this, disp_info, _9__1, 0LL);
}


void __fastcall MissionNotifyManager___c__DisplayClass24_0___RequestDisp_b__1(
        MissionNotifyManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  MissionNotifyManager__LoadNotificationEnd(_4__this, this->fields.disp_info, 0LL);
}