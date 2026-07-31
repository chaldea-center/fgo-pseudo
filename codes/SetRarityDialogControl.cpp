void SetRarityDialogControl___ctor(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5932254 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5932254 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SetRarityDialogControl__Awake(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void SetRarityDialogControl__CheckExceedSvt(
        SetRarityDialogControl_o *this,
        System_Int64_array *selectedList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x21
  int64_t v6; // x20
  __int64 v7; // x1

  if ( (byte_5932253 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (SetRarityDialogControl_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5932253 = 1;
  }
  if ( selectedList )
  {
    max_length = selectedList->max_length;
    if ( (int)max_length >= 1 )
    {
      v5 = 0;
      do
      {
        if ( v5 >= (unsigned int)max_length )
          sub_21FFED4(this);
        v6 = selectedList->m_Items[v5];
        this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (SetRarityDialogControl_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)this,
                                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
          if ( this )
          {
            this = (SetRarityDialogControl_o *)DataMasterBase_object__object__long___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                 v6,
                                                 (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            if ( this )
              goto LABEL_10;
          }
        }
        sub_21FFECC(this, v7);
LABEL_10:
        if ( SLODWORD(this->fields.exceedConfirmSpendQpLb) > 0 )
          break;
        LODWORD(max_length) = selectedList->max_length;
        ++v5;
      }
      while ( (__int64)v5 < (int)max_length );
    }
  }
}


bool SetRarityDialogControl__CheckStatusUpInfo(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_Int64_array *selectUsrSvtIdList,
        System_String_o **labelMsg,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  SetRarityDialogControl_o *v11; // x20
  int32_t adjustHp; // w24
  int32_t adjustAtk; // w23
  int32_t v14; // w1
  _BOOL8 AdjustMax; // x0
  bool v16; // zf
  bool v17; // w25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v19; // x28
  int v20; // w27
  int v21; // w25
  int64_t v22; // x23
  UserServantEntity_o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  int32_t v26; // w20
  int32_t v27; // w23
  int v28; // w22
  bool IsAddParam1Max; // w0
  int32_t v30; // w20
  int v31; // w23
  bool IsAddParam2Max; // w0
  System_String_o **v33; // x8
  System_String_o *v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  System_String_o *v37; // x21
  BalanceConfig_c *v38; // x8
  Il2CppObject *v39; // x22
  Il2CppObject *v40; // x0
  System_String_o *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v50; // [xsp+10h] [xbp-90h]
  bool v51; // [xsp+14h] [xbp-8Ch]
  int v52; // [xsp+18h] [xbp-88h] BYREF
  int v53; // [xsp+1Ch] [xbp-84h] BYREF
  int32_t addParamMaxAdjust2[2]; // [xsp+20h] [xbp-80h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+28h] [xbp-78h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+30h] [xbp-70h] BYREF
  int32_t atkUp[2]; // [xsp+38h] [xbp-68h] BYREF

  v11 = this;
  if ( (byte_5932241 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_12849/*"STATUS_HP_OVER_DIALOG_MSG"*/);
    sub_21FFC50(&StringLiteral_12847/*"STATUS_ATK_OVER_DIALOG_MSG"*/);
    sub_21FFC50(&StringLiteral_12848/*"STATUS_HP_ATK_OVER_DIALOG_MSG"*/);
    sub_21FFC50(&StringLiteral_12850/*"STATUS_OVER_DIALOG_MSG"*/);
    this = (SetRarityDialogControl_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932241 = 1;
  }
  *(_QWORD *)maxAjustAtk = 0;
  *(_QWORD *)atkUp = 0;
  *(_QWORD *)addParamMaxAdjust2 = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  if ( !baseData )
LABEL_55:
    sub_21FFECC(this, baseData);
  *(_QWORD *)maxAjustAtk = 0;
  *(_QWORD *)atkUp = 0;
  adjustHp = baseData->fields.adjustHp;
  adjustAtk = baseData->fields.adjustAtk;
  *(_QWORD *)addParamMaxAdjust2 = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  v14 = (int)StringLiteral_1/*""*/;
  *labelMsg = (System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)labelMsg,
    v14,
    (System_String_o *)selectUsrSvtIdList,
    (System_String_o *)labelMsg,
    (int32_t)method,
    v5,
    v6,
    v7);
  AdjustMax = UserServantEntity__GetAdjustMax(
                baseData,
                &maxAjustAtk[1],
                maxAjustAtk,
                &secondMaxAdjustAtk[1],
                secondMaxAdjustAtk,
                &addParamMaxAdjust2[1],
                addParamMaxAdjust2,
                0);
  v16 = !v11->fields.isStatusUp || selectUsrSvtIdList == 0;
  v17 = !v16;
  if ( !v16 )
  {
    max_length = selectUsrSvtIdList->max_length;
    if ( (int)max_length >= 1 )
    {
      v50 = adjustAtk;
      v51 = v17;
      v19 = 0;
      v20 = 0;
      v21 = 0;
      do
      {
        if ( v19 >= (unsigned int)max_length )
          sub_21FFED4(AdjustMax);
        v22 = selectUsrSvtIdList->m_Items[v19];
        this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_55;
        this = (SetRarityDialogControl_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !this )
          goto LABEL_55;
        this = (SetRarityDialogControl_o *)DataMasterBase_object__object__long___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             v22,
                                             (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !this )
          goto LABEL_55;
        v23 = (UserServantEntity_o *)this;
        AdjustMax = UserServantEntity__IsStatusUp((UserServantEntity_o *)this, 0);
        if ( AdjustMax )
        {
          *(_QWORD *)atkUp = 0;
          UserServantEntity__getStatusUpInfo(v23, &atkUp[1], atkUp, 0);
          v20 += atkUp[1] & ~(atkUp[1] >> 31);
          v21 += atkUp[0] & ~(atkUp[0] >> 31);
        }
        LODWORD(max_length) = selectUsrSvtIdList->max_length;
        ++v19;
      }
      while ( (__int64)v19 < (int)max_length );
      if ( v20 < 1 )
      {
        v27 = v50;
        v28 = 0;
      }
      else
      {
        v26 = v20 + adjustHp;
        v27 = v50;
        if ( UserServantEntity__IsAdjustHpMax(baseData, 0) || (v28 = maxAjustAtk[1], maxAjustAtk[1] >= v26) )
        {
          if ( UserServantEntity__IsSecondAdjustHpMax(baseData, 0)
            || (v28 = secondMaxAdjustAtk[1], secondMaxAdjustAtk[1] >= v26) )
          {
            IsAddParam1Max = UserServantEntity__IsAddParam1Max(baseData, 0);
            if ( IsAddParam1Max || addParamMaxAdjust2[1] >= v26 )
              v28 = 0;
            else
              v28 = addParamMaxAdjust2[1];
          }
        }
      }
      if ( v21 < 1 )
      {
        v17 = v51;
        v31 = 0;
      }
      else
      {
        v30 = v21 + v27;
        v17 = v51;
        if ( UserServantEntity__IsAdjustAtkMax(baseData, 0) || (v31 = maxAjustAtk[0], maxAjustAtk[0] >= v30) )
        {
          if ( UserServantEntity__IsSecondAdjustAtkMax(baseData, 0)
            || (v31 = secondMaxAdjustAtk[0], secondMaxAdjustAtk[0] >= v30) )
          {
            IsAddParam2Max = UserServantEntity__IsAddParam2Max(baseData, 0);
            if ( IsAddParam2Max || addParamMaxAdjust2[0] >= v30 )
              v31 = 0;
            else
              v31 = addParamMaxAdjust2[0];
          }
        }
      }
      if ( v28 >= 1 && v28 == v31 )
      {
        v33 = (System_String_o **)&StringLiteral_12850/*"STATUS_OVER_DIALOG_MSG"*/;
LABEL_41:
        v34 = *v33;
        if ( *v33 )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
          v37 = LocalizationManager__Get(v34, 0);
          v38 = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v35, v36);
            v38 = BalanceConfig_TypeInfo;
          }
          v53 = v38->static_fields->StatusUpAdjustHp * v28;
          v39 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v53);
          v52 = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk * v31;
          v40 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v52);
          v41 = System_String__Format_75484576(v37, v39, v40, 0);
          *labelMsg = v41;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)labelMsg, (int32_t)v41, v42, v43, v44, v45, v46, v47);
        }
        return v17;
      }
      v33 = (System_String_o **)&StringLiteral_12849/*"STATUS_HP_OVER_DIALOG_MSG"*/;
      if ( v31 > 0 && v28 > 0 )
        v33 = (System_String_o **)&StringLiteral_12848/*"STATUS_HP_ATK_OVER_DIALOG_MSG"*/;
      if ( v28 > 0 )
        goto LABEL_41;
      v33 = (System_String_o **)&StringLiteral_12847/*"STATUS_ATK_OVER_DIALOG_MSG"*/;
      if ( v31 >= 1 )
        goto LABEL_41;
    }
  }
  return v17;
}


void SetRarityDialogControl__ClearDisplay(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  SetRarityDialogControl__DisableConfirmInfo(this, method);
  SetRarityDialogControl__RemoveAllChild(this, v3);
}


void SetRarityDialogControl__Close(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_593224E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl_EndCloseDlg__);
    sub_21FFC50(&StringLiteral_5488/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/);
    byte_593224E = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SetRarityDialogControl_EndCloseDlg__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v3, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__RemoveBackBtn_51910900(transform, (System_String_o *)StringLiteral_5488/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0);
}


void SetRarityDialogControl__DefaultBgSize(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *decideBtnLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v5; // x0

  decideBtnLb = (UnityEngine_Component_o *)this->fields.decideBtnLb;
  if ( !decideBtnLb )
    goto LABEL_10;
  decideBtnLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(decideBtnLb, 0);
  if ( !decideBtnLb )
    goto LABEL_10;
  decideBtnLb = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)decideBtnLb, 0);
  if ( !decideBtnLb )
    goto LABEL_10;
  decideBtnLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(decideBtnLb, 0);
  if ( !decideBtnLb
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)decideBtnLb, 1, 0),
        (decideBtnLb = (UnityEngine_Component_o *)this->fields.cancelBtnLb) == 0)
    || (decideBtnLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(decideBtnLb, 0)) == 0
    || (decideBtnLb = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)decideBtnLb,
                                                   0)) == 0
    || (gameObject = UnityEngine_Component__get_gameObject(decideBtnLb, 0),
        GameObjectExtensions__SetLocalPositionX(gameObject, -157.0, 0),
        (decideBtnLb = (UnityEngine_Component_o *)this->fields.mPanelBg) == 0) )
  {
LABEL_10:
    sub_21FFECC(decideBtnLb, method);
  }
  UIWidget__set_height((UIWidget_o *)decideBtnLb, 480, 0);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(v5, -20.0, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnInfo, 0.0, 0);
}


void SetRarityDialogControl__DisableConfirmInfo(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rariryConfirmInfo; // x0

  rariryConfirmInfo = this->fields.rariryConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0);
  rariryConfirmInfo = this->fields.normalConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0);
  rariryConfirmInfo = this->fields.skillUpConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0);
  rariryConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0);
  rariryConfirmInfo = this->fields.npUpConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0);
  rariryConfirmInfo = this->fields.lvExceedConfirmSimpleInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0);
  rariryConfirmInfo = this->fields.lvExceedConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0);
  rariryConfirmInfo = this->fields.exceedConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0);
  rariryConfirmInfo = this->fields.limitUpConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0);
  rariryConfirmInfo = this->fields.costumeConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0);
  rariryConfirmInfo = this->fields.costumeEventItemConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0);
  rariryConfirmInfo = this->fields.costumeEventItemOrNeedItemConfirmInfo;
  if ( !rariryConfirmInfo
    || (UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0),
        (rariryConfirmInfo = this->fields.friendshipExceedConfirmInfo) == 0)
    || (UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0),
        (rariryConfirmInfo = this->fields.specialAscensionConfirmInfo) == 0)
    || (UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0),
        (rariryConfirmInfo = this->fields.appendSkillConfirmInfo) == 0) )
  {
LABEL_17:
    sub_21FFECC(rariryConfirmInfo, method);
  }
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0);
}


void SetRarityDialogControl__EndCloseDlg(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct System_Action_o *onClickDlgCloseCallBack; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  SetRarityDialogControl__DisableConfirmInfo(this, method);
  SetRarityDialogControl__RemoveAllChild(this, v3);
  onClickDlgCloseCallBack = this->fields.onClickDlgCloseCallBack;
  this->fields.onClickDlgCloseCallBack = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onClickDlgCloseCallBack, 0, v5, v6, v7, v8, v9, v10);
  if ( onClickDlgCloseCallBack )
    ((void (__fastcall *)(intptr_t, intptr_t))onClickDlgCloseCallBack->fields.invoke_impl)(
      onClickDlgCloseCallBack->fields.method_code,
      onClickDlgCloseCallBack->fields.method);
}


void SetRarityDialogControl__EndOpen(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  SetRarityDialogControl_o *v2; // x19
  struct CombineRootComponent_o *combineRootComponent; // x8
  UnityEngine_Transform_o *transform; // x0

  v2 = this;
  if ( (byte_5932250 & 1) == 0 )
  {
    this = (SetRarityDialogControl_o *)sub_21FFC50(&StringLiteral_5488/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/);
    byte_5932250 = 1;
  }
  combineRootComponent = v2->fields.combineRootComponent;
  v2->fields.isButtonEnable = 1;
  if ( !combineRootComponent )
    sub_21FFECC(this, method);
  combineRootComponent->fields._IsExeButtonProcessing_k__BackingField = 0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_5488/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0);
}


void SetRarityDialogControl__OnClickCancel(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  struct System_Action_o *onClickDlgCancelCallBack; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5932252 & 1) == 0 )
  {
    sub_21FFC50(&Method_SetRarityDialogControl_OnClickCancel__);
    byte_5932252 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_SetRarityDialogControl_OnClickCancel__;
    if ( (*((_BYTE *)Method_SetRarityDialogControl_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SetRarityDialogControl_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    SetRarityDialogControl__Close(this, v5);
    onClickDlgCancelCallBack = this->fields.onClickDlgCancelCallBack;
    this->fields.onClickDlgOkCallBack = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onClickDlgOkCallBack, 0, v7, v8, v9, v10, v11, v12);
    this->fields.onClickDlgCancelCallBack = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onClickDlgCancelCallBack,
      0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    if ( onClickDlgCancelCallBack )
      ((void (__fastcall *)(intptr_t, intptr_t))onClickDlgCancelCallBack->fields.invoke_impl)(
        onClickDlgCancelCallBack->fields.method_code,
        onClickDlgCancelCallBack->fields.method);
  }
}


void SetRarityDialogControl__OnClickDlgOk(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  CombineRootComponent_o *Instance; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  CombineRootComponent_c *v14; // x1
  __int64 naturalAligment; // x9
  __int64 v16; // x9
  __int64 v17; // x2
  CommonUI_o *v18; // x20
  SetRarityDialogControl___c_c *v19; // x8
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__163_0; // x21
  Il2CppObject *v22; // x22
  struct SetRarityDialogControl___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Action_o *onClickDlgOkCallBack; // x20
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  SetRarityDialogControl_o *v37; // x0
  const MethodInfo *v38; // x1

  if ( (byte_5932251 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&CombineRootComponent_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl_OnClickDlgOk__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SetRarityDialogControl___c__OnClickDlgOk_b__163_0__);
    sub_21FFC50(&SetRarityDialogControl___c_TypeInfo);
    byte_5932251 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_SetRarityDialogControl_OnClickDlgOk__;
    if ( (*((_BYTE *)Method_SetRarityDialogControl_OnClickDlgOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SetRarityDialogControl_OnClickDlgOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickDlgOkSeKind, 0, 0);
    SetRarityDialogControl__Close(this, v5);
    Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = (CombineRootComponent_o *)Instance->fields.myFSM;
    if ( !Instance )
      goto LABEL_26;
    v14 = CombineRootComponent_TypeInfo;
    naturalAligment = CombineRootComponent_TypeInfo->_2.naturalAligment;
    if ( Instance->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] == CombineRootComponent_TypeInfo )
    {
      if ( Instance->fields.combineTutorialProgress != 7 )
      {
LABEL_23:
        onClickDlgOkCallBack = this->fields.onClickDlgOkCallBack;
        this->fields.onClickDlgOkCallBack = 0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.onClickDlgOkCallBack,
          0,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        this->fields.onClickDlgCancelCallBack = 0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.onClickDlgCancelCallBack,
          0,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        if ( onClickDlgOkCallBack )
        {
          ((void (__fastcall *)(intptr_t, intptr_t))onClickDlgOkCallBack->fields.invoke_impl)(
            onClickDlgOkCallBack->fields.method_code,
            onClickDlgOkCallBack->fields.method);
          return;
        }
LABEL_26:
        sub_21FFECC(Instance, v7);
      }
      Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_26;
      Instance = (CombineRootComponent_o *)Instance->fields.myFSM;
      if ( !Instance )
        goto LABEL_26;
      v14 = CombineRootComponent_TypeInfo;
      v16 = CombineRootComponent_TypeInfo->_2.naturalAligment;
      if ( Instance->klass->_2.naturalAligment >= (unsigned int)v16
        && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v16 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__SetTutorialProgress(Instance, 8, 0);
        Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v18 = (CommonUI_o *)Instance;
        v19 = SetRarityDialogControl___c_TypeInfo;
        if ( !*(&SetRarityDialogControl___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo, v7, v17);
          v19 = SetRarityDialogControl___c_TypeInfo;
        }
        static_fields = v19->static_fields;
        _9__163_0 = static_fields->__9__163_0;
        if ( !_9__163_0 )
        {
          if ( !*(&v19->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v19, v7, v17);
            static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
          }
          v22 = (Il2CppObject *)static_fields->__9;
          _9__163_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(_9__163_0, v22, Method_SetRarityDialogControl___c__OnClickDlgOk_b__163_0__, 0);
          v23 = SetRarityDialogControl___c_TypeInfo->static_fields;
          v23->__9__163_0 = _9__163_0;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v23->__9__163_0,
            (int32_t)_9__163_0,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
        }
        if ( !v18 )
          goto LABEL_26;
        CommonUI__CloseTutorialNotificationDialogArrow_37315056(v18, _9__163_0, 0);
        goto LABEL_23;
      }
    }
    v37 = (SetRarityDialogControl_o *)sub_220024C(Instance, v14, v8, v9);
    SetRarityDialogControl__OnClickCancel(v37, v38);
  }
}


void SetRarityDialogControl__Open(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_593224F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl_EndOpen__);
    byte_593224F = 1;
  }
  if ( (this->fields.baseState & 0xFFFFFFFE) == 2 )
    BaseDialog__Init((BaseDialog_o *)this, 0);
  v3 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v4 = (System_Action_o *)sub_21FFEBC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SetRarityDialogControl_EndOpen__, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v4, 0, 0);
}


void SetRarityDialogControl__RemoveAllChild(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UIGrid_o *raritySvtGrid; // x0

  raritySvtGrid = this->fields.raritySvtGrid;
  if ( !raritySvtGrid )
    goto LABEL_8;
  UIGrid__RemoveAllChild(raritySvtGrid, 0);
  raritySvtGrid = this->fields.allSvtGrid;
  if ( !raritySvtGrid )
    goto LABEL_8;
  UIGrid__RemoveAllChild(raritySvtGrid, 0);
  raritySvtGrid = this->fields.exceedConfirmSvtGrid;
  if ( !raritySvtGrid
    || (UIGrid__RemoveAllChild(raritySvtGrid, 0), (raritySvtGrid = this->fields.materialSvtGrid) == 0)
    || (UIGrid__RemoveAllChild(raritySvtGrid, 0), (raritySvtGrid = this->fields.lvExceedConsumeItemGrid) == 0)
    || (UIGrid__RemoveAllChild(raritySvtGrid, 0), (raritySvtGrid = (UIGrid_o *)this->fields.npUpInfoComp) == 0) )
  {
LABEL_8:
    sub_21FFECC(raritySvtGrid, method);
  }
  NpUpConfirmComponent__RemoveAllChild((NpUpConfirmComponent_o *)raritySvtGrid, method);
}


// local variable allocation has failed, the output may be wrong!
void SetRarityDialogControl__SetAllDispConfirmCombine(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_Int64_array *list,
        int32_t spendQp,
        int64_t haveQp,
        System_Int64_array *selectedList,
        System_String_o *statusLimitMessage,
        bool isExceededMaterial,
        const MethodInfo *method)
{
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  void *allDispConfirmInfo; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  UILabel_o *allTitleLb; // x26
  UILabel_o *cancelBtnLb; // x26
  UILabel_o *decideBtnLb; // x26
  const MethodInfo *v26; // x1
  il2cpp_array_size_t max_length; // x27
  float v28; // s8
  unsigned __int64 v29; // x26
  UnityEngine_GameObject_o *svtFaceInfo; // x27
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v32; // x7
  float y; // s9
  int v34; // w20
  int v35; // w8
  float z; // s2
  float v37; // s1 OVERLAPPED
  float v38; // s0
  __int64 v39; // x1
  __int64 v40; // x2
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v44; // x25
  Il2CppObject *v45; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v47; // x24
  Il2CppObject *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  UILabel_o *allRareMsgLb; // x21
  int v52; // w8
  __int64 *v53; // x8
  __int64 v54; // x1
  __int64 v55; // x2
  UILabel_o *allRareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v58; // x20
  const MethodInfo *v59; // x5
  int64_t v60; // [xsp+0h] [xbp-80h] BYREF
  int32_t v61; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5932240 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__143_0__);
    sub_21FFC50(&StringLiteral_9609/*"NEED_QP"*/);
    sub_21FFC50(&StringLiteral_3720/*"COMBINE_HAVE_QP"*/);
    sub_21FFC50(&StringLiteral_3882/*"CONFIRM_COMBINE_MSG"*/);
    sub_21FFC50(&StringLiteral_3719/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_11414/*"RARE_MATERIAL_INFO_MSG"*/);
    sub_21FFC50(&StringLiteral_3754/*"COMBINE_SPEND_QP"*/);
    sub_21FFC50(&StringLiteral_3914/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_5932240 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  SetRarityDialogControl__RemoveAllChild(this, v16);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0);
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0);
  SetRarityDialogControl__Open(this, v19);
  SetRarityDialogControl__DefaultBgSize(this, v20);
  allTitleLb = this->fields.allTitleLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3914/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0);
  if ( !allTitleLb )
    goto LABEL_58;
  UILabel__set_text(allTitleLb, (System_String_o *)allDispConfirmInfo, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_58;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_58;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0);
  SetRarityDialogControl__SetCenter(this, v26);
  if ( !selectedList )
    goto LABEL_58;
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_58;
  LODWORD(max_length) = selectedList->max_length;
  v28 = *((float *)allDispConfirmInfo + 12);
  if ( (int)max_length >= 1 )
  {
    v29 = 0;
    do
    {
      allDispConfirmInfo = this->fields.allSvtGrid;
      if ( !allDispConfirmInfo )
        goto LABEL_58;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0);
      allDispConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
      if ( !allDispConfirmInfo )
        goto LABEL_58;
      allDispConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)allDispConfirmInfo,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v29 >= LODWORD(selectedList->max_length) )
        sub_21FFED4(allDispConfirmInfo);
      if ( !allDispConfirmInfo )
        goto LABEL_58;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)allDispConfirmInfo,
        v29,
        baseData,
        selectedList->m_Items[v29],
        0,
        0,
        0,
        v32);
      max_length = selectedList->max_length;
      ++v29;
    }
    while ( (__int64)v29 < (int)max_length );
    allDispConfirmInfo = this->fields.allSvtGrid;
    if ( !allDispConfirmInfo )
      goto LABEL_58;
  }
  y = this->fields.center.fields.y;
  v34 = *((_DWORD *)allDispConfirmInfo + 11);
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_58;
  if ( v34 >= (int)max_length )
    v35 = max_length;
  else
    v35 = v34;
  v37 = 70.0;
  if ( v34 >= (int)max_length )
    v37 = y;
  v38 = (float)(this->fields.center.fields.x - (float)((float)(v28 * 0.5) * (float)(v35 - 1))) * 0.47;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v37 - 1),
    0);
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_58;
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_58;
  v62.fields.x = 0.47;
  v62.fields.y = 0.47;
  v62.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v62, 0);
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_58;
  UIGrid__set_repositionNow((UIGrid_o *)allDispConfirmInfo, 1, 0);
  allSpendQpTxtLb = this->fields.allSpendQpTxtLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39, v40);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMBINE_SPEND_QP"*/, 0);
  if ( !allSpendQpTxtLb )
    goto LABEL_58;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3720/*"COMBINE_HAVE_QP"*/, 0);
  if ( !allHaveQpTxtLb )
    goto LABEL_58;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0);
  allSpendQpLb = this->fields.allSpendQpLb;
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  v61 = spendQp;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v61);
  allDispConfirmInfo = System_String__Format(v44, v45, 0);
  if ( !allSpendQpLb )
    goto LABEL_58;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0);
  allHaveQpLb = this->fields.allHaveQpLb;
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  v60 = haveQp;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v60);
  allDispConfirmInfo = System_String__Format(v47, v48, 0);
  if ( !allHaveQpLb )
    goto LABEL_58;
  UILabel__set_text(allHaveQpLb, (System_String_o *)allDispConfirmInfo, 0);
  allDispConfirmInfo = this->fields.allStatusUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_58;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 0, 0);
  allDispConfirmInfo = this->fields.allLimitUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_58;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 0, 0);
  allDispConfirmInfo = this->fields.allLimitRareLb;
  if ( !allDispConfirmInfo )
    goto LABEL_58;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 0, 0);
  WrapControlText__textAdjust(this->fields.allStatusUpInfoLb, statusLimitMessage, 22, 0, 0);
  allDispConfirmInfo = this->fields.allStatusUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_58;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0);
  allRareMsgLb = this->fields.allRareMsgLb;
  v52 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( isExceededMaterial )
  {
    if ( !v52 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49, v50);
    v53 = &StringLiteral_3719/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
  }
  else
  {
    if ( !v52 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49, v50);
    v53 = &StringLiteral_11414/*"RARE_MATERIAL_INFO_MSG"*/;
  }
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)*v53, 0);
  if ( !allRareMsgLb )
    goto LABEL_58;
  UILabel__set_text(allRareMsgLb, (System_String_o *)allDispConfirmInfo, 0);
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54, v55);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3882/*"CONFIRM_COMBINE_MSG"*/, 0);
  if ( !allRareConfirmMsgLb
    || (UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_58:
    sub_21FFECC(allDispConfirmInfo, v17);
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v58 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v58,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__143_0__,
      0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v58, 0, 0, v59);
  }
}


// local variable allocation has failed, the output may be wrong!
void SetRarityDialogControl__SetAppendSkillCombineInfo(
        SetRarityDialogControl_o *this,
        SetLevelUpData_o *updata,
        System_String_o *titleMsg,
        bool isOpen,
        const MethodInfo *method)
{
  __int64 v9; // x20
  UnityEngine_GameObject_o *appendSkillConfirmInfo; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *ComponentInChildren_object; // x22
  UIExtrusionLabel_o *appendSkillCurrentLvLabel; // x22
  UIExtrusionLabel_o *appendSkillResultLvLabel; // x22
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  UILabel_o *v32; // x22
  UILabel_o *v33; // x22
  UILabel_o *v34; // x22
  System_String_o *v35; // x23
  Il2CppObject *v36; // x0
  UILabel_o *v37; // x22
  System_String_o *v38; // x23
  Il2CppObject *v39; // x0
  UILabel_o *appendSkillConfirmLabel; // x21
  System_String_o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  Il2CppObject *Component_object; // x23
  UnityEngine_Transform_o *transform; // x0
  unsigned __int64 v46; // d0 OVERLAPPED
  float v47; // s2
  int v48; // s1
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  UILabel_o *appendSkillSpendTxtLabel; // x22
  UILabel_o *appendSkillHaveTxtLabel; // x22
  UILabel_o *appendSkillSpendLabel; // x22
  System_String_o *v56; // x23
  Il2CppObject *v57; // x0
  UILabel_o *appendSkillHaveLabel; // x22
  System_String_o *v59; // x23
  Il2CppObject *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  UILabel_o *cancelBtnLb; // x21
  UILabel_o *decideBtnLb; // x21
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v66; // x21
  const MethodInfo *v67; // x5
  UnityEngine_Bounds_o v68; // [xsp+8h] [xbp-68h] BYREF
  int32_t haveSvtCoin; // [xsp+2Ch] [xbp-44h] BYREF

  if ( (byte_5932244 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl___c__DisplayClass147_0__SetAppendSkillCombineInfo_b__0__);
    sub_21FFC50(&SetRarityDialogControl___c__DisplayClass147_0_TypeInfo);
    sub_21FFC50(&StringLiteral_9609/*"NEED_QP"*/);
    sub_21FFC50(&StringLiteral_3720/*"COMBINE_HAVE_QP"*/);
    sub_21FFC50(&StringLiteral_2101/*"APPEND_SKILL_OPEN_CONFIRM"*/);
    sub_21FFC50(&StringLiteral_2104/*"APPEND_SKILL_OPEN_SPEND_COIN"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_2102/*"APPEND_SKILL_OPEN_HAVE_COIN"*/);
    sub_21FFC50(&StringLiteral_3754/*"COMBINE_SPEND_QP"*/);
    sub_21FFC50(&StringLiteral_2070/*"APPEND_SKILL_COMBINE_CONFIRM"*/);
    byte_5932244 = 1;
  }
  v9 = sub_21FFEBC(SetRarityDialogControl___c__DisplayClass147_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_60;
  *(_QWORD *)(v9 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_BYTE *)(v9 + 24) = isOpen;
  SetRarityDialogControl__DisableConfirmInfo(this, v18);
  SetRarityDialogControl__RemoveAllChild(this, v19);
  appendSkillConfirmInfo = this->fields.appendSkillConfirmInfo;
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, 1, 0);
  appendSkillConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, 1, 0);
  SetRarityDialogControl__Open(this, v20);
  SetRarityDialogControl__DefaultBgSize(this, v21);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillTitleLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  UILabel__set_text((UILabel_o *)appendSkillConfirmInfo, titleMsg, 0);
  appendSkillConfirmInfo = this->fields.appendSkillIconInfo;
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, *(_BYTE *)(v9 + 24), 0);
  appendSkillConfirmInfo = this->fields.appendSkillLvUpInfo;
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, *(_BYTE *)(v9 + 24) == 0, 0);
  if ( *(_BYTE *)(v9 + 24) )
  {
    if ( updata )
    {
      appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillIconComp;
      if ( appendSkillConfirmInfo )
      {
        SkillIconComponent__Set_48036300(
          (SkillIconComponent_o *)appendSkillConfirmInfo,
          updata->fields.currentId,
          updata->fields.nextLv,
          0);
        appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillIconTitleLabel;
        if ( appendSkillConfirmInfo )
        {
          UILabel__set_text((UILabel_o *)appendSkillConfirmInfo, updata->fields.targetName, 0);
          appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillIconMessageLabel;
          if ( appendSkillConfirmInfo )
          {
            UILabel__set_text((UILabel_o *)appendSkillConfirmInfo, updata->fields.targetDetail, 0);
            appendSkillConfirmInfo = this->fields.appendSkillIconInfo;
            if ( appendSkillConfirmInfo )
            {
              ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                             appendSkillConfirmInfo,
                                             (const MethodInfo_3883C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
              appendSkillConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                     (UnityEngine_Object_o *)ComponentInChildren_object,
                                                                     0,
                                                                     0);
              if ( ((unsigned __int8)appendSkillConfirmInfo & 1) != 0 )
              {
                if ( !ComponentInChildren_object )
                  goto LABEL_60;
                UIScrollView__ResetPosition((UIScrollView_o *)ComponentInChildren_object, 0);
                UIScrollView__UpdateScrollbars((UIScrollView_o *)ComponentInChildren_object, 0);
              }
              else if ( !ComponentInChildren_object )
              {
                goto LABEL_60;
              }
              appendSkillConfirmInfo = UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)ComponentInChildren_object,
                                         0);
              if ( appendSkillConfirmInfo )
              {
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     appendSkillConfirmInfo,
                                     (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42, v43);
                if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
                {
                  appendSkillConfirmInfo = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)ComponentInChildren_object,
                                             0);
                  if ( !appendSkillConfirmInfo )
                    goto LABEL_60;
                  Component_object = UnityEngine_GameObject__AddComponent_object_(
                                       appendSkillConfirmInfo,
                                       (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
                }
                transform = UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)ComponentInChildren_object,
                              0);
                NGUIMath__CalculateAbsoluteWidgetBounds(&v68, transform, 0);
                appendSkillConfirmInfo = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_o *(__fastcall *)(UnityEngine_Bounds_o *__return_ptr, Il2CppObject *, const MethodInfo *))ComponentInChildren_object->klass->vtable[4].methodPtr)(
                                                                       &v68,
                                                                       ComponentInChildren_object,
                                                                       ComponentInChildren_object->klass->vtable[4].method);
                if ( Component_object )
                {
                  UnityEngine_BoxCollider__set_center(
                    (UnityEngine_BoxCollider_o *)Component_object,
                    v68.fields.m_Center,
                    0);
                  ((void (__fastcall *)(UnityEngine_Bounds_o *__return_ptr, Il2CppObject *, const MethodInfo *))ComponentInChildren_object->klass->vtable[4].methodPtr)(
                    &v68,
                    ComponentInChildren_object,
                    ComponentInChildren_object->klass->vtable[4].method);
                  v46 = vadd_f32(
                          *(float32x2_t *)&v68.fields.m_Extents.fields.x,
                          *(float32x2_t *)&v68.fields.m_Extents.fields.x).n64_u64[0];
                  v47 = v68.fields.m_Extents.fields.z + v68.fields.m_Extents.fields.z;
                  v48 = HIDWORD(v46);
                  UnityEngine_BoxCollider__set_size(
                    (UnityEngine_BoxCollider_o *)Component_object,
                    *(UnityEngine_Vector3_o *)&v46,
                    0);
                  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillSpendTxtLabel;
                  if ( appendSkillConfirmInfo )
                  {
                    v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0);
                    GameObjectExtensions__SetLocalPositionX(v49, 100.0, 0);
                    appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillHaveTxtLabel;
                    if ( appendSkillConfirmInfo )
                    {
                      v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0);
                      GameObjectExtensions__SetLocalPositionX(v50, 100.0, 0);
                      appendSkillSpendTxtLabel = this->fields.appendSkillSpendTxtLabel;
                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51, v52);
                      appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_2104/*"APPEND_SKILL_OPEN_SPEND_COIN"*/,
                                                                             0);
                      if ( appendSkillSpendTxtLabel )
                      {
                        UILabel__set_text(appendSkillSpendTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0);
                        appendSkillHaveTxtLabel = this->fields.appendSkillHaveTxtLabel;
                        appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_2102/*"APPEND_SKILL_OPEN_HAVE_COIN"*/,
                                                                               0);
                        if ( appendSkillHaveTxtLabel )
                        {
                          UILabel__set_text(appendSkillHaveTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0);
                          appendSkillSpendLabel = this->fields.appendSkillSpendLabel;
                          v56 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
                          LODWORD(v68.fields.m_Center.fields.x) = updata->fields.spendSvtCoin;
                          v57 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v68);
                          appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v56, v57, 0);
                          if ( appendSkillSpendLabel )
                          {
                            UILabel__set_text(appendSkillSpendLabel, (System_String_o *)appendSkillConfirmInfo, 0);
                            appendSkillHaveLabel = this->fields.appendSkillHaveLabel;
                            v59 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
                            haveSvtCoin = updata->fields.haveSvtCoin;
                            v60 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &haveSvtCoin);
                            appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v59, v60, 0);
                            if ( appendSkillHaveLabel )
                            {
                              UILabel__set_text(appendSkillHaveLabel, (System_String_o *)appendSkillConfirmInfo, 0);
                              appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
                              v41 = (System_String_o *)StringLiteral_2101/*"APPEND_SKILL_OPEN_CONFIRM"*/;
                              goto LABEL_51;
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
LABEL_60:
    sub_21FFECC(appendSkillConfirmInfo, v11);
  }
  if ( !updata )
    goto LABEL_60;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillTargetRubyLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  UILabel__set_text((UILabel_o *)appendSkillConfirmInfo, updata->fields.targetRuby, 0);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillTargetNameLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  UILabel__set_text((UILabel_o *)appendSkillConfirmInfo, updata->fields.targetName, 0);
  appendSkillCurrentLvLabel = this->fields.appendSkillCurrentLvLabel;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)updata + 64, 0);
  if ( !appendSkillCurrentLvLabel )
    goto LABEL_60;
  UIExtrusionLabel__set_text(appendSkillCurrentLvLabel, (System_String_o *)appendSkillConfirmInfo, 0);
  appendSkillResultLvLabel = this->fields.appendSkillResultLvLabel;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)updata + 68, 0);
  if ( !appendSkillResultLvLabel )
    goto LABEL_60;
  UIExtrusionLabel__set_text(appendSkillResultLvLabel, (System_String_o *)appendSkillConfirmInfo, 0);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillSpendTxtLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0);
  GameObjectExtensions__SetLocalPositionX(v28, -5.0, 0);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillHaveTxtLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0);
  GameObjectExtensions__SetLocalPositionX(v29, -5.0, 0);
  v32 = this->fields.appendSkillSpendTxtLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30, v31);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3754/*"COMBINE_SPEND_QP"*/,
                                                         0);
  if ( !v32 )
    goto LABEL_60;
  UILabel__set_text(v32, (System_String_o *)appendSkillConfirmInfo, 0);
  v33 = this->fields.appendSkillHaveTxtLabel;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3720/*"COMBINE_HAVE_QP"*/,
                                                         0);
  if ( !v33 )
    goto LABEL_60;
  UILabel__set_text(v33, (System_String_o *)appendSkillConfirmInfo, 0);
  v34 = this->fields.appendSkillSpendLabel;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  haveSvtCoin = updata->fields.spendQp;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &haveSvtCoin);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v35, v36, 0);
  if ( !v34 )
    goto LABEL_60;
  UILabel__set_text(v34, (System_String_o *)appendSkillConfirmInfo, 0);
  v37 = this->fields.appendSkillHaveLabel;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  *(_QWORD *)&v68.fields.m_Center.fields.x = updata->fields.haveQp;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v68);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v38, v39, 0);
  if ( !v37 )
    goto LABEL_60;
  UILabel__set_text(v37, (System_String_o *)appendSkillConfirmInfo, 0);
  appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
  v41 = (System_String_o *)StringLiteral_2070/*"APPEND_SKILL_COMBINE_CONFIRM"*/;
LABEL_51:
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(v41, 0);
  if ( !appendSkillConfirmLabel )
    goto LABEL_60;
  UILabel__set_text(appendSkillConfirmLabel, (System_String_o *)appendSkillConfirmInfo, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v61, v62);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/,
                                                         0);
  if ( !cancelBtnLb )
    goto LABEL_60;
  UILabel__set_text(cancelBtnLb, (System_String_o *)appendSkillConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/,
                                                         0);
  if ( !decideBtnLb )
    goto LABEL_60;
  UILabel__set_text(decideBtnLb, (System_String_o *)appendSkillConfirmInfo, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_60;
  if ( combineRootComponent->fields.state == 14 )
  {
    v66 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v66,
      (Il2CppObject *)v9,
      Method_SetRarityDialogControl___c__DisplayClass147_0__SetAppendSkillCombineInfo_b__0__,
      0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v66, 0, 0, v67);
  }
}


void SetRarityDialogControl__SetCenter(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mPanel; // x0
  float32x2_t *v4; // x20
  unsigned __int64 v5; // x21
  float *p_fields; // x22
  float v7; // s8
  float v8; // s9
  float v9; // s10
  float v10; // s1
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  mPanel = (UnityEngine_Component_o *)this->fields.mPanel;
  if ( !mPanel
    || (mPanel = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))mPanel->klass[1]._1.interopData)(
                                              mPanel,
                                              mPanel->klass[1]._1.klass)) == 0 )
  {
LABEL_11:
    sub_21FFECC(mPanel, method);
  }
  v4 = (float32x2_t *)mPanel;
  v5 = 0;
  p_fields = (float *)&mPanel[1].fields;
  do
  {
    if ( v5 >= v4[3].n64_u32[0] )
      goto LABEL_12;
    mPanel = (UnityEngine_Component_o *)this->fields.mPanel;
    if ( !mPanel )
      goto LABEL_11;
    v7 = *(p_fields - 2);
    v8 = *(p_fields - 1);
    v9 = *p_fields;
    mPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mPanel, 0);
    if ( !mPanel )
      goto LABEL_11;
    v11.fields.x = v7;
    v11.fields.y = v8;
    v11.fields.z = v9;
    v12 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)mPanel, v11, 0);
    if ( v5 >= v4[3].n64_u32[0] )
      goto LABEL_12;
    ++v5;
    *(UnityEngine_Vector3_o *)(p_fields - 2) = v12;
    p_fields += 3;
  }
  while ( v5 != 4 );
  if ( v4[3].n64_u32[0] <= 2 )
LABEL_12:
    sub_21FFED4(mPanel);
  v10 = v4[5].n64_f32[0] + (float)((float)(v4[8].n64_f32[0] - v4[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v4[4],
                                                    vmul_f32(vsub_f32(v4[7], v4[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v10;
}


void SetRarityDialogControl__SetClickDlgOkSeAndCallBack(
        SetRarityDialogControl_o *this,
        int32_t seKind,
        System_Action_o *callBack,
        System_Action_o *cancelCallBack,
        System_Action_o *closeCallBack,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  this->fields.onClickDlgOkSeKind = seKind;
  this->fields.onClickDlgOkCallBack = callBack;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickDlgOkCallBack,
    (int32_t)callBack,
    (System_String_o *)callBack,
    (System_String_o *)cancelCallBack,
    (int32_t)closeCallBack,
    (int32_t)method,
    v6,
    v7);
  this->fields.onClickDlgCancelCallBack = cancelCallBack;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickDlgCancelCallBack,
    (int32_t)cancelCallBack,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.onClickDlgCloseCallBack = closeCallBack;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickDlgCloseCallBack,
    (int32_t)closeCallBack,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


// local variable allocation has failed, the output may be wrong!
void SetRarityDialogControl__SetConfirmCombine(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_String_o *msg,
        int32_t spendQp,
        int64_t haveQp,
        bool isStatusUp,
        System_Int64_array *selectedList,
        const MethodInfo *method)
{
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  void *normalConfirmInfo; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v24; // x1
  il2cpp_array_size_t max_length; // x25
  float v26; // s8
  unsigned __int64 v27; // x24
  UnityEngine_GameObject_o *svtFaceInfo; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v30; // x7
  float y; // s9
  int v32; // w24
  int v33; // w8
  float v34; // s1 OVERLAPPED
  float v35; // s0
  float z; // s2
  __int64 v37; // x1
  __int64 v38; // x2
  UILabel_o *normalSpendQpTxtLb; // x24
  UILabel_o *normalHaveQpTxtLb; // x24
  UILabel_o *confirmSpendQpLb; // x24
  System_String_o *v42; // x25
  Il2CppObject *v43; // x0
  UILabel_o *confirmHaveQpLb; // x23
  System_String_o *v45; // x24
  Il2CppObject *v46; // x0
  UILabel_o *confirmMsgLb; // x22
  const MethodInfo *v48; // x4
  _BOOL8 v49; // x0
  const MethodInfo *v50; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v52; // x20
  const MethodInfo *v53; // x5
  int64_t v54; // [xsp+0h] [xbp-80h] BYREF
  int32_t v55; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *labelMsg; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593223E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl__SetConfirmCombine_b__141_0__);
    sub_21FFC50(&StringLiteral_9609/*"NEED_QP"*/);
    sub_21FFC50(&StringLiteral_3720/*"COMBINE_HAVE_QP"*/);
    sub_21FFC50(&StringLiteral_3882/*"CONFIRM_COMBINE_MSG"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_3754/*"COMBINE_SPEND_QP"*/);
    byte_593223E = 1;
  }
  labelMsg = 0;
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  SetRarityDialogControl__RemoveAllChild(this, v15);
  normalConfirmInfo = this->fields.normalConfirmInfo;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 1, 0);
  this->fields.isStatusUp = isStatusUp;
  normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 1, 0);
  SetRarityDialogControl__Open(this, v18);
  SetRarityDialogControl__DefaultBgSize(this, v19);
  normalConfirmInfo = this->fields.normalTitleLb;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UILabel__set_text((UILabel_o *)normalConfirmInfo, msg, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_46;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_46;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0);
  SetRarityDialogControl__SetCenter(this, v24);
  if ( !selectedList )
    goto LABEL_46;
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  LODWORD(max_length) = selectedList->max_length;
  v26 = *((float *)normalConfirmInfo + 12);
  if ( (int)max_length >= 1 )
  {
    v27 = 0;
    do
    {
      normalConfirmInfo = this->fields.materialSvtGrid;
      if ( !normalConfirmInfo )
        goto LABEL_46;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0);
      normalConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
      if ( !normalConfirmInfo )
        goto LABEL_46;
      normalConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)normalConfirmInfo,
                            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v27 >= LODWORD(selectedList->max_length) )
        sub_21FFED4(normalConfirmInfo);
      if ( !normalConfirmInfo )
        goto LABEL_46;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)normalConfirmInfo,
        v27,
        baseData,
        selectedList->m_Items[v27],
        0,
        0,
        0,
        v30);
      max_length = selectedList->max_length;
      ++v27;
    }
    while ( (__int64)v27 < (int)max_length );
    normalConfirmInfo = this->fields.materialSvtGrid;
    if ( !normalConfirmInfo )
      goto LABEL_46;
  }
  y = this->fields.center.fields.y;
  v32 = *((_DWORD *)normalConfirmInfo + 11);
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  if ( v32 >= (int)max_length )
    v33 = max_length;
  else
    v33 = v32;
  v34 = 55.0;
  if ( v32 >= (int)max_length )
    v34 = y;
  v35 = (float)(this->fields.center.fields.x - (float)((float)(v26 * 0.5) * (float)(v33 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v34 - 1),
    0);
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  v57.fields.x = 0.5;
  v57.fields.y = 0.5;
  v57.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v57, 0);
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UIGrid__set_repositionNow((UIGrid_o *)normalConfirmInfo, 1, 0);
  normalSpendQpTxtLb = this->fields.normalSpendQpTxtLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37, v38);
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMBINE_SPEND_QP"*/, 0);
  if ( !normalSpendQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3720/*"COMBINE_HAVE_QP"*/, 0);
  if ( !normalHaveQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  v55 = spendQp;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v55);
  normalConfirmInfo = System_String__Format(v42, v43, 0);
  if ( !confirmSpendQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  v54 = haveQp;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v54);
  normalConfirmInfo = System_String__Format(v45, v46, 0);
  if ( !confirmHaveQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3882/*"CONFIRM_COMBINE_MSG"*/, 0);
  if ( !confirmMsgLb )
    goto LABEL_46;
  UILabel__set_text(confirmMsgLb, (System_String_o *)normalConfirmInfo, 0);
  normalConfirmInfo = this->fields.statusUpInfoLb;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 0, 0);
  v49 = SetRarityDialogControl__CheckStatusUpInfo(this, baseData, selectedList, &labelMsg, v48);
  if ( !v49 )
    goto LABEL_42;
  WrapControlText__textAdjust(this->fields.statusUpInfoLb, labelMsg, 22, 0, 0);
  normalConfirmInfo = this->fields.statusUpInfoLb;
  if ( !normalConfirmInfo
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0)) == 0 )
  {
LABEL_46:
    sub_21FFECC(normalConfirmInfo, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 1, 0);
LABEL_42:
  SetRarityDialogControl__CheckExceedSvt((SetRarityDialogControl_o *)v49, selectedList, v50);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_46;
  if ( combineRootComponent->fields.state == 3 )
  {
    v52 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v52, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmCombine_b__141_0__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v52, 0, 0, v53);
  }
}


void SetRarityDialogControl__SetConfirmCombineCostume(
        SetRarityDialogControl_o *this,
        System_String_o *cosName,
        int32_t needQp,
        int64_t haveQp,
        System_Action_o *callBack,
        System_Action_o *cancelCallBack,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *costumeConfirmInfo; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  UILabel_o *costumeTitleLb; // x25
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  UILabel_o *needQpCostumeTextLb; // x24
  UILabel_o *needQpCostumeLb; // x24
  System_String_o *v25; // x25
  Il2CppObject *v26; // x0
  UILabel_o *haveQpCostumeTextLb; // x23
  UILabel_o *haveQpCostumeLb; // x23
  System_String_o *v29; // x24
  Il2CppObject *v30; // x0
  UILabel_o *costumeInfoLb; // x22
  const MethodInfo *v32; // x5
  struct CombineRootComponent_o *combineRootComponent; // x8
  int64_t v34; // [xsp+0h] [xbp-60h] BYREF
  int32_t v35; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_593224B & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9609/*"NEED_QP"*/);
    sub_21FFC50(&StringLiteral_3906/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_3988/*"COSTUME_NEED_QP_TEXT"*/);
    sub_21FFC50(&StringLiteral_3985/*"COSTUME_CONFIRM_MSG"*/);
    sub_21FFC50(&StringLiteral_3987/*"COSTUME_HAVE_QP_TEXT"*/);
    byte_593224B = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)cosName);
  SetRarityDialogControl__RemoveAllChild(this, v13);
  costumeConfirmInfo = this->fields.costumeConfirmInfo;
  if ( !costumeConfirmInfo )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(costumeConfirmInfo, 1, 0);
  costumeConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !costumeConfirmInfo )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(costumeConfirmInfo, 1, 0);
  SetRarityDialogControl__Open(this, v16);
  SetRarityDialogControl__DefaultBgSize(this, v17);
  costumeTitleLb = this->fields.costumeTitleLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3906/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0);
  if ( !costumeTitleLb )
    goto LABEL_20;
  UILabel__set_text(costumeTitleLb, (System_String_o *)costumeConfirmInfo, 0);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)this->fields.costumeNameLb;
  if ( !costumeConfirmInfo )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)costumeConfirmInfo, cosName, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_20;
  UILabel__set_text(cancelBtnLb, (System_String_o *)costumeConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_20;
  UILabel__set_text(decideBtnLb, (System_String_o *)costumeConfirmInfo, 0);
  needQpCostumeTextLb = this->fields.needQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3988/*"COSTUME_NEED_QP_TEXT"*/, 0);
  if ( !needQpCostumeTextLb )
    goto LABEL_20;
  UILabel__set_text(needQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0);
  needQpCostumeLb = this->fields.needQpCostumeLb;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  v35 = needQp;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v35);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v25, v26, 0);
  if ( !needQpCostumeLb )
    goto LABEL_20;
  UILabel__set_text(needQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0);
  haveQpCostumeTextLb = this->fields.haveQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3987/*"COSTUME_HAVE_QP_TEXT"*/, 0);
  if ( !haveQpCostumeTextLb )
    goto LABEL_20;
  UILabel__set_text(haveQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0);
  haveQpCostumeLb = this->fields.haveQpCostumeLb;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  v34 = haveQp;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v34);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v29, v30, 0);
  if ( !haveQpCostumeLb
    || (UILabel__set_text(haveQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0),
        costumeInfoLb = this->fields.costumeInfoLb,
        costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3985/*"COSTUME_CONFIRM_MSG"*/,
                                                           0),
        !costumeInfoLb)
    || (UILabel__set_text(costumeInfoLb, (System_String_o *)costumeConfirmInfo, 0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_20:
    sub_21FFECC(costumeConfirmInfo, v14);
  }
  if ( combineRootComponent->fields.state == 8 )
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, callBack, cancelCallBack, 0, v32);
}


void SetRarityDialogControl__SetConfirmCombineCostumeEventItem(
        SetRarityDialogControl_o *this,
        EventCombineCostumeEntity_o *eventCombineCostumeEnt,
        System_Action_o *callBack,
        System_Action_o *cancelCallBack,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *costumeEventItemConfirmInfo; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x5
  struct CombineRootComponent_o *combineRootComponent; // x8

  if ( (byte_593224A & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___);
    byte_593224A = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)eventCombineCostumeEnt);
  SetRarityDialogControl__RemoveAllChild(this, v9);
  costumeEventItemConfirmInfo = this->fields.costumeEventItemConfirmInfo;
  if ( !costumeEventItemConfirmInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(costumeEventItemConfirmInfo, 1, 0);
  costumeEventItemConfirmInfo = this->fields.costumeEventItemConfirmInfo;
  if ( !costumeEventItemConfirmInfo
    || (costumeEventItemConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    costumeEventItemConfirmInfo,
                                                                    (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___)) == 0
    || (CostumeEventItemConfirmInfo__Set(
          (CostumeEventItemConfirmInfo_o *)costumeEventItemConfirmInfo,
          eventCombineCostumeEnt,
          0),
        (costumeEventItemConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0)
    || (UnityEngine_GameObject__SetActive(costumeEventItemConfirmInfo, 1, 0),
        SetRarityDialogControl__Open(this, v12),
        SetRarityDialogControl__DefaultBgSize(this, v13),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_11:
    sub_21FFECC(costumeEventItemConfirmInfo, v10);
  }
  if ( combineRootComponent->fields.state == 8 )
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 0, callBack, cancelCallBack, 0, v14);
}


void SetRarityDialogControl__SetConfirmCombineCostumeEventItemOrNeedItem(
        SetRarityDialogControl_o *this,
        CombineCostumeEntity_o *combineCostumeEnt,
        EventCombineCostumeEntity_o *eventCombineCostumeEnt,
        bool isShortNeedItemOrQp,
        bool isShortEvemtItem,
        System_Action_bool__o *callBack,
        System_Action_o *cancelCallBack,
        const MethodInfo *method)
{
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  UnityEngine_GameObject_o *costumeEventItemOrNeedItemConfirmInfo; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  UILabel_o *cancelBtnLb; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v25; // x21
  const MethodInfo *v26; // x5

  if ( (byte_5932249 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl_DefaultBgSize__);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    byte_5932249 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)combineCostumeEnt);
  SetRarityDialogControl__RemoveAllChild(this, v15);
  costumeEventItemOrNeedItemConfirmInfo = this->fields.costumeEventItemOrNeedItemConfirmInfo;
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(costumeEventItemOrNeedItemConfirmInfo, 1, 0);
  costumeEventItemOrNeedItemConfirmInfo = this->fields.costumeEventItemOrNeedItemConfirmInfo;
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_21;
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                        costumeEventItemOrNeedItemConfirmInfo,
                                                                        (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___);
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_21;
  CostumeEventItemOrNeedItemConfirmInfo__Set(
    (CostumeEventItemOrNeedItemConfirmInfo_o *)costumeEventItemOrNeedItemConfirmInfo,
    combineCostumeEnt,
    eventCombineCostumeEnt,
    isShortNeedItemOrQp,
    isShortEvemtItem,
    callBack,
    0);
  costumeEventItemOrNeedItemConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(costumeEventItemOrNeedItemConfirmInfo, 1, 0);
  SetRarityDialogControl__Open(this, v18);
  SetRarityDialogControl__DefaultBgSize(this, v19);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/,
                                                                        0);
  if ( !cancelBtnLb )
    goto LABEL_21;
  UILabel__set_text(cancelBtnLb, (System_String_o *)costumeEventItemOrNeedItemConfirmInfo, 0);
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)this->fields.cancelBtnLb;
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_21;
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                        (UnityEngine_Component_o *)costumeEventItemOrNeedItemConfirmInfo,
                                                                        0);
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_21;
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                                        (UnityEngine_Transform_o *)costumeEventItemOrNeedItemConfirmInfo,
                                                                        0);
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject(
                 (UnityEngine_Component_o *)costumeEventItemOrNeedItemConfirmInfo,
                 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, 0.0, 0);
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)this->fields.decideBtnLb;
  if ( !costumeEventItemOrNeedItemConfirmInfo
    || (costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                              (UnityEngine_Component_o *)costumeEventItemOrNeedItemConfirmInfo,
                                                                              0)) == 0
    || (costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                                              (UnityEngine_Transform_o *)costumeEventItemOrNeedItemConfirmInfo,
                                                                              0)) == 0
    || (costumeEventItemOrNeedItemConfirmInfo = UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)costumeEventItemOrNeedItemConfirmInfo,
                                                  0)) == 0
    || (UnityEngine_GameObject__SetActive(costumeEventItemOrNeedItemConfirmInfo, 0, 0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_21:
    sub_21FFECC(costumeEventItemOrNeedItemConfirmInfo, v16);
  }
  if ( combineRootComponent->fields.state == 8 )
  {
    v25 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, 0, cancelCallBack, v25, v26);
  }
}


void SetRarityDialogControl__SetConfirmInfo(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_Int64_array *list,
        System_String_o *msg,
        int32_t spendQp,
        int64_t haveQp,
        bool isStatusUp,
        System_Int64_array *selectedList,
        bool isExceededMaterial,
        const MethodInfo *method)
{
  SetRarityDialogControl_o *v16; // x23
  bool v17; // w28
  const MethodInfo *v18; // x4
  System_Int64_array *v19; // x2
  const MethodInfo *v20; // x7
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  CombineRootComponent_c *v25; // x1
  __int64 naturalAligment; // x9
  __int64 v27; // x9
  SetRarityDialogControl_o *v28; // x0
  System_Int64_array *v29; // x1
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // [xsp+0h] [xbp-70h]
  System_String_o *labelMsg; // [xsp+18h] [xbp-58h] BYREF

  v16 = this;
  v17 = isStatusUp;
  if ( (byte_593223B & 1) == 0 )
  {
    sub_21FFC50(&CombineRootComponent_TypeInfo);
    this = (SetRarityDialogControl_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_593223B = 1;
  }
  labelMsg = 0;
  SetRarityDialogControl__CheckExceedSvt(this, selectedList, (const MethodInfo *)list);
  v16->fields.isStatusUp = v17;
  if ( SetRarityDialogControl__CheckStatusUpInfo(v16, baseData, selectedList, &labelMsg, v18) && isStatusUp )
    SetRarityDialogControl__SetAllDispConfirmCombine(
      v16,
      baseData,
      v19,
      spendQp,
      haveQp,
      selectedList,
      labelMsg,
      isExceededMaterial,
      v31);
  else
    SetRarityDialogControl__SetConfirmRarityInfo(
      v16,
      baseData,
      selectedList,
      msg,
      spendQp,
      haveQp,
      isExceededMaterial,
      v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (Il2CppObject *)Instance[2].klass;
  if ( !Instance )
    goto LABEL_18;
  v25 = CombineRootComponent_TypeInfo;
  naturalAligment = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] != CombineRootComponent_TypeInfo )
  {
    goto LABEL_19;
  }
  if ( HIDWORD(Instance[42].monitor) != 7 )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (Il2CppObject *)Instance[2].klass) == 0 )
LABEL_18:
    sub_21FFECC(Instance, v22);
  v25 = CombineRootComponent_TypeInfo;
  v27 = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment < (unsigned int)v27
    || (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v27 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_19:
    v28 = (SetRarityDialogControl_o *)sub_220024C(Instance, v25, v23, v24);
    SetRarityDialogControl__CheckExceedSvt(v28, v29, v30);
    return;
  }
  CombineRootComponent__ShowTutorial((CombineRootComponent_o *)Instance, 0);
}


void SetRarityDialogControl__SetConfirmLvExceed(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_String_o *msg,
        int32_t spendQp,
        int64_t haveQp,
        bool isCheck,
        const MethodInfo *method)
{
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *lvExceedConfirmSimpleInfo; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  UILabel_o *cancelBtnLb; // x23
  UILabel_o *decideBtnLb; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  int v23; // w8
  UILabel_o *lvExceedInfoLb; // x21
  UILabel_o *lvExceedSpendQpTxtLb; // x23
  UILabel_o *lvExceedHaveQpTxtLb; // x23
  UILabel_o *lvExceedSpendQpLb; // x23
  System_String_o *v28; // x24
  Il2CppObject *v29; // x0
  UILabel_o *lvExceedHaveQpLb; // x22
  System_String_o *v31; // x23
  Il2CppObject *v32; // x0
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v34; // x0
  intptr_t *v35; // x8
  System_Action_o *v36; // x21
  int32_t v37; // w20
  const MethodInfo *v38; // x5
  int64_t v39; // [xsp+8h] [xbp-58h] BYREF
  int32_t v40; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_5932246 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__149_0__);
    sub_21FFC50(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__149_1__);
    sub_21FFC50(&StringLiteral_9609/*"NEED_QP"*/);
    sub_21FFC50(&StringLiteral_3887/*"CONFIRM_EXCEED_COMBINE"*/);
    sub_21FFC50(&StringLiteral_3720/*"COMBINE_HAVE_QP"*/);
    sub_21FFC50(&StringLiteral_8683/*"LVEXCEED_COMBINE_SPEND_QP"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    byte_5932246 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  SetRarityDialogControl__RemoveAllChild(this, v12);
  lvExceedConfirmSimpleInfo = this->fields.lvExceedConfirmSimpleInfo;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 1, 0);
  lvExceedConfirmSimpleInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 1, 0);
  SetRarityDialogControl__Open(this, v15);
  SetRarityDialogControl__DefaultBgSize(this, v16);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)this->fields.lvExceedTitleLb;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_34;
  UILabel__set_text((UILabel_o *)lvExceedConfirmSimpleInfo, msg, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/,
                                                            0);
  if ( !cancelBtnLb )
    goto LABEL_34;
  UILabel__set_text(cancelBtnLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/,
                                                            0);
  if ( !decideBtnLb )
    goto LABEL_34;
  UILabel__set_text(decideBtnLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0);
  v23 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( !isCheck )
  {
    lvExceedSpendQpTxtLb = this->fields.lvExceedSpendQpTxtLb;
    if ( !v23 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
    lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8683/*"LVEXCEED_COMBINE_SPEND_QP"*/,
                                                              0);
    if ( lvExceedSpendQpTxtLb )
    {
      UILabel__set_text(lvExceedSpendQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0);
      lvExceedHaveQpTxtLb = this->fields.lvExceedHaveQpTxtLb;
      lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_3720/*"COMBINE_HAVE_QP"*/,
                                                                0);
      if ( lvExceedHaveQpTxtLb )
      {
        UILabel__set_text(lvExceedHaveQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0);
        lvExceedSpendQpLb = this->fields.lvExceedSpendQpLb;
        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
        v40 = spendQp;
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v40);
        lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)System_String__Format(v28, v29, 0);
        if ( lvExceedSpendQpLb )
        {
          UILabel__set_text(lvExceedSpendQpLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0);
          lvExceedHaveQpLb = this->fields.lvExceedHaveQpLb;
          v31 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
          v39 = haveQp;
          v32 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v39);
          lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)System_String__Format(v31, v32, 0);
          if ( lvExceedHaveQpLb )
          {
            UILabel__set_text(lvExceedHaveQpLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0);
            lvExceedConfirmSimpleInfo = this->fields.lvExceedQpInfo;
            if ( lvExceedConfirmSimpleInfo )
            {
              UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 1, 0);
              lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)this->fields.lvExceedInfoLb;
              if ( lvExceedConfirmSimpleInfo )
              {
                lvExceedConfirmSimpleInfo = UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)lvExceedConfirmSimpleInfo,
                                              0);
                if ( lvExceedConfirmSimpleInfo )
                  goto LABEL_27;
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_21FFECC(lvExceedConfirmSimpleInfo, v13);
  }
  lvExceedInfoLb = this->fields.lvExceedInfoLb;
  if ( !v23 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3887/*"CONFIRM_EXCEED_COMBINE"*/,
                                                            0);
  if ( !lvExceedInfoLb )
    goto LABEL_34;
  UILabel__set_text(lvExceedInfoLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)this->fields.lvExceedInfoLb;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_34;
  lvExceedConfirmSimpleInfo = UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)lvExceedConfirmSimpleInfo,
                                0);
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 1, 0);
  lvExceedConfirmSimpleInfo = this->fields.lvExceedQpInfo;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_34;
LABEL_27:
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_34;
  if ( combineRootComponent->fields.state == 6 )
  {
    v34 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    v35 = (intptr_t *)&Method_SetRarityDialogControl__SetConfirmLvExceed_b__149_0__;
    v36 = v34;
    if ( isCheck )
    {
      v37 = 8;
    }
    else
    {
      v35 = (intptr_t *)&Method_SetRarityDialogControl__SetConfirmLvExceed_b__149_1__;
      v37 = 0;
    }
    System_Action___ctor(v34, (Il2CppObject *)this, *v35, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, v37, v36, 0, 0, v38);
  }
}


void SetRarityDialogControl__SetConfirmLvExceed_37883916(
        SetRarityDialogControl_o *this,
        int64_t userId,
        System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__o *combineItemInfoList,
        int32_t spendQp,
        int64_t haveQp,
        const MethodInfo *method)
{
  SetRarityDialogControl_o *v10; // x19
  struct CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  UILabel_o *lvExceedTitleLabel; // x24
  UILabel_o *lvExceedSpendItemLabel; // x24
  UILabel_o *lvExceedSpendQpTxtLabel; // x24
  UILabel_o *lvExceedHaveQpTxtLabel; // x24
  UILabel_o *lvExceedSpendQpLabel; // x24
  System_String_o *v25; // x25
  Il2CppObject *v26; // x0
  UILabel_o *lvExceedHaveQpLabel; // x23
  System_String_o *v28; // x24
  Il2CppObject *v29; // x0
  UILabel_o *lvExceedConfirmLabel; // x22
  int32_t size; // w25
  int32_t v32; // w22
  UnityEngine_GameObject_o *itemInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x23
  intptr_t m_CachedPtr; // x8
  int32_t v37; // w24
  System_Action_o *v38; // x20
  const MethodInfo *v39; // x5
  int64_t v40; // [xsp+0h] [xbp-60h] BYREF
  int32_t v41; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_5932247 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__150_0__);
    sub_21FFC50(&StringLiteral_9609/*"NEED_QP"*/);
    sub_21FFC50(&StringLiteral_3907/*"CONFIRM_TITLE_EXCEED_COMBINE"*/);
    sub_21FFC50(&StringLiteral_3720/*"COMBINE_HAVE_QP"*/);
    sub_21FFC50(&StringLiteral_8682/*"LVEXCEED_COMBINE_SPEND_ITEM"*/);
    sub_21FFC50(&StringLiteral_8683/*"LVEXCEED_COMBINE_SPEND_QP"*/);
    sub_21FFC50(&StringLiteral_8684/*"LVEXCEED_EXE_CONFIRM"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    this = (SetRarityDialogControl_o *)sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    byte_5932247 = 1;
  }
  combineRootComponent = v10->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_32;
  if ( combineRootComponent->fields.state == 6 )
  {
    SetRarityDialogControl__DisableConfirmInfo(v10, (const MethodInfo *)userId);
    SetRarityDialogControl__RemoveAllChild(v10, v12);
    this = (SetRarityDialogControl_o *)v10->fields.lvExceedConfirmInfo;
    if ( !this )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (SetRarityDialogControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
    if ( !this )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    SetRarityDialogControl__Open(v10, v13);
    SetRarityDialogControl__DefaultBgSize(v10, v14);
    this = (SetRarityDialogControl_o *)v10->fields.mPanelBg;
    if ( !this )
      goto LABEL_32;
    UIWidget__set_height((UIWidget_o *)this, 501, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, -8.0, 0);
    GameObjectExtensions__SetLocalPositionY(v10->fields.confirmBtnInfo, -8.0, 0);
    cancelBtnLb = v10->fields.cancelBtnLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
    if ( !cancelBtnLb )
      goto LABEL_32;
    UILabel__set_text(cancelBtnLb, (System_String_o *)this, 0);
    decideBtnLb = v10->fields.decideBtnLb;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0);
    if ( !decideBtnLb )
      goto LABEL_32;
    UILabel__set_text(decideBtnLb, (System_String_o *)this, 0);
    lvExceedTitleLabel = v10->fields.lvExceedTitleLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3907/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0);
    if ( !lvExceedTitleLabel )
      goto LABEL_32;
    UILabel__set_text(lvExceedTitleLabel, (System_String_o *)this, 0);
    lvExceedSpendItemLabel = v10->fields.lvExceedSpendItemLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8682/*"LVEXCEED_COMBINE_SPEND_ITEM"*/, 0);
    if ( !lvExceedSpendItemLabel )
      goto LABEL_32;
    UILabel__set_text(lvExceedSpendItemLabel, (System_String_o *)this, 0);
    lvExceedSpendQpTxtLabel = v10->fields.lvExceedSpendQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8683/*"LVEXCEED_COMBINE_SPEND_QP"*/, 0);
    if ( !lvExceedSpendQpTxtLabel )
      goto LABEL_32;
    UILabel__set_text(lvExceedSpendQpTxtLabel, (System_String_o *)this, 0);
    lvExceedHaveQpTxtLabel = v10->fields.lvExceedHaveQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3720/*"COMBINE_HAVE_QP"*/, 0);
    if ( !lvExceedHaveQpTxtLabel )
      goto LABEL_32;
    UILabel__set_text(lvExceedHaveQpTxtLabel, (System_String_o *)this, 0);
    lvExceedSpendQpLabel = v10->fields.lvExceedSpendQpLabel;
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
    v41 = spendQp;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v41);
    this = (SetRarityDialogControl_o *)System_String__Format(v25, v26, 0);
    if ( !lvExceedSpendQpLabel )
      goto LABEL_32;
    UILabel__set_text(lvExceedSpendQpLabel, (System_String_o *)this, 0);
    lvExceedHaveQpLabel = v10->fields.lvExceedHaveQpLabel;
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
    v40 = haveQp;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v40);
    this = (SetRarityDialogControl_o *)System_String__Format(v28, v29, 0);
    if ( !lvExceedHaveQpLabel )
      goto LABEL_32;
    UILabel__set_text(lvExceedHaveQpLabel, (System_String_o *)this, 0);
    lvExceedConfirmLabel = v10->fields.lvExceedConfirmLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8684/*"LVEXCEED_EXE_CONFIRM"*/, 0);
    if ( !lvExceedConfirmLabel )
      goto LABEL_32;
    UILabel__set_text(lvExceedConfirmLabel, (System_String_o *)this, 0);
    if ( !combineItemInfoList )
      goto LABEL_32;
    size = combineItemInfoList->fields._size;
    if ( size >= 1 )
    {
      v32 = 0;
      while ( 1 )
      {
        this = (SetRarityDialogControl_o *)v10->fields.lvExceedConsumeItemGrid;
        if ( !this )
          break;
        itemInfoPrefab = v10->fields.itemInfoPrefab;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        this = (SetRarityDialogControl_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v10,
                                             itemInfoPrefab,
                                             transform,
                                             0,
                                             0);
        if ( !this )
          break;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)this,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
        this = (SetRarityDialogControl_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)combineItemInfoList,
                                             v32,
                                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !this )
          break;
        m_CachedPtr = this->fields.m_CachedPtr;
        if ( !m_CachedPtr )
          break;
        v37 = *(_DWORD *)(m_CachedPtr + 16);
        this = (SetRarityDialogControl_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)combineItemInfoList,
                                             v32,
                                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !this || !Component_object )
          break;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          (LimitCntUpItemComponent_o *)Component_object,
          userId,
          v37,
          (int32_t)this->fields.m_CancellationTokenSource,
          0);
        if ( size == ++v32 )
          goto LABEL_29;
      }
LABEL_32:
      sub_21FFECC(this, userId);
    }
LABEL_29:
    this = (SetRarityDialogControl_o *)v10->fields.lvExceedConsumeItemGrid;
    if ( !this )
      goto LABEL_32;
    UIGrid__set_repositionNow((UIGrid_o *)this, 1, 0);
    v38 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v38, (Il2CppObject *)v10, Method_SetRarityDialogControl__SetConfirmLvExceed_b__150_0__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v10, 8, v38, 0, 0, v39);
  }
}


// local variable allocation has failed, the output may be wrong!
void SetRarityDialogControl__SetConfirmRarityInfo(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_Int64_array *list,
        System_String_o *msg,
        int32_t spendQp,
        int64_t haveQp,
        bool isExceededMaterial,
        const MethodInfo *method)
{
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  void *rariryConfirmInfo; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  UILabel_o *cancelBtnLb; // x25
  UILabel_o *decideBtnLb; // x25
  const MethodInfo *v24; // x1
  il2cpp_array_size_t max_length; // x26
  float v26; // s8
  unsigned __int64 v27; // x25
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v30; // x7
  float y; // s9
  int v32; // w23
  int v33; // w8
  float v34; // s1 OVERLAPPED
  float v35; // s0
  float z; // s2
  __int64 v37; // x1
  __int64 v38; // x2
  UILabel_o *spendQpTxtLb; // x23
  UILabel_o *haveQpTxtLb; // x23
  UILabel_o *spendQpLb; // x23
  System_String_o *v42; // x24
  Il2CppObject *v43; // x0
  UILabel_o *haveQpLb; // x22
  System_String_o *v45; // x23
  Il2CppObject *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  UILabel_o *rareMaterialMsgLb; // x21
  int v50; // w8
  __int64 *v51; // x8
  __int64 v52; // x1
  __int64 v53; // x2
  UILabel_o *rareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v56; // x20
  const MethodInfo *v57; // x5
  int64_t v58; // [xsp+0h] [xbp-80h] BYREF
  int32_t v59; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593223C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl__SetConfirmRarityInfo_b__139_0__);
    sub_21FFC50(&StringLiteral_9609/*"NEED_QP"*/);
    sub_21FFC50(&StringLiteral_3720/*"COMBINE_HAVE_QP"*/);
    sub_21FFC50(&StringLiteral_3882/*"CONFIRM_COMBINE_MSG"*/);
    sub_21FFC50(&StringLiteral_3719/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_11414/*"RARE_MATERIAL_INFO_MSG"*/);
    sub_21FFC50(&StringLiteral_3754/*"COMBINE_SPEND_QP"*/);
    byte_593223C = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  SetRarityDialogControl__RemoveAllChild(this, v15);
  rariryConfirmInfo = this->fields.rariryConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rariryConfirmInfo, 1, 0);
  rariryConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !rariryConfirmInfo )
    goto LABEL_50;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rariryConfirmInfo, 1, 0);
  SetRarityDialogControl__Open(this, v18);
  SetRarityDialogControl__DefaultBgSize(this, v19);
  rariryConfirmInfo = this->fields.rarityTitleLb;
  if ( !rariryConfirmInfo )
    goto LABEL_50;
  UILabel__set_text((UILabel_o *)rariryConfirmInfo, msg, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_50;
  UILabel__set_text(cancelBtnLb, (System_String_o *)rariryConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_50;
  UILabel__set_text(decideBtnLb, (System_String_o *)rariryConfirmInfo, 0);
  SetRarityDialogControl__SetCenter(this, v24);
  if ( !list )
    goto LABEL_50;
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_50;
  LODWORD(max_length) = list->max_length;
  v26 = *((float *)rariryConfirmInfo + 12);
  if ( (int)max_length >= 1 )
  {
    v27 = 0;
    do
    {
      rariryConfirmInfo = this->fields.raritySvtGrid;
      if ( !rariryConfirmInfo )
        goto LABEL_50;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0);
      rariryConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
      if ( !rariryConfirmInfo )
        goto LABEL_50;
      rariryConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)rariryConfirmInfo,
                            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v27 >= LODWORD(list->max_length) )
        sub_21FFED4(rariryConfirmInfo);
      if ( !rariryConfirmInfo )
        goto LABEL_50;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)rariryConfirmInfo,
        v27,
        baseData,
        list->m_Items[v27],
        0,
        0,
        0,
        v30);
      max_length = list->max_length;
      ++v27;
    }
    while ( (__int64)v27 < (int)max_length );
    rariryConfirmInfo = this->fields.raritySvtGrid;
    if ( !rariryConfirmInfo )
      goto LABEL_50;
  }
  y = this->fields.center.fields.y;
  v32 = *((_DWORD *)rariryConfirmInfo + 11);
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0);
  if ( !rariryConfirmInfo )
    goto LABEL_50;
  if ( v32 >= (int)max_length )
    v33 = max_length;
  else
    v33 = v32;
  v34 = 55.0;
  if ( v32 >= (int)max_length )
    v34 = y;
  v35 = (float)(this->fields.center.fields.x - (float)((float)(v26 * 0.5) * (float)(v33 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)rariryConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v34 - 1),
    0);
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_50;
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0);
  if ( !rariryConfirmInfo )
    goto LABEL_50;
  v60.fields.x = 0.5;
  v60.fields.y = 0.5;
  v60.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rariryConfirmInfo, v60, 0);
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_50;
  UIGrid__set_repositionNow((UIGrid_o *)rariryConfirmInfo, 1, 0);
  spendQpTxtLb = this->fields.spendQpTxtLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37, v38);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMBINE_SPEND_QP"*/, 0);
  if ( !spendQpTxtLb )
    goto LABEL_50;
  UILabel__set_text(spendQpTxtLb, (System_String_o *)rariryConfirmInfo, 0);
  haveQpTxtLb = this->fields.haveQpTxtLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3720/*"COMBINE_HAVE_QP"*/, 0);
  if ( !haveQpTxtLb )
    goto LABEL_50;
  UILabel__set_text(haveQpTxtLb, (System_String_o *)rariryConfirmInfo, 0);
  spendQpLb = this->fields.spendQpLb;
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  v59 = spendQp;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v59);
  rariryConfirmInfo = System_String__Format(v42, v43, 0);
  if ( !spendQpLb )
    goto LABEL_50;
  UILabel__set_text(spendQpLb, (System_String_o *)rariryConfirmInfo, 0);
  haveQpLb = this->fields.haveQpLb;
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  v58 = haveQp;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v58);
  rariryConfirmInfo = System_String__Format(v45, v46, 0);
  if ( !haveQpLb )
    goto LABEL_50;
  UILabel__set_text(haveQpLb, (System_String_o *)rariryConfirmInfo, 0);
  rareMaterialMsgLb = this->fields.rareMaterialMsgLb;
  v50 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( isExceededMaterial )
  {
    if ( !v50 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47, v48);
    v51 = &StringLiteral_3719/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
  }
  else
  {
    if ( !v50 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47, v48);
    v51 = &StringLiteral_11414/*"RARE_MATERIAL_INFO_MSG"*/;
  }
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)*v51, 0);
  if ( !rareMaterialMsgLb )
    goto LABEL_50;
  UILabel__set_text(rareMaterialMsgLb, (System_String_o *)rariryConfirmInfo, 0);
  rareConfirmMsgLb = this->fields.rareConfirmMsgLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52, v53);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3882/*"CONFIRM_COMBINE_MSG"*/, 0);
  if ( !rareConfirmMsgLb
    || (UILabel__set_text(rareConfirmMsgLb, (System_String_o *)rariryConfirmInfo, 0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_50:
    sub_21FFECC(rariryConfirmInfo, v16);
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v56 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v56, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmRarityInfo_b__139_0__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v56, 0, 0, v57);
  }
}


// local variable allocation has failed, the output may be wrong!
void SetRarityDialogControl__SetConfirmSvtEqCombine(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_String_o *msg,
        int32_t spendQp,
        int64_t haveQp,
        bool isStatusUp,
        System_Collections_Generic_Dictionary_long__bool__o *selectedList,
        const MethodInfo *method)
{
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  UnityEngine_GameObject_o *normalConfirmInfo; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v23; // x1
  struct UIGrid_o *materialSvtGrid; // x8
  float v25; // s8
  int32_t v26; // w24
  __int64 v27; // x1
  UnityEngine_Component_o *v28; // x0
  Il2CppObject *key; // x25
  __int64 value_low; // x29
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  __int64 v34; // x1
  Il2CppObject *Component_object; // x0
  __int64 v36; // x1
  float y; // s9
  int32_t Count; // w23
  struct UIGrid_o *v39; // x8
  int32_t v40; // w22
  int32_t maxPerLine; // w20
  int32_t v42; // w8
  float v43; // s1 OVERLAPPED
  float v44; // s0
  float z; // s2
  __int64 v46; // x1
  __int64 v47; // x2
  UILabel_o *normalSpendQpTxtLb; // x22
  UILabel_o *normalHaveQpTxtLb; // x22
  UILabel_o *confirmSpendQpLb; // x22
  System_String_o *v51; // x23
  Il2CppObject *v52; // x0
  UILabel_o *confirmHaveQpLb; // x21
  System_String_o *v54; // x22
  Il2CppObject *v55; // x0
  UILabel_o *confirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v58; // x20
  const MethodInfo *v59; // x5
  const MethodInfo *v60; // [xsp+0h] [xbp-E0h]
  struct System_Collections_Generic_Dictionary_TKey__TValue__o *v61; // [xsp+8h] [xbp-D8h]
  int32_t v63; // [xsp+14h] [xbp-CCh] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v64; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v65; // [xsp+40h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593223F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__142_0__);
    sub_21FFC50(&StringLiteral_9609/*"NEED_QP"*/);
    sub_21FFC50(&StringLiteral_3720/*"COMBINE_HAVE_QP"*/);
    sub_21FFC50(&StringLiteral_3882/*"CONFIRM_COMBINE_MSG"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_3754/*"COMBINE_SPEND_QP"*/);
    byte_593223F = 1;
  }
  memset(&v65, 0, sizeof(v65));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  SetRarityDialogControl__RemoveAllChild(this, v14);
  normalConfirmInfo = this->fields.normalConfirmInfo;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(normalConfirmInfo, 1, 0);
  this->fields.isStatusUp = isStatusUp;
  normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !normalConfirmInfo )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(normalConfirmInfo, 1, 0);
  SetRarityDialogControl__Open(this, v17);
  SetRarityDialogControl__DefaultBgSize(this, v18);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.normalTitleLb;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  UILabel__set_text((UILabel_o *)normalConfirmInfo, msg, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_44;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_44;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0);
  SetRarityDialogControl__SetCenter(this, v23);
  if ( !selectedList )
    goto LABEL_44;
  v61 = (struct System_Collections_Generic_Dictionary_TKey__TValue__o *)haveQp;
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_3F8EEAC *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  materialSvtGrid = this->fields.materialSvtGrid;
  if ( !materialSvtGrid )
    goto LABEL_44;
  v25 = materialSvtGrid->fields.cellWidth * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v64,
    selectedList,
    (const MethodInfo_3F8F610 *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v26 = 0;
  v65 = v64;
  v64.fields._dictionary = 0;
  *(_QWORD *)&v64.fields._version = &v65;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v65,
            (const MethodInfo_412B874 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v28 = (UnityEngine_Component_o *)this->fields.materialSvtGrid;
    if ( !v28 )
      sub_21FFECC(0, v27);
    key = v65.fields._current.fields.key;
    value_low = LOBYTE(v65.fields._current.fields.value);
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v28, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
    if ( !Object )
      sub_21FFECC(0, v34);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_object )
      sub_21FFECC(0, v36);
    MaterialSvtInfo__setMaterialSvtInfo_37861504(
      (MaterialSvtInfo_o *)Component_object,
      v26++,
      baseData,
      (int64_t)key,
      0,
      0,
      value_low != 0,
      0,
      v60);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v65,
    (const MethodInfo_412B990 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_3F8EEAC *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_3F8EEAC *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v39 = this->fields.materialSvtGrid;
  if ( !v39 )
    goto LABEL_44;
  v40 = (int)normalConfirmInfo;
  maxPerLine = v39->fields.maxPerLine;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.materialSvtGrid,
                                                    0);
  if ( !normalConfirmInfo )
    goto LABEL_44;
  if ( v40 <= maxPerLine )
    v42 = Count;
  else
    v42 = maxPerLine;
  v43 = 55.0;
  if ( v40 <= maxPerLine )
    v43 = y;
  v44 = (float)(this->fields.center.fields.x - (float)(v25 * (float)(v42 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v43 - 1),
    0);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)normalConfirmInfo,
                                                    0);
  if ( !normalConfirmInfo )
    goto LABEL_44;
  v66.fields.x = 0.5;
  v66.fields.y = 0.5;
  v66.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v66, 0);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  UIGrid__set_repositionNow((UIGrid_o *)normalConfirmInfo, 1, 0);
  normalSpendQpTxtLb = this->fields.normalSpendQpTxtLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46, v47);
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMBINE_SPEND_QP"*/, 0);
  if ( !normalSpendQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3720/*"COMBINE_HAVE_QP"*/, 0);
  if ( !normalHaveQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  v63 = spendQp;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v63);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v51, v52, 0);
  if ( !confirmSpendQpLb )
    goto LABEL_44;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  v64.fields._dictionary = v61;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v64);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v54, v55, 0);
  if ( !confirmHaveQpLb )
    goto LABEL_44;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3882/*"CONFIRM_COMBINE_MSG"*/, 0);
  if ( !confirmMsgLb
    || (UILabel__set_text(confirmMsgLb, (System_String_o *)normalConfirmInfo, 0),
        (normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0)
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0)) == 0
    || (UnityEngine_GameObject__SetActive(normalConfirmInfo, 0, 0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_44:
    sub_21FFECC(normalConfirmInfo, v15);
  }
  if ( combineRootComponent->fields.state == 4 )
  {
    v58 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v58, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__142_0__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v58, 0, 0, v59);
  }
}


// local variable allocation has failed, the output may be wrong!
void SetRarityDialogControl__SetExceedMaterialInfo(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_Int64_array *list,
        System_String_o *msg,
        int32_t spendQp,
        int64_t haveQp,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  void *exceedConfirmInfo; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v22; // x1
  il2cpp_array_size_t max_length; // x25
  float v24; // s8
  unsigned __int64 v25; // x24
  UnityEngine_GameObject_o *svtFaceInfo; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v28; // x7
  float y; // s9
  int v30; // w22
  int v31; // w8
  float v32; // s1 OVERLAPPED
  float v33; // s0
  float z; // s2
  __int64 v35; // x1
  __int64 v36; // x2
  UILabel_o *exceedConfirmSpendQpTxtLb; // x22
  UILabel_o *exceedConfirmHaveQpTxtLb; // x22
  UILabel_o *exceedConfirmSpendQpLb; // x22
  System_String_o *v40; // x23
  Il2CppObject *v41; // x0
  UILabel_o *exceedConfirmHaveQpLb; // x21
  System_String_o *v43; // x22
  Il2CppObject *v44; // x0
  UILabel_o *exceedMaterialMsgLb; // x20
  UILabel_o *exceedConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v48; // x20
  const MethodInfo *v49; // x5
  int64_t v50; // [xsp+8h] [xbp-78h] BYREF
  int32_t v51; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593223D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl__SetExceedMaterialInfo_b__140_0__);
    sub_21FFC50(&StringLiteral_9609/*"NEED_QP"*/);
    sub_21FFC50(&StringLiteral_3720/*"COMBINE_HAVE_QP"*/);
    sub_21FFC50(&StringLiteral_3882/*"CONFIRM_COMBINE_MSG"*/);
    sub_21FFC50(&StringLiteral_3719/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_3754/*"COMBINE_SPEND_QP"*/);
    byte_593223D = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  SetRarityDialogControl__RemoveAllChild(this, v13);
  exceedConfirmInfo = this->fields.exceedConfirmInfo;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exceedConfirmInfo, 1, 0);
  exceedConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exceedConfirmInfo, 1, 0);
  SetRarityDialogControl__Open(this, v16);
  SetRarityDialogControl__DefaultBgSize(this, v17);
  exceedConfirmInfo = this->fields.exceedConfirmTitleLb;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  UILabel__set_text((UILabel_o *)exceedConfirmInfo, msg, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_41;
  UILabel__set_text(cancelBtnLb, (System_String_o *)exceedConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_41;
  UILabel__set_text(decideBtnLb, (System_String_o *)exceedConfirmInfo, 0);
  SetRarityDialogControl__SetCenter(this, v22);
  if ( !list )
    goto LABEL_41;
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  LODWORD(max_length) = list->max_length;
  v24 = *((float *)exceedConfirmInfo + 12);
  if ( (int)max_length >= 1 )
  {
    v25 = 0;
    do
    {
      exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
      if ( !exceedConfirmInfo )
        goto LABEL_41;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0);
      exceedConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
      if ( !exceedConfirmInfo )
        goto LABEL_41;
      exceedConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)exceedConfirmInfo,
                            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v25 >= LODWORD(list->max_length) )
        sub_21FFED4(exceedConfirmInfo);
      if ( !exceedConfirmInfo )
        goto LABEL_41;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)exceedConfirmInfo,
        v25,
        baseData,
        list->m_Items[v25],
        0,
        0,
        0,
        v28);
      max_length = list->max_length;
      ++v25;
    }
    while ( (__int64)v25 < (int)max_length );
    exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
    if ( !exceedConfirmInfo )
      goto LABEL_41;
  }
  y = this->fields.center.fields.y;
  v30 = *((_DWORD *)exceedConfirmInfo + 11);
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0);
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  if ( v30 >= (int)max_length )
    v31 = max_length;
  else
    v31 = v30;
  v32 = 55.0;
  if ( v30 >= (int)max_length )
    v32 = y;
  v33 = (float)(this->fields.center.fields.x - (float)((float)(v24 * 0.5) * (float)(v31 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)exceedConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v32 - 1),
    0);
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0);
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  v52.fields.x = 0.5;
  v52.fields.y = 0.5;
  v52.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)exceedConfirmInfo, v52, 0);
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  UIGrid__set_repositionNow((UIGrid_o *)exceedConfirmInfo, 1, 0);
  exceedConfirmSpendQpTxtLb = this->fields.exceedConfirmSpendQpTxtLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMBINE_SPEND_QP"*/, 0);
  if ( !exceedConfirmSpendQpTxtLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmSpendQpTxtLb, (System_String_o *)exceedConfirmInfo, 0);
  exceedConfirmHaveQpTxtLb = this->fields.exceedConfirmHaveQpTxtLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3720/*"COMBINE_HAVE_QP"*/, 0);
  if ( !exceedConfirmHaveQpTxtLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmHaveQpTxtLb, (System_String_o *)exceedConfirmInfo, 0);
  exceedConfirmSpendQpLb = this->fields.exceedConfirmSpendQpLb;
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  v51 = spendQp;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v51);
  exceedConfirmInfo = System_String__Format(v40, v41, 0);
  if ( !exceedConfirmSpendQpLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmSpendQpLb, (System_String_o *)exceedConfirmInfo, 0);
  exceedConfirmHaveQpLb = this->fields.exceedConfirmHaveQpLb;
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  v50 = haveQp;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v50);
  exceedConfirmInfo = System_String__Format(v43, v44, 0);
  if ( !exceedConfirmHaveQpLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmHaveQpLb, (System_String_o *)exceedConfirmInfo, 0);
  exceedMaterialMsgLb = this->fields.exceedMaterialMsgLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3719/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, 0);
  if ( !exceedMaterialMsgLb
    || (UILabel__set_text(exceedMaterialMsgLb, (System_String_o *)exceedConfirmInfo, 0),
        exceedConfirmMsgLb = this->fields.exceedConfirmMsgLb,
        exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3882/*"CONFIRM_COMBINE_MSG"*/, 0),
        !exceedConfirmMsgLb)
    || (UILabel__set_text(exceedConfirmMsgLb, (System_String_o *)exceedConfirmInfo, 0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_41:
    sub_21FFECC(exceedConfirmInfo, v14);
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v48 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v48, (Il2CppObject *)this, Method_SetRarityDialogControl__SetExceedMaterialInfo_b__140_0__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 0, v48, 0, 0, v49);
  }
}


void SetRarityDialogControl__SetFriendshipExceedInfo(
        SetRarityDialogControl_o *this,
        System_String_o *msg,
        int32_t spendQp,
        int64_t haveQp,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *friendshipExceedConfirmInfo; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  UILabel_o *cancelBtnLb; // x22
  UILabel_o *decideBtnLb; // x22
  UILabel_o *friendshipExceedSpendQpTxtLb; // x22
  UILabel_o *friendshipExceedHaveQpTxtLb; // x22
  UILabel_o *friendshipExceedSpendQpLb; // x22
  System_String_o *v21; // x23
  Il2CppObject *v22; // x0
  UILabel_o *friendshipExceedHaveQpLb; // x21
  System_String_o *v24; // x22
  Il2CppObject *v25; // x0
  UILabel_o *friendshipExceedMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v28; // x20
  const MethodInfo *v29; // x5
  int64_t v30; // [xsp+0h] [xbp-50h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_593224C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__155_0__);
    sub_21FFC50(&StringLiteral_9609/*"NEED_QP"*/);
    sub_21FFC50(&StringLiteral_3720/*"COMBINE_HAVE_QP"*/);
    sub_21FFC50(&StringLiteral_6792/*"FRIENDSHIP_EXCEED_SPEND_QP"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_3890/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/);
    byte_593224C = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)msg);
  SetRarityDialogControl__RemoveAllChild(this, v9);
  friendshipExceedConfirmInfo = this->fields.friendshipExceedConfirmInfo;
  if ( !friendshipExceedConfirmInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(friendshipExceedConfirmInfo, 1, 0);
  friendshipExceedConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !friendshipExceedConfirmInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(friendshipExceedConfirmInfo, 1, 0);
  SetRarityDialogControl__Open(this, v12);
  SetRarityDialogControl__DefaultBgSize(this, v13);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)this->fields.friendshipExceedTitleLb;
  if ( !friendshipExceedConfirmInfo )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)friendshipExceedConfirmInfo, msg, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0);
  if ( !cancelBtnLb )
    goto LABEL_21;
  UILabel__set_text(cancelBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0);
  if ( !decideBtnLb )
    goto LABEL_21;
  UILabel__set_text(decideBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0);
  friendshipExceedSpendQpTxtLb = this->fields.friendshipExceedSpendQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_6792/*"FRIENDSHIP_EXCEED_SPEND_QP"*/,
                                                              0);
  if ( !friendshipExceedSpendQpTxtLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedSpendQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0);
  friendshipExceedHaveQpTxtLb = this->fields.friendshipExceedHaveQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3720/*"COMBINE_HAVE_QP"*/,
                                                              0);
  if ( !friendshipExceedHaveQpTxtLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedHaveQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0);
  friendshipExceedSpendQpLb = this->fields.friendshipExceedSpendQpLb;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  v31 = spendQp;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v31);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v21, v22, 0);
  if ( !friendshipExceedSpendQpLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedSpendQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0);
  friendshipExceedHaveQpLb = this->fields.friendshipExceedHaveQpLb;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  v30 = haveQp;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v30);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v24, v25, 0);
  if ( !friendshipExceedHaveQpLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedHaveQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0);
  friendshipExceedMsgLb = this->fields.friendshipExceedMsgLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3890/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/,
                                                              0);
  if ( !friendshipExceedMsgLb
    || (UILabel__set_text(friendshipExceedMsgLb, (System_String_o *)friendshipExceedConfirmInfo, 0),
        (friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0)
    || (friendshipExceedConfirmInfo = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)friendshipExceedConfirmInfo,
                                        0)) == 0
    || (UnityEngine_GameObject__SetActive(friendshipExceedConfirmInfo, 0, 0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_21:
    sub_21FFECC(friendshipExceedConfirmInfo, v10);
  }
  if ( combineRootComponent->fields.state == 12 )
  {
    v28 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v28,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__155_0__,
      0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v28, 0, 0, v29);
  }
}


void SetRarityDialogControl__SetLimitUpInfo(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        CombineLimitUpWarningDialog_o *combineLimitUpWarningDialog,
        System_String_o *msg,
        int32_t spendQp,
        int64_t haveQp,
        const MethodInfo *method)
{
  __int64 v13; // x20
  UnityEngine_GameObject_o *limitUpConfirmInfo; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  __int64 v38; // x1
  __int64 v39; // x2
  UILabel_o *cancelBtnLb; // x23
  UILabel_o *decideBtnLb; // x23
  UILabel_o *limitUpConfirmSpendQpTxtLb; // x23
  UILabel_o *limitUpConfirmHaveQpTxtLb; // x23
  UILabel_o *limitUpConfirmSpendQpLb; // x23
  System_String_o *v45; // x24
  Il2CppObject *v46; // x0
  UILabel_o *limitUpConfirmHaveQpLb; // x22
  System_String_o *v48; // x23
  Il2CppObject *v49; // x0
  UILabel_o *limitUpConfirmMsgLb; // x21
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v52; // x21
  const MethodInfo *v53; // x5
  int64_t v54; // [xsp+8h] [xbp-58h] BYREF
  int32_t v55; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_5932242 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl___c__DisplayClass145_0__SetLimitUpInfo_b__0__);
    sub_21FFC50(&SetRarityDialogControl___c__DisplayClass145_0_TypeInfo);
    sub_21FFC50(&StringLiteral_9609/*"NEED_QP"*/);
    sub_21FFC50(&StringLiteral_3720/*"COMBINE_HAVE_QP"*/);
    sub_21FFC50(&StringLiteral_3882/*"CONFIRM_COMBINE_MSG"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_3754/*"COMBINE_SPEND_QP"*/);
    byte_5932242 = 1;
  }
  v13 = sub_21FFEBC(SetRarityDialogControl___c__DisplayClass145_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_22;
  *(_QWORD *)(v13 + 16) = baseData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)baseData, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = combineLimitUpWarningDialog;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v13 + 24),
    (int32_t)combineLimitUpWarningDialog,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  *(_QWORD *)(v13 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)this, v28, v29, v30, v31, v32, v33);
  SetRarityDialogControl__DisableConfirmInfo(this, v34);
  SetRarityDialogControl__RemoveAllChild(this, v35);
  limitUpConfirmInfo = this->fields.limitUpConfirmInfo;
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0);
  limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0);
  SetRarityDialogControl__Open(this, v36);
  SetRarityDialogControl__DefaultBgSize(this, v37);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.limitUpTitleLb;
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)limitUpConfirmInfo, msg, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38, v39);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_22;
  UILabel__set_text(cancelBtnLb, (System_String_o *)limitUpConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_22;
  UILabel__set_text(decideBtnLb, (System_String_o *)limitUpConfirmInfo, 0);
  limitUpConfirmSpendQpTxtLb = this->fields.limitUpConfirmSpendQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMBINE_SPEND_QP"*/, 0);
  if ( !limitUpConfirmSpendQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmSpendQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0);
  limitUpConfirmHaveQpTxtLb = this->fields.limitUpConfirmHaveQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3720/*"COMBINE_HAVE_QP"*/, 0);
  if ( !limitUpConfirmHaveQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmHaveQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0);
  limitUpConfirmSpendQpLb = this->fields.limitUpConfirmSpendQpLb;
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  v55 = spendQp;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v55);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v45, v46, 0);
  if ( !limitUpConfirmSpendQpLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmSpendQpLb, (System_String_o *)limitUpConfirmInfo, 0);
  limitUpConfirmHaveQpLb = this->fields.limitUpConfirmHaveQpLb;
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  v54 = haveQp;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v54);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v48, v49, 0);
  if ( !limitUpConfirmHaveQpLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmHaveQpLb, (System_String_o *)limitUpConfirmInfo, 0);
  limitUpConfirmMsgLb = this->fields.limitUpConfirmMsgLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3882/*"CONFIRM_COMBINE_MSG"*/, 0);
  if ( !limitUpConfirmMsgLb
    || (UILabel__set_text(limitUpConfirmMsgLb, (System_String_o *)limitUpConfirmInfo, 0),
        (limitUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0)
    || (limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)limitUpConfirmInfo, 0)) == 0
    || (UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 0, 0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_22:
    sub_21FFECC(limitUpConfirmInfo, v15);
  }
  if ( combineRootComponent->fields.state == 5 )
  {
    v52 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v52,
      (Il2CppObject *)v13,
      Method_SetRarityDialogControl___c__DisplayClass145_0__SetLimitUpInfo_b__0__,
      0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v52, 0, 0, v53);
  }
}


void SetRarityDialogControl__SetNpCombineInfo(
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
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  UnityEngine_GameObject_o *npUpConfirmInfo; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  UILabel_o *npUpTitleLb; // x21
  System_String_o **v44; // x8
  __int64 v45; // x1
  __int64 v46; // x2
  UILabel_o *cancelBtnLb; // x21
  UILabel_o *decideBtnLb; // x21
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v50; // x20
  System_Action_o *v51; // x21
  const MethodInfo *v52; // x5
  SetRarityDialogControl_o *v53; // x0
  int32_t v54; // w1
  const MethodInfo *v55; // [xsp+0h] [xbp-70h]

  if ( (byte_5932245 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl_DefaultBgSize__);
    sub_21FFC50(&Method_SetRarityDialogControl__SetNpCombineInfo_b__148_0__);
    sub_21FFC50(&Method_SetRarityDialogControl__SetNpCombineInfo_b__148_1__);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_3917/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/);
    sub_21FFC50(&StringLiteral_3915/*"CONFIRM_TITLE_TD_COMBINE"*/);
    byte_5932245 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  SetRarityDialogControl__RemoveAllChild(this, v17);
  npUpConfirmInfo = this->fields.npUpConfirmInfo;
  if ( !npUpConfirmInfo )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0);
  this->fields.npBaseData = baseData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.npBaseData,
    (int32_t)baseData,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.npSelectMtUsrSvtIdList = selectUsrSvtIdList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.npSelectMtUsrSvtIdList,
    (int32_t)selectUsrSvtIdList,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.npLvUpData = updata;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.npLvUpData,
    (int32_t)updata,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.npIsExceedMaxLv = isExceedMaxLv;
  this->fields.npIsCombineSvt = isCombineSvt;
  this->fields.npIsExceededMaterial = isExceededMaterial;
  npUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !npUpConfirmInfo )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0);
  SetRarityDialogControl__Open(this, v38);
  SetRarityDialogControl__DefaultBgSize(this, v39);
  npUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.mPanelBg;
  if ( !npUpConfirmInfo )
    goto LABEL_27;
  UIWidget__set_height((UIWidget_o *)npUpConfirmInfo, 500, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, -8.0, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnInfo, -23.0, 0);
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
    v55);
  npUpTitleLb = this->fields.npUpTitleLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41, v42);
  v44 = (System_String_o **)(reConfirmation ? &StringLiteral_3917/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/ : &StringLiteral_3915/*"CONFIRM_TITLE_TD_COMBINE"*/);
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(*v44, 0);
  if ( !npUpTitleLb )
    goto LABEL_27;
  UILabel__set_text(npUpTitleLb, (System_String_o *)npUpConfirmInfo, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45, v46);
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb
    || (UILabel__set_text(cancelBtnLb, (System_String_o *)npUpConfirmInfo, 0),
        decideBtnLb = this->fields.decideBtnLb,
        npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0),
        !decideBtnLb)
    || (UILabel__set_text(decideBtnLb, (System_String_o *)npUpConfirmInfo, 0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_27:
    sub_21FFECC(npUpConfirmInfo, v18);
  }
  if ( combineRootComponent->fields.state == 11 )
  {
    if ( (this->fields.npIsExceedMaxLv || this->fields.npIsCombineSvt || this->fields.npIsExceededMaterial)
      && !reConfirmation )
    {
      v50 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v50, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__148_0__, 0);
      v51 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v51, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0);
      v53 = this;
      v54 = 0;
    }
    else
    {
      v50 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v50, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__148_1__, 0);
      v51 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v51, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0);
      v53 = this;
      v54 = 8;
    }
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v53, v54, v50, 0, v51, v52);
  }
}


void SetRarityDialogControl__SetSkillNpCombineInfo(
        SetRarityDialogControl_o *this,
        SetLevelUpData_array *upDataList,
        System_String_o *titleMsg,
        bool isNotSkillChange,
        int32_t displayTransformIndex,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *skillUpConfirmInfo; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  Il2CppClass **v16; // x25
  Il2CppClass *v17; // x24
  char *v18; // x25
  Il2CppClass *v19; // t1
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UIExtrusionLabel_o *currentLvLb; // x20
  UIExtrusionLabel_o *resLvLb; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  UILabel_o *upSpendQpTxtLb; // x20
  UILabel_o *upHaveQpTxtLb; // x20
  UILabel_o *upSpendQpLb; // x20
  System_String_o *v30; // x21
  Il2CppObject *v31; // x0
  UILabel_o *upHaveQpLb; // x20
  System_String_o *v33; // x21
  Il2CppObject *v34; // x0
  UILabel_o *upConfirmMsgLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v39; // x20
  const MethodInfo *v40; // x5
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct UILabel_o *upTargetSkillNameBef; // x23
  UnityEngine_GameObject_o *v51; // x22
  __int64 v52; // x1
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  struct UILabel_o *upTargetSkillNameAft; // x23
  int max_length; // w26
  UnityEngine_GameObject_o *v61; // x23
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  unsigned int v68; // w21
  SetLevelUpData_o *v69; // x8
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  int klass; // w8
  __int64 v77; // x20
  __int64 v78; // x0
  Il2CppClass *declaringType; // [xsp+0h] [xbp-60h] BYREF
  int castClass_high; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_5932243 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__146_0__);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&UILabel___TypeInfo);
    sub_21FFC50(&StringLiteral_9609/*"NEED_QP"*/);
    sub_21FFC50(&StringLiteral_3720/*"COMBINE_HAVE_QP"*/);
    sub_21FFC50(&StringLiteral_3882/*"CONFIRM_COMBINE_MSG"*/);
    sub_21FFC50(&StringLiteral_26731/*"】"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_3754/*"COMBINE_SPEND_QP"*/);
    sub_21FFC50(&StringLiteral_26726/*"【"*/);
    byte_5932243 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)upDataList);
  SetRarityDialogControl__RemoveAllChild(this, v11);
  skillUpConfirmInfo = this->fields.skillUpConfirmInfo;
  if ( !skillUpConfirmInfo
    || (UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0),
        (skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0)
    || (UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0),
        SetRarityDialogControl__Open(this, v14),
        SetRarityDialogControl__DefaultBgSize(this, v15),
        !upDataList) )
  {
LABEL_64:
    sub_21FFECC(skillUpConfirmInfo, v12);
  }
  if ( LODWORD(upDataList->max_length) <= displayTransformIndex )
    goto LABEL_65;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTitleLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_64;
  v16 = &upDataList->obj.klass + displayTransformIndex;
  v19 = v16[4];
  v18 = (char *)(v16 + 4);
  v17 = v19;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, titleMsg, 0);
  if ( !v19 )
    goto LABEL_64;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetRubyLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_64;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, (System_String_o *)v17->_1.byval_arg.data, 0);
  if ( !isNotSkillChange && SLODWORD(upDataList->max_length) >= 2 )
  {
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetNameLb;
    if ( !skillUpConfirmInfo )
      goto LABEL_64;
    skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
    if ( !skillUpConfirmInfo )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 0, 0);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetSkillNameBef;
    if ( !skillUpConfirmInfo )
      goto LABEL_64;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0);
    if ( !skillUpConfirmInfo )
      goto LABEL_64;
    skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
    if ( !skillUpConfirmInfo )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upSpendQpTxtLb;
    if ( !skillUpConfirmInfo )
      goto LABEL_64;
    v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
    GameObjectExtensions__SetLocalPositionX(v42, 11.0, 0);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upHaveQpTxtLb;
    if ( !skillUpConfirmInfo )
      goto LABEL_64;
    v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
    GameObjectExtensions__SetLocalPositionX(v43, 11.0, 0);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_21FFD10(UILabel___TypeInfo, 2);
    if ( !skillUpConfirmInfo )
      goto LABEL_64;
    upTargetSkillNameBef = this->fields.upTargetSkillNameBef;
    v51 = skillUpConfirmInfo;
    if ( upTargetSkillNameBef )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_21FFDA4(
                                                         this->fields.upTargetSkillNameBef,
                                                         skillUpConfirmInfo->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_66;
    }
    if ( !LODWORD(v51[1].klass) )
      goto LABEL_65;
    v51[1].monitor = upTargetSkillNameBef;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v51[1].monitor,
      (int32_t)upTargetSkillNameBef,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
    upTargetSkillNameAft = this->fields.upTargetSkillNameAft;
    if ( upTargetSkillNameAft )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_21FFDA4(
                                                         this->fields.upTargetSkillNameAft,
                                                         v51->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
      {
LABEL_66:
        v78 = sub_21FFEF0(skillUpConfirmInfo, v52);
        sub_21FFD90(v78, 0);
      }
    }
    if ( ((__int64)v51[1].klass & 0xFFFFFFFE) != 0 )
    {
      v51[1].fields.m_CachedPtr = (intptr_t)upTargetSkillNameAft;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v51[1].fields,
        (int32_t)upTargetSkillNameAft,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
      max_length = upDataList->max_length;
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_21FFD10(string___TypeInfo, 2);
      if ( LODWORD(upDataList->max_length) > displayTransformIndex )
      {
        if ( !*(_QWORD *)v18 )
          goto LABEL_64;
        v61 = skillUpConfirmInfo;
        skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Concat_75483552(
                                                           (System_String_o *)StringLiteral_26726/*"【"*/,
                                                           *(System_String_o **)(*(_QWORD *)v18 + 56LL),
                                                           (System_String_o *)StringLiteral_26731/*"】"*/,
                                                           *(System_String_o **)(*(_QWORD *)v18 + 40LL),
                                                           0);
        if ( !v61 )
          goto LABEL_64;
        if ( LODWORD(v61[1].klass) )
        {
          v61[1].monitor = skillUpConfirmInfo;
          v68 = (displayTransformIndex + 1) % max_length;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v61[1].monitor,
            (int32_t)skillUpConfirmInfo,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67);
          if ( v68 < LODWORD(upDataList->max_length) )
          {
            v69 = upDataList->m_Items[v68];
            if ( !v69 )
              goto LABEL_64;
            skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Concat_75483552(
                                                               (System_String_o *)StringLiteral_26726/*"【"*/,
                                                               v69->fields.displayText,
                                                               (System_String_o *)StringLiteral_26731/*"】"*/,
                                                               v69->fields.targetName,
                                                               0);
            if ( ((__int64)v61[1].klass & 0xFFFFFFFE) != 0 )
            {
              v61[1].fields.m_CachedPtr = (intptr_t)skillUpConfirmInfo;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&v61[1].fields,
                (int32_t)skillUpConfirmInfo,
                v70,
                v71,
                v72,
                v73,
                v74,
                v75);
              klass = (int)v51[1].klass;
              if ( klass < 1 )
                goto LABEL_21;
              v77 = 0;
              while ( (unsigned int)v77 < klass && (unsigned int)v77 < LODWORD(v61[1].klass) )
              {
                skillUpConfirmInfo = (UnityEngine_GameObject_o *)*((_QWORD *)&v51[1].monitor + v77);
                if ( !skillUpConfirmInfo )
                  goto LABEL_64;
                UILabel__set_text((UILabel_o *)skillUpConfirmInfo, *((System_String_o **)&v61[1].monitor + v77), 0);
                klass = (int)v51[1].klass;
                if ( (int)++v77 >= klass )
                  goto LABEL_21;
              }
            }
          }
        }
      }
    }
LABEL_65:
    sub_21FFED4(skillUpConfirmInfo);
  }
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetNameLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_64;
  skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
  if ( !skillUpConfirmInfo )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetNameLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_64;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, *(System_String_o **)&v17->_1.byval_arg.bits, 0);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetSkillNameBef;
  if ( !skillUpConfirmInfo )
    goto LABEL_64;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v20, 0);
  if ( !skillUpConfirmInfo )
    goto LABEL_64;
  skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
  if ( !skillUpConfirmInfo )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 0, 0);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upSpendQpTxtLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_64;
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
  GameObjectExtensions__SetLocalPositionX(v21, -5.0, 0);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upHaveQpTxtLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_64;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
  GameObjectExtensions__SetLocalPositionX(v22, -5.0, 0);
LABEL_21:
  currentLvLb = this->fields.currentLvLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v17 + 64, 0);
  if ( !currentLvLb )
    goto LABEL_64;
  UIExtrusionLabel__set_text(currentLvLb, (System_String_o *)skillUpConfirmInfo, 0);
  resLvLb = this->fields.resLvLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v17 + 68, 0);
  if ( !resLvLb )
    goto LABEL_64;
  UIExtrusionLabel__set_text(resLvLb, (System_String_o *)skillUpConfirmInfo, 0);
  upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMBINE_SPEND_QP"*/, 0);
  if ( !upSpendQpTxtLb )
    goto LABEL_64;
  UILabel__set_text(upSpendQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0);
  upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3720/*"COMBINE_HAVE_QP"*/, 0);
  if ( !upHaveQpTxtLb )
    goto LABEL_64;
  UILabel__set_text(upHaveQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0);
  upSpendQpLb = this->fields.upSpendQpLb;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  castClass_high = HIDWORD(v17->_1.castClass);
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &castClass_high);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v30, v31, 0);
  if ( !upSpendQpLb )
    goto LABEL_64;
  UILabel__set_text(upSpendQpLb, (System_String_o *)skillUpConfirmInfo, 0);
  upHaveQpLb = this->fields.upHaveQpLb;
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  declaringType = v17->_1.declaringType;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &declaringType);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v33, v34, 0);
  if ( !upHaveQpLb )
    goto LABEL_64;
  UILabel__set_text(upHaveQpLb, (System_String_o *)skillUpConfirmInfo, 0);
  upConfirmMsgLb = this->fields.upConfirmMsgLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3882/*"CONFIRM_COMBINE_MSG"*/, 0);
  if ( !upConfirmMsgLb )
    goto LABEL_64;
  UILabel__set_text(upConfirmMsgLb, (System_String_o *)skillUpConfirmInfo, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_64;
  UILabel__set_text(cancelBtnLb, (System_String_o *)skillUpConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_64;
  UILabel__set_text(decideBtnLb, (System_String_o *)skillUpConfirmInfo, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_64;
  if ( combineRootComponent->fields.state == 10 )
  {
    v39 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v39, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__146_0__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v39, 0, 0, v40);
  }
}


void SetRarityDialogControl__SetSpecialAscension(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        bool confirm,
        bool warning1,
        bool warning2,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *specialAscensionConfirmInfo; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  __int64 v20; // x2
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  System_Action_o *v23; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v25; // x21
  const MethodInfo *v26; // x5
  SetRarityDialogControl_o *v27; // x0
  int32_t v28; // w1

  if ( (byte_593224D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl__SetSpecialAscension_b__156_0__);
    sub_21FFC50(&Method_SetRarityDialogControl__SetSpecialAscension_b__156_1__);
    sub_21FFC50(&Method_SetRarityDialogControl__SetSpecialAscension_b__156_2__);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_12759/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/);
    sub_21FFC50(&StringLiteral_12763/*"SPECIAL_ASCENSION_WARNING1_TXT"*/);
    sub_21FFC50(&StringLiteral_12764/*"SPECIAL_ASCENSION_WARNING2_TXT"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593224D = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  SetRarityDialogControl__RemoveAllChild(this, v10);
  specialAscensionConfirmInfo = this->fields.specialAscensionConfirmInfo;
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 1, 0);
  specialAscensionConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 1, 0);
  SetRarityDialogControl__Open(this, v13);
  SetRarityDialogControl__DefaultBgSize(this, v14);
  this->fields.specialAscensionConfirm = confirm;
  this->fields.specialAscensionWarning1 = warning1;
  this->fields.specialAscensionWarning2 = warning2;
  if ( confirm )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v15);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12759/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/, 0);
    this->fields.specialAscensionConfirm = 0;
  }
  else if ( warning1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v15);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12763/*"SPECIAL_ASCENSION_WARNING1_TXT"*/, 0);
    this->fields.specialAscensionWarning1 = 0;
  }
  else if ( warning2 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v15);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12764/*"SPECIAL_ASCENSION_WARNING2_TXT"*/, 0);
    this->fields.specialAscensionWarning2 = 0;
  }
  else
  {
    v16 = (System_String_o *)StringLiteral_1/*""*/;
  }
  specialAscensionConfirmInfo = this->fields.specialAscensionConfirmInfo;
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              specialAscensionConfirmInfo,
                                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___);
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  SpecialAscensionConfirmInfo__SetSpecialAscensionConfirmInfo(
    (SpecialAscensionConfirmInfo_o *)specialAscensionConfirmInfo,
    v16,
    v17,
    v18);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0);
  if ( !cancelBtnLb )
    goto LABEL_37;
  UILabel__set_text(cancelBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0);
  if ( !decideBtnLb
    || (UILabel__set_text(decideBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0),
        (specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0)
    || (specialAscensionConfirmInfo = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)specialAscensionConfirmInfo,
                                        0)) == 0
    || (UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 0, 0),
        v23 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v23,
          (Il2CppObject *)this,
          Method_SetRarityDialogControl__SetSpecialAscension_b__156_0__,
          0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_37:
    sub_21FFECC(specialAscensionConfirmInfo, v11);
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
      v25 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__156_1__, 0);
      v27 = this;
      v28 = 8;
      goto LABEL_35;
    }
    v25 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v25, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__156_2__, 0);
    v27 = this;
    v28 = 0;
LABEL_35:
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v27, v28, v25, v23, 0, v26);
  }
}


// local variable allocation has failed, the output may be wrong!
void SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_Collections_Generic_Dictionary_long__bool__o *selectedList,
        System_String_o *title,
        int32_t spendQp,
        int64_t haveQp,
        bool isRare,
        System_String_o *limitWarningMsg,
        const MethodInfo *method)
{
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  UnityEngine_GameObject_o *allDispConfirmInfo; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  UILabel_o *cancelBtnLb; // x26
  UILabel_o *decideBtnLb; // x26
  const MethodInfo *v25; // x1
  struct System_Collections_Generic_Dictionary_TKey__TValue__o *v26; // x22
  struct UIGrid_o *allSvtGrid; // x8
  float v28; // s8
  int32_t v29; // w26
  __int64 v30; // x1
  UnityEngine_Component_o *v31; // x0
  Il2CppObject *key; // x27
  __int64 value_low; // x20
  UnityEngine_GameObject_o *svtFaceInfo; // x28
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  __int64 v37; // x1
  Il2CppObject *Component_object; // x0
  __int64 v39; // x1
  float y; // s9
  int32_t Count; // w25
  struct UIGrid_o *v42; // x8
  int32_t v43; // w24
  int32_t maxPerLine; // w20
  int32_t v45; // w8
  float z; // s2
  float v47; // s1 OVERLAPPED
  float v48; // s0
  __int64 v49; // x1
  __int64 v50; // x2
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v54; // x25
  Il2CppObject *v55; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v57; // x24
  Il2CppObject *v58; // x0
  __int64 v59; // x2
  UILabel_o *allRareMsgLb; // x20
  UILabel_o *allLimitRareLb; // x20
  UILabel_o *allRareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v64; // x20
  const MethodInfo *v65; // x5
  const MethodInfo *v66; // [xsp+0h] [xbp-F0h]
  int32_t v68; // [xsp+20h] [xbp-D0h]
  int32_t v69; // [xsp+24h] [xbp-CCh] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v70; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v71; // [xsp+50h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5932248 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__151_0__);
    sub_21FFC50(&StringLiteral_9609/*"NEED_QP"*/);
    sub_21FFC50(&StringLiteral_3720/*"COMBINE_HAVE_QP"*/);
    sub_21FFC50(&StringLiteral_3882/*"CONFIRM_COMBINE_MSG"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_11414/*"RARE_MATERIAL_INFO_MSG"*/);
    sub_21FFC50(&StringLiteral_3754/*"COMBINE_SPEND_QP"*/);
    byte_5932248 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  SetRarityDialogControl__RemoveAllChild(this, v16);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0);
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  v68 = spendQp;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0);
  SetRarityDialogControl__Open(this, v19);
  SetRarityDialogControl__DefaultBgSize(this, v20);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allTitleLb;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UILabel__set_text((UILabel_o *)allDispConfirmInfo, title, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_69;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_69;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0);
  SetRarityDialogControl__SetCenter(this, v25);
  if ( !selectedList )
    goto LABEL_69;
  v26 = (struct System_Collections_Generic_Dictionary_TKey__TValue__o *)haveQp;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_3F8EEAC *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allSvtGrid = this->fields.allSvtGrid;
  if ( !allSvtGrid )
    goto LABEL_69;
  v28 = allSvtGrid->fields.cellWidth * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v70,
    selectedList,
    (const MethodInfo_3F8F610 *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v29 = 0;
  v71 = v70;
  v70.fields._dictionary = 0;
  *(_QWORD *)&v70.fields._version = &v71;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v71,
            (const MethodInfo_412B874 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v31 = (UnityEngine_Component_o *)this->fields.allSvtGrid;
    if ( !v31 )
      sub_21FFECC(0, v30);
    key = v71.fields._current.fields.key;
    value_low = LOBYTE(v71.fields._current.fields.value);
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v31, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
    if ( !Object )
      sub_21FFECC(0, v37);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_object )
      sub_21FFECC(0, v39);
    MaterialSvtInfo__setMaterialSvtInfo_37861504(
      (MaterialSvtInfo_o *)Component_object,
      v29++,
      baseData,
      (int64_t)key,
      0,
      0,
      value_low != 0,
      0,
      v66);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v71,
    (const MethodInfo_412B990 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_3F8EEAC *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_3F8EEAC *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v42 = this->fields.allSvtGrid;
  if ( !v42 )
    goto LABEL_69;
  v43 = (int)allDispConfirmInfo;
  maxPerLine = v42->fields.maxPerLine;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this->fields.allSvtGrid,
                                                     0);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  if ( v43 <= maxPerLine )
    v45 = Count;
  else
    v45 = maxPerLine;
  v47 = 70.0;
  if ( v43 <= maxPerLine )
    v47 = y;
  v48 = (float)(this->fields.center.fields.x - (float)(v28 * (float)(v45 - 1))) * 0.47;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v47 - 1),
    0);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)allDispConfirmInfo,
                                                     0);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  v72.fields.x = 0.47;
  v72.fields.y = 0.47;
  v72.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v72, 0);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UIGrid__set_repositionNow((UIGrid_o *)allDispConfirmInfo, 1, 0);
  allSpendQpTxtLb = this->fields.allSpendQpTxtLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49, v50);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMBINE_SPEND_QP"*/, 0);
  if ( !allSpendQpTxtLb )
    goto LABEL_69;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3720/*"COMBINE_HAVE_QP"*/, 0);
  if ( !allHaveQpTxtLb )
    goto LABEL_69;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0);
  allSpendQpLb = this->fields.allSpendQpLb;
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  v69 = v68;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v69);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v54, v55, 0);
  if ( !allSpendQpLb )
    goto LABEL_69;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0);
  allHaveQpLb = this->fields.allHaveQpLb;
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_9609/*"NEED_QP"*/, 0);
  v70.fields._dictionary = v26;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v70);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v57, v58, 0);
  if ( !allHaveQpLb )
    goto LABEL_69;
  UILabel__set_text(allHaveQpLb, (System_String_o *)allDispConfirmInfo, 0);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allStatusUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 0, 0);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allLimitUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 0, 0);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allRareMsgLb;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 0, 0);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allLimitRareLb;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 0, 0);
  if ( System_String__IsNullOrEmpty(limitWarningMsg, 0) )
  {
    if ( !isRare )
      goto LABEL_59;
    allRareMsgLb = this->fields.allRareMsgLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v59);
    allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11414/*"RARE_MATERIAL_INFO_MSG"*/, 0);
    if ( !allRareMsgLb )
      goto LABEL_69;
    UILabel__set_text(allRareMsgLb, (System_String_o *)allDispConfirmInfo, 0);
    allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allRareMsgLb;
    if ( !allDispConfirmInfo )
      goto LABEL_69;
    goto LABEL_57;
  }
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allLimitUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UILabel__set_text((UILabel_o *)allDispConfirmInfo, limitWarningMsg, 0);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allLimitUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0);
  if ( isRare )
  {
    allLimitRareLb = this->fields.allLimitRareLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v59);
    allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11414/*"RARE_MATERIAL_INFO_MSG"*/, 0);
    if ( allLimitRareLb )
    {
      UILabel__set_text(allLimitRareLb, (System_String_o *)allDispConfirmInfo, 0);
      allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allLimitRareLb;
      if ( allDispConfirmInfo )
      {
LABEL_57:
        allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0);
        if ( !allDispConfirmInfo )
          goto LABEL_69;
        UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0);
        goto LABEL_59;
      }
    }
LABEL_69:
    sub_21FFECC(allDispConfirmInfo, v17);
  }
LABEL_59:
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v59);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3882/*"CONFIRM_COMBINE_MSG"*/, 0);
  if ( !allRareConfirmMsgLb )
    goto LABEL_69;
  UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_69;
  if ( combineRootComponent->fields.state == 4 )
  {
    v64 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v64,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__151_0__,
      0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v64, 0, 0, v65);
  }
}


void SetRarityDialogControl___SetAllDispConfirmCombine_b__143_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_21FFECC(0, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___SetConfirmCombine_b__141_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_21FFECC(0, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___SetConfirmLvExceed_b__149_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_21FFECC(0, method);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0);
}


void SetRarityDialogControl___SetConfirmLvExceed_b__149_1(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.lvExceedCtr) == 0 )
    sub_21FFECC(this, method);
  LevelExceedControl__OnClickCheckLvExceed((LevelExceedControl_o *)this, 0);
}


void SetRarityDialogControl___SetConfirmLvExceed_b__150_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_21FFECC(0, method);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0);
}


void SetRarityDialogControl___SetConfirmRarityInfo_b__139_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_21FFECC(0, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___SetConfirmSvtEqCombine_b__142_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_21FFECC(0, method);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___SetExceedMaterialInfo_b__140_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.svtCombineCtr) == 0 )
    sub_21FFECC(this, method);
  ServantCombineControl__CheckRareSvt((ServantCombineControl_o *)this, 0);
}


void SetRarityDialogControl___SetFriendshipExceedInfo_b__155_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_21FFECC(0, method);
  CombineRootComponent__RequestFriendshipExceed(combineRootComponent, 0);
}


void SetRarityDialogControl___SetNpCombineInfo_b__148_0(SetRarityDialogControl_o *this, const MethodInfo *method)
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


void SetRarityDialogControl___SetNpCombineInfo_b__148_1(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_21FFECC(0, method);
  CombineRootComponent__RequestTdCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___SetSkillNpCombineInfo_b__146_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_21FFECC(0, method);
  CombineRootComponent__RequestSkillCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___SetSpecialAscension_b__156_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8
  struct SpecialAscensionControl_o *specialAscensionCtr; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (specialAscensionCtr = combineRootComponent->fields.specialAscensionCtr) == 0 )
    sub_21FFECC(this, method);
  if ( specialAscensionCtr->fields.pushExeButton )
    specialAscensionCtr->fields.pushExeButton = 0;
}


void SetRarityDialogControl___SetSpecialAscension_b__156_1(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v9; // x21
  System_Action_o *v10; // x22

  if ( (byte_5932255 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&CombineRootComponent_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl__SetSpecialAscension_b__156_3__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_12761/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932255 = 1;
  }
  if ( !*(&CombineRootComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, method, v2);
  if ( CombineRootComponent__IsEnableSpecialAscension(0) )
  {
    combineRootComponent = this->fields.combineRootComponent;
    if ( combineRootComponent )
    {
      CombineRootComponent__RequestSpecialAscension(combineRootComponent, 0);
      return;
    }
LABEL_12:
    sub_21FFECC(combineRootComponent, v4);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12761/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0);
  v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__156_3__, 0);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v9,
    v10,
    -1,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    0,
    0.0,
    0,
    0);
}


void SetRarityDialogControl___SetSpecialAscension_b__156_2(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UserServantEntity_o *v4; // x1
  const MethodInfo *v5; // x5
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v9; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_5932256 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&CombineRootComponent_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SetRarityDialogControl__SetSpecialAscension_b__156_4__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_12761/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5932256 = 1;
  }
  if ( !*(&CombineRootComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, method, v2);
  if ( CombineRootComponent__IsEnableSpecialAscension(0) )
  {
    SetRarityDialogControl__SetSpecialAscension(
      this,
      v4,
      this->fields.specialAscensionConfirm,
      this->fields.specialAscensionWarning1,
      this->fields.specialAscensionWarning2,
      v5);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12761/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0);
    v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__156_4__, 0);
    if ( !Instance )
      sub_21FFECC(v11, v12);
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v9,
      v10,
      -1,
      0,
      0,
      0,
      0,
      0,
      1,
      0,
      0,
      0.0,
      0,
      0);
  }
}


void SetRarityDialogControl___SetSpecialAscension_b__156_3(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8
  SetRarityDialogControl_o *v3; // x19

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent
    || (v3 = this,
        combineRootComponent->fields.specialAscensionCheckedTimeOver = 1,
        SetRarityDialogControl__OnClickCancel(this, method),
        (this = (SetRarityDialogControl_o *)v3->fields.combineRootComponent) == 0) )
  {
    sub_21FFECC(this, method);
  }
  CombineRootComponent__BackSpecialAscension((CombineRootComponent_o *)this, 0);
}


void SetRarityDialogControl___SetSpecialAscension_b__156_4(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8
  SetRarityDialogControl_o *v3; // x19

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent
    || (v3 = this,
        combineRootComponent->fields.specialAscensionCheckedTimeOver = 1,
        SetRarityDialogControl__OnClickCancel(this, method),
        (this = (SetRarityDialogControl_o *)v3->fields.combineRootComponent) == 0) )
  {
    sub_21FFECC(this, method);
  }
  CombineRootComponent__BackSpecialAscension((CombineRootComponent_o *)this, 0);
}


void SetRarityDialogControl___SetSvtEqLimitUpConfirmCombine_b__151_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_21FFECC(0, method);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5932257 & 1) == 0 )
  {
    sub_21FFC50(&SetRarityDialogControl___c_TypeInfo);
    byte_5932257 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(SetRarityDialogControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SetRarityDialogControl___c_TypeInfo->static_fields->__9 = (struct SetRarityDialogControl___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)SetRarityDialogControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SetRarityDialogControl___c___ctor(SetRarityDialogControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SetRarityDialogControl___c___OnClickDlgOk_b__163_0(SetRarityDialogControl___c_o *this, const MethodInfo *method)
{
  ;
}


bool SetRarityDialogControl___c___SetLimitUpInfo_b__145_1(
        SetRarityDialogControl___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  return NpCombineControl__CheckConfirm_55769236(x, 0);
}


void SetRarityDialogControl___c__DisplayClass145_0___ctor(
        SetRarityDialogControl___c__DisplayClass145_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SetRarityDialogControl___c__DisplayClass145_0___SetLimitUpInfo_b__0(
        SetRarityDialogControl___c__DisplayClass145_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  NetworkManager_c *v6; // x0
  int64_t userIdNumber; // x25
  int64_t Instance; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  __int64 v11; // x8
  int64_t v12; // x21
  unsigned __int64 v13; // x26
  __int64 v14; // x22
  __int128 v15; // q1
  int v16; // w8
  __int64 v17; // x23
  __int64 v18; // x24
  struct UserServantEntity_o *baseData; // x8
  int v20; // w23
  __int128 v21; // q1
  int v22; // w8
  struct UserServantEntity_o *v23; // x8
  __int128 v24; // q1
  int64_t v25; // x23
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__145_1; // x21
  Il2CppObject *v37; // x22
  struct SetRarityDialogControl___c_StaticFields *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  CombineLimitUpWarningDialog_ClickDelegate_o *_9__2; // x22
  CombineLimitUpWarningDialog_o *combineLimitUpWarningDialog; // x20
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct SetRarityDialogControl_o *_4__this; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_5932258 & 1) == 0 )
  {
    sub_21FFC50(&CombineLimitUpWarningDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__Find__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&System_Predicate_UserServantEntity__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SetRarityDialogControl___c__SetLimitUpInfo_b__145_1__);
    sub_21FFC50(&Method_SetRarityDialogControl___c__DisplayClass145_0__SetLimitUpInfo_b__2__);
    sub_21FFC50(&SetRarityDialogControl___c_TypeInfo);
    byte_5932258 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    v6 = NetworkManager_TypeInfo;
  }
  userIdNumber = v6->static_fields->userIdNumber;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_51;
  v11 = *(_QWORD *)(Instance + 24);
  v12 = Instance;
  if ( (int)v11 >= 1 )
  {
    v13 = 0;
    do
    {
      if ( v13 >= (unsigned int)v11 )
        sub_21FFED4(Instance);
      v14 = *(_QWORD *)(v12 + 32 + 8 * v13);
      if ( v14 )
      {
        v15 = *(_OWORD *)(v14 + 64);
        v16 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
        *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)(v14 + 48);
        *(_OWORD *)&v57.fields.fakeValue = v15;
        if ( !v16 )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10);
        v56 = v57;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v56, 0);
        if ( Instance == userIdNumber )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v14, 0);
          if ( (Instance & 1) == 0 )
          {
            v17 = *(_QWORD *)(v14 + 80);
            v18 = *(_QWORD *)(v14 + 88);
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
            *(_QWORD *)&v58.fields.currentCryptoKey = v17;
            *(_QWORD *)&v58.fields.fakeValue = v18;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v58, 0);
            baseData = this->fields.baseData;
            if ( !baseData )
              goto LABEL_51;
            v20 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(baseData->fields.svtId, 0);
            if ( v20 == (_DWORD)Instance )
            {
              v21 = *(_OWORD *)(v14 + 32);
              v22 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
              *(_OWORD *)&v57.fields.currentCryptoKey = *(_OWORD *)(v14 + 16);
              *(_OWORD *)&v57.fields.fakeValue = v21;
              if ( !v22 )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9, v10);
              v55 = v57;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v55, 0);
              v23 = this->fields.baseData;
              if ( !v23 )
                goto LABEL_51;
              v24 = *(_OWORD *)&v23->fields.id.fields.fakeValue;
              v25 = Instance;
              *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&v23->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v54.fields.fakeValue = v24;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v54, 0);
              if ( v25 != Instance )
              {
                if ( !v3 )
                  goto LABEL_51;
                items = v3->fields._items;
                v32 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v3->fields._version;
                if ( !items )
                  goto LABEL_51;
                size = v3->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v3,
                    (Il2CppObject *)v14,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
                }
                else
                {
                  v34 = &items->obj.klass + size;
                  v3->fields._size = size + 1;
                  v34[4] = (Il2CppClass *)v14;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 4), v14, v10, v26, v27, v28, v29, v30);
                }
              }
            }
          }
        }
      }
      LODWORD(v11) = *(_DWORD *)(v12 + 24);
    }
    while ( (__int64)++v13 < (int)v11 );
  }
  Instance = (int64_t)SetRarityDialogControl___c_TypeInfo;
  if ( !*(&SetRarityDialogControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo, v9, v10);
    Instance = (int64_t)SetRarityDialogControl___c_TypeInfo;
  }
  static_fields = *(struct SetRarityDialogControl___c_StaticFields **)(Instance + 184);
  _9__145_1 = (System_Predicate_object__o *)static_fields->__9__145_1;
  if ( !_9__145_1 )
  {
    if ( !*(_DWORD *)(Instance + 228) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v9, v10);
      static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__145_1 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_object____ctor(_9__145_1, v37, Method_SetRarityDialogControl___c__SetLimitUpInfo_b__145_1__, 0);
    v38 = SetRarityDialogControl___c_TypeInfo->static_fields;
    v38->__9__145_1 = (struct System_Predicate_UserServantEntity__o *)_9__145_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v38->__9__145_1, (int32_t)_9__145_1, v39, v40, v41, v42, v43, v44);
  }
  if ( !v3 )
    goto LABEL_51;
  Instance = (int64_t)System_Collections_Generic_List_object___Find(
                        v3,
                        (System_Predicate_T__o *)_9__145_1,
                        (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_UserServantEntity__Find__);
  if ( Instance )
  {
    _9__2 = this->fields.__9__2;
    combineLimitUpWarningDialog = this->fields.combineLimitUpWarningDialog;
    if ( !_9__2 )
    {
      _9__2 = (CombineLimitUpWarningDialog_ClickDelegate_o *)sub_21FFEBC(CombineLimitUpWarningDialog_ClickDelegate_TypeInfo);
      CombineLimitUpWarningDialog_ClickDelegate___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_SetRarityDialogControl___c__DisplayClass145_0__SetLimitUpInfo_b__2__,
        0);
      this->fields.__9__2 = _9__2;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.__9__2,
        (int32_t)_9__2,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    if ( combineLimitUpWarningDialog )
    {
      CombineLimitUpWarningDialog__Open(combineLimitUpWarningDialog, _9__2, 0);
      return;
    }
LABEL_51:
    sub_21FFECC(Instance, v9);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_51;
  Instance = (int64_t)_4__this->fields.combineRootComponent;
  if ( !Instance )
    goto LABEL_51;
  CombineRootComponent__RequestLimitUp((CombineRootComponent_o *)Instance, 0);
}


// local variable allocation has failed, the output may be wrong!
void SetRarityDialogControl___c__DisplayClass145_0___SetLimitUpInfo_b__2(
        SetRarityDialogControl___c__DisplayClass145_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct SetRarityDialogControl_o *_4__this; // x8

  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (this = (SetRarityDialogControl___c__DisplayClass145_0_o *)_4__this->fields.combineRootComponent) == 0 )
    {
      sub_21FFECC(this, isDecide);
    }
    CombineRootComponent__RequestLimitUp((CombineRootComponent_o *)this, 0);
  }
}


void SetRarityDialogControl___c__DisplayClass147_0___ctor(
        SetRarityDialogControl___c__DisplayClass147_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SetRarityDialogControl___c__DisplayClass147_0___SetAppendSkillCombineInfo_b__0(
        SetRarityDialogControl___c__DisplayClass147_0_o *this,
        const MethodInfo *method)
{
  struct SetRarityDialogControl_o *_4__this; // x8
  CombineRootComponent_o *combineRootComponent; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (combineRootComponent = _4__this->fields.combineRootComponent) == 0 )
    sub_21FFECC(this, method);
  CombineRootComponent__RequestAppendSkillCombine(combineRootComponent, !this->fields.isOpen, 0);
}