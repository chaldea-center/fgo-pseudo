void __fastcall MasterFormationComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  MasterFormationComponent_c *v4; // x8

  if ( (byte_42EBBC2 & 1) == 0 )
  {
    sub_B5D5C4(&MasterFormationComponent_TypeInfo, v1, v2, v3);
    byte_42EBBC2 = 1;
  }
  MasterFormationComponent_TypeInfo->static_fields->SPELL_WINDOW_ALPHA_TIME = 0.15;
  MasterFormationComponent_TypeInfo->static_fields->NOT_SCROLL_ICON_COUNT = 8;
  v4 = MasterFormationComponent_TypeInfo;
  MasterFormationComponent_TypeInfo->static_fields->ALPHA_ANIMATION_SPD = 0.5;
  v4->static_fields->ALPHA_ANIMATION_INTERVAL = 3.0;
}


void __fastcall MasterFormationComponent___ctor(MasterFormationComponent_o *this, const MethodInfo *method)
{
  this->fields.isFirst = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MasterFormationComponent__CloseCmdSpell(MasterFormationComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_42EBBC1 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBBC1 = 1;
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
    sub_B5D69C(cmdSpellWinComp, method);
  }
}


void __fastcall MasterFormationComponent__OnCenterOnChildFinished(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  struct UICenterOnChild_o *centerChild; // x8
  MasterEquipInfoComponent_o *v10; // x20
  const MethodInfo *v11; // x2
  struct UserEquipEntity_o *usrEquipEnt; // x8

  if ( (byte_42EBBB6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3012/*"CHANGE_INFO"*/, v5, v6, v7);
    byte_42EBBB6 = 1;
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
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___)) == 0LL
    || (v10 = (MasterEquipInfoComponent_o *)leftArrowBtn,
        leftArrowBtn = (UnityEngine_Behaviour_o *)MasterEquipInfoComponent__getEquipId(
                                                    (MasterEquipInfoComponent_o *)leftArrowBtn,
                                                    method),
        this->fields.currentEquipId = (int)leftArrowBtn,
        (usrEquipEnt = v10->fields.usrEquipEnt) == 0LL) )
  {
LABEL_15:
    sub_B5D69C(leftArrowBtn, method);
  }
  this->fields.currentUsrEquipId = usrEquipEnt->fields.id;
  this->fields.isChange = v10->fields.isChange;
  this->fields.currentMoveIdx = v10->fields.moveEqIdx;
  MasterEquipInfoComponent__setDispEffectObj(v10, 1, v11);
  if ( this->fields.isChangeMasterImg )
  {
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.fsm;
    if ( leftArrowBtn )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)leftArrowBtn, (System_String_o *)StringLiteral_3012/*"CHANGE_INFO"*/, 0LL);
      return;
    }
    goto LABEL_15;
  }
}


void __fastcall MasterFormationComponent__OnClickCmdSpell(MasterFormationComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  struct CommandSpellWindowComponent_o *cmdSpellWinComp; // x0

  if ( (byte_42EBBC0 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBBC0 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  cmdSpellWinComp = this->fields.cmdSpellWinComp;
  if ( !cmdSpellWinComp )
    sub_B5D69C(0LL, v5);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
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

  if ( (byte_42EBBAF & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, idx, equipId, userEquipId);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    byte_42EBBAF = 1;
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
              UICenterOnChild__CenterOn_35972220(centerChild, (UnityEngine_Transform_o *)iconCenterChild, 1, 0LL);
              userEquipEntity = this->fields.userEquipEntity;
              if ( userEquipEntity )
              {
                v22 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
                v21 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
                if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                }
                *(_QWORD *)&v27.fields.currentCryptoKey = v22;
                *(_QWORD *)&v27.fields.fakeValue = v21;
                iconCenterChild = (UnityEngine_Behaviour_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                               v27,
                                                               0LL);
                if ( (_DWORD)iconCenterChild != equipId )
                  goto LABEL_24;
                v23 = this->fields.centerChild;
                if ( v23 )
                {
                  iconCenterChild = (UnityEngine_Behaviour_o *)v23->fields.mCenteredObject;
                  if ( iconCenterChild )
                  {
                    iconCenterChild = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   (UnityEngine_GameObject_o *)iconCenterChild,
                                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
                    if ( iconCenterChild )
                    {
                      MasterEquipInfoComponent__setDispEffectObj((MasterEquipInfoComponent_o *)iconCenterChild, 1, v24);
LABEL_24:
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
    sub_B5D69C(iconCenterChild, v15);
  }
}


void __fastcall MasterFormationComponent__OnDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  UnityEngine_Behaviour_o *iconCenterChild; // x0

  if ( (byte_42EBBB3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11495/*"RefreshCurrentInfo"*/, (_DWORD)method, v2, v3);
    byte_42EBBB3 = 1;
  }
  *(_WORD *)&this->fields.isChangeMasterImg = 1;
  this->fields.isDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_35614336(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11495/*"RefreshCurrentInfo"*/,
    0LL);
  MasterFormationComponent__setDisEquipEffect(this, v5);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 0, v6);
  iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
  if ( !iconCenterChild
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 0, 0LL),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 0, 0LL),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 0, 0LL),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.notificationDragState) == 0LL) )
  {
    sub_B5D69C(iconCenterChild, v7);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  void *leftArrowBtn; // x0
  struct UICenterOnChild_o *iconCenterChild; // x8
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EBBB7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_11495/*"RefreshCurrentInfo"*/, v20, v21, v22);
    byte_42EBBB7 = 1;
  }
  memset(&v30, 0, sizeof(v30));
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
                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
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
  UnityEngine_MonoBehaviour__CancelInvoke_35614336(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11495/*"RefreshCurrentInfo"*/,
    0LL);
  leftArrowBtn = this->fields.notificationDragState;
  if ( !leftArrowBtn )
    goto LABEL_20;
  MasterFormationComponent_NotificationDragState__Invoke(
    (MasterFormationComponent_NotificationDragState_o *)leftArrowBtn,
    0,
    0LL);
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v26);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v27);
  leftArrowBtn = this->fields.mstEqIconList;
  if ( !leftArrowBtn )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)leftArrowBtn,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v30,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v30.fields.current )
      sub_B5D69C(0LL, v28);
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v30.fields.current, 1, v29);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v30,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  leftArrowBtn = this->fields.iconCenterChild;
  if ( !leftArrowBtn )
LABEL_20:
    sub_B5D69C(leftArrowBtn, method);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)leftArrowBtn, 0, 0LL);
}


void __fastcall MasterFormationComponent__OnIconDragFinished(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Behaviour_o *iconCenterChild; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EBBB5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v11, v12, v13);
    byte_42EBBB5 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
  if ( !iconCenterChild
    || (UnityEngine_Behaviour__set_enabled(iconCenterChild, 1, 0LL),
        (iconCenterChild = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
  {
    sub_B5D69C(iconCenterChild, method);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)iconCenterChild,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
  {
    if ( !v17.fields.current )
      sub_B5D69C(0LL, v15);
    MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v17.fields.current, 0, v16);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
}


void __fastcall MasterFormationComponent__OnIconDragStarted(MasterFormationComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  UnityEngine_Behaviour_o *leftArrowBtn; // x0

  if ( (byte_42EBBB4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11495/*"RefreshCurrentInfo"*/, (_DWORD)method, v2, v3);
    byte_42EBBB4 = 1;
  }
  *(_WORD *)&this->fields.isChangeMasterImg = 257;
  this->fields.isIconDragStart = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_35614336(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11495/*"RefreshCurrentInfo"*/,
    0LL);
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 0, v5);
  leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.leftArrowBtn;
  if ( !leftArrowBtn
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL),
        (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.rightArrowBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL),
        (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild) == 0LL)
    || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 0, 0LL),
        (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.notificationDragState) == 0LL) )
  {
    sub_B5D69C(leftArrowBtn, v6);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  MasterFormationComponent_NotificationDragState_o *notificationDragState; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2
  UICenterOnChild_o *centerChild; // x20
  UICenterOnChild_o *iconCenterChild; // x20
  const MethodInfo *v11; // x1

  if ( (byte_42EBBB8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11495/*"RefreshCurrentInfo"*/, (_DWORD)method, v2, v3);
    byte_42EBBB8 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_35614336(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_11495/*"RefreshCurrentInfo"*/,
    0LL);
  notificationDragState = this->fields.notificationDragState;
  if ( !notificationDragState )
    goto LABEL_22;
  MasterFormationComponent_NotificationDragState__Invoke(notificationDragState, 0, 0LL);
  MasterFormationComponent__SetEnabledEquipIconScroll(this, 1, v7);
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
      UICenterOnChild__CenterOn_35972220(centerChild, (UnityEngine_Transform_o *)notificationDragState, 1, 0LL);
    }
  }
  if ( !this->fields.isIconDragStart )
  {
LABEL_20:
    MasterFormationComponent__SetEnabledEquipDetailScroll(this, 1, v8);
    goto LABEL_21;
  }
  notificationDragState = (MasterFormationComponent_NotificationDragState_o *)this->fields.iconLoopCtr;
  if ( !notificationDragState
    || (notificationDragState = (MasterFormationComponent_NotificationDragState_o *)UnityEngine_Component__get_transform(
                                                                                      (UnityEngine_Component_o *)notificationDragState,
                                                                                      0LL)) == 0LL )
  {
LABEL_22:
    sub_B5D69C(notificationDragState, v5);
  }
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)notificationDragState, 0LL) < 1 )
    goto LABEL_20;
  this->fields.isIconDragStart = 0;
  MasterFormationComponent__SetEnabledEquipDetailScroll(this, 0, v8);
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
  UICenterOnChild__CenterOn_35972220(iconCenterChild, (UnityEngine_Transform_o *)notificationDragState, 1, 0LL);
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

  if ( this->fields.isScrollEquipDetail || !enabled )
  {
    mScroll = (UnityEngine_Behaviour_o *)this->fields.mScroll;
    if ( !mScroll
      || (UnityEngine_Behaviour__set_enabled(mScroll, enabled, 0LL),
          (mScroll = (UnityEngine_Behaviour_o *)this->fields.loopCtr) == 0LL)
      || (UnityEngine_Behaviour__set_enabled(mScroll, enabled, 0LL),
          (mScroll = (UnityEngine_Behaviour_o *)this->fields.centerChild) == 0LL) )
    {
      sub_B5D69C(mScroll, enabled);
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
      sub_B5D69C(iconScroll, enabled);
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
    sub_B5D69C(mScroll, v4);
  }
}


void __fastcall MasterFormationComponent__UpdateGuideLabel(MasterFormationComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Behaviour_o *iconScroll; // x0
  float alphaAnimNow; // s8
  float alphaAnimTgt; // s9
  MasterFormationComponent_c *v8; // x0
  float realtimeSinceStartup; // s0
  bool v10; // w1

  if ( (byte_42EBBA6 & 1) == 0 )
  {
    sub_B5D5C4(&MasterFormationComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBBA6 = 1;
  }
  iconScroll = (UnityEngine_Behaviour_o *)this->fields.iconScroll;
  if ( !iconScroll )
    goto LABEL_24;
  if ( UnityEngine_Behaviour__get_enabled(iconScroll, 0LL) )
  {
    alphaAnimNow = this->fields.alphaAnimNow;
    alphaAnimTgt = this->fields.alphaAnimTgt;
    v8 = MasterFormationComponent_TypeInfo;
    if ( (BYTE3(MasterFormationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MasterFormationComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterFormationComponent_TypeInfo);
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
        v10 = 1;
      }
      else
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.touchGuideLabel, 1, 0LL);
        iconScroll = (UnityEngine_Behaviour_o *)this->fields.scrollGuideLabel;
        if ( !iconScroll )
          goto LABEL_24;
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
LABEL_24:
    sub_B5D69C(iconScroll, method);
  }
}


void __fastcall MasterFormationComponent__UpdateIconSelected(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_MasterEquipIconComponent__o *mstEqIconList; // x22
  int size; // w20
  unsigned int v10; // w21
  MasterEquipIconComponent_o *v11; // x0

  if ( (byte_42EBBB0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Count__,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__get_Item__, v5, v6, v7);
    byte_42EBBB0 = 1;
  }
  mstEqIconList = this->fields.mstEqIconList;
  if ( mstEqIconList )
  {
    size = mstEqIconList->fields._size;
    if ( size >= 1 )
    {
      v10 = 0;
      do
      {
        if ( mstEqIconList->fields._size <= v10 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v11 = mstEqIconList->fields._items->m_Items[v10];
        if ( !v11 )
          break;
        MasterEquipIconComponent__UpdateSelected(v11, this->fields.currentEquipId, v2);
        if ( (int)++v10 >= size )
          return;
        mstEqIconList = this->fields.mstEqIconList;
      }
      while ( mstEqIconList );
      sub_B5D69C(v11, method);
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
    sub_B5D69C(cmdSpellIconComp, method);
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
  __int64 v3; // x3
  System_Delegate_o *notificationDragState; // x21
  struct MasterFormationComponent_NotificationDragState_o **p_notificationDragState; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MasterFormationComponent_o *v11; // x0
  MasterFormationComponent_NotificationDragState_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EBBA4 & 1) == 0 )
  {
    sub_B5D5C4(&MasterFormationComponent_NotificationDragState_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBBA4 = 1;
  }
  notificationDragState = (System_Delegate_o *)this->fields.notificationDragState;
  p_notificationDragState = &this->fields.notificationDragState;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(notificationDragState, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (MasterFormationComponent_NotificationDragState_c *)v8->klass != MasterFormationComponent_NotificationDragState_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_notificationDragState, v8, notificationDragState);
    v10 = notificationDragState == (System_Delegate_o *)v9;
    notificationDragState = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  MasterFormationComponent__remove_notificationDragState(v11, v12, v13);
}


void __fastcall MasterFormationComponent__changeCmdSpellImg(MasterFormationComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserGameEntity_o *SelfUserGame; // x22
  const MethodInfo *v9; // x3
  __int64 SpellImageId; // x0
  __int64 v11; // x1
  CommandSpellIconComponent_o *cmdSpellIconComp; // x21
  int32_t v13; // w20
  int32_t CommandSpell; // w22
  System_Action_o *v15; // x23

  if ( (byte_42EBBAB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__, v5, v6, v7);
    byte_42EBBAB = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  SpellImageId = MasterFormationComponent__getSpellImageId(
                   (MasterFormationComponent_o *)SelfUserGame,
                   this->fields.genderType,
                   this->fields.currentEquipId,
                   v9);
  if ( !SelfUserGame
    || (cmdSpellIconComp = this->fields.cmdSpellIconComp,
        v13 = SpellImageId,
        CommandSpell = UserGameEntity__getCommandSpell(SelfUserGame, 0LL),
        v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)this,
          Method_MasterFormationComponent__changeCmdSpellImg_b__66_0__,
          0LL),
        !cmdSpellIconComp) )
  {
    sub_B5D69C(SpellImageId, v11);
  }
  CommandSpellIconComponent__SetChangeCurrentCmdSepll(cmdSpellIconComp, v13, CommandSpell, v15, 0LL);
}


void __fastcall MasterFormationComponent__closeMasterFormation(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  UnityEngine_Component_o *loopCtr; // x0
  int32_t childCount; // w0
  int32_t v11; // w20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v13; // w0
  int32_t v14; // w20
  UnityEngine_Object_o *v15; // x21

  if ( (byte_42EBBBE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UserEquipNewManager_TypeInfo, v5, v6, v7);
    byte_42EBBBE = 1;
  }
  MasterFormationComponent__destroyMasterFigure(this, method);
  loopCtr = (UnityEngine_Component_o *)this->fields.loopCtr;
  if ( !loopCtr )
    goto LABEL_31;
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL);
  if ( !loopCtr )
    goto LABEL_31;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)loopCtr, 0LL);
  v11 = childCount - 1;
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
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)loopCtr, v11, 0LL);
      if ( !loopCtr )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(loopCtr, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
      if ( --v11 < 0 )
        goto LABEL_13;
    }
LABEL_31:
    sub_B5D69C(loopCtr, v8);
  }
LABEL_13:
  loopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
  if ( !loopCtr )
    goto LABEL_31;
  loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL);
  if ( !loopCtr )
    goto LABEL_31;
  v13 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)loopCtr, 0LL);
  v14 = v13 - 1;
  if ( v13 >= 1 )
  {
    do
    {
      loopCtr = (UnityEngine_Component_o *)this->fields.iconLoopCtr;
      if ( !loopCtr )
        goto LABEL_31;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(loopCtr, 0LL);
      if ( !loopCtr )
        goto LABEL_31;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)loopCtr, v14, 0LL);
      if ( !loopCtr )
        goto LABEL_31;
      v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(loopCtr, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448(v15, 0LL);
    }
    while ( --v14 >= 0 );
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o **p_masterFigure; // x19
  UnityEngine_Object_o *v6; // x20
  struct UIMasterFigureTextureOld_o *masterFigure; // t1
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42EBBBF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBBBF = 1;
  }
  masterFigure = this->fields.masterFigure;
  p_masterFigure = (UnityEngine_Component_o **)&this->fields.masterFigure;
  v6 = (UnityEngine_Object_o *)masterFigure;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    if ( !*p_masterFigure )
      sub_B5D69C(0LL, v8);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_masterFigure, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_masterFigure = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_masterFigure, 0LL, v10, v11, v12, v13, v14, v15);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  DataManager_c *klass; // x19
  void *writeMasterDataThreadException; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  v4 = equipId;
  if ( (byte_42EBBBD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EquipMaster___, genderType, equipId, method);
    sub_B5D5C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42EBBBD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EquipMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      v4,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v16);
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
  *(_QWORD *)&v20.fields.currentCryptoKey = writeMasterDataThreadException;
  *(_QWORD *)&v20.fields.fakeValue = klass;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v20, 0LL);
}


bool __fastcall MasterFormationComponent__isChangeEquip(MasterFormationComponent_o *this, const MethodInfo *method)
{
  return this->fields.isChange;
}


void __fastcall MasterFormationComponent__onClickLeftArrow(MasterFormationComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  int32_t childCount; // w8
  int v22; // w8
  int32_t v23; // w20
  UICenterOnChild_o *iconCenterChild; // x21
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EBBBB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_11495/*"RefreshCurrentInfo"*/, v17, v18, v19);
    byte_42EBBBB = 1;
  }
  memset(&v27, 0, sizeof(v27));
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
    UnityEngine_MonoBehaviour__CancelInvoke_35614336(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11495/*"RefreshCurrentInfo"*/,
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
    v22 = childCount - 1;
    v23 = this->fields.currentMoveIconIdx - 1 < 0 ? v22 : this->fields.currentMoveIconIdx - 1;
    this->fields.currentMoveIconIdx = v23;
    if ( !leftArrowBtn
      || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr) == 0LL)
      || (iconCenterChild = this->fields.iconCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0LL)) == 0LL)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v23,
                                                      0LL),
          !iconCenterChild)
      || (UICenterOnChild__CenterOn_35972220(iconCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
    {
LABEL_27:
      sub_B5D69C(leftArrowBtn, method);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v27,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)leftArrowBtn,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v27,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v27.fields.current )
        sub_B5D69C(0LL, v25);
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v27.fields.current, 0, v26);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v27,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  }
}


void __fastcall MasterFormationComponent__onClickRightArrow(MasterFormationComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_Behaviour_o *leftArrowBtn; // x0
  int32_t childCount; // w0
  int32_t currentMoveIconIdx; // w9
  int32_t v23; // w8
  int32_t v24; // w20
  UICenterOnChild_o *iconCenterChild; // x21
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EBBBA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_11495/*"RefreshCurrentInfo"*/, v17, v18, v19);
    byte_42EBBBA = 1;
  }
  memset(&v28, 0, sizeof(v28));
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
    UnityEngine_MonoBehaviour__CancelInvoke_35614336(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11495/*"RefreshCurrentInfo"*/,
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
    v23 = childCount;
    leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconCenterChild;
    v24 = currentMoveIconIdx + 1 < v23 ? currentMoveIconIdx + 1 : 0;
    this->fields.currentMoveIconIdx = v24;
    if ( !leftArrowBtn
      || (UnityEngine_Behaviour__set_enabled(leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.iconLoopCtr) == 0LL)
      || (iconCenterChild = this->fields.iconCenterChild,
          (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)leftArrowBtn,
                                                       0LL)) == 0LL)
      || (leftArrowBtn = (UnityEngine_Behaviour_o *)UnityEngine_Transform__GetChild(
                                                      (UnityEngine_Transform_o *)leftArrowBtn,
                                                      v24,
                                                      0LL),
          !iconCenterChild)
      || (UICenterOnChild__CenterOn_35972220(iconCenterChild, (UnityEngine_Transform_o *)leftArrowBtn, 1, 0LL),
          (leftArrowBtn = (UnityEngine_Behaviour_o *)this->fields.mstEqIconList) == 0LL) )
    {
LABEL_27:
      sub_B5D69C(leftArrowBtn, method);
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v28,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)leftArrowBtn,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MasterEquipIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v28,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__MoveNext__) )
    {
      if ( !v28.fields.current )
        sub_B5D69C(0LL, v26);
      MasterEquipIconComponent__SetEnabled((MasterEquipIconComponent_o *)v28.fields.current, 0, v27);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v28,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MasterEquipIconComponent__Dispose__);
  }
}


void __fastcall MasterFormationComponent__remove_notificationDragState(
        MasterFormationComponent_o *this,
        MasterFormationComponent_NotificationDragState_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *notificationDragState; // x21
  struct MasterFormationComponent_NotificationDragState_o **p_notificationDragState; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MasterFormationComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42EBBA5 & 1) == 0 )
  {
    sub_B5D5C4(&MasterFormationComponent_NotificationDragState_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBBA5 = 1;
  }
  notificationDragState = (System_Delegate_o *)this->fields.notificationDragState;
  p_notificationDragState = &this->fields.notificationDragState;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(notificationDragState, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (MasterFormationComponent_NotificationDragState_c *)v8->klass != MasterFormationComponent_NotificationDragState_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_notificationDragState, v8, notificationDragState);
    v10 = notificationDragState == (System_Delegate_o *)v9;
    notificationDragState = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B5D990(v8);
  MasterFormationComponent__Update(v11, v12);
}


void __fastcall MasterFormationComponent__setChangeMasterInfo(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42EBBBC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5575/*"END_SET"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_11495/*"RefreshCurrentInfo"*/, v5, v6, v7);
    byte_42EBBBC = 1;
  }
  MasterFormationComponent__setMstImg(this, this->fields.currentEquipId, v2);
  if ( this->fields.isDragStart || this->fields.isIconDragStart )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11495/*"RefreshCurrentInfo"*/,
      0.1,
      0LL);
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, v8);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5575/*"END_SET"*/, 0LL);
}


void __fastcall MasterFormationComponent__setCmdSpellImg(MasterFormationComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v12; // x1
  BattleWindowComponent_o *cmdSpellWinComp; // x20
  struct CommandSpellWindowComponent_o *v14; // x8
  struct CommandSpellWindowComponent_o *v15; // x20
  CommandSpellWindowComponent_CloseButtonCallBack_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Vector2_o v23; // 0:s0.4,4:s1.4

  if ( (byte_42EBBA8 & 1) == 0 )
  {
    sub_B5D5C4(&CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MasterFormationComponent_CloseCmdSpell__, v5, v6, v7);
    sub_B5D5C4(&MasterFormationComponent_TypeInfo, v8, v9, v10);
    byte_42EBBA8 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !this->fields.cmdSpellIconComp )
    goto LABEL_13;
  CommandSpellIconComponent__SetData(this->fields.cmdSpellIconComp, SelfUserGame, 0LL);
  SelfUserGame = (UserGameEntity_o *)this->fields.cmdSpellIconComp;
  if ( !SelfUserGame )
    goto LABEL_13;
  v23.fields.x = 130.0;
  v23.fields.y = 130.0;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)SelfUserGame, v23, 0LL);
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
        (v14 = this->fields.cmdSpellWinComp) == 0LL)
    || (v14->fields.mode = 0,
        v15 = this->fields.cmdSpellWinComp,
        v16 = (CommandSpellWindowComponent_CloseButtonCallBack_o *)sub_B5D694(CommandSpellWindowComponent_CloseButtonCallBack_TypeInfo),
        CommandSpellWindowComponent_CloseButtonCallBack___ctor(
          v16,
          (Il2CppObject *)this,
          Method_MasterFormationComponent_CloseCmdSpell__,
          0LL),
        !v15) )
  {
LABEL_13:
    sub_B5D69C(SelfUserGame, v12);
  }
  v15->fields.callback_close = v16;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v15->fields.callback_close,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


void __fastcall MasterFormationComponent__setCmdSpellRecoverTime(
        MasterFormationComponent_o *this,
        int64_t recoverTime,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UILabel_o *recoverTitleLb; // x21
  System_String_o *cmdSpellRecTimeInfo; // x0
  unsigned __int64 v17; // x22
  int v18; // w23
  int v19; // w24
  UILabel_o *recoverTimeLb; // x19
  System_String_o *v21; // x20
  Il2CppObject *v22; // x21
  Il2CppObject *v23; // x22
  Il2CppObject *v24; // x0
  int v25; // [xsp+Ch] [xbp-44h] BYREF
  int v26; // [xsp+18h] [xbp-38h] BYREF
  int v27; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42EBBA9 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, recoverTime, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_3321/*"COMMAND_SPELL_RECOVER_TIME"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_3324/*"COMMNAD_SPELL_RECV_TXT"*/, v12, v13, v14);
    byte_42EBBA9 = 1;
  }
  if ( recoverTime > 0 )
  {
    recoverTitleLb = this->fields.recoverTitleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    cmdSpellRecTimeInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3324/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
    if ( recoverTitleLb )
    {
      v17 = recoverTime / 0xE10uLL;
      v18 = (int)(recoverTime / 0x3CuLL) % 60;
      v19 = recoverTime % 0x3CuLL;
      UILabel__set_text(recoverTitleLb, cmdSpellRecTimeInfo, 0LL);
      recoverTimeLb = this->fields.recoverTimeLb;
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3321/*"COMMAND_SPELL_RECOVER_TIME"*/, 0LL);
      v27 = v17;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
      v26 = v18;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
      v25 = v19;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
      cmdSpellRecTimeInfo = System_String__Format_44578852(v21, v22, v23, v24, 0LL);
      if ( recoverTimeLb )
      {
        UILabel__set_text(recoverTimeLb, cmdSpellRecTimeInfo, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B5D69C(cmdSpellRecTimeInfo, recoverTime);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_MasterEquipInfoComponent__o *mstEqInfoList; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EBBB9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__, v11, v12, v13);
    byte_42EBBB9 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  mstEqInfoList = this->fields.mstEqInfoList;
  if ( !mstEqInfoList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mstEqInfoList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__MoveNext__) )
  {
    if ( !v17.fields.current )
      sub_B5D69C(0LL, v15);
    MasterEquipInfoComponent__setDispEffectObj((MasterEquipInfoComponent_o *)v17.fields.current, 0, v16);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MasterEquipInfoComponent__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setDispRePosition(
        MasterFormationComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UIWrapContent_o *loopCtr; // x0
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x9
  int v11; // w8
  int32_t v12; // w1
  UICenterOnChild_o *iconCenterChild; // x21

  if ( (byte_42EBBB2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, idx, (_DWORD)method, v3);
    sub_B5D5C4(&MasterFormationComponent_TypeInfo, v6, v7, v8);
    byte_42EBBB2 = 1;
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
      v11 = idx - SHIDWORD(loopCtr[1].fields.callbackFunc->klass) / 2;
      if ( v11 < 0 )
      {
        if ( !currentList )
          goto LABEL_24;
        v11 += currentList->fields._size;
      }
      else if ( !currentList )
      {
        goto LABEL_24;
      }
      loopCtr = this->fields.iconLoopCtr;
      if ( !loopCtr )
        goto LABEL_24;
      v12 = currentList->fields._size + v11;
    }
    else
    {
      loopCtr = this->fields.iconLoopCtr;
      if ( !loopCtr )
        goto LABEL_24;
      v12 = idx;
    }
    UIWrapContent__setScrollPos(loopCtr, v12, 0LL);
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
            UICenterOnChild__CenterOn_35972220(iconCenterChild, (UnityEngine_Transform_o *)loopCtr, 1, 0LL);
            goto LABEL_23;
          }
        }
      }
    }
LABEL_24:
    sub_B5D69C(loopCtr, *(_QWORD *)&idx);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  const MethodInfo *v33; // x2
  int32_t lv; // w8
  __int64 v35; // x21
  __int64 v36; // x21
  UserServantEntity_o *Entity; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct UserEquipEntity_o *userEquipEntity; // x8
  __int64 v45; // x21
  __int64 v46; // x22
  int32_t v47; // w1
  const MethodInfo *v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_42EBBA7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserEquipMaster___,
      (_DWORD)userData,
      userEquipId,
      notificationDragState);
    sub_B5D5C4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15, v16, v17);
    byte_42EBBA7 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrGameEnt = SelfUserGame;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)SelfUserGame,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.usrGameEnt,
    (System_Int32_array **)userData,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
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
    v47 = 0;
    goto LABEL_25;
  }
  v35 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v35 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v36 = **(_QWORD **)(v35 + 192);
  if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
    sub_AF52C4(v36);
  gameObject = **(UnityEngine_GameObject_o ***)(v36 + 184);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)gameObject,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)gameObject,
                   this->fields.usrEquipId,
                   (const MethodInfo_23FB038 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__),
        this->fields.userEquipEntity = (struct UserEquipEntity_o *)Entity,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.userEquipEntity,
          (System_Int32_array **)Entity,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43),
        (userEquipEntity = this->fields.userEquipEntity) == 0LL) )
  {
LABEL_26:
    sub_B5D69C(gameObject, v26);
  }
  v46 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.currentCryptoKey;
  v45 = *(_QWORD *)&userEquipEntity->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v55.fields.currentCryptoKey = v46;
  *(_QWORD *)&v55.fields.fakeValue = v45;
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v55, 0LL);
  this->fields.currentEquipId = v47;
LABEL_25:
  MasterFormationComponent__setMstImg(this, v47, v33);
  MasterFormationComponent__setUsrEquipData(this, v48);
  this->fields.isChangeMasterImg = 1;
  this->fields.notificationDragState = notificationDragState;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.notificationDragState,
    (System_Int32_array **)notificationDragState,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setMstEquipIconList(
        MasterFormationComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // x21
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct UICenterOnChild_o **p_iconCenterChild; // x21
  UnityEngine_Object_o *iconCenterChild; // x22
  UnityEngine_Component_o *iconLoopCtr; // x0
  __int64 v87; // x1
  System_Int32_array **v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  struct UIWrapContent_o *v95; // x8
  UILabel_o *touchGuideLabel; // x22
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  const MethodInfo *v98; // x2
  float x; // s10
  float y; // s8
  float z; // s9
  struct UIScrollView_o *iconScroll; // x22
  BattleServantConfConponent_o *p_onDragFinished; // x22
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v105; // x24
  System_Int32_array **v106; // x0
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x8
  struct UIScrollView_o *v114; // x22
  BattleServantConfConponent_o *p_onMomentumMove; // x22
  System_Delegate_o *onMomentumMove; // t1
  UIScrollView_OnDragNotification_o *v117; // x24
  System_Int32_array **v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  struct UICenterOnChild_o *v125; // x21
  BattleServantConfConponent_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v128; // x23
  System_Int32_array **v129; // x0
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  UILabel_o *scrollGuideLabel; // x21
  bool isScrollEquipIcon; // w1
  int v138; // w8
  struct UIWrapContent_o *v139; // x8
  int v140; // w8
  int v141; // w9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v142; // x21
  int v143; // w9
  unsigned __int64 i; // x20
  UnityEngine_GameObject_o *equipIconPrefab; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v147; // x22
  UnityEngine_Transform_o *v148; // x23
  int v149; // s0
  UnityEngine_Transform_o *v152; // x23
  int v153; // s0
  System_String_o *v156; // x0
  MasterEquipIconComponent_o *v157; // x22
  struct System_Collections_Generic_List_UserEquipEntity__o *v158; // x23
  struct UserEquipEntity_array *items; // x8
  int32_t v160; // w23
  UserEquipEntity_o *v161; // x24
  MasterEquipIconComponent_CallbackFunc_o *v162; // x25
  int64_t v163; // x2
  int32_t v164; // w3
  const MethodInfo *v165; // x6
  const MethodInfo *v166; // x2
  int v167; // w8
  int v168; // w20
  struct UIWrapContent_o *v169; // x8
  int v170; // s0
  MasterFormationComponent_o *v171; // x0
  const MethodInfo *v172; // x1
  unsigned int v173; // [xsp+Ch] [xbp-84h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_mstEqIconList; // [xsp+10h] [xbp-80h]
  signed __int64 size; // [xsp+18h] [xbp-78h]
  int v176; // [xsp+28h] [xbp-68h]
  int32_t v177; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v179; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EBBAE & 1) == 0 )
  {
    sub_B5D5C4(&MasterEquipIconComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_MasterFormationComponent_OnClickIcon__, v44, v45, v46);
    sub_B5D5C4(&Method_MasterFormationComponent_OnIconCenterOnChildFinished__, v47, v48, v49);
    sub_B5D5C4(&Method_MasterFormationComponent_OnIconDragFinished__, v50, v51, v52);
    sub_B5D5C4(&Method_MasterFormationComponent_OnIconDragStarted__, v53, v54, v55);
    sub_B5D5C4(&MasterFormationComponent_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&UIScrollView_OnDragNotification_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&SpringPanel_OnFinished_TypeInfo, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_8722/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_8721/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_4620/*"D3"*/, v74, v75, v76);
    byte_42EBBAE = 1;
  }
  v177 = 0;
  v77 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MasterEquipIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v77,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MasterEquipIconComponent___ctor__);
  this->fields.mstEqIconList = (struct System_Collections_Generic_List_MasterEquipIconComponent__o *)v77;
  p_mstEqIconList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.mstEqIconList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mstEqIconList,
    (System_Int32_array **)v77,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
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
    v88 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                   (UnityEngine_GameObject_o *)iconLoopCtr,
                                   (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_iconCenterChild = (struct UICenterOnChild_o *)v88;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.iconCenterChild, v88, v89, v90, v91, v92, v93, v94);
  }
  v95 = this->fields.iconLoopCtr;
  if ( !v95 )
    goto LABEL_76;
  *(_DWORD *)&v95->fields.cullContent = 64;
  touchGuideLabel = this->fields.touchGuideLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  iconLoopCtr = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8722/*"MASTER_EQUIP_ICON_TOUCH_TXT"*/, 0LL);
  if ( !touchGuideLabel
    || (UILabel__set_text(touchGuideLabel, (System_String_o *)iconLoopCtr, 0LL),
        (currentList = this->fields.currentList) == 0LL)
    || (iconLoopCtr = (UnityEngine_Component_o *)this->fields.iconScroll) == 0LL
    || (size = currentList->fields._size,
        (iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(iconLoopCtr, 0LL)) == 0LL) )
  {
LABEL_76:
    sub_B5D69C(iconLoopCtr, v87);
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
    v139 = this->fields.iconLoopCtr;
    this->fields.isScrollEquipIcon = 0;
    if ( !v139 )
      goto LABEL_76;
    v140 = *(_DWORD *)&v139->fields.cullContent;
    isScrollEquipIcon = 0;
    v141 = size - 1;
    if ( (int)size - 1 < 0 )
      v141 = size;
    x = (float)-((v141 >> 1) * v140);
    if ( (size & 1) == 0 )
      x = x - (float)(v140 / 2);
    v138 = 1;
  }
  else
  {
    iconScroll = this->fields.iconScroll;
    this->fields.isScrollEquipIcon = 1;
    if ( !iconScroll )
      goto LABEL_76;
    onDragFinished = (System_Delegate_o *)iconScroll->fields.onDragFinished;
    p_onDragFinished = (BattleServantConfConponent_o *)&iconScroll->fields.onDragFinished;
    v105 = (UIScrollView_OnDragNotification_o *)sub_B5D694(UIScrollView_OnDragNotification_TypeInfo);
    UIScrollView_OnDragNotification___ctor(
      v105,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragStarted__,
      0LL);
    v106 = (System_Int32_array **)System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v105, 0LL);
    v113 = v106;
    if ( v106 && *v106 != (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
      goto LABEL_77;
    p_onDragFinished->klass = (BattleServantConfConponent_c *)v106;
    sub_B5D560(p_onDragFinished, v106, v107, v108, v109, v110, v111, v112);
    v114 = this->fields.iconScroll;
    if ( !v114 )
      goto LABEL_76;
    onMomentumMove = (System_Delegate_o *)v114->fields.onMomentumMove;
    p_onMomentumMove = (BattleServantConfConponent_o *)&v114->fields.onMomentumMove;
    v117 = (UIScrollView_OnDragNotification_o *)sub_B5D694(UIScrollView_OnDragNotification_TypeInfo);
    UIScrollView_OnDragNotification___ctor(
      v117,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconDragFinished__,
      0LL);
    v118 = (System_Int32_array **)System_Delegate__Combine(onMomentumMove, (System_Delegate_o *)v117, 0LL);
    v113 = v118;
    if ( v118 )
    {
      if ( *v118 != (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
        goto LABEL_77;
    }
    p_onMomentumMove->klass = (BattleServantConfConponent_c *)v118;
    sub_B5D560(p_onMomentumMove, v118, v119, v120, v121, v122, v123, v124);
    v125 = *p_iconCenterChild;
    if ( !v125 )
      goto LABEL_76;
    onFinished = (System_Delegate_o *)v125->fields.onFinished;
    p_onFinished = (BattleServantConfConponent_o *)&v125->fields.onFinished;
    v128 = (SpringPanel_OnFinished_o *)sub_B5D694(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(
      v128,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnIconCenterOnChildFinished__,
      0LL);
    v129 = (System_Int32_array **)System_Delegate__Combine(onFinished, (System_Delegate_o *)v128, 0LL);
    v113 = v129;
    if ( v129 )
    {
      if ( *v129 != (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
      {
LABEL_77:
        sub_B5D990(v113);
        MasterFormationComponent__setPosCurrentEq(v171, v172);
        return;
      }
    }
    p_onFinished->klass = (BattleServantConfConponent_c *)v129;
    sub_B5D560(p_onFinished, v129, v130, v131, v132, v133, v134, v135);
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
    iconLoopCtr = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8721/*"MASTER_EQUIP_ICON_SCROLL_TXT"*/, 0LL);
    if ( !scrollGuideLabel )
      goto LABEL_76;
    UILabel__set_text(scrollGuideLabel, (System_String_o *)iconLoopCtr, 0LL);
    isScrollEquipIcon = this->fields.isScrollEquipIcon;
    v138 = 2;
  }
  v173 = v138;
  MasterFormationComponent__SetEnabledEquipIconScroll(this, isScrollEquipIcon, v98);
  iconLoopCtr = (UnityEngine_Component_o *)this->fields.iconCenterChild;
  if ( !iconLoopCtr )
    goto LABEL_76;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)iconLoopCtr, 0, 0LL);
  v142 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v142,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v177 = 0;
  v143 = 0;
  do
  {
    v176 = v143;
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
        v147 = (UnityEngine_GameObject_o *)iconLoopCtr;
        v148 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)iconLoopCtr, 0LL);
        *(UnityEngine_Vector3_o *)&v149 = UnityEngine_Vector3__get_one(0LL);
        if ( !v148 )
          goto LABEL_76;
        UnityEngine_Transform__set_localScale(v148, *(UnityEngine_Vector3_o *)&v149, 0LL);
        iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v147, 0LL);
        if ( !this->fields.iconLoopCtr )
          goto LABEL_76;
        v152 = (UnityEngine_Transform_o *)iconLoopCtr;
        iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this->fields.iconLoopCtr,
                                                   0LL);
        if ( !iconLoopCtr )
          goto LABEL_76;
        *(UnityEngine_Vector3_o *)&v153 = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)iconLoopCtr,
                                            0LL);
        if ( !v152 )
          goto LABEL_76;
        UnityEngine_Transform__set_localPosition(v152, *(UnityEngine_Vector3_o *)&v153, 0LL);
        v156 = System_Int32__ToString_39741776((int32_t)&v177, (System_String_o *)StringLiteral_4620/*"D3"*/, 0LL);
        UnityEngine_Object__set_name((UnityEngine_Object_o *)v147, v156, 0LL);
        if ( !v142 )
          goto LABEL_76;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v142,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v147,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
        iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   v147,
                                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MasterEquipIconComponent___);
        if ( !*p_mstEqIconList )
          goto LABEL_76;
        v157 = (MasterEquipIconComponent_o *)iconLoopCtr;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_mstEqIconList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)iconLoopCtr,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MasterEquipIconComponent__Add__);
        v158 = this->fields.currentList;
        if ( !v158 )
          goto LABEL_76;
        if ( i >= (unsigned int)v158->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        items = v158->fields._items;
        v160 = v177;
        v161 = items->m_Items[i];
        v162 = (MasterEquipIconComponent_CallbackFunc_o *)sub_B5D694(MasterEquipIconComponent_CallbackFunc_TypeInfo);
        MasterEquipIconComponent_CallbackFunc___ctor(
          v162,
          (Il2CppObject *)this,
          Method_MasterFormationComponent_OnClickIcon__,
          0LL);
        if ( !v157 )
          goto LABEL_76;
        MasterEquipIconComponent__SetEquipInfo(v157, v161, v163, v164, v160, v162, v165);
        MasterEquipIconComponent__UpdateSelected(v157, this->fields.currentEquipId, v166);
        ++v177;
      }
    }
    v143 = v176 + 1;
  }
  while ( v176 + 1 < v173 );
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
  if ( !v142 )
    goto LABEL_76;
  v167 = v142->fields._size;
  if ( v167 >= 1 )
  {
    v168 = 0;
    while ( 1 )
    {
      if ( v167 <= (unsigned int)v168 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      iconLoopCtr = (UnityEngine_Component_o *)v142->fields._items->m_Items[v168];
      if ( !iconLoopCtr )
        break;
      iconLoopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)iconLoopCtr,
                                                 0LL);
      if ( !iconLoopCtr )
        break;
      v179.fields.x = x;
      v179.fields.y = y;
      v179.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)iconLoopCtr, v179, 0LL);
      v169 = this->fields.iconLoopCtr;
      if ( !v169 )
        break;
      v170 = *(_DWORD *)&v169->fields.cullContent;
      v167 = v142->fields._size;
      ++v168;
      x = x + (float)v170;
      if ( v168 >= v167 )
        return;
    }
    goto LABEL_76;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setMstEquipList(MasterFormationComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_mstEqInfoList; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct UICenterOnChild_o **p_centerChild; // x21
  UnityEngine_Object_o *centerChild; // x22
  UnityEngine_Component_o *loopCtr; // x0
  __int64 v52; // x1
  const MethodInfo *v53; // x2
  System_Int32_array **v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct UIWrapContent_o *v61; // x8
  struct System_Collections_Generic_List_UserEquipEntity__o *currentList; // x8
  signed __int64 size; // x25
  bool isScrollEquipDetail; // w1
  int v65; // w8
  struct UIScrollView_o *mScroll; // x22
  BattleServantConfConponent_o *p_onDragFinished; // x22
  System_Delegate_o *onDragFinished; // t1
  UIScrollView_OnDragNotification_o *v69; // x24
  System_Int32_array **v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x8
  struct UICenterOnChild_o *v78; // x21
  BattleServantConfConponent_o *p_onFinished; // x21
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v81; // x23
  System_Int32_array **v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  int v89; // w24
  unsigned __int64 v90; // x23
  UnityEngine_GameObject_o *mstEquipInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v93; // x21
  UnityEngine_Transform_o *v94; // x22
  int v95; // s0
  UnityEngine_Transform_o *v98; // x22
  int v99; // s0
  System_String_o *v102; // x0
  MasterEquipInfoComponent_o *v103; // x21
  int32_t v104; // w3
  const MethodInfo *v105; // x5
  struct System_Collections_Generic_List_UserEquipEntity__o *v106; // x22
  MasterFormationComponent_o *v107; // x0
  const MethodInfo *v108; // x1
  unsigned int v109; // [xsp+8h] [xbp-58h]
  int32_t moveIdx; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42EBBAD & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_MasterFormationComponent_OnCenterOnChildFinished__, v23, v24, v25);
    sub_B5D5C4(&Method_MasterFormationComponent_OnDragStarted__, v26, v27, v28);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&UIScrollView_OnDragNotification_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&SpringPanel_OnFinished_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_4620/*"D3"*/, v38, v39, v40);
    byte_42EBBAD = 1;
  }
  moveIdx = 0;
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MasterEquipInfoComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MasterEquipInfoComponent___ctor__);
  p_mstEqInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.mstEqInfoList;
  this->fields.mstEqInfoList = (struct System_Collections_Generic_List_MasterEquipInfoComponent__o *)v41;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mstEqInfoList,
    (System_Int32_array **)v41,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
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
    v54 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                   (UnityEngine_GameObject_o *)loopCtr,
                                   (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_UICenterOnChild___);
    *p_centerChild = (struct UICenterOnChild_o *)v54;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.centerChild, v54, v55, v56, v57, v58, v59, v60);
  }
  v61 = this->fields.loopCtr;
  if ( !v61 )
    goto LABEL_41;
  *(_DWORD *)&v61->fields.cullContent = 534;
  currentList = this->fields.currentList;
  if ( !currentList )
    goto LABEL_41;
  size = currentList->fields._size;
  if ( (int)size < 2 )
  {
    isScrollEquipDetail = 0;
    v65 = 1;
    this->fields.isScrollEquipDetail = 0;
LABEL_21:
    v109 = v65;
    MasterFormationComponent__SetEnabledEquipDetailScroll(this, isScrollEquipDetail, v53);
    moveIdx = 0;
    v89 = 0;
    while ( (int)size < 1 )
    {
LABEL_36:
      if ( ++v89 >= v109 )
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
        sub_B5D69C(loopCtr, v52);
      }
    }
    v90 = 0LL;
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
      v93 = (UnityEngine_GameObject_o *)loopCtr;
      v94 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)loopCtr, 0LL);
      *(UnityEngine_Vector3_o *)&v95 = UnityEngine_Vector3__get_one(0LL);
      if ( !v94 )
        goto LABEL_41;
      UnityEngine_Transform__set_localScale(v94, *(UnityEngine_Vector3_o *)&v95, 0LL);
      loopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v93, 0LL);
      if ( !this->fields.loopCtr )
        goto LABEL_41;
      v98 = (UnityEngine_Transform_o *)loopCtr;
      loopCtr = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)this->fields.loopCtr,
                                             0LL);
      if ( !loopCtr )
        goto LABEL_41;
      *(UnityEngine_Vector3_o *)&v99 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)loopCtr, 0LL);
      if ( !v98 )
        goto LABEL_41;
      UnityEngine_Transform__set_localPosition(v98, *(UnityEngine_Vector3_o *)&v99, 0LL);
      v102 = System_Int32__ToString_39741776((int32_t)&moveIdx, (System_String_o *)StringLiteral_4620/*"D3"*/, 0LL);
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v93, v102, 0LL);
      loopCtr = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v93,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MasterEquipInfoComponent___);
      if ( !*p_mstEqInfoList )
        goto LABEL_41;
      v103 = (MasterEquipInfoComponent_o *)loopCtr;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *p_mstEqInfoList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)loopCtr,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MasterEquipInfoComponent__Add__);
      v106 = this->fields.currentList;
      if ( !v106 )
        goto LABEL_41;
      if ( v90 >= (unsigned int)v106->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !v103 )
        goto LABEL_41;
      MasterEquipInfoComponent__setEquipInfo(
        v103,
        v106->fields._items->m_Items[v90++],
        this->fields.usrEquipId,
        v104,
        moveIdx++,
        v105);
      if ( (__int64)v90 >= size )
        goto LABEL_36;
    }
  }
  mScroll = this->fields.mScroll;
  this->fields.isScrollEquipDetail = 1;
  if ( !mScroll )
    goto LABEL_41;
  onDragFinished = (System_Delegate_o *)mScroll->fields.onDragFinished;
  p_onDragFinished = (BattleServantConfConponent_o *)&mScroll->fields.onDragFinished;
  v69 = (UIScrollView_OnDragNotification_o *)sub_B5D694(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(
    v69,
    (Il2CppObject *)this,
    Method_MasterFormationComponent_OnDragStarted__,
    0LL);
  v70 = (System_Int32_array **)System_Delegate__Combine(onDragFinished, (System_Delegate_o *)v69, 0LL);
  v77 = v70;
  if ( !v70 || *v70 == (System_Int32_array *)UIScrollView_OnDragNotification_TypeInfo )
  {
    p_onDragFinished->klass = (BattleServantConfConponent_c *)v70;
    sub_B5D560(p_onDragFinished, v70, v71, v72, v73, v74, v75, v76);
    v78 = *p_centerChild;
    if ( !v78 )
      goto LABEL_41;
    onFinished = (System_Delegate_o *)v78->fields.onFinished;
    p_onFinished = (BattleServantConfConponent_o *)&v78->fields.onFinished;
    v81 = (SpringPanel_OnFinished_o *)sub_B5D694(SpringPanel_OnFinished_TypeInfo);
    SpringPanel_OnFinished___ctor(
      v81,
      (Il2CppObject *)this,
      Method_MasterFormationComponent_OnCenterOnChildFinished__,
      0LL);
    v82 = (System_Int32_array **)System_Delegate__Combine(onFinished, (System_Delegate_o *)v81, 0LL);
    v77 = v82;
    if ( !v82 || *v82 == (System_Int32_array *)SpringPanel_OnFinished_TypeInfo )
    {
      p_onFinished->klass = (BattleServantConfConponent_c *)v82;
      sub_B5D560(p_onFinished, v82, v83, v84, v85, v86, v87, v88);
      isScrollEquipDetail = this->fields.isScrollEquipDetail;
      v65 = 2;
      goto LABEL_21;
    }
  }
  sub_B5D990(v77);
  MasterFormationComponent__setMstEquipIconList(v107, v108);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFormationComponent__setMstImg(
        MasterFormationComponent_o *this,
        int32_t equipId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MasterFormationComponent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct UserGameEntity_o *usrGameEnt; // x8
  UnityEngine_Object_o *masterFigure; // x22
  System_Int32_array **Prefab_31039236; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UIMasterFigureTextureOld_o *v24; // x21
  int32_t genderType; // w20
  void *iconCenterChild; // x8
  System_Action_o *v27; // x22
  Il2CppObject *v28; // x23
  struct MasterFormationComponent___c_StaticFields *static_fields; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // [xsp+10h] [xbp-40h]

  v5 = this;
  if ( (byte_42EBBAA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, equipId, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_MasterFormationComponent___c__setMstImg_b__65_0__, v9, v10, v11);
    this = (MasterFormationComponent_o *)sub_B5D5C4(&MasterFormationComponent___c_TypeInfo, v12, v13, v14);
    byte_42EBBAA = 1;
  }
  usrGameEnt = v5->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_19;
  masterFigure = (UnityEngine_Object_o *)v5->fields.masterFigure;
  v5->fields.genderType = usrGameEnt->fields.genderType;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(masterFigure, 0LL, 0LL) )
  {
    Prefab_31039236 = (System_Int32_array **)MasterFigureManagerOld__CreatePrefab_31039236(
                                               v5->fields.mstImgBase,
                                               1,
                                               v5->fields.genderType,
                                               equipId,
                                               10,
                                               0LL,
                                               0,
                                               (System_Nullable_Vector3__o)0,
                                               v36);
    v5->fields.masterFigure = (struct UIMasterFigureTextureOld_o *)Prefab_31039236;
    sub_B5D560((BattleServantConfConponent_o *)&v5->fields.masterFigure, Prefab_31039236, v18, v19, v20, v21, v22, v23);
    return;
  }
  v24 = v5->fields.masterFigure;
  genderType = v5->fields.genderType;
  this = (MasterFormationComponent_o *)MasterFormationComponent___c_TypeInfo;
  if ( (BYTE3(MasterFormationComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterFormationComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterFormationComponent___c_TypeInfo);
    this = (MasterFormationComponent_o *)MasterFormationComponent___c_TypeInfo;
  }
  iconCenterChild = this->fields.iconCenterChild;
  v27 = (System_Action_o *)*((_QWORD *)iconCenterChild + 1);
  if ( !v27 )
  {
    if ( (BYTE3(this->fields.mstEqIconList) & 4) != 0 && !LODWORD(this->fields.usrGameEnt) )
    {
      j_il2cpp_runtime_class_init_0(this);
      iconCenterChild = MasterFormationComponent___c_TypeInfo->static_fields;
    }
    v28 = *(Il2CppObject **)iconCenterChild;
    v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v27, v28, Method_MasterFormationComponent___c__setMstImg_b__65_0__, 0LL);
    static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
    static_fields->__9__65_0 = v27;
    sub_B5D560(
      (BattleServantConfConponent_o *)&static_fields->__9__65_0,
      (System_Int32_array **)v27,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( !v24 )
LABEL_19:
    sub_B5D69C(this, *(_QWORD *)&equipId);
  UIMasterFigureTextureOld__SetCharacter(v24, 1, genderType, equipId, v27, 0, 0LL);
}


void __fastcall MasterFormationComponent__setPosCurrentEq(MasterFormationComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  MasterFormationComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_MasterEquipInfoComponent__o *mstEqInfoList; // x22
  int size; // w20
  unsigned int v10; // w21
  MasterEquipInfoComponent_o *v11; // x8
  struct UserEquipEntity_o *usrEquipEnt; // x9

  v4 = this;
  if ( (byte_42EBBB1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Count__,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    this = (MasterFormationComponent_o *)sub_B5D5C4(
                                           &Method_System_Collections_Generic_List_MasterEquipInfoComponent__get_Item__,
                                           v5,
                                           v6,
                                           v7);
    byte_42EBBB1 = 1;
  }
  if ( v4->fields.usrEquipId >= 1 )
  {
    mstEqInfoList = v4->fields.mstEqInfoList;
    if ( mstEqInfoList )
    {
      size = mstEqInfoList->fields._size;
      if ( size >= 1 )
      {
        v10 = 0;
        while ( 1 )
        {
          if ( mstEqInfoList->fields._size <= v10 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v11 = mstEqInfoList->fields._items->m_Items[v10];
          if ( !v11 || (usrEquipEnt = v11->fields.usrEquipEnt) == 0LL )
LABEL_14:
            sub_B5D69C(this, method);
          if ( usrEquipEnt->fields.id == v4->fields.usrEquipId )
            break;
          if ( (int)++v10 >= size )
            return;
          mstEqInfoList = v4->fields.mstEqInfoList;
          if ( !mstEqInfoList )
            goto LABEL_14;
        }
        MasterFormationComponent__setDispRePosition(v4, v11->fields.moveEqIdx, v2);
      }
    }
  }
}


void __fastcall MasterFormationComponent__setUsrEquipData(MasterFormationComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  void *Instance; // x0
  const MethodInfo *v42; // x1
  struct UserGameEntity_o *usrGameEnt; // x8
  System_Collections_Generic_IEnumerable_T__o *List; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x21
  struct System_Collections_Generic_List_UserEquipEntity__o **p_currentList; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v53; // x21
  signed __int64 size; // x8
  unsigned __int64 v55; // x22
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v56; // x20
  struct MasterFormationComponent___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__67_0; // x21
  Il2CppObject *v59; // x22
  struct MasterFormationComponent___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x1

  if ( (byte_42EBBAC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Comparison_UserEquipEntity___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Comparison_UserEquipEntity__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEquipMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipEntity__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipEntity__Sort__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipEntity___ctor___68753168, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipEntity___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Count__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipEntity__get_Item__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_UserEquipEntity__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__, v35, v36, v37);
    sub_B5D5C4(&MasterFormationComponent___c_TypeInfo, v38, v39, v40);
    byte_42EBBAC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEquipMaster___);
  usrGameEnt = this->fields.usrGameEnt;
  if ( !usrGameEnt )
    goto LABEL_27;
  if ( !Instance )
    goto LABEL_27;
  List = (System_Collections_Generic_IEnumerable_T__o *)UserEquipMaster__getList(
                                                          (UserEquipMaster_o *)Instance,
                                                          usrGameEnt->fields.userId,
                                                          0LL);
  v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserEquipEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v45,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserEquipEntity___ctor__);
  p_currentList = &this->fields.currentList;
  this->fields.currentList = (struct System_Collections_Generic_List_UserEquipEntity__o *)v45;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.currentList,
    (System_Int32_array **)v45,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  if ( !List )
    goto LABEL_27;
  if ( List[1].monitor )
  {
    v53 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_UserEquipEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v53,
      List,
      (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_UserEquipEntity___ctor___68753168);
    if ( this->fields.usrEquipId >= 1 )
    {
      if ( !v53 )
        goto LABEL_27;
      LODWORD(size) = v53->fields._size;
      if ( (int)size >= 1 )
      {
        v55 = 0LL;
        while ( 1 )
        {
          if ( v55 >= (unsigned int)size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          Instance = *p_currentList;
          if ( !*p_currentList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v53->fields._items->m_Items[v55],
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserEquipEntity__Add__);
          size = v53->fields._size;
          if ( (__int64)++v55 >= size )
            goto LABEL_16;
        }
LABEL_27:
        sub_B5D69C(Instance, v42);
      }
LABEL_16:
      v56 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)*p_currentList;
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
        v59 = (Il2CppObject *)static_fields->__9;
        _9__67_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_UserEquipEntity__TypeInfo);
        System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
          _9__67_0,
          v59,
          Method_MasterFormationComponent___c__setUsrEquipData_b__67_0__,
          (const MethodInfo_249B1FC *)Method_System_Comparison_UserEquipEntity___ctor__);
        v60 = MasterFormationComponent___c_TypeInfo->static_fields;
        v60->__9__67_0 = (struct System_Comparison_UserEquipEntity__o *)_9__67_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v60->__9__67_0,
          (System_Int32_array **)_9__67_0,
          v61,
          v62,
          v63,
          v64,
          v65,
          v66);
      }
      if ( !v56 )
        goto LABEL_27;
      System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
        v56,
        (System_Comparison_T__o *)_9__67_0,
        (const MethodInfo_305909C *)Method_System_Collections_Generic_List_UserEquipEntity__Sort__);
    }
  }
  MasterFormationComponent__setMstEquipList(this, v42);
  MasterFormationComponent__setMstEquipIconList(this, v67);
  MasterFormationComponent__setPosCurrentEq(this, v68);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5F2F & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, flg, (_DWORD)callback, object);
    byte_42E5F2F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall MasterFormationComponent_NotificationDragState__EndInvoke(
        MasterFormationComponent_NotificationDragState_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  MasterFormationComponent_NotificationDragState_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, flg, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(flg, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, flg, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct MasterFormationComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E5F2D & 1) == 0 )
  {
    sub_B5D5C4(&MasterFormationComponent___c_TypeInfo, v1, v2, v3);
    byte_42E5F2D = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(MasterFormationComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = MasterFormationComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct MasterFormationComponent___c_o *)v4;
  sub_B5D560(static_fields);
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

  if ( (byte_42E5F2E & 1) == 0 )
  {
    this = (MasterFormationComponent___c_o *)sub_B5D5C4(
                                               &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                               (_DWORD)a,
                                               (_DWORD)b,
                                               method);
    byte_42E5F2E = 1;
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
  this = (MasterFormationComponent___c_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v9, 0LL);
  if ( !b )
LABEL_9:
    sub_B5D69C(this, a);
  return (_DWORD)this - CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(b->fields.equipId, 0LL);
}