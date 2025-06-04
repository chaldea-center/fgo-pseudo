void __fastcall SetRarityDialogControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B060A9 & 1) == 0 )
  {
    sub_1BC3008(&SetRarityDialogControl_TypeInfo, v1);
    byte_4B060A9 = 1;
  }
  *SetRarityDialogControl_TypeInfo->static_fields = (struct SetRarityDialogControl_StaticFields)xmmword_BDF140;
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
  __int64 v5; // x1
  __int64 v6; // x8
  unsigned __int64 v7; // x21
  int64_t v8; // x20

  if ( (byte_4B060A8 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, selectedList);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4);
    this = (SetRarityDialogControl_o *)sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B060A8 = 1;
  }
  if ( selectedList )
  {
    v6 = *(_QWORD *)&selectedList->max_length;
    if ( v6 )
    {
      if ( (int)v6 >= 1 )
      {
        v7 = 0LL;
        do
        {
          if ( v7 >= (unsigned int)v6 )
            sub_1BC326C(this, selectedList, method);
          v8 = selectedList->m_Items[v7];
          this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SetRarityDialogControl_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
            if ( this )
            {
              this = (SetRarityDialogControl_o *)DataMasterBase_object__object__long___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   v8,
                                                   (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              if ( this )
                goto LABEL_11;
            }
          }
          sub_1BC3264(this, selectedList);
LABEL_11:
          if ( SLODWORD(this->fields.confirmSpendQpLb) > 0 )
            break;
          LODWORD(v6) = selectedList->max_length;
          ++v7;
        }
        while ( (__int64)v7 < (int)v6 );
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
  SetRarityDialogControl_o *v8; // x22
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
  int32_t adjustHp; // w24
  int32_t adjustAtk; // w23
  __int64 v21; // x1
  __int64 v22; // x2
  _BOOL8 IsStatusUp; // x0
  __int64 v24; // x8
  unsigned __int64 v25; // x27
  int v26; // w26
  int v27; // w25
  int64_t v28; // x22
  UserServantEntity_o *v29; // x22
  bool isAdjustHpMax; // w0
  int v31; // w21
  _BOOL4 isSecondAdjustHpMax; // w0
  bool isAdjustAtkMax; // w0
  int v34; // w22
  _BOOL4 isSecondAdjustAtkMax; // w0
  System_String_o **v36; // x8
  System_String_o *v38; // x20
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_String_o *v42; // x20
  BalanceConfig_c *v43; // x8
  Il2CppObject *v44; // x21
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x0
  System_String_o *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int v53; // [xsp+10h] [xbp-80h] BYREF
  int v54; // [xsp+14h] [xbp-7Ch] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+18h] [xbp-78h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+20h] [xbp-70h] BYREF
  int32_t atkUp[2]; // [xsp+28h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4B06096 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, baseData);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v10);
    sub_1BC3008(&int_TypeInfo, v11);
    sub_1BC3008(&LocalizationManager_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BC3008(&StringLiteral_12238/*"STATUS_HP_OVER_DIALOG_MSG"*/, v14);
    sub_1BC3008(&StringLiteral_12236/*"STATUS_ATK_OVER_DIALOG_MSG"*/, v15);
    sub_1BC3008(&StringLiteral_12237/*"STATUS_HP_ATK_OVER_DIALOG_MSG"*/, v16);
    sub_1BC3008(&StringLiteral_12239/*"STATUS_OVER_DIALOG_MSG"*/, v17);
    this = (SetRarityDialogControl_o *)sub_1BC3008(&StringLiteral_1/*""*/, v18);
    byte_4B06096 = 1;
  }
  if ( !baseData )
LABEL_49:
    sub_1BC3264(this, baseData);
  adjustHp = baseData->fields.adjustHp;
  adjustAtk = baseData->fields.adjustAtk;
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)atkUp = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  *labelMsg = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)labelMsg,
    (int32_t)StringLiteral_1/*""*/,
    (int32_t)selectUsrSvtIdList,
    (const MethodInfo *)labelMsg);
  UserServantEntity__GetAdjustMax(
    baseData,
    &maxAjustAtk[1],
    maxAjustAtk,
    &secondMaxAdjustAtk[1],
    secondMaxAdjustAtk,
    0LL);
  UserServantEntity__isAdjustAtkMax(baseData, 0LL);
  IsStatusUp = 0LL;
  if ( selectUsrSvtIdList && v8->fields.isStatusUp )
  {
    v24 = *(_QWORD *)&selectUsrSvtIdList->max_length;
    if ( (int)v24 >= 1 )
    {
      v25 = 0LL;
      v26 = 0;
      v27 = 0;
      do
      {
        if ( v25 >= (unsigned int)v24 )
          sub_1BC326C(IsStatusUp, v21, v22);
        v28 = selectUsrSvtIdList->m_Items[v25];
        this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_49;
        this = (SetRarityDialogControl_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !this )
          goto LABEL_49;
        this = (SetRarityDialogControl_o *)DataMasterBase_object__object__long___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             v28,
                                             (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !this )
          goto LABEL_49;
        v29 = (UserServantEntity_o *)this;
        IsStatusUp = UserServantEntity__IsStatusUp((UserServantEntity_o *)this, 0LL);
        if ( IsStatusUp )
        {
          *(_QWORD *)atkUp = 0LL;
          UserServantEntity__getStatusUpInfo(v29, &atkUp[1], atkUp, 0LL);
          v26 += atkUp[1] & ~(atkUp[1] >> 31);
          v27 += atkUp[0] & ~(atkUp[0] >> 31);
        }
        LODWORD(v24) = selectUsrSvtIdList->max_length;
        ++v25;
      }
      while ( (__int64)v25 < (int)v24 );
      if ( v26 < 1 )
      {
        v31 = 0;
      }
      else
      {
        isAdjustHpMax = UserServantEntity__isAdjustHpMax(baseData, 0LL);
        v31 = maxAjustAtk[1];
        if ( maxAjustAtk[1] >= v26 + adjustHp || isAdjustHpMax )
        {
          isSecondAdjustHpMax = UserServantEntity__isSecondAdjustHpMax(baseData, 0LL);
          if ( secondMaxAdjustAtk[1] < v26 + adjustHp && !isSecondAdjustHpMax )
            v31 = secondMaxAdjustAtk[1];
          else
            v31 = 0;
        }
      }
      if ( v27 < 1 )
      {
        v34 = 0;
      }
      else
      {
        isAdjustAtkMax = UserServantEntity__isAdjustAtkMax(baseData, 0LL);
        v34 = maxAjustAtk[0];
        if ( maxAjustAtk[0] >= v27 + adjustAtk || isAdjustAtkMax )
        {
          isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(baseData, 0LL);
          if ( secondMaxAdjustAtk[0] < v27 + adjustAtk && !isSecondAdjustAtkMax )
            v34 = secondMaxAdjustAtk[0];
          else
            v34 = 0;
        }
      }
      if ( v31 >= 1 && v31 == v34 )
      {
        v36 = (System_String_o **)&StringLiteral_12239/*"STATUS_OVER_DIALOG_MSG"*/;
      }
      else
      {
        v36 = (System_String_o **)&StringLiteral_12238/*"STATUS_HP_OVER_DIALOG_MSG"*/;
        if ( v34 > 0 && v31 > 0 )
          v36 = (System_String_o **)&StringLiteral_12237/*"STATUS_HP_ATK_OVER_DIALOG_MSG"*/;
        if ( v31 <= 0 )
          v36 = (System_String_o **)&StringLiteral_12236/*"STATUS_ATK_OVER_DIALOG_MSG"*/;
        if ( v31 <= 0 && v34 < 1 )
          goto LABEL_47;
      }
      v38 = *v36;
      if ( *v36 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v42 = LocalizationManager__Get(v38, 0LL);
        v43 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v43 = BalanceConfig_TypeInfo;
        }
        v54 = v43->static_fields->StatusUpAdjustHp * v31;
        v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v39, v40, v41);
        v53 = BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk * v34;
        v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v45, v46, v47);
        v49 = System_String__Format_62389940(v42, v44, v48, 0LL);
        *labelMsg = v49;
        sub_1BC2FAC((CGThumbnailListItem_o *)labelMsg, (int32_t)v49, v50, v51);
      }
    }
LABEL_47:
    LOBYTE(IsStatusUp) = 1;
  }
  return IsStatusUp;
}


void __fastcall SetRarityDialogControl__Close(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  SetRarityDialogControl_c *v7; // x8
  UnityEngine_GameObject_o *v8; // x20
  __int64 transform; // x0
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *v11; // x0
  struct SetRarityDialogControl_StaticFields *static_fields; // x8
  TweenScale_o *v13; // x20
  UnityEngine_GameObject_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_Transform_o *v20; // x20
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_Vector3_o v22; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B060A3 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&SetRarityDialogControl_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_5931/*"EndCloseDlg"*/, v4);
    sub_1BC3008(&StringLiteral_5262/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, v5);
    byte_4B060A3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v7 = SetRarityDialogControl_TypeInfo;
  v8 = gameObject;
  if ( !SetRarityDialogControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl_TypeInfo);
    v7 = SetRarityDialogControl_TypeInfo;
  }
  transform = (__int64)TweenAlpha__Begin(v8, v7->static_fields->CLOSE_TIME, 0.0, 0LL);
  if ( !transform )
    goto LABEL_26;
  *(_DWORD *)(transform + 32) = 6;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  static_fields = SetRarityDialogControl_TypeInfo->static_fields;
  v22.fields.x = static_fields->DIALOG_CLOSE_SCALE;
  v22.fields.y = v22.fields.x;
  v22.fields.z = v22.fields.x;
  v13 = TweenScale__Begin(v11, static_fields->CLOSE_TIME, v22, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_26;
    v13->fields.method = 6;
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v13->fields.eventReceiver = v14;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v13->fields.eventReceiver, (int32_t)v14, v15, v16);
    v17 = StringLiteral_5931/*"EndCloseDlg"*/;
    v13->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5931/*"EndCloseDlg"*/;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v13->fields.callWhenFinished, v17, v18, v19);
  }
  else
  {
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_26;
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    v20 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4AFBDB1 )
    {
      transform = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v10);
      byte_4AFBDB1 = 1;
    }
    if ( !v20 )
      goto LABEL_26;
    UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  }
  transform = (__int64)this->fields.npUpConfirmInfo;
  if ( !transform )
    goto LABEL_26;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0LL) )
  {
    transform = (__int64)this->fields.npUpInfoComp;
    if ( !transform )
      goto LABEL_26;
    NpUpConfirmComponent__DestroySvtInfo((NpUpConfirmComponent_o *)transform, v10);
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
    sub_1BC3264(transform, v10);
  }
  UIGrid__RemoveAllChild((UIGrid_o *)transform, 0LL);
  v21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__RemoveBackBtn_43914284(v21, (System_String_o *)StringLiteral_5262/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0LL);
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
    sub_1BC3264(decideBtnLb, method);
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
    sub_1BC3264(rariryConfirmInfo, method);
  }
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0LL);
}


void __fastcall SetRarityDialogControl__EndCloseDlg(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Action_o *onClickDlgCloseCallBack; // x19

  onClickDlgCloseCallBack = this->fields.onClickDlgCloseCallBack;
  this->fields.onClickDlgCloseCallBack = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onClickDlgCloseCallBack, 0, v2, v3);
  if ( onClickDlgCloseCallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClickDlgCloseCallBack->fields.m_target)(
      onClickDlgCloseCallBack->fields.original_method_info,
      *(_QWORD *)&onClickDlgCloseCallBack->fields.extra_arg);
}


void __fastcall SetRarityDialogControl__EndOpen(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B060A5 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_5262/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, method);
    byte_4B060A5 = 1;
  }
  this->fields.isButtonEnable = 1;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43913684(transform, (System_String_o *)StringLiteral_5262/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0LL);
}


void __fastcall SetRarityDialogControl__MoveAlpha(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  SetRarityDialogControl_c *v9; // x8
  UnityEngine_Transform_o *v10; // x20
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x20
  float OPEN_TIME; // s8
  System_Action_o *v14; // x20
  System_String_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  TweenAlpha_o *v17; // x20
  UnityEngine_GameObject_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B060A4 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    sub_1BC3008(&Method_SetRarityDialogControl_EndOpen__, v5);
    sub_1BC3008(&SetRarityDialogControl_TypeInfo, v6);
    byte_4B060A4 = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v9 = SetRarityDialogControl_TypeInfo;
  v10 = (UnityEngine_Transform_o *)gameObject;
  if ( !SetRarityDialogControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl_TypeInfo);
    v9 = SetRarityDialogControl_TypeInfo;
  }
  if ( !v10 )
    goto LABEL_19;
  v21.fields.x = v9->static_fields->DIALOG_INITIAL_SCALE;
  v21.fields.y = v21.fields.x;
  v21.fields.z = v21.fields.x;
  UnityEngine_Transform__set_localScale(v10, v21, 0LL);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  OPEN_TIME = SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME;
  if ( !byte_4AFBDB6 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v11);
    byte_4AFBDB6 = 1;
  }
  TweenScale__Begin(v12, OPEN_TIME, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !gameObject )
    goto LABEL_19;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gameObject->klass[1]._1.castClass)(
    gameObject,
    gameObject->klass[1]._1.declaringType,
    0.005);
  v14 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_SetRarityDialogControl_EndOpen__, 0LL);
  if ( !v14 )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)System_Delegate__get_Method((System_Delegate_o *)v14, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  v15 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))gameObject->klass[1]._1.castClass)(
                             gameObject,
                             gameObject->klass[1]._1.declaringType);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    v15,
    SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME,
    0LL);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17 = TweenAlpha__Begin(v16, SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME, 1.0, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( v17 )
    {
      v17->fields.method = 6;
      v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v17->fields.eventReceiver = v18;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v17->fields.eventReceiver, (int32_t)v18, v19, v20);
      return;
    }
LABEL_19:
    sub_1BC3264(gameObject, v8);
  }
}


void __fastcall SetRarityDialogControl__OnClickCancel(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  struct System_Action_o *onClickDlgCancelCallBack; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B060A7 & 1) == 0 )
  {
    sub_1BC3008(&Method_SetRarityDialogControl_OnClickCancel__, method);
    byte_4B060A7 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_SetRarityDialogControl_OnClickCancel__;
    if ( (*((_BYTE *)Method_SetRarityDialogControl_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_SetRarityDialogControl_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    SetRarityDialogControl__Close(this, v5);
    onClickDlgCancelCallBack = this->fields.onClickDlgCancelCallBack;
    this->fields.onClickDlgOkCallBack = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onClickDlgOkCallBack, 0, v7, v8);
    this->fields.onClickDlgCancelCallBack = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onClickDlgCancelCallBack, 0, v9, v10);
    if ( onClickDlgCancelCallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClickDlgCancelCallBack->fields.m_target)(
        onClickDlgCancelCallBack->fields.original_method_info,
        *(_QWORD *)&onClickDlgCancelCallBack->fields.extra_arg);
  }
}


void __fastcall SetRarityDialogControl__OnClickDlgOk(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x1
  CombineRootComponent_o *Instance; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 methodPtr_low; // x9
  __int64 v17; // x9
  CommonUI_o *v18; // x20
  SetRarityDialogControl___c_c *v19; // x8
  System_Action_o *_9__167_0; // x21
  Il2CppObject *v21; // x22
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Action_o *onClickDlgOkCallBack; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  SetRarityDialogControl_o *v28; // x0
  const MethodInfo *v29; // x1

  if ( (byte_4B060A6 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&CombineRootComponent_TypeInfo, v3);
    sub_1BC3008(&Method_SetRarityDialogControl_OnClickDlgOk__, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1BC3008(&Method_SetRarityDialogControl___c__OnClickDlgOk_b__167_0__, v7);
    sub_1BC3008(&SetRarityDialogControl___c_TypeInfo, v8);
    byte_4B060A6 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v9 = Method_SetRarityDialogControl_OnClickDlgOk__;
    if ( (*((_BYTE *)Method_SetRarityDialogControl_OnClickDlgOk__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BC3020(Method_SetRarityDialogControl_OnClickDlgOk__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, this->fields.onClickDlgOkSeKind, 0, 0LL);
    SetRarityDialogControl__Close(this, v11);
    Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onClickDlgOkCallBack, 0, v14, v15);
        this->fields.onClickDlgCancelCallBack = 0LL;
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onClickDlgCancelCallBack, 0, v26, v27);
        if ( onClickDlgOkCallBack )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClickDlgOkCallBack->fields.m_target)(
            onClickDlgOkCallBack->fields.original_method_info,
            *(_QWORD *)&onClickDlgOkCallBack->fields.extra_arg);
          return;
        }
LABEL_26:
        sub_1BC3264(Instance, v13);
      }
      Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_26;
      Instance = (CombineRootComponent_o *)Instance->fields.myFSM;
      if ( !Instance )
        goto LABEL_26;
      v17 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v17
        && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v17 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__SetTutorialProgress(Instance, 8, 0LL);
        Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v18 = (CommonUI_o *)Instance;
        v19 = SetRarityDialogControl___c_TypeInfo;
        if ( !SetRarityDialogControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo);
          v19 = SetRarityDialogControl___c_TypeInfo;
        }
        _9__167_0 = v19->static_fields->__9__167_0;
        if ( !_9__167_0 )
        {
          if ( !v19->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v19);
            v19 = SetRarityDialogControl___c_TypeInfo;
          }
          v21 = (Il2CppObject *)v19->static_fields->__9;
          _9__167_0 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(_9__167_0, v21, Method_SetRarityDialogControl___c__OnClickDlgOk_b__167_0__, 0LL);
          static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
          static_fields->__9__167_0 = _9__167_0;
          sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__167_0, (int32_t)_9__167_0, v23, v24);
        }
        if ( !v18 )
          goto LABEL_26;
        CommonUI__CloseTutorialNotificationDialogArrow_30756568(v18, _9__167_0, 0LL);
        goto LABEL_23;
      }
    }
    sub_1BC3524(Instance);
    SetRarityDialogControl__OnClickCancel(v28, v29);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetAllDispConfirmCombine(
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
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  void *allDispConfirmInfo; // x0
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  UILabel_o *allTitleLb; // x26
  UILabel_o *cancelBtnLb; // x26
  UILabel_o *decideBtnLb; // x26
  const MethodInfo *v37; // x1
  __int64 v38; // x27
  float v39; // s8
  unsigned __int64 v40; // x26
  bool v41; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x27
  UnityEngine_Transform_o *transform; // x0
  __int64 v44; // x2
  const MethodInfo *v45; // x7
  float y; // s9
  int v47; // w20
  int v48; // w8
  float v49; // s1
  float z; // s2
  float v51; // s0
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v55; // x25
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  Il2CppObject *v59; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v61; // x24
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x0
  UILabel_o *allRareMsgLb; // x21
  __int64 *v67; // x8
  UILabel_o *allRareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v70; // x20
  const MethodInfo *v71; // x5
  int64_t v72; // [xsp+0h] [xbp-80h] BYREF
  int32_t v73; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B06095 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, baseData);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v16);
    sub_1BC3008(&int_TypeInfo, v17);
    sub_1BC3008(&long_TypeInfo, v18);
    sub_1BC3008(&LocalizationManager_TypeInfo, v19);
    sub_1BC3008(&Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__147_0__, v20);
    sub_1BC3008(&StringLiteral_9155/*"NEED_QP"*/, v21);
    sub_1BC3008(&StringLiteral_3546/*"COMBINE_HAVE_QP"*/, v22);
    sub_1BC3008(&StringLiteral_3708/*"CONFIRM_COMBINE_MSG"*/, v23);
    sub_1BC3008(&StringLiteral_3545/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, v24);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v25);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v26);
    sub_1BC3008(&StringLiteral_10864/*"RARE_MATERIAL_INFO_MSG"*/, v27);
    sub_1BC3008(&StringLiteral_3580/*"COMBINE_SPEND_QP"*/, v28);
    sub_1BC3008(&StringLiteral_3736/*"CONFIRM_TITLE_SVT_COMBINE"*/, v29);
    byte_4B06095 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v32);
  SetRarityDialogControl__DefaultBgSize(this, v33);
  allTitleLb = this->fields.allTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3736/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  if ( !allTitleLb )
    goto LABEL_56;
  UILabel__set_text(allTitleLb, (System_String_o *)allDispConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_56;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_56;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v37);
  if ( !selectedList )
    goto LABEL_56;
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  LODWORD(v38) = selectedList->max_length;
  v39 = *((float *)allDispConfirmInfo + 12);
  if ( (int)v38 >= 1 )
  {
    v40 = 0LL;
    v41 = 0;
    do
    {
      if ( v41 )
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
                             (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v40 >= selectedList->max_length )
        sub_1BC326C(allDispConfirmInfo, v30, v44);
      if ( !allDispConfirmInfo )
        goto LABEL_56;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)allDispConfirmInfo,
        v40,
        baseData,
        selectedList->m_Items[v40],
        0,
        0,
        0LL,
        v45);
      allDispConfirmInfo = this->fields.allSvtGrid;
      v38 = *(_QWORD *)&selectedList->max_length;
      ++v40;
      v41 = allDispConfirmInfo == 0LL;
    }
    while ( (__int64)v40 < (int)v38 );
    if ( !allDispConfirmInfo )
      goto LABEL_56;
  }
  y = this->fields.center.fields.y;
  v47 = *((_DWORD *)allDispConfirmInfo + 11);
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  if ( v47 >= (int)v38 )
    v48 = v38;
  else
    v48 = v47;
  v49 = 70.0;
  if ( v47 >= (int)v38 )
    v49 = y;
  v51 = (float)(this->fields.center.fields.x - (float)((float)(v39 * 0.5) * (float)(v48 - 1))) * 0.47;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v49 - 1),
    0LL);
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  v74.fields.x = 0.47;
  v74.fields.y = 0.47;
  v74.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v74, 0LL);
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  UIGrid__set_repositionNow((UIGrid_o *)allDispConfirmInfo, 1, 0LL);
  allSpendQpTxtLb = this->fields.allSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3580/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !allSpendQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3546/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !allHaveQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allSpendQpLb = this->fields.allSpendQpLb;
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  v73 = spendQp;
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73, v56, v57, v58);
  allDispConfirmInfo = System_String__Format(v55, v59, 0LL);
  if ( !allSpendQpLb )
    goto LABEL_56;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpLb = this->fields.allHaveQpLb;
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  v72 = haveQp;
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v72, v62, v63, v64);
  allDispConfirmInfo = System_String__Format(v61, v65, 0LL);
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
        WrapControlText__textAdjust(this->fields.allStatusUpInfoLb, statusLimitMessage, 22, 0, 0LL),
        (allDispConfirmInfo = this->fields.allStatusUpInfoLb) == 0LL)
    || (allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL)) == 0LL )
  {
LABEL_56:
    sub_1BC3264(allDispConfirmInfo, v30);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0LL);
  allRareMsgLb = this->fields.allRareMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isExceededMaterial )
      goto LABEL_45;
LABEL_47:
    v67 = &StringLiteral_10864/*"RARE_MATERIAL_INFO_MSG"*/;
    goto LABEL_48;
  }
  if ( !isExceededMaterial )
    goto LABEL_47;
LABEL_45:
  v67 = &StringLiteral_3545/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
LABEL_48:
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)*v67, 0LL);
  if ( !allRareMsgLb )
    goto LABEL_56;
  UILabel__set_text(allRareMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3708/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !allRareConfirmMsgLb )
    goto LABEL_56;
  UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_56;
  if ( combineRootComponent->fields.state == 3 )
  {
    v70 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v70,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__147_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v70, 0LL, 0LL, v71);
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
  __int64 v27; // x20
  UnityEngine_GameObject_o *appendSkillConfirmInfo; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *ComponentInChildren_object; // x22
  UIExtrusionLabel_o *appendSkillCurrentLvLabel; // x22
  UIExtrusionLabel_o *appendSkillResultLvLabel; // x22
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  UILabel_o *v41; // x22
  UILabel_o *v42; // x22
  UILabel_o *v43; // x22
  System_String_o *v44; // x23
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x0
  UILabel_o *v49; // x22
  System_String_o *v50; // x23
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  UILabel_o *appendSkillConfirmLabel; // x21
  System_String_o *v56; // x0
  Il2CppObject *Component_object; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_GameObject_o *v60; // x0
  UILabel_o *appendSkillSpendTxtLabel; // x22
  UILabel_o *appendSkillHaveTxtLabel; // x22
  UILabel_o *appendSkillSpendLabel; // x22
  System_String_o *v64; // x23
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  Il2CppObject *v68; // x0
  UILabel_o *appendSkillHaveLabel; // x22
  System_String_o *v70; // x23
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  Il2CppObject *v74; // x0
  UILabel_o *cancelBtnLb; // x21
  UILabel_o *decideBtnLb; // x21
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v78; // x21
  const MethodInfo *v79; // x5
  UnityEngine_Bounds_o v80; // [xsp+8h] [xbp-68h] BYREF
  int32_t haveSvtCoin; // [xsp+2Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B06099 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, updata);
    sub_1BC3008(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___, v9);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___, v10);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v11);
    sub_1BC3008(&int_TypeInfo, v12);
    sub_1BC3008(&long_TypeInfo, v13);
    sub_1BC3008(&LocalizationManager_TypeInfo, v14);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v15);
    sub_1BC3008(&Method_SetRarityDialogControl___c__DisplayClass151_0__SetAppendSkillCombineInfo_b__0__, v16);
    sub_1BC3008(&SetRarityDialogControl___c__DisplayClass151_0_TypeInfo, v17);
    sub_1BC3008(&StringLiteral_9155/*"NEED_QP"*/, v18);
    sub_1BC3008(&StringLiteral_3546/*"COMBINE_HAVE_QP"*/, v19);
    sub_1BC3008(&StringLiteral_1994/*"APPEND_SKILL_OPEN_CONFIRM"*/, v20);
    sub_1BC3008(&StringLiteral_1997/*"APPEND_SKILL_OPEN_SPEND_COIN"*/, v21);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v22);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v23);
    sub_1BC3008(&StringLiteral_1995/*"APPEND_SKILL_OPEN_HAVE_COIN"*/, v24);
    sub_1BC3008(&StringLiteral_3580/*"COMBINE_SPEND_QP"*/, v25);
    sub_1BC3008(&StringLiteral_1963/*"APPEND_SKILL_COMBINE_CONFIRM"*/, v26);
    byte_4B06099 = 1;
  }
  v27 = sub_1BC3254(SetRarityDialogControl___c__DisplayClass151_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_60;
  *(_QWORD *)(v27 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v27 + 16), (int32_t)this, v30, v31);
  *(_BYTE *)(v27 + 24) = isOpen;
  SetRarityDialogControl__DisableConfirmInfo(this, v32);
  appendSkillConfirmInfo = this->fields.appendSkillConfirmInfo;
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, 1, 0LL);
  appendSkillConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v33);
  SetRarityDialogControl__DefaultBgSize(this, v34);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillTitleLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  UILabel__set_text((UILabel_o *)appendSkillConfirmInfo, titleMsg, 0LL);
  appendSkillConfirmInfo = this->fields.appendSkillIconInfo;
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, *(_BYTE *)(v27 + 24), 0LL);
  appendSkillConfirmInfo = this->fields.appendSkillLvUpInfo;
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, *(_BYTE *)(v27 + 24) == 0, 0LL);
  if ( *(_BYTE *)(v27 + 24) )
  {
    if ( updata )
    {
      appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillIconComp;
      if ( appendSkillConfirmInfo )
      {
        SkillIconComponent__Set_40054368(
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
                                             (const MethodInfo_3055BFC *)Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              appendSkillConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                     (UnityEngine_Object_o *)ComponentInChildren_object,
                                                                     0LL,
                                                                     0LL);
              if ( ((unsigned __int8)appendSkillConfirmInfo & 1) != 0 )
              {
                if ( !ComponentInChildren_object )
                  goto LABEL_60;
                UIScrollView__ResetPosition((UIScrollView_o *)ComponentInChildren_object, 0LL);
                UIScrollView__UpdateScrollbars((UIScrollView_o *)ComponentInChildren_object, 0LL);
              }
              else if ( !ComponentInChildren_object )
              {
                goto LABEL_60;
              }
              appendSkillConfirmInfo = UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)ComponentInChildren_object,
                                         0LL);
              if ( appendSkillConfirmInfo )
              {
                Component_object = UnityEngine_GameObject__GetComponent_object_(
                                     appendSkillConfirmInfo,
                                     (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
                {
                  appendSkillConfirmInfo = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)ComponentInChildren_object,
                                             0LL);
                  if ( !appendSkillConfirmInfo )
                    goto LABEL_60;
                  Component_object = UnityEngine_GameObject__AddComponent_object_(
                                       appendSkillConfirmInfo,
                                       (const MethodInfo_30558B0 *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
                }
                transform = UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)ComponentInChildren_object,
                              0LL);
                NGUIMath__CalculateAbsoluteWidgetBounds(&v80, transform, 0LL);
                appendSkillConfirmInfo = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ComponentInChildren_object->klass->vtable[4].method)(
                                                                       ComponentInChildren_object,
                                                                       ComponentInChildren_object->klass->vtable[5].methodPtr);
                if ( Component_object )
                {
                  UnityEngine_BoxCollider__set_center(
                    (UnityEngine_BoxCollider_o *)Component_object,
                    v80.fields.m_Center,
                    0LL);
                  ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ComponentInChildren_object->klass->vtable[4].method)(
                    ComponentInChildren_object,
                    ComponentInChildren_object->klass->vtable[5].methodPtr);
                  v82.fields.x = v80.fields.m_Extents.fields.x + v80.fields.m_Extents.fields.x;
                  v82.fields.y = v80.fields.m_Extents.fields.y + v80.fields.m_Extents.fields.y;
                  v82.fields.z = v80.fields.m_Extents.fields.z + v80.fields.m_Extents.fields.z;
                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v82, 0LL);
                  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillSpendTxtLabel;
                  if ( appendSkillConfirmInfo )
                  {
                    v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
                    GameObjectExtensions__SetLocalPositionX(v59, 100.0, 0LL);
                    appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillHaveTxtLabel;
                    if ( appendSkillConfirmInfo )
                    {
                      v60 = UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)appendSkillConfirmInfo,
                              0LL);
                      GameObjectExtensions__SetLocalPositionX(v60, 100.0, 0LL);
                      appendSkillSpendTxtLabel = this->fields.appendSkillSpendTxtLabel;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_1997/*"APPEND_SKILL_OPEN_SPEND_COIN"*/,
                                                                             0LL);
                      if ( appendSkillSpendTxtLabel )
                      {
                        UILabel__set_text(appendSkillSpendTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                        appendSkillHaveTxtLabel = this->fields.appendSkillHaveTxtLabel;
                        appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_1995/*"APPEND_SKILL_OPEN_HAVE_COIN"*/,
                                                                               0LL);
                        if ( appendSkillHaveTxtLabel )
                        {
                          UILabel__set_text(appendSkillHaveTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                          appendSkillSpendLabel = this->fields.appendSkillSpendLabel;
                          v64 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
                          LODWORD(v80.fields.m_Center.fields.x) = updata->fields.spendSvtCoin;
                          v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80, v65, v66, v67);
                          appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v64, v68, 0LL);
                          if ( appendSkillSpendLabel )
                          {
                            UILabel__set_text(appendSkillSpendLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                            appendSkillHaveLabel = this->fields.appendSkillHaveLabel;
                            v70 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
                            haveSvtCoin = updata->fields.haveSvtCoin;
                            v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveSvtCoin, v71, v72, v73);
                            appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v70, v74, 0LL);
                            if ( appendSkillHaveLabel )
                            {
                              UILabel__set_text(appendSkillHaveLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                              appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
                              v56 = (System_String_o *)StringLiteral_1994/*"APPEND_SKILL_OPEN_CONFIRM"*/;
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
    sub_1BC3264(appendSkillConfirmInfo, v29);
  }
  if ( !updata )
    goto LABEL_60;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillTargetRubyLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  UILabel__set_text((UILabel_o *)appendSkillConfirmInfo, updata->fields.targetRuby, 0LL);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillTargetNameLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  UILabel__set_text((UILabel_o *)appendSkillConfirmInfo, updata->fields.targetName, 0LL);
  appendSkillCurrentLvLabel = this->fields.appendSkillCurrentLvLabel;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)updata + 64, 0LL);
  if ( !appendSkillCurrentLvLabel )
    goto LABEL_60;
  UIExtrusionLabel__set_text(appendSkillCurrentLvLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
  appendSkillResultLvLabel = this->fields.appendSkillResultLvLabel;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)updata + 68, 0LL);
  if ( !appendSkillResultLvLabel )
    goto LABEL_60;
  UIExtrusionLabel__set_text(appendSkillResultLvLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillSpendTxtLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v39, -5.0, 0LL);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillHaveTxtLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_60;
  v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v40, -5.0, 0LL);
  v41 = this->fields.appendSkillSpendTxtLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3580/*"COMBINE_SPEND_QP"*/,
                                                         0LL);
  if ( !v41 )
    goto LABEL_60;
  UILabel__set_text(v41, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v42 = this->fields.appendSkillHaveTxtLabel;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3546/*"COMBINE_HAVE_QP"*/,
                                                         0LL);
  if ( !v42 )
    goto LABEL_60;
  UILabel__set_text(v42, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v43 = this->fields.appendSkillSpendLabel;
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  haveSvtCoin = updata->fields.spendQp;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveSvtCoin, v45, v46, v47);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v44, v48, 0LL);
  if ( !v43 )
    goto LABEL_60;
  UILabel__set_text(v43, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v49 = this->fields.appendSkillHaveLabel;
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  *(_QWORD *)&v80.fields.m_Center.fields.x = updata->fields.haveQp;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v80, v51, v52, v53);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v50, v54, 0LL);
  if ( !v49 )
    goto LABEL_60;
  UILabel__set_text(v49, (System_String_o *)appendSkillConfirmInfo, 0LL);
  appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
  v56 = (System_String_o *)StringLiteral_1963/*"APPEND_SKILL_COMBINE_CONFIRM"*/;
LABEL_51:
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(v56, 0LL);
  if ( !appendSkillConfirmLabel )
    goto LABEL_60;
  UILabel__set_text(appendSkillConfirmLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/,
                                                         0LL);
  if ( !cancelBtnLb )
    goto LABEL_60;
  UILabel__set_text(cancelBtnLb, (System_String_o *)appendSkillConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/,
                                                         0LL);
  if ( !decideBtnLb )
    goto LABEL_60;
  UILabel__set_text(decideBtnLb, (System_String_o *)appendSkillConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_60;
  if ( combineRootComponent->fields.state == 14 )
  {
    v78 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v78,
      (Il2CppObject *)v27,
      Method_SetRarityDialogControl___c__DisplayClass151_0__SetAppendSkillCombineInfo_b__0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v78, 0LL, 0LL, v79);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetCenter(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mPanel; // x0
  __int64 v4; // x2
  unsigned int klass; // w8
  float32x2_t *v6; // x20
  unsigned __int64 v7; // x21
  float *p_m_CachedPtr; // x22
  float v9; // s8
  float v10; // s9
  float v11; // s10
  int v12; // s0
  int v13; // s1
  int v14; // s2
  float v15; // s1
  float v16; // s3
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  mPanel = (UnityEngine_Component_o *)this->fields.mPanel;
  if ( !mPanel
    || (mPanel = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))mPanel->klass[1]._1.klass)(
                                              mPanel,
                                              mPanel->klass[1]._1.fields)) == 0LL )
  {
LABEL_11:
    sub_1BC3264(mPanel, method);
  }
  klass = (unsigned int)mPanel[1].klass;
  v6 = (float32x2_t *)mPanel;
  v7 = 0LL;
  p_m_CachedPtr = (float *)&mPanel[1].fields.m_CachedPtr;
  do
  {
    if ( v7 >= klass )
      goto LABEL_12;
    mPanel = (UnityEngine_Component_o *)this->fields.mPanel;
    if ( !mPanel )
      goto LABEL_11;
    v9 = *(p_m_CachedPtr - 2);
    v10 = *(p_m_CachedPtr - 1);
    v11 = *p_m_CachedPtr;
    mPanel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mPanel, 0LL);
    if ( !mPanel )
      goto LABEL_11;
    v17.fields.x = v9;
    v17.fields.y = v10;
    v17.fields.z = v11;
    *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__InverseTransformPoint(
                                       (UnityEngine_Transform_o *)mPanel,
                                       v17,
                                       0LL);
    if ( v7 >= v6[3].n64_u32[0] )
      goto LABEL_12;
    *((_DWORD *)p_m_CachedPtr - 2) = v12;
    *((_DWORD *)p_m_CachedPtr - 1) = v13;
    *(_DWORD *)p_m_CachedPtr = v14;
    p_m_CachedPtr += 3;
    klass = v6[3].n64_u32[0];
    ++v7;
  }
  while ( v7 != 4 );
  if ( klass < 3 )
LABEL_12:
    sub_1BC326C(mPanel, method, v4);
  v15 = v6[5].n64_f32[0];
  v16 = v6[8].n64_f32[0] - v15;
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v6[4],
                                                    vmul_f32(vsub_f32(v6[7], v6[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v15 + (float)(v16 * 0.5);
}


void __fastcall SetRarityDialogControl__SetClickDlgOkSeAndCallBack(
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
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.onClickDlgOkCallBack,
    (int32_t)callBack,
    (int32_t)callBack,
    (const MethodInfo *)cancelCallBack);
  this->fields.onClickDlgCancelCallBack = cancelCallBack;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onClickDlgCancelCallBack, (int32_t)cancelCallBack, v9, v10);
  this->fields.onClickDlgCloseCallBack = closeCallBack;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onClickDlgCloseCallBack, (int32_t)closeCallBack, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetConfirmCombine(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_String_o *msg,
        int32_t spendQp,
        int64_t haveQp,
        bool isStatusUp,
        System_Int64_array *selectedList,
        const MethodInfo *method)
{
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
  void *normalConfirmInfo; // x0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v32; // x1
  __int64 v33; // x25
  float v34; // s8
  unsigned __int64 v35; // x24
  bool v36; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v39; // x2
  const MethodInfo *v40; // x7
  float y; // s9
  int v42; // w24
  int v43; // w9
  float v44; // s1
  float z; // s2
  float v46; // s0
  UILabel_o *normalSpendQpTxtLb; // x24
  UILabel_o *normalHaveQpTxtLb; // x24
  UILabel_o *confirmSpendQpLb; // x24
  System_String_o *v50; // x25
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  UILabel_o *confirmHaveQpLb; // x23
  System_String_o *v56; // x24
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  Il2CppObject *v60; // x0
  UILabel_o *confirmMsgLb; // x22
  const MethodInfo *v62; // x4
  _BOOL8 v63; // x0
  const MethodInfo *v64; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v66; // x20
  const MethodInfo *v67; // x5
  int64_t v68; // [xsp+0h] [xbp-80h] BYREF
  int32_t v69; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *labelMsg; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B06093 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, baseData);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v15);
    sub_1BC3008(&int_TypeInfo, v16);
    sub_1BC3008(&long_TypeInfo, v17);
    sub_1BC3008(&LocalizationManager_TypeInfo, v18);
    sub_1BC3008(&Method_SetRarityDialogControl__SetConfirmCombine_b__145_0__, v19);
    sub_1BC3008(&StringLiteral_9155/*"NEED_QP"*/, v20);
    sub_1BC3008(&StringLiteral_3546/*"COMBINE_HAVE_QP"*/, v21);
    sub_1BC3008(&StringLiteral_3708/*"CONFIRM_COMBINE_MSG"*/, v22);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v23);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v24);
    sub_1BC3008(&StringLiteral_3580/*"COMBINE_SPEND_QP"*/, v25);
    byte_4B06093 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v28);
  SetRarityDialogControl__DefaultBgSize(this, v29);
  normalConfirmInfo = this->fields.normalTitleLb;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UILabel__set_text((UILabel_o *)normalConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_46;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_46;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v32);
  if ( !selectedList )
    goto LABEL_46;
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  LODWORD(v33) = selectedList->max_length;
  v34 = *((float *)normalConfirmInfo + 12);
  if ( (int)v33 >= 1 )
  {
    v35 = 0LL;
    v36 = 0;
    do
    {
      if ( v36 )
        goto LABEL_46;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
      normalConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !normalConfirmInfo )
        goto LABEL_46;
      normalConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)normalConfirmInfo,
                            (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v35 >= selectedList->max_length )
        sub_1BC326C(normalConfirmInfo, v26, v39);
      if ( !normalConfirmInfo )
        goto LABEL_46;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)normalConfirmInfo,
        v35,
        baseData,
        selectedList->m_Items[v35],
        0,
        0,
        0LL,
        v40);
      normalConfirmInfo = this->fields.materialSvtGrid;
      v33 = *(_QWORD *)&selectedList->max_length;
      ++v35;
      v36 = normalConfirmInfo == 0LL;
    }
    while ( (__int64)v35 < (int)v33 );
    if ( !normalConfirmInfo )
      goto LABEL_46;
  }
  y = this->fields.center.fields.y;
  v42 = *((_DWORD *)normalConfirmInfo + 11);
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  if ( v42 >= (int)v33 )
    v43 = v33;
  else
    v43 = v42;
  v44 = 55.0;
  if ( v42 >= (int)v33 )
    v44 = y;
  v46 = (float)(this->fields.center.fields.x - (float)((float)(v34 * 0.5) * (float)(v43 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v44 - 1),
    0LL);
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  v71.fields.x = 0.5;
  v71.fields.y = 0.5;
  v71.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v71, 0LL);
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UIGrid__set_repositionNow((UIGrid_o *)normalConfirmInfo, 1, 0LL);
  normalSpendQpTxtLb = this->fields.normalSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3580/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !normalSpendQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3546/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !normalHaveQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  v69 = spendQp;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v51, v52, v53);
  normalConfirmInfo = System_String__Format(v50, v54, 0LL);
  if ( !confirmSpendQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  v68 = haveQp;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v68, v57, v58, v59);
  normalConfirmInfo = System_String__Format(v56, v60, 0LL);
  if ( !confirmHaveQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3708/*"CONFIRM_COMBINE_MSG"*/, 0LL);
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
  v63 = SetRarityDialogControl__CheckStatusUpInfo(this, baseData, selectedList, &labelMsg, v62);
  if ( !v63 )
    goto LABEL_42;
  WrapControlText__textAdjust(this->fields.statusUpInfoLb, labelMsg, 22, 0, 0LL);
  normalConfirmInfo = this->fields.statusUpInfoLb;
  if ( !normalConfirmInfo
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0LL)) == 0LL )
  {
LABEL_46:
    sub_1BC3264(normalConfirmInfo, v26);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 1, 0LL);
LABEL_42:
  SetRarityDialogControl__CheckExceedSvt((SetRarityDialogControl_o *)v63, selectedList, v64);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_46;
  if ( combineRootComponent->fields.state == 3 )
  {
    v66 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v66, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmCombine_b__145_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v66, 0LL, 0LL, v67);
  }
}


void __fastcall SetRarityDialogControl__SetConfirmCombineCostume(
        SetRarityDialogControl_o *this,
        System_String_o *cosName,
        int32_t needQp,
        int64_t haveQp,
        System_Action_o *callBack,
        System_Action_o *cancelCallBack,
        const MethodInfo *method)
{
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
  UnityEngine_GameObject_o *costumeConfirmInfo; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  UILabel_o *costumeTitleLb; // x25
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  UILabel_o *needQpCostumeTextLb; // x24
  UILabel_o *needQpCostumeLb; // x24
  System_String_o *v31; // x25
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x0
  UILabel_o *haveQpCostumeTextLb; // x23
  UILabel_o *haveQpCostumeLb; // x23
  System_String_o *v38; // x24
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  UILabel_o *costumeInfoLb; // x22
  const MethodInfo *v44; // x5
  struct CombineRootComponent_o *combineRootComponent; // x8
  int64_t v46; // [xsp+0h] [xbp-60h] BYREF
  int32_t v47; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B060A0 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, cosName);
    sub_1BC3008(&long_TypeInfo, v13);
    sub_1BC3008(&LocalizationManager_TypeInfo, v14);
    sub_1BC3008(&StringLiteral_9155/*"NEED_QP"*/, v15);
    sub_1BC3008(&StringLiteral_3728/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v16);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v17);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v18);
    sub_1BC3008(&StringLiteral_3810/*"COSTUME_NEED_QP_TEXT"*/, v19);
    sub_1BC3008(&StringLiteral_3807/*"COSTUME_CONFIRM_MSG"*/, v20);
    sub_1BC3008(&StringLiteral_3809/*"COSTUME_HAVE_QP_TEXT"*/, v21);
    byte_4B060A0 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v24);
  SetRarityDialogControl__DefaultBgSize(this, v25);
  costumeTitleLb = this->fields.costumeTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3728/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !costumeTitleLb )
    goto LABEL_20;
  UILabel__set_text(costumeTitleLb, (System_String_o *)costumeConfirmInfo, 0LL);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)this->fields.costumeNameLb;
  if ( !costumeConfirmInfo )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)costumeConfirmInfo, cosName, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_20;
  UILabel__set_text(cancelBtnLb, (System_String_o *)costumeConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_20;
  UILabel__set_text(decideBtnLb, (System_String_o *)costumeConfirmInfo, 0LL);
  needQpCostumeTextLb = this->fields.needQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"COSTUME_NEED_QP_TEXT"*/, 0LL);
  if ( !needQpCostumeTextLb )
    goto LABEL_20;
  UILabel__set_text(needQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0LL);
  needQpCostumeLb = this->fields.needQpCostumeLb;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  v47 = needQp;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v32, v33, v34);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v31, v35, 0LL);
  if ( !needQpCostumeLb )
    goto LABEL_20;
  UILabel__set_text(needQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0LL);
  haveQpCostumeTextLb = this->fields.haveQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3809/*"COSTUME_HAVE_QP_TEXT"*/, 0LL);
  if ( !haveQpCostumeTextLb )
    goto LABEL_20;
  UILabel__set_text(haveQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0LL);
  haveQpCostumeLb = this->fields.haveQpCostumeLb;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  v46 = haveQp;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v46, v39, v40, v41);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v38, v42, 0LL);
  if ( !haveQpCostumeLb
    || (UILabel__set_text(haveQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0LL),
        costumeInfoLb = this->fields.costumeInfoLb,
        costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3807/*"COSTUME_CONFIRM_MSG"*/,
                                                           0LL),
        !costumeInfoLb)
    || (UILabel__set_text(costumeInfoLb, (System_String_o *)costumeConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_20:
    sub_1BC3264(costumeConfirmInfo, v22);
  }
  if ( combineRootComponent->fields.state == 8 )
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, callBack, cancelCallBack, 0LL, v44);
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

  if ( (byte_4B0609F & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___, eventCombineCostumeEnt);
    byte_4B0609F = 1;
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
                                                                    (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___)) == 0LL
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
    sub_1BC3264(costumeEventItemConfirmInfo, v9);
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_GameObject_o *costumeEventItemOrNeedItemConfirmInfo; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  UILabel_o *cancelBtnLb; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v26; // x21
  const MethodInfo *v27; // x5

  if ( (byte_4B0609E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, combineCostumeEnt);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___, v15);
    sub_1BC3008(&LocalizationManager_TypeInfo, v16);
    sub_1BC3008(&Method_SetRarityDialogControl_DefaultBgSize__, v17);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v18);
    byte_4B0609E = 1;
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
                                                                        (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___);
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
  SetRarityDialogControl__MoveAlpha(this, v21);
  SetRarityDialogControl__DefaultBgSize(this, v22);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/,
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
    sub_1BC3264(costumeEventItemOrNeedItemConfirmInfo, v19);
  }
  if ( combineRootComponent->fields.state == 8 )
  {
    v26 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, 0LL, cancelCallBack, v26, v27);
  }
}


void __fastcall SetRarityDialogControl__SetConfirmInfo(
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
  __int64 v18; // x1
  const MethodInfo *v19; // x4
  System_Int64_array *v20; // x2
  const MethodInfo *v21; // x7
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  __int64 methodPtr_low; // x9
  __int64 v25; // x9
  SetRarityDialogControl_o *v26; // x0
  System_Int64_array *v27; // x1
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // [xsp+0h] [xbp-70h]
  System_String_o *labelMsg; // [xsp+18h] [xbp-58h] BYREF

  v16 = this;
  v17 = isStatusUp;
  if ( (byte_4B06090 & 1) == 0 )
  {
    sub_1BC3008(&CombineRootComponent_TypeInfo, baseData);
    this = (SetRarityDialogControl_o *)sub_1BC3008(
                                         &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                         v18);
    byte_4B06090 = 1;
  }
  labelMsg = 0LL;
  SetRarityDialogControl__CheckExceedSvt(this, selectedList, (const MethodInfo *)list);
  v16->fields.isStatusUp = v17;
  if ( SetRarityDialogControl__CheckStatusUpInfo(v16, baseData, selectedList, &labelMsg, v19) && isStatusUp )
    SetRarityDialogControl__SetAllDispConfirmCombine(
      v16,
      baseData,
      v20,
      spendQp,
      haveQp,
      selectedList,
      labelMsg,
      isExceededMaterial,
      v29);
  else
    SetRarityDialogControl__SetConfirmRarityInfo(
      v16,
      baseData,
      selectedList,
      msg,
      spendQp,
      haveQp,
      isExceededMaterial,
      v21);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  if ( HIDWORD(Instance[41].klass) != 7 )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (Il2CppObject *)Instance[2].klass) == 0LL )
LABEL_18:
    sub_1BC3264(Instance, v23);
  v25 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable[0].methodPtr) < (unsigned int)v25
    || (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v25 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_19:
    sub_1BC3524(Instance);
    SetRarityDialogControl__CheckExceedSvt(v26, v27, v28);
    return;
  }
  CombineRootComponent__ShowTutorial((CombineRootComponent_o *)Instance, 0LL);
}


void __fastcall SetRarityDialogControl__SetConfirmLvExceed(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_String_o *msg,
        int32_t spendQp,
        int64_t haveQp,
        bool isCheck,
        const MethodInfo *method)
{
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
  UnityEngine_GameObject_o *lvExceedConfirmSimpleInfo; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  UILabel_o *cancelBtnLb; // x23
  UILabel_o *decideBtnLb; // x23
  UILabel_o *lvExceedInfoLb; // x21
  UILabel_o *lvExceedSpendQpTxtLb; // x23
  UILabel_o *lvExceedHaveQpTxtLb; // x23
  UILabel_o *lvExceedSpendQpLb; // x23
  System_String_o *v33; // x24
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  UILabel_o *lvExceedHaveQpLb; // x22
  System_String_o *v39; // x23
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  Il2CppObject *v43; // x0
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v45; // x0
  _QWORD *v46; // x8
  System_Action_o *v47; // x21
  int32_t v48; // w20
  const MethodInfo *v49; // x5
  int64_t v50; // [xsp+0h] [xbp-50h] BYREF
  int32_t v51; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B0609B & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, baseData);
    sub_1BC3008(&int_TypeInfo, v12);
    sub_1BC3008(&long_TypeInfo, v13);
    sub_1BC3008(&LocalizationManager_TypeInfo, v14);
    sub_1BC3008(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__153_0__, v15);
    sub_1BC3008(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__153_1__, v16);
    sub_1BC3008(&StringLiteral_9155/*"NEED_QP"*/, v17);
    sub_1BC3008(&StringLiteral_3713/*"CONFIRM_EXCEED_COMBINE"*/, v18);
    sub_1BC3008(&StringLiteral_3546/*"COMBINE_HAVE_QP"*/, v19);
    sub_1BC3008(&StringLiteral_8267/*"LVEXCEED_COMBINE_SPEND_QP"*/, v20);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v21);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v22);
    byte_4B0609B = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v25);
  SetRarityDialogControl__DefaultBgSize(this, v26);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)this->fields.lvExceedTitleLb;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)lvExceedConfirmSimpleInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/,
                                                            0LL);
  if ( !cancelBtnLb )
    goto LABEL_36;
  UILabel__set_text(cancelBtnLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/,
                                                            0LL);
  if ( !decideBtnLb )
    goto LABEL_36;
  UILabel__set_text(decideBtnLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
  if ( !isCheck )
  {
    lvExceedSpendQpTxtLb = this->fields.lvExceedSpendQpTxtLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8267/*"LVEXCEED_COMBINE_SPEND_QP"*/,
                                                              0LL);
    if ( lvExceedSpendQpTxtLb )
    {
      UILabel__set_text(lvExceedSpendQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
      lvExceedHaveQpTxtLb = this->fields.lvExceedHaveQpTxtLb;
      lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_3546/*"COMBINE_HAVE_QP"*/,
                                                                0LL);
      if ( lvExceedHaveQpTxtLb )
      {
        UILabel__set_text(lvExceedHaveQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
        lvExceedSpendQpLb = this->fields.lvExceedSpendQpLb;
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
        v51 = spendQp;
        v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v34, v35, v36);
        lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)System_String__Format(v33, v37, 0LL);
        if ( lvExceedSpendQpLb )
        {
          UILabel__set_text(lvExceedSpendQpLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
          lvExceedHaveQpLb = this->fields.lvExceedHaveQpLb;
          v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
          v50 = haveQp;
          v43 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v50, v40, v41, v42);
          lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)System_String__Format(v39, v43, 0LL);
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
    sub_1BC3264(lvExceedConfirmSimpleInfo, v23);
  }
  lvExceedInfoLb = this->fields.lvExceedInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3713/*"CONFIRM_EXCEED_COMBINE"*/,
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
    v45 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    v46 = &Method_SetRarityDialogControl__SetConfirmLvExceed_b__153_0__;
    if ( !isCheck )
      v46 = &Method_SetRarityDialogControl__SetConfirmLvExceed_b__153_1__;
    v47 = v45;
    if ( isCheck )
      v48 = 8;
    else
      v48 = 0;
    System_Action___ctor(v45, (Il2CppObject *)this, *v46, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, v48, v47, 0LL, 0LL, v49);
  }
}


void __fastcall SetRarityDialogControl__SetConfirmLvExceed_47713384(
        SetRarityDialogControl_o *this,
        System_Collections_Generic_List_GameObject__o *itemObjList,
        System_Int32_array *itemList,
        int32_t spendQp,
        int64_t haveQp,
        const MethodInfo *method)
{
  SetRarityDialogControl_o *v10; // x19
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
  struct CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  UILabel_o *lvExceedTitleLabel; // x24
  UILabel_o *lvExceedSpendItemLabel; // x24
  UILabel_o *lvExceedSpendQpTxtLabel; // x24
  UILabel_o *lvExceedHaveQpTxtLabel; // x24
  UILabel_o *lvExceedSpendQpLabel; // x24
  System_String_o *v37; // x25
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  UILabel_o *lvExceedHaveQpLabel; // x23
  System_String_o *v43; // x24
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x0
  UILabel_o *lvExceedConfirmLabel; // x22
  __int64 size; // x24
  unsigned __int64 v50; // x22
  SetRarityDialogControl_o *v51; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v53; // x2
  System_Action_o *v54; // x20
  const MethodInfo *v55; // x5
  int64_t v56; // [xsp+0h] [xbp-60h] BYREF
  int32_t v57; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_4B0609C & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, itemObjList);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v11);
    sub_1BC3008(&int_TypeInfo, v12);
    sub_1BC3008(&long_TypeInfo, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Count__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Item__, v15);
    sub_1BC3008(&LocalizationManager_TypeInfo, v16);
    sub_1BC3008(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__154_0__, v17);
    sub_1BC3008(&StringLiteral_9155/*"NEED_QP"*/, v18);
    sub_1BC3008(&StringLiteral_3729/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, v19);
    sub_1BC3008(&StringLiteral_3546/*"COMBINE_HAVE_QP"*/, v20);
    sub_1BC3008(&StringLiteral_8266/*"LVEXCEED_COMBINE_SPEND_ITEM"*/, v21);
    sub_1BC3008(&StringLiteral_8267/*"LVEXCEED_COMBINE_SPEND_QP"*/, v22);
    sub_1BC3008(&StringLiteral_8268/*"LVEXCEED_EXE_CONFIRM"*/, v23);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v24);
    this = (SetRarityDialogControl_o *)sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v25);
    byte_4B0609C = 1;
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
    SetRarityDialogControl__MoveAlpha(v10, v27);
    SetRarityDialogControl__DefaultBgSize(v10, v28);
    this = (SetRarityDialogControl_o *)v10->fields.mPanelBg;
    if ( !this )
      goto LABEL_31;
    UIWidget__set_height((UIWidget_o *)this, 501, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, -8.0, 0LL);
    GameObjectExtensions__SetLocalPositionY(v10->fields.confirmBtnInfo, -8.0, 0LL);
    cancelBtnLb = v10->fields.cancelBtnLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelBtnLb )
      goto LABEL_31;
    UILabel__set_text(cancelBtnLb, (System_String_o *)this, 0LL);
    decideBtnLb = v10->fields.decideBtnLb;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideBtnLb )
      goto LABEL_31;
    UILabel__set_text(decideBtnLb, (System_String_o *)this, 0LL);
    lvExceedTitleLabel = v10->fields.lvExceedTitleLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3729/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
    if ( !lvExceedTitleLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedTitleLabel, (System_String_o *)this, 0LL);
    lvExceedSpendItemLabel = v10->fields.lvExceedSpendItemLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8266/*"LVEXCEED_COMBINE_SPEND_ITEM"*/, 0LL);
    if ( !lvExceedSpendItemLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedSpendItemLabel, (System_String_o *)this, 0LL);
    lvExceedSpendQpTxtLabel = v10->fields.lvExceedSpendQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8267/*"LVEXCEED_COMBINE_SPEND_QP"*/, 0LL);
    if ( !lvExceedSpendQpTxtLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedSpendQpTxtLabel, (System_String_o *)this, 0LL);
    lvExceedHaveQpTxtLabel = v10->fields.lvExceedHaveQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3546/*"COMBINE_HAVE_QP"*/, 0LL);
    if ( !lvExceedHaveQpTxtLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedHaveQpTxtLabel, (System_String_o *)this, 0LL);
    lvExceedSpendQpLabel = v10->fields.lvExceedSpendQpLabel;
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
    v57 = spendQp;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v38, v39, v40);
    this = (SetRarityDialogControl_o *)System_String__Format(v37, v41, 0LL);
    if ( !lvExceedSpendQpLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedSpendQpLabel, (System_String_o *)this, 0LL);
    lvExceedHaveQpLabel = v10->fields.lvExceedHaveQpLabel;
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
    v56 = haveQp;
    v47 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v56, v44, v45, v46);
    this = (SetRarityDialogControl_o *)System_String__Format(v43, v47, 0LL);
    if ( !lvExceedHaveQpLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedHaveQpLabel, (System_String_o *)this, 0LL);
    lvExceedConfirmLabel = v10->fields.lvExceedConfirmLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8268/*"LVEXCEED_EXE_CONFIRM"*/, 0LL);
    if ( !lvExceedConfirmLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedConfirmLabel, (System_String_o *)this, 0LL);
    if ( !itemObjList )
      goto LABEL_31;
    size = (unsigned int)itemObjList->fields._size;
    if ( (int)size >= 1 )
    {
      v50 = 0LL;
      while ( 1 )
      {
        this = (SetRarityDialogControl_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)itemObjList,
                                             v50,
                                             (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !v10->fields.lvExceedConsumeItemGrid )
          break;
        v51 = this;
        transform = UnityEngine_Component__get_transform(
                      (UnityEngine_Component_o *)v10->fields.lvExceedConsumeItemGrid,
                      0LL);
        this = (SetRarityDialogControl_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v10,
                                             (UnityEngine_GameObject_o *)v51,
                                             transform,
                                             0LL,
                                             0LL);
        if ( !this )
          break;
        this = (SetRarityDialogControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
        if ( !itemList )
          break;
        if ( v50 >= itemList->max_length )
          sub_1BC326C(this, itemObjList, v53);
        if ( !this )
          break;
        LimitCntUpItemComponent__SetItemEntity((LimitCntUpItemComponent_o *)this, itemList->m_Items[++v50], 0LL);
        if ( size == v50 )
          goto LABEL_28;
      }
LABEL_31:
      sub_1BC3264(this, itemObjList);
    }
LABEL_28:
    this = (SetRarityDialogControl_o *)v10->fields.lvExceedConsumeItemGrid;
    if ( !this )
      goto LABEL_31;
    ((void (__fastcall *)(SetRarityDialogControl_o *, Il2CppClass *))this->klass[1]._1.castClass)(
      this,
      this->klass[1]._1.declaringType);
    v54 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v54, (Il2CppObject *)v10, Method_SetRarityDialogControl__SetConfirmLvExceed_b__154_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v10, 8, v54, 0LL, 0LL, v55);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetConfirmRarityInfo(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_Int64_array *list,
        System_String_o *msg,
        int32_t spendQp,
        int64_t haveQp,
        bool isExceededMaterial,
        const MethodInfo *method)
{
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
  __int64 v28; // x1
  void *rariryConfirmInfo; // x0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  UILabel_o *cancelBtnLb; // x25
  UILabel_o *decideBtnLb; // x25
  const MethodInfo *v34; // x1
  __int64 v35; // x26
  float v36; // s8
  unsigned __int64 v37; // x25
  bool v38; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x0
  __int64 v41; // x2
  const MethodInfo *v42; // x7
  float y; // s9
  int v44; // w23
  int v45; // w9
  float v46; // s1
  float z; // s2
  float v48; // s0
  UILabel_o *spendQpTxtLb; // x23
  UILabel_o *haveQpTxtLb; // x23
  UILabel_o *spendQpLb; // x23
  System_String_o *v52; // x24
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  Il2CppObject *v56; // x0
  UILabel_o *haveQpLb; // x22
  System_String_o *v58; // x23
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  Il2CppObject *v62; // x0
  UILabel_o *rareMaterialMsgLb; // x21
  __int64 *v64; // x8
  UILabel_o *rareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v67; // x20
  const MethodInfo *v68; // x5
  int64_t v69; // [xsp+0h] [xbp-80h] BYREF
  int32_t v70; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B06091 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, baseData);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v15);
    sub_1BC3008(&int_TypeInfo, v16);
    sub_1BC3008(&long_TypeInfo, v17);
    sub_1BC3008(&LocalizationManager_TypeInfo, v18);
    sub_1BC3008(&Method_SetRarityDialogControl__SetConfirmRarityInfo_b__143_0__, v19);
    sub_1BC3008(&StringLiteral_9155/*"NEED_QP"*/, v20);
    sub_1BC3008(&StringLiteral_3546/*"COMBINE_HAVE_QP"*/, v21);
    sub_1BC3008(&StringLiteral_3708/*"CONFIRM_COMBINE_MSG"*/, v22);
    sub_1BC3008(&StringLiteral_3545/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, v23);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v24);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v25);
    sub_1BC3008(&StringLiteral_10864/*"RARE_MATERIAL_INFO_MSG"*/, v26);
    sub_1BC3008(&StringLiteral_3580/*"COMBINE_SPEND_QP"*/, v27);
    byte_4B06091 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v30);
  SetRarityDialogControl__DefaultBgSize(this, v31);
  rariryConfirmInfo = this->fields.rarityTitleLb;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  UILabel__set_text((UILabel_o *)rariryConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_48;
  UILabel__set_text(cancelBtnLb, (System_String_o *)rariryConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_48;
  UILabel__set_text(decideBtnLb, (System_String_o *)rariryConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v34);
  if ( !list )
    goto LABEL_48;
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  LODWORD(v35) = list->max_length;
  v36 = *((float *)rariryConfirmInfo + 12);
  if ( (int)v35 >= 1 )
  {
    v37 = 0LL;
    v38 = 0;
    do
    {
      if ( v38 )
        goto LABEL_48;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
      rariryConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !rariryConfirmInfo )
        goto LABEL_48;
      rariryConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)rariryConfirmInfo,
                            (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v37 >= list->max_length )
        sub_1BC326C(rariryConfirmInfo, v28, v41);
      if ( !rariryConfirmInfo )
        goto LABEL_48;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)rariryConfirmInfo,
        v37,
        baseData,
        list->m_Items[v37],
        0,
        0,
        0LL,
        v42);
      rariryConfirmInfo = this->fields.raritySvtGrid;
      v35 = *(_QWORD *)&list->max_length;
      ++v37;
      v38 = rariryConfirmInfo == 0LL;
    }
    while ( (__int64)v37 < (int)v35 );
    if ( !rariryConfirmInfo )
      goto LABEL_48;
  }
  y = this->fields.center.fields.y;
  v44 = *((_DWORD *)rariryConfirmInfo + 11);
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  if ( v44 >= (int)v35 )
    v45 = v35;
  else
    v45 = v44;
  v46 = 55.0;
  if ( v44 >= (int)v35 )
    v46 = y;
  v48 = (float)(this->fields.center.fields.x - (float)((float)(v36 * 0.5) * (float)(v45 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)rariryConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v46 - 1),
    0LL);
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  v71.fields.x = 0.5;
  v71.fields.y = 0.5;
  v71.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rariryConfirmInfo, v71, 0LL);
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  UIGrid__set_repositionNow((UIGrid_o *)rariryConfirmInfo, 1, 0LL);
  spendQpTxtLb = this->fields.spendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3580/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !spendQpTxtLb )
    goto LABEL_48;
  UILabel__set_text(spendQpTxtLb, (System_String_o *)rariryConfirmInfo, 0LL);
  haveQpTxtLb = this->fields.haveQpTxtLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3546/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !haveQpTxtLb )
    goto LABEL_48;
  UILabel__set_text(haveQpTxtLb, (System_String_o *)rariryConfirmInfo, 0LL);
  spendQpLb = this->fields.spendQpLb;
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  v70 = spendQp;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70, v53, v54, v55);
  rariryConfirmInfo = System_String__Format(v52, v56, 0LL);
  if ( !spendQpLb
    || (UILabel__set_text(spendQpLb, (System_String_o *)rariryConfirmInfo, 0LL),
        haveQpLb = this->fields.haveQpLb,
        v58 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL),
        v69 = haveQp,
        v62 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v69, v59, v60, v61),
        rariryConfirmInfo = System_String__Format(v58, v62, 0LL),
        !haveQpLb) )
  {
LABEL_48:
    sub_1BC3264(rariryConfirmInfo, v28);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)rariryConfirmInfo, 0LL);
  rareMaterialMsgLb = this->fields.rareMaterialMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isExceededMaterial )
      goto LABEL_37;
LABEL_39:
    v64 = &StringLiteral_10864/*"RARE_MATERIAL_INFO_MSG"*/;
    goto LABEL_40;
  }
  if ( !isExceededMaterial )
    goto LABEL_39;
LABEL_37:
  v64 = &StringLiteral_3545/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
LABEL_40:
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)*v64, 0LL);
  if ( !rareMaterialMsgLb )
    goto LABEL_48;
  UILabel__set_text(rareMaterialMsgLb, (System_String_o *)rariryConfirmInfo, 0LL);
  rareConfirmMsgLb = this->fields.rareConfirmMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3708/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !rareConfirmMsgLb )
    goto LABEL_48;
  UILabel__set_text(rareConfirmMsgLb, (System_String_o *)rariryConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_48;
  if ( combineRootComponent->fields.state == 3 )
  {
    v67 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v67, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmRarityInfo_b__143_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v67, 0LL, 0LL, v68);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetConfirmSvtEqCombine(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_String_o *msg,
        int32_t spendQp,
        int64_t haveQp,
        bool isStatusUp,
        System_Collections_Generic_Dictionary_long__bool__o *selectedList,
        const MethodInfo *method)
{
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
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  UnityEngine_GameObject_o *normalConfirmInfo; // x0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v38; // x1
  struct UIGrid_o *materialSvtGrid; // x8
  float v40; // s8
  int32_t v41; // w24
  __int64 v42; // x1
  UnityEngine_Component_o *v43; // x0
  Il2CppObject *key; // x25
  char value; // w27
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v49; // x1
  Il2CppObject *Component_object; // x0
  __int64 v51; // x1
  float y; // s9
  int32_t Count; // w23
  struct UIGrid_o *v54; // x8
  int32_t maxPerLine; // w20
  int32_t v56; // w22
  int32_t v57; // w9
  float v58; // s1
  float z; // s2
  float v60; // s0
  UILabel_o *normalSpendQpTxtLb; // x22
  UILabel_o *normalHaveQpTxtLb; // x22
  UILabel_o *confirmSpendQpLb; // x22
  System_String_o *v64; // x23
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  Il2CppObject *v68; // x0
  UILabel_o *confirmHaveQpLb; // x21
  System_String_o *v70; // x22
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  Il2CppObject *v74; // x0
  UILabel_o *confirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v77; // x20
  const MethodInfo *v78; // x5
  const MethodInfo *v79; // [xsp+0h] [xbp-E0h]
  struct System_Collections_Generic_Dictionary_TKey__TValue__o *v80; // [xsp+8h] [xbp-D8h]
  int32_t v82; // [xsp+14h] [xbp-CCh] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v83; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v84; // [xsp+40h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B06094 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, baseData);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__, v18);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v19);
    sub_1BC3008(&int_TypeInfo, v20);
    sub_1BC3008(&long_TypeInfo, v21);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__, v23);
    sub_1BC3008(&LocalizationManager_TypeInfo, v24);
    sub_1BC3008(&Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__146_0__, v25);
    sub_1BC3008(&StringLiteral_9155/*"NEED_QP"*/, v26);
    sub_1BC3008(&StringLiteral_3546/*"COMBINE_HAVE_QP"*/, v27);
    sub_1BC3008(&StringLiteral_3708/*"CONFIRM_COMBINE_MSG"*/, v28);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v29);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v30);
    sub_1BC3008(&StringLiteral_3580/*"COMBINE_SPEND_QP"*/, v31);
    byte_4B06094 = 1;
  }
  memset(&v84, 0, sizeof(v84));
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
  SetRarityDialogControl__MoveAlpha(this, v34);
  SetRarityDialogControl__DefaultBgSize(this, v35);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.normalTitleLb;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  UILabel__set_text((UILabel_o *)normalConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_44;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_44;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v38);
  if ( !selectedList )
    goto LABEL_44;
  v80 = (struct System_Collections_Generic_Dictionary_TKey__TValue__o *)haveQp;
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_333F98C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  materialSvtGrid = this->fields.materialSvtGrid;
  if ( !materialSvtGrid )
    goto LABEL_44;
  v40 = materialSvtGrid->fields.cellWidth * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v83,
    selectedList,
    (const MethodInfo_33400E0 *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v41 = 0;
  v84 = v83;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v84,
            (const MethodInfo_34603F4 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v43 = (UnityEngine_Component_o *)this->fields.materialSvtGrid;
    if ( !v43 )
      sub_1BC3264(0LL, v42);
    key = v84.fields._current.fields.key;
    value = (char)v84.fields._current.fields.value;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v43, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Object )
      sub_1BC3264(0LL, v49);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_object )
      sub_1BC3264(0LL, v51);
    MaterialSvtInfo__setMaterialSvtInfo_47689820(
      (MaterialSvtInfo_o *)Component_object,
      v41++,
      baseData,
      (int64_t)key,
      0,
      0,
      value != 0,
      0LL,
      v79);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v84,
    (const MethodInfo_3460510 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_333F98C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_333F98C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v54 = this->fields.materialSvtGrid;
  if ( !v54 )
    goto LABEL_44;
  maxPerLine = v54->fields.maxPerLine;
  v56 = (int)normalConfirmInfo;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.materialSvtGrid,
                                                    0LL);
  if ( !normalConfirmInfo )
    goto LABEL_44;
  if ( v56 <= maxPerLine )
    v57 = Count;
  else
    v57 = maxPerLine;
  v58 = 55.0;
  if ( v56 <= maxPerLine )
    v58 = y;
  v60 = (float)(this->fields.center.fields.x - (float)(v40 * (float)(v57 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v58 - 1),
    0LL);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)normalConfirmInfo,
                                                    0LL);
  if ( !normalConfirmInfo )
    goto LABEL_44;
  v85.fields.x = 0.5;
  v85.fields.y = 0.5;
  v85.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v85, 0LL);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  UIGrid__set_repositionNow((UIGrid_o *)normalConfirmInfo, 1, 0LL);
  normalSpendQpTxtLb = this->fields.normalSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3580/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !normalSpendQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3546/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !normalHaveQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  v82 = spendQp;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v65, v66, v67);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v64, v68, 0LL);
  if ( !confirmSpendQpLb )
    goto LABEL_44;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  v83.fields._dictionary = v80;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v83, v71, v72, v73);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v70, v74, 0LL);
  if ( !confirmHaveQpLb )
    goto LABEL_44;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3708/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !confirmMsgLb
    || (UILabel__set_text(confirmMsgLb, (System_String_o *)normalConfirmInfo, 0LL),
        (normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(normalConfirmInfo, 0, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_44:
    sub_1BC3264(normalConfirmInfo, v32);
  }
  if ( combineRootComponent->fields.state == 4 )
  {
    v77 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v77,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__146_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v77, 0LL, 0LL, v78);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetExceedMaterialInfo(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_Int64_array *list,
        System_String_o *msg,
        int32_t spendQp,
        int64_t haveQp,
        const MethodInfo *method)
{
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
  void *exceedConfirmInfo; // x0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v31; // x1
  __int64 v32; // x25
  float v33; // s8
  unsigned __int64 v34; // x24
  bool v35; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v38; // x2
  const MethodInfo *v39; // x7
  float y; // s9
  int v41; // w22
  int v42; // w9
  float v43; // s1
  float z; // s2
  float v45; // s0
  UILabel_o *exceedConfirmSpendQpTxtLb; // x22
  UILabel_o *exceedConfirmHaveQpTxtLb; // x22
  UILabel_o *exceedConfirmSpendQpLb; // x22
  System_String_o *v49; // x23
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x0
  UILabel_o *exceedConfirmHaveQpLb; // x21
  System_String_o *v55; // x22
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  Il2CppObject *v59; // x0
  UILabel_o *exceedMaterialMsgLb; // x20
  UILabel_o *exceedConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v63; // x20
  const MethodInfo *v64; // x5
  int64_t v65; // [xsp+8h] [xbp-78h] BYREF
  int32_t v66; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B06092 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, baseData);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v13);
    sub_1BC3008(&int_TypeInfo, v14);
    sub_1BC3008(&long_TypeInfo, v15);
    sub_1BC3008(&LocalizationManager_TypeInfo, v16);
    sub_1BC3008(&Method_SetRarityDialogControl__SetExceedMaterialInfo_b__144_0__, v17);
    sub_1BC3008(&StringLiteral_9155/*"NEED_QP"*/, v18);
    sub_1BC3008(&StringLiteral_3546/*"COMBINE_HAVE_QP"*/, v19);
    sub_1BC3008(&StringLiteral_3708/*"CONFIRM_COMBINE_MSG"*/, v20);
    sub_1BC3008(&StringLiteral_3545/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, v21);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v22);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v23);
    sub_1BC3008(&StringLiteral_3580/*"COMBINE_SPEND_QP"*/, v24);
    byte_4B06092 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v27);
  SetRarityDialogControl__DefaultBgSize(this, v28);
  exceedConfirmInfo = this->fields.exceedConfirmTitleLb;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  UILabel__set_text((UILabel_o *)exceedConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_41;
  UILabel__set_text(cancelBtnLb, (System_String_o *)exceedConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_41;
  UILabel__set_text(decideBtnLb, (System_String_o *)exceedConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v31);
  if ( !list )
    goto LABEL_41;
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  LODWORD(v32) = list->max_length;
  v33 = *((float *)exceedConfirmInfo + 12);
  if ( (int)v32 >= 1 )
  {
    v34 = 0LL;
    v35 = 0;
    do
    {
      if ( v35 )
        goto LABEL_41;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
      exceedConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !exceedConfirmInfo )
        goto LABEL_41;
      exceedConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)exceedConfirmInfo,
                            (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v34 >= list->max_length )
        sub_1BC326C(exceedConfirmInfo, v25, v38);
      if ( !exceedConfirmInfo )
        goto LABEL_41;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)exceedConfirmInfo,
        v34,
        baseData,
        list->m_Items[v34],
        0,
        0,
        0LL,
        v39);
      exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
      v32 = *(_QWORD *)&list->max_length;
      ++v34;
      v35 = exceedConfirmInfo == 0LL;
    }
    while ( (__int64)v34 < (int)v32 );
    if ( !exceedConfirmInfo )
      goto LABEL_41;
  }
  y = this->fields.center.fields.y;
  v41 = *((_DWORD *)exceedConfirmInfo + 11);
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  if ( v41 >= (int)v32 )
    v42 = v32;
  else
    v42 = v41;
  v43 = 55.0;
  if ( v41 >= (int)v32 )
    v43 = y;
  v45 = (float)(this->fields.center.fields.x - (float)((float)(v33 * 0.5) * (float)(v42 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)exceedConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v43 - 1),
    0LL);
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  v67.fields.x = 0.5;
  v67.fields.y = 0.5;
  v67.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)exceedConfirmInfo, v67, 0LL);
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  UIGrid__set_repositionNow((UIGrid_o *)exceedConfirmInfo, 1, 0LL);
  exceedConfirmSpendQpTxtLb = this->fields.exceedConfirmSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3580/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !exceedConfirmSpendQpTxtLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmSpendQpTxtLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmHaveQpTxtLb = this->fields.exceedConfirmHaveQpTxtLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3546/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !exceedConfirmHaveQpTxtLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmHaveQpTxtLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmSpendQpLb = this->fields.exceedConfirmSpendQpLb;
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  v66 = spendQp;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66, v50, v51, v52);
  exceedConfirmInfo = System_String__Format(v49, v53, 0LL);
  if ( !exceedConfirmSpendQpLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmSpendQpLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmHaveQpLb = this->fields.exceedConfirmHaveQpLb;
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  v65 = haveQp;
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v65, v56, v57, v58);
  exceedConfirmInfo = System_String__Format(v55, v59, 0LL);
  if ( !exceedConfirmHaveQpLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmHaveQpLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedMaterialMsgLb = this->fields.exceedMaterialMsgLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3545/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, 0LL);
  if ( !exceedMaterialMsgLb
    || (UILabel__set_text(exceedMaterialMsgLb, (System_String_o *)exceedConfirmInfo, 0LL),
        exceedConfirmMsgLb = this->fields.exceedConfirmMsgLb,
        exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3708/*"CONFIRM_COMBINE_MSG"*/, 0LL),
        !exceedConfirmMsgLb)
    || (UILabel__set_text(exceedConfirmMsgLb, (System_String_o *)exceedConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_41:
    sub_1BC3264(exceedConfirmInfo, v25);
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v63 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v63,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetExceedMaterialInfo_b__144_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 0, v63, 0LL, 0LL, v64);
  }
}


void __fastcall SetRarityDialogControl__SetFriendshipExceedInfo(
        SetRarityDialogControl_o *this,
        System_String_o *msg,
        int32_t spendQp,
        int64_t haveQp,
        const MethodInfo *method)
{
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
  UnityEngine_GameObject_o *friendshipExceedConfirmInfo; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  UILabel_o *cancelBtnLb; // x22
  UILabel_o *decideBtnLb; // x22
  UILabel_o *friendshipExceedSpendQpTxtLb; // x22
  UILabel_o *friendshipExceedHaveQpTxtLb; // x22
  UILabel_o *friendshipExceedSpendQpLb; // x22
  System_String_o *v28; // x23
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x0
  UILabel_o *friendshipExceedHaveQpLb; // x21
  System_String_o *v34; // x22
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x0
  UILabel_o *friendshipExceedMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v41; // x20
  const MethodInfo *v42; // x5
  int64_t v43; // [xsp+0h] [xbp-50h] BYREF
  int32_t v44; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B060A1 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, msg);
    sub_1BC3008(&int_TypeInfo, v9);
    sub_1BC3008(&long_TypeInfo, v10);
    sub_1BC3008(&LocalizationManager_TypeInfo, v11);
    sub_1BC3008(&Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__159_0__, v12);
    sub_1BC3008(&StringLiteral_9155/*"NEED_QP"*/, v13);
    sub_1BC3008(&StringLiteral_3546/*"COMBINE_HAVE_QP"*/, v14);
    sub_1BC3008(&StringLiteral_6465/*"FRIENDSHIP_EXCEED_SPEND_QP"*/, v15);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v16);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v17);
    sub_1BC3008(&StringLiteral_3716/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/, v18);
    byte_4B060A1 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v21);
  SetRarityDialogControl__DefaultBgSize(this, v22);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)this->fields.friendshipExceedTitleLb;
  if ( !friendshipExceedConfirmInfo )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)friendshipExceedConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0LL);
  if ( !cancelBtnLb )
    goto LABEL_21;
  UILabel__set_text(cancelBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0LL);
  if ( !decideBtnLb )
    goto LABEL_21;
  UILabel__set_text(decideBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedSpendQpTxtLb = this->fields.friendshipExceedSpendQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_6465/*"FRIENDSHIP_EXCEED_SPEND_QP"*/,
                                                              0LL);
  if ( !friendshipExceedSpendQpTxtLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedSpendQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedHaveQpTxtLb = this->fields.friendshipExceedHaveQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3546/*"COMBINE_HAVE_QP"*/,
                                                              0LL);
  if ( !friendshipExceedHaveQpTxtLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedHaveQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedSpendQpLb = this->fields.friendshipExceedSpendQpLb;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  v44 = spendQp;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v29, v30, v31);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v28, v32, 0LL);
  if ( !friendshipExceedSpendQpLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedSpendQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedHaveQpLb = this->fields.friendshipExceedHaveQpLb;
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  v43 = haveQp;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v43, v35, v36, v37);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v34, v38, 0LL);
  if ( !friendshipExceedHaveQpLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedHaveQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedMsgLb = this->fields.friendshipExceedMsgLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3716/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/,
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
    sub_1BC3264(friendshipExceedConfirmInfo, v19);
  }
  if ( combineRootComponent->fields.state == 12 )
  {
    v41 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v41,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__159_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v41, 0LL, 0LL, v42);
  }
}


void __fastcall SetRarityDialogControl__SetLimitUpInfo(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        CombineLimitUpWarningDialog_o *combineLimitUpWarningDialog,
        System_String_o *msg,
        int32_t spendQp,
        int64_t haveQp,
        const MethodInfo *method)
{
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
  __int64 v24; // x20
  UnityEngine_GameObject_o *limitUpConfirmInfo; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  UILabel_o *cancelBtnLb; // x23
  UILabel_o *decideBtnLb; // x23
  UILabel_o *limitUpConfirmSpendQpTxtLb; // x23
  UILabel_o *limitUpConfirmHaveQpTxtLb; // x23
  UILabel_o *limitUpConfirmSpendQpLb; // x23
  System_String_o *v41; // x24
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x0
  UILabel_o *limitUpConfirmHaveQpLb; // x22
  System_String_o *v47; // x23
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  Il2CppObject *v51; // x0
  UILabel_o *limitUpConfirmMsgLb; // x21
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v54; // x21
  const MethodInfo *v55; // x5
  int64_t v56; // [xsp+8h] [xbp-58h] BYREF
  int32_t v57; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B06097 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, baseData);
    sub_1BC3008(&int_TypeInfo, v13);
    sub_1BC3008(&long_TypeInfo, v14);
    sub_1BC3008(&LocalizationManager_TypeInfo, v15);
    sub_1BC3008(&Method_SetRarityDialogControl___c__DisplayClass149_0__SetLimitUpInfo_b__0__, v16);
    sub_1BC3008(&SetRarityDialogControl___c__DisplayClass149_0_TypeInfo, v17);
    sub_1BC3008(&StringLiteral_9155/*"NEED_QP"*/, v18);
    sub_1BC3008(&StringLiteral_3546/*"COMBINE_HAVE_QP"*/, v19);
    sub_1BC3008(&StringLiteral_3708/*"CONFIRM_COMBINE_MSG"*/, v20);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v21);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v22);
    sub_1BC3008(&StringLiteral_3580/*"COMBINE_SPEND_QP"*/, v23);
    byte_4B06097 = 1;
  }
  v24 = sub_1BC3254(SetRarityDialogControl___c__DisplayClass149_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_22;
  *(_QWORD *)(v24 + 16) = baseData;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v24 + 16), (int32_t)baseData, v27, v28);
  *(_QWORD *)(v24 + 24) = combineLimitUpWarningDialog;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v24 + 24), (int32_t)combineLimitUpWarningDialog, v29, v30);
  *(_QWORD *)(v24 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v24 + 32), (int32_t)this, v31, v32);
  SetRarityDialogControl__DisableConfirmInfo(this, v33);
  limitUpConfirmInfo = this->fields.limitUpConfirmInfo;
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0LL);
  limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v34);
  SetRarityDialogControl__DefaultBgSize(this, v35);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.limitUpTitleLb;
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)limitUpConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_22;
  UILabel__set_text(cancelBtnLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_22;
  UILabel__set_text(decideBtnLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmSpendQpTxtLb = this->fields.limitUpConfirmSpendQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3580/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !limitUpConfirmSpendQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmSpendQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmHaveQpTxtLb = this->fields.limitUpConfirmHaveQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3546/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !limitUpConfirmHaveQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmHaveQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmSpendQpLb = this->fields.limitUpConfirmSpendQpLb;
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  v57 = spendQp;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v42, v43, v44);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v41, v45, 0LL);
  if ( !limitUpConfirmSpendQpLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmSpendQpLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmHaveQpLb = this->fields.limitUpConfirmHaveQpLb;
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  v56 = haveQp;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v56, v48, v49, v50);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v47, v51, 0LL);
  if ( !limitUpConfirmHaveQpLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmHaveQpLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmMsgLb = this->fields.limitUpConfirmMsgLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3708/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !limitUpConfirmMsgLb
    || (UILabel__set_text(limitUpConfirmMsgLb, (System_String_o *)limitUpConfirmInfo, 0LL),
        (limitUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)limitUpConfirmInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 0, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_22:
    sub_1BC3264(limitUpConfirmInfo, v26);
  }
  if ( combineRootComponent->fields.state == 5 )
  {
    v54 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v54,
      (Il2CppObject *)v24,
      Method_SetRarityDialogControl___c__DisplayClass149_0__SetLimitUpInfo_b__0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v54, 0LL, 0LL, v55);
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  UnityEngine_GameObject_o *npUpConfirmInfo; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *npUpTitleLb; // x21
  System_String_o **v37; // x8
  UILabel_o *cancelBtnLb; // x21
  UILabel_o *decideBtnLb; // x21
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v41; // x20
  System_Action_o *v42; // x21
  const MethodInfo *v43; // x5
  SetRarityDialogControl_o *v44; // x0
  int32_t v45; // w1
  const MethodInfo *v46; // [xsp+0h] [xbp-70h]

  if ( (byte_4B0609A & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, baseData);
    sub_1BC3008(&LocalizationManager_TypeInfo, v17);
    sub_1BC3008(&Method_SetRarityDialogControl_DefaultBgSize__, v18);
    sub_1BC3008(&Method_SetRarityDialogControl__SetNpCombineInfo_b__152_0__, v19);
    sub_1BC3008(&Method_SetRarityDialogControl__SetNpCombineInfo_b__152_1__, v20);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v21);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v22);
    sub_1BC3008(&StringLiteral_3739/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/, v23);
    sub_1BC3008(&StringLiteral_3737/*"CONFIRM_TITLE_TD_COMBINE"*/, v24);
    byte_4B0609A = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  npUpConfirmInfo = this->fields.npUpConfirmInfo;
  if ( !npUpConfirmInfo )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0LL);
  this->fields.npBaseData = baseData;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.npBaseData, (int32_t)baseData, v27, v28);
  this->fields.npSelectMtUsrSvtIdList = selectUsrSvtIdList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.npSelectMtUsrSvtIdList, (int32_t)selectUsrSvtIdList, v29, v30);
  this->fields.npLvUpData = updata;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.npLvUpData, (int32_t)updata, v31, v32);
  this->fields.npIsExceedMaxLv = isExceedMaxLv;
  this->fields.npIsCombineSvt = isCombineSvt;
  this->fields.npIsExceededMaterial = isExceededMaterial;
  npUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !npUpConfirmInfo )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v33);
  SetRarityDialogControl__DefaultBgSize(this, v34);
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
    v46);
  npUpTitleLb = this->fields.npUpTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v37 = (System_String_o **)(reConfirmation ? &StringLiteral_3739/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/ : &StringLiteral_3737/*"CONFIRM_TITLE_TD_COMBINE"*/);
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(*v37, 0LL);
  if ( !npUpTitleLb )
    goto LABEL_27;
  UILabel__set_text(npUpTitleLb, (System_String_o *)npUpConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb
    || (UILabel__set_text(cancelBtnLb, (System_String_o *)npUpConfirmInfo, 0LL),
        decideBtnLb = this->fields.decideBtnLb,
        npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/,
                                                        0LL),
        !decideBtnLb)
    || (UILabel__set_text(decideBtnLb, (System_String_o *)npUpConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_27:
    sub_1BC3264(npUpConfirmInfo, v25);
  }
  if ( combineRootComponent->fields.state == 11 )
  {
    if ( (this->fields.npIsExceedMaxLv || this->fields.npIsCombineSvt || this->fields.npIsExceededMaterial)
      && !reConfirmation )
    {
      v41 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v41, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__152_0__, 0LL);
      v42 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v42, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
      v44 = this;
      v45 = 0;
    }
    else
    {
      v41 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v41, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__152_1__, 0LL);
      v42 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v42, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
      v45 = 8;
      v44 = this;
    }
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v44, v45, v41, 0LL, v42, v43);
  }
}


void __fastcall SetRarityDialogControl__SetSkillNpCombineInfo(
        SetRarityDialogControl_o *this,
        SetLevelUpData_array *upDataList,
        System_String_o *titleMsg,
        const MethodInfo *method)
{
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
  UnityEngine_GameObject_o *skillUpConfirmInfo; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  __int64 v25; // x2
  SetLevelUpData_o *v26; // x23
  signed int max_length; // w21
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  const MethodInfo *v34; // x3
  struct UILabel_o *upTargetSkillNameBef; // x22
  UnityEngine_GameObject_o *v36; // x21
  const MethodInfo *v37; // x3
  struct UILabel_o *upTargetSkillNameAft; // x22
  SetLevelUpData_o *v39; // x8
  UnityEngine_GameObject_o *v40; // x22
  const MethodInfo *v41; // x3
  SetLevelUpData_o *v42; // x8
  const MethodInfo *v43; // x3
  UnityEngine_GameObject_c *klass; // x8
  __int64 v45; // x20
  UIExtrusionLabel_o *currentLvLb; // x20
  UIExtrusionLabel_o *resLvLb; // x20
  UILabel_o *upSpendQpTxtLb; // x20
  UILabel_o *upHaveQpTxtLb; // x20
  UILabel_o *upSpendQpLb; // x20
  System_String_o *v51; // x21
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  Il2CppObject *v55; // x0
  UILabel_o *upHaveQpLb; // x20
  System_String_o *v57; // x21
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  Il2CppObject *v61; // x0
  UILabel_o *upConfirmMsgLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v66; // x20
  const MethodInfo *v67; // x5
  __int64 v68; // x0
  int64_t haveQp; // [xsp+0h] [xbp-50h] BYREF
  int32_t spendQp; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B06098 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, upDataList);
    sub_1BC3008(&int_TypeInfo, v7);
    sub_1BC3008(&long_TypeInfo, v8);
    sub_1BC3008(&LocalizationManager_TypeInfo, v9);
    sub_1BC3008(&Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__150_0__, v10);
    sub_1BC3008(&string___TypeInfo, v11);
    sub_1BC3008(&UILabel___TypeInfo, v12);
    sub_1BC3008(&StringLiteral_9155/*"NEED_QP"*/, v13);
    sub_1BC3008(&StringLiteral_3546/*"COMBINE_HAVE_QP"*/, v14);
    sub_1BC3008(&StringLiteral_3708/*"CONFIRM_COMBINE_MSG"*/, v15);
    sub_1BC3008(&StringLiteral_25140/*"】"*/, v16);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v17);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v18);
    sub_1BC3008(&StringLiteral_3580/*"COMBINE_SPEND_QP"*/, v19);
    sub_1BC3008(&StringLiteral_25135/*"【"*/, v20);
    byte_4B06098 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)upDataList);
  skillUpConfirmInfo = this->fields.skillUpConfirmInfo;
  if ( !skillUpConfirmInfo
    || (UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0LL),
        (skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0LL),
        SetRarityDialogControl__MoveAlpha(this, v23),
        SetRarityDialogControl__DefaultBgSize(this, v24),
        !upDataList) )
  {
LABEL_60:
    sub_1BC3264(skillUpConfirmInfo, v21);
  }
  if ( !upDataList->max_length )
    goto LABEL_61;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTitleLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  v26 = upDataList->m_Items[0];
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, titleMsg, 0LL);
  if ( !v26 )
    goto LABEL_60;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetRubyLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, v26->fields.targetRuby, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetNameLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  max_length = upDataList->max_length;
  skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  if ( max_length >= 2 )
  {
    UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 0, 0LL);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetSkillNameBef;
    if ( !skillUpConfirmInfo )
      goto LABEL_60;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
    if ( !skillUpConfirmInfo )
      goto LABEL_60;
    skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
    if ( !skillUpConfirmInfo )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0LL);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upSpendQpTxtLb;
    if ( !skillUpConfirmInfo )
      goto LABEL_60;
    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
    GameObjectExtensions__SetLocalPositionX(v32, 11.0, 0LL);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upHaveQpTxtLb;
    if ( !skillUpConfirmInfo )
      goto LABEL_60;
    v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
    GameObjectExtensions__SetLocalPositionX(v33, 11.0, 0LL);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1BC30B0(UILabel___TypeInfo, 2LL);
    if ( !skillUpConfirmInfo )
      goto LABEL_60;
    upTargetSkillNameBef = this->fields.upTargetSkillNameBef;
    v36 = skillUpConfirmInfo;
    if ( upTargetSkillNameBef )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1BC3144(
                                                         this->fields.upTargetSkillNameBef,
                                                         skillUpConfirmInfo->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_62;
    }
    if ( !LODWORD(v36[1].klass) )
      goto LABEL_61;
    v36[1].monitor = upTargetSkillNameBef;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v36[1].monitor, (int32_t)upTargetSkillNameBef, v25, v34);
    upTargetSkillNameAft = this->fields.upTargetSkillNameAft;
    if ( upTargetSkillNameAft )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1BC3144(
                                                         this->fields.upTargetSkillNameAft,
                                                         v36->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
      {
LABEL_62:
        v68 = sub_1BC3288(skillUpConfirmInfo);
        sub_1BC3130(v68, 0LL);
      }
    }
    if ( LODWORD(v36[1].klass) > 1 )
    {
      *(_QWORD *)&v36[1].fields.m_CachedPtr = upTargetSkillNameAft;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v36[1].fields, (int32_t)upTargetSkillNameAft, v25, v37);
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1BC30B0(string___TypeInfo, 2LL);
      if ( upDataList->max_length )
      {
        v39 = upDataList->m_Items[0];
        if ( !v39 )
          goto LABEL_60;
        v40 = skillUpConfirmInfo;
        skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Concat_62388900(
                                                           (System_String_o *)StringLiteral_25135/*"【"*/,
                                                           v39->fields.displayText,
                                                           (System_String_o *)StringLiteral_25140/*"】"*/,
                                                           v39->fields.targetName,
                                                           0LL);
        if ( !v40 )
          goto LABEL_60;
        if ( LODWORD(v40[1].klass) )
        {
          v40[1].monitor = skillUpConfirmInfo;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v40[1].monitor, (int32_t)skillUpConfirmInfo, v25, v41);
          if ( upDataList->max_length > 1 )
          {
            v42 = upDataList->m_Items[1];
            if ( !v42 )
              goto LABEL_60;
            skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Concat_62388900(
                                                               (System_String_o *)StringLiteral_25135/*"【"*/,
                                                               v42->fields.displayText,
                                                               (System_String_o *)StringLiteral_25140/*"】"*/,
                                                               v42->fields.targetName,
                                                               0LL);
            if ( LODWORD(v40[1].klass) > 1 )
            {
              *(_QWORD *)&v40[1].fields.m_CachedPtr = skillUpConfirmInfo;
              sub_1BC2FAC((CGThumbnailListItem_o *)&v40[1].fields, (int32_t)skillUpConfirmInfo, v25, v43);
              klass = v36[1].klass;
              if ( (int)klass < 1 )
                goto LABEL_45;
              v45 = 0LL;
              while ( (unsigned int)v45 < (unsigned int)klass && (unsigned int)v45 < LODWORD(v40[1].klass) )
              {
                skillUpConfirmInfo = (UnityEngine_GameObject_o *)*((_QWORD *)&v36[1].monitor + v45);
                if ( !skillUpConfirmInfo )
                  goto LABEL_60;
                UILabel__set_text((UILabel_o *)skillUpConfirmInfo, *((System_String_o **)&v40[1].monitor + v45), 0LL);
                klass = v36[1].klass;
                if ( (int)++v45 >= (int)klass )
                  goto LABEL_45;
              }
            }
          }
        }
      }
    }
LABEL_61:
    sub_1BC326C(skillUpConfirmInfo, v21, v25);
  }
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetNameLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, v26->fields.targetName, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetSkillNameBef;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v28, 0LL);
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 0, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upSpendQpTxtLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v29, -5.0, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upHaveQpTxtLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_60;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v30, -5.0, 0LL);
LABEL_45:
  currentLvLb = this->fields.currentLvLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v26 + 64, 0LL);
  if ( !currentLvLb )
    goto LABEL_60;
  UIExtrusionLabel__set_text(currentLvLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  resLvLb = this->fields.resLvLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v26 + 68, 0LL);
  if ( !resLvLb )
    goto LABEL_60;
  UIExtrusionLabel__set_text(resLvLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3580/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !upSpendQpTxtLb )
    goto LABEL_60;
  UILabel__set_text(upSpendQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3546/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !upHaveQpTxtLb )
    goto LABEL_60;
  UILabel__set_text(upHaveQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upSpendQpLb = this->fields.upSpendQpLb;
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  spendQp = v26->fields.spendQp;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendQp, v52, v53, v54);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v51, v55, 0LL);
  if ( !upSpendQpLb )
    goto LABEL_60;
  UILabel__set_text(upSpendQpLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upHaveQpLb = this->fields.upHaveQpLb;
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  haveQp = v26->fields.haveQp;
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &haveQp, v58, v59, v60);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v57, v61, 0LL);
  if ( !upHaveQpLb )
    goto LABEL_60;
  UILabel__set_text(upHaveQpLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upConfirmMsgLb = this->fields.upConfirmMsgLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3708/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !upConfirmMsgLb )
    goto LABEL_60;
  UILabel__set_text(upConfirmMsgLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_60;
  UILabel__set_text(cancelBtnLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_60;
  UILabel__set_text(decideBtnLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_60;
  if ( combineRootComponent->fields.state == 10 )
  {
    v66 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v66,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__150_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v66, 0LL, 0LL, v67);
  }
}


void __fastcall SetRarityDialogControl__SetSpecialAscension(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        bool confirm,
        bool warning1,
        bool warning2,
        const MethodInfo *method)
{
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
  UnityEngine_GameObject_o *specialAscensionConfirmInfo; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  System_String_o *v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  System_Action_o *v30; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v32; // x21
  const MethodInfo *v33; // x5
  SetRarityDialogControl_o *v34; // x0
  int32_t v35; // w1

  if ( (byte_4B060A2 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, baseData);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___, v10);
    sub_1BC3008(&LocalizationManager_TypeInfo, v11);
    sub_1BC3008(&Method_SetRarityDialogControl__SetSpecialAscension_b__160_0__, v12);
    sub_1BC3008(&Method_SetRarityDialogControl__SetSpecialAscension_b__160_1__, v13);
    sub_1BC3008(&Method_SetRarityDialogControl__SetSpecialAscension_b__160_2__, v14);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v15);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v16);
    sub_1BC3008(&StringLiteral_12150/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/, v17);
    sub_1BC3008(&StringLiteral_12154/*"SPECIAL_ASCENSION_WARNING1_TXT"*/, v18);
    sub_1BC3008(&StringLiteral_12155/*"SPECIAL_ASCENSION_WARNING2_TXT"*/, v19);
    sub_1BC3008(&StringLiteral_1/*""*/, v20);
    byte_4B060A2 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v23);
  SetRarityDialogControl__DefaultBgSize(this, v24);
  this->fields.specialAscensionConfirm = confirm;
  this->fields.specialAscensionWarning1 = warning1;
  this->fields.specialAscensionWarning2 = warning2;
  if ( confirm )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12150/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/, 0LL);
    this->fields.specialAscensionConfirm = 0;
  }
  else if ( warning1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12154/*"SPECIAL_ASCENSION_WARNING1_TXT"*/, 0LL);
    this->fields.specialAscensionWarning1 = 0;
  }
  else if ( warning2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12155/*"SPECIAL_ASCENSION_WARNING2_TXT"*/, 0LL);
    this->fields.specialAscensionWarning2 = 0;
  }
  else
  {
    v25 = (System_String_o *)StringLiteral_1/*""*/;
  }
  specialAscensionConfirmInfo = this->fields.specialAscensionConfirmInfo;
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              specialAscensionConfirmInfo,
                                                              (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___);
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  SpecialAscensionConfirmInfo__SetSpecialAscensionConfirmInfo(
    (SpecialAscensionConfirmInfo_o *)specialAscensionConfirmInfo,
    v25,
    v26,
    v27);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0LL);
  if ( !cancelBtnLb )
    goto LABEL_37;
  UILabel__set_text(cancelBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0LL);
  if ( !decideBtnLb
    || (UILabel__set_text(decideBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0LL),
        (specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (specialAscensionConfirmInfo = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)specialAscensionConfirmInfo,
                                        0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 0, 0LL),
        v30 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo),
        System_Action___ctor(
          v30,
          (Il2CppObject *)this,
          Method_SetRarityDialogControl__SetSpecialAscension_b__160_0__,
          0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_37:
    sub_1BC3264(specialAscensionConfirmInfo, v21);
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
      v32 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        v32,
        (Il2CppObject *)this,
        Method_SetRarityDialogControl__SetSpecialAscension_b__160_1__,
        0LL);
      v35 = 8;
      v34 = this;
      goto LABEL_35;
    }
    v32 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v32, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__160_2__, 0LL);
    v34 = this;
    v35 = 0;
LABEL_35:
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v34, v35, v32, v30, 0LL, v33);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine(
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
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  UnityEngine_GameObject_o *allDispConfirmInfo; // x0
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1
  UILabel_o *cancelBtnLb; // x26
  UILabel_o *decideBtnLb; // x26
  const MethodInfo *v41; // x1
  struct System_Collections_Generic_Dictionary_TKey__TValue__o *v42; // x22
  struct UIGrid_o *allSvtGrid; // x8
  float v44; // s9
  int32_t v45; // w26
  __int64 v46; // x1
  UnityEngine_Component_o *v47; // x0
  char value; // w20
  Il2CppObject *key; // x27
  UnityEngine_GameObject_o *svtFaceInfo; // x28
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v53; // x1
  Il2CppObject *Component_object; // x0
  __int64 v55; // x1
  float y; // s8
  int32_t Count; // w25
  struct UIGrid_o *v58; // x8
  int32_t maxPerLine; // w20
  int32_t v60; // w24
  int32_t v61; // w10
  float v62; // s1
  float z; // s2
  float v64; // s0
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v68; // x25
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  Il2CppObject *v72; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v74; // x24
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  Il2CppObject *v78; // x0
  UILabel_o *allRareMsgLb; // x20
  UILabel_o *allLimitRareLb; // x20
  UILabel_o *allRareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v83; // x20
  const MethodInfo *v84; // x5
  const MethodInfo *v85; // [xsp+0h] [xbp-F0h]
  int32_t v87; // [xsp+20h] [xbp-D0h]
  int32_t v88; // [xsp+24h] [xbp-CCh] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v89; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v90; // [xsp+50h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B0609D & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, baseData);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__, v20);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v21);
    sub_1BC3008(&int_TypeInfo, v22);
    sub_1BC3008(&long_TypeInfo, v23);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__, v24);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__, v25);
    sub_1BC3008(&LocalizationManager_TypeInfo, v26);
    sub_1BC3008(&Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__155_0__, v27);
    sub_1BC3008(&StringLiteral_9155/*"NEED_QP"*/, v28);
    sub_1BC3008(&StringLiteral_3546/*"COMBINE_HAVE_QP"*/, v29);
    sub_1BC3008(&StringLiteral_3708/*"CONFIRM_COMBINE_MSG"*/, v30);
    sub_1BC3008(&StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, v31);
    sub_1BC3008(&StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, v32);
    sub_1BC3008(&StringLiteral_10864/*"RARE_MATERIAL_INFO_MSG"*/, v33);
    sub_1BC3008(&StringLiteral_3580/*"COMBINE_SPEND_QP"*/, v34);
    byte_4B0609D = 1;
  }
  memset(&v90, 0, sizeof(v90));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  v87 = spendQp;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v37);
  SetRarityDialogControl__DefaultBgSize(this, v38);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allTitleLb;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UILabel__set_text((UILabel_o *)allDispConfirmInfo, title, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3647/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_69;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3649/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_69;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v41);
  if ( !selectedList )
    goto LABEL_69;
  v42 = (struct System_Collections_Generic_Dictionary_TKey__TValue__o *)haveQp;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_333F98C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allSvtGrid = this->fields.allSvtGrid;
  if ( !allSvtGrid )
    goto LABEL_69;
  v44 = allSvtGrid->fields.cellWidth * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v89,
    selectedList,
    (const MethodInfo_33400E0 *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v45 = 0;
  v90 = v89;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v90,
            (const MethodInfo_34603F4 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v47 = (UnityEngine_Component_o *)this->fields.allSvtGrid;
    if ( !v47 )
      sub_1BC3264(0LL, v46);
    key = v90.fields._current.fields.key;
    value = (char)v90.fields._current.fields.value;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v47, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Object )
      sub_1BC3264(0LL, v53);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_object )
      sub_1BC3264(0LL, v55);
    MaterialSvtInfo__setMaterialSvtInfo_47689820(
      (MaterialSvtInfo_o *)Component_object,
      v45++,
      baseData,
      (int64_t)key,
      0,
      0,
      value != 0,
      0LL,
      v85);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v90,
    (const MethodInfo_3460510 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_333F98C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_333F98C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v58 = this->fields.allSvtGrid;
  if ( !v58 )
    goto LABEL_69;
  maxPerLine = v58->fields.maxPerLine;
  v60 = (int)allDispConfirmInfo;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this->fields.allSvtGrid,
                                                     0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  if ( v60 <= maxPerLine )
    v61 = Count;
  else
    v61 = maxPerLine;
  v62 = 70.0;
  if ( v60 <= maxPerLine )
    v62 = y;
  z = this->fields.center.fields.z;
  v64 = (float)(this->fields.center.fields.x - (float)(v44 * (float)(v61 - 1))) * 0.47;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v62 - 1),
    0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)allDispConfirmInfo,
                                                     0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  v91.fields.x = 0.47;
  v91.fields.y = 0.47;
  v91.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v91, 0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UIGrid__set_repositionNow((UIGrid_o *)allDispConfirmInfo, 1, 0LL);
  allSpendQpTxtLb = this->fields.allSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3580/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !allSpendQpTxtLb )
    goto LABEL_69;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3546/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !allHaveQpTxtLb )
    goto LABEL_69;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allSpendQpLb = this->fields.allSpendQpLb;
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  v88 = v87;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v88, v69, v70, v71);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v68, v72, 0LL);
  if ( !allSpendQpLb )
    goto LABEL_69;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpLb = this->fields.allHaveQpLb;
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_9155/*"NEED_QP"*/, 0LL);
  v89.fields._dictionary = v42;
  v78 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v89, v75, v76, v77);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v74, v78, 0LL);
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10864/*"RARE_MATERIAL_INFO_MSG"*/,
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10864/*"RARE_MATERIAL_INFO_MSG"*/,
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
    sub_1BC3264(allDispConfirmInfo, v35);
  }
LABEL_59:
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3708/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !allRareConfirmMsgLb )
    goto LABEL_69;
  UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_69;
  if ( combineRootComponent->fields.state == 4 )
  {
    v83 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v83,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__155_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v83, 0LL, 0LL, v84);
  }
}


void __fastcall SetRarityDialogControl___SetAllDispConfirmCombine_b__147_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BC3264(0LL, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmCombine_b__145_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BC3264(0LL, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__153_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BC3264(0LL, method);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__153_1(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.lvExceedCtr) == 0LL )
    sub_1BC3264(this, method);
  LevelExceedControl__OnClickCheckLvExceed((LevelExceedControl_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__154_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BC3264(0LL, method);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmRarityInfo_b__143_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BC3264(0LL, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmSvtEqCombine_b__146_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BC3264(0LL, method);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetExceedMaterialInfo_b__144_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.svtCombineCtr) == 0LL )
    sub_1BC3264(this, method);
  ServantCombineControl__CheckRareSvt((ServantCombineControl_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetFriendshipExceedInfo_b__159_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BC3264(0LL, method);
  CombineRootComponent__RequestFriendshipExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetNpCombineInfo_b__152_0(
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


void __fastcall SetRarityDialogControl___SetNpCombineInfo_b__152_1(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BC3264(0LL, method);
  CombineRootComponent__RequestTdCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetSkillNpCombineInfo_b__150_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BC3264(0LL, method);
  CombineRootComponent__RequestSkillCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__160_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8
  struct SpecialAscensionControl_o *specialAscensionCtr; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (specialAscensionCtr = combineRootComponent->fields.specialAscensionCtr) == 0LL )
    sub_1BC3264(this, method);
  if ( specialAscensionCtr->fields.pushExeButton )
    specialAscensionCtr->fields.pushExeButton = 0;
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__160_1(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v12; // x21
  System_Action_o *v13; // x22

  if ( (byte_4B060AA & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&CombineRootComponent_TypeInfo, v3);
    sub_1BC3008(&LocalizationManager_TypeInfo, v4);
    sub_1BC3008(&Method_SetRarityDialogControl__SetSpecialAscension_b__160_3__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BC3008(&StringLiteral_12152/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, v7);
    sub_1BC3008(&StringLiteral_1/*""*/, v8);
    byte_4B060AA = 1;
  }
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
  if ( CombineRootComponent__IsEnableSpecialAscension(0LL) )
  {
    combineRootComponent = this->fields.combineRootComponent;
    if ( combineRootComponent )
    {
      CombineRootComponent__RequestSpecialAscension(combineRootComponent, 0LL);
      return;
    }
LABEL_12:
    sub_1BC3264(combineRootComponent, v9);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12152/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0LL);
  v13 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__160_3__, 0LL);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v12,
    v13,
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
    0,
    0LL);
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__160_2(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserServantEntity_o *v9; // x1
  const MethodInfo *v10; // x5
  Il2CppObject *Instance; // x20
  System_String_o *v12; // x21
  System_Action_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B060AB & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&CombineRootComponent_TypeInfo, v3);
    sub_1BC3008(&LocalizationManager_TypeInfo, v4);
    sub_1BC3008(&Method_SetRarityDialogControl__SetSpecialAscension_b__160_4__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BC3008(&StringLiteral_12152/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, v7);
    sub_1BC3008(&StringLiteral_1/*""*/, v8);
    byte_4B060AB = 1;
  }
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
  if ( CombineRootComponent__IsEnableSpecialAscension(0LL) )
  {
    SetRarityDialogControl__SetSpecialAscension(
      this,
      v9,
      this->fields.specialAscensionConfirm,
      this->fields.specialAscensionWarning1,
      this->fields.specialAscensionWarning2,
      v10);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12152/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0LL);
    v13 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__160_4__, 0LL);
    if ( !Instance )
      sub_1BC3264(v14, v15);
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v12,
      v13,
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
      0,
      0LL);
  }
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__160_3(
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
    sub_1BC3264(this, method);
  }
  CombineRootComponent__BackSpecialAscension((CombineRootComponent_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__160_4(
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
    sub_1BC3264(this, method);
  }
  CombineRootComponent__BackSpecialAscension((CombineRootComponent_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetSvtEqLimitUpConfirmCombine_b__155_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1BC3264(0LL, method);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B060AC & 1) == 0 )
  {
    sub_1BC3008(&SetRarityDialogControl___c_TypeInfo, v1);
    byte_4B060AC = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(SetRarityDialogControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SetRarityDialogControl___c_TypeInfo->static_fields->__9 = (struct SetRarityDialogControl___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)SetRarityDialogControl___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall SetRarityDialogControl___c___ctor(SetRarityDialogControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SetRarityDialogControl___c___OnClickDlgOk_b__167_0(
        SetRarityDialogControl___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall SetRarityDialogControl___c___SetLimitUpInfo_b__149_1(
        SetRarityDialogControl___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  return NpCombineControl__CheckConfirm_47343680(x, 0LL);
}


void __fastcall SetRarityDialogControl___c__DisplayClass149_0___ctor(
        SetRarityDialogControl___c__DisplayClass149_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SetRarityDialogControl___c__DisplayClass149_0___SetLimitUpInfo_b__0(
        SetRarityDialogControl___c__DisplayClass149_0_o *this,
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
  System_Collections_Generic_List_object__o *v16; // x20
  __int64 v17; // x1
  NetworkManager_c *v18; // x0
  int64_t userIdNumber; // x25
  int64_t Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x8
  int64_t v24; // x21
  unsigned __int64 v25; // x26
  __int64 v26; // x22
  __int128 v27; // q0
  __int64 v28; // x23
  __int64 v29; // x24
  struct UserServantEntity_o *baseData; // x8
  int v31; // w23
  __int128 v32; // q0
  struct UserServantEntity_o *v33; // x8
  __int128 v34; // q0
  int64_t v35; // x23
  const MethodInfo *v36; // x3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Predicate_object__o *v41; // x21
  Il2CppObject *v42; // x22
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  CombineLimitUpWarningDialog_ClickDelegate_o *_9__2; // x21
  CombineLimitUpWarningDialog_o *combineLimitUpWarningDialog; // x20
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct SetRarityDialogControl_o *_4__this; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4B060AD & 1) == 0 )
  {
    sub_1BC3008(&CombineLimitUpWarningDialog_ClickDelegate_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v6);
    sub_1BC3008(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v7);
    sub_1BC3008(&NetworkManager_TypeInfo, v8);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1BC3008(&System_Predicate_UserServantEntity__TypeInfo, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BC3008(&Method_SetRarityDialogControl___c__SetLimitUpInfo_b__149_1__, v13);
    sub_1BC3008(&Method_SetRarityDialogControl___c__DisplayClass149_0__SetLimitUpInfo_b__2__, v14);
    sub_1BC3008(&SetRarityDialogControl___c_TypeInfo, v15);
    byte_4B060AD = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v17);
    byte_4AFC1F1 = 1;
  }
  v18 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v18 = NetworkManager_TypeInfo;
  }
  userIdNumber = v18->static_fields->userIdNumber;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_51;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_51;
  v23 = *(_QWORD *)(Instance + 24);
  v24 = Instance;
  if ( (int)v23 >= 1 )
  {
    v25 = 0LL;
    do
    {
      if ( v25 >= (unsigned int)v23 )
        sub_1BC326C(Instance, v21, v22);
      v26 = *(_QWORD *)(v24 + 32 + 8 * v25);
      if ( v26 )
      {
        v27 = *(_OWORD *)(v26 + 64);
        *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)(v26 + 48);
        *(_OWORD *)&v54.fields.fakeValue = v27;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v53 = v54;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v53, 0LL);
        if ( Instance == userIdNumber )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v26, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v29 = *(_QWORD *)(v26 + 80);
            v28 = *(_QWORD *)(v26 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v55.fields.currentCryptoKey = v29;
            *(_QWORD *)&v55.fields.fakeValue = v28;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v55, 0LL);
            baseData = this->fields.baseData;
            if ( !baseData )
              goto LABEL_51;
            v31 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(baseData->fields.svtId, 0LL);
            if ( v31 == (_DWORD)Instance )
            {
              v32 = *(_OWORD *)(v26 + 32);
              *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)(v26 + 16);
              *(_OWORD *)&v54.fields.fakeValue = v32;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v52 = v54;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v52, 0LL);
              v33 = this->fields.baseData;
              if ( !v33 )
                goto LABEL_51;
              v34 = *(_OWORD *)&v33->fields.id.fields.fakeValue;
              v35 = Instance;
              *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&v33->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v51.fields.fakeValue = v34;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v51, 0LL);
              if ( v35 != Instance )
              {
                if ( !v16 )
                  goto LABEL_51;
                items = v16->fields._items;
                v38 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v16->fields._version;
                if ( !items )
                  goto LABEL_51;
                size = v16->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v16,
                    (Il2CppObject *)v26,
                    *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                }
                else
                {
                  v40 = &items->obj.klass + size;
                  v16->fields._size = size + 1;
                  v40[4] = (Il2CppClass *)v26;
                  sub_1BC2FAC((CGThumbnailListItem_o *)(v40 + 4), v26, v22, v36);
                }
              }
            }
          }
        }
      }
      LODWORD(v23) = *(_DWORD *)(v24 + 24);
    }
    while ( (__int64)++v25 < (int)v23 );
  }
  Instance = (int64_t)SetRarityDialogControl___c_TypeInfo;
  if ( !SetRarityDialogControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo);
    Instance = (int64_t)SetRarityDialogControl___c_TypeInfo;
  }
  v41 = *(System_Predicate_object__o **)(*(_QWORD *)(Instance + 184) + 8LL);
  if ( !v41 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (int64_t)SetRarityDialogControl___c_TypeInfo;
    }
    v42 = **(Il2CppObject ***)(Instance + 184);
    v41 = (System_Predicate_object__o *)sub_1BC3254(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_object____ctor(v41, v42, Method_SetRarityDialogControl___c__SetLimitUpInfo_b__149_1__, 0LL);
    static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
    static_fields->__9__149_1 = (struct System_Predicate_UserServantEntity__o *)v41;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__149_1, (int32_t)v41, v44, v45);
  }
  if ( !v16 )
    goto LABEL_51;
  Instance = (int64_t)System_Collections_Generic_List_object___Find(
                        v16,
                        (System_Predicate_T__o *)v41,
                        (const MethodInfo_36A14A8 *)Method_System_Collections_Generic_List_UserServantEntity__Find__);
  if ( Instance )
  {
    _9__2 = this->fields.__9__2;
    combineLimitUpWarningDialog = this->fields.combineLimitUpWarningDialog;
    if ( !_9__2 )
    {
      _9__2 = (CombineLimitUpWarningDialog_ClickDelegate_o *)sub_1BC3254(CombineLimitUpWarningDialog_ClickDelegate_TypeInfo);
      CombineLimitUpWarningDialog_ClickDelegate___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_SetRarityDialogControl___c__DisplayClass149_0__SetLimitUpInfo_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v48, v49);
    }
    if ( combineLimitUpWarningDialog )
    {
      CombineLimitUpWarningDialog__Open(combineLimitUpWarningDialog, _9__2, 0LL);
      return;
    }
LABEL_51:
    sub_1BC3264(Instance, v21);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_51;
  Instance = (int64_t)_4__this->fields.combineRootComponent;
  if ( !Instance )
    goto LABEL_51;
  CombineRootComponent__RequestLimitUp((CombineRootComponent_o *)Instance, 0LL);
}


void __fastcall SetRarityDialogControl___c__DisplayClass149_0___SetLimitUpInfo_b__2(
        SetRarityDialogControl___c__DisplayClass149_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct SetRarityDialogControl_o *_4__this; // x8

  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (this = (SetRarityDialogControl___c__DisplayClass149_0_o *)_4__this->fields.combineRootComponent) == 0LL )
    {
      sub_1BC3264(this, isDecide);
    }
    CombineRootComponent__RequestLimitUp((CombineRootComponent_o *)this, 0LL);
  }
}


void __fastcall SetRarityDialogControl___c__DisplayClass151_0___ctor(
        SetRarityDialogControl___c__DisplayClass151_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SetRarityDialogControl___c__DisplayClass151_0___SetAppendSkillCombineInfo_b__0(
        SetRarityDialogControl___c__DisplayClass151_0_o *this,
        const MethodInfo *method)
{
  struct SetRarityDialogControl_o *_4__this; // x8
  CombineRootComponent_o *combineRootComponent; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (combineRootComponent = _4__this->fields.combineRootComponent) == 0LL )
    sub_1BC3264(this, method);
  CombineRootComponent__RequestAppendSkillCombine(combineRootComponent, !this->fields.isOpen, 0LL);
}