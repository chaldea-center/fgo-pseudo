void __fastcall MasterFormationComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  MasterFormationComponent_c *v2; // x8

  if ( (byte_4185939 & 1) == 0 )
  {
    sub_B2C35C(&MasterFormationComponent_TypeInfo, v1);
    byte_4185939 = 1;
  }
  MasterFormationComponent_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME = 0.15;
  MasterFormationComponent_TypeInfo->static_fields->NOT_SCROLL_ICON_COUNT = 8;
  v2 = MasterFormationComponent_TypeInfo;
  MasterFormationComponent_TypeInfo->static_fields->ALPHA_ANIMATION_SPD = 0.5;
  v2->static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
}


void __fastcall MasterFormationComponent___ctor(MasterFormationComponent_o *this, const MethodInfo *method)
{
  this->fields.isFirst = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MasterFormationComponent__CloseCmdSpell(MasterFormationComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_4185938 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185938 = 1;
  }
  cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    goto LABEL_11;
  if ( BattleWindowComponent__isOpen(cmdSpellWinComp, 0LL) )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
    if ( cmdSpellWinComp )
    {
      ((void (__fastcall *)(BattleWindowComponent_o *, _QWORD, Il2CppMethodPointer))cmdSpellWinComp->klass->vtable._12_Close.method)(
        cmdSpellWinComp,
        0LL,
        cmdSpellWinComp->klass->vtable._13_CompClose.methodPtr);
      return;
    }
LABEL_11:
    sub_B2C434(cmdSpellWinComp, method);
  }
}


void __fastcall MasterFormationComponent__OnCenterOnChildFinished(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  struct UICenterOnChild_o *centerChild; // x8
  MasterEquipInfoComponent_o *v6; // x20
  const MethodInfo *v7; // x2
  struct UserEquipEntity_o *usrEquipEnt; // x8

  if ( (byte_418592D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, method);
    sub_B2C35C(&StringLiteral_2953/*"CHANGE_INFO"*/, v3);
    byte_418592D = 1;
  }
  if ( this->fields.isIconOnly )
  {
    this->fields.isIconOnly = 0;
    return;
  }
  leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
  if ( !leftArrowBtn )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled(leftArrowBtn, 1, 0LL);
  leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
  if ( !leftArrowBtn )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled(leftArrowBtn, 1, 0LL);
  centerChild = this->fields.centerChild;
  if ( !centerChild
    || (leftArrowBtn = (UnityEngine_Behaviour_o *)centerChild->fields.mCenteredObject) == 0LL
    || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    (UnityEngine_GameObject_o *)leftArrowBtn,
                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___)) == 0LL
    || (v6 = (MasterEquipInfoComponent_o *)leftArrowBtn,
        leftArrowBtn = (UnityEngine_Behaviour_o *)MasterEquipInfoComponent__getEquipId(
                                                    (MasterEquipInfoComponent_o *)leftArrowBtn,
                                                    method),
        this->fields.currentEquipId = (int)leftArrowBtn,
        (usrEquipEnt = v6->fields.usrEquipEnt) == 0LL) )
  {
LABEL_15:
    sub_B2C434(leftArrowBtn, method);
  }
  this->fields.currentUsrEquipId = usrEquipEnt->fields.id;
  this->fields.isChange = v6->fields.isChange;
  this->fields.currentMoveIdx = v6->fields.moveEqIdx;
  MasterEquipInfoComponent__setDispEffectObj(v6, 1, v7);
  if ( this->fields.isChangeMasterImg )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.fsm;
    if ( leftArrowBtn )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)leftArrowBtn, (System_String_o *)StringLiteral_2953/*"CHANGE_INFO"*/, 0LL);
      return;
    }
    goto LABEL_15;
  }
}


void __fastcall MasterFormationComponent__OnClickCmdSpell(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_4185937 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185937 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    sub_B2C434(0LL, v3);
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, _QWORD, Il2CppMethodPointer))cmdSpellWinComp->klass->vtable._10_Open.method)(
    cmdSpellWinComp,
    0LL,
    cmdSpellWinComp->klass->vtable._11_CompOpen.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__OnClickIcon(
        MasterFormationComponent_o *this,
        int32_t idx,
        int32_t equipId,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  UICenterOnChild_o *centerChild; // x22
  struct UserEquipEntity_o *userEquipEntity; // x8
  __int64 v17; // x21
  __int64 v18; // x22
  struct UICenterOnChild_o *v19; // x8
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4185926 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, *(_QWORD *)&idx);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    byte_4185926 = 1;
  }
  if ( this->fields.currentEquipId != equipId && !this->fields.isDragStart && !this->fields.isIconDragStart )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
    if ( iconCenterChild )
    {
      UnityEngine_Behaviour__set_enabled(iconCenterChild, 0, 0LL);
      iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.loopCtr;
      this->fields.isChangeMasterImg = 0;
      this->fields.currentEquipId = equipId;
      this->fields.currentUsrEquipId = userEquipId;
      this->fields.isChange = 1;
      if ( iconCenterChild )
      {
        UIWrapContent__setScrollPos((UIWrapContent_o *)iconCenterChild, idx, 0LL);
        MasterFormationComponent__setDisEquipEffect(this, v13);
        MasterFormationComponent__setMstImg(this, equipId, v14);
        iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.loopCtr;
        if ( iconCenterChild )
        {
          centerChild = this->fields.centerChild;
          iconCenterChild = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)iconCenterChild,
                                                         0LL);
          if ( iconCenterChild )
          {
            iconCenterChild = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                           (UnityEngine_Transform_o *)iconCenterChild,
                                                           idx,
                                                           0LL);
            if ( centerChild )
            {
              UICenterOnChild__CenterOn_35704652(centerChild, (UnityEngine_Transform_o *)iconCenterChild, 1, 0LL);
              userEquipEntity = this->fields.userEquipEntity;
              if ( userEquipEntity )
              {
                v18 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
                v17 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v23.fields.currentCryptoKey = v18;
                *(_QWORD *)&v23.fields.fakeValue = v17;
                iconCenterChild = (UnityEngine_Behaviour_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                               v23,
                                                               0LL);
                if ( (_DWORD)iconCenterChild != equipId )
                  goto LABEL_24;
                v19 = this->fields.centerChild;
                if ( v19 )
                {
                  iconCenterChild = (UnityEngine_Behaviour_o *)v19->fields.mCenteredObject;
                  if ( iconCenterChild )
                  {
                    iconCenterChild = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)iconCenterChild,
                                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
                    if ( iconCenterChild )
                    {
                      MasterEquipInfoComponent__setDispEffectObj((MasterEquipInfoComponent_o *)iconCenterChild, 1, v20);
LABEL_24:
                      MasterFormationComponent__UpdateIconSelected(this, v11);
                      MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v21);
                      MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v22);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_B2C434(iconCenterChild, v11);
  }
}


void __fastcall MasterFormationComponent__OnDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  UnityEngine_Behaviour_o *iconCenterChild; // x0

  if ( (byte_418592A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11362/*"RefreshCurrentInfo"*/, method);
    byte_418592A = 1;
  }
  *(_WORD *)&this->fields.isChangeMasterImg = 1;
  this->fields.isDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_35308996(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11362/*"RefreshCurrentInfo"*/,
    0LL);
  MasterFormationComponent__setDisEquipEffect(this, v3);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 0, v4);
  iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
  if ( !iconCenterChild
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 0, 0LL),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 0, 0LL),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 0, 0LL),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.notificationDragState) == 0LL) )
  {
    sub_B2C434(iconCenterChild, v5);
  }
  MasterFormationComponent_NotificationDragState__Invoke(
    (MasterFormationComponent_NotificationDragState_o *)iconCenterChild,
    1,
    0LL);
}


void __fastcall MasterFormationComponent__OnIconCenterOnChildFinished(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  void *leftArrowBtn; // x0
  struct UICenterOnChild_o *iconCenterChild; // x8
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418592E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v7);
    sub_B2C35C(&StringLiteral_11362/*"RefreshCurrentInfo"*/, v8);
    byte_418592E = 1;
  }
  memset(&v16, 0, sizeof(v16));
  leftArrowBtn = this->fields.leftArrowBtn;
  if ( !leftArrowBtn )
    goto LABEL_20;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)leftArrowBtn, 1, 0LL);
  leftArrowBtn = this->fields.rightArrowBtn;
  if ( !leftArrowBtn )
    goto LABEL_20;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)leftArrowBtn, 1, 0LL);
  iconCenterChild = this->fields.iconCenterChild;
  if ( !iconCenterChild )
    goto LABEL_20;
  leftArrowBtn = iconCenterChild->fields.mCenteredObject;
  if ( !leftArrowBtn )
    goto LABEL_20;
  leftArrowBtn = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                   (UnityEngine_GameObject_o *)leftArrowBtn,
                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
  currentList = this->fields.currentList;
  if ( !currentList )
    goto LABEL_20;
  if ( currentList->fields._size >= 2 )
  {
    if ( !leftArrowBtn )
      goto LABEL_20;
    this->fields.currentMoveIconIdx = *((_DWORD *)leftArrowBtn + 12);
  }
  *(_WORD *)&this->fields.isDragStart = 0;
  UnityEngine_MonoBehaviour__CancelInvoke_35308996(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11362/*"RefreshCurrentInfo"*/,
    0LL);
  leftArrowBtn = this->fields.notificationDragState;
  if ( !leftArrowBtn )
    goto LABEL_20;
  MasterFormationComponent_NotificationDragState__Invoke(
    (MasterFormationComponent_NotificationDragState_o *)leftArrowBtn,
    0,
    0LL);
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v12);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v13);
  leftArrowBtn = this->fields.mstEqIconList;
  if ( !leftArrowBtn )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)leftArrowBtn,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v16.fields.current )
      sub_B2C434(0LL, v14);
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v16.fields.current, 1, v15);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  leftArrowBtn = this->fields.iconCenterChild;
  if ( !leftArrowBtn )
LABEL_20:
    sub_B2C434(leftArrowBtn, method);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)leftArrowBtn, 0, 0LL);
}


void __fastcall MasterFormationComponent__OnIconDragFinished(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418592C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v5);
    byte_418592C = 1;
  }
  memset(&v9, 0, sizeof(v9));
  iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
  if ( !iconCenterChild
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 1, 0LL),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
  {
    sub_B2C434(iconCenterChild, method);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)iconCenterChild,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B2C434(0LL, v7);
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v9.fields.current, 0, v8);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
}


void __fastcall MasterFormationComponent__OnIconDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0

  if ( (byte_418592B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11362/*"RefreshCurrentInfo"*/, method);
    byte_418592B = 1;
  }
  *(_WORD *)&this->fields.isChangeMasterImg = 257;
  this->fields.isIconDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_35308996(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11362/*"RefreshCurrentInfo"*/,
    0LL);
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 0, v3);
  leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
  if ( !leftArrowBtn
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL),
        (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL),
        (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL),
        (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.notificationDragState) == 0LL) )
  {
    sub_B2C434(leftArrowBtn, v4);
  }
  MasterFormationComponent_NotificationDragState__Invoke(
    (MasterFormationComponent_NotificationDragState_o *)leftArrowBtn,
    1,
    0LL);
}


void __fastcall MasterFormationComponent__RefreshCurrentInfo(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MasterFormationComponent_NotificationDragState_o *notificationDragState; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  UICenterOnChild_o *centerChild; // x20
  UICenterOnChild_o *iconCenterChild; // x20
  const MethodInfo *v9; // x1

  if ( (byte_418592F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_11362/*"RefreshCurrentInfo"*/, method);
    byte_418592F = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_35308996(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11362/*"RefreshCurrentInfo"*/,
    0LL);
  notificationDragState = this->fields.notificationDragState;
  if ( !notificationDragState )
    goto LABEL_22;
  MasterFormationComponent_NotificationDragState__Invoke(notificationDragState, 0, 0LL);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v5);
  if ( this->fields.isDragStart )
  {
    notificationDragState = (MasterFormationComponent_NotificationDragState_o *)this->fields.loopCtr;
    if ( !notificationDragState )
      goto LABEL_22;
    notificationDragState = (MasterFormationComponent_NotificationDragState_o *)UnityEngine_Component__get_transform(
                                                                                  (UnityEngine_Component_o *)notificationDragState,
                                                                                  0LL);
    if ( !notificationDragState )
      goto LABEL_22;
    if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)notificationDragState, 0LL) >= 1 )
    {
      notificationDragState = (MasterFormationComponent_NotificationDragState_o *)this->fields.loopCtr;
      this->fields.isDragStart = 0;
      if ( !notificationDragState )
        goto LABEL_22;
      centerChild = this->fields.centerChild;
      notificationDragState = (MasterFormationComponent_NotificationDragState_o *)UnityEngine_Component__get_transform(
                                                                                    (UnityEngine_Component_o *)notificationDragState,
                                                                                    0LL);
      if ( !notificationDragState )
        goto LABEL_22;
      notificationDragState = (MasterFormationComponent_NotificationDragState_o *)UnityEngine_Transform__GetChild(
                                                                                    (UnityEngine_Transform_o *)notificationDragState,
                                                                                    this->fields.currentMoveIdx,
                                                                                    0LL);
      if ( !centerChild )
        goto LABEL_22;
      UICenterOnChild__CenterOn_35704652(centerChild, (UnityEngine_Transform_o *)notificationDragState, 1, 0LL);
    }
  }
  if ( !this->fields.isIconDragStart )
  {
LABEL_20:
    MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v6);
    goto LABEL_21;
  }
  notificationDragState = (MasterFormationComponent_NotificationDragState_o *)this->fields.iconLoopCtr;
  if ( !notificationDragState
    || (notificationDragState = (MasterFormationComponent_NotificationDragState_o *)UnityEngine_Component__get_transform(
                                                                                      (UnityEngine_Component_o *)notificationDragState,
                                                                                      0LL)) == 0LL )
  {
LABEL_22:
    sub_B2C434(notificationDragState, v3);
  }
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)notificationDragState, 0LL) < 1 )
    goto LABEL_20;
  this->fields.isIconDragStart = 0;
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 0, v6);
  notificationDragState = (MasterFormationComponent_NotificationDragState_o *)this->fields.iconLoopCtr;
  if ( !notificationDragState )
    goto LABEL_22;
  iconCenterChild = this->fields.iconCenterChild;
  notificationDragState = (MasterFormationComponent_NotificationDragState_o *)UnityEngine_Component__get_transform(
                                                                                (UnityEngine_Component_o *)notificationDragState,
                                                                                0LL);
  if ( !notificationDragState )
    goto LABEL_22;
  notificationDragState = (MasterFormationComponent_NotificationDragState_o *)UnityEngine_Transform__GetChild(
                                                                                (UnityEngine_Transform_o *)notificationDragState,
                                                                                this->fields.currentMoveIconIdx,
                                                                                0LL);
  if ( !iconCenterChild )
    goto LABEL_22;
  UICenterOnChild__CenterOn_35704652(iconCenterChild, (UnityEngine_Transform_o *)notificationDragState, 1, 0LL);
LABEL_21:
  MasterFormationComponent__UpdateIconSelected(this, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__SetEnabledEquipDetailScroll(
        MasterFormationComponent_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *mScroll; // x0

  if ( this->fields.isScrollEquipDetail || !enabled )
  {
    mScroll = (UnityEngine_Behaviour_o *)this->fields.mScroll;
    if ( !mScroll
      || (UnityEngine_Behaviour__set_enabled(mScroll, enabled, 0LL),
          (mScroll = (UnityEngine_Behaviour_o *)this->fields.loopCtr) == 0LL)
      || (UnityEngine_Behaviour__set_enabled(mScroll, enabled, 0LL),
          (mScroll = (UnityEngine_Behaviour_o *)this->fields.centerChild) == 0LL) )
    {
      sub_B2C434(mScroll, enabled);
    }
    UnityEngine_Behaviour__set_enabled(mScroll, enabled, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__SetEnabledEquipIconScroll(
        MasterFormationComponent_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *iconScroll; // x0
  bool v5; // w20

  if ( this->fields.isScrollEquipIcon || !enabled )
  {
    iconScroll = (UnityEngine_Behaviour_o *)this->fields.iconScroll;
    if ( !iconScroll
      || (v5 = enabled,
          UnityEngine_Behaviour__set_enabled(iconScroll, enabled, 0LL),
          (iconScroll = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr) == 0LL) )
    {
      sub_B2C434(iconScroll, enabled);
    }
    UnityEngine_Behaviour__set_enabled(iconScroll, v5, 0LL);
  }
}


void __fastcall MasterFormationComponent__Update(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  UIScrollView_o *mScroll; // x0

  if ( this->fields.usrGameEnt )
  {
    MasterFormationComponent__setCommandSpellInfo(this, method);
    MasterFormationComponent__UpdateGuideLabel(this, v3);
    mScroll = this->fields.mScroll;
    if ( mScroll )
    {
      if ( !UIScrollView__get_isDragging(mScroll, 0LL) || this->fields.isDragStart )
        return;
      mScroll = this->fields.mScroll;
      if ( mScroll )
      {
        UIScrollView__Press(mScroll, 1, 0LL);
        return;
      }
    }
    sub_B2C434(mScroll, v4);
  }
}


void __fastcall MasterFormationComponent__UpdateGuideLabel(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *iconScroll; // x0
  float alphaAnimNow; // s8
  float alphaAnimTgt; // s9
  MasterFormationComponent_c *v6; // x0
  float realtimeSinceStartup; // s0
  bool v8; // w1

  if ( (byte_418591D & 1) == 0 )
  {
    sub_B2C35C(&MasterFormationComponent_TypeInfo, method);
    byte_418591D = 1;
  }
  iconScroll = (UnityEngine_Behaviour_o *)this->fields.iconScroll;
  if ( !iconScroll )
    goto LABEL_24;
  if ( UnityEngine_Behaviour__get_enabled(iconScroll, 0LL) )
  {
    alphaAnimNow = this->fields.alphaAnimNow;
    alphaAnimTgt = this->fields.alphaAnimTgt;
    v6 = MasterFormationComponent_TypeInfo;
    if ( (BYTE3(MasterFormationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MasterFormationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo);
      v6 = MasterFormationComponent_TypeInfo;
    }
    this->fields.alphaAnimNow = alphaAnimNow
                              + (float)((float)(alphaAnimTgt - alphaAnimNow) * v6->static_fields->ALPHA_ANIMATION_SPD);
    if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.alphaAnimTimeOld) >= MasterFormationComponent_TypeInfo->static_fields->ALPHA_ANIMATION_INTERVAL )
    {
      this->fields.alphaAnimTgt = 0.0;
      this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    }
    if ( this->fields.alphaAnimTgt <= 0.0 && this->fields.alphaAnimNow <= 0.01 )
    {
      *(_QWORD *)&this->fields.alphaAnimNow = 0x3F80000000000000LL;
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      iconScroll = (UnityEngine_Behaviour_o *)this->fields.touchGuideLabel;
      this->fields.alphaAnimTimeOld = realtimeSinceStartup;
      if ( !iconScroll )
        goto LABEL_24;
      iconScroll = (UnityEngine_Behaviour_o *)UnityEngine_Behaviour__get_enabled(iconScroll, 0LL);
      if ( !this->fields.touchGuideLabel )
        goto LABEL_24;
      if ( ((unsigned __int8)iconScroll & 1) != 0 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.touchGuideLabel, 0, 0LL);
        iconScroll = (UnityEngine_Behaviour_o *)this->fields.scrollGuideLabel;
        if ( !iconScroll )
          goto LABEL_24;
        v8 = 1;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.touchGuideLabel, 1, 0LL);
        iconScroll = (UnityEngine_Behaviour_o *)this->fields.scrollGuideLabel;
        if ( !iconScroll )
          goto LABEL_24;
        v8 = 0;
      }
      UnityEngine_Behaviour__set_enabled(iconScroll, v8, 0LL);
    }
    iconScroll = (UnityEngine_Behaviour_o *)this->fields.touchGuideLabel;
    if ( iconScroll )
    {
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, Il2CppClass *, float))iconScroll->klass[1]._1.castClass)(
        iconScroll,
        iconScroll->klass[1]._1.declaringType,
        this->fields.alphaAnimNow);
      iconScroll = (UnityEngine_Behaviour_o *)this->fields.scrollGuideLabel;
      if ( iconScroll )
      {
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, Il2CppClass *, float))iconScroll->klass[1]._1.castClass)(
          iconScroll,
          iconScroll->klass[1]._1.declaringType,
          this->fields.alphaAnimNow);
        return;
      }
    }
LABEL_24:
    sub_B2C434(iconScroll, method);
  }
}


void __fastcall MasterFormationComponent__UpdateIconSelected(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct System_Collections_Generic_List_MasterEquipIconComponent__o *mstEqIconList; // x22
  int size; // w20
  unsigned int v7; // w21
  MasterEquipIconComponent_o *v8; // x0

  if ( (byte_4185927 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Item__, v4);
    byte_4185927 = 1;
  }
  mstEqIconList = this->fields.mstEqIconList;
  if ( mstEqIconList )
  {
    size = mstEqIconList->fields._size;
    if ( size >= 1 )
    {
      v7 = 0;
      do
      {
        if ( mstEqIconList->fields._size <= v7 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v8 = mstEqIconList->fields._items->m_Items[v7];
        if ( !v8 )
          break;
        MasterEquipIconComponent__UpdateSelected(v8, this->fields.currentEquipId, v2);
        if ( (int)++v7 >= size )
          return;
        mstEqIconList = this->fields.mstEqIconList;
      }
      while ( mstEqIconList );
      sub_B2C434(v8, method);
    }
  }
}


void __fastcall MasterFormationComponent___changeCmdSpellImg_b__66_0(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  CommandSpellIconComponent_o *cmdSpellIconComp; // x0
  UnityEngine_Vector2_o v4; // 0:s0.4,4:s1.4

  cmdSpellIconComp = this->fields.cmdSpellIconComp;
  if ( !cmdSpellIconComp
    || (v4.fields.x = 130.0,
        v4.fields.y = 130.0,
        CommandSpellIconComponent__SetSize(cmdSpellIconComp, v4, 0LL),
        (cmdSpellIconComp = (CommandSpellIconComponent_o *)this->fields.cmdSpellTexture) == 0LL) )
  {
    sub_B2C434(cmdSpellIconComp, method);
  }
  ((void (__fastcall *)(CommandSpellIconComponent_o *, Il2CppClass *, float))cmdSpellIconComp->klass[1]._1.castClass)(
    cmdSpellIconComp,
    cmdSpellIconComp->klass[1]._1.declaringType,
    1.0);
}


void __fastcall MasterFormationComponent__add_notificationDragState(
        MasterFormationComponent_o *this,
        MasterFormationComponent_NotificationDragState_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *notificationDragState; // x21
  struct MasterFormationComponent_NotificationDragState_o **p_notificationDragState; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MasterFormationComponent_o *v10; // x0
  MasterFormationComponent_NotificationDragState_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_418591B & 1) == 0 )
  {
    sub_B2C35C(&MasterFormationComponent_NotificationDragState_TypeInfo, value);
    byte_418591B = 1;
  }
  notificationDragState = (System_Delegate_o *)this->fields.notificationDragState;
  p_notificationDragState = &this->fields.notificationDragState;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(notificationDragState, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MasterFormationComponent_NotificationDragState_c *)v7->klass != MasterFormationComponent_NotificationDragState_TypeInfo )
        break;
    }
    v8 = sub_B20D74(p_notificationDragState, v7, notificationDragState);
    v9 = notificationDragState == (System_Delegate_o *)v8;
    notificationDragState = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterFormationComponent_o *)sub_B2C728(v7);
  MasterFormationComponent__remove_notificationDragState(v10, v11, v12);
}


void __fastcall MasterFormationComponent__changeCmdSpellImg(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserGameEntity_o *SelfUserGame; // x22
  const MethodInfo *v5; // x3
  __int64 SpellImageId; // x0
  __int64 v7; // x1
  CommandSpellIconComponent_o *cmdSpellIconComp; // x21
  int32_t v9; // w20
  int32_t CommandSpell; // w22
  System_Action_o *v11; // x23

  if ( (byte_4185922 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__, v3);
    byte_4185922 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  SpellImageId = MasterFormationComponent__getSpellImageId(
                   (MasterFormationComponent_o *)SelfUserGame,
                   this->fields.genderType,
                   this->fields.currentEquipId,
                   v5);
  if ( !SelfUserGame
    || (cmdSpellIconComp = this->fields.cmdSpellIconComp,
        v9 = SpellImageId,
        CommandSpell = UserGameEntity__getCommandSpell(SelfUserGame, 0LL),
        v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)this,
          Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__,
          0LL),
        !cmdSpellIconComp) )
  {
    sub_B2C434(SpellImageId, v7);
  }
  CommandSpellIconComponent__SetChangeCurrentCmdSepll(cmdSpellIconComp, v9, CommandSpell, v11, 0LL);
}


void __fastcall MasterFormationComponent__closeMasterFormation(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *loopCtr; // x0
  int32_t childCount; // w0
  int32_t v7; // w20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v9; // w0
  int32_t v10; // w20
  UnityEngine_Object_o *v11; // x21

  if ( (byte_4185935 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&UserEquipNewManager_TypeInfo, v3);
    byte_4185935 = 1;
  }
  MasterFormationComponent__destroyMasterFigure(this, method);
  loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_31;
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL);
  if ( !loopCtr )
    goto LABEL_31;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)loopCtr, 0LL);
  v7 = childCount - 1;
  if ( childCount >= 1 )
  {
    while ( 1 )
    {
      loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
      if ( !loopCtr )
        break;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL);
      if ( !loopCtr )
        break;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)loopCtr, v7, 0LL);
      if ( !loopCtr )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(loopCtr, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35315108(gameObject, 0LL);
      if ( --v7 < 0 )
        goto LABEL_13;
    }
LABEL_31:
    sub_B2C434(loopCtr, v4);
  }
LABEL_13:
  loopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
  if ( !loopCtr )
    goto LABEL_31;
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL);
  if ( !loopCtr )
    goto LABEL_31;
  v9 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)loopCtr, 0LL);
  v10 = v9 - 1;
  if ( v9 >= 1 )
  {
    do
    {
      loopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
      if ( !loopCtr )
        goto LABEL_31;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL);
      if ( !loopCtr )
        goto LABEL_31;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)loopCtr, v10, 0LL);
      if ( !loopCtr )
        goto LABEL_31;
      v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(loopCtr, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35315108(v11, 0LL);
    }
    while ( --v10 >= 0 );
  }
  loopCtr = (UnityEngine_Component_o *)this->fields.userEquipEntity;
  if ( !loopCtr )
    goto LABEL_31;
  UserEquipEntity__SetOld((UserEquipEntity_o *)loopCtr, 0LL);
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  }
  UserEquipNewManager__WriteData(0LL);
  loopCtr = (UnityEngine_Component_o *)this->fields.mScroll;
  if ( !loopCtr )
    goto LABEL_31;
  UIScrollView__ResetPosition((UIScrollView_o *)loopCtr, 0LL);
  loopCtr = (UnityEngine_Component_o *)this->fields.iconScroll;
  if ( !loopCtr )
    goto LABEL_31;
  UIScrollView__ResetPosition((UIScrollView_o *)loopCtr, 0LL);
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !loopCtr )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)loopCtr, 0, 0LL);
}


void __fastcall MasterFormationComponent__destroyMasterFigure(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o **p_masterFigure; // x19
  UnityEngine_Object_o *v4; // x20
  struct UIMasterFigureTextureOld_o *masterFigure; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4185936 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185936 = 1;
  }
  masterFigure = this->fields.masterFigure;
  p_masterFigure = (UnityEngine_Component_o **)&this->fields.masterFigure;
  v4 = (UnityEngine_Object_o *)masterFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_masterFigure )
      sub_B2C434(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_masterFigure, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
    *p_masterFigure = 0LL;
    sub_B2C2F8(p_masterFigure, 0LL);
  }
}


int64_t __fastcall MasterFormationComponent__getCurrentUsrEquipId(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.currentUsrEquipId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MasterFormationComponent__getSpellImageId(
        MasterFormationComponent_o *this,
        int32_t genderType,
        int64_t equipId,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  void *writeMasterDataThreadException; // x19
  struct System_Threading_SynchronizationContext_o *context; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v4 = equipId;
  if ( (byte_4185934 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EquipMaster___, *(_QWORD *)&genderType);
    sub_B2C35C(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4185934 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      v4,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(Instance, v10);
  }
  if ( genderType == 2 )
  {
    context = *(struct System_Threading_SynchronizationContext_o **)&Instance->fields.writeMasterDataThreadEnd;
    writeMasterDataThreadException = Instance->fields.writeMasterDataThreadException;
  }
  else
  {
    context = Instance->fields.context;
    writeMasterDataThreadException = Instance->fields.writeMasterDataThread;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = context;
  *(_QWORD *)&v14.fields.fakeValue = writeMasterDataThreadException;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v14, 0LL);
}


bool __fastcall MasterFormationComponent__isChangeEquip(MasterFormationComponent_o *this, const MethodInfo *method)
{
  return this->fields.isChange;
}


void __fastcall MasterFormationComponent__onClickLeftArrow(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  int32_t childCount; // w8
  int v10; // w8
  int32_t v11; // w20
  UICenterOnChild_o *iconCenterChild; // x21
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4185932 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_11362/*"RefreshCurrentInfo"*/, v7);
    byte_4185932 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !this->fields.isDragStart && !this->fields.isIconDragStart )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
    *(_WORD *)&this->fields.isChangeMasterImg = 257;
    if ( !leftArrowBtn )
      goto LABEL_27;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_27;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    *(_WORD *)&this->fields.isDragStart = 0;
    UnityEngine_MonoBehaviour__CancelInvoke_35308996(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11362/*"RefreshCurrentInfo"*/,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr;
    if ( !leftArrowBtn )
      goto LABEL_27;
    leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)leftArrowBtn,
                                                0LL);
    if ( !leftArrowBtn )
      goto LABEL_27;
    childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)leftArrowBtn, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
    v10 = childCount - 1;
    v11 = this->fields.currentMoveIconIdx - 1 < 0 ? v10 : this->fields.currentMoveIconIdx - 1;
    this->fields.currentMoveIconIdx = v11;
    if ( !leftArrowBtn
      || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr) == 0LL)
      || (iconCenterChild = this->fields.iconCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0LL)) == 0LL)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v11,
                                                      0LL),
          !iconCenterChild)
      || (UICenterOnChild__CenterOn_35704652(iconCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
    {
LABEL_27:
      sub_B2C434(leftArrowBtn, method);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)leftArrowBtn,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v15.fields.current )
        sub_B2C434(0LL, v13);
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v15.fields.current, 0, v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  }
}


void __fastcall MasterFormationComponent__onClickRightArrow(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  int32_t childCount; // w0
  int32_t currentMoveIconIdx; // w9
  int32_t v11; // w8
  int32_t v12; // w20
  UICenterOnChild_o *iconCenterChild; // x21
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4185931 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_11362/*"RefreshCurrentInfo"*/, v7);
    byte_4185931 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( !this->fields.isDragStart && !this->fields.isIconDragStart )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
    *(_WORD *)&this->fields.isChangeMasterImg = 257;
    if ( !leftArrowBtn )
      goto LABEL_27;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_27;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    *(_WORD *)&this->fields.isDragStart = 0;
    UnityEngine_MonoBehaviour__CancelInvoke_35308996(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11362/*"RefreshCurrentInfo"*/,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr;
    if ( !leftArrowBtn )
      goto LABEL_27;
    leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)leftArrowBtn,
                                                0LL);
    if ( !leftArrowBtn )
      goto LABEL_27;
    childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)leftArrowBtn, 0LL);
    currentMoveIconIdx = this->fields.currentMoveIconIdx;
    v11 = childCount;
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
    v12 = currentMoveIconIdx + 1 < v11 ? currentMoveIconIdx + 1 : 0;
    this->fields.currentMoveIconIdx = v12;
    if ( !leftArrowBtn
      || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr) == 0LL)
      || (iconCenterChild = this->fields.iconCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0LL)) == 0LL)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v12,
                                                      0LL),
          !iconCenterChild)
      || (UICenterOnChild__CenterOn_35704652(iconCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
    {
LABEL_27:
      sub_B2C434(leftArrowBtn, method);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v16,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)leftArrowBtn,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v16,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v16.fields.current )
        sub_B2C434(0LL, v14);
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v16.fields.current, 0, v15);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v16,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  }
}


void __fastcall MasterFormationComponent__remove_notificationDragState(
        MasterFormationComponent_o *this,
        MasterFormationComponent_NotificationDragState_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *notificationDragState; // x21
  struct MasterFormationComponent_NotificationDragState_o **p_notificationDragState; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  MasterFormationComponent_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_418591C & 1) == 0 )
  {
    sub_B2C35C(&MasterFormationComponent_NotificationDragState_TypeInfo, value);
    byte_418591C = 1;
  }
  notificationDragState = (System_Delegate_o *)this->fields.notificationDragState;
  p_notificationDragState = &this->fields.notificationDragState;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(notificationDragState, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (MasterFormationComponent_NotificationDragState_c *)v7->klass != MasterFormationComponent_NotificationDragState_TypeInfo )
        break;
    }
    v8 = sub_B20D74(p_notificationDragState, v7, notificationDragState);
    v9 = notificationDragState == (System_Delegate_o *)v8;
    notificationDragState = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterFormationComponent_o *)sub_B2C728(v7);
  MasterFormationComponent__Update(v10, v11);
}


void __fastcall MasterFormationComponent__setChangeMasterInfo(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4185933 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5498/*"END_SET"*/, method);
    sub_B2C35C(&StringLiteral_11362/*"RefreshCurrentInfo"*/, v4);
    byte_4185933 = 1;
  }
  MasterFormationComponent__setMstImg(this, this->fields.currentEquipId, v2);
  if ( this->fields.isDragStart || this->fields.isIconDragStart )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11362/*"RefreshCurrentInfo"*/,
      0.1,
      0LL);
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B2C434(0LL, v5);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5498/*"END_SET"*/, 0LL);
}


void __fastcall MasterFormationComponent__setCmdSpellImg(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v6; // x1
  BattleWindowComponent_o *cmdSpellWinComp; // x20
  struct CommandSpellWindowComponent_o *v8; // x8
  struct CommandSpellWindowComponent_o *v9; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v10; // x21
  UnityEngine_Vector2_o v11; // 0:s0.4,4:s1.4

  if ( (byte_418591F & 1) == 0 )
  {
    sub_B2C35C(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo, method);
    sub_B2C35C(&Method_MasterFormationComponent_CloseCmdSpell__, v3);
    sub_B2C35C(&MasterFormationComponent_TypeInfo, v4);
    byte_418591F = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.cmdSpellIconComp )
    goto LABEL_13;
  CommandSpellIconComponent__SetData(this->fields.cmdSpellIconComp, SelfUserGame, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.cmdSpellIconComp;
  if ( !SelfUserGame )
    goto LABEL_13;
  v11.fields.x = 130.0;
  v11.fields.y = 130.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)SelfUserGame, v11, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.cmdSpellWinComp;
  if ( !SelfUserGame )
    goto LABEL_13;
  CommandSpellWindowComponent__InitializeCommandSpell((CommandSpellWindowComponent_o *)SelfUserGame, 0LL, 0, -1, 0LL);
  cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
  SelfUserGame = (UserGameEntity_o *)MasterFormationComponent_TypeInfo;
  if ( (BYTE3(MasterFormationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterFormationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo);
  }
  if ( !cmdSpellWinComp
    || (BattleWindowComponent__setInitData(
          cmdSpellWinComp,
          2,
          MasterFormationComponent_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME,
          0,
          0LL),
        (v8 = this->fields.cmdSpellWinComp) == 0LL)
    || (v8->fields.mode = 0,
        v9 = this->fields.cmdSpellWinComp,
        v10 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_B2C42C(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo),
        CommandSpellWindowComponent_CloseButtonCallBack___ctor(
          v10,
          (Il2CppObject *)this,
          Method_MasterFormationComponent_CloseCmdSpell__,
          0LL),
        !v9) )
  {
LABEL_13:
    sub_B2C434(SelfUserGame, v6);
  }
  v9->fields.callback_close = v10;
  sub_B2C2F8(&v9->fields.callback_close, v10);
}


void __fastcall MasterFormationComponent__setCmdSpellRecoverTime(
        MasterFormationComponent_o *this,
        int64_t recoverTime,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *recoverTitleLb; // x21
  System_String_o *cmdSpellRecTimeInfo; // x0
  unsigned __int64 v10; // x22
  int v11; // w23
  int v12; // w24
  UILabel_o *recoverTimeLb; // x19
  System_String_o *v14; // x20
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x0
  int v18; // [xsp+Ch] [xbp-44h] BYREF
  int v19; // [xsp+18h] [xbp-38h] BYREF
  int v20; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4185920 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, recoverTime);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_3256/*"COMMAND_SPELL_RECOVER_TIME"*/, v6);
    sub_B2C35C(&StringLiteral_3258/*"COMMNAD_SPELL_RECV_TXT"*/, v7);
    byte_4185920 = 1;
  }
  if ( recoverTime > 0 )
  {
    recoverTitleLb = this->fields.recoverTitleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    cmdSpellRecTimeInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3258/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
    if ( recoverTitleLb )
    {
      v10 = recoverTime / 0xE10uLL;
      v11 = (int)(recoverTime / 0x3CuLL) % 60;
      v12 = recoverTime % 0x3CuLL;
      UILabel__set_text(recoverTitleLb, cmdSpellRecTimeInfo, 0LL);
      recoverTimeLb = this->fields.recoverTimeLb;
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3256/*"COMMAND_SPELL_RECOVER_TIME"*/, 0LL);
      v20 = v10;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
      v19 = v11;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
      v18 = v12;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
      cmdSpellRecTimeInfo = System_String__Format_44306596(v14, v15, v16, v17, 0LL);
      if ( recoverTimeLb )
      {
        UILabel__set_text(recoverTimeLb, cmdSpellRecTimeInfo, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B2C434(cmdSpellRecTimeInfo, recoverTime);
  }
  cmdSpellRecTimeInfo = (System_String_o *)this->fields.cmdSpellRecTimeInfo;
  if ( !cmdSpellRecTimeInfo )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellRecTimeInfo, 0, 0LL);
}


void __fastcall MasterFormationComponent__setCommandSpellInfo(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *usrGameEnt; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1
  int64_t recoverTime; // [xsp+8h] [xbp-18h] BYREF
  int32_t count; // [xsp+1Ch] [xbp-4h] BYREF

  count = 0;
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_B2C434(0LL, method);
  UserGameEntity__getCmdSpellInfo(usrGameEnt, &count, &recoverTime, 0LL);
  MasterFormationComponent__setCmdSpellRecoverTime(this, recoverTime, v4);
  if ( this->fields.cmdCnt != count )
  {
    this->fields.cmdCnt = count;
    MasterFormationComponent__setCmdSpellImg(this, v5);
  }
}


void __fastcall MasterFormationComponent__setDisEquipEffect(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_MasterEquipInfoComponent__o *mstEqInfoList; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4185930 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__, v5);
    byte_4185930 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  mstEqInfoList = this->fields.mstEqInfoList;
  if ( !mstEqInfoList )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mstEqInfoList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B2C434(0LL, v7);
    MasterEquipInfoComponent__setDispEffectObj((MasterEquipInfoComponent_o *)v9.fields.current, 0, v8);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setDispRePosition(
        MasterFormationComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UIWrapContent_o *loopCtr; // x0
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x9
  int v8; // w8
  int32_t v9; // w1
  UICenterOnChild_o *iconCenterChild; // x21

  if ( (byte_4185929 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, *(_QWORD *)&idx);
    sub_B2C35C(&MasterFormationComponent_TypeInfo, v5);
    byte_4185929 = 1;
  }
  loopCtr = this->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_24;
  UIWrapContent__setScrollPos(loopCtr, idx, 0LL);
  if ( this->fields.isScrollEquipIcon )
  {
    if ( this->fields.isFirst )
    {
      this->fields.isFirst = 0;
      loopCtr = (UIWrapContent_o *)MasterFormationComponent_TypeInfo;
      if ( (BYTE3(MasterFormationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MasterFormationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo);
        loopCtr = (UIWrapContent_o *)MasterFormationComponent_TypeInfo;
      }
      currentList = this->fields.currentList;
      v8 = idx - SHIDWORD(loopCtr[1].fields.callbackFunc->klass) / 2;
      if ( v8 < 0 )
      {
        if ( !currentList )
          goto LABEL_24;
        v8 += currentList->fields._size;
      }
      else if ( !currentList )
      {
        goto LABEL_24;
      }
      loopCtr = this->fields.iconLoopCtr;
      if ( !loopCtr )
        goto LABEL_24;
      v9 = currentList->fields._size + v8;
    }
    else
    {
      loopCtr = this->fields.iconLoopCtr;
      if ( !loopCtr )
        goto LABEL_24;
      v9 = idx;
    }
    UIWrapContent__setScrollPos(loopCtr, v9, 0LL);
    loopCtr = (UIWrapContent_o *)this->fields.iconCenterChild;
    if ( loopCtr )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)loopCtr, 1, 0LL);
      loopCtr = this->fields.iconLoopCtr;
      if ( loopCtr )
      {
        iconCenterChild = this->fields.iconCenterChild;
        loopCtr = (UIWrapContent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)loopCtr, 0LL);
        if ( loopCtr )
        {
          loopCtr = (UIWrapContent_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)loopCtr, idx, 0LL);
          if ( iconCenterChild )
          {
            UICenterOnChild__CenterOn_35704652(iconCenterChild, (UnityEngine_Transform_o *)loopCtr, 1, 0LL);
            goto LABEL_23;
          }
        }
      }
    }
LABEL_24:
    sub_B2C434(loopCtr, *(_QWORD *)&idx);
  }
LABEL_23:
  this->fields.currentMoveIdx = idx;
  this->fields.currentMoveIconIdx = idx;
}


void __fastcall MasterFormationComponent__setMasterFormation(
        MasterFormationComponent_o *this,
        UserGameEntity_o *userData,
        int64_t userEquipId,
        MasterFormationComponent_NotificationDragState_o *notificationDragState,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  int32_t lv; // w8
  __int64 v17; // x21
  __int64 v18; // x21
  UserServantEntity_o *Entity; // x0
  struct UserEquipEntity_o *userEquipEntity; // x8
  __int64 v21; // x21
  __int64 v22; // x22
  int32_t v23; // w1
  const MethodInfo *v24; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_418591E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEquipMaster___, userData);
    sub_B2C35C(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    byte_418591E = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_B2C2F8(&this->fields.usrGameEnt, SelfUserGame);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.arrowInfo;
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.mScroll;
  if ( !gameObject )
    goto LABEL_26;
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.iconScroll;
  if ( !gameObject )
    goto LABEL_26;
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0LL);
  this->fields.usrGameEnt = userData;
  sub_B2C2F8(&this->fields.usrGameEnt, userData);
  if ( userEquipId <= 0 )
  {
    if ( !userData )
      goto LABEL_26;
    gameObject = (UnityEngine_GameObject_o *)UserGameEntity__getActiveUserEquipId(userData, 0LL);
    this->fields.usrEquipId = (int64_t)gameObject;
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)userEquipId;
    this->fields.usrEquipId = userEquipId;
    if ( !userData )
      goto LABEL_26;
  }
  lv = userData->fields.lv;
  this->fields.currentMoveIconIdx = 0;
  this->fields.currentMoveIdx = 0;
  this->fields.currentEquipId = 0;
  this->fields.usrLv = lv;
  this->fields.currentUsrEquipId = userEquipId;
  if ( (__int64)gameObject < 1 )
  {
    v23 = 0;
    goto LABEL_25;
  }
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v18 = **(_QWORD **)(v17 + 192);
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    sub_AC505C(v18);
  gameObject = **(UnityEngine_GameObject_o ***)(v18 + 184);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)gameObject,
                   this->fields.usrEquipId,
                   (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__),
        this->fields.userEquipEntity = (struct UserEquipEntity_o *)Entity,
        sub_B2C2F8(&this->fields.userEquipEntity, Entity),
        (userEquipEntity = this->fields.userEquipEntity) == 0LL) )
  {
LABEL_26:
    sub_B2C434(gameObject, v14);
  }
  v22 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = v22;
  *(_QWORD *)&v25.fields.fakeValue = v21;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v25, 0LL);
  this->fields.currentEquipId = v23;
LABEL_25:
  MasterFormationComponent__setMstImg(this, v23, v15);
  MasterFormationComponent__setUsrEquipData(this, v24);
  this->fields.isChangeMasterImg = 1;
  this->fields.notificationDragState = notificationDragState;
  sub_B2C2F8(&this->fields.notificationDragState, notificationDragState);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setMstEquipIconList(
        MasterFormationComponent_o *this,
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  struct UICenterOnChild_o **p_iconCenterChild; // x21
  UnityEngine_Object_o *iconCenterChild; // x22
  UnityEngine_Component_o *iconLoopCtr; // x0
  __int64 v31; // x1
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v32; // x0
  struct UIWrapContent_o *v33; // x8
  UILabel_o *touchGuideLabel; // x22
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  const MethodInfo *v36; // x2
  float x; // s10
  float y; // s8
  float z; // s9
  struct UIScrollView_o *iconScroll; // x22
  _QWORD *p_onDragFinished; // x22
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v43; // x24
  System_Delegate_o *v44; // x0
  System_Delegate_o *v45; // x8
  struct UIScrollView_o *v46; // x22
  _QWORD *p_onMomentumMove; // x22
  System_Delegate_o *onMomentumMove; // t1
  UIScrollView_OnDragNotification_o *v49; // x24
  System_Delegate_o *v50; // x0
  struct UICenterOnChild_o *v51; // x21
  System_Delegate_o **p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v54; // x23
  System_Delegate_o *v55; // x0
  UILabel_o *scrollGuideLabel; // x21
  bool isScrollEquipIcon; // w1
  int v58; // w8
  struct UIWrapContent_o *v59; // x8
  int v60; // w8
  int v61; // w9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x21
  int v63; // w9
  unsigned __int64 i; // x20
  UnityEngine_GameObject_o *equipIconPrefab; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v67; // x22
  UnityEngine_Transform_o *v68; // x23
  int v69; // s0
  UnityEngine_Transform_o *v72; // x23
  int v73; // s0
  System_String_o *v76; // x0
  MasterEquipIconComponent_o *v77; // x22
  struct System_Collections_Generic_List_UserEquipEntity__o *v78; // x23
  struct UserEquipEntity_array *items; // x8
  int32_t v80; // w23
  UserEquipEntity_o *v81; // x24
  MasterEquipIconComponent_CallbackFunc_o *v82; // x25
  int64_t v83; // x2
  int32_t v84; // w3
  const MethodInfo *v85; // x6
  const MethodInfo *v86; // x2
  int v87; // w8
  int v88; // w20
  struct UIWrapContent_o *v89; // x8
  int v90; // s0
  MasterFormationComponent_o *v91; // x0
  const MethodInfo *v92; // x1
  unsigned int v93; // [xsp+Ch] [xbp-84h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_mstEqIconList; // [xsp+10h] [xbp-80h]
  signed __int64 size; // [xsp+18h] [xbp-78h]
  int v96; // [xsp+28h] [xbp-68h]
  int32_t v97; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4185925 & 1) == 0 )
  {
    sub_B2C35C(&MasterEquipIconComponent_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__get_Item__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v12);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v13);
    sub_B2C35C(&System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo, v14);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&Method_MasterFormationComponent_OnClickIcon__, v16);
    sub_B2C35C(&Method_MasterFormationComponent_OnIconCenterOnChildFinished__, v17);
    sub_B2C35C(&Method_MasterFormationComponent_OnIconDragFinished__, v18);
    sub_B2C35C(&Method_MasterFormationComponent_OnIconDragStarted__, v19);
    sub_B2C35C(&MasterFormationComponent_TypeInfo, v20);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v21);
    sub_B2C35C(&UIScrollView_OnDragNotification_TypeInfo, v22);
    sub_B2C35C(&SpringPanel_OnFinished_TypeInfo, v23);
    sub_B2C35C(&StringLiteral_8635/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/, v24);
    sub_B2C35C(&StringLiteral_8634/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/, v25);
    sub_B2C35C(&StringLiteral_4547/*"D3"*/, v26);
    byte_4185925 = 1;
  }
  v97 = 0;
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__);
  this->fields.mstEqIconList = (struct System_Collections_Generic_List_MasterEquipIconComponent__o *)v27;
  p_mstEqIconList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.mstEqIconList;
  sub_B2C2F8(&this->fields.mstEqIconList, v27);
  p_iconCenterChild = &this->fields.iconCenterChild;
  iconCenterChild = (UnityEngine_Object_o *)this->fields.iconCenterChild;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(iconCenterChild, 0LL, 0LL);
  if ( ((unsigned __int8)iconLoopCtr & 1) != 0 )
  {
    iconLoopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
    if ( !iconLoopCtr )
      goto LABEL_76;
    iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(iconLoopCtr, 0LL);
    if ( !iconLoopCtr )
      goto LABEL_76;
    v32 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
            (UnityEngine_GameObject_o *)iconLoopCtr,
            (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_iconCenterChild = (struct UICenterOnChild_o *)v32;
    sub_B2C2F8(&this->fields.iconCenterChild, v32);
  }
  v33 = this->fields.iconLoopCtr;
  if ( !v33 )
    goto LABEL_76;
  *(_DWORD *)&v33->fields.cullContent = 64;
  touchGuideLabel = this->fields.touchGuideLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  iconLoopCtr = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8635/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/, 0LL);
  if ( !touchGuideLabel
    || (UILabel__set_text(touchGuideLabel, (System_String_o *)iconLoopCtr, 0LL),
        (currentList = this->fields.currentList) == 0LL)
    || (iconLoopCtr = (UnityEngine_Component_o *)this->fields.iconScroll) == 0LL
    || (size = currentList->fields._size,
        (iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconLoopCtr, 0LL)) == 0LL) )
  {
LABEL_76:
    sub_B2C434(iconLoopCtr, v31);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconLoopCtr, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  iconLoopCtr = (UnityEngine_Component_o *)MasterFormationComponent_TypeInfo;
  if ( (BYTE3(MasterFormationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterFormationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo);
    iconLoopCtr = (UnityEngine_Component_o *)MasterFormationComponent_TypeInfo;
  }
  if ( (int)size <= *(_DWORD *)(*(_QWORD *)&iconLoopCtr[7].fields.m_CachedPtr + 4LL) )
  {
    v59 = this->fields.iconLoopCtr;
    this->fields.isScrollEquipIcon = 0;
    if ( !v59 )
      goto LABEL_76;
    v60 = *(_DWORD *)&v59->fields.cullContent;
    isScrollEquipIcon = 0;
    v61 = size - 1;
    if ( (int)size - 1 < 0 )
      v61 = size;
    x = (float)-((v61 >> 1) * v60);
    if ( (size & 1) == 0 )
      x = x - (float)(v60 / 2);
    v58 = 1;
  }
  else
  {
    iconScroll = this->fields.iconScroll;
    this->fields.isScrollEquipIcon = 1;
    if ( !iconScroll )
      goto LABEL_76;
    onDragFinished = (System_Delegate_o *)iconScroll->fields.onDragFinished;
    p_onDragFinished = &iconScroll->fields.onDragFinished;
    v43 = (UIScrollView_OnDragNotification_o *)sub_B2C42C(UIScrollView_OnDragNotification_TypeInfo);
    UIScrollView_OnDragNotification___ctor(
      v43,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragStarted__,
      0LL);
    v44 = System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v43, 0LL);
    v45 = v44;
    if ( v44 && (UIScrollView_OnDragNotification_c *)v44->klass != UIScrollView_OnDragNotification_TypeInfo )
      goto LABEL_77;
    *p_onDragFinished = v44;
    sub_B2C2F8(p_onDragFinished, v44);
    v46 = this->fields.iconScroll;
    if ( !v46 )
      goto LABEL_76;
    onMomentumMove = (System_Delegate_o *)v46->fields.onMomentumMove;
    p_onMomentumMove = &v46->fields.onMomentumMove;
    v49 = (UIScrollView_OnDragNotification_o *)sub_B2C42C(UIScrollView_OnDragNotification_TypeInfo);
    UIScrollView_OnDragNotification___ctor(
      v49,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragFinished__,
      0LL);
    v50 = System_Delegate__Combine(onMomentumMove, (System_Delegate_o *)v49, 0LL);
    v45 = v50;
    if ( v50 )
    {
      if ( (UIScrollView_OnDragNotification_c *)v50->klass != UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_77;
    }
    *p_onMomentumMove = v50;
    sub_B2C2F8(p_onMomentumMove, v50);
    v51 = *p_iconCenterChild;
    if ( !v51 )
      goto LABEL_76;
    onFinished = (System_Delegate_o *)v51->fields.onFinished;
    p_onFinished = (System_Delegate_o **)&v51->fields.onFinished;
    v54 = (SpringPanel_OnFinished_o *)sub_B2C42C(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(
      v54,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconCenterOnChildFinished__,
      0LL);
    v55 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v54, 0LL);
    v45 = v55;
    if ( v55 )
    {
      if ( (SpringPanel_OnFinished_c *)v55->klass != SpringPanel_OnFinished_TypeInfo )
      {
LABEL_77:
        v91 = (MasterFormationComponent_o *)sub_B2C728(v45);
        MasterFormationComponent__setPosCurrentEq(v91, v92);
        return;
      }
    }
    *p_onFinished = v55;
    sub_B2C2F8(p_onFinished, v55);
    iconLoopCtr = (UnityEngine_Component_o *)this->fields.arrowInfo;
    if ( !iconLoopCtr )
      goto LABEL_76;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLoopCtr, 1, 0LL);
    scrollGuideLabel = this->fields.scrollGuideLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    iconLoopCtr = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8634/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/, 0LL);
    if ( !scrollGuideLabel )
      goto LABEL_76;
    UILabel__set_text(scrollGuideLabel, (System_String_o *)iconLoopCtr, 0LL);
    isScrollEquipIcon = this->fields.isScrollEquipIcon;
    v58 = 2;
  }
  v93 = v58;
  MasterFormationComponent__SetEnabledEquipIconScroll(this, isScrollEquipIcon, v36);
  iconLoopCtr = (UnityEngine_Component_o *)this->fields.iconCenterChild;
  if ( !iconLoopCtr )
    goto LABEL_76;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)iconLoopCtr, 0, 0LL);
  v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v62,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v97 = 0;
  v63 = 0;
  do
  {
    v96 = v63;
    if ( (int)size >= 1 )
    {
      for ( i = 0LL; (__int64)i < size; ++i )
      {
        iconLoopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
        if ( !iconLoopCtr )
          goto LABEL_76;
        equipIconPrefab = this->fields.equipIconPrefab;
        transform = UnityEngine_Component__get_transform(iconLoopCtr, 0LL);
        iconLoopCtr = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                   (BaseMonoBehaviour_o *)this,
                                                   equipIconPrefab,
                                                   transform,
                                                   0LL,
                                                   0LL);
        if ( !iconLoopCtr )
          goto LABEL_76;
        v67 = (UnityEngine_GameObject_o *)iconLoopCtr;
        v68 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)iconLoopCtr, 0LL);
        *(UnityEngine_Vector3_o *)&v69 = UnityEngine_Vector3__get_one(0LL);
        if ( !v68 )
          goto LABEL_76;
        UnityEngine_Transform__set_localScale(v68, *(UnityEngine_Vector3_o *)&v69, 0LL);
        iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v67, 0LL);
        if ( !this->fields.iconLoopCtr )
          goto LABEL_76;
        v72 = (UnityEngine_Transform_o *)iconLoopCtr;
        iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this->fields.iconLoopCtr,
                                                   0LL);
        if ( !iconLoopCtr )
          goto LABEL_76;
        *(UnityEngine_Vector3_o *)&v73 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)iconLoopCtr,
                                           0LL);
        if ( !v72 )
          goto LABEL_76;
        UnityEngine_Transform__set_localPosition(v72, *(UnityEngine_Vector3_o *)&v73, 0LL);
        v76 = System_Int32__ToString_38381416((int32_t)&v97, (System_String_o *)StringLiteral_4547/*"D3"*/, 0LL);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v67, v76, 0LL);
        if ( !v62 )
          goto LABEL_76;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v62,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v67,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
        iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   v67,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
        if ( !*p_mstEqIconList )
          goto LABEL_76;
        v77 = (MasterEquipIconComponent_o *)iconLoopCtr;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_mstEqIconList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)iconLoopCtr,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__);
        v78 = this->fields.currentList;
        if ( !v78 )
          goto LABEL_76;
        if ( i >= (unsigned int)v78->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        items = v78->fields._items;
        v80 = v97;
        v81 = items->m_Items[i];
        v82 = (MasterEquipIconComponent_CallbackFunc_o *)sub_B2C42C(MasterEquipIconComponent_CallbackFunc_TypeInfo);
        MasterEquipIconComponent_CallbackFunc___ctor(
          v82,
          (Il2CppObject *)this,
          Method_MasterFormationComponent_OnClickIcon__,
          0LL);
        if ( !v77 )
          goto LABEL_76;
        MasterEquipIconComponent__SetEquipInfo(v77, v81, v83, v84, v80, v82, v85);
        MasterEquipIconComponent__UpdateSelected(v77, this->fields.currentEquipId, v86);
        ++v97;
      }
    }
    v63 = v96 + 1;
  }
  while ( v96 + 1 < v93 );
  iconLoopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
  if ( !iconLoopCtr )
    goto LABEL_76;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)iconLoopCtr, 0LL);
  iconLoopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
  if ( !iconLoopCtr )
    goto LABEL_76;
  UIWrapContent__resetScroll((UIWrapContent_o *)iconLoopCtr, 0LL);
  if ( this->fields.isScrollEquipIcon )
  {
    iconLoopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
    if ( iconLoopCtr )
    {
      UIWrapContent__WrapContent((UIWrapContent_o *)iconLoopCtr, 0LL);
      return;
    }
    goto LABEL_76;
  }
  if ( !v62 )
    goto LABEL_76;
  v87 = v62->fields._size;
  if ( v87 >= 1 )
  {
    v88 = 0;
    while ( 1 )
    {
      if ( v87 <= (unsigned int)v88 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      iconLoopCtr = (UnityEngine_Component_o *)v62->fields._items->m_Items[v88];
      if ( !iconLoopCtr )
        break;
      iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)iconLoopCtr,
                                                 0LL);
      if ( !iconLoopCtr )
        break;
      v99.fields.x = x;
      v99.fields.y = y;
      v99.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconLoopCtr, v99, 0LL);
      v89 = this->fields.iconLoopCtr;
      if ( !v89 )
        break;
      v90 = *(_DWORD *)&v89->fields.cullContent;
      v87 = v62->fields._size;
      ++v88;
      x = x + (float)v90;
      if ( v88 >= v87 )
        return;
    }
    goto LABEL_76;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setMstEquipList(MasterFormationComponent_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_mstEqInfoList; // x20
  struct UICenterOnChild_o **p_centerChild; // x21
  UnityEngine_Object_o *centerChild; // x22
  UnityEngine_Component_o *loopCtr; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v22; // x0
  struct UIWrapContent_o *v23; // x8
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  signed __int64 size; // x25
  bool isScrollEquipDetail; // w1
  int v27; // w8
  struct UIScrollView_o *mScroll; // x22
  _QWORD *p_onDragFinished; // x22
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v31; // x24
  System_Delegate_o *v32; // x0
  System_Delegate_o *v33; // x8
  struct UICenterOnChild_o *v34; // x21
  System_Delegate_o **p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v37; // x23
  System_Delegate_o *v38; // x0
  int v39; // w24
  unsigned __int64 v40; // x23
  UnityEngine_GameObject_o *mstEquipInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v43; // x21
  UnityEngine_Transform_o *v44; // x22
  int v45; // s0
  UnityEngine_Transform_o *v48; // x22
  int v49; // s0
  System_String_o *v52; // x0
  MasterEquipInfoComponent_o *v53; // x21
  int32_t v54; // w3
  const MethodInfo *v55; // x5
  struct System_Collections_Generic_List_UserEquipEntity__o *v56; // x22
  MasterFormationComponent_o *v57; // x0
  const MethodInfo *v58; // x1
  unsigned int v59; // [xsp+8h] [xbp-58h]
  int32_t moveIdx; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4185924 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v7);
    sub_B2C35C(&System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo, v8);
    sub_B2C35C(&Method_MasterFormationComponent_OnCenterOnChildFinished__, v9);
    sub_B2C35C(&Method_MasterFormationComponent_OnDragStarted__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&UIScrollView_OnDragNotification_TypeInfo, v12);
    sub_B2C35C(&SpringPanel_OnFinished_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_4547/*"D3"*/, v14);
    byte_4185924 = 1;
  }
  moveIdx = 0;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__);
  p_mstEqInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.mstEqInfoList;
  this->fields.mstEqInfoList = (struct System_Collections_Generic_List_MasterEquipInfoComponent__o *)v15;
  sub_B2C2F8(&this->fields.mstEqInfoList, v15);
  p_centerChild = &this->fields.centerChild;
  centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality(centerChild, 0LL, 0LL);
  if ( ((unsigned __int8)loopCtr & 1) != 0 )
  {
    loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
    if ( !loopCtr )
      goto LABEL_41;
    loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(loopCtr, 0LL);
    if ( !loopCtr )
      goto LABEL_41;
    v22 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
            (UnityEngine_GameObject_o *)loopCtr,
            (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (struct UICenterOnChild_o *)v22;
    sub_B2C2F8(&this->fields.centerChild, v22);
  }
  v23 = this->fields.loopCtr;
  if ( !v23 )
    goto LABEL_41;
  *(_DWORD *)&v23->fields.cullContent = 534;
  currentList = this->fields.currentList;
  if ( !currentList )
    goto LABEL_41;
  size = currentList->fields._size;
  if ( (int)size < 2 )
  {
    isScrollEquipDetail = 0;
    v27 = 1;
    this->fields.isScrollEquipDetail = 0;
LABEL_21:
    v59 = v27;
    MasterFormationComponent__SetEnabledEquipDetailScroll(this, isScrollEquipDetail, v21);
    moveIdx = 0;
    v39 = 0;
    while ( (int)size < 1 )
    {
LABEL_36:
      if ( ++v39 >= v59 )
      {
        loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
        if ( loopCtr )
        {
          UIWrapContent__SortAlphabetically((UIWrapContent_o *)loopCtr, 0LL);
          loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
          if ( loopCtr )
          {
            UIWrapContent__resetScroll((UIWrapContent_o *)loopCtr, 0LL);
            loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
            if ( loopCtr )
            {
              UIWrapContent__WrapContent((UIWrapContent_o *)loopCtr, 0LL);
              return;
            }
          }
        }
LABEL_41:
        sub_B2C434(loopCtr, v20);
      }
    }
    v40 = 0LL;
    while ( 1 )
    {
      loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
      if ( !loopCtr )
        goto LABEL_41;
      mstEquipInfoPrefab = this->fields.mstEquipInfoPrefab;
      transform = UnityEngine_Component__get_transform(loopCtr, 0LL);
      loopCtr = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)this,
                                             mstEquipInfoPrefab,
                                             transform,
                                             0LL,
                                             0LL);
      if ( !loopCtr )
        goto LABEL_41;
      v43 = (UnityEngine_GameObject_o *)loopCtr;
      v44 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)loopCtr, 0LL);
      *(UnityEngine_Vector3_o *)&v45 = UnityEngine_Vector3__get_one(0LL);
      if ( !v44 )
        goto LABEL_41;
      UnityEngine_Transform__set_localScale(v44, *(UnityEngine_Vector3_o *)&v45, 0LL);
      loopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v43, 0LL);
      if ( !this->fields.loopCtr )
        goto LABEL_41;
      v48 = (UnityEngine_Transform_o *)loopCtr;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)this->fields.loopCtr,
                                             0LL);
      if ( !loopCtr )
        goto LABEL_41;
      *(UnityEngine_Vector3_o *)&v49 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)loopCtr, 0LL);
      if ( !v48 )
        goto LABEL_41;
      UnityEngine_Transform__set_localPosition(v48, *(UnityEngine_Vector3_o *)&v49, 0LL);
      v52 = System_Int32__ToString_38381416((int32_t)&moveIdx, (System_String_o *)StringLiteral_4547/*"D3"*/, 0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v43, v52, 0LL);
      loopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v43,
                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
      if ( !*p_mstEqInfoList )
        goto LABEL_41;
      v53 = (MasterEquipInfoComponent_o *)loopCtr;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *p_mstEqInfoList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)loopCtr,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__);
      v56 = this->fields.currentList;
      if ( !v56 )
        goto LABEL_41;
      if ( v40 >= (unsigned int)v56->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !v53 )
        goto LABEL_41;
      MasterEquipInfoComponent__setEquipInfo(
        v53,
        v56->fields._items->m_Items[v40++],
        this->fields.usrEquipId,
        v54,
        moveIdx++,
        v55);
      if ( (__int64)v40 >= size )
        goto LABEL_36;
    }
  }
  mScroll = this->fields.mScroll;
  this->fields.isScrollEquipDetail = 1;
  if ( !mScroll )
    goto LABEL_41;
  onDragFinished = (System_Delegate_o *)mScroll->fields.onDragFinished;
  p_onDragFinished = &mScroll->fields.onDragFinished;
  v31 = (UIScrollView_OnDragNotification_o *)sub_B2C42C(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(
    v31,
    (Il2CppObject *)this,
    Method_MasterFormationComponent_OnDragStarted__,
    0LL);
  v32 = System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v31, 0LL);
  v33 = v32;
  if ( !v32 || (UIScrollView_OnDragNotification_c *)v32->klass == UIScrollView_OnDragNotification_TypeInfo )
  {
    *p_onDragFinished = v32;
    sub_B2C2F8(p_onDragFinished, v32);
    v34 = *p_centerChild;
    if ( !v34 )
      goto LABEL_41;
    onFinished = (System_Delegate_o *)v34->fields.onFinished;
    p_onFinished = (System_Delegate_o **)&v34->fields.onFinished;
    v37 = (SpringPanel_OnFinished_o *)sub_B2C42C(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(
      v37,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnCenterOnChildFinished__,
      0LL);
    v38 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v37, 0LL);
    v33 = v38;
    if ( !v38 || (SpringPanel_OnFinished_c *)v38->klass == SpringPanel_OnFinished_TypeInfo )
    {
      *p_onFinished = v38;
      sub_B2C2F8(p_onFinished, v38);
      isScrollEquipDetail = this->fields.isScrollEquipDetail;
      v27 = 2;
      goto LABEL_21;
    }
  }
  v57 = (MasterFormationComponent_o *)sub_B2C728(v33);
  MasterFormationComponent__setMstEquipIconList(v57, v58);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setMstImg(
        MasterFormationComponent_o *this,
        int32_t equipId,
        const MethodInfo *method)
{
  MasterFormationComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  UnityEngine_Object_o *masterFigure; // x22
  UIMasterFigureTextureOld_o *Prefab_21041272; // x0
  UIMasterFigureTextureOld_o *v11; // x21
  int32_t genderType; // w20
  void *iconCenterChild; // x8
  System_Action_o *v14; // x22
  Il2CppObject *v15; // x23
  struct MasterFormationComponent___c_StaticFields *static_fields; // x0
  const MethodInfo *v17; // [xsp+10h] [xbp-40h]

  v4 = this;
  if ( (byte_4185921 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&equipId);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_MasterFormationComponent___c__setMstImg_b__65_0__, v6);
    this = (MasterFormationComponent_o *)sub_B2C35C(&MasterFormationComponent___c_TypeInfo, v7);
    byte_4185921 = 1;
  }
  usrGameEnt = v4->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_19;
  masterFigure = (UnityEngine_Object_o *)v4->fields.masterFigure;
  v4->fields.genderType = usrGameEnt->fields.genderType;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(masterFigure, 0LL, 0LL) )
  {
    Prefab_21041272 = MasterFigureManagerOld__CreatePrefab_21041272(
                        v4->fields.mstImgBase,
                        1,
                        v4->fields.genderType,
                        equipId,
                        10,
                        0LL,
                        0,
                        (System_Nullable_Vector3__o)0,
                        v17);
    v4->fields.masterFigure = Prefab_21041272;
    sub_B2C2F8(&v4->fields.masterFigure, Prefab_21041272);
    return;
  }
  v11 = v4->fields.masterFigure;
  genderType = v4->fields.genderType;
  this = (MasterFormationComponent_o *)MasterFormationComponent___c_TypeInfo;
  if ( (BYTE3(MasterFormationComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterFormationComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterFormationComponent___c_TypeInfo);
    this = (MasterFormationComponent_o *)MasterFormationComponent___c_TypeInfo;
  }
  iconCenterChild = this->fields.iconCenterChild;
  v14 = (System_Action_o *)*((_QWORD *)iconCenterChild + 1);
  if ( !v14 )
  {
    if ( (BYTE3(this->fields.mstEqIconList) & 4) != 0 && !LODWORD(this->fields.usrGameEnt) )
    {
      j_il2cpp_runtime_class_init_0(this);
      iconCenterChild = MasterFormationComponent___c_TypeInfo->static_fields;
    }
    v15 = *(Il2CppObject **)iconCenterChild;
    v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v14, v15, Method_MasterFormationComponent___c__setMstImg_b__65_0__, 0LL);
    static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
    static_fields->__9__65_0 = v14;
    sub_B2C2F8(&static_fields->__9__65_0, v14);
  }
  if ( !v11 )
LABEL_19:
    sub_B2C434(this, *(_QWORD *)&equipId);
  UIMasterFigureTextureOld__SetCharacter(v11, 1, genderType, equipId, v14, 0, 0LL);
}


void __fastcall MasterFormationComponent__setPosCurrentEq(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MasterFormationComponent_o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_MasterEquipInfoComponent__o *mstEqInfoList; // x22
  int size; // w20
  unsigned int v7; // w21
  MasterEquipInfoComponent_o *v8; // x8
  struct UserEquipEntity_o *usrEquipEnt; // x9

  v3 = this;
  if ( (byte_4185928 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Count__, method);
    this = (MasterFormationComponent_o *)sub_B2C35C(
                                           &Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Item__,
                                           v4);
    byte_4185928 = 1;
  }
  if ( v3->fields.usrEquipId >= 1 )
  {
    mstEqInfoList = v3->fields.mstEqInfoList;
    if ( mstEqInfoList )
    {
      size = mstEqInfoList->fields._size;
      if ( size >= 1 )
      {
        v7 = 0;
        while ( 1 )
        {
          if ( mstEqInfoList->fields._size <= v7 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v8 = mstEqInfoList->fields._items->m_Items[v7];
          if ( !v8 || (usrEquipEnt = v8->fields.usrEquipEnt) == 0LL )
LABEL_14:
            sub_B2C434(this, method);
          if ( usrEquipEnt->fields.id == v3->fields.usrEquipId )
            break;
          if ( (int)++v7 >= size )
            return;
          mstEqInfoList = v3->fields.mstEqInfoList;
          if ( !mstEqInfoList )
            goto LABEL_14;
        }
        MasterFormationComponent__setDispRePosition(v3, v8->fields.moveEqIdx, v2);
      }
    }
  }
}


void __fastcall MasterFormationComponent__setUsrEquipData(MasterFormationComponent_o *this, const MethodInfo *method)
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
  void *Instance; // x0
  const MethodInfo *v16; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  System_Collections_Generic_IEnumerable_T__o *List; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x21
  struct System_Collections_Generic_List_UserEquipEntity__o **p_currentList; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v21; // x21
  signed __int64 size; // x8
  unsigned __int64 v23; // x22
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v24; // x20
  struct MasterFormationComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__67_0; // x21
  Il2CppObject *v27; // x22
  struct MasterFormationComponent___c_StaticFields *v28; // x0
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1

  if ( (byte_4185923 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Comparison_UserEquipEntity___ctor__, method);
    sub_B2C35C(&System_Comparison_UserEquipEntity__TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEquipMaster___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipEntity__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipEntity__Sort__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipEntity___ctor___67324216, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipEntity___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_UserEquipEntity__TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__, v13);
    sub_B2C35C(&MasterFormationComponent___c_TypeInfo, v14);
    byte_4185923 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEquipMaster___);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_27;
  if ( !Instance )
    goto LABEL_27;
  List = (System_Collections_Generic_IEnumerable_T__o *)UserEquipMaster__getList(
                                                          (UserEquipMaster_o *)Instance,
                                                          usrGameEnt->fields.userId,
                                                          0LL);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserEquipEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
  p_currentList = &this->fields.currentList;
  this->fields.currentList = (struct System_Collections_Generic_List_UserEquipEntity__o *)v19;
  sub_B2C2F8(&this->fields.currentList, v19);
  if ( !List )
    goto LABEL_27;
  if ( List[1].monitor )
  {
    v21 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_UserEquipEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v21,
      List,
      (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_UserEquipEntity___ctor___67324216);
    if ( this->fields.usrEquipId >= 1 )
    {
      if ( !v21 )
        goto LABEL_27;
      LODWORD(size) = v21->fields._size;
      if ( (int)size >= 1 )
      {
        v23 = 0LL;
        while ( 1 )
        {
          if ( v23 >= (unsigned int)size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          Instance = *p_currentList;
          if ( !*p_currentList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v21->fields._items->m_Items[v23],
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserEquipEntity__Add__);
          size = v21->fields._size;
          if ( (__int64)++v23 >= size )
            goto LABEL_16;
        }
LABEL_27:
        sub_B2C434(Instance, v16);
      }
LABEL_16:
      v24 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)*p_currentList;
      Instance = MasterFormationComponent___c_TypeInfo;
      if ( (BYTE3(MasterFormationComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MasterFormationComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterFormationComponent___c_TypeInfo);
        Instance = MasterFormationComponent___c_TypeInfo;
      }
      static_fields = (struct MasterFormationComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
      _9__67_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__67_0;
      if ( !_9__67_0 )
      {
        if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
        }
        v27 = (Il2CppObject *)static_fields->__9;
        _9__67_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_UserEquipEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__67_0,
          v27,
          Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__,
          (const MethodInfo_25D8DF8 *)Method_System_Comparison_UserEquipEntity___ctor__);
        v28 = MasterFormationComponent___c_TypeInfo->static_fields;
        v28->__9__67_0 = (struct System_Comparison_UserEquipEntity__o *)_9__67_0;
        sub_B2C2F8(&v28->__9__67_0, _9__67_0);
      }
      if ( !v24 )
        goto LABEL_27;
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v24,
        (System_Comparison_T__o *)_9__67_0,
        (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_UserEquipEntity__Sort__);
    }
  }
  MasterFormationComponent__setMstEquipList(this, v16);
  MasterFormationComponent__setMstEquipIconList(this, v29);
  MasterFormationComponent__setPosCurrentEq(this, v30);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent_NotificationDragState___ctor(
        MasterFormationComponent_NotificationDragState_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B2C2F8(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MasterFormationComponent_NotificationDragState__BeginInvoke(
        MasterFormationComponent_NotificationDragState_o *this,
        bool flg,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = flg;
  if ( (byte_4185D05 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, flg);
    byte_4185D05 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall MasterFormationComponent_NotificationDragState__EndInvoke(
        MasterFormationComponent_NotificationDragState_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent_NotificationDragState__Invoke(
        MasterFormationComponent_NotificationDragState_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  MasterFormationComponent_NotificationDragState_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  MasterFormationComponent_NotificationDragState_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  MasterFormationComponent_NotificationDragState_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (MasterFormationComponent_NotificationDragState_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, flg, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(flg, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, flg, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, flg, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            flg,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, flg, v22);
    goto LABEL_37;
  }
}


void __fastcall MasterFormationComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4185D03 & 1) == 0 )
  {
    sub_B2C35C(&MasterFormationComponent___c_TypeInfo, v1);
    byte_4185D03 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(MasterFormationComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)MasterFormationComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
}


void __fastcall MasterFormationComponent___c___ctor(MasterFormationComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MasterFormationComponent___c___setMstImg_b__65_0(
        MasterFormationComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall MasterFormationComponent___c___setUsrEquipData_b__67_0(
        MasterFormationComponent___c_o *this,
        UserEquipEntity_o *a,
        UserEquipEntity_o *b,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4185D04 & 1) == 0 )
  {
    this = (MasterFormationComponent___c_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, a);
    byte_4185D04 = 1;
  }
  if ( !a )
    goto LABEL_9;
  v7 = *(_QWORD *)&a->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&a->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (MasterFormationComponent___c_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v9, 0LL);
  if ( !b )
LABEL_9:
    sub_B2C434(this, a);
  return (_DWORD)this - CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(b->fields.equipId, 0LL);
}