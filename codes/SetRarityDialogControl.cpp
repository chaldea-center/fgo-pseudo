void SetRarityDialogControl___cctor(const MethodInfo *method)
{
  if ( (byte_4C3BC2B & 1) == 0 )
  {
    sub_1C32C20(&SetRarityDialogControl_TypeInfo);
    byte_4C3BC2B = 1;
  }
  *SetRarityDialogControl_TypeInfo->static_fields = (struct SetRarityDialogControl_StaticFields)xmmword_C0D6E0;
}


void SetRarityDialogControl___ctor(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void SetRarityDialogControl__Awake(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  ;
}


void SetRarityDialogControl__CheckExceedSvt(
        SetRarityDialogControl_o *this,
        System_Int64_array *selectedList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x21
  int64_t v6; // x20

  if ( (byte_4C3BC2A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (SetRarityDialogControl_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3BC2A = 1;
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
            sub_1C32E84(this);
          v6 = selectedList->m_Items[v5];
          this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SetRarityDialogControl_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
            if ( this )
            {
              this = (SetRarityDialogControl_o *)DataMasterBase_object__object__long___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   v6,
                                                   (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              if ( this )
                goto LABEL_11;
            }
          }
          sub_1C32E7C(this);
LABEL_11:
          if ( SLODWORD(this->fields.confirmSpendQpLb) > 0 )
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
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  System_String_o *v33; // x20
  BalanceConfig_c *v34; // x8
  Il2CppObject *v35; // x21
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int v47; // [xsp+10h] [xbp-80h] BYREF
  int v48; // [xsp+14h] [xbp-7Ch] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+18h] [xbp-78h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+20h] [xbp-70h] BYREF
  int32_t atkUp[2]; // [xsp+28h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4C3BC18 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_12353/*"STATUS_HP_OVER_DIALOG_MSG"*/);
    sub_1C32C20(&StringLiteral_12351/*"STATUS_ATK_OVER_DIALOG_MSG"*/);
    sub_1C32C20(&StringLiteral_12352/*"STATUS_HP_ATK_OVER_DIALOG_MSG"*/);
    sub_1C32C20(&StringLiteral_12354/*"STATUS_OVER_DIALOG_MSG"*/);
    this = (SetRarityDialogControl_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3BC18 = 1;
  }
  if ( !baseData )
LABEL_47:
    sub_1C32E7C(this);
  adjustHp = baseData->fields.adjustHp;
  adjustAtk = baseData->fields.adjustAtk;
  *(_QWORD *)maxAjustAtk = 0;
  *(_QWORD *)atkUp = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0;
  *labelMsg = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)labelMsg,
    StringLiteral_1/*""*/,
    (int32_t)selectUsrSvtIdList,
    (const MethodInfo *)labelMsg);
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
          sub_1C32E84(IsStatusUp);
        v16 = selectUsrSvtIdList->m_Items[v13];
        this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_47;
        this = (SetRarityDialogControl_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !this )
          goto LABEL_47;
        this = (SetRarityDialogControl_o *)DataMasterBase_object__object__long___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             v16,
                                             (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
        v24 = (System_String_o **)&StringLiteral_12354/*"STATUS_OVER_DIALOG_MSG"*/;
      }
      else
      {
        v24 = (System_String_o **)&StringLiteral_12353/*"STATUS_HP_OVER_DIALOG_MSG"*/;
        if ( v22 > 0 && v19 > 0 )
          v24 = (System_String_o **)&StringLiteral_12352/*"STATUS_HP_ATK_OVER_DIALOG_MSG"*/;
        if ( v19 <= 0 )
        {
          v24 = (System_String_o **)&StringLiteral_12351/*"STATUS_ATK_OVER_DIALOG_MSG"*/;
          if ( v22 < 1 )
            goto LABEL_45;
        }
      }
      v26 = *v24;
      if ( *v24 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v33 = LocalizationManager__Get(v26, 0);
        v34 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v34 = BalanceConfig_TypeInfo;
        }
        v48 = v34->static_fields->StatusUpAdjustHp * v19;
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v27, v28, v29, v30, v31, v32);
        v47 = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk * v22;
        v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v36, v37, v38, v39, v40, v41);
        v43 = System_String__Format_63559836(v33, v35, v42, 0);
        *labelMsg = v43;
        sub_1C32BC4((CGThumbnailListItem_o *)labelMsg, (int32_t)v43, v44, v45);
      }
    }
LABEL_45:
    LOBYTE(IsStatusUp) = 1;
  }
  return IsStatusUp;
}


void SetRarityDialogControl__Close(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  SetRarityDialogControl_c *v4; // x8
  UnityEngine_GameObject_o *v5; // x20
  __int64 transform; // x0
  UnityEngine_GameObject_o *v7; // x0
  struct SetRarityDialogControl_StaticFields *static_fields; // x8
  TweenScale_o *v9; // x20
  UnityEngine_GameObject_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Transform_o *v16; // x20
  const MethodInfo *v17; // x1
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Vector3_o v19; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C3BC25 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SetRarityDialogControl_TypeInfo);
    sub_1C32C20(&StringLiteral_5985/*"EndCloseDlg"*/);
    sub_1C32C20(&StringLiteral_5308/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/);
    byte_4C3BC25 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v4 = SetRarityDialogControl_TypeInfo;
  v5 = gameObject;
  if ( !SetRarityDialogControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl_TypeInfo);
    v4 = SetRarityDialogControl_TypeInfo;
  }
  transform = (__int64)TweenAlpha__Begin(v5, v4->static_fields->CLOSE_TIME, 0.0, 0);
  if ( !transform )
    goto LABEL_26;
  *(_DWORD *)(transform + 32) = 6;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  static_fields = SetRarityDialogControl_TypeInfo->static_fields;
  v19.fields.x = static_fields->DIALOG_CLOSE_SCALE;
  v19.fields.y = v19.fields.x;
  v19.fields.z = v19.fields.x;
  v9 = TweenScale__Begin(v7, static_fields->CLOSE_TIME, v19, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
  if ( (transform & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_26;
    v9->fields.method = 6;
    v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v9->fields.eventReceiver = v10;
    sub_1C32BC4((CGThumbnailListItem_o *)&v9->fields.eventReceiver, (int32_t)v10, v11, v12);
    v13 = StringLiteral_5985/*"EndCloseDlg"*/;
    v9->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5985/*"EndCloseDlg"*/;
    sub_1C32BC4((CGThumbnailListItem_o *)&v9->fields.callWhenFinished, v13, v14, v15);
  }
  else
  {
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_26;
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
    v16 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4C313D1 )
    {
      transform = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    if ( !v16 )
      goto LABEL_26;
    UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
  transform = (__int64)this->fields.npUpConfirmInfo;
  if ( !transform )
    goto LABEL_26;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0) )
  {
    transform = (__int64)this->fields.npUpInfoComp;
    if ( !transform )
      goto LABEL_26;
    NpUpConfirmComponent__DestroySvtInfo((NpUpConfirmComponent_o *)transform, v17);
  }
  transform = (__int64)this->fields.raritySvtGrid;
  if ( !transform )
    goto LABEL_26;
  UIGrid__RemoveAllChild((UIGrid_o *)transform, 0);
  transform = (__int64)this->fields.allSvtGrid;
  if ( !transform
    || (UIGrid__RemoveAllChild((UIGrid_o *)transform, 0), (transform = (__int64)this->fields.exceedConfirmSvtGrid) == 0)
    || (UIGrid__RemoveAllChild((UIGrid_o *)transform, 0), (transform = (__int64)this->fields.materialSvtGrid) == 0)
    || (UIGrid__RemoveAllChild((UIGrid_o *)transform, 0),
        (transform = (__int64)this->fields.lvExceedConsumeItemGrid) == 0) )
  {
LABEL_26:
    sub_1C32E7C(transform);
  }
  UIGrid__RemoveAllChild((UIGrid_o *)transform, 0);
  v18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__RemoveBackBtn_44858496(v18, (System_String_o *)StringLiteral_5308/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0);
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
    sub_1C32E7C(decideBtnLb);
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
    sub_1C32E7C(rariryConfirmInfo);
  }
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0);
}


void SetRarityDialogControl__EndCloseDlg(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Action_o *onClickDlgCloseCallBack; // x19

  onClickDlgCloseCallBack = this->fields.onClickDlgCloseCallBack;
  this->fields.onClickDlgCloseCallBack = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onClickDlgCloseCallBack, 0, v2, v3);
  if ( onClickDlgCloseCallBack )
    ((void (__fastcall *)(intptr_t, intptr_t))onClickDlgCloseCallBack->fields.invoke_impl)(
      onClickDlgCloseCallBack->fields.method_code,
      onClickDlgCloseCallBack->fields.method);
}


void SetRarityDialogControl__EndOpen(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4C3BC27 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_5308/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/);
    byte_4C3BC27 = 1;
  }
  this->fields.isButtonEnable = 1;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_44857896(transform, (System_String_o *)StringLiteral_5308/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0);
}


void SetRarityDialogControl__MoveAlpha(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  SetRarityDialogControl_c *v4; // x8
  UnityEngine_Transform_o *v5; // x20
  UnityEngine_GameObject_o *v6; // x20
  float OPEN_TIME; // s8
  System_Action_o *v8; // x20
  System_String_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  TweenAlpha_o *v11; // x20
  UnityEngine_GameObject_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BC26 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SetRarityDialogControl_EndOpen__);
    sub_1C32C20(&SetRarityDialogControl_TypeInfo);
    byte_4C3BC26 = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v4 = SetRarityDialogControl_TypeInfo;
  v5 = (UnityEngine_Transform_o *)gameObject;
  if ( !SetRarityDialogControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl_TypeInfo);
    v4 = SetRarityDialogControl_TypeInfo;
  }
  if ( !v5 )
    goto LABEL_19;
  v15.fields.x = v4->static_fields->DIALOG_INITIAL_SCALE;
  v15.fields.y = v15.fields.x;
  v15.fields.z = v15.fields.x;
  UnityEngine_Transform__set_localScale(v5, v15, 0);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  OPEN_TIME = SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME;
  if ( !byte_4C313D6 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  TweenScale__Begin(v6, OPEN_TIME, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !gameObject )
    goto LABEL_19;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gameObject->klass[1]._1.element_class)(
    gameObject,
    gameObject->klass[1]._1.castClass,
    0.005);
  v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SetRarityDialogControl_EndOpen__, 0);
  if ( !v8 )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)System_Delegate__get_Method((System_Delegate_o *)v8, 0);
  if ( !gameObject )
    goto LABEL_19;
  v9 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))gameObject->klass[1]._1.element_class)(
                            gameObject,
                            gameObject->klass[1]._1.castClass);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    v9,
    SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME,
    0);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v11 = TweenAlpha__Begin(v10, SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME, 1.0, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( v11 )
    {
      v11->fields.method = 6;
      v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v11->fields.eventReceiver = v12;
      sub_1C32BC4((CGThumbnailListItem_o *)&v11->fields.eventReceiver, (int32_t)v12, v13, v14);
      return;
    }
LABEL_19:
    sub_1C32E7C(gameObject);
  }
}


void SetRarityDialogControl__OnClickCancel(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  struct System_Action_o *onClickDlgCancelCallBack; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3BC29 & 1) == 0 )
  {
    sub_1C32C20(&Method_SetRarityDialogControl_OnClickCancel__);
    byte_4C3BC29 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_SetRarityDialogControl_OnClickCancel__;
    if ( (*((_BYTE *)Method_SetRarityDialogControl_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_SetRarityDialogControl_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    SetRarityDialogControl__Close(this, v5);
    onClickDlgCancelCallBack = this->fields.onClickDlgCancelCallBack;
    this->fields.onClickDlgOkCallBack = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onClickDlgOkCallBack, 0, v7, v8);
    this->fields.onClickDlgCancelCallBack = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onClickDlgCancelCallBack, 0, v9, v10);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 naturalAligment; // x9
  __int64 v10; // x9
  CommonUI_o *v11; // x20
  SetRarityDialogControl___c_c *v12; // x8
  System_Action_o *_9__167_0; // x21
  Il2CppObject *v14; // x22
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Action_o *onClickDlgOkCallBack; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  SetRarityDialogControl_o *v21; // x0
  const MethodInfo *v22; // x1

  if ( (byte_4C3BC28 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&CombineRootComponent_TypeInfo);
    sub_1C32C20(&Method_SetRarityDialogControl_OnClickDlgOk__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&Method_SetRarityDialogControl___c__OnClickDlgOk_b__167_0__);
    sub_1C32C20(&SetRarityDialogControl___c_TypeInfo);
    byte_4C3BC28 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_SetRarityDialogControl_OnClickDlgOk__;
    if ( (*((_BYTE *)Method_SetRarityDialogControl_OnClickDlgOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_SetRarityDialogControl_OnClickDlgOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickDlgOkSeKind, 0, 0);
    SetRarityDialogControl__Close(this, v5);
    Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onClickDlgOkCallBack, 0, v7, v8);
        this->fields.onClickDlgCancelCallBack = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onClickDlgCancelCallBack, 0, v19, v20);
        if ( onClickDlgOkCallBack )
        {
          ((void (__fastcall *)(intptr_t, intptr_t))onClickDlgOkCallBack->fields.invoke_impl)(
            onClickDlgOkCallBack->fields.method_code,
            onClickDlgOkCallBack->fields.method);
          return;
        }
LABEL_26:
        sub_1C32E7C(Instance);
      }
      Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_26;
      Instance = (CombineRootComponent_o *)Instance->fields.myFSM;
      if ( !Instance )
        goto LABEL_26;
      v10 = CombineRootComponent_TypeInfo->_2.naturalAligment;
      if ( Instance->klass->_2.naturalAligment >= (unsigned int)v10
        && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v10 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__SetTutorialProgress(Instance, 8, 0);
        Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v11 = (CommonUI_o *)Instance;
        v12 = SetRarityDialogControl___c_TypeInfo;
        if ( !SetRarityDialogControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo);
          v12 = SetRarityDialogControl___c_TypeInfo;
        }
        _9__167_0 = v12->static_fields->__9__167_0;
        if ( !_9__167_0 )
        {
          if ( !v12->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v12);
            v12 = SetRarityDialogControl___c_TypeInfo;
          }
          v14 = (Il2CppObject *)v12->static_fields->__9;
          _9__167_0 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(_9__167_0, v14, Method_SetRarityDialogControl___c__OnClickDlgOk_b__167_0__, 0);
          static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
          static_fields->__9__167_0 = _9__167_0;
          sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__167_0, (int32_t)_9__167_0, v16, v17);
        }
        if ( !v11 )
          goto LABEL_26;
        CommonUI__CloseTutorialNotificationDialogArrow_31216340(v11, _9__167_0, 0);
        goto LABEL_23;
      }
    }
    sub_1C3313C(Instance);
    SetRarityDialogControl__OnClickCancel(v21, v22);
  }
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
  void *allDispConfirmInfo; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  UILabel_o *allTitleLb; // x26
  UILabel_o *cancelBtnLb; // x26
  UILabel_o *decideBtnLb; // x26
  const MethodInfo *v22; // x1
  il2cpp_array_size_t max_length; // x27
  float v24; // s8
  unsigned __int64 v25; // x26
  bool v26; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x27
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v29; // x7
  float y; // s9
  int v31; // w20
  int v32; // w8
  float v33; // s1 OVERLAPPED
  float z; // s2
  float v35; // s0
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v39; // x25
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x6
  __int64 v45; // x7
  Il2CppObject *v46; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v48; // x24
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x6
  __int64 v54; // x7
  Il2CppObject *v55; // x0
  UILabel_o *allRareMsgLb; // x21
  __int64 *v57; // x8
  UILabel_o *allRareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v60; // x20
  const MethodInfo *v61; // x5
  int64_t v62; // [xsp+0h] [xbp-80h] BYREF
  int32_t v63; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BC17 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__147_0__);
    sub_1C32C20(&StringLiteral_9236/*"NEED_QP"*/);
    sub_1C32C20(&StringLiteral_3583/*"COMBINE_HAVE_QP"*/);
    sub_1C32C20(&StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/);
    sub_1C32C20(&StringLiteral_3582/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/);
    sub_1C32C20(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_10956/*"RARE_MATERIAL_INFO_MSG"*/);
    sub_1C32C20(&StringLiteral_3617/*"COMBINE_SPEND_QP"*/);
    sub_1C32C20(&StringLiteral_3775/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_4C3BC17 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0);
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0);
  SetRarityDialogControl__MoveAlpha(this, v17);
  SetRarityDialogControl__DefaultBgSize(this, v18);
  allTitleLb = this->fields.allTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3775/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0);
  if ( !allTitleLb )
    goto LABEL_56;
  UILabel__set_text(allTitleLb, (System_String_o *)allDispConfirmInfo, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_56;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_56;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0);
  SetRarityDialogControl__SetCenter(this, v22);
  if ( !selectedList )
    goto LABEL_56;
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  LODWORD(max_length) = selectedList->max_length;
  v24 = *((float *)allDispConfirmInfo + 12);
  if ( (int)max_length >= 1 )
  {
    v25 = 0;
    v26 = 0;
    do
    {
      if ( v26 )
        goto LABEL_56;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0);
      allDispConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
      if ( !allDispConfirmInfo )
        goto LABEL_56;
      allDispConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)allDispConfirmInfo,
                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v25 >= LODWORD(selectedList->max_length) )
        sub_1C32E84(allDispConfirmInfo);
      if ( !allDispConfirmInfo )
        goto LABEL_56;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)allDispConfirmInfo,
        v25,
        baseData,
        selectedList->m_Items[v25],
        0,
        0,
        0,
        v29);
      allDispConfirmInfo = this->fields.allSvtGrid;
      max_length = selectedList->max_length;
      ++v25;
      v26 = allDispConfirmInfo == 0;
    }
    while ( (__int64)v25 < (int)max_length );
    if ( !allDispConfirmInfo )
      goto LABEL_56;
  }
  y = this->fields.center.fields.y;
  v31 = *((_DWORD *)allDispConfirmInfo + 11);
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  if ( v31 >= (int)max_length )
    v32 = max_length;
  else
    v32 = v31;
  v33 = 70.0;
  if ( v31 >= (int)max_length )
    v33 = y;
  v35 = (float)(this->fields.center.fields.x - (float)((float)(v24 * 0.5) * (float)(v32 - 1))) * 0.47;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v33 - 1),
    0);
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  v64.fields.x = 0.47;
  v64.fields.y = 0.47;
  v64.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v64, 0);
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  UIGrid__set_repositionNow((UIGrid_o *)allDispConfirmInfo, 1, 0);
  allSpendQpTxtLb = this->fields.allSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3617/*"COMBINE_SPEND_QP"*/, 0);
  if ( !allSpendQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3583/*"COMBINE_HAVE_QP"*/, 0);
  if ( !allHaveQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0);
  allSpendQpLb = this->fields.allSpendQpLb;
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  v63 = spendQp;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63, v40, v41, v42, v43, v44, v45);
  allDispConfirmInfo = System_String__Format(v39, v46, 0);
  if ( !allSpendQpLb )
    goto LABEL_56;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0);
  allHaveQpLb = this->fields.allHaveQpLb;
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  v62 = haveQp;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v62, v49, v50, v51, v52, v53, v54);
  allDispConfirmInfo = System_String__Format(v48, v55, 0);
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
    sub_1C32E7C(allDispConfirmInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0);
  allRareMsgLb = this->fields.allRareMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isExceededMaterial )
      goto LABEL_45;
LABEL_47:
    v57 = &StringLiteral_10956/*"RARE_MATERIAL_INFO_MSG"*/;
    goto LABEL_48;
  }
  if ( !isExceededMaterial )
    goto LABEL_47;
LABEL_45:
  v57 = &StringLiteral_3582/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
LABEL_48:
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)*v57, 0);
  if ( !allRareMsgLb )
    goto LABEL_56;
  UILabel__set_text(allRareMsgLb, (System_String_o *)allDispConfirmInfo, 0);
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/, 0);
  if ( !allRareConfirmMsgLb )
    goto LABEL_56;
  UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_56;
  if ( combineRootComponent->fields.state == 3 )
  {
    v60 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v60,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__147_0__,
      0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v60, 0, 0, v61);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
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
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  Il2CppObject *v32; // x0
  UILabel_o *v33; // x22
  System_String_o *v34; // x23
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  Il2CppObject *v41; // x0
  UILabel_o *appendSkillConfirmLabel; // x21
  System_String_o *v43; // x0
  Il2CppObject *Component_object; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UILabel_o *appendSkillSpendTxtLabel; // x22
  UILabel_o *appendSkillHaveTxtLabel; // x22
  UILabel_o *appendSkillSpendLabel; // x22
  System_String_o *v51; // x23
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  __int64 v55; // x5
  __int64 v56; // x6
  __int64 v57; // x7
  Il2CppObject *v58; // x0
  UILabel_o *appendSkillHaveLabel; // x22
  System_String_o *v60; // x23
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  __int64 v64; // x5
  __int64 v65; // x6
  __int64 v66; // x7
  Il2CppObject *v67; // x0
  UILabel_o *cancelBtnLb; // x21
  UILabel_o *decideBtnLb; // x21
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v71; // x21
  const MethodInfo *v72; // x5
  UnityEngine_Bounds_o v73; // [xsp+8h] [xbp-68h] BYREF
  int32_t haveSvtCoin; // [xsp+2Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BC1B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SetRarityDialogControl___c__DisplayClass151_0__SetAppendSkillCombineInfo_b__0__);
    sub_1C32C20(&SetRarityDialogControl___c__DisplayClass151_0_TypeInfo);
    sub_1C32C20(&StringLiteral_9236/*"NEED_QP"*/);
    sub_1C32C20(&StringLiteral_3583/*"COMBINE_HAVE_QP"*/);
    sub_1C32C20(&StringLiteral_2006/*"APPEND_SKILL_OPEN_CONFIRM"*/);
    sub_1C32C20(&StringLiteral_2009/*"APPEND_SKILL_OPEN_SPEND_COIN"*/);
    sub_1C32C20(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_2007/*"APPEND_SKILL_OPEN_HAVE_COIN"*/);
    sub_1C32C20(&StringLiteral_3617/*"COMBINE_SPEND_QP"*/);
    sub_1C32C20(&StringLiteral_1975/*"APPEND_SKILL_COMBINE_CONFIRM"*/);
    byte_4C3BC1B = 1;
  }
  v9 = sub_1C32E6C(SetRarityDialogControl___c__DisplayClass151_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_60;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_BYTE *)(v9 + 24) = isOpen;
  SetRarityDialogControl__DisableConfirmInfo(this, v13);
  appendSkillConfirmInfo = this->fields.appendSkillConfirmInfo;
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, 1, 0);
  appendSkillConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, 1, 0);
  SetRarityDialogControl__MoveAlpha(this, v14);
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
        SkillIconComponent__Set_40923804(
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
                                             (const MethodInfo_3134BD4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
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
                                     (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                       (const MethodInfo_3134888 *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
                }
                transform = UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)ComponentInChildren_object,
                              0);
                NGUIMath__CalculateAbsoluteWidgetBounds(&v73, transform, 0);
                appendSkillConfirmInfo = (UnityEngine_GameObject_o *)((UnityEngine_GameObject_o *(__fastcall *)(UnityEngine_Bounds_o *__return_ptr, Il2CppObject *, const MethodInfo *))ComponentInChildren_object->klass->vtable[4].methodPtr)(
                                                                       &v73,
                                                                       ComponentInChildren_object,
                                                                       ComponentInChildren_object->klass->vtable[4].method);
                if ( Component_object )
                {
                  UnityEngine_BoxCollider__set_center(
                    (UnityEngine_BoxCollider_o *)Component_object,
                    v73.fields.m_Center,
                    0);
                  ((void (__fastcall *)(UnityEngine_Bounds_o *__return_ptr, Il2CppObject *, const MethodInfo *))ComponentInChildren_object->klass->vtable[4].methodPtr)(
                    &v73,
                    ComponentInChildren_object,
                    ComponentInChildren_object->klass->vtable[4].method);
                  v75.fields.x = v73.fields.m_Extents.fields.x + v73.fields.m_Extents.fields.x;
                  v75.fields.y = v73.fields.m_Extents.fields.y + v73.fields.m_Extents.fields.y;
                  v75.fields.z = v73.fields.m_Extents.fields.z + v73.fields.m_Extents.fields.z;
                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v75, 0);
                  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillSpendTxtLabel;
                  if ( appendSkillConfirmInfo )
                  {
                    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0);
                    GameObjectExtensions__SetLocalPositionX(v46, 100.0, 0);
                    appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillHaveTxtLabel;
                    if ( appendSkillConfirmInfo )
                    {
                      v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0);
                      GameObjectExtensions__SetLocalPositionX(v47, 100.0, 0);
                      appendSkillSpendTxtLabel = this->fields.appendSkillSpendTxtLabel;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_2009/*"APPEND_SKILL_OPEN_SPEND_COIN"*/,
                                                                             0);
                      if ( appendSkillSpendTxtLabel )
                      {
                        UILabel__set_text(appendSkillSpendTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0);
                        appendSkillHaveTxtLabel = this->fields.appendSkillHaveTxtLabel;
                        appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_2007/*"APPEND_SKILL_OPEN_HAVE_COIN"*/,
                                                                               0);
                        if ( appendSkillHaveTxtLabel )
                        {
                          UILabel__set_text(appendSkillHaveTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0);
                          appendSkillSpendLabel = this->fields.appendSkillSpendLabel;
                          v51 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
                          LODWORD(v73.fields.m_Center.fields.x) = updata->fields.spendSvtCoin;
                          v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73, v52, v53, v54, v55, v56, v57);
                          appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v51, v58, 0);
                          if ( appendSkillSpendLabel )
                          {
                            UILabel__set_text(appendSkillSpendLabel, (System_String_o *)appendSkillConfirmInfo, 0);
                            appendSkillHaveLabel = this->fields.appendSkillHaveLabel;
                            v60 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
                            haveSvtCoin = updata->fields.haveSvtCoin;
                            v67 = (Il2CppObject *)j_il2cpp_value_box_0(
                                                    int_TypeInfo,
                                                    &haveSvtCoin,
                                                    v61,
                                                    v62,
                                                    v63,
                                                    v64,
                                                    v65,
                                                    v66);
                            appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v60, v67, 0);
                            if ( appendSkillHaveLabel )
                            {
                              UILabel__set_text(appendSkillHaveLabel, (System_String_o *)appendSkillConfirmInfo, 0);
                              appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
                              v43 = (System_String_o *)StringLiteral_2006/*"APPEND_SKILL_OPEN_CONFIRM"*/;
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
    sub_1C32E7C(appendSkillConfirmInfo);
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
                                                         (System_String_o *)StringLiteral_3617/*"COMBINE_SPEND_QP"*/,
                                                         0);
  if ( !v22 )
    goto LABEL_60;
  UILabel__set_text(v22, (System_String_o *)appendSkillConfirmInfo, 0);
  v23 = this->fields.appendSkillHaveTxtLabel;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3583/*"COMBINE_HAVE_QP"*/,
                                                         0);
  if ( !v23 )
    goto LABEL_60;
  UILabel__set_text(v23, (System_String_o *)appendSkillConfirmInfo, 0);
  v24 = this->fields.appendSkillSpendLabel;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  haveSvtCoin = updata->fields.spendQp;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveSvtCoin, v26, v27, v28, v29, v30, v31);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v25, v32, 0);
  if ( !v24 )
    goto LABEL_60;
  UILabel__set_text(v24, (System_String_o *)appendSkillConfirmInfo, 0);
  v33 = this->fields.appendSkillHaveLabel;
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  *(_QWORD *)&v73.fields.m_Center.fields.x = updata->fields.haveQp;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v73, v35, v36, v37, v38, v39, v40);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v34, v41, 0);
  if ( !v33 )
    goto LABEL_60;
  UILabel__set_text(v33, (System_String_o *)appendSkillConfirmInfo, 0);
  appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
  v43 = (System_String_o *)StringLiteral_1975/*"APPEND_SKILL_COMBINE_CONFIRM"*/;
LABEL_51:
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(v43, 0);
  if ( !appendSkillConfirmLabel )
    goto LABEL_60;
  UILabel__set_text(appendSkillConfirmLabel, (System_String_o *)appendSkillConfirmInfo, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/,
                                                         0);
  if ( !cancelBtnLb )
    goto LABEL_60;
  UILabel__set_text(cancelBtnLb, (System_String_o *)appendSkillConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/,
                                                         0);
  if ( !decideBtnLb )
    goto LABEL_60;
  UILabel__set_text(decideBtnLb, (System_String_o *)appendSkillConfirmInfo, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_60;
  if ( combineRootComponent->fields.state == 14 )
  {
    v71 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v71,
      (Il2CppObject *)v9,
      Method_SetRarityDialogControl___c__DisplayClass151_0__SetAppendSkillCombineInfo_b__0__,
      0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v71, 0, 0, v72);
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
    sub_1C32E7C(mPanel);
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
    sub_1C32E84(mPanel);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  this->fields.onClickDlgOkSeKind = seKind;
  this->fields.onClickDlgOkCallBack = callBack;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.onClickDlgOkCallBack,
    (int32_t)callBack,
    (int32_t)callBack,
    (const MethodInfo *)cancelCallBack);
  this->fields.onClickDlgCancelCallBack = cancelCallBack;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onClickDlgCancelCallBack, (int32_t)cancelCallBack, v9, v10);
  this->fields.onClickDlgCloseCallBack = closeCallBack;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.onClickDlgCloseCallBack, (int32_t)closeCallBack, v11, v12);
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
  void *normalConfirmInfo; // x0
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
  int v29; // w24
  int v30; // w9
  float v31; // s1 OVERLAPPED
  float z; // s2
  float v33; // s0
  UILabel_o *normalSpendQpTxtLb; // x24
  UILabel_o *normalHaveQpTxtLb; // x24
  UILabel_o *confirmSpendQpLb; // x24
  System_String_o *v37; // x25
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  Il2CppObject *v44; // x0
  UILabel_o *confirmHaveQpLb; // x23
  System_String_o *v46; // x24
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x6
  __int64 v52; // x7
  Il2CppObject *v53; // x0
  UILabel_o *confirmMsgLb; // x22
  const MethodInfo *v55; // x4
  _BOOL8 v56; // x0
  const MethodInfo *v57; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v59; // x20
  const MethodInfo *v60; // x5
  int64_t v61; // [xsp+0h] [xbp-80h] BYREF
  int32_t v62; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *labelMsg; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BC15 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SetRarityDialogControl__SetConfirmCombine_b__145_0__);
    sub_1C32C20(&StringLiteral_9236/*"NEED_QP"*/);
    sub_1C32C20(&StringLiteral_3583/*"COMBINE_HAVE_QP"*/);
    sub_1C32C20(&StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/);
    sub_1C32C20(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_3617/*"COMBINE_SPEND_QP"*/);
    byte_4C3BC15 = 1;
  }
  labelMsg = 0;
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  normalConfirmInfo = this->fields.normalConfirmInfo;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 1, 0);
  this->fields.isStatusUp = isStatusUp;
  normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 1, 0);
  SetRarityDialogControl__MoveAlpha(this, v16);
  SetRarityDialogControl__DefaultBgSize(this, v17);
  normalConfirmInfo = this->fields.normalTitleLb;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UILabel__set_text((UILabel_o *)normalConfirmInfo, msg, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_46;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_46;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0);
  SetRarityDialogControl__SetCenter(this, v20);
  if ( !selectedList )
    goto LABEL_46;
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  LODWORD(max_length) = selectedList->max_length;
  v22 = *((float *)normalConfirmInfo + 12);
  if ( (int)max_length >= 1 )
  {
    v23 = 0;
    v24 = 0;
    do
    {
      if ( v24 )
        goto LABEL_46;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0);
      normalConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
      if ( !normalConfirmInfo )
        goto LABEL_46;
      normalConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)normalConfirmInfo,
                            (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v23 >= LODWORD(selectedList->max_length) )
        sub_1C32E84(normalConfirmInfo);
      if ( !normalConfirmInfo )
        goto LABEL_46;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)normalConfirmInfo,
        v23,
        baseData,
        selectedList->m_Items[v23],
        0,
        0,
        0,
        v27);
      normalConfirmInfo = this->fields.materialSvtGrid;
      max_length = selectedList->max_length;
      ++v23;
      v24 = normalConfirmInfo == 0;
    }
    while ( (__int64)v23 < (int)max_length );
    if ( !normalConfirmInfo )
      goto LABEL_46;
  }
  y = this->fields.center.fields.y;
  v29 = *((_DWORD *)normalConfirmInfo + 11);
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0);
  if ( !normalConfirmInfo )
    goto LABEL_46;
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
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v31 - 1),
    0);
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  v64.fields.x = 0.5;
  v64.fields.y = 0.5;
  v64.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v64, 0);
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UIGrid__set_repositionNow((UIGrid_o *)normalConfirmInfo, 1, 0);
  normalSpendQpTxtLb = this->fields.normalSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3617/*"COMBINE_SPEND_QP"*/, 0);
  if ( !normalSpendQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3583/*"COMBINE_HAVE_QP"*/, 0);
  if ( !normalHaveQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  v62 = spendQp;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v38, v39, v40, v41, v42, v43);
  normalConfirmInfo = System_String__Format(v37, v44, 0);
  if ( !confirmSpendQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  v61 = haveQp;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v61, v47, v48, v49, v50, v51, v52);
  normalConfirmInfo = System_String__Format(v46, v53, 0);
  if ( !confirmHaveQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/, 0);
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
  v56 = SetRarityDialogControl__CheckStatusUpInfo(this, baseData, selectedList, &labelMsg, v55);
  if ( !v56 )
    goto LABEL_42;
  WrapControlText__textAdjust(this->fields.statusUpInfoLb, labelMsg, 22, 0, 0);
  normalConfirmInfo = this->fields.statusUpInfoLb;
  if ( !normalConfirmInfo
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0)) == 0 )
  {
LABEL_46:
    sub_1C32E7C(normalConfirmInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 1, 0);
LABEL_42:
  SetRarityDialogControl__CheckExceedSvt((SetRarityDialogControl_o *)v56, selectedList, v57);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_46;
  if ( combineRootComponent->fields.state == 3 )
  {
    v59 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v59, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmCombine_b__145_0__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v59, 0, 0, v60);
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
  UnityEngine_GameObject_o *costumeConfirmInfo; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  UILabel_o *costumeTitleLb; // x25
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  UILabel_o *needQpCostumeTextLb; // x24
  UILabel_o *needQpCostumeLb; // x24
  System_String_o *v21; // x25
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  Il2CppObject *v28; // x0
  UILabel_o *haveQpCostumeTextLb; // x23
  UILabel_o *haveQpCostumeLb; // x23
  System_String_o *v31; // x24
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  Il2CppObject *v38; // x0
  UILabel_o *costumeInfoLb; // x22
  const MethodInfo *v40; // x5
  struct CombineRootComponent_o *combineRootComponent; // x8
  int64_t v42; // [xsp+0h] [xbp-60h] BYREF
  int32_t v43; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C3BC22 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_9236/*"NEED_QP"*/);
    sub_1C32C20(&StringLiteral_3767/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_1C32C20(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_3849/*"COSTUME_NEED_QP_TEXT"*/);
    sub_1C32C20(&StringLiteral_3846/*"COSTUME_CONFIRM_MSG"*/);
    sub_1C32C20(&StringLiteral_3848/*"COSTUME_HAVE_QP_TEXT"*/);
    byte_4C3BC22 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)cosName);
  costumeConfirmInfo = this->fields.costumeConfirmInfo;
  if ( !costumeConfirmInfo )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(costumeConfirmInfo, 1, 0);
  costumeConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !costumeConfirmInfo )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(costumeConfirmInfo, 1, 0);
  SetRarityDialogControl__MoveAlpha(this, v14);
  SetRarityDialogControl__DefaultBgSize(this, v15);
  costumeTitleLb = this->fields.costumeTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3767/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0);
  if ( !costumeTitleLb )
    goto LABEL_20;
  UILabel__set_text(costumeTitleLb, (System_String_o *)costumeConfirmInfo, 0);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)this->fields.costumeNameLb;
  if ( !costumeConfirmInfo )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)costumeConfirmInfo, cosName, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_20;
  UILabel__set_text(cancelBtnLb, (System_String_o *)costumeConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_20;
  UILabel__set_text(decideBtnLb, (System_String_o *)costumeConfirmInfo, 0);
  needQpCostumeTextLb = this->fields.needQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3849/*"COSTUME_NEED_QP_TEXT"*/, 0);
  if ( !needQpCostumeTextLb )
    goto LABEL_20;
  UILabel__set_text(needQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0);
  needQpCostumeLb = this->fields.needQpCostumeLb;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  v43 = needQp;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43, v22, v23, v24, v25, v26, v27);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v21, v28, 0);
  if ( !needQpCostumeLb )
    goto LABEL_20;
  UILabel__set_text(needQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0);
  haveQpCostumeTextLb = this->fields.haveQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3848/*"COSTUME_HAVE_QP_TEXT"*/, 0);
  if ( !haveQpCostumeTextLb )
    goto LABEL_20;
  UILabel__set_text(haveQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0);
  haveQpCostumeLb = this->fields.haveQpCostumeLb;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  v42 = haveQp;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v42, v32, v33, v34, v35, v36, v37);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v31, v38, 0);
  if ( !haveQpCostumeLb
    || (UILabel__set_text(haveQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0),
        costumeInfoLb = this->fields.costumeInfoLb,
        costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3846/*"COSTUME_CONFIRM_MSG"*/,
                                                           0),
        !costumeInfoLb)
    || (UILabel__set_text(costumeInfoLb, (System_String_o *)costumeConfirmInfo, 0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_20:
    sub_1C32E7C(costumeConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 8 )
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, callBack, cancelCallBack, 0, v40);
}


void SetRarityDialogControl__SetConfirmCombineCostumeEventItem(
        SetRarityDialogControl_o *this,
        EventCombineCostumeEntity_o *eventCombineCostumeEnt,
        System_Action_o *callBack,
        System_Action_o *cancelCallBack,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *costumeEventItemConfirmInfo; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x5
  struct CombineRootComponent_o *combineRootComponent; // x8

  if ( (byte_4C3BC21 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___);
    byte_4C3BC21 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)eventCombineCostumeEnt);
  costumeEventItemConfirmInfo = this->fields.costumeEventItemConfirmInfo;
  if ( !costumeEventItemConfirmInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(costumeEventItemConfirmInfo, 1, 0);
  costumeEventItemConfirmInfo = this->fields.costumeEventItemConfirmInfo;
  if ( !costumeEventItemConfirmInfo
    || (costumeEventItemConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    costumeEventItemConfirmInfo,
                                                                    (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___)) == 0
    || (CostumeEventItemConfirmInfo__Set(
          (CostumeEventItemConfirmInfo_o *)costumeEventItemConfirmInfo,
          eventCombineCostumeEnt,
          0),
        (costumeEventItemConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0)
    || (UnityEngine_GameObject__SetActive(costumeEventItemConfirmInfo, 1, 0),
        SetRarityDialogControl__MoveAlpha(this, v10),
        SetRarityDialogControl__DefaultBgSize(this, v11),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_11:
    sub_1C32E7C(costumeEventItemConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 8 )
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 0, callBack, cancelCallBack, 0, v12);
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
  UnityEngine_GameObject_o *costumeEventItemOrNeedItemConfirmInfo; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  UILabel_o *cancelBtnLb; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v21; // x21
  const MethodInfo *v22; // x5

  if ( (byte_4C3BC20 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SetRarityDialogControl_DefaultBgSize__);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4C3BC20 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)combineCostumeEnt);
  costumeEventItemOrNeedItemConfirmInfo = this->fields.costumeEventItemOrNeedItemConfirmInfo;
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(costumeEventItemOrNeedItemConfirmInfo, 1, 0);
  costumeEventItemOrNeedItemConfirmInfo = this->fields.costumeEventItemOrNeedItemConfirmInfo;
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_21;
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                        costumeEventItemOrNeedItemConfirmInfo,
                                                                        (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___);
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
  SetRarityDialogControl__MoveAlpha(this, v16);
  SetRarityDialogControl__DefaultBgSize(this, v17);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/,
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
    sub_1C32E7C(costumeEventItemOrNeedItemConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 8 )
  {
    v21 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, 0, cancelCallBack, v21, v22);
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
  __int64 naturalAligment; // x9
  __int64 v23; // x9
  SetRarityDialogControl_o *v24; // x0
  System_Int64_array *v25; // x1
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // [xsp+0h] [xbp-70h]
  System_String_o *labelMsg; // [xsp+18h] [xbp-58h] BYREF

  v16 = this;
  v17 = isStatusUp;
  if ( (byte_4C3BC12 & 1) == 0 )
  {
    sub_1C32C20(&CombineRootComponent_TypeInfo);
    this = (SetRarityDialogControl_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3BC12 = 1;
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
      v27);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (Il2CppObject *)Instance[2].klass) == 0 )
LABEL_18:
    sub_1C32E7C(Instance);
  v23 = CombineRootComponent_TypeInfo->_2.naturalAligment;
  if ( Instance->klass->_2.naturalAligment < (unsigned int)v23
    || (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v23 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_19:
    sub_1C3313C(Instance);
    SetRarityDialogControl__CheckExceedSvt(v24, v25, v26);
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
  UnityEngine_GameObject_o *lvExceedConfirmSimpleInfo; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  UILabel_o *cancelBtnLb; // x23
  UILabel_o *decideBtnLb; // x23
  UILabel_o *lvExceedInfoLb; // x21
  UILabel_o *lvExceedSpendQpTxtLb; // x23
  UILabel_o *lvExceedHaveQpTxtLb; // x23
  UILabel_o *lvExceedSpendQpLb; // x23
  System_String_o *v21; // x24
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  Il2CppObject *v28; // x0
  UILabel_o *lvExceedHaveQpLb; // x22
  System_String_o *v30; // x23
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  Il2CppObject *v37; // x0
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v39; // x0
  intptr_t *v40; // x8
  System_Action_o *v41; // x21
  int32_t v42; // w20
  const MethodInfo *v43; // x5
  int64_t v44; // [xsp+0h] [xbp-50h] BYREF
  int32_t v45; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3BC1D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__153_0__);
    sub_1C32C20(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__153_1__);
    sub_1C32C20(&StringLiteral_9236/*"NEED_QP"*/);
    sub_1C32C20(&StringLiteral_3749/*"CONFIRM_EXCEED_COMBINE"*/);
    sub_1C32C20(&StringLiteral_3583/*"COMBINE_HAVE_QP"*/);
    sub_1C32C20(&StringLiteral_8346/*"LVEXCEED_COMBINE_SPEND_QP"*/);
    sub_1C32C20(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4C3BC1D = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  lvExceedConfirmSimpleInfo = this->fields.lvExceedConfirmSimpleInfo;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 1, 0);
  lvExceedConfirmSimpleInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 1, 0);
  SetRarityDialogControl__MoveAlpha(this, v13);
  SetRarityDialogControl__DefaultBgSize(this, v14);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)this->fields.lvExceedTitleLb;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)lvExceedConfirmSimpleInfo, msg, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/,
                                                            0);
  if ( !cancelBtnLb )
    goto LABEL_36;
  UILabel__set_text(cancelBtnLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/,
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
                                                              (System_String_o *)StringLiteral_8346/*"LVEXCEED_COMBINE_SPEND_QP"*/,
                                                              0);
    if ( lvExceedSpendQpTxtLb )
    {
      UILabel__set_text(lvExceedSpendQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0);
      lvExceedHaveQpTxtLb = this->fields.lvExceedHaveQpTxtLb;
      lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_3583/*"COMBINE_HAVE_QP"*/,
                                                                0);
      if ( lvExceedHaveQpTxtLb )
      {
        UILabel__set_text(lvExceedHaveQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0);
        lvExceedSpendQpLb = this->fields.lvExceedSpendQpLb;
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
        v45 = spendQp;
        v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v22, v23, v24, v25, v26, v27);
        lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)System_String__Format(v21, v28, 0);
        if ( lvExceedSpendQpLb )
        {
          UILabel__set_text(lvExceedSpendQpLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0);
          lvExceedHaveQpLb = this->fields.lvExceedHaveQpLb;
          v30 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
          v44 = haveQp;
          v37 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v44, v31, v32, v33, v34, v35, v36);
          lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)System_String__Format(v30, v37, 0);
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
    sub_1C32E7C(lvExceedConfirmSimpleInfo);
  }
  lvExceedInfoLb = this->fields.lvExceedInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3749/*"CONFIRM_EXCEED_COMBINE"*/,
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
    v39 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    v40 = (intptr_t *)&Method_SetRarityDialogControl__SetConfirmLvExceed_b__153_0__;
    if ( !isCheck )
      v40 = (intptr_t *)&Method_SetRarityDialogControl__SetConfirmLvExceed_b__153_1__;
    v41 = v39;
    if ( isCheck )
      v42 = 8;
    else
      v42 = 0;
    System_Action___ctor(v39, (Il2CppObject *)this, *v40, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, v42, v41, 0, 0, v43);
  }
}


void SetRarityDialogControl__SetConfirmLvExceed_48825884(
        SetRarityDialogControl_o *this,
        System_Collections_Generic_List_GameObject__o *itemObjList,
        System_Int32_array *itemList,
        int32_t spendQp,
        int64_t haveQp,
        const MethodInfo *method)
{
  SetRarityDialogControl_o *v10; // x19
  struct CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  UILabel_o *lvExceedTitleLabel; // x24
  UILabel_o *lvExceedSpendItemLabel; // x24
  UILabel_o *lvExceedSpendQpTxtLabel; // x24
  UILabel_o *lvExceedHaveQpTxtLabel; // x24
  UILabel_o *lvExceedSpendQpLabel; // x24
  System_String_o *v22; // x25
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  Il2CppObject *v29; // x0
  UILabel_o *lvExceedHaveQpLabel; // x23
  System_String_o *v31; // x24
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  Il2CppObject *v38; // x0
  UILabel_o *lvExceedConfirmLabel; // x22
  __int64 size; // x24
  unsigned __int64 v41; // x22
  SetRarityDialogControl_o *v42; // x23
  UnityEngine_Transform_o *transform; // x0
  System_Action_o *v44; // x20
  const MethodInfo *v45; // x5
  int64_t v46; // [xsp+0h] [xbp-60h] BYREF
  int32_t v47; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_4C3BC1E & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__154_0__);
    sub_1C32C20(&StringLiteral_9236/*"NEED_QP"*/);
    sub_1C32C20(&StringLiteral_3768/*"CONFIRM_TITLE_EXCEED_COMBINE"*/);
    sub_1C32C20(&StringLiteral_3583/*"COMBINE_HAVE_QP"*/);
    sub_1C32C20(&StringLiteral_8345/*"LVEXCEED_COMBINE_SPEND_ITEM"*/);
    sub_1C32C20(&StringLiteral_8346/*"LVEXCEED_COMBINE_SPEND_QP"*/);
    sub_1C32C20(&StringLiteral_8347/*"LVEXCEED_EXE_CONFIRM"*/);
    sub_1C32C20(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    this = (SetRarityDialogControl_o *)sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4C3BC1E = 1;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (SetRarityDialogControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
    if ( !this )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    SetRarityDialogControl__MoveAlpha(v10, v12);
    SetRarityDialogControl__DefaultBgSize(v10, v13);
    this = (SetRarityDialogControl_o *)v10->fields.mPanelBg;
    if ( !this )
      goto LABEL_31;
    UIWidget__set_height((UIWidget_o *)this, 501, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
    GameObjectExtensions__SetLocalPositionY(gameObject, -8.0, 0);
    GameObjectExtensions__SetLocalPositionY(v10->fields.confirmBtnInfo, -8.0, 0);
    cancelBtnLb = v10->fields.cancelBtnLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
    if ( !cancelBtnLb )
      goto LABEL_31;
    UILabel__set_text(cancelBtnLb, (System_String_o *)this, 0);
    decideBtnLb = v10->fields.decideBtnLb;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
    if ( !decideBtnLb )
      goto LABEL_31;
    UILabel__set_text(decideBtnLb, (System_String_o *)this, 0);
    lvExceedTitleLabel = v10->fields.lvExceedTitleLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3768/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0);
    if ( !lvExceedTitleLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedTitleLabel, (System_String_o *)this, 0);
    lvExceedSpendItemLabel = v10->fields.lvExceedSpendItemLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8345/*"LVEXCEED_COMBINE_SPEND_ITEM"*/, 0);
    if ( !lvExceedSpendItemLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedSpendItemLabel, (System_String_o *)this, 0);
    lvExceedSpendQpTxtLabel = v10->fields.lvExceedSpendQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8346/*"LVEXCEED_COMBINE_SPEND_QP"*/, 0);
    if ( !lvExceedSpendQpTxtLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedSpendQpTxtLabel, (System_String_o *)this, 0);
    lvExceedHaveQpTxtLabel = v10->fields.lvExceedHaveQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3583/*"COMBINE_HAVE_QP"*/, 0);
    if ( !lvExceedHaveQpTxtLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedHaveQpTxtLabel, (System_String_o *)this, 0);
    lvExceedSpendQpLabel = v10->fields.lvExceedSpendQpLabel;
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
    v47 = spendQp;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v23, v24, v25, v26, v27, v28);
    this = (SetRarityDialogControl_o *)System_String__Format(v22, v29, 0);
    if ( !lvExceedSpendQpLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedSpendQpLabel, (System_String_o *)this, 0);
    lvExceedHaveQpLabel = v10->fields.lvExceedHaveQpLabel;
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
    v46 = haveQp;
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v46, v32, v33, v34, v35, v36, v37);
    this = (SetRarityDialogControl_o *)System_String__Format(v31, v38, 0);
    if ( !lvExceedHaveQpLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedHaveQpLabel, (System_String_o *)this, 0);
    lvExceedConfirmLabel = v10->fields.lvExceedConfirmLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8347/*"LVEXCEED_EXE_CONFIRM"*/, 0);
    if ( !lvExceedConfirmLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedConfirmLabel, (System_String_o *)this, 0);
    if ( !itemObjList )
      goto LABEL_31;
    size = (unsigned int)itemObjList->fields._size;
    if ( (int)size >= 1 )
    {
      v41 = 0;
      while ( 1 )
      {
        this = (SetRarityDialogControl_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)itemObjList,
                                             v41,
                                             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !v10->fields.lvExceedConsumeItemGrid )
          break;
        v42 = this;
        transform = UnityEngine_Component__get_transform(
                      (UnityEngine_Component_o *)v10->fields.lvExceedConsumeItemGrid,
                      0);
        this = (SetRarityDialogControl_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v10,
                                             (UnityEngine_GameObject_o *)v42,
                                             transform,
                                             0,
                                             0);
        if ( !this )
          break;
        this = (SetRarityDialogControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
        if ( !itemList )
          break;
        if ( v41 >= LODWORD(itemList->max_length) )
          sub_1C32E84(this);
        if ( !this )
          break;
        LimitCntUpItemComponent__SetItemEntity((LimitCntUpItemComponent_o *)this, itemList->m_Items[v41++], 0);
        if ( size == v41 )
          goto LABEL_28;
      }
LABEL_31:
      sub_1C32E7C(this);
    }
LABEL_28:
    this = (SetRarityDialogControl_o *)v10->fields.lvExceedConsumeItemGrid;
    if ( !this )
      goto LABEL_31;
    ((void (__fastcall *)(SetRarityDialogControl_o *, Il2CppClass *))this->klass[1]._1.element_class)(
      this,
      this->klass[1]._1.castClass);
    v44 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v44, (Il2CppObject *)v10, Method_SetRarityDialogControl__SetConfirmLvExceed_b__154_0__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v10, 8, v44, 0, 0, v45);
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
  void *rariryConfirmInfo; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  UILabel_o *cancelBtnLb; // x25
  UILabel_o *decideBtnLb; // x25
  const MethodInfo *v20; // x1
  il2cpp_array_size_t max_length; // x26
  float v22; // s8
  unsigned __int64 v23; // x25
  bool v24; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v27; // x7
  float y; // s9
  int v29; // w23
  int v30; // w9
  float v31; // s1 OVERLAPPED
  float z; // s2
  float v33; // s0
  UILabel_o *spendQpTxtLb; // x23
  UILabel_o *haveQpTxtLb; // x23
  UILabel_o *spendQpLb; // x23
  System_String_o *v37; // x24
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  Il2CppObject *v44; // x0
  UILabel_o *haveQpLb; // x22
  System_String_o *v46; // x23
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x6
  __int64 v52; // x7
  Il2CppObject *v53; // x0
  UILabel_o *rareMaterialMsgLb; // x21
  __int64 *v55; // x8
  UILabel_o *rareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v58; // x20
  const MethodInfo *v59; // x5
  int64_t v60; // [xsp+0h] [xbp-80h] BYREF
  int32_t v61; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BC13 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SetRarityDialogControl__SetConfirmRarityInfo_b__143_0__);
    sub_1C32C20(&StringLiteral_9236/*"NEED_QP"*/);
    sub_1C32C20(&StringLiteral_3583/*"COMBINE_HAVE_QP"*/);
    sub_1C32C20(&StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/);
    sub_1C32C20(&StringLiteral_3582/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/);
    sub_1C32C20(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_10956/*"RARE_MATERIAL_INFO_MSG"*/);
    sub_1C32C20(&StringLiteral_3617/*"COMBINE_SPEND_QP"*/);
    byte_4C3BC13 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  rariryConfirmInfo = this->fields.rariryConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rariryConfirmInfo, 1, 0);
  rariryConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rariryConfirmInfo, 1, 0);
  SetRarityDialogControl__MoveAlpha(this, v16);
  SetRarityDialogControl__DefaultBgSize(this, v17);
  rariryConfirmInfo = this->fields.rarityTitleLb;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  UILabel__set_text((UILabel_o *)rariryConfirmInfo, msg, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_48;
  UILabel__set_text(cancelBtnLb, (System_String_o *)rariryConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_48;
  UILabel__set_text(decideBtnLb, (System_String_o *)rariryConfirmInfo, 0);
  SetRarityDialogControl__SetCenter(this, v20);
  if ( !list )
    goto LABEL_48;
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  LODWORD(max_length) = list->max_length;
  v22 = *((float *)rariryConfirmInfo + 12);
  if ( (int)max_length >= 1 )
  {
    v23 = 0;
    v24 = 0;
    do
    {
      if ( v24 )
        goto LABEL_48;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0);
      rariryConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
      if ( !rariryConfirmInfo )
        goto LABEL_48;
      rariryConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)rariryConfirmInfo,
                            (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v23 >= LODWORD(list->max_length) )
        sub_1C32E84(rariryConfirmInfo);
      if ( !rariryConfirmInfo )
        goto LABEL_48;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)rariryConfirmInfo,
        v23,
        baseData,
        list->m_Items[v23],
        0,
        0,
        0,
        v27);
      rariryConfirmInfo = this->fields.raritySvtGrid;
      max_length = list->max_length;
      ++v23;
      v24 = rariryConfirmInfo == 0;
    }
    while ( (__int64)v23 < (int)max_length );
    if ( !rariryConfirmInfo )
      goto LABEL_48;
  }
  y = this->fields.center.fields.y;
  v29 = *((_DWORD *)rariryConfirmInfo + 11);
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0);
  if ( !rariryConfirmInfo )
    goto LABEL_48;
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
    (UnityEngine_Transform_o *)rariryConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v31 - 1),
    0);
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0);
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  v62.fields.x = 0.5;
  v62.fields.y = 0.5;
  v62.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rariryConfirmInfo, v62, 0);
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  UIGrid__set_repositionNow((UIGrid_o *)rariryConfirmInfo, 1, 0);
  spendQpTxtLb = this->fields.spendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3617/*"COMBINE_SPEND_QP"*/, 0);
  if ( !spendQpTxtLb )
    goto LABEL_48;
  UILabel__set_text(spendQpTxtLb, (System_String_o *)rariryConfirmInfo, 0);
  haveQpTxtLb = this->fields.haveQpTxtLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3583/*"COMBINE_HAVE_QP"*/, 0);
  if ( !haveQpTxtLb )
    goto LABEL_48;
  UILabel__set_text(haveQpTxtLb, (System_String_o *)rariryConfirmInfo, 0);
  spendQpLb = this->fields.spendQpLb;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  v61 = spendQp;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v38, v39, v40, v41, v42, v43);
  rariryConfirmInfo = System_String__Format(v37, v44, 0);
  if ( !spendQpLb
    || (UILabel__set_text(spendQpLb, (System_String_o *)rariryConfirmInfo, 0),
        haveQpLb = this->fields.haveQpLb,
        v46 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0),
        v60 = haveQp,
        v53 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v60, v47, v48, v49, v50, v51, v52),
        rariryConfirmInfo = System_String__Format(v46, v53, 0),
        !haveQpLb) )
  {
LABEL_48:
    sub_1C32E7C(rariryConfirmInfo);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)rariryConfirmInfo, 0);
  rareMaterialMsgLb = this->fields.rareMaterialMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isExceededMaterial )
      goto LABEL_37;
LABEL_39:
    v55 = &StringLiteral_10956/*"RARE_MATERIAL_INFO_MSG"*/;
    goto LABEL_40;
  }
  if ( !isExceededMaterial )
    goto LABEL_39;
LABEL_37:
  v55 = &StringLiteral_3582/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
LABEL_40:
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)*v55, 0);
  if ( !rareMaterialMsgLb )
    goto LABEL_48;
  UILabel__set_text(rareMaterialMsgLb, (System_String_o *)rariryConfirmInfo, 0);
  rareConfirmMsgLb = this->fields.rareConfirmMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/, 0);
  if ( !rareConfirmMsgLb )
    goto LABEL_48;
  UILabel__set_text(rareConfirmMsgLb, (System_String_o *)rariryConfirmInfo, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_48;
  if ( combineRootComponent->fields.state == 3 )
  {
    v58 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v58, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmRarityInfo_b__143_0__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v58, 0, 0, v59);
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
  UnityEngine_GameObject_o *normalConfirmInfo; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v19; // x1
  struct UIGrid_o *materialSvtGrid; // x8
  float v21; // s8
  int32_t v22; // w24
  UnityEngine_Component_o *v23; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  Il2CppObject *Component_object; // x0
  float y; // s9
  int32_t Count; // w23
  struct UIGrid_o *v31; // x8
  int32_t maxPerLine; // w20
  int32_t v33; // w22
  int32_t v34; // w9
  float v35; // s1 OVERLAPPED
  float z; // s2
  float v37; // s0
  UILabel_o *normalSpendQpTxtLb; // x22
  UILabel_o *normalHaveQpTxtLb; // x22
  UILabel_o *confirmSpendQpLb; // x22
  System_String_o *v41; // x23
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x5
  __int64 v46; // x6
  __int64 v47; // x7
  Il2CppObject *v48; // x0
  UILabel_o *confirmHaveQpLb; // x21
  System_String_o *v50; // x22
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x5
  __int64 v55; // x6
  __int64 v56; // x7
  Il2CppObject *v57; // x0
  UILabel_o *confirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v60; // x20
  const MethodInfo *v61; // x5
  const MethodInfo *v62; // [xsp+0h] [xbp-E0h]
  struct System_Collections_Generic_Dictionary_TKey__TValue__o *v63; // [xsp+8h] [xbp-D8h]
  int32_t v65; // [xsp+14h] [xbp-CCh] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v66; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v67; // [xsp+40h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BC16 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__146_0__);
    sub_1C32C20(&StringLiteral_9236/*"NEED_QP"*/);
    sub_1C32C20(&StringLiteral_3583/*"COMBINE_HAVE_QP"*/);
    sub_1C32C20(&StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/);
    sub_1C32C20(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_3617/*"COMBINE_SPEND_QP"*/);
    byte_4C3BC16 = 1;
  }
  memset(&v67, 0, sizeof(v67));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  normalConfirmInfo = this->fields.normalConfirmInfo;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(normalConfirmInfo, 1, 0);
  this->fields.isStatusUp = isStatusUp;
  normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !normalConfirmInfo )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(normalConfirmInfo, 1, 0);
  SetRarityDialogControl__MoveAlpha(this, v15);
  SetRarityDialogControl__DefaultBgSize(this, v16);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.normalTitleLb;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  UILabel__set_text((UILabel_o *)normalConfirmInfo, msg, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_44;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_44;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0);
  SetRarityDialogControl__SetCenter(this, v19);
  if ( !selectedList )
    goto LABEL_44;
  v63 = (struct System_Collections_Generic_Dictionary_TKey__TValue__o *)haveQp;
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_34287DC *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  materialSvtGrid = this->fields.materialSvtGrid;
  if ( !materialSvtGrid )
    goto LABEL_44;
  v21 = materialSvtGrid->fields.cellWidth * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v66,
    selectedList,
    (const MethodInfo_3428F30 *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v22 = 0;
  v67 = v66;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v67,
            (const MethodInfo_354D004 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v23 = (UnityEngine_Component_o *)this->fields.materialSvtGrid;
    if ( !v23 )
      sub_1C32E7C(0);
    current = v67.fields._current;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v23, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
    if ( !Object )
      sub_1C32E7C(0);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_object )
      sub_1C32E7C(0);
    MaterialSvtInfo__setMaterialSvtInfo_48802320(
      (MaterialSvtInfo_o *)Component_object,
      v22++,
      baseData,
      (int64_t)current.fields.key,
      0,
      0,
      LOBYTE(current.fields.value) != 0,
      0,
      v62);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v67,
    (const MethodInfo_354D120 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_34287DC *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_34287DC *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v31 = this->fields.materialSvtGrid;
  if ( !v31 )
    goto LABEL_44;
  maxPerLine = v31->fields.maxPerLine;
  v33 = (int)normalConfirmInfo;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.materialSvtGrid,
                                                    0);
  if ( !normalConfirmInfo )
    goto LABEL_44;
  if ( v33 <= maxPerLine )
    v34 = Count;
  else
    v34 = maxPerLine;
  v35 = 55.0;
  if ( v33 <= maxPerLine )
    v35 = y;
  v37 = (float)(this->fields.center.fields.x - (float)(v21 * (float)(v34 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v35 - 1),
    0);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)normalConfirmInfo,
                                                    0);
  if ( !normalConfirmInfo )
    goto LABEL_44;
  v68.fields.x = 0.5;
  v68.fields.y = 0.5;
  v68.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v68, 0);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  UIGrid__set_repositionNow((UIGrid_o *)normalConfirmInfo, 1, 0);
  normalSpendQpTxtLb = this->fields.normalSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3617/*"COMBINE_SPEND_QP"*/, 0);
  if ( !normalSpendQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3583/*"COMBINE_HAVE_QP"*/, 0);
  if ( !normalHaveQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  v65 = spendQp;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v42, v43, v44, v45, v46, v47);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v41, v48, 0);
  if ( !confirmSpendQpLb )
    goto LABEL_44;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  v66.fields._dictionary = v63;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v66, v51, v52, v53, v54, v55, v56);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v50, v57, 0);
  if ( !confirmHaveQpLb )
    goto LABEL_44;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/, 0);
  if ( !confirmMsgLb
    || (UILabel__set_text(confirmMsgLb, (System_String_o *)normalConfirmInfo, 0),
        (normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0)
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0)) == 0
    || (UnityEngine_GameObject__SetActive(normalConfirmInfo, 0, 0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_44:
    sub_1C32E7C(normalConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 4 )
  {
    v60 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v60, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__146_0__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v60, 0, 0, v61);
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
  void *exceedConfirmInfo; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v18; // x1
  il2cpp_array_size_t max_length; // x25
  float v20; // s8
  unsigned __int64 v21; // x24
  bool v22; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v25; // x7
  float y; // s9
  int v27; // w22
  int v28; // w9
  float v29; // s1 OVERLAPPED
  float z; // s2
  float v31; // s0
  UILabel_o *exceedConfirmSpendQpTxtLb; // x22
  UILabel_o *exceedConfirmHaveQpTxtLb; // x22
  UILabel_o *exceedConfirmSpendQpLb; // x22
  System_String_o *v35; // x23
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  Il2CppObject *v42; // x0
  UILabel_o *exceedConfirmHaveQpLb; // x21
  System_String_o *v44; // x22
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x5
  __int64 v49; // x6
  __int64 v50; // x7
  Il2CppObject *v51; // x0
  UILabel_o *exceedMaterialMsgLb; // x20
  UILabel_o *exceedConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v55; // x20
  const MethodInfo *v56; // x5
  int64_t v57; // [xsp+8h] [xbp-78h] BYREF
  int32_t v58; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BC14 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SetRarityDialogControl__SetExceedMaterialInfo_b__144_0__);
    sub_1C32C20(&StringLiteral_9236/*"NEED_QP"*/);
    sub_1C32C20(&StringLiteral_3583/*"COMBINE_HAVE_QP"*/);
    sub_1C32C20(&StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/);
    sub_1C32C20(&StringLiteral_3582/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/);
    sub_1C32C20(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_3617/*"COMBINE_SPEND_QP"*/);
    byte_4C3BC14 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  exceedConfirmInfo = this->fields.exceedConfirmInfo;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exceedConfirmInfo, 1, 0);
  exceedConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exceedConfirmInfo, 1, 0);
  SetRarityDialogControl__MoveAlpha(this, v14);
  SetRarityDialogControl__DefaultBgSize(this, v15);
  exceedConfirmInfo = this->fields.exceedConfirmTitleLb;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  UILabel__set_text((UILabel_o *)exceedConfirmInfo, msg, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_41;
  UILabel__set_text(cancelBtnLb, (System_String_o *)exceedConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_41;
  UILabel__set_text(decideBtnLb, (System_String_o *)exceedConfirmInfo, 0);
  SetRarityDialogControl__SetCenter(this, v18);
  if ( !list )
    goto LABEL_41;
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  LODWORD(max_length) = list->max_length;
  v20 = *((float *)exceedConfirmInfo + 12);
  if ( (int)max_length >= 1 )
  {
    v21 = 0;
    v22 = 0;
    do
    {
      if ( v22 )
        goto LABEL_41;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0);
      exceedConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
      if ( !exceedConfirmInfo )
        goto LABEL_41;
      exceedConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)exceedConfirmInfo,
                            (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v21 >= LODWORD(list->max_length) )
        sub_1C32E84(exceedConfirmInfo);
      if ( !exceedConfirmInfo )
        goto LABEL_41;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)exceedConfirmInfo,
        v21,
        baseData,
        list->m_Items[v21],
        0,
        0,
        0,
        v25);
      exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
      max_length = list->max_length;
      ++v21;
      v22 = exceedConfirmInfo == 0;
    }
    while ( (__int64)v21 < (int)max_length );
    if ( !exceedConfirmInfo )
      goto LABEL_41;
  }
  y = this->fields.center.fields.y;
  v27 = *((_DWORD *)exceedConfirmInfo + 11);
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0);
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  if ( v27 >= (int)max_length )
    v28 = max_length;
  else
    v28 = v27;
  v29 = 55.0;
  if ( v27 >= (int)max_length )
    v29 = y;
  v31 = (float)(this->fields.center.fields.x - (float)((float)(v20 * 0.5) * (float)(v28 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)exceedConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v29 - 1),
    0);
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0);
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  v59.fields.x = 0.5;
  v59.fields.y = 0.5;
  v59.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)exceedConfirmInfo, v59, 0);
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  UIGrid__set_repositionNow((UIGrid_o *)exceedConfirmInfo, 1, 0);
  exceedConfirmSpendQpTxtLb = this->fields.exceedConfirmSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3617/*"COMBINE_SPEND_QP"*/, 0);
  if ( !exceedConfirmSpendQpTxtLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmSpendQpTxtLb, (System_String_o *)exceedConfirmInfo, 0);
  exceedConfirmHaveQpTxtLb = this->fields.exceedConfirmHaveQpTxtLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3583/*"COMBINE_HAVE_QP"*/, 0);
  if ( !exceedConfirmHaveQpTxtLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmHaveQpTxtLb, (System_String_o *)exceedConfirmInfo, 0);
  exceedConfirmSpendQpLb = this->fields.exceedConfirmSpendQpLb;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  v58 = spendQp;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v36, v37, v38, v39, v40, v41);
  exceedConfirmInfo = System_String__Format(v35, v42, 0);
  if ( !exceedConfirmSpendQpLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmSpendQpLb, (System_String_o *)exceedConfirmInfo, 0);
  exceedConfirmHaveQpLb = this->fields.exceedConfirmHaveQpLb;
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  v57 = haveQp;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v57, v45, v46, v47, v48, v49, v50);
  exceedConfirmInfo = System_String__Format(v44, v51, 0);
  if ( !exceedConfirmHaveQpLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmHaveQpLb, (System_String_o *)exceedConfirmInfo, 0);
  exceedMaterialMsgLb = this->fields.exceedMaterialMsgLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3582/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, 0);
  if ( !exceedMaterialMsgLb
    || (UILabel__set_text(exceedMaterialMsgLb, (System_String_o *)exceedConfirmInfo, 0),
        exceedConfirmMsgLb = this->fields.exceedConfirmMsgLb,
        exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/, 0),
        !exceedConfirmMsgLb)
    || (UILabel__set_text(exceedConfirmMsgLb, (System_String_o *)exceedConfirmInfo, 0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_41:
    sub_1C32E7C(exceedConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v55 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v55, (Il2CppObject *)this, Method_SetRarityDialogControl__SetExceedMaterialInfo_b__144_0__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 0, v55, 0, 0, v56);
  }
}


void SetRarityDialogControl__SetFriendshipExceedInfo(
        SetRarityDialogControl_o *this,
        System_String_o *msg,
        int32_t spendQp,
        int64_t haveQp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *friendshipExceedConfirmInfo; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  UILabel_o *cancelBtnLb; // x22
  UILabel_o *decideBtnLb; // x22
  UILabel_o *friendshipExceedSpendQpTxtLb; // x22
  UILabel_o *friendshipExceedHaveQpTxtLb; // x22
  UILabel_o *friendshipExceedSpendQpLb; // x22
  System_String_o *v17; // x23
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x0
  UILabel_o *friendshipExceedHaveQpLb; // x21
  System_String_o *v26; // x22
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  Il2CppObject *v33; // x0
  UILabel_o *friendshipExceedMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v36; // x20
  const MethodInfo *v37; // x5
  int64_t v38; // [xsp+0h] [xbp-50h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3BC23 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__159_0__);
    sub_1C32C20(&StringLiteral_9236/*"NEED_QP"*/);
    sub_1C32C20(&StringLiteral_3583/*"COMBINE_HAVE_QP"*/);
    sub_1C32C20(&StringLiteral_6518/*"FRIENDSHIP_EXCEED_SPEND_QP"*/);
    sub_1C32C20(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_3752/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/);
    byte_4C3BC23 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)msg);
  friendshipExceedConfirmInfo = this->fields.friendshipExceedConfirmInfo;
  if ( !friendshipExceedConfirmInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(friendshipExceedConfirmInfo, 1, 0);
  friendshipExceedConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !friendshipExceedConfirmInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(friendshipExceedConfirmInfo, 1, 0);
  SetRarityDialogControl__MoveAlpha(this, v10);
  SetRarityDialogControl__DefaultBgSize(this, v11);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)this->fields.friendshipExceedTitleLb;
  if ( !friendshipExceedConfirmInfo )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)friendshipExceedConfirmInfo, msg, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0);
  if ( !cancelBtnLb )
    goto LABEL_21;
  UILabel__set_text(cancelBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0);
  if ( !decideBtnLb )
    goto LABEL_21;
  UILabel__set_text(decideBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0);
  friendshipExceedSpendQpTxtLb = this->fields.friendshipExceedSpendQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_6518/*"FRIENDSHIP_EXCEED_SPEND_QP"*/,
                                                              0);
  if ( !friendshipExceedSpendQpTxtLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedSpendQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0);
  friendshipExceedHaveQpTxtLb = this->fields.friendshipExceedHaveQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3583/*"COMBINE_HAVE_QP"*/,
                                                              0);
  if ( !friendshipExceedHaveQpTxtLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedHaveQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0);
  friendshipExceedSpendQpLb = this->fields.friendshipExceedSpendQpLb;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  v39 = spendQp;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v18, v19, v20, v21, v22, v23);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v17, v24, 0);
  if ( !friendshipExceedSpendQpLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedSpendQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0);
  friendshipExceedHaveQpLb = this->fields.friendshipExceedHaveQpLb;
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  v38 = haveQp;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v38, v27, v28, v29, v30, v31, v32);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v26, v33, 0);
  if ( !friendshipExceedHaveQpLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedHaveQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0);
  friendshipExceedMsgLb = this->fields.friendshipExceedMsgLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3752/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/,
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
    sub_1C32E7C(friendshipExceedConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 12 )
  {
    v36 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v36,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__159_0__,
      0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v36, 0, 0, v37);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  UILabel_o *cancelBtnLb; // x23
  UILabel_o *decideBtnLb; // x23
  UILabel_o *limitUpConfirmSpendQpTxtLb; // x23
  UILabel_o *limitUpConfirmHaveQpTxtLb; // x23
  UILabel_o *limitUpConfirmSpendQpLb; // x23
  System_String_o *v29; // x24
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  Il2CppObject *v36; // x0
  UILabel_o *limitUpConfirmHaveQpLb; // x22
  System_String_o *v38; // x23
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x5
  __int64 v43; // x6
  __int64 v44; // x7
  Il2CppObject *v45; // x0
  UILabel_o *limitUpConfirmMsgLb; // x21
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v48; // x21
  const MethodInfo *v49; // x5
  int64_t v50; // [xsp+8h] [xbp-58h] BYREF
  int32_t v51; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C3BC19 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SetRarityDialogControl___c__DisplayClass149_0__SetLimitUpInfo_b__0__);
    sub_1C32C20(&SetRarityDialogControl___c__DisplayClass149_0_TypeInfo);
    sub_1C32C20(&StringLiteral_9236/*"NEED_QP"*/);
    sub_1C32C20(&StringLiteral_3583/*"COMBINE_HAVE_QP"*/);
    sub_1C32C20(&StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/);
    sub_1C32C20(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_3617/*"COMBINE_SPEND_QP"*/);
    byte_4C3BC19 = 1;
  }
  v13 = sub_1C32E6C(SetRarityDialogControl___c__DisplayClass149_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_22;
  *(_QWORD *)(v13 + 16) = baseData;
  sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 16), (int32_t)baseData, v15, v16);
  *(_QWORD *)(v13 + 24) = combineLimitUpWarningDialog;
  sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 24), (int32_t)combineLimitUpWarningDialog, v17, v18);
  *(_QWORD *)(v13 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 32), (int32_t)this, v19, v20);
  SetRarityDialogControl__DisableConfirmInfo(this, v21);
  limitUpConfirmInfo = this->fields.limitUpConfirmInfo;
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0);
  limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0);
  SetRarityDialogControl__MoveAlpha(this, v22);
  SetRarityDialogControl__DefaultBgSize(this, v23);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.limitUpTitleLb;
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)limitUpConfirmInfo, msg, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_22;
  UILabel__set_text(cancelBtnLb, (System_String_o *)limitUpConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_22;
  UILabel__set_text(decideBtnLb, (System_String_o *)limitUpConfirmInfo, 0);
  limitUpConfirmSpendQpTxtLb = this->fields.limitUpConfirmSpendQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3617/*"COMBINE_SPEND_QP"*/, 0);
  if ( !limitUpConfirmSpendQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmSpendQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0);
  limitUpConfirmHaveQpTxtLb = this->fields.limitUpConfirmHaveQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3583/*"COMBINE_HAVE_QP"*/, 0);
  if ( !limitUpConfirmHaveQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmHaveQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0);
  limitUpConfirmSpendQpLb = this->fields.limitUpConfirmSpendQpLb;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  v51 = spendQp;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v30, v31, v32, v33, v34, v35);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v29, v36, 0);
  if ( !limitUpConfirmSpendQpLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmSpendQpLb, (System_String_o *)limitUpConfirmInfo, 0);
  limitUpConfirmHaveQpLb = this->fields.limitUpConfirmHaveQpLb;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  v50 = haveQp;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v50, v39, v40, v41, v42, v43, v44);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v38, v45, 0);
  if ( !limitUpConfirmHaveQpLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmHaveQpLb, (System_String_o *)limitUpConfirmInfo, 0);
  limitUpConfirmMsgLb = this->fields.limitUpConfirmMsgLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/, 0);
  if ( !limitUpConfirmMsgLb
    || (UILabel__set_text(limitUpConfirmMsgLb, (System_String_o *)limitUpConfirmInfo, 0),
        (limitUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0)
    || (limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)limitUpConfirmInfo, 0)) == 0
    || (UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 0, 0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_22:
    sub_1C32E7C(limitUpConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 5 )
  {
    v48 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v48,
      (Il2CppObject *)v13,
      Method_SetRarityDialogControl___c__DisplayClass149_0__SetLimitUpInfo_b__0__,
      0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v48, 0, 0, v49);
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
  UnityEngine_GameObject_o *npUpConfirmInfo; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *npUpTitleLb; // x21
  System_String_o **v28; // x8
  UILabel_o *cancelBtnLb; // x21
  UILabel_o *decideBtnLb; // x21
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v32; // x20
  System_Action_o *v33; // x21
  const MethodInfo *v34; // x5
  SetRarityDialogControl_o *v35; // x0
  int32_t v36; // w1
  const MethodInfo *v37; // [xsp+0h] [xbp-70h]

  if ( (byte_4C3BC1C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SetRarityDialogControl_DefaultBgSize__);
    sub_1C32C20(&Method_SetRarityDialogControl__SetNpCombineInfo_b__152_0__);
    sub_1C32C20(&Method_SetRarityDialogControl__SetNpCombineInfo_b__152_1__);
    sub_1C32C20(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_3778/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/);
    sub_1C32C20(&StringLiteral_3776/*"CONFIRM_TITLE_TD_COMBINE"*/);
    byte_4C3BC1C = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  npUpConfirmInfo = this->fields.npUpConfirmInfo;
  if ( !npUpConfirmInfo )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0);
  this->fields.npBaseData = baseData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.npBaseData, (int32_t)baseData, v18, v19);
  this->fields.npSelectMtUsrSvtIdList = selectUsrSvtIdList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.npSelectMtUsrSvtIdList, (int32_t)selectUsrSvtIdList, v20, v21);
  this->fields.npLvUpData = updata;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.npLvUpData, (int32_t)updata, v22, v23);
  this->fields.npIsExceedMaxLv = isExceedMaxLv;
  this->fields.npIsCombineSvt = isCombineSvt;
  this->fields.npIsExceededMaterial = isExceededMaterial;
  npUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !npUpConfirmInfo )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0);
  SetRarityDialogControl__MoveAlpha(this, v24);
  SetRarityDialogControl__DefaultBgSize(this, v25);
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
    v37);
  npUpTitleLb = this->fields.npUpTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v28 = (System_String_o **)(reConfirmation ? &StringLiteral_3778/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/ : &StringLiteral_3776/*"CONFIRM_TITLE_TD_COMBINE"*/);
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(*v28, 0);
  if ( !npUpTitleLb )
    goto LABEL_27;
  UILabel__set_text(npUpTitleLb, (System_String_o *)npUpConfirmInfo, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb
    || (UILabel__set_text(cancelBtnLb, (System_String_o *)npUpConfirmInfo, 0),
        decideBtnLb = this->fields.decideBtnLb,
        npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0),
        !decideBtnLb)
    || (UILabel__set_text(decideBtnLb, (System_String_o *)npUpConfirmInfo, 0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_27:
    sub_1C32E7C(npUpConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 11 )
  {
    if ( (this->fields.npIsExceedMaxLv || this->fields.npIsCombineSvt || this->fields.npIsExceededMaterial)
      && !reConfirmation )
    {
      v32 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v32, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__152_0__, 0);
      v33 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0);
      v35 = this;
      v36 = 0;
    }
    else
    {
      v32 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v32, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__152_1__, 0);
      v33 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0);
      v36 = 8;
      v35 = this;
    }
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v35, v36, v32, 0, v33, v34);
  }
}


void SetRarityDialogControl__SetSkillNpCombineInfo(
        SetRarityDialogControl_o *this,
        SetLevelUpData_array *upDataList,
        System_String_o *titleMsg,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *skillUpConfirmInfo; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  SetLevelUpData_o *v10; // x23
  int max_length; // w21
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct UILabel_o *upTargetSkillNameBef; // x22
  UnityEngine_GameObject_o *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UILabel_o *upTargetSkillNameAft; // x22
  SetLevelUpData_o *v25; // x8
  UnityEngine_GameObject_o *v26; // x22
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  SetLevelUpData_o *v29; // x8
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  UnityEngine_GameObject_c *klass; // x8
  __int64 v33; // x20
  UIExtrusionLabel_o *currentLvLb; // x20
  UIExtrusionLabel_o *resLvLb; // x20
  UILabel_o *upSpendQpTxtLb; // x20
  UILabel_o *upHaveQpTxtLb; // x20
  UILabel_o *upSpendQpLb; // x20
  System_String_o *v39; // x21
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x6
  __int64 v45; // x7
  Il2CppObject *v46; // x0
  UILabel_o *upHaveQpLb; // x20
  System_String_o *v48; // x21
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x6
  __int64 v54; // x7
  Il2CppObject *v55; // x0
  UILabel_o *upConfirmMsgLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v60; // x20
  const MethodInfo *v61; // x5
  __int64 v62; // x0
  int64_t haveQp; // [xsp+0h] [xbp-50h] BYREF
  int32_t spendQp; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3BC1A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__150_0__);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&UILabel___TypeInfo);
    sub_1C32C20(&StringLiteral_9236/*"NEED_QP"*/);
    sub_1C32C20(&StringLiteral_3583/*"COMBINE_HAVE_QP"*/);
    sub_1C32C20(&StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/);
    sub_1C32C20(&StringLiteral_25377/*"】"*/);
    sub_1C32C20(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_3617/*"COMBINE_SPEND_QP"*/);
    sub_1C32C20(&StringLiteral_25372/*"【"*/);
    byte_4C3BC1A = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)upDataList);
  skillUpConfirmInfo = this->fields.skillUpConfirmInfo;
  if ( !skillUpConfirmInfo
    || (UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0),
        (skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0)
    || (UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0),
        SetRarityDialogControl__MoveAlpha(this, v8),
        SetRarityDialogControl__DefaultBgSize(this, v9),
        !upDataList) )
  {
LABEL_60:
    sub_1C32E7C(skillUpConfirmInfo);
  }
  if ( !LODWORD(upDataList->max_length) )
    goto LABEL_61;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTitleLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  v10 = upDataList->m_Items[0];
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, titleMsg, 0);
  if ( !v10 )
    goto LABEL_60;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetRubyLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, v10->fields.targetRuby, 0);
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
    v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
    GameObjectExtensions__SetLocalPositionX(v16, 11.0, 0);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upHaveQpTxtLb;
    if ( !skillUpConfirmInfo )
      goto LABEL_60;
    v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
    GameObjectExtensions__SetLocalPositionX(v17, 11.0, 0);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1C32CC8(UILabel___TypeInfo, 2);
    if ( !skillUpConfirmInfo )
      goto LABEL_60;
    upTargetSkillNameBef = this->fields.upTargetSkillNameBef;
    v21 = skillUpConfirmInfo;
    if ( upTargetSkillNameBef )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1C32D5C(
                                                         this->fields.upTargetSkillNameBef,
                                                         skillUpConfirmInfo->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_62;
    }
    if ( !LODWORD(v21[1].klass) )
      goto LABEL_61;
    v21[1].monitor = upTargetSkillNameBef;
    sub_1C32BC4((CGThumbnailListItem_o *)&v21[1].monitor, (int32_t)upTargetSkillNameBef, v18, v19);
    upTargetSkillNameAft = this->fields.upTargetSkillNameAft;
    if ( upTargetSkillNameAft )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1C32D5C(
                                                         this->fields.upTargetSkillNameAft,
                                                         v21->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
      {
LABEL_62:
        v62 = sub_1C32EA0(skillUpConfirmInfo);
        sub_1C32D48(v62, 0);
      }
    }
    if ( LODWORD(v21[1].klass) > 1 )
    {
      v21[1].fields.m_CachedPtr = (intptr_t)upTargetSkillNameAft;
      sub_1C32BC4((CGThumbnailListItem_o *)&v21[1].fields, (int32_t)upTargetSkillNameAft, v22, v23);
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1C32CC8(string___TypeInfo, 2);
      if ( LODWORD(upDataList->max_length) )
      {
        v25 = upDataList->m_Items[0];
        if ( !v25 )
          goto LABEL_60;
        v26 = skillUpConfirmInfo;
        skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Concat_63558796(
                                                           (System_String_o *)StringLiteral_25372/*"【"*/,
                                                           v25->fields.displayText,
                                                           (System_String_o *)StringLiteral_25377/*"】"*/,
                                                           v25->fields.targetName,
                                                           0);
        if ( !v26 )
          goto LABEL_60;
        if ( LODWORD(v26[1].klass) )
        {
          v26[1].monitor = skillUpConfirmInfo;
          sub_1C32BC4((CGThumbnailListItem_o *)&v26[1].monitor, (int32_t)skillUpConfirmInfo, v27, v28);
          if ( LODWORD(upDataList->max_length) > 1 )
          {
            v29 = upDataList->m_Items[1];
            if ( !v29 )
              goto LABEL_60;
            skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Concat_63558796(
                                                               (System_String_o *)StringLiteral_25372/*"【"*/,
                                                               v29->fields.displayText,
                                                               (System_String_o *)StringLiteral_25377/*"】"*/,
                                                               v29->fields.targetName,
                                                               0);
            if ( LODWORD(v26[1].klass) > 1 )
            {
              v26[1].fields.m_CachedPtr = (intptr_t)skillUpConfirmInfo;
              sub_1C32BC4((CGThumbnailListItem_o *)&v26[1].fields, (int32_t)skillUpConfirmInfo, v30, v31);
              klass = v21[1].klass;
              if ( (int)klass < 1 )
                goto LABEL_45;
              v33 = 0;
              while ( (unsigned int)v33 < (unsigned int)klass && (unsigned int)v33 < LODWORD(v26[1].klass) )
              {
                skillUpConfirmInfo = (UnityEngine_GameObject_o *)*((_QWORD *)&v21[1].monitor + v33);
                if ( !skillUpConfirmInfo )
                  goto LABEL_60;
                UILabel__set_text((UILabel_o *)skillUpConfirmInfo, *((System_String_o **)&v26[1].monitor + v33), 0);
                klass = v21[1].klass;
                if ( (int)++v33 >= (int)klass )
                  goto LABEL_45;
              }
            }
          }
        }
      }
    }
LABEL_61:
    sub_1C32E84(skillUpConfirmInfo);
  }
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetNameLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, v10->fields.targetName, 0);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetSkillNameBef;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v12, 0);
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 0, 0);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upSpendQpTxtLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
  GameObjectExtensions__SetLocalPositionX(v13, -5.0, 0);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upHaveQpTxtLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0);
  GameObjectExtensions__SetLocalPositionX(v14, -5.0, 0);
LABEL_45:
  currentLvLb = this->fields.currentLvLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v10 + 64, 0);
  if ( !currentLvLb )
    goto LABEL_60;
  UIExtrusionLabel__set_text(currentLvLb, (System_String_o *)skillUpConfirmInfo, 0);
  resLvLb = this->fields.resLvLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v10 + 68, 0);
  if ( !resLvLb )
    goto LABEL_60;
  UIExtrusionLabel__set_text(resLvLb, (System_String_o *)skillUpConfirmInfo, 0);
  upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3617/*"COMBINE_SPEND_QP"*/, 0);
  if ( !upSpendQpTxtLb )
    goto LABEL_60;
  UILabel__set_text(upSpendQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0);
  upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3583/*"COMBINE_HAVE_QP"*/, 0);
  if ( !upHaveQpTxtLb )
    goto LABEL_60;
  UILabel__set_text(upHaveQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0);
  upSpendQpLb = this->fields.upSpendQpLb;
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  spendQp = v10->fields.spendQp;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendQp, v40, v41, v42, v43, v44, v45);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v39, v46, 0);
  if ( !upSpendQpLb )
    goto LABEL_60;
  UILabel__set_text(upSpendQpLb, (System_String_o *)skillUpConfirmInfo, 0);
  upHaveQpLb = this->fields.upHaveQpLb;
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  haveQp = v10->fields.haveQp;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &haveQp, v49, v50, v51, v52, v53, v54);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v48, v55, 0);
  if ( !upHaveQpLb )
    goto LABEL_60;
  UILabel__set_text(upHaveQpLb, (System_String_o *)skillUpConfirmInfo, 0);
  upConfirmMsgLb = this->fields.upConfirmMsgLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/, 0);
  if ( !upConfirmMsgLb )
    goto LABEL_60;
  UILabel__set_text(upConfirmMsgLb, (System_String_o *)skillUpConfirmInfo, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_60;
  UILabel__set_text(cancelBtnLb, (System_String_o *)skillUpConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_60;
  UILabel__set_text(decideBtnLb, (System_String_o *)skillUpConfirmInfo, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_60;
  if ( combineRootComponent->fields.state == 10 )
  {
    v60 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v60, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__150_0__, 0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v60, 0, 0, v61);
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
  UnityEngine_GameObject_o *specialAscensionConfirmInfo; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  System_String_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  System_Action_o *v18; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x5
  SetRarityDialogControl_o *v22; // x0
  int32_t v23; // w1

  if ( (byte_4C3BC24 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SetRarityDialogControl__SetSpecialAscension_b__160_0__);
    sub_1C32C20(&Method_SetRarityDialogControl__SetSpecialAscension_b__160_1__);
    sub_1C32C20(&Method_SetRarityDialogControl__SetSpecialAscension_b__160_2__);
    sub_1C32C20(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_12263/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/);
    sub_1C32C20(&StringLiteral_12267/*"SPECIAL_ASCENSION_WARNING1_TXT"*/);
    sub_1C32C20(&StringLiteral_12268/*"SPECIAL_ASCENSION_WARNING2_TXT"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3BC24 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  specialAscensionConfirmInfo = this->fields.specialAscensionConfirmInfo;
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 1, 0);
  specialAscensionConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 1, 0);
  SetRarityDialogControl__MoveAlpha(this, v11);
  SetRarityDialogControl__DefaultBgSize(this, v12);
  this->fields.specialAscensionConfirm = confirm;
  this->fields.specialAscensionWarning1 = warning1;
  this->fields.specialAscensionWarning2 = warning2;
  if ( confirm )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12263/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/, 0);
    this->fields.specialAscensionConfirm = 0;
  }
  else if ( warning1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12267/*"SPECIAL_ASCENSION_WARNING1_TXT"*/, 0);
    this->fields.specialAscensionWarning1 = 0;
  }
  else if ( warning2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12268/*"SPECIAL_ASCENSION_WARNING2_TXT"*/, 0);
    this->fields.specialAscensionWarning2 = 0;
  }
  else
  {
    v13 = (System_String_o *)StringLiteral_1/*""*/;
  }
  specialAscensionConfirmInfo = this->fields.specialAscensionConfirmInfo;
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              specialAscensionConfirmInfo,
                                                              (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___);
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  SpecialAscensionConfirmInfo__SetSpecialAscensionConfirmInfo(
    (SpecialAscensionConfirmInfo_o *)specialAscensionConfirmInfo,
    v13,
    v14,
    v15);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0);
  if ( !cancelBtnLb )
    goto LABEL_37;
  UILabel__set_text(cancelBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0);
  if ( !decideBtnLb
    || (UILabel__set_text(decideBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0),
        (specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0)
    || (specialAscensionConfirmInfo = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)specialAscensionConfirmInfo,
                                        0)) == 0
    || (UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 0, 0),
        v18 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)this,
          Method_SetRarityDialogControl__SetSpecialAscension_b__160_0__,
          0),
        (combineRootComponent = this->fields.combineRootComponent) == 0) )
  {
LABEL_37:
    sub_1C32E7C(specialAscensionConfirmInfo);
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
      v20 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__160_1__, 0);
      v23 = 8;
      v22 = this;
      goto LABEL_35;
    }
    v20 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__160_2__, 0);
    v22 = this;
    v23 = 0;
LABEL_35:
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v22, v23, v20, v18, 0, v21);
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
  UnityEngine_GameObject_o *allDispConfirmInfo; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  UILabel_o *cancelBtnLb; // x26
  UILabel_o *decideBtnLb; // x26
  const MethodInfo *v21; // x1
  struct System_Collections_Generic_Dictionary_TKey__TValue__o *v22; // x22
  struct UIGrid_o *allSvtGrid; // x8
  float v24; // s9
  int32_t v25; // w26
  UnityEngine_Component_o *v26; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  UnityEngine_GameObject_o *svtFaceInfo; // x28
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  Il2CppObject *Component_object; // x0
  float y; // s8
  int32_t Count; // w25
  struct UIGrid_o *v34; // x8
  int32_t maxPerLine; // w20
  int32_t v36; // w24
  int32_t v37; // w10
  float v38; // s1 OVERLAPPED
  float z; // s2
  float v40; // s0
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v44; // x25
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  __int64 v48; // x5
  __int64 v49; // x6
  __int64 v50; // x7
  Il2CppObject *v51; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v53; // x24
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  __int64 v57; // x5
  __int64 v58; // x6
  __int64 v59; // x7
  Il2CppObject *v60; // x0
  UILabel_o *allRareMsgLb; // x20
  UILabel_o *allLimitRareLb; // x20
  UILabel_o *allRareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v65; // x20
  const MethodInfo *v66; // x5
  const MethodInfo *v67; // [xsp+0h] [xbp-F0h]
  int32_t v69; // [xsp+20h] [xbp-D0h]
  int32_t v70; // [xsp+24h] [xbp-CCh] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v71; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v72; // [xsp+50h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BC1F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__155_0__);
    sub_1C32C20(&StringLiteral_9236/*"NEED_QP"*/);
    sub_1C32C20(&StringLiteral_3583/*"COMBINE_HAVE_QP"*/);
    sub_1C32C20(&StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/);
    sub_1C32C20(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_10956/*"RARE_MATERIAL_INFO_MSG"*/);
    sub_1C32C20(&StringLiteral_3617/*"COMBINE_SPEND_QP"*/);
    byte_4C3BC1F = 1;
  }
  memset(&v72, 0, sizeof(v72));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0);
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  v69 = spendQp;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0);
  SetRarityDialogControl__MoveAlpha(this, v17);
  SetRarityDialogControl__DefaultBgSize(this, v18);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allTitleLb;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UILabel__set_text((UILabel_o *)allDispConfirmInfo, title, 0);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelBtnLb )
    goto LABEL_69;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideBtnLb )
    goto LABEL_69;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0);
  SetRarityDialogControl__SetCenter(this, v21);
  if ( !selectedList )
    goto LABEL_69;
  v22 = (struct System_Collections_Generic_Dictionary_TKey__TValue__o *)haveQp;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_34287DC *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allSvtGrid = this->fields.allSvtGrid;
  if ( !allSvtGrid )
    goto LABEL_69;
  v24 = allSvtGrid->fields.cellWidth * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v71,
    selectedList,
    (const MethodInfo_3428F30 *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v25 = 0;
  v72 = v71;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v72,
            (const MethodInfo_354D004 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v26 = (UnityEngine_Component_o *)this->fields.allSvtGrid;
    if ( !v26 )
      sub_1C32E7C(0);
    current = v72.fields._current;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v26, 0);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0, 0);
    if ( !Object )
      sub_1C32E7C(0);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_object )
      sub_1C32E7C(0);
    MaterialSvtInfo__setMaterialSvtInfo_48802320(
      (MaterialSvtInfo_o *)Component_object,
      v25++,
      baseData,
      (int64_t)current.fields.key,
      0,
      0,
      LOBYTE(current.fields.value) != 0,
      0,
      v67);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v72,
    (const MethodInfo_354D120 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_34287DC *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_34287DC *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v34 = this->fields.allSvtGrid;
  if ( !v34 )
    goto LABEL_69;
  maxPerLine = v34->fields.maxPerLine;
  v36 = (int)allDispConfirmInfo;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this->fields.allSvtGrid,
                                                     0);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  if ( v36 <= maxPerLine )
    v37 = Count;
  else
    v37 = maxPerLine;
  v38 = 70.0;
  if ( v36 <= maxPerLine )
    v38 = y;
  z = this->fields.center.fields.z;
  v40 = (float)(this->fields.center.fields.x - (float)(v24 * (float)(v37 - 1))) * 0.47;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v38 - 1),
    0);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)allDispConfirmInfo,
                                                     0);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  v73.fields.x = 0.47;
  v73.fields.y = 0.47;
  v73.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v73, 0);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UIGrid__set_repositionNow((UIGrid_o *)allDispConfirmInfo, 1, 0);
  allSpendQpTxtLb = this->fields.allSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3617/*"COMBINE_SPEND_QP"*/, 0);
  if ( !allSpendQpTxtLb )
    goto LABEL_69;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3583/*"COMBINE_HAVE_QP"*/, 0);
  if ( !allHaveQpTxtLb )
    goto LABEL_69;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0);
  allSpendQpLb = this->fields.allSpendQpLb;
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  v70 = v69;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70, v45, v46, v47, v48, v49, v50);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v44, v51, 0);
  if ( !allSpendQpLb )
    goto LABEL_69;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0);
  allHaveQpLb = this->fields.allHaveQpLb;
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_9236/*"NEED_QP"*/, 0);
  v71.fields._dictionary = v22;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v71, v54, v55, v56, v57, v58, v59);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v53, v60, 0);
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
    allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10956/*"RARE_MATERIAL_INFO_MSG"*/, 0);
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
    allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10956/*"RARE_MATERIAL_INFO_MSG"*/, 0);
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
    sub_1C32E7C(allDispConfirmInfo);
  }
LABEL_59:
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3744/*"CONFIRM_COMBINE_MSG"*/, 0);
  if ( !allRareConfirmMsgLb )
    goto LABEL_69;
  UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_69;
  if ( combineRootComponent->fields.state == 4 )
  {
    v65 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v65,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__155_0__,
      0);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v65, 0, 0, v66);
  }
}


void SetRarityDialogControl___SetAllDispConfirmCombine_b__147_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C32E7C(0);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___SetConfirmCombine_b__145_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C32E7C(0);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___SetConfirmLvExceed_b__153_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C32E7C(0);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0);
}


void SetRarityDialogControl___SetConfirmLvExceed_b__153_1(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.lvExceedCtr) == 0 )
    sub_1C32E7C(this);
  LevelExceedControl__OnClickCheckLvExceed((LevelExceedControl_o *)this, 0);
}


void SetRarityDialogControl___SetConfirmLvExceed_b__154_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C32E7C(0);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0);
}


void SetRarityDialogControl___SetConfirmRarityInfo_b__143_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C32E7C(0);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___SetConfirmSvtEqCombine_b__146_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C32E7C(0);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___SetExceedMaterialInfo_b__144_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.svtCombineCtr) == 0 )
    sub_1C32E7C(this);
  ServantCombineControl__CheckRareSvt((ServantCombineControl_o *)this, 0);
}


void SetRarityDialogControl___SetFriendshipExceedInfo_b__159_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C32E7C(0);
  CombineRootComponent__RequestFriendshipExceed(combineRootComponent, 0);
}


void SetRarityDialogControl___SetNpCombineInfo_b__152_0(SetRarityDialogControl_o *this, const MethodInfo *method)
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


void SetRarityDialogControl___SetNpCombineInfo_b__152_1(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C32E7C(0);
  CombineRootComponent__RequestTdCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___SetSkillNpCombineInfo_b__150_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C32E7C(0);
  CombineRootComponent__RequestSkillCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___SetSpecialAscension_b__160_0(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8
  struct SpecialAscensionControl_o *specialAscensionCtr; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (specialAscensionCtr = combineRootComponent->fields.specialAscensionCtr) == 0 )
    sub_1C32E7C(this);
  if ( specialAscensionCtr->fields.pushExeButton )
    specialAscensionCtr->fields.pushExeButton = 0;
}


void SetRarityDialogControl___SetSpecialAscension_b__160_1(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v5; // x21
  System_Action_o *v6; // x22

  if ( (byte_4C3BC2C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&CombineRootComponent_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SetRarityDialogControl__SetSpecialAscension_b__160_3__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_12265/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3BC2C = 1;
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
    sub_1C32E7C(combineRootComponent);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_12265/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0);
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__160_3__, 0);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v5,
    v6,
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


void SetRarityDialogControl___SetSpecialAscension_b__160_2(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UserServantEntity_o *v3; // x1
  const MethodInfo *v4; // x5
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x21
  System_Action_o *v7; // x22
  __int64 v8; // x0

  if ( (byte_4C3BC2D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&CombineRootComponent_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SetRarityDialogControl__SetSpecialAscension_b__160_4__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_12265/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3BC2D = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12265/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0);
    v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__160_4__, 0);
    if ( !Instance )
      sub_1C32E7C(v8);
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


void SetRarityDialogControl___SetSpecialAscension_b__160_3(SetRarityDialogControl_o *this, const MethodInfo *method)
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
    sub_1C32E7C(this);
  }
  CombineRootComponent__BackSpecialAscension((CombineRootComponent_o *)this, 0);
}


void SetRarityDialogControl___SetSpecialAscension_b__160_4(SetRarityDialogControl_o *this, const MethodInfo *method)
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
    sub_1C32E7C(this);
  }
  CombineRootComponent__BackSpecialAscension((CombineRootComponent_o *)this, 0);
}


void SetRarityDialogControl___SetSvtEqLimitUpConfirmCombine_b__155_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1C32E7C(0);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0);
}


void SetRarityDialogControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3BC2E & 1) == 0 )
  {
    sub_1C32C20(&SetRarityDialogControl___c_TypeInfo);
    byte_4C3BC2E = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(SetRarityDialogControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SetRarityDialogControl___c_TypeInfo->static_fields->__9 = (struct SetRarityDialogControl___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)SetRarityDialogControl___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SetRarityDialogControl___c___ctor(SetRarityDialogControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SetRarityDialogControl___c___OnClickDlgOk_b__167_0(SetRarityDialogControl___c_o *this, const MethodInfo *method)
{
  ;
}


bool SetRarityDialogControl___c___SetLimitUpInfo_b__149_1(
        SetRarityDialogControl___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  return NpCombineControl__CheckConfirm_48445816(x, 0);
}


void SetRarityDialogControl___c__DisplayClass149_0___ctor(
        SetRarityDialogControl___c__DisplayClass149_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SetRarityDialogControl___c__DisplayClass149_0___SetLimitUpInfo_b__0(
        SetRarityDialogControl___c__DisplayClass149_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  NetworkManager_c *v4; // x0
  int64_t userIdNumber; // x25
  int64_t Instance; // x0
  __int64 v7; // x8
  int64_t v8; // x21
  unsigned __int64 v9; // x26
  __int64 v10; // x22
  __int128 v11; // q0
  __int64 v12; // x23
  __int64 v13; // x24
  struct UserServantEntity_o *baseData; // x8
  int v15; // w23
  __int128 v16; // q0
  struct UserServantEntity_o *v17; // x8
  __int128 v18; // q0
  int64_t v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Predicate_object__o *v26; // x21
  Il2CppObject *v27; // x22
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  CombineLimitUpWarningDialog_ClickDelegate_o *_9__2; // x21
  CombineLimitUpWarningDialog_o *combineLimitUpWarningDialog; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct SetRarityDialogControl_o *_4__this; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4C3BC2F & 1) == 0 )
  {
    sub_1C32C20(&CombineLimitUpWarningDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity__Find__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&System_Predicate_UserServantEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SetRarityDialogControl___c__SetLimitUpInfo_b__149_1__);
    sub_1C32C20(&Method_SetRarityDialogControl___c__DisplayClass149_0__SetLimitUpInfo_b__2__);
    sub_1C32C20(&SetRarityDialogControl___c_TypeInfo);
    byte_4C3BC2F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  userIdNumber = v4->static_fields->userIdNumber;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_51;
  v7 = *(_QWORD *)(Instance + 24);
  v8 = Instance;
  if ( (int)v7 >= 1 )
  {
    v9 = 0;
    do
    {
      if ( v9 >= (unsigned int)v7 )
        sub_1C32E84(Instance);
      v10 = *(_QWORD *)(v8 + 32 + 8 * v9);
      if ( v10 )
      {
        v11 = *(_OWORD *)(v10 + 64);
        *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v10 + 48);
        *(_OWORD *)&v39.fields.fakeValue = v11;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v38 = v39;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v38, 0);
        if ( Instance == userIdNumber )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0);
          if ( (Instance & 1) == 0 )
          {
            v13 = *(_QWORD *)(v10 + 80);
            v12 = *(_QWORD *)(v10 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v40.fields.currentCryptoKey = v13;
            *(_QWORD *)&v40.fields.fakeValue = v12;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v40, 0);
            baseData = this->fields.baseData;
            if ( !baseData )
              goto LABEL_51;
            v15 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(baseData->fields.svtId, 0);
            if ( v15 == (_DWORD)Instance )
            {
              v16 = *(_OWORD *)(v10 + 32);
              *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v10 + 16);
              *(_OWORD *)&v39.fields.fakeValue = v16;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v37 = v39;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v37, 0);
              v17 = this->fields.baseData;
              if ( !v17 )
                goto LABEL_51;
              v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
              v19 = Instance;
              *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v36.fields.fakeValue = v18;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v36, 0);
              if ( v19 != Instance )
              {
                if ( !v3 )
                  goto LABEL_51;
                items = v3->fields._items;
                v23 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v3->fields._version;
                if ( !items )
                  goto LABEL_51;
                size = v3->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v3,
                    (Il2CppObject *)v10,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                }
                else
                {
                  v25 = &items->obj.klass + size;
                  v3->fields._size = size + 1;
                  v25[4] = (Il2CppClass *)v10;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v25 + 4), v10, v20, v21);
                }
              }
            }
          }
        }
      }
      LODWORD(v7) = *(_DWORD *)(v8 + 24);
    }
    while ( (__int64)++v9 < (int)v7 );
  }
  Instance = (int64_t)SetRarityDialogControl___c_TypeInfo;
  if ( !SetRarityDialogControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo);
    Instance = (int64_t)SetRarityDialogControl___c_TypeInfo;
  }
  v26 = *(System_Predicate_object__o **)(*(_QWORD *)(Instance + 184) + 8LL);
  if ( !v26 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (int64_t)SetRarityDialogControl___c_TypeInfo;
    }
    v27 = **(Il2CppObject ***)(Instance + 184);
    v26 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_object____ctor(v26, v27, Method_SetRarityDialogControl___c__SetLimitUpInfo_b__149_1__, 0);
    static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
    static_fields->__9__149_1 = (struct System_Predicate_UserServantEntity__o *)v26;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__149_1, (int32_t)v26, v29, v30);
  }
  if ( !v3 )
    goto LABEL_51;
  Instance = (int64_t)System_Collections_Generic_List_object___Find(
                        v3,
                        (System_Predicate_T__o *)v26,
                        (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_UserServantEntity__Find__);
  if ( Instance )
  {
    _9__2 = this->fields.__9__2;
    combineLimitUpWarningDialog = this->fields.combineLimitUpWarningDialog;
    if ( !_9__2 )
    {
      _9__2 = (CombineLimitUpWarningDialog_ClickDelegate_o *)sub_1C32E6C(CombineLimitUpWarningDialog_ClickDelegate_TypeInfo);
      CombineLimitUpWarningDialog_ClickDelegate___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_SetRarityDialogControl___c__DisplayClass149_0__SetLimitUpInfo_b__2__,
        0);
      this->fields.__9__2 = _9__2;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v33, v34);
    }
    if ( combineLimitUpWarningDialog )
    {
      CombineLimitUpWarningDialog__Open(combineLimitUpWarningDialog, _9__2, 0);
      return;
    }
LABEL_51:
    sub_1C32E7C(Instance);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_51;
  Instance = (int64_t)_4__this->fields.combineRootComponent;
  if ( !Instance )
    goto LABEL_51;
  CombineRootComponent__RequestLimitUp((CombineRootComponent_o *)Instance, 0);
}


void SetRarityDialogControl___c__DisplayClass149_0___SetLimitUpInfo_b__2(
        SetRarityDialogControl___c__DisplayClass149_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct SetRarityDialogControl_o *_4__this; // x8

  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (this = (SetRarityDialogControl___c__DisplayClass149_0_o *)_4__this->fields.combineRootComponent) == 0 )
    {
      sub_1C32E7C(this);
    }
    CombineRootComponent__RequestLimitUp((CombineRootComponent_o *)this, 0);
  }
}


void SetRarityDialogControl___c__DisplayClass151_0___ctor(
        SetRarityDialogControl___c__DisplayClass151_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SetRarityDialogControl___c__DisplayClass151_0___SetAppendSkillCombineInfo_b__0(
        SetRarityDialogControl___c__DisplayClass151_0_o *this,
        const MethodInfo *method)
{
  struct SetRarityDialogControl_o *_4__this; // x8
  CombineRootComponent_o *combineRootComponent; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (combineRootComponent = _4__this->fields.combineRootComponent) == 0 )
    sub_1C32E7C(this);
  CombineRootComponent__RequestAppendSkillCombine(combineRootComponent, !this->fields.isOpen, 0);
}