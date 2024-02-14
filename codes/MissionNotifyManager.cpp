void __fastcall MissionNotifyManager___ctor(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_int__o *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v49; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_42145F5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_Generic_List_MissionNotifyComponent__TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager___ctor__, v11);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v12);
    byte_42145F5 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v13;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mNoDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v22;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mNoDispInfos,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MissionNotifyComponent__TypeInfo,
                                                                                                  v29,
                                                                                                  v30);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__);
  this->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v31;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mMissionNotifyComps,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v40 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v38, v39);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.assetLoadedEventIdList = v40;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.assetLoadedEventIdList,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v49 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B0D974(
                                                                                                System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo,
                                                                                                v47,
                                                                                                v48);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v49,
    (const MethodInfo_2C77374 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__);
  this->fields.noDisplayMissionCondTypeHashSet = v49;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.noDisplayMissionCondTypeHashSet,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2A716D0 *)Method_SingletonTemplate_MissionNotifyManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyManager__AddNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *noDisplayMissionCondTypeHashSet; // x0

  if ( (byte_42145E6 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__,
      *(_QWORD *)&missionCondType);
    byte_42145E6 = 1;
  }
  noDisplayMissionCondTypeHashSet = this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_B0D97C(0LL);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_2C78550 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__);
}


void __fastcall MissionNotifyManager__CancelPause(MissionNotifyManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  NoticeNumberComponent_o *v4; // x0

  if ( (byte_42145E5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42145E5 = 1;
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
    v4 = this->fields.mNoticeNumberComp;
    if ( !v4 )
      sub_B0D97C(0LL);
    NoticeNumberComponent__SetDisp(v4, 1, 0LL);
  }
}


void __fastcall MissionNotifyManager__ClearRequest(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x0
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  const MethodInfo *v6; // x1
  NoticeNumberComponent_o *v7; // x20

  if ( (byte_42145EA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Clear__, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_42145EA = 1;
  }
  mDispInfos = this->fields.mDispInfos;
  if ( !mDispInfos )
    goto LABEL_11;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mDispInfos,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__Clear__);
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
    sub_B0D97C(mDispInfos);
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
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42145E9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42145E9 = 1;
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
      sub_B0D97C(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mNoticeNumberComp, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    *p_mNoticeNumberComp = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)p_mNoticeNumberComp, 0LL, v8, v9, v10, v11, v12, v13);
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
  if ( (byte_42145F3 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Item__, v5);
    this = (MissionNotifyManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_42145F3 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = *(MissionNotifyManager_o **)((char *)&mMissionNotifyComps->fields._items->obj.klass + v9);
      if ( !this )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
      this = (MissionNotifyManager_o *)v2->fields.mMissionNotifyComps;
      if ( !this )
        break;
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
        v8,
        (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__);
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
    sub_B0D97C(this);
  }
}


void __fastcall MissionNotifyManager__DragStartCallback(MissionNotifyManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  NoticeNumberComponent_o *v4; // x0

  if ( (byte_42145F0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42145F0 = 1;
  }
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v4 = this->fields.mNoticeNumberComp;
    if ( !v4 )
      sub_B0D97C(0LL);
    NoticeNumberComponent__SetDisp(v4, 0, 0LL);
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

  if ( (byte_42145F1 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, comp);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_42145F1 = 1;
  }
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_14;
  if ( mMissionNotifyComps->fields._size < 1 )
    return;
  mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                                                              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)mMissionNotifyComps,
                                                                                              (WarBoardManager_TaskList_o *)comp,
                                                                                              (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__);
  if ( !comp )
LABEL_14:
    sub_B0D97C(mMissionNotifyComps);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)comp, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
}


int32_t __fastcall MissionNotifyManager__GetDispInfoCount(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *v2; // x19
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8

  v2 = this;
  if ( (byte_42145E8 & 1) == 0 )
  {
    this = (MissionNotifyManager_o *)sub_B0D8A4(
                                       &Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__,
                                       method);
    byte_42145E8 = 1;
  }
  mDispInfos = v2->fields.mDispInfos;
  if ( !mDispInfos )
    sub_B0D97C(this);
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

  if ( (byte_42145F2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__, v5);
    byte_42145F2 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( this->fields.mPauseCount > 0 )
    return 1;
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mMissionNotifyComps,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__) )
  {
    if ( !v11.fields.current )
      sub_B0D97C(0LL);
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
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  return (v10 == 5) & v9;
}


bool __fastcall MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *missionNotifyDispInfo,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( !missionNotifyDispInfo )
    sub_B0D97C(this);
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
  int v8; // w19
  int v9; // w20
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42145E4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__, v5);
    byte_42145E4 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mMissionNotifyComps,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v12,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    if ( !v7 )
      break;
    if ( !v12.fields.current )
      sub_B0D97C(v7);
    if ( LOBYTE(v12.fields.current[11].monitor) )
    {
      v8 = 1;
      v9 = 3;
      goto LABEL_10;
    }
  }
  v8 = 0;
  v9 = 1;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  return v8 & ((unsigned int)(v9 + 1) >> 2);
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
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t age_high; // w20
  __int64 v17; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42145EC & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, disp_info);
    sub_B0D8A4(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_B0D8A4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(&long___TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_42145EC = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !disp_info || !Instance )
    goto LABEL_26;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          disp_info->fields.eventMissionId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
    goto LABEL_24;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  Instance = sub_B0D8BC(long___TypeInfo, 1LL);
  if ( !entity || !Instance )
    goto LABEL_26;
  if ( !*(_DWORD *)(Instance + 24) )
  {
    v17 = sub_B0D9A8(Instance);
    sub_B0D948(v17, 0LL);
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
               (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
  if ( (Instance & 1) != 0 )
    goto LABEL_19;
  if ( !entity || (Instance = (__int64)this->fields.assetLoadedEventIdList) == 0 )
LABEL_26:
    sub_B0D97C(Instance);
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)Instance,
    HIDWORD(entity->fields.age),
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
LABEL_19:
  if ( !entity )
    goto LABEL_26;
  age_high = HIDWORD(entity->fields.age);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_27921540(age_high, finishCallback, 1, 0LL);
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

  if ( (byte_42145ED & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__, disp_info);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_42145ED = 1;
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
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
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
      sub_B0D97C(mDispInfos);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *assetLoadedEventIdList; // x0
  int32_t current; // w20
  System_Collections_Generic_List_Enumerator_int__o v10; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v11; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42145F4 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    byte_42145F4 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  assetLoadedEventIdList = this->fields.assetLoadedEventIdList;
  if ( !assetLoadedEventIdList )
    goto LABEL_12;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    assetLoadedEventIdList,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v11 = v10;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v11,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v11.fields.current;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__ReleaseEventUI_27921720(current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v11,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  assetLoadedEventIdList = this->fields.assetLoadedEventIdList;
  if ( !assetLoadedEventIdList )
LABEL_12:
    sub_B0D97C(assetLoadedEventIdList);
  System_Collections_Generic_List_int___Clear(
    assetLoadedEventIdList,
    (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyManager__RemoveNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *noDisplayMissionCondTypeHashSet; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42145E7 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__,
      *(_QWORD *)&missionCondType);
    byte_42145E7 = 1;
  }
  noDisplayMissionCondTypeHashSet = this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_B0D97C(0LL);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Remove(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_2C77BB4 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x19

  if ( (byte_42145EB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, disp_info);
    sub_B0D8A4(&AtlasManager_TypeInfo, v5);
    sub_B0D8A4(&Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__0__, v6);
    sub_B0D8A4(&MissionNotifyManager___c__DisplayClass24_0_TypeInfo, v7);
    byte_42145EB = 1;
  }
  v8 = sub_B0D974(MissionNotifyManager___c__DisplayClass24_0_TypeInfo, disp_info, method);
  MissionNotifyManager___c__DisplayClass24_0___ctor((MissionNotifyManager___c__DisplayClass24_0_o *)v8, 0LL);
  if ( !v8 )
    sub_B0D97C(v9);
  *(_QWORD *)(v8 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v8 + 24) = disp_info;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 24), (System_Int32_array **)disp_info, v16, v17, v18, v19, v20, v21);
  v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v8,
    Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v24, 0LL);
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
  __int64 v30; // x1
  __int64 v31; // x2
  System_Action_o *v32; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  System_Func_Task_ContingentProperties__o *v35; // x24
  __int64 v36; // x1
  __int64 v37; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v38; // x25
  const MethodInfo *v39; // x5
  UnityEngine_Object_o *v40; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *noticeNumberPrefab; // x22
  UnityEngine_Component_o *v42; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v44; // x24
  UnityEngine_GameObject_o *v45; // x23
  int v46; // w24
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int v53; // w8
  void *v54; // x23
  unsigned int v55; // w25
  NoticeNumberComponent_o *v56; // x20
  const MethodInfo *v57; // x1
  __int64 v59; // x0
  UnityEngine_Vector2_o v60; // 0:s0.4,4:s1.4

  if ( (byte_42145EE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_MissionNotifyComponent___ctor__, method);
    sub_B0D8A4(&System_Action_MissionNotifyComponent__TypeInfo, v3);
    sub_B0D8A4(&System_Action_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Func_MissionNotifyComponent___ctor__, v5);
    sub_B0D8A4(&System_Func_MissionNotifyComponent__TypeInfo, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionNotifyComponent__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__, v12);
    sub_B0D8A4(&Method_MissionNotifyManager_DragStartCallback__, v13);
    sub_B0D8A4(&Method_MissionNotifyManager_FrameOutEndCallback__, v14);
    sub_B0D8A4(&Method_MissionNotifyManager_FrameOutStartCallback__, v15);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___, v16);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    byte_42145EE = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( !MissionNotify )
      goto LABEL_47;
    v29 = mDispInfos->fields._items->m_Items[0];
    Component_srcLineSprite = (MissionNotifyComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)MissionNotify,
                                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___);
    v32 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v30, v31);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_MissionNotifyManager_DragStartCallback__, 0LL);
    v35 = (System_Func_Task_ContingentProperties__o *)sub_B0D974(System_Func_MissionNotifyComponent__TypeInfo, v33, v34);
    System_Func_Task_ContingentProperties____ctor(
      v35,
      (Il2CppObject *)this,
      Method_MissionNotifyManager_FrameOutStartCallback__,
      (const MethodInfo_2605E30 *)Method_System_Func_MissionNotifyComponent___ctor__);
    v38 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_MissionNotifyComponent__TypeInfo,
                                                                                 v36,
                                                                                 v37);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v38,
      (Il2CppObject *)this,
      Method_MissionNotifyManager_FrameOutEndCallback__,
      (const MethodInfo_246EA3C *)Method_System_Action_MissionNotifyComponent___ctor__);
    if ( !Component_srcLineSprite )
      goto LABEL_47;
    MissionNotifyComponent__SetupAndPlay(
      Component_srcLineSprite,
      v29,
      v32,
      (System_Func_MissionNotifyComponent__o *)v35,
      (System_Action_MissionNotifyComponent__o *)v38,
      v39);
    v40 = (UnityEngine_Object_o *)*p_mNoticeNumberComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v40, 0LL, 0LL) )
    {
      noticeNumberPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)Component_srcLineSprite->fields.noticeNumberPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v42 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         noticeNumberPrefab,
                                         (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
      Instance = GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( !Instance )
        goto LABEL_47;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !v42 )
        goto LABEL_47;
      v44 = (UnityEngine_GameObject_o *)Instance;
      v45 = UnityEngine_Component__get_gameObject(v42, 0LL);
      GameObjectExtensions__SafeSetParent_31184716(v45, v44, 0LL);
      v60.fields.x = 270.0;
      v60.fields.y = 275.0;
      GameObjectExtensions__SetLocalPosition_31178580(v45, v60, 0LL);
      GameObjectExtensions__SetLocalScale_31180844(v45, 0.75, 0LL);
      if ( !v44 )
        goto LABEL_47;
      Instance = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                   v44,
                   (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_47;
      if ( !v45 )
        goto LABEL_47;
      v46 = *((_DWORD *)Instance + 42);
      Instance = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                   v45,
                   (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_47;
      v53 = *((_DWORD *)Instance + 6);
      v54 = Instance;
      if ( v53 >= 1 )
      {
        v55 = 0;
        while ( 1 )
        {
          if ( v55 >= v53 )
          {
            v59 = sub_B0D9A8(Instance);
            sub_B0D948(v59, 0LL);
          }
          Instance = (void *)*((_QWORD *)v54 + (int)v55 + 4);
          if ( !Instance )
            break;
          UIWidget__set_depth((UIWidget_o *)Instance, *((_DWORD *)Instance + 42) + v46, 0LL);
          v53 = *((_DWORD *)v54 + 6);
          if ( (int)++v55 >= v53 )
            goto LABEL_41;
        }
LABEL_47:
        sub_B0D97C(Instance);
      }
LABEL_41:
      *p_mNoticeNumberComp = (struct NoticeNumberComponent_o *)v42;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.mNoticeNumberComp,
        (System_Int32_array **)v42,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    Instance = this->fields.mMissionNotifyComps;
    if ( !Instance )
      goto LABEL_47;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MissionNotifyComponent__Add__);
    Instance = this->fields.mDispInfos;
    if ( !Instance )
      goto LABEL_47;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
      0,
      (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    v56 = this->fields.mNoticeNumberComp;
    Instance = (void *)MissionNotifyManager__GetDispInfoCount(this, v57);
    if ( !v56 )
      goto LABEL_47;
    NoticeNumberComponent__SetNumber(v56, (int32_t)Instance, 0LL);
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
  if ( (byte_42145EF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__, v5);
    this = (MissionNotifyManager_o *)sub_B0D8A4(
                                       &Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__,
                                       v6);
    byte_42145EF = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
        this = (MissionNotifyManager_o *)v3->fields.mNoDispInfos;
        if ( !this )
          break;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          v9 - 4,
          (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
      }
      if ( (v10 & 0x80000000) != 0 )
        return;
      mNoDispInfos = v3->fields.mNoDispInfos;
      --v9;
      --v10;
    }
    while ( mNoDispInfos );
LABEL_14:
    sub_B0D97C(this);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  System_Action_o *klass; // x22
  MissionNotifyManager_o *v6; // x20
  MissionNotifyDispInfo_o *monitor; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4212741 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (MissionNotifyManager___c__DisplayClass24_0_o *)sub_B0D8A4(
                                                             &Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__1__,
                                                             v4);
    byte_4212741 = 1;
  }
  klass = (System_Action_o *)v3[2].klass;
  v6 = (MissionNotifyManager_o *)v3[1].klass;
  monitor = (MissionNotifyDispInfo_o *)v3[1].monitor;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
    System_Action___ctor(klass, v3, Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__1__, 0LL);
    v3[2].klass = (Il2CppClass *)klass;
    sub_B0D840(&v3[2], klass);
  }
  if ( !v6 )
    sub_B0D97C(this);
  MissionNotifyManager__LoadEventAsset(v6, monitor, klass, 0LL);
}


void __fastcall MissionNotifyManager___c__DisplayClass24_0___RequestDisp_b__1(
        MissionNotifyManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  MissionNotifyManager__LoadNotificationEnd(_4__this, this->fields.disp_info, 0LL);
}