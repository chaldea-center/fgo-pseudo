void MissionNotifyManager___ctor(MissionNotifyManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_int__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_HashSet_T__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4CB9E0A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__);
    sub_1C6BA08(&System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_MissionNotifyComponent__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_MissionNotifyManager___ctor__);
    byte_4CB9E0A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mNoDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mNoDispInfos, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_MissionNotifyComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__);
  this->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mMissionNotifyComps, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.assetLoadedEventIdList = v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetLoadedEventIdList, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_HashSet_T__o *)sub_1C6BC54(System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v15,
    (const MethodInfo_36B3140 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__);
  this->fields.noDisplayMissionCondTypeHashSet = (struct System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)v15;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.noDisplayMissionCondTypeHashSet, (int32_t)v15, v16, v17);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_3A4F99C *)Method_SingletonTemplate_MissionNotifyManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void MissionNotifyManager__AddNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *noDisplayMissionCondTypeHashSet; // x0

  if ( (byte_4CB9DFA & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__);
    byte_4CB9DFA = 1;
  }
  noDisplayMissionCondTypeHashSet = (System_Collections_Generic_HashSet_T__o *)this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_1C6BC60(0, *(_QWORD *)&missionCondType);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_36B4344 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__);
}


void MissionNotifyManager__CancelPause(MissionNotifyManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  __int64 v4; // x1
  NoticeNumberComponent_o *v5; // x0

  if ( (byte_4CB9DF9 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9DF9 = 1;
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
      sub_1C6BC60(0, v4);
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
  if ( (byte_4CB9DFE & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Clear__);
    this = (MissionNotifyManager_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9DFE = 1;
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
    sub_1C6BC60(this, method);
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
  const MethodInfo *v10; // x3

  if ( (byte_4CB9DFD & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9DFD = 1;
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
      sub_1C6BC60(0, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mNoticeNumberComp, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71659676(gameObject, 0);
    *p_mNoticeNumberComp = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_mNoticeNumberComp, 0, v9, v10);
  }
}


void MissionNotifyManager__DestroyAllMissionNotifyComponentObject(
        MissionNotifyManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mMissionNotifyComps; // x0
  int32_t v4; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4CB9E07 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9E07 = 1;
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
                                                                           (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_MissionNotifyComponent__get_Item__);
      if ( !mMissionNotifyComps )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)mMissionNotifyComps,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71659676(gameObject, 0);
      mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mMissionNotifyComps;
      if ( !mMissionNotifyComps )
        break;
      System_Collections_Generic_List_object___RemoveAt(
        mMissionNotifyComps,
        v4,
        (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__ReleaseNotification(0);
      if ( --v4 < 0 )
        return;
      mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mMissionNotifyComps;
    }
    while ( mMissionNotifyComps );
LABEL_13:
    sub_1C6BC60(mMissionNotifyComps, method);
  }
}


void MissionNotifyManager__DragStartCallback(MissionNotifyManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  __int64 v4; // x1
  NoticeNumberComponent_o *v5; // x0

  if ( (byte_4CB9E04 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9E04 = 1;
  }
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0, 0) )
  {
    v5 = this->fields.mNoticeNumberComp;
    if ( !v5 )
      sub_1C6BC60(0, v4);
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
  const MethodInfo *v8; // x3
  int32_t current; // w1
  const MethodInfo *v10; // x1
  MissionNotifyComponent_o *v11; // x0
  MissionNotifyComponent_o *v12; // x21
  System_Action_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x4
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB9E09 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_MissionNotifyManager___c__DisplayClass34_0__FrameOut_b__0__);
    sub_1C6BA08(&MissionNotifyManager___c__DisplayClass34_0_TypeInfo);
    byte_4CB9E09 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    mMissionNotifyComps,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__) )
  {
    v4 = sub_1C6BC54(MissionNotifyManager___c__DisplayClass34_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    if ( !v4 )
      sub_1C6BC60(v5, v6);
    current = (int32_t)v19.fields._current;
    *(_QWORD *)(v4 + 16) = v19.fields._current;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 16), current, v7, v8);
    v11 = *(MissionNotifyComponent_o **)(v4 + 16);
    if ( !v11 )
      sub_1C6BC60(0, v10);
    if ( MissionNotifyComponent__IsBusy(v11, v10) )
    {
      v12 = *(MissionNotifyComponent_o **)(v4 + 16);
      v13 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        v13,
        (Il2CppObject *)v4,
        Method_MissionNotifyManager___c__DisplayClass34_0__FrameOut_b__0__,
        0);
      if ( !v12 )
        sub_1C6BC60(v14, v15);
      MissionNotifyComponent__FrameInOut(v12, 0, v13, 0, v16);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
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
    sub_1C6BC60(mMissionNotifyComps, method);
  }
}


void MissionNotifyManager__FrameOutEndCallback(
        MissionNotifyManager_o *this,
        MissionNotifyComponent_o *comp,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CB9E05 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9E05 = 1;
  }
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_12;
  if ( mMissionNotifyComps->fields._size < 1 )
    return;
  mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)System_Collections_Generic_List_object___Remove(
                                                                                              (System_Collections_Generic_List_object__o *)mMissionNotifyComps,
                                                                                              (Il2CppObject *)comp,
                                                                                              (const MethodInfo_3801E9C *)Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__);
  if ( !comp )
LABEL_12:
    sub_1C6BC60(mMissionNotifyComps, comp);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)comp, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71659676(gameObject, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0);
}


int32_t MissionNotifyManager__GetDispInfoCount(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *v2; // x19
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8

  v2 = this;
  if ( (byte_4CB9DFC & 1) == 0 )
  {
    this = (MissionNotifyManager_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__);
    byte_4CB9DFC = 1;
  }
  mDispInfos = v2->fields.mDispInfos;
  if ( !mDispInfos )
    sub_1C6BC60(this, method);
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

  if ( (byte_4CB9E06 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
    byte_4CB9E06 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( this->fields.mPauseCount > 0 )
    return 1;
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_1C6BC60(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)mMissionNotifyComps,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    if ( !v6 )
      break;
    if ( !v8.fields._current )
      sub_1C6BC60(0, v5);
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
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  return v6 && v7 == 5;
}


bool MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *missionNotifyDispInfo,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( !missionNotifyDispInfo )
    sub_1C6BC60(this, 0);
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

  if ( (byte_4CB9DF8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
    byte_4CB9DF8 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_1C6BC60(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)mMissionNotifyComps,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    v6 = v4;
    if ( !v4 )
      break;
    if ( !v9.fields._current )
      sub_1C6BC60(v4, v5);
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
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
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

  if ( (byte_4CB9E00 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__isEntityExistsFromId__);
    sub_1C6BA08(&long___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB9E00 = 1;
  }
  entity = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !disp_info || !Instance )
    goto LABEL_28;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          disp_info->fields.eventMissionId,
          (const MethodInfo_33F9128 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
    goto LABEL_21;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  Instance = sub_1C6BAB0(long___TypeInfo, 1);
  if ( !entity )
    goto LABEL_28;
  monitor_high = Instance;
  if ( !Instance )
    goto LABEL_28;
  if ( !*(_DWORD *)(Instance + 24) )
    sub_1C6BC68(Instance);
  *(_QWORD *)(Instance + 32) = SHIDWORD(entity[1].monitor);
  if ( !MasterData_object )
    goto LABEL_28;
  Instance = DataMasterBase_object__object__int___isEntityExistsFromId(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (System_Int64_array *)Instance,
               (const MethodInfo_33F86B8 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__isEntityExistsFromId__);
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
               (const MethodInfo_37E3CC8 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1C6BC60(Instance, monitor_high);
  }
  v12 = *(int *)(Instance + 24);
  if ( (unsigned int)v12 >= *(_DWORD *)(v10 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Instance,
      monitor_high,
      *(const MethodInfo_37E3950 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
  AtlasManager__LoadEventUI_40837508(v13, finishCallback, 1, 0);
}


void MissionNotifyManager__LoadNotificationEnd(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *mDispInfos; // x0
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppClass **v12; // x8
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  const MethodInfo *v14; // x1
  NoticeNumberComponent_o *v15; // x20

  if ( (byte_4CB9E01 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9E01 = 1;
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
  v10 = Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__;
  ++mDispInfos->fields._version;
  if ( !items )
    goto LABEL_18;
  size = mDispInfos->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      mDispInfos,
      (Il2CppObject *)disp_info,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &items->obj.klass + size;
    mDispInfos->fields._size = size + 1;
    v12[4] = (Il2CppClass *)disp_info;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 4), (int32_t)disp_info, v6, v7);
  }
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0, 0) )
  {
    v15 = this->fields.mNoticeNumberComp;
    mDispInfos = (System_Collections_Generic_List_object__o *)MissionNotifyManager__GetDispInfoCount(this, v14);
    if ( !v15
      || (NoticeNumberComponent__SetNumber(v15, (int32_t)mDispInfos, 0),
          (mDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mNoticeNumberComp) == 0) )
    {
LABEL_18:
      sub_1C6BC60(mDispInfos, v5);
    }
    NoticeNumberComponent__SetDispForce((NoticeNumberComponent_o *)mDispInfos, this->fields.mPauseCount < 1, 0);
  }
  MissionNotifyManager__StartDisp(this, v14);
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

  if ( (byte_4CB9E08 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_4CB9E08 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  assetLoadedEventIdList = this->fields.assetLoadedEventIdList;
  if ( !assetLoadedEventIdList )
    goto LABEL_11;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    assetLoadedEventIdList,
    (const MethodInfo_37E4424 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v8 = v7;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v8,
            (const MethodInfo_358270C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v8.fields._current;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseEventUI_40837680(current, 0);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v8,
    (const MethodInfo_3582708 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v5 = this->fields.assetLoadedEventIdList;
  if ( !v5 )
LABEL_11:
    sub_1C6BC60(assetLoadedEventIdList, method);
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

  if ( (byte_4CB9DFB & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__);
    byte_4CB9DFB = 1;
  }
  noDisplayMissionCondTypeHashSet = (System_Collections_Generic_HashSet_T__o *)this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_1C6BC60(0, *(_QWORD *)&missionCondType);
  System_Collections_Generic_HashSet_Int32Enum___Remove(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_36B3A08 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x19

  if ( (byte_4CB9DFF & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__0__);
    sub_1C6BA08(&MissionNotifyManager___c__DisplayClass22_0_TypeInfo);
    byte_4CB9DFF = 1;
  }
  v5 = sub_1C6BC54(MissionNotifyManager___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = disp_info;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)disp_info, v10, v11);
  v12 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__0__,
    0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v12, 0);
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
  const MethodInfo *v19; // x3
  Il2CppObject *noticeNumberPrefab; // x22
  Il2CppObject *v21; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v23; // x24
  UnityEngine_GameObject_o *v24; // x23
  int v25; // w24
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int v28; // w8
  void *v29; // x23
  unsigned int v30; // w25
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  NoticeNumberComponent_o *v35; // x20
  const MethodInfo *v36; // x1
  UnityEngine_Vector2_o v38; // 0:s0.4,4:s1.4

  if ( (byte_4CB9E02 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_MissionNotifyComponent__TypeInfo);
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&System_Func_MissionNotifyComponent__TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyComponent__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
    sub_1C6BA08(&Method_MissionNotifyManager_DragStartCallback__);
    sub_1C6BA08(&Method_MissionNotifyManager_FrameOutEndCallback__);
    sub_1C6BA08(&Method_MissionNotifyManager_FrameOutStartCallback__);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB9E02 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
    if ( !MissionNotify )
      goto LABEL_45;
    v12 = (MissionNotifyDispInfo_o *)Instance;
    Component_object = (MissionNotifyComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     MissionNotify,
                                                     (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___);
    v13 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_MissionNotifyManager_DragStartCallback__, 0);
    v14 = (System_Func_object__o *)sub_1C6BC54(System_Func_MissionNotifyComponent__TypeInfo);
    System_Func_object____ctor(v14, (Il2CppObject *)this, Method_MissionNotifyManager_FrameOutStartCallback__, 0);
    v15 = (System_Action_object__o *)sub_1C6BC54(System_Action_MissionNotifyComponent__TypeInfo);
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
      v21 = UnityEngine_Object__Instantiate_object_(
              noticeNumberPrefab,
              (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
      Instance = GameObjectExtensions__GetParent(gameObject, 0);
      if ( !Instance )
        goto LABEL_45;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !v21 )
        goto LABEL_45;
      v23 = (UnityEngine_GameObject_o *)Instance;
      v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0);
      GameObjectExtensions__SafeSetParent_36361932(v24, v23, 0);
      v38.fields.y = 275.0;
      v38.fields.x = 270.0;
      GameObjectExtensions__SetLocalPosition_36356036(v24, v38, 0);
      GameObjectExtensions__SetLocalScale_36358148(v24, 0.75, 0);
      if ( !v23 )
        goto LABEL_45;
      Instance = UnityEngine_GameObject__GetComponentInChildren_object_(
                   v23,
                   (const MethodInfo_3193390 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_45;
      if ( !v24 )
        goto LABEL_45;
      v25 = *((_DWORD *)Instance + 44);
      Instance = UnityEngine_GameObject__GetComponentsInChildren_object__51985744(
                   v24,
                   (const MethodInfo_3193D50 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_45;
      v28 = *((_DWORD *)Instance + 6);
      v29 = Instance;
      if ( v28 >= 1 )
      {
        v30 = 0;
        while ( 1 )
        {
          if ( v30 >= v28 )
            sub_1C6BC68(Instance);
          Instance = (void *)*((_QWORD *)v29 + (int)v30 + 4);
          if ( !Instance )
            break;
          UIWidget__set_depth((UIWidget_o *)Instance, *((_DWORD *)Instance + 44) + v25, 0);
          v28 = *((_DWORD *)v29 + 6);
          if ( (int)++v30 >= v28 )
            goto LABEL_35;
        }
LABEL_45:
        sub_1C6BC60(Instance, v5);
      }
LABEL_35:
      *p_mNoticeNumberComp = (struct NoticeNumberComponent_o *)v21;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mNoticeNumberComp, (int32_t)v21, v26, v27);
    }
    Instance = this->fields.mMissionNotifyComps;
    if ( !Instance )
      goto LABEL_45;
    v31 = *((_QWORD *)Instance + 2);
    v32 = Method_System_Collections_Generic_List_MissionNotifyComponent__Add__;
    ++*((_DWORD *)Instance + 7);
    if ( !v31 )
      goto LABEL_45;
    v33 = *((int *)Instance + 6);
    if ( (unsigned int)v33 >= *(_DWORD *)(v31 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)Component_object,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v34 = v31 + 8 * v33;
      *((_DWORD *)Instance + 6) = v33 + 1;
      *(_QWORD *)(v34 + 32) = Component_object;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v34 + 32), (int32_t)Component_object, v18, v19);
    }
    Instance = this->fields.mDispInfos;
    if ( !Instance )
      goto LABEL_45;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Instance,
      0,
      (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    v35 = this->fields.mNoticeNumberComp;
    Instance = (void *)MissionNotifyManager__GetDispInfoCount(this, v36);
    if ( !v35 )
      goto LABEL_45;
    NoticeNumberComponent__SetNumber(v35, (int32_t)Instance, 0);
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
  const MethodInfo *v8; // x3
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 v11; // x10
  Il2CppClass **v12; // x8

  if ( (byte_4CB9E03 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
    byte_4CB9E03 = 1;
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
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
      if ( MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(this, (MissionNotifyDispInfo_o *)Item, v6) )
      {
        mNoDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mDispInfos;
        if ( !mNoDispInfos )
          break;
        items = mNoDispInfos->fields._items;
        v10 = Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__;
        ++mNoDispInfos->fields._version;
        if ( !items )
          break;
        v11 = mNoDispInfos->fields._size;
        if ( (unsigned int)v11 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mNoDispInfos,
            Item,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
        }
        else
        {
          v12 = &items->obj.klass + v11;
          mNoDispInfos->fields._size = v11 + 1;
          v12[4] = (Il2CppClass *)Item;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v12 + 4), (int32_t)Item, v7, v8);
        }
        mNoDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mNoDispInfos;
        if ( !mNoDispInfos )
          break;
        System_Collections_Generic_List_object___RemoveAt(
          mNoDispInfos,
          size - 1,
          (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
      }
      if ( size < 2 )
        return;
      mNoDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mNoDispInfos;
      --size;
    }
    while ( mNoDispInfos );
LABEL_15:
    sub_1C6BC60(mNoDispInfos, method);
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
  const MethodInfo *v8; // x3

  v3 = this;
  if ( (byte_4CB9E0B & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    this = (MissionNotifyManager___c__DisplayClass22_0_o *)sub_1C6BA08(&Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__1__);
    byte_4CB9E0B = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  disp_info = v3->fields.disp_info;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !_4__this )
    sub_1C6BC60(this, method);
  MissionNotifyManager__LoadEventAsset(_4__this, disp_info, _9__1, v2);
}


void MissionNotifyManager___c__DisplayClass22_0___RequestDisp_b__1(
        MissionNotifyManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C6BC60(this, method);
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
    sub_1C6BC60(0, method);
  MissionNotifyComponent__SetState(comp, 0, v2);
}