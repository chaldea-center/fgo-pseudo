void __fastcall MasterFormationComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MasterFormationComponent_StaticFields *static_fields; // x8

  if ( (byte_48DE075 & 1) == 0 )
  {
    sub_1B00CCC(&MasterFormationComponent_TypeInfo, v1);
    byte_48DE075 = 1;
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
  BattleWindowComponent_o *cmdSpellWinComp; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_48DE074 & 1) == 0 )
  {
    sub_1B00CCC(&Method_MasterFormationComponent_CloseCmdSpell__, method);
    byte_48DE074 = 1;
  }
  cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    goto LABEL_10;
  if ( BattleWindowComponent__isOpen(cmdSpellWinComp, 0LL) )
  {
    v4 = Method_MasterFormationComponent_CloseCmdSpell__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_CloseCmdSpell__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B00CE4();
    v5 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
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
    sub_1B00F28(cmdSpellWinComp, method);
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

  if ( (byte_48DE069 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, method);
    sub_1B00CCC(&StringLiteral_3396/*"CHANGE_INFO"*/, v3);
    byte_48DE069 = 1;
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
                                                    (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___)) == 0LL
    || (v6 = (MasterEquipInfoComponent_o *)leftArrowBtn,
        leftArrowBtn = (UnityEngine_Behaviour_o *)MasterEquipInfoComponent__getEquipId(
                                                    (MasterEquipInfoComponent_o *)leftArrowBtn,
                                                    method),
        this->fields.currentEquipId = (int)leftArrowBtn,
        (usrEquipEnt = v6->fields.usrEquipEnt) == 0LL) )
  {
LABEL_15:
    sub_1B00F28(leftArrowBtn, method);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)leftArrowBtn, (System_String_o *)StringLiteral_3396/*"CHANGE_INFO"*/, 0LL);
      return;
    }
    goto LABEL_15;
  }
}


void __fastcall MasterFormationComponent__OnClickCmdSpell(MasterFormationComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_48DE073 & 1) == 0 )
  {
    sub_1B00CCC(&Method_MasterFormationComponent_OnClickCmdSpell__, method);
    byte_48DE073 = 1;
  }
  v3 = Method_MasterFormationComponent_OnClickCmdSpell__;
  if ( (*((_BYTE *)Method_MasterFormationComponent_OnClickCmdSpell__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B00CE4();
  v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    sub_1B00F28(0LL, v5);
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
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x1
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  UICenterOnChild_o *centerChild; // x22
  struct UserEquipEntity_o *userEquipEntity; // x8
  __int64 v19; // x21
  __int64 v20; // x22
  struct UICenterOnChild_o *v21; // x8
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_48DE062 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, *(_QWORD *)&idx);
    sub_1B00CCC(&Method_MasterFormationComponent_OnClickIcon__, v9);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_48DE062 = 1;
  }
  if ( this->fields.currentEquipId != equipId && !this->fields.isDragStart && !this->fields.isIconDragStart )
  {
    v11 = Method_MasterFormationComponent_OnClickIcon__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_OnClickIcon__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1B00CE4();
    v12 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
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
        MasterFormationComponent__setDisEquipEffect(this, v15);
        MasterFormationComponent__setMstImg(this, equipId, v16);
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
              UICenterOnChild__CenterOn_45525356(centerChild, (UnityEngine_Transform_o *)iconCenterChild, 1, 0LL);
              userEquipEntity = this->fields.userEquipEntity;
              if ( userEquipEntity )
              {
                v20 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
                v19 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v25.fields.currentCryptoKey = v20;
                *(_QWORD *)&v25.fields.fakeValue = v19;
                iconCenterChild = (UnityEngine_Behaviour_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(
                                                               v25,
                                                               0LL);
                if ( (_DWORD)iconCenterChild != equipId )
                  goto LABEL_22;
                v21 = this->fields.centerChild;
                if ( v21 )
                {
                  iconCenterChild = (UnityEngine_Behaviour_o *)v21->fields.mCenteredObject;
                  if ( iconCenterChild )
                  {
                    iconCenterChild = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   (UnityEngine_GameObject_o *)iconCenterChild,
                                                                   (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
                    if ( iconCenterChild )
                    {
                      MasterEquipInfoComponent__setDispEffectObj((MasterEquipInfoComponent_o *)iconCenterChild, 1, v22);
LABEL_22:
                      MasterFormationComponent__UpdateIconSelected(this, v13);
                      MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v23);
                      MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v24);
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
    sub_1B00F28(iconCenterChild, v13);
  }
}


void __fastcall MasterFormationComponent__OnDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  struct MasterFormationComponent_NotificationDragState_o *notificationDragState; // x8

  if ( (byte_48DE066 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_11056/*"RefreshCurrentInfo"*/, method);
    byte_48DE066 = 1;
  }
  *(_WORD *)&this->fields.isChangeMasterImg = 1;
  this->fields.isDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_68062236(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11056/*"RefreshCurrentInfo"*/,
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
        (notificationDragState = this->fields.notificationDragState) == 0LL) )
  {
    sub_1B00F28(iconCenterChild, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  void *leftArrowBtn; // x0
  struct UICenterOnChild_o *iconCenterChild; // x8
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  struct MasterFormationComponent_NotificationDragState_o *notificationDragState; // x8
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48DE06A & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v7);
    sub_1B00CCC(&StringLiteral_11056/*"RefreshCurrentInfo"*/, v8);
    byte_48DE06A = 1;
  }
  memset(&v17, 0, sizeof(v17));
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
                   (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
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
  UnityEngine_MonoBehaviour__CancelInvoke_68062236(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11056/*"RefreshCurrentInfo"*/,
    0LL);
  notificationDragState = this->fields.notificationDragState;
  if ( !notificationDragState )
    goto LABEL_20;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))notificationDragState->fields.m_target)(
    notificationDragState->fields.original_method_info,
    0LL,
    *(_QWORD *)&notificationDragState->fields.extra_arg);
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v13);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v14);
  leftArrowBtn = this->fields.mstEqIconList;
  if ( !leftArrowBtn )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)leftArrowBtn,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v17.fields._current )
      sub_1B00F28(0LL, v15);
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v17.fields._current, 1, v16);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  leftArrowBtn = this->fields.iconCenterChild;
  if ( !leftArrowBtn )
LABEL_20:
    sub_1B00F28(leftArrowBtn, method);
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
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48DE068 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v5);
    byte_48DE068 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
  if ( !iconCenterChild
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 1, 0LL),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
  {
    sub_1B00F28(iconCenterChild, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)iconCenterChild,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1B00F28(0LL, v7);
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v9.fields._current, 0, v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
}


void __fastcall MasterFormationComponent__OnIconDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  struct MasterFormationComponent_NotificationDragState_o *notificationDragState; // x8

  if ( (byte_48DE067 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_11056/*"RefreshCurrentInfo"*/, method);
    byte_48DE067 = 1;
  }
  *(_WORD *)&this->fields.isChangeMasterImg = 257;
  this->fields.isIconDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_68062236(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11056/*"RefreshCurrentInfo"*/,
    0LL);
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 0, v3);
  leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
  if ( !leftArrowBtn
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL),
        (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL),
        (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL),
        (notificationDragState = this->fields.notificationDragState) == 0LL) )
  {
    sub_1B00F28(leftArrowBtn, v4);
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
  UnityEngine_Component_o *loopCtr; // x0
  __int64 v4; // x1
  struct MasterFormationComponent_NotificationDragState_o *notificationDragState; // x8
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2
  UICenterOnChild_o *centerChild; // x20
  UICenterOnChild_o *iconCenterChild; // x20
  const MethodInfo *v10; // x1

  if ( (byte_48DE06B & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_11056/*"RefreshCurrentInfo"*/, method);
    byte_48DE06B = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_68062236(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11056/*"RefreshCurrentInfo"*/,
    0LL);
  notificationDragState = this->fields.notificationDragState;
  if ( !notificationDragState )
    goto LABEL_22;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))notificationDragState->fields.m_target)(
    notificationDragState->fields.original_method_info,
    0LL,
    *(_QWORD *)&notificationDragState->fields.extra_arg);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v6);
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
      UICenterOnChild__CenterOn_45525356(centerChild, (UnityEngine_Transform_o *)loopCtr, 1, 0LL);
    }
  }
  if ( !this->fields.isIconDragStart )
  {
LABEL_20:
    MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v7);
    goto LABEL_21;
  }
  loopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
  if ( !loopCtr || (loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL)) == 0LL )
LABEL_22:
    sub_1B00F28(loopCtr, v4);
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)loopCtr, 0LL) < 1 )
    goto LABEL_20;
  this->fields.isIconDragStart = 0;
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 0, v7);
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
  UICenterOnChild__CenterOn_45525356(iconCenterChild, (UnityEngine_Transform_o *)loopCtr, 1, 0LL);
LABEL_21:
  MasterFormationComponent__UpdateIconSelected(this, v10);
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
      sub_1B00F28(mScroll, enabled);
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
      sub_1B00F28(iconScroll, enabled);
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
    sub_1B00F28(mScroll, v4);
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

  if ( (byte_48DE059 & 1) == 0 )
  {
    sub_1B00CCC(&MasterFormationComponent_TypeInfo, method);
    byte_48DE059 = 1;
  }
  iconScroll = (UnityEngine_Behaviour_o *)this->fields.iconScroll;
  if ( !iconScroll )
    goto LABEL_23;
  if ( UnityEngine_Behaviour__get_enabled(iconScroll, 0LL) )
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
        v8 = 1;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.touchGuideLabel, 1, 0LL);
        iconScroll = (UnityEngine_Behaviour_o *)this->fields.scrollGuideLabel;
        if ( !iconScroll )
          goto LABEL_23;
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
LABEL_23:
    sub_1B00F28(iconScroll, method);
  }
}


void __fastcall MasterFormationComponent__UpdateIconSelected(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *mstEqIconList; // x0
  int size; // w21
  int32_t v6; // w20
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_48DE063 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Count__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Item__, v3);
    byte_48DE063 = 1;
  }
  mstEqIconList = (System_Collections_Generic_List_object__o *)this->fields.mstEqIconList;
  if ( mstEqIconList )
  {
    size = mstEqIconList->fields._size;
    if ( size >= 1 )
    {
      v6 = 0;
      do
      {
        mstEqIconList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       mstEqIconList,
                                                                       v6,
                                                                       (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Item__);
        if ( !mstEqIconList )
          break;
        MasterEquipIconComponent__UpdateSelected(
          (MasterEquipIconComponent_o *)mstEqIconList,
          this->fields.currentEquipId,
          v8);
        if ( size == ++v6 )
          return;
        mstEqIconList = (System_Collections_Generic_List_object__o *)this->fields.mstEqIconList;
      }
      while ( mstEqIconList );
      sub_1B00F28(mstEqIconList, v7);
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
    sub_1B00F28(cmdSpellIconComp, method);
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

  if ( (byte_48DE057 & 1) == 0 )
  {
    sub_1B00CCC(&MasterFormationComponent_NotificationDragState_TypeInfo, value);
    byte_48DE057 = 1;
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
    v8 = sub_1B3C1BC(p_notificationDragState, v7, notificationDragState);
    v9 = notificationDragState == (System_Delegate_o *)v8;
    notificationDragState = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterFormationComponent_o *)sub_1B011E8(v7);
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

  if ( (byte_48DE05E & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__, v3);
    byte_48DE05E = 1;
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
        v11 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo),
        System_Action___ctor(
          v11,
          (Il2CppObject *)this,
          Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__,
          0LL),
        !cmdSpellIconComp) )
  {
    sub_1B00F28(SpellImageId, v7);
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
  int v7; // w22
  UnityEngine_Object_o *gameObject; // x20
  int32_t v9; // w0
  int v10; // w22
  UnityEngine_Object_o *v11; // x20

  if ( (byte_48DE071 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    sub_1B00CCC(&UserEquipNewManager_TypeInfo, v3);
    byte_48DE071 = 1;
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
    v7 = childCount + 1;
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
                                             v7 - 2,
                                             0LL);
      if ( !loopCtr )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(loopCtr, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_68077844(gameObject, 0LL);
      if ( --v7 <= 1 )
        goto LABEL_13;
    }
LABEL_30:
    sub_1B00F28(loopCtr, v4);
  }
LABEL_13:
  loopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
  if ( !loopCtr )
    goto LABEL_30;
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL);
  if ( !loopCtr )
    goto LABEL_30;
  v9 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)loopCtr, 0LL);
  if ( v9 >= 1 )
  {
    v10 = v9 + 1;
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
                                             v10 - 2,
                                             0LL);
      if ( !loopCtr )
        goto LABEL_30;
      v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(loopCtr, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_68077844(v11, 0LL);
    }
    while ( --v10 > 1 );
  }
  loopCtr = (UnityEngine_Component_o *)this->fields.userEquipEntity;
  if ( !loopCtr )
    goto LABEL_30;
  UserEquipEntity__SetOld((UserEquipEntity_o *)loopCtr, 0LL);
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
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
  UnityEngine_Component_o **p_masterFigure; // x19
  UnityEngine_Object_o *v4; // x20
  struct UIMasterFigureTextureOld_o *masterFigure; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48DE072 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48DE072 = 1;
  }
  masterFigure = this->fields.masterFigure;
  p_masterFigure = (UnityEngine_Component_o **)&this->fields.masterFigure;
  v4 = (UnityEngine_Object_o *)masterFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_masterFigure )
      sub_1B00F28(0LL, v6);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_masterFigure, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68077656(gameObject, 0LL);
    *p_masterFigure = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)p_masterFigure, 0, v8, v9);
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  void *monitor; // x19
  Il2CppClass *klass; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v4 = equipId;
  if ( (byte_48DE070 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_EquipMaster___, *(_QWORD *)&genderType);
    sub_1B00CCC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v6);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_48DE070 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v4,
                     (const MethodInfo_2FE6A4C *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B00F28(Instance, v10);
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
  *(_QWORD *)&v14.fields.currentCryptoKey = klass;
  *(_QWORD *)&v14.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v14, 0LL);
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
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  int32_t childCount; // w8
  int v12; // w8
  int32_t v13; // w20
  UICenterOnChild_o *iconCenterChild; // x21
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48DE06E & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v5);
    sub_1B00CCC(&Method_MasterFormationComponent_onClickLeftArrow__, v6);
    sub_1B00CCC(&StringLiteral_11056/*"RefreshCurrentInfo"*/, v7);
    byte_48DE06E = 1;
  }
  memset(&v17, 0, sizeof(v17));
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
    UnityEngine_MonoBehaviour__CancelInvoke_68062236(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11056/*"RefreshCurrentInfo"*/,
      0LL);
    v9 = Method_MasterFormationComponent_onClickLeftArrow__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_onClickLeftArrow__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B00CE4();
    v10 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 7, 0LL);
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
    v12 = childCount - 1;
    v13 = this->fields.currentMoveIconIdx - 1 < 0 ? v12 : this->fields.currentMoveIconIdx - 1;
    this->fields.currentMoveIconIdx = v13;
    if ( !leftArrowBtn
      || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr) == 0LL)
      || (iconCenterChild = this->fields.iconCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0LL)) == 0LL)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v13,
                                                      0LL),
          !iconCenterChild)
      || (UICenterOnChild__CenterOn_45525356(iconCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
    {
LABEL_26:
      sub_1B00F28(leftArrowBtn, method);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)leftArrowBtn,
      (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v17.fields._current )
        sub_1B00F28(0LL, v15);
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v17.fields._current, 0, v16);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
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
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  int32_t childCount; // w0
  int32_t currentMoveIconIdx; // w9
  int32_t v13; // w8
  int32_t v14; // w20
  UICenterOnChild_o *iconCenterChild; // x21
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48DE06D & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v5);
    sub_1B00CCC(&Method_MasterFormationComponent_onClickRightArrow__, v6);
    sub_1B00CCC(&StringLiteral_11056/*"RefreshCurrentInfo"*/, v7);
    byte_48DE06D = 1;
  }
  memset(&v18, 0, sizeof(v18));
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
    UnityEngine_MonoBehaviour__CancelInvoke_68062236(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11056/*"RefreshCurrentInfo"*/,
      0LL);
    v9 = Method_MasterFormationComponent_onClickRightArrow__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_onClickRightArrow__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B00CE4();
    v10 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 7, 0LL);
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
    v13 = childCount;
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
    v14 = currentMoveIconIdx + 1 < v13 ? currentMoveIconIdx + 1 : 0;
    this->fields.currentMoveIconIdx = v14;
    if ( !leftArrowBtn
      || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr) == 0LL)
      || (iconCenterChild = this->fields.iconCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0LL)) == 0LL)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v14,
                                                      0LL),
          !iconCenterChild)
      || (UICenterOnChild__CenterOn_45525356(iconCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
    {
LABEL_26:
      sub_1B00F28(leftArrowBtn, method);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)leftArrowBtn,
      (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v18,
              (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v18.fields._current )
        sub_1B00F28(0LL, v16);
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v18.fields._current, 0, v17);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
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

  if ( (byte_48DE058 & 1) == 0 )
  {
    sub_1B00CCC(&MasterFormationComponent_NotificationDragState_TypeInfo, value);
    byte_48DE058 = 1;
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
    v8 = sub_1B3C1BC(p_notificationDragState, v7, notificationDragState);
    v9 = notificationDragState == (System_Delegate_o *)v8;
    notificationDragState = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterFormationComponent_o *)sub_1B011E8(v7);
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

  if ( (byte_48DE06F & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_5432/*"END_SET"*/, method);
    sub_1B00CCC(&StringLiteral_11056/*"RefreshCurrentInfo"*/, v4);
    byte_48DE06F = 1;
  }
  MasterFormationComponent__setMstImg(this, this->fields.currentEquipId, v2);
  if ( this->fields.isDragStart || this->fields.isIconDragStart )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11056/*"RefreshCurrentInfo"*/,
      0.1,
      0LL);
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B00F28(0LL, v5);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5432/*"END_SET"*/, 0LL);
}


void __fastcall MasterFormationComponent__setCmdSpellImg(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v6; // x1
  BattleWindowComponent_o *cmdSpellWinComp; // x20
  struct CommandSpellWindowComponent_o *v8; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Vector2_o v12; // 0:s0.4,4:s1.4

  if ( (byte_48DE05B & 1) == 0 )
  {
    sub_1B00CCC(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo, method);
    sub_1B00CCC(&Method_MasterFormationComponent_CloseCmdSpell__, v3);
    sub_1B00CCC(&MasterFormationComponent_TypeInfo, v4);
    byte_48DE05B = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.cmdSpellIconComp )
    goto LABEL_11;
  CommandSpellIconComponent__SetData(this->fields.cmdSpellIconComp, SelfUserGame, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.cmdSpellIconComp;
  if ( !SelfUserGame )
    goto LABEL_11;
  v12.fields.x = 130.0;
  v12.fields.y = 130.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)SelfUserGame, v12, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.cmdSpellWinComp;
  if ( !SelfUserGame )
    goto LABEL_11;
  CommandSpellWindowComponent__InitializeCommandSpell((CommandSpellWindowComponent_o *)SelfUserGame, 0LL, 0, -1, 0LL);
  SelfUserGame = (UserGameEntity_o *)MasterFormationComponent_TypeInfo;
  cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
  if ( !MasterFormationComponent_TypeInfo->_2.cctor_finished )
    SelfUserGame = (UserGameEntity_o *)j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo);
  if ( !cmdSpellWinComp
    || (BattleWindowComponent__setInitData(
          cmdSpellWinComp,
          2,
          MasterFormationComponent_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME,
          0,
          0LL),
        (v8 = this->fields.cmdSpellWinComp) == 0LL) )
  {
LABEL_11:
    sub_1B00F28(SelfUserGame, v6);
  }
  v8->fields.mode = 0;
  v9 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_1B00F18(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo);
  CommandSpellWindowComponent_CloseButtonCallBack___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_MasterFormationComponent_CloseCmdSpell__,
    0LL);
  v8->fields.callback_close = v9;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v8->fields.callback_close, (int32_t)v9, v10, v11);
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
  unsigned __int64 v10; // x24
  int v11; // w25
  int v12; // w26
  UILabel_o *recoverTimeLb; // x19
  System_String_o *v14; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x22
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  int v27; // [xsp+Ch] [xbp-54h] BYREF
  int v28; // [xsp+18h] [xbp-48h] BYREF
  int v29; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_48DE05C & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, recoverTime);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_3709/*"COMMAND_SPELL_RECOVER_TIME"*/, v6);
    sub_1B00CCC(&StringLiteral_3712/*"COMMNAD_SPELL_RECV_TXT"*/, v7);
    byte_48DE05C = 1;
  }
  if ( recoverTime > 0 )
  {
    recoverTitleLb = this->fields.recoverTitleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    cmdSpellRecTimeInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3712/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
    if ( recoverTitleLb )
    {
      v10 = recoverTime / 0xE10uLL;
      v11 = (int)(recoverTime / 0x3CuLL) % 60;
      v12 = recoverTime % 0x3CuLL;
      UILabel__set_text(recoverTitleLb, cmdSpellRecTimeInfo, 0LL);
      recoverTimeLb = this->fields.recoverTimeLb;
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3709/*"COMMAND_SPELL_RECOVER_TIME"*/, 0LL);
      v29 = v10;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v15, v16, v17);
      v28 = v11;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v19, v20, v21);
      v27 = v12;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v23, v24, v25);
      cmdSpellRecTimeInfo = System_String__Format_60340188(v14, v18, v22, v26, 0LL);
      if ( recoverTimeLb )
      {
        UILabel__set_text(recoverTimeLb, cmdSpellRecTimeInfo, 0LL);
        return;
      }
    }
LABEL_11:
    sub_1B00F28(cmdSpellRecTimeInfo, recoverTime);
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
    sub_1B00F28(0LL, method);
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
  System_Collections_Generic_List_object__o *mstEqInfoList; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48DE06C & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__get_Current__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__, v5);
    byte_48DE06C = 1;
  }
  memset(&v9, 0, sizeof(v9));
  mstEqInfoList = (System_Collections_Generic_List_object__o *)this->fields.mstEqInfoList;
  if ( !mstEqInfoList )
    sub_1B00F28(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    mstEqInfoList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1B00F28(0LL, v7);
    MasterEquipInfoComponent__setDispEffectObj((MasterEquipInfoComponent_o *)v9.fields._current, 0, v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__);
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

  if ( (byte_48DE065 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, *(_QWORD *)&idx);
    sub_1B00CCC(&MasterFormationComponent_TypeInfo, v5);
    byte_48DE065 = 1;
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
        j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo);
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
            UICenterOnChild__CenterOn_45525356(iconCenterChild, (UnityEngine_Transform_o *)loopCtr, 1, 0LL);
            goto LABEL_22;
          }
        }
      }
    }
LABEL_23:
    sub_1B00F28(loopCtr, *(_QWORD *)&idx);
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
  __int64 v10; // x1
  __int64 v11; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x2
  int32_t lv; // w8
  __int64 v21; // x0
  __int64 v22; // x0
  Il2CppObject *Entity; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  struct UserEquipEntity_o *userEquipEntity; // x8
  __int64 v27; // x21
  __int64 v28; // x22
  int32_t v29; // w1
  const MethodInfo *v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_48DE05A & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserEquipMaster___, userData);
    sub_1B00CCC(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v9);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    byte_48DE05A = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.usrGameEnt, (int32_t)SelfUserGame, v13, v14);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.usrGameEnt, (int32_t)userData, v17, v18);
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
    v29 = 0;
    goto LABEL_24;
  }
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1B52BA8();
  v22 = *(_QWORD *)(*(_QWORD *)(v21 + 192) + 16LL);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1B52BA8();
  gameObject = **(UnityEngine_GameObject_o ***)(v22 + 184);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                   this->fields.usrEquipId,
                   (const MethodInfo_2FE6BF8 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__),
        this->fields.userEquipEntity = (struct UserEquipEntity_o *)Entity,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.userEquipEntity, (int32_t)Entity, v24, v25),
        (userEquipEntity = this->fields.userEquipEntity) == 0LL) )
  {
LABEL_25:
    sub_1B00F28(gameObject, v16);
  }
  v28 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
  v27 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v28;
  *(_QWORD *)&v33.fields.fakeValue = v27;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v33, 0LL);
  this->fields.currentEquipId = v29;
LABEL_24:
  MasterFormationComponent__setMstImg(this, v29, v19);
  MasterFormationComponent__setUsrEquipData(this, v30);
  this->fields.isChangeMasterImg = 1;
  this->fields.notificationDragState = notificationDragState;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.notificationDragState,
    (int32_t)notificationDragState,
    v31,
    v32);
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
  System_Collections_Generic_List_object__o *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  ServantStatusBattleListViewItem_o *p_iconCenterChild; // x21
  UnityEngine_Object_o *iconCenterChild; // x22
  __int64 iconLoopCtr; // x0
  __int64 v33; // x1
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  struct UIWrapContent_o *v37; // x8
  UILabel_o *touchGuideLabel; // x22
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  int size; // w28
  const MethodInfo *v41; // x2
  float x; // s10
  float y; // s8
  float z; // s9
  struct UIScrollView_o *iconScroll; // x22
  ServantStatusBattleListViewItem_o *p_onDragStarted; // x22
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v48; // x24
  System_Delegate_o *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_Delegate_o *v52; // x8
  UIScrollView_OnDragNotification_c *v53; // x1
  struct UIWrapContent_o *v54; // x8
  int v55; // w9
  int32_t itemSize; // w8
  bool isScrollEquipIcon; // w1
  int v58; // w8
  struct UIScrollView_o *v59; // x22
  ServantStatusBattleListViewItem_o *p_onDragFinished; // x22
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v62; // x24
  System_Delegate_o *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  UIScrollView_OnDragNotification_c *v66; // x1
  ServantStatusBattleListViewItem_c *klass; // x21
  System_Delegate_o *v68; // t1
  SpringPanel_OnFinished_o *v69; // x23
  System_Delegate_o *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  SpringPanel_OnFinished_c *v73; // x1
  UILabel_o *scrollGuideLabel; // x21
  System_Collections_Generic_List_object__o *v75; // x21
  int v76; // w9
  int32_t i; // w23
  UnityEngine_GameObject_o *equipIconPrefab; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v80; // x24
  UnityEngine_Transform_o *v81; // x25
  UnityEngine_Transform_o *v82; // x25
  int v83; // s0
  System_String_o *v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  struct System_Object_array *items; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  Il2CppClass **v92; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  System_Collections_Generic_List_object__o *v95; // x8
  struct System_Object_array *v96; // x9
  _QWORD *v97; // x10
  __int64 v98; // x11
  MasterEquipIconComponent_o *v99; // x24
  Il2CppClass **v100; // x0
  Il2CppObject *Item; // x0
  int32_t v102; // w25
  UserEquipEntity_o *v103; // x26
  MasterEquipIconComponent_CallbackFunc_o *v104; // x27
  const MethodInfo *v105; // x3
  int64_t v106; // x2
  int32_t v107; // w3
  const MethodInfo *v108; // x6
  const MethodInfo *v109; // x2
  int32_t v110; // w20
  struct UIWrapContent_o *v111; // x8
  int v112; // [xsp+4h] [xbp-8Ch]
  struct System_Collections_Generic_List_MasterEquipIconComponent__o **p_mstEqIconList; // [xsp+8h] [xbp-88h]
  int v114; // [xsp+18h] [xbp-78h]
  int32_t v115; // [xsp+1Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48DE061 & 1) == 0 )
  {
    sub_1B00CCC(&MasterEquipIconComponent_CallbackFunc_TypeInfo, method);
    sub_1B00CCC(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v3);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v12);
    sub_1B00CCC(&System_Collections_Generic_List_GameObject__TypeInfo, v13);
    sub_1B00CCC(&System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo, v14);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v15);
    sub_1B00CCC(&Method_MasterFormationComponent_OnClickIcon__, v16);
    sub_1B00CCC(&Method_MasterFormationComponent_OnIconCenterOnChildFinished__, v17);
    sub_1B00CCC(&Method_MasterFormationComponent_OnIconDragFinished__, v18);
    sub_1B00CCC(&Method_MasterFormationComponent_OnIconDragStarted__, v19);
    sub_1B00CCC(&MasterFormationComponent_TypeInfo, v20);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v21);
    sub_1B00CCC(&UIScrollView_OnDragNotification_TypeInfo, v22);
    sub_1B00CCC(&SpringPanel_OnFinished_TypeInfo, v23);
    sub_1B00CCC(&StringLiteral_8431/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/, v24);
    sub_1B00CCC(&StringLiteral_8430/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/, v25);
    sub_1B00CCC(&StringLiteral_4934/*"D3"*/, v26);
    byte_48DE061 = 1;
  }
  v115 = 0;
  v27 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__);
  this->fields.mstEqIconList = (struct System_Collections_Generic_List_MasterEquipIconComponent__o *)v27;
  p_mstEqIconList = &this->fields.mstEqIconList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mstEqIconList, (int32_t)v27, v28, v29);
  p_iconCenterChild = (ServantStatusBattleListViewItem_o *)&this->fields.iconCenterChild;
  iconCenterChild = (UnityEngine_Object_o *)this->fields.iconCenterChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  iconLoopCtr = UnityEngine_Object__op_Equality(iconCenterChild, 0LL, 0LL);
  if ( (iconLoopCtr & 1) != 0 )
  {
    iconLoopCtr = (__int64)this->fields.iconLoopCtr;
    if ( !iconLoopCtr )
      goto LABEL_87;
    iconLoopCtr = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)iconLoopCtr, 0LL);
    if ( !iconLoopCtr )
      goto LABEL_87;
    v34 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)iconLoopCtr,
            (const MethodInfo_2DADD20 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    p_iconCenterChild->klass = (ServantStatusBattleListViewItem_c *)v34;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.iconCenterChild, (int32_t)v34, v35, v36);
  }
  v37 = this->fields.iconLoopCtr;
  if ( !v37 )
    goto LABEL_87;
  v37->fields.itemSize = 64;
  touchGuideLabel = this->fields.touchGuideLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  iconLoopCtr = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8431/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/, 0LL);
  if ( !touchGuideLabel
    || (UILabel__set_text(touchGuideLabel, (System_String_o *)iconLoopCtr, 0LL),
        (currentList = this->fields.currentList) == 0LL)
    || (iconLoopCtr = (__int64)this->fields.iconScroll) == 0
    || (size = currentList->fields._size,
        (iconLoopCtr = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconLoopCtr, 0LL)) == 0) )
  {
LABEL_87:
    sub_1B00F28(iconLoopCtr, v33);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)iconLoopCtr, 0LL);
  iconLoopCtr = (__int64)MasterFormationComponent_TypeInfo;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
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
    p_onDragStarted = (ServantStatusBattleListViewItem_o *)&iconScroll->fields.onDragStarted;
    v48 = (UIScrollView_OnDragNotification_o *)sub_1B00F18(UIScrollView_OnDragNotification_TypeInfo);
    UIScrollView_OnDragNotification___ctor(
      v48,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragStarted__,
      0LL);
    v49 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v48, 0LL);
    v52 = v49;
    if ( v49 )
    {
      v53 = UIScrollView_OnDragNotification_TypeInfo;
      if ( (UIScrollView_OnDragNotification_c *)v49->klass != UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_41;
      p_onDragStarted->klass = (ServantStatusBattleListViewItem_c *)v49;
      if ( (UIScrollView_OnDragNotification_c *)v49->klass != v53 )
        goto LABEL_41;
    }
    else
    {
      p_onDragStarted->klass = 0LL;
    }
    sub_1B00C70(p_onDragStarted, (int32_t)v49, v50, v51);
    v59 = this->fields.iconScroll;
    if ( !v59 )
      goto LABEL_87;
    onDragFinished = (System_Delegate_o *)v59->fields.onDragFinished;
    p_onDragFinished = (ServantStatusBattleListViewItem_o *)&v59->fields.onDragFinished;
    v62 = (UIScrollView_OnDragNotification_o *)sub_1B00F18(UIScrollView_OnDragNotification_TypeInfo);
    UIScrollView_OnDragNotification___ctor(
      v62,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragFinished__,
      0LL);
    v63 = System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v62, 0LL);
    v52 = v63;
    if ( v63 )
    {
      v66 = UIScrollView_OnDragNotification_TypeInfo;
      if ( (UIScrollView_OnDragNotification_c *)v63->klass != UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_41;
      p_onDragFinished->klass = (ServantStatusBattleListViewItem_c *)v63;
      if ( (UIScrollView_OnDragNotification_c *)v63->klass != v66 )
        goto LABEL_41;
    }
    else
    {
      p_onDragFinished->klass = 0LL;
    }
    sub_1B00C70(p_onDragFinished, (int32_t)v63, v64, v65);
    klass = p_iconCenterChild->klass;
    if ( !klass )
      goto LABEL_87;
    v68 = *(System_Delegate_o **)&klass->_1.byval_arg.bits;
    p_iconCenterChild = (ServantStatusBattleListViewItem_o *)&klass->_1.byval_arg.bits;
    v69 = (SpringPanel_OnFinished_o *)sub_1B00F18(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(
      v69,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconCenterOnChildFinished__,
      0LL);
    v70 = System_Delegate__Combine(v68, (System_Delegate_o *)v69, 0LL);
    v52 = v70;
    if ( !v70 )
      goto LABEL_42;
    v73 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v70->klass == SpringPanel_OnFinished_TypeInfo )
    {
      p_iconCenterChild->klass = (ServantStatusBattleListViewItem_c *)v70;
      if ( (SpringPanel_OnFinished_c *)v70->klass == v73 )
      {
LABEL_43:
        sub_1B00C70(p_iconCenterChild, (int32_t)v52, v71, v72);
        iconLoopCtr = (__int64)this->fields.arrowInfo;
        if ( !iconLoopCtr )
          goto LABEL_87;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLoopCtr, 1, 0LL);
        scrollGuideLabel = this->fields.scrollGuideLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        iconLoopCtr = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8430/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/, 0LL);
        if ( !scrollGuideLabel )
          goto LABEL_87;
        UILabel__set_text(scrollGuideLabel, (System_String_o *)iconLoopCtr, 0LL);
        isScrollEquipIcon = this->fields.isScrollEquipIcon;
        v58 = 2;
        goto LABEL_48;
      }
    }
LABEL_41:
    sub_1B011E8(v52);
LABEL_42:
    p_iconCenterChild->klass = (ServantStatusBattleListViewItem_c *)v52;
    goto LABEL_43;
  }
  v54 = this->fields.iconLoopCtr;
  this->fields.isScrollEquipIcon = 0;
  if ( !v54 )
    goto LABEL_87;
  v55 = size - 1;
  itemSize = v54->fields.itemSize;
  if ( size - 1 < 0 )
    v55 = size;
  x = (float)-((v55 >> 1) * itemSize);
  isScrollEquipIcon = 0;
  if ( (size & 1) == 0 )
    x = x - (float)(itemSize / 2);
  v58 = 1;
LABEL_48:
  v112 = v58;
  MasterFormationComponent__SetEnabledEquipIconScroll(this, isScrollEquipIcon, v41);
  iconLoopCtr = (__int64)this->fields.iconCenterChild;
  if ( !iconLoopCtr )
    goto LABEL_87;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)iconLoopCtr, 0, 0LL);
  v75 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v115 = 0;
  v76 = 0;
  do
  {
    v114 = v76;
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
        v80 = (UnityEngine_GameObject_o *)iconLoopCtr;
        iconLoopCtr = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)iconLoopCtr, 0LL);
        v81 = (UnityEngine_Transform_o *)iconLoopCtr;
        if ( !byte_48DD9F6 )
        {
          iconLoopCtr = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v33);
          byte_48DD9F6 = 1;
        }
        if ( !v81 )
          goto LABEL_87;
        UnityEngine_Transform__set_localScale(v81, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        iconLoopCtr = (__int64)UnityEngine_GameObject__get_transform(v80, 0LL);
        if ( !this->fields.iconLoopCtr )
          goto LABEL_87;
        v82 = (UnityEngine_Transform_o *)iconLoopCtr;
        iconLoopCtr = (__int64)UnityEngine_Component__get_transform(
                                 (UnityEngine_Component_o *)this->fields.iconLoopCtr,
                                 0LL);
        if ( !iconLoopCtr )
          goto LABEL_87;
        *(UnityEngine_Vector3_o *)&v83 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)iconLoopCtr,
                                           0LL);
        if ( !v82 )
          goto LABEL_87;
        UnityEngine_Transform__set_localPosition(v82, *(UnityEngine_Vector3_o *)&v83, 0LL);
        v86 = System_Int32__ToString_61130888((int32_t)&v115, (System_String_o *)StringLiteral_4934/*"D3"*/, 0LL);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v80, v86, 0LL);
        if ( !v75 )
          goto LABEL_87;
        items = v75->fields._items;
        v90 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v75->fields._version;
        if ( !items )
          goto LABEL_87;
        v91 = v75->fields._size;
        if ( (unsigned int)v91 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v75,
            (Il2CppObject *)v80,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
        }
        else
        {
          v92 = &items->obj.klass + v91;
          v75->fields._size = v91 + 1;
          v92[4] = (Il2CppClass *)v80;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v92 + 4), (int32_t)v80, v87, v88);
        }
        iconLoopCtr = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v80,
                                 (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
        v95 = (System_Collections_Generic_List_object__o *)*p_mstEqIconList;
        if ( !*p_mstEqIconList )
          goto LABEL_87;
        v96 = v95->fields._items;
        v97 = Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__;
        ++v95->fields._version;
        if ( !v96 )
          goto LABEL_87;
        v98 = v95->fields._size;
        v99 = (MasterEquipIconComponent_o *)iconLoopCtr;
        if ( (unsigned int)v98 >= v96->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v95,
            (Il2CppObject *)iconLoopCtr,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
        }
        else
        {
          v100 = &v96->obj.klass + v98;
          v95->fields._size = v98 + 1;
          v100[4] = (Il2CppClass *)v99;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v100 + 4), (int32_t)v99, v93, v94);
        }
        iconLoopCtr = (__int64)this->fields.currentList;
        if ( !iconLoopCtr )
          goto LABEL_87;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)iconLoopCtr,
                 i,
                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
        v102 = v115;
        v103 = (UserEquipEntity_o *)Item;
        v104 = (MasterEquipIconComponent_CallbackFunc_o *)sub_1B00F18(MasterEquipIconComponent_CallbackFunc_TypeInfo);
        MasterEquipIconComponent_CallbackFunc___ctor(
          v104,
          (Il2CppObject *)this,
          (intptr_t)Method_MasterFormationComponent_OnClickIcon__,
          v105);
        if ( !v99 )
          goto LABEL_87;
        MasterEquipIconComponent__SetEquipInfo(v99, v103, v106, v107, v102, v104, v108);
        MasterEquipIconComponent__UpdateSelected(v99, this->fields.currentEquipId, v109);
        ++v115;
      }
    }
    v76 = v114 + 1;
  }
  while ( v114 + 1 != v112 );
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
  if ( !v75 )
    goto LABEL_87;
  if ( v75->fields._size >= 1 )
  {
    v110 = 0;
    while ( 1 )
    {
      iconLoopCtr = (__int64)System_Collections_Generic_List_object___get_Item(
                               v75,
                               v110,
                               (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !iconLoopCtr )
        break;
      iconLoopCtr = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)iconLoopCtr, 0LL);
      if ( !iconLoopCtr )
        break;
      v117.fields.x = x;
      v117.fields.y = y;
      v117.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconLoopCtr, v117, 0LL);
      v111 = this->fields.iconLoopCtr;
      if ( !v111 )
        break;
      ++v110;
      x = x + (float)v111->fields.itemSize;
      if ( v110 >= v75->fields._size )
        return;
    }
    goto LABEL_87;
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
  System_Collections_Generic_List_object__o *v15; // x21
  struct System_Collections_Generic_List_MasterEquipInfoComponent__o **p_mstEqInfoList; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  ServantStatusBattleListViewItem_o *p_centerChild; // x21
  UnityEngine_Object_o *centerChild; // x22
  __int64 loopCtr; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  struct UIWrapContent_o *v27; // x8
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  int size; // w25
  bool isScrollEquipDetail; // w1
  int v31; // w8
  struct UIScrollView_o *mScroll; // x22
  ServantStatusBattleListViewItem_o *p_onDragStarted; // x22
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v35; // x24
  System_Delegate_o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_Delegate_o *v39; // x8
  UIScrollView_OnDragNotification_c *v40; // x1
  ServantStatusBattleListViewItem_c *klass; // x21
  System_Delegate_o *v42; // t1
  SpringPanel_OnFinished_o *v43; // x23
  System_Delegate_o *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  SpringPanel_OnFinished_c *v47; // x1
  int v48; // w9
  int32_t v49; // w22
  UnityEngine_GameObject_o *mstEquipInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v52; // x23
  UnityEngine_Transform_o *v53; // x24
  UnityEngine_Transform_o *v54; // x24
  int v55; // s0
  System_String_o *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_Collections_Generic_List_object__o *v61; // x8
  struct System_Object_array *items; // x9
  _QWORD *v63; // x10
  __int64 v64; // x11
  MasterEquipInfoComponent_o *v65; // x23
  Il2CppClass **v66; // x0
  int32_t v67; // w3
  const MethodInfo *v68; // x5
  int v69; // [xsp+4h] [xbp-6Ch]
  int v70; // [xsp+8h] [xbp-68h]
  int32_t moveIdx; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_48DE060 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, method);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo, v8);
    sub_1B00CCC(&Method_MasterFormationComponent_OnCenterOnChildFinished__, v9);
    sub_1B00CCC(&Method_MasterFormationComponent_OnDragStarted__, v10);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v11);
    sub_1B00CCC(&UIScrollView_OnDragNotification_TypeInfo, v12);
    sub_1B00CCC(&SpringPanel_OnFinished_TypeInfo, v13);
    sub_1B00CCC(&StringLiteral_4934/*"D3"*/, v14);
    byte_48DE060 = 1;
  }
  moveIdx = 0;
  v15 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__);
  p_mstEqInfoList = &this->fields.mstEqInfoList;
  this->fields.mstEqInfoList = (struct System_Collections_Generic_List_MasterEquipInfoComponent__o *)v15;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.mstEqInfoList, (int32_t)v15, v17, v18);
  p_centerChild = (ServantStatusBattleListViewItem_o *)&this->fields.centerChild;
  centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  loopCtr = UnityEngine_Object__op_Equality(centerChild, 0LL, 0LL);
  if ( (loopCtr & 1) != 0 )
  {
    loopCtr = (__int64)this->fields.loopCtr;
    if ( !loopCtr )
      goto LABEL_50;
    loopCtr = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)loopCtr, 0LL);
    if ( !loopCtr )
      goto LABEL_50;
    v24 = UnityEngine_GameObject__AddComponent_object_(
            (UnityEngine_GameObject_o *)loopCtr,
            (const MethodInfo_2DADD20 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    p_centerChild->klass = (ServantStatusBattleListViewItem_c *)v24;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.centerChild, (int32_t)v24, v25, v26);
  }
  v27 = this->fields.loopCtr;
  if ( !v27 )
    goto LABEL_50;
  v27->fields.itemSize = 534;
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
    p_onDragStarted = (ServantStatusBattleListViewItem_o *)&mScroll->fields.onDragStarted;
    v35 = (UIScrollView_OnDragNotification_o *)sub_1B00F18(UIScrollView_OnDragNotification_TypeInfo);
    UIScrollView_OnDragNotification___ctor(
      v35,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnDragStarted__,
      0LL);
    v36 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v35, 0LL);
    v39 = v36;
    if ( v36 )
    {
      v40 = UIScrollView_OnDragNotification_TypeInfo;
      if ( (UIScrollView_OnDragNotification_c *)v36->klass != UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_23;
      p_onDragStarted->klass = (ServantStatusBattleListViewItem_c *)v36;
      if ( (UIScrollView_OnDragNotification_c *)v36->klass != v40 )
        goto LABEL_23;
    }
    else
    {
      p_onDragStarted->klass = 0LL;
    }
    sub_1B00C70(p_onDragStarted, (int32_t)v36, v37, v38);
    klass = p_centerChild->klass;
    if ( !klass )
      goto LABEL_50;
    v42 = *(System_Delegate_o **)&klass->_1.byval_arg.bits;
    p_centerChild = (ServantStatusBattleListViewItem_o *)&klass->_1.byval_arg.bits;
    v43 = (SpringPanel_OnFinished_o *)sub_1B00F18(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(
      v43,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnCenterOnChildFinished__,
      0LL);
    v44 = System_Delegate__Combine(v42, (System_Delegate_o *)v43, 0LL);
    v39 = v44;
    if ( !v44 )
      goto LABEL_24;
    v47 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v44->klass == SpringPanel_OnFinished_TypeInfo )
    {
      p_centerChild->klass = (ServantStatusBattleListViewItem_c *)v44;
      if ( (SpringPanel_OnFinished_c *)v44->klass == v47 )
        goto LABEL_25;
    }
LABEL_23:
    sub_1B011E8(v39);
LABEL_24:
    p_centerChild->klass = (ServantStatusBattleListViewItem_c *)v39;
LABEL_25:
    sub_1B00C70(p_centerChild, (int32_t)v39, v45, v46);
    isScrollEquipDetail = this->fields.isScrollEquipDetail;
    v31 = 2;
    goto LABEL_26;
  }
  isScrollEquipDetail = 0;
  v31 = 1;
  this->fields.isScrollEquipDetail = 0;
LABEL_26:
  v69 = v31;
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, isScrollEquipDetail, v23);
  moveIdx = 0;
  v48 = 0;
  do
  {
    v70 = v48;
    if ( size >= 1 )
    {
      v49 = 0;
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
        v52 = (UnityEngine_GameObject_o *)loopCtr;
        loopCtr = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)loopCtr, 0LL);
        v53 = (UnityEngine_Transform_o *)loopCtr;
        if ( !byte_48DD9F6 )
        {
          loopCtr = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v22);
          byte_48DD9F6 = 1;
        }
        if ( !v53 )
          break;
        UnityEngine_Transform__set_localScale(v53, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        loopCtr = (__int64)UnityEngine_GameObject__get_transform(v52, 0LL);
        if ( !this->fields.loopCtr )
          break;
        v54 = (UnityEngine_Transform_o *)loopCtr;
        loopCtr = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.loopCtr, 0LL);
        if ( !loopCtr )
          break;
        *(UnityEngine_Vector3_o *)&v55 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)loopCtr,
                                           0LL);
        if ( !v54 )
          break;
        UnityEngine_Transform__set_localPosition(v54, *(UnityEngine_Vector3_o *)&v55, 0LL);
        v58 = System_Int32__ToString_61130888((int32_t)&moveIdx, (System_String_o *)StringLiteral_4934/*"D3"*/, 0LL);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v52, v58, 0LL);
        loopCtr = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             v52,
                             (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
        v61 = (System_Collections_Generic_List_object__o *)*p_mstEqInfoList;
        if ( !*p_mstEqInfoList )
          break;
        items = v61->fields._items;
        v63 = Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__;
        ++v61->fields._version;
        if ( !items )
          break;
        v64 = v61->fields._size;
        v65 = (MasterEquipInfoComponent_o *)loopCtr;
        if ( (unsigned int)v64 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v61,
            (Il2CppObject *)loopCtr,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v66 = &items->obj.klass + v64;
          v61->fields._size = v64 + 1;
          v66[4] = (Il2CppClass *)v65;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v66 + 4), (int32_t)v65, v59, v60);
        }
        loopCtr = (__int64)this->fields.currentList;
        if ( !loopCtr )
          break;
        loopCtr = (__int64)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)loopCtr,
                             v49,
                             (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
        if ( !v65 )
          break;
        MasterEquipInfoComponent__setEquipInfo(
          v65,
          (UserEquipEntity_o *)loopCtr,
          this->fields.usrEquipId,
          v67,
          moveIdx,
          v68);
        ++v49;
        ++moveIdx;
        if ( size == v49 )
          goto LABEL_45;
      }
LABEL_50:
      sub_1B00F28(loopCtr, v22);
    }
LABEL_45:
    v48 = v70 + 1;
  }
  while ( v70 + 1 != v69 );
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
  __int64 v6; // x1
  __int64 v7; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  UnityEngine_Object_o *masterFigure; // x22
  UIMasterFigureTextureOld_o *Prefab_36715464; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  UIMasterFigureTextureOld_o *v13; // x21
  int32_t genderType; // w20
  System_Action_o *monitor; // x22
  Il2CppObject *klass; // x23
  struct MasterFormationComponent___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  v4 = this;
  if ( (byte_48DE05D & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&equipId);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    sub_1B00CCC(&Method_MasterFormationComponent___c__setMstImg_b__65_0__, v6);
    this = (MasterFormationComponent_o *)sub_1B00CCC(&MasterFormationComponent___c_TypeInfo, v7);
    byte_48DE05D = 1;
  }
  usrGameEnt = v4->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_16;
  masterFigure = (UnityEngine_Object_o *)v4->fields.masterFigure;
  v4->fields.genderType = usrGameEnt->fields.genderType;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(masterFigure, 0LL, 0LL) )
  {
    Prefab_36715464 = MasterFigureManagerOld__CreatePrefab_36715464(
                        v4->fields.mstImgBase,
                        1,
                        v4->fields.genderType,
                        equipId,
                        10,
                        0LL,
                        0,
                        (System_Nullable_Vector3__o)0,
                        0LL);
    v4->fields.masterFigure = Prefab_36715464;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields.masterFigure, (int32_t)Prefab_36715464, v11, v12);
    return;
  }
  v13 = v4->fields.masterFigure;
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
    monitor = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(monitor, klass, Method_MasterFormationComponent___c__setMstImg_b__65_0__, 0LL);
    static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
    static_fields->__9__65_0 = monitor;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__65_0, (int32_t)monitor, v18, v19);
  }
  if ( !v13 )
LABEL_16:
    sub_1B00F28(this, *(_QWORD *)&equipId);
  UIMasterFigureTextureOld__SetCharacter(v13, 1, genderType, equipId, monitor, 0, 0LL);
}


void __fastcall MasterFormationComponent__setPosCurrentEq(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *mstEqInfoList; // x0
  int size; // w21
  int32_t v6; // w20
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct System_Object_array *items; // x8

  if ( (byte_48DE064 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Count__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Item__, v3);
    byte_48DE064 = 1;
  }
  if ( this->fields.usrEquipId >= 1 )
  {
    mstEqInfoList = (System_Collections_Generic_List_object__o *)this->fields.mstEqInfoList;
    if ( mstEqInfoList )
    {
      size = mstEqInfoList->fields._size;
      if ( size >= 1 )
      {
        v6 = 0;
        while ( 1 )
        {
          mstEqInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                         mstEqInfoList,
                                                                         v6,
                                                                         (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Item__);
          if ( !mstEqInfoList || (items = mstEqInfoList[4].fields._items) == 0LL )
LABEL_12:
            sub_1B00F28(mstEqInfoList, v7);
          if ( items->bounds == (Il2CppArrayBounds *)this->fields.usrEquipId )
            break;
          if ( size == ++v6 )
            return;
          mstEqInfoList = (System_Collections_Generic_List_object__o *)this->fields.mstEqInfoList;
          if ( !mstEqInfoList )
            goto LABEL_12;
        }
        MasterFormationComponent__setDispRePosition(this, mstEqInfoList[4].fields._version, v8);
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
  void *Instance; // x0
  const MethodInfo *v15; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  System_Collections_Generic_IEnumerable_T__o *List; // x22
  System_Collections_Generic_List_object__o *v18; // x21
  struct System_Collections_Generic_List_UserEquipEntity__o **p_currentList; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_List_object__o *v22; // x21
  int32_t v23; // w22
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_List_object__o *v26; // x8
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass *v30; // x1
  Il2CppClass **v31; // x0
  System_Collections_Generic_List_object__o *v32; // x20
  System_Comparison_T__o *v33; // x21
  Il2CppObject *v34; // x22
  struct MasterFormationComponent___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1

  if ( (byte_48DE05F & 1) == 0 )
  {
    sub_1B00CCC(&System_Comparison_UserEquipEntity__TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserEquipMaster___, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserEquipEntity__Add__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserEquipEntity__Sort__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserEquipEntity___ctor__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserEquipEntity___ctor___74544776, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v9);
    sub_1B00CCC(&System_Collections_Generic_List_UserEquipEntity__TypeInfo, v10);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B00CCC(&Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__, v12);
    sub_1B00CCC(&MasterFormationComponent___c_TypeInfo, v13);
    byte_48DE05F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_27;
  if ( !Instance )
    goto LABEL_27;
  List = (System_Collections_Generic_IEnumerable_T__o *)UserEquipMaster__getList(
                                                          (UserEquipMaster_o *)Instance,
                                                          usrGameEnt->fields.userId,
                                                          0LL);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_UserEquipEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
  p_currentList = &this->fields.currentList;
  this->fields.currentList = (struct System_Collections_Generic_List_UserEquipEntity__o *)v18;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.currentList, (int32_t)v18, v20, v21);
  if ( !List )
    goto LABEL_27;
  if ( List[1].monitor )
  {
    v22 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_UserEquipEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor_54268612(
      v22,
      List,
      (const MethodInfo_33C12C4 *)Method_System_Collections_Generic_List_UserEquipEntity___ctor___74544776);
    if ( this->fields.usrEquipId >= 1 )
    {
      if ( !v22 )
        goto LABEL_27;
      if ( v22->fields._size >= 1 )
      {
        v23 = 0;
        while ( 1 )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       v22,
                       v23,
                       (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
          v26 = (System_Collections_Generic_List_object__o *)*p_currentList;
          if ( !*p_currentList )
            break;
          items = v26->fields._items;
          v28 = Method_System_Collections_Generic_List_UserEquipEntity__Add__;
          ++v26->fields._version;
          if ( !items )
            break;
          size = v26->fields._size;
          v30 = (Il2CppClass *)Instance;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              (Il2CppObject *)Instance,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + size;
            v26->fields._size = size + 1;
            v31[4] = v30;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v30, v24, v25);
          }
          if ( ++v23 >= v22->fields._size )
            goto LABEL_18;
        }
LABEL_27:
        sub_1B00F28(Instance, v15);
      }
LABEL_18:
      v32 = (System_Collections_Generic_List_object__o *)*p_currentList;
      Instance = MasterFormationComponent___c_TypeInfo;
      if ( !MasterFormationComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MasterFormationComponent___c_TypeInfo);
        Instance = MasterFormationComponent___c_TypeInfo;
      }
      v33 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
      if ( !v33 )
      {
        if ( !*((_DWORD *)Instance + 56) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = MasterFormationComponent___c_TypeInfo;
        }
        v34 = (Il2CppObject *)**((_QWORD **)Instance + 23);
        v33 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_UserEquipEntity__TypeInfo);
        System_Comparison_object____ctor(v33, v34, Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__, 0LL);
        static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
        static_fields->__9__67_0 = (struct System_Comparison_UserEquipEntity__o *)v33;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__67_0, (int32_t)v33, v36, v37);
      }
      if ( !v32 )
        goto LABEL_27;
      System_Collections_Generic_List_object___Sort_54277268(
        v32,
        v33,
        (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_UserEquipEntity__Sort__);
    }
  }
  MasterFormationComponent__setMstEquipList(this, v15);
  MasterFormationComponent__setMstEquipIconList(this, v38);
  MasterFormationComponent__setPosCurrentEq(this, v39);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B00D8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B00F44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B00DF4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19440E0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1944098;
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
  if ( (byte_48DE076 & 1) == 0 )
  {
    sub_1B00CCC(&bool_TypeInfo, flg);
    byte_48DE076 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B00C80(this, v9, callback, object);
}


void __fastcall MasterFormationComponent_NotificationDragState__EndInvoke(
        MasterFormationComponent_NotificationDragState_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B00C84(result, 0LL, method);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48DE077 & 1) == 0 )
  {
    sub_1B00CCC(&MasterFormationComponent___c_TypeInfo, v1);
    byte_48DE077 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(MasterFormationComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MasterFormationComponent___c_TypeInfo->static_fields->__9 = (struct MasterFormationComponent___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)MasterFormationComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_48DE078 & 1) == 0 )
  {
    this = (MasterFormationComponent___c_o *)sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, a);
    byte_48DE078 = 1;
  }
  if ( !a )
    goto LABEL_8;
  v7 = *(_QWORD *)&a->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&a->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (MasterFormationComponent___c_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v9, 0LL);
  if ( !b )
LABEL_8:
    sub_1B00F28(this, a);
  return (_DWORD)this - CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(b->fields.equipId, 0LL);
}