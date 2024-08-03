void __fastcall SetRarityDialogControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FFE49 & 1) == 0 )
  {
    sub_1B640C8(&SetRarityDialogControl_TypeInfo, v1);
    byte_49FFE49 = 1;
  }
  *SetRarityDialogControl_TypeInfo->static_fields = (struct SetRarityDialogControl_StaticFields)xmmword_BA3A70;
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

  if ( (byte_49FFE48 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, selectedList);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4);
    this = (SetRarityDialogControl_o *)sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FFE48 = 1;
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
            sub_1B6432C(this, selectedList);
          v8 = selectedList->m_Items[v7];
          this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            this = (SetRarityDialogControl_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)this,
                                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
            if ( this )
            {
              this = (SetRarityDialogControl_o *)DataMasterBase_object__object__long___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   v8,
                                                   (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
              if ( this )
                goto LABEL_11;
            }
          }
          sub_1B64324(this);
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
  int32_t adjustHp; // w24
  int32_t adjustAtk; // w23
  __int64 v18; // x1
  _BOOL8 IsStatusUp; // x0
  __int64 v20; // x8
  unsigned __int64 v21; // x27
  int v22; // w26
  int v23; // w24
  int64_t v24; // x22
  UserServantEntity_o *v25; // x22
  System_String_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  int v29; // w21
  System_String_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int v33; // w8
  System_String_o *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v38; // [xsp+0h] [xbp-80h]
  int32_t secondMaxAdjustAtk[2]; // [xsp+8h] [xbp-78h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+10h] [xbp-70h] BYREF
  int32_t atkUp[2]; // [xsp+18h] [xbp-68h] BYREF

  v8 = this;
  if ( (byte_49FFE36 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, baseData);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&StringLiteral_12207/*"STATUS_HP_OVER_DIALOG_MSG"*/, v12);
    sub_1B640C8(&StringLiteral_12206/*"STATUS_ATK_OVER_DIALOG_MSG"*/, v13);
    sub_1B640C8(&StringLiteral_12208/*"STATUS_OVER_DIALOG_MSG"*/, v14);
    this = (SetRarityDialogControl_o *)sub_1B640C8(&StringLiteral_1/*""*/, v15);
    byte_49FFE36 = 1;
  }
  if ( !baseData )
LABEL_36:
    sub_1B64324(this);
  adjustHp = baseData->fields.adjustHp;
  adjustAtk = baseData->fields.adjustAtk;
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)atkUp = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  *labelMsg = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C(
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
    v20 = *(_QWORD *)&selectUsrSvtIdList->max_length;
    if ( (int)v20 < 1 )
    {
      v29 = 0;
    }
    else
    {
      v38 = adjustHp;
      v21 = 0LL;
      v22 = 0;
      v23 = 0;
      do
      {
        if ( v21 >= (unsigned int)v20 )
          sub_1B6432C(IsStatusUp, v18);
        v24 = selectUsrSvtIdList->m_Items[v21];
        this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_36;
        this = (SetRarityDialogControl_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !this )
          goto LABEL_36;
        this = (SetRarityDialogControl_o *)DataMasterBase_object__object__long___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             v24,
                                             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !this )
          goto LABEL_36;
        v25 = (UserServantEntity_o *)this;
        IsStatusUp = UserServantEntity__IsStatusUp((UserServantEntity_o *)this, 0LL);
        if ( IsStatusUp )
        {
          *(_QWORD *)atkUp = 0LL;
          UserServantEntity__getStatusUpInfo(v25, &atkUp[1], atkUp, 0LL);
          v22 += atkUp[1] & ~(atkUp[1] >> 31);
          v23 += atkUp[0] & ~(atkUp[0] >> 31);
        }
        LODWORD(v20) = selectUsrSvtIdList->max_length;
        ++v21;
      }
      while ( (__int64)v21 < (int)v20 );
      if ( v22 < 1 || UserServantEntity__isAdjustHpMax(baseData, 0LL) || v22 + v38 <= maxAjustAtk[1] )
      {
        v29 = 0;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12207/*"STATUS_HP_OVER_DIALOG_MSG"*/, 0LL);
        *labelMsg = v26;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)labelMsg, (int32_t)v26, v27, v28);
        v29 = 1;
      }
      if ( v23 >= 1 && !UserServantEntity__isAdjustAtkMax(baseData, 0LL) && v23 + adjustAtk > maxAjustAtk[0] )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12206/*"STATUS_ATK_OVER_DIALOG_MSG"*/, 0LL);
        *labelMsg = v30;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)labelMsg, (int32_t)v30, v31, v32);
        v33 = 1;
        goto LABEL_30;
      }
    }
    v33 = 0;
LABEL_30:
    if ( (v33 & v29) != 0 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12208/*"STATUS_OVER_DIALOG_MSG"*/, 0LL);
      *labelMsg = v34;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)labelMsg, (int32_t)v34, v35, v36);
    }
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
  UnityEngine_GameObject_o *v10; // x0
  struct SetRarityDialogControl_StaticFields *static_fields; // x8
  TweenScale_o *v12; // x20
  UnityEngine_GameObject_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  UnityEngine_Transform_o *v20; // x20
  const MethodInfo *v21; // x1
  UnityEngine_Transform_o *v22; // x0
  UnityEngine_Vector3_o v23; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_49FFE43 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&SetRarityDialogControl_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_5924/*"EndCloseDlg"*/, v4);
    sub_1B640C8(&StringLiteral_5316/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, v5);
    byte_49FFE43 = 1;
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
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  static_fields = SetRarityDialogControl_TypeInfo->static_fields;
  v23.fields.x = static_fields->DIALOG_CLOSE_SCALE;
  v23.fields.y = v23.fields.x;
  v23.fields.z = v23.fields.x;
  v12 = TweenScale__Begin(v10, static_fields->CLOSE_TIME, v23, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
  if ( (transform & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_26;
    v12->fields.method = 6;
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v12->fields.eventReceiver = v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12->fields.eventReceiver, (int32_t)v13, v14, v15);
    v16 = StringLiteral_5924/*"EndCloseDlg"*/;
    v12->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5924/*"EndCloseDlg"*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12->fields.callWhenFinished, v16, v17, v18);
  }
  else
  {
    transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_26;
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    v20 = (UnityEngine_Transform_o *)transform;
    if ( !byte_49F7111 )
    {
      transform = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v19);
      byte_49F7111 = 1;
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
    NpUpConfirmComponent__DestroySvtInfo((NpUpConfirmComponent_o *)transform, v21);
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
    sub_1B64324(transform);
  }
  UIGrid__RemoveAllChild((UIGrid_o *)transform, 0LL);
  v22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__RemoveBackBtn_41447268(v22, (System_String_o *)StringLiteral_5316/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0LL);
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
    sub_1B64324(decideBtnLb);
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
    sub_1B64324(rariryConfirmInfo);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onClickDlgCloseCallBack, 0, v2, v3);
  if ( onClickDlgCloseCallBack )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClickDlgCloseCallBack->fields.m_target)(
      onClickDlgCloseCallBack->fields.original_method_info,
      *(_QWORD *)&onClickDlgCloseCallBack->fields.extra_arg);
}


void __fastcall SetRarityDialogControl__EndOpen(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_49FFE45 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5316/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, method);
    byte_49FFE45 = 1;
  }
  this->fields.isButtonEnable = 1;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41446668(transform, (System_String_o *)StringLiteral_5316/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0LL);
}


void __fastcall SetRarityDialogControl__MoveAlpha(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  SetRarityDialogControl_c *v8; // x8
  UnityEngine_Transform_o *v9; // x20
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x20
  float OPEN_TIME; // s8
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x20
  System_String_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  TweenAlpha_o *v18; // x20
  UnityEngine_GameObject_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFE44 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&Method_SetRarityDialogControl_EndOpen__, v5);
    sub_1B640C8(&SetRarityDialogControl_TypeInfo, v6);
    byte_49FFE44 = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v8 = SetRarityDialogControl_TypeInfo;
  v9 = (UnityEngine_Transform_o *)gameObject;
  if ( !SetRarityDialogControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl_TypeInfo);
    v8 = SetRarityDialogControl_TypeInfo;
  }
  if ( !v9 )
    goto LABEL_19;
  v22.fields.x = v8->static_fields->DIALOG_INITIAL_SCALE;
  v22.fields.y = v22.fields.x;
  v22.fields.z = v22.fields.x;
  UnityEngine_Transform__set_localScale(v9, v22, 0LL);
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  OPEN_TIME = SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME;
  if ( !byte_49F7116 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v10);
    byte_49F7116 = 1;
  }
  TweenScale__Begin(v11, OPEN_TIME, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !gameObject )
    goto LABEL_19;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gameObject->klass[1]._1.castClass)(
    gameObject,
    gameObject->klass[1]._1.declaringType,
    0.005);
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_SetRarityDialogControl_EndOpen__, 0LL);
  if ( !v15 )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)System_Delegate__get_Method((System_Delegate_o *)v15, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  v16 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))gameObject->klass[1]._1.castClass)(
                             gameObject,
                             gameObject->klass[1]._1.declaringType);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    v16,
    SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME,
    0LL);
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18 = TweenAlpha__Begin(v17, SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME, 1.0, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( v18 )
    {
      v18->fields.method = 6;
      v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v18->fields.eventReceiver = v19;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->fields.eventReceiver, (int32_t)v19, v20, v21);
      return;
    }
LABEL_19:
    sub_1B64324(gameObject);
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

  if ( (byte_49FFE47 & 1) == 0 )
  {
    sub_1B640C8(&Method_SetRarityDialogControl_OnClickCancel__, method);
    byte_49FFE47 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v3 = Method_SetRarityDialogControl_OnClickCancel__;
    if ( (*((_BYTE *)Method_SetRarityDialogControl_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_SetRarityDialogControl_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    SetRarityDialogControl__Close(this, v5);
    onClickDlgCancelCallBack = this->fields.onClickDlgCancelCallBack;
    this->fields.onClickDlgOkCallBack = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onClickDlgOkCallBack, 0, v7, v8);
    this->fields.onClickDlgCancelCallBack = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onClickDlgCancelCallBack, 0, v9, v10);
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
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 methodPtr_low; // x9
  __int64 v16; // x9
  __int64 v17; // x1
  __int64 v18; // x2
  CommonUI_o *v19; // x20
  SetRarityDialogControl___c_c *v20; // x8
  System_Action_o *_9__169_0; // x21
  Il2CppObject *v22; // x22
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Action_o *onClickDlgOkCallBack; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  SetRarityDialogControl_o *v29; // x0
  const MethodInfo *v30; // x1

  if ( (byte_49FFE46 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&CombineRootComponent_TypeInfo, v3);
    sub_1B640C8(&Method_SetRarityDialogControl_OnClickDlgOk__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B640C8(&Method_SetRarityDialogControl___c__OnClickDlgOk_b__169_0__, v7);
    sub_1B640C8(&SetRarityDialogControl___c_TypeInfo, v8);
    byte_49FFE46 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    v9 = Method_SetRarityDialogControl_OnClickDlgOk__;
    if ( (*((_BYTE *)Method_SetRarityDialogControl_OnClickDlgOk__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B640E0(Method_SetRarityDialogControl_OnClickDlgOk__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, this->fields.onClickDlgOkSeKind, 0LL);
    SetRarityDialogControl__Close(this, v11);
    Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onClickDlgOkCallBack, 0, v13, v14);
        this->fields.onClickDlgCancelCallBack = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onClickDlgCancelCallBack, 0, v27, v28);
        if ( onClickDlgOkCallBack )
        {
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClickDlgOkCallBack->fields.m_target)(
            onClickDlgOkCallBack->fields.original_method_info,
            *(_QWORD *)&onClickDlgOkCallBack->fields.extra_arg);
          return;
        }
LABEL_26:
        sub_1B64324(Instance);
      }
      Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_26;
      Instance = (CombineRootComponent_o *)Instance->fields.myFSM;
      if ( !Instance )
        goto LABEL_26;
      v16 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v16
        && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v16 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__SetTutorialProgress(Instance, 8, 0LL);
        Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v19 = (CommonUI_o *)Instance;
        v20 = SetRarityDialogControl___c_TypeInfo;
        if ( !SetRarityDialogControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo);
          v20 = SetRarityDialogControl___c_TypeInfo;
        }
        _9__169_0 = v20->static_fields->__9__169_0;
        if ( !_9__169_0 )
        {
          if ( !v20->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v20);
            v20 = SetRarityDialogControl___c_TypeInfo;
          }
          v22 = (Il2CppObject *)v20->static_fields->__9;
          _9__169_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v17, v18);
          System_Action___ctor(_9__169_0, v22, Method_SetRarityDialogControl___c__OnClickDlgOk_b__169_0__, 0LL);
          static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
          static_fields->__9__169_0 = _9__169_0;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__169_0, (int32_t)_9__169_0, v24, v25);
        }
        if ( !v19 )
          goto LABEL_26;
        CommonUI__CloseTutorialNotificationDialogArrow_30370628(v19, _9__169_0, 0LL);
        goto LABEL_23;
      }
    }
    sub_1B645E4(Instance);
    SetRarityDialogControl__OnClickCancel(v29, v30);
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
  void *allDispConfirmInfo; // x0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  UILabel_o *allTitleLb; // x26
  UILabel_o *cancelBtnLb; // x26
  UILabel_o *decideBtnLb; // x26
  const MethodInfo *v35; // x1
  __int64 v36; // x27
  float v37; // s8
  unsigned __int64 v38; // x26
  bool v39; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x27
  UnityEngine_Transform_o *transform; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x7
  float y; // s9
  int v45; // w20
  int v46; // w8
  float v47; // s1
  float z; // s2
  float v49; // s0
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v53; // x25
  Il2CppObject *v54; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v56; // x24
  Il2CppObject *v57; // x0
  UILabel_o *allRareMsgLb; // x21
  __int64 *v59; // x8
  UILabel_o *allRareConfirmMsgLb; // x20
  __int64 v61; // x1
  __int64 v62; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v64; // x20
  const MethodInfo *v65; // x5
  int32_t v66; // [xsp+8h] [xbp-78h] BYREF
  int32_t v67; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFE35 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, baseData);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v16);
    sub_1B640C8(&int_TypeInfo, v17);
    sub_1B640C8(&LocalizationManager_TypeInfo, v18);
    sub_1B640C8(&Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__149_0__, v19);
    sub_1B640C8(&StringLiteral_9169/*"NEED_QP"*/, v20);
    sub_1B640C8(&StringLiteral_3640/*"COMBINE_HAVE_QP"*/, v21);
    sub_1B640C8(&StringLiteral_3787/*"CONFIRM_COMBINE_MSG"*/, v22);
    sub_1B640C8(&StringLiteral_3639/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, v23);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v24);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v25);
    sub_1B640C8(&StringLiteral_10897/*"RARE_MATERIAL_INFO_MSG"*/, v26);
    sub_1B640C8(&StringLiteral_3672/*"COMBINE_SPEND_QP"*/, v27);
    sub_1B640C8(&StringLiteral_3812/*"CONFIRM_TITLE_SVT_COMBINE"*/, v28);
    byte_49FFE35 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v30);
  SetRarityDialogControl__DefaultBgSize(this, v31);
  allTitleLb = this->fields.allTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3812/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  if ( !allTitleLb )
    goto LABEL_56;
  UILabel__set_text(allTitleLb, (System_String_o *)allDispConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_56;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_56;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v35);
  if ( !selectedList )
    goto LABEL_56;
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  LODWORD(v36) = selectedList->max_length;
  v37 = *((float *)allDispConfirmInfo + 12);
  if ( (int)v36 >= 1 )
  {
    v38 = 0LL;
    v39 = 0;
    do
    {
      if ( v39 )
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
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v38 >= selectedList->max_length )
        sub_1B6432C(allDispConfirmInfo, v42);
      if ( !allDispConfirmInfo )
        goto LABEL_56;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)allDispConfirmInfo,
        v38,
        baseData,
        selectedList->m_Items[v38],
        0,
        0,
        0LL,
        v43);
      allDispConfirmInfo = this->fields.allSvtGrid;
      v36 = *(_QWORD *)&selectedList->max_length;
      ++v38;
      v39 = allDispConfirmInfo == 0LL;
    }
    while ( (__int64)v38 < (int)v36 );
    if ( !allDispConfirmInfo )
      goto LABEL_56;
  }
  y = this->fields.center.fields.y;
  v45 = *((_DWORD *)allDispConfirmInfo + 11);
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  if ( v45 >= (int)v36 )
    v46 = v36;
  else
    v46 = v45;
  v47 = 70.0;
  if ( v45 >= (int)v36 )
    v47 = y;
  v49 = (float)(this->fields.center.fields.x - (float)((float)(v37 * 0.5) * (float)(v46 - 1))) * 0.47;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v47 - 1),
    0LL);
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  v68.fields.x = 0.47;
  v68.fields.y = 0.47;
  v68.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v68, 0LL);
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_56;
  UIGrid__set_repositionNow((UIGrid_o *)allDispConfirmInfo, 1, 0LL);
  allSpendQpTxtLb = this->fields.allSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3672/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !allSpendQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3640/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !allHaveQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allSpendQpLb = this->fields.allSpendQpLb;
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  v67 = spendQp;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
  allDispConfirmInfo = System_String__Format(v53, v54, 0LL);
  if ( !allSpendQpLb )
    goto LABEL_56;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpLb = this->fields.allHaveQpLb;
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  v66 = haveQp;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
  allDispConfirmInfo = System_String__Format(v56, v57, 0LL);
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
    sub_1B64324(allDispConfirmInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0LL);
  allRareMsgLb = this->fields.allRareMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isExceededMaterial )
      goto LABEL_45;
LABEL_47:
    v59 = &StringLiteral_10897/*"RARE_MATERIAL_INFO_MSG"*/;
    goto LABEL_48;
  }
  if ( !isExceededMaterial )
    goto LABEL_47;
LABEL_45:
  v59 = &StringLiteral_3639/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
LABEL_48:
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)*v59, 0LL);
  if ( !allRareMsgLb )
    goto LABEL_56;
  UILabel__set_text(allRareMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !allRareConfirmMsgLb )
    goto LABEL_56;
  UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_56;
  if ( combineRootComponent->fields.state == 3 )
  {
    v64 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v61, v62);
    System_Action___ctor(
      v64,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__149_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v64, 0LL, 0LL, v65);
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
  UnityEngine_GameObject_o *appendSkillConfirmInfo; // x0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  char v29; // w21
  Il2CppObject *ComponentInChildren_object; // x21
  UIExtrusionLabel_o *appendSkillCurrentLvLabel; // x21
  UIExtrusionLabel_o *appendSkillResultLvLabel; // x21
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UILabel_o *v35; // x21
  UILabel_o *v36; // x21
  UILabel_o *v37; // x21
  System_String_o *v38; // x22
  Il2CppObject *v39; // x0
  UILabel_o *v40; // x21
  System_String_o *v41; // x22
  Il2CppObject *v42; // x0
  UILabel_o *appendSkillConfirmLabel; // x20
  __int64 *v44; // x8
  Il2CppObject *Component_object; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  UILabel_o *appendSkillSpendTxtLabel; // x21
  UILabel_o *appendSkillHaveTxtLabel; // x21
  UILabel_o *appendSkillSpendLabel; // x21
  System_String_o *v52; // x22
  Il2CppObject *v53; // x0
  UILabel_o *appendSkillHaveLabel; // x21
  System_String_o *v55; // x22
  Il2CppObject *v56; // x0
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  __int64 v59; // x1
  __int64 v60; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v62; // x20
  const MethodInfo *v63; // x5
  int32_t haveSvtCoin; // [xsp+4h] [xbp-5Ch] BYREF
  UnityEngine_Bounds_o v65; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFE39 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, updata);
    sub_1B640C8(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___, v10);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v11);
    sub_1B640C8(&int_TypeInfo, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    sub_1B640C8(&Method_SetRarityDialogControl__SetAppendSkillCombineInfo_b__153_0__, v15);
    sub_1B640C8(&StringLiteral_9169/*"NEED_QP"*/, v16);
    sub_1B640C8(&StringLiteral_3640/*"COMBINE_HAVE_QP"*/, v17);
    sub_1B640C8(&StringLiteral_2106/*"APPEND_SKILL_OPEN_CONFIRM"*/, v18);
    sub_1B640C8(&StringLiteral_2109/*"APPEND_SKILL_OPEN_SPEND_COIN"*/, v19);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v20);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v21);
    sub_1B640C8(&StringLiteral_2107/*"APPEND_SKILL_OPEN_HAVE_COIN"*/, v22);
    sub_1B640C8(&StringLiteral_3672/*"COMBINE_SPEND_QP"*/, v23);
    sub_1B640C8(&StringLiteral_2097/*"APPEND_SKILL_COMBINE_CONFIRM"*/, v24);
    byte_49FFE39 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v26);
  SetRarityDialogControl__DefaultBgSize(this, v27);
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
  v29 = ~isOpen;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, v29 & 1, 0LL);
  if ( (v29 & 1) == 0 )
  {
    if ( updata )
    {
      appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillIconComp;
      if ( appendSkillConfirmInfo )
      {
        SkillIconComponent__Set_37921136(
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
                                             (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
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
                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                       (const MethodInfo_2E87DF0 *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
                }
                transform = UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)ComponentInChildren_object,
                              0LL);
                NGUIMath__CalculateAbsoluteWidgetBounds(&v65, transform, 0LL);
                appendSkillConfirmInfo = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ComponentInChildren_object->klass->vtable[4].method)(
                                                                       ComponentInChildren_object,
                                                                       ComponentInChildren_object->klass->vtable[5].methodPtr);
                if ( Component_object )
                {
                  UnityEngine_BoxCollider__set_center(
                    (UnityEngine_BoxCollider_o *)Component_object,
                    v65.fields.m_Center,
                    0LL);
                  ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ComponentInChildren_object->klass->vtable[4].method)(
                    ComponentInChildren_object,
                    ComponentInChildren_object->klass->vtable[5].methodPtr);
                  v66.fields.x = v65.fields.m_Extents.fields.x + v65.fields.m_Extents.fields.x;
                  v66.fields.y = v65.fields.m_Extents.fields.y + v65.fields.m_Extents.fields.y;
                  v66.fields.z = v65.fields.m_Extents.fields.z + v65.fields.m_Extents.fields.z;
                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v66, 0LL);
                  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillSpendTxtLabel;
                  if ( appendSkillConfirmInfo )
                  {
                    v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
                    GameObjectExtensions__SetLocalPositionX(v47, 100.0, 0LL);
                    appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillHaveTxtLabel;
                    if ( appendSkillConfirmInfo )
                    {
                      v48 = UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)appendSkillConfirmInfo,
                              0LL);
                      GameObjectExtensions__SetLocalPositionX(v48, 100.0, 0LL);
                      appendSkillSpendTxtLabel = this->fields.appendSkillSpendTxtLabel;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_2109/*"APPEND_SKILL_OPEN_SPEND_COIN"*/,
                                                                             0LL);
                      if ( appendSkillSpendTxtLabel )
                      {
                        UILabel__set_text(appendSkillSpendTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                        appendSkillHaveTxtLabel = this->fields.appendSkillHaveTxtLabel;
                        appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_2107/*"APPEND_SKILL_OPEN_HAVE_COIN"*/,
                                                                               0LL);
                        if ( appendSkillHaveTxtLabel )
                        {
                          UILabel__set_text(appendSkillHaveTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                          appendSkillSpendLabel = this->fields.appendSkillSpendLabel;
                          v52 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
                          LODWORD(v65.fields.m_Center.fields.x) = updata->fields.spendSvtCoin;
                          v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65);
                          appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v52, v53, 0LL);
                          if ( appendSkillSpendLabel )
                          {
                            UILabel__set_text(appendSkillSpendLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                            appendSkillHaveLabel = this->fields.appendSkillHaveLabel;
                            v55 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
                            haveSvtCoin = updata->fields.haveSvtCoin;
                            v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveSvtCoin);
                            appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v55, v56, 0LL);
                            if ( appendSkillHaveLabel )
                            {
                              UILabel__set_text(appendSkillHaveLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                              appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
                              v44 = &StringLiteral_2106/*"APPEND_SKILL_OPEN_CONFIRM"*/;
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
    sub_1B64324(appendSkillConfirmInfo);
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
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v33, -5.0, 0LL);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillHaveTxtLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_59;
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v34, -5.0, 0LL);
  v35 = this->fields.appendSkillSpendTxtLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3672/*"COMBINE_SPEND_QP"*/,
                                                         0LL);
  if ( !v35 )
    goto LABEL_59;
  UILabel__set_text(v35, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v36 = this->fields.appendSkillHaveTxtLabel;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3640/*"COMBINE_HAVE_QP"*/,
                                                         0LL);
  if ( !v36 )
    goto LABEL_59;
  UILabel__set_text(v36, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v37 = this->fields.appendSkillSpendLabel;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  LODWORD(v65.fields.m_Center.fields.x) = updata->fields.spendQp;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v38, v39, 0LL);
  if ( !v37 )
    goto LABEL_59;
  UILabel__set_text(v37, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v40 = this->fields.appendSkillHaveLabel;
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  haveSvtCoin = updata->fields.haveQp;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveSvtCoin);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v41, v42, 0LL);
  if ( !v40 )
    goto LABEL_59;
  UILabel__set_text(v40, (System_String_o *)appendSkillConfirmInfo, 0LL);
  appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
  v44 = &StringLiteral_2097/*"APPEND_SKILL_COMBINE_CONFIRM"*/;
LABEL_50:
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v44, 0LL);
  if ( !appendSkillConfirmLabel )
    goto LABEL_59;
  UILabel__set_text(appendSkillConfirmLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/,
                                                         0LL);
  if ( !cancelBtnLb )
    goto LABEL_59;
  UILabel__set_text(cancelBtnLb, (System_String_o *)appendSkillConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/,
                                                         0LL);
  if ( !decideBtnLb )
    goto LABEL_59;
  UILabel__set_text(decideBtnLb, (System_String_o *)appendSkillConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_59;
  if ( combineRootComponent->fields.state == 14 )
  {
    v62 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v59, v60);
    System_Action___ctor(
      v62,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetAppendSkillCombineInfo_b__153_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v62, 0LL, 0LL, v63);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetCenter(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mPanel; // x0
  __int64 v4; // x1
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
    sub_1B64324(mPanel);
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
    sub_1B6432C(mPanel, v4);
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
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  this->fields.onClickDlgOkSeKind = seKind;
  this->fields.onClickDlgOkCallBack = callBack;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.onClickDlgOkCallBack,
    (int32_t)callBack,
    (int32_t)callBack,
    (int32_t)cancelCallBack);
  this->fields.onClickDlgCancelCallBack = cancelCallBack;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.onClickDlgCancelCallBack,
    (int32_t)cancelCallBack,
    v9,
    v10);
  this->fields.onClickDlgCloseCallBack = closeCallBack;
  sub_1B6406C(
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  void *normalConfirmInfo; // x0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v30; // x1
  __int64 v31; // x25
  float v32; // s8
  unsigned __int64 v33; // x24
  bool v34; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x7
  float y; // s9
  int v40; // w24
  int v41; // w9
  float v42; // s1
  float z; // s2
  float v44; // s0
  UILabel_o *normalSpendQpTxtLb; // x24
  UILabel_o *normalHaveQpTxtLb; // x24
  UILabel_o *confirmSpendQpLb; // x24
  System_String_o *v48; // x25
  Il2CppObject *v49; // x0
  UILabel_o *confirmHaveQpLb; // x23
  System_String_o *v51; // x24
  Il2CppObject *v52; // x0
  UILabel_o *confirmMsgLb; // x22
  const MethodInfo *v54; // x4
  _BOOL8 v55; // x0
  const MethodInfo *v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v60; // x20
  const MethodInfo *v61; // x5
  int32_t v62; // [xsp+8h] [xbp-78h] BYREF
  int32_t v63; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *labelMsg; // [xsp+28h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFE33 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, baseData);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v15);
    sub_1B640C8(&int_TypeInfo, v16);
    sub_1B640C8(&LocalizationManager_TypeInfo, v17);
    sub_1B640C8(&Method_SetRarityDialogControl__SetConfirmCombine_b__147_0__, v18);
    sub_1B640C8(&StringLiteral_9169/*"NEED_QP"*/, v19);
    sub_1B640C8(&StringLiteral_3640/*"COMBINE_HAVE_QP"*/, v20);
    sub_1B640C8(&StringLiteral_3787/*"CONFIRM_COMBINE_MSG"*/, v21);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v22);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v23);
    sub_1B640C8(&StringLiteral_3672/*"COMBINE_SPEND_QP"*/, v24);
    byte_49FFE33 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v26);
  SetRarityDialogControl__DefaultBgSize(this, v27);
  normalConfirmInfo = this->fields.normalTitleLb;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UILabel__set_text((UILabel_o *)normalConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_46;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_46;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v30);
  if ( !selectedList )
    goto LABEL_46;
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  LODWORD(v31) = selectedList->max_length;
  v32 = *((float *)normalConfirmInfo + 12);
  if ( (int)v31 >= 1 )
  {
    v33 = 0LL;
    v34 = 0;
    do
    {
      if ( v34 )
        goto LABEL_46;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
      normalConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !normalConfirmInfo )
        goto LABEL_46;
      normalConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)normalConfirmInfo,
                            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v33 >= selectedList->max_length )
        sub_1B6432C(normalConfirmInfo, v37);
      if ( !normalConfirmInfo )
        goto LABEL_46;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)normalConfirmInfo,
        v33,
        baseData,
        selectedList->m_Items[v33],
        0,
        0,
        0LL,
        v38);
      normalConfirmInfo = this->fields.materialSvtGrid;
      v31 = *(_QWORD *)&selectedList->max_length;
      ++v33;
      v34 = normalConfirmInfo == 0LL;
    }
    while ( (__int64)v33 < (int)v31 );
    if ( !normalConfirmInfo )
      goto LABEL_46;
  }
  y = this->fields.center.fields.y;
  v40 = *((_DWORD *)normalConfirmInfo + 11);
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  if ( v40 >= (int)v31 )
    v41 = v31;
  else
    v41 = v40;
  v42 = 55.0;
  if ( v40 >= (int)v31 )
    v42 = y;
  v44 = (float)(this->fields.center.fields.x - (float)((float)(v32 * 0.5) * (float)(v41 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v42 - 1),
    0LL);
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  v65.fields.x = 0.5;
  v65.fields.y = 0.5;
  v65.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v65, 0LL);
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UIGrid__set_repositionNow((UIGrid_o *)normalConfirmInfo, 1, 0LL);
  normalSpendQpTxtLb = this->fields.normalSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3672/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !normalSpendQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3640/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !normalHaveQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  v63 = spendQp;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63);
  normalConfirmInfo = System_String__Format(v48, v49, 0LL);
  if ( !confirmSpendQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  v62 = haveQp;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
  normalConfirmInfo = System_String__Format(v51, v52, 0LL);
  if ( !confirmHaveQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"CONFIRM_COMBINE_MSG"*/, 0LL);
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
  v55 = SetRarityDialogControl__CheckStatusUpInfo(this, baseData, selectedList, &labelMsg, v54);
  if ( !v55 )
    goto LABEL_42;
  WrapControlText__textAdjust(this->fields.statusUpInfoLb, labelMsg, 22, 0, 0, 0LL);
  normalConfirmInfo = this->fields.statusUpInfoLb;
  if ( !normalConfirmInfo
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0LL)) == 0LL )
  {
LABEL_46:
    sub_1B64324(normalConfirmInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 1, 0LL);
LABEL_42:
  SetRarityDialogControl__CheckExceedSvt((SetRarityDialogControl_o *)v55, selectedList, v56);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_46;
  if ( combineRootComponent->fields.state == 3 )
  {
    v60 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v57, v58);
    System_Action___ctor(v60, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmCombine_b__147_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v60, 0LL, 0LL, v61);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_GameObject_o *costumeConfirmInfo; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  UILabel_o *costumeTitleLb; // x25
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  UILabel_o *needQpCostumeTextLb; // x24
  UILabel_o *needQpCostumeLb; // x24
  System_String_o *v29; // x25
  Il2CppObject *v30; // x0
  UILabel_o *haveQpCostumeTextLb; // x23
  UILabel_o *haveQpCostumeLb; // x23
  System_String_o *v33; // x24
  Il2CppObject *v34; // x0
  UILabel_o *costumeInfoLb; // x22
  const MethodInfo *v36; // x5
  struct CombineRootComponent_o *combineRootComponent; // x8
  int32_t v38; // [xsp+8h] [xbp-58h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FFE40 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, cosName);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_9169/*"NEED_QP"*/, v14);
    sub_1B640C8(&StringLiteral_3804/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v15);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v16);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v17);
    sub_1B640C8(&StringLiteral_3874/*"COSTUME_NEED_QP_TEXT"*/, v18);
    sub_1B640C8(&StringLiteral_3871/*"COSTUME_CONFIRM_MSG"*/, v19);
    sub_1B640C8(&StringLiteral_3873/*"COSTUME_HAVE_QP_TEXT"*/, v20);
    byte_49FFE40 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v22);
  SetRarityDialogControl__DefaultBgSize(this, v23);
  costumeTitleLb = this->fields.costumeTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !costumeTitleLb )
    goto LABEL_20;
  UILabel__set_text(costumeTitleLb, (System_String_o *)costumeConfirmInfo, 0LL);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)this->fields.costumeNameLb;
  if ( !costumeConfirmInfo )
    goto LABEL_20;
  UILabel__set_text((UILabel_o *)costumeConfirmInfo, cosName, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_20;
  UILabel__set_text(cancelBtnLb, (System_String_o *)costumeConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_20;
  UILabel__set_text(decideBtnLb, (System_String_o *)costumeConfirmInfo, 0LL);
  needQpCostumeTextLb = this->fields.needQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3874/*"COSTUME_NEED_QP_TEXT"*/, 0LL);
  if ( !needQpCostumeTextLb )
    goto LABEL_20;
  UILabel__set_text(needQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0LL);
  needQpCostumeLb = this->fields.needQpCostumeLb;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  v39 = needQp;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v29, v30, 0LL);
  if ( !needQpCostumeLb )
    goto LABEL_20;
  UILabel__set_text(needQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0LL);
  haveQpCostumeTextLb = this->fields.haveQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3873/*"COSTUME_HAVE_QP_TEXT"*/, 0LL);
  if ( !haveQpCostumeTextLb )
    goto LABEL_20;
  UILabel__set_text(haveQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0LL);
  haveQpCostumeLb = this->fields.haveQpCostumeLb;
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  v38 = haveQp;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v33, v34, 0LL);
  if ( !haveQpCostumeLb
    || (UILabel__set_text(haveQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0LL),
        costumeInfoLb = this->fields.costumeInfoLb,
        costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3871/*"COSTUME_CONFIRM_MSG"*/,
                                                           0LL),
        !costumeInfoLb)
    || (UILabel__set_text(costumeInfoLb, (System_String_o *)costumeConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_20:
    sub_1B64324(costumeConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 8 )
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, callBack, cancelCallBack, 0LL, v36);
}


void __fastcall SetRarityDialogControl__SetConfirmCombineCostumeEventItem(
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

  if ( (byte_49FFE3F & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___, eventCombineCostumeEnt);
    byte_49FFE3F = 1;
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
                                                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___)) == 0LL
    || (CostumeEventItemConfirmInfo__Set(
          (CostumeEventItemConfirmInfo_o *)costumeEventItemConfirmInfo,
          eventCombineCostumeEnt,
          0LL),
        (costumeEventItemConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(costumeEventItemConfirmInfo, 1, 0LL),
        SetRarityDialogControl__MoveAlpha(this, v10),
        SetRarityDialogControl__DefaultBgSize(this, v11),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_11:
    sub_1B64324(costumeEventItemConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 8 )
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 0, callBack, cancelCallBack, 0LL, v12);
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
  UnityEngine_GameObject_o *costumeEventItemOrNeedItemConfirmInfo; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  UILabel_o *cancelBtnLb; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v27; // x21
  const MethodInfo *v28; // x5

  if ( (byte_49FFE3E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, combineCostumeEnt);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___, v15);
    sub_1B640C8(&LocalizationManager_TypeInfo, v16);
    sub_1B640C8(&Method_SetRarityDialogControl_DefaultBgSize__, v17);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v18);
    byte_49FFE3E = 1;
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
                                                                        (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___);
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
  SetRarityDialogControl__MoveAlpha(this, v20);
  SetRarityDialogControl__DefaultBgSize(this, v21);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/,
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
    sub_1B64324(costumeEventItemOrNeedItemConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 8 )
  {
    v27 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v24, v25);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, 0LL, cancelCallBack, v27, v28);
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
  const MethodInfo *v19; // x4
  System_Int64_array *v20; // x2
  const MethodInfo *v21; // x7
  Il2CppObject *Instance; // x0
  __int64 methodPtr_low; // x9
  __int64 v24; // x9
  SetRarityDialogControl_o *v25; // x0
  System_Int64_array *v26; // x1
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // [xsp+0h] [xbp-70h]
  System_String_o *labelMsg; // [xsp+18h] [xbp-58h] BYREF

  v16 = this;
  v17 = isStatusUp;
  if ( (byte_49FFE30 & 1) == 0 )
  {
    sub_1B640C8(&CombineRootComponent_TypeInfo, baseData);
    this = (SetRarityDialogControl_o *)sub_1B640C8(
                                         &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                         v18);
    byte_49FFE30 = 1;
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
      v21);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (Il2CppObject *)Instance[2].klass) == 0LL )
LABEL_18:
    sub_1B64324(Instance);
  v24 = LOBYTE(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Instance->klass->vtable[0].methodPtr) < (unsigned int)v24
    || (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v24 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_19:
    sub_1B645E4(Instance);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  UnityEngine_GameObject_o *lvExceedConfirmSimpleInfo; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  UILabel_o *cancelBtnLb; // x23
  UILabel_o *decideBtnLb; // x23
  UILabel_o *lvExceedInfoLb; // x21
  UILabel_o *lvExceedSpendQpTxtLb; // x23
  UILabel_o *lvExceedHaveQpTxtLb; // x23
  UILabel_o *lvExceedSpendQpLb; // x23
  System_String_o *v31; // x24
  Il2CppObject *v32; // x0
  UILabel_o *lvExceedHaveQpLb; // x22
  System_String_o *v34; // x23
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v39; // x0
  _QWORD *v40; // x8
  System_Action_o *v41; // x21
  int32_t v42; // w20
  const MethodInfo *v43; // x5
  int32_t v44; // [xsp+8h] [xbp-48h] BYREF
  int32_t v45; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FFE3B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, baseData);
    sub_1B640C8(&int_TypeInfo, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__155_0__, v14);
    sub_1B640C8(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__155_1__, v15);
    sub_1B640C8(&StringLiteral_9169/*"NEED_QP"*/, v16);
    sub_1B640C8(&StringLiteral_3792/*"CONFIRM_EXCEED_COMBINE"*/, v17);
    sub_1B640C8(&StringLiteral_3640/*"COMBINE_HAVE_QP"*/, v18);
    sub_1B640C8(&StringLiteral_8281/*"LVEXCEED_COMBINE_SPEND_QP"*/, v19);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v20);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v21);
    byte_49FFE3B = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v23);
  SetRarityDialogControl__DefaultBgSize(this, v24);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)this->fields.lvExceedTitleLb;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)lvExceedConfirmSimpleInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/,
                                                            0LL);
  if ( !cancelBtnLb )
    goto LABEL_36;
  UILabel__set_text(cancelBtnLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/,
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
                                                              (System_String_o *)StringLiteral_8281/*"LVEXCEED_COMBINE_SPEND_QP"*/,
                                                              0LL);
    if ( lvExceedSpendQpTxtLb )
    {
      UILabel__set_text(lvExceedSpendQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
      lvExceedHaveQpTxtLb = this->fields.lvExceedHaveQpTxtLb;
      lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_3640/*"COMBINE_HAVE_QP"*/,
                                                                0LL);
      if ( lvExceedHaveQpTxtLb )
      {
        UILabel__set_text(lvExceedHaveQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
        lvExceedSpendQpLb = this->fields.lvExceedSpendQpLb;
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
        v45 = spendQp;
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
        lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)System_String__Format(v31, v32, 0LL);
        if ( lvExceedSpendQpLb )
        {
          UILabel__set_text(lvExceedSpendQpLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
          lvExceedHaveQpLb = this->fields.lvExceedHaveQpLb;
          v34 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
          v44 = haveQp;
          v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
          lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)System_String__Format(v34, v35, 0LL);
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
    sub_1B64324(lvExceedConfirmSimpleInfo);
  }
  lvExceedInfoLb = this->fields.lvExceedInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3792/*"CONFIRM_EXCEED_COMBINE"*/,
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
    v39 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v36, v37);
    v40 = &Method_SetRarityDialogControl__SetConfirmLvExceed_b__155_0__;
    if ( !isCheck )
      v40 = &Method_SetRarityDialogControl__SetConfirmLvExceed_b__155_1__;
    v41 = v39;
    if ( isCheck )
      v42 = 8;
    else
      v42 = 0;
    System_Action___ctor(v39, (Il2CppObject *)this, *v40, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, v42, v41, 0LL, 0LL, v43);
  }
}


void __fastcall SetRarityDialogControl__SetConfirmLvExceed_44897856(
        SetRarityDialogControl_o *this,
        System_Collections_Generic_List_GameObject__o *itemObjList,
        System_Int32_array *itemList,
        int32_t spendQp,
        int32_t haveQp,
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
  struct CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  UILabel_o *lvExceedTitleLabel; // x24
  UILabel_o *lvExceedSpendItemLabel; // x24
  UILabel_o *lvExceedSpendQpTxtLabel; // x24
  UILabel_o *lvExceedHaveQpTxtLabel; // x24
  UILabel_o *lvExceedSpendQpLabel; // x24
  System_String_o *v36; // x25
  Il2CppObject *v37; // x0
  UILabel_o *lvExceedHaveQpLabel; // x23
  System_String_o *v39; // x24
  Il2CppObject *v40; // x0
  UILabel_o *lvExceedConfirmLabel; // x22
  __int64 size; // x24
  unsigned __int64 v43; // x22
  SetRarityDialogControl_o *v44; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x2
  System_Action_o *v49; // x20
  const MethodInfo *v50; // x5
  int32_t v51; // [xsp+8h] [xbp-58h] BYREF
  int32_t v52; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_49FFE3C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, itemObjList);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v11);
    sub_1B640C8(&int_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__156_0__, v16);
    sub_1B640C8(&StringLiteral_9169/*"NEED_QP"*/, v17);
    sub_1B640C8(&StringLiteral_3805/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, v18);
    sub_1B640C8(&StringLiteral_3640/*"COMBINE_HAVE_QP"*/, v19);
    sub_1B640C8(&StringLiteral_8280/*"LVEXCEED_COMBINE_SPEND_ITEM"*/, v20);
    sub_1B640C8(&StringLiteral_8281/*"LVEXCEED_COMBINE_SPEND_QP"*/, v21);
    sub_1B640C8(&StringLiteral_8282/*"LVEXCEED_EXE_CONFIRM"*/, v22);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v23);
    this = (SetRarityDialogControl_o *)sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v24);
    byte_49FFE3C = 1;
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
    SetRarityDialogControl__MoveAlpha(v10, v26);
    SetRarityDialogControl__DefaultBgSize(v10, v27);
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
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelBtnLb )
      goto LABEL_31;
    UILabel__set_text(cancelBtnLb, (System_String_o *)this, 0LL);
    decideBtnLb = v10->fields.decideBtnLb;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideBtnLb )
      goto LABEL_31;
    UILabel__set_text(decideBtnLb, (System_String_o *)this, 0LL);
    lvExceedTitleLabel = v10->fields.lvExceedTitleLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3805/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
    if ( !lvExceedTitleLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedTitleLabel, (System_String_o *)this, 0LL);
    lvExceedSpendItemLabel = v10->fields.lvExceedSpendItemLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8280/*"LVEXCEED_COMBINE_SPEND_ITEM"*/, 0LL);
    if ( !lvExceedSpendItemLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedSpendItemLabel, (System_String_o *)this, 0LL);
    lvExceedSpendQpTxtLabel = v10->fields.lvExceedSpendQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8281/*"LVEXCEED_COMBINE_SPEND_QP"*/, 0LL);
    if ( !lvExceedSpendQpTxtLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedSpendQpTxtLabel, (System_String_o *)this, 0LL);
    lvExceedHaveQpTxtLabel = v10->fields.lvExceedHaveQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3640/*"COMBINE_HAVE_QP"*/, 0LL);
    if ( !lvExceedHaveQpTxtLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedHaveQpTxtLabel, (System_String_o *)this, 0LL);
    lvExceedSpendQpLabel = v10->fields.lvExceedSpendQpLabel;
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
    v52 = spendQp;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
    this = (SetRarityDialogControl_o *)System_String__Format(v36, v37, 0LL);
    if ( !lvExceedSpendQpLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedSpendQpLabel, (System_String_o *)this, 0LL);
    lvExceedHaveQpLabel = v10->fields.lvExceedHaveQpLabel;
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
    v51 = haveQp;
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
    this = (SetRarityDialogControl_o *)System_String__Format(v39, v40, 0LL);
    if ( !lvExceedHaveQpLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedHaveQpLabel, (System_String_o *)this, 0LL);
    lvExceedConfirmLabel = v10->fields.lvExceedConfirmLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8282/*"LVEXCEED_EXE_CONFIRM"*/, 0LL);
    if ( !lvExceedConfirmLabel )
      goto LABEL_31;
    UILabel__set_text(lvExceedConfirmLabel, (System_String_o *)this, 0LL);
    if ( !itemObjList )
      goto LABEL_31;
    size = (unsigned int)itemObjList->fields._size;
    if ( (int)size >= 1 )
    {
      v43 = 0LL;
      while ( 1 )
      {
        this = (SetRarityDialogControl_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)itemObjList,
                                             v43,
                                             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_GameObject__get_Item__);
        if ( !v10->fields.lvExceedConsumeItemGrid )
          break;
        v44 = this;
        transform = UnityEngine_Component__get_transform(
                      (UnityEngine_Component_o *)v10->fields.lvExceedConsumeItemGrid,
                      0LL);
        this = (SetRarityDialogControl_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v10,
                                             (UnityEngine_GameObject_o *)v44,
                                             transform,
                                             0LL,
                                             0LL);
        if ( !this )
          break;
        this = (SetRarityDialogControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
        if ( !itemList )
          break;
        if ( v43 >= itemList->max_length )
          sub_1B6432C(this, v46);
        if ( !this )
          break;
        LimitCntUpItemComponent__SetItemEntity((LimitCntUpItemComponent_o *)this, itemList->m_Items[++v43], 0LL);
        if ( size == v43 )
          goto LABEL_28;
      }
LABEL_31:
      sub_1B64324(this);
    }
LABEL_28:
    this = (SetRarityDialogControl_o *)v10->fields.lvExceedConsumeItemGrid;
    if ( !this )
      goto LABEL_31;
    ((void (__fastcall *)(SetRarityDialogControl_o *, Il2CppClass *))this->klass[1]._1.castClass)(
      this,
      this->klass[1]._1.declaringType);
    v49 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v47, v48);
    System_Action___ctor(v49, (Il2CppObject *)v10, Method_SetRarityDialogControl__SetConfirmLvExceed_b__156_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v10, 8, v49, 0LL, 0LL, v50);
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
  void *rariryConfirmInfo; // x0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  UILabel_o *cancelBtnLb; // x25
  UILabel_o *decideBtnLb; // x25
  const MethodInfo *v32; // x1
  __int64 v33; // x26
  float v34; // s8
  unsigned __int64 v35; // x25
  bool v36; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x7
  float y; // s9
  int v42; // w23
  int v43; // w9
  float v44; // s1
  float z; // s2
  float v46; // s0
  UILabel_o *spendQpTxtLb; // x23
  UILabel_o *haveQpTxtLb; // x23
  UILabel_o *spendQpLb; // x23
  System_String_o *v50; // x24
  Il2CppObject *v51; // x0
  UILabel_o *haveQpLb; // x22
  System_String_o *v53; // x23
  Il2CppObject *v54; // x0
  UILabel_o *rareMaterialMsgLb; // x21
  __int64 *v56; // x8
  UILabel_o *rareConfirmMsgLb; // x20
  __int64 v58; // x1
  __int64 v59; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v61; // x20
  const MethodInfo *v62; // x5
  int32_t v63; // [xsp+8h] [xbp-78h] BYREF
  int32_t v64; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFE31 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, baseData);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v15);
    sub_1B640C8(&int_TypeInfo, v16);
    sub_1B640C8(&LocalizationManager_TypeInfo, v17);
    sub_1B640C8(&Method_SetRarityDialogControl__SetConfirmRarityInfo_b__145_0__, v18);
    sub_1B640C8(&StringLiteral_9169/*"NEED_QP"*/, v19);
    sub_1B640C8(&StringLiteral_3640/*"COMBINE_HAVE_QP"*/, v20);
    sub_1B640C8(&StringLiteral_3787/*"CONFIRM_COMBINE_MSG"*/, v21);
    sub_1B640C8(&StringLiteral_3639/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, v22);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v23);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v24);
    sub_1B640C8(&StringLiteral_10897/*"RARE_MATERIAL_INFO_MSG"*/, v25);
    sub_1B640C8(&StringLiteral_3672/*"COMBINE_SPEND_QP"*/, v26);
    byte_49FFE31 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v28);
  SetRarityDialogControl__DefaultBgSize(this, v29);
  rariryConfirmInfo = this->fields.rarityTitleLb;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  UILabel__set_text((UILabel_o *)rariryConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_48;
  UILabel__set_text(cancelBtnLb, (System_String_o *)rariryConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_48;
  UILabel__set_text(decideBtnLb, (System_String_o *)rariryConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v32);
  if ( !list )
    goto LABEL_48;
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  LODWORD(v33) = list->max_length;
  v34 = *((float *)rariryConfirmInfo + 12);
  if ( (int)v33 >= 1 )
  {
    v35 = 0LL;
    v36 = 0;
    do
    {
      if ( v36 )
        goto LABEL_48;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
      rariryConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !rariryConfirmInfo )
        goto LABEL_48;
      rariryConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)rariryConfirmInfo,
                            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v35 >= list->max_length )
        sub_1B6432C(rariryConfirmInfo, v39);
      if ( !rariryConfirmInfo )
        goto LABEL_48;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)rariryConfirmInfo,
        v35,
        baseData,
        list->m_Items[v35],
        0,
        0,
        0LL,
        v40);
      rariryConfirmInfo = this->fields.raritySvtGrid;
      v33 = *(_QWORD *)&list->max_length;
      ++v35;
      v36 = rariryConfirmInfo == 0LL;
    }
    while ( (__int64)v35 < (int)v33 );
    if ( !rariryConfirmInfo )
      goto LABEL_48;
  }
  y = this->fields.center.fields.y;
  v42 = *((_DWORD *)rariryConfirmInfo + 11);
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
  if ( !rariryConfirmInfo )
    goto LABEL_48;
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
    (UnityEngine_Transform_o *)rariryConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v44 - 1),
    0LL);
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  v65.fields.x = 0.5;
  v65.fields.y = 0.5;
  v65.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rariryConfirmInfo, v65, 0LL);
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_48;
  UIGrid__set_repositionNow((UIGrid_o *)rariryConfirmInfo, 1, 0LL);
  spendQpTxtLb = this->fields.spendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3672/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !spendQpTxtLb )
    goto LABEL_48;
  UILabel__set_text(spendQpTxtLb, (System_String_o *)rariryConfirmInfo, 0LL);
  haveQpTxtLb = this->fields.haveQpTxtLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3640/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !haveQpTxtLb )
    goto LABEL_48;
  UILabel__set_text(haveQpTxtLb, (System_String_o *)rariryConfirmInfo, 0LL);
  spendQpLb = this->fields.spendQpLb;
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  v64 = spendQp;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
  rariryConfirmInfo = System_String__Format(v50, v51, 0LL);
  if ( !spendQpLb
    || (UILabel__set_text(spendQpLb, (System_String_o *)rariryConfirmInfo, 0LL),
        haveQpLb = this->fields.haveQpLb,
        v53 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL),
        v63 = haveQp,
        v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63),
        rariryConfirmInfo = System_String__Format(v53, v54, 0LL),
        !haveQpLb) )
  {
LABEL_48:
    sub_1B64324(rariryConfirmInfo);
  }
  UILabel__set_text(haveQpLb, (System_String_o *)rariryConfirmInfo, 0LL);
  rareMaterialMsgLb = this->fields.rareMaterialMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isExceededMaterial )
      goto LABEL_37;
LABEL_39:
    v56 = &StringLiteral_10897/*"RARE_MATERIAL_INFO_MSG"*/;
    goto LABEL_40;
  }
  if ( !isExceededMaterial )
    goto LABEL_39;
LABEL_37:
  v56 = &StringLiteral_3639/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
LABEL_40:
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)*v56, 0LL);
  if ( !rareMaterialMsgLb )
    goto LABEL_48;
  UILabel__set_text(rareMaterialMsgLb, (System_String_o *)rariryConfirmInfo, 0LL);
  rareConfirmMsgLb = this->fields.rareConfirmMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !rareConfirmMsgLb )
    goto LABEL_48;
  UILabel__set_text(rareConfirmMsgLb, (System_String_o *)rariryConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_48;
  if ( combineRootComponent->fields.state == 3 )
  {
    v61 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v58, v59);
    System_Action___ctor(v61, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmRarityInfo_b__145_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v61, 0LL, 0LL, v62);
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
  UnityEngine_GameObject_o *normalConfirmInfo; // x0
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v36; // x1
  struct UIGrid_o *materialSvtGrid; // x8
  float v38; // s8
  int32_t v39; // w24
  UnityEngine_Component_o *v40; // x0
  Il2CppObject *key; // x25
  char value; // w27
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  Il2CppObject *Component_object; // x0
  float y; // s9
  int32_t Count; // w23
  struct UIGrid_o *v49; // x8
  int32_t maxPerLine; // w20
  int32_t v51; // w22
  int32_t v52; // w9
  float v53; // s1
  float z; // s2
  float v55; // s0
  UILabel_o *normalSpendQpTxtLb; // x22
  UILabel_o *normalHaveQpTxtLb; // x22
  UILabel_o *confirmSpendQpLb; // x22
  System_String_o *v59; // x23
  Il2CppObject *v60; // x0
  UILabel_o *confirmHaveQpLb; // x21
  System_String_o *v62; // x22
  Il2CppObject *v63; // x0
  UILabel_o *confirmMsgLb; // x20
  __int64 v65; // x1
  __int64 v66; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v68; // x20
  const MethodInfo *v69; // x5
  const MethodInfo *v70; // [xsp+0h] [xbp-E0h]
  int32_t v71; // [xsp+Ch] [xbp-D4h]
  int32_t v73; // [xsp+14h] [xbp-CCh] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v74; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v75; // [xsp+40h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFE34 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, baseData);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__, v18);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v19);
    sub_1B640C8(&int_TypeInfo, v20);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__, v22);
    sub_1B640C8(&LocalizationManager_TypeInfo, v23);
    sub_1B640C8(&Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__148_0__, v24);
    sub_1B640C8(&StringLiteral_9169/*"NEED_QP"*/, v25);
    sub_1B640C8(&StringLiteral_3640/*"COMBINE_HAVE_QP"*/, v26);
    sub_1B640C8(&StringLiteral_3787/*"CONFIRM_COMBINE_MSG"*/, v27);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v28);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v29);
    sub_1B640C8(&StringLiteral_3672/*"COMBINE_SPEND_QP"*/, v30);
    byte_49FFE34 = 1;
  }
  memset(&v75, 0, sizeof(v75));
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
  SetRarityDialogControl__MoveAlpha(this, v32);
  SetRarityDialogControl__DefaultBgSize(this, v33);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.normalTitleLb;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  UILabel__set_text((UILabel_o *)normalConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_44;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_44;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v36);
  if ( !selectedList )
    goto LABEL_44;
  v71 = haveQp;
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_31553D4 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  materialSvtGrid = this->fields.materialSvtGrid;
  if ( !materialSvtGrid )
    goto LABEL_44;
  v38 = materialSvtGrid->fields.cellWidth * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v74,
    selectedList,
    (const MethodInfo_3155B28 *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v39 = 0;
  v75 = v74;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v75,
            (const MethodInfo_326F850 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v40 = (UnityEngine_Component_o *)this->fields.materialSvtGrid;
    if ( !v40 )
      sub_1B64324(0LL);
    key = v75.fields._current.fields.key;
    value = (char)v75.fields._current.fields.value;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v40, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Object )
      sub_1B64324(0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_object )
      sub_1B64324(0LL);
    MaterialSvtInfo__setMaterialSvtInfo_44874604(
      (MaterialSvtInfo_o *)Component_object,
      v39++,
      baseData,
      (int64_t)key,
      0,
      0,
      value != 0,
      0LL,
      v70);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v75,
    (const MethodInfo_326F96C *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_31553D4 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_31553D4 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v49 = this->fields.materialSvtGrid;
  if ( !v49 )
    goto LABEL_44;
  maxPerLine = v49->fields.maxPerLine;
  v51 = (int)normalConfirmInfo;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.materialSvtGrid,
                                                    0LL);
  if ( !normalConfirmInfo )
    goto LABEL_44;
  if ( v51 <= maxPerLine )
    v52 = Count;
  else
    v52 = maxPerLine;
  v53 = 55.0;
  if ( v51 <= maxPerLine )
    v53 = y;
  v55 = (float)(this->fields.center.fields.x - (float)(v38 * (float)(v52 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v53 - 1),
    0LL);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)normalConfirmInfo,
                                                    0LL);
  if ( !normalConfirmInfo )
    goto LABEL_44;
  v76.fields.x = 0.5;
  v76.fields.y = 0.5;
  v76.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v76, 0LL);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_44;
  UIGrid__set_repositionNow((UIGrid_o *)normalConfirmInfo, 1, 0LL);
  normalSpendQpTxtLb = this->fields.normalSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3672/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !normalSpendQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3640/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !normalHaveQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  LODWORD(v74.fields._dictionary) = spendQp;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v59, v60, 0LL);
  if ( !confirmSpendQpLb )
    goto LABEL_44;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  v73 = v71;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v62, v63, 0LL);
  if ( !confirmHaveQpLb )
    goto LABEL_44;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !confirmMsgLb
    || (UILabel__set_text(confirmMsgLb, (System_String_o *)normalConfirmInfo, 0LL),
        (normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(normalConfirmInfo, 0, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_44:
    sub_1B64324(normalConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 4 )
  {
    v68 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v65, v66);
    System_Action___ctor(
      v68,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__148_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v68, 0LL, 0LL, v69);
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
  void *exceedConfirmInfo; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v29; // x1
  __int64 v30; // x25
  float v31; // s8
  unsigned __int64 v32; // x24
  bool v33; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x7
  float y; // s9
  int v39; // w22
  int v40; // w9
  float v41; // s1
  float z; // s2
  float v43; // s0
  UILabel_o *exceedConfirmSpendQpTxtLb; // x22
  UILabel_o *exceedConfirmHaveQpTxtLb; // x22
  UILabel_o *exceedConfirmSpendQpLb; // x22
  System_String_o *v47; // x23
  Il2CppObject *v48; // x0
  UILabel_o *exceedConfirmHaveQpLb; // x21
  System_String_o *v50; // x22
  Il2CppObject *v51; // x0
  UILabel_o *exceedMaterialMsgLb; // x20
  UILabel_o *exceedConfirmMsgLb; // x20
  __int64 v54; // x1
  __int64 v55; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v57; // x20
  const MethodInfo *v58; // x5
  int32_t v59; // [xsp+18h] [xbp-58h] BYREF
  int32_t v60; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFE32 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, baseData);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v13);
    sub_1B640C8(&int_TypeInfo, v14);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&Method_SetRarityDialogControl__SetExceedMaterialInfo_b__146_0__, v16);
    sub_1B640C8(&StringLiteral_9169/*"NEED_QP"*/, v17);
    sub_1B640C8(&StringLiteral_3640/*"COMBINE_HAVE_QP"*/, v18);
    sub_1B640C8(&StringLiteral_3787/*"CONFIRM_COMBINE_MSG"*/, v19);
    sub_1B640C8(&StringLiteral_3639/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, v20);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v21);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v22);
    sub_1B640C8(&StringLiteral_3672/*"COMBINE_SPEND_QP"*/, v23);
    byte_49FFE32 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v25);
  SetRarityDialogControl__DefaultBgSize(this, v26);
  exceedConfirmInfo = this->fields.exceedConfirmTitleLb;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  UILabel__set_text((UILabel_o *)exceedConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_41;
  UILabel__set_text(cancelBtnLb, (System_String_o *)exceedConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_41;
  UILabel__set_text(decideBtnLb, (System_String_o *)exceedConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v29);
  if ( !list )
    goto LABEL_41;
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  LODWORD(v30) = list->max_length;
  v31 = *((float *)exceedConfirmInfo + 12);
  if ( (int)v30 >= 1 )
  {
    v32 = 0LL;
    v33 = 0;
    do
    {
      if ( v33 )
        goto LABEL_41;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
      exceedConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !exceedConfirmInfo )
        goto LABEL_41;
      exceedConfirmInfo = UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)exceedConfirmInfo,
                            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v32 >= list->max_length )
        sub_1B6432C(exceedConfirmInfo, v36);
      if ( !exceedConfirmInfo )
        goto LABEL_41;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)exceedConfirmInfo,
        v32,
        baseData,
        list->m_Items[v32],
        0,
        0,
        0LL,
        v37);
      exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
      v30 = *(_QWORD *)&list->max_length;
      ++v32;
      v33 = exceedConfirmInfo == 0LL;
    }
    while ( (__int64)v32 < (int)v30 );
    if ( !exceedConfirmInfo )
      goto LABEL_41;
  }
  y = this->fields.center.fields.y;
  v39 = *((_DWORD *)exceedConfirmInfo + 11);
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  if ( v39 >= (int)v30 )
    v40 = v30;
  else
    v40 = v39;
  v41 = 55.0;
  if ( v39 >= (int)v30 )
    v41 = y;
  v43 = (float)(this->fields.center.fields.x - (float)((float)(v31 * 0.5) * (float)(v40 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)exceedConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v41 - 1),
    0LL);
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  v61.fields.x = 0.5;
  v61.fields.y = 0.5;
  v61.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)exceedConfirmInfo, v61, 0LL);
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_41;
  UIGrid__set_repositionNow((UIGrid_o *)exceedConfirmInfo, 1, 0LL);
  exceedConfirmSpendQpTxtLb = this->fields.exceedConfirmSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3672/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !exceedConfirmSpendQpTxtLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmSpendQpTxtLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmHaveQpTxtLb = this->fields.exceedConfirmHaveQpTxtLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3640/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !exceedConfirmHaveQpTxtLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmHaveQpTxtLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmSpendQpLb = this->fields.exceedConfirmSpendQpLb;
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  v60 = spendQp;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
  exceedConfirmInfo = System_String__Format(v47, v48, 0LL);
  if ( !exceedConfirmSpendQpLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmSpendQpLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmHaveQpLb = this->fields.exceedConfirmHaveQpLb;
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  v59 = haveQp;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
  exceedConfirmInfo = System_String__Format(v50, v51, 0LL);
  if ( !exceedConfirmHaveQpLb )
    goto LABEL_41;
  UILabel__set_text(exceedConfirmHaveQpLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedMaterialMsgLb = this->fields.exceedMaterialMsgLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3639/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, 0LL);
  if ( !exceedMaterialMsgLb
    || (UILabel__set_text(exceedMaterialMsgLb, (System_String_o *)exceedConfirmInfo, 0LL),
        exceedConfirmMsgLb = this->fields.exceedConfirmMsgLb,
        exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"CONFIRM_COMBINE_MSG"*/, 0LL),
        !exceedConfirmMsgLb)
    || (UILabel__set_text(exceedConfirmMsgLb, (System_String_o *)exceedConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_41:
    sub_1B64324(exceedConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v57 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v54, v55);
    System_Action___ctor(
      v57,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetExceedMaterialInfo_b__146_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 0, v57, 0LL, 0LL, v58);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_GameObject_o *friendshipExceedConfirmInfo; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  UILabel_o *cancelBtnLb; // x22
  UILabel_o *decideBtnLb; // x22
  UILabel_o *friendshipExceedSpendQpTxtLb; // x22
  UILabel_o *friendshipExceedHaveQpTxtLb; // x22
  UILabel_o *friendshipExceedSpendQpLb; // x22
  System_String_o *v26; // x23
  Il2CppObject *v27; // x0
  UILabel_o *friendshipExceedHaveQpLb; // x21
  System_String_o *v29; // x22
  Il2CppObject *v30; // x0
  UILabel_o *friendshipExceedMsgLb; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v35; // x20
  const MethodInfo *v36; // x5
  int32_t v37; // [xsp+8h] [xbp-48h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FFE41 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, msg);
    sub_1B640C8(&int_TypeInfo, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__161_0__, v11);
    sub_1B640C8(&StringLiteral_9169/*"NEED_QP"*/, v12);
    sub_1B640C8(&StringLiteral_3640/*"COMBINE_HAVE_QP"*/, v13);
    sub_1B640C8(&StringLiteral_6459/*"FRIENDSHIP_EXCEED_SPEND_QP"*/, v14);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v15);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v16);
    sub_1B640C8(&StringLiteral_3795/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/, v17);
    byte_49FFE41 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v19);
  SetRarityDialogControl__DefaultBgSize(this, v20);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)this->fields.friendshipExceedTitleLb;
  if ( !friendshipExceedConfirmInfo )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)friendshipExceedConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0LL);
  if ( !cancelBtnLb )
    goto LABEL_21;
  UILabel__set_text(cancelBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0LL);
  if ( !decideBtnLb )
    goto LABEL_21;
  UILabel__set_text(decideBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedSpendQpTxtLb = this->fields.friendshipExceedSpendQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_6459/*"FRIENDSHIP_EXCEED_SPEND_QP"*/,
                                                              0LL);
  if ( !friendshipExceedSpendQpTxtLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedSpendQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedHaveQpTxtLb = this->fields.friendshipExceedHaveQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3640/*"COMBINE_HAVE_QP"*/,
                                                              0LL);
  if ( !friendshipExceedHaveQpTxtLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedHaveQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedSpendQpLb = this->fields.friendshipExceedSpendQpLb;
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  v38 = spendQp;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v26, v27, 0LL);
  if ( !friendshipExceedSpendQpLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedSpendQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedHaveQpLb = this->fields.friendshipExceedHaveQpLb;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  v37 = haveQp;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v29, v30, 0LL);
  if ( !friendshipExceedHaveQpLb )
    goto LABEL_21;
  UILabel__set_text(friendshipExceedHaveQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedMsgLb = this->fields.friendshipExceedMsgLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3795/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/,
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
    sub_1B64324(friendshipExceedConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 12 )
  {
    v35 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v32, v33);
    System_Action___ctor(
      v35,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__161_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v35, 0LL, 0LL, v36);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x20
  UnityEngine_GameObject_o *limitUpConfirmInfo; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  UILabel_o *cancelBtnLb; // x23
  UILabel_o *decideBtnLb; // x23
  UILabel_o *limitUpConfirmSpendQpTxtLb; // x23
  UILabel_o *limitUpConfirmHaveQpTxtLb; // x23
  UILabel_o *limitUpConfirmSpendQpLb; // x23
  System_String_o *v39; // x24
  Il2CppObject *v40; // x0
  UILabel_o *limitUpConfirmHaveQpLb; // x22
  System_String_o *v42; // x23
  Il2CppObject *v43; // x0
  UILabel_o *limitUpConfirmMsgLb; // x21
  __int64 v45; // x1
  __int64 v46; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v48; // x21
  const MethodInfo *v49; // x5
  int32_t v50; // [xsp+8h] [xbp-48h] BYREF
  int32_t v51; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FFE37 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, baseData);
    sub_1B640C8(&int_TypeInfo, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&Method_SetRarityDialogControl___c__DisplayClass151_0__SetLimitUpInfo_b__0__, v15);
    sub_1B640C8(&SetRarityDialogControl___c__DisplayClass151_0_TypeInfo, v16);
    sub_1B640C8(&StringLiteral_9169/*"NEED_QP"*/, v17);
    sub_1B640C8(&StringLiteral_3640/*"COMBINE_HAVE_QP"*/, v18);
    sub_1B640C8(&StringLiteral_3787/*"CONFIRM_COMBINE_MSG"*/, v19);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v20);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v21);
    sub_1B640C8(&StringLiteral_3672/*"COMBINE_SPEND_QP"*/, v22);
    byte_49FFE37 = 1;
  }
  v23 = sub_1B64314(SetRarityDialogControl___c__DisplayClass151_0_TypeInfo, baseData, combineLimitUpWarningDialog);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_22;
  *(_QWORD *)(v23 + 16) = baseData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 16), (int32_t)baseData, v25, v26);
  *(_QWORD *)(v23 + 24) = combineLimitUpWarningDialog;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 24), (int32_t)combineLimitUpWarningDialog, v27, v28);
  *(_QWORD *)(v23 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 32), (int32_t)this, v29, v30);
  SetRarityDialogControl__DisableConfirmInfo(this, v31);
  limitUpConfirmInfo = this->fields.limitUpConfirmInfo;
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0LL);
  limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v32);
  SetRarityDialogControl__DefaultBgSize(this, v33);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.limitUpTitleLb;
  if ( !limitUpConfirmInfo )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)limitUpConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_22;
  UILabel__set_text(cancelBtnLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_22;
  UILabel__set_text(decideBtnLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmSpendQpTxtLb = this->fields.limitUpConfirmSpendQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3672/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !limitUpConfirmSpendQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmSpendQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmHaveQpTxtLb = this->fields.limitUpConfirmHaveQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3640/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !limitUpConfirmHaveQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmHaveQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmSpendQpLb = this->fields.limitUpConfirmSpendQpLb;
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  v51 = spendQp;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v39, v40, 0LL);
  if ( !limitUpConfirmSpendQpLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmSpendQpLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmHaveQpLb = this->fields.limitUpConfirmHaveQpLb;
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  v50 = haveQp;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v42, v43, 0LL);
  if ( !limitUpConfirmHaveQpLb )
    goto LABEL_22;
  UILabel__set_text(limitUpConfirmHaveQpLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmMsgLb = this->fields.limitUpConfirmMsgLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !limitUpConfirmMsgLb
    || (UILabel__set_text(limitUpConfirmMsgLb, (System_String_o *)limitUpConfirmInfo, 0LL),
        (limitUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)limitUpConfirmInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 0, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_22:
    sub_1B64324(limitUpConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 5 )
  {
    v48 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v45, v46);
    System_Action___ctor(
      v48,
      (Il2CppObject *)v23,
      Method_SetRarityDialogControl___c__DisplayClass151_0__SetLimitUpInfo_b__0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v48, 0LL, 0LL, v49);
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
  UnityEngine_GameObject_o *npUpConfirmInfo; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *npUpTitleLb; // x21
  System_String_o **v36; // x8
  UILabel_o *cancelBtnLb; // x21
  UILabel_o *decideBtnLb; // x21
  __int64 v39; // x1
  __int64 v40; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  System_Action_o *v45; // x21
  const MethodInfo *v46; // x5
  SetRarityDialogControl_o *v47; // x0
  int32_t v48; // w1
  __int64 v49; // x1
  __int64 v50; // x2
  const MethodInfo *v51; // [xsp+0h] [xbp-70h]

  if ( (byte_49FFE3A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, baseData);
    sub_1B640C8(&LocalizationManager_TypeInfo, v17);
    sub_1B640C8(&Method_SetRarityDialogControl_DefaultBgSize__, v18);
    sub_1B640C8(&Method_SetRarityDialogControl__SetNpCombineInfo_b__154_0__, v19);
    sub_1B640C8(&Method_SetRarityDialogControl__SetNpCombineInfo_b__154_1__, v20);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v21);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v22);
    sub_1B640C8(&StringLiteral_3815/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/, v23);
    sub_1B640C8(&StringLiteral_3813/*"CONFIRM_TITLE_TD_COMBINE"*/, v24);
    byte_49FFE3A = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  npUpConfirmInfo = this->fields.npUpConfirmInfo;
  if ( !npUpConfirmInfo )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0LL);
  this->fields.npBaseData = baseData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.npBaseData, (int32_t)baseData, v26, v27);
  this->fields.npSelectMtUsrSvtIdList = selectUsrSvtIdList;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.npSelectMtUsrSvtIdList,
    (int32_t)selectUsrSvtIdList,
    v28,
    v29);
  this->fields.npLvUpData = updata;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.npLvUpData, (int32_t)updata, v30, v31);
  this->fields.npIsExceedMaxLv = isExceedMaxLv;
  this->fields.npIsCombineSvt = isCombineSvt;
  this->fields.npIsExceededMaterial = isExceededMaterial;
  npUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !npUpConfirmInfo )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v32);
  SetRarityDialogControl__DefaultBgSize(this, v33);
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
    v51);
  npUpTitleLb = this->fields.npUpTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v36 = (System_String_o **)(reConfirmation ? &StringLiteral_3815/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/ : &StringLiteral_3813/*"CONFIRM_TITLE_TD_COMBINE"*/);
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(*v36, 0LL);
  if ( !npUpTitleLb )
    goto LABEL_27;
  UILabel__set_text(npUpTitleLb, (System_String_o *)npUpConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb
    || (UILabel__set_text(cancelBtnLb, (System_String_o *)npUpConfirmInfo, 0LL),
        decideBtnLb = this->fields.decideBtnLb,
        npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/,
                                                        0LL),
        !decideBtnLb)
    || (UILabel__set_text(decideBtnLb, (System_String_o *)npUpConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_27:
    sub_1B64324(npUpConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 11 )
  {
    if ( (this->fields.npIsExceedMaxLv || this->fields.npIsCombineSvt || this->fields.npIsExceededMaterial)
      && !reConfirmation )
    {
      v42 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v39, v40);
      System_Action___ctor(v42, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__154_0__, 0LL);
      v45 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v43, v44);
      System_Action___ctor(v45, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
      v47 = this;
      v48 = 0;
    }
    else
    {
      v42 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v39, v40);
      System_Action___ctor(v42, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__154_1__, 0LL);
      v45 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v49, v50);
      System_Action___ctor(v45, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
      v48 = 8;
      v47 = this;
    }
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v47, v48, v42, 0LL, v45, v46);
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
  UnityEngine_GameObject_o *skillUpConfirmInfo; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  __int64 v22; // x1
  SetLevelUpData_o *v23; // x23
  signed int max_length; // w21
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  struct UILabel_o *upTargetSvtNameBef; // x22
  UnityEngine_GameObject_o *v34; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  struct UILabel_o *upTargetSvtNameAft; // x22
  int32_t v38; // w2
  int32_t v39; // w3
  struct UILabel_o *upTargetSkillNameBef; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  struct UILabel_o *upTargetSkillNameAft; // x22
  SetLevelUpData_o *v44; // x8
  UnityEngine_GameObject_o *v45; // x22
  int32_t v46; // w2
  int32_t v47; // w3
  SetLevelUpData_o *v48; // x8
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w2
  int32_t v52; // w3
  SetLevelUpData_o *v53; // x8
  struct System_String_o *targetName; // x1
  int32_t v55; // w2
  int32_t v56; // w3
  SetLevelUpData_o *v57; // x8
  struct System_String_o *v58; // x1
  UnityEngine_GameObject_c *klass; // x8
  __int64 v60; // x20
  UIExtrusionLabel_o *currentLvLb; // x20
  UIExtrusionLabel_o *resLvLb; // x20
  UILabel_o *upSpendQpTxtLb; // x20
  UILabel_o *upHaveQpTxtLb; // x20
  UILabel_o *upSpendQpLb; // x20
  System_String_o *v66; // x21
  Il2CppObject *v67; // x0
  UILabel_o *upHaveQpLb; // x20
  System_String_o *v69; // x21
  Il2CppObject *v70; // x0
  UILabel_o *upConfirmMsgLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  __int64 v74; // x1
  __int64 v75; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v77; // x20
  const MethodInfo *v78; // x5
  __int64 v79; // x0
  int32_t haveQp; // [xsp+8h] [xbp-48h] BYREF
  int32_t spendQp; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FFE38 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, upDataList);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__152_0__, v9);
    sub_1B640C8(&string___TypeInfo, v10);
    sub_1B640C8(&UILabel___TypeInfo, v11);
    sub_1B640C8(&StringLiteral_9169/*"NEED_QP"*/, v12);
    sub_1B640C8(&StringLiteral_3640/*"COMBINE_HAVE_QP"*/, v13);
    sub_1B640C8(&StringLiteral_3787/*"CONFIRM_COMBINE_MSG"*/, v14);
    sub_1B640C8(&StringLiteral_25363/*"："*/, v15);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v16);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v17);
    sub_1B640C8(&StringLiteral_3672/*"COMBINE_SPEND_QP"*/, v18);
    byte_49FFE38 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)upDataList);
  skillUpConfirmInfo = this->fields.skillUpConfirmInfo;
  if ( !skillUpConfirmInfo
    || (UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0LL),
        (skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0LL),
        SetRarityDialogControl__MoveAlpha(this, v20),
        SetRarityDialogControl__DefaultBgSize(this, v21),
        !upDataList) )
  {
LABEL_72:
    sub_1B64324(skillUpConfirmInfo);
  }
  if ( !upDataList->max_length )
    goto LABEL_73;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTitleLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  v23 = upDataList->m_Items[0];
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, titleMsg, 0LL);
  if ( !v23 )
    goto LABEL_72;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetRubyLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, v23->fields.targetRuby, 0LL);
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
    v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
    GameObjectExtensions__SetLocalPositionX(v29, 11.0, 0LL);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upHaveQpTxtLb;
    if ( !skillUpConfirmInfo )
      goto LABEL_72;
    v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
    GameObjectExtensions__SetLocalPositionX(v30, 11.0, 0LL);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1B64170(UILabel___TypeInfo, 4LL);
    if ( !skillUpConfirmInfo )
      goto LABEL_72;
    upTargetSvtNameBef = this->fields.upTargetSvtNameBef;
    v34 = skillUpConfirmInfo;
    if ( upTargetSvtNameBef )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1B64204(
                                                         this->fields.upTargetSvtNameBef,
                                                         skillUpConfirmInfo->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_74;
    }
    if ( !LODWORD(v34[1].klass) )
      goto LABEL_73;
    v34[1].monitor = upTargetSvtNameBef;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34[1].monitor, (int32_t)upTargetSvtNameBef, v31, v32);
    upTargetSvtNameAft = this->fields.upTargetSvtNameAft;
    if ( upTargetSvtNameAft )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1B64204(
                                                         this->fields.upTargetSvtNameAft,
                                                         v34->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_74;
    }
    if ( LODWORD(v34[1].klass) <= 1 )
      goto LABEL_73;
    *(_QWORD *)&v34[1].fields.m_CachedPtr = upTargetSvtNameAft;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34[1].fields, (int32_t)upTargetSvtNameAft, v35, v36);
    upTargetSkillNameBef = this->fields.upTargetSkillNameBef;
    if ( upTargetSkillNameBef )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1B64204(
                                                         this->fields.upTargetSkillNameBef,
                                                         v34->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_74;
    }
    if ( LODWORD(v34[1].klass) <= 2 )
      goto LABEL_73;
    v34[2].klass = (UnityEngine_GameObject_c *)upTargetSkillNameBef;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34[2], (int32_t)upTargetSkillNameBef, v38, v39);
    upTargetSkillNameAft = this->fields.upTargetSkillNameAft;
    if ( upTargetSkillNameAft )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1B64204(
                                                         this->fields.upTargetSkillNameAft,
                                                         v34->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
      {
LABEL_74:
        v79 = sub_1B64348(skillUpConfirmInfo);
        sub_1B641F0(v79, 0LL);
      }
    }
    if ( LODWORD(v34[1].klass) > 3 )
    {
      v34[2].monitor = upTargetSkillNameAft;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v34[2].monitor, (int32_t)upTargetSkillNameAft, v41, v42);
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_1B64170(string___TypeInfo, 4LL);
      if ( upDataList->max_length )
      {
        v44 = upDataList->m_Items[0];
        if ( !v44 )
          goto LABEL_72;
        v45 = skillUpConfirmInfo;
        skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Concat_61375396(
                                                           v44->fields.displayText,
                                                           (System_String_o *)StringLiteral_25363/*"："*/,
                                                           0LL);
        if ( !v45 )
          goto LABEL_72;
        if ( LODWORD(v45[1].klass) )
        {
          v45[1].monitor = skillUpConfirmInfo;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45[1].monitor, (int32_t)skillUpConfirmInfo, v46, v47);
          if ( upDataList->max_length > 1 )
          {
            v48 = upDataList->m_Items[1];
            if ( !v48 )
              goto LABEL_72;
            skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Concat_61375396(
                                                               v48->fields.displayText,
                                                               (System_String_o *)StringLiteral_25363/*"："*/,
                                                               0LL);
            if ( LODWORD(v45[1].klass) > 1 )
            {
              *(_QWORD *)&v45[1].fields.m_CachedPtr = skillUpConfirmInfo;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45[1].fields, (int32_t)skillUpConfirmInfo, v49, v50);
              if ( upDataList->max_length )
              {
                v53 = upDataList->m_Items[0];
                if ( !v53 )
                  goto LABEL_72;
                if ( LODWORD(v45[1].klass) > 2 )
                {
                  targetName = v53->fields.targetName;
                  v45[2].klass = (UnityEngine_GameObject_c *)targetName;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45[2], (int32_t)targetName, v51, v52);
                  if ( upDataList->max_length > 1 )
                  {
                    v57 = upDataList->m_Items[1];
                    if ( !v57 )
                      goto LABEL_72;
                    if ( LODWORD(v45[1].klass) > 3 )
                    {
                      v58 = v57->fields.targetName;
                      v45[2].monitor = v58;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45[2].monitor, (int32_t)v58, v55, v56);
                      klass = v34[1].klass;
                      if ( (int)klass < 1 )
                        goto LABEL_57;
                      v60 = 0LL;
                      while ( (unsigned int)v60 < (unsigned int)klass && (unsigned int)v60 < LODWORD(v45[1].klass) )
                      {
                        skillUpConfirmInfo = (UnityEngine_GameObject_o *)*((_QWORD *)&v34[1].monitor + v60);
                        if ( !skillUpConfirmInfo )
                          goto LABEL_72;
                        UILabel__set_text(
                          (UILabel_o *)skillUpConfirmInfo,
                          *((System_String_o **)&v45[1].monitor + v60),
                          0LL);
                        klass = v34[1].klass;
                        if ( (int)++v60 >= (int)klass )
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
    sub_1B6432C(skillUpConfirmInfo, v22);
  }
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetNameLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, v23->fields.targetName, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetSvtNameBef;
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v25, 0LL);
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 0, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upSpendQpTxtLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v26, -5.0, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upHaveQpTxtLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_72;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v27, -5.0, 0LL);
LABEL_57:
  currentLvLb = this->fields.currentLvLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v23 + 64, 0LL);
  if ( !currentLvLb )
    goto LABEL_72;
  UIExtrusionLabel__set_text(currentLvLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  resLvLb = this->fields.resLvLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v23 + 68, 0LL);
  if ( !resLvLb )
    goto LABEL_72;
  UIExtrusionLabel__set_text(resLvLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3672/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !upSpendQpTxtLb )
    goto LABEL_72;
  UILabel__set_text(upSpendQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3640/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !upHaveQpTxtLb )
    goto LABEL_72;
  UILabel__set_text(upHaveQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upSpendQpLb = this->fields.upSpendQpLb;
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  spendQp = v23->fields.spendQp;
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendQp);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v66, v67, 0LL);
  if ( !upSpendQpLb )
    goto LABEL_72;
  UILabel__set_text(upSpendQpLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upHaveQpLb = this->fields.upHaveQpLb;
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  haveQp = v23->fields.haveQp;
  v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveQp);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v69, v70, 0LL);
  if ( !upHaveQpLb )
    goto LABEL_72;
  UILabel__set_text(upHaveQpLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upConfirmMsgLb = this->fields.upConfirmMsgLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !upConfirmMsgLb )
    goto LABEL_72;
  UILabel__set_text(upConfirmMsgLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_72;
  UILabel__set_text(cancelBtnLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_72;
  UILabel__set_text(decideBtnLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_72;
  if ( combineRootComponent->fields.state == 10 )
  {
    v77 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v74, v75);
    System_Action___ctor(
      v77,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__152_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v77, 0LL, 0LL, v78);
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
  UnityEngine_GameObject_o *specialAscensionConfirmInfo; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  System_String_o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v35; // x21
  const MethodInfo *v36; // x5
  SetRarityDialogControl_o *v37; // x0
  int32_t v38; // w1

  if ( (byte_49FFE42 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, baseData);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&Method_SetRarityDialogControl__SetSpecialAscension_b__162_0__, v12);
    sub_1B640C8(&Method_SetRarityDialogControl__SetSpecialAscension_b__162_1__, v13);
    sub_1B640C8(&Method_SetRarityDialogControl__SetSpecialAscension_b__162_2__, v14);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v15);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v16);
    sub_1B640C8(&StringLiteral_12129/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/, v17);
    sub_1B640C8(&StringLiteral_12133/*"SPECIAL_ASCENSION_WARNING1_TXT"*/, v18);
    sub_1B640C8(&StringLiteral_12134/*"SPECIAL_ASCENSION_WARNING2_TXT"*/, v19);
    sub_1B640C8(&StringLiteral_1/*""*/, v20);
    byte_49FFE42 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v22);
  SetRarityDialogControl__DefaultBgSize(this, v23);
  this->fields.specialAscensionConfirm = confirm;
  this->fields.specialAscensionWarning1 = warning1;
  this->fields.specialAscensionWarning2 = warning2;
  if ( confirm )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12129/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/, 0LL);
    this->fields.specialAscensionConfirm = 0;
  }
  else if ( warning1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12133/*"SPECIAL_ASCENSION_WARNING1_TXT"*/, 0LL);
    this->fields.specialAscensionWarning1 = 0;
  }
  else if ( warning2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12134/*"SPECIAL_ASCENSION_WARNING2_TXT"*/, 0LL);
    this->fields.specialAscensionWarning2 = 0;
  }
  else
  {
    v24 = (System_String_o *)StringLiteral_1/*""*/;
  }
  specialAscensionConfirmInfo = this->fields.specialAscensionConfirmInfo;
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              specialAscensionConfirmInfo,
                                                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___);
  if ( !specialAscensionConfirmInfo )
    goto LABEL_37;
  SpecialAscensionConfirmInfo__SetSpecialAscensionConfirmInfo(
    (SpecialAscensionConfirmInfo_o *)specialAscensionConfirmInfo,
    v24,
    v25,
    v26);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0LL);
  if ( !cancelBtnLb )
    goto LABEL_37;
  UILabel__set_text(cancelBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0LL);
  if ( !decideBtnLb
    || (UILabel__set_text(decideBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0LL),
        (specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (specialAscensionConfirmInfo = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)specialAscensionConfirmInfo,
                                        0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 0, 0LL),
        v31 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v29, v30),
        System_Action___ctor(
          v31,
          (Il2CppObject *)this,
          Method_SetRarityDialogControl__SetSpecialAscension_b__162_0__,
          0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_37:
    sub_1B64324(specialAscensionConfirmInfo);
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
      v35 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v32, v33);
      System_Action___ctor(
        v35,
        (Il2CppObject *)this,
        Method_SetRarityDialogControl__SetSpecialAscension_b__162_1__,
        0LL);
      v38 = 8;
      v37 = this;
      goto LABEL_35;
    }
    v35 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v32, v33);
    System_Action___ctor(v35, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__162_2__, 0LL);
    v37 = this;
    v38 = 0;
LABEL_35:
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v37, v38, v35, v31, 0LL, v36);
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
  UnityEngine_GameObject_o *allDispConfirmInfo; // x0
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  UILabel_o *cancelBtnLb; // x26
  UILabel_o *decideBtnLb; // x26
  const MethodInfo *v39; // x1
  struct UIGrid_o *allSvtGrid; // x8
  float v41; // s9
  int32_t v42; // w26
  UnityEngine_Component_o *v43; // x0
  Il2CppObject *key; // x27
  char value; // w29
  UnityEngine_GameObject_o *svtFaceInfo; // x28
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  Il2CppObject *Component_object; // x0
  float y; // s8
  int32_t Count; // w25
  struct UIGrid_o *v52; // x8
  int32_t maxPerLine; // w20
  int32_t v54; // w24
  int32_t v55; // w10
  float v56; // s1
  float z; // s2
  float v58; // s0
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v62; // x25
  Il2CppObject *v63; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v65; // x24
  Il2CppObject *v66; // x0
  UILabel_o *allRareMsgLb; // x20
  UILabel_o *allLimitRareLb; // x20
  UILabel_o *allRareConfirmMsgLb; // x20
  __int64 v70; // x1
  __int64 v71; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v73; // x20
  const MethodInfo *v74; // x5
  const MethodInfo *v75; // [xsp+0h] [xbp-E0h]
  int32_t v77; // [xsp+Ch] [xbp-D4h]
  int32_t v78; // [xsp+14h] [xbp-CCh] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v79; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v80; // [xsp+40h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFE3D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, baseData);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__, v20);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v21);
    sub_1B640C8(&int_TypeInfo, v22);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__, v24);
    sub_1B640C8(&LocalizationManager_TypeInfo, v25);
    sub_1B640C8(&Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__157_0__, v26);
    sub_1B640C8(&StringLiteral_9169/*"NEED_QP"*/, v27);
    sub_1B640C8(&StringLiteral_3640/*"COMBINE_HAVE_QP"*/, v28);
    sub_1B640C8(&StringLiteral_3787/*"CONFIRM_COMBINE_MSG"*/, v29);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v30);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v31);
    sub_1B640C8(&StringLiteral_10897/*"RARE_MATERIAL_INFO_MSG"*/, v32);
    sub_1B640C8(&StringLiteral_3672/*"COMBINE_SPEND_QP"*/, v33);
    byte_49FFE3D = 1;
  }
  memset(&v80, 0, sizeof(v80));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v35);
  SetRarityDialogControl__DefaultBgSize(this, v36);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allTitleLb;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UILabel__set_text((UILabel_o *)allDispConfirmInfo, title, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_69;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_69;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v39);
  if ( !selectedList )
    goto LABEL_69;
  v77 = haveQp;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_31553D4 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allSvtGrid = this->fields.allSvtGrid;
  if ( !allSvtGrid )
    goto LABEL_69;
  v41 = allSvtGrid->fields.cellWidth * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v79,
    selectedList,
    (const MethodInfo_3155B28 *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v42 = 0;
  v80 = v79;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v80,
            (const MethodInfo_326F850 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v43 = (UnityEngine_Component_o *)this->fields.allSvtGrid;
    if ( !v43 )
      sub_1B64324(0LL);
    key = v80.fields._current.fields.key;
    value = (char)v80.fields._current.fields.value;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v43, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Object )
      sub_1B64324(0LL);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_object )
      sub_1B64324(0LL);
    MaterialSvtInfo__setMaterialSvtInfo_44874604(
      (MaterialSvtInfo_o *)Component_object,
      v42++,
      baseData,
      (int64_t)key,
      0,
      0,
      value != 0,
      0LL,
      v75);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v80,
    (const MethodInfo_326F96C *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_31553D4 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_31553D4 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v52 = this->fields.allSvtGrid;
  if ( !v52 )
    goto LABEL_69;
  maxPerLine = v52->fields.maxPerLine;
  v54 = (int)allDispConfirmInfo;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this->fields.allSvtGrid,
                                                     0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  if ( v54 <= maxPerLine )
    v55 = Count;
  else
    v55 = maxPerLine;
  v56 = 70.0;
  if ( v54 <= maxPerLine )
    v56 = y;
  z = this->fields.center.fields.z;
  v58 = (float)(this->fields.center.fields.x - (float)(v41 * (float)(v55 - 1))) * 0.47;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v56 - 1),
    0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)allDispConfirmInfo,
                                                     0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  v81.fields.x = 0.47;
  v81.fields.y = 0.47;
  v81.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v81, 0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_69;
  UIGrid__set_repositionNow((UIGrid_o *)allDispConfirmInfo, 1, 0LL);
  allSpendQpTxtLb = this->fields.allSpendQpTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3672/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !allSpendQpTxtLb )
    goto LABEL_69;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3640/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !allHaveQpTxtLb )
    goto LABEL_69;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allSpendQpLb = this->fields.allSpendQpLb;
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  LODWORD(v79.fields._dictionary) = spendQp;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v62, v63, 0LL);
  if ( !allSpendQpLb )
    goto LABEL_69;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpLb = this->fields.allHaveQpLb;
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_9169/*"NEED_QP"*/, 0LL);
  v78 = v77;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v65, v66, 0LL);
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
                                                       (System_String_o *)StringLiteral_10897/*"RARE_MATERIAL_INFO_MSG"*/,
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
                                                       (System_String_o *)StringLiteral_10897/*"RARE_MATERIAL_INFO_MSG"*/,
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
    sub_1B64324(allDispConfirmInfo);
  }
LABEL_59:
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !allRareConfirmMsgLb )
    goto LABEL_69;
  UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_69;
  if ( combineRootComponent->fields.state == 4 )
  {
    v73 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v70, v71);
    System_Action___ctor(
      v73,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__157_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v73, 0LL, 0LL, v74);
  }
}


void __fastcall SetRarityDialogControl___SetAllDispConfirmCombine_b__149_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B64324(0LL);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetAppendSkillCombineInfo_b__153_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B64324(0LL);
  CombineRootComponent__RequestAppendSkillCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmCombine_b__147_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B64324(0LL);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__155_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B64324(0LL);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__155_1(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.lvExceedCtr) == 0LL )
    sub_1B64324(this);
  LevelExceedControl__OnClickCheckLvExceed((LevelExceedControl_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__156_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B64324(0LL);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmRarityInfo_b__145_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B64324(0LL);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmSvtEqCombine_b__148_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B64324(0LL);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetExceedMaterialInfo_b__146_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.svtCombineCtr) == 0LL )
    sub_1B64324(this);
  ServantCombineControl__CheckRareSvt((ServantCombineControl_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetFriendshipExceedInfo_b__161_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
  CombineRootComponent__RequestTdCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetSkillNpCombineInfo_b__152_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_1B64324(0LL);
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
    sub_1B64324(this);
  if ( specialAscensionCtr->fields.pushExeButton )
    specialAscensionCtr->fields.pushExeButton = 0;
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__162_1(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x22

  if ( (byte_49FFE4A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&CombineRootComponent_TypeInfo, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_SetRarityDialogControl__SetSpecialAscension_b__162_3__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_12131/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49FFE4A = 1;
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
    sub_1B64324(combineRootComponent);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12131/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0LL);
  v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__162_3__, 0LL);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v11,
    v14,
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x22
  __int64 v16; // x0

  if ( (byte_49FFE4B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&CombineRootComponent_TypeInfo, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_SetRarityDialogControl__SetSpecialAscension_b__162_4__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&StringLiteral_12131/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49FFE4B = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12131/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0LL);
    v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__162_4__, 0LL);
    if ( !Instance )
      sub_1B64324(v16);
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v12,
      v15,
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(0LL);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FFE4C & 1) == 0 )
  {
    sub_1B640C8(&SetRarityDialogControl___c_TypeInfo, v1);
    byte_49FFE4C = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SetRarityDialogControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SetRarityDialogControl___c_TypeInfo->static_fields->__9 = (struct SetRarityDialogControl___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)SetRarityDialogControl___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  return NpCombineControl__CheckConfirm_44556320(x, 0LL);
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
  System_Collections_Generic_List_object__o *v17; // x20
  int64_t UserId; // x21
  int64_t Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x8
  int64_t v23; // x22
  unsigned __int64 v24; // x26
  __int64 v25; // x23
  __int128 v26; // q0
  __int64 v27; // x24
  __int64 v28; // x25
  struct UserServantEntity_o *baseData; // x8
  int v30; // w24
  __int128 v31; // q0
  struct UserServantEntity_o *v32; // x8
  __int128 v33; // q0
  int64_t v34; // x24
  int32_t v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Predicate_object__o *v40; // x21
  Il2CppObject *v41; // x22
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x1
  __int64 v46; // x2
  CombineLimitUpWarningDialog_ClickDelegate_o *_9__2; // x21
  CombineLimitUpWarningDialog_o *combineLimitUpWarningDialog; // x20
  int32_t v49; // w2
  int32_t v50; // w3
  struct SetRarityDialogControl_o *_4__this; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+40h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+60h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_49FFE4D & 1) == 0 )
  {
    sub_1B640C8(&CombineLimitUpWarningDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1B640C8(&System_Predicate_UserServantEntity__TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B640C8(&Method_SetRarityDialogControl___c__SetLimitUpInfo_b__151_1__, v14);
    sub_1B640C8(&Method_SetRarityDialogControl___c__DisplayClass151_0__SetLimitUpInfo_b__2__, v15);
    sub_1B640C8(&SetRarityDialogControl___c_TypeInfo, v16);
    byte_49FFE4D = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_47;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_47;
  v22 = *(_QWORD *)(Instance + 24);
  v23 = Instance;
  if ( (int)v22 >= 1 )
  {
    v24 = 0LL;
    do
    {
      if ( v24 >= (unsigned int)v22 )
        sub_1B6432C(Instance, v20);
      v25 = *(_QWORD *)(v23 + 32 + 8 * v24);
      if ( v25 )
      {
        v26 = *(_OWORD *)(v25 + 64);
        *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)(v25 + 48);
        *(_OWORD *)&v55.fields.fakeValue = v26;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v54 = v55;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v54, 0LL);
        if ( Instance == UserId )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v25, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v28 = *(_QWORD *)(v25 + 80);
            v27 = *(_QWORD *)(v25 + 88);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v56.fields.currentCryptoKey = v28;
            *(_QWORD *)&v56.fields.fakeValue = v27;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v56, 0LL);
            baseData = this->fields.baseData;
            if ( !baseData )
              goto LABEL_47;
            v30 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(baseData->fields.svtId, 0LL);
            if ( v30 == (_DWORD)Instance )
            {
              v31 = *(_OWORD *)(v25 + 32);
              *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)(v25 + 16);
              *(_OWORD *)&v55.fields.fakeValue = v31;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v53 = v55;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v53, 0LL);
              v32 = this->fields.baseData;
              if ( !v32 )
                goto LABEL_47;
              v33 = *(_OWORD *)&v32->fields.id.fields.fakeValue;
              v34 = Instance;
              *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&v32->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v52.fields.fakeValue = v33;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v52, 0LL);
              if ( v34 != Instance )
              {
                if ( !v17 )
                  goto LABEL_47;
                items = v17->fields._items;
                v37 = Method_System_Collections_Generic_List_UserServantEntity__Add__;
                ++v17->fields._version;
                if ( !items )
                  goto LABEL_47;
                size = v17->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v17,
                    (Il2CppObject *)v25,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
                }
                else
                {
                  v39 = &items->obj.klass + size;
                  v17->fields._size = size + 1;
                  v39[4] = (Il2CppClass *)v25;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 4), v25, v21, v35);
                }
              }
            }
          }
        }
      }
      LODWORD(v22) = *(_DWORD *)(v23 + 24);
    }
    while ( (__int64)++v24 < (int)v22 );
  }
  Instance = (int64_t)SetRarityDialogControl___c_TypeInfo;
  if ( !SetRarityDialogControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo);
    Instance = (int64_t)SetRarityDialogControl___c_TypeInfo;
  }
  v40 = *(System_Predicate_object__o **)(*(_QWORD *)(Instance + 184) + 8LL);
  if ( !v40 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (int64_t)SetRarityDialogControl___c_TypeInfo;
    }
    v41 = **(Il2CppObject ***)(Instance + 184);
    v40 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_UserServantEntity__TypeInfo, v20, v21);
    System_Predicate_object____ctor(v40, v41, Method_SetRarityDialogControl___c__SetLimitUpInfo_b__151_1__, 0LL);
    static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
    static_fields->__9__151_1 = (struct System_Predicate_UserServantEntity__o *)v40;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__151_1, (int32_t)v40, v43, v44);
  }
  if ( !v17 )
    goto LABEL_47;
  Instance = (int64_t)System_Collections_Generic_List_object___Find(
                        v17,
                        (System_Predicate_T__o *)v40,
                        (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_UserServantEntity__Find__);
  if ( Instance )
  {
    _9__2 = this->fields.__9__2;
    combineLimitUpWarningDialog = this->fields.combineLimitUpWarningDialog;
    if ( !_9__2 )
    {
      _9__2 = (CombineLimitUpWarningDialog_ClickDelegate_o *)sub_1B64314(
                                                               CombineLimitUpWarningDialog_ClickDelegate_TypeInfo,
                                                               v45,
                                                               v46);
      CombineLimitUpWarningDialog_ClickDelegate___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_SetRarityDialogControl___c__DisplayClass151_0__SetLimitUpInfo_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v49, v50);
    }
    if ( combineLimitUpWarningDialog )
    {
      CombineLimitUpWarningDialog__Open(combineLimitUpWarningDialog, _9__2, 0LL);
      return;
    }
LABEL_47:
    sub_1B64324(Instance);
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
      sub_1B64324(this);
    }
    CombineRootComponent__RequestLimitUp((CombineRootComponent_o *)this, 0LL);
  }
}