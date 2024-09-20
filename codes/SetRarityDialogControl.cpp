void __fastcall SetRarityDialogControl___cctor(const MethodInfo *method)
{
  if ( (byte_4A5ECEB & 1) == 0 )
  {
    sub_1B885B0(&SetRarityDialogControl_TypeInfo);
    byte_4A5ECEB = 1;
  }
  *SetRarityDialogControl_TypeInfo->static_fields = (struct SetRarityDialogControl_StaticFields)xmmword_BB5260;
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
  __int64 v4; // x8
  unsigned __int64 v5; // x21
  int64_t v6; // x20

  if ( (byte_4A5ECEA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (SetRarityDialogControl_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5ECEA = 1;
  }
  if ( selectedList )
  {
    v4 = *(_QWORD *)&selectedList->max_length;
    if ( v4 )
    {
      if ( (int)v4 >= 1 )
      {
        v5 = 0LL;
        do
        {
          if ( v5 >= (unsigned int)v4 )
            sub_1B88814(this, selectedList);
          v6 = selectedList->m_Items[v5];
          this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SetRarityDialogControl_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
            if ( this )
            {
              this = (SetRarityDialogControl_o *)DataMasterBase_object__object__long___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   v6,
                                                   (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              if ( this )
                goto LABEL_11;
            }
          }
          sub_1B8880C(this, selectedList);
LABEL_11:
          if ( SLODWORD(this->fields.confirmSpendQpLb) > 0 )
            break;
          LODWORD(v4) = selectedList->max_length;
          ++v5;
        }
        while ( (__int64)v5 < (int)v4 );
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
  int32_t adjustHp; // w24
  int32_t adjustAtk; // w23
  __int64 v11; // x1
  _BOOL8 IsStatusUp; // x0
  __int64 v13; // x8
  unsigned __int64 v14; // x27
  int v15; // w26
  int v16; // w24
  int64_t v17; // x22
  UserServantEntity_o *v18; // x22
  System_String_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int v22; // w21
  System_String_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int v26; // w8
  System_String_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v31; // [xsp+0h] [xbp-80h]
  int32_t secondMaxAdjustAtk[2]; // [xsp+8h] [xbp-78h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+10h] [xbp-70h] BYREF
  int32_t atkUp[2]; // [xsp+18h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_4A5ECD8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12262/*"STATUS_HP_OVER_DIALOG_MSG"*/);
    sub_1B885B0(&StringLiteral_12261/*"STATUS_ATK_OVER_DIALOG_MSG"*/);
    sub_1B885B0(&StringLiteral_12263/*"STATUS_OVER_DIALOG_MSG"*/);
    this = (SetRarityDialogControl_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ECD8 = 1;
  }
  if ( !baseData )
LABEL_36:
    sub_1B8880C(this, baseData);
  adjustHp = baseData->fields.adjustHp;
  adjustAtk = baseData->fields.adjustAtk;
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)atkUp = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  *labelMsg = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)labelMsg,
    (int32_t)StringLiteral_1/*""*/,
    (int32_t)selectUsrSvtIdList,
    (int32_t)labelMsg);
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
    v13 = *(_QWORD *)&selectUsrSvtIdList->max_length;
    if ( (int)v13 < 1 )
    {
      v22 = 0;
    }
    else
    {
      v31 = adjustHp;
      v14 = 0LL;
      v15 = 0;
      v16 = 0;
      do
      {
        if ( v14 >= (unsigned int)v13 )
          sub_1B88814(IsStatusUp, v11);
        v17 = selectUsrSvtIdList->m_Items[v14];
        this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_36;
        this = (SetRarityDialogControl_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !this )
          goto LABEL_36;
        this = (SetRarityDialogControl_o *)DataMasterBase_object__object__long___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             v17,
                                             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !this )
          goto LABEL_36;
        v18 = (UserServantEntity_o *)this;
        IsStatusUp = UserServantEntity__IsStatusUp((UserServantEntity_o *)this, 0LL);
        if ( IsStatusUp )
        {
          *(_QWORD *)atkUp = 0LL;
          UserServantEntity__getStatusUpInfo(v18, &atkUp[1], atkUp, 0LL);
          v15 += atkUp[1] & ~(atkUp[1] >> 31);
          v16 += atkUp[0] & ~(atkUp[0] >> 31);
        }
        LODWORD(v13) = selectUsrSvtIdList->max_length;
        ++v14;
      }
      while ( (__int64)v14 < (int)v13 );
      if ( v15 < 1 || UserServantEntity__isAdjustHpMax(baseData, 0LL) || v15 + v31 <= maxAjustAtk[1] )
      {
        v22 = 0;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12262/*"STATUS_HP_OVER_DIALOG_MSG"*/, 0LL);
        *labelMsg = v19;
        sub_1B88554((ServantStatusBattleListViewItem_o *)labelMsg, (int32_t)v19, v20, v21);
        v22 = 1;
      }
      if ( v16 >= 1 && !UserServantEntity__isAdjustAtkMax(baseData, 0LL) && v16 + adjustAtk > maxAjustAtk[0] )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_12261/*"STATUS_ATK_OVER_DIALOG_MSG"*/, 0LL);
        *labelMsg = v23;
        sub_1B88554((ServantStatusBattleListViewItem_o *)labelMsg, (int32_t)v23, v24, v25);
        v26 = 1;
        goto LABEL_30;
      }
    }
    v26 = 0;
LABEL_30:
    if ( (v26 & v22) != 0 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12263/*"STATUS_OVER_DIALOG_MSG"*/, 0LL);
      *labelMsg = v27;
      sub_1B88554((ServantStatusBattleListViewItem_o *)labelMsg, (int32_t)v27, v28, v29);
    }
    LOBYTE(IsStatusUp) = 1;
  }
  return IsStatusUp;
}


void __fastcall SetRarityDialogControl__Close(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  SetRarityDialogControl_c *v4; // x8
  UnityEngine_GameObject_o *v5; // x20
  __int64 transform; // x0
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *v8; // x0
  struct SetRarityDialogControl_StaticFields *static_fields; // x8
  TweenScale_o *v10; // x20
  UnityEngine_GameObject_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_Transform_o *v17; // x20
  UnityEngine_Transform_o *v18; // x0
  UnityEngine_Vector3_o v19; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4A5ECE5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SetRarityDialogControl_TypeInfo);
    sub_1B885B0(&StringLiteral_5950/*"EndCloseDlg"*/);
    sub_1B885B0(&StringLiteral_5341/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/);
    byte_4A5ECE5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v4 = SetRarityDialogControl_TypeInfo;
  v5 = gameObject;
  if ( !SetRarityDialogControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl_TypeInfo);
    v4 = SetRarityDialogControl_TypeInfo;
  }
  transform = (__int64)TweenAlpha__Begin(v5, v4->static_fields->CLOSE_TIME, 0.0, 0LL);
  if ( !transform )
    goto LABEL_26;
  *(_DWORD *)(transform + 32) = 6;
  v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  static_fields = SetRarityDialogControl_TypeInfo->static_fields;
  v19.fields.x = static_fields->DIALOG_CLOSE_SCALE;
  v19.fields.y = v19.fields.x;
  v19.fields.z = v19.fields.x;
  v10 = TweenScale__Begin(v8, static_fields->CLOSE_TIME, v19, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    if ( !v10 )
      goto LABEL_26;
    v10->fields.method = 6;
    v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v10->fields.eventReceiver = v11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.eventReceiver, (int32_t)v11, v12, v13);
    v14 = StringLiteral_5950/*"EndCloseDlg"*/;
    v10->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5950/*"EndCloseDlg"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.callWhenFinished, v14, v15, v16);
  }
  else
  {
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_26;
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    v17 = (UnityEngine_Transform_o *)transform;
    if ( !byte_4A55CE1 )
    {
      transform = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    if ( !v17 )
      goto LABEL_26;
    UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  }
  transform = (__int64)this->fields.npUpConfirmInfo;
  if ( !transform )
    goto LABEL_26;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0LL) )
  {
    transform = (__int64)this->fields.npUpInfoComp;
    if ( !transform )
      goto LABEL_26;
    NpUpConfirmComponent__DestroySvtInfo((NpUpConfirmComponent_o *)transform, v7);
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
    sub_1B8880C(transform, v7);
  }
  UIGrid__RemoveAllChild((UIGrid_o *)transform, 0LL);
  v18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__RemoveBackBtn_41946456(v18, (System_String_o *)StringLiteral_5341/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0LL);
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
    sub_1B8880C(decideBtnLb, method);
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
    sub_1B8880C(rariryConfirmInfo, method);
  }
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0LL);
}


void __fastcall SetRarityDialogControl__EndCloseDlg(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *onClickDlgCloseCallBack; // x19

  onClickDlgCloseCallBack = this->fields.onClickDlgCloseCallBack;
  this->fields.onClickDlgCloseCallBack = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClickDlgCloseCallBack, 0, v2, v3);
  if ( onClickDlgCloseCallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClickDlgCloseCallBack->fields.m_target)(
      onClickDlgCloseCallBack->fields.original_method_info,
      *(_QWORD *)&onClickDlgCloseCallBack->fields.extra_arg);
}


void __fastcall SetRarityDialogControl__EndOpen(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4A5ECE7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5341/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/);
    byte_4A5ECE7 = 1;
  }
  this->fields.isButtonEnable = 1;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41945856(transform, (System_String_o *)StringLiteral_5341/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0LL);
}


void __fastcall SetRarityDialogControl__MoveAlpha(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  SetRarityDialogControl_c *v5; // x8
  UnityEngine_Transform_o *v6; // x20
  UnityEngine_GameObject_o *v7; // x20
  float OPEN_TIME; // s8
  System_Action_o *v9; // x20
  System_String_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  TweenAlpha_o *v12; // x20
  UnityEngine_GameObject_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5ECE6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SetRarityDialogControl_EndOpen__);
    sub_1B885B0(&SetRarityDialogControl_TypeInfo);
    byte_4A5ECE6 = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v5 = SetRarityDialogControl_TypeInfo;
  v6 = (UnityEngine_Transform_o *)gameObject;
  if ( !SetRarityDialogControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl_TypeInfo);
    v5 = SetRarityDialogControl_TypeInfo;
  }
  if ( !v6 )
    goto LABEL_19;
  v16.fields.x = v5->static_fields->DIALOG_INITIAL_SCALE;
  v16.fields.y = v16.fields.x;
  v16.fields.z = v16.fields.x;
  UnityEngine_Transform__set_localScale(v6, v16, 0LL);
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  OPEN_TIME = SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME;
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  TweenScale__Begin(v7, OPEN_TIME, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !gameObject )
    goto LABEL_19;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gameObject->klass[1]._1.castClass)(
    gameObject,
    gameObject->klass[1]._1.declaringType,
    0.005);
  v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_SetRarityDialogControl_EndOpen__, 0LL);
  if ( !v9 )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)System_Delegate__get_Method((System_Delegate_o *)v9, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  v10 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))gameObject->klass[1]._1.castClass)(
                             gameObject,
                             gameObject->klass[1]._1.declaringType);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    v10,
    SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME,
    0LL);
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v12 = TweenAlpha__Begin(v11, SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME, 1.0, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( v12 )
    {
      v12->fields.method = 6;
      v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v12->fields.eventReceiver = v13;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->fields.eventReceiver, (int32_t)v13, v14, v15);
      return;
    }
LABEL_19:
    sub_1B8880C(gameObject, v4);
  }
}


void __fastcall SetRarityDialogControl__OnClickCancel(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  struct System_Action_o *onClickDlgCancelCallBack; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5ECE9 & 1) == 0 )
  {
    sub_1B885B0(&Method_SetRarityDialogControl_OnClickCancel__);
    byte_4A5ECE9 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_SetRarityDialogControl_OnClickCancel__;
    if ( (*((_BYTE *)Method_SetRarityDialogControl_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SetRarityDialogControl_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    SetRarityDialogControl__Close(this, v5);
    onClickDlgCancelCallBack = this->fields.onClickDlgCancelCallBack;
    this->fields.onClickDlgOkCallBack = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClickDlgOkCallBack, 0, v7, v8);
    this->fields.onClickDlgCancelCallBack = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClickDlgCancelCallBack, 0, v9, v10);
    if ( onClickDlgCancelCallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClickDlgCancelCallBack->fields.m_target)(
        onClickDlgCancelCallBack->fields.original_method_info,
        *(_QWORD *)&onClickDlgCancelCallBack->fields.extra_arg);
  }
}


void __fastcall SetRarityDialogControl__OnClickDlgOk(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  CombineRootComponent_o *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 methodPtr_low; // x9
  __int64 v11; // x9
  CommonUI_o *v12; // x20
  SetRarityDialogControl___c_c *v13; // x8
  System_Action_o *_9__169_0; // x21
  Il2CppObject *v15; // x22
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Action_o *onClickDlgOkCallBack; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  SetRarityDialogControl_o *v22; // x0
  const MethodInfo *v23; // x1

  if ( (byte_4A5ECE8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&CombineRootComponent_TypeInfo);
    sub_1B885B0(&Method_SetRarityDialogControl_OnClickDlgOk__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&Method_SetRarityDialogControl___c__OnClickDlgOk_b__169_0__);
    sub_1B885B0(&SetRarityDialogControl___c_TypeInfo);
    byte_4A5ECE8 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_SetRarityDialogControl_OnClickDlgOk__;
    if ( (*((_BYTE *)Method_SetRarityDialogControl_OnClickDlgOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SetRarityDialogControl_OnClickDlgOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickDlgOkSeKind, 0LL);
    SetRarityDialogControl__Close(this, v5);
    Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClickDlgOkCallBack, 0, v8, v9);
        this->fields.onClickDlgCancelCallBack = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClickDlgCancelCallBack, 0, v20, v21);
        if ( onClickDlgOkCallBack )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClickDlgOkCallBack->fields.m_target)(
            onClickDlgOkCallBack->fields.original_method_info,
            *(_QWORD *)&onClickDlgOkCallBack->fields.extra_arg);
          return;
        }
LABEL_26:
        sub_1B8880C(Instance, v7);
      }
      Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_26;
      Instance = (CombineRootComponent_o *)Instance->fields.myFSM;
      if ( !Instance )
        goto LABEL_26;
      v11 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v11
        && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v11 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__SetTutorialProgress(Instance, 8, 0LL);
        Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v12 = (CommonUI_o *)Instance;
        v13 = SetRarityDialogControl___c_TypeInfo;
        if ( !SetRarityDialogControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo);
          v13 = SetRarityDialogControl___c_TypeInfo;
        }
        _9__169_0 = v13->static_fields->__9__169_0;
        if ( !_9__169_0 )
        {
          if ( !v13->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v13);
            v13 = SetRarityDialogControl___c_TypeInfo;
          }
          v15 = (Il2CppObject *)v13->static_fields->__9;
          _9__169_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(_9__169_0, v15, Method_SetRarityDialogControl___c__OnClickDlgOk_b__169_0__, 0LL);
          static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
          static_fields->__9__169_0 = _9__169_0;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__169_0, (int32_t)_9__169_0, v17, v18);
        }
        if ( !v12 )
          goto LABEL_26;
        CommonUI__CloseTutorialNotificationDialogArrow_30519592(v12, _9__169_0, 0LL);
        goto LABEL_23;
      }
    }
    sub_1B88ACC(Instance);
    SetRarityDialogControl__OnClickCancel(v22, v23);
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
  void *allDispConfirmInfo; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  UILabel_o *allTitleLb; // x26
  UILabel_o *cancelBtnLb; // x26
  UILabel_o *decideBtnLb; // x26
  const MethodInfo *v23; // x1
  __int64 v24; // x27
  float v25; // s8
  unsigned __int64 v26; // x26
  bool v27; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x27
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v30; // x7
  float y; // s9
  int v32; // w20
  int v33; // w8
  float v34; // s1
  float z; // s2
  float v36; // s0
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v40; // x25
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Il2CppObject *v44; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v46; // x24
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  UILabel_o *allRareMsgLb; // x21
  __int64 *v52; // x8
  UILabel_o *allRareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v55; // x20
  const MethodInfo *v56; // x5
  int32_t v57; // [xsp+8h] [xbp-78h] BYREF
  int32_t v58; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5ECD7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__149_0__);
    sub_1B885B0(&StringLiteral_9211/*"NEED_QP"*/);
    sub_1B885B0(&StringLiteral_3662/*"COMBINE_HAVE_QP"*/);
    sub_1B885B0(&StringLiteral_3810/*"CONFIRM_COMBINE_MSG"*/);
    sub_1B885B0(&StringLiteral_3661/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_10949/*"RARE_MATERIAL_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_3694/*"COMBINE_SPEND_QP"*/);
    sub_1B885B0(&StringLiteral_3835/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_4A5ECD7 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v18);
  SetRarityDialogControl__DefaultBgSize(this, v19);
  allTitleLb = this->fields.allTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3835/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  if ( !allTitleLb )
    goto LABEL_56;
  UILabel__set_text(allTitleLb, (System_String_o *)allDispConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_56;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_56;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v23);
  if ( !selectedList )
    goto LABEL_56;
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  LODWORD(v24) = selectedList->max_length;
  v25 = *((float *)allDispConfirmInfo + 12);
  if ( (int)v24 >= 1 )
  {
    v26 = 0LL;
    v27 = 0;
    do
    {
      if ( v27 )
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
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v26 >= selectedList->max_length )
        sub_1B88814(allDispConfirmInfo, v16);
      if ( !allDispConfirmInfo )
        goto LABEL_56;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)allDispConfirmInfo,
        v26,
        baseData,
        selectedList->m_Items[v26],
        0,
        0,
        0LL,
        v30);
      allDispConfirmInfo = this->fields.allSvtGrid;
      v24 = *(_QWORD *)&selectedList->max_length;
      ++v26;
      v27 = allDispConfirmInfo == 0LL;
    }
    while ( (__int64)v26 < (int)v24 );
    if ( !allDispConfirmInfo )
      goto LABEL_56;
  }
  y = this->fields.center.fields.y;
  v32 = *((_DWORD *)allDispConfirmInfo + 11);
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  if ( v32 >= (int)v24 )
    v33 = v24;
  else
    v33 = v32;
  v34 = 70.0;
  if ( v32 >= (int)v24 )
    v34 = y;
  v36 = (float)(this->fields.center.fields.x - (float)((float)(v25 * 0.5) * (float)(v33 - 1))) * 0.47;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v34 - 1),
    0LL);
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  v59.fields.x = 0.47;
  v59.fields.y = 0.47;
  v59.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v59, 0LL);
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  UIGrid__set_repositionNow((UIGrid_o *)allDispConfirmInfo, 1, 0LL);
  allSpendQpTxtLb = this->fields.allSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3694/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !allSpendQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3662/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !allHaveQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allSpendQpLb = this->fields.allSpendQpLb;
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  v58 = spendQp;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v41, v42, v43);
  allDispConfirmInfo = System_String__Format(v40, v44, 0LL);
  if ( !allSpendQpLb )
    goto LABEL_56;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpLb = this->fields.allHaveQpLb;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  v57 = haveQp;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v47, v48, v49);
  allDispConfirmInfo = System_String__Format(v46, v50, 0LL);
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
    sub_1B8880C(allDispConfirmInfo, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0LL);
  allRareMsgLb = this->fields.allRareMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isExceededMaterial )
      goto LABEL_45;
LABEL_47:
    v52 = &StringLiteral_10949/*"RARE_MATERIAL_INFO_MSG"*/;
    goto LABEL_48;
  }
  if ( !isExceededMaterial )
    goto LABEL_47;
LABEL_45:
  v52 = &StringLiteral_3661/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
LABEL_48:
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)*v52, 0LL);
  if ( !allRareMsgLb )
    goto LABEL_56;
  UILabel__set_text(allRareMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !allRareConfirmMsgLb )
    goto LABEL_56;
  UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_56;
  if ( combineRootComponent->fields.state == 3 )
  {
    v55 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v55,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__149_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v55, 0LL, 0LL, v56);
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
  UnityEngine_GameObject_o *appendSkillConfirmInfo; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  char v14; // w21
  Il2CppObject *ComponentInChildren_object; // x21
  UIExtrusionLabel_o *appendSkillCurrentLvLabel; // x21
  UIExtrusionLabel_o *appendSkillResultLvLabel; // x21
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UILabel_o *v20; // x21
  UILabel_o *v21; // x21
  UILabel_o *v22; // x21
  System_String_o *v23; // x22
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  UILabel_o *v28; // x21
  System_String_o *v29; // x22
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  UILabel_o *appendSkillConfirmLabel; // x20
  __int64 *v35; // x8
  Il2CppObject *Component_object; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UILabel_o *appendSkillSpendTxtLabel; // x21
  UILabel_o *appendSkillHaveTxtLabel; // x21
  UILabel_o *appendSkillSpendLabel; // x21
  System_String_o *v43; // x22
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x0
  UILabel_o *appendSkillHaveLabel; // x21
  System_String_o *v49; // x22
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x0
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v57; // x20
  const MethodInfo *v58; // x5
  int32_t haveSvtCoin; // [xsp+4h] [xbp-5Ch] BYREF
  UnityEngine_Bounds_o v60; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5ECDB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SetRarityDialogControl__SetAppendSkillCombineInfo_b__153_0__);
    sub_1B885B0(&StringLiteral_9211/*"NEED_QP"*/);
    sub_1B885B0(&StringLiteral_3662/*"COMBINE_HAVE_QP"*/);
    sub_1B885B0(&StringLiteral_2104/*"APPEND_SKILL_OPEN_CONFIRM"*/);
    sub_1B885B0(&StringLiteral_2107/*"APPEND_SKILL_OPEN_SPEND_COIN"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_2105/*"APPEND_SKILL_OPEN_HAVE_COIN"*/);
    sub_1B885B0(&StringLiteral_3694/*"COMBINE_SPEND_QP"*/);
    sub_1B885B0(&StringLiteral_2095/*"APPEND_SKILL_COMBINE_CONFIRM"*/);
    byte_4A5ECDB = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v11);
  SetRarityDialogControl__DefaultBgSize(this, v12);
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
  v14 = ~isOpen;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, v14 & 1, 0LL);
  if ( (v14 & 1) == 0 )
  {
    if ( updata )
    {
      appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillIconComp;
      if ( appendSkillConfirmInfo )
      {
        SkillIconComponent__Set_38235592(
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
                                             (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                                     (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
                {
                  appendSkillConfirmInfo = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)ComponentInChildren_object,
                                             0LL);
                  if ( !appendSkillConfirmInfo )
                    goto LABEL_59;
                  Component_object = UnityEngine_GameObject__AddComponent_object_(
                                       appendSkillConfirmInfo,
                                       (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
                }
                transform = UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)ComponentInChildren_object,
                              0LL);
                NGUIMath__CalculateAbsoluteWidgetBounds(&v60, transform, 0LL);
                appendSkillConfirmInfo = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ComponentInChildren_object->klass->vtable[4].method)(
                                                                       ComponentInChildren_object,
                                                                       ComponentInChildren_object->klass->vtable[5].methodPtr);
                if ( Component_object )
                {
                  UnityEngine_BoxCollider__set_center(
                    (UnityEngine_BoxCollider_o *)Component_object,
                    v60.fields.m_Center,
                    0LL);
                  ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ComponentInChildren_object->klass->vtable[4].method)(
                    ComponentInChildren_object,
                    ComponentInChildren_object->klass->vtable[5].methodPtr);
                  v61.fields.x = v60.fields.m_Extents.fields.x + v60.fields.m_Extents.fields.x;
                  v61.fields.y = v60.fields.m_Extents.fields.y + v60.fields.m_Extents.fields.y;
                  v61.fields.z = v60.fields.m_Extents.fields.z + v60.fields.m_Extents.fields.z;
                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v61, 0LL);
                  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillSpendTxtLabel;
                  if ( appendSkillConfirmInfo )
                  {
                    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
                    GameObjectExtensions__SetLocalPositionX(v38, 100.0, 0LL);
                    appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillHaveTxtLabel;
                    if ( appendSkillConfirmInfo )
                    {
                      v39 = UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)appendSkillConfirmInfo,
                              0LL);
                      GameObjectExtensions__SetLocalPositionX(v39, 100.0, 0LL);
                      appendSkillSpendTxtLabel = this->fields.appendSkillSpendTxtLabel;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_2107/*"APPEND_SKILL_OPEN_SPEND_COIN"*/,
                                                                             0LL);
                      if ( appendSkillSpendTxtLabel )
                      {
                        UILabel__set_text(appendSkillSpendTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                        appendSkillHaveTxtLabel = this->fields.appendSkillHaveTxtLabel;
                        appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_2105/*"APPEND_SKILL_OPEN_HAVE_COIN"*/,
                                                                               0LL);
                        if ( appendSkillHaveTxtLabel )
                        {
                          UILabel__set_text(appendSkillHaveTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                          appendSkillSpendLabel = this->fields.appendSkillSpendLabel;
                          v43 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
                          LODWORD(v60.fields.m_Center.fields.x) = updata->fields.spendSvtCoin;
                          v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v44, v45, v46);
                          appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v43, v47, 0LL);
                          if ( appendSkillSpendLabel )
                          {
                            UILabel__set_text(appendSkillSpendLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                            appendSkillHaveLabel = this->fields.appendSkillHaveLabel;
                            v49 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
                            haveSvtCoin = updata->fields.haveSvtCoin;
                            v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveSvtCoin, v50, v51, v52);
                            appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v49, v53, 0LL);
                            if ( appendSkillHaveLabel )
                            {
                              UILabel__set_text(appendSkillHaveLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                              appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
                              v35 = &StringLiteral_2104/*"APPEND_SKILL_OPEN_CONFIRM"*/;
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
    sub_1B8880C(appendSkillConfirmInfo, v9);
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
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v18, -5.0, 0LL);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillHaveTxtLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_59;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v19, -5.0, 0LL);
  v20 = this->fields.appendSkillSpendTxtLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3694/*"COMBINE_SPEND_QP"*/,
                                                         0LL);
  if ( !v20 )
    goto LABEL_59;
  UILabel__set_text(v20, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v21 = this->fields.appendSkillHaveTxtLabel;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3662/*"COMBINE_HAVE_QP"*/,
                                                         0LL);
  if ( !v21 )
    goto LABEL_59;
  UILabel__set_text(v21, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v22 = this->fields.appendSkillSpendLabel;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  LODWORD(v60.fields.m_Center.fields.x) = updata->fields.spendQp;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v24, v25, v26);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v23, v27, 0LL);
  if ( !v22 )
    goto LABEL_59;
  UILabel__set_text(v22, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v28 = this->fields.appendSkillHaveLabel;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  haveSvtCoin = updata->fields.haveQp;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveSvtCoin, v30, v31, v32);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v29, v33, 0LL);
  if ( !v28 )
    goto LABEL_59;
  UILabel__set_text(v28, (System_String_o *)appendSkillConfirmInfo, 0LL);
  appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
  v35 = &StringLiteral_2095/*"APPEND_SKILL_COMBINE_CONFIRM"*/;
LABEL_50:
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v35, 0LL);
  if ( !appendSkillConfirmLabel )
    goto LABEL_59;
  UILabel__set_text(appendSkillConfirmLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/,
                                                         0LL);
  if ( !cancelBtnLb )
    goto LABEL_59;
  UILabel__set_text(cancelBtnLb, (System_String_o *)appendSkillConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/,
                                                         0LL);
  if ( !decideBtnLb )
    goto LABEL_59;
  UILabel__set_text(decideBtnLb, (System_String_o *)appendSkillConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_59;
  if ( combineRootComponent->fields.state == 14 )
  {
    v57 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v57,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetAppendSkillCombineInfo_b__153_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v57, 0LL, 0LL, v58);
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
    sub_1B8880C(mPanel, method);
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
    sub_1B88814(mPanel, method);
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
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  this->fields.onClickDlgOkSeKind = seKind;
  this->fields.onClickDlgOkCallBack = callBack;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.onClickDlgOkCallBack,
    (int32_t)callBack,
    (int32_t)callBack,
    (int32_t)cancelCallBack);
  this->fields.onClickDlgCancelCallBack = cancelCallBack;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.onClickDlgCancelCallBack,
    (int32_t)cancelCallBack,
    v9,
    v10);
  this->fields.onClickDlgCloseCallBack = closeCallBack;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.onClickDlgCloseCallBack,
    (int32_t)closeCallBack,
    v11,
    v12);
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
  void *normalConfirmInfo; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v21; // x1
  __int64 v22; // x25
  float v23; // s8
  unsigned __int64 v24; // x24
  bool v25; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v28; // x7
  float y; // s9
  int v30; // w24
  int v31; // w9
  float v32; // s1
  float z; // s2
  float v34; // s0
  UILabel_o *normalSpendQpTxtLb; // x24
  UILabel_o *normalHaveQpTxtLb; // x24
  UILabel_o *confirmSpendQpLb; // x24
  System_String_o *v38; // x25
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  UILabel_o *confirmHaveQpLb; // x23
  System_String_o *v44; // x24
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x0
  UILabel_o *confirmMsgLb; // x22
  const MethodInfo *v50; // x4
  _BOOL8 v51; // x0
  const MethodInfo *v52; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v54; // x20
  const MethodInfo *v55; // x5
  int32_t v56; // [xsp+8h] [xbp-78h] BYREF
  int32_t v57; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *labelMsg; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5ECD5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SetRarityDialogControl__SetConfirmCombine_b__147_0__);
    sub_1B885B0(&StringLiteral_9211/*"NEED_QP"*/);
    sub_1B885B0(&StringLiteral_3662/*"COMBINE_HAVE_QP"*/);
    sub_1B885B0(&StringLiteral_3810/*"CONFIRM_COMBINE_MSG"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_3694/*"COMBINE_SPEND_QP"*/);
    byte_4A5ECD5 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v17);
  SetRarityDialogControl__DefaultBgSize(this, v18);
  normalConfirmInfo = this->fields.normalTitleLb;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UILabel__set_text((UILabel_o *)normalConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_46;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_46;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v21);
  if ( !selectedList )
    goto LABEL_46;
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  LODWORD(v22) = selectedList->max_length;
  v23 = *((float *)normalConfirmInfo + 12);
  if ( (int)v22 >= 1 )
  {
    v24 = 0LL;
    v25 = 0;
    do
    {
      if ( v25 )
        goto LABEL_46;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
      normalConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !normalConfirmInfo )
        goto LABEL_46;
      normalConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)normalConfirmInfo,
                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v24 >= selectedList->max_length )
        sub_1B88814(normalConfirmInfo, v15);
      if ( !normalConfirmInfo )
        goto LABEL_46;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)normalConfirmInfo,
        v24,
        baseData,
        selectedList->m_Items[v24],
        0,
        0,
        0LL,
        v28);
      normalConfirmInfo = this->fields.materialSvtGrid;
      v22 = *(_QWORD *)&selectedList->max_length;
      ++v24;
      v25 = normalConfirmInfo == 0LL;
    }
    while ( (__int64)v24 < (int)v22 );
    if ( !normalConfirmInfo )
      goto LABEL_46;
  }
  y = this->fields.center.fields.y;
  v30 = *((_DWORD *)normalConfirmInfo + 11);
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  if ( v30 >= (int)v22 )
    v31 = v22;
  else
    v31 = v30;
  v32 = 55.0;
  if ( v30 >= (int)v22 )
    v32 = y;
  v34 = (float)(this->fields.center.fields.x - (float)((float)(v23 * 0.5) * (float)(v31 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v32 - 1),
    0LL);
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  v59.fields.x = 0.5;
  v59.fields.y = 0.5;
  v59.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v59, 0LL);
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UIGrid__set_repositionNow((UIGrid_o *)normalConfirmInfo, 1, 0LL);
  normalSpendQpTxtLb = this->fields.normalSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3694/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !normalSpendQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3662/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !normalHaveQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  v57 = spendQp;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v39, v40, v41);
  normalConfirmInfo = System_String__Format(v38, v42, 0LL);
  if ( !confirmSpendQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  v56 = haveQp;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v45, v46, v47);
  normalConfirmInfo = System_String__Format(v44, v48, 0LL);
  if ( !confirmHaveQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"CONFIRM_COMBINE_MSG"*/, 0LL);
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
  v51 = SetRarityDialogControl__CheckStatusUpInfo(this, baseData, selectedList, &labelMsg, v50);
  if ( !v51 )
    goto LABEL_42;
  WrapControlText__textAdjust(this->fields.statusUpInfoLb, labelMsg, 22, 0, 0, 0LL);
  normalConfirmInfo = this->fields.statusUpInfoLb;
  if ( !normalConfirmInfo
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0LL)) == 0LL )
  {
LABEL_46:
    sub_1B8880C(normalConfirmInfo, v15);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 1, 0LL);
LABEL_42:
  SetRarityDialogControl__CheckExceedSvt((SetRarityDialogControl_o *)v51, selectedList, v52);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_46;
  if ( combineRootComponent->fields.state == 3 )
  {
    v54 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v54, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmCombine_b__147_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v54, 0LL, 0LL, v55);
  }
}


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
  UnityEngine_GameObject_o *costumeConfirmInfo; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  UILabel_o *costumeTitleLb; // x25
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  UILabel_o *needQpCostumeTextLb; // x24
  UILabel_o *needQpCostumeLb; // x24
  System_String_o *v22; // x25
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  UILabel_o *haveQpCostumeTextLb; // x23
  UILabel_o *haveQpCostumeLb; // x23
  System_String_o *v29; // x24
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  UILabel_o *costumeInfoLb; // x22
  const MethodInfo *v35; // x5
  struct CombineRootComponent_o *combineRootComponent; // x8
  int32_t v37; // [xsp+8h] [xbp-58h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A5ECE2 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9211/*"NEED_QP"*/);
    sub_1B885B0(&StringLiteral_3827/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_3897/*"COSTUME_NEED_QP_TEXT"*/);
    sub_1B885B0(&StringLiteral_3894/*"COSTUME_CONFIRM_MSG"*/);
    sub_1B885B0(&StringLiteral_3896/*"COSTUME_HAVE_QP_TEXT"*/);
    byte_4A5ECE2 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v15);
  SetRarityDialogControl__DefaultBgSize(this, v16);
  costumeTitleLb = this->fields.costumeTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !costumeTitleLb )
    goto LABEL_20;
  UILabel__set_text(costumeTitleLb, (System_String_o *)costumeConfirmInfo, 0LL);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)this->fields.costumeNameLb;
  if ( !costumeConfirmInfo )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)costumeConfirmInfo, cosName, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_20;
  UILabel__set_text(cancelBtnLb, (System_String_o *)costumeConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_20;
  UILabel__set_text(decideBtnLb, (System_String_o *)costumeConfirmInfo, 0LL);
  needQpCostumeTextLb = this->fields.needQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3897/*"COSTUME_NEED_QP_TEXT"*/, 0LL);
  if ( !needQpCostumeTextLb )
    goto LABEL_20;
  UILabel__set_text(needQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0LL);
  needQpCostumeLb = this->fields.needQpCostumeLb;
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  v38 = needQp;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v23, v24, v25);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v22, v26, 0LL);
  if ( !needQpCostumeLb )
    goto LABEL_20;
  UILabel__set_text(needQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0LL);
  haveQpCostumeTextLb = this->fields.haveQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3896/*"COSTUME_HAVE_QP_TEXT"*/, 0LL);
  if ( !haveQpCostumeTextLb )
    goto LABEL_20;
  UILabel__set_text(haveQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0LL);
  haveQpCostumeLb = this->fields.haveQpCostumeLb;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  v37 = haveQp;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v30, v31, v32);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v29, v33, 0LL);
  if ( !haveQpCostumeLb
    || (UILabel__set_text(haveQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0LL),
        costumeInfoLb = this->fields.costumeInfoLb,
        costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3894/*"COSTUME_CONFIRM_MSG"*/,
                                                           0LL),
        !costumeInfoLb)
    || (UILabel__set_text(costumeInfoLb, (System_String_o *)costumeConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_20:
    sub_1B8880C(costumeConfirmInfo, v13);
  }
  if ( combineRootComponent->fields.state == 8 )
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, callBack, cancelCallBack, 0LL, v35);
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

  if ( (byte_4A5ECE1 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___);
    byte_4A5ECE1 = 1;
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
                                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___)) == 0LL
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
    sub_1B8880C(costumeEventItemConfirmInfo, v9);
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
  UnityEngine_GameObject_o *costumeEventItemOrNeedItemConfirmInfo; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  UILabel_o *cancelBtnLb; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x5

  if ( (byte_4A5ECE0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SetRarityDialogControl_DefaultBgSize__);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4A5ECE0 = 1;
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
                                                                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___);
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
  SetRarityDialogControl__MoveAlpha(this, v17);
  SetRarityDialogControl__DefaultBgSize(this, v18);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/,
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
    sub_1B8880C(costumeEventItemOrNeedItemConfirmInfo, v15);
  }
  if ( combineRootComponent->fields.state == 8 )
  {
    v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, 0LL, cancelCallBack, v22, v23);
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
  const MethodInfo *v18; // x4
  System_Int64_array *v19; // x2
  const MethodInfo *v20; // x7
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  __int64 methodPtr_low; // x9
  __int64 v24; // x9
  SetRarityDialogControl_o *v25; // x0
  System_Int64_array *v26; // x1
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // [xsp+0h] [xbp-70h]
  System_String_o *labelMsg; // [xsp+18h] [xbp-58h] BYREF

  v16 = this;
  v17 = isStatusUp;
  if ( (byte_4A5ECD2 & 1) == 0 )
  {
    sub_1B885B0(&CombineRootComponent_TypeInfo);
    this = (SetRarityDialogControl_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5ECD2 = 1;
  }
  labelMsg = 0LL;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  if ( HIDWORD(Instance[38].monitor) != 7 )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (Il2CppObject *)Instance[2].klass) == 0LL )
LABEL_18:
    sub_1B8880C(Instance, v22);
  v24 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable[0].methodPtr) < (unsigned int)v24
    || (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v24 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_19:
    sub_1B88ACC(Instance);
    SetRarityDialogControl__CheckExceedSvt(v25, v26, v27);
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
  UnityEngine_GameObject_o *lvExceedConfirmSimpleInfo; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  UILabel_o *cancelBtnLb; // x23
  UILabel_o *decideBtnLb; // x23
  UILabel_o *lvExceedInfoLb; // x21
  UILabel_o *lvExceedSpendQpTxtLb; // x23
  UILabel_o *lvExceedHaveQpTxtLb; // x23
  UILabel_o *lvExceedSpendQpLb; // x23
  System_String_o *v22; // x24
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  UILabel_o *lvExceedHaveQpLb; // x22
  System_String_o *v28; // x23
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x0
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v34; // x0
  _QWORD *v35; // x8
  System_Action_o *v36; // x21
  int32_t v37; // w20
  const MethodInfo *v38; // x5
  int32_t v39; // [xsp+8h] [xbp-48h] BYREF
  int32_t v40; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5ECDD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__155_0__);
    sub_1B885B0(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__155_1__);
    sub_1B885B0(&StringLiteral_9211/*"NEED_QP"*/);
    sub_1B885B0(&StringLiteral_3815/*"CONFIRM_EXCEED_COMBINE"*/);
    sub_1B885B0(&StringLiteral_3662/*"COMBINE_HAVE_QP"*/);
    sub_1B885B0(&StringLiteral_8319/*"LVEXCEED_COMBINE_SPEND_QP"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4A5ECDD = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v14);
  SetRarityDialogControl__DefaultBgSize(this, v15);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)this->fields.lvExceedTitleLb;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)lvExceedConfirmSimpleInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/,
                                                            0LL);
  if ( !cancelBtnLb )
    goto LABEL_36;
  UILabel__set_text(cancelBtnLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/,
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
                                                              (System_String_o *)StringLiteral_8319/*"LVEXCEED_COMBINE_SPEND_QP"*/,
                                                              0LL);
    if ( lvExceedSpendQpTxtLb )
    {
      UILabel__set_text(lvExceedSpendQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
      lvExceedHaveQpTxtLb = this->fields.lvExceedHaveQpTxtLb;
      lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_3662/*"COMBINE_HAVE_QP"*/,
                                                                0LL);
      if ( lvExceedHaveQpTxtLb )
      {
        UILabel__set_text(lvExceedHaveQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
        lvExceedSpendQpLb = this->fields.lvExceedSpendQpLb;
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
        v40 = spendQp;
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v23, v24, v25);
        lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)System_String__Format(v22, v26, 0LL);
        if ( lvExceedSpendQpLb )
        {
          UILabel__set_text(lvExceedSpendQpLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
          lvExceedHaveQpLb = this->fields.lvExceedHaveQpLb;
          v28 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
          v39 = haveQp;
          v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v29, v30, v31);
          lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)System_String__Format(v28, v32, 0LL);
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
    sub_1B8880C(lvExceedConfirmSimpleInfo, v12);
  }
  lvExceedInfoLb = this->fields.lvExceedInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3815/*"CONFIRM_EXCEED_COMBINE"*/,
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
    v34 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    v35 = &Method_SetRarityDialogControl__SetConfirmLvExceed_b__155_0__;
    if ( !isCheck )
      v35 = &Method_SetRarityDialogControl__SetConfirmLvExceed_b__155_1__;
    v36 = v34;
    if ( isCheck )
      v37 = 8;
    else
      v37 = 0;
    System_Action___ctor(v34, (Il2CppObject *)this, *v35, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, v37, v36, 0LL, 0LL, v38);
  }
}


void __fastcall SetRarityDialogControl__SetConfirmLvExceed_45355764(
        SetRarityDialogControl_o *this,
        System_Collections_Generic_List_GameObject__o *itemObjList,
        System_Int32_array *itemList,
        int32_t spendQp,
        int32_t haveQp,
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
  Il2CppObject *v26; // x0
  UILabel_o *lvExceedHaveQpLabel; // x23
  System_String_o *v28; // x24
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x0
  UILabel_o *lvExceedConfirmLabel; // x22
  __int64 size; // x24
  unsigned __int64 v35; // x22
  SetRarityDialogControl_o *v36; // x23
  UnityEngine_Transform_o *transform; // x0
  System_Action_o *v38; // x20
  const MethodInfo *v39; // x5
  int32_t v40; // [xsp+8h] [xbp-58h] BYREF
  int32_t v41; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_4A5ECDE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__156_0__);
    sub_1B885B0(&StringLiteral_9211/*"NEED_QP"*/);
    sub_1B885B0(&StringLiteral_3828/*"CONFIRM_TITLE_EXCEED_COMBINE"*/);
    sub_1B885B0(&StringLiteral_3662/*"COMBINE_HAVE_QP"*/);
    sub_1B885B0(&StringLiteral_8318/*"LVEXCEED_COMBINE_SPEND_ITEM"*/);
    sub_1B885B0(&StringLiteral_8319/*"LVEXCEED_COMBINE_SPEND_QP"*/);
    sub_1B885B0(&StringLiteral_8320/*"LVEXCEED_EXE_CONFIRM"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    this = (SetRarityDialogControl_o *)sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4A5ECDE = 1;
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
    SetRarityDialogControl__MoveAlpha(v10, v12);
    SetRarityDialogControl__DefaultBgSize(v10, v13);
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
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelBtnLb )
      goto LABEL_31;
    UILabel__set_text(cancelBtnLb, (System_String_o *)this, 0LL);
    decideBtnLb = v10->fields.decideBtnLb;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideBtnLb )
      goto LABEL_31;
    UILabel__set_text(decideBtnLb, (System_String_o *)this, 0LL);
    lvExceedTitleLabel = v10->fields.lvExceedTitleLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
    if ( !lvExceedTitleLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedTitleLabel, (System_String_o *)this, 0LL);
    lvExceedSpendItemLabel = v10->fields.lvExceedSpendItemLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8318/*"LVEXCEED_COMBINE_SPEND_ITEM"*/, 0LL);
    if ( !lvExceedSpendItemLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedSpendItemLabel, (System_String_o *)this, 0LL);
    lvExceedSpendQpTxtLabel = v10->fields.lvExceedSpendQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8319/*"LVEXCEED_COMBINE_SPEND_QP"*/, 0LL);
    if ( !lvExceedSpendQpTxtLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedSpendQpTxtLabel, (System_String_o *)this, 0LL);
    lvExceedHaveQpTxtLabel = v10->fields.lvExceedHaveQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3662/*"COMBINE_HAVE_QP"*/, 0LL);
    if ( !lvExceedHaveQpTxtLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedHaveQpTxtLabel, (System_String_o *)this, 0LL);
    lvExceedSpendQpLabel = v10->fields.lvExceedSpendQpLabel;
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
    v41 = spendQp;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v23, v24, v25);
    this = (SetRarityDialogControl_o *)System_String__Format(v22, v26, 0LL);
    if ( !lvExceedSpendQpLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedSpendQpLabel, (System_String_o *)this, 0LL);
    lvExceedHaveQpLabel = v10->fields.lvExceedHaveQpLabel;
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
    v40 = haveQp;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v29, v30, v31);
    this = (SetRarityDialogControl_o *)System_String__Format(v28, v32, 0LL);
    if ( !lvExceedHaveQpLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedHaveQpLabel, (System_String_o *)this, 0LL);
    lvExceedConfirmLabel = v10->fields.lvExceedConfirmLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8320/*"LVEXCEED_EXE_CONFIRM"*/, 0LL);
    if ( !lvExceedConfirmLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedConfirmLabel, (System_String_o *)this, 0LL);
    if ( !itemObjList )
      goto LABEL_31;
    size = (unsigned int)itemObjList->fields._size;
    if ( (int)size >= 1 )
    {
      v35 = 0LL;
      while ( 1 )
      {
        this = (SetRarityDialogControl_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)itemObjList,
                                             v35,
                                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !v10->fields.lvExceedConsumeItemGrid )
          break;
        v36 = this;
        transform = UnityEngine_Component__get_transform(
                      (UnityEngine_Component_o *)v10->fields.lvExceedConsumeItemGrid,
                      0LL);
        this = (SetRarityDialogControl_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v10,
                                             (UnityEngine_GameObject_o *)v36,
                                             transform,
                                             0LL,
                                             0LL);
        if ( !this )
          break;
        this = (SetRarityDialogControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
        if ( !itemList )
          break;
        if ( v35 >= itemList->max_length )
          sub_1B88814(this, itemObjList);
        if ( !this )
          break;
        LimitCntUpItemComponent__SetItemEntity((LimitCntUpItemComponent_o *)this, itemList->m_Items[++v35], 0LL);
        if ( size == v35 )
          goto LABEL_28;
      }
LABEL_31:
      sub_1B8880C(this, itemObjList);
    }
LABEL_28:
    this = (SetRarityDialogControl_o *)v10->fields.lvExceedConsumeItemGrid;
    if ( !this )
      goto LABEL_31;
    ((void (__fastcall *)(SetRarityDialogControl_o *, Il2CppClass *))this->klass[1]._1.castClass)(
      this,
      this->klass[1]._1.declaringType);
    v38 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v38, (Il2CppObject *)v10, Method_SetRarityDialogControl__SetConfirmLvExceed_b__156_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v10, 8, v38, 0LL, 0LL, v39);
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
  void *rariryConfirmInfo; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  UILabel_o *cancelBtnLb; // x25
  UILabel_o *decideBtnLb; // x25
  const MethodInfo *v21; // x1
  __int64 v22; // x26
  float v23; // s8
  unsigned __int64 v24; // x25
  bool v25; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v28; // x7
  float y; // s9
  int v30; // w23
  int v31; // w9
  float v32; // s1
  float z; // s2
  float v34; // s0
  UILabel_o *spendQpTxtLb; // x23
  UILabel_o *haveQpTxtLb; // x23
  UILabel_o *spendQpLb; // x23
  System_String_o *v38; // x24
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  UILabel_o *haveQpLb; // x22
  System_String_o *v44; // x23
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x0
  UILabel_o *rareMaterialMsgLb; // x21
  __int64 *v50; // x8
  UILabel_o *rareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v53; // x20
  const MethodInfo *v54; // x5
  int32_t v55; // [xsp+8h] [xbp-78h] BYREF
  int32_t v56; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5ECD3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SetRarityDialogControl__SetConfirmRarityInfo_b__145_0__);
    sub_1B885B0(&StringLiteral_9211/*"NEED_QP"*/);
    sub_1B885B0(&StringLiteral_3662/*"COMBINE_HAVE_QP"*/);
    sub_1B885B0(&StringLiteral_3810/*"CONFIRM_COMBINE_MSG"*/);
    sub_1B885B0(&StringLiteral_3661/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_10949/*"RARE_MATERIAL_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_3694/*"COMBINE_SPEND_QP"*/);
    byte_4A5ECD3 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v17);
  SetRarityDialogControl__DefaultBgSize(this, v18);
  rariryConfirmInfo = this->fields.rarityTitleLb;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  UILabel__set_text((UILabel_o *)rariryConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_48;
  UILabel__set_text(cancelBtnLb, (System_String_o *)rariryConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_48;
  UILabel__set_text(decideBtnLb, (System_String_o *)rariryConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v21);
  if ( !list )
    goto LABEL_48;
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  LODWORD(v22) = list->max_length;
  v23 = *((float *)rariryConfirmInfo + 12);
  if ( (int)v22 >= 1 )
  {
    v24 = 0LL;
    v25 = 0;
    do
    {
      if ( v25 )
        goto LABEL_48;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
      rariryConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !rariryConfirmInfo )
        goto LABEL_48;
      rariryConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)rariryConfirmInfo,
                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v24 >= list->max_length )
        sub_1B88814(rariryConfirmInfo, v15);
      if ( !rariryConfirmInfo )
        goto LABEL_48;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)rariryConfirmInfo,
        v24,
        baseData,
        list->m_Items[v24],
        0,
        0,
        0LL,
        v28);
      rariryConfirmInfo = this->fields.raritySvtGrid;
      v22 = *(_QWORD *)&list->max_length;
      ++v24;
      v25 = rariryConfirmInfo == 0LL;
    }
    while ( (__int64)v24 < (int)v22 );
    if ( !rariryConfirmInfo )
      goto LABEL_48;
  }
  y = this->fields.center.fields.y;
  v30 = *((_DWORD *)rariryConfirmInfo + 11);
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  if ( v30 >= (int)v22 )
    v31 = v22;
  else
    v31 = v30;
  v32 = 55.0;
  if ( v30 >= (int)v22 )
    v32 = y;
  v34 = (float)(this->fields.center.fields.x - (float)((float)(v23 * 0.5) * (float)(v31 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)rariryConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v32 - 1),
    0LL);
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  v57.fields.x = 0.5;
  v57.fields.y = 0.5;
  v57.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rariryConfirmInfo, v57, 0LL);
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  UIGrid__set_repositionNow((UIGrid_o *)rariryConfirmInfo, 1, 0LL);
  spendQpTxtLb = this->fields.spendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3694/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !spendQpTxtLb )
    goto LABEL_48;
  UILabel__set_text(spendQpTxtLb, (System_String_o *)rariryConfirmInfo, 0LL);
  haveQpTxtLb = this->fields.haveQpTxtLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3662/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !haveQpTxtLb )
    goto LABEL_48;
  UILabel__set_text(haveQpTxtLb, (System_String_o *)rariryConfirmInfo, 0LL);
  spendQpLb = this->fields.spendQpLb;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  v56 = spendQp;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v39, v40, v41);
  rariryConfirmInfo = System_String__Format(v38, v42, 0LL);
  if ( !spendQpLb
    || (UILabel__set_text(spendQpLb, (System_String_o *)rariryConfirmInfo, 0LL),
        haveQpLb = this->fields.haveQpLb,
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL),
        v55 = haveQp,
        v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v45, v46, v47),
        rariryConfirmInfo = System_String__Format(v44, v48, 0LL),
        !haveQpLb) )
  {
LABEL_48:
    sub_1B8880C(rariryConfirmInfo, v15);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)rariryConfirmInfo, 0LL);
  rareMaterialMsgLb = this->fields.rareMaterialMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isExceededMaterial )
      goto LABEL_37;
LABEL_39:
    v50 = &StringLiteral_10949/*"RARE_MATERIAL_INFO_MSG"*/;
    goto LABEL_40;
  }
  if ( !isExceededMaterial )
    goto LABEL_39;
LABEL_37:
  v50 = &StringLiteral_3661/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
LABEL_40:
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)*v50, 0LL);
  if ( !rareMaterialMsgLb )
    goto LABEL_48;
  UILabel__set_text(rareMaterialMsgLb, (System_String_o *)rariryConfirmInfo, 0LL);
  rareConfirmMsgLb = this->fields.rareConfirmMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !rareConfirmMsgLb )
    goto LABEL_48;
  UILabel__set_text(rareConfirmMsgLb, (System_String_o *)rariryConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_48;
  if ( combineRootComponent->fields.state == 3 )
  {
    v53 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v53, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmRarityInfo_b__145_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v53, 0LL, 0LL, v54);
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
  UnityEngine_GameObject_o *normalConfirmInfo; // x0
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v20; // x1
  struct UIGrid_o *materialSvtGrid; // x8
  float v22; // s8
  int32_t v23; // w24
  __int64 v24; // x1
  UnityEngine_Component_o *v25; // x0
  Il2CppObject *key; // x25
  char value; // w27
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
  float v40; // s1
  float z; // s2
  float v42; // s0
  UILabel_o *normalSpendQpTxtLb; // x22
  UILabel_o *normalHaveQpTxtLb; // x22
  UILabel_o *confirmSpendQpLb; // x22
  System_String_o *v46; // x23
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  UILabel_o *confirmHaveQpLb; // x21
  System_String_o *v52; // x22
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  Il2CppObject *v56; // x0
  UILabel_o *confirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v59; // x20
  const MethodInfo *v60; // x5
  const MethodInfo *v61; // [xsp+0h] [xbp-E0h]
  int32_t v62; // [xsp+Ch] [xbp-D4h]
  int32_t v64; // [xsp+14h] [xbp-CCh] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v65; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v66; // [xsp+40h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5ECD6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__148_0__);
    sub_1B885B0(&StringLiteral_9211/*"NEED_QP"*/);
    sub_1B885B0(&StringLiteral_3662/*"COMBINE_HAVE_QP"*/);
    sub_1B885B0(&StringLiteral_3810/*"CONFIRM_COMBINE_MSG"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_3694/*"COMBINE_SPEND_QP"*/);
    byte_4A5ECD6 = 1;
  }
  memset(&v66, 0, sizeof(v66));
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
  SetRarityDialogControl__MoveAlpha(this, v16);
  SetRarityDialogControl__DefaultBgSize(this, v17);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.normalTitleLb;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  UILabel__set_text((UILabel_o *)normalConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_44;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_44;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v20);
  if ( !selectedList )
    goto LABEL_44;
  v62 = haveQp;
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_319FDD4 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  materialSvtGrid = this->fields.materialSvtGrid;
  if ( !materialSvtGrid )
    goto LABEL_44;
  v22 = materialSvtGrid->fields.cellWidth * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v65,
    selectedList,
    (const MethodInfo_31A0528 *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v23 = 0;
  v66 = v65;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v66,
            (const MethodInfo_32BCFF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v25 = (UnityEngine_Component_o *)this->fields.materialSvtGrid;
    if ( !v25 )
      sub_1B8880C(0LL, v24);
    key = v66.fields._current.fields.key;
    value = (char)v66.fields._current.fields.value;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v25, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Object )
      sub_1B8880C(0LL, v31);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_object )
      sub_1B8880C(0LL, v33);
    MaterialSvtInfo__setMaterialSvtInfo_45332512(
      (MaterialSvtInfo_o *)Component_object,
      v23++,
      baseData,
      (int64_t)key,
      0,
      0,
      value != 0,
      0LL,
      v61);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v66,
    (const MethodInfo_32BD110 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_319FDD4 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_319FDD4 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v36 = this->fields.materialSvtGrid;
  if ( !v36 )
    goto LABEL_44;
  maxPerLine = v36->fields.maxPerLine;
  v38 = (int)normalConfirmInfo;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.materialSvtGrid,
                                                    0LL);
  if ( !normalConfirmInfo )
    goto LABEL_44;
  if ( v38 <= maxPerLine )
    v39 = Count;
  else
    v39 = maxPerLine;
  v40 = 55.0;
  if ( v38 <= maxPerLine )
    v40 = y;
  v42 = (float)(this->fields.center.fields.x - (float)(v22 * (float)(v39 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v40 - 1),
    0LL);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)normalConfirmInfo,
                                                    0LL);
  if ( !normalConfirmInfo )
    goto LABEL_44;
  v67.fields.x = 0.5;
  v67.fields.y = 0.5;
  v67.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v67, 0LL);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  UIGrid__set_repositionNow((UIGrid_o *)normalConfirmInfo, 1, 0LL);
  normalSpendQpTxtLb = this->fields.normalSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3694/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !normalSpendQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3662/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !normalHaveQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  LODWORD(v65.fields._dictionary) = spendQp;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v47, v48, v49);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v46, v50, 0LL);
  if ( !confirmSpendQpLb )
    goto LABEL_44;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  v64 = v62;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v53, v54, v55);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v52, v56, 0LL);
  if ( !confirmHaveQpLb )
    goto LABEL_44;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !confirmMsgLb
    || (UILabel__set_text(confirmMsgLb, (System_String_o *)normalConfirmInfo, 0LL),
        (normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(normalConfirmInfo, 0, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_44:
    sub_1B8880C(normalConfirmInfo, v14);
  }
  if ( combineRootComponent->fields.state == 4 )
  {
    v59 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v59,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__148_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v59, 0LL, 0LL, v60);
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
  void *exceedConfirmInfo; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v19; // x1
  __int64 v20; // x25
  float v21; // s8
  unsigned __int64 v22; // x24
  bool v23; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x25
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v26; // x7
  float y; // s9
  int v28; // w22
  int v29; // w9
  float v30; // s1
  float z; // s2
  float v32; // s0
  UILabel_o *exceedConfirmSpendQpTxtLb; // x22
  UILabel_o *exceedConfirmHaveQpTxtLb; // x22
  UILabel_o *exceedConfirmSpendQpLb; // x22
  System_String_o *v36; // x23
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  UILabel_o *exceedConfirmHaveQpLb; // x21
  System_String_o *v42; // x22
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x0
  UILabel_o *exceedMaterialMsgLb; // x20
  UILabel_o *exceedConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v50; // x20
  const MethodInfo *v51; // x5
  int32_t v52; // [xsp+18h] [xbp-58h] BYREF
  int32_t v53; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5ECD4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SetRarityDialogControl__SetExceedMaterialInfo_b__146_0__);
    sub_1B885B0(&StringLiteral_9211/*"NEED_QP"*/);
    sub_1B885B0(&StringLiteral_3662/*"COMBINE_HAVE_QP"*/);
    sub_1B885B0(&StringLiteral_3810/*"CONFIRM_COMBINE_MSG"*/);
    sub_1B885B0(&StringLiteral_3661/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_3694/*"COMBINE_SPEND_QP"*/);
    byte_4A5ECD4 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v15);
  SetRarityDialogControl__DefaultBgSize(this, v16);
  exceedConfirmInfo = this->fields.exceedConfirmTitleLb;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  UILabel__set_text((UILabel_o *)exceedConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_41;
  UILabel__set_text(cancelBtnLb, (System_String_o *)exceedConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_41;
  UILabel__set_text(decideBtnLb, (System_String_o *)exceedConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v19);
  if ( !list )
    goto LABEL_41;
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  LODWORD(v20) = list->max_length;
  v21 = *((float *)exceedConfirmInfo + 12);
  if ( (int)v20 >= 1 )
  {
    v22 = 0LL;
    v23 = 0;
    do
    {
      if ( v23 )
        goto LABEL_41;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
      exceedConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !exceedConfirmInfo )
        goto LABEL_41;
      exceedConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)exceedConfirmInfo,
                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v22 >= list->max_length )
        sub_1B88814(exceedConfirmInfo, v13);
      if ( !exceedConfirmInfo )
        goto LABEL_41;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)exceedConfirmInfo,
        v22,
        baseData,
        list->m_Items[v22],
        0,
        0,
        0LL,
        v26);
      exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
      v20 = *(_QWORD *)&list->max_length;
      ++v22;
      v23 = exceedConfirmInfo == 0LL;
    }
    while ( (__int64)v22 < (int)v20 );
    if ( !exceedConfirmInfo )
      goto LABEL_41;
  }
  y = this->fields.center.fields.y;
  v28 = *((_DWORD *)exceedConfirmInfo + 11);
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  if ( v28 >= (int)v20 )
    v29 = v20;
  else
    v29 = v28;
  v30 = 55.0;
  if ( v28 >= (int)v20 )
    v30 = y;
  v32 = (float)(this->fields.center.fields.x - (float)((float)(v21 * 0.5) * (float)(v29 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)exceedConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v30 - 1),
    0LL);
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  v54.fields.x = 0.5;
  v54.fields.y = 0.5;
  v54.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)exceedConfirmInfo, v54, 0LL);
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  UIGrid__set_repositionNow((UIGrid_o *)exceedConfirmInfo, 1, 0LL);
  exceedConfirmSpendQpTxtLb = this->fields.exceedConfirmSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3694/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !exceedConfirmSpendQpTxtLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmSpendQpTxtLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmHaveQpTxtLb = this->fields.exceedConfirmHaveQpTxtLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3662/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !exceedConfirmHaveQpTxtLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmHaveQpTxtLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmSpendQpLb = this->fields.exceedConfirmSpendQpLb;
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  v53 = spendQp;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v37, v38, v39);
  exceedConfirmInfo = System_String__Format(v36, v40, 0LL);
  if ( !exceedConfirmSpendQpLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmSpendQpLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmHaveQpLb = this->fields.exceedConfirmHaveQpLb;
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  v52 = haveQp;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v43, v44, v45);
  exceedConfirmInfo = System_String__Format(v42, v46, 0LL);
  if ( !exceedConfirmHaveQpLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmHaveQpLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedMaterialMsgLb = this->fields.exceedMaterialMsgLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3661/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, 0LL);
  if ( !exceedMaterialMsgLb
    || (UILabel__set_text(exceedMaterialMsgLb, (System_String_o *)exceedConfirmInfo, 0LL),
        exceedConfirmMsgLb = this->fields.exceedConfirmMsgLb,
        exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"CONFIRM_COMBINE_MSG"*/, 0LL),
        !exceedConfirmMsgLb)
    || (UILabel__set_text(exceedConfirmMsgLb, (System_String_o *)exceedConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_41:
    sub_1B8880C(exceedConfirmInfo, v13);
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v50 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v50,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetExceedMaterialInfo_b__146_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 0, v50, 0LL, 0LL, v51);
  }
}


void __fastcall SetRarityDialogControl__SetFriendshipExceedInfo(
        SetRarityDialogControl_o *this,
        System_String_o *msg,
        int32_t spendQp,
        int32_t haveQp,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_GameObject_o *friendshipExceedConfirmInfo; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  UILabel_o *cancelBtnLb; // x22
  UILabel_o *decideBtnLb; // x22
  UILabel_o *friendshipExceedSpendQpTxtLb; // x22
  UILabel_o *friendshipExceedHaveQpTxtLb; // x22
  UILabel_o *friendshipExceedSpendQpLb; // x22
  System_String_o *v18; // x23
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  UILabel_o *friendshipExceedHaveQpLb; // x21
  System_String_o *v24; // x22
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  UILabel_o *friendshipExceedMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v31; // x20
  const MethodInfo *v32; // x5
  int32_t v33; // [xsp+8h] [xbp-48h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5ECE3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__161_0__);
    sub_1B885B0(&StringLiteral_9211/*"NEED_QP"*/);
    sub_1B885B0(&StringLiteral_3662/*"COMBINE_HAVE_QP"*/);
    sub_1B885B0(&StringLiteral_6487/*"FRIENDSHIP_EXCEED_SPEND_QP"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_3818/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/);
    byte_4A5ECE3 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v11);
  SetRarityDialogControl__DefaultBgSize(this, v12);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)this->fields.friendshipExceedTitleLb;
  if ( !friendshipExceedConfirmInfo )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)friendshipExceedConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0LL);
  if ( !cancelBtnLb )
    goto LABEL_21;
  UILabel__set_text(cancelBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0LL);
  if ( !decideBtnLb )
    goto LABEL_21;
  UILabel__set_text(decideBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedSpendQpTxtLb = this->fields.friendshipExceedSpendQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_6487/*"FRIENDSHIP_EXCEED_SPEND_QP"*/,
                                                              0LL);
  if ( !friendshipExceedSpendQpTxtLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedSpendQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedHaveQpTxtLb = this->fields.friendshipExceedHaveQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3662/*"COMBINE_HAVE_QP"*/,
                                                              0LL);
  if ( !friendshipExceedHaveQpTxtLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedHaveQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedSpendQpLb = this->fields.friendshipExceedSpendQpLb;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  v34 = spendQp;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v19, v20, v21);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v18, v22, 0LL);
  if ( !friendshipExceedSpendQpLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedSpendQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedHaveQpLb = this->fields.friendshipExceedHaveQpLb;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  v33 = haveQp;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v25, v26, v27);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v24, v28, 0LL);
  if ( !friendshipExceedHaveQpLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedHaveQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedMsgLb = this->fields.friendshipExceedMsgLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3818/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/,
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
    sub_1B8880C(friendshipExceedConfirmInfo, v9);
  }
  if ( combineRootComponent->fields.state == 12 )
  {
    v31 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v31,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__161_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v31, 0LL, 0LL, v32);
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
  __int64 v13; // x20
  UnityEngine_GameObject_o *limitUpConfirmInfo; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  UILabel_o *cancelBtnLb; // x23
  UILabel_o *decideBtnLb; // x23
  UILabel_o *limitUpConfirmSpendQpTxtLb; // x23
  UILabel_o *limitUpConfirmHaveQpTxtLb; // x23
  UILabel_o *limitUpConfirmSpendQpLb; // x23
  System_String_o *v30; // x24
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  UILabel_o *limitUpConfirmHaveQpLb; // x22
  System_String_o *v36; // x23
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  UILabel_o *limitUpConfirmMsgLb; // x21
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v43; // x21
  const MethodInfo *v44; // x5
  int32_t v45; // [xsp+8h] [xbp-48h] BYREF
  int32_t v46; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5ECD9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SetRarityDialogControl___c__DisplayClass151_0__SetLimitUpInfo_b__0__);
    sub_1B885B0(&SetRarityDialogControl___c__DisplayClass151_0_TypeInfo);
    sub_1B885B0(&StringLiteral_9211/*"NEED_QP"*/);
    sub_1B885B0(&StringLiteral_3662/*"COMBINE_HAVE_QP"*/);
    sub_1B885B0(&StringLiteral_3810/*"CONFIRM_COMBINE_MSG"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_3694/*"COMBINE_SPEND_QP"*/);
    byte_4A5ECD9 = 1;
  }
  v13 = sub_1B887FC(SetRarityDialogControl___c__DisplayClass151_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_22;
  *(_QWORD *)(v13 + 16) = baseData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)baseData, v16, v17);
  *(_QWORD *)(v13 + 24) = combineLimitUpWarningDialog;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)combineLimitUpWarningDialog, v18, v19);
  *(_QWORD *)(v13 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)this, v20, v21);
  SetRarityDialogControl__DisableConfirmInfo(this, v22);
  limitUpConfirmInfo = this->fields.limitUpConfirmInfo;
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0LL);
  limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v23);
  SetRarityDialogControl__DefaultBgSize(this, v24);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.limitUpTitleLb;
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)limitUpConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_22;
  UILabel__set_text(cancelBtnLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_22;
  UILabel__set_text(decideBtnLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmSpendQpTxtLb = this->fields.limitUpConfirmSpendQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3694/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !limitUpConfirmSpendQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmSpendQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmHaveQpTxtLb = this->fields.limitUpConfirmHaveQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3662/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !limitUpConfirmHaveQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmHaveQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmSpendQpLb = this->fields.limitUpConfirmSpendQpLb;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  v46 = spendQp;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v31, v32, v33);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v30, v34, 0LL);
  if ( !limitUpConfirmSpendQpLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmSpendQpLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmHaveQpLb = this->fields.limitUpConfirmHaveQpLb;
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  v45 = haveQp;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v37, v38, v39);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v36, v40, 0LL);
  if ( !limitUpConfirmHaveQpLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmHaveQpLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmMsgLb = this->fields.limitUpConfirmMsgLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !limitUpConfirmMsgLb
    || (UILabel__set_text(limitUpConfirmMsgLb, (System_String_o *)limitUpConfirmInfo, 0LL),
        (limitUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)limitUpConfirmInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 0, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_22:
    sub_1B8880C(limitUpConfirmInfo, v15);
  }
  if ( combineRootComponent->fields.state == 5 )
  {
    v43 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v43,
      (Il2CppObject *)v13,
      Method_SetRarityDialogControl___c__DisplayClass151_0__SetLimitUpInfo_b__0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v43, 0LL, 0LL, v44);
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
  UnityEngine_GameObject_o *npUpConfirmInfo; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *npUpTitleLb; // x21
  System_String_o **v29; // x8
  UILabel_o *cancelBtnLb; // x21
  UILabel_o *decideBtnLb; // x21
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v33; // x20
  System_Action_o *v34; // x21
  const MethodInfo *v35; // x5
  SetRarityDialogControl_o *v36; // x0
  int32_t v37; // w1
  const MethodInfo *v38; // [xsp+0h] [xbp-70h]

  if ( (byte_4A5ECDC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SetRarityDialogControl_DefaultBgSize__);
    sub_1B885B0(&Method_SetRarityDialogControl__SetNpCombineInfo_b__154_0__);
    sub_1B885B0(&Method_SetRarityDialogControl__SetNpCombineInfo_b__154_1__);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_3838/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/);
    sub_1B885B0(&StringLiteral_3836/*"CONFIRM_TITLE_TD_COMBINE"*/);
    byte_4A5ECDC = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  npUpConfirmInfo = this->fields.npUpConfirmInfo;
  if ( !npUpConfirmInfo )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0LL);
  this->fields.npBaseData = baseData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.npBaseData, (int32_t)baseData, v19, v20);
  this->fields.npSelectMtUsrSvtIdList = selectUsrSvtIdList;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.npSelectMtUsrSvtIdList,
    (int32_t)selectUsrSvtIdList,
    v21,
    v22);
  this->fields.npLvUpData = updata;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.npLvUpData, (int32_t)updata, v23, v24);
  this->fields.npIsExceedMaxLv = isExceedMaxLv;
  this->fields.npIsCombineSvt = isCombineSvt;
  this->fields.npIsExceededMaterial = isExceededMaterial;
  npUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !npUpConfirmInfo )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v25);
  SetRarityDialogControl__DefaultBgSize(this, v26);
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
    v38);
  npUpTitleLb = this->fields.npUpTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v29 = (System_String_o **)(reConfirmation ? &StringLiteral_3838/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/ : &StringLiteral_3836/*"CONFIRM_TITLE_TD_COMBINE"*/);
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(*v29, 0LL);
  if ( !npUpTitleLb )
    goto LABEL_27;
  UILabel__set_text(npUpTitleLb, (System_String_o *)npUpConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb
    || (UILabel__set_text(cancelBtnLb, (System_String_o *)npUpConfirmInfo, 0LL),
        decideBtnLb = this->fields.decideBtnLb,
        npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/,
                                                        0LL),
        !decideBtnLb)
    || (UILabel__set_text(decideBtnLb, (System_String_o *)npUpConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_27:
    sub_1B8880C(npUpConfirmInfo, v17);
  }
  if ( combineRootComponent->fields.state == 11 )
  {
    if ( (this->fields.npIsExceedMaxLv || this->fields.npIsCombineSvt || this->fields.npIsExceededMaterial)
      && !reConfirmation )
    {
      v33 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__154_0__, 0LL);
      v34 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v34, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
      v36 = this;
      v37 = 0;
    }
    else
    {
      v33 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__154_1__, 0LL);
      v34 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v34, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
      v37 = 8;
      v36 = this;
    }
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v36, v37, v33, 0LL, v34, v35);
  }
}


void __fastcall SetRarityDialogControl__SetSkillNpCombineInfo(
        SetRarityDialogControl_o *this,
        SetLevelUpData_array *upDataList,
        System_String_o *titleMsg,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_GameObject_o *skillUpConfirmInfo; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  SetLevelUpData_o *v11; // x23
  signed int max_length; // w21
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct UILabel_o *upTargetSvtNameBef; // x22
  UnityEngine_GameObject_o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  struct UILabel_o *upTargetSvtNameAft; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  struct UILabel_o *upTargetSkillNameBef; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  struct UILabel_o *upTargetSkillNameAft; // x22
  SetLevelUpData_o *v32; // x8
  UnityEngine_GameObject_o *v33; // x22
  int32_t v34; // w2
  int32_t v35; // w3
  SetLevelUpData_o *v36; // x8
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  SetLevelUpData_o *v41; // x8
  struct System_String_o *targetName; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  SetLevelUpData_o *v45; // x8
  struct System_String_o *v46; // x1
  UnityEngine_GameObject_c *klass; // x8
  __int64 v48; // x20
  UIExtrusionLabel_o *currentLvLb; // x20
  UIExtrusionLabel_o *resLvLb; // x20
  UILabel_o *upSpendQpTxtLb; // x20
  UILabel_o *upHaveQpTxtLb; // x20
  UILabel_o *upSpendQpLb; // x20
  System_String_o *v54; // x21
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x0
  UILabel_o *upHaveQpLb; // x20
  System_String_o *v60; // x21
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  Il2CppObject *v64; // x0
  UILabel_o *upConfirmMsgLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v69; // x20
  const MethodInfo *v70; // x5
  __int64 v71; // x0
  int32_t haveQp; // [xsp+8h] [xbp-48h] BYREF
  int32_t spendQp; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5ECDA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__152_0__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&UILabel___TypeInfo);
    sub_1B885B0(&StringLiteral_9211/*"NEED_QP"*/);
    sub_1B885B0(&StringLiteral_3662/*"COMBINE_HAVE_QP"*/);
    sub_1B885B0(&StringLiteral_3810/*"CONFIRM_COMBINE_MSG"*/);
    sub_1B885B0(&StringLiteral_25465/*"："*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_3694/*"COMBINE_SPEND_QP"*/);
    byte_4A5ECDA = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)upDataList);
  skillUpConfirmInfo = this->fields.skillUpConfirmInfo;
  if ( !skillUpConfirmInfo
    || (UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0LL),
        (skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0LL),
        SetRarityDialogControl__MoveAlpha(this, v9),
        SetRarityDialogControl__DefaultBgSize(this, v10),
        !upDataList) )
  {
LABEL_72:
    sub_1B8880C(skillUpConfirmInfo, v7);
  }
  if ( !upDataList->max_length )
    goto LABEL_73;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTitleLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  v11 = upDataList->m_Items[0];
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, titleMsg, 0LL);
  if ( !v11 )
    goto LABEL_72;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetRubyLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, v11->fields.targetRuby, 0LL);
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
    v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
    GameObjectExtensions__SetLocalPositionX(v17, 11.0, 0LL);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upHaveQpTxtLb;
    if ( !skillUpConfirmInfo )
      goto LABEL_72;
    v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
    GameObjectExtensions__SetLocalPositionX(v18, 11.0, 0LL);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1B88658(UILabel___TypeInfo, 4LL);
    if ( !skillUpConfirmInfo )
      goto LABEL_72;
    upTargetSvtNameBef = this->fields.upTargetSvtNameBef;
    v22 = skillUpConfirmInfo;
    if ( upTargetSvtNameBef )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1B886EC(
                                                         this->fields.upTargetSvtNameBef,
                                                         skillUpConfirmInfo->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_74;
    }
    if ( !LODWORD(v22[1].klass) )
      goto LABEL_73;
    v22[1].monitor = upTargetSvtNameBef;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v22[1].monitor, (int32_t)upTargetSvtNameBef, v19, v20);
    upTargetSvtNameAft = this->fields.upTargetSvtNameAft;
    if ( upTargetSvtNameAft )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1B886EC(
                                                         this->fields.upTargetSvtNameAft,
                                                         v22->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_74;
    }
    if ( LODWORD(v22[1].klass) <= 1 )
      goto LABEL_73;
    *(_QWORD *)&v22[1].fields.m_CachedPtr = upTargetSvtNameAft;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v22[1].fields, (int32_t)upTargetSvtNameAft, v23, v24);
    upTargetSkillNameBef = this->fields.upTargetSkillNameBef;
    if ( upTargetSkillNameBef )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1B886EC(
                                                         this->fields.upTargetSkillNameBef,
                                                         v22->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_74;
    }
    if ( LODWORD(v22[1].klass) <= 2 )
      goto LABEL_73;
    v22[2].klass = (UnityEngine_GameObject_c *)upTargetSkillNameBef;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v22[2], (int32_t)upTargetSkillNameBef, v26, v27);
    upTargetSkillNameAft = this->fields.upTargetSkillNameAft;
    if ( upTargetSkillNameAft )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1B886EC(
                                                         this->fields.upTargetSkillNameAft,
                                                         v22->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
      {
LABEL_74:
        v71 = sub_1B88830(skillUpConfirmInfo);
        sub_1B886D8(v71, 0LL);
      }
    }
    if ( LODWORD(v22[1].klass) > 3 )
    {
      v22[2].monitor = upTargetSkillNameAft;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v22[2].monitor, (int32_t)upTargetSkillNameAft, v29, v30);
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1B88658(string___TypeInfo, 4LL);
      if ( upDataList->max_length )
      {
        v32 = upDataList->m_Items[0];
        if ( !v32 )
          goto LABEL_72;
        v33 = skillUpConfirmInfo;
        skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Concat_61707032(
                                                           v32->fields.displayText,
                                                           (System_String_o *)StringLiteral_25465/*"："*/,
                                                           0LL);
        if ( !v33 )
          goto LABEL_72;
        if ( LODWORD(v33[1].klass) )
        {
          v33[1].monitor = skillUpConfirmInfo;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v33[1].monitor, (int32_t)skillUpConfirmInfo, v34, v35);
          if ( upDataList->max_length > 1 )
          {
            v36 = upDataList->m_Items[1];
            if ( !v36 )
              goto LABEL_72;
            skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Concat_61707032(
                                                               v36->fields.displayText,
                                                               (System_String_o *)StringLiteral_25465/*"："*/,
                                                               0LL);
            if ( LODWORD(v33[1].klass) > 1 )
            {
              *(_QWORD *)&v33[1].fields.m_CachedPtr = skillUpConfirmInfo;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v33[1].fields, (int32_t)skillUpConfirmInfo, v37, v38);
              if ( upDataList->max_length )
              {
                v41 = upDataList->m_Items[0];
                if ( !v41 )
                  goto LABEL_72;
                if ( LODWORD(v33[1].klass) > 2 )
                {
                  targetName = v41->fields.targetName;
                  v33[2].klass = (UnityEngine_GameObject_c *)targetName;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)&v33[2], (int32_t)targetName, v39, v40);
                  if ( upDataList->max_length > 1 )
                  {
                    v45 = upDataList->m_Items[1];
                    if ( !v45 )
                      goto LABEL_72;
                    if ( LODWORD(v33[1].klass) > 3 )
                    {
                      v46 = v45->fields.targetName;
                      v33[2].monitor = v46;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)&v33[2].monitor, (int32_t)v46, v43, v44);
                      klass = v22[1].klass;
                      if ( (int)klass < 1 )
                        goto LABEL_57;
                      v48 = 0LL;
                      while ( (unsigned int)v48 < (unsigned int)klass && (unsigned int)v48 < LODWORD(v33[1].klass) )
                      {
                        skillUpConfirmInfo = (UnityEngine_GameObject_o *)*((_QWORD *)&v22[1].monitor + v48);
                        if ( !skillUpConfirmInfo )
                          goto LABEL_72;
                        UILabel__set_text(
                          (UILabel_o *)skillUpConfirmInfo,
                          *((System_String_o **)&v33[1].monitor + v48),
                          0LL);
                        klass = v22[1].klass;
                        if ( (int)++v48 >= (int)klass )
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
    sub_1B88814(skillUpConfirmInfo, v7);
  }
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetNameLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, v11->fields.targetName, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetSvtNameBef;
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v13, 0LL);
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 0, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upSpendQpTxtLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v14, -5.0, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upHaveQpTxtLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v15, -5.0, 0LL);
LABEL_57:
  currentLvLb = this->fields.currentLvLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v11 + 64, 0LL);
  if ( !currentLvLb )
    goto LABEL_72;
  UIExtrusionLabel__set_text(currentLvLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  resLvLb = this->fields.resLvLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v11 + 68, 0LL);
  if ( !resLvLb )
    goto LABEL_72;
  UIExtrusionLabel__set_text(resLvLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3694/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !upSpendQpTxtLb )
    goto LABEL_72;
  UILabel__set_text(upSpendQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3662/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !upHaveQpTxtLb )
    goto LABEL_72;
  UILabel__set_text(upHaveQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upSpendQpLb = this->fields.upSpendQpLb;
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  spendQp = v11->fields.spendQp;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendQp, v55, v56, v57);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v54, v58, 0LL);
  if ( !upSpendQpLb )
    goto LABEL_72;
  UILabel__set_text(upSpendQpLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upHaveQpLb = this->fields.upHaveQpLb;
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  haveQp = v11->fields.haveQp;
  v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveQp, v61, v62, v63);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v60, v64, 0LL);
  if ( !upHaveQpLb )
    goto LABEL_72;
  UILabel__set_text(upHaveQpLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upConfirmMsgLb = this->fields.upConfirmMsgLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !upConfirmMsgLb )
    goto LABEL_72;
  UILabel__set_text(upConfirmMsgLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_72;
  UILabel__set_text(cancelBtnLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_72;
  UILabel__set_text(decideBtnLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_72;
  if ( combineRootComponent->fields.state == 10 )
  {
    v69 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v69,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__152_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v69, 0LL, 0LL, v70);
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
  UnityEngine_GameObject_o *specialAscensionConfirmInfo; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  System_String_o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  System_Action_o *v19; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v21; // x21
  const MethodInfo *v22; // x5
  SetRarityDialogControl_o *v23; // x0
  int32_t v24; // w1

  if ( (byte_4A5ECE4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SetRarityDialogControl__SetSpecialAscension_b__162_0__);
    sub_1B885B0(&Method_SetRarityDialogControl__SetSpecialAscension_b__162_1__);
    sub_1B885B0(&Method_SetRarityDialogControl__SetSpecialAscension_b__162_2__);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_12184/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/);
    sub_1B885B0(&StringLiteral_12188/*"SPECIAL_ASCENSION_WARNING1_TXT"*/);
    sub_1B885B0(&StringLiteral_12189/*"SPECIAL_ASCENSION_WARNING2_TXT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ECE4 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v12);
  SetRarityDialogControl__DefaultBgSize(this, v13);
  this->fields.specialAscensionConfirm = confirm;
  this->fields.specialAscensionWarning1 = warning1;
  this->fields.specialAscensionWarning2 = warning2;
  if ( confirm )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12184/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/, 0LL);
    this->fields.specialAscensionConfirm = 0;
  }
  else if ( warning1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12188/*"SPECIAL_ASCENSION_WARNING1_TXT"*/, 0LL);
    this->fields.specialAscensionWarning1 = 0;
  }
  else if ( warning2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12189/*"SPECIAL_ASCENSION_WARNING2_TXT"*/, 0LL);
    this->fields.specialAscensionWarning2 = 0;
  }
  else
  {
    v14 = (System_String_o *)StringLiteral_1/*""*/;
  }
  specialAscensionConfirmInfo = this->fields.specialAscensionConfirmInfo;
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              specialAscensionConfirmInfo,
                                                              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___);
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  SpecialAscensionConfirmInfo__SetSpecialAscensionConfirmInfo(
    (SpecialAscensionConfirmInfo_o *)specialAscensionConfirmInfo,
    v14,
    v15,
    v16);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0LL);
  if ( !cancelBtnLb )
    goto LABEL_37;
  UILabel__set_text(cancelBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0LL);
  if ( !decideBtnLb
    || (UILabel__set_text(decideBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0LL),
        (specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (specialAscensionConfirmInfo = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)specialAscensionConfirmInfo,
                                        0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 0, 0LL),
        v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v19,
          (Il2CppObject *)this,
          Method_SetRarityDialogControl__SetSpecialAscension_b__162_0__,
          0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_37:
    sub_1B8880C(specialAscensionConfirmInfo, v10);
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
      v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v21,
        (Il2CppObject *)this,
        Method_SetRarityDialogControl__SetSpecialAscension_b__162_1__,
        0LL);
      v24 = 8;
      v23 = this;
      goto LABEL_35;
    }
    v21 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__162_2__, 0LL);
    v23 = this;
    v24 = 0;
LABEL_35:
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v23, v24, v21, v19, 0LL, v22);
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
  UnityEngine_GameObject_o *allDispConfirmInfo; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  UILabel_o *cancelBtnLb; // x26
  UILabel_o *decideBtnLb; // x26
  const MethodInfo *v22; // x1
  struct UIGrid_o *allSvtGrid; // x8
  float v24; // s9
  int32_t v25; // w26
  __int64 v26; // x1
  UnityEngine_Component_o *v27; // x0
  Il2CppObject *key; // x27
  char value; // w29
  UnityEngine_GameObject_o *svtFaceInfo; // x28
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v33; // x1
  Il2CppObject *Component_object; // x0
  __int64 v35; // x1
  float y; // s8
  int32_t Count; // w25
  struct UIGrid_o *v38; // x8
  int32_t maxPerLine; // w20
  int32_t v40; // w24
  int32_t v41; // w10
  float v42; // s1
  float z; // s2
  float v44; // s0
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v48; // x25
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  Il2CppObject *v52; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v54; // x24
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x0
  UILabel_o *allRareMsgLb; // x20
  UILabel_o *allLimitRareLb; // x20
  UILabel_o *allRareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v63; // x20
  const MethodInfo *v64; // x5
  const MethodInfo *v65; // [xsp+0h] [xbp-E0h]
  int32_t v67; // [xsp+Ch] [xbp-D4h]
  int32_t v68; // [xsp+14h] [xbp-CCh] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v69; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v70; // [xsp+40h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5ECDF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__157_0__);
    sub_1B885B0(&StringLiteral_9211/*"NEED_QP"*/);
    sub_1B885B0(&StringLiteral_3662/*"COMBINE_HAVE_QP"*/);
    sub_1B885B0(&StringLiteral_3810/*"CONFIRM_COMBINE_MSG"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_10949/*"RARE_MATERIAL_INFO_MSG"*/);
    sub_1B885B0(&StringLiteral_3694/*"COMBINE_SPEND_QP"*/);
    byte_4A5ECDF = 1;
  }
  memset(&v70, 0, sizeof(v70));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v18);
  SetRarityDialogControl__DefaultBgSize(this, v19);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allTitleLb;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UILabel__set_text((UILabel_o *)allDispConfirmInfo, title, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_69;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_69;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v22);
  if ( !selectedList )
    goto LABEL_69;
  v67 = haveQp;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_319FDD4 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allSvtGrid = this->fields.allSvtGrid;
  if ( !allSvtGrid )
    goto LABEL_69;
  v24 = allSvtGrid->fields.cellWidth * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v69,
    selectedList,
    (const MethodInfo_31A0528 *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v25 = 0;
  v70 = v69;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v70,
            (const MethodInfo_32BCFF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v27 = (UnityEngine_Component_o *)this->fields.allSvtGrid;
    if ( !v27 )
      sub_1B8880C(0LL, v26);
    key = v70.fields._current.fields.key;
    value = (char)v70.fields._current.fields.value;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v27, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Object )
      sub_1B8880C(0LL, v33);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_object )
      sub_1B8880C(0LL, v35);
    MaterialSvtInfo__setMaterialSvtInfo_45332512(
      (MaterialSvtInfo_o *)Component_object,
      v25++,
      baseData,
      (int64_t)key,
      0,
      0,
      value != 0,
      0LL,
      v65);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v70,
    (const MethodInfo_32BD110 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_319FDD4 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_319FDD4 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v38 = this->fields.allSvtGrid;
  if ( !v38 )
    goto LABEL_69;
  maxPerLine = v38->fields.maxPerLine;
  v40 = (int)allDispConfirmInfo;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this->fields.allSvtGrid,
                                                     0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  if ( v40 <= maxPerLine )
    v41 = Count;
  else
    v41 = maxPerLine;
  v42 = 70.0;
  if ( v40 <= maxPerLine )
    v42 = y;
  z = this->fields.center.fields.z;
  v44 = (float)(this->fields.center.fields.x - (float)(v24 * (float)(v41 - 1))) * 0.47;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v42 - 1),
    0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)allDispConfirmInfo,
                                                     0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  v71.fields.x = 0.47;
  v71.fields.y = 0.47;
  v71.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v71, 0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UIGrid__set_repositionNow((UIGrid_o *)allDispConfirmInfo, 1, 0LL);
  allSpendQpTxtLb = this->fields.allSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3694/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !allSpendQpTxtLb )
    goto LABEL_69;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3662/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !allHaveQpTxtLb )
    goto LABEL_69;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allSpendQpLb = this->fields.allSpendQpLb;
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  LODWORD(v69.fields._dictionary) = spendQp;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v49, v50, v51);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v48, v52, 0LL);
  if ( !allSpendQpLb )
    goto LABEL_69;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpLb = this->fields.allHaveQpLb;
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_9211/*"NEED_QP"*/, 0LL);
  v68 = v67;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68, v55, v56, v57);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v54, v58, 0LL);
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
                                                       (System_String_o *)StringLiteral_10949/*"RARE_MATERIAL_INFO_MSG"*/,
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
                                                       (System_String_o *)StringLiteral_10949/*"RARE_MATERIAL_INFO_MSG"*/,
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
    sub_1B8880C(allDispConfirmInfo, v16);
  }
LABEL_59:
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !allRareConfirmMsgLb )
    goto LABEL_69;
  UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_69;
  if ( combineRootComponent->fields.state == 4 )
  {
    v63 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v63,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__157_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v63, 0LL, 0LL, v64);
  }
}


void __fastcall SetRarityDialogControl___SetAllDispConfirmCombine_b__149_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B8880C(0LL, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetAppendSkillCombineInfo_b__153_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B8880C(0LL, method);
  CombineRootComponent__RequestAppendSkillCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmCombine_b__147_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B8880C(0LL, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__155_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B8880C(0LL, method);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__155_1(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.lvExceedCtr) == 0LL )
    sub_1B8880C(this, method);
  LevelExceedControl__OnClickCheckLvExceed((LevelExceedControl_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__156_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B8880C(0LL, method);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmRarityInfo_b__145_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B8880C(0LL, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmSvtEqCombine_b__148_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B8880C(0LL, method);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetExceedMaterialInfo_b__146_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.svtCombineCtr) == 0LL )
    sub_1B8880C(this, method);
  ServantCombineControl__CheckRareSvt((ServantCombineControl_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetFriendshipExceedInfo_b__161_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
  CombineRootComponent__RequestTdCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetSkillNpCombineInfo_b__152_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(this, method);
  if ( specialAscensionCtr->fields.pushExeButton )
    specialAscensionCtr->fields.pushExeButton = 0;
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__162_1(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x21
  System_Action_o *v7; // x22

  if ( (byte_4A5ECEC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&CombineRootComponent_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SetRarityDialogControl__SetSpecialAscension_b__162_3__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_12186/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ECEC = 1;
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
    sub_1B8880C(combineRootComponent, v3);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12186/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0LL);
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__162_3__, 0LL);
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
    0LL,
    0.0,
    0LL);
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__162_2(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *v3; // x1
  const MethodInfo *v4; // x5
  Il2CppObject *Instance; // x20
  System_String_o *v6; // x21
  System_Action_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A5ECED & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&CombineRootComponent_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SetRarityDialogControl__SetSpecialAscension_b__162_4__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_12186/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5ECED = 1;
  }
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
  if ( CombineRootComponent__IsEnableSpecialAscension(0LL) )
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12186/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0LL);
    v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__162_4__, 0LL);
    if ( !Instance )
      sub_1B8880C(v8, v9);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(0LL, method);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5ECEE & 1) == 0 )
  {
    sub_1B885B0(&SetRarityDialogControl___c_TypeInfo);
    byte_4A5ECEE = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(SetRarityDialogControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SetRarityDialogControl___c_TypeInfo->static_fields->__9 = (struct SetRarityDialogControl___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)SetRarityDialogControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  return NpCombineControl__CheckConfirm_44932636(x, 0LL);
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
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t UserId; // x21
  int64_t Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  int64_t v8; // x22
  unsigned __int64 v9; // x26
  __int64 v10; // x23
  __int128 v11; // q0
  __int64 v12; // x24
  __int64 v13; // x25
  struct UserServantEntity_o *baseData; // x8
  int v15; // w24
  __int128 v16; // q0
  struct UserServantEntity_o *v17; // x8
  __int128 v18; // q0
  int64_t v19; // x24
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Predicate_object__o *v26; // x21
  Il2CppObject *v27; // x22
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  CombineLimitUpWarningDialog_ClickDelegate_o *_9__2; // x21
  CombineLimitUpWarningDialog_o *combineLimitUpWarningDialog; // x20
  int32_t v33; // w2
  int32_t v34; // w3
  struct SetRarityDialogControl_o *_4__this; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4A5ECEF & 1) == 0 )
  {
    sub_1B885B0(&CombineLimitUpWarningDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&System_Predicate_UserServantEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SetRarityDialogControl___c__SetLimitUpInfo_b__151_1__);
    sub_1B885B0(&Method_SetRarityDialogControl___c__DisplayClass151_0__SetLimitUpInfo_b__2__);
    sub_1B885B0(&SetRarityDialogControl___c_TypeInfo);
    byte_4A5ECEF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_47;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_47;
  v7 = *(_QWORD *)(Instance + 24);
  v8 = Instance;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v7 )
        sub_1B88814(Instance, v6);
      v10 = *(_QWORD *)(v8 + 32 + 8 * v9);
      if ( v10 )
      {
        v11 = *(_OWORD *)(v10 + 64);
        *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v10 + 48);
        *(_OWORD *)&v39.fields.fakeValue = v11;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v38 = v39;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v38, 0LL);
        if ( Instance == UserId )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v13 = *(_QWORD *)(v10 + 80);
            v12 = *(_QWORD *)(v10 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v40.fields.currentCryptoKey = v13;
            *(_QWORD *)&v40.fields.fakeValue = v12;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v40, 0LL);
            baseData = this->fields.baseData;
            if ( !baseData )
              goto LABEL_47;
            v15 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(baseData->fields.svtId, 0LL);
            if ( v15 == (_DWORD)Instance )
            {
              v16 = *(_OWORD *)(v10 + 32);
              *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v10 + 16);
              *(_OWORD *)&v39.fields.fakeValue = v16;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v37 = v39;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v37, 0LL);
              v17 = this->fields.baseData;
              if ( !v17 )
                goto LABEL_47;
              v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
              v19 = Instance;
              *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v36.fields.fakeValue = v18;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v36, 0LL);
              if ( v19 != Instance )
              {
                if ( !v3 )
                  goto LABEL_47;
                items = v3->fields._items;
                v23 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v3->fields._version;
                if ( !items )
                  goto LABEL_47;
                size = v3->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v3,
                    (Il2CppObject *)v10,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                }
                else
                {
                  v25 = &items->obj.klass + size;
                  v3->fields._size = size + 1;
                  v25[4] = (Il2CppClass *)v10;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), v10, v20, v21);
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
    v26 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_object____ctor(v26, v27, Method_SetRarityDialogControl___c__SetLimitUpInfo_b__151_1__, 0LL);
    static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
    static_fields->__9__151_1 = (struct System_Predicate_UserServantEntity__o *)v26;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__151_1, (int32_t)v26, v29, v30);
  }
  if ( !v3 )
    goto LABEL_47;
  Instance = (int64_t)System_Collections_Generic_List_object___Find(
                        v3,
                        (System_Predicate_T__o *)v26,
                        (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_UserServantEntity__Find__);
  if ( Instance )
  {
    _9__2 = this->fields.__9__2;
    combineLimitUpWarningDialog = this->fields.combineLimitUpWarningDialog;
    if ( !_9__2 )
    {
      _9__2 = (CombineLimitUpWarningDialog_ClickDelegate_o *)sub_1B887FC(CombineLimitUpWarningDialog_ClickDelegate_TypeInfo);
      CombineLimitUpWarningDialog_ClickDelegate___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_SetRarityDialogControl___c__DisplayClass151_0__SetLimitUpInfo_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v33, v34);
    }
    if ( combineLimitUpWarningDialog )
    {
      CombineLimitUpWarningDialog__Open(combineLimitUpWarningDialog, _9__2, 0LL);
      return;
    }
LABEL_47:
    sub_1B8880C(Instance, v6);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_47;
  Instance = (int64_t)_4__this->fields.combineRootComponent;
  if ( !Instance )
    goto LABEL_47;
  CombineRootComponent__RequestLimitUp((CombineRootComponent_o *)Instance, 0LL);
}


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
      sub_1B8880C(this, isDecide);
    }
    CombineRootComponent__RequestLimitUp((CombineRootComponent_o *)this, 0LL);
  }
}