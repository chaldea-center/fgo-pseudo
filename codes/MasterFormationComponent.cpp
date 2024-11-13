void __fastcall MasterFormationComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct MasterFormationComponent_StaticFields *static_fields; // x8

  if ( (byte_4B11521 & 1) == 0 )
  {
    sub_1BCA7E0(&MasterFormationComponent_TypeInfo, v1, v2);
    byte_4B11521 = 1;
  }
  static_fields = MasterFormationComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->SPELL_WINDOW_ALPHA_TIME = 0x83E19999ALL;
  *(_QWORD *)&static_fields->ALPHA_ANIMATION_SPD = 0x404000003F000000LL;
}


void __fastcall MasterFormationComponent___ctor(MasterFormationComponent_o *this, const MethodInfo *method)
{
  this->fields.isFirst = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MasterFormationComponent__CloseCmdSpell(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleWindowComponent_o *cmdSpellWinComp; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4B11520 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MasterFormationComponent_CloseCmdSpell__, method, v2);
    byte_4B11520 = 1;
  }
  cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    goto LABEL_10;
  if ( BattleWindowComponent__isOpen(cmdSpellWinComp, 0LL) )
  {
    v5 = Method_MasterFormationComponent_CloseCmdSpell__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_CloseCmdSpell__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_MasterFormationComponent_CloseCmdSpell__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
    if ( cmdSpellWinComp )
    {
      ((void (__fastcall *)(BattleWindowComponent_o *, _QWORD, Il2CppMethodPointer))cmdSpellWinComp->klass->vtable._12_Close.method)(
        cmdSpellWinComp,
        0LL,
        cmdSpellWinComp->klass->vtable._13_CompClose.methodPtr);
      return;
    }
LABEL_10:
    sub_1BCAA3C(cmdSpellWinComp, method);
  }
}


void __fastcall MasterFormationComponent__OnCenterOnChildFinished(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  struct UICenterOnChild_o *centerChild; // x8
  MasterEquipInfoComponent_o *v8; // x20
  const MethodInfo *v9; // x2
  struct UserEquipEntity_o *usrEquipEnt; // x8

  if ( (byte_4B11515 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, method, v2);
    sub_1BCA7E0(&StringLiteral_3462/*"CHANGE_INFO"*/, v4, v5);
    byte_4B11515 = 1;
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
    || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_object_(
                                                    (UnityEngine_GameObject_o *)leftArrowBtn,
                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___)) == 0LL
    || (v8 = (MasterEquipInfoComponent_o *)leftArrowBtn,
        leftArrowBtn = (UnityEngine_Behaviour_o *)MasterEquipInfoComponent__getEquipId(
                                                    (MasterEquipInfoComponent_o *)leftArrowBtn,
                                                    method),
        this->fields.currentEquipId = (int)leftArrowBtn,
        (usrEquipEnt = v8->fields.usrEquipEnt) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(leftArrowBtn, method);
  }
  this->fields.currentUsrEquipId = usrEquipEnt->fields.id;
  this->fields.isChange = v8->fields.isChange;
  this->fields.currentMoveIdx = v8->fields.moveEqIdx;
  MasterEquipInfoComponent__setDispEffectObj(v8, 1, v9);
  if ( this->fields.isChangeMasterImg )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.fsm;
    if ( leftArrowBtn )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)leftArrowBtn, (System_String_o *)StringLiteral_3462/*"CHANGE_INFO"*/, 0LL);
      return;
    }
    goto LABEL_15;
  }
}


void __fastcall MasterFormationComponent__OnClickCmdSpell(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_4B1151F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MasterFormationComponent_OnClickCmdSpell__, method, v2);
    byte_4B1151F = 1;
  }
  v4 = Method_MasterFormationComponent_OnClickCmdSpell__;
  if ( (*((_BYTE *)Method_MasterFormationComponent_OnClickCmdSpell__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_MasterFormationComponent_OnClickCmdSpell__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    sub_1BCAA3C(0LL, v6);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  const MethodInfo *v15; // x1
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  UICenterOnChild_o *centerChild; // x22
  struct UserEquipEntity_o *userEquipEntity; // x8
  __int64 v21; // x21
  __int64 v22; // x22
  struct UICenterOnChild_o *v23; // x8
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B1150E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___,
      *(_QWORD *)&idx,
      *(_QWORD *)&equipId);
    sub_1BCA7E0(&Method_MasterFormationComponent_OnClickIcon__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    byte_4B1150E = 1;
  }
  if ( this->fields.currentEquipId != equipId && !this->fields.isDragStart && !this->fields.isIconDragStart )
  {
    v13 = Method_MasterFormationComponent_OnClickIcon__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_OnClickIcon__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1BCA7F8(Method_MasterFormationComponent_OnClickIcon__);
    v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
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
        MasterFormationComponent__setDisEquipEffect(this, v17);
        MasterFormationComponent__setMstImg(this, equipId, v18);
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
              UICenterOnChild__CenterOn_47224044(centerChild, (UnityEngine_Transform_o *)iconCenterChild, 1, 0LL);
              userEquipEntity = this->fields.userEquipEntity;
              if ( userEquipEntity )
              {
                v22 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
                v21 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
                *(_QWORD *)&v27.fields.currentCryptoKey = v22;
                *(_QWORD *)&v27.fields.fakeValue = v21;
                iconCenterChild = (UnityEngine_Behaviour_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                               v27,
                                                               0LL);
                if ( (_DWORD)iconCenterChild != equipId )
                  goto LABEL_22;
                v23 = this->fields.centerChild;
                if ( v23 )
                {
                  iconCenterChild = (UnityEngine_Behaviour_o *)v23->fields.mCenteredObject;
                  if ( iconCenterChild )
                  {
                    iconCenterChild = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   (UnityEngine_GameObject_o *)iconCenterChild,
                                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
                    if ( iconCenterChild )
                    {
                      MasterEquipInfoComponent__setDispEffectObj((MasterEquipInfoComponent_o *)iconCenterChild, 1, v24);
LABEL_22:
                      MasterFormationComponent__UpdateIconSelected(this, v15);
                      MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v25);
                      MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v26);
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
    sub_1BCAA3C(iconCenterChild, v15);
  }
}


void __fastcall MasterFormationComponent__OnDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  struct MasterFormationComponent_NotificationDragState_o *notificationDragState; // x8

  if ( (byte_4B11512 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11380/*"RefreshCurrentInfo"*/, method, v2);
    byte_4B11512 = 1;
  }
  *(_WORD *)&this->fields.isChangeMasterImg = 1;
  this->fields.isDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_70138824(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11380/*"RefreshCurrentInfo"*/,
    0LL);
  MasterFormationComponent__setDisEquipEffect(this, v4);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 0, v5);
  iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
  if ( !iconCenterChild
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 0, 0LL),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 0, 0LL),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 0, 0LL),
        (notificationDragState = this->fields.notificationDragState) == 0LL) )
  {
    sub_1BCAA3C(iconCenterChild, v6);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))notificationDragState->fields.m_target)(
    notificationDragState->fields.original_method_info,
    1LL,
    *(_QWORD *)&notificationDragState->fields.extra_arg);
}


void __fastcall MasterFormationComponent__OnIconCenterOnChildFinished(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  void *leftArrowBtn; // x0
  struct UICenterOnChild_o *iconCenterChild; // x8
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  struct MasterFormationComponent_NotificationDragState_o *notificationDragState; // x8
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11516 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v12, v13);
    sub_1BCA7E0(&StringLiteral_11380/*"RefreshCurrentInfo"*/, v14, v15);
    byte_4B11516 = 1;
  }
  memset(&v24, 0, sizeof(v24));
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
  leftArrowBtn = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)leftArrowBtn,
                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
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
  UnityEngine_MonoBehaviour__CancelInvoke_70138824(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11380/*"RefreshCurrentInfo"*/,
    0LL);
  notificationDragState = this->fields.notificationDragState;
  if ( !notificationDragState )
    goto LABEL_20;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))notificationDragState->fields.m_target)(
    notificationDragState->fields.original_method_info,
    0LL,
    *(_QWORD *)&notificationDragState->fields.extra_arg);
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v20);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v21);
  leftArrowBtn = this->fields.mstEqIconList;
  if ( !leftArrowBtn )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)leftArrowBtn,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v24.fields._current )
      sub_1BCAA3C(0LL, v22);
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v24.fields._current, 1, v23);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  leftArrowBtn = this->fields.iconCenterChild;
  if ( !leftArrowBtn )
LABEL_20:
    sub_1BCAA3C(leftArrowBtn, method);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)leftArrowBtn, 0, 0LL);
}


void __fastcall MasterFormationComponent__OnIconDragFinished(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11514 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v8, v9);
    byte_4B11514 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
  if ( !iconCenterChild
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 1, 0LL),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
  {
    sub_1BCAA3C(iconCenterChild, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)iconCenterChild,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1BCAA3C(0LL, v11);
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v13.fields._current, 0, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
}


void __fastcall MasterFormationComponent__OnIconDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  struct MasterFormationComponent_NotificationDragState_o *notificationDragState; // x8

  if ( (byte_4B11513 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11380/*"RefreshCurrentInfo"*/, method, v2);
    byte_4B11513 = 1;
  }
  *(_WORD *)&this->fields.isChangeMasterImg = 257;
  this->fields.isIconDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_70138824(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11380/*"RefreshCurrentInfo"*/,
    0LL);
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 0, v4);
  leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
  if ( !leftArrowBtn
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL),
        (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL),
        (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL),
        (notificationDragState = this->fields.notificationDragState) == 0LL) )
  {
    sub_1BCAA3C(leftArrowBtn, v5);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))notificationDragState->fields.m_target)(
    notificationDragState->fields.original_method_info,
    1LL,
    *(_QWORD *)&notificationDragState->fields.extra_arg);
}


void __fastcall MasterFormationComponent__RefreshCurrentInfo(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *loopCtr; // x0
  __int64 v5; // x1
  struct MasterFormationComponent_NotificationDragState_o *notificationDragState; // x8
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  UICenterOnChild_o *centerChild; // x20
  UICenterOnChild_o *iconCenterChild; // x20
  const MethodInfo *v11; // x1

  if ( (byte_4B11517 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_11380/*"RefreshCurrentInfo"*/, method, v2);
    byte_4B11517 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_70138824(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11380/*"RefreshCurrentInfo"*/,
    0LL);
  notificationDragState = this->fields.notificationDragState;
  if ( !notificationDragState )
    goto LABEL_22;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))notificationDragState->fields.m_target)(
    notificationDragState->fields.original_method_info,
    0LL,
    *(_QWORD *)&notificationDragState->fields.extra_arg);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v7);
  if ( this->fields.isDragStart )
  {
    loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
    if ( !loopCtr )
      goto LABEL_22;
    loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL);
    if ( !loopCtr )
      goto LABEL_22;
    if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)loopCtr, 0LL) >= 1 )
    {
      loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
      this->fields.isDragStart = 0;
      if ( !loopCtr )
        goto LABEL_22;
      centerChild = this->fields.centerChild;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL);
      if ( !loopCtr )
        goto LABEL_22;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                             (UnityEngine_Transform_o *)loopCtr,
                                             this->fields.currentMoveIdx,
                                             0LL);
      if ( !centerChild )
        goto LABEL_22;
      UICenterOnChild__CenterOn_47224044(centerChild, (UnityEngine_Transform_o *)loopCtr, 1, 0LL);
    }
  }
  if ( !this->fields.isIconDragStart )
  {
LABEL_20:
    MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v8);
    goto LABEL_21;
  }
  loopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
  if ( !loopCtr || (loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL)) == 0LL )
LABEL_22:
    sub_1BCAA3C(loopCtr, v5);
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)loopCtr, 0LL) < 1 )
    goto LABEL_20;
  this->fields.isIconDragStart = 0;
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 0, v8);
  loopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
  if ( !loopCtr )
    goto LABEL_22;
  iconCenterChild = this->fields.iconCenterChild;
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL);
  if ( !loopCtr )
    goto LABEL_22;
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                         (UnityEngine_Transform_o *)loopCtr,
                                         this->fields.currentMoveIconIdx,
                                         0LL);
  if ( !iconCenterChild )
    goto LABEL_22;
  UICenterOnChild__CenterOn_47224044(iconCenterChild, (UnityEngine_Transform_o *)loopCtr, 1, 0LL);
LABEL_21:
  MasterFormationComponent__UpdateIconSelected(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__SetEnabledEquipDetailScroll(
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
          UnityEngine_Behaviour__set_enabled(mScroll, enabled, 0LL),
          (mScroll = (UnityEngine_Behaviour_o *)this->fields.loopCtr) == 0LL)
      || (UnityEngine_Behaviour__set_enabled(mScroll, v5, 0LL),
          (mScroll = (UnityEngine_Behaviour_o *)this->fields.centerChild) == 0LL) )
    {
      sub_1BCAA3C(mScroll, enabled);
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

  if ( (enabled & ~this->fields.isScrollEquipIcon & 1) == 0 )
  {
    iconScroll = (UnityEngine_Behaviour_o *)this->fields.iconScroll;
    if ( !iconScroll
      || (v5 = enabled,
          UnityEngine_Behaviour__set_enabled(iconScroll, enabled, 0LL),
          (iconScroll = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr) == 0LL) )
    {
      sub_1BCAA3C(iconScroll, enabled);
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
    sub_1BCAA3C(mScroll, v4);
  }
}


void __fastcall MasterFormationComponent__UpdateGuideLabel(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Behaviour_o *iconScroll; // x0
  __int64 v5; // x1
  float alphaAnimNow; // s8
  float alphaAnimTgt; // s9
  MasterFormationComponent_c *v8; // x0
  float realtimeSinceStartup; // s0
  bool v10; // w1

  if ( (byte_4B11505 & 1) == 0 )
  {
    sub_1BCA7E0(&MasterFormationComponent_TypeInfo, method, v2);
    byte_4B11505 = 1;
  }
  iconScroll = (UnityEngine_Behaviour_o *)this->fields.iconScroll;
  if ( !iconScroll )
    goto LABEL_23;
  if ( UnityEngine_Behaviour__get_enabled(iconScroll, 0LL) )
  {
    alphaAnimNow = this->fields.alphaAnimNow;
    alphaAnimTgt = this->fields.alphaAnimTgt;
    v8 = MasterFormationComponent_TypeInfo;
    if ( !MasterFormationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo, v5);
      v8 = MasterFormationComponent_TypeInfo;
    }
    this->fields.alphaAnimNow = alphaAnimNow
                              + (float)((float)(alphaAnimTgt - alphaAnimNow) * v8->static_fields->ALPHA_ANIMATION_SPD);
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
        goto LABEL_23;
      iconScroll = (UnityEngine_Behaviour_o *)UnityEngine_Behaviour__get_enabled(iconScroll, 0LL);
      if ( !this->fields.touchGuideLabel )
        goto LABEL_23;
      if ( ((unsigned __int8)iconScroll & 1) != 0 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.touchGuideLabel, 0, 0LL);
        iconScroll = (UnityEngine_Behaviour_o *)this->fields.scrollGuideLabel;
        if ( !iconScroll )
          goto LABEL_23;
        v10 = 1;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.touchGuideLabel, 1, 0LL);
        iconScroll = (UnityEngine_Behaviour_o *)this->fields.scrollGuideLabel;
        if ( !iconScroll )
          goto LABEL_23;
        v10 = 0;
      }
      UnityEngine_Behaviour__set_enabled(iconScroll, v10, 0LL);
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
LABEL_23:
    sub_1BCAA3C(iconScroll, method);
  }
}


void __fastcall MasterFormationComponent__UpdateIconSelected(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *mstEqIconList; // x0
  int size; // w21
  int32_t v8; // w20
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B1150F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Item__, v4, v5);
    byte_4B1150F = 1;
  }
  mstEqIconList = (System_Collections_Generic_List_object__o *)this->fields.mstEqIconList;
  if ( mstEqIconList )
  {
    size = mstEqIconList->fields._size;
    if ( size >= 1 )
    {
      v8 = 0;
      do
      {
        mstEqIconList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mstEqIconList,
                                                                       v8,
                                                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Item__);
        if ( !mstEqIconList )
          break;
        MasterEquipIconComponent__UpdateSelected(
          (MasterEquipIconComponent_o *)mstEqIconList,
          this->fields.currentEquipId,
          v10);
        if ( size == ++v8 )
          return;
        mstEqIconList = (System_Collections_Generic_List_object__o *)this->fields.mstEqIconList;
      }
      while ( mstEqIconList );
      sub_1BCAA3C(mstEqIconList, v9);
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
    sub_1BCAA3C(cmdSpellIconComp, method);
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

  if ( (byte_4B11503 & 1) == 0 )
  {
    sub_1BCA7E0(&MasterFormationComponent_NotificationDragState_TypeInfo, value, method);
    byte_4B11503 = 1;
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
    v8 = sub_1C05CD0(p_notificationDragState, v7, notificationDragState);
    v9 = notificationDragState == (System_Delegate_o *)v8;
    notificationDragState = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterFormationComponent_o *)sub_1BCACFC(v7);
  MasterFormationComponent__remove_notificationDragState(v10, v11, v12);
}


void __fastcall MasterFormationComponent__changeCmdSpellImg(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UserGameEntity_o *SelfUserGame; // x22
  const MethodInfo *v7; // x3
  __int64 SpellImageId; // x0
  __int64 v9; // x1
  CommandSpellIconComponent_o *cmdSpellIconComp; // x21
  int32_t v11; // w20
  int32_t CommandSpell; // w22
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Action_o *v16; // x23

  if ( (byte_4B1150A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__, v4, v5);
    byte_4B1150A = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  SpellImageId = MasterFormationComponent__getSpellImageId(
                   (MasterFormationComponent_o *)SelfUserGame,
                   this->fields.genderType,
                   this->fields.currentEquipId,
                   v7);
  if ( !SelfUserGame
    || (cmdSpellIconComp = this->fields.cmdSpellIconComp,
        v11 = SpellImageId,
        CommandSpell = UserGameEntity__getCommandSpell(SelfUserGame, 0LL),
        v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15),
        System_Action___ctor(
          v16,
          (Il2CppObject *)this,
          Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__,
          0LL),
        !cmdSpellIconComp) )
  {
    sub_1BCAA3C(SpellImageId, v9);
  }
  CommandSpellIconComponent__SetChangeCurrentCmdSepll(cmdSpellIconComp, v11, CommandSpell, v16, 0LL);
}


void __fastcall MasterFormationComponent__closeMasterFormation(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  UnityEngine_Component_o *loopCtr; // x0
  int32_t childCount; // w0
  int v9; // w22
  __int64 v10; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v12; // w0
  int v13; // w22
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x20
  __int64 v16; // x1

  if ( (byte_4B1151D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&UserEquipNewManager_TypeInfo, v4, v5);
    byte_4B1151D = 1;
  }
  MasterFormationComponent__destroyMasterFigure(this, method);
  loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_30;
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL);
  if ( !loopCtr )
    goto LABEL_30;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)loopCtr, 0LL);
  if ( childCount >= 1 )
  {
    v9 = childCount + 1;
    while ( 1 )
    {
      loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
      if ( !loopCtr )
        break;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL);
      if ( !loopCtr )
        break;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                             (UnityEngine_Transform_o *)loopCtr,
                                             v9 - 2,
                                             0LL);
      if ( !loopCtr )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(loopCtr, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
      if ( --v9 <= 1 )
        goto LABEL_13;
    }
LABEL_30:
    sub_1BCAA3C(loopCtr, v6);
  }
LABEL_13:
  loopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
  if ( !loopCtr )
    goto LABEL_30;
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL);
  if ( !loopCtr )
    goto LABEL_30;
  v12 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)loopCtr, 0LL);
  if ( v12 >= 1 )
  {
    v13 = v12 + 1;
    do
    {
      loopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
      if ( !loopCtr )
        goto LABEL_30;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL);
      if ( !loopCtr )
        goto LABEL_30;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                             (UnityEngine_Transform_o *)loopCtr,
                                             v13 - 2,
                                             0LL);
      if ( !loopCtr )
        goto LABEL_30;
      v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(loopCtr, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      UnityEngine_Object__DestroyImmediate_70154432(v15, 0LL);
    }
    while ( --v13 > 1 );
  }
  loopCtr = (UnityEngine_Component_o *)this->fields.userEquipEntity;
  if ( !loopCtr )
    goto LABEL_30;
  UserEquipEntity__SetOld((UserEquipEntity_o *)loopCtr, 0LL);
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v16);
  UserEquipNewManager__WriteData(0LL);
  loopCtr = (UnityEngine_Component_o *)this->fields.mScroll;
  if ( !loopCtr )
    goto LABEL_30;
  UIScrollView__ResetPosition((UIScrollView_o *)loopCtr, 0LL);
  loopCtr = (UnityEngine_Component_o *)this->fields.iconScroll;
  if ( !loopCtr )
    goto LABEL_30;
  UIScrollView__ResetPosition((UIScrollView_o *)loopCtr, 0LL);
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !loopCtr )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)loopCtr, 0, 0LL);
}


void __fastcall MasterFormationComponent__destroyMasterFigure(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o **p_masterFigure; // x19
  UnityEngine_Object_o *v5; // x20
  struct UIMasterFigureTextureOld_o *masterFigure; // t1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4B1151E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1151E = 1;
  }
  masterFigure = this->fields.masterFigure;
  p_masterFigure = (UnityEngine_Component_o **)&this->fields.masterFigure;
  v5 = (UnityEngine_Object_o *)masterFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    if ( !*p_masterFigure )
      sub_1BCAA3C(0LL, v7);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_masterFigure, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_masterFigure = 0LL;
    sub_1BCA784(p_masterFigure, 0LL);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  void *monitor; // x19
  Il2CppClass *klass; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v4 = equipId;
  if ( (byte_4B1151C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EquipMaster___, *(_QWORD *)&genderType, equipId);
    sub_1BCA7E0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B1151C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v4,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v13);
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
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v17.fields.currentCryptoKey = klass;
  *(_QWORD *)&v17.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL);
}


bool __fastcall MasterFormationComponent__isChangeEquip(MasterFormationComponent_o *this, const MethodInfo *method)
{
  return this->fields.isChange;
}


void __fastcall MasterFormationComponent__onClickLeftArrow(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  int32_t childCount; // w8
  int v18; // w8
  int32_t v19; // w20
  UICenterOnChild_o *iconCenterChild; // x21
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1151A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_MasterFormationComponent_onClickLeftArrow__, v10, v11);
    sub_1BCA7E0(&StringLiteral_11380/*"RefreshCurrentInfo"*/, v12, v13);
    byte_4B1151A = 1;
  }
  memset(&v23, 0, sizeof(v23));
  if ( !this->fields.isDragStart && !this->fields.isIconDragStart )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
    *(_WORD *)&this->fields.isChangeMasterImg = 257;
    if ( !leftArrowBtn )
      goto LABEL_26;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_26;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    *(_WORD *)&this->fields.isDragStart = 0;
    UnityEngine_MonoBehaviour__CancelInvoke_70138824(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11380/*"RefreshCurrentInfo"*/,
      0LL);
    v15 = Method_MasterFormationComponent_onClickLeftArrow__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_onClickLeftArrow__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1BCA7F8(Method_MasterFormationComponent_onClickLeftArrow__);
    v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 7, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr;
    if ( !leftArrowBtn )
      goto LABEL_26;
    leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)leftArrowBtn,
                                                0LL);
    if ( !leftArrowBtn )
      goto LABEL_26;
    childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)leftArrowBtn, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
    v18 = childCount - 1;
    v19 = this->fields.currentMoveIconIdx - 1 < 0 ? v18 : this->fields.currentMoveIconIdx - 1;
    this->fields.currentMoveIconIdx = v19;
    if ( !leftArrowBtn
      || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr) == 0LL)
      || (iconCenterChild = this->fields.iconCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0LL)) == 0LL)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v19,
                                                      0LL),
          !iconCenterChild)
      || (UICenterOnChild__CenterOn_47224044(iconCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
    {
LABEL_26:
      sub_1BCAA3C(leftArrowBtn, method);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      (System_Collections_Generic_List_object__o *)leftArrowBtn,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v23.fields._current )
        sub_1BCAA3C(0LL, v21);
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v23.fields._current, 0, v22);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  }
}


void __fastcall MasterFormationComponent__onClickRightArrow(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  int32_t childCount; // w0
  int32_t currentMoveIconIdx; // w9
  int32_t v19; // w8
  int32_t v20; // w20
  UICenterOnChild_o *iconCenterChild; // x21
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11519 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_MasterFormationComponent_onClickRightArrow__, v10, v11);
    sub_1BCA7E0(&StringLiteral_11380/*"RefreshCurrentInfo"*/, v12, v13);
    byte_4B11519 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !this->fields.isDragStart && !this->fields.isIconDragStart )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
    *(_WORD *)&this->fields.isChangeMasterImg = 257;
    if ( !leftArrowBtn )
      goto LABEL_26;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn;
    if ( !leftArrowBtn )
      goto LABEL_26;
    UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL);
    *(_WORD *)&this->fields.isDragStart = 0;
    UnityEngine_MonoBehaviour__CancelInvoke_70138824(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11380/*"RefreshCurrentInfo"*/,
      0LL);
    v15 = Method_MasterFormationComponent_onClickRightArrow__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_onClickRightArrow__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1BCA7F8(Method_MasterFormationComponent_onClickRightArrow__);
    v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 7, 0LL);
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr;
    if ( !leftArrowBtn )
      goto LABEL_26;
    leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)leftArrowBtn,
                                                0LL);
    if ( !leftArrowBtn )
      goto LABEL_26;
    childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)leftArrowBtn, 0LL);
    currentMoveIconIdx = this->fields.currentMoveIconIdx;
    v19 = childCount;
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
    v20 = currentMoveIconIdx + 1 < v19 ? currentMoveIconIdx + 1 : 0;
    this->fields.currentMoveIconIdx = v20;
    if ( !leftArrowBtn
      || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr) == 0LL)
      || (iconCenterChild = this->fields.iconCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0LL)) == 0LL)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v20,
                                                      0LL),
          !iconCenterChild)
      || (UICenterOnChild__CenterOn_47224044(iconCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
    {
LABEL_26:
      sub_1BCAA3C(leftArrowBtn, method);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      (System_Collections_Generic_List_object__o *)leftArrowBtn,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v24,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v24.fields._current )
        sub_1BCAA3C(0LL, v22);
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v24.fields._current, 0, v23);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
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

  if ( (byte_4B11504 & 1) == 0 )
  {
    sub_1BCA7E0(&MasterFormationComponent_NotificationDragState_TypeInfo, value, method);
    byte_4B11504 = 1;
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
    v8 = sub_1C05CD0(p_notificationDragState, v7, notificationDragState);
    v9 = notificationDragState == (System_Delegate_o *)v8;
    notificationDragState = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterFormationComponent_o *)sub_1BCACFC(v7);
  MasterFormationComponent__Update(v10, v11);
}


void __fastcall MasterFormationComponent__setChangeMasterInfo(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B1151B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5567/*"END_SET"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_11380/*"RefreshCurrentInfo"*/, v4, v5);
    byte_4B1151B = 1;
  }
  MasterFormationComponent__setMstImg(this, this->fields.currentEquipId, v2);
  if ( this->fields.isDragStart || this->fields.isIconDragStart )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11380/*"RefreshCurrentInfo"*/,
      0.1,
      0LL);
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, v6);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5567/*"END_SET"*/, 0LL);
}


void __fastcall MasterFormationComponent__setCmdSpellImg(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v9; // x1
  BattleWindowComponent_o *cmdSpellWinComp; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  struct CommandSpellWindowComponent_o *v13; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v14; // x21
  UnityEngine_Vector2_o v15; // 0:s0.4,4:s1.4

  if ( (byte_4B11507 & 1) == 0 )
  {
    sub_1BCA7E0(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MasterFormationComponent_CloseCmdSpell__, v4, v5);
    sub_1BCA7E0(&MasterFormationComponent_TypeInfo, v6, v7);
    byte_4B11507 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.cmdSpellIconComp )
    goto LABEL_11;
  CommandSpellIconComponent__SetData(this->fields.cmdSpellIconComp, SelfUserGame, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.cmdSpellIconComp;
  if ( !SelfUserGame )
    goto LABEL_11;
  v15.fields.x = 130.0;
  v15.fields.y = 130.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)SelfUserGame, v15, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.cmdSpellWinComp;
  if ( !SelfUserGame )
    goto LABEL_11;
  CommandSpellWindowComponent__InitializeCommandSpell((CommandSpellWindowComponent_o *)SelfUserGame, 0LL, 0, -1, 0LL);
  SelfUserGame = (UserGameEntity_o *)MasterFormationComponent_TypeInfo;
  cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
  if ( !MasterFormationComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo, v9);
  if ( !cmdSpellWinComp
    || (BattleWindowComponent__setInitData(
          cmdSpellWinComp,
          2,
          MasterFormationComponent_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME,
          0,
          0LL),
        (v13 = this->fields.cmdSpellWinComp) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(SelfUserGame, v9);
  }
  v13->fields.mode = 0;
  v14 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_1BCAA2C(
                                                               CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo,
                                                               v9,
                                                               v11,
                                                               v12);
  CommandSpellWindowComponent_CloseButtonCallBack___ctor(
    v14,
    (Il2CppObject *)this,
    (intptr_t)Method_MasterFormationComponent_CloseCmdSpell__,
    0LL);
  v13->fields.callback_close = v14;
  sub_1BCA784(&v13->fields.callback_close, v14);
}


void __fastcall MasterFormationComponent__setCmdSpellRecoverTime(
        MasterFormationComponent_o *this,
        int64_t recoverTime,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UILabel_o *recoverTitleLb; // x21
  System_String_o *cmdSpellRecTimeInfo; // x0
  unsigned __int64 v13; // x24
  int v14; // w25
  int v15; // w26
  UILabel_o *recoverTimeLb; // x19
  System_String_o *v17; // x20
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x22
  Il2CppObject *v20; // x0
  int v21; // [xsp+Ch] [xbp-54h] BYREF
  int v22; // [xsp+18h] [xbp-48h] BYREF
  int v23; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B11508 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, recoverTime, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_3781/*"COMMAND_SPELL_RECOVER_TIME"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_3784/*"COMMNAD_SPELL_RECV_TXT"*/, v9, v10);
    byte_4B11508 = 1;
  }
  if ( recoverTime > 0 )
  {
    recoverTitleLb = this->fields.recoverTitleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, recoverTime);
    cmdSpellRecTimeInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3784/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
    if ( recoverTitleLb )
    {
      v13 = recoverTime / 0xE10uLL;
      v14 = (int)(recoverTime / 0x3CuLL) % 60;
      v15 = recoverTime % 0x3CuLL;
      UILabel__set_text(recoverTitleLb, cmdSpellRecTimeInfo, 0LL);
      recoverTimeLb = this->fields.recoverTimeLb;
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3781/*"COMMAND_SPELL_RECOVER_TIME"*/, 0LL);
      v23 = v13;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
      v22 = v14;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
      v21 = v15;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
      cmdSpellRecTimeInfo = System_String__Format_62415660(v17, v18, v19, v20, 0LL);
      if ( recoverTimeLb )
      {
        UILabel__set_text(recoverTimeLb, cmdSpellRecTimeInfo, 0LL);
        return;
      }
    }
LABEL_11:
    sub_1BCAA3C(cmdSpellRecTimeInfo, recoverTime);
  }
  cmdSpellRecTimeInfo = (System_String_o *)this->fields.cmdSpellRecTimeInfo;
  if ( !cmdSpellRecTimeInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cmdSpellRecTimeInfo, 0, 0LL);
}


void __fastcall MasterFormationComponent__setCommandSpellInfo(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *usrGameEnt; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1
  int64_t recoverTime; // [xsp+0h] [xbp-20h] BYREF
  int32_t count; // [xsp+Ch] [xbp-14h] BYREF

  count = 0;
  recoverTime = 0LL;
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *mstEqInfoList; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11518 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__, v8, v9);
    byte_4B11518 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  mstEqInfoList = (System_Collections_Generic_List_object__o *)this->fields.mstEqInfoList;
  if ( !mstEqInfoList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    mstEqInfoList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1BCAA3C(0LL, v11);
    MasterEquipInfoComponent__setDispEffectObj((MasterEquipInfoComponent_o *)v13.fields._current, 0, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setDispRePosition(
        MasterFormationComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UIWrapContent_o *loopCtr; // x0
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x9
  int v9; // w8
  int32_t v10; // w1
  UICenterOnChild_o *iconCenterChild; // x21

  if ( (byte_4B11511 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, *(_QWORD *)&idx, method);
    sub_1BCA7E0(&MasterFormationComponent_TypeInfo, v5, v6);
    byte_4B11511 = 1;
  }
  loopCtr = this->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_23;
  UIWrapContent__setScrollPos(loopCtr, idx, 0LL);
  if ( this->fields.isScrollEquipIcon )
  {
    if ( this->fields.isFirst )
    {
      this->fields.isFirst = 0;
      loopCtr = (UIWrapContent_o *)MasterFormationComponent_TypeInfo;
      if ( !MasterFormationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo, *(_QWORD *)&idx);
        loopCtr = (UIWrapContent_o *)MasterFormationComponent_TypeInfo;
      }
      currentList = this->fields.currentList;
      v9 = idx - *(_DWORD *)(*(_QWORD *)&loopCtr[1].fields.mHorizontal + 4LL) / 2;
      if ( v9 < 0 )
      {
        if ( !currentList )
          goto LABEL_23;
        v9 += currentList->fields._size;
      }
      else if ( !currentList )
      {
        goto LABEL_23;
      }
      loopCtr = this->fields.iconLoopCtr;
      if ( !loopCtr )
        goto LABEL_23;
      v10 = currentList->fields._size + v9;
    }
    else
    {
      loopCtr = this->fields.iconLoopCtr;
      if ( !loopCtr )
        goto LABEL_23;
      v10 = idx;
    }
    UIWrapContent__setScrollPos(loopCtr, v10, 0LL);
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
            UICenterOnChild__CenterOn_47224044(iconCenterChild, (UnityEngine_Transform_o *)loopCtr, 1, 0LL);
            goto LABEL_22;
          }
        }
      }
    }
LABEL_23:
    sub_1BCAA3C(loopCtr, *(_QWORD *)&idx);
  }
LABEL_22:
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct UserGameEntity_o *SelfUserGame; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  long double v19; // q0
  int32_t lv; // w8
  __int64 v21; // x0
  __int64 v22; // x0
  Il2CppObject *Entity; // x0
  struct UserEquipEntity_o *userEquipEntity; // x8
  __int64 v25; // x21
  __int64 v26; // x22
  int32_t v27; // w1
  const MethodInfo *v28; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4B11506 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEquipMaster___, userData, userEquipId);
    sub_1BCA7E0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13, v14);
    byte_4B11506 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_1BCA784(&this->fields.usrGameEnt, SelfUserGame);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.arrowInfo;
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.mScroll;
  if ( !gameObject )
    goto LABEL_25;
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.iconScroll;
  if ( !gameObject )
    goto LABEL_25;
  UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0LL);
  this->fields.usrGameEnt = userData;
  gameObject = (UnityEngine_GameObject_o *)sub_1BCA784(&this->fields.usrGameEnt, userData);
  if ( userEquipId <= 0 )
  {
    if ( !userData )
      goto LABEL_25;
    gameObject = (UnityEngine_GameObject_o *)UserGameEntity__getActiveUserEquipId(userData, 0LL);
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
    v27 = 0;
    goto LABEL_24;
  }
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C1C6BC(v19);
  v22 = *(_QWORD *)(*(_QWORD *)(v21 + 192) + 16LL);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1C1C6BC(v19);
  gameObject = **(UnityEngine_GameObject_o ***)(v22 + 184);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                   this->fields.usrEquipId,
                   (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__),
        this->fields.userEquipEntity = (struct UserEquipEntity_o *)Entity,
        gameObject = (UnityEngine_GameObject_o *)sub_1BCA784(&this->fields.userEquipEntity, Entity),
        (userEquipEntity = this->fields.userEquipEntity) == 0LL) )
  {
LABEL_25:
    sub_1BCAA3C(gameObject, v17);
  }
  v26 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
  v25 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
  *(_QWORD *)&v29.fields.currentCryptoKey = v26;
  *(_QWORD *)&v29.fields.fakeValue = v25;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v29, 0LL);
  this->fields.currentEquipId = v27;
LABEL_24:
  MasterFormationComponent__setMstImg(this, v27, v18);
  MasterFormationComponent__setUsrEquipData(this, v28);
  this->fields.isChangeMasterImg = 1;
  this->fields.notificationDragState = notificationDragState;
  sub_1BCA784(&this->fields.notificationDragState, notificationDragState);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setMstEquipIconList(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  System_Collections_Generic_List_object__o *v53; // x21
  __int64 v54; // x1
  struct UICenterOnChild_o **p_iconCenterChild; // x21
  UnityEngine_Object_o *iconCenterChild; // x22
  __int64 iconLoopCtr; // x0
  __int64 v58; // x1
  Il2CppObject *v59; // x0
  struct UIWrapContent_o *v60; // x8
  UILabel_o *touchGuideLabel; // x22
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  int size; // w28
  const MethodInfo *v64; // x2
  __int64 v65; // x3
  float x; // s10
  float y; // s8
  float z; // s9
  struct UIScrollView_o *iconScroll; // x22
  _QWORD *p_onDragStarted; // x22
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v72; // x24
  System_Delegate_o *v73; // x0
  System_Delegate_o *v74; // x8
  UIScrollView_OnDragNotification_c *v75; // x1
  struct UIWrapContent_o *v76; // x8
  int v77; // w9
  int32_t itemSize; // w8
  bool isScrollEquipIcon; // w1
  int v80; // w8
  __int64 v81; // x2
  __int64 v82; // x3
  struct UIScrollView_o *v83; // x22
  _QWORD *p_onDragFinished; // x22
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v86; // x24
  System_Delegate_o *v87; // x0
  UIScrollView_OnDragNotification_c *v88; // x1
  __int64 v89; // x2
  __int64 v90; // x3
  struct UICenterOnChild_o *v91; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v93; // x23
  System_Delegate_o *v94; // x0
  SpringPanel_OnFinished_c *v95; // x1
  __int64 v96; // x1
  UILabel_o *scrollGuideLabel; // x21
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  System_Collections_Generic_List_object__o *v101; // x21
  int v102; // w9
  int32_t i; // w23
  UnityEngine_GameObject_o *equipIconPrefab; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v106; // x24
  __int64 v107; // x2
  UnityEngine_Transform_o *v108; // x25
  UnityEngine_Transform_o *v109; // x25
  int v110; // s0
  System_String_o *v113; // x0
  struct System_Object_array *items; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  Il2CppClass **v117; // x0
  System_Collections_Generic_List_object__o *v118; // x8
  struct System_Object_array *v119; // x9
  _QWORD *v120; // x10
  __int64 v121; // x11
  MasterEquipIconComponent_o *v122; // x24
  Il2CppClass **v123; // x0
  Il2CppObject *Item; // x0
  int32_t v125; // w25
  UserEquipEntity_o *v126; // x26
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  MasterEquipIconComponent_CallbackFunc_o *v130; // x27
  const MethodInfo *v131; // x3
  int64_t v132; // x2
  int32_t v133; // w3
  const MethodInfo *v134; // x6
  const MethodInfo *v135; // x2
  int32_t v136; // w20
  struct UIWrapContent_o *v137; // x8
  int v138; // [xsp+4h] [xbp-8Ch]
  struct System_Collections_Generic_List_MasterEquipIconComponent__o **p_mstEqIconList; // [xsp+8h] [xbp-88h]
  int v140; // [xsp+18h] [xbp-78h]
  int32_t v141; // [xsp+1Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v143; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1150D & 1) == 0 )
  {
    sub_1BCA7E0(&MasterEquipIconComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo, v27, v28);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_MasterFormationComponent_OnClickIcon__, v31, v32);
    sub_1BCA7E0(&Method_MasterFormationComponent_OnIconCenterOnChildFinished__, v33, v34);
    sub_1BCA7E0(&Method_MasterFormationComponent_OnIconDragFinished__, v35, v36);
    sub_1BCA7E0(&Method_MasterFormationComponent_OnIconDragStarted__, v37, v38);
    sub_1BCA7E0(&MasterFormationComponent_TypeInfo, v39, v40);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v41, v42);
    sub_1BCA7E0(&UIScrollView_OnDragNotification_TypeInfo, v43, v44);
    sub_1BCA7E0(&SpringPanel_OnFinished_TypeInfo, v45, v46);
    sub_1BCA7E0(&StringLiteral_8651/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_8650/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_5061/*"D3"*/, v51, v52);
    byte_4B1150D = 1;
  }
  v141 = 0;
  v53 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__);
  this->fields.mstEqIconList = (struct System_Collections_Generic_List_MasterEquipIconComponent__o *)v53;
  p_mstEqIconList = &this->fields.mstEqIconList;
  sub_1BCA784(&this->fields.mstEqIconList, v53);
  p_iconCenterChild = &this->fields.iconCenterChild;
  iconCenterChild = (UnityEngine_Object_o *)this->fields.iconCenterChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
  iconLoopCtr = UnityEngine_Object__op_Equality(iconCenterChild, 0LL, 0LL);
  if ( (iconLoopCtr & 1) != 0 )
  {
    iconLoopCtr = (__int64)this->fields.iconLoopCtr;
    if ( !iconLoopCtr )
      goto LABEL_87;
    iconLoopCtr = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconLoopCtr, 0LL);
    if ( !iconLoopCtr )
      goto LABEL_87;
    v59 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)iconLoopCtr,
            (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_iconCenterChild = (struct UICenterOnChild_o *)v59;
    iconLoopCtr = sub_1BCA784(&this->fields.iconCenterChild, v59);
  }
  v60 = this->fields.iconLoopCtr;
  if ( !v60 )
    goto LABEL_87;
  v60->fields.itemSize = 64;
  touchGuideLabel = this->fields.touchGuideLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58);
  iconLoopCtr = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8651/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/, 0LL);
  if ( !touchGuideLabel
    || (UILabel__set_text(touchGuideLabel, (System_String_o *)iconLoopCtr, 0LL),
        (currentList = this->fields.currentList) == 0LL)
    || (iconLoopCtr = (__int64)this->fields.iconScroll) == 0
    || (size = currentList->fields._size,
        (iconLoopCtr = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconLoopCtr, 0LL)) == 0) )
  {
LABEL_87:
    sub_1BCAA3C(iconLoopCtr, v58);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconLoopCtr, 0LL);
  iconLoopCtr = (__int64)MasterFormationComponent_TypeInfo;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( !MasterFormationComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo, v58);
    iconLoopCtr = (__int64)MasterFormationComponent_TypeInfo;
  }
  if ( size > *(_DWORD *)(*(_QWORD *)(iconLoopCtr + 184) + 4LL) )
  {
    iconScroll = this->fields.iconScroll;
    this->fields.isScrollEquipIcon = 1;
    if ( !iconScroll )
      goto LABEL_87;
    onDragStarted = (System_Delegate_o *)iconScroll->fields.onDragStarted;
    p_onDragStarted = &iconScroll->fields.onDragStarted;
    v72 = (UIScrollView_OnDragNotification_o *)sub_1BCAA2C(UIScrollView_OnDragNotification_TypeInfo, v58, v64, v65);
    UIScrollView_OnDragNotification___ctor(
      v72,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragStarted__,
      0LL);
    v73 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v72, 0LL);
    v74 = v73;
    if ( v73 )
    {
      v75 = UIScrollView_OnDragNotification_TypeInfo;
      if ( (UIScrollView_OnDragNotification_c *)v73->klass != UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_41;
      *p_onDragStarted = v73;
      if ( (UIScrollView_OnDragNotification_c *)v73->klass != v75 )
        goto LABEL_41;
    }
    else
    {
      *p_onDragStarted = 0LL;
    }
    iconLoopCtr = sub_1BCA784(p_onDragStarted, v73);
    v83 = this->fields.iconScroll;
    if ( !v83 )
      goto LABEL_87;
    onDragFinished = (System_Delegate_o *)v83->fields.onDragFinished;
    p_onDragFinished = &v83->fields.onDragFinished;
    v86 = (UIScrollView_OnDragNotification_o *)sub_1BCAA2C(UIScrollView_OnDragNotification_TypeInfo, v58, v81, v82);
    UIScrollView_OnDragNotification___ctor(
      v86,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragFinished__,
      0LL);
    v87 = System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v86, 0LL);
    v74 = v87;
    if ( v87 )
    {
      v88 = UIScrollView_OnDragNotification_TypeInfo;
      if ( (UIScrollView_OnDragNotification_c *)v87->klass != UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_41;
      *p_onDragFinished = v87;
      if ( (UIScrollView_OnDragNotification_c *)v87->klass != v88 )
        goto LABEL_41;
    }
    else
    {
      *p_onDragFinished = 0LL;
    }
    iconLoopCtr = sub_1BCA784(p_onDragFinished, v87);
    v91 = *p_iconCenterChild;
    if ( !v91 )
      goto LABEL_87;
    onFinished = (System_Delegate_o *)v91->fields.onFinished;
    p_iconCenterChild = (struct UICenterOnChild_o **)&v91->fields.onFinished;
    v93 = (SpringPanel_OnFinished_o *)sub_1BCAA2C(SpringPanel_OnFinished_TypeInfo, v58, v89, v90);
    SpringPanel_OnFinished___ctor(
      v93,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconCenterOnChildFinished__,
      0LL);
    v94 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v93, 0LL);
    v74 = v94;
    if ( !v94 )
      goto LABEL_42;
    v95 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v94->klass == SpringPanel_OnFinished_TypeInfo )
    {
      *p_iconCenterChild = (struct UICenterOnChild_o *)v94;
      if ( (SpringPanel_OnFinished_c *)v94->klass == v95 )
      {
LABEL_43:
        sub_1BCA784(p_iconCenterChild, v74);
        iconLoopCtr = (__int64)this->fields.arrowInfo;
        if ( !iconLoopCtr )
          goto LABEL_87;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLoopCtr, 1, 0LL);
        scrollGuideLabel = this->fields.scrollGuideLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v96);
        iconLoopCtr = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8650/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/, 0LL);
        if ( !scrollGuideLabel )
          goto LABEL_87;
        UILabel__set_text(scrollGuideLabel, (System_String_o *)iconLoopCtr, 0LL);
        isScrollEquipIcon = this->fields.isScrollEquipIcon;
        v80 = 2;
        goto LABEL_48;
      }
    }
LABEL_41:
    sub_1BCACFC(v74);
LABEL_42:
    *p_iconCenterChild = (struct UICenterOnChild_o *)v74;
    goto LABEL_43;
  }
  v76 = this->fields.iconLoopCtr;
  this->fields.isScrollEquipIcon = 0;
  if ( !v76 )
    goto LABEL_87;
  v77 = size - 1;
  itemSize = v76->fields.itemSize;
  if ( size - 1 < 0 )
    v77 = size;
  x = (float)-((v77 >> 1) * itemSize);
  isScrollEquipIcon = 0;
  if ( (size & 1) == 0 )
    x = x - (float)(itemSize / 2);
  v80 = 1;
LABEL_48:
  v138 = v80;
  MasterFormationComponent__SetEnabledEquipIconScroll(this, isScrollEquipIcon, v64);
  iconLoopCtr = (__int64)this->fields.iconCenterChild;
  if ( !iconLoopCtr )
    goto LABEL_87;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)iconLoopCtr, 0, 0LL);
  v101 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_GameObject__TypeInfo,
                                                        v98,
                                                        v99,
                                                        v100);
  System_Collections_Generic_List_object____ctor(
    v101,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v141 = 0;
  v102 = 0;
  do
  {
    v140 = v102;
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        iconLoopCtr = (__int64)this->fields.iconLoopCtr;
        if ( !iconLoopCtr )
          goto LABEL_87;
        equipIconPrefab = this->fields.equipIconPrefab;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconLoopCtr, 0LL);
        iconLoopCtr = (__int64)BaseMonoBehaviour__createObject(
                                 (BaseMonoBehaviour_o *)this,
                                 equipIconPrefab,
                                 transform,
                                 0LL,
                                 0LL);
        if ( !iconLoopCtr )
          goto LABEL_87;
        v106 = (UnityEngine_GameObject_o *)iconLoopCtr;
        iconLoopCtr = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)iconLoopCtr, 0LL);
        v108 = (UnityEngine_Transform_o *)iconLoopCtr;
        if ( !byte_4B109C6 )
        {
          iconLoopCtr = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v58, v107);
          byte_4B109C6 = 1;
        }
        if ( !v108 )
          goto LABEL_87;
        UnityEngine_Transform__set_localScale(v108, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        iconLoopCtr = (__int64)UnityEngine_GameObject__get_transform(v106, 0LL);
        if ( !this->fields.iconLoopCtr )
          goto LABEL_87;
        v109 = (UnityEngine_Transform_o *)iconLoopCtr;
        iconLoopCtr = (__int64)UnityEngine_Component__get_transform(
                                 (UnityEngine_Component_o *)this->fields.iconLoopCtr,
                                 0LL);
        if ( !iconLoopCtr )
          goto LABEL_87;
        *(UnityEngine_Vector3_o *)&v110 = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)iconLoopCtr,
                                            0LL);
        if ( !v109 )
          goto LABEL_87;
        UnityEngine_Transform__set_localPosition(v109, *(UnityEngine_Vector3_o *)&v110, 0LL);
        v113 = System_Int32__ToString_63206828((int32_t)&v141, (System_String_o *)StringLiteral_5061/*"D3"*/, 0LL);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v106, v113, 0LL);
        if ( !v101 )
          goto LABEL_87;
        items = v101->fields._items;
        v115 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v101->fields._version;
        if ( !items )
          goto LABEL_87;
        v116 = v101->fields._size;
        if ( (unsigned int)v116 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v101,
            (Il2CppObject *)v106,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
        }
        else
        {
          v117 = &items->obj.klass + v116;
          v101->fields._size = v116 + 1;
          v117[4] = (Il2CppClass *)v106;
          sub_1BCA784(v117 + 4, v106);
        }
        iconLoopCtr = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v106,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
        v118 = (System_Collections_Generic_List_object__o *)*p_mstEqIconList;
        if ( !*p_mstEqIconList )
          goto LABEL_87;
        v119 = v118->fields._items;
        v120 = Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__;
        ++v118->fields._version;
        if ( !v119 )
          goto LABEL_87;
        v121 = v118->fields._size;
        v122 = (MasterEquipIconComponent_o *)iconLoopCtr;
        if ( (unsigned int)v121 >= v119->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v118,
            (Il2CppObject *)iconLoopCtr,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
        }
        else
        {
          v123 = &v119->obj.klass + v121;
          v118->fields._size = v121 + 1;
          v123[4] = (Il2CppClass *)v122;
          sub_1BCA784(v123 + 4, v122);
        }
        iconLoopCtr = (__int64)this->fields.currentList;
        if ( !iconLoopCtr )
          goto LABEL_87;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)iconLoopCtr,
                 i,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
        v125 = v141;
        v126 = (UserEquipEntity_o *)Item;
        v130 = (MasterEquipIconComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                            MasterEquipIconComponent_CallbackFunc_TypeInfo,
                                                            v127,
                                                            v128,
                                                            v129);
        MasterEquipIconComponent_CallbackFunc___ctor(
          v130,
          (Il2CppObject *)this,
          (intptr_t)Method_MasterFormationComponent_OnClickIcon__,
          v131);
        if ( !v122 )
          goto LABEL_87;
        MasterEquipIconComponent__SetEquipInfo(v122, v126, v132, v133, v125, v130, v134);
        MasterEquipIconComponent__UpdateSelected(v122, this->fields.currentEquipId, v135);
        ++v141;
      }
    }
    v102 = v140 + 1;
  }
  while ( v140 + 1 != v138 );
  iconLoopCtr = (__int64)this->fields.iconLoopCtr;
  if ( !iconLoopCtr )
    goto LABEL_87;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)iconLoopCtr, 0LL);
  iconLoopCtr = (__int64)this->fields.iconLoopCtr;
  if ( !iconLoopCtr )
    goto LABEL_87;
  UIWrapContent__resetScroll((UIWrapContent_o *)iconLoopCtr, 0LL);
  if ( this->fields.isScrollEquipIcon )
  {
    iconLoopCtr = (__int64)this->fields.iconLoopCtr;
    if ( iconLoopCtr )
    {
      UIWrapContent__WrapContent((UIWrapContent_o *)iconLoopCtr, 0LL);
      return;
    }
    goto LABEL_87;
  }
  if ( !v101 )
    goto LABEL_87;
  if ( v101->fields._size >= 1 )
  {
    v136 = 0;
    while ( 1 )
    {
      iconLoopCtr = (__int64)System_Collections_Generic_List_object___get_Item(
                               v101,
                               v136,
                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !iconLoopCtr )
        break;
      iconLoopCtr = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)iconLoopCtr, 0LL);
      if ( !iconLoopCtr )
        break;
      v143.fields.x = x;
      v143.fields.y = y;
      v143.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconLoopCtr, v143, 0LL);
      v137 = this->fields.iconLoopCtr;
      if ( !v137 )
        break;
      ++v136;
      x = x + (float)v137->fields.itemSize;
      if ( v136 >= v101->fields._size )
        return;
    }
    goto LABEL_87;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setMstEquipList(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_object__o *v29; // x21
  struct System_Collections_Generic_List_MasterEquipInfoComponent__o **p_mstEqInfoList; // x20
  __int64 v31; // x1
  struct UICenterOnChild_o **p_centerChild; // x21
  UnityEngine_Object_o *centerChild; // x22
  __int64 loopCtr; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  __int64 v37; // x3
  Il2CppObject *v38; // x0
  struct UIWrapContent_o *v39; // x8
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  int size; // w25
  bool isScrollEquipDetail; // w1
  int v43; // w8
  struct UIScrollView_o *mScroll; // x22
  _QWORD *p_onDragStarted; // x22
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v47; // x24
  System_Delegate_o *v48; // x0
  System_Delegate_o *v49; // x8
  UIScrollView_OnDragNotification_c *v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  struct UICenterOnChild_o *v53; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v55; // x23
  System_Delegate_o *v56; // x0
  SpringPanel_OnFinished_c *v57; // x1
  int v58; // w9
  int32_t v59; // w22
  UnityEngine_GameObject_o *mstEquipInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v62; // x23
  __int64 v63; // x2
  UnityEngine_Transform_o *v64; // x24
  UnityEngine_Transform_o *v65; // x24
  int v66; // s0
  System_String_o *v69; // x0
  System_Collections_Generic_List_object__o *v70; // x8
  struct System_Object_array *items; // x9
  _QWORD *v72; // x10
  __int64 v73; // x11
  MasterEquipInfoComponent_o *v74; // x23
  Il2CppClass **v75; // x0
  int32_t v76; // w3
  const MethodInfo *v77; // x5
  int v78; // [xsp+4h] [xbp-6Ch]
  int v79; // [xsp+8h] [xbp-68h]
  int32_t moveIdx; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B1150C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_MasterFormationComponent_OnCenterOnChildFinished__, v17, v18);
    sub_1BCA7E0(&Method_MasterFormationComponent_OnDragStarted__, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&UIScrollView_OnDragNotification_TypeInfo, v23, v24);
    sub_1BCA7E0(&SpringPanel_OnFinished_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_5061/*"D3"*/, v27, v28);
    byte_4B1150C = 1;
  }
  moveIdx = 0;
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__);
  p_mstEqInfoList = &this->fields.mstEqInfoList;
  this->fields.mstEqInfoList = (struct System_Collections_Generic_List_MasterEquipInfoComponent__o *)v29;
  sub_1BCA784(&this->fields.mstEqInfoList, v29);
  p_centerChild = &this->fields.centerChild;
  centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  loopCtr = UnityEngine_Object__op_Equality(centerChild, 0LL, 0LL);
  if ( (loopCtr & 1) != 0 )
  {
    loopCtr = (__int64)this->fields.loopCtr;
    if ( !loopCtr )
      goto LABEL_50;
    loopCtr = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)loopCtr, 0LL);
    if ( !loopCtr )
      goto LABEL_50;
    v38 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)loopCtr,
            (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (struct UICenterOnChild_o *)v38;
    loopCtr = sub_1BCA784(&this->fields.centerChild, v38);
  }
  v39 = this->fields.loopCtr;
  if ( !v39 )
    goto LABEL_50;
  v39->fields.itemSize = 534;
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
    p_onDragStarted = &mScroll->fields.onDragStarted;
    v47 = (UIScrollView_OnDragNotification_o *)sub_1BCAA2C(UIScrollView_OnDragNotification_TypeInfo, v35, v36, v37);
    UIScrollView_OnDragNotification___ctor(
      v47,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnDragStarted__,
      0LL);
    v48 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v47, 0LL);
    v49 = v48;
    if ( v48 )
    {
      v50 = UIScrollView_OnDragNotification_TypeInfo;
      if ( (UIScrollView_OnDragNotification_c *)v48->klass != UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_23;
      *p_onDragStarted = v48;
      if ( (UIScrollView_OnDragNotification_c *)v48->klass != v50 )
        goto LABEL_23;
    }
    else
    {
      *p_onDragStarted = 0LL;
    }
    loopCtr = sub_1BCA784(p_onDragStarted, v48);
    v53 = *p_centerChild;
    if ( !v53 )
      goto LABEL_50;
    onFinished = (System_Delegate_o *)v53->fields.onFinished;
    p_centerChild = (struct UICenterOnChild_o **)&v53->fields.onFinished;
    v55 = (SpringPanel_OnFinished_o *)sub_1BCAA2C(SpringPanel_OnFinished_TypeInfo, v35, v51, v52);
    SpringPanel_OnFinished___ctor(
      v55,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnCenterOnChildFinished__,
      0LL);
    v56 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v55, 0LL);
    v49 = v56;
    if ( !v56 )
      goto LABEL_24;
    v57 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v56->klass == SpringPanel_OnFinished_TypeInfo )
    {
      *p_centerChild = (struct UICenterOnChild_o *)v56;
      if ( (SpringPanel_OnFinished_c *)v56->klass == v57 )
        goto LABEL_25;
    }
LABEL_23:
    sub_1BCACFC(v49);
LABEL_24:
    *p_centerChild = (struct UICenterOnChild_o *)v49;
LABEL_25:
    sub_1BCA784(p_centerChild, v49);
    isScrollEquipDetail = this->fields.isScrollEquipDetail;
    v43 = 2;
    goto LABEL_26;
  }
  isScrollEquipDetail = 0;
  v43 = 1;
  this->fields.isScrollEquipDetail = 0;
LABEL_26:
  v78 = v43;
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, isScrollEquipDetail, v36);
  moveIdx = 0;
  v58 = 0;
  do
  {
    v79 = v58;
    if ( size >= 1 )
    {
      v59 = 0;
      while ( 1 )
      {
        loopCtr = (__int64)this->fields.loopCtr;
        if ( !loopCtr )
          break;
        mstEquipInfoPrefab = this->fields.mstEquipInfoPrefab;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)loopCtr, 0LL);
        loopCtr = (__int64)BaseMonoBehaviour__createObject(
                             (BaseMonoBehaviour_o *)this,
                             mstEquipInfoPrefab,
                             transform,
                             0LL,
                             0LL);
        if ( !loopCtr )
          break;
        v62 = (UnityEngine_GameObject_o *)loopCtr;
        loopCtr = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)loopCtr, 0LL);
        v64 = (UnityEngine_Transform_o *)loopCtr;
        if ( !byte_4B109C6 )
        {
          loopCtr = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v35, v63);
          byte_4B109C6 = 1;
        }
        if ( !v64 )
          break;
        UnityEngine_Transform__set_localScale(v64, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        loopCtr = (__int64)UnityEngine_GameObject__get_transform(v62, 0LL);
        if ( !this->fields.loopCtr )
          break;
        v65 = (UnityEngine_Transform_o *)loopCtr;
        loopCtr = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.loopCtr, 0LL);
        if ( !loopCtr )
          break;
        *(UnityEngine_Vector3_o *)&v66 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)loopCtr,
                                           0LL);
        if ( !v65 )
          break;
        UnityEngine_Transform__set_localPosition(v65, *(UnityEngine_Vector3_o *)&v66, 0LL);
        v69 = System_Int32__ToString_63206828((int32_t)&moveIdx, (System_String_o *)StringLiteral_5061/*"D3"*/, 0LL);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v62, v69, 0LL);
        loopCtr = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             v62,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
        v70 = (System_Collections_Generic_List_object__o *)*p_mstEqInfoList;
        if ( !*p_mstEqInfoList )
          break;
        items = v70->fields._items;
        v72 = Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__;
        ++v70->fields._version;
        if ( !items )
          break;
        v73 = v70->fields._size;
        v74 = (MasterEquipInfoComponent_o *)loopCtr;
        if ( (unsigned int)v73 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v70,
            (Il2CppObject *)loopCtr,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v75 = &items->obj.klass + v73;
          v70->fields._size = v73 + 1;
          v75[4] = (Il2CppClass *)v74;
          sub_1BCA784(v75 + 4, v74);
        }
        loopCtr = (__int64)this->fields.currentList;
        if ( !loopCtr )
          break;
        loopCtr = (__int64)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)loopCtr,
                             v59,
                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
        if ( !v74 )
          break;
        MasterEquipInfoComponent__setEquipInfo(
          v74,
          (UserEquipEntity_o *)loopCtr,
          this->fields.usrEquipId,
          v76,
          moveIdx,
          v77);
        ++v59;
        ++moveIdx;
        if ( size == v59 )
          goto LABEL_45;
      }
LABEL_50:
      sub_1BCAA3C(loopCtr, v35);
    }
LABEL_45:
    v58 = v79 + 1;
  }
  while ( v79 + 1 != v78 );
  loopCtr = (__int64)this->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_50;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)loopCtr, 0LL);
  loopCtr = (__int64)this->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_50;
  UIWrapContent__resetScroll((UIWrapContent_o *)loopCtr, 0LL);
  loopCtr = (__int64)this->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_50;
  UIWrapContent__WrapContent((UIWrapContent_o *)loopCtr, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setMstImg(
        MasterFormationComponent_o *this,
        int32_t equipId,
        const MethodInfo *method)
{
  MasterFormationComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct UserGameEntity_o *usrGameEnt; // x8
  UnityEngine_Object_o *masterFigure; // x22
  __int64 v13; // x2
  __int64 v14; // x3
  UIMasterFigureTextureOld_o *Prefab_38634032; // x1
  UIMasterFigureTextureOld_o *v16; // x21
  int32_t genderType; // w20
  System_Action_o *monitor; // x22
  Il2CppObject *klass; // x23
  struct MasterFormationComponent___c_StaticFields *static_fields; // x0

  v4 = this;
  if ( (byte_4B11509 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&equipId, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_MasterFormationComponent___c__setMstImg_b__65_0__, v7, v8);
    this = (MasterFormationComponent_o *)sub_1BCA7E0(&MasterFormationComponent___c_TypeInfo, v9, v10);
    byte_4B11509 = 1;
  }
  usrGameEnt = v4->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_16;
  masterFigure = (UnityEngine_Object_o *)v4->fields.masterFigure;
  v4->fields.genderType = usrGameEnt->fields.genderType;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&equipId);
  if ( UnityEngine_Object__op_Equality(masterFigure, 0LL, 0LL) )
  {
    Prefab_38634032 = MasterFigureManagerOld__CreatePrefab_38634032(
                        v4->fields.mstImgBase,
                        1,
                        v4->fields.genderType,
                        equipId,
                        10,
                        0LL,
                        0,
                        (System_Nullable_Vector3__o)0,
                        0LL);
    v4->fields.masterFigure = Prefab_38634032;
    sub_1BCA784(&v4->fields.masterFigure, Prefab_38634032);
    return;
  }
  v16 = v4->fields.masterFigure;
  genderType = v4->fields.genderType;
  this = (MasterFormationComponent_o *)MasterFormationComponent___c_TypeInfo;
  if ( !MasterFormationComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterFormationComponent___c_TypeInfo, *(_QWORD *)&equipId);
    this = (MasterFormationComponent_o *)MasterFormationComponent___c_TypeInfo;
  }
  monitor = (System_Action_o *)this->fields.equipIconPrefab->monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this->fields.masterFigure) )
    {
      j_il2cpp_runtime_class_init_0(this, *(_QWORD *)&equipId);
      this = (MasterFormationComponent_o *)MasterFormationComponent___c_TypeInfo;
    }
    klass = (Il2CppObject *)this->fields.equipIconPrefab->klass;
    monitor = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&equipId, v13, v14);
    System_Action___ctor(monitor, klass, Method_MasterFormationComponent___c__setMstImg_b__65_0__, 0LL);
    static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
    static_fields->__9__65_0 = monitor;
    this = (MasterFormationComponent_o *)sub_1BCA784(&static_fields->__9__65_0, monitor);
  }
  if ( !v16 )
LABEL_16:
    sub_1BCAA3C(this, *(_QWORD *)&equipId);
  UIMasterFigureTextureOld__SetCharacter(v16, 1, genderType, equipId, monitor, 0, 0LL);
}


void __fastcall MasterFormationComponent__setPosCurrentEq(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *mstEqInfoList; // x0
  int size; // w21
  int32_t v8; // w20
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  struct System_Object_array *items; // x8

  if ( (byte_4B11510 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Item__, v4, v5);
    byte_4B11510 = 1;
  }
  if ( this->fields.usrEquipId >= 1 )
  {
    mstEqInfoList = (System_Collections_Generic_List_object__o *)this->fields.mstEqInfoList;
    if ( mstEqInfoList )
    {
      size = mstEqInfoList->fields._size;
      if ( size >= 1 )
      {
        v8 = 0;
        while ( 1 )
        {
          mstEqInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         mstEqInfoList,
                                                                         v8,
                                                                         (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Item__);
          if ( !mstEqInfoList || (items = mstEqInfoList[4].fields._items) == 0LL )
LABEL_12:
            sub_1BCAA3C(mstEqInfoList, v9);
          if ( items->bounds == (Il2CppArrayBounds *)this->fields.usrEquipId )
            break;
          if ( size == ++v8 )
            return;
          mstEqInfoList = (System_Collections_Generic_List_object__o *)this->fields.mstEqInfoList;
          if ( !mstEqInfoList )
            goto LABEL_12;
        }
        MasterFormationComponent__setDispRePosition(this, mstEqInfoList[4].fields._version, v10);
      }
    }
  }
}


void __fastcall MasterFormationComponent__setUsrEquipData(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  void *Instance; // x0
  const MethodInfo *v27; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  System_Collections_Generic_IEnumerable_T__o *List; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_object__o *v33; // x21
  struct System_Collections_Generic_List_UserEquipEntity__o **p_currentList; // x20
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_List_object__o *v37; // x21
  __int64 v38; // x2
  __int64 v39; // x3
  int32_t v40; // w22
  System_Collections_Generic_List_object__o *v41; // x8
  struct System_Object_array *items; // x9
  _QWORD *v43; // x10
  __int64 size; // x11
  Il2CppClass *v45; // x1
  Il2CppClass **v46; // x0
  System_Collections_Generic_List_object__o *v47; // x20
  System_Comparison_T__o *v48; // x21
  Il2CppObject *v49; // x22
  struct MasterFormationComponent___c_StaticFields *static_fields; // x0
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x1

  if ( (byte_4B1150B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_UserEquipEntity__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEquipMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipEntity__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipEntity__Sort__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipEntity___ctor__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipEntity___ctor___76802712, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_UserEquipEntity__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__, v22, v23);
    sub_1BCA7E0(&MasterFormationComponent___c_TypeInfo, v24, v25);
    byte_4B1150B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_27;
  if ( !Instance )
    goto LABEL_27;
  List = (System_Collections_Generic_IEnumerable_T__o *)UserEquipMaster__getList(
                                                          (UserEquipMaster_o *)Instance,
                                                          usrGameEnt->fields.userId,
                                                          0LL);
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserEquipEntity__TypeInfo,
                                                       v30,
                                                       v31,
                                                       v32);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
  p_currentList = &this->fields.currentList;
  this->fields.currentList = (struct System_Collections_Generic_List_UserEquipEntity__o *)v33;
  Instance = (void *)sub_1BCA784(&this->fields.currentList, v33);
  if ( !List )
    goto LABEL_27;
  if ( List[1].monitor )
  {
    v37 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_UserEquipEntity__TypeInfo,
                                                         v27,
                                                         v35,
                                                         v36);
    System_Collections_Generic_List_object____ctor_56235344(
      v37,
      List,
      (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_UserEquipEntity___ctor___76802712);
    if ( this->fields.usrEquipId >= 1 )
    {
      if ( !v37 )
        goto LABEL_27;
      if ( v37->fields._size >= 1 )
      {
        v40 = 0;
        while ( 1 )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       v37,
                       v40,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
          v41 = (System_Collections_Generic_List_object__o *)*p_currentList;
          if ( !*p_currentList )
            break;
          items = v41->fields._items;
          v43 = Method_System_Collections_Generic_List_UserEquipEntity__Add__;
          ++v41->fields._version;
          if ( !items )
            break;
          size = v41->fields._size;
          v45 = (Il2CppClass *)Instance;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v41,
              (Il2CppObject *)Instance,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &items->obj.klass + size;
            v41->fields._size = size + 1;
            v46[4] = v45;
            sub_1BCA784(v46 + 4, v45);
          }
          if ( ++v40 >= v37->fields._size )
            goto LABEL_18;
        }
LABEL_27:
        sub_1BCAA3C(Instance, v27);
      }
LABEL_18:
      v47 = (System_Collections_Generic_List_object__o *)*p_currentList;
      Instance = MasterFormationComponent___c_TypeInfo;
      if ( !MasterFormationComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterFormationComponent___c_TypeInfo, v27);
        Instance = MasterFormationComponent___c_TypeInfo;
      }
      v48 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
      if ( !v48 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance, v27);
          Instance = MasterFormationComponent___c_TypeInfo;
        }
        v49 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v48 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_UserEquipEntity__TypeInfo, v27, v38, v39);
        System_Comparison_object____ctor(v48, v49, Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__, 0LL);
        static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
        static_fields->__9__67_0 = (struct System_Comparison_UserEquipEntity__o *)v48;
        Instance = (void *)sub_1BCA784(&static_fields->__9__67_0, v48);
      }
      if ( !v47 )
        goto LABEL_27;
      System_Collections_Generic_List_object___Sort_56244000(
        v47,
        v48,
        (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_UserEquipEntity__Sort__);
    }
  }
  MasterFormationComponent__setMstEquipList(this, v27);
  MasterFormationComponent__setMstEquipIconList(this, v51);
  MasterFormationComponent__setPosCurrentEq(this, v52);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent_NotificationDragState___ctor(
        MasterFormationComponent_NotificationDragState_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A05A0C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A059C4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MasterFormationComponent_NotificationDragState__BeginInvoke(
        MasterFormationComponent_NotificationDragState_o *this,
        bool flg,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = flg;
  if ( (byte_4B11522 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, flg, callback);
    byte_4B11522 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall MasterFormationComponent_NotificationDragState__EndInvoke(
        MasterFormationComponent_NotificationDragState_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall MasterFormationComponent_NotificationDragState__Invoke(
        MasterFormationComponent_NotificationDragState_o *this,
        bool flg,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    flg,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall MasterFormationComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B11523 & 1) == 0 )
  {
    sub_1BCA7E0(&MasterFormationComponent___c_TypeInfo, v1, v2);
    byte_4B11523 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MasterFormationComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MasterFormationComponent___c_TypeInfo->static_fields->__9 = (struct MasterFormationComponent___c_o *)v4;
  sub_1BCA784(MasterFormationComponent___c_TypeInfo->static_fields, v4);
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

  if ( (byte_4B11524 & 1) == 0 )
  {
    this = (MasterFormationComponent___c_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, a, b);
    byte_4B11524 = 1;
  }
  if ( !a )
    goto LABEL_8;
  v7 = *(_QWORD *)&a->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&a->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, a);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (MasterFormationComponent___c_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v9, 0LL);
  if ( !b )
LABEL_8:
    sub_1BCAA3C(this, a);
  return (_DWORD)this - CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(b->fields.equipId, 0LL);
}