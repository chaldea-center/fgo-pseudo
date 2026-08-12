void CompleteMissionViewController___ctor(CompleteMissionViewController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596CEAB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
    byte_596CEAB = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem___ctor__);
  this->fields.currentList = (struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.currentList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  int32_t missionTargetId; // w23
  int32_t id; // w24
  bool v12; // w22
  __int64 v13; // x1
  __int64 v14; // x2
  bool IsIgnoreStartCondition; // w25
  int32_t MissionProgressType_55002764; // w0

  if ( (byte_596CEAA & 1) == 0 )
  {
    this = (CompleteMissionViewController_o *)sub_2213A60(&MissionInfoMaker_TypeInfo);
    byte_596CEAA = 1;
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
        sub_2213CE4(this);
      v7 = &list->obj.klass + v5;
      v8 = (EventMissionEntity_o *)v7[4];
      if ( !v8 )
        break;
      isNowMission = EventMissionEntity__isNowMission((EventMissionEntity_o *)v7[4], 0);
      missionTargetId = v8->fields.missionTargetId;
      id = v8->fields.id;
      v12 = isNowMission;
      IsIgnoreStartCondition = EventMissionEntity__IsIgnoreStartCondition(v8, 0);
      if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v13, v14);
      MissionProgressType_55002764 = MissionInfoMaker__GetMissionProgressType_55002764(
                                       missionTargetId,
                                       id,
                                       v12,
                                       IsIgnoreStartCondition,
                                       0);
      this = (CompleteMissionViewController_o *)MissionInfoMaker__GetProgStatus(
                                                  v8->fields.missionTargetId,
                                                  v8->fields.id,
                                                  MissionProgressType_55002764,
                                                  v12,
                                                  0);
      max_length = list->max_length;
      ++v5;
      if ( (_DWORD)this == 3 )
        ++v6;
      if ( v5 >= max_length )
        return v6;
    }
LABEL_16:
    sub_2213CDC(this, list);
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

  if ( (byte_596CEA0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    byte_596CEA0 = 1;
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
  const MethodInfo_47A29F8 *v6; // x0
  Il2CppObject *MasterData_object; // x21
  MstMissionEntity_array *EnableMissions; // x23
  const MethodInfo *v9; // x2
  int max_length; // w8
  UserEventMissionMaster_o *v11; // x22
  unsigned int v12; // w27
  int32_t v13; // w20
  MstMissionEntity_o *v14; // x24
  CompleteMissionViewController_o *v15; // x26
  int32_t v16; // w25
  const MethodInfo *v17; // x1
  struct UnityEngine_GameObject_o *root; // x8
  struct UnityEngine_GameObject_o *v19; // x8
  int32_t AchiveMissionNum_50065772; // w23
  int32_t m_CancellationTokenSource; // w22
  MasterMissionComponent_MasterMissionInfoItem_o *v22; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v30; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v32; // x8

  v2 = this;
  if ( (byte_596CEA1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__Clear__);
    sub_2213A60(&MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
    this = (CompleteMissionViewController_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596CEA1 = 1;
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
  v6 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  v2->fields.currentEventId = 0;
  this = (CompleteMissionViewController_o *)SingletonMonoBehaviour_object___get_Instance(v6);
  if ( !this )
    goto LABEL_34;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  this = (CompleteMissionViewController_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_34;
  this = (CompleteMissionViewController_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MstMissionMaster___);
  if ( !this )
    goto LABEL_34;
  EnableMissions = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)this, 0);
  this = (CompleteMissionViewController_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_34;
  this = (CompleteMissionViewController_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !EnableMissions )
    goto LABEL_34;
  max_length = EnableMissions->max_length;
  if ( max_length < 1 )
  {
    v13 = 0;
    goto LABEL_22;
  }
  v11 = (UserEventMissionMaster_o *)this;
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    if ( v12 >= max_length )
      goto LABEL_35;
    v14 = EnableMissions->m_Items[v12];
    if ( !v14 || !MasterData_object )
      goto LABEL_34;
    this = (CompleteMissionViewController_o *)EventMissionMaster__getCompleteMissionList(
                                                (EventMissionMaster_o *)MasterData_object,
                                                v14->fields.id,
                                                0);
    if ( this )
    {
      v15 = this;
      if ( this->fields.m_CancellationTokenSource )
      {
        v16 = CompleteMissionViewController__CalculateClearCount(this, (EventMissionEntity_array *)this, v9);
        v13 += v16;
        this = (CompleteMissionViewController_o *)MstMissionEntity__isActiveNow(v14, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
      }
    }
    max_length = EnableMissions->max_length;
    if ( (int)++v12 >= max_length )
      goto LABEL_22;
  }
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
LABEL_35:
    sub_2213CE4(this);
  root = v15->fields.root;
  if ( !root || (this = (CompleteMissionViewController_o *)v2->fields.iconSprite) == 0 )
LABEL_34:
    sub_2213CDC(this, method);
  CompleteMissionSprite__InitBtn((CompleteMissionSprite_o *)this, HIDWORD(root[1].klass), 0);
  if ( !LODWORD(v15->fields.m_CancellationTokenSource) )
    goto LABEL_35;
  v19 = v15->fields.root;
  if ( !v19 )
    goto LABEL_34;
  v2->fields.currentEventId = HIDWORD(v19[1].klass);
  if ( !v11 )
    goto LABEL_34;
  AchiveMissionNum_50065772 = UserEventMissionMaster__getAchiveMissionNum_50065772(
                                v11,
                                (EventMissionEntity_array *)v15,
                                0);
  m_CancellationTokenSource = (int32_t)v15->fields.m_CancellationTokenSource;
  v22 = (MasterMissionComponent_MasterMissionInfoItem_o *)sub_2213CCC(MasterMissionComponent_MasterMissionInfoItem_TypeInfo);
  MasterMissionComponent_MasterMissionInfoItem___ctor(
    v22,
    v14,
    m_CancellationTokenSource,
    v16,
    AchiveMissionNum_50065772,
    0);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
    LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_QWORD *)(v32 + 32) = v22;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 32), (int32_t)v22, v23, v24, v25, v26, v27, v28);
  }
LABEL_22:
  CompleteMissionViewController__UpdateNoticeBadge(v2, v13, v9);
  CompleteMissionViewController__RefreshLabels(v2, v17);
}


void CompleteMissionViewController__RefreshLabels(CompleteMissionViewController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *currentList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v5; // x1
  Il2CppClass *klass; // x8
  int64_t v7; // x8
  const MethodInfo *v8; // x2

  if ( (byte_596CEA2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    byte_596CEA2 = 1;
  }
  if ( (byte_596CEA0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    byte_596CEA0 = 1;
  }
  currentList = (System_Collections_Generic_List_object__o *)this->fields.currentList;
  if ( currentList && currentList->fields._size >= 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             currentList,
             0,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    if ( !Item || (klass = Item[1].klass) == 0 )
      sub_2213CDC(Item, v5);
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
  __int64 v2; // x2
  UnityEngine_Object_c *v4; // x0
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  CompleteMissionSprite_o *v8; // x0
  UnityEngine_Object_o *root; // x20

  if ( (byte_596CEA4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CEA4 = 1;
  }
  v4 = UnityEngine_Object_TypeInfo;
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  this->fields.mTargetEndedAt = -1;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v8 = this->fields.iconSprite;
    if ( !v8 )
      goto LABEL_14;
    CompleteMissionSprite__ReleaseEventUI(v8, 0);
  }
  root = (UnityEngine_Object_o *)this->fields.root;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(root, 0, 0) )
  {
    v8 = (CompleteMissionSprite_o *)this->fields.root;
    if ( v8 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v8, 0, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(v8, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void CompleteMissionViewController__SetInteractable(
        CompleteMissionViewController_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *btnCollider; // x21
  __int64 v6; // x1
  UnityEngine_Collider_o *v7; // x0

  if ( (byte_596CEA3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CEA3 = 1;
  }
  btnCollider = (UnityEngine_Object_o *)this->fields.btnCollider;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnabled, method);
  if ( UnityEngine_Object__op_Inequality(btnCollider, 0, 0) )
  {
    v7 = (UnityEngine_Collider_o *)this->fields.btnCollider;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UnityEngine_Collider__set_enabled(v7, isEnabled, 0);
  }
}


void CompleteMissionViewController__SetTimerFinishedDisplay(
        CompleteMissionViewController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *alertTitleLb; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *alertMsgLb; // x19

  if ( (byte_596CEA8 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_13971/*"TIME_REST_ACHIVE"*/);
    byte_596CEA8 = 1;
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  alertTitleLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13971/*"TIME_REST_ACHIVE"*/, 0);
  if ( !alertMsgLb )
LABEL_11:
    sub_2213CDC(alertTitleLb, v3);
  UILabel__set_text(alertMsgLb, (System_String_o *)alertTitleLb, 0);
}


// local variable allocation has failed, the output may be wrong!
void CompleteMissionViewController__SetVisible(
        CompleteMissionViewController_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0
  const MethodInfo *v6; // x1

  root = this->fields.root;
  if ( !root
    || (UnityEngine_GameObject__SetActive(root, isVisible, 0), (root = this->fields.alertRoot) == 0)
    || (UnityEngine_GameObject__SetActive(root, isVisible, 0), (root = this->fields.countRoot) == 0) )
  {
    sub_2213CDC(root, isVisible);
  }
  UnityEngine_GameObject__SetActive(root, isVisible, 0);
  if ( isVisible )
    CompleteMissionViewController__RefreshLabels(this, v6);
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
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t Time; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *mTargetEndedAt; // x1
  int32_t v9; // w20

  if ( (byte_596CEA5 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596CEA5 = 1;
  }
  if ( this->fields.mTargetEndedAt >= 1 )
  {
    root = this->fields.root;
    if ( !root )
      sub_2213CDC(0, method);
    if ( UnityEngine_GameObject__get_activeInHierarchy(root, 0) )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
      Time = NetworkManager__getTime(0);
      mTargetEndedAt = (const MethodInfo *)this->fields.mTargetEndedAt;
      if ( (__int64)mTargetEndedAt <= Time )
      {
        CompleteMissionViewController__SetTimerFinishedDisplay(this, mTargetEndedAt);
        this->fields.mTargetEndedAt = -1;
      }
      else
      {
        v9 = (_DWORD)mTargetEndedAt - Time;
        if ( this->fields.mLastDisplayedSecond != (_DWORD)mTargetEndedAt - (_DWORD)Time )
        {
          CompleteMissionViewController__UpdateTimerDisplay(this, (int64_t)mTargetEndedAt, v7);
          this->fields.mLastDisplayedSecond = v9;
        }
      }
    }
  }
}


void CompleteMissionViewController__UpdateMissionCountDisplay(
        CompleteMissionViewController_o *this,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *currentList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  UILabel_o *countNumLb; // x20
  UILabel_o *countNumLb2; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *countMsgLb; // x19
  int32_t syncRoot; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596CEA6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_9034/*"MISSION_ACHIVE_MSG"*/);
    byte_596CEA6 = 1;
  }
  currentList = (System_Collections_ICollection_o *)this->fields.currentList;
  syncRoot = 0;
  if ( !BasicHelper__IsNullOrEmpty(currentList, 0) )
  {
    Item = (System_Collections_Generic_List_object__o *)this->fields.currentList;
    if ( !Item )
      goto LABEL_15;
    countNumLb = this->fields.countNumLb;
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          Item,
                                                          0,
                                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    if ( !Item )
      goto LABEL_15;
    syncRoot = (int32_t)Item->fields._syncRoot;
    Item = (System_Collections_Generic_List_object__o *)System_Int32__ToString((int32_t)&syncRoot, 0);
    if ( !countNumLb )
      goto LABEL_15;
    UILabel__set_text(countNumLb, (System_String_o *)Item, 0);
    Item = (System_Collections_Generic_List_object__o *)this->fields.currentList;
    if ( !Item )
      goto LABEL_15;
    countNumLb2 = this->fields.countNumLb2;
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                          Item,
                                                          0,
                                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Item__);
    if ( !Item )
      goto LABEL_15;
    syncRoot = Item->fields._size;
    Item = (System_Collections_Generic_List_object__o *)System_Int32__ToString((int32_t)&syncRoot, 0);
    if ( !countNumLb2 )
      goto LABEL_15;
    UILabel__set_text(countNumLb2, (System_String_o *)Item, 0);
    countMsgLb = this->fields.countMsgLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
    Item = (System_Collections_Generic_List_object__o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_9034/*"MISSION_ACHIVE_MSG"*/,
                                                          0);
    if ( !countMsgLb )
LABEL_15:
      sub_2213CDC(Item, v4);
    UILabel__set_text(countMsgLb, (System_String_o *)Item, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void CompleteMissionViewController__UpdateNoticeBadge(
        CompleteMissionViewController_o *this,
        int32_t clearCount,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_mNoticeNumber; // x20
  UnityEngine_Object_o *mNoticeNumber; // x22
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *cNoticeNumberPrefab; // x22
  Il2CppObject *v10; // x22
  Il2CppObject *v11; // x0
  UnityEngine_GameObject_o *noticeRoot; // x1
  UnityEngine_GameObject_o *v13; // x21
  UISprite_o *klass; // x0
  __int64 v15; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UIWidget_o *v23; // x21
  MissionNaviTransitionBoardItem_c *v24; // x8
  UILabel_o *data; // x21
  UnityEngine_Object_o *v26; // x21

  if ( (byte_596CEA9 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CEA9 = 1;
  }
  p_mNoticeNumber = (MissionNaviTransitionBoardItem_o *)&this->fields.mNoticeNumber;
  mNoticeNumber = (UnityEngine_Object_o *)this->fields.mNoticeNumber;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&clearCount, method);
  if ( UnityEngine_Object__op_Equality(mNoticeNumber, 0, 0) )
  {
    cNoticeNumberPrefab = (UnityEngine_Object_o *)this->fields.cNoticeNumberPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    if ( UnityEngine_Object__op_Inequality(cNoticeNumberPrefab, 0, 0) )
    {
      v10 = (Il2CppObject *)this->fields.cNoticeNumberPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      v11 = UnityEngine_Object__Instantiate_object_(
              v10,
              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      noticeRoot = this->fields.noticeRoot;
      v13 = (UnityEngine_GameObject_o *)v11;
      GameObjectExtensions__SafeSetParent_42897308((UnityEngine_GameObject_o *)v11, noticeRoot, 0);
      if ( !v13 )
        goto LABEL_23;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v13,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
      p_mNoticeNumber->klass = (MissionNaviTransitionBoardItem_c *)Component_object;
      sub_2213A04(p_mNoticeNumber, (int32_t)Component_object, v17, v18, v19, v20, v21, v22);
      klass = (UISprite_o *)p_mNoticeNumber->klass;
      if ( !p_mNoticeNumber->klass )
        goto LABEL_23;
      klass = NoticeNumberComponent__GetNumberBg((NoticeNumberComponent_o *)klass, 0);
      if ( !klass )
        goto LABEL_23;
      v23 = (UIWidget_o *)klass;
      UIWidget__set_depth((UIWidget_o *)klass, 10, 0);
      UIWidget__set_width(v23, 40, 0);
      UIWidget__set_height(v23, 40, 0);
      v24 = p_mNoticeNumber->klass;
      if ( !p_mNoticeNumber->klass )
        goto LABEL_23;
      data = (UILabel_o *)v24->_1.byval_arg.data;
      if ( !data )
        goto LABEL_23;
      UIWidget__set_depth((UIWidget_o *)v24->_1.byval_arg.data, 11, 0);
      UILabel__set_fontSize(data, 16, 0);
      UIWidget__set_width((UIWidget_o *)data, 28, 0);
    }
  }
  v26 = (UnityEngine_Object_o *)p_mNoticeNumber->klass;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
  {
    klass = (UISprite_o *)p_mNoticeNumber->klass;
    if ( p_mNoticeNumber->klass )
    {
      NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)klass, clearCount, 0);
      return;
    }
LABEL_23:
    sub_2213CDC(klass, v15);
  }
}


void CompleteMissionViewController__UpdateTimerDisplay(
        CompleteMissionViewController_o *this,
        int64_t endedAt,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  UnityEngine_Component_o *alertTitleLb; // x0
  __int64 v8; // x1
  struct UILabel_o *alertNumLb; // x8
  struct UILabel_o *alertUnitLb; // x8
  __int64 v11; // x2
  UILabel_o *v12; // x20
  System_String_o *charStr; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *numStr; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596CEA7 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_3854/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CEA7 = 1;
  }
  numStr = 0;
  charStr = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, endedAt, method);
  if ( NetworkManager__getTime(0) >= endedAt )
  {
    CompleteMissionViewController__SetTimerFinishedDisplay(this, v5);
    return;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  LocalizationManager__GetRestTimeWithSeparatedTimeStr(endedAt, &numStr, &charStr, 0);
  alertNumLb = this->fields.alertNumLb;
  if ( !alertNumLb )
    goto LABEL_27;
  alertTitleLb = (UnityEngine_Component_o *)System_String__op_Inequality(alertNumLb->fields.mText, numStr, 0);
  if ( ((unsigned __int8)alertTitleLb & 1) == 0 )
  {
    alertUnitLb = this->fields.alertUnitLb;
    if ( !alertUnitLb )
      goto LABEL_27;
    if ( !System_String__op_Inequality(alertUnitLb->fields.mText, charStr, 0) )
      return;
  }
  alertTitleLb = (UnityEngine_Component_o *)this->fields.alertTitleLb;
  if ( !alertTitleLb )
    goto LABEL_27;
  alertTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(alertTitleLb, 0);
  if ( !alertTitleLb )
    goto LABEL_27;
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
  v12 = this->fields.alertTitleLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v11);
  alertTitleLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3854/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, 0);
  if ( !v12
    || (UILabel__set_text(v12, (System_String_o *)alertTitleLb, 0),
        (alertTitleLb = (UnityEngine_Component_o *)this->fields.alertNumLb) == 0)
    || (UILabel__set_text((UILabel_o *)alertTitleLb, numStr, 0),
        (alertTitleLb = (UnityEngine_Component_o *)this->fields.alertUnitLb) == 0)
    || (UILabel__set_text((UILabel_o *)alertTitleLb, charStr, 0),
        (alertTitleLb = (UnityEngine_Component_o *)this->fields.alertMsgLb) == 0) )
  {
LABEL_27:
    sub_2213CDC(alertTitleLb, v8);
  }
  UILabel__set_text((UILabel_o *)alertTitleLb, (System_String_o *)StringLiteral_1/*""*/, 0);
}


int32_t CompleteMissionViewController__get_EventId(CompleteMissionViewController_o *this, const MethodInfo *method)
{
  return this->fields.currentEventId;
}


bool CompleteMissionViewController__get_HasMissions(CompleteMissionViewController_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__o *currentList; // x8

  if ( (byte_596CEA0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionComponent_MasterMissionInfoItem__get_Count__);
    byte_596CEA0 = 1;
  }
  currentList = this->fields.currentList;
  return currentList && currentList->fields._size > 0;
}