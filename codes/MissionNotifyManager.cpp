void __fastcall MissionNotifyManager___ctor(MissionNotifyManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_int__o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_4350CF1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__);
    sub_B70694(&System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_MissionNotifyComponent__TypeInfo);
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager___ctor__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_4350CF1 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mNoDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mNoDispInfos,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MissionNotifyComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__);
  this->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.mMissionNotifyComps,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.assetLoadedEventIdList = v24;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.assetLoadedEventIdList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B70764(System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v31,
    (const MethodInfo_2EB01EC *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__);
  this->fields.noDisplayMissionCondTypeHashSet = v31;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.noDisplayMissionCondTypeHashSet,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2CE9F98 *)Method_SingletonTemplate_MissionNotifyManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyManager__AddNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *noDisplayMissionCondTypeHashSet; // x0

  if ( (byte_4350CE2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__);
    byte_4350CE2 = 1;
  }
  noDisplayMissionCondTypeHashSet = this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_B7076C(0LL, *(_QWORD *)&missionCondType);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_2EB13C8 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__);
}


void __fastcall MissionNotifyManager__CancelPause(MissionNotifyManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  __int64 v4; // x1
  NoticeNumberComponent_o *v5; // x0

  if ( (byte_4350CE1 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350CE1 = 1;
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
      sub_B7076C(0LL, v4);
    NoticeNumberComponent__SetDisp(v5, 1, 0LL);
  }
}


void __fastcall MissionNotifyManager__ClearRequest(MissionNotifyManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x0
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  const MethodInfo *v5; // x1
  NoticeNumberComponent_o *v6; // x20

  if ( (byte_4350CE6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Clear__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350CE6 = 1;
  }
  mDispInfos = this->fields.mDispInfos;
  if ( !mDispInfos )
    goto LABEL_11;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mDispInfos,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__Clear__);
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v6 = this->fields.mNoticeNumberComp;
    mDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)MissionNotifyManager__GetDispInfoCount(
                                                                                      this,
                                                                                      v5);
    if ( v6 )
    {
      NoticeNumberComponent__SetNumber(v6, (int32_t)mDispInfos, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_B7076C(mDispInfos, method);
  }
LABEL_10:
  MissionNotifyManager__ReleaseEventAsset(this, v5);
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

  if ( (byte_4350CE5 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350CE5 = 1;
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
      sub_B7076C(0LL, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mNoticeNumberComp, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
    *p_mNoticeNumberComp = 0LL;
    sub_B70630((BattleServantConfConponent_o *)p_mNoticeNumberComp, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall MissionNotifyManager__DestroyAllMissionNotifyComponentObject(
        MissionNotifyManager_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *v2; // x19
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x21
  int32_t v4; // w20
  __int64 v5; // x24
  UnityEngine_Object_o *gameObject; // x21

  v2 = this;
  if ( (byte_4350CEF & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Item__);
    this = (MissionNotifyManager_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350CEF = 1;
  }
  mMissionNotifyComps = v2->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_18;
  v4 = mMissionNotifyComps->fields._size - 1;
  if ( v4 >= 0 )
  {
    v5 = 8LL * v4 + 32;
    do
    {
      if ( mMissionNotifyComps->fields._size <= (unsigned int)v4 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      this = *(MissionNotifyManager_o **)((char *)&mMissionNotifyComps->fields._items->obj.klass + v5);
      if ( !this )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
      this = (MissionNotifyManager_o *)v2->fields.mMissionNotifyComps;
      if ( !this )
        break;
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
        v4,
        (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__ReleaseNotification(0LL);
      if ( (--v4 & 0x80000000) != 0 )
        return;
      mMissionNotifyComps = v2->fields.mMissionNotifyComps;
      v5 -= 8LL;
    }
    while ( mMissionNotifyComps );
LABEL_18:
    sub_B7076C(this, method);
  }
}


void __fastcall MissionNotifyManager__DragStartCallback(MissionNotifyManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  __int64 v4; // x1
  NoticeNumberComponent_o *v5; // x0

  if ( (byte_4350CEC & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350CEC = 1;
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
      sub_B7076C(0LL, v4);
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
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4350CED & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__);
    sub_B70694(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350CED = 1;
  }
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_14;
  if ( mMissionNotifyComps->fields._size < 1 )
    return;
  mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                                                              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)mMissionNotifyComps,
                                                                                              (WarBoardManager_TaskList_o *)comp,
                                                                                              (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__);
  if ( !comp )
LABEL_14:
    sub_B7076C(mMissionNotifyComps, comp);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)comp, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
}


int32_t __fastcall MissionNotifyManager__GetDispInfoCount(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *v2; // x19
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8

  v2 = this;
  if ( (byte_4350CE4 & 1) == 0 )
  {
    this = (MissionNotifyManager_o *)sub_B70694(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__);
    byte_4350CE4 = 1;
  }
  mDispInfos = v2->fields.mDispInfos;
  if ( !mDispInfos )
    sub_B7076C(this, method);
  return mDispInfos->fields._size;
}


void __fastcall MissionNotifyManager__Init(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager__Destroy(this, method);
  this->fields.mPauseCount = 0;
}


bool __fastcall MissionNotifyManager__IsBusy(MissionNotifyManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  const MethodInfo *v5; // x1
  char v6; // w19
  int v7; // w20
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4350CEE & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
    byte_4350CEE = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( this->fields.mPauseCount > 0 )
    return 1;
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mMissionNotifyComps,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B7076C(0LL, v5);
    if ( MissionNotifyComponent__IsBusy((MissionNotifyComponent_o *)v8.fields.current, v5) )
    {
      v6 = 1;
      v7 = 5;
      goto LABEL_12;
    }
  }
  v6 = 0;
  v7 = 3;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  return (v7 == 5) & v6;
}


bool __fastcall MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *missionNotifyDispInfo,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( !missionNotifyDispInfo )
    sub_B7076C(this, 0LL);
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
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  int v6; // w19
  int v7; // w20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4350CE0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
    byte_4350CE0 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mMissionNotifyComps,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    if ( !v4 )
      break;
    if ( !v10.fields.current )
      sub_B7076C(v4, v5);
    if ( LOBYTE(v10.fields.current[11].monitor) )
    {
      v6 = 1;
      v7 = 3;
      goto LABEL_10;
    }
  }
  v6 = 0;
  v7 = 1;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  return v6 & ((unsigned int)(v7 + 1) >> 2);
}


void __fastcall MissionNotifyManager__LoadEventAsset(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v8; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t age_high; // w20
  __int64 v11; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4350CE8 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_B70694(&long___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350CE8 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !disp_info || !Instance )
    goto LABEL_26;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          disp_info->fields.eventMissionId,
          (const MethodInfo_21C049C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
    goto LABEL_24;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  Instance = sub_B706AC(long___TypeInfo, 1LL);
  if ( !entity )
    goto LABEL_26;
  v8 = Instance;
  if ( !Instance )
    goto LABEL_26;
  if ( !*(_DWORD *)(Instance + 24) )
  {
    v11 = sub_B70798(Instance);
    sub_B70738(v11, 0LL);
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
               (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
  if ( (Instance & 1) != 0 )
    goto LABEL_19;
  if ( !entity || (Instance = (__int64)this->fields.assetLoadedEventIdList) == 0 )
LABEL_26:
    sub_B7076C(Instance, v8);
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)Instance,
    HIDWORD(entity->fields.age),
    (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
LABEL_19:
  if ( !entity )
    goto LABEL_26;
  age_high = HIDWORD(entity->fields.age);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_31552064(age_high, finishCallback, 1, 0LL);
}


void __fastcall MissionNotifyManager__LoadNotificationEnd(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *mDispInfos; // x0
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  const MethodInfo *v8; // x1
  NoticeNumberComponent_o *v9; // x20

  if ( (byte_4350CE9 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4350CE9 = 1;
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
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v9 = this->fields.mNoticeNumberComp;
    mDispInfos = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)MissionNotifyManager__GetDispInfoCount(this, v8);
    if ( !v9
      || (NoticeNumberComponent__SetNumber(v9, (int32_t)mDispInfos, 0LL),
          (mDispInfos = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.mNoticeNumberComp) == 0LL) )
    {
LABEL_15:
      sub_B7076C(mDispInfos, v5);
    }
    NoticeNumberComponent__SetDispForce((NoticeNumberComponent_o *)mDispInfos, this->fields.mPauseCount < 1, 0LL);
  }
  MissionNotifyManager__StartDisp(this, v8);
}


void __fastcall MissionNotifyManager__Reboot(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager__Destroy(this, method);
  this->fields.mPauseCount = 0;
}


void __fastcall MissionNotifyManager__ReleaseEventAsset(MissionNotifyManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *assetLoadedEventIdList; // x0
  int32_t current; // w20
  System_Collections_Generic_List_Enumerator_int__o v5; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v6; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4350CF0 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_4350CF0 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  assetLoadedEventIdList = this->fields.assetLoadedEventIdList;
  if ( !assetLoadedEventIdList )
    goto LABEL_12;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    assetLoadedEventIdList,
    (const MethodInfo_30B701C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v6 = v5;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v6,
            (const MethodInfo_221ED60 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v6.fields.current;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__ReleaseEventUI_31552244(current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v6,
    (const MethodInfo_221ED5C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  assetLoadedEventIdList = this->fields.assetLoadedEventIdList;
  if ( !assetLoadedEventIdList )
LABEL_12:
    sub_B7076C(assetLoadedEventIdList, method);
  System_Collections_Generic_List_int___Clear(
    assetLoadedEventIdList,
    (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyManager__RemoveNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *noDisplayMissionCondTypeHashSet; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4350CE3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__);
    byte_4350CE3 = 1;
  }
  noDisplayMissionCondTypeHashSet = this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_B7076C(0LL, *(_QWORD *)&missionCondType);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Remove(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_2EB0A2C *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__);
  MissionNotifyManager__TryMoveNoDisplayToDisplay(this, v6);
}


void __fastcall MissionNotifyManager__RequestDisp(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Action_o *v20; // x19

  if ( (byte_4350CE7 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__0__);
    sub_B70694(&MissionNotifyManager___c__DisplayClass24_0_TypeInfo);
    byte_4350CE7 = 1;
  }
  v5 = sub_B70764(MissionNotifyManager___c__DisplayClass24_0_TypeInfo);
  MissionNotifyManager___c__DisplayClass24_0___ctor((MissionNotifyManager___c__DisplayClass24_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = disp_info;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)disp_info, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v20, 0LL);
}


MissionNotifyComponent_o *__fastcall MissionNotifyManager__StartDisp(
        MissionNotifyManager_o *this,
        const MethodInfo *method)
{
  struct NoticeNumberComponent_o **p_mNoticeNumberComp; // x20
  UnityEngine_Object_o *mNoticeNumberComp; // x21
  const MethodInfo *v5; // x1
  void *Instance; // x0
  const MethodInfo *v7; // x1
  MissionNotifyComponent_o *Component_srcLineSprite; // x21
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  UnityEngine_Object_o *MissionNotify; // x23
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x21
  MissionNotifyDispInfo_o *v13; // x22
  System_Action_o *v14; // x23
  System_Func_Task_ContingentProperties__o *v15; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v16; // x25
  const MethodInfo *v17; // x5
  UnityEngine_Object_o *v18; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *noticeNumberPrefab; // x22
  UnityEngine_Component_o *v20; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x24
  UnityEngine_GameObject_o *v23; // x23
  int v24; // w24
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int v31; // w8
  void *v32; // x23
  unsigned int v33; // w25
  NoticeNumberComponent_o *v34; // x20
  const MethodInfo *v35; // x1
  __int64 v37; // x0
  UnityEngine_Vector2_o v38; // 0:s0.4,4:s1.4

  if ( (byte_4350CEA & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_MissionNotifyComponent___ctor__);
    sub_B70694(&System_Action_MissionNotifyComponent__TypeInfo);
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_System_Func_MissionNotifyComponent___ctor__);
    sub_B70694(&System_Func_MissionNotifyComponent__TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_B70694(&Method_System_Collections_Generic_List_MissionNotifyComponent__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
    sub_B70694(&Method_MissionNotifyManager_DragStartCallback__);
    sub_B70694(&Method_MissionNotifyManager_FrameOutEndCallback__);
    sub_B70694(&Method_MissionNotifyManager_FrameOutStartCallback__);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4350CEA = 1;
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
  if ( MissionNotifyManager__IsBusy(this, v5) )
    return 0LL;
  if ( MissionNotifyManager__GetDispInfoCount(this, v7) <= 0 )
  {
    MissionNotifyManager__TryMoveNoDisplayToDisplay(this, v9);
    if ( MissionNotifyManager__GetDispInfoCount(this, v10) < 1 )
      return 0LL;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    if ( !MissionNotify )
      goto LABEL_47;
    v13 = mDispInfos->fields._items->m_Items[0];
    Component_srcLineSprite = (MissionNotifyComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)MissionNotify,
                                                            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___);
    v14 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_MissionNotifyManager_DragStartCallback__, 0LL);
    v15 = (System_Func_Task_ContingentProperties__o *)sub_B70764(System_Func_MissionNotifyComponent__TypeInfo);
    System_Func_Task_ContingentProperties____ctor(
      v15,
      (Il2CppObject *)this,
      Method_MissionNotifyManager_FrameOutStartCallback__,
      (const MethodInfo_2994AB0 *)Method_System_Func_MissionNotifyComponent___ctor__);
    v16 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_MissionNotifyComponent__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v16,
      (Il2CppObject *)this,
      Method_MissionNotifyManager_FrameOutEndCallback__,
      (const MethodInfo_264C148 *)Method_System_Action_MissionNotifyComponent___ctor__);
    if ( !Component_srcLineSprite )
      goto LABEL_47;
    MissionNotifyComponent__SetupAndPlay(
      Component_srcLineSprite,
      v13,
      v14,
      (System_Func_MissionNotifyComponent__o *)v15,
      (System_Action_MissionNotifyComponent__o *)v16,
      v17);
    v18 = (UnityEngine_Object_o *)*p_mNoticeNumberComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v18, 0LL, 0LL) )
    {
      noticeNumberPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)Component_srcLineSprite->fields.noticeNumberPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v20 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         noticeNumberPrefab,
                                         (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
      Instance = GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( !Instance )
        goto LABEL_47;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !v20 )
        goto LABEL_47;
      v22 = (UnityEngine_GameObject_o *)Instance;
      v23 = UnityEngine_Component__get_gameObject(v20, 0LL);
      GameObjectExtensions__SafeSetParent_32503456(v23, v22, 0LL);
      v38.fields.x = 270.0;
      v38.fields.y = 275.0;
      GameObjectExtensions__SetLocalPosition_32497320(v23, v38, 0LL);
      GameObjectExtensions__SetLocalScale_32499584(v23, 0.75, 0LL);
      if ( !v22 )
        goto LABEL_47;
      Instance = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                   v22,
                   (const MethodInfo_1D4AED4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_47;
      if ( !v23 )
        goto LABEL_47;
      v24 = *((_DWORD *)Instance + 42);
      Instance = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                   v23,
                   (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_47;
      v31 = *((_DWORD *)Instance + 6);
      v32 = Instance;
      if ( v31 >= 1 )
      {
        v33 = 0;
        while ( 1 )
        {
          if ( v33 >= v31 )
          {
            v37 = sub_B70798(Instance);
            sub_B70738(v37, 0LL);
          }
          Instance = (void *)*((_QWORD *)v32 + (int)v33 + 4);
          if ( !Instance )
            break;
          UIWidget__set_depth((UIWidget_o *)Instance, *((_DWORD *)Instance + 42) + v24, 0LL);
          v31 = *((_DWORD *)v32 + 6);
          if ( (int)++v33 >= v31 )
            goto LABEL_41;
        }
LABEL_47:
        sub_B7076C(Instance, v5);
      }
LABEL_41:
      *p_mNoticeNumberComp = (struct NoticeNumberComponent_o *)v20;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.mNoticeNumberComp,
        (System_Int32_array **)v20,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    Instance = this->fields.mMissionNotifyComps;
    if ( !Instance )
      goto LABEL_47;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MissionNotifyComponent__Add__);
    Instance = this->fields.mDispInfos;
    if ( !Instance )
      goto LABEL_47;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
      0,
      (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    v34 = this->fields.mNoticeNumberComp;
    Instance = (void *)MissionNotifyManager__GetDispInfoCount(this, v35);
    if ( !v34 )
      goto LABEL_47;
    NoticeNumberComponent__SetNumber(v34, (int32_t)Instance, 0LL);
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
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mNoDispInfos; // x20
  __int64 size; // x8
  __int64 v6; // x21
  int v7; // w22
  MissionNotifyDispInfo_o *v8; // x20

  v3 = this;
  if ( (byte_4350CEB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__);
    this = (MissionNotifyManager_o *)sub_B70694(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
    byte_4350CEB = 1;
  }
  mNoDispInfos = v3->fields.mNoDispInfos;
  if ( !mNoDispInfos )
    goto LABEL_14;
  size = mNoDispInfos->fields._size;
  if ( (int)size >= 1 )
  {
    v6 = size + 3;
    v7 = size - 2;
    do
    {
      if ( v6 - 4 >= (unsigned __int64)(unsigned int)mNoDispInfos->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      v8 = (MissionNotifyDispInfo_o *)*((_QWORD *)&mNoDispInfos->fields._items->obj.klass + v6);
      this = (MissionNotifyManager_o *)MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(v3, v8, v2);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (MissionNotifyManager_o *)v3->fields.mDispInfos;
        if ( !this )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
        this = (MissionNotifyManager_o *)v3->fields.mNoDispInfos;
        if ( !this )
          break;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          v6 - 4,
          (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
      }
      if ( (v7 & 0x80000000) != 0 )
        return;
      mNoDispInfos = v3->fields.mNoDispInfos;
      --v6;
      --v7;
    }
    while ( mNoDispInfos );
LABEL_14:
    sub_B7076C(this, method);
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
  Il2CppObject *v2; // x19
  System_Action_o *klass; // x22
  MissionNotifyManager_o *v4; // x20
  MissionNotifyDispInfo_o *monitor; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_434F410 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    this = (MissionNotifyManager___c__DisplayClass24_0_o *)sub_B70694(&Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__1__);
    byte_434F410 = 1;
  }
  klass = (System_Action_o *)v2[2].klass;
  v4 = (MissionNotifyManager_o *)v2[1].klass;
  monitor = (MissionNotifyDispInfo_o *)v2[1].monitor;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(klass, v2, Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__1__, 0LL);
    v2[2].klass = (Il2CppClass *)klass;
    sub_B70630(&v2[2]);
  }
  if ( !v4 )
    sub_B7076C(this, method);
  MissionNotifyManager__LoadEventAsset(v4, monitor, klass, 0LL);
}


void __fastcall MissionNotifyManager___c__DisplayClass24_0___RequestDisp_b__1(
        MissionNotifyManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  MissionNotifyManager__LoadNotificationEnd(_4__this, this->fields.disp_info, 0LL);
}