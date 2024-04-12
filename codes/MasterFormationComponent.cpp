void __fastcall MasterFormationComponent___cctor(const MethodInfo *method)
{
  MasterFormationComponent_c *v1; // x8

  if ( (byte_42B30FB & 1) == 0 )
  {
    sub_B52984(&MasterFormationComponent_TypeInfo);
    byte_42B30FB = 1;
  }
  MasterFormationComponent_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME = 0.15;
  MasterFormationComponent_TypeInfo->static_fields->NOT_SCROLL_ICON_COUNT = 8;
  v1 = MasterFormationComponent_TypeInfo;
  MasterFormationComponent_TypeInfo->static_fields->ALPHA_ANIMATION_SPD = 0.5;
  v1->static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
}


void __fastcall MasterFormationComponent___ctor(MasterFormationComponent_o *this, const MethodInfo *method)
{
  this->fields.isFirst = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MasterFormationComponent__CloseCmdSpell(MasterFormationComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_42B30FA & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B30FA = 1;
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
    sub_B52A5C(cmdSpellWinComp, method);
  }
}


void __fastcall MasterFormationComponent__OnCenterOnChildFinished(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  struct UICenterOnChild_o *centerChild; // x8
  MasterEquipInfoComponent_o *v5; // x20
  const MethodInfo *v6; // x2
  struct UserEquipEntity_o *usrEquipEnt; // x8

  if ( (byte_42B30EF & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
    sub_B52984(&StringLiteral_2985/*"CHANGE_INFO"*/);
    byte_42B30EF = 1;
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
                                                    (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___)) == 0LL
    || (v5 = (MasterEquipInfoComponent_o *)leftArrowBtn,
        leftArrowBtn = (UnityEngine_Behaviour_o *)MasterEquipInfoComponent__getEquipId(
                                                    (MasterEquipInfoComponent_o *)leftArrowBtn,
                                                    method),
        this->fields.currentEquipId = (int)leftArrowBtn,
        (usrEquipEnt = v5->fields.usrEquipEnt) == 0LL) )
  {
LABEL_15:
    sub_B52A5C(leftArrowBtn, method);
  }
  this->fields.currentUsrEquipId = usrEquipEnt->fields.id;
  this->fields.isChange = v5->fields.isChange;
  this->fields.currentMoveIdx = v5->fields.moveEqIdx;
  MasterEquipInfoComponent__setDispEffectObj(v5, 1, v6);
  if ( this->fields.isChangeMasterImg )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.fsm;
    if ( leftArrowBtn )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)leftArrowBtn, (System_String_o *)StringLiteral_2985/*"CHANGE_INFO"*/, 0LL);
      return;
    }
    goto LABEL_15;
  }
}


void __fastcall MasterFormationComponent__OnClickCmdSpell(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_42B30F9 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B30F9 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    sub_B52A5C(0LL, v3);
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, _QWORD, Il2CppMethodPointer))cmdSpellWinComp->klass->vtable._10_Open.method)(
    cmdSpellWinComp,
    0LL,
    cmdSpellWinComp->klass->vtable._11_CompOpen.methodPtr);
}


void __fastcall MasterFormationComponent__OnClickIcon(
        MasterFormationComponent_o *this,
        int32_t idx,
        int32_t equipId,
        int64_t userEquipId,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x1
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  UICenterOnChild_o *centerChild; // x22
  struct UserEquipEntity_o *userEquipEntity; // x8
  __int64 v15; // x21
  __int64 v16; // x22
  struct UICenterOnChild_o *v17; // x8
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_42B30E8 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B30E8 = 1;
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
        MasterFormationComponent__setDisEquipEffect(this, v11);
        MasterFormationComponent__setMstImg(this, equipId, v12);
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
              UICenterOnChild__CenterOn_35928848(centerChild, (UnityEngine_Transform_o *)iconCenterChild, 1, 0LL);
              userEquipEntity = this->fields.userEquipEntity;
              if ( userEquipEntity )
              {
                v16 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
                v15 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v21.fields.currentCryptoKey = v16;
                *(_QWORD *)&v21.fields.fakeValue = v15;
                iconCenterChild = (UnityEngine_Behaviour_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                               v21,
                                                               0LL);
                if ( (_DWORD)iconCenterChild != equipId )
                  goto LABEL_24;
                v17 = this->fields.centerChild;
                if ( v17 )
                {
                  iconCenterChild = (UnityEngine_Behaviour_o *)v17->fields.mCenteredObject;
                  if ( iconCenterChild )
                  {
                    iconCenterChild = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)iconCenterChild,
                                                                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
                    if ( iconCenterChild )
                    {
                      MasterEquipInfoComponent__setDispEffectObj((MasterEquipInfoComponent_o *)iconCenterChild, 1, v18);
LABEL_24:
                      MasterFormationComponent__UpdateIconSelected(this, v9);
                      MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v19);
                      MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v20);
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
    sub_B52A5C(iconCenterChild, v9);
  }
}


void __fastcall MasterFormationComponent__OnDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  UnityEngine_Behaviour_o *iconCenterChild; // x0

  if ( (byte_42B30EC & 1) == 0 )
  {
    sub_B52984(&StringLiteral_11449/*"RefreshCurrentInfo"*/);
    byte_42B30EC = 1;
  }
  *(_WORD *)&this->fields.isChangeMasterImg = 1;
  this->fields.isDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_35611056(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11449/*"RefreshCurrentInfo"*/,
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
    sub_B52A5C(iconCenterChild, v5);
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
  void *leftArrowBtn; // x0
  struct UICenterOnChild_o *iconCenterChild; // x8
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B30F0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__);
    sub_B52984(&StringLiteral_11449/*"RefreshCurrentInfo"*/);
    byte_42B30F0 = 1;
  }
  memset(&v10, 0, sizeof(v10));
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
                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
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
  UnityEngine_MonoBehaviour__CancelInvoke_35611056(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11449/*"RefreshCurrentInfo"*/,
    0LL);
  leftArrowBtn = this->fields.notificationDragState;
  if ( !leftArrowBtn )
    goto LABEL_20;
  MasterFormationComponent_NotificationDragState__Invoke(
    (MasterFormationComponent_NotificationDragState_o *)leftArrowBtn,
    0,
    0LL);
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v6);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v7);
  leftArrowBtn = this->fields.mstEqIconList;
  if ( !leftArrowBtn )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)leftArrowBtn,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v10.fields.current )
      sub_B52A5C(0LL, v8);
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v10.fields.current, 1, v9);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  leftArrowBtn = this->fields.iconCenterChild;
  if ( !leftArrowBtn )
LABEL_20:
    sub_B52A5C(leftArrowBtn, method);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)leftArrowBtn, 0, 0LL);
}


void __fastcall MasterFormationComponent__OnIconDragFinished(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B30EE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    byte_42B30EE = 1;
  }
  memset(&v6, 0, sizeof(v6));
  iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
  if ( !iconCenterChild
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 1, 0LL),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
  {
    sub_B52A5C(iconCenterChild, method);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v6,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)iconCenterChild,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v6,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v6.fields.current )
      sub_B52A5C(0LL, v4);
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v6.fields.current, 0, v5);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v6,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
}


void __fastcall MasterFormationComponent__OnIconDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0

  if ( (byte_42B30ED & 1) == 0 )
  {
    sub_B52984(&StringLiteral_11449/*"RefreshCurrentInfo"*/);
    byte_42B30ED = 1;
  }
  *(_WORD *)&this->fields.isChangeMasterImg = 257;
  this->fields.isIconDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_35611056(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11449/*"RefreshCurrentInfo"*/,
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
    sub_B52A5C(leftArrowBtn, v4);
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

  if ( (byte_42B30F1 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_11449/*"RefreshCurrentInfo"*/);
    byte_42B30F1 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_35611056(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11449/*"RefreshCurrentInfo"*/,
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
      UICenterOnChild__CenterOn_35928848(centerChild, (UnityEngine_Transform_o *)notificationDragState, 1, 0LL);
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
    sub_B52A5C(notificationDragState, v3);
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
  UICenterOnChild__CenterOn_35928848(iconCenterChild, (UnityEngine_Transform_o *)notificationDragState, 1, 0LL);
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
      sub_B52A5C(mScroll, enabled);
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
      sub_B52A5C(iconScroll, enabled);
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
    sub_B52A5C(mScroll, v4);
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

  if ( (byte_42B30DF & 1) == 0 )
  {
    sub_B52984(&MasterFormationComponent_TypeInfo);
    byte_42B30DF = 1;
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
    sub_B52A5C(iconScroll, method);
  }
}


void __fastcall MasterFormationComponent__UpdateIconSelected(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Collections_Generic_List_MasterEquipIconComponent__o *mstEqIconList; // x22
  int size; // w20
  unsigned int v6; // w21
  MasterEquipIconComponent_o *v7; // x0

  if ( (byte_42B30E9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Item__);
    byte_42B30E9 = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v7 = mstEqIconList->fields._items->m_Items[v6];
        if ( !v7 )
          break;
        MasterEquipIconComponent__UpdateSelected(v7, this->fields.currentEquipId, v2);
        if ( (int)++v6 >= size )
          return;
        mstEqIconList = this->fields.mstEqIconList;
      }
      while ( mstEqIconList );
      sub_B52A5C(v7, method);
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
    sub_B52A5C(cmdSpellIconComp, method);
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

  if ( (byte_42B30DD & 1) == 0 )
  {
    sub_B52984(&MasterFormationComponent_NotificationDragState_TypeInfo);
    byte_42B30DD = 1;
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
    v8 = sub_B4739C(p_notificationDragState, v7, notificationDragState);
    v9 = notificationDragState == (System_Delegate_o *)v8;
    notificationDragState = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
  MasterFormationComponent__remove_notificationDragState(v10, v11, v12);
}


void __fastcall MasterFormationComponent__changeCmdSpellImg(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x22
  const MethodInfo *v4; // x3
  __int64 SpellImageId; // x0
  __int64 v6; // x1
  CommandSpellIconComponent_o *cmdSpellIconComp; // x21
  int32_t v8; // w20
  int32_t CommandSpell; // w22
  System_Action_o *v10; // x23

  if ( (byte_42B30E4 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__);
    byte_42B30E4 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  SpellImageId = MasterFormationComponent__getSpellImageId(
                   (MasterFormationComponent_o *)SelfUserGame,
                   this->fields.genderType,
                   this->fields.currentEquipId,
                   v4);
  if ( !SelfUserGame
    || (cmdSpellIconComp = this->fields.cmdSpellIconComp,
        v8 = SpellImageId,
        CommandSpell = UserGameEntity__getCommandSpell(SelfUserGame, 0LL),
        v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v10,
          (Il2CppObject *)this,
          Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__,
          0LL),
        !cmdSpellIconComp) )
  {
    sub_B52A5C(SpellImageId, v6);
  }
  CommandSpellIconComponent__SetChangeCurrentCmdSepll(cmdSpellIconComp, v8, CommandSpell, v10, 0LL);
}


void __fastcall MasterFormationComponent__closeMasterFormation(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *loopCtr; // x0
  int32_t childCount; // w0
  int32_t v6; // w20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v8; // w0
  int32_t v9; // w20
  UnityEngine_Object_o *v10; // x21

  if ( (byte_42B30F7 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UserEquipNewManager_TypeInfo);
    byte_42B30F7 = 1;
  }
  MasterFormationComponent__destroyMasterFigure(this, method);
  loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_31;
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL);
  if ( !loopCtr )
    goto LABEL_31;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)loopCtr, 0LL);
  v6 = childCount - 1;
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
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)loopCtr, v6, 0LL);
      if ( !loopCtr )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(loopCtr, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35617168(gameObject, 0LL);
      if ( --v6 < 0 )
        goto LABEL_13;
    }
LABEL_31:
    sub_B52A5C(loopCtr, v3);
  }
LABEL_13:
  loopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
  if ( !loopCtr )
    goto LABEL_31;
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL);
  if ( !loopCtr )
    goto LABEL_31;
  v8 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)loopCtr, 0LL);
  v9 = v8 - 1;
  if ( v8 >= 1 )
  {
    do
    {
      loopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
      if ( !loopCtr )
        goto LABEL_31;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL);
      if ( !loopCtr )
        goto LABEL_31;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)loopCtr, v9, 0LL);
      if ( !loopCtr )
        goto LABEL_31;
      v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(loopCtr, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35617168(v10, 0LL);
    }
    while ( --v9 >= 0 );
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42B30F8 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B30F8 = 1;
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
      sub_B52A5C(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_masterFigure, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
    *p_masterFigure = 0LL;
    sub_B52920((BattleServantConfConponent_o *)p_masterFigure, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


int64_t __fastcall MasterFormationComponent__getCurrentUsrEquipId(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.currentUsrEquipId;
}


int32_t __fastcall MasterFormationComponent__getSpellImageId(
        MasterFormationComponent_o *this,
        int32_t genderType,
        int64_t equipId,
        const MethodInfo *method)
{
  int32_t v4; // w20
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  DataManager_c *klass; // x19
  void *writeMasterDataThreadException; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v4 = equipId;
  if ( (byte_42B30F6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_B52984(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B30F6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      v4,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__)) == 0LL )
  {
    sub_B52A5C(Instance, v7);
  }
  if ( genderType == 2 )
  {
    writeMasterDataThreadException = Instance->fields.writeMasterDataThreadException;
    klass = Instance[1].klass;
  }
  else
  {
    writeMasterDataThreadException = Instance->fields.writeMasterDataThread;
    klass = *(DataManager_c **)&Instance->fields.writeMasterDataThreadEnd;
  }
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = writeMasterDataThreadException;
  *(_QWORD *)&v11.fields.fakeValue = klass;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v11, 0LL);
}


bool __fastcall MasterFormationComponent__isChangeEquip(MasterFormationComponent_o *this, const MethodInfo *method)
{
  return this->fields.isChange;
}


void __fastcall MasterFormationComponent__onClickLeftArrow(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  int32_t childCount; // w8
  int v5; // w8
  int32_t v6; // w20
  UICenterOnChild_o *iconCenterChild; // x21
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B30F4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_11449/*"RefreshCurrentInfo"*/);
    byte_42B30F4 = 1;
  }
  memset(&v10, 0, sizeof(v10));
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
    UnityEngine_MonoBehaviour__CancelInvoke_35611056(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11449/*"RefreshCurrentInfo"*/,
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
    v5 = childCount - 1;
    v6 = this->fields.currentMoveIconIdx - 1 < 0 ? v5 : this->fields.currentMoveIconIdx - 1;
    this->fields.currentMoveIconIdx = v6;
    if ( !leftArrowBtn
      || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr) == 0LL)
      || (iconCenterChild = this->fields.iconCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0LL)) == 0LL)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v6,
                                                      0LL),
          !iconCenterChild)
      || (UICenterOnChild__CenterOn_35928848(iconCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
    {
LABEL_27:
      sub_B52A5C(leftArrowBtn, method);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v10,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)leftArrowBtn,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v10,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v10.fields.current )
        sub_B52A5C(0LL, v8);
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v10.fields.current, 0, v9);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  }
}


void __fastcall MasterFormationComponent__onClickRightArrow(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  int32_t childCount; // w0
  int32_t currentMoveIconIdx; // w9
  int32_t v6; // w8
  int32_t v7; // w20
  UICenterOnChild_o *iconCenterChild; // x21
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B30F3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&StringLiteral_11449/*"RefreshCurrentInfo"*/);
    byte_42B30F3 = 1;
  }
  memset(&v11, 0, sizeof(v11));
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
    UnityEngine_MonoBehaviour__CancelInvoke_35611056(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11449/*"RefreshCurrentInfo"*/,
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
    v6 = childCount;
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
    v7 = currentMoveIconIdx + 1 < v6 ? currentMoveIconIdx + 1 : 0;
    this->fields.currentMoveIconIdx = v7;
    if ( !leftArrowBtn
      || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr) == 0LL)
      || (iconCenterChild = this->fields.iconCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0LL)) == 0LL)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v7,
                                                      0LL),
          !iconCenterChild)
      || (UICenterOnChild__CenterOn_35928848(iconCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
    {
LABEL_27:
      sub_B52A5C(leftArrowBtn, method);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)leftArrowBtn,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v11.fields.current )
        sub_B52A5C(0LL, v9);
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v11.fields.current, 0, v10);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
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

  if ( (byte_42B30DE & 1) == 0 )
  {
    sub_B52984(&MasterFormationComponent_NotificationDragState_TypeInfo);
    byte_42B30DE = 1;
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
    v8 = sub_B4739C(p_notificationDragState, v7, notificationDragState);
    v9 = notificationDragState == (System_Delegate_o *)v8;
    notificationDragState = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B52D50(v7);
  MasterFormationComponent__Update(v10, v11);
}


void __fastcall MasterFormationComponent__setChangeMasterInfo(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42B30F5 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5540/*"END_SET"*/);
    sub_B52984(&StringLiteral_11449/*"RefreshCurrentInfo"*/);
    byte_42B30F5 = 1;
  }
  MasterFormationComponent__setMstImg(this, this->fields.currentEquipId, v2);
  if ( this->fields.isDragStart || this->fields.isIconDragStart )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11449/*"RefreshCurrentInfo"*/,
      0.1,
      0LL);
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B52A5C(0LL, v4);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5540/*"END_SET"*/, 0LL);
}


void __fastcall MasterFormationComponent__setCmdSpellImg(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  BattleWindowComponent_o *cmdSpellWinComp; // x20
  struct CommandSpellWindowComponent_o *v6; // x8
  struct CommandSpellWindowComponent_o *v7; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Vector2_o v15; // 0:s0.4,4:s1.4

  if ( (byte_42B30E1 & 1) == 0 )
  {
    sub_B52984(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
    sub_B52984(&Method_MasterFormationComponent_CloseCmdSpell__);
    sub_B52984(&MasterFormationComponent_TypeInfo);
    byte_42B30E1 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.cmdSpellIconComp )
    goto LABEL_13;
  CommandSpellIconComponent__SetData(this->fields.cmdSpellIconComp, SelfUserGame, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.cmdSpellIconComp;
  if ( !SelfUserGame )
    goto LABEL_13;
  v15.fields.x = 130.0;
  v15.fields.y = 130.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)SelfUserGame, v15, 0LL);
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
        (v6 = this->fields.cmdSpellWinComp) == 0LL)
    || (v6->fields.mode = 0,
        v7 = this->fields.cmdSpellWinComp,
        v8 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_B52A54(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo),
        CommandSpellWindowComponent_CloseButtonCallBack___ctor(
          v8,
          (Il2CppObject *)this,
          Method_MasterFormationComponent_CloseCmdSpell__,
          0LL),
        !v7) )
  {
LABEL_13:
    sub_B52A5C(SelfUserGame, v4);
  }
  v7->fields.callback_close = v8;
  sub_B52920(
    (BattleServantConfConponent_o *)&v7->fields.callback_close,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void __fastcall MasterFormationComponent__setCmdSpellRecoverTime(
        MasterFormationComponent_o *this,
        int64_t recoverTime,
        const MethodInfo *method)
{
  UILabel_o *recoverTitleLb; // x21
  System_String_o *cmdSpellRecTimeInfo; // x0
  unsigned __int64 v7; // x22
  int v8; // w23
  int v9; // w24
  UILabel_o *recoverTimeLb; // x19
  System_String_o *v11; // x20
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  int v15; // [xsp+Ch] [xbp-44h] BYREF
  int v16; // [xsp+18h] [xbp-38h] BYREF
  int v17; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42B30E2 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3288/*"COMMAND_SPELL_RECOVER_TIME"*/);
    sub_B52984(&StringLiteral_3291/*"COMMNAD_SPELL_RECV_TXT"*/);
    byte_42B30E2 = 1;
  }
  if ( recoverTime > 0 )
  {
    recoverTitleLb = this->fields.recoverTitleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    cmdSpellRecTimeInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3291/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
    if ( recoverTitleLb )
    {
      v7 = recoverTime / 0xE10uLL;
      v8 = (int)(recoverTime / 0x3CuLL) % 60;
      v9 = recoverTime % 0x3CuLL;
      UILabel__set_text(recoverTitleLb, cmdSpellRecTimeInfo, 0LL);
      recoverTimeLb = this->fields.recoverTimeLb;
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3288/*"COMMAND_SPELL_RECOVER_TIME"*/, 0LL);
      v17 = v7;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
      v16 = v8;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
      v15 = v9;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
      cmdSpellRecTimeInfo = System_String__Format_44569380(v11, v12, v13, v14, 0LL);
      if ( recoverTimeLb )
      {
        UILabel__set_text(recoverTimeLb, cmdSpellRecTimeInfo, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B52A5C(cmdSpellRecTimeInfo, recoverTime);
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
    sub_B52A5C(0LL, method);
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
  struct System_Collections_Generic_List_MasterEquipInfoComponent__o *mstEqInfoList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B30F2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__);
    byte_42B30F2 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  mstEqInfoList = this->fields.mstEqInfoList;
  if ( !mstEqInfoList )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v6,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mstEqInfoList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v6,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__) )
  {
    if ( !v6.fields.current )
      sub_B52A5C(0LL, v4);
    MasterEquipInfoComponent__setDispEffectObj((MasterEquipInfoComponent_o *)v6.fields.current, 0, v5);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v6,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setDispRePosition(
        MasterFormationComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  UIWrapContent_o *loopCtr; // x0
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x9
  int v7; // w8
  int32_t v8; // w1
  UICenterOnChild_o *iconCenterChild; // x21

  if ( (byte_42B30EB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__);
    sub_B52984(&MasterFormationComponent_TypeInfo);
    byte_42B30EB = 1;
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
      v7 = idx - SHIDWORD(loopCtr[1].fields.callbackFunc->klass) / 2;
      if ( v7 < 0 )
      {
        if ( !currentList )
          goto LABEL_24;
        v7 += currentList->fields._size;
      }
      else if ( !currentList )
      {
        goto LABEL_24;
      }
      loopCtr = this->fields.iconLoopCtr;
      if ( !loopCtr )
        goto LABEL_24;
      v8 = currentList->fields._size + v7;
    }
    else
    {
      loopCtr = this->fields.iconLoopCtr;
      if ( !loopCtr )
        goto LABEL_24;
      v8 = idx;
    }
    UIWrapContent__setScrollPos(loopCtr, v8, 0LL);
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
            UICenterOnChild__CenterOn_35928848(iconCenterChild, (UnityEngine_Transform_o *)loopCtr, 1, 0LL);
            goto LABEL_23;
          }
        }
      }
    }
LABEL_24:
    sub_B52A5C(loopCtr, *(_QWORD *)&idx);
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
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x2
  int32_t lv; // w8
  __int64 v26; // x21
  __int64 v27; // x21
  UserServantEntity_o *Entity; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct UserEquipEntity_o *userEquipEntity; // x8
  __int64 v36; // x21
  __int64 v37; // x22
  int32_t v38; // w1
  const MethodInfo *v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_42B30E0 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_B52984(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_42B30E0 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)SelfUserGame,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)userData,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
    v38 = 0;
    goto LABEL_25;
  }
  v26 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
    sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v27 = **(_QWORD **)(v26 + 192);
  if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
    sub_AEB684(v27);
  gameObject = **(UnityEngine_GameObject_o ***)(v27 + 184);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)gameObject,
                   this->fields.usrEquipId,
                   (const MethodInfo_23E2500 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__),
        this->fields.userEquipEntity = (struct UserEquipEntity_o *)Entity,
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.userEquipEntity,
          (System_Int32_array **)Entity,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34),
        (userEquipEntity = this->fields.userEquipEntity) == 0LL) )
  {
LABEL_26:
    sub_B52A5C(gameObject, v17);
  }
  v37 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
  v36 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v46.fields.currentCryptoKey = v37;
  *(_QWORD *)&v46.fields.fakeValue = v36;
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v46, 0LL);
  this->fields.currentEquipId = v38;
LABEL_25:
  MasterFormationComponent__setMstImg(this, v38, v24);
  MasterFormationComponent__setUsrEquipData(this, v39);
  this->fields.isChangeMasterImg = 1;
  this->fields.notificationDragState = notificationDragState;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.notificationDragState,
    (System_Int32_array **)notificationDragState,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setMstEquipIconList(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct UICenterOnChild_o **p_iconCenterChild; // x21
  UnityEngine_Object_o *iconCenterChild; // x22
  UnityEngine_Component_o *iconLoopCtr; // x0
  __int64 v13; // x1
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct UIWrapContent_o *v21; // x8
  UILabel_o *touchGuideLabel; // x22
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  const MethodInfo *v24; // x2
  float x; // s10
  float y; // s8
  float z; // s9
  struct UIScrollView_o *iconScroll; // x22
  BattleServantConfConponent_o *p_onDragFinished; // x22
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v31; // x24
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x8
  struct UIScrollView_o *v40; // x22
  BattleServantConfConponent_o *p_onMomentumMove; // x22
  System_Delegate_o *onMomentumMove; // t1
  UIScrollView_OnDragNotification_o *v43; // x24
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct UICenterOnChild_o *v51; // x21
  BattleServantConfConponent_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v54; // x23
  System_Int32_array **v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UILabel_o *scrollGuideLabel; // x21
  bool isScrollEquipIcon; // w1
  int v64; // w8
  struct UIWrapContent_o *v65; // x8
  int v66; // w8
  int v67; // w9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x21
  int v69; // w9
  unsigned __int64 i; // x20
  UnityEngine_GameObject_o *equipIconPrefab; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v73; // x22
  UnityEngine_Transform_o *v74; // x23
  int v75; // s0
  UnityEngine_Transform_o *v78; // x23
  int v79; // s0
  System_String_o *v82; // x0
  MasterEquipIconComponent_o *v83; // x22
  struct System_Collections_Generic_List_UserEquipEntity__o *v84; // x23
  struct UserEquipEntity_array *items; // x8
  int32_t v86; // w23
  UserEquipEntity_o *v87; // x24
  MasterEquipIconComponent_CallbackFunc_o *v88; // x25
  int64_t v89; // x2
  int32_t v90; // w3
  const MethodInfo *v91; // x6
  const MethodInfo *v92; // x2
  int v93; // w8
  int v94; // w20
  struct UIWrapContent_o *v95; // x8
  int v96; // s0
  MasterFormationComponent_o *v97; // x0
  const MethodInfo *v98; // x1
  unsigned int v99; // [xsp+Ch] [xbp-84h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_mstEqIconList; // [xsp+10h] [xbp-80h]
  signed __int64 size; // [xsp+18h] [xbp-78h]
  int v102; // [xsp+28h] [xbp-68h]
  int32_t v103; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B30E7 & 1) == 0 )
  {
    sub_B52984(&MasterEquipIconComponent_CallbackFunc_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_MasterFormationComponent_OnClickIcon__);
    sub_B52984(&Method_MasterFormationComponent_OnIconCenterOnChildFinished__);
    sub_B52984(&Method_MasterFormationComponent_OnIconDragFinished__);
    sub_B52984(&Method_MasterFormationComponent_OnIconDragStarted__);
    sub_B52984(&MasterFormationComponent_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UIScrollView_OnDragNotification_TypeInfo);
    sub_B52984(&SpringPanel_OnFinished_TypeInfo);
    sub_B52984(&StringLiteral_8685/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/);
    sub_B52984(&StringLiteral_8684/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/);
    sub_B52984(&StringLiteral_4587/*"D3"*/);
    byte_42B30E7 = 1;
  }
  v103 = 0;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__);
  this->fields.mstEqIconList = (struct System_Collections_Generic_List_MasterEquipIconComponent__o *)v3;
  p_mstEqIconList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.mstEqIconList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mstEqIconList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
    v14 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                   (UnityEngine_GameObject_o *)iconLoopCtr,
                                   (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_iconCenterChild = (struct UICenterOnChild_o *)v14;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.iconCenterChild, v14, v15, v16, v17, v18, v19, v20);
  }
  v21 = this->fields.iconLoopCtr;
  if ( !v21 )
    goto LABEL_76;
  *(_DWORD *)&v21->fields.cullContent = 64;
  touchGuideLabel = this->fields.touchGuideLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  iconLoopCtr = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8685/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/, 0LL);
  if ( !touchGuideLabel
    || (UILabel__set_text(touchGuideLabel, (System_String_o *)iconLoopCtr, 0LL),
        (currentList = this->fields.currentList) == 0LL)
    || (iconLoopCtr = (UnityEngine_Component_o *)this->fields.iconScroll) == 0LL
    || (size = currentList->fields._size,
        (iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconLoopCtr, 0LL)) == 0LL) )
  {
LABEL_76:
    sub_B52A5C(iconLoopCtr, v13);
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
    v65 = this->fields.iconLoopCtr;
    this->fields.isScrollEquipIcon = 0;
    if ( !v65 )
      goto LABEL_76;
    v66 = *(_DWORD *)&v65->fields.cullContent;
    isScrollEquipIcon = 0;
    v67 = size - 1;
    if ( (int)size - 1 < 0 )
      v67 = size;
    x = (float)-((v67 >> 1) * v66);
    if ( (size & 1) == 0 )
      x = x - (float)(v66 / 2);
    v64 = 1;
  }
  else
  {
    iconScroll = this->fields.iconScroll;
    this->fields.isScrollEquipIcon = 1;
    if ( !iconScroll )
      goto LABEL_76;
    onDragFinished = (System_Delegate_o *)iconScroll->fields.onDragFinished;
    p_onDragFinished = (BattleServantConfConponent_o *)&iconScroll->fields.onDragFinished;
    v31 = (UIScrollView_OnDragNotification_o *)sub_B52A54(UIScrollView_OnDragNotification_TypeInfo);
    UIScrollView_OnDragNotification___ctor(
      v31,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragStarted__,
      0LL);
    v32 = (System_Int32_array **)System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v31, 0LL);
    v39 = v32;
    if ( v32 && *v32 != (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
      goto LABEL_77;
    p_onDragFinished->klass = (BattleServantConfConponent_c *)v32;
    sub_B52920(p_onDragFinished, v32, v33, v34, v35, v36, v37, v38);
    v40 = this->fields.iconScroll;
    if ( !v40 )
      goto LABEL_76;
    onMomentumMove = (System_Delegate_o *)v40->fields.onMomentumMove;
    p_onMomentumMove = (BattleServantConfConponent_o *)&v40->fields.onMomentumMove;
    v43 = (UIScrollView_OnDragNotification_o *)sub_B52A54(UIScrollView_OnDragNotification_TypeInfo);
    UIScrollView_OnDragNotification___ctor(
      v43,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragFinished__,
      0LL);
    v44 = (System_Int32_array **)System_Delegate__Combine(onMomentumMove, (System_Delegate_o *)v43, 0LL);
    v39 = v44;
    if ( v44 )
    {
      if ( *v44 != (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_77;
    }
    p_onMomentumMove->klass = (BattleServantConfConponent_c *)v44;
    sub_B52920(p_onMomentumMove, v44, v45, v46, v47, v48, v49, v50);
    v51 = *p_iconCenterChild;
    if ( !v51 )
      goto LABEL_76;
    onFinished = (System_Delegate_o *)v51->fields.onFinished;
    p_onFinished = (BattleServantConfConponent_o *)&v51->fields.onFinished;
    v54 = (SpringPanel_OnFinished_o *)sub_B52A54(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(
      v54,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconCenterOnChildFinished__,
      0LL);
    v55 = (System_Int32_array **)System_Delegate__Combine(onFinished, (System_Delegate_o *)v54, 0LL);
    v39 = v55;
    if ( v55 )
    {
      if ( *v55 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
      {
LABEL_77:
        sub_B52D50(v39);
        MasterFormationComponent__setPosCurrentEq(v97, v98);
        return;
      }
    }
    p_onFinished->klass = (BattleServantConfConponent_c *)v55;
    sub_B52920(p_onFinished, v55, v56, v57, v58, v59, v60, v61);
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
    iconLoopCtr = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8684/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/, 0LL);
    if ( !scrollGuideLabel )
      goto LABEL_76;
    UILabel__set_text(scrollGuideLabel, (System_String_o *)iconLoopCtr, 0LL);
    isScrollEquipIcon = this->fields.isScrollEquipIcon;
    v64 = 2;
  }
  v99 = v64;
  MasterFormationComponent__SetEnabledEquipIconScroll(this, isScrollEquipIcon, v24);
  iconLoopCtr = (UnityEngine_Component_o *)this->fields.iconCenterChild;
  if ( !iconLoopCtr )
    goto LABEL_76;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)iconLoopCtr, 0, 0LL);
  v68 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v68,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v103 = 0;
  v69 = 0;
  do
  {
    v102 = v69;
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
        v73 = (UnityEngine_GameObject_o *)iconLoopCtr;
        v74 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)iconLoopCtr, 0LL);
        *(UnityEngine_Vector3_o *)&v75 = UnityEngine_Vector3__get_one(0LL);
        if ( !v74 )
          goto LABEL_76;
        UnityEngine_Transform__set_localScale(v74, *(UnityEngine_Vector3_o *)&v75, 0LL);
        iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v73, 0LL);
        if ( !this->fields.iconLoopCtr )
          goto LABEL_76;
        v78 = (UnityEngine_Transform_o *)iconLoopCtr;
        iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this->fields.iconLoopCtr,
                                                   0LL);
        if ( !iconLoopCtr )
          goto LABEL_76;
        *(UnityEngine_Vector3_o *)&v79 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)iconLoopCtr,
                                           0LL);
        if ( !v78 )
          goto LABEL_76;
        UnityEngine_Transform__set_localPosition(v78, *(UnityEngine_Vector3_o *)&v79, 0LL);
        v82 = System_Int32__ToString_39387012((int32_t)&v103, (System_String_o *)StringLiteral_4587/*"D3"*/, 0LL);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v73, v82, 0LL);
        if ( !v68 )
          goto LABEL_76;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v68,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v73,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
        iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   v73,
                                                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
        if ( !*p_mstEqIconList )
          goto LABEL_76;
        v83 = (MasterEquipIconComponent_o *)iconLoopCtr;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_mstEqIconList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)iconLoopCtr,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__);
        v84 = this->fields.currentList;
        if ( !v84 )
          goto LABEL_76;
        if ( i >= (unsigned int)v84->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        items = v84->fields._items;
        v86 = v103;
        v87 = items->m_Items[i];
        v88 = (MasterEquipIconComponent_CallbackFunc_o *)sub_B52A54(MasterEquipIconComponent_CallbackFunc_TypeInfo);
        MasterEquipIconComponent_CallbackFunc___ctor(
          v88,
          (Il2CppObject *)this,
          Method_MasterFormationComponent_OnClickIcon__,
          0LL);
        if ( !v83 )
          goto LABEL_76;
        MasterEquipIconComponent__SetEquipInfo(v83, v87, v89, v90, v86, v88, v91);
        MasterEquipIconComponent__UpdateSelected(v83, this->fields.currentEquipId, v92);
        ++v103;
      }
    }
    v69 = v102 + 1;
  }
  while ( v102 + 1 < v99 );
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
  if ( !v68 )
    goto LABEL_76;
  v93 = v68->fields._size;
  if ( v93 >= 1 )
  {
    v94 = 0;
    while ( 1 )
    {
      if ( v93 <= (unsigned int)v94 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      iconLoopCtr = (UnityEngine_Component_o *)v68->fields._items->m_Items[v94];
      if ( !iconLoopCtr )
        break;
      iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)iconLoopCtr,
                                                 0LL);
      if ( !iconLoopCtr )
        break;
      v105.fields.x = x;
      v105.fields.y = y;
      v105.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconLoopCtr, v105, 0LL);
      v95 = this->fields.iconLoopCtr;
      if ( !v95 )
        break;
      v96 = *(_DWORD *)&v95->fields.cullContent;
      v93 = v68->fields._size;
      ++v94;
      x = x + (float)v96;
      if ( v94 >= v93 )
        return;
    }
    goto LABEL_76;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setMstEquipList(MasterFormationComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_mstEqInfoList; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct UICenterOnChild_o **p_centerChild; // x21
  UnityEngine_Object_o *centerChild; // x22
  UnityEngine_Component_o *loopCtr; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  System_Int32_array **v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UIWrapContent_o *v23; // x8
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  signed __int64 size; // x25
  bool isScrollEquipDetail; // w1
  int v27; // w8
  struct UIScrollView_o *mScroll; // x22
  BattleServantConfConponent_o *p_onDragFinished; // x22
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v31; // x24
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x8
  struct UICenterOnChild_o *v40; // x21
  BattleServantConfConponent_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v43; // x23
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  int v51; // w24
  unsigned __int64 v52; // x23
  UnityEngine_GameObject_o *mstEquipInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v55; // x21
  UnityEngine_Transform_o *v56; // x22
  int v57; // s0
  UnityEngine_Transform_o *v60; // x22
  int v61; // s0
  System_String_o *v64; // x0
  MasterEquipInfoComponent_o *v65; // x21
  int32_t v66; // w3
  const MethodInfo *v67; // x5
  struct System_Collections_Generic_List_UserEquipEntity__o *v68; // x22
  MasterFormationComponent_o *v69; // x0
  const MethodInfo *v70; // x1
  unsigned int v71; // [xsp+8h] [xbp-58h]
  int32_t moveIdx; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42B30E6 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo);
    sub_B52984(&Method_MasterFormationComponent_OnCenterOnChildFinished__);
    sub_B52984(&Method_MasterFormationComponent_OnDragStarted__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UIScrollView_OnDragNotification_TypeInfo);
    sub_B52984(&SpringPanel_OnFinished_TypeInfo);
    sub_B52984(&StringLiteral_4587/*"D3"*/);
    byte_42B30E6 = 1;
  }
  moveIdx = 0;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__);
  p_mstEqInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.mstEqInfoList;
  this->fields.mstEqInfoList = (struct System_Collections_Generic_List_MasterEquipInfoComponent__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.mstEqInfoList,
    (System_Int32_array **)v3,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    v16 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                   (UnityEngine_GameObject_o *)loopCtr,
                                   (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (struct UICenterOnChild_o *)v16;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.centerChild, v16, v17, v18, v19, v20, v21, v22);
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
    v71 = v27;
    MasterFormationComponent__SetEnabledEquipDetailScroll(this, isScrollEquipDetail, v15);
    moveIdx = 0;
    v51 = 0;
    while ( (int)size < 1 )
    {
LABEL_36:
      if ( ++v51 >= v71 )
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
        sub_B52A5C(loopCtr, v14);
      }
    }
    v52 = 0LL;
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
      v55 = (UnityEngine_GameObject_o *)loopCtr;
      v56 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)loopCtr, 0LL);
      *(UnityEngine_Vector3_o *)&v57 = UnityEngine_Vector3__get_one(0LL);
      if ( !v56 )
        goto LABEL_41;
      UnityEngine_Transform__set_localScale(v56, *(UnityEngine_Vector3_o *)&v57, 0LL);
      loopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v55, 0LL);
      if ( !this->fields.loopCtr )
        goto LABEL_41;
      v60 = (UnityEngine_Transform_o *)loopCtr;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)this->fields.loopCtr,
                                             0LL);
      if ( !loopCtr )
        goto LABEL_41;
      *(UnityEngine_Vector3_o *)&v61 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)loopCtr, 0LL);
      if ( !v60 )
        goto LABEL_41;
      UnityEngine_Transform__set_localPosition(v60, *(UnityEngine_Vector3_o *)&v61, 0LL);
      v64 = System_Int32__ToString_39387012((int32_t)&moveIdx, (System_String_o *)StringLiteral_4587/*"D3"*/, 0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v55, v64, 0LL);
      loopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v55,
                                             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
      if ( !*p_mstEqInfoList )
        goto LABEL_41;
      v65 = (MasterEquipInfoComponent_o *)loopCtr;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *p_mstEqInfoList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)loopCtr,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__);
      v68 = this->fields.currentList;
      if ( !v68 )
        goto LABEL_41;
      if ( v52 >= (unsigned int)v68->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( !v65 )
        goto LABEL_41;
      MasterEquipInfoComponent__setEquipInfo(
        v65,
        v68->fields._items->m_Items[v52++],
        this->fields.usrEquipId,
        v66,
        moveIdx++,
        v67);
      if ( (__int64)v52 >= size )
        goto LABEL_36;
    }
  }
  mScroll = this->fields.mScroll;
  this->fields.isScrollEquipDetail = 1;
  if ( !mScroll )
    goto LABEL_41;
  onDragFinished = (System_Delegate_o *)mScroll->fields.onDragFinished;
  p_onDragFinished = (BattleServantConfConponent_o *)&mScroll->fields.onDragFinished;
  v31 = (UIScrollView_OnDragNotification_o *)sub_B52A54(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(
    v31,
    (Il2CppObject *)this,
    Method_MasterFormationComponent_OnDragStarted__,
    0LL);
  v32 = (System_Int32_array **)System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v31, 0LL);
  v39 = v32;
  if ( !v32 || *v32 == (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
  {
    p_onDragFinished->klass = (BattleServantConfConponent_c *)v32;
    sub_B52920(p_onDragFinished, v32, v33, v34, v35, v36, v37, v38);
    v40 = *p_centerChild;
    if ( !v40 )
      goto LABEL_41;
    onFinished = (System_Delegate_o *)v40->fields.onFinished;
    p_onFinished = (BattleServantConfConponent_o *)&v40->fields.onFinished;
    v43 = (SpringPanel_OnFinished_o *)sub_B52A54(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(
      v43,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnCenterOnChildFinished__,
      0LL);
    v44 = (System_Int32_array **)System_Delegate__Combine(onFinished, (System_Delegate_o *)v43, 0LL);
    v39 = v44;
    if ( !v44 || *v44 == (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
    {
      p_onFinished->klass = (BattleServantConfConponent_c *)v44;
      sub_B52920(p_onFinished, v44, v45, v46, v47, v48, v49, v50);
      isScrollEquipDetail = this->fields.isScrollEquipDetail;
      v27 = 2;
      goto LABEL_21;
    }
  }
  sub_B52D50(v39);
  MasterFormationComponent__setMstEquipIconList(v69, v70);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setMstImg(
        MasterFormationComponent_o *this,
        int32_t equipId,
        const MethodInfo *method)
{
  MasterFormationComponent_o *v4; // x20
  struct UserGameEntity_o *usrGameEnt; // x8
  UnityEngine_Object_o *masterFigure; // x22
  System_Int32_array **Prefab_30655724; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UIMasterFigureTextureOld_o *v14; // x21
  int32_t genderType; // w20
  void *iconCenterChild; // x8
  System_Action_o *v17; // x22
  Il2CppObject *v18; // x23
  struct MasterFormationComponent___c_StaticFields *static_fields; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // [xsp+10h] [xbp-40h]

  v4 = this;
  if ( (byte_42B30E3 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_MasterFormationComponent___c__setMstImg_b__65_0__);
    this = (MasterFormationComponent_o *)sub_B52984(&MasterFormationComponent___c_TypeInfo);
    byte_42B30E3 = 1;
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
    Prefab_30655724 = (System_Int32_array **)MasterFigureManagerOld__CreatePrefab_30655724(
                                               v4->fields.mstImgBase,
                                               1,
                                               v4->fields.genderType,
                                               equipId,
                                               10,
                                               0LL,
                                               0,
                                               (System_Nullable_Vector3__o)0,
                                               v26);
    v4->fields.masterFigure = (struct UIMasterFigureTextureOld_o *)Prefab_30655724;
    sub_B52920((BattleServantConfConponent_o *)&v4->fields.masterFigure, Prefab_30655724, v8, v9, v10, v11, v12, v13);
    return;
  }
  v14 = v4->fields.masterFigure;
  genderType = v4->fields.genderType;
  this = (MasterFormationComponent_o *)MasterFormationComponent___c_TypeInfo;
  if ( (BYTE3(MasterFormationComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterFormationComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterFormationComponent___c_TypeInfo);
    this = (MasterFormationComponent_o *)MasterFormationComponent___c_TypeInfo;
  }
  iconCenterChild = this->fields.iconCenterChild;
  v17 = (System_Action_o *)*((_QWORD *)iconCenterChild + 1);
  if ( !v17 )
  {
    if ( (BYTE3(this->fields.mstEqIconList) & 4) != 0 && !LODWORD(this->fields.usrGameEnt) )
    {
      j_il2cpp_runtime_class_init_0(this);
      iconCenterChild = MasterFormationComponent___c_TypeInfo->static_fields;
    }
    v18 = *(Il2CppObject **)iconCenterChild;
    v17 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v17, v18, Method_MasterFormationComponent___c__setMstImg_b__65_0__, 0LL);
    static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
    static_fields->__9__65_0 = v17;
    sub_B52920(
      (BattleServantConfConponent_o *)&static_fields->__9__65_0,
      (System_Int32_array **)v17,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !v14 )
LABEL_19:
    sub_B52A5C(this, *(_QWORD *)&equipId);
  UIMasterFigureTextureOld__SetCharacter(v14, 1, genderType, equipId, v17, 0, 0LL);
}


void __fastcall MasterFormationComponent__setPosCurrentEq(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MasterFormationComponent_o *v3; // x19
  struct System_Collections_Generic_List_MasterEquipInfoComponent__o *mstEqInfoList; // x22
  int size; // w20
  unsigned int v6; // w21
  MasterEquipInfoComponent_o *v7; // x8
  struct UserEquipEntity_o *usrEquipEnt; // x9

  v3 = this;
  if ( (byte_42B30EA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Count__);
    this = (MasterFormationComponent_o *)sub_B52984(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Item__);
    byte_42B30EA = 1;
  }
  if ( v3->fields.usrEquipId >= 1 )
  {
    mstEqInfoList = v3->fields.mstEqInfoList;
    if ( mstEqInfoList )
    {
      size = mstEqInfoList->fields._size;
      if ( size >= 1 )
      {
        v6 = 0;
        while ( 1 )
        {
          if ( mstEqInfoList->fields._size <= v6 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v7 = mstEqInfoList->fields._items->m_Items[v6];
          if ( !v7 || (usrEquipEnt = v7->fields.usrEquipEnt) == 0LL )
LABEL_14:
            sub_B52A5C(this, method);
          if ( usrEquipEnt->fields.id == v3->fields.usrEquipId )
            break;
          if ( (int)++v6 >= size )
            return;
          mstEqInfoList = v3->fields.mstEqInfoList;
          if ( !mstEqInfoList )
            goto LABEL_14;
        }
        MasterFormationComponent__setDispRePosition(v3, v7->fields.moveEqIdx, v2);
      }
    }
  }
}


void __fastcall MasterFormationComponent__setUsrEquipData(MasterFormationComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v4; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  System_Collections_Generic_IEnumerable_T__o *List; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  struct System_Collections_Generic_List_UserEquipEntity__o **p_currentList; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v15; // x21
  signed __int64 size; // x8
  unsigned __int64 v17; // x22
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v18; // x20
  struct MasterFormationComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__67_0; // x21
  Il2CppObject *v21; // x22
  struct MasterFormationComponent___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1

  if ( (byte_42B30E5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_UserEquipEntity___ctor__);
    sub_B52984(&System_Comparison_UserEquipEntity__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_UserEquipEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEquipEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEquipEntity___ctor___68525712);
    sub_B52984(&Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_UserEquipEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__);
    sub_B52984(&MasterFormationComponent___c_TypeInfo);
    byte_42B30E5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_27;
  if ( !Instance )
    goto LABEL_27;
  List = (System_Collections_Generic_IEnumerable_T__o *)UserEquipMaster__getList(
                                                          (UserEquipMaster_o *)Instance,
                                                          usrGameEnt->fields.userId,
                                                          0LL);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserEquipEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
  p_currentList = &this->fields.currentList;
  this->fields.currentList = (struct System_Collections_Generic_List_UserEquipEntity__o *)v7;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.currentList,
    (System_Int32_array **)v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( !List )
    goto LABEL_27;
  if ( List[1].monitor )
  {
    v15 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_UserEquipEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v15,
      List,
      (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_UserEquipEntity___ctor___68525712);
    if ( this->fields.usrEquipId >= 1 )
    {
      if ( !v15 )
        goto LABEL_27;
      LODWORD(size) = v15->fields._size;
      if ( (int)size >= 1 )
      {
        v17 = 0LL;
        while ( 1 )
        {
          if ( v17 >= (unsigned int)size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          Instance = *p_currentList;
          if ( !*p_currentList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v15->fields._items->m_Items[v17],
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserEquipEntity__Add__);
          size = v15->fields._size;
          if ( (__int64)++v17 >= size )
            goto LABEL_16;
        }
LABEL_27:
        sub_B52A5C(Instance, v4);
      }
LABEL_16:
      v18 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)*p_currentList;
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
        v21 = (Il2CppObject *)static_fields->__9;
        _9__67_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_UserEquipEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__67_0,
          v21,
          Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__,
          (const MethodInfo_2483370 *)Method_System_Comparison_UserEquipEntity___ctor__);
        v22 = MasterFormationComponent___c_TypeInfo->static_fields;
        v22->__9__67_0 = (struct System_Comparison_UserEquipEntity__o *)_9__67_0;
        sub_B52920(
          (BattleServantConfConponent_o *)&v22->__9__67_0,
          (System_Int32_array **)_9__67_0,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
      }
      if ( !v18 )
        goto LABEL_27;
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v18,
        (System_Comparison_T__o *)_9__67_0,
        (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_UserEquipEntity__Sort__);
    }
  }
  MasterFormationComponent__setMstEquipList(this, v4);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
}


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
  if ( (byte_42ADCA8 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42ADCA8 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall MasterFormationComponent_NotificationDragState__EndInvoke(
        MasterFormationComponent_NotificationDragState_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, flg, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
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
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
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
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
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
            v16 = sub_AEB880(v21, class_0, v10, v12);
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
  Il2CppObject *v1; // x19
  struct MasterFormationComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42ADCA6 & 1) == 0 )
  {
    sub_B52984(&MasterFormationComponent___c_TypeInfo);
    byte_42ADCA6 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(MasterFormationComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MasterFormationComponent___c_o *)v1;
  sub_B52920(static_fields);
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

  if ( (byte_42ADCA7 & 1) == 0 )
  {
    this = (MasterFormationComponent___c_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42ADCA7 = 1;
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
  this = (MasterFormationComponent___c_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v9, 0LL);
  if ( !b )
LABEL_9:
    sub_B52A5C(this, a);
  return (_DWORD)this - CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(b->fields.equipId, 0LL);
}