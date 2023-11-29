void __fastcall MissionNotifyManager___ctor(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Collections_Generic_List_int__o *v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v59; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7

  if ( (byte_40F7D4D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_List_MissionNotifyComponent__TypeInfo, v12);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager___ctor__, v13);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v14);
    byte_40F7D4D = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v15;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mNoDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v26;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mNoDispInfos,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MissionNotifyComponent__TypeInfo,
                                                                                                  v33,
                                                                                                  v34,
                                                                                                  v35,
                                                                                                  v36);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__);
  this->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v37;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mMissionNotifyComps,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v48 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v44,
                                                    v45,
                                                    v46,
                                                    v47);
  System_Collections_Generic_List_int____ctor(
    v48,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.assetLoadedEventIdList = v48;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.assetLoadedEventIdList,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v59 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B170CC(
                                                                                                System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo,
                                                                                                v55,
                                                                                                v56,
                                                                                                v57,
                                                                                                v58);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v59,
    (const MethodInfo_21DA2F8 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__);
  this->fields.noDisplayMissionCondTypeHashSet = v59;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.noDisplayMissionCondTypeHashSet,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2A555A4 *)Method_SingletonTemplate_MissionNotifyManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyManager__AddNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *noDisplayMissionCondTypeHashSet; // x0

  if ( (byte_40F7D3E & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__,
      *(_QWORD *)&missionCondType);
    byte_40F7D3E = 1;
  }
  noDisplayMissionCondTypeHashSet = this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_B170D4();
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_21DB4D4 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__);
}


void __fastcall MissionNotifyManager__CancelPause(MissionNotifyManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  NoticeNumberComponent_o *v4; // x0

  if ( (byte_40F7D3D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7D3D = 1;
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
      sub_B170D4();
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
  int32_t DispInfoCount; // w0

  if ( (byte_40F7D42 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Clear__, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F7D42 = 1;
  }
  mDispInfos = this->fields.mDispInfos;
  if ( !mDispInfos )
    goto LABEL_11;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mDispInfos,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__Clear__);
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v7 = this->fields.mNoticeNumberComp;
    DispInfoCount = MissionNotifyManager__GetDispInfoCount(this, v6);
    if ( v7 )
    {
      NoticeNumberComponent__SetNumber(v7, DispInfoCount, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_B170D4();
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

  if ( (byte_40F7D41 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7D41 = 1;
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
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mNoticeNumberComp, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_mNoticeNumberComp = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_mNoticeNumberComp, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall MissionNotifyManager__DestroyAllMissionNotifyComponentObject(
        MissionNotifyManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x21
  int32_t v8; // w20
  __int64 v9; // x24
  UnityEngine_Component_o *v10; // x0
  UnityEngine_Object_o *gameObject; // x21
  struct System_Collections_Generic_List_MissionNotifyComponent__o *v12; // x0

  if ( (byte_40F7D4B & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Item__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40F7D4B = 1;
  }
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_18;
  v8 = mMissionNotifyComps->fields._size - 1;
  if ( v8 >= 0 )
  {
    v9 = 8LL * v8 + 32;
    do
    {
      if ( mMissionNotifyComps->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v10 = *(UnityEngine_Component_o **)((char *)&mMissionNotifyComps->fields._items->obj.klass + v9);
      if ( !v10 )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v10, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
      v12 = this->fields.mMissionNotifyComps;
      if ( !v12 )
        break;
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)v12,
        v8,
        (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__ReleaseNotification(0LL);
      if ( (--v8 & 0x80000000) != 0 )
        return;
      mMissionNotifyComps = this->fields.mMissionNotifyComps;
      v9 -= 8LL;
    }
    while ( mMissionNotifyComps );
LABEL_18:
    sub_B170D4();
  }
}


void __fastcall MissionNotifyManager__DragStartCallback(MissionNotifyManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  NoticeNumberComponent_o *v4; // x0

  if ( (byte_40F7D48 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7D48 = 1;
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
      sub_B170D4();
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
  System_Collections_Generic_List_WarBoardManager_TaskList__o *mMissionNotifyComps; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40F7D49 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, comp);
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F7D49 = 1;
  }
  mMissionNotifyComps = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_14;
  if ( mMissionNotifyComps->fields._size < 1 )
    return;
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    mMissionNotifyComps,
    (WarBoardManager_TaskList_o *)comp,
    (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__);
  if ( !comp )
LABEL_14:
    sub_B170D4();
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)comp, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
}


int32_t __fastcall MissionNotifyManager__GetDispInfoCount(MissionNotifyManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8

  if ( (byte_40F7D40 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__, method);
    byte_40F7D40 = 1;
  }
  mDispInfos = this->fields.mDispInfos;
  if ( !mDispInfos )
    sub_B170D4();
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

  if ( (byte_40F7D4A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__, v5);
    byte_40F7D4A = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( this->fields.mPauseCount > 0 )
    return 1;
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mMissionNotifyComps,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__) )
  {
    if ( !v11.fields.current )
      sub_B170D4();
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
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  return (v10 == 5) & v9;
}


bool __fastcall MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *missionNotifyDispInfo,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( !missionNotifyDispInfo )
    sub_B170D4();
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
  int v7; // w19
  int v8; // w20
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F7D3C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__, v5);
    byte_40F7D3C = 1;
  }
  memset(&v11, 0, sizeof(v11));
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mMissionNotifyComps,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__) )
  {
    if ( !v11.fields.current )
      sub_B170D4();
    if ( LOBYTE(v11.fields.current[11].monitor) )
    {
      v7 = 1;
      v8 = 3;
      goto LABEL_10;
    }
  }
  v7 = 0;
  v8 = 1;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  return v7 & ((unsigned int)(v8 + 1) >> 2);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v16; // x0
  DataMasterBase_o *v17; // x21
  __int64 v18; // x2
  System_Int64_array *v19; // x0
  __int64 v20; // x2
  System_Collections_Generic_List_int__o *assetLoadedEventIdList; // x0
  System_Collections_Generic_List_int__o *v22; // x0
  int32_t age_high; // w20
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F7D44 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, disp_info);
    sub_B16FFC(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&long___TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_40F7D44 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !disp_info || !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          disp_info->fields.eventMissionId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
    goto LABEL_24;
  v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v16 )
    goto LABEL_26;
  v17 = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)v16,
                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  v19 = (System_Int64_array *)sub_B17014(long___TypeInfo, 1LL, v18);
  if ( !entity || !v19 )
    goto LABEL_26;
  if ( !v19->max_length )
  {
    sub_B17100(v19, v19, v20);
    sub_B170A0();
  }
  v19->m_Items[0] = SHIDWORD(entity->fields.age);
  if ( !v17 )
    goto LABEL_26;
  if ( !DataMasterBase__isEntityExistsFromId(v17, v19, 0LL) )
  {
LABEL_24:
    ActionExtensions__Call(finishCallback, 0LL);
    return;
  }
  if ( !entity )
    goto LABEL_26;
  assetLoadedEventIdList = this->fields.assetLoadedEventIdList;
  if ( !assetLoadedEventIdList )
    goto LABEL_26;
  if ( System_Collections_Generic_List_int___Contains(
         assetLoadedEventIdList,
         HIDWORD(entity->fields.age),
         (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    goto LABEL_19;
  }
  if ( !entity || (v22 = this->fields.assetLoadedEventIdList) == 0LL )
LABEL_26:
    sub_B170D4();
  System_Collections_Generic_List_int___Add(
    v22,
    HIDWORD(entity->fields.age),
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
LABEL_19:
  if ( !entity )
    goto LABEL_26;
  age_high = HIDWORD(entity->fields.age);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28584560(age_high, finishCallback, 1, 0LL);
}


void __fastcall MissionNotifyManager__LoadNotificationEnd(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x0
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  const MethodInfo *v8; // x1
  NoticeNumberComponent_o *v9; // x20
  int32_t DispInfoCount; // w0
  NoticeNumberComponent_o *v11; // x0

  if ( (byte_40F7D45 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__, disp_info);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F7D45 = 1;
  }
  if ( MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(this, disp_info, method) )
  {
    mDispInfos = this->fields.mDispInfos;
    if ( !mDispInfos )
      goto LABEL_15;
  }
  else
  {
    mDispInfos = this->fields.mNoDispInfos;
    if ( !mDispInfos )
      goto LABEL_15;
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispInfos,
    (EventMissionProgressRequest_Argument_ProgressData_o *)disp_info,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v9 = this->fields.mNoticeNumberComp;
    DispInfoCount = MissionNotifyManager__GetDispInfoCount(this, v8);
    if ( !v9
      || (NoticeNumberComponent__SetNumber(v9, DispInfoCount, 0LL), (v11 = this->fields.mNoticeNumberComp) == 0LL) )
    {
LABEL_15:
      sub_B170D4();
    }
    NoticeNumberComponent__SetDispForce(v11, this->fields.mPauseCount < 1, 0LL);
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
  System_Collections_Generic_List_int__o *v10; // x0
  System_Collections_Generic_List_Enumerator_int__o v11; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v12; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F7D4C & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    byte_40F7D4C = 1;
  }
  memset(&v12, 0, sizeof(v12));
  assetLoadedEventIdList = this->fields.assetLoadedEventIdList;
  if ( !assetLoadedEventIdList )
    goto LABEL_12;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    assetLoadedEventIdList,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v12,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__ReleaseEventUI_28584740(current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v12,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v10 = this->fields.assetLoadedEventIdList;
  if ( !v10 )
LABEL_12:
    sub_B170D4();
  System_Collections_Generic_List_int___Clear(
    v10,
    (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyManager__RemoveNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *noDisplayMissionCondTypeHashSet; // x0
  const MethodInfo *v6; // x1

  if ( (byte_40F7D3F & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__,
      *(_QWORD *)&missionCondType);
    byte_40F7D3F = 1;
  }
  noDisplayMissionCondTypeHashSet = this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_B170D4();
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Remove(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_21DAB38 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__);
  MissionNotifyManager__TryMoveNoDisplayToDisplay(this, v6);
}


void __fastcall MissionNotifyManager__RequestDisp(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Action_o *v27; // x19

  if ( (byte_40F7D43 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, disp_info);
    sub_B16FFC(&AtlasManager_TypeInfo, v7);
    sub_B16FFC(&Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__0__, v8);
    sub_B16FFC(&MissionNotifyManager___c__DisplayClass24_0_TypeInfo, v9);
    byte_40F7D43 = 1;
  }
  v10 = sub_B170CC(MissionNotifyManager___c__DisplayClass24_0_TypeInfo, disp_info, method, v3, v4);
  MissionNotifyManager___c__DisplayClass24_0___ctor((MissionNotifyManager___c__DisplayClass24_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B170D4();
  *(_QWORD *)(v10 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 24) = disp_info;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)disp_info, v17, v18, v19, v20, v21, v22);
  v27 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v25, v26);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v10,
    Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v27, 0LL);
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
  NoticeNumberComponent_o **p_mNoticeNumberComp; // x20
  UnityEngine_Object_o *mNoticeNumberComp; // x21
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  MissionNotifyComponent_o *Component_srcLineSprite; // x21
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  CommonUI_o *Instance; // x0
  UnityEngine_GameObject_o *MissionNotify; // x23
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x21
  MissionNotifyDispInfo_o *v29; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Action_o *v34; // x23
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Func_Task_ContingentProperties__o *v39; // x24
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v44; // x25
  const MethodInfo *v45; // x5
  NoticeNumberComponent_o *v46; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *noticeNumberPrefab; // x22
  UnityEngine_Component_o *v48; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x24
  UnityEngine_GameObject_o *v53; // x23
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  int klass; // w24
  changeVColor_array *v56; // x0
  __int64 v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  int max_length; // w8
  changeVColor_array *v65; // x23
  unsigned int v66; // w25
  UIWidget_o *v67; // x0
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *v69; // x0
  NoticeNumberComponent_o *v70; // x20
  const MethodInfo *v71; // x1
  int32_t DispInfoCount; // w0
  UnityEngine_Vector2_o v74; // 0:s0.4,4:s1.4

  if ( (byte_40F7D46 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_MissionNotifyComponent___ctor__, method);
    sub_B16FFC(&System_Action_MissionNotifyComponent__TypeInfo, v3);
    sub_B16FFC(&System_Action_TypeInfo, v4);
    sub_B16FFC(&Method_System_Func_MissionNotifyComponent___ctor__, v5);
    sub_B16FFC(&System_Func_MissionNotifyComponent__TypeInfo, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionNotifyComponent__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__, v12);
    sub_B16FFC(&Method_MissionNotifyManager_DragStartCallback__, v13);
    sub_B16FFC(&Method_MissionNotifyManager_FrameOutEndCallback__, v14);
    sub_B16FFC(&Method_MissionNotifyManager_FrameOutStartCallback__, v15);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    byte_40F7D46 = 1;
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
    if ( !*p_mNoticeNumberComp )
      goto LABEL_47;
    NoticeNumberComponent__SetDisp(*p_mNoticeNumberComp, this->fields.mPauseCount < 1, 0LL);
  }
  if ( MissionNotifyManager__IsBusy(this, v21) )
    return 0LL;
  if ( MissionNotifyManager__GetDispInfoCount(this, v22) <= 0 )
  {
    MissionNotifyManager__TryMoveNoDisplayToDisplay(this, v24);
    if ( MissionNotifyManager__GetDispInfoCount(this, v25) < 1 )
      return 0LL;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MissionNotify = CommonUI__CreateMissionNotify(Instance, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MissionNotify, 0LL, 0LL) )
  {
    mDispInfos = this->fields.mDispInfos;
    if ( !mDispInfos )
      goto LABEL_47;
    if ( !mDispInfos->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( !MissionNotify )
      goto LABEL_47;
    v29 = mDispInfos->fields._items->m_Items[0];
    Component_srcLineSprite = (MissionNotifyComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            MissionNotify,
                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___);
    v34 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v30, v31, v32, v33);
    System_Action___ctor(v34, (Il2CppObject *)this, Method_MissionNotifyManager_DragStartCallback__, 0LL);
    v39 = (System_Func_Task_ContingentProperties__o *)sub_B170CC(
                                                        System_Func_MissionNotifyComponent__TypeInfo,
                                                        v35,
                                                        v36,
                                                        v37,
                                                        v38);
    System_Func_Task_ContingentProperties____ctor(
      v39,
      (Il2CppObject *)this,
      Method_MissionNotifyManager_FrameOutStartCallback__,
      (const MethodInfo_284EF54 *)Method_System_Func_MissionNotifyComponent___ctor__);
    v44 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_MissionNotifyComponent__TypeInfo,
                                                                                 v40,
                                                                                 v41,
                                                                                 v42,
                                                                                 v43);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v44,
      (Il2CppObject *)this,
      Method_MissionNotifyManager_FrameOutEndCallback__,
      (const MethodInfo_24B7310 *)Method_System_Action_MissionNotifyComponent___ctor__);
    if ( !Component_srcLineSprite )
      goto LABEL_47;
    MissionNotifyComponent__SetupAndPlay(
      Component_srcLineSprite,
      v29,
      v34,
      (System_Func_MissionNotifyComponent__o *)v39,
      (System_Action_MissionNotifyComponent__o *)v44,
      v45);
    v46 = *p_mNoticeNumberComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v46, 0LL, 0LL) )
    {
      noticeNumberPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)Component_srcLineSprite->fields.noticeNumberPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v48 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         noticeNumberPrefab,
                                         (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
      Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( !Parent )
        goto LABEL_47;
      v51 = UnityEngine_Component__get_gameObject(Parent, 0LL);
      if ( !v48 )
        goto LABEL_47;
      v52 = v51;
      v53 = UnityEngine_Component__get_gameObject(v48, 0LL);
      GameObjectExtensions__SafeSetParent_27425996(v53, v52, 0LL);
      v74.fields.x = 270.0;
      v74.fields.y = 275.0;
      GameObjectExtensions__SetLocalPosition_27419860(v53, v74, 0LL);
      GameObjectExtensions__SetLocalScale_27422124(v53, 0.75, 0LL);
      if ( !v52 )
        goto LABEL_47;
      ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                    v52,
                                                    (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___);
      if ( !ComponentInChildren_Dropdown_DropdownItem )
        goto LABEL_47;
      if ( !v53 )
        goto LABEL_47;
      klass = (int)ComponentInChildren_Dropdown_DropdownItem[3].klass;
      v56 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
              v53,
              (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
      if ( !v56 )
        goto LABEL_47;
      max_length = v56->max_length;
      v65 = v56;
      if ( max_length >= 1 )
      {
        v66 = 0;
        while ( 1 )
        {
          if ( v66 >= max_length )
          {
            sub_B17100(v56, v57, v58);
            sub_B170A0();
          }
          v67 = (UIWidget_o *)v65->m_Items[v66];
          if ( !v67 )
            break;
          UIWidget__set_depth(v67, v67->fields.mDepth + klass, 0LL);
          max_length = v65->max_length;
          if ( (int)++v66 >= max_length )
            goto LABEL_41;
        }
LABEL_47:
        sub_B170D4();
      }
LABEL_41:
      *p_mNoticeNumberComp = (NoticeNumberComponent_o *)v48;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.mNoticeNumberComp,
        (System_Int32_array **)v48,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
    }
    mMissionNotifyComps = this->fields.mMissionNotifyComps;
    if ( !mMissionNotifyComps )
      goto LABEL_47;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mMissionNotifyComps,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MissionNotifyComponent__Add__);
    v69 = this->fields.mDispInfos;
    if ( !v69 )
      goto LABEL_47;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v69,
      0,
      (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    v70 = this->fields.mNoticeNumberComp;
    DispInfoCount = MissionNotifyManager__GetDispInfoCount(this, v71);
    if ( !v70 )
      goto LABEL_47;
    NoticeNumberComponent__SetNumber(v70, DispInfoCount, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mNoDispInfos; // x20
  __int64 size; // x8
  __int64 v9; // x21
  int v10; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x20
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x0
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *v13; // x0

  if ( (byte_40F7D47 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__, v6);
    byte_40F7D47 = 1;
  }
  mNoDispInfos = this->fields.mNoDispInfos;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)*((_QWORD *)&mNoDispInfos->fields._items->obj.klass
                                                                   + v9);
      if ( MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(this, (MissionNotifyDispInfo_o *)v11, v2) )
      {
        mDispInfos = this->fields.mDispInfos;
        if ( !mDispInfos )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)mDispInfos,
          v11,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
        v13 = this->fields.mNoDispInfos;
        if ( !v13 )
          break;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v13,
          v9 - 4,
          (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
      }
      if ( (v10 & 0x80000000) != 0 )
        return;
      mNoDispInfos = this->fields.mNoDispInfos;
      --v9;
      --v10;
    }
    while ( mNoDispInfos );
LABEL_14:
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *_9__1; // x22
  MissionNotifyManager_o *_4__this; // x20
  MissionNotifyDispInfo_o *disp_info; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F8636 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__1__, v6);
    byte_40F8636 = 1;
  }
  _9__1 = this->fields.__9__1;
  _4__this = this->fields.__4__this;
  disp_info = this->fields.disp_info;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !_4__this )
    sub_B170D4();
  MissionNotifyManager__LoadEventAsset(_4__this, disp_info, _9__1, 0LL);
}


void __fastcall MissionNotifyManager___c__DisplayClass24_0___RequestDisp_b__1(
        MissionNotifyManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  MissionNotifyManager__LoadNotificationEnd(_4__this, this->fields.disp_info, 0LL);
}