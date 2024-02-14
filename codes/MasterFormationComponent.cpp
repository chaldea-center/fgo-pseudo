void __fastcall MasterFormationComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  MasterFormationComponent_c *v2; // x8

  if ( (byte_4212A75 & 1) == 0 )
  {
    sub_B0D8A4(&MasterFormationComponent_TypeInfo, v1);
    byte_4212A75 = 1;
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

  if ( (byte_4212A74 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212A74 = 1;
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
    sub_B0D97C(cmdSpellWinComp);
  }
}


void __fastcall MasterFormationComponent__OnCenterOnChildFinished(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  struct UICenterOnChild_o *centerChild; // x8
  const MethodInfo *v6; // x1
  MasterEquipInfoComponent_o *v7; // x20
  const MethodInfo *v8; // x2
  struct UserEquipEntity_o *usrEquipEnt; // x8

  if ( (byte_4212A69 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, method);
    sub_B0D8A4(&StringLiteral_2965/*"CHANGE_INFO"*/, v3);
    byte_4212A69 = 1;
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
                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___)) == 0LL
    || (v7 = (MasterEquipInfoComponent_o *)leftArrowBtn,
        leftArrowBtn = (UnityEngine_Behaviour_o *)MasterEquipInfoComponent__getEquipId(
                                                    (MasterEquipInfoComponent_o *)leftArrowBtn,
                                                    v6),
        this->fields.currentEquipId = (int)leftArrowBtn,
        (usrEquipEnt = v7->fields.usrEquipEnt) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(leftArrowBtn);
  }
  this->fields.currentUsrEquipId = usrEquipEnt->fields.id;
  this->fields.isChange = v7->fields.isChange;
  this->fields.currentMoveIdx = v7->fields.moveEqIdx;
  MasterEquipInfoComponent__setDispEffectObj(v7, 1, v8);
  if ( this->fields.isChangeMasterImg )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.fsm;
    if ( leftArrowBtn )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)leftArrowBtn, (System_String_o *)StringLiteral_2965/*"CHANGE_INFO"*/, 0LL);
      return;
    }
    goto LABEL_15;
  }
}


void __fastcall MasterFormationComponent__OnClickCmdSpell(MasterFormationComponent_o *this, const MethodInfo *method)
{
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_4212A73 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212A73 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    sub_B0D97C(0LL);
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
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  UICenterOnChild_o *centerChild; // x22
  struct UserEquipEntity_o *userEquipEntity; // x8
  __int64 v16; // x21
  __int64 v17; // x22
  const MethodInfo *v18; // x1
  struct UICenterOnChild_o *v19; // x8
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4212A62 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, *(_QWORD *)&idx);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B0D8A4(&SoundManager_TypeInfo, v10);
    byte_4212A62 = 1;
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
        MasterFormationComponent__setDisEquipEffect(this, v12);
        MasterFormationComponent__setMstImg(this, equipId, v13);
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
              UICenterOnChild__CenterOn_35227608(centerChild, (UnityEngine_Transform_o *)iconCenterChild, 1, 0LL);
              userEquipEntity = this->fields.userEquipEntity;
              if ( userEquipEntity )
              {
                v17 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
                v16 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v23.fields.currentCryptoKey = v17;
                *(_QWORD *)&v23.fields.fakeValue = v16;
                iconCenterChild = (UnityEngine_Behaviour_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
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
                                                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
                    if ( iconCenterChild )
                    {
                      MasterEquipInfoComponent__setDispEffectObj((MasterEquipInfoComponent_o *)iconCenterChild, 1, v20);
LABEL_24:
                      MasterFormationComponent__UpdateIconSelected(this, v18);
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
    sub_B0D97C(iconCenterChild);
  }
}


void __fastcall MasterFormationComponent__OnDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  UnityEngine_Behaviour_o *iconCenterChild; // x0

  if ( (byte_4212A66 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11389/*"RefreshCurrentInfo"*/, method);
    byte_4212A66 = 1;
  }
  *(_WORD *)&this->fields.isChangeMasterImg = 1;
  this->fields.isDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_34929376(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11389/*"RefreshCurrentInfo"*/,
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
    sub_B0D97C(iconCenterChild);
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
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4212A6A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v7);
    sub_B0D8A4(&StringLiteral_11389/*"RefreshCurrentInfo"*/, v8);
    byte_4212A6A = 1;
  }
  memset(&v15, 0, sizeof(v15));
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
                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
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
  UnityEngine_MonoBehaviour__CancelInvoke_34929376(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11389/*"RefreshCurrentInfo"*/,
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
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)leftArrowBtn,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v15.fields.current )
      sub_B0D97C(0LL);
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v15.fields.current, 1, v14);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  leftArrowBtn = this->fields.iconCenterChild;
  if ( !leftArrowBtn )
LABEL_20:
    sub_B0D97C(leftArrowBtn);
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
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4212A68 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v5);
    byte_4212A68 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
  if ( !iconCenterChild
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 1, 0LL),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
  {
    sub_B0D97C(iconCenterChild);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)iconCenterChild,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B0D97C(0LL);
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v8.fields.current, 0, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
}


void __fastcall MasterFormationComponent__OnIconDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UnityEngine_Behaviour_o *leftArrowBtn; // x0

  if ( (byte_4212A67 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11389/*"RefreshCurrentInfo"*/, method);
    byte_4212A67 = 1;
  }
  *(_WORD *)&this->fields.isChangeMasterImg = 257;
  this->fields.isIconDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_34929376(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11389/*"RefreshCurrentInfo"*/,
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
    sub_B0D97C(leftArrowBtn);
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
  MasterFormationComponent_NotificationDragState_o *notificationDragState; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2
  UICenterOnChild_o *centerChild; // x20
  UICenterOnChild_o *iconCenterChild; // x20
  const MethodInfo *v8; // x1

  if ( (byte_4212A6B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11389/*"RefreshCurrentInfo"*/, method);
    byte_4212A6B = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_34929376(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11389/*"RefreshCurrentInfo"*/,
    0LL);
  notificationDragState = this->fields.notificationDragState;
  if ( !notificationDragState )
    goto LABEL_22;
  MasterFormationComponent_NotificationDragState__Invoke(notificationDragState, 0, 0LL);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v4);
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
      UICenterOnChild__CenterOn_35227608(centerChild, (UnityEngine_Transform_o *)notificationDragState, 1, 0LL);
    }
  }
  if ( !this->fields.isIconDragStart )
  {
LABEL_20:
    MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v5);
    goto LABEL_21;
  }
  notificationDragState = (MasterFormationComponent_NotificationDragState_o *)this->fields.iconLoopCtr;
  if ( !notificationDragState
    || (notificationDragState = (MasterFormationComponent_NotificationDragState_o *)UnityEngine_Component__get_transform(
                                                                                      (UnityEngine_Component_o *)notificationDragState,
                                                                                      0LL)) == 0LL )
  {
LABEL_22:
    sub_B0D97C(notificationDragState);
  }
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)notificationDragState, 0LL) < 1 )
    goto LABEL_20;
  this->fields.isIconDragStart = 0;
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 0, v5);
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
  UICenterOnChild__CenterOn_35227608(iconCenterChild, (UnityEngine_Transform_o *)notificationDragState, 1, 0LL);
LABEL_21:
  MasterFormationComponent__UpdateIconSelected(this, v8);
}


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
      sub_B0D97C(mScroll);
    }
    UnityEngine_Behaviour__set_enabled(mScroll, enabled, 0LL);
  }
}


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
      sub_B0D97C(iconScroll);
    }
    UnityEngine_Behaviour__set_enabled(iconScroll, v5, 0LL);
  }
}


void __fastcall MasterFormationComponent__Update(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
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
    sub_B0D97C(mScroll);
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

  if ( (byte_4212A59 & 1) == 0 )
  {
    sub_B0D8A4(&MasterFormationComponent_TypeInfo, method);
    byte_4212A59 = 1;
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
    sub_B0D97C(iconScroll);
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

  if ( (byte_4212A63 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Item__, v4);
    byte_4212A63 = 1;
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v8 = mstEqIconList->fields._items->m_Items[v7];
        if ( !v8 )
          break;
        MasterEquipIconComponent__UpdateSelected(v8, this->fields.currentEquipId, v2);
        if ( (int)++v7 >= size )
          return;
        mstEqIconList = this->fields.mstEqIconList;
      }
      while ( mstEqIconList );
      sub_B0D97C(v8);
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
    sub_B0D97C(cmdSpellIconComp);
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

  if ( (byte_4212A57 & 1) == 0 )
  {
    sub_B0D8A4(&MasterFormationComponent_NotificationDragState_TypeInfo, value);
    byte_4212A57 = 1;
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
    v8 = sub_B022BC(p_notificationDragState, v7, notificationDragState);
    v9 = notificationDragState == (System_Delegate_o *)v8;
    notificationDragState = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterFormationComponent_o *)sub_B0DC70(v7);
  MasterFormationComponent__remove_notificationDragState(v10, v11, v12);
}


void __fastcall MasterFormationComponent__changeCmdSpellImg(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserGameEntity_o *SelfUserGame; // x22
  const MethodInfo *v5; // x3
  __int64 SpellImageId; // x0
  CommandSpellIconComponent_o *cmdSpellIconComp; // x21
  int32_t v8; // w20
  int32_t CommandSpell; // w22
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x23

  if ( (byte_4212A5E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__, v3);
    byte_4212A5E = 1;
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
        v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)this,
          Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__,
          0LL),
        !cmdSpellIconComp) )
  {
    sub_B0D97C(SpellImageId);
  }
  CommandSpellIconComponent__SetChangeCurrentCmdSepll(cmdSpellIconComp, v8, CommandSpell, v12, 0LL);
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

  if ( (byte_4212A71 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&UserEquipNewManager_TypeInfo, v3);
    byte_4212A71 = 1;
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
      UnityEngine_Object__DestroyImmediate_34935488(gameObject, 0LL);
      if ( --v6 < 0 )
        goto LABEL_13;
    }
LABEL_31:
    sub_B0D97C(loopCtr);
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
      UnityEngine_Object__DestroyImmediate_34935488(v10, 0LL);
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
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4212A72 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212A72 = 1;
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
      sub_B0D97C(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_masterFigure, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    *p_masterFigure = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)p_masterFigure, 0LL, v7, v8, v9, v10, v11, v12);
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
  void *writeMasterDataThreadException; // x19
  struct System_Threading_SynchronizationContext_o *context; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v4 = equipId;
  if ( (byte_4212A70 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EquipMaster___, *(_QWORD *)&genderType);
    sub_B0D8A4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4212A70 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      v4,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  *(_QWORD *)&v13.fields.currentCryptoKey = context;
  *(_QWORD *)&v13.fields.fakeValue = writeMasterDataThreadException;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v13, 0LL);
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
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4212A6E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_11389/*"RefreshCurrentInfo"*/, v7);
    byte_4212A6E = 1;
  }
  memset(&v14, 0, sizeof(v14));
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
    UnityEngine_MonoBehaviour__CancelInvoke_34929376(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11389/*"RefreshCurrentInfo"*/,
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
      || (UICenterOnChild__CenterOn_35227608(iconCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
    {
LABEL_27:
      sub_B0D97C(leftArrowBtn);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)leftArrowBtn,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v14.fields.current )
        sub_B0D97C(0LL);
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v14.fields.current, 0, v13);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
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
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4212A6D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_11389/*"RefreshCurrentInfo"*/, v7);
    byte_4212A6D = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_34929376(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11389/*"RefreshCurrentInfo"*/,
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
      || (UICenterOnChild__CenterOn_35227608(iconCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
    {
LABEL_27:
      sub_B0D97C(leftArrowBtn);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)leftArrowBtn,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v15.fields.current )
        sub_B0D97C(0LL);
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v15.fields.current, 0, v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
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

  if ( (byte_4212A58 & 1) == 0 )
  {
    sub_B0D8A4(&MasterFormationComponent_NotificationDragState_TypeInfo, value);
    byte_4212A58 = 1;
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
    v8 = sub_B022BC(p_notificationDragState, v7, notificationDragState);
    v9 = notificationDragState == (System_Delegate_o *)v8;
    notificationDragState = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterFormationComponent_o *)sub_B0DC70(v7);
  MasterFormationComponent__Update(v10, v11);
}


void __fastcall MasterFormationComponent__setChangeMasterInfo(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4212A6F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5514/*"END_SET"*/, method);
    sub_B0D8A4(&StringLiteral_11389/*"RefreshCurrentInfo"*/, v4);
    byte_4212A6F = 1;
  }
  MasterFormationComponent__setMstImg(this, this->fields.currentEquipId, v2);
  if ( this->fields.isDragStart || this->fields.isIconDragStart )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11389/*"RefreshCurrentInfo"*/,
      0.1,
      0LL);
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5514/*"END_SET"*/, 0LL);
}


void __fastcall MasterFormationComponent__setCmdSpellImg(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserGameEntity_o *SelfUserGame; // x0
  BattleWindowComponent_o *cmdSpellWinComp; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  struct CommandSpellWindowComponent_o *v9; // x8
  struct CommandSpellWindowComponent_o *v10; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Vector2_o v18; // 0:s0.4,4:s1.4

  if ( (byte_4212A5B & 1) == 0 )
  {
    sub_B0D8A4(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo, method);
    sub_B0D8A4(&Method_MasterFormationComponent_CloseCmdSpell__, v3);
    sub_B0D8A4(&MasterFormationComponent_TypeInfo, v4);
    byte_4212A5B = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.cmdSpellIconComp )
    goto LABEL_13;
  CommandSpellIconComponent__SetData(this->fields.cmdSpellIconComp, SelfUserGame, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.cmdSpellIconComp;
  if ( !SelfUserGame )
    goto LABEL_13;
  v18.fields.x = 130.0;
  v18.fields.y = 130.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)SelfUserGame, v18, 0LL);
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
        (v9 = this->fields.cmdSpellWinComp) == 0LL)
    || (v9->fields.mode = 0,
        v10 = this->fields.cmdSpellWinComp,
        v11 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_B0D974(
                                                                     CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo,
                                                                     v7,
                                                                     v8),
        CommandSpellWindowComponent_CloseButtonCallBack___ctor(
          v11,
          (Il2CppObject *)this,
          Method_MasterFormationComponent_CloseCmdSpell__,
          0LL),
        !v10) )
  {
LABEL_13:
    sub_B0D97C(SelfUserGame);
  }
  v10->fields.callback_close = v11;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v10->fields.callback_close,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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

  if ( (byte_4212A5C & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, recoverTime);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_3268/*"COMMAND_SPELL_RECOVER_TIME"*/, v6);
    sub_B0D8A4(&StringLiteral_3271/*"COMMNAD_SPELL_RECV_TXT"*/, v7);
    byte_4212A5C = 1;
  }
  if ( recoverTime > 0 )
  {
    recoverTitleLb = this->fields.recoverTitleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    cmdSpellRecTimeInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3271/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
    if ( recoverTitleLb )
    {
      v10 = recoverTime / 0xE10uLL;
      v11 = (int)(recoverTime / 0x3CuLL) % 60;
      v12 = recoverTime % 0x3CuLL;
      UILabel__set_text(recoverTitleLb, cmdSpellRecTimeInfo, 0LL);
      recoverTimeLb = this->fields.recoverTimeLb;
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3268/*"COMMAND_SPELL_RECOVER_TIME"*/, 0LL);
      v20 = v10;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
      v19 = v11;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
      v18 = v12;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
      cmdSpellRecTimeInfo = System_String__Format_43850968(v14, v15, v16, v17, 0LL);
      if ( recoverTimeLb )
      {
        UILabel__set_text(recoverTimeLb, cmdSpellRecTimeInfo, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B0D97C(cmdSpellRecTimeInfo);
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
    sub_B0D97C(0LL);
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

  if ( (byte_4212A6C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__, v5);
    byte_4212A6C = 1;
  }
  memset(&v8, 0, sizeof(v8));
  mstEqInfoList = this->fields.mstEqInfoList;
  if ( !mstEqInfoList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mstEqInfoList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B0D97C(0LL);
    MasterEquipInfoComponent__setDispEffectObj((MasterEquipInfoComponent_o *)v8.fields.current, 0, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__);
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

  if ( (byte_4212A65 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, *(_QWORD *)&idx);
    sub_B0D8A4(&MasterFormationComponent_TypeInfo, v5);
    byte_4212A65 = 1;
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
            UICenterOnChild__CenterOn_35227608(iconCenterChild, (UnityEngine_Transform_o *)loopCtr, 1, 0LL);
            goto LABEL_23;
          }
        }
      }
    }
LABEL_24:
    sub_B0D97C(loopCtr);
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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x2
  int32_t lv; // w8
  __int64 v28; // x21
  __int64 v29; // x21
  UserServantEntity_o *Entity; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct UserEquipEntity_o *userEquipEntity; // x8
  __int64 v38; // x21
  __int64 v39; // x22
  int32_t v40; // w1
  const MethodInfo *v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4212A5A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEquipMaster___, userData);
    sub_B0D8A4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    byte_4212A5A = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_B0D840(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)userData,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
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
    v40 = 0;
    goto LABEL_25;
  }
  v28 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v29 = **(_QWORD **)(v28 + 192);
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_AA65A4(v29);
  gameObject = **(UnityEngine_GameObject_o ***)(v29 + 184);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)gameObject,
                   this->fields.usrEquipId,
                   (const MethodInfo_2669DFC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__),
        this->fields.userEquipEntity = (struct UserEquipEntity_o *)Entity,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.userEquipEntity,
          (System_Int32_array **)Entity,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36),
        (userEquipEntity = this->fields.userEquipEntity) == 0LL) )
  {
LABEL_26:
    sub_B0D97C(gameObject);
  }
  v39 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v48.fields.currentCryptoKey = v39;
  *(_QWORD *)&v48.fields.fakeValue = v38;
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v48, 0LL);
  this->fields.currentEquipId = v40;
LABEL_25:
  MasterFormationComponent__setMstImg(this, v40, v26);
  MasterFormationComponent__setUsrEquipData(this, v41);
  this->fields.isChangeMasterImg = 1;
  this->fields.notificationDragState = notificationDragState;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.notificationDragState,
    (System_Int32_array **)notificationDragState,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setMstEquipIconList(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v27; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct UICenterOnChild_o **p_iconCenterChild; // x21
  UnityEngine_Object_o *iconCenterChild; // x22
  UnityEngine_Component_o *iconLoopCtr; // x0
  System_Int32_array **v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct UIWrapContent_o *v45; // x8
  UILabel_o *touchGuideLabel; // x22
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  __int64 v48; // x1
  const MethodInfo *v49; // x2
  float x; // s10
  float y; // s8
  float z; // s9
  struct UIScrollView_o *iconScroll; // x22
  BattleServantConfConponent_o *p_onDragFinished; // x22
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v56; // x24
  System_Int32_array **v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x8
  __int64 v65; // x1
  __int64 v66; // x2
  struct UIScrollView_o *v67; // x22
  BattleServantConfConponent_o *p_onMomentumMove; // x22
  System_Delegate_o *onMomentumMove; // t1
  UIScrollView_OnDragNotification_o *v70; // x24
  System_Int32_array **v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  __int64 v78; // x1
  __int64 v79; // x2
  struct UICenterOnChild_o *v80; // x21
  BattleServantConfConponent_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v83; // x23
  System_Int32_array **v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  UILabel_o *scrollGuideLabel; // x21
  bool isScrollEquipIcon; // w1
  int v93; // w8
  struct UIWrapContent_o *v94; // x8
  int v95; // w8
  int v96; // w9
  __int64 v97; // x1
  __int64 v98; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v99; // x21
  int v100; // w9
  unsigned __int64 i; // x20
  UnityEngine_GameObject_o *equipIconPrefab; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v104; // x22
  UnityEngine_Transform_o *v105; // x23
  int v106; // s0
  UnityEngine_Transform_o *v109; // x23
  int v110; // s0
  System_String_o *v113; // x0
  MasterEquipIconComponent_o *v114; // x22
  __int64 v115; // x1
  __int64 v116; // x2
  struct System_Collections_Generic_List_UserEquipEntity__o *v117; // x23
  struct UserEquipEntity_array *items; // x8
  int32_t v119; // w23
  UserEquipEntity_o *v120; // x24
  MasterEquipIconComponent_CallbackFunc_o *v121; // x25
  int64_t v122; // x2
  int32_t v123; // w3
  const MethodInfo *v124; // x6
  const MethodInfo *v125; // x2
  int v126; // w8
  int v127; // w20
  struct UIWrapContent_o *v128; // x8
  int v129; // s0
  MasterFormationComponent_o *v130; // x0
  const MethodInfo *v131; // x1
  unsigned int v132; // [xsp+Ch] [xbp-84h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_mstEqIconList; // [xsp+10h] [xbp-80h]
  signed __int64 size; // [xsp+18h] [xbp-78h]
  int v135; // [xsp+28h] [xbp-68h]
  int32_t v136; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v138; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4212A61 & 1) == 0 )
  {
    sub_B0D8A4(&MasterEquipIconComponent_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v14);
    sub_B0D8A4(&System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo, v15);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    sub_B0D8A4(&Method_MasterFormationComponent_OnClickIcon__, v17);
    sub_B0D8A4(&Method_MasterFormationComponent_OnIconCenterOnChildFinished__, v18);
    sub_B0D8A4(&Method_MasterFormationComponent_OnIconDragFinished__, v19);
    sub_B0D8A4(&Method_MasterFormationComponent_OnIconDragStarted__, v20);
    sub_B0D8A4(&MasterFormationComponent_TypeInfo, v21);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v22);
    sub_B0D8A4(&UIScrollView_OnDragNotification_TypeInfo, v23);
    sub_B0D8A4(&SpringPanel_OnFinished_TypeInfo, v24);
    sub_B0D8A4(&StringLiteral_8657/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/, v25);
    sub_B0D8A4(&StringLiteral_8656/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/, v26);
    sub_B0D8A4(&StringLiteral_4563/*"D3"*/, v27);
    byte_4212A61 = 1;
  }
  v136 = 0;
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__);
  this->fields.mstEqIconList = (struct System_Collections_Generic_List_MasterEquipIconComponent__o *)v28;
  p_mstEqIconList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.mstEqIconList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mstEqIconList,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
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
    v38 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                   (UnityEngine_GameObject_o *)iconLoopCtr,
                                   (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_iconCenterChild = (struct UICenterOnChild_o *)v38;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.iconCenterChild, v38, v39, v40, v41, v42, v43, v44);
  }
  v45 = this->fields.iconLoopCtr;
  if ( !v45 )
    goto LABEL_76;
  *(_DWORD *)&v45->fields.cullContent = 64;
  touchGuideLabel = this->fields.touchGuideLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  iconLoopCtr = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8657/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/, 0LL);
  if ( !touchGuideLabel
    || (UILabel__set_text(touchGuideLabel, (System_String_o *)iconLoopCtr, 0LL),
        (currentList = this->fields.currentList) == 0LL)
    || (iconLoopCtr = (UnityEngine_Component_o *)this->fields.iconScroll) == 0LL
    || (size = currentList->fields._size,
        (iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconLoopCtr, 0LL)) == 0LL) )
  {
LABEL_76:
    sub_B0D97C(iconLoopCtr);
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
    v94 = this->fields.iconLoopCtr;
    this->fields.isScrollEquipIcon = 0;
    if ( !v94 )
      goto LABEL_76;
    v95 = *(_DWORD *)&v94->fields.cullContent;
    isScrollEquipIcon = 0;
    v96 = size - 1;
    if ( (int)size - 1 < 0 )
      v96 = size;
    x = (float)-((v96 >> 1) * v95);
    if ( (size & 1) == 0 )
      x = x - (float)(v95 / 2);
    v93 = 1;
  }
  else
  {
    iconScroll = this->fields.iconScroll;
    this->fields.isScrollEquipIcon = 1;
    if ( !iconScroll )
      goto LABEL_76;
    onDragFinished = (System_Delegate_o *)iconScroll->fields.onDragFinished;
    p_onDragFinished = (BattleServantConfConponent_o *)&iconScroll->fields.onDragFinished;
    v56 = (UIScrollView_OnDragNotification_o *)sub_B0D974(UIScrollView_OnDragNotification_TypeInfo, v48, v49);
    UIScrollView_OnDragNotification___ctor(
      v56,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragStarted__,
      0LL);
    v57 = (System_Int32_array **)System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v56, 0LL);
    v64 = v57;
    if ( v57 && *v57 != (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
      goto LABEL_77;
    p_onDragFinished->klass = (BattleServantConfConponent_c *)v57;
    sub_B0D840(p_onDragFinished, v57, v58, v59, v60, v61, v62, v63);
    v67 = this->fields.iconScroll;
    if ( !v67 )
      goto LABEL_76;
    onMomentumMove = (System_Delegate_o *)v67->fields.onMomentumMove;
    p_onMomentumMove = (BattleServantConfConponent_o *)&v67->fields.onMomentumMove;
    v70 = (UIScrollView_OnDragNotification_o *)sub_B0D974(UIScrollView_OnDragNotification_TypeInfo, v65, v66);
    UIScrollView_OnDragNotification___ctor(
      v70,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragFinished__,
      0LL);
    v71 = (System_Int32_array **)System_Delegate__Combine(onMomentumMove, (System_Delegate_o *)v70, 0LL);
    v64 = v71;
    if ( v71 )
    {
      if ( *v71 != (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_77;
    }
    p_onMomentumMove->klass = (BattleServantConfConponent_c *)v71;
    sub_B0D840(p_onMomentumMove, v71, v72, v73, v74, v75, v76, v77);
    v80 = *p_iconCenterChild;
    if ( !v80 )
      goto LABEL_76;
    onFinished = (System_Delegate_o *)v80->fields.onFinished;
    p_onFinished = (BattleServantConfConponent_o *)&v80->fields.onFinished;
    v83 = (SpringPanel_OnFinished_o *)sub_B0D974(SpringPanel_OnFinished_TypeInfo, v78, v79);
    SpringPanel_OnFinished___ctor(
      v83,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconCenterOnChildFinished__,
      0LL);
    v84 = (System_Int32_array **)System_Delegate__Combine(onFinished, (System_Delegate_o *)v83, 0LL);
    v64 = v84;
    if ( v84 )
    {
      if ( *v84 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
      {
LABEL_77:
        v130 = (MasterFormationComponent_o *)sub_B0DC70(v64);
        MasterFormationComponent__setPosCurrentEq(v130, v131);
        return;
      }
    }
    p_onFinished->klass = (BattleServantConfConponent_c *)v84;
    sub_B0D840(p_onFinished, v84, v85, v86, v87, v88, v89, v90);
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
    iconLoopCtr = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8656/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/, 0LL);
    if ( !scrollGuideLabel )
      goto LABEL_76;
    UILabel__set_text(scrollGuideLabel, (System_String_o *)iconLoopCtr, 0LL);
    isScrollEquipIcon = this->fields.isScrollEquipIcon;
    v93 = 2;
  }
  v132 = v93;
  MasterFormationComponent__SetEnabledEquipIconScroll(this, isScrollEquipIcon, v49);
  iconLoopCtr = (UnityEngine_Component_o *)this->fields.iconCenterChild;
  if ( !iconLoopCtr )
    goto LABEL_76;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)iconLoopCtr, 0, 0LL);
  v99 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v97,
                                                                                                  v98);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v99,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v136 = 0;
  v100 = 0;
  do
  {
    v135 = v100;
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
        v104 = (UnityEngine_GameObject_o *)iconLoopCtr;
        v105 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)iconLoopCtr, 0LL);
        *(UnityEngine_Vector3_o *)&v106 = UnityEngine_Vector3__get_one(0LL);
        if ( !v105 )
          goto LABEL_76;
        UnityEngine_Transform__set_localScale(v105, *(UnityEngine_Vector3_o *)&v106, 0LL);
        iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v104, 0LL);
        if ( !this->fields.iconLoopCtr )
          goto LABEL_76;
        v109 = (UnityEngine_Transform_o *)iconLoopCtr;
        iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this->fields.iconLoopCtr,
                                                   0LL);
        if ( !iconLoopCtr )
          goto LABEL_76;
        *(UnityEngine_Vector3_o *)&v110 = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)iconLoopCtr,
                                            0LL);
        if ( !v109 )
          goto LABEL_76;
        UnityEngine_Transform__set_localPosition(v109, *(UnityEngine_Vector3_o *)&v110, 0LL);
        v113 = System_Int32__ToString_38473032((int32_t)&v136, (System_String_o *)StringLiteral_4563/*"D3"*/, 0LL);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v104, v113, 0LL);
        if ( !v99 )
          goto LABEL_76;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v99,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v104,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
        iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   v104,
                                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
        if ( !*p_mstEqIconList )
          goto LABEL_76;
        v114 = (MasterEquipIconComponent_o *)iconLoopCtr;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_mstEqIconList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)iconLoopCtr,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__);
        v117 = this->fields.currentList;
        if ( !v117 )
          goto LABEL_76;
        if ( i >= (unsigned int)v117->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        items = v117->fields._items;
        v119 = v136;
        v120 = items->m_Items[i];
        v121 = (MasterEquipIconComponent_CallbackFunc_o *)sub_B0D974(
                                                            MasterEquipIconComponent_CallbackFunc_TypeInfo,
                                                            v115,
                                                            v116);
        MasterEquipIconComponent_CallbackFunc___ctor(
          v121,
          (Il2CppObject *)this,
          Method_MasterFormationComponent_OnClickIcon__,
          0LL);
        if ( !v114 )
          goto LABEL_76;
        MasterEquipIconComponent__SetEquipInfo(v114, v120, v122, v123, v119, v121, v124);
        MasterEquipIconComponent__UpdateSelected(v114, this->fields.currentEquipId, v125);
        ++v136;
      }
    }
    v100 = v135 + 1;
  }
  while ( v135 + 1 < v132 );
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
  if ( !v99 )
    goto LABEL_76;
  v126 = v99->fields._size;
  if ( v126 >= 1 )
  {
    v127 = 0;
    while ( 1 )
    {
      if ( v126 <= (unsigned int)v127 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      iconLoopCtr = (UnityEngine_Component_o *)v99->fields._items->m_Items[v127];
      if ( !iconLoopCtr )
        break;
      iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)iconLoopCtr,
                                                 0LL);
      if ( !iconLoopCtr )
        break;
      v138.fields.x = x;
      v138.fields.y = y;
      v138.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconLoopCtr, v138, 0LL);
      v128 = this->fields.iconLoopCtr;
      if ( !v128 )
        break;
      v129 = *(_DWORD *)&v128->fields.cullContent;
      v126 = v99->fields._size;
      ++v127;
      x = x + (float)v129;
      if ( v127 >= v126 )
        return;
    }
    goto LABEL_76;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setMstEquipList(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_mstEqInfoList; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct UICenterOnChild_o **p_centerChild; // x21
  UnityEngine_Object_o *centerChild; // x22
  UnityEngine_Component_o *loopCtr; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct UIWrapContent_o *v36; // x8
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  signed __int64 size; // x25
  bool isScrollEquipDetail; // w1
  int v40; // w8
  struct UIScrollView_o *mScroll; // x22
  BattleServantConfConponent_o *p_onDragFinished; // x22
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v44; // x24
  System_Int32_array **v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x8
  __int64 v53; // x1
  __int64 v54; // x2
  struct UICenterOnChild_o *v55; // x21
  BattleServantConfConponent_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v58; // x23
  System_Int32_array **v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  int v66; // w24
  unsigned __int64 v67; // x23
  UnityEngine_GameObject_o *mstEquipInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v70; // x21
  UnityEngine_Transform_o *v71; // x22
  int v72; // s0
  UnityEngine_Transform_o *v75; // x22
  int v76; // s0
  System_String_o *v79; // x0
  MasterEquipInfoComponent_o *v80; // x21
  int32_t v81; // w3
  const MethodInfo *v82; // x5
  struct System_Collections_Generic_List_UserEquipEntity__o *v83; // x22
  MasterFormationComponent_o *v84; // x0
  const MethodInfo *v85; // x1
  unsigned int v86; // [xsp+8h] [xbp-58h]
  int32_t moveIdx; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4212A60 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo, v9);
    sub_B0D8A4(&Method_MasterFormationComponent_OnCenterOnChildFinished__, v10);
    sub_B0D8A4(&Method_MasterFormationComponent_OnDragStarted__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&UIScrollView_OnDragNotification_TypeInfo, v13);
    sub_B0D8A4(&SpringPanel_OnFinished_TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_4563/*"D3"*/, v15);
    byte_4212A60 = 1;
  }
  moveIdx = 0;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__);
  p_mstEqInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.mstEqInfoList;
  this->fields.mstEqInfoList = (struct System_Collections_Generic_List_MasterEquipInfoComponent__o *)v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mstEqInfoList,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
    v29 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                   (UnityEngine_GameObject_o *)loopCtr,
                                   (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (struct UICenterOnChild_o *)v29;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.centerChild, v29, v30, v31, v32, v33, v34, v35);
  }
  v36 = this->fields.loopCtr;
  if ( !v36 )
    goto LABEL_41;
  *(_DWORD *)&v36->fields.cullContent = 534;
  currentList = this->fields.currentList;
  if ( !currentList )
    goto LABEL_41;
  size = currentList->fields._size;
  if ( (int)size < 2 )
  {
    isScrollEquipDetail = 0;
    v40 = 1;
    this->fields.isScrollEquipDetail = 0;
LABEL_21:
    v86 = v40;
    MasterFormationComponent__SetEnabledEquipDetailScroll(this, isScrollEquipDetail, v28);
    moveIdx = 0;
    v66 = 0;
    while ( (int)size < 1 )
    {
LABEL_36:
      if ( ++v66 >= v86 )
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
        sub_B0D97C(loopCtr);
      }
    }
    v67 = 0LL;
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
      v70 = (UnityEngine_GameObject_o *)loopCtr;
      v71 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)loopCtr, 0LL);
      *(UnityEngine_Vector3_o *)&v72 = UnityEngine_Vector3__get_one(0LL);
      if ( !v71 )
        goto LABEL_41;
      UnityEngine_Transform__set_localScale(v71, *(UnityEngine_Vector3_o *)&v72, 0LL);
      loopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v70, 0LL);
      if ( !this->fields.loopCtr )
        goto LABEL_41;
      v75 = (UnityEngine_Transform_o *)loopCtr;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)this->fields.loopCtr,
                                             0LL);
      if ( !loopCtr )
        goto LABEL_41;
      *(UnityEngine_Vector3_o *)&v76 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)loopCtr, 0LL);
      if ( !v75 )
        goto LABEL_41;
      UnityEngine_Transform__set_localPosition(v75, *(UnityEngine_Vector3_o *)&v76, 0LL);
      v79 = System_Int32__ToString_38473032((int32_t)&moveIdx, (System_String_o *)StringLiteral_4563/*"D3"*/, 0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v70, v79, 0LL);
      loopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v70,
                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
      if ( !*p_mstEqInfoList )
        goto LABEL_41;
      v80 = (MasterEquipInfoComponent_o *)loopCtr;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *p_mstEqInfoList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)loopCtr,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__);
      v83 = this->fields.currentList;
      if ( !v83 )
        goto LABEL_41;
      if ( v67 >= (unsigned int)v83->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( !v80 )
        goto LABEL_41;
      MasterEquipInfoComponent__setEquipInfo(
        v80,
        v83->fields._items->m_Items[v67++],
        this->fields.usrEquipId,
        v81,
        moveIdx++,
        v82);
      if ( (__int64)v67 >= size )
        goto LABEL_36;
    }
  }
  mScroll = this->fields.mScroll;
  this->fields.isScrollEquipDetail = 1;
  if ( !mScroll )
    goto LABEL_41;
  onDragFinished = (System_Delegate_o *)mScroll->fields.onDragFinished;
  p_onDragFinished = (BattleServantConfConponent_o *)&mScroll->fields.onDragFinished;
  v44 = (UIScrollView_OnDragNotification_o *)sub_B0D974(UIScrollView_OnDragNotification_TypeInfo, v27, v28);
  UIScrollView_OnDragNotification___ctor(
    v44,
    (Il2CppObject *)this,
    Method_MasterFormationComponent_OnDragStarted__,
    0LL);
  v45 = (System_Int32_array **)System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v44, 0LL);
  v52 = v45;
  if ( !v45 || *v45 == (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
  {
    p_onDragFinished->klass = (BattleServantConfConponent_c *)v45;
    sub_B0D840(p_onDragFinished, v45, v46, v47, v48, v49, v50, v51);
    v55 = *p_centerChild;
    if ( !v55 )
      goto LABEL_41;
    onFinished = (System_Delegate_o *)v55->fields.onFinished;
    p_onFinished = (BattleServantConfConponent_o *)&v55->fields.onFinished;
    v58 = (SpringPanel_OnFinished_o *)sub_B0D974(SpringPanel_OnFinished_TypeInfo, v53, v54);
    SpringPanel_OnFinished___ctor(
      v58,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnCenterOnChildFinished__,
      0LL);
    v59 = (System_Int32_array **)System_Delegate__Combine(onFinished, (System_Delegate_o *)v58, 0LL);
    v52 = v59;
    if ( !v59 || *v59 == (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
    {
      p_onFinished->klass = (BattleServantConfConponent_c *)v59;
      sub_B0D840(p_onFinished, v59, v60, v61, v62, v63, v64, v65);
      isScrollEquipDetail = this->fields.isScrollEquipDetail;
      v40 = 2;
      goto LABEL_21;
    }
  }
  v84 = (MasterFormationComponent_o *)sub_B0DC70(v52);
  MasterFormationComponent__setMstEquipIconList(v84, v85);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Int32_array **Prefab_20993748; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UIMasterFigureTextureOld_o *v19; // x21
  int32_t genderType; // w20
  void *iconCenterChild; // x8
  System_Action_o *v22; // x22
  Il2CppObject *v23; // x23
  struct MasterFormationComponent___c_StaticFields *static_fields; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // [xsp+10h] [xbp-40h]

  v4 = this;
  if ( (byte_4212A5D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&equipId);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&Method_MasterFormationComponent___c__setMstImg_b__65_0__, v6);
    this = (MasterFormationComponent_o *)sub_B0D8A4(&MasterFormationComponent___c_TypeInfo, v7);
    byte_4212A5D = 1;
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
    Prefab_20993748 = (System_Int32_array **)MasterFigureManagerOld__CreatePrefab_20993748(
                                               v4->fields.mstImgBase,
                                               1,
                                               v4->fields.genderType,
                                               equipId,
                                               10,
                                               0LL,
                                               0,
                                               (System_Nullable_Vector3__o)0,
                                               v31);
    v4->fields.masterFigure = (struct UIMasterFigureTextureOld_o *)Prefab_20993748;
    sub_B0D840((BattleServantConfConponent_o *)&v4->fields.masterFigure, Prefab_20993748, v13, v14, v15, v16, v17, v18);
    return;
  }
  v19 = v4->fields.masterFigure;
  genderType = v4->fields.genderType;
  this = (MasterFormationComponent_o *)MasterFormationComponent___c_TypeInfo;
  if ( (BYTE3(MasterFormationComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterFormationComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterFormationComponent___c_TypeInfo);
    this = (MasterFormationComponent_o *)MasterFormationComponent___c_TypeInfo;
  }
  iconCenterChild = this->fields.iconCenterChild;
  v22 = (System_Action_o *)*((_QWORD *)iconCenterChild + 1);
  if ( !v22 )
  {
    if ( (BYTE3(this->fields.mstEqIconList) & 4) != 0 && !LODWORD(this->fields.usrGameEnt) )
    {
      j_il2cpp_runtime_class_init_0(this);
      iconCenterChild = MasterFormationComponent___c_TypeInfo->static_fields;
    }
    v23 = *(Il2CppObject **)iconCenterChild;
    v22 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
    System_Action___ctor(v22, v23, Method_MasterFormationComponent___c__setMstImg_b__65_0__, 0LL);
    static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
    static_fields->__9__65_0 = v22;
    sub_B0D840(
      (BattleServantConfConponent_o *)&static_fields->__9__65_0,
      (System_Int32_array **)v22,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !v19 )
LABEL_19:
    sub_B0D97C(this);
  UIMasterFigureTextureOld__SetCharacter(v19, 1, genderType, equipId, v22, 0, 0LL);
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
  if ( (byte_4212A64 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Count__, method);
    this = (MasterFormationComponent_o *)sub_B0D8A4(
                                           &Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Item__,
                                           v4);
    byte_4212A64 = 1;
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
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v8 = mstEqInfoList->fields._items->m_Items[v7];
          if ( !v8 || (usrEquipEnt = v8->fields.usrEquipEnt) == 0LL )
LABEL_14:
            sub_B0D97C(this);
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
  struct UserGameEntity_o *usrGameEnt; // x8
  System_Collections_Generic_IEnumerable_T__o *List; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x21
  struct System_Collections_Generic_List_UserEquipEntity__o **p_currentList; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v30; // x21
  __int64 v31; // x2
  signed __int64 size; // x8
  unsigned __int64 v33; // x22
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v34; // x20
  struct MasterFormationComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__67_0; // x21
  Il2CppObject *v37; // x22
  struct MasterFormationComponent___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1

  if ( (byte_4212A5F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_UserEquipEntity___ctor__, method);
    sub_B0D8A4(&System_Comparison_UserEquipEntity__TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEquipMaster___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEquipEntity__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEquipEntity__Sort__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEquipEntity___ctor___67897808, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEquipEntity___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_UserEquipEntity__TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__, v13);
    sub_B0D8A4(&MasterFormationComponent___c_TypeInfo, v14);
    byte_4212A5F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_27;
  if ( !Instance )
    goto LABEL_27;
  List = (System_Collections_Generic_IEnumerable_T__o *)UserEquipMaster__getList(
                                                          (UserEquipMaster_o *)Instance,
                                                          usrGameEnt->fields.userId,
                                                          0LL);
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserEquipEntity__TypeInfo,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
  p_currentList = &this->fields.currentList;
  this->fields.currentList = (struct System_Collections_Generic_List_UserEquipEntity__o *)v20;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.currentList,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !List )
    goto LABEL_27;
  if ( List[1].monitor )
  {
    v30 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                            System_Collections_Generic_List_UserEquipEntity__TypeInfo,
                                                                            v28,
                                                                            v29);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v30,
      List,
      (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_UserEquipEntity___ctor___67897808);
    if ( this->fields.usrEquipId >= 1 )
    {
      if ( !v30 )
        goto LABEL_27;
      LODWORD(size) = v30->fields._size;
      if ( (int)size >= 1 )
      {
        v33 = 0LL;
        while ( 1 )
        {
          if ( v33 >= (unsigned int)size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          Instance = *p_currentList;
          if ( !*p_currentList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v30->fields._items->m_Items[v33],
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserEquipEntity__Add__);
          size = v30->fields._size;
          if ( (__int64)++v33 >= size )
            goto LABEL_16;
        }
LABEL_27:
        sub_B0D97C(Instance);
      }
LABEL_16:
      v34 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)*p_currentList;
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
        v37 = (Il2CppObject *)static_fields->__9;
        _9__67_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                               System_Comparison_UserEquipEntity__TypeInfo,
                                                                               v28,
                                                                               v31);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__67_0,
          v37,
          Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__,
          (const MethodInfo_2412E90 *)Method_System_Comparison_UserEquipEntity___ctor__);
        v38 = MasterFormationComponent___c_TypeInfo->static_fields;
        v38->__9__67_0 = (struct System_Comparison_UserEquipEntity__o *)_9__67_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v38->__9__67_0,
          (System_Int32_array **)_9__67_0,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
      }
      if ( !v34 )
        goto LABEL_27;
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v34,
        (System_Comparison_T__o *)_9__67_0,
        (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_UserEquipEntity__Sort__);
    }
  }
  MasterFormationComponent__setMstEquipList(this, v28);
  MasterFormationComponent__setMstEquipIconList(this, v45);
  MasterFormationComponent__setPosCurrentEq(this, v46);
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
  sub_B0D840(p_method, object);
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
  if ( (byte_4212706 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, flg);
    byte_4212706 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall MasterFormationComponent_NotificationDragState__EndInvoke(
        MasterFormationComponent_NotificationDragState_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  MasterFormationComponent_NotificationDragState_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  MasterFormationComponent_NotificationDragState_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
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
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, flg, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(flg, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, flg, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, flg, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            flg,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, flg, v21);
    goto LABEL_37;
  }
}


void __fastcall MasterFormationComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct MasterFormationComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4212704 & 1) == 0 )
  {
    sub_B0D8A4(&MasterFormationComponent___c_TypeInfo, v1);
    byte_4212704 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(MasterFormationComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MasterFormationComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_4212705 & 1) == 0 )
  {
    this = (MasterFormationComponent___c_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, a);
    byte_4212705 = 1;
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
  this = (MasterFormationComponent___c_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v9, 0LL);
  if ( !b )
LABEL_9:
    sub_B0D97C(this);
  return (_DWORD)this - CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(b->fields.equipId, 0LL);
}