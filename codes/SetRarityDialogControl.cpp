void SetRarityDialogControl___ctor(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  if ( (byte_4CE85B3 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CE85B3 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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

  if ( (byte_4CE85B2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (SetRarityDialogControl_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CE85B2 = 1;
  }
  if ( selectedList )
  {
    max_length = selectedList->max_length;
    if ( max_length )
    {
      if ( (int)max_length >= 1 )
      {
        v5 = 0;
        do
        {
          if ( v5 >= (unsigned int)max_length )
            sub_1C7BD48(this);
          v6 = selectedList->m_Items[v5];
          this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SetRarityDialogControl_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
            if ( this )
            {
              this = (SetRarityDialogControl_o *)DataMasterBase_object__object__long___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   v6,
                                                   (const MethodInfo_3430858 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              if ( this )
                goto LABEL_11;
            }
          }
          sub_1C7BD40(this, v7);
LABEL_11:
          if ( SLODWORD(this->fields.allRareConfirmMsgLb) > 0 )
            break;
          LODWORD(max_length) = selectedList->max_length;
          ++v5;
        }
        while ( (__int64)v5 < (int)max_length );
      }
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
  SetRarityDialogControl_o *v8; // x22
  int32_t adjustHp; // w24
  int32_t adjustAtk; // w23
  _BOOL8 IsStatusUp; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x27
  int v14; // w26
  int v15; // w25
  int64_t v16; // x22
  UserServantEntity_o *v17; // x22
  bool isAdjustHpMax; // w0
  int v19; // w21
  _BOOL4 isSecondAdjustHpMax; // w0
  bool isAdjustAtkMax; // w0
  int v22; // w22
  _BOOL4 isSecondAdjustAtkMax; // w0
  System_String_o **v24; // x8
  System_String_o *v26; // x20
  System_String_o *v27; // x20
  BalanceConfig_c *v28; // x8
  Il2CppObject *v29; // x21
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  int v33; // [xsp+10h] [xbp-80h] BYREF
  int v34; // [xsp+14h] [xbp-7Ch] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+18h] [xbp-78h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+20h] [xbp-70h] BYREF
  int32_t atkUp[2]; // [xsp+28h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4CE85A0 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_12409/*"STATUS_HP_OVER_DIALOG_MSG"*/);
    sub_1C7BAE8(&StringLiteral_12407/*"STATUS_ATK_OVER_DIALOG_MSG"*/);
    sub_1C7BAE8(&StringLiteral_12408/*"STATUS_HP_ATK_OVER_DIALOG_MSG"*/);
    sub_1C7BAE8(&StringLiteral_12410/*"STATUS_OVER_DIALOG_MSG"*/);
    this = (SetRarityDialogControl_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE85A0 = 1;
  }
  if ( !baseData )
LABEL_47:
    sub_1C7BD40(this, baseData);
  adjustHp = baseData->fields.adjustHp;
  adjustAtk = baseData->fields.adjustAtk;
  *(_QWORD *)maxAjustAtk = 0;
  *(_QWORD *)atkUp = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  *labelMsg = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C(labelMsg, StringLiteral_1/*""*/);
  UserServantEntity__GetAdjustMax(baseData, &maxAjustAtk[1], maxAjustAtk, &secondMaxAdjustAtk[1], secondMaxAdjustAtk, 0);
  UserServantEntity__isAdjustAtkMax(baseData, 0);
  IsStatusUp = 0;
  if ( selectUsrSvtIdList && v8->fields.isStatusUp )
  {
    max_length = selectUsrSvtIdList->max_length;
    if ( (int)max_length >= 1 )
    {
      v13 = 0;
      v14 = 0;
      v15 = 0;
      do
      {
        if ( v13 >= (unsigned int)max_length )
          sub_1C7BD48(IsStatusUp);
        v16 = selectUsrSvtIdList->m_Items[v13];
        this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_47;
        this = (SetRarityDialogControl_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !this )
          goto LABEL_47;
        this = (SetRarityDialogControl_o *)DataMasterBase_object__object__long___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             v16,
                                             (const MethodInfo_3430858 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !this )
          goto LABEL_47;
        v17 = (UserServantEntity_o *)this;
        IsStatusUp = UserServantEntity__IsStatusUp((UserServantEntity_o *)this, 0);
        if ( IsStatusUp )
        {
          *(_QWORD *)atkUp = 0;
          UserServantEntity__getStatusUpInfo(v17, &atkUp[1], atkUp, 0);
          v14 += atkUp[1] & ~(atkUp[1] >> 31);
          v15 += atkUp[0] & ~(atkUp[0] >> 31);
        }
        LODWORD(max_length) = selectUsrSvtIdList->max_length;
        ++v13;
      }
      while ( (__int64)v13 < (int)max_length );
      if ( v14 < 1 )
      {
        v19 = 0;
      }
      else
      {
        isAdjustHpMax = UserServantEntity__isAdjustHpMax(baseData, 0);
        v19 = maxAjustAtk[1];
        if ( maxAjustAtk[1] >= v14 + adjustHp || isAdjustHpMax )
        {
          isSecondAdjustHpMax = UserServantEntity__isSecondAdjustHpMax(baseData, 0);
          if ( secondMaxAdjustAtk[1] < v14 + adjustHp && !isSecondAdjustHpMax )
            v19 = secondMaxAdjustAtk[1];
          else
            v19 = 0;
        }
      }
      if ( v15 < 1 )
      {
        v22 = 0;
      }
      else
      {
        isAdjustAtkMax = UserServantEntity__isAdjustAtkMax(baseData, 0);
        v22 = maxAjustAtk[0];
        if ( maxAjustAtk[0] >= v15 + adjustAtk || isAdjustAtkMax )
        {
          isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(baseData, 0);
          if ( secondMaxAdjustAtk[0] < v15 + adjustAtk && !isSecondAdjustAtkMax )
            v22 = secondMaxAdjustAtk[0];
          else
            v22 = 0;
        }
      }
      if ( v19 >= 1 && v19 == v22 )
      {
        v24 = (System_String_o **)&StringLiteral_12410/*"STATUS_OVER_DIALOG_MSG"*/;
      }
      else
      {
        v24 = (System_String_o **)&StringLiteral_12409/*"STATUS_HP_OVER_DIALOG_MSG"*/;
        if ( v22 > 0 && v19 > 0 )
          v24 = (System_String_o **)&StringLiteral_12408/*"STATUS_HP_ATK_OVER_DIALOG_MSG"*/;
        if ( v19 <= 0 )
        {
          v24 = (System_String_o **)&StringLiteral_12407/*"STATUS_ATK_OVER_DIALOG_MSG"*/;
          if ( v22 < 1 )
            goto LABEL_45;
        }
      }
      v26 = *v24;
      if ( *v24 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v27 = LocalizationManager__Get(v26, 0);
        v28 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v28 = BalanceConfig_TypeInfo;
        }
        v34 = v28->static_fields->StatusUpAdjustHp * v19;
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
        v33 = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk * v22;
        v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
        v31 = System_String__Format_64218220(v27, v29, v30, 0);
        *labelMsg = v31;
        sub_1C7BA8C(labelMsg, v31);
      }
    }
LABEL_45:
    LOBYTE(IsStatusUp) = 1;
  }
  return IsStatusUp;
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

  if ( (byte_4CE85AD & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl_EndCloseDlg__);
    sub_1C7BAE8(&StringLiteral_5312/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/);
    byte_4CE85AD = 1;
  }
  v3 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SetRarityDialogControl_EndCloseDlg__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v3, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__RemoveBackBtn_45495828(transform, (System_String_o *)StringLiteral_5312/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0);
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
    sub_1C7BD40(decideBtnLb, method);
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
    sub_1C7BD40(rariryConfirmInfo, method);
  }
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0);
}


void SetRarityDialogControl__EndCloseDlg(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct System_Action_o *onClickDlgCloseCallBack; // x20

  SetRarityDialogControl__DisableConfirmInfo(this, method);
  SetRarityDialogControl__RemoveAllChild(this, v3);
  onClickDlgCloseCallBack = this->fields.onClickDlgCloseCallBack;
  this->fields.onClickDlgCloseCallBack = 0;
  sub_1C7BA8C(&this->fields.onClickDlgCloseCallBack, 0);
  if ( onClickDlgCloseCallBack )
    ((void (__fastcall *)(intptr_t, intptr_t))onClickDlgCloseCallBack->fields.invoke_impl)(
      onClickDlgCloseCallBack->fields.method_code,
      onClickDlgCloseCallBack->fields.method);
}


void SetRarityDialogControl__EndOpen(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CE85AF & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_5312/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/);
    byte_4CE85AF = 1;
  }
  this->fields.isButtonEnable = 1;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45495228(transform, (System_String_o *)StringLiteral_5312/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0);
}


void SetRarityDialogControl__OnClickCancel(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  struct System_Action_o *onClickDlgCancelCallBack; // x21

  if ( (byte_4CE85B1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SetRarityDialogControl_OnClickCancel__);
    byte_4CE85B1 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_SetRarityDialogControl_OnClickCancel__;
    if ( (*((_BYTE *)Method_SetRarityDialogControl_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SetRarityDialogControl_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    SetRarityDialogControl__Close(this, v5);
    onClickDlgCancelCallBack = this->fields.onClickDlgCancelCallBack;
    this->fields.onClickDlgOkCallBack = 0;
    sub_1C7BA8C(&this->fields.onClickDlgOkCallBack, 0);
    this->fields.onClickDlgCancelCallBack = 0;
    sub_1C7BA8C(&this->fields.onClickDlgCancelCallBack, 0);
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
  __int64 naturalAligment; // x9
  __int64 v9; // x9
  CommonUI_o *v10; // x20
  SetRarityDialogControl___c_c *v11; // x8
  System_Action_o *_9__163_0; // x21
  Il2CppObject *v13; // x22
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x0
  struct System_Action_o *onClickDlgOkCallBack; // x20
  SetRarityDialogControl_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_4CE85B0 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&CombineRootComponent_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl_OnClickDlgOk__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&Method_SetRarityDialogControl___c__OnClickDlgOk_b__163_0__);
    sub_1C7BAE8(&SetRarityDialogControl___c_TypeInfo);
    byte_4CE85B0 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_SetRarityDialogControl_OnClickDlgOk__;
    if ( (*((_BYTE *)Method_SetRarityDialogControl_OnClickDlgOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SetRarityDialogControl_OnClickDlgOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickDlgOkSeKind, 0, 0);
    SetRarityDialogControl__Close(this, v5);
    Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    Instance = (CombineRootComponent_o *)Instance->fields.myFSM;
    if ( !Instance )
      goto LABEL_26;
    naturalAligment = CombineRootComponent_TypeInfo->_2.naturalAligment;
    if ( Instance->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] == CombineRootComponent_TypeInfo )
    {
      if ( Instance->fields.combineTutorialProgress != 7 )
      {
LABEL_23:
        onClickDlgOkCallBack = this->fields.onClickDlgOkCallBack;
        this->fields.onClickDlgOkCallBack = 0;
        sub_1C7BA8C(&this->fields.onClickDlgOkCallBack, 0);
        this->fields.onClickDlgCancelCallBack = 0;
        Instance = (CombineRootComponent_o *)sub_1C7BA8C(&this->fields.onClickDlgCancelCallBack, 0);
        if ( onClickDlgOkCallBack )
        {
          ((void (__fastcall *)(intptr_t, intptr_t))onClickDlgOkCallBack->fields.invoke_impl)(
            onClickDlgOkCallBack->fields.method_code,
            onClickDlgOkCallBack->fields.method);
          return;
        }
LABEL_26:
        sub_1C7BD40(Instance, v7);
      }
      Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_26;
      Instance = (CombineRootComponent_o *)Instance->fields.myFSM;
      if ( !Instance )
        goto LABEL_26;
      v9 = CombineRootComponent_TypeInfo->_2.naturalAligment;
      if ( Instance->klass->_2.naturalAligment >= (unsigned int)v9
        && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v9 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__SetTutorialProgress(Instance, 8, 0);
        Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v10 = (CommonUI_o *)Instance;
        v11 = SetRarityDialogControl___c_TypeInfo;
        if ( !SetRarityDialogControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo);
          v11 = SetRarityDialogControl___c_TypeInfo;
        }
        _9__163_0 = v11->static_fields->__9__163_0;
        if ( !_9__163_0 )
        {
          if ( !v11->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v11);
            v11 = SetRarityDialogControl___c_TypeInfo;
          }
          v13 = (Il2CppObject *)v11->static_fields->__9;
          _9__163_0 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
          System_Action___ctor(_9__163_0, v13, Method_SetRarityDialogControl___c__OnClickDlgOk_b__163_0__, 0);
          static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
          static_fields->__9__163_0 = _9__163_0;
          Instance = (CombineRootComponent_o *)sub_1C7BA8C(&static_fields->__9__163_0, _9__163_0);
        }
        if ( !v10 )
          goto LABEL_26;
        CommonUI__CloseTutorialNotificationDialogArrow_31505608(v10, _9__163_0, 0);
        goto LABEL_23;
      }
    }
    v16 = (SetRarityDialogControl_o *)sub_1C7C0DC(Instance);
    SetRarityDialogControl__OnClickCancel(v16, v17);
  }
}


void SetRarityDialogControl__Open(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4CE85AE & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl_EndOpen__);
    byte_4CE85AE = 1;
  }
  if ( (this->fields.baseState & 0xFFFFFFFE) == 2 )
    BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.isButtonEnable = 0;
  v3 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SetRarityDialogControl_EndOpen__, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, v3, 0, 0);
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
    sub_1C7BD40(raritySvtGrid, method);
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
  UILabel_o *allTitleLb; // x26
  UILabel_o *cancelBtnLb; // x26
  UILabel_o *decideBtnLb; // x26
  const MethodInfo *v24; // x1
  il2cpp_array_size_t max_length; // x27
  float v26; // s8
  unsigned __int64 v27; // x26
  bool v28; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x27
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v31; // x7
  float y; // s9
  int v33; // w20
  int v34; // w8
  float v35; // s1 OVERLAPPED
  float z; // s2
  float v37; // s0
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v41; // x25
  Il2CppObject *v42; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v44; // x24
  Il2CppObject *v45; // x0
  UILabel_o *allRareMsgLb; // x21
  __int64 *v47; // x8
  UILabel_o *allRareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v50; // x20
  const MethodInfo *v51; // x5
  int64_t v52; // [xsp+0h] [xbp-80h] BYREF
  int32_t v53; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CE859F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__143_0__);
    sub_1C7BAE8(&StringLiteral_9263/*"NEED_QP"*/);
    sub_1C7BAE8(&StringLiteral_3588/*"COMBINE_HAVE_QP"*/);
    sub_1C7BAE8(&StringLiteral_3750/*"CONFIRM_COMBINE_MSG"*/);
    sub_1C7BAE8(&StringLiteral_3587/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_11000/*"RARE_MATERIAL_INFO_MSG"*/);
    sub_1C7BAE8(&StringLiteral_3622/*"COMBINE_SPEND_QP"*/);
    sub_1C7BAE8(&StringLiteral_3781/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_4CE859F = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  SetRarityDialogControl__RemoveAllChild(this, v16);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0);
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0);
  SetRarityDialogControl__Open(this, v19);
  SetRarityDialogControl__DefaultBgSize(this, v20);
  allTitleLb = this->fields.allTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3781/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0);
  if ( !allTitleLb )
    goto LABEL_56;
  UILabel__set_text(allTitleLb, (System_String_o *)allDispConfirmInfo, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_56;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_56;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0);
  SetRarityDialogControl__SetCenter(this, v24);
  if ( !selectedList )
    goto LABEL_56;
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  LODWORD(max_length) = selectedList->max_length;
  v26 = *((float *)allDispConfirmInfo + 12);
  if ( (int)max_length >= 1 )
  {
    v27 = 0;
    v28 = 0;
    do
    {
      if ( v28 )
        goto LABEL_56;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0);
      allDispConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
      if ( !allDispConfirmInfo )
        goto LABEL_56;
      allDispConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)allDispConfirmInfo,
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v27 >= LODWORD(selectedList->max_length) )
        sub_1C7BD48(allDispConfirmInfo);
      if ( !allDispConfirmInfo )
        goto LABEL_56;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)allDispConfirmInfo,
        v27,
        baseData,
        selectedList->m_Items[v27],
        0,
        0,
        0,
        v31);
      allDispConfirmInfo = this->fields.allSvtGrid;
      max_length = selectedList->max_length;
      ++v27;
      v28 = allDispConfirmInfo == 0;
    }
    while ( (__int64)v27 < (int)max_length );
    if ( !allDispConfirmInfo )
      goto LABEL_56;
  }
  y = this->fields.center.fields.y;
  v33 = *((_DWORD *)allDispConfirmInfo + 11);
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  if ( v33 >= (int)max_length )
    v34 = max_length;
  else
    v34 = v33;
  v35 = 70.0;
  if ( v33 >= (int)max_length )
    v35 = y;
  v37 = (float)(this->fields.center.fields.x - (float)((float)(v26 * 0.5) * (float)(v34 - 1))) * 0.47;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v35 - 1),
    0);
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  v54.fields.x = 0.47;
  v54.fields.y = 0.47;
  v54.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v54, 0);
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  UIGrid__set_repositionNow((UIGrid_o *)allDispConfirmInfo, 1, 0);
  allSpendQpTxtLb = this->fields.allSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3622/*"COMBINE_SPEND_QP"*/, 0);
  if ( !allSpendQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3588/*"COMBINE_HAVE_QP"*/, 0);
  if ( !allHaveQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0);
  allSpendQpLb = this->fields.allSpendQpLb;
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  v53 = spendQp;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
  allDispConfirmInfo = System_String__Format(v41, v42, 0);
  if ( !allSpendQpLb )
    goto LABEL_56;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0);
  allHaveQpLb = this->fields.allHaveQpLb;
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  v52 = haveQp;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v52);
  allDispConfirmInfo = System_String__Format(v44, v45, 0);
  if ( !allHaveQpLb )
    goto LABEL_56;
  UILabel__set_text(allHaveQpLb, (System_String_o *)allDispConfirmInfo, 0);
  allDispConfirmInfo = this->fields.allStatusUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 0, 0);
  allDispConfirmInfo = this->fields.allLimitUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0);
  if ( !allDispConfirmInfo
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 0, 0),
        (allDispConfirmInfo = this->fields.allLimitRareLb) == 0)
    || (allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 0, 0),
        WrapControlText__textAdjust(this->fields.allStatusUpInfoLb, statusLimitMessage, 22, 0, 0),
        (allDispConfirmInfo = this->fields.allStatusUpInfoLb) == 0)
    || (allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0)) == 0 )
  {
LABEL_56:
    sub_1C7BD40(allDispConfirmInfo, v17);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0);
  allRareMsgLb = this->fields.allRareMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isExceededMaterial )
      goto LABEL_45;
LABEL_47:
    v47 = &StringLiteral_11000/*"RARE_MATERIAL_INFO_MSG"*/;
    goto LABEL_48;
  }
  if ( !isExceededMaterial )
    goto LABEL_47;
LABEL_45:
  v47 = &StringLiteral_3587/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
LABEL_48:
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)*v47, 0);
  if ( !allRareMsgLb )
    goto LABEL_56;
  UILabel__set_text(allRareMsgLb, (System_String_o *)allDispConfirmInfo, 0);
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3750/*"CONFIRM_COMBINE_MSG"*/, 0);
  if ( !allRareConfirmMsgLb )
    goto LABEL_56;
  UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_56;
  if ( combineRootComponent->fields.state == 3 )
  {
    v50 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v50,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__143_0__,
      0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v50, 0, 0, v51);
  }
}


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
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *ComponentInChildren_object; // x22
  UIExtrusionLabel_o *appendSkillCurrentLvLabel; // x22
  UIExtrusionLabel_o *appendSkillResultLvLabel; // x22
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UILabel_o *v22; // x22
  UILabel_o *v23; // x22
  UILabel_o *v24; // x22
  System_String_o *v25; // x23
  Il2CppObject *v26; // x0
  UILabel_o *v27; // x22
  System_String_o *v28; // x23
  Il2CppObject *v29; // x0
  UILabel_o *appendSkillConfirmLabel; // x21
  System_String_o *v31; // x0
  Il2CppObject *Component_object; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UILabel_o *appendSkillSpendTxtLabel; // x22
  UILabel_o *appendSkillHaveTxtLabel; // x22
  UILabel_o *appendSkillSpendLabel; // x22
  System_String_o *v39; // x23
  Il2CppObject *v40; // x0
  UILabel_o *appendSkillHaveLabel; // x22
  System_String_o *v42; // x23
  Il2CppObject *v43; // x0
  UILabel_o *cancelBtnLb; // x21
  UILabel_o *decideBtnLb; // x21
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v47; // x21
  const MethodInfo *v48; // x5
  UnityEngine_Bounds_o v49; // [xsp+8h] [xbp-68h] BYREF
  int32_t haveSvtCoin; // [xsp+2Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CE85A3 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl___c__DisplayClass147_0__SetAppendSkillCombineInfo_b__0__);
    sub_1C7BAE8(&SetRarityDialogControl___c__DisplayClass147_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_9263/*"NEED_QP"*/);
    sub_1C7BAE8(&StringLiteral_3588/*"COMBINE_HAVE_QP"*/);
    sub_1C7BAE8(&StringLiteral_2004/*"APPEND_SKILL_OPEN_CONFIRM"*/);
    sub_1C7BAE8(&StringLiteral_2007/*"APPEND_SKILL_OPEN_SPEND_COIN"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_2005/*"APPEND_SKILL_OPEN_HAVE_COIN"*/);
    sub_1C7BAE8(&StringLiteral_3622/*"COMBINE_SPEND_QP"*/);
    sub_1C7BAE8(&StringLiteral_1973/*"APPEND_SKILL_COMBINE_CONFIRM"*/);
    byte_4CE85A3 = 1;
  }
  v9 = sub_1C7BD34(SetRarityDialogControl___c__DisplayClass147_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_60;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C7BA8C(v9 + 16, this);
  *(_BYTE *)(v9 + 24) = isOpen;
  SetRarityDialogControl__DisableConfirmInfo(this, v12);
  SetRarityDialogControl__RemoveAllChild(this, v13);
  appendSkillConfirmInfo = this->fields.appendSkillConfirmInfo;
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, 1, 0);
  appendSkillConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, 1, 0);
  SetRarityDialogControl__Open(this, v14);
  SetRarityDialogControl__DefaultBgSize(this, v15);
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
        SkillIconComponent__Set_41676672(
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
                                             (const MethodInfo_31C732C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                                     (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
                {
                  appendSkillConfirmInfo = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)ComponentInChildren_object,
                                             0);
                  if ( !appendSkillConfirmInfo )
                    goto LABEL_60;
                  Component_object = UnityEngine_GameObject__AddComponent_object_(
                                       appendSkillConfirmInfo,
                                       (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
                }
                transform = UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)ComponentInChildren_object,
                              0);
                NGUIMath__CalculateAbsoluteWidgetBounds(&v49, transform, 0);
                appendSkillConfirmInfo = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_o *(__fastcall *)(UnityEngine_Bounds_o *__return_ptr, Il2CppObject *, const MethodInfo *))ComponentInChildren_object->klass->vtable[4].methodPtr)(
                                                                       &v49,
                                                                       ComponentInChildren_object,
                                                                       ComponentInChildren_object->klass->vtable[4].method);
                if ( Component_object )
                {
                  UnityEngine_BoxCollider__set_center(
                    (UnityEngine_BoxCollider_o *)Component_object,
                    v49.fields.m_Center,
                    0);
                  ((void (__fastcall *)(UnityEngine_Bounds_o *__return_ptr, Il2CppObject *, const MethodInfo *))ComponentInChildren_object->klass->vtable[4].methodPtr)(
                    &v49,
                    ComponentInChildren_object,
                    ComponentInChildren_object->klass->vtable[4].method);
                  v51.fields.x = v49.fields.m_Extents.fields.x + v49.fields.m_Extents.fields.x;
                  v51.fields.y = v49.fields.m_Extents.fields.y + v49.fields.m_Extents.fields.y;
                  v51.fields.z = v49.fields.m_Extents.fields.z + v49.fields.m_Extents.fields.z;
                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v51, 0);
                  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillSpendTxtLabel;
                  if ( appendSkillConfirmInfo )
                  {
                    v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0);
                    GameObjectExtensions__SetLocalPositionX(v34, 100.0, 0);
                    appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillHaveTxtLabel;
                    if ( appendSkillConfirmInfo )
                    {
                      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0);
                      GameObjectExtensions__SetLocalPositionX(v35, 100.0, 0);
                      appendSkillSpendTxtLabel = this->fields.appendSkillSpendTxtLabel;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_2007/*"APPEND_SKILL_OPEN_SPEND_COIN"*/,
                                                                             0);
                      if ( appendSkillSpendTxtLabel )
                      {
                        UILabel__set_text(appendSkillSpendTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0);
                        appendSkillHaveTxtLabel = this->fields.appendSkillHaveTxtLabel;
                        appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_2005/*"APPEND_SKILL_OPEN_HAVE_COIN"*/,
                                                                               0);
                        if ( appendSkillHaveTxtLabel )
                        {
                          UILabel__set_text(appendSkillHaveTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0);
                          appendSkillSpendLabel = this->fields.appendSkillSpendLabel;
                          v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
                          LODWORD(v49.fields.m_Center.fields.x) = updata->fields.spendSvtCoin;
                          v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
                          appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v39, v40, 0);
                          if ( appendSkillSpendLabel )
                          {
                            UILabel__set_text(appendSkillSpendLabel, (System_String_o *)appendSkillConfirmInfo, 0);
                            appendSkillHaveLabel = this->fields.appendSkillHaveLabel;
                            v42 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
                            haveSvtCoin = updata->fields.haveSvtCoin;
                            v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveSvtCoin);
                            appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v42, v43, 0);
                            if ( appendSkillHaveLabel )
                            {
                              UILabel__set_text(appendSkillHaveLabel, (System_String_o *)appendSkillConfirmInfo, 0);
                              appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
                              v31 = (System_String_o *)StringLiteral_2004/*"APPEND_SKILL_OPEN_CONFIRM"*/;
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
    sub_1C7BD40(appendSkillConfirmInfo, v11);
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
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0);
  GameObjectExtensions__SetLocalPositionX(v20, -5.0, 0);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillHaveTxtLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0);
  GameObjectExtensions__SetLocalPositionX(v21, -5.0, 0);
  v22 = this->fields.appendSkillSpendTxtLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3622/*"COMBINE_SPEND_QP"*/,
                                                         0);
  if ( !v22 )
    goto LABEL_60;
  UILabel__set_text(v22, (System_String_o *)appendSkillConfirmInfo, 0);
  v23 = this->fields.appendSkillHaveTxtLabel;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3588/*"COMBINE_HAVE_QP"*/,
                                                         0);
  if ( !v23 )
    goto LABEL_60;
  UILabel__set_text(v23, (System_String_o *)appendSkillConfirmInfo, 0);
  v24 = this->fields.appendSkillSpendLabel;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  haveSvtCoin = updata->fields.spendQp;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveSvtCoin);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v25, v26, 0);
  if ( !v24 )
    goto LABEL_60;
  UILabel__set_text(v24, (System_String_o *)appendSkillConfirmInfo, 0);
  v27 = this->fields.appendSkillHaveLabel;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  *(_QWORD *)&v49.fields.m_Center.fields.x = updata->fields.haveQp;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v49);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v28, v29, 0);
  if ( !v27 )
    goto LABEL_60;
  UILabel__set_text(v27, (System_String_o *)appendSkillConfirmInfo, 0);
  appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
  v31 = (System_String_o *)StringLiteral_1973/*"APPEND_SKILL_COMBINE_CONFIRM"*/;
LABEL_51:
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(v31, 0);
  if ( !appendSkillConfirmLabel )
    goto LABEL_60;
  UILabel__set_text(appendSkillConfirmLabel, (System_String_o *)appendSkillConfirmInfo, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/,
                                                         0);
  if ( !cancelBtnLb )
    goto LABEL_60;
  UILabel__set_text(cancelBtnLb, (System_String_o *)appendSkillConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/,
                                                         0);
  if ( !decideBtnLb )
    goto LABEL_60;
  UILabel__set_text(decideBtnLb, (System_String_o *)appendSkillConfirmInfo, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_60;
  if ( combineRootComponent->fields.state == 14 )
  {
    v47 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v47,
      (Il2CppObject *)v9,
      Method_SetRarityDialogControl___c__DisplayClass147_0__SetAppendSkillCombineInfo_b__0__,
      0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v47, 0, 0, v48);
  }
}


void SetRarityDialogControl__SetCenter(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mPanel; // x0
  unsigned int klass; // w8
  float32x2_t *v5; // x20
  unsigned __int64 v6; // x21
  float *p_fields; // x22
  float v8; // s8
  float v9; // s9
  float v10; // s10
  float v11; // s1
  float v12; // s3
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  mPanel = (UnityEngine_Component_o *)this->fields.mPanel;
  if ( !mPanel
    || (mPanel = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))mPanel->klass[1]._1.interopData)(
                                              mPanel,
                                              mPanel->klass[1]._1.klass)) == 0 )
  {
LABEL_11:
    sub_1C7BD40(mPanel, method);
  }
  klass = (unsigned int)mPanel[1].klass;
  v5 = (float32x2_t *)mPanel;
  v6 = 0;
  p_fields = (float *)&mPanel[1].fields;
  do
  {
    if ( v6 >= klass )
      goto LABEL_12;
    mPanel = (UnityEngine_Component_o *)this->fields.mPanel;
    if ( !mPanel )
      goto LABEL_11;
    v8 = *(p_fields - 2);
    v9 = *(p_fields - 1);
    v10 = *p_fields;
    mPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mPanel, 0);
    if ( !mPanel )
      goto LABEL_11;
    v13.fields.x = v8;
    v13.fields.y = v9;
    v13.fields.z = v10;
    v14 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)mPanel, v13, 0);
    if ( v6 >= v5[3].n64_u32[0] )
      goto LABEL_12;
    *(UnityEngine_Vector3_o *)(p_fields - 2) = v14;
    p_fields += 3;
    klass = v5[3].n64_u32[0];
    ++v6;
  }
  while ( v6 != 4 );
  if ( klass <= 2 )
LABEL_12:
    sub_1C7BD48(mPanel);
  v11 = v5[5].n64_f32[0];
  v12 = v5[8].n64_f32[0] - v11;
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v5[4],
                                                    vmul_f32(vsub_f32(v5[7], v5[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v11 + (float)(v12 * 0.5);
}


void SetRarityDialogControl__SetClickDlgOkSeAndCallBack(
        SetRarityDialogControl_o *this,
        int32_t seKind,
        System_Action_o *callBack,
        System_Action_o *cancelCallBack,
        System_Action_o *closeCallBack,
        const MethodInfo *method)
{
  this->fields.onClickDlgOkSeKind = seKind;
  this->fields.onClickDlgOkCallBack = callBack;
  sub_1C7BA8C(&this->fields.onClickDlgOkCallBack, callBack);
  this->fields.onClickDlgCancelCallBack = cancelCallBack;
  sub_1C7BA8C(&this->fields.onClickDlgCancelCallBack, cancelCallBack);
  this->fields.onClickDlgCloseCallBack = closeCallBack;
  sub_1C7BA8C(&this->fields.onClickDlgCloseCallBack, closeCallBack);
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
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v22; // x1
  il2cpp_array_size_t max_length; // x25
  float v24; // s8
  unsigned __int64 v25; // x24
  bool v26; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v29; // x7
  float y; // s9
  int v31; // w24
  int v32; // w9
  float v33; // s1 OVERLAPPED
  float z; // s2
  float v35; // s0
  UILabel_o *normalSpendQpTxtLb; // x24
  UILabel_o *normalHaveQpTxtLb; // x24
  UILabel_o *confirmSpendQpLb; // x24
  System_String_o *v39; // x25
  Il2CppObject *v40; // x0
  UILabel_o *confirmHaveQpLb; // x23
  System_String_o *v42; // x24
  Il2CppObject *v43; // x0
  UILabel_o *confirmMsgLb; // x22
  const MethodInfo *v45; // x4
  _BOOL8 v46; // x0
  const MethodInfo *v47; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v49; // x20
  const MethodInfo *v50; // x5
  int64_t v51; // [xsp+0h] [xbp-80h] BYREF
  int32_t v52; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *labelMsg; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CE859D & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl__SetConfirmCombine_b__141_0__);
    sub_1C7BAE8(&StringLiteral_9263/*"NEED_QP"*/);
    sub_1C7BAE8(&StringLiteral_3588/*"COMBINE_HAVE_QP"*/);
    sub_1C7BAE8(&StringLiteral_3750/*"CONFIRM_COMBINE_MSG"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_3622/*"COMBINE_SPEND_QP"*/);
    byte_4CE859D = 1;
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_46;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_46;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0);
  SetRarityDialogControl__SetCenter(this, v22);
  if ( !selectedList )
    goto LABEL_46;
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  LODWORD(max_length) = selectedList->max_length;
  v24 = *((float *)normalConfirmInfo + 12);
  if ( (int)max_length >= 1 )
  {
    v25 = 0;
    v26 = 0;
    do
    {
      if ( v26 )
        goto LABEL_46;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0);
      normalConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
      if ( !normalConfirmInfo )
        goto LABEL_46;
      normalConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)normalConfirmInfo,
                            (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v25 >= LODWORD(selectedList->max_length) )
        sub_1C7BD48(normalConfirmInfo);
      if ( !normalConfirmInfo )
        goto LABEL_46;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)normalConfirmInfo,
        v25,
        baseData,
        selectedList->m_Items[v25],
        0,
        0,
        0,
        v29);
      normalConfirmInfo = this->fields.materialSvtGrid;
      max_length = selectedList->max_length;
      ++v25;
      v26 = normalConfirmInfo == 0;
    }
    while ( (__int64)v25 < (int)max_length );
    if ( !normalConfirmInfo )
      goto LABEL_46;
  }
  y = this->fields.center.fields.y;
  v31 = *((_DWORD *)normalConfirmInfo + 11);
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  if ( v31 >= (int)max_length )
    v32 = max_length;
  else
    v32 = v31;
  v33 = 55.0;
  if ( v31 >= (int)max_length )
    v33 = y;
  v35 = (float)(this->fields.center.fields.x - (float)((float)(v24 * 0.5) * (float)(v32 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v33 - 1),
    0);
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  v54.fields.x = 0.5;
  v54.fields.y = 0.5;
  v54.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v54, 0);
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UIGrid__set_repositionNow((UIGrid_o *)normalConfirmInfo, 1, 0);
  normalSpendQpTxtLb = this->fields.normalSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3622/*"COMBINE_SPEND_QP"*/, 0);
  if ( !normalSpendQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3588/*"COMBINE_HAVE_QP"*/, 0);
  if ( !normalHaveQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  v52 = spendQp;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  normalConfirmInfo = System_String__Format(v39, v40, 0);
  if ( !confirmSpendQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  v51 = haveQp;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v51);
  normalConfirmInfo = System_String__Format(v42, v43, 0);
  if ( !confirmHaveQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3750/*"CONFIRM_COMBINE_MSG"*/, 0);
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
  v46 = SetRarityDialogControl__CheckStatusUpInfo(this, baseData, selectedList, &labelMsg, v45);
  if ( !v46 )
    goto LABEL_42;
  WrapControlText__textAdjust(this->fields.statusUpInfoLb, labelMsg, 22, 0, 0);
  normalConfirmInfo = this->fields.statusUpInfoLb;
  if ( !normalConfirmInfo
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0)) == 0 )
  {
LABEL_46:
    sub_1C7BD40(normalConfirmInfo, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 1, 0);
LABEL_42:
  SetRarityDialogControl__CheckExceedSvt((SetRarityDialogControl_o *)v46, selectedList, v47);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_46;
  if ( combineRootComponent->fields.state == 3 )
  {
    v49 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v49, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmCombine_b__141_0__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v49, 0, 0, v50);
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
  UILabel_o *costumeTitleLb; // x25
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  UILabel_o *needQpCostumeTextLb; // x24
  UILabel_o *needQpCostumeLb; // x24
  System_String_o *v23; // x25
  Il2CppObject *v24; // x0
  UILabel_o *haveQpCostumeTextLb; // x23
  UILabel_o *haveQpCostumeLb; // x23
  System_String_o *v27; // x24
  Il2CppObject *v28; // x0
  UILabel_o *costumeInfoLb; // x22
  const MethodInfo *v30; // x5
  struct CombineRootComponent_o *combineRootComponent; // x8
  int64_t v32; // [xsp+0h] [xbp-60h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CE85AA & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_9263/*"NEED_QP"*/);
    sub_1C7BAE8(&StringLiteral_3773/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_3855/*"COSTUME_NEED_QP_TEXT"*/);
    sub_1C7BAE8(&StringLiteral_3852/*"COSTUME_CONFIRM_MSG"*/);
    sub_1C7BAE8(&StringLiteral_3854/*"COSTUME_HAVE_QP_TEXT"*/);
    byte_4CE85AA = 1;
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3773/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0);
  if ( !costumeTitleLb )
    goto LABEL_20;
  UILabel__set_text(costumeTitleLb, (System_String_o *)costumeConfirmInfo, 0);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)this->fields.costumeNameLb;
  if ( !costumeConfirmInfo )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)costumeConfirmInfo, cosName, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_20;
  UILabel__set_text(cancelBtnLb, (System_String_o *)costumeConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_20;
  UILabel__set_text(decideBtnLb, (System_String_o *)costumeConfirmInfo, 0);
  needQpCostumeTextLb = this->fields.needQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3855/*"COSTUME_NEED_QP_TEXT"*/, 0);
  if ( !needQpCostumeTextLb )
    goto LABEL_20;
  UILabel__set_text(needQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0);
  needQpCostumeLb = this->fields.needQpCostumeLb;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  v33 = needQp;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v23, v24, 0);
  if ( !needQpCostumeLb )
    goto LABEL_20;
  UILabel__set_text(needQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0);
  haveQpCostumeTextLb = this->fields.haveQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3854/*"COSTUME_HAVE_QP_TEXT"*/, 0);
  if ( !haveQpCostumeTextLb )
    goto LABEL_20;
  UILabel__set_text(haveQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0);
  haveQpCostumeLb = this->fields.haveQpCostumeLb;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  v32 = haveQp;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v32);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v27, v28, 0);
  if ( !haveQpCostumeLb
    || (UILabel__set_text(haveQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0),
        costumeInfoLb = this->fields.costumeInfoLb,
        costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3852/*"COSTUME_CONFIRM_MSG"*/,
                                                           0),
        !costumeInfoLb)
    || (UILabel__set_text(costumeInfoLb, (System_String_o *)costumeConfirmInfo, 0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_20:
    sub_1C7BD40(costumeConfirmInfo, v14);
  }
  if ( combineRootComponent->fields.state == 8 )
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, callBack, cancelCallBack, 0, v30);
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

  if ( (byte_4CE85A9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___);
    byte_4CE85A9 = 1;
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
                                                                    (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___)) == 0
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
    sub_1C7BD40(costumeEventItemConfirmInfo, v10);
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
  UILabel_o *cancelBtnLb; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v23; // x21
  const MethodInfo *v24; // x5

  if ( (byte_4CE85A8 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl_DefaultBgSize__);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4CE85A8 = 1;
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
                                                                        (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___);
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/,
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
    sub_1C7BD40(costumeEventItemOrNeedItemConfirmInfo, v16);
  }
  if ( combineRootComponent->fields.state == 8 )
  {
    v23 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, 0, cancelCallBack, v23, v24);
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
  SetRarityDialogControl_o *v16; // x24
  bool v17; // w28
  const MethodInfo *v18; // x4
  System_Int64_array *v19; // x2
  const MethodInfo *v20; // x7
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  __int64 naturalAligment; // x9
  __int64 v24; // x9
  SetRarityDialogControl_o *v25; // x0
  System_Int64_array *v26; // x1
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // [xsp+0h] [xbp-70h]
  System_String_o *labelMsg; // [xsp+18h] [xbp-58h] BYREF

  v16 = this;
  v17 = isStatusUp;
  if ( (byte_4CE859A & 1) == 0 )
  {
    sub_1C7BAE8(&CombineRootComponent_TypeInfo);
    this = (SetRarityDialogControl_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CE859A = 1;
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
      v28);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (Il2CppObject *)Instance[2].klass;
  if ( !Instance )
    goto LABEL_18;
  naturalAligment = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[naturalAligment - 1] != CombineRootComponent_TypeInfo )
  {
    goto LABEL_19;
  }
  if ( HIDWORD(Instance[42].monitor) != 7 )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (Il2CppObject *)Instance[2].klass) == 0 )
LABEL_18:
    sub_1C7BD40(Instance, v22);
  v24 = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment < (unsigned int)v24
    || (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v24 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_19:
    v25 = (SetRarityDialogControl_o *)sub_1C7C0DC(Instance);
    SetRarityDialogControl__CheckExceedSvt(v25, v26, v27);
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
  UILabel_o *cancelBtnLb; // x23
  UILabel_o *decideBtnLb; // x23
  UILabel_o *lvExceedInfoLb; // x21
  UILabel_o *lvExceedSpendQpTxtLb; // x23
  UILabel_o *lvExceedHaveQpTxtLb; // x23
  UILabel_o *lvExceedSpendQpLb; // x23
  System_String_o *v23; // x24
  Il2CppObject *v24; // x0
  UILabel_o *lvExceedHaveQpLb; // x22
  System_String_o *v26; // x23
  Il2CppObject *v27; // x0
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v29; // x0
  intptr_t *v30; // x8
  System_Action_o *v31; // x21
  int32_t v32; // w20
  const MethodInfo *v33; // x5
  int64_t v34; // [xsp+0h] [xbp-50h] BYREF
  int32_t v35; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CE85A5 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__149_0__);
    sub_1C7BAE8(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__149_1__);
    sub_1C7BAE8(&StringLiteral_9263/*"NEED_QP"*/);
    sub_1C7BAE8(&StringLiteral_3755/*"CONFIRM_EXCEED_COMBINE"*/);
    sub_1C7BAE8(&StringLiteral_3588/*"COMBINE_HAVE_QP"*/);
    sub_1C7BAE8(&StringLiteral_8371/*"LVEXCEED_COMBINE_SPEND_QP"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4CE85A5 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  SetRarityDialogControl__RemoveAllChild(this, v12);
  lvExceedConfirmSimpleInfo = this->fields.lvExceedConfirmSimpleInfo;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 1, 0);
  lvExceedConfirmSimpleInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 1, 0);
  SetRarityDialogControl__Open(this, v15);
  SetRarityDialogControl__DefaultBgSize(this, v16);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)this->fields.lvExceedTitleLb;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)lvExceedConfirmSimpleInfo, msg, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/,
                                                            0);
  if ( !cancelBtnLb )
    goto LABEL_36;
  UILabel__set_text(cancelBtnLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/,
                                                            0);
  if ( !decideBtnLb )
    goto LABEL_36;
  UILabel__set_text(decideBtnLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0);
  if ( !isCheck )
  {
    lvExceedSpendQpTxtLb = this->fields.lvExceedSpendQpTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8371/*"LVEXCEED_COMBINE_SPEND_QP"*/,
                                                              0);
    if ( lvExceedSpendQpTxtLb )
    {
      UILabel__set_text(lvExceedSpendQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0);
      lvExceedHaveQpTxtLb = this->fields.lvExceedHaveQpTxtLb;
      lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_3588/*"COMBINE_HAVE_QP"*/,
                                                                0);
      if ( lvExceedHaveQpTxtLb )
      {
        UILabel__set_text(lvExceedHaveQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0);
        lvExceedSpendQpLb = this->fields.lvExceedSpendQpLb;
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
        v35 = spendQp;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
        lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)System_String__Format(v23, v24, 0);
        if ( lvExceedSpendQpLb )
        {
          UILabel__set_text(lvExceedSpendQpLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0);
          lvExceedHaveQpLb = this->fields.lvExceedHaveQpLb;
          v26 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
          v34 = haveQp;
          v27 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v34);
          lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)System_String__Format(v26, v27, 0);
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
LABEL_36:
    sub_1C7BD40(lvExceedConfirmSimpleInfo, v13);
  }
  lvExceedInfoLb = this->fields.lvExceedInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3755/*"CONFIRM_EXCEED_COMBINE"*/,
                                                            0);
  if ( !lvExceedInfoLb )
    goto LABEL_36;
  UILabel__set_text(lvExceedInfoLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)this->fields.lvExceedInfoLb;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_36;
  lvExceedConfirmSimpleInfo = UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)lvExceedConfirmSimpleInfo,
                                0);
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 1, 0);
  lvExceedConfirmSimpleInfo = this->fields.lvExceedQpInfo;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_36;
LABEL_27:
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 0, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_36;
  if ( combineRootComponent->fields.state == 6 )
  {
    v29 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    v30 = (intptr_t *)&Method_SetRarityDialogControl__SetConfirmLvExceed_b__149_0__;
    if ( !isCheck )
      v30 = (intptr_t *)&Method_SetRarityDialogControl__SetConfirmLvExceed_b__149_1__;
    v31 = v29;
    if ( isCheck )
      v32 = 8;
    else
      v32 = 0;
    System_Action___ctor(v29, (Il2CppObject *)this, *v30, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, v32, v31, 0, 0, v33);
  }
}


void SetRarityDialogControl__SetConfirmLvExceed_31847784(
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
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  UILabel_o *lvExceedTitleLabel; // x24
  UILabel_o *lvExceedSpendItemLabel; // x24
  UILabel_o *lvExceedSpendQpTxtLabel; // x24
  UILabel_o *lvExceedHaveQpTxtLabel; // x24
  UILabel_o *lvExceedSpendQpLabel; // x24
  System_String_o *v23; // x25
  Il2CppObject *v24; // x0
  UILabel_o *lvExceedHaveQpLabel; // x23
  System_String_o *v26; // x24
  Il2CppObject *v27; // x0
  UILabel_o *lvExceedConfirmLabel; // x22
  int32_t size; // w25
  _BOOL4 v30; // w8
  int32_t v31; // w22
  UnityEngine_GameObject_o *itemInfoPrefab; // x23
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x23
  intptr_t m_CachedPtr; // x8
  int32_t v36; // w24
  System_Action_o *v37; // x20
  const MethodInfo *v38; // x5
  int64_t v39; // [xsp+0h] [xbp-60h] BYREF
  int32_t v40; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_4CE85A6 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__150_0__);
    sub_1C7BAE8(&StringLiteral_9263/*"NEED_QP"*/);
    sub_1C7BAE8(&StringLiteral_3774/*"CONFIRM_TITLE_EXCEED_COMBINE"*/);
    sub_1C7BAE8(&StringLiteral_3588/*"COMBINE_HAVE_QP"*/);
    sub_1C7BAE8(&StringLiteral_8370/*"LVEXCEED_COMBINE_SPEND_ITEM"*/);
    sub_1C7BAE8(&StringLiteral_8371/*"LVEXCEED_COMBINE_SPEND_QP"*/);
    sub_1C7BAE8(&StringLiteral_8372/*"LVEXCEED_EXE_CONFIRM"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    this = (SetRarityDialogControl_o *)sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4CE85A6 = 1;
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
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0);
    if ( !cancelBtnLb )
      goto LABEL_32;
    UILabel__set_text(cancelBtnLb, (System_String_o *)this, 0);
    decideBtnLb = v10->fields.decideBtnLb;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/, 0);
    if ( !decideBtnLb )
      goto LABEL_32;
    UILabel__set_text(decideBtnLb, (System_String_o *)this, 0);
    lvExceedTitleLabel = v10->fields.lvExceedTitleLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3774/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0);
    if ( !lvExceedTitleLabel )
      goto LABEL_32;
    UILabel__set_text(lvExceedTitleLabel, (System_String_o *)this, 0);
    lvExceedSpendItemLabel = v10->fields.lvExceedSpendItemLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8370/*"LVEXCEED_COMBINE_SPEND_ITEM"*/, 0);
    if ( !lvExceedSpendItemLabel )
      goto LABEL_32;
    UILabel__set_text(lvExceedSpendItemLabel, (System_String_o *)this, 0);
    lvExceedSpendQpTxtLabel = v10->fields.lvExceedSpendQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8371/*"LVEXCEED_COMBINE_SPEND_QP"*/, 0);
    if ( !lvExceedSpendQpTxtLabel )
      goto LABEL_32;
    UILabel__set_text(lvExceedSpendQpTxtLabel, (System_String_o *)this, 0);
    lvExceedHaveQpTxtLabel = v10->fields.lvExceedHaveQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3588/*"COMBINE_HAVE_QP"*/, 0);
    if ( !lvExceedHaveQpTxtLabel )
      goto LABEL_32;
    UILabel__set_text(lvExceedHaveQpTxtLabel, (System_String_o *)this, 0);
    lvExceedSpendQpLabel = v10->fields.lvExceedSpendQpLabel;
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
    v40 = spendQp;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
    this = (SetRarityDialogControl_o *)System_String__Format(v23, v24, 0);
    if ( !lvExceedSpendQpLabel )
      goto LABEL_32;
    UILabel__set_text(lvExceedSpendQpLabel, (System_String_o *)this, 0);
    lvExceedHaveQpLabel = v10->fields.lvExceedHaveQpLabel;
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
    v39 = haveQp;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v39);
    this = (SetRarityDialogControl_o *)System_String__Format(v26, v27, 0);
    if ( !lvExceedHaveQpLabel )
      goto LABEL_32;
    UILabel__set_text(lvExceedHaveQpLabel, (System_String_o *)this, 0);
    lvExceedConfirmLabel = v10->fields.lvExceedConfirmLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8372/*"LVEXCEED_EXE_CONFIRM"*/, 0);
    if ( !lvExceedConfirmLabel )
      goto LABEL_32;
    UILabel__set_text(lvExceedConfirmLabel, (System_String_o *)this, 0);
    if ( !combineItemInfoList )
      goto LABEL_32;
    this = (SetRarityDialogControl_o *)v10->fields.lvExceedConsumeItemGrid;
    size = combineItemInfoList->fields._size;
    v30 = this == 0;
    if ( size >= 1 )
    {
      v31 = 0;
      while ( !v30 )
      {
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
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
        this = (SetRarityDialogControl_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)combineItemInfoList,
                                             v31,
                                             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !this )
          break;
        m_CachedPtr = this->fields.m_CachedPtr;
        if ( !m_CachedPtr )
          break;
        v36 = *(_DWORD *)(m_CachedPtr + 16);
        this = (SetRarityDialogControl_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)combineItemInfoList,
                                             v31,
                                             (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_CombineMenuControl_CombineItemInfo__get_Item__);
        if ( !this || !Component_object )
          break;
        LimitCntUpItemComponent__setLimitUpItemInfo(
          (LimitCntUpItemComponent_o *)Component_object,
          userId,
          v36,
          (int32_t)this->fields.m_CancellationTokenSource,
          0);
        this = (SetRarityDialogControl_o *)v10->fields.lvExceedConsumeItemGrid;
        ++v31;
        v30 = this == 0;
        if ( size == v31 )
          goto LABEL_29;
      }
LABEL_32:
      sub_1C7BD40(this, userId);
    }
LABEL_29:
    if ( v30 )
      goto LABEL_32;
    UIGrid__set_repositionNow((UIGrid_o *)this, 1, 0);
    v37 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v37, (Il2CppObject *)v10, Method_SetRarityDialogControl__SetConfirmLvExceed_b__150_0__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v10, 8, v37, 0, 0, v38);
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
  UILabel_o *cancelBtnLb; // x25
  UILabel_o *decideBtnLb; // x25
  const MethodInfo *v22; // x1
  il2cpp_array_size_t max_length; // x26
  float v24; // s8
  unsigned __int64 v25; // x25
  bool v26; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v29; // x7
  float y; // s9
  int v31; // w23
  int v32; // w9
  float v33; // s1 OVERLAPPED
  float z; // s2
  float v35; // s0
  UILabel_o *spendQpTxtLb; // x23
  UILabel_o *haveQpTxtLb; // x23
  UILabel_o *spendQpLb; // x23
  System_String_o *v39; // x24
  Il2CppObject *v40; // x0
  UILabel_o *haveQpLb; // x22
  System_String_o *v42; // x23
  Il2CppObject *v43; // x0
  UILabel_o *rareMaterialMsgLb; // x21
  __int64 *v45; // x8
  UILabel_o *rareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v48; // x20
  const MethodInfo *v49; // x5
  int64_t v50; // [xsp+0h] [xbp-80h] BYREF
  int32_t v51; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CE859B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl__SetConfirmRarityInfo_b__139_0__);
    sub_1C7BAE8(&StringLiteral_9263/*"NEED_QP"*/);
    sub_1C7BAE8(&StringLiteral_3588/*"COMBINE_HAVE_QP"*/);
    sub_1C7BAE8(&StringLiteral_3750/*"CONFIRM_COMBINE_MSG"*/);
    sub_1C7BAE8(&StringLiteral_3587/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_11000/*"RARE_MATERIAL_INFO_MSG"*/);
    sub_1C7BAE8(&StringLiteral_3622/*"COMBINE_SPEND_QP"*/);
    byte_4CE859B = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  SetRarityDialogControl__RemoveAllChild(this, v15);
  rariryConfirmInfo = this->fields.rariryConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rariryConfirmInfo, 1, 0);
  rariryConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rariryConfirmInfo, 1, 0);
  SetRarityDialogControl__Open(this, v18);
  SetRarityDialogControl__DefaultBgSize(this, v19);
  rariryConfirmInfo = this->fields.rarityTitleLb;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  UILabel__set_text((UILabel_o *)rariryConfirmInfo, msg, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_48;
  UILabel__set_text(cancelBtnLb, (System_String_o *)rariryConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_48;
  UILabel__set_text(decideBtnLb, (System_String_o *)rariryConfirmInfo, 0);
  SetRarityDialogControl__SetCenter(this, v22);
  if ( !list )
    goto LABEL_48;
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  LODWORD(max_length) = list->max_length;
  v24 = *((float *)rariryConfirmInfo + 12);
  if ( (int)max_length >= 1 )
  {
    v25 = 0;
    v26 = 0;
    do
    {
      if ( v26 )
        goto LABEL_48;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0);
      rariryConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
      if ( !rariryConfirmInfo )
        goto LABEL_48;
      rariryConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)rariryConfirmInfo,
                            (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v25 >= LODWORD(list->max_length) )
        sub_1C7BD48(rariryConfirmInfo);
      if ( !rariryConfirmInfo )
        goto LABEL_48;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)rariryConfirmInfo,
        v25,
        baseData,
        list->m_Items[v25],
        0,
        0,
        0,
        v29);
      rariryConfirmInfo = this->fields.raritySvtGrid;
      max_length = list->max_length;
      ++v25;
      v26 = rariryConfirmInfo == 0;
    }
    while ( (__int64)v25 < (int)max_length );
    if ( !rariryConfirmInfo )
      goto LABEL_48;
  }
  y = this->fields.center.fields.y;
  v31 = *((_DWORD *)rariryConfirmInfo + 11);
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0);
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  if ( v31 >= (int)max_length )
    v32 = max_length;
  else
    v32 = v31;
  v33 = 55.0;
  if ( v31 >= (int)max_length )
    v33 = y;
  v35 = (float)(this->fields.center.fields.x - (float)((float)(v24 * 0.5) * (float)(v32 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)rariryConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v33 - 1),
    0);
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0);
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  v52.fields.x = 0.5;
  v52.fields.y = 0.5;
  v52.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rariryConfirmInfo, v52, 0);
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  UIGrid__set_repositionNow((UIGrid_o *)rariryConfirmInfo, 1, 0);
  spendQpTxtLb = this->fields.spendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3622/*"COMBINE_SPEND_QP"*/, 0);
  if ( !spendQpTxtLb )
    goto LABEL_48;
  UILabel__set_text(spendQpTxtLb, (System_String_o *)rariryConfirmInfo, 0);
  haveQpTxtLb = this->fields.haveQpTxtLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3588/*"COMBINE_HAVE_QP"*/, 0);
  if ( !haveQpTxtLb )
    goto LABEL_48;
  UILabel__set_text(haveQpTxtLb, (System_String_o *)rariryConfirmInfo, 0);
  spendQpLb = this->fields.spendQpLb;
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  v51 = spendQp;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
  rariryConfirmInfo = System_String__Format(v39, v40, 0);
  if ( !spendQpLb
    || (UILabel__set_text(spendQpLb, (System_String_o *)rariryConfirmInfo, 0),
        haveQpLb = this->fields.haveQpLb,
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0),
        v50 = haveQp,
        v43 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v50),
        rariryConfirmInfo = System_String__Format(v42, v43, 0),
        !haveQpLb) )
  {
LABEL_48:
    sub_1C7BD40(rariryConfirmInfo, v16);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)rariryConfirmInfo, 0);
  rareMaterialMsgLb = this->fields.rareMaterialMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isExceededMaterial )
      goto LABEL_37;
LABEL_39:
    v45 = &StringLiteral_11000/*"RARE_MATERIAL_INFO_MSG"*/;
    goto LABEL_40;
  }
  if ( !isExceededMaterial )
    goto LABEL_39;
LABEL_37:
  v45 = &StringLiteral_3587/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
LABEL_40:
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)*v45, 0);
  if ( !rareMaterialMsgLb )
    goto LABEL_48;
  UILabel__set_text(rareMaterialMsgLb, (System_String_o *)rariryConfirmInfo, 0);
  rareConfirmMsgLb = this->fields.rareConfirmMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3750/*"CONFIRM_COMBINE_MSG"*/, 0);
  if ( !rareConfirmMsgLb )
    goto LABEL_48;
  UILabel__set_text(rareConfirmMsgLb, (System_String_o *)rariryConfirmInfo, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_48;
  if ( combineRootComponent->fields.state == 3 )
  {
    v48 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v48, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmRarityInfo_b__139_0__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v48, 0, 0, v49);
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
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v21; // x1
  struct UIGrid_o *materialSvtGrid; // x8
  float v23; // s8
  int32_t v24; // w24
  __int64 v25; // x1
  UnityEngine_Component_o *v26; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v31; // x1
  Il2CppObject *Component_object; // x0
  __int64 v33; // x1
  float y; // s9
  int32_t Count; // w23
  struct UIGrid_o *v36; // x8
  int32_t maxPerLine; // w20
  int32_t v38; // w22
  int32_t v39; // w9
  float v40; // s1 OVERLAPPED
  float z; // s2
  float v42; // s0
  UILabel_o *normalSpendQpTxtLb; // x22
  UILabel_o *normalHaveQpTxtLb; // x22
  UILabel_o *confirmSpendQpLb; // x22
  System_String_o *v46; // x23
  Il2CppObject *v47; // x0
  UILabel_o *confirmHaveQpLb; // x21
  System_String_o *v49; // x22
  Il2CppObject *v50; // x0
  UILabel_o *confirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v53; // x20
  const MethodInfo *v54; // x5
  const MethodInfo *v55; // [xsp+0h] [xbp-E0h]
  struct System_Collections_Generic_Dictionary_TKey__TValue__o *v56; // [xsp+8h] [xbp-D8h]
  int32_t v58; // [xsp+14h] [xbp-CCh] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v59; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v60; // [xsp+40h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CE859E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__142_0__);
    sub_1C7BAE8(&StringLiteral_9263/*"NEED_QP"*/);
    sub_1C7BAE8(&StringLiteral_3588/*"COMBINE_HAVE_QP"*/);
    sub_1C7BAE8(&StringLiteral_3750/*"CONFIRM_COMBINE_MSG"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_3622/*"COMBINE_SPEND_QP"*/);
    byte_4CE859E = 1;
  }
  memset(&v60, 0, sizeof(v60));
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_44;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_44;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0);
  SetRarityDialogControl__SetCenter(this, v21);
  if ( !selectedList )
    goto LABEL_44;
  v56 = (struct System_Collections_Generic_Dictionary_TKey__TValue__o *)haveQp;
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_34C1F70 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  materialSvtGrid = this->fields.materialSvtGrid;
  if ( !materialSvtGrid )
    goto LABEL_44;
  v23 = materialSvtGrid->fields.cellWidth * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v59,
    selectedList,
    (const MethodInfo_34C26C4 *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v24 = 0;
  v60 = v59;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v60,
            (const MethodInfo_35E8880 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v26 = (UnityEngine_Component_o *)this->fields.materialSvtGrid;
    if ( !v26 )
      sub_1C7BD40(0, v25);
    current = v60.fields._current;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v26, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
    if ( !Object )
      sub_1C7BD40(0, v31);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_object )
      sub_1C7BD40(0, v33);
    MaterialSvtInfo__setMaterialSvtInfo_31824892(
      (MaterialSvtInfo_o *)Component_object,
      v24++,
      baseData,
      (int64_t)current.fields.key,
      0,
      0,
      LOBYTE(current.fields.value) != 0,
      0,
      v55);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v60,
    (const MethodInfo_35E899C *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_34C1F70 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_34C1F70 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v36 = this->fields.materialSvtGrid;
  if ( !v36 )
    goto LABEL_44;
  maxPerLine = v36->fields.maxPerLine;
  v38 = (int)normalConfirmInfo;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.materialSvtGrid,
                                                    0);
  if ( !normalConfirmInfo )
    goto LABEL_44;
  if ( v38 <= maxPerLine )
    v39 = Count;
  else
    v39 = maxPerLine;
  v40 = 55.0;
  if ( v38 <= maxPerLine )
    v40 = y;
  v42 = (float)(this->fields.center.fields.x - (float)(v23 * (float)(v39 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v40 - 1),
    0);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)normalConfirmInfo,
                                                    0);
  if ( !normalConfirmInfo )
    goto LABEL_44;
  v61.fields.x = 0.5;
  v61.fields.y = 0.5;
  v61.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v61, 0);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  UIGrid__set_repositionNow((UIGrid_o *)normalConfirmInfo, 1, 0);
  normalSpendQpTxtLb = this->fields.normalSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3622/*"COMBINE_SPEND_QP"*/, 0);
  if ( !normalSpendQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3588/*"COMBINE_HAVE_QP"*/, 0);
  if ( !normalHaveQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  v58 = spendQp;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v46, v47, 0);
  if ( !confirmSpendQpLb )
    goto LABEL_44;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  v59.fields._dictionary = v56;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v59);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v49, v50, 0);
  if ( !confirmHaveQpLb )
    goto LABEL_44;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3750/*"CONFIRM_COMBINE_MSG"*/, 0);
  if ( !confirmMsgLb
    || (UILabel__set_text(confirmMsgLb, (System_String_o *)normalConfirmInfo, 0),
        (normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0)
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0)) == 0
    || (UnityEngine_GameObject__SetActive(normalConfirmInfo, 0, 0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_44:
    sub_1C7BD40(normalConfirmInfo, v15);
  }
  if ( combineRootComponent->fields.state == 4 )
  {
    v53 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v53, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__142_0__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v53, 0, 0, v54);
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
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v20; // x1
  il2cpp_array_size_t max_length; // x25
  float v22; // s8
  unsigned __int64 v23; // x24
  bool v24; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v27; // x7
  float y; // s9
  int v29; // w22
  int v30; // w9
  float v31; // s1 OVERLAPPED
  float z; // s2
  float v33; // s0
  UILabel_o *exceedConfirmSpendQpTxtLb; // x22
  UILabel_o *exceedConfirmHaveQpTxtLb; // x22
  UILabel_o *exceedConfirmSpendQpLb; // x22
  System_String_o *v37; // x23
  Il2CppObject *v38; // x0
  UILabel_o *exceedConfirmHaveQpLb; // x21
  System_String_o *v40; // x22
  Il2CppObject *v41; // x0
  UILabel_o *exceedMaterialMsgLb; // x20
  UILabel_o *exceedConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v45; // x20
  const MethodInfo *v46; // x5
  int64_t v47; // [xsp+8h] [xbp-78h] BYREF
  int32_t v48; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CE859C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl__SetExceedMaterialInfo_b__140_0__);
    sub_1C7BAE8(&StringLiteral_9263/*"NEED_QP"*/);
    sub_1C7BAE8(&StringLiteral_3588/*"COMBINE_HAVE_QP"*/);
    sub_1C7BAE8(&StringLiteral_3750/*"CONFIRM_COMBINE_MSG"*/);
    sub_1C7BAE8(&StringLiteral_3587/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_3622/*"COMBINE_SPEND_QP"*/);
    byte_4CE859C = 1;
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_41;
  UILabel__set_text(cancelBtnLb, (System_String_o *)exceedConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_41;
  UILabel__set_text(decideBtnLb, (System_String_o *)exceedConfirmInfo, 0);
  SetRarityDialogControl__SetCenter(this, v20);
  if ( !list )
    goto LABEL_41;
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  LODWORD(max_length) = list->max_length;
  v22 = *((float *)exceedConfirmInfo + 12);
  if ( (int)max_length >= 1 )
  {
    v23 = 0;
    v24 = 0;
    do
    {
      if ( v24 )
        goto LABEL_41;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0);
      exceedConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
      if ( !exceedConfirmInfo )
        goto LABEL_41;
      exceedConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)exceedConfirmInfo,
                            (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v23 >= LODWORD(list->max_length) )
        sub_1C7BD48(exceedConfirmInfo);
      if ( !exceedConfirmInfo )
        goto LABEL_41;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)exceedConfirmInfo,
        v23,
        baseData,
        list->m_Items[v23],
        0,
        0,
        0,
        v27);
      exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
      max_length = list->max_length;
      ++v23;
      v24 = exceedConfirmInfo == 0;
    }
    while ( (__int64)v23 < (int)max_length );
    if ( !exceedConfirmInfo )
      goto LABEL_41;
  }
  y = this->fields.center.fields.y;
  v29 = *((_DWORD *)exceedConfirmInfo + 11);
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0);
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  if ( v29 >= (int)max_length )
    v30 = max_length;
  else
    v30 = v29;
  v31 = 55.0;
  if ( v29 >= (int)max_length )
    v31 = y;
  v33 = (float)(this->fields.center.fields.x - (float)((float)(v22 * 0.5) * (float)(v30 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)exceedConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v31 - 1),
    0);
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0);
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  v49.fields.x = 0.5;
  v49.fields.y = 0.5;
  v49.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)exceedConfirmInfo, v49, 0);
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  UIGrid__set_repositionNow((UIGrid_o *)exceedConfirmInfo, 1, 0);
  exceedConfirmSpendQpTxtLb = this->fields.exceedConfirmSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3622/*"COMBINE_SPEND_QP"*/, 0);
  if ( !exceedConfirmSpendQpTxtLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmSpendQpTxtLb, (System_String_o *)exceedConfirmInfo, 0);
  exceedConfirmHaveQpTxtLb = this->fields.exceedConfirmHaveQpTxtLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3588/*"COMBINE_HAVE_QP"*/, 0);
  if ( !exceedConfirmHaveQpTxtLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmHaveQpTxtLb, (System_String_o *)exceedConfirmInfo, 0);
  exceedConfirmSpendQpLb = this->fields.exceedConfirmSpendQpLb;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  v48 = spendQp;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
  exceedConfirmInfo = System_String__Format(v37, v38, 0);
  if ( !exceedConfirmSpendQpLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmSpendQpLb, (System_String_o *)exceedConfirmInfo, 0);
  exceedConfirmHaveQpLb = this->fields.exceedConfirmHaveQpLb;
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  v47 = haveQp;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v47);
  exceedConfirmInfo = System_String__Format(v40, v41, 0);
  if ( !exceedConfirmHaveQpLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmHaveQpLb, (System_String_o *)exceedConfirmInfo, 0);
  exceedMaterialMsgLb = this->fields.exceedMaterialMsgLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3587/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, 0);
  if ( !exceedMaterialMsgLb
    || (UILabel__set_text(exceedMaterialMsgLb, (System_String_o *)exceedConfirmInfo, 0),
        exceedConfirmMsgLb = this->fields.exceedConfirmMsgLb,
        exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3750/*"CONFIRM_COMBINE_MSG"*/, 0),
        !exceedConfirmMsgLb)
    || (UILabel__set_text(exceedConfirmMsgLb, (System_String_o *)exceedConfirmInfo, 0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_41:
    sub_1C7BD40(exceedConfirmInfo, v14);
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v45 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)this, Method_SetRarityDialogControl__SetExceedMaterialInfo_b__140_0__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 0, v45, 0, 0, v46);
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
  UILabel_o *cancelBtnLb; // x22
  UILabel_o *decideBtnLb; // x22
  UILabel_o *friendshipExceedSpendQpTxtLb; // x22
  UILabel_o *friendshipExceedHaveQpTxtLb; // x22
  UILabel_o *friendshipExceedSpendQpLb; // x22
  System_String_o *v19; // x23
  Il2CppObject *v20; // x0
  UILabel_o *friendshipExceedHaveQpLb; // x21
  System_String_o *v22; // x22
  Il2CppObject *v23; // x0
  UILabel_o *friendshipExceedMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v26; // x20
  const MethodInfo *v27; // x5
  int64_t v28; // [xsp+0h] [xbp-50h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CE85AB & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__155_0__);
    sub_1C7BAE8(&StringLiteral_9263/*"NEED_QP"*/);
    sub_1C7BAE8(&StringLiteral_3588/*"COMBINE_HAVE_QP"*/);
    sub_1C7BAE8(&StringLiteral_6527/*"FRIENDSHIP_EXCEED_SPEND_QP"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_3758/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/);
    byte_4CE85AB = 1;
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0);
  if ( !cancelBtnLb )
    goto LABEL_21;
  UILabel__set_text(cancelBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0);
  if ( !decideBtnLb )
    goto LABEL_21;
  UILabel__set_text(decideBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0);
  friendshipExceedSpendQpTxtLb = this->fields.friendshipExceedSpendQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_6527/*"FRIENDSHIP_EXCEED_SPEND_QP"*/,
                                                              0);
  if ( !friendshipExceedSpendQpTxtLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedSpendQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0);
  friendshipExceedHaveQpTxtLb = this->fields.friendshipExceedHaveQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3588/*"COMBINE_HAVE_QP"*/,
                                                              0);
  if ( !friendshipExceedHaveQpTxtLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedHaveQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0);
  friendshipExceedSpendQpLb = this->fields.friendshipExceedSpendQpLb;
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  v29 = spendQp;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v19, v20, 0);
  if ( !friendshipExceedSpendQpLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedSpendQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0);
  friendshipExceedHaveQpLb = this->fields.friendshipExceedHaveQpLb;
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  v28 = haveQp;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v28);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v22, v23, 0);
  if ( !friendshipExceedHaveQpLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedHaveQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0);
  friendshipExceedMsgLb = this->fields.friendshipExceedMsgLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3758/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/,
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
    sub_1C7BD40(friendshipExceedConfirmInfo, v10);
  }
  if ( combineRootComponent->fields.state == 12 )
  {
    v26 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v26,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__155_0__,
      0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v26, 0, 0, v27);
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
  Il2CppObject *v13; // x20
  UnityEngine_GameObject_o *limitUpConfirmInfo; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  UILabel_o *cancelBtnLb; // x23
  UILabel_o *decideBtnLb; // x23
  UILabel_o *limitUpConfirmSpendQpTxtLb; // x23
  UILabel_o *limitUpConfirmHaveQpTxtLb; // x23
  UILabel_o *limitUpConfirmSpendQpLb; // x23
  System_String_o *v25; // x24
  Il2CppObject *v26; // x0
  UILabel_o *limitUpConfirmHaveQpLb; // x22
  System_String_o *v28; // x23
  Il2CppObject *v29; // x0
  UILabel_o *limitUpConfirmMsgLb; // x21
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v32; // x21
  const MethodInfo *v33; // x5
  int64_t v34; // [xsp+8h] [xbp-58h] BYREF
  int32_t v35; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4CE85A1 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl___c__DisplayClass145_0__SetLimitUpInfo_b__0__);
    sub_1C7BAE8(&SetRarityDialogControl___c__DisplayClass145_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_9263/*"NEED_QP"*/);
    sub_1C7BAE8(&StringLiteral_3588/*"COMBINE_HAVE_QP"*/);
    sub_1C7BAE8(&StringLiteral_3750/*"CONFIRM_COMBINE_MSG"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_3622/*"COMBINE_SPEND_QP"*/);
    byte_4CE85A1 = 1;
  }
  v13 = (Il2CppObject *)sub_1C7BD34(SetRarityDialogControl___c__DisplayClass145_0_TypeInfo);
  System_Object___ctor(v13, 0);
  if ( !v13 )
    goto LABEL_22;
  v13[1].klass = (Il2CppClass *)baseData;
  sub_1C7BA8C(&v13[1], baseData);
  v13[1].monitor = combineLimitUpWarningDialog;
  sub_1C7BA8C(&v13[1].monitor, combineLimitUpWarningDialog);
  v13[2].klass = (Il2CppClass *)this;
  sub_1C7BA8C(&v13[2], this);
  SetRarityDialogControl__DisableConfirmInfo(this, v16);
  SetRarityDialogControl__RemoveAllChild(this, v17);
  limitUpConfirmInfo = this->fields.limitUpConfirmInfo;
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0);
  limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0);
  SetRarityDialogControl__Open(this, v18);
  SetRarityDialogControl__DefaultBgSize(this, v19);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.limitUpTitleLb;
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)limitUpConfirmInfo, msg, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_22;
  UILabel__set_text(cancelBtnLb, (System_String_o *)limitUpConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_22;
  UILabel__set_text(decideBtnLb, (System_String_o *)limitUpConfirmInfo, 0);
  limitUpConfirmSpendQpTxtLb = this->fields.limitUpConfirmSpendQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3622/*"COMBINE_SPEND_QP"*/, 0);
  if ( !limitUpConfirmSpendQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmSpendQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0);
  limitUpConfirmHaveQpTxtLb = this->fields.limitUpConfirmHaveQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3588/*"COMBINE_HAVE_QP"*/, 0);
  if ( !limitUpConfirmHaveQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmHaveQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0);
  limitUpConfirmSpendQpLb = this->fields.limitUpConfirmSpendQpLb;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  v35 = spendQp;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v25, v26, 0);
  if ( !limitUpConfirmSpendQpLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmSpendQpLb, (System_String_o *)limitUpConfirmInfo, 0);
  limitUpConfirmHaveQpLb = this->fields.limitUpConfirmHaveQpLb;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  v34 = haveQp;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v34);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v28, v29, 0);
  if ( !limitUpConfirmHaveQpLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmHaveQpLb, (System_String_o *)limitUpConfirmInfo, 0);
  limitUpConfirmMsgLb = this->fields.limitUpConfirmMsgLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3750/*"CONFIRM_COMBINE_MSG"*/, 0);
  if ( !limitUpConfirmMsgLb
    || (UILabel__set_text(limitUpConfirmMsgLb, (System_String_o *)limitUpConfirmInfo, 0),
        (limitUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0)
    || (limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)limitUpConfirmInfo, 0)) == 0
    || (UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 0, 0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_22:
    sub_1C7BD40(limitUpConfirmInfo, v15);
  }
  if ( combineRootComponent->fields.state == 5 )
  {
    v32 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v32, v13, Method_SetRarityDialogControl___c__DisplayClass145_0__SetLimitUpInfo_b__0__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v32, 0, 0, v33);
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
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *npUpTitleLb; // x21
  System_String_o **v24; // x8
  UILabel_o *cancelBtnLb; // x21
  UILabel_o *decideBtnLb; // x21
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v28; // x20
  System_Action_o *v29; // x21
  const MethodInfo *v30; // x5
  SetRarityDialogControl_o *v31; // x0
  int32_t v32; // w1
  const MethodInfo *v33; // [xsp+0h] [xbp-70h]

  if ( (byte_4CE85A4 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl_DefaultBgSize__);
    sub_1C7BAE8(&Method_SetRarityDialogControl__SetNpCombineInfo_b__148_0__);
    sub_1C7BAE8(&Method_SetRarityDialogControl__SetNpCombineInfo_b__148_1__);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_3784/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/);
    sub_1C7BAE8(&StringLiteral_3782/*"CONFIRM_TITLE_TD_COMBINE"*/);
    byte_4CE85A4 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  SetRarityDialogControl__RemoveAllChild(this, v17);
  npUpConfirmInfo = this->fields.npUpConfirmInfo;
  if ( !npUpConfirmInfo )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0);
  this->fields.npBaseData = baseData;
  sub_1C7BA8C(&this->fields.npBaseData, baseData);
  this->fields.npSelectMtUsrSvtIdList = selectUsrSvtIdList;
  sub_1C7BA8C(&this->fields.npSelectMtUsrSvtIdList, selectUsrSvtIdList);
  this->fields.npLvUpData = updata;
  sub_1C7BA8C(&this->fields.npLvUpData, updata);
  this->fields.npIsExceedMaxLv = isExceedMaxLv;
  this->fields.npIsCombineSvt = isCombineSvt;
  this->fields.npIsExceededMaterial = isExceededMaterial;
  npUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !npUpConfirmInfo )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0);
  SetRarityDialogControl__Open(this, v20);
  SetRarityDialogControl__DefaultBgSize(this, v21);
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
    v33);
  npUpTitleLb = this->fields.npUpTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v24 = (System_String_o **)(reConfirmation ? &StringLiteral_3784/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/ : &StringLiteral_3782/*"CONFIRM_TITLE_TD_COMBINE"*/);
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(*v24, 0);
  if ( !npUpTitleLb )
    goto LABEL_27;
  UILabel__set_text(npUpTitleLb, (System_String_o *)npUpConfirmInfo, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb
    || (UILabel__set_text(cancelBtnLb, (System_String_o *)npUpConfirmInfo, 0),
        decideBtnLb = this->fields.decideBtnLb,
        npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/, 0),
        !decideBtnLb)
    || (UILabel__set_text(decideBtnLb, (System_String_o *)npUpConfirmInfo, 0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_27:
    sub_1C7BD40(npUpConfirmInfo, v18);
  }
  if ( combineRootComponent->fields.state == 11 )
  {
    if ( (this->fields.npIsExceedMaxLv || this->fields.npIsCombineSvt || this->fields.npIsExceededMaterial)
      && !reConfirmation )
    {
      v28 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__148_0__, 0);
      v29 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v29, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0);
      v31 = this;
      v32 = 0;
    }
    else
    {
      v28 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__148_1__, 0);
      v29 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v29, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0);
      v32 = 8;
      v31 = this;
    }
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v31, v32, v28, 0, v29, v30);
  }
}


void SetRarityDialogControl__SetSkillNpCombineInfo(
        SetRarityDialogControl_o *this,
        SetLevelUpData_array *upDataList,
        System_String_o *titleMsg,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *skillUpConfirmInfo; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  SetLevelUpData_o *v12; // x23
  int max_length; // w21
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  struct UILabel_o *upTargetSkillNameBef; // x22
  UnityEngine_GameObject_o *v21; // x21
  struct UILabel_o *upTargetSkillNameAft; // x22
  SetLevelUpData_o *v23; // x8
  UnityEngine_GameObject_o *v24; // x22
  SetLevelUpData_o *v25; // x8
  UnityEngine_GameObject_c *klass; // x8
  __int64 v27; // x20
  UIExtrusionLabel_o *currentLvLb; // x20
  UIExtrusionLabel_o *resLvLb; // x20
  UILabel_o *upSpendQpTxtLb; // x20
  UILabel_o *upHaveQpTxtLb; // x20
  UILabel_o *upSpendQpLb; // x20
  System_String_o *v33; // x21
  Il2CppObject *v34; // x0
  UILabel_o *upHaveQpLb; // x20
  System_String_o *v36; // x21
  Il2CppObject *v37; // x0
  UILabel_o *upConfirmMsgLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v42; // x20
  const MethodInfo *v43; // x5
  __int64 v44; // x0
  int64_t haveQp; // [xsp+0h] [xbp-50h] BYREF
  int32_t spendQp; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CE85A2 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__146_0__);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&UILabel___TypeInfo);
    sub_1C7BAE8(&StringLiteral_9263/*"NEED_QP"*/);
    sub_1C7BAE8(&StringLiteral_3588/*"COMBINE_HAVE_QP"*/);
    sub_1C7BAE8(&StringLiteral_3750/*"CONFIRM_COMBINE_MSG"*/);
    sub_1C7BAE8(&StringLiteral_25637/*"】"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_3622/*"COMBINE_SPEND_QP"*/);
    sub_1C7BAE8(&StringLiteral_25632/*"【"*/);
    byte_4CE85A2 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)upDataList);
  SetRarityDialogControl__RemoveAllChild(this, v7);
  skillUpConfirmInfo = this->fields.skillUpConfirmInfo;
  if ( !skillUpConfirmInfo
    || (UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0),
        (skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0)
    || (UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0),
        SetRarityDialogControl__Open(this, v10),
        SetRarityDialogControl__DefaultBgSize(this, v11),
        !upDataList) )
  {
LABEL_60:
    sub_1C7BD40(skillUpConfirmInfo, v8);
  }
  if ( !LODWORD(upDataList->max_length) )
    goto LABEL_61;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTitleLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  v12 = upDataList->m_Items[0];
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, titleMsg, 0);
  if ( !v12 )
    goto LABEL_60;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetRubyLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, v12->fields.targetRuby, 0);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetNameLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  max_length = upDataList->max_length;
  skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  if ( max_length >= 2 )
  {
    UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 0, 0);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetSkillNameBef;
    if ( !skillUpConfirmInfo )
      goto LABEL_60;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0);
    if ( !skillUpConfirmInfo )
      goto LABEL_60;
    skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
    if ( !skillUpConfirmInfo )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upSpendQpTxtLb;
    if ( !skillUpConfirmInfo )
      goto LABEL_60;
    v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
    GameObjectExtensions__SetLocalPositionX(v18, 11.0, 0);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upHaveQpTxtLb;
    if ( !skillUpConfirmInfo )
      goto LABEL_60;
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
    GameObjectExtensions__SetLocalPositionX(v19, 11.0, 0);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1C7BB90(UILabel___TypeInfo, 2);
    if ( !skillUpConfirmInfo )
      goto LABEL_60;
    upTargetSkillNameBef = this->fields.upTargetSkillNameBef;
    v21 = skillUpConfirmInfo;
    if ( upTargetSkillNameBef )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1C7BC24(
                                                         this->fields.upTargetSkillNameBef,
                                                         skillUpConfirmInfo->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_62;
    }
    if ( !LODWORD(v21[1].klass) )
      goto LABEL_61;
    v21[1].monitor = upTargetSkillNameBef;
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1C7BA8C(&v21[1].monitor, upTargetSkillNameBef);
    upTargetSkillNameAft = this->fields.upTargetSkillNameAft;
    if ( upTargetSkillNameAft )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1C7BC24(
                                                         this->fields.upTargetSkillNameAft,
                                                         v21->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
      {
LABEL_62:
        v44 = sub_1C7BD64();
        sub_1C7BC10(v44, 0);
      }
    }
    if ( LODWORD(v21[1].klass) > 1 )
    {
      v21[1].fields.m_CachedPtr = (intptr_t)upTargetSkillNameAft;
      sub_1C7BA8C(&v21[1].fields, upTargetSkillNameAft);
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1C7BB90(string___TypeInfo, 2);
      if ( LODWORD(upDataList->max_length) )
      {
        v23 = upDataList->m_Items[0];
        if ( !v23 )
          goto LABEL_60;
        v24 = skillUpConfirmInfo;
        skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Concat_64217180(
                                                           (System_String_o *)StringLiteral_25632/*"【"*/,
                                                           v23->fields.displayText,
                                                           (System_String_o *)StringLiteral_25637/*"】"*/,
                                                           v23->fields.targetName,
                                                           0);
        if ( !v24 )
          goto LABEL_60;
        if ( LODWORD(v24[1].klass) )
        {
          v24[1].monitor = skillUpConfirmInfo;
          skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1C7BA8C(&v24[1].monitor, skillUpConfirmInfo);
          if ( LODWORD(upDataList->max_length) > 1 )
          {
            v25 = upDataList->m_Items[1];
            if ( !v25 )
              goto LABEL_60;
            skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Concat_64217180(
                                                               (System_String_o *)StringLiteral_25632/*"【"*/,
                                                               v25->fields.displayText,
                                                               (System_String_o *)StringLiteral_25637/*"】"*/,
                                                               v25->fields.targetName,
                                                               0);
            if ( LODWORD(v24[1].klass) > 1 )
            {
              v24[1].fields.m_CachedPtr = (intptr_t)skillUpConfirmInfo;
              skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1C7BA8C(&v24[1].fields, skillUpConfirmInfo);
              klass = v21[1].klass;
              if ( (int)klass < 1 )
                goto LABEL_45;
              v27 = 0;
              while ( (unsigned int)v27 < (unsigned int)klass && (unsigned int)v27 < LODWORD(v24[1].klass) )
              {
                skillUpConfirmInfo = (UnityEngine_GameObject_o *)*((_QWORD *)&v21[1].monitor + v27);
                if ( !skillUpConfirmInfo )
                  goto LABEL_60;
                UILabel__set_text((UILabel_o *)skillUpConfirmInfo, *((System_String_o **)&v24[1].monitor + v27), 0);
                klass = v21[1].klass;
                if ( (int)++v27 >= (int)klass )
                  goto LABEL_45;
              }
            }
          }
        }
      }
    }
LABEL_61:
    sub_1C7BD48(skillUpConfirmInfo);
  }
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetNameLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, v12->fields.targetName, 0);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetSkillNameBef;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v14, 0);
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 0, 0);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upSpendQpTxtLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
  GameObjectExtensions__SetLocalPositionX(v15, -5.0, 0);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upHaveQpTxtLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
  GameObjectExtensions__SetLocalPositionX(v16, -5.0, 0);
LABEL_45:
  currentLvLb = this->fields.currentLvLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v12 + 64, 0);
  if ( !currentLvLb )
    goto LABEL_60;
  UIExtrusionLabel__set_text(currentLvLb, (System_String_o *)skillUpConfirmInfo, 0);
  resLvLb = this->fields.resLvLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v12 + 68, 0);
  if ( !resLvLb )
    goto LABEL_60;
  UIExtrusionLabel__set_text(resLvLb, (System_String_o *)skillUpConfirmInfo, 0);
  upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3622/*"COMBINE_SPEND_QP"*/, 0);
  if ( !upSpendQpTxtLb )
    goto LABEL_60;
  UILabel__set_text(upSpendQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0);
  upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3588/*"COMBINE_HAVE_QP"*/, 0);
  if ( !upHaveQpTxtLb )
    goto LABEL_60;
  UILabel__set_text(upHaveQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0);
  upSpendQpLb = this->fields.upSpendQpLb;
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  spendQp = v12->fields.spendQp;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendQp);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v33, v34, 0);
  if ( !upSpendQpLb )
    goto LABEL_60;
  UILabel__set_text(upSpendQpLb, (System_String_o *)skillUpConfirmInfo, 0);
  upHaveQpLb = this->fields.upHaveQpLb;
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  haveQp = v12->fields.haveQp;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &haveQp);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v36, v37, 0);
  if ( !upHaveQpLb )
    goto LABEL_60;
  UILabel__set_text(upHaveQpLb, (System_String_o *)skillUpConfirmInfo, 0);
  upConfirmMsgLb = this->fields.upConfirmMsgLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3750/*"CONFIRM_COMBINE_MSG"*/, 0);
  if ( !upConfirmMsgLb )
    goto LABEL_60;
  UILabel__set_text(upConfirmMsgLb, (System_String_o *)skillUpConfirmInfo, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_60;
  UILabel__set_text(cancelBtnLb, (System_String_o *)skillUpConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_60;
  UILabel__set_text(decideBtnLb, (System_String_o *)skillUpConfirmInfo, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_60;
  if ( combineRootComponent->fields.state == 10 )
  {
    v42 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v42, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__146_0__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v42, 0, 0, v43);
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
  System_String_o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  System_Action_o *v20; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x5
  SetRarityDialogControl_o *v24; // x0
  int32_t v25; // w1

  if ( (byte_4CE85AC & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl__SetSpecialAscension_b__156_0__);
    sub_1C7BAE8(&Method_SetRarityDialogControl__SetSpecialAscension_b__156_1__);
    sub_1C7BAE8(&Method_SetRarityDialogControl__SetSpecialAscension_b__156_2__);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_12319/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/);
    sub_1C7BAE8(&StringLiteral_12323/*"SPECIAL_ASCENSION_WARNING1_TXT"*/);
    sub_1C7BAE8(&StringLiteral_12324/*"SPECIAL_ASCENSION_WARNING2_TXT"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE85AC = 1;
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
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12319/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/, 0);
    this->fields.specialAscensionConfirm = 0;
  }
  else if ( warning1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12323/*"SPECIAL_ASCENSION_WARNING1_TXT"*/, 0);
    this->fields.specialAscensionWarning1 = 0;
  }
  else if ( warning2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12324/*"SPECIAL_ASCENSION_WARNING2_TXT"*/, 0);
    this->fields.specialAscensionWarning2 = 0;
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_1/*""*/;
  }
  specialAscensionConfirmInfo = this->fields.specialAscensionConfirmInfo;
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              specialAscensionConfirmInfo,
                                                              (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___);
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  SpecialAscensionConfirmInfo__SetSpecialAscensionConfirmInfo(
    (SpecialAscensionConfirmInfo_o *)specialAscensionConfirmInfo,
    v15,
    v16,
    v17);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0);
  if ( !cancelBtnLb )
    goto LABEL_37;
  UILabel__set_text(cancelBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0);
  if ( !decideBtnLb
    || (UILabel__set_text(decideBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0),
        (specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0)
    || (specialAscensionConfirmInfo = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)specialAscensionConfirmInfo,
                                        0)) == 0
    || (UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 0, 0),
        v20 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo),
        System_Action___ctor(
          v20,
          (Il2CppObject *)this,
          Method_SetRarityDialogControl__SetSpecialAscension_b__156_0__,
          0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_37:
    sub_1C7BD40(specialAscensionConfirmInfo, v11);
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
      v22 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v22, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__156_1__, 0);
      v25 = 8;
      v24 = this;
      goto LABEL_35;
    }
    v22 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__156_2__, 0);
    v24 = this;
    v25 = 0;
LABEL_35:
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v24, v25, v22, v20, 0, v23);
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
  UILabel_o *cancelBtnLb; // x26
  UILabel_o *decideBtnLb; // x26
  const MethodInfo *v23; // x1
  struct System_Collections_Generic_Dictionary_TKey__TValue__o *v24; // x22
  struct UIGrid_o *allSvtGrid; // x8
  float v26; // s9
  int32_t v27; // w26
  __int64 v28; // x1
  UnityEngine_Component_o *v29; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  UnityEngine_GameObject_o *svtFaceInfo; // x28
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v34; // x1
  Il2CppObject *Component_object; // x0
  __int64 v36; // x1
  float y; // s8
  int32_t Count; // w25
  struct UIGrid_o *v39; // x8
  int32_t maxPerLine; // w20
  int32_t v41; // w24
  int32_t v42; // w10
  float v43; // s1 OVERLAPPED
  float z; // s2
  float v45; // s0
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v49; // x25
  Il2CppObject *v50; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v52; // x24
  Il2CppObject *v53; // x0
  UILabel_o *allRareMsgLb; // x20
  UILabel_o *allLimitRareLb; // x20
  UILabel_o *allRareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v58; // x20
  const MethodInfo *v59; // x5
  const MethodInfo *v60; // [xsp+0h] [xbp-F0h]
  int32_t v62; // [xsp+20h] [xbp-D0h]
  int32_t v63; // [xsp+24h] [xbp-CCh] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v64; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v65; // [xsp+50h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CE85A7 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__151_0__);
    sub_1C7BAE8(&StringLiteral_9263/*"NEED_QP"*/);
    sub_1C7BAE8(&StringLiteral_3588/*"COMBINE_HAVE_QP"*/);
    sub_1C7BAE8(&StringLiteral_3750/*"CONFIRM_COMBINE_MSG"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_11000/*"RARE_MATERIAL_INFO_MSG"*/);
    sub_1C7BAE8(&StringLiteral_3622/*"COMBINE_SPEND_QP"*/);
    byte_4CE85A7 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  SetRarityDialogControl__RemoveAllChild(this, v16);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0);
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  v62 = spendQp;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0);
  SetRarityDialogControl__Open(this, v19);
  SetRarityDialogControl__DefaultBgSize(this, v20);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allTitleLb;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UILabel__set_text((UILabel_o *)allDispConfirmInfo, title, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_69;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_69;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0);
  SetRarityDialogControl__SetCenter(this, v23);
  if ( !selectedList )
    goto LABEL_69;
  v24 = (struct System_Collections_Generic_Dictionary_TKey__TValue__o *)haveQp;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_34C1F70 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allSvtGrid = this->fields.allSvtGrid;
  if ( !allSvtGrid )
    goto LABEL_69;
  v26 = allSvtGrid->fields.cellWidth * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v64,
    selectedList,
    (const MethodInfo_34C26C4 *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v27 = 0;
  v65 = v64;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v65,
            (const MethodInfo_35E8880 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v29 = (UnityEngine_Component_o *)this->fields.allSvtGrid;
    if ( !v29 )
      sub_1C7BD40(0, v28);
    current = v65.fields._current;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v29, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
    if ( !Object )
      sub_1C7BD40(0, v34);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_object )
      sub_1C7BD40(0, v36);
    MaterialSvtInfo__setMaterialSvtInfo_31824892(
      (MaterialSvtInfo_o *)Component_object,
      v27++,
      baseData,
      (int64_t)current.fields.key,
      0,
      0,
      LOBYTE(current.fields.value) != 0,
      0,
      v60);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v65,
    (const MethodInfo_35E899C *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_34C1F70 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_34C1F70 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v39 = this->fields.allSvtGrid;
  if ( !v39 )
    goto LABEL_69;
  maxPerLine = v39->fields.maxPerLine;
  v41 = (int)allDispConfirmInfo;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this->fields.allSvtGrid,
                                                     0);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  if ( v41 <= maxPerLine )
    v42 = Count;
  else
    v42 = maxPerLine;
  v43 = 70.0;
  if ( v41 <= maxPerLine )
    v43 = y;
  z = this->fields.center.fields.z;
  v45 = (float)(this->fields.center.fields.x - (float)(v26 * (float)(v42 - 1))) * 0.47;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v43 - 1),
    0);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)allDispConfirmInfo,
                                                     0);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  v66.fields.x = 0.47;
  v66.fields.y = 0.47;
  v66.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v66, 0);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UIGrid__set_repositionNow((UIGrid_o *)allDispConfirmInfo, 1, 0);
  allSpendQpTxtLb = this->fields.allSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3622/*"COMBINE_SPEND_QP"*/, 0);
  if ( !allSpendQpTxtLb )
    goto LABEL_69;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3588/*"COMBINE_HAVE_QP"*/, 0);
  if ( !allHaveQpTxtLb )
    goto LABEL_69;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0);
  allSpendQpLb = this->fields.allSpendQpLb;
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  v63 = v62;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v49, v50, 0);
  if ( !allSpendQpLb )
    goto LABEL_69;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0);
  allHaveQpLb = this->fields.allHaveQpLb;
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_9263/*"NEED_QP"*/, 0);
  v64.fields._dictionary = v24;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v64);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v52, v53, 0);
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
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11000/*"RARE_MATERIAL_INFO_MSG"*/, 0);
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
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11000/*"RARE_MATERIAL_INFO_MSG"*/, 0);
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
    sub_1C7BD40(allDispConfirmInfo, v17);
  }
LABEL_59:
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3750/*"CONFIRM_COMBINE_MSG"*/, 0);
  if ( !allRareConfirmMsgLb )
    goto LABEL_69;
  UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_69;
  if ( combineRootComponent->fields.state == 4 )
  {
    v58 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v58,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__151_0__,
      0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v58, 0, 0, v59);
  }
}


void SetRarityDialogControl___SetAllDispConfirmCombine_b__143_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C7BD40(0, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___SetConfirmCombine_b__141_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C7BD40(0, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___SetConfirmLvExceed_b__149_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C7BD40(0, method);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0);
}


void SetRarityDialogControl___SetConfirmLvExceed_b__149_1(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.lvExceedCtr) == 0 )
    sub_1C7BD40(this, method);
  LevelExceedControl__OnClickCheckLvExceed((LevelExceedControl_o *)this, 0);
}


void SetRarityDialogControl___SetConfirmLvExceed_b__150_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C7BD40(0, method);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0);
}


void SetRarityDialogControl___SetConfirmRarityInfo_b__139_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C7BD40(0, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___SetConfirmSvtEqCombine_b__142_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C7BD40(0, method);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___SetExceedMaterialInfo_b__140_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.svtCombineCtr) == 0 )
    sub_1C7BD40(this, method);
  ServantCombineControl__CheckRareSvt((ServantCombineControl_o *)this, 0);
}


void SetRarityDialogControl___SetFriendshipExceedInfo_b__155_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C7BD40(0, method);
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
    sub_1C7BD40(0, method);
  CombineRootComponent__RequestTdCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___SetSkillNpCombineInfo_b__146_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C7BD40(0, method);
  CombineRootComponent__RequestSkillCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___SetSpecialAscension_b__156_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8
  struct SpecialAscensionControl_o *specialAscensionCtr; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (specialAscensionCtr = combineRootComponent->fields.specialAscensionCtr) == 0 )
    sub_1C7BD40(this, method);
  if ( specialAscensionCtr->fields.pushExeButton )
    specialAscensionCtr->fields.pushExeButton = 0;
}


void SetRarityDialogControl___SetSpecialAscension_b__156_1(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x21
  System_Action_o *v7; // x22

  if ( (byte_4CE85B4 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&CombineRootComponent_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl__SetSpecialAscension_b__156_3__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&StringLiteral_12321/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE85B4 = 1;
  }
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
  if ( CombineRootComponent__IsEnableSpecialAscension(0) )
  {
    combineRootComponent = this->fields.combineRootComponent;
    if ( combineRootComponent )
    {
      CombineRootComponent__RequestSpecialAscension(combineRootComponent, 0);
      return;
    }
LABEL_12:
    sub_1C7BD40(combineRootComponent, v3);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0);
  v7 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__156_3__, 0);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v6,
    v7,
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
  UserServantEntity_o *v3; // x1
  const MethodInfo *v4; // x5
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x21
  System_Action_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4CE85B5 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&CombineRootComponent_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SetRarityDialogControl__SetSpecialAscension_b__156_4__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&StringLiteral_12321/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE85B5 = 1;
  }
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
  if ( CombineRootComponent__IsEnableSpecialAscension(0) )
  {
    SetRarityDialogControl__SetSpecialAscension(
      this,
      v3,
      this->fields.specialAscensionConfirm,
      this->fields.specialAscensionWarning1,
      this->fields.specialAscensionWarning2,
      v4);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12321/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0);
    v7 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__156_4__, 0);
    if ( !Instance )
      sub_1C7BD40(v8, v9);
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v6,
      v7,
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
    sub_1C7BD40(this, method);
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
    sub_1C7BD40(this, method);
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
    sub_1C7BD40(0, method);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CE85B6 & 1) == 0 )
  {
    sub_1C7BAE8(&SetRarityDialogControl___c_TypeInfo);
    byte_4CE85B6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(SetRarityDialogControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SetRarityDialogControl___c_TypeInfo->static_fields->__9 = (struct SetRarityDialogControl___c_o *)v1;
  sub_1C7BA8C(SetRarityDialogControl___c_TypeInfo->static_fields, v1);
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
  return NpCombineControl__CheckConfirm_49198656(x, 0);
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
  NetworkManager_c *v4; // x0
  int64_t userIdNumber; // x25
  __int64 Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  __int64 v9; // x21
  unsigned __int64 v10; // x26
  __int64 v11; // x22
  __int128 v12; // q0
  __int64 v13; // x23
  __int64 v14; // x24
  struct UserServantEntity_o *baseData; // x8
  int v16; // w23
  __int128 v17; // q0
  struct UserServantEntity_o *v18; // x8
  __int128 v19; // q0
  __int64 v20; // x23
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Predicate_object__o *v25; // x21
  Il2CppObject *v26; // x22
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x0
  CombineLimitUpWarningDialog_ClickDelegate_o *_9__2; // x21
  CombineLimitUpWarningDialog_o *combineLimitUpWarningDialog; // x20
  struct SetRarityDialogControl_o *_4__this; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4CE85B7 & 1) == 0 )
  {
    sub_1C7BAE8(&CombineLimitUpWarningDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity__Find__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&System_Predicate_UserServantEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SetRarityDialogControl___c__SetLimitUpInfo_b__145_1__);
    sub_1C7BAE8(&Method_SetRarityDialogControl___c__DisplayClass145_0__SetLimitUpInfo_b__2__);
    sub_1C7BAE8(&SetRarityDialogControl___c_TypeInfo);
    byte_4CE85B7 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  userIdNumber = v4->static_fields->userIdNumber;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_51;
  Instance = (__int64)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_51;
  v8 = *(_QWORD *)(Instance + 24);
  v9 = Instance;
  if ( (int)v8 >= 1 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= (unsigned int)v8 )
        sub_1C7BD48(Instance);
      v11 = *(_QWORD *)(v9 + 32 + 8 * v10);
      if ( v11 )
      {
        v12 = *(_OWORD *)(v11 + 64);
        *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)(v11 + 48);
        *(_OWORD *)&v34.fields.fakeValue = v12;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v33 = v34;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v33, 0);
        if ( Instance == userIdNumber )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v11, 0);
          if ( (Instance & 1) == 0 )
          {
            v14 = *(_QWORD *)(v11 + 80);
            v13 = *(_QWORD *)(v11 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v35.fields.currentCryptoKey = v14;
            *(_QWORD *)&v35.fields.fakeValue = v13;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v35, 0);
            baseData = this->fields.baseData;
            if ( !baseData )
              goto LABEL_51;
            v16 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(baseData->fields.svtId, 0);
            if ( v16 == (_DWORD)Instance )
            {
              v17 = *(_OWORD *)(v11 + 32);
              *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)(v11 + 16);
              *(_OWORD *)&v34.fields.fakeValue = v17;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v32 = v34;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v32, 0);
              v18 = this->fields.baseData;
              if ( !v18 )
                goto LABEL_51;
              v19 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
              v20 = Instance;
              *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v31.fields.fakeValue = v19;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v31, 0);
              if ( v20 != Instance )
              {
                if ( !v3 )
                  goto LABEL_51;
                items = v3->fields._items;
                v22 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v3->fields._version;
                if ( !items )
                  goto LABEL_51;
                size = v3->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v3,
                    (Il2CppObject *)v11,
                    *(const MethodInfo_383EDFC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
                }
                else
                {
                  v24 = &items->obj.klass + size;
                  v3->fields._size = size + 1;
                  v24[4] = (Il2CppClass *)v11;
                  Instance = sub_1C7BA8C(v24 + 4, v11);
                }
              }
            }
          }
        }
      }
      LODWORD(v8) = *(_DWORD *)(v9 + 24);
    }
    while ( (__int64)++v10 < (int)v8 );
  }
  Instance = (__int64)SetRarityDialogControl___c_TypeInfo;
  if ( !SetRarityDialogControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo);
    Instance = (__int64)SetRarityDialogControl___c_TypeInfo;
  }
  v25 = *(System_Predicate_object__o **)(*(_QWORD *)(Instance + 184) + 8LL);
  if ( !v25 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (__int64)SetRarityDialogControl___c_TypeInfo;
    }
    v26 = **(Il2CppObject ***)(Instance + 184);
    v25 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_object____ctor(v25, v26, Method_SetRarityDialogControl___c__SetLimitUpInfo_b__145_1__, 0);
    static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
    static_fields->__9__145_1 = (struct System_Predicate_UserServantEntity__o *)v25;
    Instance = sub_1C7BA8C(&static_fields->__9__145_1, v25);
  }
  if ( !v3 )
    goto LABEL_51;
  Instance = (__int64)System_Collections_Generic_List_object___Find(
                        v3,
                        (System_Predicate_T__o *)v25,
                        (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_UserServantEntity__Find__);
  if ( Instance )
  {
    _9__2 = this->fields.__9__2;
    combineLimitUpWarningDialog = this->fields.combineLimitUpWarningDialog;
    if ( !_9__2 )
    {
      _9__2 = (CombineLimitUpWarningDialog_ClickDelegate_o *)sub_1C7BD34(CombineLimitUpWarningDialog_ClickDelegate_TypeInfo);
      CombineLimitUpWarningDialog_ClickDelegate___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_SetRarityDialogControl___c__DisplayClass145_0__SetLimitUpInfo_b__2__,
        0);
      this->fields.__9__2 = _9__2;
      Instance = sub_1C7BA8C(&this->fields.__9__2, _9__2);
    }
    if ( combineLimitUpWarningDialog )
    {
      CombineLimitUpWarningDialog__Open(combineLimitUpWarningDialog, _9__2, 0);
      return;
    }
LABEL_51:
    sub_1C7BD40(Instance, v7);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_51;
  Instance = (__int64)_4__this->fields.combineRootComponent;
  if ( !Instance )
    goto LABEL_51;
  CombineRootComponent__RequestLimitUp((CombineRootComponent_o *)Instance, 0);
}


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
      sub_1C7BD40(this, isDecide);
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
    sub_1C7BD40(this, method);
  CombineRootComponent__RequestAppendSkillCombine(combineRootComponent, !this->fields.isOpen, 0);
}