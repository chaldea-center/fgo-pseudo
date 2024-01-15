void __fastcall MasterFormationComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  MasterFormationComponent_c *v2; // x8

  if ( (byte_40FB1DC & 1) == 0 )
  {
    sub_B16FFC(&MasterFormationComponent_TypeInfo, v1);
    byte_40FB1DC = 1;
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
  struct CommandSpellWindowComponent_o *v4; // x0

  if ( (byte_40FB1DB & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB1DB = 1;
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
    v4 = this->fields.cmdSpellWinComp;
    if ( v4 )
    {
      ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, _QWORD, Il2CppMethodPointer))v4->klass->vtable._12_Close.method)(
        v4,
        0LL,
        v4->klass->vtable._13_CompClose.methodPtr);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
}


void __fastcall MasterFormationComponent__OnCenterOnChildFinished(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  UnityEngine_Behaviour_o *rightArrowBtn; // x0
  struct UICenterOnChild_o *centerChild; // x8
  UnityEngine_GameObject_o *mCenteredObject; // x0
  MasterEquipInfoComponent_o *Component_srcLineSprite; // x0
  const MethodInfo *v9; // x1
  MasterEquipInfoComponent_o *v10; // x20
  const MethodInfo *v11; // x2
  struct UserEquipEntity_o *usrEquipEnt; // x8
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FB1D0 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, method);
    sub_B16FFC(&StringLiteral_2944/*"CHANGE_INFO"*/, v3);
    byte_40FB1D0 = 1;
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
  rightArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
  if ( !rightArrowBtn
    || (UnityEngine_Behaviour__set_enabled(rightArrowBtn, 1, 0LL), (centerChild = this->fields.centerChild) == 0LL)
    || (mCenteredObject = centerChild->fields.mCenteredObject) == 0LL
    || (Component_srcLineSprite = (MasterEquipInfoComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  mCenteredObject,
                                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___)) == 0LL
    || (v10 = Component_srcLineSprite,
        this->fields.currentEquipId = MasterEquipInfoComponent__getEquipId(Component_srcLineSprite, v9),
        (usrEquipEnt = v10->fields.usrEquipEnt) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  this->fields.currentUsrEquipId = usrEquipEnt->fields.id;
  this->fields.isChange = v10->fields.isChange;
  this->fields.currentMoveIdx = v10->fields.moveEqIdx;
  MasterEquipInfoComponent__setDispEffectObj(v10, 1, v11);
  if ( this->fields.isChangeMasterImg )
  {
    fsm = this->fields.fsm;
    if ( fsm )
    {
      PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_2944/*"CHANGE_INFO"*/, 0LL);
      return;
    }
    goto LABEL_15;
  }
}


void __fastcall MasterFormationComponent__OnClickCmdSpell(MasterFormationComponent_o *this, const MethodInfo *method)
{
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_40FB1DA & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB1DA = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    sub_B170D4();
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
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  UIWrapContent_o *loopCtr; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  UnityEngine_Component_o *v15; // x0
  UICenterOnChild_o *centerChild; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *Child; // x0
  struct UserEquipEntity_o *userEquipEntity; // x8
  __int64 v20; // x21
  __int64 v21; // x22
  const MethodInfo *v22; // x1
  struct UICenterOnChild_o *v23; // x8
  UnityEngine_GameObject_o *mCenteredObject; // x0
  MasterEquipInfoComponent_o *Component_srcLineSprite; // x0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_40FB1C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, *(_QWORD *)&idx);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    byte_40FB1C9 = 1;
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
      loopCtr = this->fields.loopCtr;
      this->fields.isChangeMasterImg = 0;
      this->fields.currentEquipId = equipId;
      this->fields.currentUsrEquipId = userEquipId;
      this->fields.isChange = 1;
      if ( loopCtr )
      {
        UIWrapContent__setScrollPos(loopCtr, idx, 0LL);
        MasterFormationComponent__setDisEquipEffect(this, v13);
        MasterFormationComponent__setMstImg(this, equipId, v14);
        v15 = (UnityEngine_Component_o *)this->fields.loopCtr;
        if ( v15 )
        {
          centerChild = this->fields.centerChild;
          transform = UnityEngine_Component__get_transform(v15, 0LL);
          if ( transform )
          {
            Child = UnityEngine_Transform__GetChild(transform, idx, 0LL);
            if ( centerChild )
            {
              UICenterOnChild__CenterOn_35064772(centerChild, Child, 1, 0LL);
              userEquipEntity = this->fields.userEquipEntity;
              if ( userEquipEntity )
              {
                v21 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
                v20 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v29.fields.currentCryptoKey = v21;
                *(_QWORD *)&v29.fields.fakeValue = v20;
                if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v29, 0LL) != equipId )
                  goto LABEL_24;
                v23 = this->fields.centerChild;
                if ( v23 )
                {
                  mCenteredObject = v23->fields.mCenteredObject;
                  if ( mCenteredObject )
                  {
                    Component_srcLineSprite = (MasterEquipInfoComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                              mCenteredObject,
                                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
                    if ( Component_srcLineSprite )
                    {
                      MasterEquipInfoComponent__setDispEffectObj(Component_srcLineSprite, 1, v26);
LABEL_24:
                      MasterFormationComponent__UpdateIconSelected(this, v22);
                      MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v27);
                      MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v28);
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
    sub_B170D4();
  }
}


void __fastcall MasterFormationComponent__OnDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  UnityEngine_Behaviour_o *rightArrowBtn; // x0
  MasterFormationComponent_NotificationDragState_o *notificationDragState; // x0

  if ( (byte_40FB1CD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11326/*"RefreshCurrentInfo"*/, method);
    byte_40FB1CD = 1;
  }
  *(_WORD *)&this->fields.isChangeMasterImg = 1;
  this->fields.isDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_34803564(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11326/*"RefreshCurrentInfo"*/,
    0LL);
  MasterFormationComponent__setDisEquipEffect(this, v3);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 0, v4);
  iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
  if ( !iconCenterChild
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 0, 0LL),
        (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL),
        (rightArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(rightArrowBtn, 0, 0LL),
        (notificationDragState = this->fields.notificationDragState) == 0LL) )
  {
    sub_B170D4();
  }
  MasterFormationComponent_NotificationDragState__Invoke(notificationDragState, 1, 0LL);
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
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  UnityEngine_Behaviour_o *rightArrowBtn; // x0
  struct UICenterOnChild_o *iconCenterChild; // x8
  UnityEngine_GameObject_o *mCenteredObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  MasterFormationComponent_NotificationDragState_o *notificationDragState; // x0
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  struct System_Collections_Generic_List_MasterEquipIconComponent__o *mstEqIconList; // x0
  UnityEngine_Behaviour_o *v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FB1D1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v7);
    sub_B16FFC(&StringLiteral_11326/*"RefreshCurrentInfo"*/, v8);
    byte_40FB1D1 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
  if ( !leftArrowBtn )
    goto LABEL_20;
  UnityEngine_Behaviour__set_enabled(leftArrowBtn, 1, 0LL);
  rightArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
  if ( !rightArrowBtn )
    goto LABEL_20;
  UnityEngine_Behaviour__set_enabled(rightArrowBtn, 1, 0LL);
  iconCenterChild = this->fields.iconCenterChild;
  if ( !iconCenterChild )
    goto LABEL_20;
  mCenteredObject = iconCenterChild->fields.mCenteredObject;
  if ( !mCenteredObject )
    goto LABEL_20;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              mCenteredObject,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
  currentList = this->fields.currentList;
  if ( !currentList )
    goto LABEL_20;
  if ( currentList->fields._size >= 2 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_20;
    this->fields.currentMoveIconIdx = (int32_t)Component_srcLineSprite->fields.mcLineSprite;
  }
  *(_WORD *)&this->fields.isDragStart = 0;
  UnityEngine_MonoBehaviour__CancelInvoke_34803564(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11326/*"RefreshCurrentInfo"*/,
    0LL);
  notificationDragState = this->fields.notificationDragState;
  if ( !notificationDragState )
    goto LABEL_20;
  MasterFormationComponent_NotificationDragState__Invoke(notificationDragState, 0, 0LL);
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v16);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v17);
  mstEqIconList = this->fields.mstEqIconList;
  if ( !mstEqIconList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mstEqIconList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v20.fields.current )
      sub_B170D4();
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v20.fields.current, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  v19 = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
  if ( !v19 )
LABEL_20:
    sub_B170D4();
  UnityEngine_Behaviour__set_enabled(v19, 0, 0LL);
}


void __fastcall MasterFormationComponent__OnIconDragFinished(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  struct System_Collections_Generic_List_MasterEquipIconComponent__o *mstEqIconList; // x0
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FB1CF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v5);
    byte_40FB1CF = 1;
  }
  memset(&v8, 0, sizeof(v8));
  iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
  if ( !iconCenterChild
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 1, 0LL), (mstEqIconList = this->fields.mstEqIconList) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mstEqIconList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B170D4();
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v8.fields.current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
}


void __fastcall MasterFormationComponent__OnIconDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  UnityEngine_Behaviour_o *rightArrowBtn; // x0
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  MasterFormationComponent_NotificationDragState_o *notificationDragState; // x0

  if ( (byte_40FB1CE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11326/*"RefreshCurrentInfo"*/, method);
    byte_40FB1CE = 1;
  }
  *(_WORD *)&this->fields.isChangeMasterImg = 257;
  this->fields.isIconDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_34803564(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11326/*"RefreshCurrentInfo"*/,
    0LL);
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 0, v3);
  leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
  if ( !leftArrowBtn
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL),
        (rightArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(rightArrowBtn, 0, 0LL),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 0, 0LL),
        (notificationDragState = this->fields.notificationDragState) == 0LL) )
  {
    sub_B170D4();
  }
  MasterFormationComponent_NotificationDragState__Invoke(notificationDragState, 1, 0LL);
}


void __fastcall MasterFormationComponent__RefreshCurrentInfo(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  MasterFormationComponent_NotificationDragState_o *notificationDragState; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  UnityEngine_Component_o *loopCtr; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v8; // x0
  UICenterOnChild_o *centerChild; // x20
  UnityEngine_Transform_o *v10; // x0
  UnityEngine_Transform_o *Child; // x0
  UnityEngine_Component_o *iconLoopCtr; // x0
  UnityEngine_Transform_o *v13; // x0
  UnityEngine_Component_o *v14; // x0
  UICenterOnChild_o *iconCenterChild; // x20
  UnityEngine_Transform_o *v16; // x0
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_40FB1D2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_11326/*"RefreshCurrentInfo"*/, method);
    byte_40FB1D2 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_34803564(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11326/*"RefreshCurrentInfo"*/,
    0LL);
  notificationDragState = this->fields.notificationDragState;
  if ( !notificationDragState )
    goto LABEL_22;
  MasterFormationComponent_NotificationDragState__Invoke(notificationDragState, 0, 0LL);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v4);
  if ( this->fields.isDragStart )
  {
    loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
    if ( !loopCtr )
      goto LABEL_22;
    transform = UnityEngine_Component__get_transform(loopCtr, 0LL);
    if ( !transform )
      goto LABEL_22;
    if ( UnityEngine_Transform__get_childCount(transform, 0LL) >= 1 )
    {
      v8 = (UnityEngine_Component_o *)this->fields.loopCtr;
      this->fields.isDragStart = 0;
      if ( !v8 )
        goto LABEL_22;
      centerChild = this->fields.centerChild;
      v10 = UnityEngine_Component__get_transform(v8, 0LL);
      if ( !v10 )
        goto LABEL_22;
      Child = UnityEngine_Transform__GetChild(v10, this->fields.currentMoveIdx, 0LL);
      if ( !centerChild )
        goto LABEL_22;
      UICenterOnChild__CenterOn_35064772(centerChild, Child, 1, 0LL);
    }
  }
  if ( !this->fields.isIconDragStart )
  {
LABEL_20:
    MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v5);
    goto LABEL_21;
  }
  iconLoopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
  if ( !iconLoopCtr || (v13 = UnityEngine_Component__get_transform(iconLoopCtr, 0LL)) == 0LL )
LABEL_22:
    sub_B170D4();
  if ( UnityEngine_Transform__get_childCount(v13, 0LL) < 1 )
    goto LABEL_20;
  this->fields.isIconDragStart = 0;
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 0, v5);
  v14 = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
  if ( !v14 )
    goto LABEL_22;
  iconCenterChild = this->fields.iconCenterChild;
  v16 = UnityEngine_Component__get_transform(v14, 0LL);
  if ( !v16 )
    goto LABEL_22;
  v17 = UnityEngine_Transform__GetChild(v16, this->fields.currentMoveIconIdx, 0LL);
  if ( !iconCenterChild )
    goto LABEL_22;
  UICenterOnChild__CenterOn_35064772(iconCenterChild, v17, 1, 0LL);
LABEL_21:
  MasterFormationComponent__UpdateIconSelected(this, v18);
}


void __fastcall MasterFormationComponent__SetEnabledEquipDetailScroll(
        MasterFormationComponent_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *mScroll; // x0
  UnityEngine_Behaviour_o *loopCtr; // x0
  UnityEngine_Behaviour_o *centerChild; // x0

  if ( this->fields.isScrollEquipDetail || !enabled )
  {
    mScroll = (UnityEngine_Behaviour_o *)this->fields.mScroll;
    if ( !mScroll
      || (UnityEngine_Behaviour__set_enabled(mScroll, enabled, 0LL),
          (loopCtr = (UnityEngine_Behaviour_o *)this->fields.loopCtr) == 0LL)
      || (UnityEngine_Behaviour__set_enabled(loopCtr, enabled, 0LL),
          (centerChild = (UnityEngine_Behaviour_o *)this->fields.centerChild) == 0LL) )
    {
      sub_B170D4();
    }
    UnityEngine_Behaviour__set_enabled(centerChild, enabled, 0LL);
  }
}


void __fastcall MasterFormationComponent__SetEnabledEquipIconScroll(
        MasterFormationComponent_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *iconScroll; // x0
  bool v5; // w20
  UnityEngine_Behaviour_o *iconLoopCtr; // x0

  if ( this->fields.isScrollEquipIcon || !enabled )
  {
    iconScroll = (UnityEngine_Behaviour_o *)this->fields.iconScroll;
    if ( !iconScroll
      || (v5 = enabled,
          UnityEngine_Behaviour__set_enabled(iconScroll, enabled, 0LL),
          (iconLoopCtr = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr) == 0LL) )
    {
      sub_B170D4();
    }
    UnityEngine_Behaviour__set_enabled(iconLoopCtr, v5, 0LL);
  }
}


void __fastcall MasterFormationComponent__Update(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UIScrollView_o *mScroll; // x0
  UIScrollView_o *v5; // x0

  if ( this->fields.usrGameEnt )
  {
    MasterFormationComponent__setCommandSpellInfo(this, method);
    MasterFormationComponent__UpdateGuideLabel(this, v3);
    mScroll = this->fields.mScroll;
    if ( mScroll )
    {
      if ( !UIScrollView__get_isDragging(mScroll, 0LL) || this->fields.isDragStart )
        return;
      v5 = this->fields.mScroll;
      if ( v5 )
      {
        UIScrollView__Press(v5, 1, 0LL);
        return;
      }
    }
    sub_B170D4();
  }
}


void __fastcall MasterFormationComponent__UpdateGuideLabel(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *iconScroll; // x0
  float alphaAnimNow; // s8
  float alphaAnimTgt; // s9
  MasterFormationComponent_c *v6; // x0
  float realtimeSinceStartup; // s0
  UnityEngine_Behaviour_o *touchGuideLabel; // x0
  bool enabled; // w0
  UnityEngine_Behaviour_o *scrollGuideLabel; // x0
  bool v11; // w1
  struct UILabel_o *v12; // x0
  struct UILabel_o *v13; // x0

  if ( (byte_40FB1C0 & 1) == 0 )
  {
    sub_B16FFC(&MasterFormationComponent_TypeInfo, method);
    byte_40FB1C0 = 1;
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
      touchGuideLabel = (UnityEngine_Behaviour_o *)this->fields.touchGuideLabel;
      this->fields.alphaAnimTimeOld = realtimeSinceStartup;
      if ( !touchGuideLabel )
        goto LABEL_24;
      enabled = UnityEngine_Behaviour__get_enabled(touchGuideLabel, 0LL);
      if ( !this->fields.touchGuideLabel )
        goto LABEL_24;
      if ( enabled )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.touchGuideLabel, 0, 0LL);
        scrollGuideLabel = (UnityEngine_Behaviour_o *)this->fields.scrollGuideLabel;
        if ( !scrollGuideLabel )
          goto LABEL_24;
        v11 = 1;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.touchGuideLabel, 1, 0LL);
        scrollGuideLabel = (UnityEngine_Behaviour_o *)this->fields.scrollGuideLabel;
        if ( !scrollGuideLabel )
          goto LABEL_24;
        v11 = 0;
      }
      UnityEngine_Behaviour__set_enabled(scrollGuideLabel, v11, 0LL);
    }
    v12 = this->fields.touchGuideLabel;
    if ( v12 )
    {
      ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer, float))v12->klass->vtable._8_set_alpha.method)(
        v12,
        v12->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        this->fields.alphaAnimNow);
      v13 = this->fields.scrollGuideLabel;
      if ( v13 )
      {
        ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer, float))v13->klass->vtable._8_set_alpha.method)(
          v13,
          v13->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          this->fields.alphaAnimNow);
        return;
      }
    }
LABEL_24:
    sub_B170D4();
  }
}


void __fastcall MasterFormationComponent__UpdateIconSelected(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_MasterEquipIconComponent__o *mstEqIconList; // x22
  int size; // w20
  unsigned int v6; // w21
  MasterEquipIconComponent_o *v7; // x0

  if ( (byte_40FB1CA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Item__, v3);
    byte_40FB1CA = 1;
  }
  mstEqIconList = this->fields.mstEqIconList;
  if ( mstEqIconList )
  {
    size = mstEqIconList->fields._size;
    if ( size >= 1 )
    {
      v6 = 0;
      do
      {
        if ( mstEqIconList->fields._size <= v6 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v7 = mstEqIconList->fields._items->m_Items[v6];
        if ( !v7 )
          break;
        MasterEquipIconComponent__UpdateSelected(v7, this->fields.currentEquipId, 0LL);
        if ( (int)++v6 >= size )
          return;
        mstEqIconList = this->fields.mstEqIconList;
      }
      while ( mstEqIconList );
      sub_B170D4();
    }
  }
}


void __fastcall MasterFormationComponent___changeCmdSpellImg_b__66_0(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  CommandSpellIconComponent_o *cmdSpellIconComp; // x0
  struct UITexture_o *cmdSpellTexture; // x0
  UnityEngine_Vector2_o v5; // 0:s0.4,4:s1.4

  cmdSpellIconComp = this->fields.cmdSpellIconComp;
  if ( !cmdSpellIconComp
    || (v5.fields.x = 130.0,
        v5.fields.y = 130.0,
        CommandSpellIconComponent__SetSize(cmdSpellIconComp, v5, 0LL),
        (cmdSpellTexture = this->fields.cmdSpellTexture) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer, float))cmdSpellTexture->klass->vtable._8_set_alpha.method)(
    cmdSpellTexture,
    cmdSpellTexture->klass->vtable._9_CalculateFinalAlpha.methodPtr,
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

  if ( (byte_40FB1BE & 1) == 0 )
  {
    sub_B16FFC(&MasterFormationComponent_NotificationDragState_TypeInfo, value);
    byte_40FB1BE = 1;
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
    v8 = sub_B0BA14(p_notificationDragState, v7, notificationDragState);
    v9 = notificationDragState == (System_Delegate_o *)v8;
    notificationDragState = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterFormationComponent_o *)sub_B173C8(v7);
  MasterFormationComponent__remove_notificationDragState(v10, v11, v12);
}


void __fastcall MasterFormationComponent__changeCmdSpellImg(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserGameEntity_o *SelfUserGame; // x22
  const MethodInfo *v5; // x3
  int32_t SpellImageId; // w0
  CommandSpellIconComponent_o *cmdSpellIconComp; // x21
  int32_t v8; // w20
  int32_t CommandSpell; // w22
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x23

  if ( (byte_40FB1C5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__, v3);
    byte_40FB1C5 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  SpellImageId = MasterFormationComponent__getSpellImageId(
                   (MasterFormationComponent_o *)SelfUserGame,
                   this->fields.genderType,
                   this->fields.currentEquipId,
                   v5);
  if ( !SelfUserGame
    || (cmdSpellIconComp = this->fields.cmdSpellIconComp,
        v8 = SpellImageId,
        CommandSpell = UserGameEntity__getCommandSpell(SelfUserGame, 0LL),
        v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13),
        System_Action___ctor(
          v14,
          (Il2CppObject *)this,
          Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__,
          0LL),
        !cmdSpellIconComp) )
  {
    sub_B170D4();
  }
  CommandSpellIconComponent__SetChangeCurrentCmdSepll(cmdSpellIconComp, v8, CommandSpell, v14, 0LL);
}


void __fastcall MasterFormationComponent__closeMasterFormation(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *loopCtr; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v7; // w20
  UnityEngine_Component_o *v8; // x0
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *gameObject; // x21
  UnityEngine_Component_o *iconLoopCtr; // x0
  UnityEngine_Transform_o *v13; // x0
  int32_t v14; // w0
  int32_t v15; // w20
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Transform_o *v17; // x0
  UnityEngine_Component_o *v18; // x0
  UnityEngine_Object_o *v19; // x21
  UserEquipEntity_o *userEquipEntity; // x0
  UIScrollView_o *mScroll; // x0
  UIScrollView_o *iconScroll; // x0
  UnityEngine_GameObject_o *v23; // x0

  if ( (byte_40FB1D8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&UserEquipNewManager_TypeInfo, v3);
    byte_40FB1D8 = 1;
  }
  MasterFormationComponent__destroyMasterFigure(this, method);
  loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_31;
  transform = UnityEngine_Component__get_transform(loopCtr, 0LL);
  if ( !transform )
    goto LABEL_31;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  v7 = childCount - 1;
  if ( childCount >= 1 )
  {
    while ( 1 )
    {
      v8 = (UnityEngine_Component_o *)this->fields.loopCtr;
      if ( !v8 )
        break;
      v9 = UnityEngine_Component__get_transform(v8, 0LL);
      if ( !v9 )
        break;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v9, v7, 0LL);
      if ( !Child )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(gameObject, 0LL);
      if ( --v7 < 0 )
        goto LABEL_13;
    }
LABEL_31:
    sub_B170D4();
  }
LABEL_13:
  iconLoopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
  if ( !iconLoopCtr )
    goto LABEL_31;
  v13 = UnityEngine_Component__get_transform(iconLoopCtr, 0LL);
  if ( !v13 )
    goto LABEL_31;
  v14 = UnityEngine_Transform__get_childCount(v13, 0LL);
  v15 = v14 - 1;
  if ( v14 >= 1 )
  {
    do
    {
      v16 = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
      if ( !v16 )
        goto LABEL_31;
      v17 = UnityEngine_Component__get_transform(v16, 0LL);
      if ( !v17 )
        goto LABEL_31;
      v18 = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v17, v15, 0LL);
      if ( !v18 )
        goto LABEL_31;
      v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v18, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(v19, 0LL);
    }
    while ( --v15 >= 0 );
  }
  userEquipEntity = this->fields.userEquipEntity;
  if ( !userEquipEntity )
    goto LABEL_31;
  UserEquipEntity__SetOld(userEquipEntity, 0LL);
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  }
  UserEquipNewManager__WriteData(0LL);
  mScroll = this->fields.mScroll;
  if ( !mScroll )
    goto LABEL_31;
  UIScrollView__ResetPosition(mScroll, 0LL);
  iconScroll = this->fields.iconScroll;
  if ( !iconScroll )
    goto LABEL_31;
  UIScrollView__ResetPosition(iconScroll, 0LL);
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v23 )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(v23, 0, 0LL);
}


void __fastcall MasterFormationComponent__destroyMasterFigure(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o **p_masterFigure; // x19
  UnityEngine_Object_o *v4; // x20
  struct UIMasterFigureTextureOld_o *masterFigure; // t1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FB1D9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB1D9 = 1;
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
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_masterFigure, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_masterFigure = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_masterFigure, 0LL, v7, v8, v9, v10, v11, v12);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  void *klass; // x19
  struct System_Single_array *coordinate; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  v4 = equipId;
  if ( (byte_40FB1D7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EquipMaster___, *(_QWORD *)&genderType);
    sub_B16FFC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FB1D7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v4,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  if ( genderType == 2 )
  {
    coordinate = *(struct System_Single_array **)&Entity->fields.assetId;
    klass = Entity[1].klass;
  }
  else
  {
    coordinate = Entity->fields.coordinate;
    klass = Entity->fields.coordinates;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = coordinate;
  *(_QWORD *)&v15.fields.fakeValue = klass;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL);
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
  UnityEngine_Behaviour_o *rightArrowBtn; // x0
  UnityEngine_Component_o *iconLoopCtr; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w8
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  int v14; // w8
  int32_t v15; // w20
  UnityEngine_Component_o *v16; // x0
  UICenterOnChild_o *v17; // x21
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Transform_o *Child; // x0
  struct System_Collections_Generic_List_MasterEquipIconComponent__o *mstEqIconList; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FB1D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_11326/*"RefreshCurrentInfo"*/, v7);
    byte_40FB1D5 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( !this->fields.isDragStart && !this->fields.isIconDragStart )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
    *(_WORD *)&this->fields.isChangeMasterImg = 257;
    if ( !leftArrowBtn )
      goto LABEL_27;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    rightArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
    if ( !rightArrowBtn )
      goto LABEL_27;
    UnityEngine_Behaviour__set_enabled(rightArrowBtn, 0, 0LL);
    *(_WORD *)&this->fields.isDragStart = 0;
    UnityEngine_MonoBehaviour__CancelInvoke_34803564(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11326/*"RefreshCurrentInfo"*/,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
    iconLoopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
    if ( !iconLoopCtr )
      goto LABEL_27;
    transform = UnityEngine_Component__get_transform(iconLoopCtr, 0LL);
    if ( !transform )
      goto LABEL_27;
    childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
    iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
    v14 = childCount - 1;
    v15 = this->fields.currentMoveIconIdx - 1 < 0 ? v14 : this->fields.currentMoveIconIdx - 1;
    this->fields.currentMoveIconIdx = v15;
    if ( !iconCenterChild
      || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 1, 0LL),
          (v16 = (UnityEngine_Component_o *)this->fields.iconLoopCtr) == 0LL)
      || (v17 = this->fields.iconCenterChild, (v18 = UnityEngine_Component__get_transform(v16, 0LL)) == 0LL)
      || (Child = UnityEngine_Transform__GetChild(v18, v15, 0LL), !v17)
      || (UICenterOnChild__CenterOn_35064772(v17, Child, 1, 0LL), (mstEqIconList = this->fields.mstEqIconList) == 0LL) )
    {
LABEL_27:
      sub_B170D4();
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mstEqIconList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v21.fields.current )
        sub_B170D4();
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v21.fields.current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
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
  UnityEngine_Behaviour_o *rightArrowBtn; // x0
  UnityEngine_Component_o *iconLoopCtr; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t currentMoveIconIdx; // w9
  int32_t v14; // w8
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  int32_t v16; // w20
  UnityEngine_Component_o *v17; // x0
  UICenterOnChild_o *v18; // x21
  UnityEngine_Transform_o *v19; // x0
  UnityEngine_Transform_o *Child; // x0
  struct System_Collections_Generic_List_MasterEquipIconComponent__o *mstEqIconList; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FB1D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_11326/*"RefreshCurrentInfo"*/, v7);
    byte_40FB1D4 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( !this->fields.isDragStart && !this->fields.isIconDragStart )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
    *(_WORD *)&this->fields.isChangeMasterImg = 257;
    if ( !leftArrowBtn )
      goto LABEL_27;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    rightArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
    if ( !rightArrowBtn )
      goto LABEL_27;
    UnityEngine_Behaviour__set_enabled(rightArrowBtn, 0, 0LL);
    *(_WORD *)&this->fields.isDragStart = 0;
    UnityEngine_MonoBehaviour__CancelInvoke_34803564(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11326/*"RefreshCurrentInfo"*/,
      0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
    iconLoopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
    if ( !iconLoopCtr )
      goto LABEL_27;
    transform = UnityEngine_Component__get_transform(iconLoopCtr, 0LL);
    if ( !transform )
      goto LABEL_27;
    childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
    currentMoveIconIdx = this->fields.currentMoveIconIdx;
    v14 = childCount;
    iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
    v16 = currentMoveIconIdx + 1 < v14 ? currentMoveIconIdx + 1 : 0;
    this->fields.currentMoveIconIdx = v16;
    if ( !iconCenterChild
      || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 1, 0LL),
          (v17 = (UnityEngine_Component_o *)this->fields.iconLoopCtr) == 0LL)
      || (v18 = this->fields.iconCenterChild, (v19 = UnityEngine_Component__get_transform(v17, 0LL)) == 0LL)
      || (Child = UnityEngine_Transform__GetChild(v19, v16, 0LL), !v18)
      || (UICenterOnChild__CenterOn_35064772(v18, Child, 1, 0LL), (mstEqIconList = this->fields.mstEqIconList) == 0LL) )
    {
LABEL_27:
      sub_B170D4();
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mstEqIconList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v22.fields.current )
        sub_B170D4();
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v22.fields.current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
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

  if ( (byte_40FB1BF & 1) == 0 )
  {
    sub_B16FFC(&MasterFormationComponent_NotificationDragState_TypeInfo, value);
    byte_40FB1BF = 1;
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
    v8 = sub_B0BA14(p_notificationDragState, v7, notificationDragState);
    v9 = notificationDragState == (System_Delegate_o *)v8;
    notificationDragState = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterFormationComponent_o *)sub_B173C8(v7);
  MasterFormationComponent__Update(v10, v11);
}


void __fastcall MasterFormationComponent__setChangeMasterInfo(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FB1D6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5483/*"END_SET"*/, method);
    sub_B16FFC(&StringLiteral_11326/*"RefreshCurrentInfo"*/, v4);
    byte_40FB1D6 = 1;
  }
  MasterFormationComponent__setMstImg(this, this->fields.currentEquipId, v2);
  if ( this->fields.isDragStart || this->fields.isIconDragStart )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11326/*"RefreshCurrentInfo"*/,
      0.1,
      0LL);
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5483/*"END_SET"*/, 0LL);
}


void __fastcall MasterFormationComponent__setCmdSpellImg(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserGameEntity_o *SelfUserGame; // x0
  CommandSpellIconComponent_o *cmdSpellIconComp; // x0
  CommandSpellWindowComponent_o *cmdSpellWinComp; // x0
  BattleWindowComponent_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  struct CommandSpellWindowComponent_o *v13; // x8
  struct CommandSpellWindowComponent_o *v14; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Vector2_o v22; // 0:s0.4,4:s1.4

  if ( (byte_40FB1C2 & 1) == 0 )
  {
    sub_B16FFC(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo, method);
    sub_B16FFC(&Method_MasterFormationComponent_CloseCmdSpell__, v3);
    sub_B16FFC(&MasterFormationComponent_TypeInfo, v4);
    byte_40FB1C2 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.cmdSpellIconComp )
    goto LABEL_13;
  CommandSpellIconComponent__SetData(this->fields.cmdSpellIconComp, SelfUserGame, 0LL);
  cmdSpellIconComp = this->fields.cmdSpellIconComp;
  if ( !cmdSpellIconComp )
    goto LABEL_13;
  v22.fields.x = 130.0;
  v22.fields.y = 130.0;
  CommandSpellIconComponent__SetSize(cmdSpellIconComp, v22, 0LL);
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    goto LABEL_13;
  CommandSpellWindowComponent__InitializeCommandSpell(cmdSpellWinComp, 0LL, 0, -1, 0LL);
  v8 = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
  if ( (BYTE3(MasterFormationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterFormationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo);
  }
  if ( !v8
    || (BattleWindowComponent__setInitData(
          v8,
          2,
          MasterFormationComponent_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME,
          0,
          0LL),
        (v13 = this->fields.cmdSpellWinComp) == 0LL)
    || (v13->fields.mode = 0,
        v14 = this->fields.cmdSpellWinComp,
        v15 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_B170CC(
                                                                     CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo,
                                                                     v9,
                                                                     v10,
                                                                     v11,
                                                                     v12),
        CommandSpellWindowComponent_CloseButtonCallBack___ctor(
          v15,
          (Il2CppObject *)this,
          Method_MasterFormationComponent_CloseCmdSpell__,
          0LL),
        !v14) )
  {
LABEL_13:
    sub_B170D4();
  }
  v14->fields.callback_close = v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v14->fields.callback_close,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
  System_String_o *v9; // x0
  unsigned __int64 v10; // x22
  int v11; // w23
  int v12; // w24
  UILabel_o *recoverTimeLb; // x19
  System_String_o *v14; // x20
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  UnityEngine_GameObject_o *cmdSpellRecTimeInfo; // x0
  int v20; // [xsp+Ch] [xbp-44h] BYREF
  int v21; // [xsp+18h] [xbp-38h] BYREF
  int v22; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40FB1C3 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, recoverTime);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_3247/*"COMMAND_SPELL_RECOVER_TIME"*/, v6);
    sub_B16FFC(&StringLiteral_3249/*"COMMNAD_SPELL_RECV_TXT"*/, v7);
    byte_40FB1C3 = 1;
  }
  if ( recoverTime > 0 )
  {
    recoverTitleLb = this->fields.recoverTitleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3249/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
    if ( recoverTitleLb )
    {
      v10 = recoverTime / 0xE10uLL;
      v11 = (int)(recoverTime / 0x3CuLL) % 60;
      v12 = recoverTime % 0x3CuLL;
      UILabel__set_text(recoverTitleLb, v9, 0LL);
      recoverTimeLb = this->fields.recoverTimeLb;
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3247/*"COMMAND_SPELL_RECOVER_TIME"*/, 0LL);
      v22 = v10;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      v21 = v11;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      v20 = v12;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
      v18 = System_String__Format_43744796(v14, v15, v16, v17, 0LL);
      if ( recoverTimeLb )
      {
        UILabel__set_text(recoverTimeLb, v18, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B170D4();
  }
  cmdSpellRecTimeInfo = this->fields.cmdSpellRecTimeInfo;
  if ( !cmdSpellRecTimeInfo )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(cmdSpellRecTimeInfo, 0, 0LL);
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
    sub_B170D4();
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
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FB1D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__, v5);
    byte_40FB1D3 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  mstEqInfoList = this->fields.mstEqInfoList;
  if ( !mstEqInfoList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mstEqInfoList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B170D4();
    MasterEquipInfoComponent__setDispEffectObj((MasterEquipInfoComponent_o *)v8.fields.current, 0, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setDispRePosition(
        MasterFormationComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UIWrapContent_o *loopCtr; // x0
  MasterFormationComponent_c *v7; // x0
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x9
  int v9; // w8
  UIWrapContent_o *iconLoopCtr; // x0
  int32_t v11; // w1
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  UnityEngine_Component_o *v13; // x0
  UICenterOnChild_o *v14; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *Child; // x0

  if ( (byte_40FB1CC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, *(_QWORD *)&idx);
    sub_B16FFC(&MasterFormationComponent_TypeInfo, v5);
    byte_40FB1CC = 1;
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
      v7 = MasterFormationComponent_TypeInfo;
      if ( (BYTE3(MasterFormationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MasterFormationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo);
        v7 = MasterFormationComponent_TypeInfo;
      }
      currentList = this->fields.currentList;
      v9 = idx - v7->static_fields->NOT_SCROLL_ICON_COUNT / 2;
      if ( v9 < 0 )
      {
        if ( !currentList )
          goto LABEL_24;
        v9 += currentList->fields._size;
      }
      else if ( !currentList )
      {
        goto LABEL_24;
      }
      iconLoopCtr = this->fields.iconLoopCtr;
      if ( !iconLoopCtr )
        goto LABEL_24;
      v11 = currentList->fields._size + v9;
    }
    else
    {
      iconLoopCtr = this->fields.iconLoopCtr;
      if ( !iconLoopCtr )
        goto LABEL_24;
      v11 = idx;
    }
    UIWrapContent__setScrollPos(iconLoopCtr, v11, 0LL);
    iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
    if ( iconCenterChild )
    {
      UnityEngine_Behaviour__set_enabled(iconCenterChild, 1, 0LL);
      v13 = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
      if ( v13 )
      {
        v14 = this->fields.iconCenterChild;
        transform = UnityEngine_Component__get_transform(v13, 0LL);
        if ( transform )
        {
          Child = UnityEngine_Transform__GetChild(transform, idx, 0LL);
          if ( v14 )
          {
            UICenterOnChild__CenterOn_35064772(v14, Child, 1, 0LL);
            goto LABEL_23;
          }
        }
      }
    }
LABEL_24:
    sub_B170D4();
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *arrowInfo; // x0
  UIScrollView_o *mScroll; // x0
  UIScrollView_o *iconScroll; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x2
  __int64 ActiveUserEquipId; // x0
  int32_t lv; // w8
  __int64 v32; // x21
  __int64 v33; // x21
  DataManager_o *v34; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct UserEquipEntity_o *userEquipEntity; // x8
  __int64 v44; // x21
  __int64 v45; // x22
  int32_t v46; // w1
  const MethodInfo *v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_40FB1C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEquipMaster___, userData);
    sub_B16FFC(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    byte_40FB1C1 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)SelfUserGame,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  arrowInfo = this->fields.arrowInfo;
  if ( !arrowInfo )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(arrowInfo, 0, 0LL);
  mScroll = this->fields.mScroll;
  if ( !mScroll )
    goto LABEL_26;
  UIScrollView__ResetPosition(mScroll, 0LL);
  iconScroll = this->fields.iconScroll;
  if ( !iconScroll )
    goto LABEL_26;
  UIScrollView__ResetPosition(iconScroll, 0LL);
  this->fields.usrGameEnt = userData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)userData,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( userEquipId <= 0 )
  {
    if ( !userData )
      goto LABEL_26;
    ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(userData, 0LL);
    this->fields.usrEquipId = ActiveUserEquipId;
  }
  else
  {
    ActiveUserEquipId = userEquipId;
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
  if ( ActiveUserEquipId < 1 )
  {
    v46 = 0;
    goto LABEL_25;
  }
  v32 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v33 = **(_QWORD **)(v32 + 192);
  if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
    sub_AAFCFC(v33);
  v34 = **(DataManager_o ***)(v33 + 184);
  if ( !v34
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(v34, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   this->fields.usrEquipId,
                   (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__),
        this->fields.userEquipEntity = (struct UserEquipEntity_o *)Entity,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.userEquipEntity,
          (System_Int32_array **)Entity,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42),
        (userEquipEntity = this->fields.userEquipEntity) == 0LL) )
  {
LABEL_26:
    sub_B170D4();
  }
  v45 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
  v44 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v54.fields.currentCryptoKey = v45;
  *(_QWORD *)&v54.fields.fakeValue = v44;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v54, 0LL);
  this->fields.currentEquipId = v46;
LABEL_25:
  MasterFormationComponent__setMstImg(this, v46, v29);
  MasterFormationComponent__setUsrEquipData(this, v47);
  this->fields.isChangeMasterImg = 1;
  this->fields.notificationDragState = notificationDragState;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.notificationDragState,
    (System_Int32_array **)notificationDragState,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setMstEquipIconList(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct UICenterOnChild_o **p_iconCenterChild; // x21
  UnityEngine_Object_o *iconCenterChild; // x22
  UnityEngine_Component_o *iconLoopCtr; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct UIWrapContent_o *v48; // x8
  UILabel_o *touchGuideLabel; // x22
  System_String_o *v50; // x0
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  UnityEngine_Component_o *iconScroll; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  float x; // s10
  float y; // s8
  float z; // s9
  MasterFormationComponent_c *v61; // x0
  struct UIScrollView_o *v62; // x22
  BattleServantConfConponent_o *p_onDragFinished; // x22
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v65; // x24
  System_Int32_array **v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x8
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  struct UIScrollView_o *v78; // x22
  BattleServantConfConponent_o *p_onMomentumMove; // x22
  System_Delegate_o *onMomentumMove; // t1
  UIScrollView_OnDragNotification_o *v81; // x24
  System_Int32_array **v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  struct UICenterOnChild_o *v93; // x21
  BattleServantConfConponent_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v96; // x23
  System_Int32_array **v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  UnityEngine_GameObject_o *arrowInfo; // x0
  UILabel_o *scrollGuideLabel; // x21
  System_String_o *v106; // x0
  bool isScrollEquipIcon; // w1
  int v108; // w8
  struct UIWrapContent_o *v109; // x8
  int v110; // w8
  int v111; // w9
  UnityEngine_Behaviour_o *v112; // x0
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v117; // x21
  int v118; // w9
  unsigned __int64 i; // x20
  UnityEngine_Component_o *v120; // x0
  UnityEngine_GameObject_o *equipIconPrefab; // x22
  UnityEngine_Transform_o *v122; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v124; // x22
  UnityEngine_Transform_o *v125; // x23
  int v126; // s0
  UnityEngine_Transform_o *v129; // x0
  UnityEngine_Transform_o *v130; // x23
  UnityEngine_Transform_o *v131; // x0
  int v132; // s0
  System_String_o *v135; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  MasterEquipIconComponent_o *v137; // x22
  __int64 v138; // x1
  __int64 v139; // x2
  __int64 v140; // x3
  __int64 v141; // x4
  struct System_Collections_Generic_List_UserEquipEntity__o *v142; // x23
  struct UserEquipEntity_array *items; // x8
  int64_t usrEquipId; // x23
  int32_t usrLv; // w24
  int32_t v146; // w25
  UserEquipEntity_o *v147; // x26
  MasterEquipIconComponent_CallbackFunc_o *v148; // x27
  UIWrapContent_o *v149; // x0
  UIWrapContent_o *v150; // x0
  UIWrapContent_o *v151; // x0
  int v152; // w8
  int v153; // w20
  UnityEngine_GameObject_o *v154; // x0
  UnityEngine_Transform_o *v155; // x0
  struct UIWrapContent_o *v156; // x8
  int v157; // s0
  MasterFormationComponent_o *v158; // x0
  const MethodInfo *v159; // x1
  unsigned int v160; // [xsp+Ch] [xbp-84h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_mstEqIconList; // [xsp+10h] [xbp-80h]
  signed __int64 size; // [xsp+18h] [xbp-78h]
  int v163; // [xsp+28h] [xbp-68h]
  int32_t v164; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v166; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB1C8 & 1) == 0 )
  {
    sub_B16FFC(&MasterEquipIconComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v15);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&Method_MasterFormationComponent_OnClickIcon__, v19);
    sub_B16FFC(&Method_MasterFormationComponent_OnIconCenterOnChildFinished__, v20);
    sub_B16FFC(&Method_MasterFormationComponent_OnIconDragFinished__, v21);
    sub_B16FFC(&Method_MasterFormationComponent_OnIconDragStarted__, v22);
    sub_B16FFC(&MasterFormationComponent_TypeInfo, v23);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v24);
    sub_B16FFC(&UIScrollView_OnDragNotification_TypeInfo, v25);
    sub_B16FFC(&SpringPanel_OnFinished_TypeInfo, v26);
    sub_B16FFC(&StringLiteral_8606/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/, v27);
    sub_B16FFC(&StringLiteral_8605/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/, v28);
    sub_B16FFC(&StringLiteral_4533/*"D3"*/, v29);
    byte_40FB1C8 = 1;
  }
  v164 = 0;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__);
  this->fields.mstEqIconList = (struct System_Collections_Generic_List_MasterEquipIconComponent__o *)v30;
  p_mstEqIconList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.mstEqIconList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mstEqIconList,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  p_iconCenterChild = &this->fields.iconCenterChild;
  iconCenterChild = (UnityEngine_Object_o *)this->fields.iconCenterChild;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(iconCenterChild, 0LL, 0LL) )
  {
    iconLoopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
    if ( !iconLoopCtr )
      goto LABEL_76;
    gameObject = UnityEngine_Component__get_gameObject(iconLoopCtr, 0LL);
    if ( !gameObject )
      goto LABEL_76;
    v41 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                   gameObject,
                                   (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_iconCenterChild = (struct UICenterOnChild_o *)v41;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.iconCenterChild, v41, v42, v43, v44, v45, v46, v47);
  }
  v48 = this->fields.iconLoopCtr;
  if ( !v48 )
    goto LABEL_76;
  *(_DWORD *)&v48->fields.cullContent = 64;
  touchGuideLabel = this->fields.touchGuideLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_8606/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/, 0LL);
  if ( !touchGuideLabel
    || (UILabel__set_text(touchGuideLabel, v50, 0LL), (currentList = this->fields.currentList) == 0LL)
    || (iconScroll = (UnityEngine_Component_o *)this->fields.iconScroll) == 0LL
    || (size = currentList->fields._size, (transform = UnityEngine_Component__get_transform(iconScroll, 0LL)) == 0LL) )
  {
LABEL_76:
    sub_B170D4();
  }
  localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v61 = MasterFormationComponent_TypeInfo;
  if ( (BYTE3(MasterFormationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterFormationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo);
    v61 = MasterFormationComponent_TypeInfo;
  }
  if ( (int)size <= v61->static_fields->NOT_SCROLL_ICON_COUNT )
  {
    v109 = this->fields.iconLoopCtr;
    this->fields.isScrollEquipIcon = 0;
    if ( !v109 )
      goto LABEL_76;
    v110 = *(_DWORD *)&v109->fields.cullContent;
    isScrollEquipIcon = 0;
    v111 = size - 1;
    if ( (int)size - 1 < 0 )
      v111 = size;
    x = (float)-((v111 >> 1) * v110);
    if ( (size & 1) == 0 )
      x = x - (float)(v110 / 2);
    v108 = 1;
  }
  else
  {
    v62 = this->fields.iconScroll;
    this->fields.isScrollEquipIcon = 1;
    if ( !v62 )
      goto LABEL_76;
    onDragFinished = (System_Delegate_o *)v62->fields.onDragFinished;
    p_onDragFinished = (BattleServantConfConponent_o *)&v62->fields.onDragFinished;
    v65 = (UIScrollView_OnDragNotification_o *)sub_B170CC(UIScrollView_OnDragNotification_TypeInfo, v54, v55, v56, v57);
    UIScrollView_OnDragNotification___ctor(
      v65,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragStarted__,
      0LL);
    v66 = (System_Int32_array **)System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v65, 0LL);
    v73 = v66;
    if ( v66 && *v66 != (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
      goto LABEL_77;
    p_onDragFinished->klass = (BattleServantConfConponent_c *)v66;
    sub_B16F98(p_onDragFinished, v66, v67, v68, v69, v70, v71, v72);
    v78 = this->fields.iconScroll;
    if ( !v78 )
      goto LABEL_76;
    onMomentumMove = (System_Delegate_o *)v78->fields.onMomentumMove;
    p_onMomentumMove = (BattleServantConfConponent_o *)&v78->fields.onMomentumMove;
    v81 = (UIScrollView_OnDragNotification_o *)sub_B170CC(UIScrollView_OnDragNotification_TypeInfo, v74, v75, v76, v77);
    UIScrollView_OnDragNotification___ctor(
      v81,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragFinished__,
      0LL);
    v82 = (System_Int32_array **)System_Delegate__Combine(onMomentumMove, (System_Delegate_o *)v81, 0LL);
    v73 = v82;
    if ( v82 )
    {
      if ( *v82 != (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_77;
    }
    p_onMomentumMove->klass = (BattleServantConfConponent_c *)v82;
    sub_B16F98(p_onMomentumMove, v82, v83, v84, v85, v86, v87, v88);
    v93 = *p_iconCenterChild;
    if ( !v93 )
      goto LABEL_76;
    onFinished = (System_Delegate_o *)v93->fields.onFinished;
    p_onFinished = (BattleServantConfConponent_o *)&v93->fields.onFinished;
    v96 = (SpringPanel_OnFinished_o *)sub_B170CC(SpringPanel_OnFinished_TypeInfo, v89, v90, v91, v92);
    SpringPanel_OnFinished___ctor(
      v96,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconCenterOnChildFinished__,
      0LL);
    v97 = (System_Int32_array **)System_Delegate__Combine(onFinished, (System_Delegate_o *)v96, 0LL);
    v73 = v97;
    if ( v97 )
    {
      if ( *v97 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
      {
LABEL_77:
        v158 = (MasterFormationComponent_o *)sub_B173C8(v73);
        MasterFormationComponent__setPosCurrentEq(v158, v159);
        return;
      }
    }
    p_onFinished->klass = (BattleServantConfConponent_c *)v97;
    sub_B16F98(p_onFinished, v97, v98, v99, v100, v101, v102, v103);
    arrowInfo = this->fields.arrowInfo;
    if ( !arrowInfo )
      goto LABEL_76;
    UnityEngine_GameObject__SetActive(arrowInfo, 1, 0LL);
    scrollGuideLabel = this->fields.scrollGuideLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v106 = LocalizationManager__Get((System_String_o *)StringLiteral_8605/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/, 0LL);
    if ( !scrollGuideLabel )
      goto LABEL_76;
    UILabel__set_text(scrollGuideLabel, v106, 0LL);
    isScrollEquipIcon = this->fields.isScrollEquipIcon;
    v108 = 2;
  }
  v160 = v108;
  MasterFormationComponent__SetEnabledEquipIconScroll(this, isScrollEquipIcon, v55);
  v112 = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
  if ( !v112 )
    goto LABEL_76;
  UnityEngine_Behaviour__set_enabled(v112, 0, 0LL);
  v117 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                   v113,
                                                                                                   v114,
                                                                                                   v115,
                                                                                                   v116);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v117,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v164 = 0;
  v118 = 0;
  do
  {
    v163 = v118;
    if ( (int)size >= 1 )
    {
      for ( i = 0LL; (__int64)i < size; ++i )
      {
        v120 = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
        if ( !v120 )
          goto LABEL_76;
        equipIconPrefab = this->fields.equipIconPrefab;
        v122 = UnityEngine_Component__get_transform(v120, 0LL);
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, equipIconPrefab, v122, 0LL, 0LL);
        if ( !Object )
          goto LABEL_76;
        v124 = Object;
        v125 = UnityEngine_GameObject__get_transform(Object, 0LL);
        *(UnityEngine_Vector3_o *)&v126 = UnityEngine_Vector3__get_one(0LL);
        if ( !v125 )
          goto LABEL_76;
        UnityEngine_Transform__set_localScale(v125, *(UnityEngine_Vector3_o *)&v126, 0LL);
        v129 = UnityEngine_GameObject__get_transform(v124, 0LL);
        if ( !this->fields.iconLoopCtr )
          goto LABEL_76;
        v130 = v129;
        v131 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.iconLoopCtr, 0LL);
        if ( !v131 )
          goto LABEL_76;
        *(UnityEngine_Vector3_o *)&v132 = UnityEngine_Transform__get_localPosition(v131, 0LL);
        if ( !v130 )
          goto LABEL_76;
        UnityEngine_Transform__set_localPosition(v130, *(UnityEngine_Vector3_o *)&v132, 0LL);
        v135 = System_Int32__ToString_38275808((int32_t)&v164, (System_String_o *)StringLiteral_4533/*"D3"*/, 0LL);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v124, v135, 0LL);
        if ( !v117 )
          goto LABEL_76;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v117,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v124,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
        Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                           v124,
                                                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
        if ( !*p_mstEqIconList )
          goto LABEL_76;
        v137 = (MasterEquipIconComponent_o *)Component_srcLineSprite;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_mstEqIconList,
          Component_srcLineSprite,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__);
        v142 = this->fields.currentList;
        if ( !v142 )
          goto LABEL_76;
        if ( i >= (unsigned int)v142->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        items = v142->fields._items;
        usrEquipId = this->fields.usrEquipId;
        usrLv = this->fields.usrLv;
        v146 = v164;
        v147 = items->m_Items[i];
        v148 = (MasterEquipIconComponent_CallbackFunc_o *)sub_B170CC(
                                                            MasterEquipIconComponent_CallbackFunc_TypeInfo,
                                                            v138,
                                                            v139,
                                                            v140,
                                                            v141);
        MasterEquipIconComponent_CallbackFunc___ctor(
          v148,
          (Il2CppObject *)this,
          Method_MasterFormationComponent_OnClickIcon__,
          0LL);
        if ( !v137 )
          goto LABEL_76;
        MasterEquipIconComponent__SetEquipInfo(v137, v147, usrEquipId, usrLv, v146, v148, 0LL);
        MasterEquipIconComponent__UpdateSelected(v137, this->fields.currentEquipId, 0LL);
        ++v164;
      }
    }
    v118 = v163 + 1;
  }
  while ( v163 + 1 < v160 );
  v149 = this->fields.iconLoopCtr;
  if ( !v149 )
    goto LABEL_76;
  UIWrapContent__SortAlphabetically(v149, 0LL);
  v150 = this->fields.iconLoopCtr;
  if ( !v150 )
    goto LABEL_76;
  UIWrapContent__resetScroll(v150, 0LL);
  if ( this->fields.isScrollEquipIcon )
  {
    v151 = this->fields.iconLoopCtr;
    if ( v151 )
    {
      UIWrapContent__WrapContent(v151, 0LL);
      return;
    }
    goto LABEL_76;
  }
  if ( !v117 )
    goto LABEL_76;
  v152 = v117->fields._size;
  if ( v152 >= 1 )
  {
    v153 = 0;
    while ( 1 )
    {
      if ( v152 <= (unsigned int)v153 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v154 = (UnityEngine_GameObject_o *)v117->fields._items->m_Items[v153];
      if ( !v154 )
        break;
      v155 = UnityEngine_GameObject__get_transform(v154, 0LL);
      if ( !v155 )
        break;
      v166.fields.x = x;
      v166.fields.y = y;
      v166.fields.z = z;
      UnityEngine_Transform__set_localPosition(v155, v166, 0LL);
      v156 = this->fields.iconLoopCtr;
      if ( !v156 )
        break;
      v157 = *(_DWORD *)&v156->fields.cullContent;
      v152 = v117->fields._size;
      ++v153;
      x = x + (float)v157;
      if ( v153 >= v152 )
        return;
    }
    goto LABEL_76;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setMstEquipList(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_mstEqInfoList; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct UICenterOnChild_o **p_centerChild; // x21
  UnityEngine_Object_o *centerChild; // x22
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  UnityEngine_Component_o *loopCtr; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct UIWrapContent_o *v41; // x8
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  signed __int64 size; // x25
  bool isScrollEquipDetail; // w1
  int v45; // w8
  struct UIScrollView_o *mScroll; // x22
  BattleServantConfConponent_o *p_onDragFinished; // x22
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v49; // x24
  System_Int32_array **v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x8
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  struct UICenterOnChild_o *v62; // x21
  BattleServantConfConponent_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v65; // x23
  System_Int32_array **v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  int v73; // w24
  unsigned __int64 v74; // x23
  UnityEngine_Component_o *v75; // x0
  UnityEngine_GameObject_o *mstEquipInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v79; // x21
  UnityEngine_Transform_o *v80; // x22
  int v81; // s0
  UnityEngine_Transform_o *v84; // x0
  UnityEngine_Transform_o *v85; // x22
  UnityEngine_Transform_o *v86; // x0
  int v87; // s0
  System_String_o *v90; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  MasterEquipInfoComponent_o *v92; // x21
  int32_t v93; // w3
  const MethodInfo *v94; // x5
  struct System_Collections_Generic_List_UserEquipEntity__o *v95; // x22
  UIWrapContent_o *v96; // x0
  UIWrapContent_o *v97; // x0
  UIWrapContent_o *v98; // x0
  MasterFormationComponent_o *v99; // x0
  const MethodInfo *v100; // x1
  unsigned int v101; // [xsp+8h] [xbp-58h]
  int32_t moveIdx; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FB1C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo, v11);
    sub_B16FFC(&Method_MasterFormationComponent_OnCenterOnChildFinished__, v12);
    sub_B16FFC(&Method_MasterFormationComponent_OnDragStarted__, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&UIScrollView_OnDragNotification_TypeInfo, v15);
    sub_B16FFC(&SpringPanel_OnFinished_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_4533/*"D3"*/, v17);
    byte_40FB1C7 = 1;
  }
  moveIdx = 0;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__);
  p_mstEqInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.mstEqInfoList;
  this->fields.mstEqInfoList = (struct System_Collections_Generic_List_MasterEquipInfoComponent__o *)v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mstEqInfoList,
    (System_Int32_array **)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  p_centerChild = &this->fields.centerChild;
  centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(centerChild, 0LL, 0LL) )
  {
    loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
    if ( !loopCtr )
      goto LABEL_41;
    gameObject = UnityEngine_Component__get_gameObject(loopCtr, 0LL);
    if ( !gameObject )
      goto LABEL_41;
    v34 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                   gameObject,
                                   (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (struct UICenterOnChild_o *)v34;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.centerChild, v34, v35, v36, v37, v38, v39, v40);
  }
  v41 = this->fields.loopCtr;
  if ( !v41 )
    goto LABEL_41;
  *(_DWORD *)&v41->fields.cullContent = 534;
  currentList = this->fields.currentList;
  if ( !currentList )
    goto LABEL_41;
  size = currentList->fields._size;
  if ( (int)size < 2 )
  {
    isScrollEquipDetail = 0;
    v45 = 1;
    this->fields.isScrollEquipDetail = 0;
LABEL_21:
    v101 = v45;
    MasterFormationComponent__SetEnabledEquipDetailScroll(this, isScrollEquipDetail, v29);
    moveIdx = 0;
    v73 = 0;
    while ( (int)size < 1 )
    {
LABEL_36:
      if ( ++v73 >= v101 )
      {
        v96 = this->fields.loopCtr;
        if ( v96 )
        {
          UIWrapContent__SortAlphabetically(v96, 0LL);
          v97 = this->fields.loopCtr;
          if ( v97 )
          {
            UIWrapContent__resetScroll(v97, 0LL);
            v98 = this->fields.loopCtr;
            if ( v98 )
            {
              UIWrapContent__WrapContent(v98, 0LL);
              return;
            }
          }
        }
LABEL_41:
        sub_B170D4();
      }
    }
    v74 = 0LL;
    while ( 1 )
    {
      v75 = (UnityEngine_Component_o *)this->fields.loopCtr;
      if ( !v75 )
        goto LABEL_41;
      mstEquipInfoPrefab = this->fields.mstEquipInfoPrefab;
      transform = UnityEngine_Component__get_transform(v75, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, mstEquipInfoPrefab, transform, 0LL, 0LL);
      if ( !Object )
        goto LABEL_41;
      v79 = Object;
      v80 = UnityEngine_GameObject__get_transform(Object, 0LL);
      *(UnityEngine_Vector3_o *)&v81 = UnityEngine_Vector3__get_one(0LL);
      if ( !v80 )
        goto LABEL_41;
      UnityEngine_Transform__set_localScale(v80, *(UnityEngine_Vector3_o *)&v81, 0LL);
      v84 = UnityEngine_GameObject__get_transform(v79, 0LL);
      if ( !this->fields.loopCtr )
        goto LABEL_41;
      v85 = v84;
      v86 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.loopCtr, 0LL);
      if ( !v86 )
        goto LABEL_41;
      *(UnityEngine_Vector3_o *)&v87 = UnityEngine_Transform__get_localPosition(v86, 0LL);
      if ( !v85 )
        goto LABEL_41;
      UnityEngine_Transform__set_localPosition(v85, *(UnityEngine_Vector3_o *)&v87, 0LL);
      v90 = System_Int32__ToString_38275808((int32_t)&moveIdx, (System_String_o *)StringLiteral_4533/*"D3"*/, 0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v79, v90, 0LL);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         v79,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
      if ( !*p_mstEqInfoList )
        goto LABEL_41;
      v92 = (MasterEquipInfoComponent_o *)Component_srcLineSprite;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *p_mstEqInfoList,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__);
      v95 = this->fields.currentList;
      if ( !v95 )
        goto LABEL_41;
      if ( v74 >= (unsigned int)v95->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !v92 )
        goto LABEL_41;
      MasterEquipInfoComponent__setEquipInfo(
        v92,
        v95->fields._items->m_Items[v74++],
        this->fields.usrEquipId,
        v93,
        moveIdx++,
        v94);
      if ( (__int64)v74 >= size )
        goto LABEL_36;
    }
  }
  mScroll = this->fields.mScroll;
  this->fields.isScrollEquipDetail = 1;
  if ( !mScroll )
    goto LABEL_41;
  onDragFinished = (System_Delegate_o *)mScroll->fields.onDragFinished;
  p_onDragFinished = (BattleServantConfConponent_o *)&mScroll->fields.onDragFinished;
  v49 = (UIScrollView_OnDragNotification_o *)sub_B170CC(UIScrollView_OnDragNotification_TypeInfo, v28, v29, v30, v31);
  UIScrollView_OnDragNotification___ctor(
    v49,
    (Il2CppObject *)this,
    Method_MasterFormationComponent_OnDragStarted__,
    0LL);
  v50 = (System_Int32_array **)System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v49, 0LL);
  v57 = v50;
  if ( !v50 || *v50 == (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
  {
    p_onDragFinished->klass = (BattleServantConfConponent_c *)v50;
    sub_B16F98(p_onDragFinished, v50, v51, v52, v53, v54, v55, v56);
    v62 = *p_centerChild;
    if ( !v62 )
      goto LABEL_41;
    onFinished = (System_Delegate_o *)v62->fields.onFinished;
    p_onFinished = (BattleServantConfConponent_o *)&v62->fields.onFinished;
    v65 = (SpringPanel_OnFinished_o *)sub_B170CC(SpringPanel_OnFinished_TypeInfo, v58, v59, v60, v61);
    SpringPanel_OnFinished___ctor(
      v65,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnCenterOnChildFinished__,
      0LL);
    v66 = (System_Int32_array **)System_Delegate__Combine(onFinished, (System_Delegate_o *)v65, 0LL);
    v57 = v66;
    if ( !v66 || *v66 == (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
    {
      p_onFinished->klass = (BattleServantConfConponent_c *)v66;
      sub_B16F98(p_onFinished, v66, v67, v68, v69, v70, v71, v72);
      isScrollEquipDetail = this->fields.isScrollEquipDetail;
      v45 = 2;
      goto LABEL_21;
    }
  }
  v99 = (MasterFormationComponent_o *)sub_B173C8(v57);
  MasterFormationComponent__setMstEquipIconList(v99, v100);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setMstImg(
        MasterFormationComponent_o *this,
        int32_t equipId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  UnityEngine_Object_o *masterFigure; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  struct UIMasterFigureTextureOld_o *Prefab_27244420; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UIMasterFigureTextureOld_o *v21; // x21
  int32_t genderType; // w20
  MasterFormationComponent___c_c *v23; // x0
  struct MasterFormationComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__65_0; // x22
  Il2CppObject *v26; // x23
  struct MasterFormationComponent___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // [xsp+10h] [xbp-40h]

  if ( (byte_40FB1C4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&equipId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&Method_MasterFormationComponent___c__setMstImg_b__65_0__, v6);
    sub_B16FFC(&MasterFormationComponent___c_TypeInfo, v7);
    byte_40FB1C4 = 1;
  }
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_19;
  masterFigure = (UnityEngine_Object_o *)this->fields.masterFigure;
  this->fields.genderType = usrGameEnt->fields.genderType;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(masterFigure, 0LL, 0LL) )
  {
    Prefab_27244420 = MasterFigureManagerOld__CreatePrefab_27244420(
                        this->fields.mstImgBase,
                        1,
                        this->fields.genderType,
                        equipId,
                        10,
                        0LL,
                        0,
                        (System_Nullable_Vector3__o)0,
                        v34);
    this->fields.masterFigure = Prefab_27244420;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.masterFigure,
      (System_Int32_array **)Prefab_27244420,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    return;
  }
  v21 = this->fields.masterFigure;
  genderType = this->fields.genderType;
  v23 = MasterFormationComponent___c_TypeInfo;
  if ( (BYTE3(MasterFormationComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterFormationComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterFormationComponent___c_TypeInfo);
    v23 = MasterFormationComponent___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__65_0 = static_fields->__9__65_0;
  if ( !_9__65_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__65_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
    System_Action___ctor(_9__65_0, v26, Method_MasterFormationComponent___c__setMstImg_b__65_0__, 0LL);
    v27 = MasterFormationComponent___c_TypeInfo->static_fields;
    v27->__9__65_0 = _9__65_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v27->__9__65_0,
      (System_Int32_array **)_9__65_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !v21 )
LABEL_19:
    sub_B170D4();
  UIMasterFigureTextureOld__SetCharacter(v21, 1, genderType, equipId, _9__65_0, 0, 0LL);
}


void __fastcall MasterFormationComponent__setPosCurrentEq(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  struct System_Collections_Generic_List_MasterEquipInfoComponent__o *mstEqInfoList; // x22
  int size; // w20
  unsigned int v7; // w21
  MasterEquipInfoComponent_o *v8; // x8
  struct UserEquipEntity_o *usrEquipEnt; // x9

  if ( (byte_40FB1CB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Item__, v4);
    byte_40FB1CB = 1;
  }
  if ( this->fields.usrEquipId >= 1 )
  {
    mstEqInfoList = this->fields.mstEqInfoList;
    if ( mstEqInfoList )
    {
      size = mstEqInfoList->fields._size;
      if ( size >= 1 )
      {
        v7 = 0;
        while ( 1 )
        {
          if ( mstEqInfoList->fields._size <= v7 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v8 = mstEqInfoList->fields._items->m_Items[v7];
          if ( !v8 || (usrEquipEnt = v8->fields.usrEquipEnt) == 0LL )
LABEL_14:
            sub_B170D4();
          if ( usrEquipEnt->fields.id == this->fields.usrEquipId )
            break;
          if ( (int)++v7 >= size )
            return;
          mstEqInfoList = this->fields.mstEqInfoList;
          if ( !mstEqInfoList )
            goto LABEL_14;
        }
        MasterFormationComponent__setDispRePosition(this, v8->fields.moveEqIdx, v2);
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
  WebViewManager_o *Instance; // x0
  UserEquipMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserGameEntity_o *usrGameEnt; // x8
  System_Collections_Generic_IEnumerable_T__o *List; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_currentList; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v35; // x21
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  signed __int64 size; // x8
  unsigned __int64 v40; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x20
  MasterFormationComponent___c_c *v42; // x0
  struct MasterFormationComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__67_0; // x21
  Il2CppObject *v45; // x22
  struct MasterFormationComponent___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x1

  if ( (byte_40FB1C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_UserEquipEntity___ctor__, method);
    sub_B16FFC(&System_Comparison_UserEquipEntity__TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEquipMaster___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipEntity__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipEntity__Sort__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipEntity___ctor___66749960, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipEntity___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_List_UserEquipEntity__TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__, v13);
    sub_B16FFC(&MasterFormationComponent___c_TypeInfo, v14);
    byte_40FB1C6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = (UserEquipMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_27;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_27;
  List = (System_Collections_Generic_IEnumerable_T__o *)UserEquipMaster__getList(
                                                          MasterData_WarQuestSelectionMaster,
                                                          usrGameEnt->fields.userId,
                                                          0LL);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserEquipEntity__TypeInfo,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
  p_currentList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.currentList;
  this->fields.currentList = (struct System_Collections_Generic_List_UserEquipEntity__o *)v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentList,
    (System_Int32_array **)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( !List )
    goto LABEL_27;
  if ( List[1].monitor )
  {
    v35 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                            System_Collections_Generic_List_UserEquipEntity__TypeInfo,
                                                                            v31,
                                                                            v32,
                                                                            v33,
                                                                            v34);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v35,
      List,
      (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_UserEquipEntity___ctor___66749960);
    if ( this->fields.usrEquipId >= 1 )
    {
      if ( !v35 )
        goto LABEL_27;
      LODWORD(size) = v35->fields._size;
      if ( (int)size >= 1 )
      {
        v40 = 0LL;
        while ( 1 )
        {
          if ( v40 >= (unsigned int)size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( !*p_currentList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            *p_currentList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v35->fields._items->m_Items[v40],
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserEquipEntity__Add__);
          size = v35->fields._size;
          if ( (__int64)++v40 >= size )
            goto LABEL_16;
        }
LABEL_27:
        sub_B170D4();
      }
LABEL_16:
      v41 = *p_currentList;
      v42 = MasterFormationComponent___c_TypeInfo;
      if ( (BYTE3(MasterFormationComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MasterFormationComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterFormationComponent___c_TypeInfo);
        v42 = MasterFormationComponent___c_TypeInfo;
      }
      static_fields = v42->static_fields;
      _9__67_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__67_0;
      if ( !_9__67_0 )
      {
        if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v42);
          static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
        }
        v45 = (Il2CppObject *)static_fields->__9;
        _9__67_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                               System_Comparison_UserEquipEntity__TypeInfo,
                                                                               v31,
                                                                               v36,
                                                                               v37,
                                                                               v38);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__67_0,
          v45,
          Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__,
          (const MethodInfo_25BFD48 *)Method_System_Comparison_UserEquipEntity___ctor__);
        v46 = MasterFormationComponent___c_TypeInfo->static_fields;
        v46->__9__67_0 = (struct System_Comparison_UserEquipEntity__o *)_9__67_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v46->__9__67_0,
          (System_Int32_array **)_9__67_0,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
      }
      if ( !v41 )
        goto LABEL_27;
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v41,
        (System_Comparison_T__o *)_9__67_0,
        (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_UserEquipEntity__Sort__);
    }
  }
  MasterFormationComponent__setMstEquipList(this, v31);
  MasterFormationComponent__setMstEquipIconList(this, v53);
  MasterFormationComponent__setPosCurrentEq(this, v54);
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
  sub_B16F98(
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
  if ( (byte_40F6952 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, flg);
    byte_40F6952 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall MasterFormationComponent_NotificationDragState__EndInvoke(
        MasterFormationComponent_NotificationDragState_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent_NotificationDragState__Invoke(
        MasterFormationComponent_NotificationDragState_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  MasterFormationComponent_NotificationDragState_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  MasterFormationComponent_NotificationDragState_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  MasterFormationComponent_NotificationDragState_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (MasterFormationComponent_NotificationDragState_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, flg, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(flg, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, flg, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, flg, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            flg,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, flg, v20);
    goto LABEL_37;
  }
}


void __fastcall MasterFormationComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6950 & 1) == 0 )
  {
    sub_B16FFC(&MasterFormationComponent___c_TypeInfo, v1);
    byte_40F6950 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(MasterFormationComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)MasterFormationComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  int32_t v8; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_40F6951 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, a);
    byte_40F6951 = 1;
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
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v10, 0LL);
  if ( !b )
LABEL_9:
    sub_B170D4();
  return v8 - CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(b->fields.equipId, 0LL);
}