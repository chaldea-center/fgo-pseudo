void MissionNotifyManager___ctor(MissionNotifyManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_List_int__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_HashSet_T__o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4CCAF5D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__);
    sub_1C713B0(&System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_MissionNotifyComponent__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager___ctor__);
    byte_4CCAF5D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mNoDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mNoDispInfos, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_MissionNotifyComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__);
  this->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v17;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.mMissionNotifyComps,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.assetLoadedEventIdList = v24;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.assetLoadedEventIdList,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_HashSet_T__o *)sub_1C715FC(System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v31,
    (const MethodInfo_36C2EE4 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__);
  this->fields.noDisplayMissionCondTypeHashSet = (struct System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)v31;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.noDisplayMissionCondTypeHashSet,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_3A5F740 *)Method_SingletonTemplate_MissionNotifyManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void MissionNotifyManager__AddNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *noDisplayMissionCondTypeHashSet; // x0

  if ( (byte_4CCAF4D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__);
    byte_4CCAF4D = 1;
  }
  noDisplayMissionCondTypeHashSet = (System_Collections_Generic_HashSet_T__o *)this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_1C71608(0, *(_QWORD *)&missionCondType);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_36C40E8 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__);
}


void MissionNotifyManager__CancelPause(MissionNotifyManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  __int64 v4; // x1
  NoticeNumberComponent_o *v5; // x0

  if ( (byte_4CCAF4C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAF4C = 1;
  }
  this->fields.mPauseCount = 0;
  MissionNotifyManager__StartDisp(this, method);
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0, 0) )
  {
    v5 = this->fields.mNoticeNumberComp;
    if ( !v5 )
      sub_1C71608(0, v4);
    NoticeNumberComponent__SetDisp(v5, 1, 0);
  }
}


void MissionNotifyManager__ClearRequest(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *v2; // x19
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8
  int32_t size; // w2
  int v5; // w9
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  const MethodInfo *v7; // x1
  NoticeNumberComponent_o *v8; // x20

  v2 = this;
  if ( (byte_4CCAF51 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Clear__);
    this = (MissionNotifyManager_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAF51 = 1;
  }
  mDispInfos = v2->fields.mDispInfos;
  if ( !mDispInfos )
    goto LABEL_12;
  size = mDispInfos->fields._size;
  v5 = mDispInfos->fields._version + 1;
  mDispInfos->fields._size = 0;
  mDispInfos->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mDispInfos->fields._items, 0, size, 0);
  mNoticeNumberComp = (UnityEngine_Object_o *)v2->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0, 0) )
  {
    v8 = v2->fields.mNoticeNumberComp;
    this = (MissionNotifyManager_o *)MissionNotifyManager__GetDispInfoCount(v2, v7);
    if ( v8 )
    {
      NoticeNumberComponent__SetNumber(v8, (int32_t)this, 0);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C71608(this, method);
  }
LABEL_11:
  MissionNotifyManager__ReleaseEventAsset(v2, v7);
}


void MissionNotifyManager__Destroy(MissionNotifyManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Component_o **p_mNoticeNumberComp; // x19
  UnityEngine_Object_o *v5; // x20
  struct NoticeNumberComponent_o *mNoticeNumberComp; // t1
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CCAF50 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAF50 = 1;
  }
  MissionNotifyManager__ClearRequest(this, method);
  MissionNotifyManager__DestroyAllMissionNotifyComponentObject(this, v3);
  mNoticeNumberComp = this->fields.mNoticeNumberComp;
  p_mNoticeNumberComp = (UnityEngine_Component_o **)&this->fields.mNoticeNumberComp;
  v5 = (UnityEngine_Object_o *)mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    if ( !*p_mNoticeNumberComp )
      sub_1C71608(0, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mNoticeNumberComp, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(gameObject, 0);
    *p_mNoticeNumberComp = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)p_mNoticeNumberComp, 0, v9, v10, v11, v12, v13, v14);
  }
}


void MissionNotifyManager__DestroyAllMissionNotifyComponentObject(
        MissionNotifyManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mMissionNotifyComps; // x0
  int32_t v4; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4CCAF5A & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAF5A = 1;
  }
  mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_13;
  v4 = mMissionNotifyComps->fields._size - 1;
  if ( v4 >= 0 )
  {
    do
    {
      mMissionNotifyComps = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           mMissionNotifyComps,
                                                                           v4,
                                                                           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_MissionNotifyComponent__get_Item__);
      if ( !mMissionNotifyComps )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)mMissionNotifyComps,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71724608(gameObject, 0);
      mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mMissionNotifyComps;
      if ( !mMissionNotifyComps )
        break;
      System_Collections_Generic_List_object___RemoveAt(
        mMissionNotifyComps,
        v4,
        (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__ReleaseNotification(0);
      if ( --v4 < 0 )
        return;
      mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mMissionNotifyComps;
    }
    while ( mMissionNotifyComps );
LABEL_13:
    sub_1C71608(mMissionNotifyComps, method);
  }
}


void MissionNotifyManager__DragStartCallback(MissionNotifyManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  __int64 v4; // x1
  NoticeNumberComponent_o *v5; // x0

  if ( (byte_4CCAF57 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAF57 = 1;
  }
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0, 0) )
  {
    v5 = this->fields.mNoticeNumberComp;
    if ( !v5 )
      sub_1C71608(0, v4);
    NoticeNumberComponent__SetDisp(v5, 0, 0);
  }
}


void MissionNotifyManager__EndPause(MissionNotifyManager_o *this, const MethodInfo *method)
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


void MissionNotifyManager__FrameOut(MissionNotifyManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mMissionNotifyComps; // x0
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t current; // w1
  const MethodInfo *v14; // x1
  MissionNotifyComponent_o *v15; // x0
  MissionNotifyComponent_o *v16; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x4
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CCAF5C & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_MissionNotifyManager___c__DisplayClass34_0__FrameOut_b__0__);
    sub_1C713B0(&MissionNotifyManager___c__DisplayClass34_0_TypeInfo);
    byte_4CCAF5C = 1;
  }
  memset(&v23, 0, sizeof(v23));
  mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    mMissionNotifyComps,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__) )
  {
    v4 = sub_1C715FC(MissionNotifyManager___c__DisplayClass34_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    if ( !v4 )
      sub_1C71608(v5, v6);
    current = (int32_t)v23.fields._current;
    *(_QWORD *)(v4 + 16) = v23.fields._current;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 16), current, v7, v8, v9, v10, v11, v12);
    v15 = *(MissionNotifyComponent_o **)(v4 + 16);
    if ( !v15 )
      sub_1C71608(0, v14);
    if ( MissionNotifyComponent__IsBusy(v15, v14) )
    {
      v16 = *(MissionNotifyComponent_o **)(v4 + 16);
      v17 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(
        v17,
        (Il2CppObject *)v4,
        Method_MissionNotifyManager___c__DisplayClass34_0__FrameOut_b__0__,
        0);
      if ( !v16 )
        sub_1C71608(v18, v19);
      MissionNotifyComponent__FrameInOut(v16, 0, v17, 0, v20);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0, 0) )
  {
    mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mNoticeNumberComp;
    if ( mMissionNotifyComps )
    {
      NoticeNumberComponent__SetDispForce((NoticeNumberComponent_o *)mMissionNotifyComps, 0, 0);
      return;
    }
LABEL_20:
    sub_1C71608(mMissionNotifyComps, method);
  }
}


void MissionNotifyManager__FrameOutEndCallback(
        MissionNotifyManager_o *this,
        MissionNotifyComponent_o *comp,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CCAF58 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAF58 = 1;
  }
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_12;
  if ( mMissionNotifyComps->fields._size < 1 )
    return;
  mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)System_Collections_Generic_List_object___Remove(
                                                                                              (System_Collections_Generic_List_object__o *)mMissionNotifyComps,
                                                                                              (Il2CppObject *)comp,
                                                                                              (const MethodInfo_3811C40 *)Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__);
  if ( !comp )
LABEL_12:
    sub_1C71608(mMissionNotifyComps, comp);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)comp, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71724608(gameObject, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0);
}


int32_t MissionNotifyManager__GetDispInfoCount(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *v2; // x19
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8

  v2 = this;
  if ( (byte_4CCAF4F & 1) == 0 )
  {
    this = (MissionNotifyManager_o *)sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__);
    byte_4CCAF4F = 1;
  }
  mDispInfos = v2->fields.mDispInfos;
  if ( !mDispInfos )
    sub_1C71608(this, method);
  return mDispInfos->fields._size;
}


void MissionNotifyManager__Init(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager__Destroy(this, method);
  this->fields.mPauseCount = 0;
}


bool MissionNotifyManager__IsBusy(MissionNotifyManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  const MethodInfo *v5; // x1
  bool v6; // w19
  int v7; // w20
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CCAF59 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
    byte_4CCAF59 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( this->fields.mPauseCount > 0 )
    return 1;
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_1C71608(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)mMissionNotifyComps,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    if ( !v6 )
      break;
    if ( !v8.fields._current )
      sub_1C71608(0, v5);
    if ( MissionNotifyComponent__IsBusy((MissionNotifyComponent_o *)v8.fields._current, v5) )
    {
      v7 = 5;
      goto LABEL_12;
    }
  }
  v7 = 6;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  return v6 && v7 == 5;
}


bool MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *missionNotifyDispInfo,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( !missionNotifyDispInfo )
    sub_1C71608(this, 0);
  return MissionNotifyDispInfo__IsDispPossible(missionNotifyDispInfo, (const MethodInfo *)missionNotifyDispInfo)
      && !MissionNotifyDispInfo__ContainsMissionCondType(
            missionNotifyDispInfo,
            this->fields.noDisplayMissionCondTypeHashSet,
            v5);
}


bool MissionNotifyManager__IsPause(MissionNotifyManager_o *this, const MethodInfo *method)
{
  return this->fields.mPauseCount > 0;
}


bool MissionNotifyManager__IsPress(MissionNotifyManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  bool v6; // w19
  int v7; // w20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CCAF4B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
    byte_4CCAF4B = 1;
  }
  memset(&v9, 0, sizeof(v9));
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_1C71608(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)mMissionNotifyComps,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    v6 = v4;
    if ( !v4 )
      break;
    if ( !v9.fields._current )
      sub_1C71608(v4, v5);
    if ( *((_BYTE *)&v9.fields._current->klass + (unsigned __int64)off_C0) )
    {
      v7 = 4;
      goto LABEL_10;
    }
  }
  v7 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  return v6 && v7 == 4;
}


void MissionNotifyManager__LoadEventAsset(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 monitor_high; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v10; // x8
  _QWORD *v11; // x9
  __int64 v12; // x10
  int32_t v13; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CCAF53 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C713B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__isEntityExistsFromId__);
    sub_1C713B0(&long___TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCAF53 = 1;
  }
  entity = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !disp_info || !Instance )
    goto LABEL_28;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          disp_info->fields.eventMissionId,
          (const MethodInfo_3408ECC *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
    goto LABEL_21;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  Instance = sub_1C71458(long___TypeInfo, 1);
  if ( !entity )
    goto LABEL_28;
  monitor_high = Instance;
  if ( !Instance )
    goto LABEL_28;
  if ( !*(_DWORD *)(Instance + 24) )
    sub_1C71610(Instance);
  *(_QWORD *)(Instance + 32) = SHIDWORD(entity[1].monitor);
  if ( !MasterData_object )
    goto LABEL_28;
  Instance = DataMasterBase_object__object__int___isEntityExistsFromId(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (System_Int64_array *)Instance,
               (const MethodInfo_340845C *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__isEntityExistsFromId__);
  if ( (Instance & 1) == 0 )
  {
LABEL_21:
    ActionExtensions__Call(finishCallback, 0);
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
               (const MethodInfo_37F3A6C *)Method_System_Collections_Generic_List_int__Contains__);
  if ( (Instance & 1) != 0 )
    goto LABEL_23;
  if ( !entity
    || (Instance = (__int64)this->fields.assetLoadedEventIdList) == 0
    || (monitor_high = HIDWORD(entity[1].monitor),
        v10 = *(_QWORD *)(Instance + 16),
        v11 = Method_System_Collections_Generic_List_int__Add__,
        ++*(_DWORD *)(Instance + 28),
        !v10) )
  {
LABEL_28:
    sub_1C71608(Instance, monitor_high);
  }
  v12 = *(int *)(Instance + 24);
  if ( (unsigned int)v12 >= *(_DWORD *)(v10 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Instance,
      monitor_high,
      *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    *(_DWORD *)(Instance + 24) = v12 + 1;
    *(_DWORD *)(v10 + 4 * v12 + 32) = monitor_high;
  }
LABEL_23:
  if ( !entity )
    goto LABEL_28;
  v13 = HIDWORD(entity[1].monitor);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_40880048(v13, finishCallback, 1, 0);
}


void MissionNotifyManager__LoadNotificationEnd(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_List_object__o *mDispInfos; // x0
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  const MethodInfo *v18; // x1
  NoticeNumberComponent_o *v19; // x20

  if ( (byte_4CCAF54 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAF54 = 1;
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
  v14 = Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__;
  ++mDispInfos->fields._version;
  if ( !items )
    goto LABEL_18;
  size = mDispInfos->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      mDispInfos,
      (Il2CppObject *)disp_info,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    mDispInfos->fields._size = size + 1;
    v16[4] = (Il2CppClass *)disp_info;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 4), (int32_t)disp_info, v6, v7, v8, v9, v10, v11);
  }
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0, 0) )
  {
    v19 = this->fields.mNoticeNumberComp;
    mDispInfos = (System_Collections_Generic_List_object__o *)MissionNotifyManager__GetDispInfoCount(this, v18);
    if ( !v19
      || (NoticeNumberComponent__SetNumber(v19, (int32_t)mDispInfos, 0),
          (mDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mNoticeNumberComp) == 0) )
    {
LABEL_18:
      sub_1C71608(mDispInfos, v5);
    }
    NoticeNumberComponent__SetDispForce((NoticeNumberComponent_o *)mDispInfos, this->fields.mPauseCount < 1, 0);
  }
  MissionNotifyManager__StartDisp(this, v18);
}


void MissionNotifyManager__Reboot(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager__Destroy(this, method);
  this->fields.mPauseCount = 0;
}


void MissionNotifyManager__ReleaseEventAsset(MissionNotifyManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *assetLoadedEventIdList; // x0
  int32_t current; // w20
  struct System_Collections_Generic_List_int__o *v5; // x8
  int v6; // w9
  System_Collections_Generic_List_Enumerator_int__o v7; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v8; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CCAF5B & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_4CCAF5B = 1;
  }
  memset(&v8, 0, sizeof(v8));
  assetLoadedEventIdList = this->fields.assetLoadedEventIdList;
  if ( !assetLoadedEventIdList )
    goto LABEL_11;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    assetLoadedEventIdList,
    (const MethodInfo_37F41C8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v8 = v7;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v8,
            (const MethodInfo_35924B0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v8.fields._current;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseEventUI_40880220(current, 0);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v8,
    (const MethodInfo_35924AC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v5 = this->fields.assetLoadedEventIdList;
  if ( !v5 )
LABEL_11:
    sub_1C71608(assetLoadedEventIdList, method);
  v6 = v5->fields._version + 1;
  v5->fields._size = 0;
  v5->fields._version = v6;
}


// local variable allocation has failed, the output may be wrong!
void MissionNotifyManager__RemoveNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *noDisplayMissionCondTypeHashSet; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4CCAF4E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__);
    byte_4CCAF4E = 1;
  }
  noDisplayMissionCondTypeHashSet = (System_Collections_Generic_HashSet_T__o *)this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_1C71608(0, *(_QWORD *)&missionCondType);
  System_Collections_Generic_HashSet_Int32Enum___Remove(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_36C37AC *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__);
  MissionNotifyManager__TryMoveNoDisplayToDisplay(this, v6);
}


void MissionNotifyManager__RequestDisp(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
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
  System_Action_o *v20; // x19

  if ( (byte_4CCAF52 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__0__);
    sub_1C713B0(&MissionNotifyManager___c__DisplayClass22_0_TypeInfo);
    byte_4CCAF52 = 1;
  }
  v5 = sub_1C715FC(MissionNotifyManager___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = disp_info;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)disp_info, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__0__,
    0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v20, 0);
}


MissionNotifyComponent_o *MissionNotifyManager__StartDisp(MissionNotifyManager_o *this, const MethodInfo *method)
{
  struct NoticeNumberComponent_o **p_mNoticeNumberComp; // x20
  UnityEngine_Object_o *mNoticeNumberComp; // x21
  const MethodInfo *v5; // x1
  void *Instance; // x0
  const MethodInfo *v7; // x1
  MissionNotifyComponent_o *Component_object; // x21
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *MissionNotify; // x23
  MissionNotifyDispInfo_o *v12; // x22
  System_Action_o *v13; // x23
  System_Func_object__o *v14; // x24
  System_Action_object__o *v15; // x25
  const MethodInfo *v16; // x5
  UnityEngine_Object_o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  Il2CppObject *noticeNumberPrefab; // x22
  Il2CppObject *v25; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v27; // x24
  UnityEngine_GameObject_o *v28; // x23
  int v29; // w24
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int v36; // w8
  void *v37; // x23
  unsigned int v38; // w25
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  __int64 v42; // x8
  NoticeNumberComponent_o *v43; // x20
  const MethodInfo *v44; // x1
  UnityEngine_Vector2_o v46; // 0:s0.4,4:s1.4

  if ( (byte_4CCAF55 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_MissionNotifyComponent__TypeInfo);
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&System_Func_MissionNotifyComponent__TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyComponent__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
    sub_1C713B0(&Method_MissionNotifyManager_DragStartCallback__);
    sub_1C713B0(&Method_MissionNotifyManager_FrameOutEndCallback__);
    sub_1C713B0(&Method_MissionNotifyManager_FrameOutStartCallback__);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CCAF55 = 1;
  }
  p_mNoticeNumberComp = &this->fields.mNoticeNumberComp;
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0, 0) )
  {
    Instance = *p_mNoticeNumberComp;
    if ( !*p_mNoticeNumberComp )
      goto LABEL_45;
    NoticeNumberComponent__SetDisp((NoticeNumberComponent_o *)Instance, this->fields.mPauseCount < 1, 0);
  }
  if ( MissionNotifyManager__IsBusy(this, v5) )
    return 0;
  if ( MissionNotifyManager__GetDispInfoCount(this, v7) <= 0 )
  {
    MissionNotifyManager__TryMoveNoDisplayToDisplay(this, v9);
    if ( MissionNotifyManager__GetDispInfoCount(this, v10) < 1 )
      return 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MissionNotify = CommonUI__CreateMissionNotify((CommonUI_o *)Instance, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MissionNotify, 0, 0) )
  {
    Instance = this->fields.mDispInfos;
    if ( !Instance )
      goto LABEL_45;
    Instance = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 0,
                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
    if ( !MissionNotify )
      goto LABEL_45;
    v12 = (MissionNotifyDispInfo_o *)Instance;
    Component_object = (MissionNotifyComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     MissionNotify,
                                                     (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___);
    v13 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_MissionNotifyManager_DragStartCallback__, 0);
    v14 = (System_Func_object__o *)sub_1C715FC(System_Func_MissionNotifyComponent__TypeInfo);
    System_Func_object____ctor(v14, (Il2CppObject *)this, Method_MissionNotifyManager_FrameOutStartCallback__, 0);
    v15 = (System_Action_object__o *)sub_1C715FC(System_Action_MissionNotifyComponent__TypeInfo);
    System_Action_object____ctor(v15, (Il2CppObject *)this, Method_MissionNotifyManager_FrameOutEndCallback__, 0);
    if ( !Component_object )
      goto LABEL_45;
    MissionNotifyComponent__SetupAndPlay(
      Component_object,
      v12,
      v13,
      (System_Func_MissionNotifyComponent__o *)v14,
      (System_Action_MissionNotifyComponent__o *)v15,
      v16);
    v17 = (UnityEngine_Object_o *)*p_mNoticeNumberComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v17, 0, 0) )
    {
      noticeNumberPrefab = (Il2CppObject *)Component_object->fields.noticeNumberPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v25 = UnityEngine_Object__Instantiate_object_(
              noticeNumberPrefab,
              (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
      Instance = GameObjectExtensions__GetParent(gameObject, 0);
      if ( !Instance )
        goto LABEL_45;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !v25 )
        goto LABEL_45;
      v27 = (UnityEngine_GameObject_o *)Instance;
      v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0);
      GameObjectExtensions__SafeSetParent_36395768(v28, v27, 0);
      v46.fields.y = 275.0;
      v46.fields.x = 270.0;
      GameObjectExtensions__SetLocalPosition_36389872(v28, v46, 0);
      GameObjectExtensions__SetLocalScale_36391984(v28, 0.75, 0);
      if ( !v27 )
        goto LABEL_45;
      Instance = UnityEngine_GameObject__GetComponentInChildren_object_(
                   v27,
                   (const MethodInfo_31A3134 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_45;
      if ( !v28 )
        goto LABEL_45;
      v29 = *((_DWORD *)Instance + 44);
      Instance = UnityEngine_GameObject__GetComponentsInChildren_object__52050676(
                   v28,
                   (const MethodInfo_31A3AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_45;
      v36 = *((_DWORD *)Instance + 6);
      v37 = Instance;
      if ( v36 >= 1 )
      {
        v38 = 0;
        while ( 1 )
        {
          if ( v38 >= v36 )
            sub_1C71610(Instance);
          Instance = (void *)*((_QWORD *)v37 + (int)v38 + 4);
          if ( !Instance )
            break;
          UIWidget__set_depth((UIWidget_o *)Instance, *((_DWORD *)Instance + 44) + v29, 0);
          v36 = *((_DWORD *)v37 + 6);
          if ( (int)++v38 >= v36 )
            goto LABEL_35;
        }
LABEL_45:
        sub_1C71608(Instance, v5);
      }
LABEL_35:
      *p_mNoticeNumberComp = (struct NoticeNumberComponent_o *)v25;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.mNoticeNumberComp,
        (int32_t)v25,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    Instance = this->fields.mMissionNotifyComps;
    if ( !Instance )
      goto LABEL_45;
    v39 = *((_QWORD *)Instance + 2);
    v40 = Method_System_Collections_Generic_List_MissionNotifyComponent__Add__;
    ++*((_DWORD *)Instance + 7);
    if ( !v39 )
      goto LABEL_45;
    v41 = *((int *)Instance + 6);
    if ( (unsigned int)v41 >= *(_DWORD *)(v39 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)Component_object,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = v39 + 8 * v41;
      *((_DWORD *)Instance + 6) = v41 + 1;
      *(_QWORD *)(v42 + 32) = Component_object;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v42 + 32), (int32_t)Component_object, v18, v19, v20, v21, v22, v23);
    }
    Instance = this->fields.mDispInfos;
    if ( !Instance )
      goto LABEL_45;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Instance,
      0,
      (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    v43 = this->fields.mNoticeNumberComp;
    Instance = (void *)MissionNotifyManager__GetDispInfoCount(this, v44);
    if ( !v43 )
      goto LABEL_45;
    NoticeNumberComponent__SetNumber(v43, (int32_t)Instance, 0);
  }
  return Component_object;
}


void MissionNotifyManager__StartPause(MissionNotifyManager_o *this, const MethodInfo *method)
{
  ++this->fields.mPauseCount;
}


void MissionNotifyManager__TryMoveNoDisplayToDisplay(MissionNotifyManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mNoDispInfos; // x0
  int size; // w24
  Il2CppObject *Item; // x21
  const MethodInfo *v6; // x2
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  Il2CppClass **v16; // x8

  if ( (byte_4CCAF56 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
    byte_4CCAF56 = 1;
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
               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
      if ( MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(this, (MissionNotifyDispInfo_o *)Item, v6) )
      {
        mNoDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mDispInfos;
        if ( !mNoDispInfos )
          break;
        items = mNoDispInfos->fields._items;
        v14 = Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__;
        ++mNoDispInfos->fields._version;
        if ( !items )
          break;
        v15 = mNoDispInfos->fields._size;
        if ( (unsigned int)v15 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mNoDispInfos,
            Item,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = &items->obj.klass + v15;
          mNoDispInfos->fields._size = v15 + 1;
          v16[4] = (Il2CppClass *)Item;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 4), (int32_t)Item, v7, v8, v9, v10, v11, v12);
        }
        mNoDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mNoDispInfos;
        if ( !mNoDispInfos )
          break;
        System_Collections_Generic_List_object___RemoveAt(
          mNoDispInfos,
          size - 1,
          (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
      }
      if ( size < 2 )
        return;
      mNoDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mNoDispInfos;
      --size;
    }
    while ( mNoDispInfos );
LABEL_15:
    sub_1C71608(mNoDispInfos, method);
  }
}


void MissionNotifyManager___c__DisplayClass22_0___ctor(
        MissionNotifyManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNotifyManager___c__DisplayClass22_0___RequestDisp_b__0(
        MissionNotifyManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  MissionNotifyManager___c__DisplayClass22_0_o *v3; // x19
  System_Action_o *_9__1; // x22
  MissionNotifyManager_o *_4__this; // x20
  MissionNotifyDispInfo_o *disp_info; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v3 = this;
  if ( (byte_4CCAF5E & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    this = (MissionNotifyManager___c__DisplayClass22_0_o *)sub_1C713B0(&Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__1__);
    byte_4CCAF5E = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  disp_info = v3->fields.disp_info;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_1C71608(this, method);
  MissionNotifyManager__LoadEventAsset(_4__this, disp_info, _9__1, v2);
}


void MissionNotifyManager___c__DisplayClass22_0___RequestDisp_b__1(
        MissionNotifyManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C71608(this, method);
  MissionNotifyManager__LoadNotificationEnd(this->fields.__4__this, this->fields.disp_info, v2);
}


void MissionNotifyManager___c__DisplayClass34_0___ctor(
        MissionNotifyManager___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MissionNotifyManager___c__DisplayClass34_0___FrameOut_b__0(
        MissionNotifyManager___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MissionNotifyComponent_o *comp; // x0

  comp = this->fields.comp;
  if ( !comp )
    sub_1C71608(0, method);
  MissionNotifyComponent__SetState(comp, 0, v2);
}