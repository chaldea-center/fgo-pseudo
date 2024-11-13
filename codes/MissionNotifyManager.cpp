void __fastcall MissionNotifyManager___ctor(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
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
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  System_Collections_Generic_List_object__o *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Collections_Generic_List_object__o *v41; // x20
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Collections_Generic_List_int__o *v51; // x20
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Collections_Generic_HashSet_T__o *v61; // x20
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7

  if ( (byte_4B19CCF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__,
      method,
      v2);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_MissionNotifyComponent__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager___ctor__, v19, v20);
    byte_4B19CCF = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v21;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo,
                                                       v28,
                                                       v29,
                                                       v30);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mNoDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v31;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mNoDispInfos, (int64_t)v31, v32, v33, v34, v35, v36, v37);
  v41 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MissionNotifyComponent__TypeInfo,
                                                       v38,
                                                       v39,
                                                       v40);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__);
  this->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v41;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mMissionNotifyComps,
    (int64_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v51 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v48,
                                                    v49,
                                                    v50);
  System_Collections_Generic_List_int____ctor(
    v51,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.assetLoadedEventIdList = v51;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.assetLoadedEventIdList,
    (int64_t)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v61 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo,
                                                     v58,
                                                     v59,
                                                     v60);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v61,
    (const MethodInfo_3456D28 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__);
  this->fields.noDisplayMissionCondTypeHashSet = (struct System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)v61;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.noDisplayMissionCondTypeHashSet,
    (int64_t)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_37DF02C *)Method_SingletonTemplate_MissionNotifyManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyManager__AddNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *noDisplayMissionCondTypeHashSet; // x0

  if ( (byte_4B19CC0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__,
      *(_QWORD *)&missionCondType,
      method);
    byte_4B19CC0 = 1;
  }
  noDisplayMissionCondTypeHashSet = (System_Collections_Generic_HashSet_T__o *)this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_1BCAA3C(0LL, *(_QWORD *)&missionCondType);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_3457F2C *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__);
}


void __fastcall MissionNotifyManager__CancelPause(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  __int64 v6; // x1
  NoticeNumberComponent_o *v7; // x0

  if ( (byte_4B19CBF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19CBF = 1;
  }
  this->fields.mPauseCount = 0;
  MissionNotifyManager__StartDisp(this, method);
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v7 = this->fields.mNoticeNumberComp;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    NoticeNumberComponent__SetDisp(v7, 1, 0LL);
  }
}


void __fastcall MissionNotifyManager__ClearRequest(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNotifyManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8
  int32_t size; // w2
  int v8; // w9
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  const MethodInfo *v10; // x1
  NoticeNumberComponent_o *v11; // x20

  v3 = this;
  if ( (byte_4B19CC4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Clear__, method, v2);
    this = (MissionNotifyManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19CC4 = 1;
  }
  mDispInfos = v3->fields.mDispInfos;
  if ( !mDispInfos )
    goto LABEL_12;
  size = mDispInfos->fields._size;
  v8 = mDispInfos->fields._version + 1;
  mDispInfos->fields._size = 0;
  mDispInfos->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mDispInfos->fields._items, 0, size, 0LL);
  mNoticeNumberComp = (UnityEngine_Object_o *)v3->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v11 = v3->fields.mNoticeNumberComp;
    this = (MissionNotifyManager_o *)MissionNotifyManager__GetDispInfoCount(v3, v10);
    if ( v11 )
    {
      NoticeNumberComponent__SetNumber(v11, (int32_t)this, 0LL);
      goto LABEL_11;
    }
LABEL_12:
    sub_1BCAA3C(this, method);
  }
LABEL_11:
  MissionNotifyManager__ReleaseEventAsset(v3, v10);
}


void __fastcall MissionNotifyManager__Destroy(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o **p_mNoticeNumberComp; // x19
  UnityEngine_Object_o *v7; // x20
  struct NoticeNumberComponent_o *mNoticeNumberComp; // t1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B19CC3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19CC3 = 1;
  }
  MissionNotifyManager__ClearRequest(this, method);
  MissionNotifyManager__DestroyAllMissionNotifyComponentObject(this, v4);
  mNoticeNumberComp = this->fields.mNoticeNumberComp;
  p_mNoticeNumberComp = (UnityEngine_Component_o **)&this->fields.mNoticeNumberComp;
  v7 = (UnityEngine_Object_o *)mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
  {
    if ( !*p_mNoticeNumberComp )
      sub_1BCAA3C(0LL, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mNoticeNumberComp, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_mNoticeNumberComp = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_mNoticeNumberComp, 0LL, v12, v13, v14, v15, v16, v17);
  }
}


void __fastcall MissionNotifyManager__DestroyAllMissionNotifyComponentObject(
        MissionNotifyManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *mMissionNotifyComps; // x0
  int32_t v13; // w20
  __int64 v14; // x1
  UnityEngine_Object_o *gameObject; // x21
  __int64 v16; // x1

  if ( (byte_4B19CCD & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Item__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B19CCD = 1;
  }
  mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_13;
  v13 = mMissionNotifyComps->fields._size - 1;
  if ( v13 >= 0 )
  {
    do
    {
      mMissionNotifyComps = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           mMissionNotifyComps,
                                                                           v13,
                                                                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MissionNotifyComponent__get_Item__);
      if ( !mMissionNotifyComps )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)mMissionNotifyComps,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mMissionNotifyComps;
      if ( !mMissionNotifyComps )
        break;
      System_Collections_Generic_List_object___RemoveAt(
        mMissionNotifyComps,
        v13,
        (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16);
      AtlasManager__ReleaseNotification(0LL);
      if ( --v13 < 0 )
        return;
      mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mMissionNotifyComps;
    }
    while ( mMissionNotifyComps );
LABEL_13:
    sub_1BCAA3C(mMissionNotifyComps, method);
  }
}


void __fastcall MissionNotifyManager__DragStartCallback(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  __int64 v5; // x1
  NoticeNumberComponent_o *v6; // x0

  if ( (byte_4B19CCA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19CCA = 1;
  }
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v6 = this->fields.mNoticeNumberComp;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    NoticeNumberComponent__SetDisp(v6, 0, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *gameObject; // x19
  __int64 v14; // x1

  if ( (byte_4B19CCB & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, comp, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B19CCB = 1;
  }
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_12;
  if ( mMissionNotifyComps->fields._size < 1 )
    return;
  mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)System_Collections_Generic_List_object___Remove(
                                                                                              (System_Collections_Generic_List_object__o *)mMissionNotifyComps,
                                                                                              (Il2CppObject *)comp,
                                                                                              (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__);
  if ( !comp )
LABEL_12:
    sub_1BCAA3C(mMissionNotifyComps, comp);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)comp, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14);
  AtlasManager__ReleaseNotification(0LL);
}


int32_t __fastcall MissionNotifyManager__GetDispInfoCount(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNotifyManager_o *v3; // x19
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8

  v3 = this;
  if ( (byte_4B19CC2 & 1) == 0 )
  {
    this = (MissionNotifyManager_o *)sub_1BCA7E0(
                                       &Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__,
                                       method,
                                       v2);
    byte_4B19CC2 = 1;
  }
  mDispInfos = v3->fields.mDispInfos;
  if ( !mDispInfos )
    sub_1BCAA3C(this, method);
  return mDispInfos->fields._size;
}


void __fastcall MissionNotifyManager__Init(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager__Destroy(this, method);
  this->fields.mPauseCount = 0;
}


bool __fastcall MissionNotifyManager__IsBusy(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  const MethodInfo *v12; // x1
  bool v13; // w19
  int v14; // w20
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19CCC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__, v8, v9);
    byte_4B19CCC = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( this->fields.mPauseCount > 0 )
    return 1;
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)mMissionNotifyComps,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    if ( !v13 )
      break;
    if ( !v15.fields._current )
      sub_1BCAA3C(0LL, v12);
    if ( MissionNotifyComponent__IsBusy((MissionNotifyComponent_o *)v15.fields._current, v12) )
    {
      v14 = 5;
      goto LABEL_12;
    }
  }
  v14 = 6;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  return v13 && v14 == 5;
}


bool __fastcall MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *missionNotifyDispInfo,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( !missionNotifyDispInfo )
    sub_1BCAA3C(this, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  bool v13; // w19
  int v14; // w20
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19CBE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__, v8, v9);
    byte_4B19CBE = 1;
  }
  memset(&v16, 0, sizeof(v16));
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)mMissionNotifyComps,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    v13 = v11;
    if ( !v11 )
      break;
    if ( !v16.fields._current )
      sub_1BCAA3C(v11, v12);
    if ( LOBYTE(v16.fields._current[12].klass) )
    {
      v14 = 4;
      goto LABEL_10;
    }
  }
  v14 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  return v13 && v14 == 4;
}


void __fastcall MissionNotifyManager__LoadEventAsset(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 Instance; // x0
  __int64 monitor_high; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  int32_t v27; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19CC6 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, disp_info, finishCallback);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&long___TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    byte_4B19CC6 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !disp_info || !Instance )
    goto LABEL_28;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          disp_info->fields.eventMissionId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
    goto LABEL_21;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  Instance = sub_1BCA888(long___TypeInfo, 1LL);
  if ( !entity )
    goto LABEL_28;
  monitor_high = Instance;
  if ( !Instance )
    goto LABEL_28;
  if ( !*(_DWORD *)(Instance + 24) )
    sub_1BCAA44(Instance, Instance);
  *(_QWORD *)(Instance + 32) = SHIDWORD(entity[1].monitor);
  if ( !MasterData_object )
    goto LABEL_28;
  Instance = DataMasterBase__isEntityExistsFromId(
               (DataMasterBase_o *)MasterData_object,
               (System_Int64_array *)Instance,
               0LL);
  if ( (Instance & 1) == 0 )
  {
LABEL_21:
    ActionExtensions__Call(finishCallback, 0LL);
    return;
  }
  if ( !entity )
    goto LABEL_28;
  Instance = (__int64)this->fields.assetLoadedEventIdList;
  if ( !Instance )
    goto LABEL_28;
  Instance = System_Collections_Generic_List_int___Contains(
               (System_Collections_Generic_List_int__o *)Instance,
               HIDWORD(entity[1].monitor),
               (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
  if ( (Instance & 1) != 0 )
    goto LABEL_23;
  if ( !entity
    || (Instance = (__int64)this->fields.assetLoadedEventIdList) == 0
    || (monitor_high = HIDWORD(entity[1].monitor),
        v24 = *(_QWORD *)(Instance + 16),
        v25 = Method_System_Collections_Generic_List_int__Add__,
        ++*(_DWORD *)(Instance + 28),
        !v24) )
  {
LABEL_28:
    sub_1BCAA3C(Instance, monitor_high);
  }
  v26 = *(int *)(Instance + 24);
  if ( (unsigned int)v26 >= *(_DWORD *)(v24 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Instance,
      monitor_high,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    *(_DWORD *)(Instance + 24) = v26 + 1;
    *(_DWORD *)(v24 + 4 * v26 + 32) = monitor_high;
  }
LABEL_23:
  if ( !entity )
    goto LABEL_28;
  v27 = HIDWORD(entity[1].monitor);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, monitor_high);
  AtlasManager__LoadEventUI_38574292(v27, finishCallback, 1, 0LL);
}


void __fastcall MissionNotifyManager__LoadNotificationEnd(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_object__o *mDispInfos; // x0
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8
  __int64 v19; // x1
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  const MethodInfo *v21; // x1
  NoticeNumberComponent_o *v22; // x20

  if ( (byte_4B19CC7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__, disp_info, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B19CC7 = 1;
  }
  if ( MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(this, disp_info, method) )
  {
    mDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mDispInfos;
    if ( !mDispInfos )
      goto LABEL_18;
  }
  else
  {
    mDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mNoDispInfos;
    if ( !mDispInfos )
      goto LABEL_18;
  }
  items = mDispInfos->fields._items;
  v16 = Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__;
  ++mDispInfos->fields._version;
  if ( !items )
    goto LABEL_18;
  size = mDispInfos->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      mDispInfos,
      (Il2CppObject *)disp_info,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    mDispInfos->fields._size = size + 1;
    v18[4] = (Il2CppClass *)disp_info;
    sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)disp_info, v8, v9, v10, v11, v12, v13);
  }
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v22 = this->fields.mNoticeNumberComp;
    mDispInfos = (System_Collections_Generic_List_object__o *)MissionNotifyManager__GetDispInfoCount(this, v21);
    if ( !v22
      || (NoticeNumberComponent__SetNumber(v22, (int32_t)mDispInfos, 0LL),
          (mDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mNoticeNumberComp) == 0LL) )
    {
LABEL_18:
      sub_1BCAA3C(mDispInfos, v7);
    }
    NoticeNumberComponent__SetDispForce((NoticeNumberComponent_o *)mDispInfos, this->fields.mPauseCount < 1, 0LL);
  }
  MissionNotifyManager__StartDisp(this, v21);
}


void __fastcall MissionNotifyManager__Reboot(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager__Destroy(this, method);
  this->fields.mPauseCount = 0;
}


void __fastcall MissionNotifyManager__ReleaseEventAsset(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_int__o *assetLoadedEventIdList; // x0
  __int64 v15; // x1
  int32_t current; // w20
  struct System_Collections_Generic_List_int__o *v17; // x8
  int v18; // w9
  System_Collections_Generic_List_Enumerator_int__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B19CCE & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v12, v13);
    byte_4B19CCE = 1;
  }
  memset(&v20, 0, sizeof(v20));
  assetLoadedEventIdList = this->fields.assetLoadedEventIdList;
  if ( !assetLoadedEventIdList )
    goto LABEL_11;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    assetLoadedEventIdList,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v20,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
    AtlasManager__ReleaseEventUI_38574456(current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v20,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v17 = this->fields.assetLoadedEventIdList;
  if ( !v17 )
LABEL_11:
    sub_1BCAA3C(assetLoadedEventIdList, method);
  v18 = v17->fields._version + 1;
  v17->fields._size = 0;
  v17->fields._version = v18;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyManager__RemoveNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *noDisplayMissionCondTypeHashSet; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B19CC1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__,
      *(_QWORD *)&missionCondType,
      method);
    byte_4B19CC1 = 1;
  }
  noDisplayMissionCondTypeHashSet = (System_Collections_Generic_HashSet_T__o *)this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_1BCAA3C(0LL, *(_QWORD *)&missionCondType);
  System_Collections_Generic_HashSet_Int32Enum___Remove(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_34575F0 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__);
  MissionNotifyManager__TryMoveNoDisplayToDisplay(this, v6);
}


void __fastcall MissionNotifyManager__RequestDisp(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x19
  __int64 v31; // x1

  if ( (byte_4B19CC5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, disp_info, method);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__0__, v8, v9);
    sub_1BCA7E0(&MissionNotifyManager___c__DisplayClass22_0_TypeInfo, v10, v11);
    byte_4B19CC5 = 1;
  }
  v12 = sub_1BCAA2C(MissionNotifyManager___c__DisplayClass22_0_TypeInfo, disp_info, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = disp_info;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)disp_info, v21, v22, v23, v24, v25, v26);
  v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v12,
    Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31);
  AtlasManager__LoadNotification(v30, 0LL);
}


MissionNotifyComponent_o *__fastcall MissionNotifyManager__StartDisp(
        MissionNotifyManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  struct NoticeNumberComponent_o **p_mNoticeNumberComp; // x20
  UnityEngine_Object_o *mNoticeNumberComp; // x21
  const MethodInfo *v34; // x1
  void *Instance; // x0
  const MethodInfo *v36; // x1
  MissionNotifyComponent_o *Component_object; // x21
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  __int64 v40; // x1
  UnityEngine_GameObject_o *MissionNotify; // x23
  MissionNotifyDispInfo_o *v42; // x22
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_o *v46; // x23
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Func_object__o *v50; // x24
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Action_object__o *v54; // x25
  const MethodInfo *v55; // x5
  __int64 v56; // x1
  UnityEngine_Object_o *v57; // x22
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  Il2CppObject *noticeNumberPrefab; // x22
  Il2CppObject *v65; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v67; // x24
  UnityEngine_GameObject_o *v68; // x23
  int v69; // w24
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int v76; // w8
  void *v77; // x23
  unsigned int v78; // w25
  __int64 v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  __int64 v82; // x8
  NoticeNumberComponent_o *v83; // x20
  const MethodInfo *v84; // x1
  UnityEngine_Vector2_o v86; // 0:s0.4,4:s1.4

  if ( (byte_4B19CC8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_MissionNotifyComponent__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Func_MissionNotifyComponent__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNotifyComponent__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__, v18, v19);
    sub_1BCA7E0(&Method_MissionNotifyManager_DragStartCallback__, v20, v21);
    sub_1BCA7E0(&Method_MissionNotifyManager_FrameOutEndCallback__, v22, v23);
    sub_1BCA7E0(&Method_MissionNotifyManager_FrameOutStartCallback__, v24, v25);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___, v26, v27);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v30, v31);
    byte_4B19CC8 = 1;
  }
  p_mNoticeNumberComp = &this->fields.mNoticeNumberComp;
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    Instance = *p_mNoticeNumberComp;
    if ( !*p_mNoticeNumberComp )
      goto LABEL_45;
    NoticeNumberComponent__SetDisp((NoticeNumberComponent_o *)Instance, this->fields.mPauseCount < 1, 0LL);
  }
  if ( MissionNotifyManager__IsBusy(this, v34) )
    return 0LL;
  if ( MissionNotifyManager__GetDispInfoCount(this, v36) <= 0 )
  {
    MissionNotifyManager__TryMoveNoDisplayToDisplay(this, v38);
    if ( MissionNotifyManager__GetDispInfoCount(this, v39) < 1 )
      return 0LL;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MissionNotify = CommonUI__CreateMissionNotify((CommonUI_o *)Instance, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
  Component_object = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MissionNotify, 0LL, 0LL) )
  {
    Instance = this->fields.mDispInfos;
    if ( !Instance )
      goto LABEL_45;
    Instance = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 0,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
    if ( !MissionNotify )
      goto LABEL_45;
    v42 = (MissionNotifyDispInfo_o *)Instance;
    Component_object = (MissionNotifyComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     MissionNotify,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___);
    v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v44, v45);
    System_Action___ctor(v46, (Il2CppObject *)this, Method_MissionNotifyManager_DragStartCallback__, 0LL);
    v50 = (System_Func_object__o *)sub_1BCAA2C(System_Func_MissionNotifyComponent__TypeInfo, v47, v48, v49);
    System_Func_object____ctor(v50, (Il2CppObject *)this, Method_MissionNotifyManager_FrameOutStartCallback__, 0LL);
    v54 = (System_Action_object__o *)sub_1BCAA2C(System_Action_MissionNotifyComponent__TypeInfo, v51, v52, v53);
    System_Action_object____ctor(v54, (Il2CppObject *)this, Method_MissionNotifyManager_FrameOutEndCallback__, 0LL);
    if ( !Component_object )
      goto LABEL_45;
    MissionNotifyComponent__SetupAndPlay(
      Component_object,
      v42,
      v46,
      (System_Func_MissionNotifyComponent__o *)v50,
      (System_Action_MissionNotifyComponent__o *)v54,
      v55);
    v57 = (UnityEngine_Object_o *)*p_mNoticeNumberComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
    if ( UnityEngine_Object__op_Equality(v57, 0LL, 0LL) )
    {
      noticeNumberPrefab = (Il2CppObject *)Component_object->fields.noticeNumberPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
      v65 = UnityEngine_Object__Instantiate_object_(
              noticeNumberPrefab,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
      Instance = GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( !Instance )
        goto LABEL_45;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !v65 )
        goto LABEL_45;
      v67 = (UnityEngine_GameObject_o *)Instance;
      v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v65, 0LL);
      GameObjectExtensions__SafeSetParent_34336992(v68, v67, 0LL);
      v86.fields.y = 275.0;
      v86.fields.x = 270.0;
      GameObjectExtensions__SetLocalPosition_34330940(v68, v86, 0LL);
      GameObjectExtensions__SetLocalScale_34333164(v68, 0.75, 0LL);
      if ( !v67 )
        goto LABEL_45;
      Instance = UnityEngine_GameObject__GetComponentInChildren_object_(
                   v67,
                   (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_45;
      if ( !v68 )
        goto LABEL_45;
      v69 = *((_DWORD *)Instance + 44);
      Instance = UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                   v68,
                   (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_45;
      v76 = *((_DWORD *)Instance + 6);
      v77 = Instance;
      if ( v76 >= 1 )
      {
        v78 = 0;
        while ( 1 )
        {
          if ( v78 >= v76 )
            sub_1BCAA44(Instance, v34);
          Instance = (void *)*((_QWORD *)v77 + (int)v78 + 4);
          if ( !Instance )
            break;
          UIWidget__set_depth((UIWidget_o *)Instance, *((_DWORD *)Instance + 44) + v69, 0LL);
          v76 = *((_DWORD *)v77 + 6);
          if ( (int)++v78 >= v76 )
            goto LABEL_35;
        }
LABEL_45:
        sub_1BCAA3C(Instance, v34);
      }
LABEL_35:
      *p_mNoticeNumberComp = (struct NoticeNumberComponent_o *)v65;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.mNoticeNumberComp,
        (int64_t)v65,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
    }
    Instance = this->fields.mMissionNotifyComps;
    if ( !Instance )
      goto LABEL_45;
    v79 = *((_QWORD *)Instance + 2);
    v80 = Method_System_Collections_Generic_List_MissionNotifyComponent__Add__;
    ++*((_DWORD *)Instance + 7);
    if ( !v79 )
      goto LABEL_45;
    v81 = *((int *)Instance + 6);
    if ( (unsigned int)v81 >= *(_DWORD *)(v79 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)Component_object,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
    }
    else
    {
      v82 = v79 + 8 * v81;
      *((_DWORD *)Instance + 6) = v81 + 1;
      *(_QWORD *)(v82 + 32) = Component_object;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 32), (int64_t)Component_object, v58, v59, v60, v61, v62, v63);
    }
    Instance = this->fields.mDispInfos;
    if ( !Instance )
      goto LABEL_45;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Instance,
      0,
      (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    v83 = this->fields.mNoticeNumberComp;
    Instance = (void *)MissionNotifyManager__GetDispInfoCount(this, v84);
    if ( !v83 )
      goto LABEL_45;
    NoticeNumberComponent__SetNumber(v83, (int32_t)Instance, 0LL);
  }
  return Component_object;
}


void __fastcall MissionNotifyManager__StartPause(MissionNotifyManager_o *this, const MethodInfo *method)
{
  ++this->fields.mPauseCount;
}


void __fastcall MissionNotifyManager__TryMoveNoDisplayToDisplay(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *mNoDispInfos; // x0
  int size; // w24
  Il2CppObject *Item; // x21
  const MethodInfo *v13; // x2
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x8

  if ( (byte_4B19CC9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__, v8, v9);
    byte_4B19CC9 = 1;
  }
  mNoDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mNoDispInfos;
  if ( !mNoDispInfos )
    goto LABEL_15;
  size = mNoDispInfos->fields._size;
  if ( size >= 1 )
  {
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               mNoDispInfos,
               size - 1,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
      if ( MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(this, (MissionNotifyDispInfo_o *)Item, v13) )
      {
        mNoDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mDispInfos;
        if ( !mNoDispInfos )
          break;
        items = mNoDispInfos->fields._items;
        v21 = Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__;
        ++mNoDispInfos->fields._version;
        if ( !items )
          break;
        v22 = mNoDispInfos->fields._size;
        if ( (unsigned int)v22 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mNoDispInfos,
            Item,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + v22;
          mNoDispInfos->fields._size = v22 + 1;
          v23[4] = (Il2CppClass *)Item;
          sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)Item, v14, v15, v16, v17, v18, v19);
        }
        mNoDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mNoDispInfos;
        if ( !mNoDispInfos )
          break;
        System_Collections_Generic_List_object___RemoveAt(
          mNoDispInfos,
          size - 1,
          (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
      }
      if ( size < 2 )
        return;
      mNoDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mNoDispInfos;
      --size;
    }
    while ( mNoDispInfos );
LABEL_15:
    sub_1BCAA3C(mNoDispInfos, method);
  }
}


void __fastcall MissionNotifyManager___c__DisplayClass22_0___ctor(
        MissionNotifyManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNotifyManager___c__DisplayClass22_0___RequestDisp_b__0(
        MissionNotifyManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  MissionNotifyManager___c__DisplayClass22_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *_9__1; // x22
  MissionNotifyManager_o *_4__this; // x20
  MissionNotifyDispInfo_o *disp_info; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v4 = this;
  if ( (byte_4B19CD0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (MissionNotifyManager___c__DisplayClass22_0_o *)sub_1BCA7E0(
                                                             &Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__1__,
                                                             v5,
                                                             v6);
    byte_4B19CD0 = 1;
  }
  _9__1 = v4->fields.__9__1;
  _4__this = v4->fields.__4__this;
  disp_info = v4->fields.disp_info;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v10, v11, v12, v13, v14, v15);
  }
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  MissionNotifyManager__LoadEventAsset(_4__this, disp_info, _9__1, v3);
}


void __fastcall MissionNotifyManager___c__DisplayClass22_0___RequestDisp_b__1(
        MissionNotifyManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  MissionNotifyManager__LoadNotificationEnd(this->fields.__4__this, this->fields.disp_info, v2);
}