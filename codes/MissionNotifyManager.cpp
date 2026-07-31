void MissionNotifyManager___ctor(MissionNotifyManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_int__o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_HashSet_T__o *v31; // x20
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  if ( (byte_5931F88 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_MissionNotifyComponent__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager___ctor__);
    byte_5931F88 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_MissionNotifyDispInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo___ctor__);
  this->fields.mNoDispInfos = (struct System_Collections_Generic_List_MissionNotifyDispInfo__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mNoDispInfos,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_MissionNotifyComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MissionNotifyComponent___ctor__);
  this->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mMissionNotifyComps,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.assetLoadedEventIdList = v24;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.assetLoadedEventIdList,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_HashSet_T__o *)sub_21FFEBC(System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v31,
    (const MethodInfo_4282438 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___ctor__);
  this->fields.noDisplayMissionCondTypeHashSet = (struct System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)v31;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.noDisplayMissionCondTypeHashSet,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_476EF14 *)Method_SingletonTemplate_MissionNotifyManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void MissionNotifyManager__AddNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *noDisplayMissionCondTypeHashSet; // x0

  if ( (byte_5931F78 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__);
    byte_5931F78 = 1;
  }
  noDisplayMissionCondTypeHashSet = (System_Collections_Generic_HashSet_T__o *)this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_21FFECC(0, *(_QWORD *)&missionCondType);
  System_Collections_Generic_HashSet_Int32Enum___Add(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_4283678 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Add__);
}


void MissionNotifyManager__CancelPause(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  __int64 v6; // x1
  NoticeNumberComponent_o *v7; // x0

  if ( (byte_5931F77 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5931F77 = 1;
  }
  this->fields.mPauseCount = 0;
  MissionNotifyManager__StartDisp(this, method);
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0, 0) )
  {
    v7 = this->fields.mNoticeNumberComp;
    if ( !v7 )
      sub_21FFECC(0, v6);
    NoticeNumberComponent__SetDisp(v7, 1, 0);
  }
}


void MissionNotifyManager__ClearRequest(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *v2; // x19
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8
  __int64 size; // x2
  int v5; // w9
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  const MethodInfo *v7; // x1
  NoticeNumberComponent_o *v8; // x20

  v2 = this;
  if ( (byte_5931F7C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Clear__);
    this = (MissionNotifyManager_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5931F7C = 1;
  }
  mDispInfos = v2->fields.mDispInfos;
  if ( !mDispInfos )
    goto LABEL_12;
  size = (unsigned int)mDispInfos->fields._size;
  v5 = mDispInfos->fields._version + 1;
  mDispInfos->fields._size = 0;
  mDispInfos->fields._version = v5;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)mDispInfos->fields._items, 0, size, 0);
  mNoticeNumberComp = (UnityEngine_Object_o *)v2->fields.mNoticeNumberComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, size);
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
    sub_21FFECC(this, method);
  }
LABEL_11:
  MissionNotifyManager__ReleaseEventAsset(v2, v7);
}


void MissionNotifyManager__Destroy(MissionNotifyManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o **p_mNoticeNumberComp; // x19
  UnityEngine_Object_o *v7; // x20
  struct NoticeNumberComponent_o *mNoticeNumberComp; // t1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5931F7B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5931F7B = 1;
  }
  MissionNotifyManager__ClearRequest(this, method);
  MissionNotifyManager__DestroyAllMissionNotifyComponentObject(this, v3);
  mNoticeNumberComp = this->fields.mNoticeNumberComp;
  p_mNoticeNumberComp = (UnityEngine_Component_o **)&this->fields.mNoticeNumberComp;
  v7 = (UnityEngine_Object_o *)mNoticeNumberComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
  {
    if ( !*p_mNoticeNumberComp )
      sub_21FFECC(0, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_mNoticeNumberComp, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
    *p_mNoticeNumberComp = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_mNoticeNumberComp, 0, v13, v14, v15, v16, v17, v18);
  }
}


void MissionNotifyManager__DestroyAllMissionNotifyComponentObject(
        MissionNotifyManager_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *v2; // x19
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x8
  int32_t size; // w20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *gameObject; // x21
  __int64 v8; // x1
  __int64 v9; // x2

  v2 = this;
  if ( (byte_5931F85 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Item__);
    this = (MissionNotifyManager_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5931F85 = 1;
  }
  mMissionNotifyComps = v2->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_14;
  size = mMissionNotifyComps->fields._size;
  if ( size - 1 >= 0 )
  {
    while ( 1 )
    {
      this = (MissionNotifyManager_o *)v2->fields.mMissionNotifyComps;
      if ( !this )
        break;
      this = (MissionNotifyManager_o *)System_Collections_Generic_List_object___get_Item(
                                         (System_Collections_Generic_List_object__o *)this,
                                         --size,
                                         (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_MissionNotifyComponent__get_Item__);
      if ( !this )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
      UnityEngine_Object__Destroy_83246496(gameObject, 0);
      this = (MissionNotifyManager_o *)v2->fields.mMissionNotifyComps;
      if ( !this )
        break;
      System_Collections_Generic_List_object___RemoveAt(
        (System_Collections_Generic_List_object__o *)this,
        size,
        (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_MissionNotifyComponent__RemoveAt__);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8, v9);
      AtlasManager__ReleaseNotification(0);
      if ( size <= 0 )
        return;
    }
LABEL_14:
    sub_21FFECC(this, method);
  }
}


void MissionNotifyManager__DragStartCallback(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  __int64 v5; // x1
  NoticeNumberComponent_o *v6; // x0

  if ( (byte_5931F82 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5931F82 = 1;
  }
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0, 0) )
  {
    v6 = this->fields.mNoticeNumberComp;
    if ( !v6 )
      sub_21FFECC(0, v5);
    NoticeNumberComponent__SetDisp(v6, 0, 0);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int32_t current; // w1
  const MethodInfo *v14; // x1
  MissionNotifyComponent_o *v15; // x0
  MissionNotifyComponent_o *v16; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x4
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5931F87 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_MissionNotifyManager___c__DisplayClass34_0__FrameOut_b__0__);
    sub_21FFC50(&MissionNotifyManager___c__DisplayClass34_0_TypeInfo);
    byte_5931F87 = 1;
  }
  mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mMissionNotifyComps;
  memset(&v25, 0, sizeof(v25));
  if ( !mMissionNotifyComps )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    mMissionNotifyComps,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__) )
  {
    v4 = sub_21FFEBC(MissionNotifyManager___c__DisplayClass34_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    if ( !v4 )
      sub_21FFECC(v5, v6);
    current = (int32_t)v25.fields._current;
    *(_QWORD *)(v4 + 16) = v25.fields._current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 16), current, v7, v8, v9, v10, v11, v12);
    v15 = *(MissionNotifyComponent_o **)(v4 + 16);
    if ( !v15 )
      sub_21FFECC(0, v14);
    if ( MissionNotifyComponent__IsBusy(v15, v14) )
    {
      v16 = *(MissionNotifyComponent_o **)(v4 + 16);
      v17 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v17,
        (Il2CppObject *)v4,
        Method_MissionNotifyManager___c__DisplayClass34_0__FrameOut_b__0__,
        0);
      if ( !v16 )
        sub_21FFECC(v18, v19);
      MissionNotifyComponent__FrameInOut(v16, 0, v17, 0, v20);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0, 0) )
  {
    mMissionNotifyComps = (System_Collections_Generic_List_object__o *)this->fields.mNoticeNumberComp;
    if ( mMissionNotifyComps )
    {
      NoticeNumberComponent__SetDispForce((NoticeNumberComponent_o *)mMissionNotifyComps, 0, 0);
      return;
    }
LABEL_20:
    sub_21FFECC(mMissionNotifyComps, method);
  }
}


void MissionNotifyManager__FrameOutEndCallback(
        MissionNotifyManager_o *this,
        MissionNotifyComponent_o *comp,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *gameObject; // x19
  __int64 v9; // x1
  __int64 v10; // x2

  if ( (byte_5931F83 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyComponent__get_Count__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5931F83 = 1;
  }
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  if ( !mMissionNotifyComps )
    goto LABEL_12;
  if ( mMissionNotifyComps->fields._size < 1 )
    return;
  mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)System_Collections_Generic_List_object___Remove(
                                                                                              (System_Collections_Generic_List_object__o *)mMissionNotifyComps,
                                                                                              (Il2CppObject *)comp,
                                                                                              (const MethodInfo_445101C *)Method_System_Collections_Generic_List_MissionNotifyComponent__Remove__);
  if ( !comp )
LABEL_12:
    sub_21FFECC(mMissionNotifyComps, comp);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)comp, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v10);
  AtlasManager__ReleaseNotification(0);
}


int32_t MissionNotifyManager__GetDispInfoCount(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *v2; // x19
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8

  v2 = this;
  if ( (byte_5931F7A & 1) == 0 )
  {
    this = (MissionNotifyManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__);
    byte_5931F7A = 1;
  }
  mDispInfos = v2->fields.mDispInfos;
  if ( !mDispInfos )
    sub_21FFECC(this, method);
  return mDispInfos->fields._size;
}


void MissionNotifyManager__Init(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager__Destroy(this, method);
  this->fields.mPauseCount = 0;
}


bool MissionNotifyManager__IsBusy(MissionNotifyManager_o *this, const MethodInfo *method)
{
  int32_t mPauseCount; // w8
  bool v4; // w19
  struct System_Collections_Generic_List_MissionNotifyComponent__o *mMissionNotifyComps; // x0
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5931F84 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
    byte_5931F84 = 1;
  }
  mPauseCount = this->fields.mPauseCount;
  memset(&v8, 0, sizeof(v8));
  if ( mPauseCount <= 0 )
  {
    mMissionNotifyComps = this->fields.mMissionNotifyComps;
    if ( !mMissionNotifyComps )
      sub_21FFECC(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)mMissionNotifyComps,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
    do
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v8,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
      if ( !v4 )
        break;
      if ( !v8.fields._current )
        sub_21FFECC(0, v6);
    }
    while ( !MissionNotifyComponent__IsBusy((MissionNotifyComponent_o *)v8.fields._current, v6) );
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  }
  else
  {
    return 1;
  }
  return v4;
}


bool MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *missionNotifyDispInfo,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( !missionNotifyDispInfo )
    sub_21FFECC(this, 0);
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
  __int64 v8; // [xsp+8h] [xbp-48h]
  System_Collections_Generic_List_Enumerator_object__o *v9; // [xsp+10h] [xbp-40h]
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5931F76 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
    byte_5931F76 = 1;
  }
  mMissionNotifyComps = this->fields.mMissionNotifyComps;
  memset(&v10, 0, sizeof(v10));
  if ( !mMissionNotifyComps )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)mMissionNotifyComps,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_MissionNotifyComponent__GetEnumerator__);
  v8 = 0;
  v9 = &v10;
  do
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__MoveNext__);
    v6 = v4;
    if ( !v4 )
      break;
    if ( !v10.fields._current )
      sub_21FFECC(v4, v5);
  }
  while ( !*((_BYTE *)&v10.fields._current->klass + (unsigned __int64)off_C0) );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_MissionNotifyComponent__Dispose__);
  return v6;
}


void MissionNotifyManager__LoadEventAsset(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 monitor_high; // x1
  __int64 v9; // x2
  Il2CppObject *v10; // x8
  intptr_t m_CachedPtr; // x9
  _QWORD *v12; // x10
  __int64 m_CancellationTokenSource_low; // x11
  int32_t v14; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5931F7E & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5931F7E = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !disp_info || !Instance )
    goto LABEL_23;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &entity,
                                disp_info->fields.eventMissionId,
                                (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    goto LABEL_16;
  if ( !entity )
    goto LABEL_23;
  if ( LODWORD(entity[1].monitor) != 6 )
  {
LABEL_16:
    ActionExtensions__Call(finishCallback, 0);
    return;
  }
  Instance = (DataManager_o *)this->fields.assetLoadedEventIdList;
  if ( !Instance )
LABEL_23:
    sub_21FFECC(Instance, monitor_high);
  Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                (System_Collections_Generic_List_int__o *)Instance,
                                HIDWORD(entity[1].monitor),
                                (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
  v10 = entity;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
LABEL_18:
    if ( v10 )
      goto LABEL_19;
    goto LABEL_23;
  }
  if ( !entity )
    goto LABEL_23;
  Instance = (DataManager_o *)this->fields.assetLoadedEventIdList;
  if ( !Instance )
    goto LABEL_23;
  m_CachedPtr = Instance->fields.m_CachedPtr;
  monitor_high = HIDWORD(entity[1].monitor);
  v12 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(Instance->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_23;
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Instance,
      monitor_high,
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    v10 = entity;
    goto LABEL_18;
  }
  LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
  *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = monitor_high;
LABEL_19:
  v14 = HIDWORD(v10[1].monitor);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, monitor_high, v9);
  AtlasManager__LoadEventUI_47538036(v14, finishCallback, 1, 0);
}


void MissionNotifyManager__LoadNotificationEnd(
        MissionNotifyManager_o *this,
        MissionNotifyDispInfo_o *disp_info,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_object__o *mDispInfos; // x0
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x8
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Object_o *mNoticeNumberComp; // x20
  const MethodInfo *v20; // x1
  NoticeNumberComponent_o *v21; // x20

  if ( (byte_5931F7F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5931F7F = 1;
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
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    mDispInfos->fields._size = size + 1;
    v16[4] = (Il2CppClass *)disp_info;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 4), (int32_t)disp_info, v6, v7, v8, v9, v10, v11);
  }
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0, 0) )
  {
    v21 = this->fields.mNoticeNumberComp;
    mDispInfos = (System_Collections_Generic_List_object__o *)MissionNotifyManager__GetDispInfoCount(this, v20);
    if ( !v21
      || (NoticeNumberComponent__SetNumber(v21, (int32_t)mDispInfos, 0),
          (mDispInfos = (System_Collections_Generic_List_object__o *)this->fields.mNoticeNumberComp) == 0) )
    {
LABEL_18:
      sub_21FFECC(mDispInfos, v5);
    }
    NoticeNumberComponent__SetDispForce((NoticeNumberComponent_o *)mDispInfos, this->fields.mPauseCount < 1, 0);
  }
  MissionNotifyManager__StartDisp(this, v20);
}


void MissionNotifyManager__Reboot(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager__Destroy(this, method);
  this->fields.mPauseCount = 0;
}


void MissionNotifyManager__ReleaseEventAsset(MissionNotifyManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *assetLoadedEventIdList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t current; // w20
  struct System_Collections_Generic_List_int__o *v7; // x8
  int v8; // w9
  System_Collections_Generic_List_Enumerator_int__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5931F86 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_5931F86 = 1;
  }
  assetLoadedEventIdList = this->fields.assetLoadedEventIdList;
  memset(&v9, 0, sizeof(v9));
  if ( !assetLoadedEventIdList )
    goto LABEL_11;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    assetLoadedEventIdList,
    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v9,
            (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v9.fields._current;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4, v5);
    AtlasManager__ReleaseEventUI_47538200(current, 0);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v9,
    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v7 = this->fields.assetLoadedEventIdList;
  if ( !v7 )
LABEL_11:
    sub_21FFECC(assetLoadedEventIdList, method);
  v8 = v7->fields._version + 1;
  v7->fields._size = 0;
  v7->fields._version = v8;
}


// local variable allocation has failed, the output may be wrong!
void MissionNotifyManager__RemoveNoDisplayMissionCondType(
        MissionNotifyManager_o *this,
        int32_t missionCondType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *noDisplayMissionCondTypeHashSet; // x0
  const MethodInfo *v6; // x1

  if ( (byte_5931F79 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__);
    byte_5931F79 = 1;
  }
  noDisplayMissionCondTypeHashSet = (System_Collections_Generic_HashSet_T__o *)this->fields.noDisplayMissionCondTypeHashSet;
  if ( !noDisplayMissionCondTypeHashSet )
    sub_21FFECC(0, *(_QWORD *)&missionCondType);
  System_Collections_Generic_HashSet_Int32Enum___Remove(
    noDisplayMissionCondTypeHashSet,
    missionCondType,
    (const MethodInfo_4282D30 *)Method_System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__Remove__);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_o *v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2

  if ( (byte_5931F7D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__0__);
    sub_21FFC50(&MissionNotifyManager___c__DisplayClass22_0_TypeInfo);
    byte_5931F7D = 1;
  }
  v5 = sub_21FFEBC(MissionNotifyManager___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = disp_info;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)disp_info, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__0__,
    0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21, v22);
  AtlasManager__LoadNotification(v20, 0);
}


MissionNotifyComponent_o *MissionNotifyManager__StartDisp(MissionNotifyManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct NoticeNumberComponent_o **p_mNoticeNumberComp; // x20
  UnityEngine_Object_o *mNoticeNumberComp; // x21
  const MethodInfo *v6; // x1
  void *Instance; // x0
  const MethodInfo *v8; // x1
  MissionNotifyComponent_o *Component_object; // x21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_GameObject_o *MissionNotify; // x23
  MissionNotifyDispInfo_o *v15; // x22
  System_Action_o *v16; // x23
  System_Func_object__o *v17; // x24
  System_Action_object__o *v18; // x25
  const MethodInfo *v19; // x5
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *v22; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  Il2CppObject *noticeNumberPrefab; // x22
  Il2CppObject *v30; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v32; // x24
  UnityEngine_GameObject_o *v33; // x23
  int v34; // w24
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int v41; // w8
  void *v42; // x23
  __int64 v43; // x25
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x8
  NoticeNumberComponent_o *v48; // x20
  const MethodInfo *v49; // x1
  UnityEngine_Vector2_o v51; // 0:s0.4,4:s1.4

  if ( (byte_5931F80 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_MissionNotifyComponent__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&System_Func_MissionNotifyComponent__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyComponent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
    sub_21FFC50(&Method_MissionNotifyManager_DragStartCallback__);
    sub_21FFC50(&Method_MissionNotifyManager_FrameOutEndCallback__);
    sub_21FFC50(&Method_MissionNotifyManager_FrameOutStartCallback__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5931F80 = 1;
  }
  p_mNoticeNumberComp = &this->fields.mNoticeNumberComp;
  mNoticeNumberComp = (UnityEngine_Object_o *)this->fields.mNoticeNumberComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(mNoticeNumberComp, 0, 0) )
  {
    Instance = *p_mNoticeNumberComp;
    if ( !*p_mNoticeNumberComp )
      goto LABEL_45;
    NoticeNumberComponent__SetDisp((NoticeNumberComponent_o *)Instance, this->fields.mPauseCount < 1, 0);
  }
  if ( MissionNotifyManager__IsBusy(this, v6) )
    return 0;
  if ( MissionNotifyManager__GetDispInfoCount(this, v8) <= 0 )
  {
    MissionNotifyManager__TryMoveNoDisplayToDisplay(this, v10);
    if ( MissionNotifyManager__GetDispInfoCount(this, v11) < 1 )
      return 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  MissionNotify = CommonUI__CreateMissionNotify((CommonUI_o *)Instance, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
  Component_object = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MissionNotify, 0, 0) )
  {
    Instance = this->fields.mDispInfos;
    if ( !Instance )
      goto LABEL_45;
    Instance = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 0,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
    if ( !MissionNotify )
      goto LABEL_45;
    v15 = (MissionNotifyDispInfo_o *)Instance;
    Component_object = (MissionNotifyComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     MissionNotify,
                                                     (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MissionNotifyComponent___);
    v16 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_MissionNotifyManager_DragStartCallback__, 0);
    v17 = (System_Func_object__o *)sub_21FFEBC(System_Func_MissionNotifyComponent__TypeInfo);
    System_Func_object____ctor(v17, (Il2CppObject *)this, Method_MissionNotifyManager_FrameOutStartCallback__, 0);
    v18 = (System_Action_object__o *)sub_21FFEBC(System_Action_MissionNotifyComponent__TypeInfo);
    System_Action_object____ctor(v18, (Il2CppObject *)this, Method_MissionNotifyManager_FrameOutEndCallback__, 0);
    if ( !Component_object )
      goto LABEL_45;
    MissionNotifyComponent__SetupAndPlay(
      Component_object,
      v15,
      v16,
      (System_Func_MissionNotifyComponent__o *)v17,
      (System_Action_MissionNotifyComponent__o *)v18,
      v19);
    v22 = (UnityEngine_Object_o *)*p_mNoticeNumberComp;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
    if ( UnityEngine_Object__op_Equality(v22, 0, 0) )
    {
      noticeNumberPrefab = (Il2CppObject *)Component_object->fields.noticeNumberPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v23);
      v30 = UnityEngine_Object__Instantiate_object_(
              noticeNumberPrefab,
              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_NoticeNumberComponent___);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
      Instance = GameObjectExtensions__GetParent(gameObject, 0);
      if ( !Instance )
        goto LABEL_45;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !v30 )
        goto LABEL_45;
      v32 = (UnityEngine_GameObject_o *)Instance;
      v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0);
      GameObjectExtensions__SafeSetParent_42881912(v33, v32, 0);
      v51.fields.x = 270.0;
      v51.fields.y = 275.0;
      GameObjectExtensions__SetLocalPosition_42876016(v33, v51, 0);
      GameObjectExtensions__SetLocalScale_42878128(v33, 0.75, 0);
      if ( !v32 )
        goto LABEL_45;
      Instance = UnityEngine_GameObject__GetComponentInChildren_object_(
                   v32,
                   (const MethodInfo_3883C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_45;
      if ( !v33 )
        goto LABEL_45;
      v34 = *((_DWORD *)Instance + 44);
      Instance = UnityEngine_GameObject__GetComponentsInChildren_object__59262092(
                   v33,
                   (const MethodInfo_388448C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
      if ( !Instance )
        goto LABEL_45;
      v41 = *((_DWORD *)Instance + 6);
      v42 = Instance;
      if ( v41 >= 1 )
      {
        v43 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v43 >= v41 )
            sub_21FFED4(Instance);
          Instance = (void *)*((_QWORD *)v42 + v43 + 4);
          if ( !Instance )
            break;
          UIWidget__set_depth((UIWidget_o *)Instance, *((_DWORD *)Instance + 44) + v34, 0);
          v41 = *((_DWORD *)v42 + 6);
          if ( (int)++v43 >= v41 )
            goto LABEL_35;
        }
LABEL_45:
        sub_21FFECC(Instance, v6);
      }
LABEL_35:
      *p_mNoticeNumberComp = (struct NoticeNumberComponent_o *)v30;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mNoticeNumberComp,
        (int32_t)v30,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
    }
    Instance = this->fields.mMissionNotifyComps;
    if ( !Instance )
      goto LABEL_45;
    v44 = *((_QWORD *)Instance + 2);
    v45 = Method_System_Collections_Generic_List_MissionNotifyComponent__Add__;
    ++*((_DWORD *)Instance + 7);
    if ( !v44 )
      goto LABEL_45;
    v46 = *((int *)Instance + 6);
    if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)Instance,
        (Il2CppObject *)Component_object,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    }
    else
    {
      v47 = v44 + 8 * v46;
      *((_DWORD *)Instance + 6) = v46 + 1;
      *(_QWORD *)(v47 + 32) = Component_object;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)(v47 + 32),
        (int32_t)Component_object,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    Instance = this->fields.mDispInfos;
    if ( !Instance )
      goto LABEL_45;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Instance,
      0,
      (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    v48 = this->fields.mNoticeNumberComp;
    Instance = (void *)MissionNotifyManager__GetDispInfoCount(this, v49);
    if ( !v48 )
      goto LABEL_45;
    NoticeNumberComponent__SetNumber(v48, (int32_t)Instance, 0);
  }
  return Component_object;
}


void MissionNotifyManager__StartPause(MissionNotifyManager_o *this, const MethodInfo *method)
{
  ++this->fields.mPauseCount;
}


void MissionNotifyManager__TryMoveNoDisplayToDisplay(MissionNotifyManager_o *this, const MethodInfo *method)
{
  MissionNotifyManager_o *v2; // x19
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mNoDispInfos; // x8
  int size; // w8
  int v5; // w25
  Il2CppObject *Item; // x21
  const MethodInfo *v7; // x2
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8
  _QWORD *v15; // x9
  __int64 mNoDispInfos_low; // x10
  System_Collections_Generic_List_MissionNotifyDispInfo__c **v17; // x8

  v2 = this;
  if ( (byte_5931F81 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Count__);
    this = (MissionNotifyManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
    byte_5931F81 = 1;
  }
  mNoDispInfos = v2->fields.mNoDispInfos;
  if ( !mNoDispInfos )
    goto LABEL_17;
  size = mNoDispInfos->fields._size;
  if ( size >= 1 )
  {
    v5 = size + 1;
    while ( 1 )
    {
      this = (MissionNotifyManager_o *)v2->fields.mNoDispInfos;
      if ( !this )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v5 - 2,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__get_Item__);
      if ( MissionNotifyManager__IsMissionNotifyDisplayInfoDisplayPossible(v2, (MissionNotifyDispInfo_o *)Item, v7) )
      {
        this = (MissionNotifyManager_o *)v2->fields.mDispInfos;
        if ( !this )
          break;
        mDispInfos = this->fields.mDispInfos;
        v15 = Method_System_Collections_Generic_List_MissionNotifyDispInfo__Add__;
        ++HIDWORD(this->fields.mNoDispInfos);
        if ( !mDispInfos )
          break;
        mNoDispInfos_low = SLODWORD(this->fields.mNoDispInfos);
        if ( (unsigned int)mNoDispInfos_low >= mDispInfos->fields._size )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            Item,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &mDispInfos->klass + mNoDispInfos_low;
          LODWORD(this->fields.mNoDispInfos) = mNoDispInfos_low + 1;
          v17[4] = (System_Collections_Generic_List_MissionNotifyDispInfo__c *)Item;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v17 + 4), (int32_t)Item, v8, v9, v10, v11, v12, v13);
        }
        this = (MissionNotifyManager_o *)v2->fields.mNoDispInfos;
        if ( !this )
          break;
        System_Collections_Generic_List_object___RemoveAt(
          (System_Collections_Generic_List_object__o *)this,
          v5 - 2,
          (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_MissionNotifyDispInfo__RemoveAt__);
      }
      if ( (unsigned int)--v5 <= 1 )
        return;
    }
LABEL_17:
    sub_21FFECC(this, method);
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
  System_Action_o *_9__1; // x23
  MissionNotifyManager_o *_4__this; // x20
  MissionNotifyDispInfo_o *disp_info; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v3 = this;
  if ( (byte_5931F89 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (MissionNotifyManager___c__DisplayClass22_0_o *)sub_21FFC50(&Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__1__);
    byte_5931F89 = 1;
  }
  _9__1 = v3->fields.__9__1;
  _4__this = v3->fields.__4__this;
  disp_info = v3->fields.disp_info;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_MissionNotifyManager___c__DisplayClass22_0__RequestDisp_b__1__,
      0);
    v3->fields.__9__1 = _9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_21FFECC(this, method);
  MissionNotifyManager__LoadEventAsset(_4__this, disp_info, _9__1, v2);
}


void MissionNotifyManager___c__DisplayClass22_0___RequestDisp_b__1(
        MissionNotifyManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_21FFECC(this, method);
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
    sub_21FFECC(0, method);
  MissionNotifyComponent__SetState(comp, 0, v2);
}