void __fastcall MissionNotifyManager___ctor(MissionNotifyManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_List_int__o *v53; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v60; // x21
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7

  if ( (byte_42E7419 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_MissionNotifyComponent__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager___ctor__, v26, v27, v28);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v29, v30, v31);
    byte_42E7419 = 1;
  }
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v32;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mNoDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v39;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mNoDispInfos,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v46 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MissionNotifyComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v46,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__);
  this->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v46;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mMissionNotifyComps,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v53,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.assetLoadedEventIdList = v53;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.assetLoadedEventIdList,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B5D694(System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v60,
    (const MethodInfo_25017F0 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__);
  this->fields.noDisplayMissionCondTypeHashSet = v60;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.noDisplayMissionCondTypeHashSet,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2A304CC *)Method_SingletonTemplate_MissionNotifyManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyManager__AddNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *noDisplayMissionCondTypeHashSet; // x0

  if ( (byte_42E740A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__,
      missionCondType,
      (_DWORD)method,
      v3);
    byte_42E740A = 1;
  }
  noDisplayMissionCondTypeHashSet = this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_B5D69C(0LL, *(_QWORD *)&missionCondType);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_25029CC *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__);
}


void __fastcall MissionNotifyManager__CancelPause(MissionNotifyManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  __int64 v6; // x1
  NoticeNumberComponent_o *v7; // x0

  if ( (byte_42E7409 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7409 = 1;
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
    v7 = this->fields.mNoticeNumberComp;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    NoticeNumberComponent__SetDisp(v7, 1, 0LL);
  }
}


void __fastcall MissionNotifyManager__ClearRequest(MissionNotifyManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x0
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  const MethodInfo *v10; // x1
  NoticeNumberComponent_o *v11; // x20

  if ( (byte_42E740E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E740E = 1;
  }
  mDispInfos = this->fields.mDispInfos;
  if ( !mDispInfos )
    goto LABEL_11;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)mDispInfos,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__Clear__);
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v11 = this->fields.mNoticeNumberComp;
    mDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)MissionNotifyManager__GetDispInfoCount(
                                                                                      this,
                                                                                      v10);
    if ( v11 )
    {
      NoticeNumberComponent__SetNumber(v11, (int32_t)mDispInfos, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_B5D69C(mDispInfos, method);
  }
LABEL_10:
  MissionNotifyManager__ReleaseEventAsset(this, v10);
}


void __fastcall MissionNotifyManager__Destroy(MissionNotifyManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  UnityEngine_Component_o **p_mNoticeNumberComp; // x19
  UnityEngine_Object_o *v7; // x20
  struct NoticeNumberComponent_o *mNoticeNumberComp; // t1
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42E740D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E740D = 1;
  }
  MissionNotifyManager__ClearRequest(this, method);
  MissionNotifyManager__DestroyAllMissionNotifyComponentObject(this, v5);
  mNoticeNumberComp = this->fields.mNoticeNumberComp;
  p_mNoticeNumberComp = (UnityEngine_Component_o **)&this->fields.mNoticeNumberComp;
  v7 = (UnityEngine_Object_o *)mNoticeNumberComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
  {
    if ( !*p_mNoticeNumberComp )
      sub_B5D69C(0LL, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mNoticeNumberComp, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_mNoticeNumberComp = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_mNoticeNumberComp, 0LL, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall MissionNotifyManager__DestroyAllMissionNotifyComponentObject(
        MissionNotifyManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MissionNotifyManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x21
  int32_t v18; // w20
  __int64 v19; // x24
  UnityEngine_Object_o *gameObject; // x21

  v4 = this;
  if ( (byte_42E7417 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Item__, v11, v12, v13);
    this = (MissionNotifyManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42E7417 = 1;
  }
  mMissionNotifyComps = v4->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_18;
  v18 = mMissionNotifyComps->fields._size - 1;
  if ( v18 >= 0 )
  {
    v19 = 8LL * v18 + 32;
    do
    {
      if ( mMissionNotifyComps->fields._size <= (unsigned int)v18 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = *(MissionNotifyManager_o **)((char *)&mMissionNotifyComps->fields._items->obj.klass + v19);
      if ( !this )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
      this = (MissionNotifyManager_o *)v4->fields.mMissionNotifyComps;
      if ( !this )
        break;
      System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
        (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
        v18,
        (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__ReleaseNotification(0LL);
      if ( (--v18 & 0x80000000) != 0 )
        return;
      mMissionNotifyComps = v4->fields.mMissionNotifyComps;
      v19 -= 8LL;
    }
    while ( mMissionNotifyComps );
LABEL_18:
    sub_B5D69C(this, method);
  }
}


void __fastcall MissionNotifyManager__DragStartCallback(MissionNotifyManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  __int64 v6; // x1
  NoticeNumberComponent_o *v7; // x0

  if ( (byte_42E7414 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7414 = 1;
  }
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v7 = this->fields.mNoticeNumberComp;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    NoticeNumberComponent__SetDisp(v7, 0, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E7415 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)comp, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42E7415 = 1;
  }
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_14;
  if ( mMissionNotifyComps->fields._size < 1 )
    return;
  mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                                                              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)mMissionNotifyComps,
                                                                                              (WarBoardManager_TaskList_o *)comp,
                                                                                              (const MethodInfo_305896C *)Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__);
  if ( !comp )
LABEL_14:
    sub_B5D69C(mMissionNotifyComps, comp);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)comp, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
}


int32_t __fastcall MissionNotifyManager__GetDispInfoCount(MissionNotifyManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MissionNotifyManager_o *v4; // x19
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8

  v4 = this;
  if ( (byte_42E740C & 1) == 0 )
  {
    this = (MissionNotifyManager_o *)sub_B5D5C4(
                                       &Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__,
                                       (_DWORD)method,
                                       v2,
                                       v3);
    byte_42E740C = 1;
  }
  mDispInfos = v4->fields.mDispInfos;
  if ( !mDispInfos )
    sub_B5D69C(this, method);
  return mDispInfos->fields._size;
}


void __fastcall MissionNotifyManager__Init(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager__Destroy(this, method);
  this->fields.mPauseCount = 0;
}


bool __fastcall MissionNotifyManager__IsBusy(MissionNotifyManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  const MethodInfo *v16; // x1
  char v17; // w19
  int v18; // w20
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E7416 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__, v11, v12, v13);
    byte_42E7416 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( this->fields.mPauseCount > 0 )
    return 1;
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mMissionNotifyComps,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B5D69C(0LL, v16);
    if ( MissionNotifyComponent__IsBusy((MissionNotifyComponent_o *)v19.fields.current, v16) )
    {
      v17 = 1;
      v18 = 5;
      goto LABEL_12;
    }
  }
  v17 = 0;
  v18 = 3;
LABEL_12:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  return (v18 == 5) & v17;
}


bool __fastcall MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *missionNotifyDispInfo,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( !missionNotifyDispInfo )
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  int v17; // w19
  int v18; // w20
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E7408 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__, v11, v12, v13);
    byte_42E7408 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mMissionNotifyComps,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    if ( !v15 )
      break;
    if ( !v21.fields.current )
      sub_B5D69C(v15, v16);
    if ( LOBYTE(v21.fields.current[11].monitor) )
    {
      v17 = 1;
      v18 = 3;
      goto LABEL_10;
    }
  }
  v17 = 0;
  v18 = 1;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  return v17 & ((unsigned int)(v18 + 1) >> 2);
}


void __fastcall MissionNotifyManager__LoadEventAsset(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  __int64 Instance; // x0
  __int64 v29; // x1
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x21
  int32_t age_high; // w20
  __int64 v32; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E7410 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)disp_info, (_DWORD)finishCallback, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v13, v14, v15);
    sub_B5D5C4(&long___TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v22, v23, v24);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26, v27);
    byte_42E7410 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !disp_info || !Instance )
    goto LABEL_26;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          disp_info->fields.eventMissionId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
    goto LABEL_24;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  Instance = sub_B5D5DC(long___TypeInfo, 1LL);
  if ( !entity )
    goto LABEL_26;
  v29 = Instance;
  if ( !Instance )
    goto LABEL_26;
  if ( !*(_DWORD *)(Instance + 24) )
  {
    v32 = sub_B5D6C8(Instance);
    sub_B5D668(v32, 0LL);
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
               (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
  if ( (Instance & 1) != 0 )
    goto LABEL_19;
  if ( !entity || (Instance = (__int64)this->fields.assetLoadedEventIdList) == 0 )
LABEL_26:
    sub_B5D69C(Instance, v29);
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)Instance,
    HIDWORD(entity->fields.age),
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
LABEL_19:
  if ( !entity )
    goto LABEL_26;
  age_high = HIDWORD(entity->fields.age);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_31190100(age_high, finishCallback, 1, 0LL);
}


void __fastcall MissionNotifyManager__LoadNotificationEnd(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *mDispInfos; // x0
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  const MethodInfo *v12; // x1
  NoticeNumberComponent_o *v13; // x20

  if ( (byte_42E7411 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__,
      (_DWORD)disp_info,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E7411 = 1;
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
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v13 = this->fields.mNoticeNumberComp;
    mDispInfos = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)MissionNotifyManager__GetDispInfoCount(this, v12);
    if ( !v13
      || (NoticeNumberComponent__SetNumber(v13, (int32_t)mDispInfos, 0LL),
          (mDispInfos = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.mNoticeNumberComp) == 0LL) )
    {
LABEL_15:
      sub_B5D69C(mDispInfos, v9);
    }
    NoticeNumberComponent__SetDispForce((NoticeNumberComponent_o *)mDispInfos, this->fields.mPauseCount < 1, 0LL);
  }
  MissionNotifyManager__StartDisp(this, v12);
}


void __fastcall MissionNotifyManager__Reboot(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager__Destroy(this, method);
  this->fields.mPauseCount = 0;
}


void __fastcall MissionNotifyManager__ReleaseEventAsset(MissionNotifyManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_int__o *assetLoadedEventIdList; // x0
  int32_t current; // w20
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E7418 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v17, v18, v19);
    byte_42E7418 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  assetLoadedEventIdList = this->fields.assetLoadedEventIdList;
  if ( !assetLoadedEventIdList )
    goto LABEL_12;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    assetLoadedEventIdList,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v23,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__ReleaseEventUI_31190280(current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v23,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  assetLoadedEventIdList = this->fields.assetLoadedEventIdList;
  if ( !assetLoadedEventIdList )
LABEL_12:
    sub_B5D69C(assetLoadedEventIdList, method);
  System_Collections_Generic_List_int___Clear(
    assetLoadedEventIdList,
    (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyManager__RemoveNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *noDisplayMissionCondTypeHashSet; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42E740B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__,
      missionCondType,
      (_DWORD)method,
      v3);
    byte_42E740B = 1;
  }
  noDisplayMissionCondTypeHashSet = this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_B5D69C(0LL, *(_QWORD *)&missionCondType);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Remove(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_2502030 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__);
  MissionNotifyManager__TryMoveNoDisplayToDisplay(this, v7);
}


void __fastcall MissionNotifyManager__RequestDisp(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Action_o *v30; // x19

  if ( (byte_42E740F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)disp_info, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__0__, v9, v10, v11);
    sub_B5D5C4(&MissionNotifyManager___c__DisplayClass24_0_TypeInfo, v12, v13, v14);
    byte_42E740F = 1;
  }
  v15 = sub_B5D694(MissionNotifyManager___c__DisplayClass24_0_TypeInfo);
  MissionNotifyManager___c__DisplayClass24_0___ctor((MissionNotifyManager___c__DisplayClass24_0_o *)v15, 0LL);
  if ( !v15 )
    sub_B5D69C(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = disp_info;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)disp_info, v24, v25, v26, v27, v28, v29);
  v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v15,
    Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v30, 0LL);
}


MissionNotifyComponent_o *__fastcall MissionNotifyManager__StartDisp(
        MissionNotifyManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  struct NoticeNumberComponent_o **p_mNoticeNumberComp; // x20
  UnityEngine_Object_o *mNoticeNumberComp; // x21
  const MethodInfo *v55; // x1
  void *Instance; // x0
  const MethodInfo *v57; // x1
  MissionNotifyComponent_o *Component_srcLineSprite; // x21
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x1
  UnityEngine_Object_o *MissionNotify; // x23
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x21
  MissionNotifyDispInfo_o *v63; // x22
  System_Action_o *v64; // x23
  System_Func_Task_ContingentProperties__o *v65; // x24
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v66; // x25
  const MethodInfo *v67; // x5
  UnityEngine_Object_o *v68; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *noticeNumberPrefab; // x22
  UnityEngine_Component_o *v70; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v72; // x24
  UnityEngine_GameObject_o *v73; // x23
  int v74; // w24
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  int v81; // w8
  void *v82; // x23
  unsigned int v83; // w25
  NoticeNumberComponent_o *v84; // x20
  const MethodInfo *v85; // x1
  __int64 v87; // x0
  UnityEngine_Vector2_o v88; // 0:s0.4,4:s1.4

  if ( (byte_42E7412 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_MissionNotifyComponent___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_MissionNotifyComponent__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Action_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_MissionNotifyComponent___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_MissionNotifyComponent__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionNotifyComponent__Add__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__, v32, v33, v34);
    sub_B5D5C4(&Method_MissionNotifyManager_DragStartCallback__, v35, v36, v37);
    sub_B5D5C4(&Method_MissionNotifyManager_FrameOutEndCallback__, v38, v39, v40);
    sub_B5D5C4(&Method_MissionNotifyManager_FrameOutStartCallback__, v41, v42, v43);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___, v44, v45, v46);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v50, v51, v52);
    byte_42E7412 = 1;
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
  if ( MissionNotifyManager__IsBusy(this, v55) )
    return 0LL;
  if ( MissionNotifyManager__GetDispInfoCount(this, v57) <= 0 )
  {
    MissionNotifyManager__TryMoveNoDisplayToDisplay(this, v59);
    if ( MissionNotifyManager__GetDispInfoCount(this, v60) < 1 )
      return 0LL;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( !MissionNotify )
      goto LABEL_47;
    v63 = mDispInfos->fields._items->m_Items[0];
    Component_srcLineSprite = (MissionNotifyComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)MissionNotify,
                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___);
    v64 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v64, (Il2CppObject *)this, Method_MissionNotifyManager_DragStartCallback__, 0LL);
    v65 = (System_Func_Task_ContingentProperties__o *)sub_B5D694(System_Func_MissionNotifyComponent__TypeInfo);
    System_Func_Task_ContingentProperties____ctor(
      v65,
      (Il2CppObject *)this,
      Method_MissionNotifyManager_FrameOutStartCallback__,
      (const MethodInfo_278E148 *)Method_System_Func_MissionNotifyComponent___ctor__);
    v66 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_MissionNotifyComponent__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v66,
      (Il2CppObject *)this,
      Method_MissionNotifyManager_FrameOutEndCallback__,
      (const MethodInfo_258B320 *)Method_System_Action_MissionNotifyComponent___ctor__);
    if ( !Component_srcLineSprite )
      goto LABEL_47;
    MissionNotifyComponent__SetupAndPlay(
      Component_srcLineSprite,
      v63,
      v64,
      (System_Func_MissionNotifyComponent__o *)v65,
      (System_Action_MissionNotifyComponent__o *)v66,
      v67);
    v68 = (UnityEngine_Object_o *)*p_mNoticeNumberComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(v68, 0LL, 0LL) )
    {
      noticeNumberPrefab = (UnityEngine_UI_Dropdown_DropdownItem_o *)Component_srcLineSprite->fields.noticeNumberPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v70 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         noticeNumberPrefab,
                                         (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_srcLineSprite, 0LL);
      Instance = GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( !Instance )
        goto LABEL_47;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !v70 )
        goto LABEL_47;
      v72 = (UnityEngine_GameObject_o *)Instance;
      v73 = UnityEngine_Component__get_gameObject(v70, 0LL);
      GameObjectExtensions__SafeSetParent_32436524(v73, v72, 0LL);
      v88.fields.x = 270.0;
      v88.fields.y = 275.0;
      GameObjectExtensions__SetLocalPosition_32430388(v73, v88, 0LL);
      GameObjectExtensions__SetLocalScale_32432652(v73, 0.75, 0LL);
      if ( !v72 )
        goto LABEL_47;
      Instance = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                   v72,
                   (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_47;
      if ( !v73 )
        goto LABEL_47;
      v74 = *((_DWORD *)Instance + 42);
      Instance = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                   v73,
                   (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_47;
      v81 = *((_DWORD *)Instance + 6);
      v82 = Instance;
      if ( v81 >= 1 )
      {
        v83 = 0;
        while ( 1 )
        {
          if ( v83 >= v81 )
          {
            v87 = sub_B5D6C8(Instance);
            sub_B5D668(v87, 0LL);
          }
          Instance = (void *)*((_QWORD *)v82 + (int)v83 + 4);
          if ( !Instance )
            break;
          UIWidget__set_depth((UIWidget_o *)Instance, *((_DWORD *)Instance + 42) + v74, 0LL);
          v81 = *((_DWORD *)v82 + 6);
          if ( (int)++v83 >= v81 )
            goto LABEL_41;
        }
LABEL_47:
        sub_B5D69C(Instance, v55);
      }
LABEL_41:
      *p_mNoticeNumberComp = (struct NoticeNumberComponent_o *)v70;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.mNoticeNumberComp,
        (System_Int32_array **)v70,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
    }
    Instance = this->fields.mMissionNotifyComps;
    if ( !Instance )
      goto LABEL_47;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
      (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MissionNotifyComponent__Add__);
    Instance = this->fields.mDispInfos;
    if ( !Instance )
      goto LABEL_47;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
      0,
      (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    v84 = this->fields.mNoticeNumberComp;
    Instance = (void *)MissionNotifyManager__GetDispInfoCount(this, v85);
    if ( !v84 )
      goto LABEL_47;
    NoticeNumberComponent__SetNumber(v84, (int32_t)Instance, 0LL);
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
  __int64 v3; // x3
  MissionNotifyManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mNoDispInfos; // x20
  __int64 size; // x8
  __int64 v16; // x21
  int v17; // w22
  MissionNotifyDispInfo_o *v18; // x20

  v4 = this;
  if ( (byte_42E7413 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__, v8, v9, v10);
    this = (MissionNotifyManager_o *)sub_B5D5C4(
                                       &Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__,
                                       v11,
                                       v12,
                                       v13);
    byte_42E7413 = 1;
  }
  mNoDispInfos = v4->fields.mNoDispInfos;
  if ( !mNoDispInfos )
    goto LABEL_14;
  size = mNoDispInfos->fields._size;
  if ( (int)size >= 1 )
  {
    v16 = size + 3;
    v17 = size - 2;
    do
    {
      if ( v16 - 4 >= (unsigned __int64)(unsigned int)mNoDispInfos->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v18 = (MissionNotifyDispInfo_o *)*((_QWORD *)&mNoDispInfos->fields._items->obj.klass + v16);
      this = (MissionNotifyManager_o *)MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(v4, v18, v2);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (MissionNotifyManager_o *)v4->fields.mDispInfos;
        if ( !this )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
        this = (MissionNotifyManager_o *)v4->fields.mNoDispInfos;
        if ( !this )
          break;
        System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
          v16 - 4,
          (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
      }
      if ( (v17 & 0x80000000) != 0 )
        return;
      mNoDispInfos = v4->fields.mNoDispInfos;
      --v16;
      --v17;
    }
    while ( mNoDispInfos );
LABEL_14:
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *klass; // x22
  MissionNotifyManager_o *v9; // x20
  MissionNotifyDispInfo_o *monitor; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5F6A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (MissionNotifyManager___c__DisplayClass24_0_o *)sub_B5D5C4(
                                                             &Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__1__,
                                                             v5,
                                                             v6,
                                                             v7);
    byte_42E5F6A = 1;
  }
  klass = (System_Action_o *)v4[2].klass;
  v9 = (MissionNotifyManager_o *)v4[1].klass;
  monitor = (MissionNotifyDispInfo_o *)v4[1].monitor;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(klass, v4, Method_MissionNotifyManager___c__DisplayClass24_0__RequestDisp_b__1__, 0LL);
    v4[2].klass = (Il2CppClass *)klass;
    sub_B5D560(&v4[2]);
  }
  if ( !v9 )
    sub_B5D69C(this, method);
  MissionNotifyManager__LoadEventAsset(v9, monitor, klass, 0LL);
}


void __fastcall MissionNotifyManager___c__DisplayClass24_0___RequestDisp_b__1(
        MissionNotifyManager___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  MissionNotifyManager__LoadNotificationEnd(_4__this, this->fields.disp_info, 0LL);
}