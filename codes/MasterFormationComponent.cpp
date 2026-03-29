void MasterFormationComponent___cctor(const MethodInfo *method)
{
  struct MasterFormationComponent_StaticFields *static_fields; // x8

  if ( (byte_4D2B6B4 & 1) == 0 )
  {
    sub_1C93AD4(&MasterFormationComponent_TypeInfo);
    byte_4D2B6B4 = 1;
  }
  static_fields = MasterFormationComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SPELL_WINDOW_ALPHA_TIME = 0x83E19999ALL;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_SPD = 0x404000003F000000LL;
}


void MasterFormationComponent___ctor(MasterFormationComponent_o *this, const MethodInfo *method)
{
  this->fields.isFirst = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void MasterFormationComponent__CloseCmdSpell(MasterFormationComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *cmdSpellWinComp; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4D2B6B3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_MasterFormationComponent_CloseCmdSpell__);
    byte_4D2B6B3 = 1;
  }
  cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    goto LABEL_10;
  if ( BattleWindowComponent__isOpen(cmdSpellWinComp, 0) )
  {
    v4 = Method_MasterFormationComponent_CloseCmdSpell__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_CloseCmdSpell__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C93AEC(Method_MasterFormationComponent_CloseCmdSpell__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
    if ( cmdSpellWinComp )
    {
      ((void (__fastcall *)(BattleWindowComponent_o *, _QWORD, const MethodInfo *))cmdSpellWinComp->klass->vtable._12_Close.methodPtr)(
        cmdSpellWinComp,
        0,
        cmdSpellWinComp->klass->vtable._12_Close.method);
      return;
    }
LABEL_10:
    sub_1C93D2C(cmdSpellWinComp, method);
  }
}


void MasterFormationComponent__OnCenterOnChildFinished(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  struct UICenterOnChild_o *centerChild; // x8
  MasterEquipInfoComponent_o *v5; // x20
  const MethodInfo *v6; // x2
  struct UserEquipEntity_o *usrEquipEnt; // x8

  if ( (byte_4D2B6A8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
    sub_1C93AD4(&StringLiteral_3343/*"CHANGE_INFO"*/);
    byte_4D2B6A8 = 1;
  }
  if ( this->fields.isIconOnly )
  {
    this->fields.isIconOnly = 0;
    return;
  }
  leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
  if ( !leftArrowBtn )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled(leftArrowBtn, 1, 0);
  leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
  if ( !leftArrowBtn )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled(leftArrowBtn, 1, 0);
  centerChild = this->fields.centerChild;
  if ( !centerChild
    || (leftArrowBtn = (UnityEngine_Behaviour_o *)centerChild->fields.mCenteredObject) == 0
    || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    (UnityEngine_GameObject_o *)leftArrowBtn,
                                                    (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___)) == 0
    || (v5 = (MasterEquipInfoComponent_o *)leftArrowBtn,
        leftArrowBtn = (UnityEngine_Behaviour_o *)MasterEquipInfoComponent__getEquipId(
                                                    (MasterEquipInfoComponent_o *)leftArrowBtn,
                                                    method),
        this->fields.currentEquipId = (int)leftArrowBtn,
        (usrEquipEnt = v5->fields.usrEquipEnt) == 0) )
  {
LABEL_15:
    sub_1C93D2C(leftArrowBtn, method);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)leftArrowBtn, (System_String_o *)StringLiteral_3343/*"CHANGE_INFO"*/, 0);
      return;
    }
    goto LABEL_15;
  }
}


void MasterFormationComponent__OnClickCmdSpell(MasterFormationComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_4D2B6B2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_MasterFormationComponent_OnClickCmdSpell__);
    byte_4D2B6B2 = 1;
  }
  v3 = Method_MasterFormationComponent_OnClickCmdSpell__;
  if ( (*((_BYTE *)Method_MasterFormationComponent_OnClickCmdSpell__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C93AEC(Method_MasterFormationComponent_OnClickCmdSpell__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    sub_1C93D2C(0, v5);
  ((void (__fastcall *)(struct CommandSpellWindowComponent_o *, _QWORD, const MethodInfo *))cmdSpellWinComp->klass->vtable._10_Open.methodPtr)(
    cmdSpellWinComp,
    0,
    cmdSpellWinComp->klass->vtable._10_Open.method);
}


void MasterFormationComponent__OnClickIcon(
        MasterFormationComponent_o *this,
        int32_t idx,
        int32_t equipId,
        int64_t userEquipId,
        const MethodInfo *method)
{
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
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

  if ( (byte_4D2B6A1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
    sub_1C93AD4(&Method_MasterFormationComponent_OnClickIcon__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2B6A1 = 1;
  }
  if ( this->fields.currentEquipId != equipId && !this->fields.isDragStart && !this->fields.isIconDragStart )
  {
    v9 = Method_MasterFormationComponent_OnClickIcon__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_OnClickIcon__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C93AEC(Method_MasterFormationComponent_OnClickIcon__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
    iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
    if ( iconCenterChild )
    {
      UnityEngine_Behaviour__set_enabled(iconCenterChild, 0, 0);
      iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.loopCtr;
      this->fields.isChangeMasterImg = 0;
      this->fields.currentEquipId = equipId;
      this->fields.currentUsrEquipId = userEquipId;
      this->fields.isChange = 1;
      if ( iconCenterChild )
      {
        UIWrapContent__setScrollPos((UIWrapContent_o *)iconCenterChild, idx, 0);
        MasterFormationComponent__setDisEquipEffect(this, v13);
        MasterFormationComponent__setMstImg(this, equipId, v14);
        iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.loopCtr;
        if ( iconCenterChild )
        {
          centerChild = this->fields.centerChild;
          iconCenterChild = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)iconCenterChild,
                                                         0);
          if ( iconCenterChild )
          {
            iconCenterChild = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                           (UnityEngine_Transform_o *)iconCenterChild,
                                                           idx,
                                                           0);
            if ( centerChild )
            {
              UICenterOnChild__CenterOn_49871820(centerChild, (UnityEngine_Transform_o *)iconCenterChild, 1, 0);
              userEquipEntity = this->fields.userEquipEntity;
              if ( userEquipEntity )
              {
                v18 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
                v17 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v23.fields.currentCryptoKey = v18;
                *(_QWORD *)&v23.fields.fakeValue = v17;
                iconCenterChild = (UnityEngine_Behaviour_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                               v23,
                                                               0);
                if ( (_DWORD)iconCenterChild != equipId )
                  goto LABEL_22;
                v19 = this->fields.centerChild;
                if ( v19 )
                {
                  iconCenterChild = (UnityEngine_Behaviour_o *)v19->fields.mCenteredObject;
                  if ( iconCenterChild )
                  {
                    iconCenterChild = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   (UnityEngine_GameObject_o *)iconCenterChild,
                                                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
                    if ( iconCenterChild )
                    {
                      MasterEquipInfoComponent__setDispEffectObj((MasterEquipInfoComponent_o *)iconCenterChild, 1, v20);
LABEL_22:
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
    sub_1C93D2C(iconCenterChild, v11);
  }
}


void MasterFormationComponent__OnDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  struct MasterFormationComponent_NotificationDragState_o *notificationDragState; // x8

  if ( (byte_4D2B6A5 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_11355/*"RefreshCurrentInfo"*/);
    byte_4D2B6A5 = 1;
  }
  *(_WORD *)&this->fields.isChangeMasterImg = 1;
  this->fields.isDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_72104408(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11355/*"RefreshCurrentInfo"*/,
    0);
  MasterFormationComponent__setDisEquipEffect(this, v3);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 0, v4);
  iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
  if ( !iconCenterChild
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 0, 0),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn) == 0)
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 0, 0),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn) == 0)
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 0, 0),
        (notificationDragState = this->fields.notificationDragState) == 0) )
  {
    sub_1C93D2C(iconCenterChild, v5);
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))notificationDragState->fields.invoke_impl)(
    notificationDragState->fields.method_code,
    1,
    notificationDragState->fields.method);
}


void MasterFormationComponent__OnIconCenterOnChildFinished(MasterFormationComponent_o *this, const MethodInfo *method)
{
  void *leftArrowBtn; // x0
  struct UICenterOnChild_o *iconCenterChild; // x8
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  struct MasterFormationComponent_NotificationDragState_o *notificationDragState; // x8
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2B6A9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__);
    sub_1C93AD4(&StringLiteral_11355/*"RefreshCurrentInfo"*/);
    byte_4D2B6A9 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  leftArrowBtn = this->fields.leftArrowBtn;
  if ( !leftArrowBtn )
    goto LABEL_20;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)leftArrowBtn, 1, 0);
  leftArrowBtn = this->fields.rightArrowBtn;
  if ( !leftArrowBtn )
    goto LABEL_20;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)leftArrowBtn, 1, 0);
  iconCenterChild = this->fields.iconCenterChild;
  if ( !iconCenterChild )
    goto LABEL_20;
  leftArrowBtn = iconCenterChild->fields.mCenteredObject;
  if ( !leftArrowBtn )
    goto LABEL_20;
  leftArrowBtn = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)leftArrowBtn,
                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
  currentList = this->fields.currentList;
  if ( !currentList )
    goto LABEL_20;
  if ( currentList->fields._size >= 2 )
  {
    if ( !leftArrowBtn )
      goto LABEL_20;
    this->fields.currentMoveIconIdx = *((_DWORD *)leftArrowBtn + 14);
  }
  *(_WORD *)&this->fields.isDragStart = 0;
  UnityEngine_MonoBehaviour__CancelInvoke_72104408(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11355/*"RefreshCurrentInfo"*/,
    0);
  notificationDragState = this->fields.notificationDragState;
  if ( !notificationDragState )
    goto LABEL_20;
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))notificationDragState->fields.invoke_impl)(
    notificationDragState->fields.method_code,
    0,
    notificationDragState->fields.method);
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v7);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v8);
  leftArrowBtn = this->fields.mstEqIconList;
  if ( !leftArrowBtn )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)leftArrowBtn,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v11.fields._current )
      sub_1C93D2C(0, v9);
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v11.fields._current, 1, v10);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  leftArrowBtn = this->fields.iconCenterChild;
  if ( !leftArrowBtn )
LABEL_20:
    sub_1C93D2C(leftArrowBtn, method);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)leftArrowBtn, 0, 0);
}


void MasterFormationComponent__OnIconDragFinished(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2B6A7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    byte_4D2B6A7 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
  if ( !iconCenterChild
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 1, 0),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0) )
  {
    sub_1C93D2C(iconCenterChild, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_object__o *)iconCenterChild,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_1C93D2C(0, v4);
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v6.fields._current, 0, v5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
}


void MasterFormationComponent__OnIconDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  struct MasterFormationComponent_NotificationDragState_o *notificationDragState; // x8

  if ( (byte_4D2B6A6 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_11355/*"RefreshCurrentInfo"*/);
    byte_4D2B6A6 = 1;
  }
  *(_WORD *)&this->fields.isChangeMasterImg = 257;
  this->fields.isIconDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_72104408(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11355/*"RefreshCurrentInfo"*/,
    0);
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 0, v3);
  leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
  if ( !leftArrowBtn
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0),
        (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn) == 0)
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0),
        (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild) == 0)
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0),
        (notificationDragState = this->fields.notificationDragState) == 0) )
  {
    sub_1C93D2C(leftArrowBtn, v4);
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))notificationDragState->fields.invoke_impl)(
    notificationDragState->fields.method_code,
    1,
    notificationDragState->fields.method);
}


void MasterFormationComponent__RefreshCurrentInfo(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *loopCtr; // x0
  __int64 v4; // x1
  struct MasterFormationComponent_NotificationDragState_o *notificationDragState; // x8
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  UICenterOnChild_o *centerChild; // x20
  UICenterOnChild_o *iconCenterChild; // x20
  const MethodInfo *v10; // x1

  if ( (byte_4D2B6AA & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_11355/*"RefreshCurrentInfo"*/);
    byte_4D2B6AA = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_72104408(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11355/*"RefreshCurrentInfo"*/,
    0);
  notificationDragState = this->fields.notificationDragState;
  if ( !notificationDragState )
    goto LABEL_22;
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))notificationDragState->fields.invoke_impl)(
    notificationDragState->fields.method_code,
    0,
    notificationDragState->fields.method);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v6);
  if ( this->fields.isDragStart )
  {
    loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
    if ( !loopCtr )
      goto LABEL_22;
    loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0);
    if ( !loopCtr )
      goto LABEL_22;
    if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)loopCtr, 0) >= 1 )
    {
      loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
      this->fields.isDragStart = 0;
      if ( !loopCtr )
        goto LABEL_22;
      centerChild = this->fields.centerChild;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0);
      if ( !loopCtr )
        goto LABEL_22;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                             (UnityEngine_Transform_o *)loopCtr,
                                             this->fields.currentMoveIdx,
                                             0);
      if ( !centerChild )
        goto LABEL_22;
      UICenterOnChild__CenterOn_49871820(centerChild, (UnityEngine_Transform_o *)loopCtr, 1, 0);
    }
  }
  if ( !this->fields.isIconDragStart )
  {
LABEL_20:
    MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v7);
    goto LABEL_21;
  }
  loopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
  if ( !loopCtr || (loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0)) == 0 )
LABEL_22:
    sub_1C93D2C(loopCtr, v4);
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)loopCtr, 0) < 1 )
    goto LABEL_20;
  this->fields.isIconDragStart = 0;
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 0, v7);
  loopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
  if ( !loopCtr )
    goto LABEL_22;
  iconCenterChild = this->fields.iconCenterChild;
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0);
  if ( !loopCtr )
    goto LABEL_22;
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                         (UnityEngine_Transform_o *)loopCtr,
                                         this->fields.currentMoveIconIdx,
                                         0);
  if ( !iconCenterChild )
    goto LABEL_22;
  UICenterOnChild__CenterOn_49871820(iconCenterChild, (UnityEngine_Transform_o *)loopCtr, 1, 0);
LABEL_21:
  MasterFormationComponent__UpdateIconSelected(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void MasterFormationComponent__SetEnabledEquipDetailScroll(
        MasterFormationComponent_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *mScroll; // x0
  bool v5; // w21

  if ( (enabled & ~this->fields.isScrollEquipDetail & 1) == 0 )
  {
    mScroll = (UnityEngine_Behaviour_o *)this->fields.mScroll;
    if ( !mScroll
      || (v5 = enabled,
          UnityEngine_Behaviour__set_enabled(mScroll, enabled, 0),
          (mScroll = (UnityEngine_Behaviour_o *)this->fields.loopCtr) == 0)
      || (UnityEngine_Behaviour__set_enabled(mScroll, v5, 0),
          (mScroll = (UnityEngine_Behaviour_o *)this->fields.centerChild) == 0) )
    {
      sub_1C93D2C(mScroll, enabled);
    }
    UnityEngine_Behaviour__set_enabled(mScroll, enabled, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void MasterFormationComponent__SetEnabledEquipIconScroll(
        MasterFormationComponent_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *iconScroll; // x0
  bool v5; // w20

  if ( (enabled & ~this->fields.isScrollEquipIcon & 1) == 0 )
  {
    iconScroll = (UnityEngine_Behaviour_o *)this->fields.iconScroll;
    if ( !iconScroll
      || (v5 = enabled,
          UnityEngine_Behaviour__set_enabled(iconScroll, enabled, 0),
          (iconScroll = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr) == 0) )
    {
      sub_1C93D2C(iconScroll, enabled);
    }
    UnityEngine_Behaviour__set_enabled(iconScroll, v5, 0);
  }
}


void MasterFormationComponent__Update(MasterFormationComponent_o *this, const MethodInfo *method)
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
      if ( !UIScrollView__get_isDragging(mScroll, 0) || this->fields.isDragStart )
        return;
      mScroll = this->fields.mScroll;
      if ( mScroll )
      {
        UIScrollView__Press(mScroll, 1, 0);
        return;
      }
    }
    sub_1C93D2C(mScroll, v4);
  }
}


void MasterFormationComponent__UpdateGuideLabel(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *iconScroll; // x0
  float alphaAnimNow; // s8
  float alphaAnimTgt; // s9
  MasterFormationComponent_c *v6; // x0
  float realtimeSinceStartup; // s0
  bool v8; // w1

  if ( (byte_4D2B698 & 1) == 0 )
  {
    sub_1C93AD4(&MasterFormationComponent_TypeInfo);
    byte_4D2B698 = 1;
  }
  iconScroll = (UnityEngine_Behaviour_o *)this->fields.iconScroll;
  if ( !iconScroll )
    goto LABEL_23;
  if ( UnityEngine_Behaviour__get_enabled(iconScroll, 0) )
  {
    alphaAnimNow = this->fields.alphaAnimNow;
    alphaAnimTgt = this->fields.alphaAnimTgt;
    v6 = MasterFormationComponent_TypeInfo;
    if ( !MasterFormationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo);
      v6 = MasterFormationComponent_TypeInfo;
    }
    this->fields.alphaAnimNow = alphaAnimNow
                              + (float)((float)(alphaAnimTgt - alphaAnimNow) * v6->static_fields->ALPHA_ANIMATION_SPD);
    if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields.alphaAnimTimeOld) >= MasterFormationComponent_TypeInfo->static_fields->ALPHA_ANIMATION_INTERVAL )
    {
      this->fields.alphaAnimTgt = 0.0;
      this->fields.alphaAnimTimeOld = UnityEngine_Time__get_realtimeSinceStartup(0);
    }
    if ( this->fields.alphaAnimTgt <= 0.0 && this->fields.alphaAnimNow <= 0.01 )
    {
      *(_QWORD *)&this->fields.alphaAnimNow = 0x3F80000000000000LL;
      realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
      iconScroll = (UnityEngine_Behaviour_o *)this->fields.touchGuideLabel;
      this->fields.alphaAnimTimeOld = realtimeSinceStartup;
      if ( !iconScroll )
        goto LABEL_23;
      iconScroll = (UnityEngine_Behaviour_o *)UnityEngine_Behaviour__get_enabled(iconScroll, 0);
      if ( !this->fields.touchGuideLabel )
        goto LABEL_23;
      if ( ((unsigned __int8)iconScroll & 1) != 0 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.touchGuideLabel, 0, 0);
        iconScroll = (UnityEngine_Behaviour_o *)this->fields.scrollGuideLabel;
        if ( !iconScroll )
          goto LABEL_23;
        v8 = 1;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.touchGuideLabel, 1, 0);
        iconScroll = (UnityEngine_Behaviour_o *)this->fields.scrollGuideLabel;
        if ( !iconScroll )
          goto LABEL_23;
        v8 = 0;
      }
      UnityEngine_Behaviour__set_enabled(iconScroll, v8, 0);
    }
    iconScroll = (UnityEngine_Behaviour_o *)this->fields.touchGuideLabel;
    if ( iconScroll )
    {
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, Il2CppClass *, float))iconScroll->klass[1]._1.element_class)(
        iconScroll,
        iconScroll->klass[1]._1.castClass,
        this->fields.alphaAnimNow);
      iconScroll = (UnityEngine_Behaviour_o *)this->fields.scrollGuideLabel;
      if ( iconScroll )
      {
        ((void (__fastcall *)(UnityEngine_Behaviour_o *, Il2CppClass *, float))iconScroll->klass[1]._1.element_class)(
          iconScroll,
          iconScroll->klass[1]._1.castClass,
          this->fields.alphaAnimNow);
        return;
      }
    }
LABEL_23:
    sub_1C93D2C(iconScroll, method);
  }
}


void MasterFormationComponent__UpdateIconSelected(MasterFormationComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mstEqIconList; // x0
  int size; // w21
  int32_t v5; // w20
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4D2B6A2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Item__);
    byte_4D2B6A2 = 1;
  }
  mstEqIconList = (System_Collections_Generic_List_object__o *)this->fields.mstEqIconList;
  if ( mstEqIconList )
  {
    size = mstEqIconList->fields._size;
    if ( size >= 1 )
    {
      v5 = 0;
      do
      {
        mstEqIconList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mstEqIconList,
                                                                       v5,
                                                                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Item__);
        if ( !mstEqIconList )
          break;
        MasterEquipIconComponent__UpdateSelected(
          (MasterEquipIconComponent_o *)mstEqIconList,
          this->fields.currentEquipId,
          v7);
        if ( size == ++v5 )
          return;
        mstEqIconList = (System_Collections_Generic_List_object__o *)this->fields.mstEqIconList;
      }
      while ( mstEqIconList );
      sub_1C93D2C(mstEqIconList, v6);
    }
  }
}


void MasterFormationComponent___changeCmdSpellImg_b__66_0(MasterFormationComponent_o *this, const MethodInfo *method)
{
  CommandSpellIconComponent_o *cmdSpellIconComp; // x0
  UnityEngine_Vector2_o v4; // 0:s0.4,4:s1.4

  cmdSpellIconComp = this->fields.cmdSpellIconComp;
  if ( !cmdSpellIconComp
    || (v4.fields.x = 130.0,
        v4.fields.y = 130.0,
        CommandSpellIconComponent__SetSize(cmdSpellIconComp, v4, 0),
        (cmdSpellIconComp = (CommandSpellIconComponent_o *)this->fields.cmdSpellTexture) == 0) )
  {
    sub_1C93D2C(cmdSpellIconComp, method);
  }
  ((void (__fastcall *)(CommandSpellIconComponent_o *, Il2CppClass *, float))cmdSpellIconComp->klass[1]._1.element_class)(
    cmdSpellIconComp,
    cmdSpellIconComp->klass[1]._1.castClass,
    1.0);
}


void MasterFormationComponent__add_notificationDragState(
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

  if ( (byte_4D2B696 & 1) == 0 )
  {
    sub_1C93AD4(&MasterFormationComponent_NotificationDragState_TypeInfo);
    byte_4D2B696 = 1;
  }
  notificationDragState = (System_Delegate_o *)this->fields.notificationDragState;
  p_notificationDragState = &this->fields.notificationDragState;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(notificationDragState, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (MasterFormationComponent_NotificationDragState_c *)v7->klass != MasterFormationComponent_NotificationDragState_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_notificationDragState, v7, notificationDragState);
    v9 = notificationDragState == (System_Delegate_o *)v8;
    notificationDragState = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterFormationComponent_o *)sub_1C940C8(v7);
  MasterFormationComponent__remove_notificationDragState(v10, v11, v12);
}


void MasterFormationComponent__changeCmdSpellImg(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x22
  const MethodInfo *v4; // x3
  __int64 SpellImageId; // x0
  __int64 v6; // x1
  CommandSpellIconComponent_o *cmdSpellIconComp; // x21
  int32_t v8; // w20
  int32_t CommandSpell; // w22
  System_Action_o *v10; // x23

  if ( (byte_4D2B69D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__);
    byte_4D2B69D = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  SpellImageId = MasterFormationComponent__getSpellImageId(
                   (MasterFormationComponent_o *)SelfUserGame,
                   this->fields.genderType,
                   this->fields.currentEquipId,
                   v4);
  if ( !SelfUserGame
    || (cmdSpellIconComp = this->fields.cmdSpellIconComp,
        v8 = SpellImageId,
        CommandSpell = UserGameEntity__getCommandSpell(SelfUserGame, 0),
        v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__, 0),
        !cmdSpellIconComp) )
  {
    sub_1C93D2C(SpellImageId, v6);
  }
  CommandSpellIconComponent__SetChangeCurrentCmdSepll(cmdSpellIconComp, v8, CommandSpell, v10, 0);
}


void MasterFormationComponent__closeMasterFormation(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *loopCtr; // x0
  int32_t childCount; // w0
  int v6; // w22
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w0
  int v9; // w22
  UnityEngine_Object_o *v10; // x20

  if ( (byte_4D2B6B0 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UserEquipNewManager_TypeInfo);
    byte_4D2B6B0 = 1;
  }
  MasterFormationComponent__destroyMasterFigure(this, method);
  loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_30;
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0);
  if ( !loopCtr )
    goto LABEL_30;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)loopCtr, 0);
  if ( childCount >= 1 )
  {
    v6 = childCount + 1;
    while ( 1 )
    {
      loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
      if ( !loopCtr )
        break;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0);
      if ( !loopCtr )
        break;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                             (UnityEngine_Transform_o *)loopCtr,
                                             v6 - 2,
                                             0);
      if ( !loopCtr )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(loopCtr, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_72120096(gameObject, 0);
      if ( --v6 <= 1 )
        goto LABEL_13;
    }
LABEL_30:
    sub_1C93D2C(loopCtr, v3);
  }
LABEL_13:
  loopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
  if ( !loopCtr )
    goto LABEL_30;
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0);
  if ( !loopCtr )
    goto LABEL_30;
  v8 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)loopCtr, 0);
  if ( v8 >= 1 )
  {
    v9 = v8 + 1;
    do
    {
      loopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
      if ( !loopCtr )
        goto LABEL_30;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0);
      if ( !loopCtr )
        goto LABEL_30;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                             (UnityEngine_Transform_o *)loopCtr,
                                             v9 - 2,
                                             0);
      if ( !loopCtr )
        goto LABEL_30;
      v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(loopCtr, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_72120096(v10, 0);
    }
    while ( --v9 > 1 );
  }
  loopCtr = (UnityEngine_Component_o *)this->fields.userEquipEntity;
  if ( !loopCtr )
    goto LABEL_30;
  UserEquipEntity__SetOld((UserEquipEntity_o *)loopCtr, 0);
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  UserEquipNewManager__WriteData(0);
  loopCtr = (UnityEngine_Component_o *)this->fields.mScroll;
  if ( !loopCtr )
    goto LABEL_30;
  UIScrollView__ResetPosition((UIScrollView_o *)loopCtr, 0);
  loopCtr = (UnityEngine_Component_o *)this->fields.iconScroll;
  if ( !loopCtr )
    goto LABEL_30;
  UIScrollView__ResetPosition((UIScrollView_o *)loopCtr, 0);
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !loopCtr )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)loopCtr, 0, 0);
}


void MasterFormationComponent__destroyMasterFigure(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_masterFigure; // x19
  UnityEngine_Object_o *v4; // x20
  struct UIMasterFigureTextureOld_o *masterFigure; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2B6B1 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2B6B1 = 1;
  }
  masterFigure = this->fields.masterFigure;
  p_masterFigure = (UnityEngine_Component_o **)&this->fields.masterFigure;
  v4 = (UnityEngine_Object_o *)masterFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    if ( !*p_masterFigure )
      sub_1C93D2C(0, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_masterFigure, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(gameObject, 0);
    *p_masterFigure = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_masterFigure, 0, v8, v9, v10, v11, v12, v13);
  }
}


int64_t MasterFormationComponent__getCurrentUsrEquipId(MasterFormationComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentUsrEquipId;
}


int32_t MasterFormationComponent__getSpellImageId(
        MasterFormationComponent_o *this,
        int32_t genderType,
        int64_t equipId,
        const MethodInfo *method)
{
  int32_t v4; // w20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  void *monitor; // x19
  Il2CppClass *klass; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v4 = equipId;
  if ( (byte_4D2B6AF & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B6AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EquipMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v4,
                     (const MethodInfo_3463274 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__)) == 0 )
  {
    sub_1C93D2C(Instance, v7);
  }
  if ( genderType == 2 )
  {
    klass = Instance[8].klass;
    monitor = Instance[8].monitor;
  }
  else
  {
    klass = Instance[7].klass;
    monitor = Instance[7].monitor;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = klass;
  *(_QWORD *)&v11.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v11, 0);
}


bool MasterFormationComponent__isChangeEquip(MasterFormationComponent_o *this, const MethodInfo *method)
{
  return this->fields.isChange;
}


void MasterFormationComponent__onClickLeftArrow(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  int32_t childCount; // w8
  int v7; // w8
  int32_t v8; // w20
  UICenterOnChild_o *iconCenterChild; // x21
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2B6AD & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    sub_1C93AD4(&Method_MasterFormationComponent_onClickLeftArrow__);
    sub_1C93AD4(&StringLiteral_11355/*"RefreshCurrentInfo"*/);
    byte_4D2B6AD = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !this->fields.isDragStart && !this->fields.isIconDragStart )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
    *(_WORD *)&this->fields.isChangeMasterImg = 257;
    if ( !leftArrowBtn )
      goto LABEL_26;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_26;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0);
    *(_WORD *)&this->fields.isDragStart = 0;
    UnityEngine_MonoBehaviour__CancelInvoke_72104408(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11355/*"RefreshCurrentInfo"*/,
      0);
    v4 = Method_MasterFormationComponent_onClickLeftArrow__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_onClickLeftArrow__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C93AEC(Method_MasterFormationComponent_onClickLeftArrow__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0, 0);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr;
    if ( !leftArrowBtn )
      goto LABEL_26;
    leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)leftArrowBtn,
                                                0);
    if ( !leftArrowBtn )
      goto LABEL_26;
    childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)leftArrowBtn, 0);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
    v7 = childCount - 1;
    v8 = this->fields.currentMoveIconIdx - 1 < 0 ? v7 : this->fields.currentMoveIconIdx - 1;
    this->fields.currentMoveIconIdx = v8;
    if ( !leftArrowBtn
      || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 1, 0),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr) == 0)
      || (iconCenterChild = this->fields.iconCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0)) == 0)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v8,
                                                      0),
          !iconCenterChild)
      || (UICenterOnChild__CenterOn_49871820(iconCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0) )
    {
LABEL_26:
      sub_1C93D2C(leftArrowBtn, method);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)leftArrowBtn,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v12.fields._current )
        sub_1C93D2C(0, v10);
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v12.fields._current, 0, v11);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  }
}


void MasterFormationComponent__onClickRightArrow(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  int32_t childCount; // w0
  int32_t currentMoveIconIdx; // w9
  int32_t v8; // w8
  int32_t v9; // w20
  UICenterOnChild_o *iconCenterChild; // x21
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2B6AC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    sub_1C93AD4(&Method_MasterFormationComponent_onClickRightArrow__);
    sub_1C93AD4(&StringLiteral_11355/*"RefreshCurrentInfo"*/);
    byte_4D2B6AC = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !this->fields.isDragStart && !this->fields.isIconDragStart )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
    *(_WORD *)&this->fields.isChangeMasterImg = 257;
    if ( !leftArrowBtn )
      goto LABEL_26;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_26;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0);
    *(_WORD *)&this->fields.isDragStart = 0;
    UnityEngine_MonoBehaviour__CancelInvoke_72104408(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11355/*"RefreshCurrentInfo"*/,
      0);
    v4 = Method_MasterFormationComponent_onClickRightArrow__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_onClickRightArrow__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C93AEC(Method_MasterFormationComponent_onClickRightArrow__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0, 0);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr;
    if ( !leftArrowBtn )
      goto LABEL_26;
    leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)leftArrowBtn,
                                                0);
    if ( !leftArrowBtn )
      goto LABEL_26;
    childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)leftArrowBtn, 0);
    currentMoveIconIdx = this->fields.currentMoveIconIdx;
    v8 = childCount;
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
    v9 = currentMoveIconIdx + 1 < v8 ? currentMoveIconIdx + 1 : 0;
    this->fields.currentMoveIconIdx = v9;
    if ( !leftArrowBtn
      || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 1, 0),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr) == 0)
      || (iconCenterChild = this->fields.iconCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0)) == 0)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v9,
                                                      0),
          !iconCenterChild)
      || (UICenterOnChild__CenterOn_49871820(iconCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0) )
    {
LABEL_26:
      sub_1C93D2C(leftArrowBtn, method);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      (System_Collections_Generic_List_object__o *)leftArrowBtn,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v13.fields._current )
        sub_1C93D2C(0, v11);
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v13.fields._current, 0, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  }
}


void MasterFormationComponent__remove_notificationDragState(
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

  if ( (byte_4D2B697 & 1) == 0 )
  {
    sub_1C93AD4(&MasterFormationComponent_NotificationDragState_TypeInfo);
    byte_4D2B697 = 1;
  }
  notificationDragState = (System_Delegate_o *)this->fields.notificationDragState;
  p_notificationDragState = &this->fields.notificationDragState;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(notificationDragState, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (MasterFormationComponent_NotificationDragState_c *)v7->klass != MasterFormationComponent_NotificationDragState_TypeInfo )
        break;
    }
    v8 = sub_1CEF8A8(p_notificationDragState, v7, notificationDragState);
    v9 = notificationDragState == (System_Delegate_o *)v8;
    notificationDragState = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterFormationComponent_o *)sub_1C940C8(v7);
  MasterFormationComponent__Update(v10, v11);
}


void MasterFormationComponent__setChangeMasterInfo(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4D2B6AE & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_5482/*"END_SET"*/);
    sub_1C93AD4(&StringLiteral_11355/*"RefreshCurrentInfo"*/);
    byte_4D2B6AE = 1;
  }
  MasterFormationComponent__setMstImg(this, this->fields.currentEquipId, v2);
  if ( this->fields.isDragStart || this->fields.isIconDragStart )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11355/*"RefreshCurrentInfo"*/,
      0.1,
      0);
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C93D2C(0, v4);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5482/*"END_SET"*/, 0);
}


void MasterFormationComponent__setCmdSpellImg(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  BattleWindowComponent_o *cmdSpellWinComp; // x20
  struct CommandSpellWindowComponent_o *v6; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UnityEngine_Vector2_o v14; // 0:s0.4,4:s1.4

  if ( (byte_4D2B69A & 1) == 0 )
  {
    sub_1C93AD4(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
    sub_1C93AD4(&Method_MasterFormationComponent_CloseCmdSpell__);
    sub_1C93AD4(&MasterFormationComponent_TypeInfo);
    byte_4D2B69A = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !this->fields.cmdSpellIconComp )
    goto LABEL_11;
  CommandSpellIconComponent__SetData(this->fields.cmdSpellIconComp, SelfUserGame, 0);
  SelfUserGame = (UserGameEntity_o *)this->fields.cmdSpellIconComp;
  if ( !SelfUserGame )
    goto LABEL_11;
  v14.fields.x = 130.0;
  v14.fields.y = 130.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)SelfUserGame, v14, 0);
  SelfUserGame = (UserGameEntity_o *)this->fields.cmdSpellWinComp;
  if ( !SelfUserGame )
    goto LABEL_11;
  CommandSpellWindowComponent__InitializeCommandSpell((CommandSpellWindowComponent_o *)SelfUserGame, 0, 0, -1, 0);
  SelfUserGame = (UserGameEntity_o *)MasterFormationComponent_TypeInfo;
  cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
  if ( !MasterFormationComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo);
  if ( !cmdSpellWinComp
    || (BattleWindowComponent__setInitData(
          cmdSpellWinComp,
          2,
          MasterFormationComponent_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME,
          0,
          0),
        (v6 = this->fields.cmdSpellWinComp) == 0) )
  {
LABEL_11:
    sub_1C93D2C(SelfUserGame, v4);
  }
  v6->fields.mode = 0;
  v7 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_1C93D20(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
  CommandSpellWindowComponent_CloseButtonCallBack___ctor(
    v7,
    (Il2CppObject *)this,
    (intptr_t)Method_MasterFormationComponent_CloseCmdSpell__,
    0);
  v6->fields.callback_close = v7;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v6->fields.callback_close, (int32_t)v7, v8, v9, v10, v11, v12, v13);
}


void MasterFormationComponent__setCmdSpellRecoverTime(
        MasterFormationComponent_o *this,
        int64_t recoverTime,
        const MethodInfo *method)
{
  UILabel_o *recoverTitleLb; // x21
  System_String_o *cmdSpellRecTimeInfo; // x0
  unsigned __int64 v7; // x24
  int v8; // w25
  int v9; // w26
  UILabel_o *recoverTimeLb; // x19
  System_String_o *v11; // x20
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  int v15; // [xsp+Ch] [xbp-54h] BYREF
  int v16; // [xsp+18h] [xbp-48h] BYREF
  int v17; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4D2B69B & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_3700/*"COMMAND_SPELL_RECOVER_TIME"*/);
    sub_1C93AD4(&StringLiteral_3703/*"COMMNAD_SPELL_RECV_TXT"*/);
    byte_4D2B69B = 1;
  }
  if ( recoverTime > 0 )
  {
    recoverTitleLb = this->fields.recoverTitleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    cmdSpellRecTimeInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3703/*"COMMNAD_SPELL_RECV_TXT"*/, 0);
    if ( recoverTitleLb )
    {
      v7 = recoverTime / 0xE10uLL;
      v8 = (int)(recoverTime / 0x3CuLL) % 60;
      v9 = recoverTime % 0x3CuLL;
      UILabel__set_text(recoverTitleLb, cmdSpellRecTimeInfo, 0);
      recoverTimeLb = this->fields.recoverTimeLb;
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3700/*"COMMAND_SPELL_RECOVER_TIME"*/, 0);
      v17 = v7;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
      v16 = v8;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
      v15 = v9;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
      cmdSpellRecTimeInfo = System_String__Format_64467100(v11, v12, v13, v14, 0);
      if ( recoverTimeLb )
      {
        UILabel__set_text(recoverTimeLb, cmdSpellRecTimeInfo, 0);
        return;
      }
    }
LABEL_11:
    sub_1C93D2C(cmdSpellRecTimeInfo, recoverTime);
  }
  cmdSpellRecTimeInfo = (System_String_o *)this->fields.cmdSpellRecTimeInfo;
  if ( !cmdSpellRecTimeInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellRecTimeInfo, 0, 0);
}


void MasterFormationComponent__setCommandSpellInfo(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *usrGameEnt; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1
  int64_t recoverTime; // [xsp+0h] [xbp-20h] BYREF
  int32_t count; // [xsp+Ch] [xbp-14h] BYREF

  count = 0;
  recoverTime = 0;
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_1C93D2C(0, method);
  UserGameEntity__getCmdSpellInfo(usrGameEnt, &count, &recoverTime, 0);
  MasterFormationComponent__setCmdSpellRecoverTime(this, recoverTime, v4);
  if ( this->fields.cmdCnt != count )
  {
    this->fields.cmdCnt = count;
    MasterFormationComponent__setCmdSpellImg(this, v5);
  }
}


void MasterFormationComponent__setDisEquipEffect(MasterFormationComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mstEqInfoList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2B6AB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__);
    byte_4D2B6AB = 1;
  }
  memset(&v6, 0, sizeof(v6));
  mstEqInfoList = (System_Collections_Generic_List_object__o *)this->fields.mstEqInfoList;
  if ( !mstEqInfoList )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    mstEqInfoList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_1C93D2C(0, v4);
    MasterEquipInfoComponent__setDispEffectObj((MasterEquipInfoComponent_o *)v6.fields._current, 0, v5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void MasterFormationComponent__setDispRePosition(
        MasterFormationComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  UIWrapContent_o *loopCtr; // x0
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x9
  int v7; // w8
  int32_t v8; // w1
  UICenterOnChild_o *iconCenterChild; // x21

  if ( (byte_4D2B6A4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__);
    sub_1C93AD4(&MasterFormationComponent_TypeInfo);
    byte_4D2B6A4 = 1;
  }
  loopCtr = this->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_23;
  UIWrapContent__setScrollPos(loopCtr, idx, 0);
  if ( this->fields.isScrollEquipIcon )
  {
    if ( this->fields.isFirst )
    {
      this->fields.isFirst = 0;
      loopCtr = (UIWrapContent_o *)MasterFormationComponent_TypeInfo;
      if ( !MasterFormationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo);
        loopCtr = (UIWrapContent_o *)MasterFormationComponent_TypeInfo;
      }
      currentList = this->fields.currentList;
      v7 = idx - *(_DWORD *)(*(_QWORD *)&loopCtr[1].fields.mHorizontal + 4LL) / 2;
      if ( v7 < 0 )
      {
        if ( !currentList )
          goto LABEL_23;
        v7 += currentList->fields._size;
      }
      else if ( !currentList )
      {
        goto LABEL_23;
      }
      loopCtr = this->fields.iconLoopCtr;
      if ( !loopCtr )
        goto LABEL_23;
      v8 = currentList->fields._size + v7;
    }
    else
    {
      loopCtr = this->fields.iconLoopCtr;
      if ( !loopCtr )
        goto LABEL_23;
      v8 = idx;
    }
    UIWrapContent__setScrollPos(loopCtr, v8, 0);
    loopCtr = (UIWrapContent_o *)this->fields.iconCenterChild;
    if ( loopCtr )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)loopCtr, 1, 0);
      loopCtr = this->fields.iconLoopCtr;
      if ( loopCtr )
      {
        iconCenterChild = this->fields.iconCenterChild;
        loopCtr = (UIWrapContent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)loopCtr, 0);
        if ( loopCtr )
        {
          loopCtr = (UIWrapContent_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)loopCtr, idx, 0);
          if ( iconCenterChild )
          {
            UICenterOnChild__CenterOn_49871820(iconCenterChild, (UnityEngine_Transform_o *)loopCtr, 1, 0);
            goto LABEL_22;
          }
        }
      }
    }
LABEL_23:
    sub_1C93D2C(loopCtr, *(_QWORD *)&idx);
  }
LABEL_22:
  this->fields.currentMoveIdx = idx;
  this->fields.currentMoveIconIdx = idx;
}


void MasterFormationComponent__setMasterFormation(
        MasterFormationComponent_o *this,
        UserGameEntity_o *userData,
        int64_t userEquipId,
        MasterFormationComponent_NotificationDragState_o *notificationDragState,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  const MethodInfo *v24; // x2
  long double v25; // q0
  int32_t lv; // w8
  __int64 v27; // x0
  __int64 v28; // x0
  Il2CppObject *Entity; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct UserEquipEntity_o *userEquipEntity; // x8
  __int64 v37; // x21
  __int64 v38; // x22
  int32_t v39; // w1
  const MethodInfo *v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4D2B699 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4D2B699 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrGameEnt = SelfUserGame;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.usrGameEnt,
    (int32_t)SelfUserGame,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.arrowInfo;
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.mScroll;
  if ( !gameObject )
    goto LABEL_25;
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.iconScroll;
  if ( !gameObject )
    goto LABEL_25;
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0);
  this->fields.usrGameEnt = userData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.usrGameEnt, (int32_t)userData, v18, v19, v20, v21, v22, v23);
  if ( userEquipId <= 0 )
  {
    if ( !userData )
      goto LABEL_25;
    gameObject = (UnityEngine_GameObject_o *)UserGameEntity__getActiveUserEquipId(userData, 0);
    this->fields.usrEquipId = (int64_t)gameObject;
  }
  else
  {
    gameObject = (UnityEngine_GameObject_o *)userEquipId;
    this->fields.usrEquipId = userEquipId;
    if ( !userData )
      goto LABEL_25;
  }
  lv = userData->fields.lv;
  this->fields.currentMoveIconIdx = 0;
  this->fields.currentMoveIdx = 0;
  this->fields.currentEquipId = 0;
  this->fields.usrLv = lv;
  this->fields.currentUsrEquipId = userEquipId;
  if ( (__int64)gameObject < 1 )
  {
    v39 = 0;
    goto LABEL_24;
  }
  v27 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1C69B68(v25);
  v28 = *(_QWORD *)(*(_QWORD *)(v27 + 192) + 16LL);
  if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
    v28 = sub_1C69B68(v25);
  gameObject = **(UnityEngine_GameObject_o ***)(v28 + 184);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                   this->fields.usrEquipId,
                   (const MethodInfo_3465A24 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__),
        this->fields.userEquipEntity = (struct UserEquipEntity_o *)Entity,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.userEquipEntity,
          (int32_t)Entity,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35),
        (userEquipEntity = this->fields.userEquipEntity) == 0) )
  {
LABEL_25:
    sub_1C93D2C(gameObject, v17);
  }
  v38 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v47.fields.currentCryptoKey = v38;
  *(_QWORD *)&v47.fields.fakeValue = v37;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v47, 0);
  this->fields.currentEquipId = v39;
LABEL_24:
  MasterFormationComponent__setMstImg(this, v39, v24);
  MasterFormationComponent__setUsrEquipData(this, v40);
  this->fields.isChangeMasterImg = 1;
  this->fields.notificationDragState = notificationDragState;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.notificationDragState,
    (int32_t)notificationDragState,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
}


void MasterFormationComponent__setMstEquipIconList(MasterFormationComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  GrandQuestFolderBoardItem_o *p_iconCenterChild; // x21
  UnityEngine_Object_o *iconCenterChild; // x22
  __int64 iconLoopCtr; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct UIWrapContent_o *v21; // x8
  UILabel_o *touchGuideLabel; // x22
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  int size; // w28
  const MethodInfo *v25; // x2
  float x; // s10
  struct UIScrollView_o *iconScroll; // x22
  GrandQuestFolderBoardItem_o *p_onDragStarted; // x22
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v30; // x24
  System_Delegate_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Delegate_o *v38; // x8
  UIScrollView_OnDragNotification_c *v39; // x1
  struct UIWrapContent_o *v40; // x8
  int v41; // w9
  int32_t itemSize; // w8
  bool isScrollEquipIcon; // w1
  int v44; // w8
  struct UIScrollView_o *v45; // x22
  GrandQuestFolderBoardItem_o *p_onDragFinished; // x22
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v48; // x24
  System_Delegate_o *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  UIScrollView_OnDragNotification_c *v56; // x1
  GrandQuestFolderBoardItem_c *klass; // x21
  System_Delegate_o *v58; // t1
  SpringPanel_OnFinished_o *v59; // x23
  System_Delegate_o *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  SpringPanel_OnFinished_c *v67; // x1
  UILabel_o *scrollGuideLabel; // x21
  System_Collections_Generic_List_object__o *v69; // x21
  int v70; // w9
  int32_t i; // w23
  UnityEngine_GameObject_o *equipIconPrefab; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v74; // x24
  UnityEngine_Transform_o *v75; // x25
  UnityEngine_Transform_o *v76; // x25
  System_String_o *v77; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  struct System_Object_array *items; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  System_Collections_Generic_List_object__o *v94; // x8
  struct System_Object_array *v95; // x9
  _QWORD *v96; // x10
  __int64 v97; // x11
  MasterEquipIconComponent_o *v98; // x24
  Il2CppClass **v99; // x0
  Il2CppObject *Item; // x0
  int32_t v101; // w25
  UserEquipEntity_o *v102; // x26
  MasterEquipIconComponent_CallbackFunc_o *v103; // x27
  const MethodInfo *v104; // x3
  int64_t v105; // x2
  int32_t v106; // w3
  const MethodInfo *v107; // x6
  const MethodInfo *v108; // x2
  int32_t v109; // w20
  struct UIWrapContent_o *v110; // x8
  int v111; // [xsp+4h] [xbp-8Ch]
  struct System_Collections_Generic_List_MasterEquipIconComponent__o **p_mstEqIconList; // [xsp+8h] [xbp-88h]
  int v113; // [xsp+18h] [xbp-78h]
  int32_t v114; // [xsp+1Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2B6A0 & 1) == 0 )
  {
    sub_1C93AD4(&MasterEquipIconComponent_CallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_MasterFormationComponent_OnClickIcon__);
    sub_1C93AD4(&Method_MasterFormationComponent_OnIconCenterOnChildFinished__);
    sub_1C93AD4(&Method_MasterFormationComponent_OnIconDragFinished__);
    sub_1C93AD4(&Method_MasterFormationComponent_OnIconDragStarted__);
    sub_1C93AD4(&MasterFormationComponent_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UIScrollView_OnDragNotification_TypeInfo);
    sub_1C93AD4(&SpringPanel_OnFinished_TypeInfo);
    sub_1C93AD4(&StringLiteral_8602/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/);
    sub_1C93AD4(&StringLiteral_8601/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/);
    sub_1C93AD4(&StringLiteral_4973/*"D3"*/);
    byte_4D2B6A0 = 1;
  }
  v114 = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__);
  this->fields.mstEqIconList = (struct System_Collections_Generic_List_MasterEquipIconComponent__o *)v3;
  p_mstEqIconList = &this->fields.mstEqIconList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mstEqIconList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  p_iconCenterChild = (GrandQuestFolderBoardItem_o *)&this->fields.iconCenterChild;
  iconCenterChild = (UnityEngine_Object_o *)this->fields.iconCenterChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  iconLoopCtr = UnityEngine_Object__op_Equality(iconCenterChild, 0, 0);
  if ( (iconLoopCtr & 1) != 0 )
  {
    iconLoopCtr = (__int64)this->fields.iconLoopCtr;
    if ( !iconLoopCtr )
      goto LABEL_87;
    iconLoopCtr = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconLoopCtr, 0);
    if ( !iconLoopCtr )
      goto LABEL_87;
    v14 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)iconLoopCtr,
            (const MethodInfo_31FBF9C *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    p_iconCenterChild->klass = (GrandQuestFolderBoardItem_c *)v14;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.iconCenterChild,
      (int32_t)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = this->fields.iconLoopCtr;
  if ( !v21 )
    goto LABEL_87;
  v21->fields.itemSize = 64;
  touchGuideLabel = this->fields.touchGuideLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  iconLoopCtr = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8602/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/, 0);
  if ( !touchGuideLabel
    || (UILabel__set_text(touchGuideLabel, (System_String_o *)iconLoopCtr, 0),
        (currentList = this->fields.currentList) == 0)
    || (iconLoopCtr = (__int64)this->fields.iconScroll) == 0
    || (size = currentList->fields._size,
        (iconLoopCtr = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconLoopCtr, 0)) == 0) )
  {
LABEL_87:
    sub_1C93D2C(iconLoopCtr, v13);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconLoopCtr, 0);
  iconLoopCtr = (__int64)MasterFormationComponent_TypeInfo;
  x = localPosition.fields.x;
  if ( !MasterFormationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo);
    iconLoopCtr = (__int64)MasterFormationComponent_TypeInfo;
  }
  if ( size > *(_DWORD *)(*(_QWORD *)(iconLoopCtr + 184) + 4LL) )
  {
    iconScroll = this->fields.iconScroll;
    this->fields.isScrollEquipIcon = 1;
    if ( !iconScroll )
      goto LABEL_87;
    onDragStarted = (System_Delegate_o *)iconScroll->fields.onDragStarted;
    p_onDragStarted = (GrandQuestFolderBoardItem_o *)&iconScroll->fields.onDragStarted;
    v30 = (UIScrollView_OnDragNotification_o *)sub_1C93D20(UIScrollView_OnDragNotification_TypeInfo);
    UIScrollView_OnDragNotification___ctor(
      v30,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragStarted__,
      0);
    v31 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v30, 0);
    v38 = v31;
    if ( v31 )
    {
      v39 = UIScrollView_OnDragNotification_TypeInfo;
      if ( (UIScrollView_OnDragNotification_c *)v31->klass != UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_41;
      p_onDragStarted->klass = (GrandQuestFolderBoardItem_c *)v31;
      if ( (UIScrollView_OnDragNotification_c *)v31->klass != v39 )
        goto LABEL_41;
    }
    else
    {
      p_onDragStarted->klass = 0;
    }
    sub_1C93A78(p_onDragStarted, (int32_t)v31, v32, v33, v34, v35, v36, v37);
    v45 = this->fields.iconScroll;
    if ( !v45 )
      goto LABEL_87;
    onDragFinished = (System_Delegate_o *)v45->fields.onDragFinished;
    p_onDragFinished = (GrandQuestFolderBoardItem_o *)&v45->fields.onDragFinished;
    v48 = (UIScrollView_OnDragNotification_o *)sub_1C93D20(UIScrollView_OnDragNotification_TypeInfo);
    UIScrollView_OnDragNotification___ctor(
      v48,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragFinished__,
      0);
    v49 = System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v48, 0);
    v38 = v49;
    if ( v49 )
    {
      v56 = UIScrollView_OnDragNotification_TypeInfo;
      if ( (UIScrollView_OnDragNotification_c *)v49->klass != UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_41;
      p_onDragFinished->klass = (GrandQuestFolderBoardItem_c *)v49;
      if ( (UIScrollView_OnDragNotification_c *)v49->klass != v56 )
        goto LABEL_41;
    }
    else
    {
      p_onDragFinished->klass = 0;
    }
    sub_1C93A78(p_onDragFinished, (int32_t)v49, v50, v51, v52, v53, v54, v55);
    klass = p_iconCenterChild->klass;
    if ( !klass )
      goto LABEL_87;
    v58 = *(System_Delegate_o **)&klass->_1.byval_arg.bits;
    p_iconCenterChild = (GrandQuestFolderBoardItem_o *)&klass->_1.byval_arg.bits;
    v59 = (SpringPanel_OnFinished_o *)sub_1C93D20(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(
      v59,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconCenterOnChildFinished__,
      0);
    v60 = System_Delegate__Combine(v58, (System_Delegate_o *)v59, 0);
    v38 = v60;
    if ( !v60 )
      goto LABEL_42;
    v67 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v60->klass == SpringPanel_OnFinished_TypeInfo )
    {
      p_iconCenterChild->klass = (GrandQuestFolderBoardItem_c *)v60;
      if ( (SpringPanel_OnFinished_c *)v60->klass == v67 )
      {
LABEL_43:
        sub_1C93A78(p_iconCenterChild, (int32_t)v38, v61, v62, v63, v64, v65, v66);
        iconLoopCtr = (__int64)this->fields.arrowInfo;
        if ( !iconLoopCtr )
          goto LABEL_87;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLoopCtr, 1, 0);
        scrollGuideLabel = this->fields.scrollGuideLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        iconLoopCtr = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8601/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/, 0);
        if ( !scrollGuideLabel )
          goto LABEL_87;
        UILabel__set_text(scrollGuideLabel, (System_String_o *)iconLoopCtr, 0);
        isScrollEquipIcon = this->fields.isScrollEquipIcon;
        v44 = 2;
        goto LABEL_48;
      }
    }
LABEL_41:
    sub_1C940C8(v38);
LABEL_42:
    p_iconCenterChild->klass = (GrandQuestFolderBoardItem_c *)v38;
    goto LABEL_43;
  }
  v40 = this->fields.iconLoopCtr;
  this->fields.isScrollEquipIcon = 0;
  if ( !v40 )
    goto LABEL_87;
  v41 = size - 1;
  itemSize = v40->fields.itemSize;
  if ( size - 1 < 0 )
    v41 = size;
  x = (float)-((v41 >> 1) * itemSize);
  isScrollEquipIcon = 0;
  if ( (size & 1) == 0 )
    x = x - (float)(itemSize / 2);
  v44 = 1;
LABEL_48:
  v111 = v44;
  MasterFormationComponent__SetEnabledEquipIconScroll(this, isScrollEquipIcon, v25);
  iconLoopCtr = (__int64)this->fields.iconCenterChild;
  if ( !iconLoopCtr )
    goto LABEL_87;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)iconLoopCtr, 0, 0);
  v69 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v69,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v114 = 0;
  v70 = 0;
  do
  {
    v113 = v70;
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        iconLoopCtr = (__int64)this->fields.iconLoopCtr;
        if ( !iconLoopCtr )
          goto LABEL_87;
        equipIconPrefab = this->fields.equipIconPrefab;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconLoopCtr, 0);
        iconLoopCtr = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 equipIconPrefab,
                                 transform,
                                 0,
                                 0);
        if ( !iconLoopCtr )
          goto LABEL_87;
        v74 = (UnityEngine_GameObject_o *)iconLoopCtr;
        iconLoopCtr = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)iconLoopCtr, 0);
        v75 = (UnityEngine_Transform_o *)iconLoopCtr;
        if ( !byte_4D2A13E )
        {
          iconLoopCtr = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A13E = 1;
        }
        if ( !v75 )
          goto LABEL_87;
        UnityEngine_Transform__set_localScale(v75, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        iconLoopCtr = (__int64)UnityEngine_GameObject__get_transform(v74, 0);
        if ( !this->fields.iconLoopCtr )
          goto LABEL_87;
        v76 = (UnityEngine_Transform_o *)iconLoopCtr;
        iconLoopCtr = (__int64)UnityEngine_Component__get_transform(
                                 (UnityEngine_Component_o *)this->fields.iconLoopCtr,
                                 0);
        if ( !iconLoopCtr )
          goto LABEL_87;
        v117 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconLoopCtr, 0);
        if ( !v76 )
          goto LABEL_87;
        UnityEngine_Transform__set_localPosition(v76, v117, 0);
        v77 = System_Int32__ToString_65934220((int32_t)&v114, (System_String_o *)StringLiteral_4973/*"D3"*/, 0);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v74, v77, 0);
        if ( !v69 )
          goto LABEL_87;
        items = v69->fields._items;
        v85 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v69->fields._version;
        if ( !items )
          goto LABEL_87;
        v86 = v69->fields._size;
        if ( (unsigned int)v86 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v69,
            (Il2CppObject *)v74,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
        }
        else
        {
          v87 = &items->obj.klass + v86;
          v69->fields._size = v86 + 1;
          v87[4] = (Il2CppClass *)v74;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v87 + 4), (int32_t)v74, v78, v79, v80, v81, v82, v83);
        }
        iconLoopCtr = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v74,
                                 (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
        v94 = (System_Collections_Generic_List_object__o *)*p_mstEqIconList;
        if ( !*p_mstEqIconList )
          goto LABEL_87;
        v95 = v94->fields._items;
        v96 = Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__;
        ++v94->fields._version;
        if ( !v95 )
          goto LABEL_87;
        v97 = v94->fields._size;
        v98 = (MasterEquipIconComponent_o *)iconLoopCtr;
        if ( (unsigned int)v97 >= LODWORD(v95->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v94,
            (Il2CppObject *)iconLoopCtr,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
        }
        else
        {
          v99 = &v95->obj.klass + v97;
          v94->fields._size = v97 + 1;
          v99[4] = (Il2CppClass *)v98;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v99 + 4), (int32_t)v98, v88, v89, v90, v91, v92, v93);
        }
        iconLoopCtr = (__int64)this->fields.currentList;
        if ( !iconLoopCtr )
          goto LABEL_87;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)iconLoopCtr,
                 i,
                 (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
        v101 = v114;
        v102 = (UserEquipEntity_o *)Item;
        v103 = (MasterEquipIconComponent_CallbackFunc_o *)sub_1C93D20(MasterEquipIconComponent_CallbackFunc_TypeInfo);
        MasterEquipIconComponent_CallbackFunc___ctor(
          v103,
          (Il2CppObject *)this,
          (intptr_t)Method_MasterFormationComponent_OnClickIcon__,
          v104);
        if ( !v98 )
          goto LABEL_87;
        MasterEquipIconComponent__SetEquipInfo(v98, v102, v105, v106, v101, v103, v107);
        MasterEquipIconComponent__UpdateSelected(v98, this->fields.currentEquipId, v108);
        ++v114;
      }
    }
    v70 = v113 + 1;
  }
  while ( v113 + 1 != v111 );
  iconLoopCtr = (__int64)this->fields.iconLoopCtr;
  if ( !iconLoopCtr )
    goto LABEL_87;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)iconLoopCtr, 0);
  iconLoopCtr = (__int64)this->fields.iconLoopCtr;
  if ( !iconLoopCtr )
    goto LABEL_87;
  UIWrapContent__resetScroll((UIWrapContent_o *)iconLoopCtr, 0);
  if ( this->fields.isScrollEquipIcon )
  {
    iconLoopCtr = (__int64)this->fields.iconLoopCtr;
    if ( iconLoopCtr )
    {
      UIWrapContent__WrapContent((UIWrapContent_o *)iconLoopCtr, 0);
      return;
    }
    goto LABEL_87;
  }
  if ( !v69 )
    goto LABEL_87;
  if ( v69->fields._size >= 1 )
  {
    v109 = 0;
    while ( 1 )
    {
      iconLoopCtr = (__int64)System_Collections_Generic_List_object___get_Item(
                               v69,
                               v109,
                               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !iconLoopCtr )
        break;
      iconLoopCtr = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)iconLoopCtr, 0);
      if ( !iconLoopCtr )
        break;
      v116.fields.x = x;
      v116.fields.y = localPosition.fields.y;
      v116.fields.z = localPosition.fields.z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconLoopCtr, v116, 0);
      v110 = this->fields.iconLoopCtr;
      if ( !v110 )
        break;
      ++v109;
      x = x + (float)v110->fields.itemSize;
      if ( v109 >= v69->fields._size )
        return;
    }
    goto LABEL_87;
  }
}


void MasterFormationComponent__setMstEquipList(MasterFormationComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x21
  struct System_Collections_Generic_List_MasterEquipInfoComponent__o **p_mstEqInfoList; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  GrandQuestFolderBoardItem_o *p_centerChild; // x21
  UnityEngine_Object_o *centerChild; // x22
  __int64 loopCtr; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct UIWrapContent_o *v23; // x8
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  int size; // w25
  bool isScrollEquipDetail; // w1
  int v27; // w8
  struct UIScrollView_o *mScroll; // x22
  GrandQuestFolderBoardItem_o *p_onDragStarted; // x22
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v31; // x24
  System_Delegate_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Delegate_o *v39; // x8
  UIScrollView_OnDragNotification_c *v40; // x1
  GrandQuestFolderBoardItem_c *klass; // x21
  System_Delegate_o *v42; // t1
  SpringPanel_OnFinished_o *v43; // x23
  System_Delegate_o *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  SpringPanel_OnFinished_c *v51; // x1
  int v52; // w9
  int32_t v53; // w22
  UnityEngine_GameObject_o *mstEquipInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v56; // x23
  UnityEngine_Transform_o *v57; // x24
  UnityEngine_Transform_o *v58; // x24
  System_String_o *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  System_Collections_Generic_List_object__o *v66; // x8
  struct System_Object_array *items; // x9
  _QWORD *v68; // x10
  __int64 v69; // x11
  MasterEquipInfoComponent_o *v70; // x23
  Il2CppClass **v71; // x0
  int32_t v72; // w3
  const MethodInfo *v73; // x5
  int v74; // [xsp+4h] [xbp-6Ch]
  int v75; // [xsp+8h] [xbp-68h]
  int32_t moveIdx; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2B69F & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo);
    sub_1C93AD4(&Method_MasterFormationComponent_OnCenterOnChildFinished__);
    sub_1C93AD4(&Method_MasterFormationComponent_OnDragStarted__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UIScrollView_OnDragNotification_TypeInfo);
    sub_1C93AD4(&SpringPanel_OnFinished_TypeInfo);
    sub_1C93AD4(&StringLiteral_4973/*"D3"*/);
    byte_4D2B69F = 1;
  }
  moveIdx = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__);
  p_mstEqInfoList = &this->fields.mstEqInfoList;
  this->fields.mstEqInfoList = (struct System_Collections_Generic_List_MasterEquipInfoComponent__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mstEqInfoList, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  p_centerChild = (GrandQuestFolderBoardItem_o *)&this->fields.centerChild;
  centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  loopCtr = UnityEngine_Object__op_Equality(centerChild, 0, 0);
  if ( (loopCtr & 1) != 0 )
  {
    loopCtr = (__int64)this->fields.loopCtr;
    if ( !loopCtr )
      goto LABEL_50;
    loopCtr = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)loopCtr, 0);
    if ( !loopCtr )
      goto LABEL_50;
    v16 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)loopCtr,
            (const MethodInfo_31FBF9C *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    p_centerChild->klass = (GrandQuestFolderBoardItem_c *)v16;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.centerChild, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  }
  v23 = this->fields.loopCtr;
  if ( !v23 )
    goto LABEL_50;
  v23->fields.itemSize = 534;
  currentList = this->fields.currentList;
  if ( !currentList )
    goto LABEL_50;
  size = currentList->fields._size;
  if ( size >= 2 )
  {
    mScroll = this->fields.mScroll;
    this->fields.isScrollEquipDetail = 1;
    if ( !mScroll )
      goto LABEL_50;
    onDragStarted = (System_Delegate_o *)mScroll->fields.onDragStarted;
    p_onDragStarted = (GrandQuestFolderBoardItem_o *)&mScroll->fields.onDragStarted;
    v31 = (UIScrollView_OnDragNotification_o *)sub_1C93D20(UIScrollView_OnDragNotification_TypeInfo);
    UIScrollView_OnDragNotification___ctor(
      v31,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnDragStarted__,
      0);
    v32 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v31, 0);
    v39 = v32;
    if ( v32 )
    {
      v40 = UIScrollView_OnDragNotification_TypeInfo;
      if ( (UIScrollView_OnDragNotification_c *)v32->klass != UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_23;
      p_onDragStarted->klass = (GrandQuestFolderBoardItem_c *)v32;
      if ( (UIScrollView_OnDragNotification_c *)v32->klass != v40 )
        goto LABEL_23;
    }
    else
    {
      p_onDragStarted->klass = 0;
    }
    sub_1C93A78(p_onDragStarted, (int32_t)v32, v33, v34, v35, v36, v37, v38);
    klass = p_centerChild->klass;
    if ( !klass )
      goto LABEL_50;
    v42 = *(System_Delegate_o **)&klass->_1.byval_arg.bits;
    p_centerChild = (GrandQuestFolderBoardItem_o *)&klass->_1.byval_arg.bits;
    v43 = (SpringPanel_OnFinished_o *)sub_1C93D20(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(
      v43,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnCenterOnChildFinished__,
      0);
    v44 = System_Delegate__Combine(v42, (System_Delegate_o *)v43, 0);
    v39 = v44;
    if ( !v44 )
      goto LABEL_24;
    v51 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v44->klass == SpringPanel_OnFinished_TypeInfo )
    {
      p_centerChild->klass = (GrandQuestFolderBoardItem_c *)v44;
      if ( (SpringPanel_OnFinished_c *)v44->klass == v51 )
        goto LABEL_25;
    }
LABEL_23:
    sub_1C940C8(v39);
LABEL_24:
    p_centerChild->klass = (GrandQuestFolderBoardItem_c *)v39;
LABEL_25:
    sub_1C93A78(p_centerChild, (int32_t)v39, v45, v46, v47, v48, v49, v50);
    isScrollEquipDetail = this->fields.isScrollEquipDetail;
    v27 = 2;
    goto LABEL_26;
  }
  isScrollEquipDetail = 0;
  v27 = 1;
  this->fields.isScrollEquipDetail = 0;
LABEL_26:
  v74 = v27;
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, isScrollEquipDetail, v15);
  moveIdx = 0;
  v52 = 0;
  do
  {
    v75 = v52;
    if ( size >= 1 )
    {
      v53 = 0;
      while ( 1 )
      {
        loopCtr = (__int64)this->fields.loopCtr;
        if ( !loopCtr )
          break;
        mstEquipInfoPrefab = this->fields.mstEquipInfoPrefab;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)loopCtr, 0);
        loopCtr = (__int64)BaseMonoBehaviour__createObject(
                             (BaseMonoBehaviour_o *)this,
                             mstEquipInfoPrefab,
                             transform,
                             0,
                             0);
        if ( !loopCtr )
          break;
        v56 = (UnityEngine_GameObject_o *)loopCtr;
        loopCtr = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)loopCtr, 0);
        v57 = (UnityEngine_Transform_o *)loopCtr;
        if ( !byte_4D2A13E )
        {
          loopCtr = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A13E = 1;
        }
        if ( !v57 )
          break;
        UnityEngine_Transform__set_localScale(v57, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        loopCtr = (__int64)UnityEngine_GameObject__get_transform(v56, 0);
        if ( !this->fields.loopCtr )
          break;
        v58 = (UnityEngine_Transform_o *)loopCtr;
        loopCtr = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.loopCtr, 0);
        if ( !loopCtr )
          break;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)loopCtr, 0);
        if ( !v58 )
          break;
        UnityEngine_Transform__set_localPosition(v58, localPosition, 0);
        v59 = System_Int32__ToString_65934220((int32_t)&moveIdx, (System_String_o *)StringLiteral_4973/*"D3"*/, 0);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v56, v59, 0);
        loopCtr = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             v56,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
        v66 = (System_Collections_Generic_List_object__o *)*p_mstEqInfoList;
        if ( !*p_mstEqInfoList )
          break;
        items = v66->fields._items;
        v68 = Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__;
        ++v66->fields._version;
        if ( !items )
          break;
        v69 = v66->fields._size;
        v70 = (MasterEquipInfoComponent_o *)loopCtr;
        if ( (unsigned int)v69 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v66,
            (Il2CppObject *)loopCtr,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
        }
        else
        {
          v71 = &items->obj.klass + v69;
          v66->fields._size = v69 + 1;
          v71[4] = (Il2CppClass *)v70;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v71 + 4), (int32_t)v70, v60, v61, v62, v63, v64, v65);
        }
        loopCtr = (__int64)this->fields.currentList;
        if ( !loopCtr )
          break;
        loopCtr = (__int64)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)loopCtr,
                             v53,
                             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
        if ( !v70 )
          break;
        MasterEquipInfoComponent__setEquipInfo(
          v70,
          (UserEquipEntity_o *)loopCtr,
          this->fields.usrEquipId,
          v72,
          moveIdx,
          v73);
        ++v53;
        ++moveIdx;
        if ( size == v53 )
          goto LABEL_45;
      }
LABEL_50:
      sub_1C93D2C(loopCtr, v14);
    }
LABEL_45:
    v52 = v75 + 1;
  }
  while ( v75 + 1 != v74 );
  loopCtr = (__int64)this->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_50;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)loopCtr, 0);
  loopCtr = (__int64)this->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_50;
  UIWrapContent__resetScroll((UIWrapContent_o *)loopCtr, 0);
  loopCtr = (__int64)this->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_50;
  UIWrapContent__WrapContent((UIWrapContent_o *)loopCtr, 0);
}


// local variable allocation has failed, the output may be wrong!
void MasterFormationComponent__setMstImg(MasterFormationComponent_o *this, int32_t equipId, const MethodInfo *method)
{
  MasterFormationComponent_o *v4; // x20
  struct UserGameEntity_o *usrGameEnt; // x8
  UnityEngine_Object_o *masterFigure; // x22
  UIMasterFigureTextureOld_o *Prefab_41389760; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UIMasterFigureTextureOld_o *v14; // x21
  int32_t genderType; // w20
  System_Action_o *monitor; // x22
  Il2CppObject *klass; // x23
  struct MasterFormationComponent___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  v4 = this;
  if ( (byte_4D2B69C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_MasterFormationComponent___c__setMstImg_b__65_0__);
    this = (MasterFormationComponent_o *)sub_1C93AD4(&MasterFormationComponent___c_TypeInfo);
    byte_4D2B69C = 1;
  }
  usrGameEnt = v4->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_16;
  masterFigure = (UnityEngine_Object_o *)v4->fields.masterFigure;
  v4->fields.genderType = usrGameEnt->fields.genderType;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(masterFigure, 0, 0) )
  {
    Prefab_41389760 = MasterFigureManagerOld__CreatePrefab_41389760(
                        v4->fields.mstImgBase,
                        1,
                        v4->fields.genderType,
                        equipId,
                        10,
                        0,
                        0,
                        (System_Nullable_Vector3__o)0,
                        0,
                        0);
    v4->fields.masterFigure = Prefab_41389760;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v4->fields.masterFigure,
      (int32_t)Prefab_41389760,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    return;
  }
  v14 = v4->fields.masterFigure;
  genderType = v4->fields.genderType;
  this = (MasterFormationComponent_o *)MasterFormationComponent___c_TypeInfo;
  if ( !MasterFormationComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterFormationComponent___c_TypeInfo);
    this = (MasterFormationComponent_o *)MasterFormationComponent___c_TypeInfo;
  }
  monitor = (System_Action_o *)this->fields.equipIconPrefab->monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this->fields.masterFigure) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (MasterFormationComponent_o *)MasterFormationComponent___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.equipIconPrefab->klass;
    monitor = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(monitor, klass, Method_MasterFormationComponent___c__setMstImg_b__65_0__, 0);
    static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
    static_fields->__9__65_0 = monitor;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__65_0,
      (int32_t)monitor,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !v14 )
LABEL_16:
    sub_1C93D2C(this, *(_QWORD *)&equipId);
  UIMasterFigureTextureOld__SetCharacter(v14, 1, genderType, equipId, monitor, 0, 0, 0);
}


void MasterFormationComponent__setPosCurrentEq(MasterFormationComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mstEqInfoList; // x0
  int size; // w21
  int32_t v5; // w20
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct System_Object_array *items; // x8

  if ( (byte_4D2B6A3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Item__);
    byte_4D2B6A3 = 1;
  }
  if ( this->fields.usrEquipId >= 1 )
  {
    mstEqInfoList = (System_Collections_Generic_List_object__o *)this->fields.mstEqInfoList;
    if ( mstEqInfoList )
    {
      size = mstEqInfoList->fields._size;
      if ( size >= 1 )
      {
        v5 = 0;
        while ( 1 )
        {
          mstEqInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         mstEqInfoList,
                                                                         v5,
                                                                         (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Item__);
          if ( !mstEqInfoList || (items = mstEqInfoList[4].fields._items) == 0 )
LABEL_12:
            sub_1C93D2C(mstEqInfoList, v6);
          if ( items->bounds == (Il2CppArrayBounds *)this->fields.usrEquipId )
            break;
          if ( size == ++v5 )
            return;
          mstEqInfoList = (System_Collections_Generic_List_object__o *)this->fields.mstEqInfoList;
          if ( !mstEqInfoList )
            goto LABEL_12;
        }
        MasterFormationComponent__setDispRePosition(this, mstEqInfoList[4].fields._version, v7);
      }
    }
  }
}


void MasterFormationComponent__setUsrEquipData(MasterFormationComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v4; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  System_Collections_Generic_IEnumerable_T__o *List; // x22
  System_Collections_Generic_List_object__o *v7; // x21
  struct System_Collections_Generic_List_UserEquipEntity__o **p_currentList; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_List_object__o *v15; // x21
  int32_t v16; // w22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_List_object__o *v23; // x8
  struct System_Object_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  Il2CppClass *v27; // x1
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_object__o *v29; // x20
  System_Comparison_T__o *v30; // x21
  Il2CppObject *v31; // x22
  struct MasterFormationComponent___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1

  if ( (byte_4D2B69E & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_UserEquipEntity__TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserEquipEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserEquipEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserEquipEntity___ctor___79024600);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_UserEquipEntity__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__);
    sub_1C93AD4(&MasterFormationComponent___c_TypeInfo);
    byte_4D2B69E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserEquipMaster___);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_27;
  if ( !Instance )
    goto LABEL_27;
  List = (System_Collections_Generic_IEnumerable_T__o *)UserEquipMaster__getList(
                                                          (UserEquipMaster_o *)Instance,
                                                          usrGameEnt->fields.userId,
                                                          0);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserEquipEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
  p_currentList = &this->fields.currentList;
  this->fields.currentList = (struct System_Collections_Generic_List_UserEquipEntity__o *)v7;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.currentList, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  if ( !List )
    goto LABEL_27;
  if ( List[1].monitor )
  {
    v15 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UserEquipEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_59216528(
      v15,
      List,
      (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_UserEquipEntity___ctor___79024600);
    if ( this->fields.usrEquipId >= 1 )
    {
      if ( !v15 )
        goto LABEL_27;
      if ( v15->fields._size >= 1 )
      {
        v16 = 0;
        while ( 1 )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       v15,
                       v16,
                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
          v23 = (System_Collections_Generic_List_object__o *)*p_currentList;
          if ( !*p_currentList )
            break;
          items = v23->fields._items;
          v25 = Method_System_Collections_Generic_List_UserEquipEntity__Add__;
          ++v23->fields._version;
          if ( !items )
            break;
          size = v23->fields._size;
          v27 = (Il2CppClass *)Instance;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              (Il2CppObject *)Instance,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v28[4] = v27;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)v27, v17, v18, v19, v20, v21, v22);
          }
          if ( ++v16 >= v15->fields._size )
            goto LABEL_18;
        }
LABEL_27:
        sub_1C93D2C(Instance, v4);
      }
LABEL_18:
      v29 = (System_Collections_Generic_List_object__o *)*p_currentList;
      Instance = MasterFormationComponent___c_TypeInfo;
      if ( !MasterFormationComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterFormationComponent___c_TypeInfo);
        Instance = MasterFormationComponent___c_TypeInfo;
      }
      v30 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
      if ( !v30 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = MasterFormationComponent___c_TypeInfo;
        }
        v31 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v30 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_UserEquipEntity__TypeInfo);
        System_Comparison_object____ctor(v30, v31, Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__, 0);
        static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
        static_fields->__9__67_0 = (struct System_Comparison_UserEquipEntity__o *)v30;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__67_0,
          (int32_t)v30,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      if ( !v29 )
        goto LABEL_27;
      System_Collections_Generic_List_object___Sort_59225184(
        v29,
        v30,
        (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_UserEquipEntity__Sort__);
    }
  }
  MasterFormationComponent__setMstEquipList(this, v4);
  MasterFormationComponent__setMstEquipIconList(this, v39);
  MasterFormationComponent__setPosCurrentEq(this, v40);
}


void MasterFormationComponent_NotificationDragState___ctor(
        MasterFormationComponent_NotificationDragState_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC0CD4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC0C8C;
}


System_IAsyncResult_o *MasterFormationComponent_NotificationDragState__BeginInvoke(
        MasterFormationComponent_NotificationDragState_o *this,
        bool flg,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = flg;
  if ( (byte_4D2B6B5 & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2B6B5 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


void MasterFormationComponent_NotificationDragState__EndInvoke(
        MasterFormationComponent_NotificationDragState_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void MasterFormationComponent_NotificationDragState__Invoke(
        MasterFormationComponent_NotificationDragState_o *this,
        bool flg,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    flg,
    this->fields.method);
}


void MasterFormationComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2B6B6 & 1) == 0 )
  {
    sub_1C93AD4(&MasterFormationComponent___c_TypeInfo);
    byte_4D2B6B6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(MasterFormationComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MasterFormationComponent___c_TypeInfo->static_fields->__9 = (struct MasterFormationComponent___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)MasterFormationComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MasterFormationComponent___c___ctor(MasterFormationComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MasterFormationComponent___c___setMstImg_b__65_0(MasterFormationComponent___c_o *this, const MethodInfo *method)
{
  ;
}


int32_t MasterFormationComponent___c___setUsrEquipData_b__67_0(
        MasterFormationComponent___c_o *this,
        UserEquipEntity_o *a,
        UserEquipEntity_o *b,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4D2B6B7 & 1) == 0 )
  {
    this = (MasterFormationComponent___c_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2B6B7 = 1;
  }
  if ( !a )
    goto LABEL_8;
  v7 = *(_QWORD *)&a->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&a->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (MasterFormationComponent___c_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v9, 0);
  if ( !b )
LABEL_8:
    sub_1C93D2C(this, a);
  return (_DWORD)this - CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(b->fields.equipId, 0);
}