void CompleteMissionViewController___ctor(CompleteMissionViewController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2D127 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    byte_4D2D127 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
  this->fields.currentList = (struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.currentList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.mTargetEndedAt = -1;
  this->fields.mLastDisplayedSecond = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t CompleteMissionViewController__CalculateClearCount(
        CompleteMissionViewController_o *this,
        EventMissionEntity_array *list,
        const MethodInfo *method)
{
  int max_length; // w8
  int v5; // w26
  int32_t v6; // w20
  Il2CppClass **v7; // x8
  EventMissionEntity_o *v8; // x21
  bool isNowMission; // w0
  int32_t missionTargetId; // w22
  int32_t id; // w23
  bool v12; // w24
  bool IsIgnoreStartCondition; // w25
  bool v14; // w24
  int32_t MissionProgressType_47706724; // w0

  if ( (byte_4D2D126 & 1) == 0 )
  {
    this = (CompleteMissionViewController_o *)sub_1C93AD4(&MissionInfoMaker_TypeInfo);
    byte_4D2D126 = 1;
  }
  if ( !list )
    goto LABEL_16;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      if ( v5 >= (unsigned int)max_length )
        sub_1C93D34(this);
      v7 = &list->obj.klass + v5;
      v8 = (EventMissionEntity_o *)v7[4];
      if ( !v8 )
        break;
      isNowMission = EventMissionEntity__isNowMission((EventMissionEntity_o *)v7[4], 0);
      missionTargetId = v8->fields.missionTargetId;
      id = v8->fields.id;
      v12 = isNowMission;
      IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(v8, 0);
      if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
      v14 = v12;
      MissionProgressType_47706724 = MissionInfoMaker__GetMissionProgressType_47706724(
                                       missionTargetId,
                                       id,
                                       v14,
                                       IsIgnoreStartCondition,
                                       0);
      this = (CompleteMissionViewController_o *)MissionInfoMaker__GetProgStatus(
                                                  v8->fields.missionTargetId,
                                                  v8->fields.id,
                                                  MissionProgressType_47706724,
                                                  v14,
                                                  0);
      max_length = list->max_length;
      ++v5;
      if ( (_DWORD)this == 3 )
        ++v6;
      if ( v5 >= max_length )
        return v6;
    }
LABEL_16:
    sub_1C93D2C(this, list);
  }
  return 0;
}


void CompleteMissionViewController__CheckAssert(CompleteMissionViewController_o *this, const MethodInfo *method)
{
  ;
}


void CompleteMissionViewController__OnEnable(CompleteMissionViewController_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentList; // x8

  if ( (byte_4D2D11C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    byte_4D2D11C = 1;
  }
  currentList = this->fields.currentList;
  if ( currentList )
  {
    if ( currentList->fields._size >= 1 )
      CompleteMissionViewController__RefreshLabels(this, method);
  }
}


void CompleteMissionViewController__Refresh(CompleteMissionViewController_o *this, const MethodInfo *method)
{
  CompleteMissionViewController_o *v2; // x19
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentList; // x8
  int32_t size; // w2
  int v5; // w9
  Il2CppObject *MasterData_object; // x21
  MstMissionEntity_array *EnableMissions; // x23
  const MethodInfo *v8; // x2
  int max_length; // w8
  UserEventMissionMaster_o *v10; // x22
  unsigned int v11; // w27
  int32_t v12; // w20
  MstMissionEntity_o *v13; // x24
  CompleteMissionViewController_o *v14; // x26
  int32_t v15; // w25
  const MethodInfo *v16; // x1
  struct UnityEngine_GameObject_o *root; // x8
  struct UnityEngine_GameObject_o *v18; // x8
  int32_t AchiveMissionNum; // w0
  int32_t m_CancellationTokenSource; // w22
  int32_t v21; // w23
  MasterMissionComponent_MasterMissionInfoItem_o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  intptr_t m_CachedPtr; // x8
  _QWORD *v30; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v32; // x8

  v2 = this;
  if ( (byte_4D2D11D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__);
    sub_1C93AD4(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
    this = (CompleteMissionViewController_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D11D = 1;
  }
  currentList = v2->fields.currentList;
  if ( !currentList )
    goto LABEL_34;
  size = currentList->fields._size;
  v5 = currentList->fields._version + 1;
  currentList->fields._size = 0;
  currentList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)currentList->fields._items, 0, size, 0);
  v2->fields.currentEventId = 0;
  this = (CompleteMissionViewController_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  this = (CompleteMissionViewController_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_34;
  this = (CompleteMissionViewController_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !this )
    goto LABEL_34;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)this, 0);
  this = (CompleteMissionViewController_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_34;
  this = (CompleteMissionViewController_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_34;
  max_length = EnableMissions->max_length;
  if ( max_length < 1 )
  {
    v12 = 0;
    goto LABEL_22;
  }
  v10 = (UserEventMissionMaster_o *)this;
  v11 = 0;
  v12 = 0;
  while ( 1 )
  {
    if ( v11 >= max_length )
      goto LABEL_35;
    v13 = EnableMissions->m_Items[v11];
    if ( !v13 || !MasterData_object )
      goto LABEL_34;
    this = (CompleteMissionViewController_o *)EventMissionMaster__getCompleteMissionList(
                                                (EventMissionMaster_o *)MasterData_object,
                                                v13->fields.id,
                                                0);
    if ( this )
    {
      v14 = this;
      if ( this->fields.m_CancellationTokenSource )
      {
        v15 = CompleteMissionViewController__CalculateClearCount(this, (EventMissionEntity_array *)this, v8);
        v12 += v15;
        this = (CompleteMissionViewController_o *)MstMissionEntity__isActiveNow(v13, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
    }
    max_length = EnableMissions->max_length;
    if ( (int)++v11 >= max_length )
      goto LABEL_22;
  }
  if ( !LODWORD(v14->fields.m_CancellationTokenSource) )
LABEL_35:
    sub_1C93D34(this);
  root = v14->fields.root;
  if ( !root || (this = (CompleteMissionViewController_o *)v2->fields.iconSprite) == 0 )
LABEL_34:
    sub_1C93D2C(this, method);
  CompleteMissionSprite__InitBtn((CompleteMissionSprite_o *)this, HIDWORD(root[1].klass), 0);
  if ( !LODWORD(v14->fields.m_CancellationTokenSource) )
    goto LABEL_35;
  v18 = v14->fields.root;
  if ( !v18 )
    goto LABEL_34;
  v2->fields.currentEventId = HIDWORD(v18[1].klass);
  if ( !v10 )
    goto LABEL_34;
  AchiveMissionNum = UserEventMissionMaster__getAchiveMissionNum(v10, v13->fields.id, 0);
  m_CancellationTokenSource = (int32_t)v14->fields.m_CancellationTokenSource;
  v21 = AchiveMissionNum;
  v22 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_1C93D20(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
  MasterMissionComponent_MasterMissionInfoItem___ctor(v22, v13, m_CancellationTokenSource, v15, v21, 0);
  this = (CompleteMissionViewController_o *)v2->fields.currentList;
  if ( !this )
    goto LABEL_34;
  m_CachedPtr = this->fields.m_CachedPtr;
  v30 = Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__;
  ++HIDWORD(this->fields.m_CancellationTokenSource);
  if ( !m_CachedPtr )
    goto LABEL_34;
  m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v22,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v32 + 32) = v22;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v32 + 32), (int32_t)v22, v23, v24, v25, v26, v27, v28);
  }
LABEL_22:
  CompleteMissionViewController__UpdateNoticeBadge(v2, v12, v8);
  CompleteMissionViewController__RefreshLabels(v2, v16);
}


void CompleteMissionViewController__RefreshLabels(CompleteMissionViewController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *currentList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v5; // x1
  Il2CppClass *klass; // x8
  int64_t v7; // x8
  const MethodInfo *v8; // x2

  if ( (byte_4D2D11E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    byte_4D2D11E = 1;
  }
  if ( (byte_4D2D11C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    byte_4D2D11C = 1;
  }
  currentList = (System_Collections_Generic_List_object__o *)this->fields.currentList;
  if ( currentList && currentList->fields._size >= 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             currentList,
             0,
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    if ( !Item || (klass = Item[1].klass) == 0 )
      sub_1C93D2C(Item, v5);
    v7 = *(_QWORD *)&klass->_1.byval_arg.bits;
    this->fields.mLastDisplayedSecond = -1;
    this->fields.mTargetEndedAt = v7;
    CompleteMissionViewController__UpdateMissionCountDisplay(this, v5);
    CompleteMissionViewController__UpdateTimerDisplay(this, this->fields.mTargetEndedAt, v8);
  }
  else
  {
    CompleteMissionViewController__Release(this, method);
  }
}


void CompleteMissionViewController__Release(CompleteMissionViewController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v4; // x1
  CompleteMissionSprite_o *v5; // x0
  UnityEngine_Object_o *root; // x20

  if ( (byte_4D2D120 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D120 = 1;
  }
  this->fields.mTargetEndedAt = -1;
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v5 = this->fields.iconSprite;
    if ( !v5 )
      goto LABEL_14;
    CompleteMissionSprite__ReleaseEventUI(v5, 0);
  }
  root = (UnityEngine_Object_o *)this->fields.root;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(root, 0, 0) )
  {
    v5 = (CompleteMissionSprite_o *)this->fields.root;
    if ( v5 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v5, 0, 0);
      return;
    }
LABEL_14:
    sub_1C93D2C(v5, v4);
  }
}


void CompleteMissionViewController__SetInteractable(
        CompleteMissionViewController_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *btnCollider; // x21
  __int64 v6; // x1
  UnityEngine_Collider_o *v7; // x0

  if ( (byte_4D2D11F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D11F = 1;
  }
  btnCollider = (UnityEngine_Object_o *)this->fields.btnCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(btnCollider, 0, 0) )
  {
    v7 = (UnityEngine_Collider_o *)this->fields.btnCollider;
    if ( !v7 )
      sub_1C93D2C(0, v6);
    UnityEngine_Collider__set_enabled(v7, isEnabled, 0);
  }
}


void CompleteMissionViewController__SetTimerFinishedDisplay(
        CompleteMissionViewController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *alertTitleLb; // x0
  UILabel_o *alertMsgLb; // x19

  if ( (byte_4D2D124 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_13513/*"TIME_REST_ACHIVE"*/);
    byte_4D2D124 = 1;
  }
  CompleteMissionViewController__UpdateMissionCountDisplay(this, method);
  alertTitleLb = (UnityEngine_Component_o *)this->fields.alertTitleLb;
  if ( !alertTitleLb )
    goto LABEL_11;
  alertTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(alertTitleLb, 0);
  if ( !alertTitleLb )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alertTitleLb, 0, 0);
  alertTitleLb = (UnityEngine_Component_o *)this->fields.alertNumLb;
  if ( !alertTitleLb )
    goto LABEL_11;
  UILabel__set_text((UILabel_o *)alertTitleLb, (System_String_o *)StringLiteral_1/*""*/, 0);
  alertTitleLb = (UnityEngine_Component_o *)this->fields.alertUnitLb;
  if ( !alertTitleLb )
    goto LABEL_11;
  UILabel__set_text((UILabel_o *)alertTitleLb, (System_String_o *)StringLiteral_1/*""*/, 0);
  alertMsgLb = this->fields.alertMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  alertTitleLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13513/*"TIME_REST_ACHIVE"*/, 0);
  if ( !alertMsgLb )
LABEL_11:
    sub_1C93D2C(alertTitleLb, v3);
  UILabel__set_text(alertMsgLb, (System_String_o *)alertTitleLb, 0);
}


// local variable allocation has failed, the output may be wrong!
void CompleteMissionViewController__SetVisible(
        CompleteMissionViewController_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0
  bool v5; // w21
  const MethodInfo *v7; // x1

  root = this->fields.root;
  if ( !root
    || (v5 = isVisible, UnityEngine_GameObject__SetActive(root, isVisible, 0), (root = this->fields.alertRoot) == 0)
    || (UnityEngine_GameObject__SetActive(root, v5, 0), (root = this->fields.countRoot) == 0) )
  {
    sub_1C93D2C(root, isVisible);
  }
  UnityEngine_GameObject__SetActive(root, isVisible, 0);
  if ( isVisible )
    CompleteMissionViewController__RefreshLabels(this, v7);
  else
    this->fields.mTargetEndedAt = -1;
}


void CompleteMissionViewController__StopTimer(CompleteMissionViewController_o *this, const MethodInfo *method)
{
  this->fields.mTargetEndedAt = -1;
}


void CompleteMissionViewController__Update(CompleteMissionViewController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0
  int64_t Time; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *mTargetEndedAt; // x1
  int32_t v7; // w20

  if ( (byte_4D2D121 & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2D121 = 1;
  }
  if ( this->fields.mTargetEndedAt >= 1 )
  {
    root = this->fields.root;
    if ( !root )
      sub_1C93D2C(0, method);
    if ( UnityEngine_GameObject__get_activeInHierarchy(root, 0) )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0);
      mTargetEndedAt = (const MethodInfo *)this->fields.mTargetEndedAt;
      if ( (__int64)mTargetEndedAt <= Time )
      {
        CompleteMissionViewController__SetTimerFinishedDisplay(this, mTargetEndedAt);
        this->fields.mTargetEndedAt = -1;
      }
      else
      {
        v7 = (_DWORD)mTargetEndedAt - Time;
        if ( this->fields.mLastDisplayedSecond != (_DWORD)mTargetEndedAt - (_DWORD)Time )
        {
          CompleteMissionViewController__UpdateTimerDisplay(this, (int64_t)mTargetEndedAt, v5);
          this->fields.mLastDisplayedSecond = v7;
        }
      }
    }
  }
}


void CompleteMissionViewController__UpdateMissionCountDisplay(
        CompleteMissionViewController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *currentList; // x0
  UILabel_o *countNumLb; // x20
  UILabel_o *countNumLb2; // x20
  UILabel_o *countMsgLb; // x19
  int32_t syncRoot; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2D122 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_8722/*"MISSION_ACHIVE_MSG"*/);
    byte_4D2D122 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.currentList, 0) )
  {
    currentList = (System_Collections_Generic_List_object__o *)this->fields.currentList;
    if ( !currentList )
      goto LABEL_15;
    countNumLb = this->fields.countNumLb;
    currentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 currentList,
                                                                 0,
                                                                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    if ( !currentList )
      goto LABEL_15;
    syncRoot = (int32_t)currentList->fields._syncRoot;
    currentList = (System_Collections_Generic_List_object__o *)System_Int32__ToString((int32_t)&syncRoot, 0);
    if ( !countNumLb )
      goto LABEL_15;
    UILabel__set_text(countNumLb, (System_String_o *)currentList, 0);
    currentList = (System_Collections_Generic_List_object__o *)this->fields.currentList;
    if ( !currentList )
      goto LABEL_15;
    countNumLb2 = this->fields.countNumLb2;
    currentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 currentList,
                                                                 0,
                                                                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    if ( !currentList )
      goto LABEL_15;
    syncRoot = currentList->fields._size;
    currentList = (System_Collections_Generic_List_object__o *)System_Int32__ToString((int32_t)&syncRoot, 0);
    if ( !countNumLb2 )
      goto LABEL_15;
    UILabel__set_text(countNumLb2, (System_String_o *)currentList, 0);
    countMsgLb = this->fields.countMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    currentList = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_8722/*"MISSION_ACHIVE_MSG"*/,
                                                                 0);
    if ( !countMsgLb )
LABEL_15:
      sub_1C93D2C(currentList, v3);
    UILabel__set_text(countMsgLb, (System_String_o *)currentList, 0);
  }
}


void CompleteMissionViewController__UpdateNoticeBadge(
        CompleteMissionViewController_o *this,
        int32_t clearCount,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_mNoticeNumber; // x20
  UnityEngine_Object_o *mNoticeNumber; // x22
  UnityEngine_Object_o *cNoticeNumberPrefab; // x22
  Il2CppObject *v8; // x22
  Il2CppObject *v9; // x0
  UnityEngine_GameObject_o *noticeRoot; // x1
  UnityEngine_GameObject_o *v11; // x21
  UISprite_o *klass; // x0
  __int64 v13; // x1
  Il2CppObject *Component_object; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UIWidget_o *v21; // x21
  GrandQuestFolderBoardItem_c *v22; // x8
  UILabel_o *data; // x21
  UnityEngine_Object_o *v24; // x21

  if ( (byte_4D2D125 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D125 = 1;
  }
  p_mNoticeNumber = (GrandQuestFolderBoardItem_o *)&this->fields.mNoticeNumber;
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0, 0) )
  {
    cNoticeNumberPrefab = (UnityEngine_Object_o *)this->fields.cNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(cNoticeNumberPrefab, 0, 0) )
    {
      v8 = (Il2CppObject *)this->fields.cNoticeNumberPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__Instantiate_object_(
             v8,
             (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      noticeRoot = this->fields.noticeRoot;
      v11 = (UnityEngine_GameObject_o *)v9;
      GameObjectExtensions__SafeSetParent_36750960((UnityEngine_GameObject_o *)v9, noticeRoot, 0);
      if ( !v11 )
        goto LABEL_23;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v11,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      p_mNoticeNumber->klass = (GrandQuestFolderBoardItem_c *)Component_object;
      sub_1C93A78(p_mNoticeNumber, (int32_t)Component_object, v15, v16, v17, v18, v19, v20);
      klass = (UISprite_o *)p_mNoticeNumber->klass;
      if ( !p_mNoticeNumber->klass )
        goto LABEL_23;
      klass = NoticeNumberComponent__GetNumberBg((NoticeNumberComponent_o *)klass, 0);
      if ( !klass )
        goto LABEL_23;
      v21 = (UIWidget_o *)klass;
      UIWidget__set_depth((UIWidget_o *)klass, 10, 0);
      UIWidget__set_width(v21, 40, 0);
      UIWidget__set_height(v21, 40, 0);
      v22 = p_mNoticeNumber->klass;
      if ( !p_mNoticeNumber->klass )
        goto LABEL_23;
      data = (UILabel_o *)v22->_1.byval_arg.data;
      if ( !data )
        goto LABEL_23;
      UIWidget__set_depth((UIWidget_o *)v22->_1.byval_arg.data, 11, 0);
      UILabel__set_fontSize(data, 16, 0);
      UIWidget__set_width((UIWidget_o *)data, 28, 0);
    }
  }
  v24 = (UnityEngine_Object_o *)p_mNoticeNumber->klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v24, 0, 0) )
  {
    klass = (UISprite_o *)p_mNoticeNumber->klass;
    if ( p_mNoticeNumber->klass )
    {
      NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)klass, clearCount, 0);
      return;
    }
LABEL_23:
    sub_1C93D2C(klass, v13);
  }
}


void CompleteMissionViewController__UpdateTimerDisplay(
        CompleteMissionViewController_o *this,
        int64_t endedAt,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  UnityEngine_Component_o *alertTitleLb; // x0
  __int64 v7; // x1
  struct UILabel_o *alertNumLb; // x8
  struct UILabel_o *alertUnitLb; // x8
  UILabel_o *v10; // x20
  System_String_o *charStr; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *numStr; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D2D123 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_3733/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2D123 = 1;
  }
  numStr = 0;
  charStr = 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( NetworkManager__getTime(0) >= endedAt )
  {
    CompleteMissionViewController__SetTimerFinishedDisplay(this, v5);
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    LocalizationManager__GetRestTimeWithSeparatedTimeStr(endedAt, &numStr, &charStr, 0);
    alertNumLb = this->fields.alertNumLb;
    if ( !alertNumLb )
      goto LABEL_27;
    alertTitleLb = (UnityEngine_Component_o *)System_String__op_Inequality(alertNumLb->fields.mText, numStr, 0);
    if ( ((unsigned __int8)alertTitleLb & 1) != 0 )
      goto LABEL_12;
    alertUnitLb = this->fields.alertUnitLb;
    if ( !alertUnitLb )
      goto LABEL_27;
    if ( System_String__op_Inequality(alertUnitLb->fields.mText, charStr, 0) )
    {
LABEL_12:
      alertTitleLb = (UnityEngine_Component_o *)this->fields.alertTitleLb;
      if ( alertTitleLb )
      {
        alertTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(alertTitleLb, 0);
        if ( alertTitleLb )
        {
          if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)alertTitleLb, 0) )
          {
            alertTitleLb = (UnityEngine_Component_o *)this->fields.alertTitleLb;
            if ( !alertTitleLb )
              goto LABEL_27;
            alertTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(alertTitleLb, 0);
            if ( !alertTitleLb )
              goto LABEL_27;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)alertTitleLb, 1, 0);
          }
          v10 = this->fields.alertTitleLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          alertTitleLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, 0);
          if ( v10 )
          {
            UILabel__set_text(v10, (System_String_o *)alertTitleLb, 0);
            alertTitleLb = (UnityEngine_Component_o *)this->fields.alertNumLb;
            if ( alertTitleLb )
            {
              UILabel__set_text((UILabel_o *)alertTitleLb, numStr, 0);
              alertTitleLb = (UnityEngine_Component_o *)this->fields.alertUnitLb;
              if ( alertTitleLb )
              {
                UILabel__set_text((UILabel_o *)alertTitleLb, charStr, 0);
                alertTitleLb = (UnityEngine_Component_o *)this->fields.alertMsgLb;
                if ( alertTitleLb )
                {
                  UILabel__set_text((UILabel_o *)alertTitleLb, (System_String_o *)StringLiteral_1/*""*/, 0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_27:
      sub_1C93D2C(alertTitleLb, v7);
    }
  }
}


int32_t CompleteMissionViewController__get_EventId(CompleteMissionViewController_o *this, const MethodInfo *method)
{
  return this->fields.currentEventId;
}


bool CompleteMissionViewController__get_HasMissions(CompleteMissionViewController_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentList; // x8

  if ( (byte_4D2D11C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    byte_4D2D11C = 1;
  }
  currentList = this->fields.currentList;
  return currentList && currentList->fields._size > 0;
}