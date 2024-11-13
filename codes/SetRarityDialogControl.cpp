void __fastcall SetRarityDialogControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B19E57 & 1) == 0 )
  {
    sub_1BCA7E0(&SetRarityDialogControl_TypeInfo, v1, v2);
    byte_4B19E57 = 1;
  }
  *SetRarityDialogControl_TypeInfo->static_fields = (struct SetRarityDialogControl_StaticFields)xmmword_BD3420;
}


void __fastcall SetRarityDialogControl___ctor(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl__Awake(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SetRarityDialogControl__CheckExceedSvt(
        SetRarityDialogControl_o *this,
        System_Int64_array *selectedList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x8
  unsigned __int64 v9; // x21
  int64_t v10; // x20

  if ( (byte_4B19E56 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, selectedList, method);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4, v5);
    this = (SetRarityDialogControl_o *)sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B19E56 = 1;
  }
  if ( selectedList )
  {
    v8 = *(_QWORD *)&selectedList->max_length;
    if ( v8 )
    {
      if ( (int)v8 >= 1 )
      {
        v9 = 0LL;
        do
        {
          if ( v9 >= (unsigned int)v8 )
            sub_1BCAA44(this, selectedList);
          v10 = selectedList->m_Items[v9];
          this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SetRarityDialogControl_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
            if ( this )
            {
              this = (SetRarityDialogControl_o *)DataMasterBase_object__object__long___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   v10,
                                                   (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              if ( this )
                goto LABEL_11;
            }
          }
          sub_1BCAA3C(this, selectedList);
LABEL_11:
          if ( SLODWORD(this->fields.confirmSpendQpLb) > 0 )
            break;
          LODWORD(v8) = selectedList->max_length;
          ++v9;
        }
        while ( (__int64)v9 < (int)v8 );
      }
    }
  }
}


bool __fastcall SetRarityDialogControl__CheckStatusUpInfo(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_Int64_array *selectUsrSvtIdList,
        System_String_o **labelMsg,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  SetRarityDialogControl_o *v11; // x22
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
  int32_t adjustHp; // w24
  int32_t adjustAtk; // w23
  __int64 v28; // x1
  _BOOL8 IsStatusUp; // x0
  __int64 v30; // x8
  unsigned __int64 v31; // x27
  int v32; // w26
  int v33; // w24
  int64_t v34; // x22
  UserServantEntity_o *v35; // x22
  System_String_o *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int v43; // w21
  System_String_o *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int v51; // w8
  System_String_o *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int32_t v60; // [xsp+0h] [xbp-80h]
  int32_t secondMaxAdjustAtk[2]; // [xsp+8h] [xbp-78h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+10h] [xbp-70h] BYREF
  int32_t atkUp[2]; // [xsp+18h] [xbp-68h] BYREF

  v11 = this;
  if ( (byte_4B19E44 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, baseData, selectUsrSvtIdList);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&StringLiteral_12418/*"STATUS_HP_OVER_DIALOG_MSG"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_12417/*"STATUS_ATK_OVER_DIALOG_MSG"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_12419/*"STATUS_OVER_DIALOG_MSG"*/, v22, v23);
    this = (SetRarityDialogControl_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v24, v25);
    byte_4B19E44 = 1;
  }
  if ( !baseData )
LABEL_36:
    sub_1BCAA3C(this, baseData);
  adjustHp = baseData->fields.adjustHp;
  adjustAtk = baseData->fields.adjustAtk;
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)atkUp = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  *labelMsg = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)labelMsg,
    (int64_t)StringLiteral_1/*""*/,
    (int64_t)selectUsrSvtIdList,
    (int32_t)labelMsg,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  UserServantEntity__GetAdjustMax(
    baseData,
    &maxAjustAtk[1],
    maxAjustAtk,
    &secondMaxAdjustAtk[1],
    secondMaxAdjustAtk,
    0LL);
  UserServantEntity__isAdjustAtkMax(baseData, 0LL);
  IsStatusUp = 0LL;
  if ( selectUsrSvtIdList && v11->fields.isStatusUp )
  {
    v30 = *(_QWORD *)&selectUsrSvtIdList->max_length;
    if ( (int)v30 < 1 )
    {
      v43 = 0;
    }
    else
    {
      v60 = adjustHp;
      v31 = 0LL;
      v32 = 0;
      v33 = 0;
      do
      {
        if ( v31 >= (unsigned int)v30 )
          sub_1BCAA44(IsStatusUp, v28);
        v34 = selectUsrSvtIdList->m_Items[v31];
        this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_36;
        this = (SetRarityDialogControl_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !this )
          goto LABEL_36;
        this = (SetRarityDialogControl_o *)DataMasterBase_object__object__long___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             v34,
                                             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !this )
          goto LABEL_36;
        v35 = (UserServantEntity_o *)this;
        IsStatusUp = UserServantEntity__IsStatusUp((UserServantEntity_o *)this, 0LL);
        if ( IsStatusUp )
        {
          *(_QWORD *)atkUp = 0LL;
          UserServantEntity__getStatusUpInfo(v35, &atkUp[1], atkUp, 0LL);
          v32 += atkUp[1] & ~(atkUp[1] >> 31);
          v33 += atkUp[0] & ~(atkUp[0] >> 31);
        }
        LODWORD(v30) = selectUsrSvtIdList->max_length;
        ++v31;
      }
      while ( (__int64)v31 < (int)v30 );
      if ( v32 < 1 || UserServantEntity__isAdjustHpMax(baseData, 0LL) || v32 + v60 <= maxAjustAtk[1] )
      {
        v43 = 0;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
        v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12418/*"STATUS_HP_OVER_DIALOG_MSG"*/, 0LL);
        *labelMsg = v36;
        sub_1BCA784((PartyOrganizationUtility_o *)labelMsg, (int64_t)v36, v37, v38, v39, v40, v41, v42);
        v43 = 1;
      }
      if ( v33 >= 1 && !UserServantEntity__isAdjustAtkMax(baseData, 0LL) && v33 + adjustAtk > maxAjustAtk[0] )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12417/*"STATUS_ATK_OVER_DIALOG_MSG"*/, 0LL);
        *labelMsg = v44;
        sub_1BCA784((PartyOrganizationUtility_o *)labelMsg, (int64_t)v44, v45, v46, v47, v48, v49, v50);
        v51 = 1;
        goto LABEL_30;
      }
    }
    v51 = 0;
LABEL_30:
    if ( (v51 & v43) != 0 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_12419/*"STATUS_OVER_DIALOG_MSG"*/, 0LL);
      *labelMsg = v52;
      sub_1BCA784((PartyOrganizationUtility_o *)labelMsg, (int64_t)v52, v53, v54, v55, v56, v57, v58);
    }
    LOBYTE(IsStatusUp) = 1;
  }
  return IsStatusUp;
}


void __fastcall SetRarityDialogControl__Close(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  SetRarityDialogControl_c *v12; // x8
  UnityEngine_GameObject_o *v13; // x20
  __int64 transform; // x0
  const MethodInfo *v15; // x1
  UnityEngine_GameObject_o *v16; // x0
  struct SetRarityDialogControl_StaticFields *static_fields; // x8
  __int64 v18; // x1
  TweenScale_o *v19; // x20
  UnityEngine_GameObject_o *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x2
  UnityEngine_Transform_o *v35; // x20
  UnityEngine_Transform_o *v36; // x0
  UnityEngine_Vector3_o v37; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B19E51 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&SetRarityDialogControl_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_6064/*"EndCloseDlg"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_5416/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, v8, v9);
    byte_4B19E51 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12 = SetRarityDialogControl_TypeInfo;
  v13 = gameObject;
  if ( !SetRarityDialogControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl_TypeInfo, v11);
    v12 = SetRarityDialogControl_TypeInfo;
  }
  transform = (__int64)TweenAlpha__Begin(v13, v12->static_fields->CLOSE_TIME, 0.0, 0LL);
  if ( !transform )
    goto LABEL_26;
  *(_DWORD *)(transform + 32) = 6;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  static_fields = SetRarityDialogControl_TypeInfo->static_fields;
  v37.fields.x = static_fields->DIALOG_CLOSE_SCALE;
  v37.fields.y = v37.fields.x;
  v37.fields.z = v37.fields.x;
  v19 = TweenScale__Begin(v16, static_fields->CLOSE_TIME, v37, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    if ( !v19 )
      goto LABEL_26;
    v19->fields.method = 6;
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v19->fields.eventReceiver = v20;
    sub_1BCA784((PartyOrganizationUtility_o *)&v19->fields.eventReceiver, (int64_t)v20, v21, v22, v23, v24, v25, v26);
    v27 = StringLiteral_6064/*"EndCloseDlg"*/;
    v19->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6064/*"EndCloseDlg"*/;
    sub_1BCA784((PartyOrganizationUtility_o *)&v19->fields.callWhenFinished, v27, v28, v29, v30, v31, v32, v33);
  }
  else
  {
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_26;
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    v35 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4B109C1 )
    {
      transform = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v15, v34);
      byte_4B109C1 = 1;
    }
    if ( !v35 )
      goto LABEL_26;
    UnityEngine_Transform__set_localScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  }
  transform = (__int64)this->fields.npUpConfirmInfo;
  if ( !transform )
    goto LABEL_26;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0LL) )
  {
    transform = (__int64)this->fields.npUpInfoComp;
    if ( !transform )
      goto LABEL_26;
    NpUpConfirmComponent__DestroySvtInfo((NpUpConfirmComponent_o *)transform, v15);
  }
  transform = (__int64)this->fields.raritySvtGrid;
  if ( !transform )
    goto LABEL_26;
  UIGrid__RemoveAllChild((UIGrid_o *)transform, 0LL);
  transform = (__int64)this->fields.allSvtGrid;
  if ( !transform
    || (UIGrid__RemoveAllChild((UIGrid_o *)transform, 0LL), (transform = (__int64)this->fields.exceedConfirmSvtGrid) == 0)
    || (UIGrid__RemoveAllChild((UIGrid_o *)transform, 0LL), (transform = (__int64)this->fields.materialSvtGrid) == 0)
    || (UIGrid__RemoveAllChild((UIGrid_o *)transform, 0LL),
        (transform = (__int64)this->fields.lvExceedConsumeItemGrid) == 0) )
  {
LABEL_26:
    sub_1BCAA3C(transform, v15);
  }
  UIGrid__RemoveAllChild((UIGrid_o *)transform, 0LL);
  v36 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__RemoveBackBtn_42532652(v36, (System_String_o *)StringLiteral_5416/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0LL);
}


void __fastcall SetRarityDialogControl__DefaultBgSize(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *decideBtnLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v5; // x0

  decideBtnLb = (UnityEngine_Component_o *)this->fields.decideBtnLb;
  if ( !decideBtnLb )
    goto LABEL_10;
  decideBtnLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(decideBtnLb, 0LL);
  if ( !decideBtnLb )
    goto LABEL_10;
  decideBtnLb = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                             (UnityEngine_Transform_o *)decideBtnLb,
                                             0LL);
  if ( !decideBtnLb )
    goto LABEL_10;
  decideBtnLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(decideBtnLb, 0LL);
  if ( !decideBtnLb
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideBtnLb, 1, 0LL),
        (decideBtnLb = (UnityEngine_Component_o *)this->fields.cancelBtnLb) == 0LL)
    || (decideBtnLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(decideBtnLb, 0LL)) == 0LL
    || (decideBtnLb = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)decideBtnLb,
                                                   0LL)) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(decideBtnLb, 0LL),
        GameObjectExtensions__SetLocalPositionX(gameObject, -157.0, 0LL),
        (decideBtnLb = (UnityEngine_Component_o *)this->fields.mPanelBg) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(decideBtnLb, method);
  }
  UIWidget__set_height((UIWidget_o *)decideBtnLb, 480, 0LL);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v5, -20.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnInfo, 0.0, 0LL);
}


void __fastcall SetRarityDialogControl__DisableConfirmInfo(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rariryConfirmInfo; // x0

  rariryConfirmInfo = this->fields.rariryConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0LL);
  rariryConfirmInfo = this->fields.normalConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0LL);
  rariryConfirmInfo = this->fields.skillUpConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0LL);
  rariryConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0LL);
  rariryConfirmInfo = this->fields.npUpConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0LL);
  rariryConfirmInfo = this->fields.lvExceedConfirmSimpleInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0LL);
  rariryConfirmInfo = this->fields.lvExceedConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0LL);
  rariryConfirmInfo = this->fields.exceedConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0LL);
  rariryConfirmInfo = this->fields.limitUpConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0LL);
  rariryConfirmInfo = this->fields.costumeConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0LL);
  rariryConfirmInfo = this->fields.costumeEventItemConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0LL);
  rariryConfirmInfo = this->fields.costumeEventItemOrNeedItemConfirmInfo;
  if ( !rariryConfirmInfo
    || (UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0LL),
        (rariryConfirmInfo = this->fields.friendshipExceedConfirmInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0LL),
        (rariryConfirmInfo = this->fields.specialAscensionConfirmInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0LL),
        (rariryConfirmInfo = this->fields.appendSkillConfirmInfo) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(rariryConfirmInfo, method);
  }
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0LL);
}


void __fastcall SetRarityDialogControl__EndCloseDlg(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o *onClickDlgCloseCallBack; // x19

  onClickDlgCloseCallBack = this->fields.onClickDlgCloseCallBack;
  this->fields.onClickDlgCloseCallBack = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onClickDlgCloseCallBack, 0LL, v2, v3, v4, v5, v6, v7);
  if ( onClickDlgCloseCallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClickDlgCloseCallBack->fields.m_target)(
      onClickDlgCloseCallBack->fields.original_method_info,
      *(_QWORD *)&onClickDlgCloseCallBack->fields.extra_arg);
}


void __fastcall SetRarityDialogControl__EndOpen(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B19E53 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5416/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, method, v2);
    byte_4B19E53 = 1;
  }
  this->fields.isButtonEnable = 1;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_5416/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0LL);
}


void __fastcall SetRarityDialogControl__MoveAlpha(SetRarityDialogControl_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  SetRarityDialogControl_c *v14; // x8
  UnityEngine_Transform_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_GameObject_o *v18; // x20
  float OPEN_TIME; // s8
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x20
  System_String_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  __int64 v26; // x1
  TweenAlpha_o *v27; // x20
  UnityEngine_GameObject_o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19E52 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SetRarityDialogControl_EndOpen__, v8, v9);
    sub_1BCA7E0(&SetRarityDialogControl_TypeInfo, v10, v11);
    byte_4B19E52 = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v14 = SetRarityDialogControl_TypeInfo;
  v15 = (UnityEngine_Transform_o *)gameObject;
  if ( !SetRarityDialogControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl_TypeInfo, v13);
    v14 = SetRarityDialogControl_TypeInfo;
  }
  if ( !v15 )
    goto LABEL_19;
  v35.fields.x = v14->static_fields->DIALOG_INITIAL_SCALE;
  v35.fields.y = v35.fields.x;
  v35.fields.z = v35.fields.x;
  UnityEngine_Transform__set_localScale(v15, v35, 0LL);
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  OPEN_TIME = SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME;
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v17);
    byte_4B109C6 = 1;
  }
  TweenScale__Begin(v18, OPEN_TIME, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !gameObject )
    goto LABEL_19;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gameObject->klass[1]._1.castClass)(
    gameObject,
    gameObject->klass[1]._1.declaringType,
    0.005);
  v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_SetRarityDialogControl_EndOpen__, 0LL);
  if ( !v23 )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)System_Delegate__get_Method((System_Delegate_o *)v23, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  v24 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))gameObject->klass[1]._1.castClass)(
                             gameObject,
                             gameObject->klass[1]._1.declaringType);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    v24,
    SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME,
    0LL);
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v27 = TweenAlpha__Begin(v25, SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME, 1.0, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( v27 )
    {
      v27->fields.method = 6;
      v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v27->fields.eventReceiver = v28;
      sub_1BCA784((PartyOrganizationUtility_o *)&v27->fields.eventReceiver, (int64_t)v28, v29, v30, v31, v32, v33, v34);
      return;
    }
LABEL_19:
    sub_1BCAA3C(gameObject, v13);
  }
}


void __fastcall SetRarityDialogControl__OnClickCancel(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  struct System_Action_o *onClickDlgCancelCallBack; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B19E55 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SetRarityDialogControl_OnClickCancel__, method, v2);
    byte_4B19E55 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v4 = Method_SetRarityDialogControl_OnClickCancel__;
    if ( (*((_BYTE *)Method_SetRarityDialogControl_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_SetRarityDialogControl_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    SetRarityDialogControl__Close(this, v6);
    onClickDlgCancelCallBack = this->fields.onClickDlgCancelCallBack;
    this->fields.onClickDlgOkCallBack = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onClickDlgOkCallBack, 0LL, v8, v9, v10, v11, v12, v13);
    this->fields.onClickDlgCancelCallBack = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onClickDlgCancelCallBack, 0LL, v14, v15, v16, v17, v18, v19);
    if ( onClickDlgCancelCallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClickDlgCancelCallBack->fields.m_target)(
        onClickDlgCancelCallBack->fields.original_method_info,
        *(_QWORD *)&onClickDlgCancelCallBack->fields.extra_arg);
  }
}


void __fastcall SetRarityDialogControl__OnClickDlgOk(SetRarityDialogControl_o *this, const MethodInfo *method)
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
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  const MethodInfo *v18; // x1
  CombineRootComponent_o *Instance; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 methodPtr_low; // x9
  __int64 v28; // x9
  __int64 v29; // x2
  __int64 v30; // x3
  CommonUI_o *v31; // x20
  SetRarityDialogControl___c_c *v32; // x8
  System_Action_o *_9__169_0; // x21
  Il2CppObject *v34; // x22
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Action_o *onClickDlgOkCallBack; // x20
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  SetRarityDialogControl_o *v49; // x0
  const MethodInfo *v50; // x1

  if ( (byte_4B19E54 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&CombineRootComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SetRarityDialogControl_OnClickDlgOk__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SetRarityDialogControl___c__OnClickDlgOk_b__169_0__, v12, v13);
    sub_1BCA7E0(&SetRarityDialogControl___c_TypeInfo, v14, v15);
    byte_4B19E54 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v16 = Method_SetRarityDialogControl_OnClickDlgOk__;
    if ( (*((_BYTE *)Method_SetRarityDialogControl_OnClickDlgOk__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1BCA7F8(Method_SetRarityDialogControl_OnClickDlgOk__);
    v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, this->fields.onClickDlgOkSeKind, 0LL);
    SetRarityDialogControl__Close(this, v18);
    Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = (CombineRootComponent_o *)Instance->fields.myFSM;
    if ( !Instance )
      goto LABEL_26;
    methodPtr_low = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == CombineRootComponent_TypeInfo )
    {
      if ( Instance->fields.combineTutorialProgress != 7 )
      {
LABEL_23:
        onClickDlgOkCallBack = this->fields.onClickDlgOkCallBack;
        this->fields.onClickDlgOkCallBack = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onClickDlgOkCallBack, 0LL, v21, v22, v23, v24, v25, v26);
        this->fields.onClickDlgCancelCallBack = 0LL;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.onClickDlgCancelCallBack,
          0LL,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
        if ( onClickDlgOkCallBack )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClickDlgOkCallBack->fields.m_target)(
            onClickDlgOkCallBack->fields.original_method_info,
            *(_QWORD *)&onClickDlgOkCallBack->fields.extra_arg);
          return;
        }
LABEL_26:
        sub_1BCAA3C(Instance, v20);
      }
      Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_26;
      Instance = (CombineRootComponent_o *)Instance->fields.myFSM;
      if ( !Instance )
        goto LABEL_26;
      v28 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v28
        && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v28 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__SetTutorialProgress(Instance, 8, 0LL);
        Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v31 = (CommonUI_o *)Instance;
        v32 = SetRarityDialogControl___c_TypeInfo;
        if ( !SetRarityDialogControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo, v20);
          v32 = SetRarityDialogControl___c_TypeInfo;
        }
        _9__169_0 = v32->static_fields->__9__169_0;
        if ( !_9__169_0 )
        {
          if ( !v32->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v32, v20);
            v32 = SetRarityDialogControl___c_TypeInfo;
          }
          v34 = (Il2CppObject *)v32->static_fields->__9;
          _9__169_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v29, v30);
          System_Action___ctor(_9__169_0, v34, Method_SetRarityDialogControl___c__OnClickDlgOk_b__169_0__, 0LL);
          static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
          static_fields->__9__169_0 = _9__169_0;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__169_0,
            (int64_t)_9__169_0,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
        }
        if ( !v31 )
          goto LABEL_26;
        CommonUI__CloseTutorialNotificationDialogArrow_30791892(v31, _9__169_0, 0LL);
        goto LABEL_23;
      }
    }
    sub_1BCACFC(Instance);
    SetRarityDialogControl__OnClickCancel(v49, v50);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetAllDispConfirmCombine(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_Int64_array *list,
        int32_t spendQp,
        int32_t haveQp,
        System_Int64_array *selectedList,
        System_String_o *statusLimitMessage,
        bool isExceededMaterial,
        const MethodInfo *method)
{
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
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  void *allDispConfirmInfo; // x0
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  __int64 v46; // x1
  UILabel_o *allTitleLb; // x26
  UILabel_o *cancelBtnLb; // x26
  UILabel_o *decideBtnLb; // x26
  const MethodInfo *v50; // x1
  __int64 v51; // x27
  float v52; // s8
  unsigned __int64 v53; // x26
  bool v54; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x27
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v57; // x7
  float y; // s9
  int v59; // w20
  int v60; // w8
  float v61; // s1
  float z; // s2
  float v63; // s0
  __int64 v64; // x1
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v68; // x25
  Il2CppObject *v69; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v71; // x24
  Il2CppObject *v72; // x0
  __int64 v73; // x1
  UILabel_o *allRareMsgLb; // x21
  __int64 *v75; // x8
  __int64 v76; // x1
  UILabel_o *allRareConfirmMsgLb; // x20
  __int64 v78; // x2
  __int64 v79; // x3
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v81; // x20
  const MethodInfo *v82; // x5
  int32_t v83; // [xsp+8h] [xbp-78h] BYREF
  int32_t v84; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19E43 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, baseData, list);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v16, v17);
    sub_1BCA7E0(&int_TypeInfo, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__149_0__, v22, v23);
    sub_1BCA7E0(&StringLiteral_9342/*"NEED_QP"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_3693/*"COMBINE_HAVE_QP"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_3843/*"CONFIRM_COMBINE_MSG"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_3692/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_11085/*"RARE_MATERIAL_INFO_MSG"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_3725/*"COMBINE_SPEND_QP"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_3868/*"CONFIRM_TITLE_SVT_COMBINE"*/, v40, v41);
    byte_4B19E43 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0LL);
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v44);
  SetRarityDialogControl__DefaultBgSize(this, v45);
  allTitleLb = this->fields.allTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3868/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  if ( !allTitleLb )
    goto LABEL_56;
  UILabel__set_text(allTitleLb, (System_String_o *)allDispConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_56;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_56;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v50);
  if ( !selectedList )
    goto LABEL_56;
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  LODWORD(v51) = selectedList->max_length;
  v52 = *((float *)allDispConfirmInfo + 12);
  if ( (int)v51 >= 1 )
  {
    v53 = 0LL;
    v54 = 0;
    do
    {
      if ( v54 )
        goto LABEL_56;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
      allDispConfirmInfo = BaseMonoBehaviour__createObject(
                             (BaseMonoBehaviour_o *)this,
                             svtFaceInfo,
                             transform,
                             0LL,
                             0LL);
      if ( !allDispConfirmInfo )
        goto LABEL_56;
      allDispConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)allDispConfirmInfo,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v53 >= selectedList->max_length )
        sub_1BCAA44(allDispConfirmInfo, v42);
      if ( !allDispConfirmInfo )
        goto LABEL_56;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)allDispConfirmInfo,
        v53,
        baseData,
        selectedList->m_Items[v53],
        0,
        0,
        0LL,
        v57);
      allDispConfirmInfo = this->fields.allSvtGrid;
      v51 = *(_QWORD *)&selectedList->max_length;
      ++v53;
      v54 = allDispConfirmInfo == 0LL;
    }
    while ( (__int64)v53 < (int)v51 );
    if ( !allDispConfirmInfo )
      goto LABEL_56;
  }
  y = this->fields.center.fields.y;
  v59 = *((_DWORD *)allDispConfirmInfo + 11);
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  if ( v59 >= (int)v51 )
    v60 = v51;
  else
    v60 = v59;
  v61 = 70.0;
  if ( v59 >= (int)v51 )
    v61 = y;
  v63 = (float)(this->fields.center.fields.x - (float)((float)(v52 * 0.5) * (float)(v60 - 1))) * 0.47;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v61 - 1),
    0LL);
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  v85.fields.x = 0.47;
  v85.fields.y = 0.47;
  v85.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v85, 0LL);
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  UIGrid__set_repositionNow((UIGrid_o *)allDispConfirmInfo, 1, 0LL);
  allSpendQpTxtLb = this->fields.allSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v64);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3725/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !allSpendQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !allHaveQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allSpendQpLb = this->fields.allSpendQpLb;
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  v84 = spendQp;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84);
  allDispConfirmInfo = System_String__Format(v68, v69, 0LL);
  if ( !allSpendQpLb )
    goto LABEL_56;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpLb = this->fields.allHaveQpLb;
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  v83 = haveQp;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
  allDispConfirmInfo = System_String__Format(v71, v72, 0LL);
  if ( !allHaveQpLb )
    goto LABEL_56;
  UILabel__set_text(allHaveQpLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allDispConfirmInfo = this->fields.allStatusUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 0, 0LL);
  allDispConfirmInfo = this->fields.allLimitUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 0, 0LL),
        (allDispConfirmInfo = this->fields.allLimitRareLb) == 0LL)
    || (allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 0, 0LL),
        WrapControlText__textAdjust(this->fields.allStatusUpInfoLb, statusLimitMessage, 22, 0, 0, 0LL),
        (allDispConfirmInfo = this->fields.allStatusUpInfoLb) == 0LL)
    || (allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL)) == 0LL )
  {
LABEL_56:
    sub_1BCAA3C(allDispConfirmInfo, v42);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0LL);
  allRareMsgLb = this->fields.allRareMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73);
    if ( isExceededMaterial )
      goto LABEL_45;
LABEL_47:
    v75 = &StringLiteral_11085/*"RARE_MATERIAL_INFO_MSG"*/;
    goto LABEL_48;
  }
  if ( !isExceededMaterial )
    goto LABEL_47;
LABEL_45:
  v75 = &StringLiteral_3692/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
LABEL_48:
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)*v75, 0LL);
  if ( !allRareMsgLb )
    goto LABEL_56;
  UILabel__set_text(allRareMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v76);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3843/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !allRareConfirmMsgLb )
    goto LABEL_56;
  UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_56;
  if ( combineRootComponent->fields.state == 3 )
  {
    v81 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v42, v78, v79);
    System_Action___ctor(
      v81,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__149_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v81, 0LL, 0LL, v82);
  }
}


void __fastcall SetRarityDialogControl__SetAppendSkillCombineInfo(
        SetRarityDialogControl_o *this,
        SetLevelUpData_o *updata,
        System_String_o *titleMsg,
        bool isOpen,
        const MethodInfo *method)
{
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
  UnityEngine_GameObject_o *appendSkillConfirmInfo; // x0
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  char v46; // w21
  __int64 v47; // x1
  Il2CppObject *ComponentInChildren_object; // x21
  UIExtrusionLabel_o *appendSkillCurrentLvLabel; // x21
  UIExtrusionLabel_o *appendSkillResultLvLabel; // x21
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  __int64 v53; // x1
  UILabel_o *v54; // x21
  UILabel_o *v55; // x21
  UILabel_o *v56; // x21
  System_String_o *v57; // x22
  Il2CppObject *v58; // x0
  UILabel_o *v59; // x21
  System_String_o *v60; // x22
  Il2CppObject *v61; // x0
  UILabel_o *appendSkillConfirmLabel; // x20
  __int64 *v63; // x8
  __int64 v64; // x1
  Il2CppObject *Component_object; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x0
  __int64 v69; // x1
  UILabel_o *appendSkillSpendTxtLabel; // x21
  UILabel_o *appendSkillHaveTxtLabel; // x21
  UILabel_o *appendSkillSpendLabel; // x21
  System_String_o *v73; // x22
  Il2CppObject *v74; // x0
  UILabel_o *appendSkillHaveLabel; // x21
  System_String_o *v76; // x22
  Il2CppObject *v77; // x0
  __int64 v78; // x1
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  __int64 v81; // x2
  __int64 v82; // x3
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v84; // x20
  const MethodInfo *v85; // x5
  int32_t haveSvtCoin; // [xsp+4h] [xbp-5Ch] BYREF
  UnityEngine_Bounds_o v87; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19E47 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, updata, titleMsg);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SetRarityDialogControl__SetAppendSkillCombineInfo_b__153_0__, v21, v22);
    sub_1BCA7E0(&StringLiteral_9342/*"NEED_QP"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3693/*"COMBINE_HAVE_QP"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_2124/*"APPEND_SKILL_OPEN_CONFIRM"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_2127/*"APPEND_SKILL_OPEN_SPEND_COIN"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_2125/*"APPEND_SKILL_OPEN_HAVE_COIN"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_3725/*"COMBINE_SPEND_QP"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_2093/*"APPEND_SKILL_COMBINE_CONFIRM"*/, v39, v40);
    byte_4B19E47 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)updata);
  appendSkillConfirmInfo = this->fields.appendSkillConfirmInfo;
  if ( !appendSkillConfirmInfo )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, 1, 0LL);
  appendSkillConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !appendSkillConfirmInfo )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v43);
  SetRarityDialogControl__DefaultBgSize(this, v44);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillTitleLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_59;
  UILabel__set_text((UILabel_o *)appendSkillConfirmInfo, titleMsg, 0LL);
  appendSkillConfirmInfo = this->fields.appendSkillIconInfo;
  if ( !appendSkillConfirmInfo )
    goto LABEL_59;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, isOpen, 0LL);
  appendSkillConfirmInfo = this->fields.appendSkillLvUpInfo;
  if ( !appendSkillConfirmInfo )
    goto LABEL_59;
  v46 = ~isOpen;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, v46 & 1, 0LL);
  if ( (v46 & 1) == 0 )
  {
    if ( updata )
    {
      appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillIconComp;
      if ( appendSkillConfirmInfo )
      {
        SkillIconComponent__Set_38947272(
          (SkillIconComponent_o *)appendSkillConfirmInfo,
          updata->fields.currentId,
          updata->fields.nextLv,
          0LL);
        appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillIconTitleLabel;
        if ( appendSkillConfirmInfo )
        {
          UILabel__set_text((UILabel_o *)appendSkillConfirmInfo, updata->fields.targetName, 0LL);
          appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillIconMessageLabel;
          if ( appendSkillConfirmInfo )
          {
            UILabel__set_text((UILabel_o *)appendSkillConfirmInfo, updata->fields.targetDetail, 0LL);
            appendSkillConfirmInfo = this->fields.appendSkillIconInfo;
            if ( appendSkillConfirmInfo )
            {
              ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                             appendSkillConfirmInfo,
                                             (const MethodInfo_2F62934 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
              appendSkillConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                     (UnityEngine_Object_o *)ComponentInChildren_object,
                                                                     0LL,
                                                                     0LL);
              if ( ((unsigned __int8)appendSkillConfirmInfo & 1) != 0 )
              {
                if ( !ComponentInChildren_object )
                  goto LABEL_59;
                UIScrollView__ResetPosition((UIScrollView_o *)ComponentInChildren_object, 0LL);
                UIScrollView__UpdateScrollbars((UIScrollView_o *)ComponentInChildren_object, 0LL);
              }
              else if ( !ComponentInChildren_object )
              {
                goto LABEL_59;
              }
              appendSkillConfirmInfo = UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)ComponentInChildren_object,
                                         0LL);
              if ( appendSkillConfirmInfo )
              {
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     appendSkillConfirmInfo,
                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
                if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
                {
                  appendSkillConfirmInfo = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)ComponentInChildren_object,
                                             0LL);
                  if ( !appendSkillConfirmInfo )
                    goto LABEL_59;
                  Component_object = UnityEngine_GameObject__AddComponent_object_(
                                       appendSkillConfirmInfo,
                                       (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
                }
                transform = UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)ComponentInChildren_object,
                              0LL);
                NGUIMath__CalculateAbsoluteWidgetBounds(&v87, transform, 0LL);
                appendSkillConfirmInfo = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ComponentInChildren_object->klass->vtable[4].method)(
                                                                       ComponentInChildren_object,
                                                                       ComponentInChildren_object->klass->vtable[5].methodPtr);
                if ( Component_object )
                {
                  UnityEngine_BoxCollider__set_center(
                    (UnityEngine_BoxCollider_o *)Component_object,
                    v87.fields.m_Center,
                    0LL);
                  ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ComponentInChildren_object->klass->vtable[4].method)(
                    ComponentInChildren_object,
                    ComponentInChildren_object->klass->vtable[5].methodPtr);
                  v88.fields.x = v87.fields.m_Extents.fields.x + v87.fields.m_Extents.fields.x;
                  v88.fields.y = v87.fields.m_Extents.fields.y + v87.fields.m_Extents.fields.y;
                  v88.fields.z = v87.fields.m_Extents.fields.z + v87.fields.m_Extents.fields.z;
                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v88, 0LL);
                  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillSpendTxtLabel;
                  if ( appendSkillConfirmInfo )
                  {
                    v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
                    GameObjectExtensions__SetLocalPositionX(v67, 100.0, 0LL);
                    appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillHaveTxtLabel;
                    if ( appendSkillConfirmInfo )
                    {
                      v68 = UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)appendSkillConfirmInfo,
                              0LL);
                      GameObjectExtensions__SetLocalPositionX(v68, 100.0, 0LL);
                      appendSkillSpendTxtLabel = this->fields.appendSkillSpendTxtLabel;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v69);
                      appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_2127/*"APPEND_SKILL_OPEN_SPEND_COIN"*/,
                                                                             0LL);
                      if ( appendSkillSpendTxtLabel )
                      {
                        UILabel__set_text(appendSkillSpendTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                        appendSkillHaveTxtLabel = this->fields.appendSkillHaveTxtLabel;
                        appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_2125/*"APPEND_SKILL_OPEN_HAVE_COIN"*/,
                                                                               0LL);
                        if ( appendSkillHaveTxtLabel )
                        {
                          UILabel__set_text(appendSkillHaveTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                          appendSkillSpendLabel = this->fields.appendSkillSpendLabel;
                          v73 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
                          LODWORD(v87.fields.m_Center.fields.x) = updata->fields.spendSvtCoin;
                          v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87);
                          appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v73, v74, 0LL);
                          if ( appendSkillSpendLabel )
                          {
                            UILabel__set_text(appendSkillSpendLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                            appendSkillHaveLabel = this->fields.appendSkillHaveLabel;
                            v76 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
                            haveSvtCoin = updata->fields.haveSvtCoin;
                            v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveSvtCoin);
                            appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v76, v77, 0LL);
                            if ( appendSkillHaveLabel )
                            {
                              UILabel__set_text(appendSkillHaveLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                              appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
                              v63 = &StringLiteral_2124/*"APPEND_SKILL_OPEN_CONFIRM"*/;
                              goto LABEL_50;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_59:
    sub_1BCAA3C(appendSkillConfirmInfo, v41);
  }
  if ( !updata )
    goto LABEL_59;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillTargetRubyLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_59;
  UILabel__set_text((UILabel_o *)appendSkillConfirmInfo, updata->fields.targetRuby, 0LL);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillTargetNameLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_59;
  UILabel__set_text((UILabel_o *)appendSkillConfirmInfo, updata->fields.targetName, 0LL);
  appendSkillCurrentLvLabel = this->fields.appendSkillCurrentLvLabel;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)updata + 64, 0LL);
  if ( !appendSkillCurrentLvLabel )
    goto LABEL_59;
  UIExtrusionLabel__set_text(appendSkillCurrentLvLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
  appendSkillResultLvLabel = this->fields.appendSkillResultLvLabel;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)updata + 68, 0LL);
  if ( !appendSkillResultLvLabel )
    goto LABEL_59;
  UIExtrusionLabel__set_text(appendSkillResultLvLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillSpendTxtLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_59;
  v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v51, -5.0, 0LL);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillHaveTxtLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_59;
  v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v52, -5.0, 0LL);
  v54 = this->fields.appendSkillSpendTxtLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3725/*"COMBINE_SPEND_QP"*/,
                                                         0LL);
  if ( !v54 )
    goto LABEL_59;
  UILabel__set_text(v54, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v55 = this->fields.appendSkillHaveTxtLabel;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3693/*"COMBINE_HAVE_QP"*/,
                                                         0LL);
  if ( !v55 )
    goto LABEL_59;
  UILabel__set_text(v55, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v56 = this->fields.appendSkillSpendLabel;
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  LODWORD(v87.fields.m_Center.fields.x) = updata->fields.spendQp;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v87);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v57, v58, 0LL);
  if ( !v56 )
    goto LABEL_59;
  UILabel__set_text(v56, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v59 = this->fields.appendSkillHaveLabel;
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  haveSvtCoin = updata->fields.haveQp;
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveSvtCoin);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v60, v61, 0LL);
  if ( !v59 )
    goto LABEL_59;
  UILabel__set_text(v59, (System_String_o *)appendSkillConfirmInfo, 0LL);
  appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
  v63 = &StringLiteral_2093/*"APPEND_SKILL_COMBINE_CONFIRM"*/;
LABEL_50:
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v63, 0LL);
  if ( !appendSkillConfirmLabel )
    goto LABEL_59;
  UILabel__set_text(appendSkillConfirmLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v78);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/,
                                                         0LL);
  if ( !cancelBtnLb )
    goto LABEL_59;
  UILabel__set_text(cancelBtnLb, (System_String_o *)appendSkillConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/,
                                                         0LL);
  if ( !decideBtnLb )
    goto LABEL_59;
  UILabel__set_text(decideBtnLb, (System_String_o *)appendSkillConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_59;
  if ( combineRootComponent->fields.state == 14 )
  {
    v84 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v41, v81, v82);
    System_Action___ctor(
      v84,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetAppendSkillCombineInfo_b__153_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v84, 0LL, 0LL, v85);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetCenter(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mPanel; // x0
  unsigned int klass; // w8
  float32x2_t *v5; // x20
  unsigned __int64 v6; // x21
  float *p_m_CachedPtr; // x22
  float v8; // s8
  float v9; // s9
  float v10; // s10
  int v11; // s0
  int v12; // s1
  int v13; // s2
  float v14; // s1
  float v15; // s3
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  mPanel = (UnityEngine_Component_o *)this->fields.mPanel;
  if ( !mPanel
    || (mPanel = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))mPanel->klass[1]._1.klass)(
                                              mPanel,
                                              mPanel->klass[1]._1.fields)) == 0LL )
  {
LABEL_11:
    sub_1BCAA3C(mPanel, method);
  }
  klass = (unsigned int)mPanel[1].klass;
  v5 = (float32x2_t *)mPanel;
  v6 = 0LL;
  p_m_CachedPtr = (float *)&mPanel[1].fields.m_CachedPtr;
  do
  {
    if ( v6 >= klass )
      goto LABEL_12;
    mPanel = (UnityEngine_Component_o *)this->fields.mPanel;
    if ( !mPanel )
      goto LABEL_11;
    v8 = *(p_m_CachedPtr - 2);
    v9 = *(p_m_CachedPtr - 1);
    v10 = *p_m_CachedPtr;
    mPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mPanel, 0LL);
    if ( !mPanel )
      goto LABEL_11;
    v16.fields.x = v8;
    v16.fields.y = v9;
    v16.fields.z = v10;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__InverseTransformPoint(
                                       (UnityEngine_Transform_o *)mPanel,
                                       v16,
                                       0LL);
    if ( v6 >= v5[3].n64_u32[0] )
      goto LABEL_12;
    *((_DWORD *)p_m_CachedPtr - 2) = v11;
    *((_DWORD *)p_m_CachedPtr - 1) = v12;
    *(_DWORD *)p_m_CachedPtr = v13;
    p_m_CachedPtr += 3;
    klass = v5[3].n64_u32[0];
    ++v6;
  }
  while ( v6 != 4 );
  if ( klass < 3 )
LABEL_12:
    sub_1BCAA44(mPanel, method);
  v14 = v5[5].n64_f32[0];
  v15 = v5[8].n64_f32[0] - v14;
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v5[4],
                                                    vmul_f32(vsub_f32(v5[7], v5[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v14 + (float)(v15 * 0.5);
}


void __fastcall SetRarityDialogControl__SetClickDlgOkSeAndCallBack(
        SetRarityDialogControl_o *this,
        int32_t seKind,
        System_Action_o *callBack,
        System_Action_o *cancelCallBack,
        System_Action_o *closeCallBack,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  this->fields.onClickDlgOkSeKind = seKind;
  this->fields.onClickDlgOkCallBack = callBack;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onClickDlgOkCallBack,
    (int64_t)callBack,
    (int64_t)callBack,
    (int32_t)cancelCallBack,
    (System_String_o *)closeCallBack,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.onClickDlgCancelCallBack = cancelCallBack;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onClickDlgCancelCallBack,
    (int64_t)cancelCallBack,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.onClickDlgCloseCallBack = closeCallBack;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.onClickDlgCloseCallBack,
    (int64_t)closeCallBack,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetConfirmCombine(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_String_o *msg,
        int32_t spendQp,
        int32_t haveQp,
        bool isStatusUp,
        System_Int64_array *selectedList,
        const MethodInfo *method)
{
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
  void *normalConfirmInfo; // x0
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1
  __int64 v39; // x1
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v42; // x1
  __int64 v43; // x25
  float v44; // s8
  unsigned __int64 v45; // x24
  bool v46; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v49; // x7
  float y; // s9
  int v51; // w24
  int v52; // w9
  float v53; // s1
  float z; // s2
  float v55; // s0
  __int64 v56; // x1
  UILabel_o *normalSpendQpTxtLb; // x24
  UILabel_o *normalHaveQpTxtLb; // x24
  UILabel_o *confirmSpendQpLb; // x24
  System_String_o *v60; // x25
  Il2CppObject *v61; // x0
  UILabel_o *confirmHaveQpLb; // x23
  System_String_o *v63; // x24
  Il2CppObject *v64; // x0
  UILabel_o *confirmMsgLb; // x22
  const MethodInfo *v66; // x4
  _BOOL8 v67; // x0
  const MethodInfo *v68; // x2
  __int64 v69; // x2
  __int64 v70; // x3
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v72; // x20
  const MethodInfo *v73; // x5
  int32_t v74; // [xsp+8h] [xbp-78h] BYREF
  int32_t v75; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *labelMsg; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19E41 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, baseData, msg);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SetRarityDialogControl__SetConfirmCombine_b__147_0__, v21, v22);
    sub_1BCA7E0(&StringLiteral_9342/*"NEED_QP"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3693/*"COMBINE_HAVE_QP"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3843/*"CONFIRM_COMBINE_MSG"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_3725/*"COMBINE_SPEND_QP"*/, v33, v34);
    byte_4B19E41 = 1;
  }
  labelMsg = 0LL;
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  normalConfirmInfo = this->fields.normalConfirmInfo;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 1, 0LL);
  this->fields.isStatusUp = isStatusUp;
  normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v37);
  SetRarityDialogControl__DefaultBgSize(this, v38);
  normalConfirmInfo = this->fields.normalTitleLb;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UILabel__set_text((UILabel_o *)normalConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_46;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_46;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v42);
  if ( !selectedList )
    goto LABEL_46;
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  LODWORD(v43) = selectedList->max_length;
  v44 = *((float *)normalConfirmInfo + 12);
  if ( (int)v43 >= 1 )
  {
    v45 = 0LL;
    v46 = 0;
    do
    {
      if ( v46 )
        goto LABEL_46;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
      normalConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !normalConfirmInfo )
        goto LABEL_46;
      normalConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)normalConfirmInfo,
                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v45 >= selectedList->max_length )
        sub_1BCAA44(normalConfirmInfo, v35);
      if ( !normalConfirmInfo )
        goto LABEL_46;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)normalConfirmInfo,
        v45,
        baseData,
        selectedList->m_Items[v45],
        0,
        0,
        0LL,
        v49);
      normalConfirmInfo = this->fields.materialSvtGrid;
      v43 = *(_QWORD *)&selectedList->max_length;
      ++v45;
      v46 = normalConfirmInfo == 0LL;
    }
    while ( (__int64)v45 < (int)v43 );
    if ( !normalConfirmInfo )
      goto LABEL_46;
  }
  y = this->fields.center.fields.y;
  v51 = *((_DWORD *)normalConfirmInfo + 11);
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  if ( v51 >= (int)v43 )
    v52 = v43;
  else
    v52 = v51;
  v53 = 55.0;
  if ( v51 >= (int)v43 )
    v53 = y;
  v55 = (float)(this->fields.center.fields.x - (float)((float)(v44 * 0.5) * (float)(v52 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v53 - 1),
    0LL);
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  v77.fields.x = 0.5;
  v77.fields.y = 0.5;
  v77.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v77, 0LL);
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UIGrid__set_repositionNow((UIGrid_o *)normalConfirmInfo, 1, 0LL);
  normalSpendQpTxtLb = this->fields.normalSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56);
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3725/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !normalSpendQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !normalHaveQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  v75 = spendQp;
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v75);
  normalConfirmInfo = System_String__Format(v60, v61, 0LL);
  if ( !confirmSpendQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  v74 = haveQp;
  v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
  normalConfirmInfo = System_String__Format(v63, v64, 0LL);
  if ( !confirmHaveQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3843/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !confirmMsgLb )
    goto LABEL_46;
  UILabel__set_text(confirmMsgLb, (System_String_o *)normalConfirmInfo, 0LL);
  normalConfirmInfo = this->fields.statusUpInfoLb;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 0, 0LL);
  v67 = SetRarityDialogControl__CheckStatusUpInfo(this, baseData, selectedList, &labelMsg, v66);
  if ( !v67 )
    goto LABEL_42;
  WrapControlText__textAdjust(this->fields.statusUpInfoLb, labelMsg, 22, 0, 0, 0LL);
  normalConfirmInfo = this->fields.statusUpInfoLb;
  if ( !normalConfirmInfo
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0LL)) == 0LL )
  {
LABEL_46:
    sub_1BCAA3C(normalConfirmInfo, v35);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 1, 0LL);
LABEL_42:
  SetRarityDialogControl__CheckExceedSvt((SetRarityDialogControl_o *)v67, selectedList, v68);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_46;
  if ( combineRootComponent->fields.state == 3 )
  {
    v72 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v69, v70);
    System_Action___ctor(v72, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmCombine_b__147_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v72, 0LL, 0LL, v73);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetConfirmCombineCostume(
        SetRarityDialogControl_o *this,
        System_String_o *cosName,
        int32_t needQp,
        int32_t haveQp,
        System_Action_o *callBack,
        System_Action_o *cancelCallBack,
        const MethodInfo *method)
{
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
  UnityEngine_GameObject_o *costumeConfirmInfo; // x0
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  __int64 v33; // x1
  UILabel_o *costumeTitleLb; // x25
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  UILabel_o *needQpCostumeTextLb; // x24
  UILabel_o *needQpCostumeLb; // x24
  System_String_o *v39; // x25
  Il2CppObject *v40; // x0
  UILabel_o *haveQpCostumeTextLb; // x23
  UILabel_o *haveQpCostumeLb; // x23
  System_String_o *v43; // x24
  Il2CppObject *v44; // x0
  UILabel_o *costumeInfoLb; // x22
  const MethodInfo *v46; // x5
  struct CombineRootComponent_o *combineRootComponent; // x8
  int32_t v48; // [xsp+8h] [xbp-58h] BYREF
  int32_t v49; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B19E4E & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, cosName, *(_QWORD *)&needQp);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_9342/*"NEED_QP"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3860/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_3930/*"COSTUME_NEED_QP_TEXT"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3927/*"COSTUME_CONFIRM_MSG"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3929/*"COSTUME_HAVE_QP_TEXT"*/, v27, v28);
    byte_4B19E4E = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)cosName);
  costumeConfirmInfo = this->fields.costumeConfirmInfo;
  if ( !costumeConfirmInfo )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(costumeConfirmInfo, 1, 0LL);
  costumeConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !costumeConfirmInfo )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(costumeConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v31);
  SetRarityDialogControl__DefaultBgSize(this, v32);
  costumeTitleLb = this->fields.costumeTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3860/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !costumeTitleLb )
    goto LABEL_20;
  UILabel__set_text(costumeTitleLb, (System_String_o *)costumeConfirmInfo, 0LL);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)this->fields.costumeNameLb;
  if ( !costumeConfirmInfo )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)costumeConfirmInfo, cosName, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_20;
  UILabel__set_text(cancelBtnLb, (System_String_o *)costumeConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_20;
  UILabel__set_text(decideBtnLb, (System_String_o *)costumeConfirmInfo, 0LL);
  needQpCostumeTextLb = this->fields.needQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3930/*"COSTUME_NEED_QP_TEXT"*/, 0LL);
  if ( !needQpCostumeTextLb )
    goto LABEL_20;
  UILabel__set_text(needQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0LL);
  needQpCostumeLb = this->fields.needQpCostumeLb;
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  v49 = needQp;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v39, v40, 0LL);
  if ( !needQpCostumeLb )
    goto LABEL_20;
  UILabel__set_text(needQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0LL);
  haveQpCostumeTextLb = this->fields.haveQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3929/*"COSTUME_HAVE_QP_TEXT"*/, 0LL);
  if ( !haveQpCostumeTextLb )
    goto LABEL_20;
  UILabel__set_text(haveQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0LL);
  haveQpCostumeLb = this->fields.haveQpCostumeLb;
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  v48 = haveQp;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v43, v44, 0LL);
  if ( !haveQpCostumeLb
    || (UILabel__set_text(haveQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0LL),
        costumeInfoLb = this->fields.costumeInfoLb,
        costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3927/*"COSTUME_CONFIRM_MSG"*/,
                                                           0LL),
        !costumeInfoLb)
    || (UILabel__set_text(costumeInfoLb, (System_String_o *)costumeConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_20:
    sub_1BCAA3C(costumeConfirmInfo, v29);
  }
  if ( combineRootComponent->fields.state == 8 )
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, callBack, cancelCallBack, 0LL, v46);
}


void __fastcall SetRarityDialogControl__SetConfirmCombineCostumeEventItem(
        SetRarityDialogControl_o *this,
        EventCombineCostumeEntity_o *eventCombineCostumeEnt,
        System_Action_o *callBack,
        System_Action_o *cancelCallBack,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_GameObject_o *costumeEventItemConfirmInfo; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x5
  struct CombineRootComponent_o *combineRootComponent; // x8

  if ( (byte_4B19E4D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___,
      eventCombineCostumeEnt,
      callBack);
    byte_4B19E4D = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)eventCombineCostumeEnt);
  costumeEventItemConfirmInfo = this->fields.costumeEventItemConfirmInfo;
  if ( !costumeEventItemConfirmInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(costumeEventItemConfirmInfo, 1, 0LL);
  costumeEventItemConfirmInfo = this->fields.costumeEventItemConfirmInfo;
  if ( !costumeEventItemConfirmInfo
    || (costumeEventItemConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    costumeEventItemConfirmInfo,
                                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___)) == 0LL
    || (CostumeEventItemConfirmInfo__Set(
          (CostumeEventItemConfirmInfo_o *)costumeEventItemConfirmInfo,
          eventCombineCostumeEnt,
          0LL),
        (costumeEventItemConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(costumeEventItemConfirmInfo, 1, 0LL),
        SetRarityDialogControl__MoveAlpha(this, v11),
        SetRarityDialogControl__DefaultBgSize(this, v12),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(costumeEventItemConfirmInfo, v9);
  }
  if ( combineRootComponent->fields.state == 8 )
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 0, callBack, cancelCallBack, 0LL, v13);
}


void __fastcall SetRarityDialogControl__SetConfirmCombineCostumeEventItemOrNeedItem(
        SetRarityDialogControl_o *this,
        CombineCostumeEntity_o *combineCostumeEnt,
        EventCombineCostumeEntity_o *eventCombineCostumeEnt,
        bool isShortNeedItemOrQp,
        bool isShortEvemtItem,
        System_Action_bool__o *callBack,
        System_Action_o *cancelCallBack,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  UnityEngine_GameObject_o *costumeEventItemOrNeedItemConfirmInfo; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  __int64 v27; // x1
  UILabel_o *cancelBtnLb; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x2
  __int64 v31; // x3
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v33; // x21
  const MethodInfo *v34; // x5

  if ( (byte_4B19E4C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, combineCostumeEnt, eventCombineCostumeEnt);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SetRarityDialogControl_DefaultBgSize__, v19, v20);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v21, v22);
    byte_4B19E4C = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)combineCostumeEnt);
  costumeEventItemOrNeedItemConfirmInfo = this->fields.costumeEventItemOrNeedItemConfirmInfo;
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(costumeEventItemOrNeedItemConfirmInfo, 1, 0LL);
  costumeEventItemOrNeedItemConfirmInfo = this->fields.costumeEventItemOrNeedItemConfirmInfo;
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_21;
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                        costumeEventItemOrNeedItemConfirmInfo,
                                                                        (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___);
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_21;
  CostumeEventItemOrNeedItemConfirmInfo__Set(
    (CostumeEventItemOrNeedItemConfirmInfo_o *)costumeEventItemOrNeedItemConfirmInfo,
    combineCostumeEnt,
    eventCombineCostumeEnt,
    isShortNeedItemOrQp,
    isShortEvemtItem,
    callBack,
    0LL);
  costumeEventItemOrNeedItemConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(costumeEventItemOrNeedItemConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v25);
  SetRarityDialogControl__DefaultBgSize(this, v26);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/,
                                                                        0LL);
  if ( !cancelBtnLb )
    goto LABEL_21;
  UILabel__set_text(cancelBtnLb, (System_String_o *)costumeEventItemOrNeedItemConfirmInfo, 0LL);
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)this->fields.cancelBtnLb;
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_21;
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                        (UnityEngine_Component_o *)costumeEventItemOrNeedItemConfirmInfo,
                                                                        0LL);
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_21;
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                                        (UnityEngine_Transform_o *)costumeEventItemOrNeedItemConfirmInfo,
                                                                        0LL);
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject(
                 (UnityEngine_Component_o *)costumeEventItemOrNeedItemConfirmInfo,
                 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, 0.0, 0LL);
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)this->fields.decideBtnLb;
  if ( !costumeEventItemOrNeedItemConfirmInfo
    || (costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                              (UnityEngine_Component_o *)costumeEventItemOrNeedItemConfirmInfo,
                                                                              0LL)) == 0LL
    || (costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                                              (UnityEngine_Transform_o *)costumeEventItemOrNeedItemConfirmInfo,
                                                                              0LL)) == 0LL
    || (costumeEventItemOrNeedItemConfirmInfo = UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)costumeEventItemOrNeedItemConfirmInfo,
                                                  0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(costumeEventItemOrNeedItemConfirmInfo, 0, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_21:
    sub_1BCAA3C(costumeEventItemOrNeedItemConfirmInfo, v23);
  }
  if ( combineRootComponent->fields.state == 8 )
  {
    v33 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v30, v31);
    System_Action___ctor(v33, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, 0LL, cancelCallBack, v33, v34);
  }
}


void __fastcall SetRarityDialogControl__SetConfirmInfo(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_Int64_array *list,
        System_String_o *msg,
        int32_t spendQp,
        int32_t haveQp,
        bool isStatusUp,
        System_Int64_array *selectedList,
        bool isExceededMaterial,
        const MethodInfo *method)
{
  SetRarityDialogControl_o *v16; // x24
  bool v17; // w28
  __int64 v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x4
  System_Int64_array *v21; // x2
  const MethodInfo *v22; // x7
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  __int64 methodPtr_low; // x9
  __int64 v26; // x9
  SetRarityDialogControl_o *v27; // x0
  System_Int64_array *v28; // x1
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // [xsp+0h] [xbp-70h]
  System_String_o *labelMsg; // [xsp+18h] [xbp-58h] BYREF

  v16 = this;
  v17 = isStatusUp;
  if ( (byte_4B19E3E & 1) == 0 )
  {
    sub_1BCA7E0(&CombineRootComponent_TypeInfo, baseData, list);
    this = (SetRarityDialogControl_o *)sub_1BCA7E0(
                                         &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                         v18,
                                         v19);
    byte_4B19E3E = 1;
  }
  labelMsg = 0LL;
  SetRarityDialogControl__CheckExceedSvt(this, selectedList, (const MethodInfo *)list);
  v16->fields.isStatusUp = v17;
  if ( SetRarityDialogControl__CheckStatusUpInfo(v16, baseData, selectedList, &labelMsg, v20) && isStatusUp )
    SetRarityDialogControl__SetAllDispConfirmCombine(
      v16,
      baseData,
      v21,
      spendQp,
      haveQp,
      selectedList,
      labelMsg,
      isExceededMaterial,
      v30);
  else
    SetRarityDialogControl__SetConfirmRarityInfo(
      v16,
      baseData,
      selectedList,
      msg,
      spendQp,
      haveQp,
      isExceededMaterial,
      v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (Il2CppObject *)Instance[2].klass;
  if ( !Instance )
    goto LABEL_18;
  methodPtr_low = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineRootComponent_TypeInfo )
  {
    goto LABEL_19;
  }
  if ( HIDWORD(Instance[40].monitor) != 7 )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (Il2CppObject *)Instance[2].klass) == 0LL )
LABEL_18:
    sub_1BCAA3C(Instance, v24);
  v26 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable[0].methodPtr) < (unsigned int)v26
    || (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v26 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_19:
    sub_1BCACFC(Instance);
    SetRarityDialogControl__CheckExceedSvt(v27, v28, v29);
    return;
  }
  CombineRootComponent__ShowTutorial((CombineRootComponent_o *)Instance, 0LL);
}


void __fastcall SetRarityDialogControl__SetConfirmLvExceed(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_String_o *msg,
        int32_t spendQp,
        int32_t haveQp,
        bool isCheck,
        const MethodInfo *method)
{
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
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  UnityEngine_GameObject_o *lvExceedConfirmSimpleInfo; // x0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  __int64 v36; // x1
  UILabel_o *cancelBtnLb; // x23
  UILabel_o *decideBtnLb; // x23
  __int64 v39; // x1
  UILabel_o *lvExceedInfoLb; // x21
  UILabel_o *lvExceedSpendQpTxtLb; // x23
  UILabel_o *lvExceedHaveQpTxtLb; // x23
  UILabel_o *lvExceedSpendQpLb; // x23
  System_String_o *v44; // x24
  Il2CppObject *v45; // x0
  UILabel_o *lvExceedHaveQpLb; // x22
  System_String_o *v47; // x23
  Il2CppObject *v48; // x0
  __int64 v49; // x2
  __int64 v50; // x3
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v52; // x0
  _QWORD *v53; // x8
  System_Action_o *v54; // x21
  int32_t v55; // w20
  const MethodInfo *v56; // x5
  int32_t v57; // [xsp+8h] [xbp-48h] BYREF
  int32_t v58; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B19E49 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, baseData, msg);
    sub_1BCA7E0(&int_TypeInfo, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__155_0__, v16, v17);
    sub_1BCA7E0(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__155_1__, v18, v19);
    sub_1BCA7E0(&StringLiteral_9342/*"NEED_QP"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_3848/*"CONFIRM_EXCEED_COMBINE"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_3693/*"COMBINE_HAVE_QP"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_8445/*"LVEXCEED_COMBINE_SPEND_QP"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v30, v31);
    byte_4B19E49 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  lvExceedConfirmSimpleInfo = this->fields.lvExceedConfirmSimpleInfo;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 1, 0LL);
  lvExceedConfirmSimpleInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v34);
  SetRarityDialogControl__DefaultBgSize(this, v35);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)this->fields.lvExceedTitleLb;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)lvExceedConfirmSimpleInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/,
                                                            0LL);
  if ( !cancelBtnLb )
    goto LABEL_36;
  UILabel__set_text(cancelBtnLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/,
                                                            0LL);
  if ( !decideBtnLb )
    goto LABEL_36;
  UILabel__set_text(decideBtnLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
  if ( !isCheck )
  {
    lvExceedSpendQpTxtLb = this->fields.lvExceedSpendQpTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
    lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8445/*"LVEXCEED_COMBINE_SPEND_QP"*/,
                                                              0LL);
    if ( lvExceedSpendQpTxtLb )
    {
      UILabel__set_text(lvExceedSpendQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
      lvExceedHaveQpTxtLb = this->fields.lvExceedHaveQpTxtLb;
      lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_3693/*"COMBINE_HAVE_QP"*/,
                                                                0LL);
      if ( lvExceedHaveQpTxtLb )
      {
        UILabel__set_text(lvExceedHaveQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
        lvExceedSpendQpLb = this->fields.lvExceedSpendQpLb;
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
        v58 = spendQp;
        v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58);
        lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)System_String__Format(v44, v45, 0LL);
        if ( lvExceedSpendQpLb )
        {
          UILabel__set_text(lvExceedSpendQpLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
          lvExceedHaveQpLb = this->fields.lvExceedHaveQpLb;
          v47 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
          v57 = haveQp;
          v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
          lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)System_String__Format(v47, v48, 0LL);
          if ( lvExceedHaveQpLb )
          {
            UILabel__set_text(lvExceedHaveQpLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
            lvExceedConfirmSimpleInfo = this->fields.lvExceedQpInfo;
            if ( lvExceedConfirmSimpleInfo )
            {
              UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 1, 0LL);
              lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)this->fields.lvExceedInfoLb;
              if ( lvExceedConfirmSimpleInfo )
              {
                lvExceedConfirmSimpleInfo = UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)lvExceedConfirmSimpleInfo,
                                              0LL);
                if ( lvExceedConfirmSimpleInfo )
                  goto LABEL_27;
              }
            }
          }
        }
      }
    }
LABEL_36:
    sub_1BCAA3C(lvExceedConfirmSimpleInfo, v32);
  }
  lvExceedInfoLb = this->fields.lvExceedInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3848/*"CONFIRM_EXCEED_COMBINE"*/,
                                                            0LL);
  if ( !lvExceedInfoLb )
    goto LABEL_36;
  UILabel__set_text(lvExceedInfoLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)this->fields.lvExceedInfoLb;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_36;
  lvExceedConfirmSimpleInfo = UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)lvExceedConfirmSimpleInfo,
                                0LL);
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 1, 0LL);
  lvExceedConfirmSimpleInfo = this->fields.lvExceedQpInfo;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_36;
LABEL_27:
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_36;
  if ( combineRootComponent->fields.state == 6 )
  {
    v52 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v49, v50);
    v53 = &Method_SetRarityDialogControl__SetConfirmLvExceed_b__155_0__;
    if ( !isCheck )
      v53 = &Method_SetRarityDialogControl__SetConfirmLvExceed_b__155_1__;
    v54 = v52;
    if ( isCheck )
      v55 = 8;
    else
      v55 = 0;
    System_Action___ctor(v52, (Il2CppObject *)this, *v53, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, v55, v54, 0LL, 0LL, v56);
  }
}


void __fastcall SetRarityDialogControl__SetConfirmLvExceed_46168420(
        SetRarityDialogControl_o *this,
        System_Collections_Generic_List_GameObject__o *itemObjList,
        System_Int32_array *itemList,
        int32_t spendQp,
        int32_t haveQp,
        const MethodInfo *method)
{
  SetRarityDialogControl_o *v10; // x19
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
  struct CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v43; // x1
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  UILabel_o *lvExceedTitleLabel; // x24
  UILabel_o *lvExceedSpendItemLabel; // x24
  UILabel_o *lvExceedSpendQpTxtLabel; // x24
  UILabel_o *lvExceedHaveQpTxtLabel; // x24
  UILabel_o *lvExceedSpendQpLabel; // x24
  System_String_o *v51; // x25
  Il2CppObject *v52; // x0
  UILabel_o *lvExceedHaveQpLabel; // x23
  System_String_o *v54; // x24
  Il2CppObject *v55; // x0
  UILabel_o *lvExceedConfirmLabel; // x22
  __int64 size; // x24
  unsigned __int64 v58; // x22
  SetRarityDialogControl_o *v59; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_Action_o *v64; // x20
  const MethodInfo *v65; // x5
  int32_t v66; // [xsp+8h] [xbp-58h] BYREF
  int32_t v67; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_4B19E4A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, itemObjList, itemList);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Item__, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__156_0__, v21, v22);
    sub_1BCA7E0(&StringLiteral_9342/*"NEED_QP"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3861/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3693/*"COMBINE_HAVE_QP"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_8444/*"LVEXCEED_COMBINE_SPEND_ITEM"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_8445/*"LVEXCEED_COMBINE_SPEND_QP"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_8446/*"LVEXCEED_EXE_CONFIRM"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v35, v36);
    this = (SetRarityDialogControl_o *)sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v37, v38);
    byte_4B19E4A = 1;
  }
  combineRootComponent = v10->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_31;
  if ( combineRootComponent->fields.state == 6 )
  {
    SetRarityDialogControl__DisableConfirmInfo(v10, (const MethodInfo *)itemObjList);
    this = (SetRarityDialogControl_o *)v10->fields.lvExceedConfirmInfo;
    if ( !this )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (SetRarityDialogControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
    if ( !this )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    SetRarityDialogControl__MoveAlpha(v10, v40);
    SetRarityDialogControl__DefaultBgSize(v10, v41);
    this = (SetRarityDialogControl_o *)v10->fields.mPanelBg;
    if ( !this )
      goto LABEL_31;
    UIWidget__set_height((UIWidget_o *)this, 501, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, -8.0, 0LL);
    GameObjectExtensions__SetLocalPositionY(v10->fields.confirmBtnInfo, -8.0, 0LL);
    cancelBtnLb = v10->fields.cancelBtnLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelBtnLb )
      goto LABEL_31;
    UILabel__set_text(cancelBtnLb, (System_String_o *)this, 0LL);
    decideBtnLb = v10->fields.decideBtnLb;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideBtnLb )
      goto LABEL_31;
    UILabel__set_text(decideBtnLb, (System_String_o *)this, 0LL);
    lvExceedTitleLabel = v10->fields.lvExceedTitleLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3861/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
    if ( !lvExceedTitleLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedTitleLabel, (System_String_o *)this, 0LL);
    lvExceedSpendItemLabel = v10->fields.lvExceedSpendItemLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8444/*"LVEXCEED_COMBINE_SPEND_ITEM"*/, 0LL);
    if ( !lvExceedSpendItemLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedSpendItemLabel, (System_String_o *)this, 0LL);
    lvExceedSpendQpTxtLabel = v10->fields.lvExceedSpendQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8445/*"LVEXCEED_COMBINE_SPEND_QP"*/, 0LL);
    if ( !lvExceedSpendQpTxtLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedSpendQpTxtLabel, (System_String_o *)this, 0LL);
    lvExceedHaveQpTxtLabel = v10->fields.lvExceedHaveQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMBINE_HAVE_QP"*/, 0LL);
    if ( !lvExceedHaveQpTxtLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedHaveQpTxtLabel, (System_String_o *)this, 0LL);
    lvExceedSpendQpLabel = v10->fields.lvExceedSpendQpLabel;
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
    v67 = spendQp;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
    this = (SetRarityDialogControl_o *)System_String__Format(v51, v52, 0LL);
    if ( !lvExceedSpendQpLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedSpendQpLabel, (System_String_o *)this, 0LL);
    lvExceedHaveQpLabel = v10->fields.lvExceedHaveQpLabel;
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
    v66 = haveQp;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
    this = (SetRarityDialogControl_o *)System_String__Format(v54, v55, 0LL);
    if ( !lvExceedHaveQpLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedHaveQpLabel, (System_String_o *)this, 0LL);
    lvExceedConfirmLabel = v10->fields.lvExceedConfirmLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8446/*"LVEXCEED_EXE_CONFIRM"*/, 0LL);
    if ( !lvExceedConfirmLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedConfirmLabel, (System_String_o *)this, 0LL);
    if ( !itemObjList )
      goto LABEL_31;
    size = (unsigned int)itemObjList->fields._size;
    if ( (int)size >= 1 )
    {
      v58 = 0LL;
      while ( 1 )
      {
        this = (SetRarityDialogControl_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)itemObjList,
                                             v58,
                                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !v10->fields.lvExceedConsumeItemGrid )
          break;
        v59 = this;
        transform = UnityEngine_Component__get_transform(
                      (UnityEngine_Component_o *)v10->fields.lvExceedConsumeItemGrid,
                      0LL);
        this = (SetRarityDialogControl_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v10,
                                             (UnityEngine_GameObject_o *)v59,
                                             transform,
                                             0LL,
                                             0LL);
        if ( !this )
          break;
        this = (SetRarityDialogControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
        if ( !itemList )
          break;
        if ( v58 >= itemList->max_length )
          sub_1BCAA44(this, itemObjList);
        if ( !this )
          break;
        LimitCntUpItemComponent__SetItemEntity((LimitCntUpItemComponent_o *)this, itemList->m_Items[++v58], 0LL);
        if ( size == v58 )
          goto LABEL_28;
      }
LABEL_31:
      sub_1BCAA3C(this, itemObjList);
    }
LABEL_28:
    this = (SetRarityDialogControl_o *)v10->fields.lvExceedConsumeItemGrid;
    if ( !this )
      goto LABEL_31;
    ((void (__fastcall *)(SetRarityDialogControl_o *, Il2CppClass *))this->klass[1]._1.castClass)(
      this,
      this->klass[1]._1.declaringType);
    v64 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v61, v62, v63);
    System_Action___ctor(v64, (Il2CppObject *)v10, Method_SetRarityDialogControl__SetConfirmLvExceed_b__156_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v10, 8, v64, 0LL, 0LL, v65);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetConfirmRarityInfo(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_Int64_array *list,
        System_String_o *msg,
        int32_t spendQp,
        int32_t haveQp,
        bool isExceededMaterial,
        const MethodInfo *method)
{
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
  void *rariryConfirmInfo; // x0
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1
  __int64 v43; // x1
  UILabel_o *cancelBtnLb; // x25
  UILabel_o *decideBtnLb; // x25
  const MethodInfo *v46; // x1
  __int64 v47; // x26
  float v48; // s8
  unsigned __int64 v49; // x25
  bool v50; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v53; // x7
  float y; // s9
  int v55; // w23
  int v56; // w9
  float v57; // s1
  float z; // s2
  float v59; // s0
  __int64 v60; // x1
  UILabel_o *spendQpTxtLb; // x23
  UILabel_o *haveQpTxtLb; // x23
  UILabel_o *spendQpLb; // x23
  System_String_o *v64; // x24
  Il2CppObject *v65; // x0
  UILabel_o *haveQpLb; // x22
  System_String_o *v67; // x23
  Il2CppObject *v68; // x0
  __int64 v69; // x1
  UILabel_o *rareMaterialMsgLb; // x21
  __int64 *v71; // x8
  __int64 v72; // x1
  UILabel_o *rareConfirmMsgLb; // x20
  __int64 v74; // x2
  __int64 v75; // x3
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v77; // x20
  const MethodInfo *v78; // x5
  int32_t v79; // [xsp+8h] [xbp-78h] BYREF
  int32_t v80; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19E3F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, baseData, list);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SetRarityDialogControl__SetConfirmRarityInfo_b__145_0__, v21, v22);
    sub_1BCA7E0(&StringLiteral_9342/*"NEED_QP"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3693/*"COMBINE_HAVE_QP"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3843/*"CONFIRM_COMBINE_MSG"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3692/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_11085/*"RARE_MATERIAL_INFO_MSG"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_3725/*"COMBINE_SPEND_QP"*/, v37, v38);
    byte_4B19E3F = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  rariryConfirmInfo = this->fields.rariryConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rariryConfirmInfo, 1, 0LL);
  rariryConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rariryConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v41);
  SetRarityDialogControl__DefaultBgSize(this, v42);
  rariryConfirmInfo = this->fields.rarityTitleLb;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  UILabel__set_text((UILabel_o *)rariryConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_48;
  UILabel__set_text(cancelBtnLb, (System_String_o *)rariryConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_48;
  UILabel__set_text(decideBtnLb, (System_String_o *)rariryConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v46);
  if ( !list )
    goto LABEL_48;
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  LODWORD(v47) = list->max_length;
  v48 = *((float *)rariryConfirmInfo + 12);
  if ( (int)v47 >= 1 )
  {
    v49 = 0LL;
    v50 = 0;
    do
    {
      if ( v50 )
        goto LABEL_48;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
      rariryConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !rariryConfirmInfo )
        goto LABEL_48;
      rariryConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)rariryConfirmInfo,
                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v49 >= list->max_length )
        sub_1BCAA44(rariryConfirmInfo, v39);
      if ( !rariryConfirmInfo )
        goto LABEL_48;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)rariryConfirmInfo,
        v49,
        baseData,
        list->m_Items[v49],
        0,
        0,
        0LL,
        v53);
      rariryConfirmInfo = this->fields.raritySvtGrid;
      v47 = *(_QWORD *)&list->max_length;
      ++v49;
      v50 = rariryConfirmInfo == 0LL;
    }
    while ( (__int64)v49 < (int)v47 );
    if ( !rariryConfirmInfo )
      goto LABEL_48;
  }
  y = this->fields.center.fields.y;
  v55 = *((_DWORD *)rariryConfirmInfo + 11);
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  if ( v55 >= (int)v47 )
    v56 = v47;
  else
    v56 = v55;
  v57 = 55.0;
  if ( v55 >= (int)v47 )
    v57 = y;
  v59 = (float)(this->fields.center.fields.x - (float)((float)(v48 * 0.5) * (float)(v56 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)rariryConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v57 - 1),
    0LL);
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  v81.fields.x = 0.5;
  v81.fields.y = 0.5;
  v81.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rariryConfirmInfo, v81, 0LL);
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  UIGrid__set_repositionNow((UIGrid_o *)rariryConfirmInfo, 1, 0LL);
  spendQpTxtLb = this->fields.spendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v60);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3725/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !spendQpTxtLb )
    goto LABEL_48;
  UILabel__set_text(spendQpTxtLb, (System_String_o *)rariryConfirmInfo, 0LL);
  haveQpTxtLb = this->fields.haveQpTxtLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !haveQpTxtLb )
    goto LABEL_48;
  UILabel__set_text(haveQpTxtLb, (System_String_o *)rariryConfirmInfo, 0LL);
  spendQpLb = this->fields.spendQpLb;
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  v80 = spendQp;
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
  rariryConfirmInfo = System_String__Format(v64, v65, 0LL);
  if ( !spendQpLb
    || (UILabel__set_text(spendQpLb, (System_String_o *)rariryConfirmInfo, 0LL),
        haveQpLb = this->fields.haveQpLb,
        v67 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL),
        v79 = haveQp,
        v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79),
        rariryConfirmInfo = System_String__Format(v67, v68, 0LL),
        !haveQpLb) )
  {
LABEL_48:
    sub_1BCAA3C(rariryConfirmInfo, v39);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)rariryConfirmInfo, 0LL);
  rareMaterialMsgLb = this->fields.rareMaterialMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v69);
    if ( isExceededMaterial )
      goto LABEL_37;
LABEL_39:
    v71 = &StringLiteral_11085/*"RARE_MATERIAL_INFO_MSG"*/;
    goto LABEL_40;
  }
  if ( !isExceededMaterial )
    goto LABEL_39;
LABEL_37:
  v71 = &StringLiteral_3692/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
LABEL_40:
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)*v71, 0LL);
  if ( !rareMaterialMsgLb )
    goto LABEL_48;
  UILabel__set_text(rareMaterialMsgLb, (System_String_o *)rariryConfirmInfo, 0LL);
  rareConfirmMsgLb = this->fields.rareConfirmMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3843/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !rareConfirmMsgLb )
    goto LABEL_48;
  UILabel__set_text(rareConfirmMsgLb, (System_String_o *)rariryConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_48;
  if ( combineRootComponent->fields.state == 3 )
  {
    v77 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v39, v74, v75);
    System_Action___ctor(v77, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmRarityInfo_b__145_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v77, 0LL, 0LL, v78);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetConfirmSvtEqCombine(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_String_o *msg,
        int32_t spendQp,
        int32_t haveQp,
        bool isStatusUp,
        System_Collections_Generic_Dictionary_long__bool__o *selectedList,
        const MethodInfo *method)
{
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
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  UnityEngine_GameObject_o *normalConfirmInfo; // x0
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x1
  __int64 v52; // x1
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v55; // x1
  struct UIGrid_o *materialSvtGrid; // x8
  float v57; // s8
  int32_t v58; // w24
  __int64 v59; // x1
  UnityEngine_Component_o *v60; // x0
  Il2CppObject *key; // x25
  char value; // w27
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v66; // x1
  Il2CppObject *Component_object; // x0
  __int64 v68; // x1
  float y; // s9
  int32_t Count; // w23
  struct UIGrid_o *v71; // x8
  int32_t maxPerLine; // w20
  int32_t v73; // w22
  int32_t v74; // w9
  float v75; // s1
  float z; // s2
  float v77; // s0
  __int64 v78; // x1
  UILabel_o *normalSpendQpTxtLb; // x22
  UILabel_o *normalHaveQpTxtLb; // x22
  UILabel_o *confirmSpendQpLb; // x22
  System_String_o *v82; // x23
  Il2CppObject *v83; // x0
  UILabel_o *confirmHaveQpLb; // x21
  System_String_o *v85; // x22
  Il2CppObject *v86; // x0
  UILabel_o *confirmMsgLb; // x20
  __int64 v88; // x2
  __int64 v89; // x3
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v91; // x20
  const MethodInfo *v92; // x5
  const MethodInfo *v93; // [xsp+0h] [xbp-E0h]
  int32_t v94; // [xsp+Ch] [xbp-D4h]
  int32_t v96; // [xsp+14h] [xbp-CCh] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v97; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v98; // [xsp+40h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19E42 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, baseData, msg);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__, v22, v23);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v24, v25);
    sub_1BCA7E0(&int_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__, v30, v31);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__148_0__, v34, v35);
    sub_1BCA7E0(&StringLiteral_9342/*"NEED_QP"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_3693/*"COMBINE_HAVE_QP"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_3843/*"CONFIRM_COMBINE_MSG"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_3725/*"COMBINE_SPEND_QP"*/, v46, v47);
    byte_4B19E42 = 1;
  }
  memset(&v98, 0, sizeof(v98));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  normalConfirmInfo = this->fields.normalConfirmInfo;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(normalConfirmInfo, 1, 0LL);
  this->fields.isStatusUp = isStatusUp;
  normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(normalConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v50);
  SetRarityDialogControl__DefaultBgSize(this, v51);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.normalTitleLb;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  UILabel__set_text((UILabel_o *)normalConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_44;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_44;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v55);
  if ( !selectedList )
    goto LABEL_44;
  v94 = haveQp;
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_3237B8C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  materialSvtGrid = this->fields.materialSvtGrid;
  if ( !materialSvtGrid )
    goto LABEL_44;
  v57 = materialSvtGrid->fields.cellWidth * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v97,
    selectedList,
    (const MethodInfo_32382E0 *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v58 = 0;
  v98 = v97;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v98,
            (const MethodInfo_335C2F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v60 = (UnityEngine_Component_o *)this->fields.materialSvtGrid;
    if ( !v60 )
      sub_1BCAA3C(0LL, v59);
    key = v98.fields._current.fields.key;
    value = (char)v98.fields._current.fields.value;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v60, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Object )
      sub_1BCAA3C(0LL, v66);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_object )
      sub_1BCAA3C(0LL, v68);
    MaterialSvtInfo__setMaterialSvtInfo_46145168(
      (MaterialSvtInfo_o *)Component_object,
      v58++,
      baseData,
      (int64_t)key,
      0,
      0,
      value != 0,
      0LL,
      v93);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v98,
    (const MethodInfo_335C414 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_3237B8C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_3237B8C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v71 = this->fields.materialSvtGrid;
  if ( !v71 )
    goto LABEL_44;
  maxPerLine = v71->fields.maxPerLine;
  v73 = (int)normalConfirmInfo;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.materialSvtGrid,
                                                    0LL);
  if ( !normalConfirmInfo )
    goto LABEL_44;
  if ( v73 <= maxPerLine )
    v74 = Count;
  else
    v74 = maxPerLine;
  v75 = 55.0;
  if ( v73 <= maxPerLine )
    v75 = y;
  v77 = (float)(this->fields.center.fields.x - (float)(v57 * (float)(v74 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v75 - 1),
    0LL);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)normalConfirmInfo,
                                                    0LL);
  if ( !normalConfirmInfo )
    goto LABEL_44;
  v99.fields.x = 0.5;
  v99.fields.y = 0.5;
  v99.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v99, 0LL);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  UIGrid__set_repositionNow((UIGrid_o *)normalConfirmInfo, 1, 0LL);
  normalSpendQpTxtLb = this->fields.normalSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v78);
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3725/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !normalSpendQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !normalHaveQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v82 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  LODWORD(v97.fields._dictionary) = spendQp;
  v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v97);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v82, v83, 0LL);
  if ( !confirmSpendQpLb )
    goto LABEL_44;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v85 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  v96 = v94;
  v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v85, v86, 0LL);
  if ( !confirmHaveQpLb )
    goto LABEL_44;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3843/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !confirmMsgLb
    || (UILabel__set_text(confirmMsgLb, (System_String_o *)normalConfirmInfo, 0LL),
        (normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(normalConfirmInfo, 0, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_44:
    sub_1BCAA3C(normalConfirmInfo, v48);
  }
  if ( combineRootComponent->fields.state == 4 )
  {
    v91 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v48, v88, v89);
    System_Action___ctor(
      v91,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__148_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v91, 0LL, 0LL, v92);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetExceedMaterialInfo(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_Int64_array *list,
        System_String_o *msg,
        int32_t spendQp,
        int32_t haveQp,
        const MethodInfo *method)
{
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
  void *exceedConfirmInfo; // x0
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1
  __int64 v39; // x1
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v42; // x1
  __int64 v43; // x25
  float v44; // s8
  unsigned __int64 v45; // x24
  bool v46; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v49; // x7
  float y; // s9
  int v51; // w22
  int v52; // w9
  float v53; // s1
  float z; // s2
  float v55; // s0
  __int64 v56; // x1
  UILabel_o *exceedConfirmSpendQpTxtLb; // x22
  UILabel_o *exceedConfirmHaveQpTxtLb; // x22
  UILabel_o *exceedConfirmSpendQpLb; // x22
  System_String_o *v60; // x23
  Il2CppObject *v61; // x0
  UILabel_o *exceedConfirmHaveQpLb; // x21
  System_String_o *v63; // x22
  Il2CppObject *v64; // x0
  UILabel_o *exceedMaterialMsgLb; // x20
  UILabel_o *exceedConfirmMsgLb; // x20
  __int64 v67; // x2
  __int64 v68; // x3
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v70; // x20
  const MethodInfo *v71; // x5
  int32_t v72; // [xsp+18h] [xbp-58h] BYREF
  int32_t v73; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19E40 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, baseData, list);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SetRarityDialogControl__SetExceedMaterialInfo_b__146_0__, v19, v20);
    sub_1BCA7E0(&StringLiteral_9342/*"NEED_QP"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_3693/*"COMBINE_HAVE_QP"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3843/*"CONFIRM_COMBINE_MSG"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3692/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_3725/*"COMBINE_SPEND_QP"*/, v33, v34);
    byte_4B19E40 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  exceedConfirmInfo = this->fields.exceedConfirmInfo;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exceedConfirmInfo, 1, 0LL);
  exceedConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exceedConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v37);
  SetRarityDialogControl__DefaultBgSize(this, v38);
  exceedConfirmInfo = this->fields.exceedConfirmTitleLb;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  UILabel__set_text((UILabel_o *)exceedConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_41;
  UILabel__set_text(cancelBtnLb, (System_String_o *)exceedConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_41;
  UILabel__set_text(decideBtnLb, (System_String_o *)exceedConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v42);
  if ( !list )
    goto LABEL_41;
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  LODWORD(v43) = list->max_length;
  v44 = *((float *)exceedConfirmInfo + 12);
  if ( (int)v43 >= 1 )
  {
    v45 = 0LL;
    v46 = 0;
    do
    {
      if ( v46 )
        goto LABEL_41;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
      exceedConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !exceedConfirmInfo )
        goto LABEL_41;
      exceedConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)exceedConfirmInfo,
                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v45 >= list->max_length )
        sub_1BCAA44(exceedConfirmInfo, v35);
      if ( !exceedConfirmInfo )
        goto LABEL_41;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)exceedConfirmInfo,
        v45,
        baseData,
        list->m_Items[v45],
        0,
        0,
        0LL,
        v49);
      exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
      v43 = *(_QWORD *)&list->max_length;
      ++v45;
      v46 = exceedConfirmInfo == 0LL;
    }
    while ( (__int64)v45 < (int)v43 );
    if ( !exceedConfirmInfo )
      goto LABEL_41;
  }
  y = this->fields.center.fields.y;
  v51 = *((_DWORD *)exceedConfirmInfo + 11);
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  if ( v51 >= (int)v43 )
    v52 = v43;
  else
    v52 = v51;
  v53 = 55.0;
  if ( v51 >= (int)v43 )
    v53 = y;
  v55 = (float)(this->fields.center.fields.x - (float)((float)(v44 * 0.5) * (float)(v52 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)exceedConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v53 - 1),
    0LL);
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  v74.fields.x = 0.5;
  v74.fields.y = 0.5;
  v74.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)exceedConfirmInfo, v74, 0LL);
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  UIGrid__set_repositionNow((UIGrid_o *)exceedConfirmInfo, 1, 0LL);
  exceedConfirmSpendQpTxtLb = this->fields.exceedConfirmSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56);
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3725/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !exceedConfirmSpendQpTxtLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmSpendQpTxtLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmHaveQpTxtLb = this->fields.exceedConfirmHaveQpTxtLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !exceedConfirmHaveQpTxtLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmHaveQpTxtLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmSpendQpLb = this->fields.exceedConfirmSpendQpLb;
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  v73 = spendQp;
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73);
  exceedConfirmInfo = System_String__Format(v60, v61, 0LL);
  if ( !exceedConfirmSpendQpLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmSpendQpLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmHaveQpLb = this->fields.exceedConfirmHaveQpLb;
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  v72 = haveQp;
  v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72);
  exceedConfirmInfo = System_String__Format(v63, v64, 0LL);
  if ( !exceedConfirmHaveQpLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmHaveQpLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedMaterialMsgLb = this->fields.exceedMaterialMsgLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, 0LL);
  if ( !exceedMaterialMsgLb
    || (UILabel__set_text(exceedMaterialMsgLb, (System_String_o *)exceedConfirmInfo, 0LL),
        exceedConfirmMsgLb = this->fields.exceedConfirmMsgLb,
        exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3843/*"CONFIRM_COMBINE_MSG"*/, 0LL),
        !exceedConfirmMsgLb)
    || (UILabel__set_text(exceedConfirmMsgLb, (System_String_o *)exceedConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_41:
    sub_1BCAA3C(exceedConfirmInfo, v35);
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v70 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v67, v68);
    System_Action___ctor(
      v70,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetExceedMaterialInfo_b__146_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 0, v70, 0LL, 0LL, v71);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetFriendshipExceedInfo(
        SetRarityDialogControl_o *this,
        System_String_o *msg,
        int32_t spendQp,
        int32_t haveQp,
        const MethodInfo *method)
{
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
  UnityEngine_GameObject_o *friendshipExceedConfirmInfo; // x0
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  __int64 v31; // x1
  UILabel_o *cancelBtnLb; // x22
  UILabel_o *decideBtnLb; // x22
  UILabel_o *friendshipExceedSpendQpTxtLb; // x22
  UILabel_o *friendshipExceedHaveQpTxtLb; // x22
  UILabel_o *friendshipExceedSpendQpLb; // x22
  System_String_o *v37; // x23
  Il2CppObject *v38; // x0
  UILabel_o *friendshipExceedHaveQpLb; // x21
  System_String_o *v40; // x22
  Il2CppObject *v41; // x0
  UILabel_o *friendshipExceedMsgLb; // x20
  __int64 v43; // x2
  __int64 v44; // x3
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v46; // x20
  const MethodInfo *v47; // x5
  int32_t v48; // [xsp+8h] [xbp-48h] BYREF
  int32_t v49; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B19E4F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, msg, *(_QWORD *)&spendQp);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__161_0__, v13, v14);
    sub_1BCA7E0(&StringLiteral_9342/*"NEED_QP"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3693/*"COMBINE_HAVE_QP"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_6606/*"FRIENDSHIP_EXCEED_SPEND_QP"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3851/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/, v25, v26);
    byte_4B19E4F = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)msg);
  friendshipExceedConfirmInfo = this->fields.friendshipExceedConfirmInfo;
  if ( !friendshipExceedConfirmInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(friendshipExceedConfirmInfo, 1, 0LL);
  friendshipExceedConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !friendshipExceedConfirmInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(friendshipExceedConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v29);
  SetRarityDialogControl__DefaultBgSize(this, v30);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)this->fields.friendshipExceedTitleLb;
  if ( !friendshipExceedConfirmInfo )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)friendshipExceedConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0LL);
  if ( !cancelBtnLb )
    goto LABEL_21;
  UILabel__set_text(cancelBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0LL);
  if ( !decideBtnLb )
    goto LABEL_21;
  UILabel__set_text(decideBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedSpendQpTxtLb = this->fields.friendshipExceedSpendQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_6606/*"FRIENDSHIP_EXCEED_SPEND_QP"*/,
                                                              0LL);
  if ( !friendshipExceedSpendQpTxtLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedSpendQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedHaveQpTxtLb = this->fields.friendshipExceedHaveQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3693/*"COMBINE_HAVE_QP"*/,
                                                              0LL);
  if ( !friendshipExceedHaveQpTxtLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedHaveQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedSpendQpLb = this->fields.friendshipExceedSpendQpLb;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  v49 = spendQp;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v37, v38, 0LL);
  if ( !friendshipExceedSpendQpLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedSpendQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedHaveQpLb = this->fields.friendshipExceedHaveQpLb;
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  v48 = haveQp;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v40, v41, 0LL);
  if ( !friendshipExceedHaveQpLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedHaveQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedMsgLb = this->fields.friendshipExceedMsgLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3851/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/,
                                                              0LL);
  if ( !friendshipExceedMsgLb
    || (UILabel__set_text(friendshipExceedMsgLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL),
        (friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (friendshipExceedConfirmInfo = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)friendshipExceedConfirmInfo,
                                        0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(friendshipExceedConfirmInfo, 0, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_21:
    sub_1BCAA3C(friendshipExceedConfirmInfo, v27);
  }
  if ( combineRootComponent->fields.state == 12 )
  {
    v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v43, v44);
    System_Action___ctor(
      v46,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__161_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v46, 0LL, 0LL, v47);
  }
}


void __fastcall SetRarityDialogControl__SetLimitUpInfo(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        CombineLimitUpWarningDialog_o *combineLimitUpWarningDialog,
        System_String_o *msg,
        int32_t spendQp,
        int32_t haveQp,
        const MethodInfo *method)
{
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
  __int64 v33; // x20
  UnityEngine_GameObject_o *limitUpConfirmInfo; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x1
  __int64 v57; // x1
  UILabel_o *cancelBtnLb; // x23
  UILabel_o *decideBtnLb; // x23
  UILabel_o *limitUpConfirmSpendQpTxtLb; // x23
  UILabel_o *limitUpConfirmHaveQpTxtLb; // x23
  UILabel_o *limitUpConfirmSpendQpLb; // x23
  System_String_o *v63; // x24
  Il2CppObject *v64; // x0
  UILabel_o *limitUpConfirmHaveQpLb; // x22
  System_String_o *v66; // x23
  Il2CppObject *v67; // x0
  UILabel_o *limitUpConfirmMsgLb; // x21
  __int64 v69; // x2
  __int64 v70; // x3
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v72; // x21
  const MethodInfo *v73; // x5
  int32_t v74; // [xsp+8h] [xbp-48h] BYREF
  int32_t v75; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B19E45 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, baseData, combineLimitUpWarningDialog);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SetRarityDialogControl___c__DisplayClass151_0__SetLimitUpInfo_b__0__, v17, v18);
    sub_1BCA7E0(&SetRarityDialogControl___c__DisplayClass151_0_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_9342/*"NEED_QP"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_3693/*"COMBINE_HAVE_QP"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3843/*"CONFIRM_COMBINE_MSG"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_3725/*"COMBINE_SPEND_QP"*/, v31, v32);
    byte_4B19E45 = 1;
  }
  v33 = sub_1BCAA2C(SetRarityDialogControl___c__DisplayClass151_0_TypeInfo, baseData, combineLimitUpWarningDialog, msg);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_22;
  *(_QWORD *)(v33 + 16) = baseData;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 16), (int64_t)baseData, v36, v37, v38, v39, v40, v41);
  *(_QWORD *)(v33 + 24) = combineLimitUpWarningDialog;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)(v33 + 24),
    (int64_t)combineLimitUpWarningDialog,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  *(_QWORD *)(v33 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 32), (int64_t)this, v48, v49, v50, v51, v52, v53);
  SetRarityDialogControl__DisableConfirmInfo(this, v54);
  limitUpConfirmInfo = this->fields.limitUpConfirmInfo;
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0LL);
  limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v55);
  SetRarityDialogControl__DefaultBgSize(this, v56);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.limitUpTitleLb;
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)limitUpConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_22;
  UILabel__set_text(cancelBtnLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_22;
  UILabel__set_text(decideBtnLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmSpendQpTxtLb = this->fields.limitUpConfirmSpendQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3725/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !limitUpConfirmSpendQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmSpendQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmHaveQpTxtLb = this->fields.limitUpConfirmHaveQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !limitUpConfirmHaveQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmHaveQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmSpendQpLb = this->fields.limitUpConfirmSpendQpLb;
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  v75 = spendQp;
  v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v75);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v63, v64, 0LL);
  if ( !limitUpConfirmSpendQpLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmSpendQpLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmHaveQpLb = this->fields.limitUpConfirmHaveQpLb;
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  v74 = haveQp;
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v66, v67, 0LL);
  if ( !limitUpConfirmHaveQpLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmHaveQpLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmMsgLb = this->fields.limitUpConfirmMsgLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3843/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !limitUpConfirmMsgLb
    || (UILabel__set_text(limitUpConfirmMsgLb, (System_String_o *)limitUpConfirmInfo, 0LL),
        (limitUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)limitUpConfirmInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 0, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_22:
    sub_1BCAA3C(limitUpConfirmInfo, v35);
  }
  if ( combineRootComponent->fields.state == 5 )
  {
    v72 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v69, v70);
    System_Action___ctor(
      v72,
      (Il2CppObject *)v33,
      Method_SetRarityDialogControl___c__DisplayClass151_0__SetLimitUpInfo_b__0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v72, 0LL, 0LL, v73);
  }
}


void __fastcall SetRarityDialogControl__SetNpCombineInfo(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_Collections_Generic_List_long__o *selectUsrSvtIdList,
        SetLevelUpData_o *updata,
        bool isExceedMaxLv,
        bool isCombineSvt,
        bool isExceededMaterial,
        bool reConfirmation,
        const MethodInfo *method)
{
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
  UnityEngine_GameObject_o *npUpConfirmInfo; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v56; // x1
  UILabel_o *npUpTitleLb; // x21
  System_String_o **v58; // x8
  __int64 v59; // x1
  UILabel_o *cancelBtnLb; // x21
  UILabel_o *decideBtnLb; // x21
  __int64 v62; // x2
  __int64 v63; // x3
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v65; // x20
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  System_Action_o *v69; // x21
  const MethodInfo *v70; // x5
  SetRarityDialogControl_o *v71; // x0
  int32_t v72; // w1
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  const MethodInfo *v76; // [xsp+0h] [xbp-70h]

  if ( (byte_4B19E48 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, baseData, selectUsrSvtIdList);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SetRarityDialogControl_DefaultBgSize__, v19, v20);
    sub_1BCA7E0(&Method_SetRarityDialogControl__SetNpCombineInfo_b__154_0__, v21, v22);
    sub_1BCA7E0(&Method_SetRarityDialogControl__SetNpCombineInfo_b__154_1__, v23, v24);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3871/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_3869/*"CONFIRM_TITLE_TD_COMBINE"*/, v31, v32);
    byte_4B19E48 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  npUpConfirmInfo = this->fields.npUpConfirmInfo;
  if ( !npUpConfirmInfo )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0LL);
  this->fields.npBaseData = baseData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.npBaseData, (int64_t)baseData, v35, v36, v37, v38, v39, v40);
  this->fields.npSelectMtUsrSvtIdList = selectUsrSvtIdList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.npSelectMtUsrSvtIdList,
    (int64_t)selectUsrSvtIdList,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.npLvUpData = updata;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.npLvUpData, (int64_t)updata, v47, v48, v49, v50, v51, v52);
  this->fields.npIsExceedMaxLv = isExceedMaxLv;
  this->fields.npIsCombineSvt = isCombineSvt;
  this->fields.npIsExceededMaterial = isExceededMaterial;
  npUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !npUpConfirmInfo )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v53);
  SetRarityDialogControl__DefaultBgSize(this, v54);
  npUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.mPanelBg;
  if ( !npUpConfirmInfo )
    goto LABEL_27;
  UIWidget__set_height((UIWidget_o *)npUpConfirmInfo, 500, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, -8.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnInfo, -23.0, 0LL);
  npUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.npUpInfoComp;
  if ( !npUpConfirmInfo )
    goto LABEL_27;
  NpUpConfirmComponent__setNpUpConfirmInfo(
    (NpUpConfirmComponent_o *)npUpConfirmInfo,
    baseData,
    selectUsrSvtIdList,
    updata,
    isExceedMaxLv,
    isCombineSvt,
    isExceededMaterial,
    reConfirmation,
    v76);
  npUpTitleLb = this->fields.npUpTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56);
  v58 = (System_String_o **)(reConfirmation ? &StringLiteral_3871/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/ : &StringLiteral_3869/*"CONFIRM_TITLE_TD_COMBINE"*/);
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(*v58, 0LL);
  if ( !npUpTitleLb )
    goto LABEL_27;
  UILabel__set_text(npUpTitleLb, (System_String_o *)npUpConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v59);
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb
    || (UILabel__set_text(cancelBtnLb, (System_String_o *)npUpConfirmInfo, 0LL),
        decideBtnLb = this->fields.decideBtnLb,
        npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/,
                                                        0LL),
        !decideBtnLb)
    || (UILabel__set_text(decideBtnLb, (System_String_o *)npUpConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_27:
    sub_1BCAA3C(npUpConfirmInfo, v33);
  }
  if ( combineRootComponent->fields.state == 11 )
  {
    if ( (this->fields.npIsExceedMaxLv || this->fields.npIsCombineSvt || this->fields.npIsExceededMaterial)
      && !reConfirmation )
    {
      v65 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v62, v63);
      System_Action___ctor(v65, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__154_0__, 0LL);
      v69 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v66, v67, v68);
      System_Action___ctor(v69, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
      v71 = this;
      v72 = 0;
    }
    else
    {
      v65 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v62, v63);
      System_Action___ctor(v65, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__154_1__, 0LL);
      v69 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v73, v74, v75);
      System_Action___ctor(v69, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
      v72 = 8;
      v71 = this;
    }
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v71, v72, v65, 0LL, v69, v70);
  }
}


void __fastcall SetRarityDialogControl__SetSkillNpCombineInfo(
        SetRarityDialogControl_o *this,
        SetLevelUpData_array *upDataList,
        System_String_o *titleMsg,
        const MethodInfo *method)
{
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
  UnityEngine_GameObject_o *skillUpConfirmInfo; // x0
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  SetLevelUpData_o *v35; // x23
  signed int max_length; // w21
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct UILabel_o *upTargetSvtNameBef; // x22
  UnityEngine_GameObject_o *v50; // x21
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct UILabel_o *upTargetSvtNameAft; // x22
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct UILabel_o *upTargetSkillNameBef; // x22
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct UILabel_o *upTargetSkillNameAft; // x22
  SetLevelUpData_o *v72; // x8
  UnityEngine_GameObject_o *v73; // x22
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  SetLevelUpData_o *v80; // x8
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  SetLevelUpData_o *v93; // x8
  int64_t targetName; // x1
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  SetLevelUpData_o *v101; // x8
  int64_t v102; // x1
  UnityEngine_GameObject_c *klass; // x8
  __int64 v104; // x20
  UIExtrusionLabel_o *currentLvLb; // x20
  UIExtrusionLabel_o *resLvLb; // x20
  __int64 v107; // x1
  UILabel_o *upSpendQpTxtLb; // x20
  UILabel_o *upHaveQpTxtLb; // x20
  UILabel_o *upSpendQpLb; // x20
  System_String_o *v111; // x21
  Il2CppObject *v112; // x0
  UILabel_o *upHaveQpLb; // x20
  System_String_o *v114; // x21
  Il2CppObject *v115; // x0
  UILabel_o *upConfirmMsgLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  __int64 v119; // x2
  __int64 v120; // x3
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v122; // x20
  const MethodInfo *v123; // x5
  __int64 v124; // x0
  int32_t haveQp; // [xsp+8h] [xbp-48h] BYREF
  int32_t spendQp; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B19E46 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, upDataList, titleMsg);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__152_0__, v11, v12);
    sub_1BCA7E0(&string___TypeInfo, v13, v14);
    sub_1BCA7E0(&UILabel___TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_9342/*"NEED_QP"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3693/*"COMBINE_HAVE_QP"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3843/*"CONFIRM_COMBINE_MSG"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_25720/*"："*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3725/*"COMBINE_SPEND_QP"*/, v29, v30);
    byte_4B19E46 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)upDataList);
  skillUpConfirmInfo = this->fields.skillUpConfirmInfo;
  if ( !skillUpConfirmInfo
    || (UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0LL),
        (skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0LL),
        SetRarityDialogControl__MoveAlpha(this, v33),
        SetRarityDialogControl__DefaultBgSize(this, v34),
        !upDataList) )
  {
LABEL_72:
    sub_1BCAA3C(skillUpConfirmInfo, v31);
  }
  if ( !upDataList->max_length )
    goto LABEL_73;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTitleLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  v35 = upDataList->m_Items[0];
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, titleMsg, 0LL);
  if ( !v35 )
    goto LABEL_72;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetRubyLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, v35->fields.targetRuby, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetNameLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  max_length = upDataList->max_length;
  skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  if ( max_length >= 2 )
  {
    UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 0, 0LL);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetSvtNameBef;
    if ( !skillUpConfirmInfo )
      goto LABEL_72;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
    if ( !skillUpConfirmInfo )
      goto LABEL_72;
    skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
    if ( !skillUpConfirmInfo )
      goto LABEL_72;
    UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0LL);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upSpendQpTxtLb;
    if ( !skillUpConfirmInfo )
      goto LABEL_72;
    v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
    GameObjectExtensions__SetLocalPositionX(v41, 11.0, 0LL);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upHaveQpTxtLb;
    if ( !skillUpConfirmInfo )
      goto LABEL_72;
    v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
    GameObjectExtensions__SetLocalPositionX(v42, 11.0, 0LL);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1BCA888(UILabel___TypeInfo, 4LL);
    if ( !skillUpConfirmInfo )
      goto LABEL_72;
    upTargetSvtNameBef = this->fields.upTargetSvtNameBef;
    v50 = skillUpConfirmInfo;
    if ( upTargetSvtNameBef )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1BCA91C(
                                                         this->fields.upTargetSvtNameBef,
                                                         skillUpConfirmInfo->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_74;
    }
    if ( !LODWORD(v50[1].klass) )
      goto LABEL_73;
    v50[1].monitor = upTargetSvtNameBef;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v50[1].monitor,
      (int64_t)upTargetSvtNameBef,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    upTargetSvtNameAft = this->fields.upTargetSvtNameAft;
    if ( upTargetSvtNameAft )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1BCA91C(
                                                         this->fields.upTargetSvtNameAft,
                                                         v50->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_74;
    }
    if ( LODWORD(v50[1].klass) <= 1 )
      goto LABEL_73;
    *(_QWORD *)&v50[1].fields.m_CachedPtr = upTargetSvtNameAft;
    sub_1BCA784((PartyOrganizationUtility_o *)&v50[1].fields, (int64_t)upTargetSvtNameAft, v51, v52, v53, v54, v55, v56);
    upTargetSkillNameBef = this->fields.upTargetSkillNameBef;
    if ( upTargetSkillNameBef )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1BCA91C(
                                                         this->fields.upTargetSkillNameBef,
                                                         v50->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_74;
    }
    if ( LODWORD(v50[1].klass) <= 2 )
      goto LABEL_73;
    v50[2].klass = (UnityEngine_GameObject_c *)upTargetSkillNameBef;
    sub_1BCA784((PartyOrganizationUtility_o *)&v50[2], (int64_t)upTargetSkillNameBef, v58, v59, v60, v61, v62, v63);
    upTargetSkillNameAft = this->fields.upTargetSkillNameAft;
    if ( upTargetSkillNameAft )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1BCA91C(
                                                         this->fields.upTargetSkillNameAft,
                                                         v50->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
      {
LABEL_74:
        v124 = sub_1BCAA60(skillUpConfirmInfo);
        sub_1BCA908(v124, 0LL);
      }
    }
    if ( LODWORD(v50[1].klass) > 3 )
    {
      v50[2].monitor = upTargetSkillNameAft;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v50[2].monitor,
        (int64_t)upTargetSkillNameAft,
        v65,
        v66,
        v67,
        v68,
        v69,
        v70);
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1BCA888(string___TypeInfo, 4LL);
      if ( upDataList->max_length )
      {
        v72 = upDataList->m_Items[0];
        if ( !v72 )
          goto LABEL_72;
        v73 = skillUpConfirmInfo;
        skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Concat_62401220(
                                                           v72->fields.displayText,
                                                           (System_String_o *)StringLiteral_25720/*"："*/,
                                                           0LL);
        if ( !v73 )
          goto LABEL_72;
        if ( LODWORD(v73[1].klass) )
        {
          v73[1].monitor = skillUpConfirmInfo;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v73[1].monitor,
            (int64_t)skillUpConfirmInfo,
            v74,
            v75,
            v76,
            v77,
            v78,
            v79);
          if ( upDataList->max_length > 1 )
          {
            v80 = upDataList->m_Items[1];
            if ( !v80 )
              goto LABEL_72;
            skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Concat_62401220(
                                                               v80->fields.displayText,
                                                               (System_String_o *)StringLiteral_25720/*"："*/,
                                                               0LL);
            if ( LODWORD(v73[1].klass) > 1 )
            {
              *(_QWORD *)&v73[1].fields.m_CachedPtr = skillUpConfirmInfo;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&v73[1].fields,
                (int64_t)skillUpConfirmInfo,
                v81,
                v82,
                v83,
                v84,
                v85,
                v86);
              if ( upDataList->max_length )
              {
                v93 = upDataList->m_Items[0];
                if ( !v93 )
                  goto LABEL_72;
                if ( LODWORD(v73[1].klass) > 2 )
                {
                  targetName = (int64_t)v93->fields.targetName;
                  v73[2].klass = (UnityEngine_GameObject_c *)targetName;
                  sub_1BCA784((PartyOrganizationUtility_o *)&v73[2], targetName, v87, v88, v89, v90, v91, v92);
                  if ( upDataList->max_length > 1 )
                  {
                    v101 = upDataList->m_Items[1];
                    if ( !v101 )
                      goto LABEL_72;
                    if ( LODWORD(v73[1].klass) > 3 )
                    {
                      v102 = (int64_t)v101->fields.targetName;
                      v73[2].monitor = (void *)v102;
                      sub_1BCA784((PartyOrganizationUtility_o *)&v73[2].monitor, v102, v95, v96, v97, v98, v99, v100);
                      klass = v50[1].klass;
                      if ( (int)klass < 1 )
                        goto LABEL_57;
                      v104 = 0LL;
                      while ( (unsigned int)v104 < (unsigned int)klass && (unsigned int)v104 < LODWORD(v73[1].klass) )
                      {
                        skillUpConfirmInfo = (UnityEngine_GameObject_o *)*((_QWORD *)&v50[1].monitor + v104);
                        if ( !skillUpConfirmInfo )
                          goto LABEL_72;
                        UILabel__set_text(
                          (UILabel_o *)skillUpConfirmInfo,
                          *((System_String_o **)&v73[1].monitor + v104),
                          0LL);
                        klass = v50[1].klass;
                        if ( (int)++v104 >= (int)klass )
                          goto LABEL_57;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_73:
    sub_1BCAA44(skillUpConfirmInfo, v31);
  }
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetNameLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, v35->fields.targetName, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetSvtNameBef;
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v37, 0LL);
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 0, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upSpendQpTxtLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v38, -5.0, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upHaveQpTxtLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v39, -5.0, 0LL);
LABEL_57:
  currentLvLb = this->fields.currentLvLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v35 + 64, 0LL);
  if ( !currentLvLb )
    goto LABEL_72;
  UIExtrusionLabel__set_text(currentLvLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  resLvLb = this->fields.resLvLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v35 + 68, 0LL);
  if ( !resLvLb )
    goto LABEL_72;
  UIExtrusionLabel__set_text(resLvLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v107);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3725/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !upSpendQpTxtLb )
    goto LABEL_72;
  UILabel__set_text(upSpendQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !upHaveQpTxtLb )
    goto LABEL_72;
  UILabel__set_text(upHaveQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upSpendQpLb = this->fields.upSpendQpLb;
  v111 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  spendQp = v35->fields.spendQp;
  v112 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendQp);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v111, v112, 0LL);
  if ( !upSpendQpLb )
    goto LABEL_72;
  UILabel__set_text(upSpendQpLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upHaveQpLb = this->fields.upHaveQpLb;
  v114 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  haveQp = v35->fields.haveQp;
  v115 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveQp);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v114, v115, 0LL);
  if ( !upHaveQpLb )
    goto LABEL_72;
  UILabel__set_text(upHaveQpLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upConfirmMsgLb = this->fields.upConfirmMsgLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3843/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !upConfirmMsgLb )
    goto LABEL_72;
  UILabel__set_text(upConfirmMsgLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_72;
  UILabel__set_text(cancelBtnLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_72;
  UILabel__set_text(decideBtnLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_72;
  if ( combineRootComponent->fields.state == 10 )
  {
    v122 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v31, v119, v120);
    System_Action___ctor(
      v122,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__152_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v122, 0LL, 0LL, v123);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetSpecialAscension(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        bool confirm,
        bool warning1,
        bool warning2,
        const MethodInfo *method)
{
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
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  UnityEngine_GameObject_o *specialAscensionConfirmInfo; // x0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  System_String_o *v36; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x1
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Action_o *v45; // x20
  __int64 v46; // x2
  __int64 v47; // x3
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v49; // x21
  const MethodInfo *v50; // x5
  SetRarityDialogControl_o *v51; // x0
  int32_t v52; // w1

  if ( (byte_4B19E50 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, baseData, confirm);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SetRarityDialogControl__SetSpecialAscension_b__162_0__, v14, v15);
    sub_1BCA7E0(&Method_SetRarityDialogControl__SetSpecialAscension_b__162_1__, v16, v17);
    sub_1BCA7E0(&Method_SetRarityDialogControl__SetSpecialAscension_b__162_2__, v18, v19);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_12340/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_12344/*"SPECIAL_ASCENSION_WARNING1_TXT"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_12345/*"SPECIAL_ASCENSION_WARNING2_TXT"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v30, v31);
    byte_4B19E50 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  specialAscensionConfirmInfo = this->fields.specialAscensionConfirmInfo;
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 1, 0LL);
  specialAscensionConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v34);
  SetRarityDialogControl__DefaultBgSize(this, v35);
  this->fields.specialAscensionConfirm = confirm;
  this->fields.specialAscensionWarning1 = warning1;
  this->fields.specialAscensionWarning2 = warning2;
  if ( confirm )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12340/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/, 0LL);
    this->fields.specialAscensionConfirm = 0;
  }
  else if ( warning1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12344/*"SPECIAL_ASCENSION_WARNING1_TXT"*/, 0LL);
    this->fields.specialAscensionWarning1 = 0;
  }
  else if ( warning2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12345/*"SPECIAL_ASCENSION_WARNING2_TXT"*/, 0LL);
    this->fields.specialAscensionWarning2 = 0;
  }
  else
  {
    v36 = (System_String_o *)StringLiteral_1/*""*/;
  }
  specialAscensionConfirmInfo = this->fields.specialAscensionConfirmInfo;
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              specialAscensionConfirmInfo,
                                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___);
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  SpecialAscensionConfirmInfo__SetSpecialAscensionConfirmInfo(
    (SpecialAscensionConfirmInfo_o *)specialAscensionConfirmInfo,
    v36,
    v37,
    v38);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0LL);
  if ( !cancelBtnLb )
    goto LABEL_37;
  UILabel__set_text(cancelBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0LL);
  if ( !decideBtnLb
    || (UILabel__set_text(decideBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0LL),
        (specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (specialAscensionConfirmInfo = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)specialAscensionConfirmInfo,
                                        0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 0, 0LL),
        v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v42, v43, v44),
        System_Action___ctor(
          v45,
          (Il2CppObject *)this,
          Method_SetRarityDialogControl__SetSpecialAscension_b__162_0__,
          0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_37:
    sub_1BCAA3C(specialAscensionConfirmInfo, v32);
  }
  if ( combineRootComponent->fields.state == 7 )
  {
    if ( this->fields.specialAscensionConfirm )
    {
      if ( !this->fields.specialAscensionWarning1 && !this->fields.specialAscensionWarning2 )
        return;
    }
    else if ( !this->fields.specialAscensionWarning1 && !this->fields.specialAscensionWarning2 )
    {
      v49 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v46, v47);
      System_Action___ctor(
        v49,
        (Il2CppObject *)this,
        Method_SetRarityDialogControl__SetSpecialAscension_b__162_1__,
        0LL);
      v52 = 8;
      v51 = this;
      goto LABEL_35;
    }
    v49 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v46, v47);
    System_Action___ctor(v49, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__162_2__, 0LL);
    v51 = this;
    v52 = 0;
LABEL_35:
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v51, v52, v49, v45, 0LL, v50);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_Collections_Generic_Dictionary_long__bool__o *selectedList,
        System_String_o *title,
        int32_t spendQp,
        int32_t haveQp,
        bool isRare,
        System_String_o *limitWarningMsg,
        const MethodInfo *method)
{
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
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  UnityEngine_GameObject_o *allDispConfirmInfo; // x0
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x1
  __int64 v56; // x1
  UILabel_o *cancelBtnLb; // x26
  UILabel_o *decideBtnLb; // x26
  const MethodInfo *v59; // x1
  struct UIGrid_o *allSvtGrid; // x8
  float v61; // s9
  int32_t v62; // w26
  __int64 v63; // x1
  UnityEngine_Component_o *v64; // x0
  Il2CppObject *key; // x27
  char value; // w29
  UnityEngine_GameObject_o *svtFaceInfo; // x28
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v70; // x1
  Il2CppObject *Component_object; // x0
  __int64 v72; // x1
  float y; // s8
  int32_t Count; // w25
  struct UIGrid_o *v75; // x8
  int32_t maxPerLine; // w20
  int32_t v77; // w24
  int32_t v78; // w10
  float v79; // s1
  float z; // s2
  float v81; // s0
  __int64 v82; // x1
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v86; // x25
  Il2CppObject *v87; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v89; // x24
  Il2CppObject *v90; // x0
  UILabel_o *allRareMsgLb; // x20
  UILabel_o *allLimitRareLb; // x20
  UILabel_o *allRareConfirmMsgLb; // x20
  __int64 v94; // x2
  __int64 v95; // x3
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v97; // x20
  const MethodInfo *v98; // x5
  const MethodInfo *v99; // [xsp+0h] [xbp-E0h]
  int32_t v101; // [xsp+Ch] [xbp-D4h]
  int32_t v102; // [xsp+14h] [xbp-CCh] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v103; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v104; // [xsp+40h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19E4B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, baseData, selectedList);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__, v24, v25);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v26, v27);
    sub_1BCA7E0(&int_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__, v32, v33);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__157_0__, v36, v37);
    sub_1BCA7E0(&StringLiteral_9342/*"NEED_QP"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_3693/*"COMBINE_HAVE_QP"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_3843/*"CONFIRM_COMBINE_MSG"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_11085/*"RARE_MATERIAL_INFO_MSG"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_3725/*"COMBINE_SPEND_QP"*/, v50, v51);
    byte_4B19E4B = 1;
  }
  memset(&v104, 0, sizeof(v104));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v54);
  SetRarityDialogControl__DefaultBgSize(this, v55);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allTitleLb;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UILabel__set_text((UILabel_o *)allDispConfirmInfo, title, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_69;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_69;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v59);
  if ( !selectedList )
    goto LABEL_69;
  v101 = haveQp;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_3237B8C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allSvtGrid = this->fields.allSvtGrid;
  if ( !allSvtGrid )
    goto LABEL_69;
  v61 = allSvtGrid->fields.cellWidth * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v103,
    selectedList,
    (const MethodInfo_32382E0 *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v62 = 0;
  v104 = v103;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v104,
            (const MethodInfo_335C2F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v64 = (UnityEngine_Component_o *)this->fields.allSvtGrid;
    if ( !v64 )
      sub_1BCAA3C(0LL, v63);
    key = v104.fields._current.fields.key;
    value = (char)v104.fields._current.fields.value;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v64, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Object )
      sub_1BCAA3C(0LL, v70);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_object )
      sub_1BCAA3C(0LL, v72);
    MaterialSvtInfo__setMaterialSvtInfo_46145168(
      (MaterialSvtInfo_o *)Component_object,
      v62++,
      baseData,
      (int64_t)key,
      0,
      0,
      value != 0,
      0LL,
      v99);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v104,
    (const MethodInfo_335C414 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_3237B8C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_3237B8C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v75 = this->fields.allSvtGrid;
  if ( !v75 )
    goto LABEL_69;
  maxPerLine = v75->fields.maxPerLine;
  v77 = (int)allDispConfirmInfo;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this->fields.allSvtGrid,
                                                     0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  if ( v77 <= maxPerLine )
    v78 = Count;
  else
    v78 = maxPerLine;
  v79 = 70.0;
  if ( v77 <= maxPerLine )
    v79 = y;
  z = this->fields.center.fields.z;
  v81 = (float)(this->fields.center.fields.x - (float)(v61 * (float)(v78 - 1))) * 0.47;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v79 - 1),
    0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)allDispConfirmInfo,
                                                     0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  v105.fields.x = 0.47;
  v105.fields.y = 0.47;
  v105.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v105, 0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UIGrid__set_repositionNow((UIGrid_o *)allDispConfirmInfo, 1, 0LL);
  allSpendQpTxtLb = this->fields.allSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v82);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3725/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !allSpendQpTxtLb )
    goto LABEL_69;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !allHaveQpTxtLb )
    goto LABEL_69;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allSpendQpLb = this->fields.allSpendQpLb;
  v86 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  LODWORD(v103.fields._dictionary) = spendQp;
  v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v103);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v86, v87, 0LL);
  if ( !allSpendQpLb )
    goto LABEL_69;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpLb = this->fields.allHaveQpLb;
  v89 = LocalizationManager__Get((System_String_o *)StringLiteral_9342/*"NEED_QP"*/, 0LL);
  v102 = v101;
  v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v89, v90, 0LL);
  if ( !allHaveQpLb )
    goto LABEL_69;
  UILabel__set_text(allHaveQpLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allStatusUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 0, 0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allLimitUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 0, 0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allRareMsgLb;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 0, 0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allLimitRareLb;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 0, 0LL);
  if ( System_String__IsNullOrEmpty(limitWarningMsg, 0LL) )
  {
    if ( !isRare )
      goto LABEL_59;
    allRareMsgLb = this->fields.allRareMsgLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
    allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11085/*"RARE_MATERIAL_INFO_MSG"*/,
                                                       0LL);
    if ( !allRareMsgLb )
      goto LABEL_69;
    UILabel__set_text(allRareMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
    allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allRareMsgLb;
    if ( !allDispConfirmInfo )
      goto LABEL_69;
    goto LABEL_57;
  }
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allLimitUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UILabel__set_text((UILabel_o *)allDispConfirmInfo, limitWarningMsg, 0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allLimitUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
  if ( isRare )
  {
    allLimitRareLb = this->fields.allLimitRareLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
    allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11085/*"RARE_MATERIAL_INFO_MSG"*/,
                                                       0LL);
    if ( allLimitRareLb )
    {
      UILabel__set_text(allLimitRareLb, (System_String_o *)allDispConfirmInfo, 0LL);
      allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allLimitRareLb;
      if ( allDispConfirmInfo )
      {
LABEL_57:
        allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
        if ( !allDispConfirmInfo )
          goto LABEL_69;
        UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
        goto LABEL_59;
      }
    }
LABEL_69:
    sub_1BCAA3C(allDispConfirmInfo, v52);
  }
LABEL_59:
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3843/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !allRareConfirmMsgLb )
    goto LABEL_69;
  UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_69;
  if ( combineRootComponent->fields.state == 4 )
  {
    v97 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v52, v94, v95);
    System_Action___ctor(
      v97,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__157_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v97, 0LL, 0LL, v98);
  }
}


void __fastcall SetRarityDialogControl___SetAllDispConfirmCombine_b__149_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetAppendSkillCombineInfo_b__153_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, method);
  CombineRootComponent__RequestAppendSkillCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmCombine_b__147_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__155_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, method);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__155_1(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.lvExceedCtr) == 0LL )
    sub_1BCAA3C(this, method);
  LevelExceedControl__OnClickCheckLvExceed((LevelExceedControl_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__156_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, method);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmRarityInfo_b__145_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmSvtEqCombine_b__148_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, method);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetExceedMaterialInfo_b__146_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.svtCombineCtr) == 0LL )
    sub_1BCAA3C(this, method);
  ServantCombineControl__CheckRareSvt((ServantCombineControl_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetFriendshipExceedInfo_b__161_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, method);
  CombineRootComponent__RequestFriendshipExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetNpCombineInfo_b__154_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // [xsp+0h] [xbp-20h]

  SetRarityDialogControl__SetNpCombineInfo(
    this,
    this->fields.npBaseData,
    this->fields.npSelectMtUsrSvtIdList,
    this->fields.npLvUpData,
    this->fields.npIsExceedMaxLv,
    this->fields.npIsCombineSvt,
    this->fields.npIsExceededMaterial,
    1,
    v2);
}


void __fastcall SetRarityDialogControl___SetNpCombineInfo_b__154_1(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, method);
  CombineRootComponent__RequestTdCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetSkillNpCombineInfo_b__152_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, method);
  CombineRootComponent__RequestSkillCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__162_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8
  struct SpecialAscensionControl_o *specialAscensionCtr; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (specialAscensionCtr = combineRootComponent->fields.specialAscensionCtr) == 0LL )
    sub_1BCAA3C(this, method);
  if ( specialAscensionCtr->fields.pushExeButton )
    specialAscensionCtr->fields.pushExeButton = 0;
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__162_1(
        SetRarityDialogControl_o *this,
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
  __int64 v16; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  __int64 v18; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x22

  if ( (byte_4B19E58 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&CombineRootComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SetRarityDialogControl__SetSpecialAscension_b__162_3__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_12342/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B19E58 = 1;
  }
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, method);
  if ( CombineRootComponent__IsEnableSpecialAscension(0LL) )
  {
    combineRootComponent = this->fields.combineRootComponent;
    if ( combineRootComponent )
    {
      CombineRootComponent__RequestSpecialAscension(combineRootComponent, 0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(combineRootComponent, v16);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12342/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0LL);
  v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__162_3__, 0LL);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v20,
    v24,
    -1,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0LL,
    0.0,
    0LL);
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__162_2(
        SetRarityDialogControl_o *this,
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
  UserServantEntity_o *v16; // x1
  const MethodInfo *v17; // x5
  __int64 v18; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x22
  __int64 v25; // x0
  __int64 v26; // x1

  if ( (byte_4B19E59 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&CombineRootComponent_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SetRarityDialogControl__SetSpecialAscension_b__162_4__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_12342/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B19E59 = 1;
  }
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, method);
  if ( CombineRootComponent__IsEnableSpecialAscension(0LL) )
  {
    SetRarityDialogControl__SetSpecialAscension(
      this,
      v16,
      this->fields.specialAscensionConfirm,
      this->fields.specialAscensionWarning1,
      this->fields.specialAscensionWarning2,
      v17);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_12342/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0LL);
    v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__162_4__, 0LL);
    if ( !Instance )
      sub_1BCAA3C(v25, v26);
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v20,
      v24,
      -1,
      0,
      0,
      0,
      0,
      0,
      1,
      0,
      0LL,
      0.0,
      0LL);
  }
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__162_3(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8
  SetRarityDialogControl_o *v3; // x19

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent
    || (v3 = this,
        combineRootComponent->fields.specialAscensionCheckedTimeOver = 1,
        SetRarityDialogControl__OnClickCancel(this, method),
        (this = (SetRarityDialogControl_o *)v3->fields.combineRootComponent) == 0LL) )
  {
    sub_1BCAA3C(this, method);
  }
  CombineRootComponent__BackSpecialAscension((CombineRootComponent_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__162_4(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8
  SetRarityDialogControl_o *v3; // x19

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent
    || (v3 = this,
        combineRootComponent->fields.specialAscensionCheckedTimeOver = 1,
        SetRarityDialogControl__OnClickCancel(this, method),
        (this = (SetRarityDialogControl_o *)v3->fields.combineRootComponent) == 0LL) )
  {
    sub_1BCAA3C(this, method);
  }
  CombineRootComponent__BackSpecialAscension((CombineRootComponent_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetSvtEqLimitUpConfirmCombine_b__157_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BCAA3C(0LL, method);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19E5A & 1) == 0 )
  {
    sub_1BCA7E0(&SetRarityDialogControl___c_TypeInfo, v1, v2);
    byte_4B19E5A = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SetRarityDialogControl___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SetRarityDialogControl___c_TypeInfo->static_fields->__9 = (struct SetRarityDialogControl___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SetRarityDialogControl___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall SetRarityDialogControl___c___ctor(SetRarityDialogControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SetRarityDialogControl___c___OnClickDlgOk_b__169_0(
        SetRarityDialogControl___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall SetRarityDialogControl___c___SetLimitUpInfo_b__151_1(
        SetRarityDialogControl___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  return NpCombineControl__CheckConfirm_45739916(x, 0LL);
}


void __fastcall SetRarityDialogControl___c__DisplayClass151_0___ctor(
        SetRarityDialogControl___c__DisplayClass151_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SetRarityDialogControl___c__DisplayClass151_0___SetLimitUpInfo_b__0(
        SetRarityDialogControl___c__DisplayClass151_0_o *this,
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
  System_Collections_Generic_List_object__o *v31; // x20
  __int64 v32; // x1
  int64_t UserId; // x21
  int64_t Instance; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  __int64 v37; // x3
  __int64 v38; // x8
  int64_t v39; // x22
  unsigned __int64 v40; // x26
  int64_t v41; // x23
  __int128 v42; // q0
  __int64 v43; // x24
  __int64 v44; // x25
  struct UserServantEntity_o *baseData; // x8
  int v46; // w24
  __int128 v47; // q0
  struct UserServantEntity_o *v48; // x8
  __int128 v49; // q0
  int64_t v50; // x24
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  System_Predicate_object__o *v59; // x21
  Il2CppObject *v60; // x22
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 v68; // x2
  __int64 v69; // x3
  CombineLimitUpWarningDialog_ClickDelegate_o *_9__2; // x21
  CombineLimitUpWarningDialog_o *combineLimitUpWarningDialog; // x20
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  struct SetRarityDialogControl_o *_4__this; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v81; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16

  if ( (byte_4B19E5B & 1) == 0 )
  {
    sub_1BCA7E0(&CombineLimitUpWarningDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Predicate_UserServantEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_SetRarityDialogControl___c__SetLimitUpInfo_b__151_1__, v25, v26);
    sub_1BCA7E0(&Method_SetRarityDialogControl___c__DisplayClass151_0__SetLimitUpInfo_b__2__, v27, v28);
    sub_1BCA7E0(&SetRarityDialogControl___c_TypeInfo, v29, v30);
    byte_4B19E5B = 1;
  }
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v32);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_47;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_47;
  v38 = *(_QWORD *)(Instance + 24);
  v39 = Instance;
  if ( (int)v38 >= 1 )
  {
    v40 = 0LL;
    do
    {
      if ( v40 >= (unsigned int)v38 )
        sub_1BCAA44(Instance, v35);
      v41 = *(_QWORD *)(v39 + 32 + 8 * v40);
      if ( v41 )
      {
        v42 = *(_OWORD *)(v41 + 64);
        *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)(v41 + 48);
        *(_OWORD *)&v82.fields.fakeValue = v42;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35);
        v81 = v82;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v81, 0LL);
        if ( Instance == UserId )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v41, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v44 = *(_QWORD *)(v41 + 80);
            v43 = *(_QWORD *)(v41 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v35);
            *(_QWORD *)&v83.fields.currentCryptoKey = v44;
            *(_QWORD *)&v83.fields.fakeValue = v43;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v83, 0LL);
            baseData = this->fields.baseData;
            if ( !baseData )
              goto LABEL_47;
            v46 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(baseData->fields.svtId, 0LL);
            if ( v46 == (_DWORD)Instance )
            {
              v47 = *(_OWORD *)(v41 + 32);
              *(_OWORD *)&v82.fields.currentCryptoKey = *(_OWORD *)(v41 + 16);
              *(_OWORD *)&v82.fields.fakeValue = v47;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v35);
              v80 = v82;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v80, 0LL);
              v48 = this->fields.baseData;
              if ( !v48 )
                goto LABEL_47;
              v49 = *(_OWORD *)&v48->fields.id.fields.fakeValue;
              v50 = Instance;
              *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)&v48->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v79.fields.fakeValue = v49;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v79, 0LL);
              if ( v50 != Instance )
              {
                if ( !v31 )
                  goto LABEL_47;
                items = v31->fields._items;
                v56 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v31->fields._version;
                if ( !items )
                  goto LABEL_47;
                size = v31->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v31,
                    (Il2CppObject *)v41,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                }
                else
                {
                  v58 = &items->obj.klass + size;
                  v31->fields._size = size + 1;
                  v58[4] = (Il2CppClass *)v41;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v58 + 4), v41, v36, v37, v51, v52, v53, v54);
                }
              }
            }
          }
        }
      }
      LODWORD(v38) = *(_DWORD *)(v39 + 24);
    }
    while ( (__int64)++v40 < (int)v38 );
  }
  Instance = (int64_t)SetRarityDialogControl___c_TypeInfo;
  if ( !SetRarityDialogControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo, v35);
    Instance = (int64_t)SetRarityDialogControl___c_TypeInfo;
  }
  v59 = *(System_Predicate_object__o **)(*(_QWORD *)(Instance + 184) + 8LL);
  if ( !v59 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v35);
      Instance = (int64_t)SetRarityDialogControl___c_TypeInfo;
    }
    v60 = **(Il2CppObject ***)(Instance + 184);
    v59 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_UserServantEntity__TypeInfo, v35, v36, v37);
    System_Predicate_object____ctor(v59, v60, Method_SetRarityDialogControl___c__SetLimitUpInfo_b__151_1__, 0LL);
    static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
    static_fields->__9__151_1 = (struct System_Predicate_UserServantEntity__o *)v59;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__151_1, (int64_t)v59, v62, v63, v64, v65, v66, v67);
  }
  if ( !v31 )
    goto LABEL_47;
  Instance = (int64_t)System_Collections_Generic_List_object___Find(
                        v31,
                        (System_Predicate_T__o *)v59,
                        (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_UserServantEntity__Find__);
  if ( Instance )
  {
    _9__2 = this->fields.__9__2;
    combineLimitUpWarningDialog = this->fields.combineLimitUpWarningDialog;
    if ( !_9__2 )
    {
      _9__2 = (CombineLimitUpWarningDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                               CombineLimitUpWarningDialog_ClickDelegate_TypeInfo,
                                                               v35,
                                                               v68,
                                                               v69);
      CombineLimitUpWarningDialog_ClickDelegate___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_SetRarityDialogControl___c__DisplayClass151_0__SetLimitUpInfo_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v72, v73, v74, v75, v76, v77);
    }
    if ( combineLimitUpWarningDialog )
    {
      CombineLimitUpWarningDialog__Open(combineLimitUpWarningDialog, _9__2, 0LL);
      return;
    }
LABEL_47:
    sub_1BCAA3C(Instance, v35);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_47;
  Instance = (int64_t)_4__this->fields.combineRootComponent;
  if ( !Instance )
    goto LABEL_47;
  CombineRootComponent__RequestLimitUp((CombineRootComponent_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl___c__DisplayClass151_0___SetLimitUpInfo_b__2(
        SetRarityDialogControl___c__DisplayClass151_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct SetRarityDialogControl_o *_4__this; // x8

  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (this = (SetRarityDialogControl___c__DisplayClass151_0_o *)_4__this->fields.combineRootComponent) == 0LL )
    {
      sub_1BCAA3C(this, isDecide);
    }
    CombineRootComponent__RequestLimitUp((CombineRootComponent_o *)this, 0LL);
  }
}