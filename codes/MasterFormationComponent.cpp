void __fastcall MasterFormationComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MasterFormationComponent_StaticFields *static_fields; // x8

  if ( (byte_49F7942 & 1) == 0 )
  {
    sub_1B640C8(&MasterFormationComponent_TypeInfo, v1);
    byte_49F7942 = 1;
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

  if ( (byte_49F7941 & 1) == 0 )
  {
    sub_1B640C8(&Method_MasterFormationComponent_CloseCmdSpell__, method);
    byte_49F7941 = 1;
  }
  cmdSpellWinComp = (BattleWindowComponent_o *)this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    goto LABEL_10;
  if ( BattleWindowComponent__isOpen(cmdSpellWinComp, 0LL) )
  {
    v4 = Method_MasterFormationComponent_CloseCmdSpell__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_CloseCmdSpell__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B640E0();
    v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
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
    sub_1B64324(cmdSpellWinComp);
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

  if ( (byte_49F7936 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, method);
    sub_1B640C8(&StringLiteral_3414/*"CHANGE_INFO"*/, v3);
    byte_49F7936 = 1;
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
                                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___)) == 0LL
    || (v7 = (MasterEquipInfoComponent_o *)leftArrowBtn,
        leftArrowBtn = (UnityEngine_Behaviour_o *)MasterEquipInfoComponent__getEquipId(
                                                    (MasterEquipInfoComponent_o *)leftArrowBtn,
                                                    v6),
        this->fields.currentEquipId = (int)leftArrowBtn,
        (usrEquipEnt = v7->fields.usrEquipEnt) == 0LL) )
  {
LABEL_15:
    sub_1B64324(leftArrowBtn);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)leftArrowBtn, (System_String_o *)StringLiteral_3414/*"CHANGE_INFO"*/, 0LL);
      return;
    }
    goto LABEL_15;
  }
}


void __fastcall MasterFormationComponent__OnClickCmdSpell(MasterFormationComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_49F7940 & 1) == 0 )
  {
    sub_1B640C8(&Method_MasterFormationComponent_OnClickCmdSpell__, method);
    byte_49F7940 = 1;
  }
  v3 = Method_MasterFormationComponent_OnClickCmdSpell__;
  if ( (*((_BYTE *)Method_MasterFormationComponent_OnClickCmdSpell__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0();
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    sub_1B64324(0LL);
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
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  UICenterOnChild_o *centerChild; // x22
  struct UserEquipEntity_o *userEquipEntity; // x8
  __int64 v18; // x21
  __int64 v19; // x22
  const MethodInfo *v20; // x1
  struct UICenterOnChild_o *v21; // x8
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_49F792F & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, *(_QWORD *)&idx);
    sub_1B640C8(&Method_MasterFormationComponent_OnClickIcon__, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    byte_49F792F = 1;
  }
  if ( this->fields.currentEquipId != equipId && !this->fields.isDragStart && !this->fields.isIconDragStart )
  {
    v11 = Method_MasterFormationComponent_OnClickIcon__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_OnClickIcon__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1B640E0();
    v12 = (System_Reflection_MethodBase_o *)sub_1B640AC(v11, v11[4]);
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
        MasterFormationComponent__setDisEquipEffect(this, v14);
        MasterFormationComponent__setMstImg(this, equipId, v15);
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
              UICenterOnChild__CenterOn_46383920(centerChild, (UnityEngine_Transform_o *)iconCenterChild, 1, 0LL);
              userEquipEntity = this->fields.userEquipEntity;
              if ( userEquipEntity )
              {
                v19 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
                v18 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v25.fields.currentCryptoKey = v19;
                *(_QWORD *)&v25.fields.fakeValue = v18;
                iconCenterChild = (UnityEngine_Behaviour_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
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
                                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
                    if ( iconCenterChild )
                    {
                      MasterEquipInfoComponent__setDispEffectObj((MasterEquipInfoComponent_o *)iconCenterChild, 1, v22);
LABEL_22:
                      MasterFormationComponent__UpdateIconSelected(this, v20);
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
    sub_1B64324(iconCenterChild);
  }
}


void __fastcall MasterFormationComponent__OnDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  struct MasterFormationComponent_NotificationDragState_o *notificationDragState; // x8

  if ( (byte_49F7933 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_11189/*"RefreshCurrentInfo"*/, method);
    byte_49F7933 = 1;
  }
  *(_WORD *)&this->fields.isChangeMasterImg = 1;
  this->fields.isDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_69112316(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11189/*"RefreshCurrentInfo"*/,
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
    sub_1B64324(iconCenterChild);
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
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F7937 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v7);
    sub_1B640C8(&StringLiteral_11189/*"RefreshCurrentInfo"*/, v8);
    byte_49F7937 = 1;
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
  leftArrowBtn = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)leftArrowBtn,
                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
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
  UnityEngine_MonoBehaviour__CancelInvoke_69112316(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11189/*"RefreshCurrentInfo"*/,
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)leftArrowBtn,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v16.fields._current )
      sub_1B64324(0LL);
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v16.fields._current, 1, v15);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  leftArrowBtn = this->fields.iconCenterChild;
  if ( !leftArrowBtn )
LABEL_20:
    sub_1B64324(leftArrowBtn);
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
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F7935 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v5);
    byte_49F7935 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
  if ( !iconCenterChild
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 1, 0LL),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
  {
    sub_1B64324(iconCenterChild);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)iconCenterChild,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B64324(0LL);
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v8.fields._current, 0, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
}


void __fastcall MasterFormationComponent__OnIconDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  struct MasterFormationComponent_NotificationDragState_o *notificationDragState; // x8

  if ( (byte_49F7934 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_11189/*"RefreshCurrentInfo"*/, method);
    byte_49F7934 = 1;
  }
  *(_WORD *)&this->fields.isChangeMasterImg = 257;
  this->fields.isIconDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_69112316(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11189/*"RefreshCurrentInfo"*/,
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
    sub_1B64324(leftArrowBtn);
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
  struct MasterFormationComponent_NotificationDragState_o *notificationDragState; // x8
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  UICenterOnChild_o *centerChild; // x20
  UICenterOnChild_o *iconCenterChild; // x20
  const MethodInfo *v9; // x1

  if ( (byte_49F7938 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_11189/*"RefreshCurrentInfo"*/, method);
    byte_49F7938 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_69112316(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11189/*"RefreshCurrentInfo"*/,
    0LL);
  notificationDragState = this->fields.notificationDragState;
  if ( !notificationDragState )
    goto LABEL_22;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))notificationDragState->fields.m_target)(
    notificationDragState->fields.original_method_info,
    0LL,
    *(_QWORD *)&notificationDragState->fields.extra_arg);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v5);
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
      UICenterOnChild__CenterOn_46383920(centerChild, (UnityEngine_Transform_o *)loopCtr, 1, 0LL);
    }
  }
  if ( !this->fields.isIconDragStart )
  {
LABEL_20:
    MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v6);
    goto LABEL_21;
  }
  loopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
  if ( !loopCtr || (loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL)) == 0LL )
LABEL_22:
    sub_1B64324(loopCtr);
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)loopCtr, 0LL) < 1 )
    goto LABEL_20;
  this->fields.isIconDragStart = 0;
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 0, v6);
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
  UICenterOnChild__CenterOn_46383920(iconCenterChild, (UnityEngine_Transform_o *)loopCtr, 1, 0LL);
LABEL_21:
  MasterFormationComponent__UpdateIconSelected(this, v9);
}


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
      sub_1B64324(mScroll);
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

  if ( (enabled & ~this->fields.isScrollEquipIcon & 1) == 0 )
  {
    iconScroll = (UnityEngine_Behaviour_o *)this->fields.iconScroll;
    if ( !iconScroll
      || (v5 = enabled,
          UnityEngine_Behaviour__set_enabled(iconScroll, enabled, 0LL),
          (iconScroll = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr) == 0LL) )
    {
      sub_1B64324(iconScroll);
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
    sub_1B64324(mScroll);
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

  if ( (byte_49F7926 & 1) == 0 )
  {
    sub_1B640C8(&MasterFormationComponent_TypeInfo, method);
    byte_49F7926 = 1;
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
    sub_1B64324(iconScroll);
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
  const MethodInfo *v7; // x2

  if ( (byte_49F7930 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Item__, v3);
    byte_49F7930 = 1;
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
                                                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Item__);
        if ( !mstEqIconList )
          break;
        MasterEquipIconComponent__UpdateSelected(
          (MasterEquipIconComponent_o *)mstEqIconList,
          this->fields.currentEquipId,
          v7);
        if ( size == ++v6 )
          return;
        mstEqIconList = (System_Collections_Generic_List_object__o *)this->fields.mstEqIconList;
      }
      while ( mstEqIconList );
      sub_1B64324(mstEqIconList);
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
    sub_1B64324(cmdSpellIconComp);
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

  if ( (byte_49F7924 & 1) == 0 )
  {
    sub_1B640C8(&MasterFormationComponent_NotificationDragState_TypeInfo, value);
    byte_49F7924 = 1;
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
    v8 = sub_1B9F5B8(p_notificationDragState, v7, notificationDragState);
    v9 = notificationDragState == (System_Delegate_o *)v8;
    notificationDragState = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterFormationComponent_o *)sub_1B645E4(v7);
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

  if ( (byte_49F792B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__, v3);
    byte_49F792B = 1;
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
        v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11),
        System_Action___ctor(
          v12,
          (Il2CppObject *)this,
          Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__,
          0LL),
        !cmdSpellIconComp) )
  {
    sub_1B64324(SpellImageId);
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
  int v6; // w22
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w0
  int v9; // w22
  UnityEngine_Object_o *v10; // x20

  if ( (byte_49F793E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&UserEquipNewManager_TypeInfo, v3);
    byte_49F793E = 1;
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
    v6 = childCount + 1;
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
                                             v6 - 2,
                                             0LL);
      if ( !loopCtr )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(loopCtr, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69127924(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_13;
    }
LABEL_30:
    sub_1B64324(loopCtr);
  }
LABEL_13:
  loopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
  if ( !loopCtr )
    goto LABEL_30;
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL);
  if ( !loopCtr )
    goto LABEL_30;
  v8 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)loopCtr, 0LL);
  if ( v8 >= 1 )
  {
    v9 = v8 + 1;
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
                                             v9 - 2,
                                             0LL);
      if ( !loopCtr )
        goto LABEL_30;
      v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(loopCtr, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69127924(v10, 0LL);
    }
    while ( --v9 > 1 );
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
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_49F793F & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F793F = 1;
  }
  masterFigure = this->fields.masterFigure;
  p_masterFigure = (UnityEngine_Component_o **)&this->fields.masterFigure;
  v4 = (UnityEngine_Object_o *)masterFigure;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    if ( !*p_masterFigure )
      sub_1B64324(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_masterFigure, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    *p_masterFigure = 0LL;
    sub_1B6406C(p_masterFigure);
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
  void *monitor; // x19
  Il2CppClass *klass; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v4 = equipId;
  if ( (byte_49F793D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EquipMaster___, *(_QWORD *)&genderType);
    sub_1B640C8(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49F793D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     v4,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B64324(Instance);
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
  *(_QWORD *)&v13.fields.currentCryptoKey = klass;
  *(_QWORD *)&v13.fields.fakeValue = monitor;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v13, 0LL);
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
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F793B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v5);
    sub_1B640C8(&Method_MasterFormationComponent_onClickLeftArrow__, v6);
    sub_1B640C8(&StringLiteral_11189/*"RefreshCurrentInfo"*/, v7);
    byte_49F793B = 1;
  }
  memset(&v16, 0, sizeof(v16));
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
    UnityEngine_MonoBehaviour__CancelInvoke_69112316(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11189/*"RefreshCurrentInfo"*/,
      0LL);
    v9 = Method_MasterFormationComponent_onClickLeftArrow__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_onClickLeftArrow__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B640E0();
    v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
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
      || (UICenterOnChild__CenterOn_46383920(iconCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
    {
LABEL_26:
      sub_1B64324(leftArrowBtn);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)leftArrowBtn,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v16.fields._current )
        sub_1B64324(0LL);
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v16.fields._current, 0, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
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
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F793A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v5);
    sub_1B640C8(&Method_MasterFormationComponent_onClickRightArrow__, v6);
    sub_1B640C8(&StringLiteral_11189/*"RefreshCurrentInfo"*/, v7);
    byte_49F793A = 1;
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
    UnityEngine_MonoBehaviour__CancelInvoke_69112316(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11189/*"RefreshCurrentInfo"*/,
      0LL);
    v9 = Method_MasterFormationComponent_onClickRightArrow__;
    if ( (*((_BYTE *)Method_MasterFormationComponent_onClickRightArrow__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B640E0();
    v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
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
      || (UICenterOnChild__CenterOn_46383920(iconCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
    {
LABEL_26:
      sub_1B64324(leftArrowBtn);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)leftArrowBtn,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v17.fields._current )
        sub_1B64324(0LL);
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v17.fields._current, 0, v16);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
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

  if ( (byte_49F7925 & 1) == 0 )
  {
    sub_1B640C8(&MasterFormationComponent_NotificationDragState_TypeInfo, value);
    byte_49F7925 = 1;
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
    v8 = sub_1B9F5B8(p_notificationDragState, v7, notificationDragState);
    v9 = notificationDragState == (System_Delegate_o *)v8;
    notificationDragState = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (MasterFormationComponent_o *)sub_1B645E4(v7);
  MasterFormationComponent__Update(v10, v11);
}


void __fastcall MasterFormationComponent__setChangeMasterInfo(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49F793C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5465/*"END_SET"*/, method);
    sub_1B640C8(&StringLiteral_11189/*"RefreshCurrentInfo"*/, v4);
    byte_49F793C = 1;
  }
  MasterFormationComponent__setMstImg(this, this->fields.currentEquipId, v2);
  if ( this->fields.isDragStart || this->fields.isIconDragStart )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11189/*"RefreshCurrentInfo"*/,
      0.1,
      0LL);
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5465/*"END_SET"*/, 0LL);
}


void __fastcall MasterFormationComponent__setCmdSpellImg(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserGameEntity_o *SelfUserGame; // x0
  BattleWindowComponent_o *cmdSpellWinComp; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  struct CommandSpellWindowComponent_o *v9; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v10; // x21
  UnityEngine_Vector2_o v11; // 0:s0.4,4:s1.4

  if ( (byte_49F7928 & 1) == 0 )
  {
    sub_1B640C8(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo, method);
    sub_1B640C8(&Method_MasterFormationComponent_CloseCmdSpell__, v3);
    sub_1B640C8(&MasterFormationComponent_TypeInfo, v4);
    byte_49F7928 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.cmdSpellIconComp )
    goto LABEL_11;
  CommandSpellIconComponent__SetData(this->fields.cmdSpellIconComp, SelfUserGame, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.cmdSpellIconComp;
  if ( !SelfUserGame )
    goto LABEL_11;
  v11.fields.x = 130.0;
  v11.fields.y = 130.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)SelfUserGame, v11, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.cmdSpellWinComp;
  if ( !SelfUserGame )
    goto LABEL_11;
  CommandSpellWindowComponent__InitializeCommandSpell((CommandSpellWindowComponent_o *)SelfUserGame, 0LL, 0, -1, 0LL);
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
          0LL),
        (v9 = this->fields.cmdSpellWinComp) == 0LL) )
  {
LABEL_11:
    sub_1B64324(SelfUserGame);
  }
  v9->fields.mode = 0;
  v10 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_1B64314(
                                                               CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo,
                                                               v7,
                                                               v8);
  CommandSpellWindowComponent_CloseButtonCallBack___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_MasterFormationComponent_CloseCmdSpell__,
    0LL);
  v9->fields.callback_close = v10;
  sub_1B6406C(&v9->fields.callback_close);
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
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x0
  int v18; // [xsp+Ch] [xbp-54h] BYREF
  int v19; // [xsp+18h] [xbp-48h] BYREF
  int v20; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_49F7929 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, recoverTime);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_3728/*"COMMAND_SPELL_RECOVER_TIME"*/, v6);
    sub_1B640C8(&StringLiteral_3731/*"COMMNAD_SPELL_RECV_TXT"*/, v7);
    byte_49F7929 = 1;
  }
  if ( recoverTime > 0 )
  {
    recoverTitleLb = this->fields.recoverTitleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    cmdSpellRecTimeInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3731/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
    if ( recoverTitleLb )
    {
      v10 = recoverTime / 0xE10uLL;
      v11 = (int)(recoverTime / 0x3CuLL) % 60;
      v12 = recoverTime % 0x3CuLL;
      UILabel__set_text(recoverTitleLb, cmdSpellRecTimeInfo, 0LL);
      recoverTimeLb = this->fields.recoverTimeLb;
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3728/*"COMMAND_SPELL_RECOVER_TIME"*/, 0LL);
      v20 = v10;
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
      v19 = v11;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
      v18 = v12;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
      cmdSpellRecTimeInfo = System_String__Format_61389836(v14, v15, v16, v17, 0LL);
      if ( recoverTimeLb )
      {
        UILabel__set_text(recoverTimeLb, cmdSpellRecTimeInfo, 0LL);
        return;
      }
    }
LABEL_11:
    sub_1B64324(cmdSpellRecTimeInfo);
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
    sub_1B64324(0LL);
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
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F7939 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__, v5);
    byte_49F7939 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  mstEqInfoList = (System_Collections_Generic_List_object__o *)this->fields.mstEqInfoList;
  if ( !mstEqInfoList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    mstEqInfoList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B64324(0LL);
    MasterEquipInfoComponent__setDispEffectObj((MasterEquipInfoComponent_o *)v8.fields._current, 0, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__);
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

  if ( (byte_49F7932 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, *(_QWORD *)&idx);
    sub_1B640C8(&MasterFormationComponent_TypeInfo, v5);
    byte_49F7932 = 1;
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
            UICenterOnChild__CenterOn_46383920(iconCenterChild, (UnityEngine_Transform_o *)loopCtr, 1, 0LL);
            goto LABEL_22;
          }
        }
      }
    }
LABEL_23:
    sub_1B64324(loopCtr);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x2
  int32_t lv; // w8
  __int64 v15; // x0
  __int64 v16; // x0
  struct UserEquipEntity_o *userEquipEntity; // x8
  __int64 v18; // x21
  __int64 v19; // x22
  int32_t v20; // w1
  const MethodInfo *v21; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_49F7927 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEquipMaster___, userData);
    sub_1B640C8(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v11);
    byte_49F7927 = 1;
  }
  this->fields.usrGameEnt = UserGameMaster__getSelfUserGame(0LL);
  sub_1B6406C(&this->fields.usrGameEnt);
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
  gameObject = (UnityEngine_GameObject_o *)sub_1B6406C(&this->fields.usrGameEnt);
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
    v20 = 0;
    goto LABEL_24;
  }
  v15 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1BB5FA4();
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BB5FA4();
  gameObject = **(UnityEngine_GameObject_o ***)(v16 + 184);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0LL
    || (this->fields.userEquipEntity = (struct UserEquipEntity_o *)DataMasterBase_object__object__long___GetEntity(
                                                                     (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                                     this->fields.usrEquipId,
                                                                     (const MethodInfo_30D4050 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__),
        gameObject = (UnityEngine_GameObject_o *)sub_1B6406C(&this->fields.userEquipEntity),
        (userEquipEntity = this->fields.userEquipEntity) == 0LL) )
  {
LABEL_25:
    sub_1B64324(gameObject);
  }
  v19 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v19;
  *(_QWORD *)&v22.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v22, 0LL);
  this->fields.currentEquipId = v20;
LABEL_24:
  MasterFormationComponent__setMstImg(this, v20, v13);
  MasterFormationComponent__setUsrEquipData(this, v21);
  this->fields.isChangeMasterImg = 1;
  this->fields.notificationDragState = notificationDragState;
  sub_1B6406C(&this->fields.notificationDragState);
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
  System_Collections_Generic_List_object__o *v28; // x21
  struct UICenterOnChild_o **p_iconCenterChild; // x21
  UnityEngine_Object_o *iconCenterChild; // x22
  __int64 iconLoopCtr; // x0
  struct UIWrapContent_o *v32; // x8
  UILabel_o *touchGuideLabel; // x22
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  int size; // w28
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  float x; // s10
  float y; // s8
  float z; // s9
  struct UIScrollView_o *iconScroll; // x22
  _QWORD *p_onDragStarted; // x22
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v44; // x24
  System_Delegate_o *v45; // x0
  System_Delegate_o *v46; // x8
  UIScrollView_OnDragNotification_c *v47; // x1
  struct UIWrapContent_o *v48; // x8
  int v49; // w9
  int32_t itemSize; // w8
  bool isScrollEquipIcon; // w1
  int v52; // w8
  __int64 v53; // x1
  __int64 v54; // x2
  struct UIScrollView_o *v55; // x22
  _QWORD *p_onDragFinished; // x22
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v58; // x24
  System_Delegate_o *v59; // x0
  UIScrollView_OnDragNotification_c *v60; // x1
  __int64 v61; // x1
  __int64 v62; // x2
  struct UICenterOnChild_o *v63; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v65; // x23
  System_Delegate_o *v66; // x0
  SpringPanel_OnFinished_c *v67; // x1
  UILabel_o *scrollGuideLabel; // x21
  __int64 v69; // x1
  __int64 v70; // x2
  System_Collections_Generic_List_object__o *v71; // x21
  int v72; // w9
  int32_t i; // w23
  UnityEngine_GameObject_o *equipIconPrefab; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v76; // x24
  __int64 v77; // x1
  UnityEngine_Transform_o *v78; // x25
  UnityEngine_Transform_o *v79; // x25
  int v80; // s0
  System_String_o *v83; // x0
  struct System_Object_array *items; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  System_Collections_Generic_List_object__o *v88; // x8
  struct System_Object_array *v89; // x9
  _QWORD *v90; // x10
  __int64 v91; // x11
  MasterEquipIconComponent_o *v92; // x24
  Il2CppClass **v93; // x0
  Il2CppObject *Item; // x0
  int32_t v95; // w25
  UserEquipEntity_o *v96; // x26
  __int64 v97; // x1
  __int64 v98; // x2
  MasterEquipIconComponent_CallbackFunc_o *v99; // x27
  const MethodInfo *v100; // x3
  int64_t v101; // x2
  int32_t v102; // w3
  const MethodInfo *v103; // x6
  const MethodInfo *v104; // x2
  int32_t v105; // w20
  struct UIWrapContent_o *v106; // x8
  int v107; // [xsp+4h] [xbp-8Ch]
  struct System_Collections_Generic_List_MasterEquipIconComponent__o **p_mstEqIconList; // [xsp+8h] [xbp-88h]
  int v109; // [xsp+18h] [xbp-78h]
  int32_t v110; // [xsp+1Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F792E & 1) == 0 )
  {
    sub_1B640C8(&MasterEquipIconComponent_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v13);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo, v15);
    sub_1B640C8(&LocalizationManager_TypeInfo, v16);
    sub_1B640C8(&Method_MasterFormationComponent_OnClickIcon__, v17);
    sub_1B640C8(&Method_MasterFormationComponent_OnIconCenterOnChildFinished__, v18);
    sub_1B640C8(&Method_MasterFormationComponent_OnIconDragFinished__, v19);
    sub_1B640C8(&Method_MasterFormationComponent_OnIconDragStarted__, v20);
    sub_1B640C8(&MasterFormationComponent_TypeInfo, v21);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v22);
    sub_1B640C8(&UIScrollView_OnDragNotification_TypeInfo, v23);
    sub_1B640C8(&SpringPanel_OnFinished_TypeInfo, v24);
    sub_1B640C8(&StringLiteral_8485/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/, v25);
    sub_1B640C8(&StringLiteral_8484/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/, v26);
    sub_1B640C8(&StringLiteral_4965/*"D3"*/, v27);
    byte_49F792E = 1;
  }
  v110 = 0;
  v28 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__);
  this->fields.mstEqIconList = (struct System_Collections_Generic_List_MasterEquipIconComponent__o *)v28;
  p_mstEqIconList = &this->fields.mstEqIconList;
  sub_1B6406C(&this->fields.mstEqIconList);
  p_iconCenterChild = &this->fields.iconCenterChild;
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
    *p_iconCenterChild = (struct UICenterOnChild_o *)UnityEngine_GameObject__AddComponent_object_(
                                                       (UnityEngine_GameObject_o *)iconLoopCtr,
                                                       (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    iconLoopCtr = sub_1B6406C(&this->fields.iconCenterChild);
  }
  v32 = this->fields.iconLoopCtr;
  if ( !v32 )
    goto LABEL_87;
  v32->fields.itemSize = 64;
  touchGuideLabel = this->fields.touchGuideLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  iconLoopCtr = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8485/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/, 0LL);
  if ( !touchGuideLabel
    || (UILabel__set_text(touchGuideLabel, (System_String_o *)iconLoopCtr, 0LL),
        (currentList = this->fields.currentList) == 0LL)
    || (iconLoopCtr = (__int64)this->fields.iconScroll) == 0
    || (size = currentList->fields._size,
        (iconLoopCtr = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconLoopCtr, 0LL)) == 0) )
  {
LABEL_87:
    sub_1B64324(iconLoopCtr);
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
    p_onDragStarted = &iconScroll->fields.onDragStarted;
    v44 = (UIScrollView_OnDragNotification_o *)sub_1B64314(UIScrollView_OnDragNotification_TypeInfo, v36, v37);
    UIScrollView_OnDragNotification___ctor(
      v44,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragStarted__,
      0LL);
    v45 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v44, 0LL);
    v46 = v45;
    if ( v45 )
    {
      v47 = UIScrollView_OnDragNotification_TypeInfo;
      if ( (UIScrollView_OnDragNotification_c *)v45->klass != UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_41;
      *p_onDragStarted = v45;
      if ( (UIScrollView_OnDragNotification_c *)v45->klass != v47 )
        goto LABEL_41;
    }
    else
    {
      *p_onDragStarted = 0LL;
    }
    iconLoopCtr = sub_1B6406C(p_onDragStarted);
    v55 = this->fields.iconScroll;
    if ( !v55 )
      goto LABEL_87;
    onDragFinished = (System_Delegate_o *)v55->fields.onDragFinished;
    p_onDragFinished = &v55->fields.onDragFinished;
    v58 = (UIScrollView_OnDragNotification_o *)sub_1B64314(UIScrollView_OnDragNotification_TypeInfo, v53, v54);
    UIScrollView_OnDragNotification___ctor(
      v58,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragFinished__,
      0LL);
    v59 = System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v58, 0LL);
    v46 = v59;
    if ( v59 )
    {
      v60 = UIScrollView_OnDragNotification_TypeInfo;
      if ( (UIScrollView_OnDragNotification_c *)v59->klass != UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_41;
      *p_onDragFinished = v59;
      if ( (UIScrollView_OnDragNotification_c *)v59->klass != v60 )
        goto LABEL_41;
    }
    else
    {
      *p_onDragFinished = 0LL;
    }
    iconLoopCtr = sub_1B6406C(p_onDragFinished);
    v63 = *p_iconCenterChild;
    if ( !v63 )
      goto LABEL_87;
    onFinished = (System_Delegate_o *)v63->fields.onFinished;
    p_iconCenterChild = (struct UICenterOnChild_o **)&v63->fields.onFinished;
    v65 = (SpringPanel_OnFinished_o *)sub_1B64314(SpringPanel_OnFinished_TypeInfo, v61, v62);
    SpringPanel_OnFinished___ctor(
      v65,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconCenterOnChildFinished__,
      0LL);
    v66 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v65, 0LL);
    v46 = v66;
    if ( !v66 )
      goto LABEL_42;
    v67 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v66->klass == SpringPanel_OnFinished_TypeInfo )
    {
      *p_iconCenterChild = (struct UICenterOnChild_o *)v66;
      if ( (SpringPanel_OnFinished_c *)v66->klass == v67 )
      {
LABEL_43:
        sub_1B6406C(p_iconCenterChild);
        iconLoopCtr = (__int64)this->fields.arrowInfo;
        if ( !iconLoopCtr )
          goto LABEL_87;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLoopCtr, 1, 0LL);
        scrollGuideLabel = this->fields.scrollGuideLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        iconLoopCtr = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8484/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/, 0LL);
        if ( !scrollGuideLabel )
          goto LABEL_87;
        UILabel__set_text(scrollGuideLabel, (System_String_o *)iconLoopCtr, 0LL);
        isScrollEquipIcon = this->fields.isScrollEquipIcon;
        v52 = 2;
        goto LABEL_48;
      }
    }
LABEL_41:
    sub_1B645E4(v46);
LABEL_42:
    *p_iconCenterChild = (struct UICenterOnChild_o *)v46;
    goto LABEL_43;
  }
  v48 = this->fields.iconLoopCtr;
  this->fields.isScrollEquipIcon = 0;
  if ( !v48 )
    goto LABEL_87;
  v49 = size - 1;
  itemSize = v48->fields.itemSize;
  if ( size - 1 < 0 )
    v49 = size;
  x = (float)-((v49 >> 1) * itemSize);
  isScrollEquipIcon = 0;
  if ( (size & 1) == 0 )
    x = x - (float)(itemSize / 2);
  v52 = 1;
LABEL_48:
  v107 = v52;
  MasterFormationComponent__SetEnabledEquipIconScroll(this, isScrollEquipIcon, v37);
  iconLoopCtr = (__int64)this->fields.iconCenterChild;
  if ( !iconLoopCtr )
    goto LABEL_87;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)iconLoopCtr, 0, 0LL);
  v71 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v69,
                                                       v70);
  System_Collections_Generic_List_object____ctor(
    v71,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v110 = 0;
  v72 = 0;
  do
  {
    v109 = v72;
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
        v76 = (UnityEngine_GameObject_o *)iconLoopCtr;
        iconLoopCtr = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)iconLoopCtr, 0LL);
        v78 = (UnityEngine_Transform_o *)iconLoopCtr;
        if ( !byte_49F7116 )
        {
          iconLoopCtr = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v77);
          byte_49F7116 = 1;
        }
        if ( !v78 )
          goto LABEL_87;
        UnityEngine_Transform__set_localScale(v78, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        iconLoopCtr = (__int64)UnityEngine_GameObject__get_transform(v76, 0LL);
        if ( !this->fields.iconLoopCtr )
          goto LABEL_87;
        v79 = (UnityEngine_Transform_o *)iconLoopCtr;
        iconLoopCtr = (__int64)UnityEngine_Component__get_transform(
                                 (UnityEngine_Component_o *)this->fields.iconLoopCtr,
                                 0LL);
        if ( !iconLoopCtr )
          goto LABEL_87;
        *(UnityEngine_Vector3_o *)&v80 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)iconLoopCtr,
                                           0LL);
        if ( !v79 )
          goto LABEL_87;
        UnityEngine_Transform__set_localPosition(v79, *(UnityEngine_Vector3_o *)&v80, 0LL);
        v83 = System_Int32__ToString_62180668((int32_t)&v110, (System_String_o *)StringLiteral_4965/*"D3"*/, 0LL);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v76, v83, 0LL);
        if ( !v71 )
          goto LABEL_87;
        items = v71->fields._items;
        v85 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v71->fields._version;
        if ( !items )
          goto LABEL_87;
        v86 = v71->fields._size;
        if ( (unsigned int)v86 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v71,
            (Il2CppObject *)v76,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
        }
        else
        {
          v87 = &items->obj.klass + v86;
          v71->fields._size = v86 + 1;
          v87[4] = (Il2CppClass *)v76;
          sub_1B6406C(v87 + 4);
        }
        iconLoopCtr = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v76,
                                 (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
        v88 = (System_Collections_Generic_List_object__o *)*p_mstEqIconList;
        if ( !*p_mstEqIconList )
          goto LABEL_87;
        v89 = v88->fields._items;
        v90 = Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__;
        ++v88->fields._version;
        if ( !v89 )
          goto LABEL_87;
        v91 = v88->fields._size;
        v92 = (MasterEquipIconComponent_o *)iconLoopCtr;
        if ( (unsigned int)v91 >= v89->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v88,
            (Il2CppObject *)iconLoopCtr,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
        }
        else
        {
          v93 = &v89->obj.klass + v91;
          v88->fields._size = v91 + 1;
          v93[4] = (Il2CppClass *)v92;
          sub_1B6406C(v93 + 4);
        }
        iconLoopCtr = (__int64)this->fields.currentList;
        if ( !iconLoopCtr )
          goto LABEL_87;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)iconLoopCtr,
                 i,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
        v95 = v110;
        v96 = (UserEquipEntity_o *)Item;
        v99 = (MasterEquipIconComponent_CallbackFunc_o *)sub_1B64314(
                                                           MasterEquipIconComponent_CallbackFunc_TypeInfo,
                                                           v97,
                                                           v98);
        MasterEquipIconComponent_CallbackFunc___ctor(
          v99,
          (Il2CppObject *)this,
          (intptr_t)Method_MasterFormationComponent_OnClickIcon__,
          v100);
        if ( !v92 )
          goto LABEL_87;
        MasterEquipIconComponent__SetEquipInfo(v92, v96, v101, v102, v95, v99, v103);
        MasterEquipIconComponent__UpdateSelected(v92, this->fields.currentEquipId, v104);
        ++v110;
      }
    }
    v72 = v109 + 1;
  }
  while ( v109 + 1 != v107 );
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
  if ( !v71 )
    goto LABEL_87;
  if ( v71->fields._size >= 1 )
  {
    v105 = 0;
    while ( 1 )
    {
      iconLoopCtr = (__int64)System_Collections_Generic_List_object___get_Item(
                               v71,
                               v105,
                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
      if ( !iconLoopCtr )
        break;
      iconLoopCtr = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)iconLoopCtr, 0LL);
      if ( !iconLoopCtr )
        break;
      v112.fields.x = x;
      v112.fields.y = y;
      v112.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconLoopCtr, v112, 0LL);
      v106 = this->fields.iconLoopCtr;
      if ( !v106 )
        break;
      ++v105;
      x = x + (float)v106->fields.itemSize;
      if ( v105 >= v71->fields._size )
        return;
    }
    goto LABEL_87;
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
  System_Collections_Generic_List_object__o *v16; // x21
  struct System_Collections_Generic_List_MasterEquipInfoComponent__o **p_mstEqInfoList; // x20
  struct UICenterOnChild_o **p_centerChild; // x21
  UnityEngine_Object_o *centerChild; // x22
  __int64 loopCtr; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  struct UIWrapContent_o *v23; // x8
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  int size; // w25
  bool isScrollEquipDetail; // w1
  int v27; // w8
  struct UIScrollView_o *mScroll; // x22
  _QWORD *p_onDragStarted; // x22
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v31; // x24
  System_Delegate_o *v32; // x0
  System_Delegate_o *v33; // x8
  UIScrollView_OnDragNotification_c *v34; // x1
  __int64 v35; // x1
  __int64 v36; // x2
  struct UICenterOnChild_o *v37; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v39; // x23
  System_Delegate_o *v40; // x0
  SpringPanel_OnFinished_c *v41; // x1
  int v42; // w9
  int32_t v43; // w22
  UnityEngine_GameObject_o *mstEquipInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v46; // x23
  __int64 v47; // x1
  UnityEngine_Transform_o *v48; // x24
  UnityEngine_Transform_o *v49; // x24
  int v50; // s0
  System_String_o *v53; // x0
  System_Collections_Generic_List_object__o *v54; // x8
  struct System_Object_array *items; // x9
  _QWORD *v56; // x10
  __int64 v57; // x11
  MasterEquipInfoComponent_o *v58; // x23
  Il2CppClass **v59; // x0
  int32_t v60; // w3
  const MethodInfo *v61; // x5
  int v62; // [xsp+4h] [xbp-6Ch]
  int v63; // [xsp+8h] [xbp-68h]
  int32_t moveIdx; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49F792D & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v8);
    sub_1B640C8(&System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo, v9);
    sub_1B640C8(&Method_MasterFormationComponent_OnCenterOnChildFinished__, v10);
    sub_1B640C8(&Method_MasterFormationComponent_OnDragStarted__, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&UIScrollView_OnDragNotification_TypeInfo, v13);
    sub_1B640C8(&SpringPanel_OnFinished_TypeInfo, v14);
    sub_1B640C8(&StringLiteral_4965/*"D3"*/, v15);
    byte_49F792D = 1;
  }
  moveIdx = 0;
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__);
  p_mstEqInfoList = &this->fields.mstEqInfoList;
  this->fields.mstEqInfoList = (struct System_Collections_Generic_List_MasterEquipInfoComponent__o *)v16;
  sub_1B6406C(&this->fields.mstEqInfoList);
  p_centerChild = &this->fields.centerChild;
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
    *p_centerChild = (struct UICenterOnChild_o *)UnityEngine_GameObject__AddComponent_object_(
                                                   (UnityEngine_GameObject_o *)loopCtr,
                                                   (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    loopCtr = sub_1B6406C(&this->fields.centerChild);
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
    p_onDragStarted = &mScroll->fields.onDragStarted;
    v31 = (UIScrollView_OnDragNotification_o *)sub_1B64314(UIScrollView_OnDragNotification_TypeInfo, v21, v22);
    UIScrollView_OnDragNotification___ctor(
      v31,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnDragStarted__,
      0LL);
    v32 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v31, 0LL);
    v33 = v32;
    if ( v32 )
    {
      v34 = UIScrollView_OnDragNotification_TypeInfo;
      if ( (UIScrollView_OnDragNotification_c *)v32->klass != UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_23;
      *p_onDragStarted = v32;
      if ( (UIScrollView_OnDragNotification_c *)v32->klass != v34 )
        goto LABEL_23;
    }
    else
    {
      *p_onDragStarted = 0LL;
    }
    loopCtr = sub_1B6406C(p_onDragStarted);
    v37 = *p_centerChild;
    if ( !v37 )
      goto LABEL_50;
    onFinished = (System_Delegate_o *)v37->fields.onFinished;
    p_centerChild = (struct UICenterOnChild_o **)&v37->fields.onFinished;
    v39 = (SpringPanel_OnFinished_o *)sub_1B64314(SpringPanel_OnFinished_TypeInfo, v35, v36);
    SpringPanel_OnFinished___ctor(
      v39,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnCenterOnChildFinished__,
      0LL);
    v40 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v39, 0LL);
    v33 = v40;
    if ( !v40 )
      goto LABEL_24;
    v41 = SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v40->klass == SpringPanel_OnFinished_TypeInfo )
    {
      *p_centerChild = (struct UICenterOnChild_o *)v40;
      if ( (SpringPanel_OnFinished_c *)v40->klass == v41 )
        goto LABEL_25;
    }
LABEL_23:
    sub_1B645E4(v33);
LABEL_24:
    *p_centerChild = (struct UICenterOnChild_o *)v33;
LABEL_25:
    sub_1B6406C(p_centerChild);
    isScrollEquipDetail = this->fields.isScrollEquipDetail;
    v27 = 2;
    goto LABEL_26;
  }
  isScrollEquipDetail = 0;
  v27 = 1;
  this->fields.isScrollEquipDetail = 0;
LABEL_26:
  v62 = v27;
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, isScrollEquipDetail, v22);
  moveIdx = 0;
  v42 = 0;
  do
  {
    v63 = v42;
    if ( size >= 1 )
    {
      v43 = 0;
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
        v46 = (UnityEngine_GameObject_o *)loopCtr;
        loopCtr = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)loopCtr, 0LL);
        v48 = (UnityEngine_Transform_o *)loopCtr;
        if ( !byte_49F7116 )
        {
          loopCtr = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v47);
          byte_49F7116 = 1;
        }
        if ( !v48 )
          break;
        UnityEngine_Transform__set_localScale(v48, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        loopCtr = (__int64)UnityEngine_GameObject__get_transform(v46, 0LL);
        if ( !this->fields.loopCtr )
          break;
        v49 = (UnityEngine_Transform_o *)loopCtr;
        loopCtr = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.loopCtr, 0LL);
        if ( !loopCtr )
          break;
        *(UnityEngine_Vector3_o *)&v50 = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)loopCtr,
                                           0LL);
        if ( !v49 )
          break;
        UnityEngine_Transform__set_localPosition(v49, *(UnityEngine_Vector3_o *)&v50, 0LL);
        v53 = System_Int32__ToString_62180668((int32_t)&moveIdx, (System_String_o *)StringLiteral_4965/*"D3"*/, 0LL);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v46, v53, 0LL);
        loopCtr = (__int64)UnityEngine_GameObject__GetComponent_object_(
                             v46,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
        v54 = (System_Collections_Generic_List_object__o *)*p_mstEqInfoList;
        if ( !*p_mstEqInfoList )
          break;
        items = v54->fields._items;
        v56 = Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__;
        ++v54->fields._version;
        if ( !items )
          break;
        v57 = v54->fields._size;
        v58 = (MasterEquipInfoComponent_o *)loopCtr;
        if ( (unsigned int)v57 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v54,
            (Il2CppObject *)loopCtr,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        }
        else
        {
          v59 = &items->obj.klass + v57;
          v54->fields._size = v57 + 1;
          v59[4] = (Il2CppClass *)v58;
          sub_1B6406C(v59 + 4);
        }
        loopCtr = (__int64)this->fields.currentList;
        if ( !loopCtr )
          break;
        loopCtr = (__int64)System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)loopCtr,
                             v43,
                             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
        if ( !v58 )
          break;
        MasterEquipInfoComponent__setEquipInfo(
          v58,
          (UserEquipEntity_o *)loopCtr,
          this->fields.usrEquipId,
          v60,
          moveIdx,
          v61);
        ++v43;
        ++moveIdx;
        if ( size == v43 )
          goto LABEL_45;
      }
LABEL_50:
      sub_1B64324(loopCtr);
    }
LABEL_45:
    v42 = v63 + 1;
  }
  while ( v63 + 1 != v62 );
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
  __int64 v10; // x1
  __int64 v11; // x2
  UIMasterFigureTextureOld_o *v12; // x21
  int32_t genderType; // w20
  System_Action_o *monitor; // x22
  Il2CppObject *klass; // x23
  struct MasterFormationComponent___c_StaticFields *static_fields; // x0

  v4 = this;
  if ( (byte_49F792A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&equipId);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_MasterFormationComponent___c__setMstImg_b__65_0__, v6);
    this = (MasterFormationComponent_o *)sub_1B640C8(&MasterFormationComponent___c_TypeInfo, v7);
    byte_49F792A = 1;
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
    v4->fields.masterFigure = MasterFigureManagerOld__CreatePrefab_37604008(
                                v4->fields.mstImgBase,
                                1,
                                v4->fields.genderType,
                                equipId,
                                10,
                                0LL,
                                0,
                                (System_Nullable_Vector3__o)0,
                                0LL);
    sub_1B6406C(&v4->fields.masterFigure);
    return;
  }
  v12 = v4->fields.masterFigure;
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
    monitor = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
    System_Action___ctor(monitor, klass, Method_MasterFormationComponent___c__setMstImg_b__65_0__, 0LL);
    static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
    static_fields->__9__65_0 = monitor;
    this = (MasterFormationComponent_o *)sub_1B6406C(&static_fields->__9__65_0);
  }
  if ( !v12 )
LABEL_16:
    sub_1B64324(this);
  UIMasterFigureTextureOld__SetCharacter(v12, 1, genderType, equipId, monitor, 0, 0LL);
}


void __fastcall MasterFormationComponent__setPosCurrentEq(MasterFormationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *mstEqInfoList; // x0
  int size; // w21
  int32_t v6; // w20
  const MethodInfo *v7; // x2
  struct System_Object_array *items; // x8

  if ( (byte_49F7931 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Item__, v3);
    byte_49F7931 = 1;
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
                                                                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Item__);
          if ( !mstEqInfoList || (items = mstEqInfoList[4].fields._items) == 0LL )
LABEL_12:
            sub_1B64324(mstEqInfoList);
          if ( items->bounds == (Il2CppArrayBounds *)this->fields.usrEquipId )
            break;
          if ( size == ++v6 )
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
  struct UserGameEntity_o *usrGameEnt; // x8
  System_Collections_Generic_IEnumerable_T__o *List; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x21
  struct System_Collections_Generic_List_UserEquipEntity__o **p_currentList; // x20
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x21
  __int64 v24; // x2
  int32_t v25; // w22
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
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1

  if ( (byte_49F792C & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_UserEquipEntity__TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEquipMaster___, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipEntity__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipEntity__Sort__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipEntity___ctor__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipEntity___ctor___75672368, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v9);
    sub_1B640C8(&System_Collections_Generic_List_UserEquipEntity__TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__, v12);
    sub_1B640C8(&MasterFormationComponent___c_TypeInfo, v13);
    byte_49F792C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEquipMaster___);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_27;
  if ( !Instance )
    goto LABEL_27;
  List = (System_Collections_Generic_IEnumerable_T__o *)UserEquipMaster__getList(
                                                          (UserEquipMaster_o *)Instance,
                                                          usrGameEnt->fields.userId,
                                                          0LL);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserEquipEntity__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
  p_currentList = &this->fields.currentList;
  this->fields.currentList = (struct System_Collections_Generic_List_UserEquipEntity__o *)v19;
  Instance = (void *)sub_1B6406C(&this->fields.currentList);
  if ( !List )
    goto LABEL_27;
  if ( List[1].monitor )
  {
    v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_UserEquipEntity__TypeInfo,
                                                         v21,
                                                         v22);
    System_Collections_Generic_List_object____ctor_55234504(
      v23,
      List,
      (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_UserEquipEntity___ctor___75672368);
    if ( this->fields.usrEquipId >= 1 )
    {
      if ( !v23 )
        goto LABEL_27;
      if ( v23->fields._size >= 1 )
      {
        v25 = 0;
        while ( 1 )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       v23,
                       v25,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserEquipEntity__get_Item__);
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
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + size;
            v26->fields._size = size + 1;
            v31[4] = v30;
            sub_1B6406C(v31 + 4);
          }
          if ( ++v25 >= v23->fields._size )
            goto LABEL_18;
        }
LABEL_27:
        sub_1B64324(Instance);
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
        v33 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_UserEquipEntity__TypeInfo, v21, v24);
        System_Comparison_object____ctor(v33, v34, Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__, 0LL);
        static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
        static_fields->__9__67_0 = (struct System_Comparison_UserEquipEntity__o *)v33;
        Instance = (void *)sub_1B6406C(&static_fields->__9__67_0);
      }
      if ( !v32 )
        goto LABEL_27;
      System_Collections_Generic_List_object___Sort_55243320(
        v32,
        v33,
        (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_UserEquipEntity__Sort__);
    }
  }
  MasterFormationComponent__setMstEquipList(this, v21);
  MasterFormationComponent__setMstEquipIconList(this, v36);
  MasterFormationComponent__setPosCurrentEq(this, v37);
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
  sub_1B6406C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A4DDC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A4D94;
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
  if ( (byte_49F7943 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, flg);
    byte_49F7943 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall MasterFormationComponent_NotificationDragState__EndInvoke(
        MasterFormationComponent_NotificationDragState_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  Il2CppObject *v3; // x19

  if ( (byte_49F7944 & 1) == 0 )
  {
    sub_1B640C8(&MasterFormationComponent___c_TypeInfo, v1);
    byte_49F7944 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(MasterFormationComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  MasterFormationComponent___c_TypeInfo->static_fields->__9 = (struct MasterFormationComponent___c_o *)v3;
  sub_1B6406C(MasterFormationComponent___c_TypeInfo->static_fields);
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

  if ( (byte_49F7945 & 1) == 0 )
  {
    this = (MasterFormationComponent___c_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, a);
    byte_49F7945 = 1;
  }
  if ( !a )
    goto LABEL_8;
  v7 = *(_QWORD *)&a->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&a->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (MasterFormationComponent___c_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v9, 0LL);
  if ( !b )
LABEL_8:
    sub_1B64324(this);
  return (_DWORD)this - CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(b->fields.equipId, 0LL);
}