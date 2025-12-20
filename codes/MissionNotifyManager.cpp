void MissionNotifyManager___ctor(MissionNotifyManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *v4; // x20
  System_Collections_Generic_List_object__o *v5; // x20
  System_Collections_Generic_List_int__o *v6; // x20
  System_Collections_Generic_HashSet_T__o *v7; // x20

  if ( (byte_4D26520 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__);
    sub_1C94098(&System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_MissionNotifyComponent__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_MissionNotifyManager___ctor__);
    byte_4D26520 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v3;
  sub_1C9403C(&this->fields, v3);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mNoDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v4;
  sub_1C9403C(&this->fields.mNoDispInfos, v4);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_MissionNotifyComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__);
  this->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v5;
  sub_1C9403C(&this->fields.mMissionNotifyComps, v5);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.assetLoadedEventIdList = v6;
  sub_1C9403C(&this->fields.assetLoadedEventIdList, v6);
  v7 = (System_Collections_Generic_HashSet_T__o *)sub_1C942E4(System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v7,
    (const MethodInfo_371A508 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__);
  this->fields.noDisplayMissionCondTypeHashSet = (struct System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)v7;
  sub_1C9403C(&this->fields.noDisplayMissionCondTypeHashSet, v7);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_3ABAB5C *)Method_SingletonTemplate_MissionNotifyManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void MissionNotifyManager__AddNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *noDisplayMissionCondTypeHashSet; // x0

  if ( (byte_4D26510 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__);
    byte_4D26510 = 1;
  }
  noDisplayMissionCondTypeHashSet = (System_Collections_Generic_HashSet_T__o *)this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_1C942F0(0, *(_QWORD *)&missionCondType);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_371B70C *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__);
}


void MissionNotifyManager__CancelPause(MissionNotifyManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  __int64 v4; // x1
  NoticeNumberComponent_o *v5; // x0

  if ( (byte_4D2650F & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2650F = 1;
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
      sub_1C942F0(0, v4);
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
  if ( (byte_4D26514 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Clear__);
    this = (MissionNotifyManager_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26514 = 1;
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
    sub_1C942F0(this, method);
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

  if ( (byte_4D26513 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26513 = 1;
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
      sub_1C942F0(0, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mNoticeNumberComp, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72110972(gameObject, 0);
    *p_mNoticeNumberComp = 0;
    sub_1C9403C(p_mNoticeNumberComp, 0);
  }
}


void MissionNotifyManager__DestroyAllMissionNotifyComponentObject(
        MissionNotifyManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mMissionNotifyComps; // x0
  int32_t v4; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_4D2651D & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Item__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2651D = 1;
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
                                                                           (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_MissionNotifyComponent__get_Item__);
      if ( !mMissionNotifyComps )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)mMissionNotifyComps,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972(gameObject, 0);
      mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mMissionNotifyComps;
      if ( !mMissionNotifyComps )
        break;
      System_Collections_Generic_List_object___RemoveAt(
        mMissionNotifyComps,
        v4,
        (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__ReleaseNotification(0);
      if ( --v4 < 0 )
        return;
      mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mMissionNotifyComps;
    }
    while ( mMissionNotifyComps );
LABEL_13:
    sub_1C942F0(mMissionNotifyComps, method);
  }
}


void MissionNotifyManager__DragStartCallback(MissionNotifyManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  __int64 v4; // x1
  NoticeNumberComponent_o *v5; // x0

  if ( (byte_4D2651A & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2651A = 1;
  }
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0, 0) )
  {
    v5 = this->fields.mNoticeNumberComp;
    if ( !v5 )
      sub_1C942F0(0, v4);
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
  Il2CppObject *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x1
  const MethodInfo *v8; // x1
  MissionNotifyComponent_o *klass; // x0
  MissionNotifyComponent_o *v10; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D2651F & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_MissionNotifyManager___c__DisplayClass34_0__FrameOut_b__0__);
    sub_1C94098(&MissionNotifyManager___c__DisplayClass34_0_TypeInfo);
    byte_4D2651F = 1;
  }
  memset(&v17, 0, sizeof(v17));
  mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    mMissionNotifyComps,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__) )
  {
    v4 = (Il2CppObject *)sub_1C942E4(MissionNotifyManager___c__DisplayClass34_0_TypeInfo);
    System_Object___ctor(v4, 0);
    if ( !v4 )
      sub_1C942F0(v5, v6);
    current = v17.fields._current;
    v4[1].klass = (Il2CppClass *)v17.fields._current;
    sub_1C9403C(&v4[1], current);
    klass = (MissionNotifyComponent_o *)v4[1].klass;
    if ( !klass )
      sub_1C942F0(0, v8);
    if ( MissionNotifyComponent__IsBusy(klass, v8) )
    {
      v10 = (MissionNotifyComponent_o *)v4[1].klass;
      v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v11, v4, Method_MissionNotifyManager___c__DisplayClass34_0__FrameOut_b__0__, 0);
      if ( !v10 )
        sub_1C942F0(v12, v13);
      MissionNotifyComponent__FrameInOut(v10, 0, v11, 0, v14);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
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
    sub_1C942F0(mMissionNotifyComps, method);
  }
}


void MissionNotifyManager__FrameOutEndCallback(
        MissionNotifyManager_o *this,
        MissionNotifyComponent_o *comp,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4D2651B & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2651B = 1;
  }
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_12;
  if ( mMissionNotifyComps->fields._size < 1 )
    return;
  mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)System_Collections_Generic_List_object___Remove(
                                                                                              (System_Collections_Generic_List_object__o *)mMissionNotifyComps,
                                                                                              (Il2CppObject *)comp,
                                                                                              (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__);
  if ( !comp )
LABEL_12:
    sub_1C942F0(mMissionNotifyComps, comp);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)comp, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72110972(gameObject, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseNotification(0);
}


int32_t MissionNotifyManager__GetDispInfoCount(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *v2; // x19
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8

  v2 = this;
  if ( (byte_4D26512 & 1) == 0 )
  {
    this = (MissionNotifyManager_o *)sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__);
    byte_4D26512 = 1;
  }
  mDispInfos = v2->fields.mDispInfos;
  if ( !mDispInfos )
    sub_1C942F0(this, method);
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

  if ( (byte_4D2651C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
    byte_4D2651C = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( this->fields.mPauseCount > 0 )
    return 1;
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_1C942F0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)mMissionNotifyComps,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    if ( !v6 )
      break;
    if ( !v8.fields._current )
      sub_1C942F0(0, v5);
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
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  return v6 && v7 == 5;
}


bool MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *missionNotifyDispInfo,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( !missionNotifyDispInfo )
    sub_1C942F0(this, 0);
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

  if ( (byte_4D2650E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
    byte_4D2650E = 1;
  }
  memset(&v9, 0, sizeof(v9));
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    sub_1C942F0(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)mMissionNotifyComps,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    v6 = v4;
    if ( !v4 )
      break;
    if ( !v9.fields._current )
      sub_1C942F0(v4, v5);
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
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
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

  if ( (byte_4D26516 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_CompleteMissionMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C94098(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__isEntityExistsFromId__);
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D26516 = 1;
  }
  entity = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !disp_info || !Instance )
    goto LABEL_28;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          disp_info->fields.eventMissionId,
          (const MethodInfo_345B50C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
    goto LABEL_21;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_CompleteMissionMaster___);
  Instance = sub_1C94140(long___TypeInfo, 1);
  if ( !entity )
    goto LABEL_28;
  monitor_high = Instance;
  if ( !Instance )
    goto LABEL_28;
  if ( !*(_DWORD *)(Instance + 24) )
    sub_1C942F8(Instance);
  *(_QWORD *)(Instance + 32) = SHIDWORD(entity[1].monitor);
  if ( !MasterData_object )
    goto LABEL_28;
  Instance = DataMasterBase_object__object__int___isEntityExistsFromId(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               (System_Int64_array *)Instance,
               (const MethodInfo_345AA9C *)Method_DataMasterBase_CompleteMissionMaster__CompleteMissionEntity__int__isEntityExistsFromId__);
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
               (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1C942F0(Instance, monitor_high);
  }
  v12 = *(int *)(Instance + 24);
  if ( (unsigned int)v12 >= *(_DWORD *)(v10 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Instance,
      monitor_high,
      *(const MethodInfo_384DE10 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
  AtlasManager__LoadEventUI_41357316(v13, finishCallback, 1, 0);
}


void MissionNotifyManager__LoadNotificationEnd(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *mDispInfos; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  const MethodInfo *v12; // x1
  NoticeNumberComponent_o *v13; // x20

  if ( (byte_4D26517 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26517 = 1;
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
  v8 = Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__;
  ++mDispInfos->fields._version;
  if ( !items )
    goto LABEL_18;
  size = mDispInfos->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      mDispInfos,
      (Il2CppObject *)disp_info,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    mDispInfos->fields._size = size + 1;
    v10[4] = (Il2CppClass *)disp_info;
    sub_1C9403C(v10 + 4, disp_info);
  }
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0, 0) )
  {
    v13 = this->fields.mNoticeNumberComp;
    mDispInfos = (System_Collections_Generic_List_object__o *)MissionNotifyManager__GetDispInfoCount(this, v12);
    if ( !v13
      || (NoticeNumberComponent__SetNumber(v13, (int32_t)mDispInfos, 0),
          (mDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mNoticeNumberComp) == 0) )
    {
LABEL_18:
      sub_1C942F0(mDispInfos, v5);
    }
    NoticeNumberComponent__SetDispForce((NoticeNumberComponent_o *)mDispInfos, this->fields.mPauseCount < 1, 0);
  }
  MissionNotifyManager__StartDisp(this, v12);
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

  if ( (byte_4D2651E & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_4D2651E = 1;
  }
  memset(&v8, 0, sizeof(v8));
  assetLoadedEventIdList = this->fields.assetLoadedEventIdList;
  if ( !assetLoadedEventIdList )
    goto LABEL_11;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    assetLoadedEventIdList,
    (const MethodInfo_384E8E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v8 = v7;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v8,
            (const MethodInfo_35E83A8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v8.fields._current;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseEventUI_41357488(current, 0);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v8,
    (const MethodInfo_35E83A4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v5 = this->fields.assetLoadedEventIdList;
  if ( !v5 )
LABEL_11:
    sub_1C942F0(assetLoadedEventIdList, method);
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

  if ( (byte_4D26511 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__);
    byte_4D26511 = 1;
  }
  noDisplayMissionCondTypeHashSet = (System_Collections_Generic_HashSet_T__o *)this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_1C942F0(0, *(_QWORD *)&missionCondType);
  System_Collections_Generic_HashSet_Int32Enum___Remove(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_371ADD0 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__);
  MissionNotifyManager__TryMoveNoDisplayToDisplay(this, v6);
}


void MissionNotifyManager__RequestDisp(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x19

  if ( (byte_4D26515 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__0__);
    sub_1C94098(&MissionNotifyManager___c__DisplayClass22_0_TypeInfo);
    byte_4D26515 = 1;
  }
  v5 = (Il2CppObject *)sub_1C942E4(MissionNotifyManager___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  v5[1].klass = (Il2CppClass *)this;
  sub_1C9403C(&v5[1], this);
  v5[1].monitor = disp_info;
  sub_1C9403C(&v5[1].monitor, disp_info);
  v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v8, v5, Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadNotification(v8, 0);
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
  Il2CppObject *noticeNumberPrefab; // x22
  Il2CppObject *v19; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x24
  UnityEngine_GameObject_o *v22; // x23
  int v23; // w24
  int v24; // w8
  void *v25; // x23
  unsigned int v26; // w25
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x8
  NoticeNumberComponent_o *v31; // x20
  const MethodInfo *v32; // x1
  UnityEngine_Vector2_o v34; // 0:s0.4,4:s1.4

  if ( (byte_4D26518 & 1) == 0 )
  {
    sub_1C94098(&System_Action_MissionNotifyComponent__TypeInfo);
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&System_Func_MissionNotifyComponent__TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyComponent__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
    sub_1C94098(&Method_MissionNotifyManager_DragStartCallback__);
    sub_1C94098(&Method_MissionNotifyManager_FrameOutEndCallback__);
    sub_1C94098(&Method_MissionNotifyManager_FrameOutStartCallback__);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D26518 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
    if ( !MissionNotify )
      goto LABEL_45;
    v12 = (MissionNotifyDispInfo_o *)Instance;
    Component_object = (MissionNotifyComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     MissionNotify,
                                                     (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___);
    v13 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_MissionNotifyManager_DragStartCallback__, 0);
    v14 = (System_Func_object__o *)sub_1C942E4(System_Func_MissionNotifyComponent__TypeInfo);
    System_Func_object____ctor(v14, (Il2CppObject *)this, Method_MissionNotifyManager_FrameOutStartCallback__, 0);
    v15 = (System_Action_object__o *)sub_1C942E4(System_Action_MissionNotifyComponent__TypeInfo);
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
      v19 = UnityEngine_Object__Instantiate_object_(
              noticeNumberPrefab,
              (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
      Instance = GameObjectExtensions__GetParent(gameObject, 0);
      if ( !Instance )
        goto LABEL_45;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !v19 )
        goto LABEL_45;
      v21 = (UnityEngine_GameObject_o *)Instance;
      v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0);
      GameObjectExtensions__SafeSetParent_36804604(v22, v21, 0);
      v34.fields.y = 275.0;
      v34.fields.x = 270.0;
      GameObjectExtensions__SetLocalPosition_36798708(v22, v34, 0);
      GameObjectExtensions__SetLocalScale_36800820(v22, 0.75, 0);
      if ( !v21 )
        goto LABEL_45;
      Instance = UnityEngine_GameObject__GetComponentInChildren_object_(
                   v21,
                   (const MethodInfo_31F49F4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_45;
      if ( !v22 )
        goto LABEL_45;
      v23 = *((_DWORD *)Instance + 44);
      Instance = UnityEngine_GameObject__GetComponentsInChildren_object__52384692(
                   v22,
                   (const MethodInfo_31F53B4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_45;
      v24 = *((_DWORD *)Instance + 6);
      v25 = Instance;
      if ( v24 >= 1 )
      {
        v26 = 0;
        while ( 1 )
        {
          if ( v26 >= v24 )
            sub_1C942F8(Instance);
          Instance = (void *)*((_QWORD *)v25 + (int)v26 + 4);
          if ( !Instance )
            break;
          UIWidget__set_depth((UIWidget_o *)Instance, *((_DWORD *)Instance + 44) + v23, 0);
          v24 = *((_DWORD *)v25 + 6);
          if ( (int)++v26 >= v24 )
            goto LABEL_35;
        }
LABEL_45:
        sub_1C942F0(Instance, v5);
      }
LABEL_35:
      *p_mNoticeNumberComp = (struct NoticeNumberComponent_o *)v19;
      sub_1C9403C(&this->fields.mNoticeNumberComp, v19);
    }
    Instance = this->fields.mMissionNotifyComps;
    if ( !Instance )
      goto LABEL_45;
    v27 = *((_QWORD *)Instance + 2);
    v28 = Method_System_Collections_Generic_List_MissionNotifyComponent__Add__;
    ++*((_DWORD *)Instance + 7);
    if ( !v27 )
      goto LABEL_45;
    v29 = *((int *)Instance + 6);
    if ( (unsigned int)v29 >= *(_DWORD *)(v27 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)Component_object,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = v27 + 8 * v29;
      *((_DWORD *)Instance + 6) = v29 + 1;
      *(_QWORD *)(v30 + 32) = Component_object;
      sub_1C9403C(v30 + 32, Component_object);
    }
    Instance = this->fields.mDispInfos;
    if ( !Instance )
      goto LABEL_45;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Instance,
      0,
      (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    v31 = this->fields.mNoticeNumberComp;
    Instance = (void *)MissionNotifyManager__GetDispInfoCount(this, v32);
    if ( !v31 )
      goto LABEL_45;
    NoticeNumberComponent__SetNumber(v31, (int32_t)Instance, 0);
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
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 v9; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4D26519 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
    byte_4D26519 = 1;
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
               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
      if ( MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(this, (MissionNotifyDispInfo_o *)Item, v6) )
      {
        mNoDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mDispInfos;
        if ( !mNoDispInfos )
          break;
        items = mNoDispInfos->fields._items;
        v8 = Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__;
        ++mNoDispInfos->fields._version;
        if ( !items )
          break;
        v9 = mNoDispInfos->fields._size;
        if ( (unsigned int)v9 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mNoDispInfos,
            Item,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
        }
        else
        {
          v10 = &items->obj.klass + v9;
          mNoDispInfos->fields._size = v9 + 1;
          v10[4] = (Il2CppClass *)Item;
          sub_1C9403C(v10 + 4, Item);
        }
        mNoDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mNoDispInfos;
        if ( !mNoDispInfos )
          break;
        System_Collections_Generic_List_object___RemoveAt(
          mNoDispInfos,
          size - 1,
          (const MethodInfo_386C608 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
      }
      if ( size < 2 )
        return;
      mNoDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mNoDispInfos;
      --size;
    }
    while ( mNoDispInfos );
LABEL_15:
    sub_1C942F0(mNoDispInfos, method);
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
  Il2CppObject *v3; // x19
  System_Action_o *klass; // x22
  MissionNotifyManager_o *v5; // x20
  MissionNotifyDispInfo_o *monitor; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4D26521 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    this = (MissionNotifyManager___c__DisplayClass22_0_o *)sub_1C94098(&Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__1__);
    byte_4D26521 = 1;
  }
  klass = (System_Action_o *)v3[2].klass;
  v5 = (MissionNotifyManager_o *)v3[1].klass;
  monitor = (MissionNotifyDispInfo_o *)v3[1].monitor;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(klass, v3, Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__1__, 0);
    v3[2].klass = (Il2CppClass *)klass;
    this = (MissionNotifyManager___c__DisplayClass22_0_o *)sub_1C9403C(&v3[2], klass);
  }
  if ( !v5 )
    sub_1C942F0(this, method);
  MissionNotifyManager__LoadEventAsset(v5, monitor, klass, v2);
}


void MissionNotifyManager___c__DisplayClass22_0___RequestDisp_b__1(
        MissionNotifyManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C942F0(this, method);
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
    sub_1C942F0(0, method);
  MissionNotifyComponent__SetState(comp, 0, v2);
}