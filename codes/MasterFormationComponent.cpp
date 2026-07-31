void MasterFormationComponent___cctor(const MethodInfo *method)
{
  struct MasterFormationComponent_StaticFields *static_fields; // x8

  if ( (byte_59332CD & 1) == 0 )
  {
    sub_21FFC50(&MasterFormationComponent_TypeInfo);
    byte_59332CD = 1;
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

  if ( (byte_59332CC & 1) == 0 )
  {
    sub_21FFC50(&Method_MasterFormationComponent_CloseCmdSpell__);
    byte_59332CC = 1;
  }
  cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    goto LABEL_10;
  if ( BattleWindowComponent__isOpen(cmdSpellWinComp, 0) )
  {
    v4 = Method_MasterFormationComponent_CloseCmdSpell__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_CloseCmdSpell__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_21FFC68(Method_MasterFormationComponent_CloseCmdSpell__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
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
    sub_21FFECC(cmdSpellWinComp, method);
  }
}


void MasterFormationComponent__OnCenterOnChildFinished(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  struct UICenterOnChild_o *centerChild; // x8
  MasterEquipInfoComponent_o *v5; // x20
  const MethodInfo *v6; // x2
  struct UserEquipEntity_o *usrEquipEnt; // x8
  bool isChange; // w9
  int32_t moveEqIdx; // w10

  if ( (byte_59332C1 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
    sub_21FFC50(&StringLiteral_3457/*"CHANGE_INFO"*/);
    byte_59332C1 = 1;
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
                                                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___)) == 0
    || (v5 = (MasterEquipInfoComponent_o *)leftArrowBtn,
        leftArrowBtn = (UnityEngine_Behaviour_o *)MasterEquipInfoComponent__getEquipId(
                                                    (MasterEquipInfoComponent_o *)leftArrowBtn,
                                                    method),
        usrEquipEnt = v5->fields.usrEquipEnt,
        this->fields.currentEquipId = (int)leftArrowBtn,
        !usrEquipEnt) )
  {
LABEL_15:
    sub_21FFECC(leftArrowBtn, method);
  }
  isChange = v5->fields.isChange;
  moveEqIdx = v5->fields.moveEqIdx;
  this->fields.currentUsrEquipId = usrEquipEnt->fields.id;
  this->fields.isChange = isChange;
  this->fields.currentMoveIdx = moveEqIdx;
  MasterEquipInfoComponent__setDispEffectObj(v5, 1, v6);
  if ( this->fields.isChangeMasterImg )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.fsm;
    if ( leftArrowBtn )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)leftArrowBtn, (System_String_o *)StringLiteral_3457/*"CHANGE_INFO"*/, 0);
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

  if ( (byte_59332CB & 1) == 0 )
  {
    sub_21FFC50(&Method_MasterFormationComponent_OnClickCmdSpell__);
    byte_59332CB = 1;
  }
  v3 = Method_MasterFormationComponent_OnClickCmdSpell__;
  if ( (*((_BYTE *)Method_MasterFormationComponent_OnClickCmdSpell__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_MasterFormationComponent_OnClickCmdSpell__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    sub_21FFECC(0, v5);
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
  __int64 v16; // x2
  struct UserEquipEntity_o *userEquipEntity; // x8
  __int64 v18; // x21
  __int64 v19; // x22
  struct UICenterOnChild_o *v20; // x8
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_59332BA & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
    sub_21FFC50(&Method_MasterFormationComponent_OnClickIcon__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59332BA = 1;
  }
  if ( this->fields.currentEquipId != equipId && !this->fields.isDragStart && !this->fields.isIconDragStart )
  {
    v9 = Method_MasterFormationComponent_OnClickIcon__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_OnClickIcon__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_21FFC68(Method_MasterFormationComponent_OnClickIcon__);
    v10 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
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
              UICenterOnChild__CenterOn_56009592(centerChild, (UnityEngine_Transform_o *)iconCenterChild, 1, 0, 0);
              userEquipEntity = this->fields.userEquipEntity;
              if ( userEquipEntity )
              {
                v18 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
                v19 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
                if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v16);
                *(_QWORD *)&v24.fields.currentCryptoKey = v18;
                *(_QWORD *)&v24.fields.fakeValue = v19;
                iconCenterChild = (UnityEngine_Behaviour_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                               v24,
                                                               0);
                if ( (_DWORD)iconCenterChild != equipId )
                  goto LABEL_22;
                v20 = this->fields.centerChild;
                if ( v20 )
                {
                  iconCenterChild = (UnityEngine_Behaviour_o *)v20->fields.mCenteredObject;
                  if ( iconCenterChild )
                  {
                    iconCenterChild = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   (UnityEngine_GameObject_o *)iconCenterChild,
                                                                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
                    if ( iconCenterChild )
                    {
                      MasterEquipInfoComponent__setDispEffectObj((MasterEquipInfoComponent_o *)iconCenterChild, 1, v21);
LABEL_22:
                      MasterFormationComponent__UpdateIconSelected(this, v11);
                      MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v22);
                      MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v23);
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
    sub_21FFECC(iconCenterChild, v11);
  }
}


void MasterFormationComponent__OnDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  struct MasterFormationComponent_NotificationDragState_o *notificationDragState; // x8

  if ( (byte_59332BE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11739/*"RefreshCurrentInfo"*/);
    byte_59332BE = 1;
  }
  v3 = (System_String_o *)StringLiteral_11739/*"RefreshCurrentInfo"*/;
  *(_WORD *)&this->fields.isChangeMasterImg = 1;
  this->fields.isDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_83229692((UnityEngine_MonoBehaviour_o *)this, v3, 0);
  MasterFormationComponent__setDisEquipEffect(this, v4);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 0, v5);
  iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
  if ( !iconCenterChild
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 0, 0),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn) == 0)
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 0, 0),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn) == 0)
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 0, 0),
        (notificationDragState = this->fields.notificationDragState) == 0) )
  {
    sub_21FFECC(iconCenterChild, v6);
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
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59332C2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__);
    sub_21FFC50(&StringLiteral_11739/*"RefreshCurrentInfo"*/);
    byte_59332C2 = 1;
  }
  leftArrowBtn = this->fields.leftArrowBtn;
  memset(&v11, 0, sizeof(v11));
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
                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
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
  UnityEngine_MonoBehaviour__CancelInvoke_83229692(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11739/*"RefreshCurrentInfo"*/,
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
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v11.fields._current )
      sub_21FFECC(0, v9);
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v11.fields._current, 1, v10);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  leftArrowBtn = this->fields.iconCenterChild;
  if ( !leftArrowBtn )
LABEL_20:
    sub_21FFECC(leftArrowBtn, method);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)leftArrowBtn, 0, 0);
}


void MasterFormationComponent__OnIconDragFinished(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_59332C0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    byte_59332C0 = 1;
  }
  iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
  memset(&v6, 0, sizeof(v6));
  if ( !iconCenterChild
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 1, 0),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0) )
  {
    sub_21FFECC(iconCenterChild, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_object__o *)iconCenterChild,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_21FFECC(0, v4);
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v6.fields._current, 0, v5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
}


void MasterFormationComponent__OnIconDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x1
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  struct MasterFormationComponent_NotificationDragState_o *notificationDragState; // x8

  if ( (byte_59332BF & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11739/*"RefreshCurrentInfo"*/);
    byte_59332BF = 1;
  }
  v3 = (System_String_o *)StringLiteral_11739/*"RefreshCurrentInfo"*/;
  *(_WORD *)&this->fields.isChangeMasterImg = 257;
  this->fields.isIconDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_83229692((UnityEngine_MonoBehaviour_o *)this, v3, 0);
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 0, v4);
  leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
  if ( !leftArrowBtn
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0),
        (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn) == 0)
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0),
        (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild) == 0)
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0),
        (notificationDragState = this->fields.notificationDragState) == 0) )
  {
    sub_21FFECC(leftArrowBtn, v5);
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

  if ( (byte_59332C3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11739/*"RefreshCurrentInfo"*/);
    byte_59332C3 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_83229692(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11739/*"RefreshCurrentInfo"*/,
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
      UICenterOnChild__CenterOn_56009592(centerChild, (UnityEngine_Transform_o *)loopCtr, 1, 0, 0);
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
    sub_21FFECC(loopCtr, v4);
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
  UICenterOnChild__CenterOn_56009592(iconCenterChild, (UnityEngine_Transform_o *)loopCtr, 1, 0, 0);
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

  if ( this->fields.isScrollEquipDetail || !enabled )
  {
    mScroll = (UnityEngine_Behaviour_o *)this->fields.mScroll;
    if ( !mScroll
      || (UnityEngine_Behaviour__set_enabled(mScroll, enabled, 0),
          (mScroll = (UnityEngine_Behaviour_o *)this->fields.loopCtr) == 0)
      || (UnityEngine_Behaviour__set_enabled(mScroll, enabled, 0),
          (mScroll = (UnityEngine_Behaviour_o *)this->fields.centerChild) == 0) )
    {
      sub_21FFECC(mScroll, enabled);
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

  if ( this->fields.isScrollEquipIcon || !enabled )
  {
    iconScroll = (UnityEngine_Behaviour_o *)this->fields.iconScroll;
    if ( !iconScroll
      || (UnityEngine_Behaviour__set_enabled(iconScroll, enabled, 0),
          (iconScroll = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr) == 0) )
    {
      sub_21FFECC(iconScroll, enabled);
    }
    UnityEngine_Behaviour__set_enabled(iconScroll, enabled, 0);
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
    sub_21FFECC(mScroll, v4);
  }
}


void MasterFormationComponent__UpdateGuideLabel(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *iconScroll; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  float alphaAnimNow; // s8
  float alphaAnimTgt; // s9
  MasterFormationComponent_c *v8; // x0
  float realtimeSinceStartup; // s0
  bool enabled; // w8
  bool v11; // w1

  if ( (byte_59332B1 & 1) == 0 )
  {
    sub_21FFC50(&MasterFormationComponent_TypeInfo);
    byte_59332B1 = 1;
  }
  iconScroll = (UnityEngine_Behaviour_o *)this->fields.iconScroll;
  if ( !iconScroll )
    goto LABEL_24;
  if ( UnityEngine_Behaviour__get_enabled(iconScroll, 0) )
  {
    alphaAnimNow = this->fields.alphaAnimNow;
    alphaAnimTgt = this->fields.alphaAnimTgt;
    v8 = MasterFormationComponent_TypeInfo;
    if ( !*(&MasterFormationComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo, v4, v5);
      v8 = MasterFormationComponent_TypeInfo;
    }
    this->fields.alphaAnimNow = alphaAnimNow
                              + (float)((float)(alphaAnimTgt - alphaAnimNow) * v8->static_fields->ALPHA_ANIMATION_SPD);
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
        goto LABEL_24;
      enabled = UnityEngine_Behaviour__get_enabled(iconScroll, 0);
      iconScroll = (UnityEngine_Behaviour_o *)this->fields.touchGuideLabel;
      if ( enabled )
      {
        if ( !iconScroll )
          goto LABEL_24;
        UnityEngine_Behaviour__set_enabled(iconScroll, 0, 0);
        iconScroll = (UnityEngine_Behaviour_o *)this->fields.scrollGuideLabel;
        if ( !iconScroll )
          goto LABEL_24;
        v11 = 1;
      }
      else
      {
        if ( !iconScroll )
          goto LABEL_24;
        UnityEngine_Behaviour__set_enabled(iconScroll, 1, 0);
        iconScroll = (UnityEngine_Behaviour_o *)this->fields.scrollGuideLabel;
        if ( !iconScroll )
          goto LABEL_24;
        v11 = 0;
      }
      UnityEngine_Behaviour__set_enabled(iconScroll, v11, 0);
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
LABEL_24:
    sub_21FFECC(iconScroll, method);
  }
}


void MasterFormationComponent__UpdateIconSelected(MasterFormationComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MasterEquipIconComponent__o *mstEqIconList; // x8
  int size; // w21
  int32_t i; // w20
  System_Collections_Generic_List_object__o *Item; // x0
  const MethodInfo *v7; // x2

  if ( (byte_59332BB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Item__);
    byte_59332BB = 1;
  }
  mstEqIconList = this->fields.mstEqIconList;
  if ( mstEqIconList )
  {
    size = mstEqIconList->fields._size;
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.mstEqIconList;
        if ( !Item
          || (Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    Item,
                                                                    i,
                                                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Item__)) == 0 )
        {
          sub_21FFECC(Item, method);
        }
        MasterEquipIconComponent__UpdateSelected((MasterEquipIconComponent_o *)Item, this->fields.currentEquipId, v7);
      }
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
    sub_21FFECC(cmdSpellIconComp, method);
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
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  MasterFormationComponent_o *v11; // x0
  MasterFormationComponent_NotificationDragState_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_59332AF & 1) == 0 )
  {
    sub_21FFC50(&MasterFormationComponent_NotificationDragState_TypeInfo);
    byte_59332AF = 1;
  }
  notificationDragState = (System_Delegate_o *)this->fields.notificationDragState;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(notificationDragState, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (MasterFormationComponent_NotificationDragState_c *)v6->klass != MasterFormationComponent_NotificationDragState_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.notificationDragState, v6, notificationDragState);
    v10 = v9 == (_QWORD)notificationDragState;
    notificationDragState = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterFormationComponent_o *)sub_220024C(v6, MasterFormationComponent_NotificationDragState_TypeInfo, v7, v8);
  MasterFormationComponent__remove_notificationDragState(v11, v12, v13);
}


void MasterFormationComponent__changeCmdSpellImg(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x22
  const MethodInfo *v4; // x3
  __int64 SpellImageId; // x0
  __int64 v6; // x1
  int32_t v7; // w20
  CommandSpellIconComponent_o *cmdSpellIconComp; // x21
  int32_t CommandSpell; // w22
  System_Action_o *v10; // x23

  if ( (byte_59332B6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__);
    byte_59332B6 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  SpellImageId = MasterFormationComponent__getSpellImageId(
                   (MasterFormationComponent_o *)SelfUserGame,
                   this->fields.genderType,
                   this->fields.currentEquipId,
                   v4);
  if ( !SelfUserGame
    || (v7 = SpellImageId,
        cmdSpellIconComp = this->fields.cmdSpellIconComp,
        CommandSpell = UserGameEntity__getCommandSpell(SelfUserGame, 0),
        v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__, 0),
        !cmdSpellIconComp) )
  {
    sub_21FFECC(SpellImageId, v6);
  }
  CommandSpellIconComponent__SetChangeCurrentCmdSepll(cmdSpellIconComp, v7, CommandSpell, v10, 0);
}


void MasterFormationComponent__closeMasterFormation(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *loopCtr; // x0
  int32_t childCount; // w0
  int v6; // w22
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *gameObject; // x20
  int32_t v10; // w0
  int v11; // w22
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2

  if ( (byte_59332C9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UserEquipNewManager_TypeInfo);
    byte_59332C9 = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      UnityEngine_Object__DestroyImmediate_83246828(gameObject, 0);
      if ( (unsigned int)--v6 <= 1 )
        goto LABEL_13;
    }
LABEL_30:
    sub_21FFECC(loopCtr, v3);
  }
LABEL_13:
  loopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
  if ( !loopCtr )
    goto LABEL_30;
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0);
  if ( !loopCtr )
    goto LABEL_30;
  v10 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)loopCtr, 0);
  if ( v10 >= 1 )
  {
    v11 = v10 + 1;
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
                                             v11 - 2,
                                             0);
      if ( !loopCtr )
        goto LABEL_30;
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(loopCtr, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
      UnityEngine_Object__DestroyImmediate_83246828(v14, 0);
    }
    while ( (unsigned int)--v11 > 1 );
  }
  loopCtr = (UnityEngine_Component_o *)this->fields.userEquipEntity;
  if ( !loopCtr )
    goto LABEL_30;
  UserEquipEntity__SetOld((UserEquipEntity_o *)loopCtr, 0);
  if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v15, v16);
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
  __int64 v2; // x2
  UnityEngine_Component_o **p_masterFigure; // x19
  UnityEngine_Object_o *v5; // x20
  struct UIMasterFigureTextureOld_o *masterFigure; // t1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59332CA & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59332CA = 1;
  }
  masterFigure = this->fields.masterFigure;
  p_masterFigure = (UnityEngine_Component_o **)&this->fields.masterFigure;
  v5 = (UnityEngine_Object_o *)masterFigure;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    if ( !*p_masterFigure )
      sub_21FFECC(0, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_masterFigure, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
    *p_masterFigure = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_masterFigure, 0, v11, v12, v13, v14, v15, v16);
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
  __int64 v8; // x2
  Il2CppClass *klass; // x19
  void *monitor; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v4 = equipId;
  if ( (byte_59332C8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_21FFC50(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59332C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !Instance )
    goto LABEL_13;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v4,
               (const MethodInfo_3EDD388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( genderType == 2 )
  {
    if ( Instance )
    {
      klass = Instance[8].klass;
      monitor = Instance[8].monitor;
      goto LABEL_10;
    }
LABEL_13:
    sub_21FFECC(Instance, v7);
  }
  if ( !Instance )
    goto LABEL_13;
  klass = Instance[7].klass;
  monitor = Instance[7].monitor;
LABEL_10:
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
  *(_QWORD *)&v12.fields.currentCryptoKey = klass;
  *(_QWORD *)&v12.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v12, 0);
}


bool MasterFormationComponent__isChangeEquip(MasterFormationComponent_o *this, const MethodInfo *method)
{
  return this->fields.isChange;
}


void MasterFormationComponent__onClickLeftArrow(MasterFormationComponent_o *this, const MethodInfo *method)
{
  _BOOL4 isDragStart; // w8
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int v7; // w9
  int32_t v8; // w20
  UICenterOnChild_o *iconCenterChild; // x21
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_59332C6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    sub_21FFC50(&Method_MasterFormationComponent_onClickLeftArrow__);
    sub_21FFC50(&StringLiteral_11739/*"RefreshCurrentInfo"*/);
    byte_59332C6 = 1;
  }
  isDragStart = this->fields.isDragStart;
  memset(&v12, 0, sizeof(v12));
  if ( !isDragStart && !this->fields.isIconDragStart )
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
    UnityEngine_MonoBehaviour__CancelInvoke_83229692(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11739/*"RefreshCurrentInfo"*/,
      0);
    v5 = Method_MasterFormationComponent_onClickLeftArrow__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_onClickLeftArrow__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_MasterFormationComponent_onClickLeftArrow__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0, 0);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr;
    if ( !leftArrowBtn )
      goto LABEL_26;
    leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)leftArrowBtn,
                                                0);
    if ( !leftArrowBtn )
      goto LABEL_26;
    v7 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)leftArrowBtn, 0) - 1;
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
    v8 = this->fields.currentMoveIconIdx - 1 >= 0 ? this->fields.currentMoveIconIdx - 1 : v7;
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
      || (UICenterOnChild__CenterOn_56009592(iconCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0, 0),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0) )
    {
LABEL_26:
      sub_21FFECC(leftArrowBtn, method);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)leftArrowBtn,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v12.fields._current )
        sub_21FFECC(0, v10);
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v12.fields._current, 0, v11);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  }
}


void MasterFormationComponent__onClickRightArrow(MasterFormationComponent_o *this, const MethodInfo *method)
{
  _BOOL4 isDragStart; // w8
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  int32_t childCount; // w0
  int32_t currentMoveIconIdx; // w8
  bool v9; // cc
  int32_t v10; // w20
  UICenterOnChild_o *iconCenterChild; // x21
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_59332C5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    sub_21FFC50(&Method_MasterFormationComponent_onClickRightArrow__);
    sub_21FFC50(&StringLiteral_11739/*"RefreshCurrentInfo"*/);
    byte_59332C5 = 1;
  }
  isDragStart = this->fields.isDragStart;
  memset(&v14, 0, sizeof(v14));
  if ( !isDragStart && !this->fields.isIconDragStart )
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
    UnityEngine_MonoBehaviour__CancelInvoke_83229692(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11739/*"RefreshCurrentInfo"*/,
      0);
    v5 = Method_MasterFormationComponent_onClickRightArrow__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_onClickRightArrow__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_MasterFormationComponent_onClickRightArrow__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0, 0);
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
    v9 = currentMoveIconIdx + 1 < childCount;
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
    v10 = v9 ? currentMoveIconIdx + 1 : 0;
    this->fields.currentMoveIconIdx = v10;
    if ( !leftArrowBtn
      || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 1, 0),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr) == 0)
      || (iconCenterChild = this->fields.iconCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0)) == 0)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v10,
                                                      0),
          !iconCenterChild)
      || (UICenterOnChild__CenterOn_56009592(iconCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0, 0),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0) )
    {
LABEL_26:
      sub_21FFECC(leftArrowBtn, method);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)leftArrowBtn,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v14.fields._current )
        sub_21FFECC(0, v12);
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v14.fields._current, 0, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  }
}


void MasterFormationComponent__remove_notificationDragState(
        MasterFormationComponent_o *this,
        MasterFormationComponent_NotificationDragState_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *notificationDragState; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  MasterFormationComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_59332B0 & 1) == 0 )
  {
    sub_21FFC50(&MasterFormationComponent_NotificationDragState_TypeInfo);
    byte_59332B0 = 1;
  }
  notificationDragState = (System_Delegate_o *)this->fields.notificationDragState;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(notificationDragState, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (MasterFormationComponent_NotificationDragState_c *)v6->klass != MasterFormationComponent_NotificationDragState_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.notificationDragState, v6, notificationDragState);
    v10 = v9 == (_QWORD)notificationDragState;
    notificationDragState = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterFormationComponent_o *)sub_220024C(v6, MasterFormationComponent_NotificationDragState_TypeInfo, v7, v8);
  MasterFormationComponent__Update(v11, v12);
}


void MasterFormationComponent__setChangeMasterInfo(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_59332C7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5647/*"END_SET"*/);
    sub_21FFC50(&StringLiteral_11739/*"RefreshCurrentInfo"*/);
    byte_59332C7 = 1;
  }
  MasterFormationComponent__setMstImg(this, this->fields.currentEquipId, v2);
  if ( this->fields.isDragStart || this->fields.isIconDragStart )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11739/*"RefreshCurrentInfo"*/,
      0.1,
      0);
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_21FFECC(0, v4);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5647/*"END_SET"*/, 0);
}


void MasterFormationComponent__setCmdSpellImg(MasterFormationComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  BattleWindowComponent_o *cmdSpellWinComp; // x20
  struct CommandSpellWindowComponent_o *v7; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UnityEngine_Vector2_o v15; // 0:s0.4,4:s1.4

  if ( (byte_59332B3 & 1) == 0 )
  {
    sub_21FFC50(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
    sub_21FFC50(&Method_MasterFormationComponent_CloseCmdSpell__);
    sub_21FFC50(&MasterFormationComponent_TypeInfo);
    byte_59332B3 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !this->fields.cmdSpellIconComp )
    goto LABEL_11;
  CommandSpellIconComponent__SetData(this->fields.cmdSpellIconComp, SelfUserGame, 0);
  SelfUserGame = (UserGameEntity_o *)this->fields.cmdSpellIconComp;
  if ( !SelfUserGame )
    goto LABEL_11;
  v15.fields.x = 130.0;
  v15.fields.y = 130.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)SelfUserGame, v15, 0);
  SelfUserGame = (UserGameEntity_o *)this->fields.cmdSpellWinComp;
  if ( !SelfUserGame )
    goto LABEL_11;
  CommandSpellWindowComponent__InitializeCommandSpell((CommandSpellWindowComponent_o *)SelfUserGame, 0, 0, -1, 0);
  SelfUserGame = (UserGameEntity_o *)MasterFormationComponent_TypeInfo;
  cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
  if ( !*(&MasterFormationComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo, v4, v5);
  if ( !cmdSpellWinComp
    || (BattleWindowComponent__setInitData(
          cmdSpellWinComp,
          2,
          MasterFormationComponent_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME,
          0,
          0),
        (v7 = this->fields.cmdSpellWinComp) == 0) )
  {
LABEL_11:
    sub_21FFECC(SelfUserGame, v4);
  }
  v7->fields.mode = 0;
  v8 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_21FFEBC(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
  CommandSpellWindowComponent_CloseButtonCallBack___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_MasterFormationComponent_CloseCmdSpell__,
    0);
  v7->fields.callback_close = v8;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v7->fields.callback_close, (int32_t)v8, v9, v10, v11, v12, v13, v14);
}


void MasterFormationComponent__setCmdSpellRecoverTime(
        MasterFormationComponent_o *this,
        int64_t recoverTime,
        const MethodInfo *method)
{
  UILabel_o *recoverTitleLb; // x21
  System_String_o *cmdSpellRecTimeInfo; // x0
  unsigned __int64 v7; // x24
  int v8; // w23
  int v9; // w22
  UILabel_o *recoverTimeLb; // x19
  System_String_o *v11; // x20
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  int v15; // [xsp+4h] [xbp-4Ch] BYREF
  int v16; // [xsp+8h] [xbp-48h] BYREF
  int v17; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_59332B4 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3816/*"COMMAND_SPELL_RECOVER_TIME"*/);
    sub_21FFC50(&StringLiteral_3819/*"COMMNAD_SPELL_RECV_TXT"*/);
    byte_59332B4 = 1;
  }
  if ( recoverTime > 0 )
  {
    recoverTitleLb = this->fields.recoverTitleLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, recoverTime, method);
    cmdSpellRecTimeInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3819/*"COMMNAD_SPELL_RECV_TXT"*/, 0);
    if ( recoverTitleLb )
    {
      v7 = recoverTime / 0xE10uLL;
      v8 = recoverTime % 0x3CuLL;
      v9 = (int)(recoverTime / 0x3CuLL) % 60;
      UILabel__set_text(recoverTitleLb, cmdSpellRecTimeInfo, 0);
      recoverTimeLb = this->fields.recoverTimeLb;
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3816/*"COMMAND_SPELL_RECOVER_TIME"*/, 0);
      v17 = v7;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v17);
      v16 = v9;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v16);
      v15 = v8;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v15);
      cmdSpellRecTimeInfo = System_String__Format_75484644(v11, v12, v13, v14, 0);
      if ( recoverTimeLb )
      {
        UILabel__set_text(recoverTimeLb, cmdSpellRecTimeInfo, 0);
        return;
      }
    }
LABEL_11:
    sub_21FFECC(cmdSpellRecTimeInfo, recoverTime);
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

  usrGameEnt = this->fields.usrGameEnt;
  count = 0;
  recoverTime = 0;
  if ( !usrGameEnt )
    sub_21FFECC(0, method);
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
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_59332C4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__);
    byte_59332C4 = 1;
  }
  mstEqInfoList = (System_Collections_Generic_List_object__o *)this->fields.mstEqInfoList;
  memset(&v6, 0, sizeof(v6));
  if ( !mstEqInfoList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    mstEqInfoList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v6,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__) )
  {
    if ( !v6.fields._current )
      sub_21FFECC(0, v4);
    MasterEquipInfoComponent__setDispEffectObj((MasterEquipInfoComponent_o *)v6.fields._current, 0, v5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v6,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void MasterFormationComponent__setDispRePosition(
        MasterFormationComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  UIWrapContent_o *loopCtr; // x0
  __int64 v6; // x2
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x9
  int v8; // w8
  int32_t v9; // w1
  UICenterOnChild_o *iconCenterChild; // x21

  if ( (byte_59332BD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__);
    sub_21FFC50(&MasterFormationComponent_TypeInfo);
    byte_59332BD = 1;
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
      if ( !*(&MasterFormationComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo, *(_QWORD *)&idx, v6);
        loopCtr = (UIWrapContent_o *)MasterFormationComponent_TypeInfo;
      }
      currentList = this->fields.currentList;
      v8 = idx - *(_DWORD *)(*(_QWORD *)&loopCtr[1].fields.mHorizontal + 4LL) / 2;
      if ( v8 < 0 )
      {
        if ( !currentList )
          goto LABEL_23;
        v8 += currentList->fields._size;
      }
      else if ( !currentList )
      {
        goto LABEL_23;
      }
      loopCtr = this->fields.iconLoopCtr;
      if ( !loopCtr )
        goto LABEL_23;
      v9 = currentList->fields._size + v8;
    }
    else
    {
      loopCtr = this->fields.iconLoopCtr;
      if ( !loopCtr )
        goto LABEL_23;
      v9 = idx;
    }
    UIWrapContent__setScrollPos(loopCtr, v9, 0);
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
            UICenterOnChild__CenterOn_56009592(iconCenterChild, (UnityEngine_Transform_o *)loopCtr, 1, 0, 0);
            goto LABEL_22;
          }
        }
      }
    }
LABEL_23:
    sub_21FFECC(loopCtr, *(_QWORD *)&idx);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x2
  long double v25; // q0
  bool v26; // w8
  int64_t ActiveUserEquipId; // x0
  int32_t lv; // w9
  __int64 v29; // x0
  __int64 v30; // x0
  Il2CppObject *Entity; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x2
  struct UserEquipEntity_o *userEquipEntity; // x8
  __int64 v40; // x21
  __int64 v41; // x22
  const MethodInfo *v42; // x1
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_59332B2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_59332B2 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrGameEnt = SelfUserGame;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.usrGameEnt,
    (int32_t)SelfUserGame,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.arrowInfo;
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.mScroll;
  if ( !gameObject )
    goto LABEL_24;
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.iconScroll;
  if ( !gameObject )
    goto LABEL_24;
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0);
  this->fields.usrGameEnt = userData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.usrGameEnt,
    (int32_t)userData,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( userEquipId <= 0 )
  {
    if ( !userData )
      goto LABEL_24;
    ActiveUserEquipId = UserGameEntity__getActiveUserEquipId(userData, 0);
    this->fields.usrEquipId = ActiveUserEquipId;
    v26 = ActiveUserEquipId < 1;
  }
  else
  {
    this->fields.usrEquipId = userEquipId;
    if ( !userData )
      goto LABEL_24;
    v26 = 0;
  }
  lv = userData->fields.lv;
  v17 = 0;
  this->fields.currentEquipId = 0;
  *(_QWORD *)&this->fields.currentMoveIdx = 0;
  this->fields.usrLv = lv;
  this->fields.currentUsrEquipId = userEquipId;
  if ( v26 )
    goto LABEL_23;
  v29 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v29 + 309) & 1) == 0 )
    v29 = sub_2237AF8(v25);
  v30 = *(_QWORD *)(*(_QWORD *)(v29 + 192) + 16LL);
  if ( (*(_WORD *)(v30 + 309) & 1) == 0 )
    v30 = sub_2237AF8(v25);
  gameObject = **(UnityEngine_GameObject_o ***)(v30 + 184);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                   this->fields.usrEquipId,
                   (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__),
        this->fields.userEquipEntity = (struct UserEquipEntity_o *)Entity,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.userEquipEntity,
          (int32_t)Entity,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37),
        (userEquipEntity = this->fields.userEquipEntity) == 0) )
  {
LABEL_24:
    sub_21FFECC(gameObject, v17);
  }
  v40 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
  v41 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v38);
  *(_QWORD *)&v49.fields.currentCryptoKey = v40;
  *(_QWORD *)&v49.fields.fakeValue = v41;
  LODWORD(v17) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v49, 0);
  this->fields.currentEquipId = v17;
LABEL_23:
  MasterFormationComponent__setMstImg(this, v17, v24);
  MasterFormationComponent__setUsrEquipData(this, v42);
  this->fields.isChangeMasterImg = 1;
  this->fields.notificationDragState = notificationDragState;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.notificationDragState,
    (int32_t)notificationDragState,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
}


void MasterFormationComponent__setMstEquipIconList(MasterFormationComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  MissionNaviTransitionBoardItem_o *p_iconCenterChild; // x20
  UnityEngine_Object_o *iconCenterChild; // x21
  __int64 iconLoopCtr; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct UIWrapContent_o *v24; // x8
  LocalizationManager_c *v25; // x0
  UILabel_o *touchGuideLabel; // x21
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  int size; // w27
  const MethodInfo *v29; // x2
  float x; // s10
  float y; // s8
  float z; // s9
  struct UIScrollView_o *iconScroll; // x21
  MissionNaviTransitionBoardItem_o *p_onDragStarted; // x21
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v36; // x23
  System_Delegate_o *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_Delegate_o *v44; // x8
  System_Delegate_c *v45; // x1
  struct UIWrapContent_o *v46; // x8
  int v47; // w9
  int v48; // w10
  int32_t itemSize; // w9
  _BOOL4 isScrollEquipIcon; // w8
  int v51; // w9
  struct UIScrollView_o *v52; // x21
  MissionNaviTransitionBoardItem_o *p_onDragFinished; // x21
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v55; // x23
  System_Delegate_o *v56; // x0
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  MissionNaviTransitionBoardItem_c *klass; // x20
  System_Delegate_o *v62; // t1
  SpringPanel_OnFinished_o *v63; // x22
  System_Delegate_o *v64; // x0
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  __int64 v69; // x1
  __int64 v70; // x2
  UILabel_o *scrollGuideLabel; // x20
  System_Collections_Generic_List_object__o *v72; // x20
  int v73; // w9
  int32_t i; // w22
  UnityEngine_GameObject_o *equipIconPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v77; // x23
  UnityEngine_Transform_o *v78; // x24
  UnityEngine_Transform_o *v79; // x24
  System_String_o *v80; // x0
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  struct System_Object_array *items; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  System_Collections_Generic_List_object__o *mstEqIconList; // x8
  struct System_Object_array *v98; // x9
  _QWORD *v99; // x10
  __int64 v100; // x11
  MasterEquipIconComponent_o *v101; // x23
  Il2CppClass **v102; // x0
  Il2CppObject *Item; // x0
  int32_t v104; // w24
  UserEquipEntity_o *v105; // x25
  MasterEquipIconComponent_CallbackFunc_o *v106; // x26
  const MethodInfo *v107; // x3
  int64_t v108; // x2
  int32_t v109; // w3
  const MethodInfo *v110; // x6
  const MethodInfo *v111; // x2
  int32_t v112; // w21
  struct UIWrapContent_o *v113; // x8
  int v114; // [xsp+Ch] [xbp-84h]
  int v115; // [xsp+18h] [xbp-78h]
  int32_t v116; // [xsp+1Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59332B9 & 1) == 0 )
  {
    sub_21FFC50(&MasterEquipIconComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_MasterFormationComponent_OnClickIcon__);
    sub_21FFC50(&Method_MasterFormationComponent_OnIconCenterOnChildFinished__);
    sub_21FFC50(&Method_MasterFormationComponent_OnIconDragFinished__);
    sub_21FFC50(&Method_MasterFormationComponent_OnIconDragStarted__);
    sub_21FFC50(&MasterFormationComponent_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIScrollView_OnDragNotification_TypeInfo);
    sub_21FFC50(&SpringPanel_OnFinished_TypeInfo);
    sub_21FFC50(&StringLiteral_8903/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/);
    sub_21FFC50(&StringLiteral_8902/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/);
    sub_21FFC50(&StringLiteral_5130/*"D3"*/);
    byte_59332B9 = 1;
  }
  v116 = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__);
  this->fields.mstEqIconList = (struct System_Collections_Generic_List_MasterEquipIconComponent__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mstEqIconList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  p_iconCenterChild = (MissionNaviTransitionBoardItem_o *)&this->fields.iconCenterChild;
  iconCenterChild = (UnityEngine_Object_o *)this->fields.iconCenterChild;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  iconLoopCtr = UnityEngine_Object__op_Equality(iconCenterChild, 0, 0);
  if ( (iconLoopCtr & 1) != 0 )
  {
    iconLoopCtr = (__int64)this->fields.iconLoopCtr;
    if ( !iconLoopCtr )
      goto LABEL_87;
    iconLoopCtr = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconLoopCtr, 0);
    if ( !iconLoopCtr )
      goto LABEL_87;
    v17 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)iconLoopCtr,
            (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    p_iconCenterChild->klass = (MissionNaviTransitionBoardItem_c *)v17;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.iconCenterChild,
      (int32_t)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = this->fields.iconLoopCtr;
  if ( !v24 )
    goto LABEL_87;
  v25 = LocalizationManager_TypeInfo;
  touchGuideLabel = this->fields.touchGuideLabel;
  v24->fields.itemSize = 64;
  if ( !*(&v25->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v25, v15, v16);
  iconLoopCtr = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8903/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/, 0);
  if ( !touchGuideLabel
    || (UILabel__set_text(touchGuideLabel, (System_String_o *)iconLoopCtr, 0),
        (currentList = this->fields.currentList) == 0)
    || (iconLoopCtr = (__int64)this->fields.iconScroll) == 0
    || (size = currentList->fields._size,
        (iconLoopCtr = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconLoopCtr, 0)) == 0) )
  {
LABEL_87:
    sub_21FFECC(iconLoopCtr, v15);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconLoopCtr, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  iconLoopCtr = (__int64)MasterFormationComponent_TypeInfo;
  z = localPosition.fields.z;
  if ( !*(&MasterFormationComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo, v15, v29);
    iconLoopCtr = (__int64)MasterFormationComponent_TypeInfo;
  }
  if ( size > *(_DWORD *)(*(_QWORD *)(iconLoopCtr + 184) + 4LL) )
  {
    iconScroll = this->fields.iconScroll;
    this->fields.isScrollEquipIcon = 1;
    if ( !iconScroll )
      goto LABEL_87;
    onDragStarted = (System_Delegate_o *)iconScroll->fields.onDragStarted;
    p_onDragStarted = (MissionNaviTransitionBoardItem_o *)&iconScroll->fields.onDragStarted;
    v36 = (UIScrollView_OnDragNotification_o *)sub_21FFEBC(UIScrollView_OnDragNotification_TypeInfo);
    UIScrollView_OnDragNotification___ctor(
      v36,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragStarted__,
      0);
    v37 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v36, 0);
    v44 = v37;
    if ( v37 )
    {
      v45 = (System_Delegate_c *)UIScrollView_OnDragNotification_TypeInfo;
      if ( (UIScrollView_OnDragNotification_c *)v37->klass != UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_41;
      p_onDragStarted->klass = (MissionNaviTransitionBoardItem_c *)v37;
      if ( v37->klass != v45 )
        goto LABEL_41;
    }
    else
    {
      p_onDragStarted->klass = 0;
    }
    sub_21FFBF4(p_onDragStarted, (int32_t)v37, v38, v39, v40, v41, v42, v43);
    v52 = this->fields.iconScroll;
    if ( !v52 )
      goto LABEL_87;
    onDragFinished = (System_Delegate_o *)v52->fields.onDragFinished;
    p_onDragFinished = (MissionNaviTransitionBoardItem_o *)&v52->fields.onDragFinished;
    v55 = (UIScrollView_OnDragNotification_o *)sub_21FFEBC(UIScrollView_OnDragNotification_TypeInfo);
    UIScrollView_OnDragNotification___ctor(
      v55,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragFinished__,
      0);
    v56 = System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v55, 0);
    v44 = v56;
    if ( v56 )
    {
      v45 = (System_Delegate_c *)UIScrollView_OnDragNotification_TypeInfo;
      if ( (UIScrollView_OnDragNotification_c *)v56->klass != UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_41;
      p_onDragFinished->klass = (MissionNaviTransitionBoardItem_c *)v56;
      if ( v56->klass != v45 )
        goto LABEL_41;
    }
    else
    {
      p_onDragFinished->klass = 0;
    }
    sub_21FFBF4(p_onDragFinished, (int32_t)v56, v38, v39, v57, v58, v59, v60);
    klass = p_iconCenterChild->klass;
    if ( !klass )
      goto LABEL_87;
    v62 = *(System_Delegate_o **)&klass->_1.byval_arg.bits;
    p_iconCenterChild = (MissionNaviTransitionBoardItem_o *)&klass->_1.byval_arg.bits;
    v63 = (SpringPanel_OnFinished_o *)sub_21FFEBC(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(
      v63,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconCenterOnChildFinished__,
      0);
    v64 = System_Delegate__Combine(v62, (System_Delegate_o *)v63, 0);
    v44 = v64;
    if ( !v64 )
      goto LABEL_42;
    v45 = (System_Delegate_c *)SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v64->klass == SpringPanel_OnFinished_TypeInfo )
    {
      p_iconCenterChild->klass = (MissionNaviTransitionBoardItem_c *)v64;
      if ( v64->klass == v45 )
      {
LABEL_43:
        sub_21FFBF4(p_iconCenterChild, (int32_t)v44, v38, v39, v65, v66, v67, v68);
        iconLoopCtr = (__int64)this->fields.arrowInfo;
        if ( !iconLoopCtr )
          goto LABEL_87;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLoopCtr, 1, 0);
        scrollGuideLabel = this->fields.scrollGuideLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v69, v70);
        iconLoopCtr = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8902/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/, 0);
        if ( !scrollGuideLabel )
          goto LABEL_87;
        UILabel__set_text(scrollGuideLabel, (System_String_o *)iconLoopCtr, 0);
        isScrollEquipIcon = this->fields.isScrollEquipIcon;
        v51 = 2;
        goto LABEL_48;
      }
    }
LABEL_41:
    sub_220024C(v44, v45, v38, v39);
LABEL_42:
    p_iconCenterChild->klass = 0;
    goto LABEL_43;
  }
  v46 = this->fields.iconLoopCtr;
  this->fields.isScrollEquipIcon = 0;
  if ( !v46 )
    goto LABEL_87;
  v47 = size - 1;
  if ( size - 1 < 0 )
    v47 = size;
  v48 = v47 >> 1;
  itemSize = v46->fields.itemSize;
  x = (float)-(v48 * itemSize);
  isScrollEquipIcon = 0;
  if ( (size & 1) == 0 )
    x = x - (float)(itemSize / 2);
  v51 = 1;
LABEL_48:
  v114 = v51;
  MasterFormationComponent__SetEnabledEquipIconScroll(this, isScrollEquipIcon, v29);
  iconLoopCtr = (__int64)this->fields.iconCenterChild;
  if ( !iconLoopCtr )
    goto LABEL_87;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)iconLoopCtr, 0, 0);
  v72 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v72,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v73 = 0;
  v116 = 0;
  do
  {
    v115 = v73;
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
        v77 = (UnityEngine_GameObject_o *)iconLoopCtr;
        iconLoopCtr = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)iconLoopCtr, 0);
        v78 = (UnityEngine_Transform_o *)iconLoopCtr;
        if ( !byte_5931945 )
        {
          iconLoopCtr = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931945 = 1;
        }
        if ( !v78 )
          goto LABEL_87;
        UnityEngine_Transform__set_localScale(v78, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        iconLoopCtr = (__int64)UnityEngine_GameObject__get_transform(v77, 0);
        if ( !this->fields.iconLoopCtr )
          goto LABEL_87;
        v79 = (UnityEngine_Transform_o *)iconLoopCtr;
        iconLoopCtr = (__int64)UnityEngine_Component__get_transform(
                                 (UnityEngine_Component_o *)this->fields.iconLoopCtr,
                                 0);
        if ( !iconLoopCtr )
          goto LABEL_87;
        v118 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconLoopCtr, 0);
        if ( !v79 )
          goto LABEL_87;
        UnityEngine_Transform__set_localPosition(v79, v118, 0);
        v80 = System_Int32__ToString_76925352((int32_t)&v116, (System_String_o *)StringLiteral_5130/*"D3"*/, 0);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v77, v80, 0);
        if ( !v72 )
          goto LABEL_87;
        items = v72->fields._items;
        v88 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v72->fields._version;
        if ( !items )
          goto LABEL_87;
        v89 = v72->fields._size;
        if ( (unsigned int)v89 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v72,
            (Il2CppObject *)v77,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
        }
        else
        {
          v90 = &items->obj.klass + v89;
          v72->fields._size = v89 + 1;
          v90[4] = (Il2CppClass *)v77;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v90 + 4), (int32_t)v77, v81, v82, v83, v84, v85, v86);
        }
        iconLoopCtr = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v77,
                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
        mstEqIconList = (System_Collections_Generic_List_object__o *)this->fields.mstEqIconList;
        if ( !mstEqIconList )
          goto LABEL_87;
        v98 = mstEqIconList->fields._items;
        v99 = Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__;
        ++mstEqIconList->fields._version;
        if ( !v98 )
          goto LABEL_87;
        v100 = mstEqIconList->fields._size;
        v101 = (MasterEquipIconComponent_o *)iconLoopCtr;
        if ( (unsigned int)v100 >= LODWORD(v98->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mstEqIconList,
            (Il2CppObject *)iconLoopCtr,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
        }
        else
        {
          v102 = &v98->obj.klass + v100;
          mstEqIconList->fields._size = v100 + 1;
          v102[4] = (Il2CppClass *)v101;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v102 + 4), (int32_t)v101, v91, v92, v93, v94, v95, v96);
        }
        iconLoopCtr = (__int64)this->fields.currentList;
        if ( !iconLoopCtr )
          goto LABEL_87;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)iconLoopCtr,
                 i,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
        v104 = v116;
        v105 = (UserEquipEntity_o *)Item;
        v106 = (MasterEquipIconComponent_CallbackFunc_o *)sub_21FFEBC(MasterEquipIconComponent_CallbackFunc_TypeInfo);
        MasterEquipIconComponent_CallbackFunc___ctor(
          v106,
          (Il2CppObject *)this,
          (intptr_t)Method_MasterFormationComponent_OnClickIcon__,
          v107);
        if ( !v101 )
          goto LABEL_87;
        MasterEquipIconComponent__SetEquipInfo(v101, v105, v108, v109, v104, v106, v110);
        MasterEquipIconComponent__UpdateSelected(v101, this->fields.currentEquipId, v111);
        ++v116;
      }
    }
    v73 = v115 + 1;
  }
  while ( v115 + 1 != v114 );
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
  if ( !v72 )
    goto LABEL_87;
  if ( v72->fields._size >= 1 )
  {
    v112 = 0;
    while ( 1 )
    {
      iconLoopCtr = (__int64)System_Collections_Generic_List_object___get_Item(
                               v72,
                               v112,
                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !iconLoopCtr )
        break;
      iconLoopCtr = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)iconLoopCtr, 0);
      if ( !iconLoopCtr )
        break;
      v119.fields.x = x;
      v119.fields.y = y;
      v119.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconLoopCtr, v119, 0);
      v113 = this->fields.iconLoopCtr;
      if ( !v113 )
        break;
      ++v112;
      x = x + (float)v113->fields.itemSize;
      if ( v112 >= v72->fields._size )
        return;
    }
    goto LABEL_87;
  }
}


void MasterFormationComponent__setMstEquipList(MasterFormationComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  MissionNaviTransitionBoardItem_o *p_centerChild; // x20
  UnityEngine_Object_o *centerChild; // x21
  __int64 loopCtr; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct UIWrapContent_o *v24; // x8
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x9
  int size; // w24
  bool isScrollEquipDetail; // w1
  int v28; // w8
  struct UIScrollView_o *mScroll; // x21
  MissionNaviTransitionBoardItem_o *p_onDragStarted; // x21
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v32; // x23
  System_Delegate_o *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Delegate_o *v40; // x8
  System_Delegate_c *v41; // x1
  MissionNaviTransitionBoardItem_c *klass; // x20
  System_Delegate_o *v43; // t1
  SpringPanel_OnFinished_o *v44; // x22
  System_Delegate_o *v45; // x0
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  int v50; // w9
  int32_t v51; // w21
  UnityEngine_GameObject_o *mstEquipInfoPrefab; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v54; // x22
  UnityEngine_Transform_o *v55; // x23
  UnityEngine_Transform_o *v56; // x23
  System_String_o *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  System_Collections_Generic_List_object__o *mstEqInfoList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v66; // x10
  __int64 v67; // x11
  MasterEquipInfoComponent_o *v68; // x22
  Il2CppClass **v69; // x0
  int32_t v70; // w3
  const MethodInfo *v71; // x5
  int v72; // [xsp+4h] [xbp-6Ch]
  int v73; // [xsp+8h] [xbp-68h]
  int32_t moveIdx; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59332B8 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo);
    sub_21FFC50(&Method_MasterFormationComponent_OnCenterOnChildFinished__);
    sub_21FFC50(&Method_MasterFormationComponent_OnDragStarted__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIScrollView_OnDragNotification_TypeInfo);
    sub_21FFC50(&SpringPanel_OnFinished_TypeInfo);
    sub_21FFC50(&StringLiteral_5130/*"D3"*/);
    byte_59332B8 = 1;
  }
  moveIdx = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__);
  this->fields.mstEqInfoList = (struct System_Collections_Generic_List_MasterEquipInfoComponent__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mstEqInfoList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  p_centerChild = (MissionNaviTransitionBoardItem_o *)&this->fields.centerChild;
  centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  loopCtr = UnityEngine_Object__op_Equality(centerChild, 0, 0);
  if ( (loopCtr & 1) != 0 )
  {
    loopCtr = (__int64)this->fields.loopCtr;
    if ( !loopCtr )
      goto LABEL_50;
    loopCtr = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)loopCtr, 0);
    if ( !loopCtr )
      goto LABEL_50;
    v17 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)loopCtr,
            (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    p_centerChild->klass = (MissionNaviTransitionBoardItem_c *)v17;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.centerChild,
      (int32_t)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = this->fields.loopCtr;
  if ( !v24 )
    goto LABEL_50;
  currentList = this->fields.currentList;
  v24->fields.itemSize = 534;
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
    p_onDragStarted = (MissionNaviTransitionBoardItem_o *)&mScroll->fields.onDragStarted;
    v32 = (UIScrollView_OnDragNotification_o *)sub_21FFEBC(UIScrollView_OnDragNotification_TypeInfo);
    UIScrollView_OnDragNotification___ctor(
      v32,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnDragStarted__,
      0);
    v33 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v32, 0);
    v40 = v33;
    if ( v33 )
    {
      v41 = (System_Delegate_c *)UIScrollView_OnDragNotification_TypeInfo;
      if ( (UIScrollView_OnDragNotification_c *)v33->klass != UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_23;
      p_onDragStarted->klass = (MissionNaviTransitionBoardItem_c *)v33;
      if ( v33->klass != v41 )
        goto LABEL_23;
    }
    else
    {
      p_onDragStarted->klass = 0;
    }
    sub_21FFBF4(p_onDragStarted, (int32_t)v33, v34, v35, v36, v37, v38, v39);
    klass = p_centerChild->klass;
    if ( !klass )
      goto LABEL_50;
    v43 = *(System_Delegate_o **)&klass->_1.byval_arg.bits;
    p_centerChild = (MissionNaviTransitionBoardItem_o *)&klass->_1.byval_arg.bits;
    v44 = (SpringPanel_OnFinished_o *)sub_21FFEBC(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(
      v44,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnCenterOnChildFinished__,
      0);
    v45 = System_Delegate__Combine(v43, (System_Delegate_o *)v44, 0);
    v40 = v45;
    if ( !v45 )
      goto LABEL_24;
    v41 = (System_Delegate_c *)SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v45->klass == SpringPanel_OnFinished_TypeInfo )
    {
      p_centerChild->klass = (MissionNaviTransitionBoardItem_c *)v45;
      if ( v45->klass == v41 )
        goto LABEL_25;
    }
LABEL_23:
    sub_220024C(v40, v41, v34, v35);
LABEL_24:
    p_centerChild->klass = 0;
LABEL_25:
    sub_21FFBF4(p_centerChild, (int32_t)v40, v34, v35, v46, v47, v48, v49);
    v28 = 2;
    isScrollEquipDetail = this->fields.isScrollEquipDetail;
    goto LABEL_26;
  }
  isScrollEquipDetail = 0;
  v28 = 1;
  this->fields.isScrollEquipDetail = 0;
LABEL_26:
  v72 = v28;
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, isScrollEquipDetail, v16);
  v50 = 0;
  moveIdx = 0;
  do
  {
    v73 = v50;
    if ( size >= 1 )
    {
      v51 = 0;
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
        v54 = (UnityEngine_GameObject_o *)loopCtr;
        loopCtr = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)loopCtr, 0);
        v55 = (UnityEngine_Transform_o *)loopCtr;
        if ( !byte_5931945 )
        {
          loopCtr = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931945 = 1;
        }
        if ( !v55 )
          break;
        UnityEngine_Transform__set_localScale(v55, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        loopCtr = (__int64)UnityEngine_GameObject__get_transform(v54, 0);
        if ( !this->fields.loopCtr )
          break;
        v56 = (UnityEngine_Transform_o *)loopCtr;
        loopCtr = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.loopCtr, 0);
        if ( !loopCtr )
          break;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)loopCtr, 0);
        if ( !v56 )
          break;
        UnityEngine_Transform__set_localPosition(v56, localPosition, 0);
        v57 = System_Int32__ToString_76925352((int32_t)&moveIdx, (System_String_o *)StringLiteral_5130/*"D3"*/, 0);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v54, v57, 0);
        loopCtr = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             v54,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
        mstEqInfoList = (System_Collections_Generic_List_object__o *)this->fields.mstEqInfoList;
        if ( !mstEqInfoList )
          break;
        items = mstEqInfoList->fields._items;
        v66 = Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__;
        ++mstEqInfoList->fields._version;
        if ( !items )
          break;
        v67 = mstEqInfoList->fields._size;
        v68 = (MasterEquipInfoComponent_o *)loopCtr;
        if ( (unsigned int)v67 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            mstEqInfoList,
            (Il2CppObject *)loopCtr,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
        }
        else
        {
          v69 = &items->obj.klass + v67;
          mstEqInfoList->fields._size = v67 + 1;
          v69[4] = (Il2CppClass *)v68;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v69 + 4), (int32_t)v68, v58, v59, v60, v61, v62, v63);
        }
        loopCtr = (__int64)this->fields.currentList;
        if ( !loopCtr )
          break;
        loopCtr = (__int64)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)loopCtr,
                             v51,
                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
        if ( !v68 )
          break;
        MasterEquipInfoComponent__setEquipInfo(
          v68,
          (UserEquipEntity_o *)loopCtr,
          this->fields.usrEquipId,
          v70,
          moveIdx,
          v71);
        ++v51;
        ++moveIdx;
        if ( size == v51 )
          goto LABEL_45;
      }
LABEL_50:
      sub_21FFECC(loopCtr, v15);
    }
LABEL_45:
    v50 = v73 + 1;
  }
  while ( v73 + 1 != v72 );
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
  UnityEngine_Object_c *v7; // x0
  __int64 v8; // x2
  UIMasterFigureTextureOld_o *Prefab_47603220; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UIMasterFigureTextureOld_o *v16; // x21
  int32_t genderType; // w20
  void *equipIconPrefab; // x8
  System_Action_o *v19; // x22
  Il2CppObject *v20; // x23
  struct MasterFormationComponent___c_StaticFields *static_fields; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  v4 = this;
  if ( (byte_59332B5 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_MasterFormationComponent___c__setMstImg_b__65_0__);
    this = (MasterFormationComponent_o *)sub_21FFC50(&MasterFormationComponent___c_TypeInfo);
    byte_59332B5 = 1;
  }
  usrGameEnt = v4->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_16;
  masterFigure = (UnityEngine_Object_o *)v4->fields.masterFigure;
  v7 = UnityEngine_Object_TypeInfo;
  v4->fields.genderType = usrGameEnt->fields.genderType;
  if ( !*(&v7->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&equipId, method);
  if ( UnityEngine_Object__op_Equality(masterFigure, 0, 0) )
  {
    Prefab_47603220 = MasterFigureManagerOld__CreatePrefab_47603220(
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
    v4->fields.masterFigure = Prefab_47603220;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v4->fields.masterFigure,
      (int32_t)Prefab_47603220,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    return;
  }
  v16 = v4->fields.masterFigure;
  genderType = v4->fields.genderType;
  this = (MasterFormationComponent_o *)MasterFormationComponent___c_TypeInfo;
  if ( !*(&MasterFormationComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MasterFormationComponent___c_TypeInfo, *(_QWORD *)&equipId, v8);
    this = (MasterFormationComponent_o *)MasterFormationComponent___c_TypeInfo;
  }
  equipIconPrefab = this->fields.equipIconPrefab;
  v19 = (System_Action_o *)*((_QWORD *)equipIconPrefab + 1);
  if ( !v19 )
  {
    if ( !HIDWORD(this->fields.masterFigure) )
    {
      j_il2cpp_runtime_class_init_0(this, *(_QWORD *)&equipId, v8);
      equipIconPrefab = MasterFormationComponent___c_TypeInfo->static_fields;
    }
    v20 = *(Il2CppObject **)equipIconPrefab;
    v19 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v19, v20, Method_MasterFormationComponent___c__setMstImg_b__65_0__, 0);
    static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
    static_fields->__9__65_0 = v19;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&static_fields->__9__65_0,
      (int32_t)v19,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  if ( !v16 )
LABEL_16:
    sub_21FFECC(this, *(_QWORD *)&equipId);
  UIMasterFigureTextureOld__SetCharacter(v16, 1, genderType, equipId, v19, 0, 0, 0);
}


void MasterFormationComponent__setPosCurrentEq(MasterFormationComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MasterEquipInfoComponent__o *mstEqInfoList; // x8
  int size; // w21
  int32_t v5; // w20
  System_Collections_Generic_List_object__o *Item; // x0
  const MethodInfo *v7; // x2
  struct System_Object_array *items; // x8

  if ( (byte_59332BC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Item__);
    byte_59332BC = 1;
  }
  if ( this->fields.usrEquipId >= 1 )
  {
    mstEqInfoList = this->fields.mstEqInfoList;
    if ( mstEqInfoList )
    {
      size = mstEqInfoList->fields._size;
      if ( size >= 1 )
      {
        v5 = 0;
        while ( 1 )
        {
          Item = (System_Collections_Generic_List_object__o *)this->fields.mstEqInfoList;
          if ( !Item
            || (Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      Item,
                                                                      v5,
                                                                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Item__)) == 0
            || (items = Item[4].fields._items) == 0 )
          {
            sub_21FFECC(Item, method);
          }
          if ( items->bounds == (Il2CppArrayBounds *)this->fields.usrEquipId )
            break;
          if ( size == ++v5 )
            return;
        }
        MasterFormationComponent__setDispRePosition(this, Item[4].fields._version, v7);
      }
    }
  }
}


void MasterFormationComponent__setUsrEquipData(MasterFormationComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  const MethodInfo *v4; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  System_Collections_Generic_IEnumerable_T__o *List; // x21
  System_Collections_Generic_List_object__o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *v14; // x20
  __int64 v15; // x2
  int32_t v16; // w21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_List_object__o *currentList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  Il2CppClass *v27; // x1
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_object__o *v29; // x20
  struct MasterFormationComponent___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__67_0; // x21
  Il2CppObject *v32; // x22
  struct MasterFormationComponent___c_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1

  if ( (byte_59332B7 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_UserEquipEntity__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEquipEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEquipEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEquipEntity___ctor___91443912);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_UserEquipEntity__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__);
    sub_21FFC50(&MasterFormationComponent___c_TypeInfo);
    byte_59332B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_27;
  if ( !Instance )
    goto LABEL_27;
  List = (System_Collections_Generic_IEnumerable_T__o *)UserEquipMaster__getList(
                                                          (UserEquipMaster_o *)Instance,
                                                          usrGameEnt->fields.userId,
                                                          0);
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserEquipEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
  this->fields.currentList = (struct System_Collections_Generic_List_UserEquipEntity__o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.currentList, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  if ( !List )
    goto LABEL_27;
  if ( List[1].monitor )
  {
    v14 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserEquipEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_71627776(
      v14,
      List,
      (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_UserEquipEntity___ctor___91443912);
    if ( this->fields.usrEquipId >= 1 )
    {
      if ( !v14 )
        goto LABEL_27;
      if ( v14->fields._size >= 1 )
      {
        v16 = 0;
        while ( 1 )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       v14,
                       v16,
                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
          currentList = (System_Collections_Generic_List_object__o *)this->fields.currentList;
          if ( !currentList )
            break;
          items = currentList->fields._items;
          v25 = Method_System_Collections_Generic_List_UserEquipEntity__Add__;
          ++currentList->fields._version;
          if ( !items )
            break;
          size = currentList->fields._size;
          v27 = (Il2CppClass *)Instance;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              currentList,
              (Il2CppObject *)Instance,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            currentList->fields._size = size + 1;
            v28[4] = v27;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v27, v17, v18, v19, v20, v21, v22);
          }
          if ( ++v16 >= v14->fields._size )
            goto LABEL_18;
        }
LABEL_27:
        sub_21FFECC(Instance, v4);
      }
LABEL_18:
      v29 = (System_Collections_Generic_List_object__o *)this->fields.currentList;
      Instance = MasterFormationComponent___c_TypeInfo;
      if ( !*(&MasterFormationComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MasterFormationComponent___c_TypeInfo, v4, v15);
        Instance = MasterFormationComponent___c_TypeInfo;
      }
      static_fields = (struct MasterFormationComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
      _9__67_0 = (System_Comparison_T__o *)static_fields->__9__67_0;
      if ( !_9__67_0 )
      {
        if ( !*((_DWORD *)Instance + 57) )
        {
          j_il2cpp_runtime_class_init_0(Instance, v4, v15);
          static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
        }
        v32 = (Il2CppObject *)static_fields->__9;
        _9__67_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_UserEquipEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__67_0,
          v32,
          Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__,
          0);
        v33 = MasterFormationComponent___c_TypeInfo->static_fields;
        v33->__9__67_0 = (struct System_Comparison_UserEquipEntity__o *)_9__67_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v33->__9__67_0,
          (int32_t)_9__67_0,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
      }
      if ( !v29 )
        goto LABEL_27;
      System_Collections_Generic_List_object___Sort_71636404(
        v29,
        _9__67_0,
        (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_UserEquipEntity__Sort__);
    }
  }
  MasterFormationComponent__setMstEquipList(this, v4);
  MasterFormationComponent__setMstEquipIconList(this, v40);
  MasterFormationComponent__setPosCurrentEq(this, v41);
}


void MasterFormationComponent_NotificationDragState___ctor(
        MasterFormationComponent_NotificationDragState_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FEECD4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FEEC8C;
}


System_IAsyncResult_o *MasterFormationComponent_NotificationDragState__BeginInvoke(
        MasterFormationComponent_NotificationDragState_o *this,
        bool flg,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = flg;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void MasterFormationComponent_NotificationDragState__EndInvoke(
        MasterFormationComponent_NotificationDragState_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59332CE & 1) == 0 )
  {
    sub_21FFC50(&MasterFormationComponent___c_TypeInfo);
    byte_59332CE = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(MasterFormationComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MasterFormationComponent___c_TypeInfo->static_fields->__9 = (struct MasterFormationComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)MasterFormationComponent___c_TypeInfo->static_fields,
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

  if ( (byte_59332CF & 1) == 0 )
  {
    this = (MasterFormationComponent___c_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_59332CF = 1;
  }
  if ( !a )
    goto LABEL_8;
  v7 = *(_QWORD *)&a->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&a->fields.equipId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, a, b);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (MasterFormationComponent___c_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v9, 0);
  if ( !b )
LABEL_8:
    sub_21FFECC(this, a);
  return (_DWORD)this - CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(b->fields.equipId, 0);
}