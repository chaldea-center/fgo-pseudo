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
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_int__o *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_HashSet_T__o *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4B48723 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__,
      method);
    sub_1BDB878(&System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1BDB878(&System_Collections_Generic_List_MissionNotifyComponent__TypeInfo, v8);
    sub_1BDB878(&System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo, v9);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager___ctor__, v10);
    byte_4B48723 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v11;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mNoDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v14;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.mNoDispInfos, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_MissionNotifyComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__);
  this->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v17;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.mMissionNotifyComps, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.assetLoadedEventIdList = v20;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.assetLoadedEventIdList, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_HashSet_T__o *)sub_1BDBAC4(System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v23,
    (const MethodInfo_358DB24 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__);
  this->fields.noDisplayMissionCondTypeHashSet = (struct System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)v23;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.noDisplayMissionCondTypeHashSet, (int32_t)v23, v24, v25);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_39167A0 *)Method_SingletonTemplate_MissionNotifyManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyManager__AddNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *noDisplayMissionCondTypeHashSet; // x0

  if ( (byte_4B48713 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__,
      *(_QWORD *)&missionCondType);
    byte_4B48713 = 1;
  }
  noDisplayMissionCondTypeHashSet = (System_Collections_Generic_HashSet_T__o *)this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_1BDBAD4(0LL, *(_QWORD *)&missionCondType);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_358ED28 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__);
}


void __fastcall MissionNotifyManager__CancelPause(MissionNotifyManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  __int64 v4; // x1
  NoticeNumberComponent_o *v5; // x0

  if ( (byte_4B48712 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48712 = 1;
  }
  this->fields.mPauseCount = 0;
  MissionNotifyManager__StartDisp(this, method);
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v5 = this->fields.mNoticeNumberComp;
    if ( !v5 )
      sub_1BDBAD4(0LL, v4);
    NoticeNumberComponent__SetDisp(v5, 1, 0LL);
  }
}


void __fastcall MissionNotifyManager__ClearRequest(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8
  int32_t size; // w2
  int v6; // w9
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  const MethodInfo *v8; // x1
  NoticeNumberComponent_o *v9; // x20

  v2 = this;
  if ( (byte_4B48717 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Clear__, method);
    this = (MissionNotifyManager_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    byte_4B48717 = 1;
  }
  mDispInfos = v2->fields.mDispInfos;
  if ( !mDispInfos )
    goto LABEL_12;
  size = mDispInfos->fields._size;
  v6 = mDispInfos->fields._version + 1;
  mDispInfos->fields._size = 0;
  mDispInfos->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mDispInfos->fields._items, 0, size, 0LL);
  mNoticeNumberComp = (UnityEngine_Object_o *)v2->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v9 = v2->fields.mNoticeNumberComp;
    this = (MissionNotifyManager_o *)MissionNotifyManager__GetDispInfoCount(v2, v8);
    if ( v9 )
    {
      NoticeNumberComponent__SetNumber(v9, (int32_t)this, 0LL);
      goto LABEL_11;
    }
LABEL_12:
    sub_1BDBAD4(this, method);
  }
LABEL_11:
  MissionNotifyManager__ReleaseEventAsset(v2, v8);
}


void __fastcall MissionNotifyManager__Destroy(MissionNotifyManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Component_o **p_mNoticeNumberComp; // x19
  UnityEngine_Object_o *v5; // x20
  struct NoticeNumberComponent_o *mNoticeNumberComp; // t1
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B48716 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48716 = 1;
  }
  MissionNotifyManager__ClearRequest(this, method);
  MissionNotifyManager__DestroyAllMissionNotifyComponentObject(this, v3);
  mNoticeNumberComp = this->fields.mNoticeNumberComp;
  p_mNoticeNumberComp = (UnityEngine_Component_o **)&this->fields.mNoticeNumberComp;
  v5 = (UnityEngine_Object_o *)mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    if ( !*p_mNoticeNumberComp )
      sub_1BDBAD4(0LL, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mNoticeNumberComp, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
    *p_mNoticeNumberComp = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)p_mNoticeNumberComp, 0, v9, v10);
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
  System_Collections_Generic_List_object__o *mMissionNotifyComps; // x0
  int32_t v8; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4B48720 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Item__, v5);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    byte_4B48720 = 1;
  }
  mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_13;
  v8 = mMissionNotifyComps->fields._size - 1;
  if ( v8 >= 0 )
  {
    do
    {
      mMissionNotifyComps = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                           mMissionNotifyComps,
                                                                           v8,
                                                                           (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_MissionNotifyComponent__get_Item__);
      if ( !mMissionNotifyComps )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)mMissionNotifyComps,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
      mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mMissionNotifyComps;
      if ( !mMissionNotifyComps )
        break;
      System_Collections_Generic_List_object___RemoveAt(
        mMissionNotifyComps,
        v8,
        (const MethodInfo_36D7598 *)Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__ReleaseNotification(0LL);
      if ( --v8 < 0 )
        return;
      mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mMissionNotifyComps;
    }
    while ( mMissionNotifyComps );
LABEL_13:
    sub_1BDBAD4(mMissionNotifyComps, method);
  }
}


void __fastcall MissionNotifyManager__DragStartCallback(MissionNotifyManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  __int64 v4; // x1
  NoticeNumberComponent_o *v5; // x0

  if ( (byte_4B4871D & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B4871D = 1;
  }
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v5 = this->fields.mNoticeNumberComp;
    if ( !v5 )
      sub_1BDBAD4(0LL, v4);
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


void __fastcall MissionNotifyManager__FrameOut(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *mMissionNotifyComps; // x0
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t current; // w1
  const MethodInfo *v17; // x1
  MissionNotifyComponent_o *v18; // x0
  MissionNotifyComponent_o *v19; // x21
  System_Action_o *v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x4
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B48722 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__, v6);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    sub_1BDB878(&Method_MissionNotifyManager___c__DisplayClass34_0__FrameOut_b__0__, v8);
    sub_1BDB878(&MissionNotifyManager___c__DisplayClass34_0_TypeInfo, v9);
    byte_4B48722 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    mMissionNotifyComps,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__) )
  {
    v11 = sub_1BDBAC4(MissionNotifyManager___c__DisplayClass34_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0LL);
    if ( !v11 )
      sub_1BDBAD4(v12, v13);
    current = (int32_t)v26.fields._current;
    *(_QWORD *)(v11 + 16) = v26.fields._current;
    sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 16), current, v14, v15);
    v18 = *(MissionNotifyComponent_o **)(v11 + 16);
    if ( !v18 )
      sub_1BDBAD4(0LL, v17);
    if ( MissionNotifyComponent__IsBusy(v18, v17) )
    {
      v19 = *(MissionNotifyComponent_o **)(v11 + 16);
      v20 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        v20,
        (Il2CppObject *)v11,
        Method_MissionNotifyManager___c__DisplayClass34_0__FrameOut_b__0__,
        0LL);
      if ( !v19 )
        sub_1BDBAD4(v21, v22);
      MissionNotifyComponent__FrameInOut(v19, 0, v20, 0, v23);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mNoticeNumberComp;
    if ( mMissionNotifyComps )
    {
      NoticeNumberComponent__SetDispForce((NoticeNumberComponent_o *)mMissionNotifyComps, 0, 0LL);
      return;
    }
LABEL_20:
    sub_1BDBAD4(mMissionNotifyComps, method);
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

  if ( (byte_4B4871E & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, comp);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__, v6);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    byte_4B4871E = 1;
  }
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_12;
  if ( mMissionNotifyComps->fields._size < 1 )
    return;
  mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)System_Collections_Generic_List_object___Remove(
                                                                                              (System_Collections_Generic_List_object__o *)mMissionNotifyComps,
                                                                                              (Il2CppObject *)comp,
                                                                                              (const MethodInfo_36D72EC *)Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__);
  if ( !comp )
LABEL_12:
    sub_1BDBAD4(mMissionNotifyComps, comp);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)comp, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0LL);
}


int32_t __fastcall MissionNotifyManager__GetDispInfoCount(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *v2; // x19
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8

  v2 = this;
  if ( (byte_4B48715 & 1) == 0 )
  {
    this = (MissionNotifyManager_o *)sub_1BDB878(
                                       &Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__,
                                       method);
    byte_4B48715 = 1;
  }
  mDispInfos = v2->fields.mDispInfos;
  if ( !mDispInfos )
    sub_1BDBAD4(this, method);
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
  bool v9; // w19
  int v10; // w20
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B4871F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__, v5);
    byte_4B4871F = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( this->fields.mPauseCount > 0 )
    return 1;
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_1BDBAD4(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)mMissionNotifyComps,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    if ( !v9 )
      break;
    if ( !v11.fields._current )
      sub_1BDBAD4(0LL, v8);
    if ( MissionNotifyComponent__IsBusy((MissionNotifyComponent_o *)v11.fields._current, v8) )
    {
      v10 = 5;
      goto LABEL_12;
    }
  }
  v10 = 6;
LABEL_12:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  return v9 && v10 == 5;
}


bool __fastcall MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *missionNotifyDispInfo,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( !missionNotifyDispInfo )
    sub_1BDBAD4(this, 0LL);
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
  bool v9; // w19
  int v10; // w20
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B48711 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__, v5);
    byte_4B48711 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_1BDBAD4(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)mMissionNotifyComps,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    v9 = v7;
    if ( !v7 )
      break;
    if ( !v12.fields._current )
      sub_1BDBAD4(v7, v8);
    if ( LOBYTE(v12.fields._current[12].klass) )
    {
      v10 = 4;
      goto LABEL_10;
    }
  }
  v10 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  return v9 && v10 == 4;
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
  __int64 v14; // x1
  __int64 Instance; // x0
  __int64 monitor_high; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v18; // x2
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  int32_t v22; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B48719 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, disp_info);
    sub_1BDB878(&Method_DataManager_GetMasterData_CompleteMissionMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_1BDB878(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v9);
    sub_1BDB878(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__isEntityExistsFromId__, v10);
    sub_1BDB878(&long___TypeInfo, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Contains__, v13);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B48719 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !disp_info || !Instance )
    goto LABEL_28;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          disp_info->fields.eventMissionId,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
    goto LABEL_21;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  Instance = sub_1BDB920(long___TypeInfo, 1LL);
  if ( !entity )
    goto LABEL_28;
  monitor_high = Instance;
  if ( !Instance )
    goto LABEL_28;
  if ( !*(_DWORD *)(Instance + 24) )
    sub_1BDBADC(Instance, Instance, v18);
  *(_QWORD *)(Instance + 32) = SHIDWORD(entity[1].monitor);
  if ( !MasterData_object )
    goto LABEL_28;
  Instance = DataMasterBase_object__object__int___isEntityExistsFromId(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (System_Int64_array *)Instance,
               (const MethodInfo_32E1418 *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__isEntityExistsFromId__);
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
               (const MethodInfo_36B9118 *)Method_System_Collections_Generic_List_int__Contains__);
  if ( (Instance & 1) != 0 )
    goto LABEL_23;
  if ( !entity
    || (Instance = (__int64)this->fields.assetLoadedEventIdList) == 0
    || (monitor_high = HIDWORD(entity[1].monitor),
        v19 = *(_QWORD *)(Instance + 16),
        v20 = Method_System_Collections_Generic_List_int__Add__,
        ++*(_DWORD *)(Instance + 28),
        !v19) )
  {
LABEL_28:
    sub_1BDBAD4(Instance, monitor_high);
  }
  v21 = *(int *)(Instance + 24);
  if ( (unsigned int)v21 >= *(_DWORD *)(v19 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Instance,
      monitor_high,
      *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    *(_DWORD *)(Instance + 24) = v21 + 1;
    *(_DWORD *)(v19 + 4 * v21 + 32) = monitor_high;
  }
LABEL_23:
  if ( !entity )
    goto LABEL_28;
  v22 = HIDWORD(entity[1].monitor);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_39625948(v22, finishCallback, 1, 0LL);
}


void __fastcall MissionNotifyManager__LoadNotificationEnd(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *mDispInfos; // x0
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x8
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  const MethodInfo *v15; // x1
  NoticeNumberComponent_o *v16; // x20

  if ( (byte_4B4871A & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__, disp_info);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    byte_4B4871A = 1;
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
  v11 = Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__;
  ++mDispInfos->fields._version;
  if ( !items )
    goto LABEL_18;
  size = mDispInfos->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      mDispInfos,
      (Il2CppObject *)disp_info,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    mDispInfos->fields._size = size + 1;
    v13[4] = (Il2CppClass *)disp_info;
    sub_1BDB81C((CGThumbnailListItem_o *)(v13 + 4), (int32_t)disp_info, v7, v8);
  }
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    v16 = this->fields.mNoticeNumberComp;
    mDispInfos = (System_Collections_Generic_List_object__o *)MissionNotifyManager__GetDispInfoCount(this, v15);
    if ( !v16
      || (NoticeNumberComponent__SetNumber(v16, (int32_t)mDispInfos, 0LL),
          (mDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mNoticeNumberComp) == 0LL) )
    {
LABEL_18:
      sub_1BDBAD4(mDispInfos, v6);
    }
    NoticeNumberComponent__SetDispForce((NoticeNumberComponent_o *)mDispInfos, this->fields.mPauseCount < 1, 0LL);
  }
  MissionNotifyManager__StartDisp(this, v15);
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
  struct System_Collections_Generic_List_int__o *v10; // x8
  int v11; // w9
  System_Collections_Generic_List_Enumerator_int__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B48721 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Clear__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__GetEnumerator__, v7);
    byte_4B48721 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  assetLoadedEventIdList = this->fields.assetLoadedEventIdList;
  if ( !assetLoadedEventIdList )
    goto LABEL_11;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    assetLoadedEventIdList,
    (const MethodInfo_36B9874 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v13 = v12;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v13,
            (const MethodInfo_34661D8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v13.fields._current;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseEventUI_39626112(current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v13,
    (const MethodInfo_34661D4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v10 = this->fields.assetLoadedEventIdList;
  if ( !v10 )
LABEL_11:
    sub_1BDBAD4(assetLoadedEventIdList, method);
  v11 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v11;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNotifyManager__RemoveNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *noDisplayMissionCondTypeHashSet; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B48714 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__,
      *(_QWORD *)&missionCondType);
    byte_4B48714 = 1;
  }
  noDisplayMissionCondTypeHashSet = (System_Collections_Generic_HashSet_T__o *)this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_1BDBAD4(0LL, *(_QWORD *)&missionCondType);
  System_Collections_Generic_HashSet_Int32Enum___Remove(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_358E3EC *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Action_o *v15; // x19

  if ( (byte_4B48718 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, disp_info);
    sub_1BDB878(&AtlasManager_TypeInfo, v5);
    sub_1BDB878(&Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__0__, v6);
    sub_1BDB878(&MissionNotifyManager___c__DisplayClass22_0_TypeInfo, v7);
    byte_4B48718 = 1;
  }
  v8 = sub_1BDBAC4(MissionNotifyManager___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BDBAD4(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = disp_info;
  sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 24), (int32_t)disp_info, v13, v14);
  v15 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v8,
    Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v15, 0LL);
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
  struct NoticeNumberComponent_o **p_mNoticeNumberComp; // x20
  UnityEngine_Object_o *mNoticeNumberComp; // x21
  const MethodInfo *v19; // x1
  void *Instance; // x0
  const MethodInfo *v21; // x1
  MissionNotifyComponent_o *Component_object; // x21
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  UnityEngine_GameObject_o *MissionNotify; // x23
  MissionNotifyDispInfo_o *v26; // x22
  System_Action_o *v27; // x23
  System_Func_object__o *v28; // x24
  System_Action_object__o *v29; // x25
  const MethodInfo *v30; // x5
  UnityEngine_Object_o *v31; // x22
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *noticeNumberPrefab; // x22
  Il2CppObject *v35; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v37; // x24
  UnityEngine_GameObject_o *v38; // x23
  int v39; // w24
  __int64 v40; // x2
  const MethodInfo *v41; // x3
  int v42; // w8
  void *v43; // x23
  unsigned int v44; // w25
  __int64 v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  __int64 v48; // x8
  NoticeNumberComponent_o *v49; // x20
  const MethodInfo *v50; // x1
  UnityEngine_Vector2_o v52; // 0:s0.4,4:s1.4

  if ( (byte_4B4871B & 1) == 0 )
  {
    sub_1BDB878(&System_Action_MissionNotifyComponent__TypeInfo, method);
    sub_1BDB878(&System_Action_TypeInfo, v3);
    sub_1BDB878(&System_Func_MissionNotifyComponent__TypeInfo, v4);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___, v5);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___, v6);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNotifyComponent__Add__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__, v10);
    sub_1BDB878(&Method_MissionNotifyManager_DragStartCallback__, v11);
    sub_1BDB878(&Method_MissionNotifyManager_FrameOutEndCallback__, v12);
    sub_1BDB878(&Method_MissionNotifyManager_FrameOutStartCallback__, v13);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___, v14);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v15);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    byte_4B4871B = 1;
  }
  p_mNoticeNumberComp = &this->fields.mNoticeNumberComp;
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0LL, 0LL) )
  {
    Instance = *p_mNoticeNumberComp;
    if ( !*p_mNoticeNumberComp )
      goto LABEL_45;
    NoticeNumberComponent__SetDisp((NoticeNumberComponent_o *)Instance, this->fields.mPauseCount < 1, 0LL);
  }
  if ( MissionNotifyManager__IsBusy(this, v19) )
    return 0LL;
  if ( MissionNotifyManager__GetDispInfoCount(this, v21) <= 0 )
  {
    MissionNotifyManager__TryMoveNoDisplayToDisplay(this, v23);
    if ( MissionNotifyManager__GetDispInfoCount(this, v24) < 1 )
      return 0LL;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MissionNotify = CommonUI__CreateMissionNotify((CommonUI_o *)Instance, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MissionNotify, 0LL, 0LL) )
  {
    Instance = this->fields.mDispInfos;
    if ( !Instance )
      goto LABEL_45;
    Instance = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 0,
                 (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
    if ( !MissionNotify )
      goto LABEL_45;
    v26 = (MissionNotifyDispInfo_o *)Instance;
    Component_object = (MissionNotifyComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     MissionNotify,
                                                     (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___);
    v27 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_MissionNotifyManager_DragStartCallback__, 0LL);
    v28 = (System_Func_object__o *)sub_1BDBAC4(System_Func_MissionNotifyComponent__TypeInfo);
    System_Func_object____ctor(v28, (Il2CppObject *)this, Method_MissionNotifyManager_FrameOutStartCallback__, 0LL);
    v29 = (System_Action_object__o *)sub_1BDBAC4(System_Action_MissionNotifyComponent__TypeInfo);
    System_Action_object____ctor(v29, (Il2CppObject *)this, Method_MissionNotifyManager_FrameOutEndCallback__, 0LL);
    if ( !Component_object )
      goto LABEL_45;
    MissionNotifyComponent__SetupAndPlay(
      Component_object,
      v26,
      v27,
      (System_Func_MissionNotifyComponent__o *)v28,
      (System_Action_MissionNotifyComponent__o *)v29,
      v30);
    v31 = (UnityEngine_Object_o *)*p_mNoticeNumberComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v31, 0LL, 0LL) )
    {
      noticeNumberPrefab = (Il2CppObject *)Component_object->fields.noticeNumberPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v35 = UnityEngine_Object__Instantiate_object_(
              noticeNumberPrefab,
              (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
      Instance = GameObjectExtensions__GetParent(gameObject, 0LL);
      if ( !Instance )
        goto LABEL_45;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !v35 )
        goto LABEL_45;
      v37 = (UnityEngine_GameObject_o *)Instance;
      v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v35, 0LL);
      GameObjectExtensions__SafeSetParent_35216896(v38, v37, 0LL);
      v52.fields.y = 275.0;
      v52.fields.x = 270.0;
      GameObjectExtensions__SetLocalPosition_35211000(v38, v52, 0LL);
      GameObjectExtensions__SetLocalScale_35213112(v38, 0.75, 0LL);
      if ( !v37 )
        goto LABEL_45;
      Instance = UnityEngine_GameObject__GetComponentInChildren_object_(
                   v37,
                   (const MethodInfo_3088784 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_45;
      if ( !v38 )
        goto LABEL_45;
      v39 = *((_DWORD *)Instance + 44);
      Instance = UnityEngine_GameObject__GetComponentsInChildren_object__50893124(
                   v38,
                   (const MethodInfo_3089144 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_45;
      v42 = *((_DWORD *)Instance + 6);
      v43 = Instance;
      if ( v42 >= 1 )
      {
        v44 = 0;
        while ( 1 )
        {
          if ( v44 >= v42 )
            sub_1BDBADC(Instance, v19, v40);
          Instance = (void *)*((_QWORD *)v43 + (int)v44 + 4);
          if ( !Instance )
            break;
          UIWidget__set_depth((UIWidget_o *)Instance, *((_DWORD *)Instance + 44) + v39, 0LL);
          v42 = *((_DWORD *)v43 + 6);
          if ( (int)++v44 >= v42 )
            goto LABEL_35;
        }
LABEL_45:
        sub_1BDBAD4(Instance, v19);
      }
LABEL_35:
      *p_mNoticeNumberComp = (struct NoticeNumberComponent_o *)v35;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.mNoticeNumberComp, (int32_t)v35, v40, v41);
    }
    Instance = this->fields.mMissionNotifyComps;
    if ( !Instance )
      goto LABEL_45;
    v45 = *((_QWORD *)Instance + 2);
    v46 = Method_System_Collections_Generic_List_MissionNotifyComponent__Add__;
    ++*((_DWORD *)Instance + 7);
    if ( !v45 )
      goto LABEL_45;
    v47 = *((int *)Instance + 6);
    if ( (unsigned int)v47 >= *(_DWORD *)(v45 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)Component_object,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    }
    else
    {
      v48 = v45 + 8 * v47;
      *((_DWORD *)Instance + 6) = v47 + 1;
      *(_QWORD *)(v48 + 32) = Component_object;
      sub_1BDB81C((CGThumbnailListItem_o *)(v48 + 32), (int32_t)Component_object, v32, v33);
    }
    Instance = this->fields.mDispInfos;
    if ( !Instance )
      goto LABEL_45;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Instance,
      0,
      (const MethodInfo_36D7598 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    v49 = this->fields.mNoticeNumberComp;
    Instance = (void *)MissionNotifyManager__GetDispInfoCount(this, v50);
    if ( !v49 )
      goto LABEL_45;
    NoticeNumberComponent__SetNumber(v49, (int32_t)Instance, 0LL);
  }
  return Component_object;
}


void __fastcall MissionNotifyManager__StartPause(MissionNotifyManager_o *this, const MethodInfo *method)
{
  ++this->fields.mPauseCount;
}


void __fastcall MissionNotifyManager__TryMoveNoDisplayToDisplay(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *mNoDispInfos; // x0
  int size; // w24
  Il2CppObject *Item; // x21
  const MethodInfo *v9; // x2
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 v14; // x10
  Il2CppClass **v15; // x8

  if ( (byte_4B4871C & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__, v5);
    byte_4B4871C = 1;
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
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
      if ( MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(this, (MissionNotifyDispInfo_o *)Item, v9) )
      {
        mNoDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mDispInfos;
        if ( !mNoDispInfos )
          break;
        items = mNoDispInfos->fields._items;
        v13 = Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__;
        ++mNoDispInfos->fields._version;
        if ( !items )
          break;
        v14 = mNoDispInfos->fields._size;
        if ( (unsigned int)v14 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mNoDispInfos,
            Item,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + v14;
          mNoDispInfos->fields._size = v14 + 1;
          v15[4] = (Il2CppClass *)Item;
          sub_1BDB81C((CGThumbnailListItem_o *)(v15 + 4), (int32_t)Item, v10, v11);
        }
        mNoDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mNoDispInfos;
        if ( !mNoDispInfos )
          break;
        System_Collections_Generic_List_object___RemoveAt(
          mNoDispInfos,
          size - 1,
          (const MethodInfo_36D7598 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
      }
      if ( size < 2 )
        return;
      mNoDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mNoDispInfos;
      --size;
    }
    while ( mNoDispInfos );
LABEL_15:
    sub_1BDBAD4(mNoDispInfos, method);
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
  const MethodInfo *v2; // x3
  MissionNotifyManager___c__DisplayClass22_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  MissionNotifyManager_o *_4__this; // x20
  MissionNotifyDispInfo_o *disp_info; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v3 = this;
  if ( (byte_4B48724 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    this = (MissionNotifyManager___c__DisplayClass22_0_o *)sub_1BDB878(
                                                             &Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__1__,
                                                             v4);
    byte_4B48724 = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  disp_info = v3->fields.disp_info;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1BDB81C((CGThumbnailListItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v8, v9);
  }
  if ( !_4__this )
    sub_1BDBAD4(this, method);
  MissionNotifyManager__LoadEventAsset(_4__this, disp_info, _9__1, v2);
}


void __fastcall MissionNotifyManager___c__DisplayClass22_0___RequestDisp_b__1(
        MissionNotifyManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BDBAD4(this, method);
  MissionNotifyManager__LoadNotificationEnd(this->fields.__4__this, this->fields.disp_info, v2);
}


void __fastcall MissionNotifyManager___c__DisplayClass34_0___ctor(
        MissionNotifyManager___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MissionNotifyManager___c__DisplayClass34_0___FrameOut_b__0(
        MissionNotifyManager___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MissionNotifyComponent_o *comp; // x0

  comp = this->fields.comp;
  if ( !comp )
    sub_1BDBAD4(0LL, method);
  MissionNotifyComponent__SetState(comp, 0, v2);
}