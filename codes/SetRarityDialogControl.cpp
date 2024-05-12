void __fastcall SetRarityDialogControl___cctor(const MethodInfo *method)
{
  SetRarityDialogControl_c *v1; // x8

  if ( (byte_438DAC5 & 1) == 0 )
  {
    sub_B775C4(&SetRarityDialogControl_TypeInfo);
    byte_438DAC5 = 1;
  }
  SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME = 0.26667;
  SetRarityDialogControl_TypeInfo->static_fields->CLOSE_TIME = 0.26667;
  v1 = SetRarityDialogControl_TypeInfo;
  SetRarityDialogControl_TypeInfo->static_fields->DIALOG_INITIAL_SCALE = 0.9;
  v1->static_fields->DIALOG_CLOSE_SCALE = 0.95;
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
  SetRarityDialogControl_o *v4; // x20
  __int64 v5; // x8
  unsigned __int64 v6; // x22
  int64_t v7; // x21
  __int64 v8; // x1
  __int64 v9; // x0

  v4 = this;
  if ( (byte_438DAC4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    this = (SetRarityDialogControl_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DAC4 = 1;
  }
  v4->fields.isExceed = 0;
  if ( selectedList )
  {
    v5 = *(_QWORD *)&selectedList->max_length;
    if ( v5 )
    {
      if ( (int)v5 >= 1 )
      {
        v6 = 0LL;
        while ( 1 )
        {
          if ( v6 >= (unsigned int)v5 )
          {
            v9 = sub_B776C8(this);
            sub_B77668(v9, 0LL);
          }
          v7 = selectedList->m_Items[v6];
          this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this
            || (this = (SetRarityDialogControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
            || (this = (SetRarityDialogControl_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                     (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                     v7,
                                                     (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0LL )
          {
            sub_B7769C(this, v8);
          }
          if ( SLODWORD(this->fields.confirmHaveQpLb) >= 1 )
            break;
          LODWORD(v5) = selectedList->max_length;
          if ( (__int64)++v6 >= (int)v5 )
            return;
        }
        v4->fields.isExceed = 1;
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SetRarityDialogControl_o *v11; // x22
  int32_t adjustHp; // w24
  int32_t adjustAtk; // w19
  _BOOL8 IsStatusUp; // x0
  __int64 v15; // x8
  unsigned __int64 v16; // x27
  int v17; // w26
  int v18; // w24
  int64_t v19; // x22
  UserServantEntity_o *v20; // x22
  System_String_o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int v28; // w19
  System_String_o *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int v36; // w8
  System_String_o *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x0
  int32_t v46; // [xsp+8h] [xbp-78h]
  int32_t v47; // [xsp+Ch] [xbp-74h]
  int32_t secondMaxAdjustAtk[2]; // [xsp+18h] [xbp-68h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+20h] [xbp-60h] BYREF
  int32_t atkUp[2]; // [xsp+28h] [xbp-58h] BYREF

  v11 = this;
  if ( (byte_438DAB2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_12602/*"STATUS_HP_OVER_DIALOG_MSG"*/);
    sub_B775C4(&StringLiteral_12601/*"STATUS_ATK_OVER_DIALOG_MSG"*/);
    sub_B775C4(&StringLiteral_12603/*"STATUS_OVER_DIALOG_MSG"*/);
    this = (SetRarityDialogControl_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DAB2 = 1;
  }
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)atkUp = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  if ( !baseData )
LABEL_39:
    sub_B7769C(this, baseData);
  adjustHp = baseData->fields.adjustHp;
  adjustAtk = baseData->fields.adjustAtk;
  *(_QWORD *)atkUp = 0LL;
  maxAjustAtk[1] = 0;
  maxAjustAtk[0] = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  *labelMsg = (System_String_o *)StringLiteral_1/*""*/;
  sub_B77560(
    (BattleServantConfConponent_o *)labelMsg,
    (System_Int32_array **)StringLiteral_1/*""*/,
    (System_String_array **)selectUsrSvtIdList,
    (System_String_array **)labelMsg,
    (System_Boolean_array **)method,
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
    v15 = *(_QWORD *)&selectUsrSvtIdList->max_length;
    if ( (int)v15 < 1 )
    {
      v28 = 0;
    }
    else
    {
      v46 = adjustHp;
      v47 = adjustAtk;
      v16 = 0LL;
      v17 = 0;
      v18 = 0;
      do
      {
        if ( v16 >= (unsigned int)v15 )
        {
          v44 = sub_B776C8(IsStatusUp);
          sub_B77668(v44, 0LL);
        }
        v19 = selectUsrSvtIdList->m_Items[v16];
        this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_39;
        this = (SetRarityDialogControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !this )
          goto LABEL_39;
        this = (SetRarityDialogControl_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                             v19,
                                             (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !this )
          goto LABEL_39;
        v20 = (UserServantEntity_o *)this;
        IsStatusUp = UserServantEntity__IsStatusUp((UserServantEntity_o *)this, 0LL);
        if ( IsStatusUp )
        {
          *(_QWORD *)atkUp = 0LL;
          UserServantEntity__getStatusUpInfo(v20, &atkUp[1], atkUp, 0LL);
          v17 += atkUp[1] & ~(atkUp[1] >> 31);
          v18 += atkUp[0] & ~(atkUp[0] >> 31);
        }
        LODWORD(v15) = selectUsrSvtIdList->max_length;
        ++v16;
      }
      while ( (__int64)v16 < (int)v15 );
      if ( v17 < 1 || UserServantEntity__isAdjustHpMax(baseData, 0LL) || v17 + v46 <= maxAjustAtk[1] )
      {
        v28 = 0;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_12602/*"STATUS_HP_OVER_DIALOG_MSG"*/, 0LL);
        *labelMsg = v21;
        sub_B77560((BattleServantConfConponent_o *)labelMsg, (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
        v28 = 1;
      }
      if ( v18 >= 1 && !UserServantEntity__isAdjustAtkMax(baseData, 0LL) && v18 + v47 > maxAjustAtk[0] )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v29 = LocalizationManager__Get((System_String_o *)StringLiteral_12601/*"STATUS_ATK_OVER_DIALOG_MSG"*/, 0LL);
        *labelMsg = v29;
        sub_B77560((BattleServantConfConponent_o *)labelMsg, (System_Int32_array **)v29, v30, v31, v32, v33, v34, v35);
        v36 = 1;
        goto LABEL_32;
      }
    }
    v36 = 0;
LABEL_32:
    if ( (v36 & v28) != 0 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12603/*"STATUS_OVER_DIALOG_MSG"*/, 0LL);
      *labelMsg = v37;
      sub_B77560((BattleServantConfConponent_o *)labelMsg, (System_Int32_array **)v37, v38, v39, v40, v41, v42, v43);
    }
    LOBYTE(IsStatusUp) = 1;
  }
  return IsStatusUp;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__Close(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  SetRarityDialogControl_c *v4; // x8
  void *npUpConfirmInfo; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  struct SetRarityDialogControl_StaticFields *static_fields; // x8
  TweenScale_o *v9; // x20
  System_Int32_array **v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Transform_o *transform; // x20
  int v25; // s0
  UnityEngine_Transform_o *v28; // x19
  UnityEngine_Vector3_o v29; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_438DABF & 1) == 0 )
  {
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SetRarityDialogControl_TypeInfo);
    sub_B775C4(&StringLiteral_6088/*"EndCloseDlg"*/);
    sub_B775C4(&StringLiteral_5477/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/);
    byte_438DABF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v4 = SetRarityDialogControl_TypeInfo;
  if ( (BYTE3(SetRarityDialogControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetRarityDialogControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl_TypeInfo);
    v4 = SetRarityDialogControl_TypeInfo;
  }
  npUpConfirmInfo = TweenAlpha__Begin(gameObject, v4->static_fields->CLOSE_TIME, 0.0, 0LL);
  if ( !npUpConfirmInfo )
    goto LABEL_29;
  *((_DWORD *)npUpConfirmInfo + 6) = 6;
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  static_fields = SetRarityDialogControl_TypeInfo->static_fields;
  v29.fields.x = static_fields->DIALOG_CLOSE_SCALE;
  v29.fields.y = v29.fields.x;
  v29.fields.z = v29.fields.x;
  v9 = TweenScale__Begin(v7, static_fields->CLOSE_TIME, v29, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  npUpConfirmInfo = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)npUpConfirmInfo & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_29;
    v9->fields.style = 6;
    v10 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v9->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v10;
    sub_B77560((BattleServantConfConponent_o *)&v9->fields.eventReceiver, v10, v11, v12, v13, v14, v15, v16);
    v17 = (System_Int32_array **)StringLiteral_6088/*"EndCloseDlg"*/;
    v9->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6088/*"EndCloseDlg"*/;
    sub_B77560((BattleServantConfConponent_o *)&v9->fields.callWhenFinished, v17, v18, v19, v20, v21, v22, v23);
  }
  else
  {
    npUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !npUpConfirmInfo )
      goto LABEL_29;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)npUpConfirmInfo, 0LL);
    *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_29;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v25, 0LL);
  }
  npUpConfirmInfo = this->fields.npUpConfirmInfo;
  if ( !npUpConfirmInfo )
    goto LABEL_29;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)npUpConfirmInfo, 0LL) )
  {
    npUpConfirmInfo = this->fields.npUpInfoComp;
    if ( !npUpConfirmInfo )
      goto LABEL_29;
    NpUpConfirmComponent__DestroySvtInfo((NpUpConfirmComponent_o *)npUpConfirmInfo, 0LL);
  }
  npUpConfirmInfo = this->fields.raritySvtGrid;
  if ( !npUpConfirmInfo )
    goto LABEL_29;
  UIGrid__RemoveAllChild((UIGrid_o *)npUpConfirmInfo, 0LL);
  npUpConfirmInfo = this->fields.allSvtGrid;
  if ( !npUpConfirmInfo
    || (UIGrid__RemoveAllChild((UIGrid_o *)npUpConfirmInfo, 0LL),
        (npUpConfirmInfo = this->fields.exceedConfirmSvtGrid) == 0LL)
    || (UIGrid__RemoveAllChild((UIGrid_o *)npUpConfirmInfo, 0LL), (npUpConfirmInfo = this->fields.materialSvtGrid) == 0LL)
    || (UIGrid__RemoveAllChild((UIGrid_o *)npUpConfirmInfo, 0LL),
        (npUpConfirmInfo = this->fields.lvExceedConsumeItemGrid) == 0LL) )
  {
LABEL_29:
    sub_B7769C(npUpConfirmInfo, v6);
  }
  UIGrid__RemoveAllChild((UIGrid_o *)npUpConfirmInfo, 0LL);
  v28 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__RemoveBackBtn_23835320(v28, (System_String_o *)StringLiteral_5477/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0LL);
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
    sub_B7769C(decideBtnLb, method);
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
    sub_B7769C(rariryConfirmInfo, method);
  }
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0LL);
}


void __fastcall SetRarityDialogControl__EndCloseDlg(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *onClickDlgCloseCallBack; // x19

  onClickDlgCloseCallBack = this->fields.onClickDlgCloseCallBack;
  this->fields.onClickDlgCloseCallBack = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.onClickDlgCloseCallBack, 0LL, v2, v3, v4, v5, v6, v7);
  if ( onClickDlgCloseCallBack )
    System_Action__Invoke(onClickDlgCloseCallBack, 0LL);
}


void __fastcall SetRarityDialogControl__EndOpen(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_438DAC1 & 1) == 0 )
  {
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&StringLiteral_5477/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/);
    byte_438DAC1 = 1;
  }
  this->fields.isButtonEnable = 1;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_23834620(transform, (System_String_o *)StringLiteral_5477/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__MoveAlpha(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *v5; // x20
  SetRarityDialogControl_c *v6; // x8
  UnityEngine_GameObject_o *v7; // x20
  float OPEN_TIME; // s8
  float y; // s4
  float z; // s5
  float v11; // s3
  System_Action_o *v12; // x20
  System_String_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  TweenAlpha_o *v15; // x20
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438DAC0 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SetRarityDialogControl_EndOpen__);
    sub_B775C4(&SetRarityDialogControl_TypeInfo);
    byte_438DAC0 = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v5 = (UnityEngine_Transform_o *)gameObject;
  v6 = SetRarityDialogControl_TypeInfo;
  if ( (BYTE3(SetRarityDialogControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetRarityDialogControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl_TypeInfo);
    v6 = SetRarityDialogControl_TypeInfo;
  }
  if ( !v5 )
    goto LABEL_19;
  v23.fields.x = v6->static_fields->DIALOG_INITIAL_SCALE;
  v23.fields.y = v23.fields.x;
  v23.fields.z = v23.fields.x;
  UnityEngine_Transform__set_localScale(v5, v23, 0LL);
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  OPEN_TIME = SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME;
  one = UnityEngine_Vector3__get_one(0LL);
  y = one.fields.y;
  z = one.fields.z;
  one.fields.y = one.fields.x;
  one.fields.z = y;
  v11 = z;
  TweenScale__Begin(v7, OPEN_TIME, *(UnityEngine_Vector3_o *)&one.fields.y, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             gameObject,
                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !gameObject )
    goto LABEL_19;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gameObject->klass[1]._1.castClass)(
    gameObject,
    gameObject->klass[1]._1.declaringType,
    0.005);
  v12 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SetRarityDialogControl_EndOpen__, 0LL);
  if ( !v12 )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)System_Delegate__get_Method((System_Delegate_o *)v12, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  v13 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))gameObject->klass[1]._1.castClass)(
                             gameObject,
                             gameObject->klass[1]._1.declaringType);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    v13,
    SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME,
    0LL);
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15 = TweenAlpha__Begin(v14, SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME, 1.0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( v15 )
    {
      v15->fields.style = 6;
      v16 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v15->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v16;
      sub_B77560((BattleServantConfConponent_o *)&v15->fields.eventReceiver, v16, v17, v18, v19, v20, v21, v22);
      return;
    }
LABEL_19:
    sub_B7769C(gameObject, v4);
  }
}


void __fastcall SetRarityDialogControl__OnClickCancel(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Action_o *onClickDlgCancelCallBack; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438DAC3 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438DAC3 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    SetRarityDialogControl__Close(this, v3);
    onClickDlgCancelCallBack = this->fields.onClickDlgCancelCallBack;
    this->fields.onClickDlgOkCallBack = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.onClickDlgOkCallBack, 0LL, v5, v6, v7, v8, v9, v10);
    this->fields.onClickDlgCancelCallBack = 0LL;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.onClickDlgCancelCallBack,
      0LL,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    if ( onClickDlgCancelCallBack )
      System_Action__Invoke(onClickDlgCancelCallBack, 0LL);
  }
}


void __fastcall SetRarityDialogControl__OnClickDlgOk(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  int32_t onClickDlgOkSeKind; // w20
  const MethodInfo *v4; // x1
  CombineRootComponent_o *Instance; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x9
  __int64 v14; // x9
  CommonUI_o *v15; // x20
  SetRarityDialogControl___c_c *v16; // x8
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__171_0; // x21
  Il2CppObject *v19; // x22
  struct SetRarityDialogControl___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_o *onClickDlgOkCallBack; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  SetRarityDialogControl_o *v34; // x0
  const MethodInfo *v35; // x1

  if ( (byte_438DAC2 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&CombineRootComponent_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_SetRarityDialogControl___c__OnClickDlgOk_b__171_0__);
    sub_B775C4(&SetRarityDialogControl___c_TypeInfo);
    byte_438DAC2 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    this->fields.isButtonEnable = 0;
    onClickDlgOkSeKind = this->fields.onClickDlgOkSeKind;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(onClickDlgOkSeKind, 0LL);
    SetRarityDialogControl__Close(this, v4);
    Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (CombineRootComponent_o *)Instance->fields.myFSM;
    if ( !Instance )
      goto LABEL_29;
    v13 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v13
      && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v13 - 1] == CombineRootComponent_TypeInfo )
    {
      if ( Instance->fields.combineTutorialProgress != 7 )
      {
LABEL_26:
        onClickDlgOkCallBack = this->fields.onClickDlgOkCallBack;
        this->fields.onClickDlgOkCallBack = 0LL;
        sub_B77560((BattleServantConfConponent_o *)&this->fields.onClickDlgOkCallBack, 0LL, v7, v8, v9, v10, v11, v12);
        this->fields.onClickDlgCancelCallBack = 0LL;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.onClickDlgCancelCallBack,
          0LL,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
        if ( onClickDlgOkCallBack )
        {
          System_Action__Invoke(onClickDlgOkCallBack, 0LL);
          return;
        }
LABEL_29:
        sub_B7769C(Instance, v6);
      }
      Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_29;
      Instance = (CombineRootComponent_o *)Instance->fields.myFSM;
      if ( !Instance )
        goto LABEL_29;
      v14 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v14 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__SetTutorialProgress(Instance, 8, 0LL);
        Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v15 = (CommonUI_o *)Instance;
        v16 = SetRarityDialogControl___c_TypeInfo;
        if ( (BYTE3(SetRarityDialogControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SetRarityDialogControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo);
          v16 = SetRarityDialogControl___c_TypeInfo;
        }
        static_fields = v16->static_fields;
        _9__171_0 = static_fields->__9__171_0;
        if ( !_9__171_0 )
        {
          if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v16);
            static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
          }
          v19 = (Il2CppObject *)static_fields->__9;
          _9__171_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(_9__171_0, v19, Method_SetRarityDialogControl___c__OnClickDlgOk_b__171_0__, 0LL);
          v20 = SetRarityDialogControl___c_TypeInfo->static_fields;
          v20->__9__171_0 = _9__171_0;
          sub_B77560(
            (BattleServantConfConponent_o *)&v20->__9__171_0,
            (System_Int32_array **)_9__171_0,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
        }
        if ( !v15 )
          goto LABEL_29;
        CommonUI__CloseTutorialNotificationDialogArrow_18081340(v15, _9__171_0, 0LL);
        goto LABEL_26;
      }
    }
    sub_B77990(Instance);
    SetRarityDialogControl__OnClickCancel(v34, v35);
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
  float y; // s9
  int v31; // w20
  int v32; // w8
  float v33; // s1
  float z; // s2
  float v35; // s0
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v39; // x25
  __int64 v40; // x2
  Il2CppObject *v41; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v43; // x24
  __int64 v44; // x2
  Il2CppObject *v45; // x0
  UILabel_o *allRareMsgLb; // x21
  __int64 *v47; // x8
  UILabel_o *allRareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v50; // x20
  const MethodInfo *v51; // x5
  __int64 v52; // x0
  System_String_o *text; // [xsp+8h] [xbp-78h]
  bool v54; // [xsp+14h] [xbp-6Ch]
  int32_t v55; // [xsp+18h] [xbp-68h] BYREF
  int32_t v56; // [xsp+1Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438DAB1 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__151_0__);
    sub_B775C4(&StringLiteral_9439/*"NEED_QP"*/);
    sub_B775C4(&StringLiteral_3294/*"COMBINE_HAVE_QP"*/);
    sub_B775C4(&StringLiteral_3439/*"CONFIRM_COMBINE_MSG"*/);
    sub_B775C4(&StringLiteral_3293/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_11223/*"RARE_MATERIAL_INFO_MSG"*/);
    sub_B775C4(&StringLiteral_3326/*"COMBINE_SPEND_QP"*/);
    sub_B775C4(&StringLiteral_3464/*"CONFIRM_TITLE_SVT_COMBINE"*/);
    byte_438DAB1 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  text = statusLimitMessage;
  v54 = isExceededMaterial;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0LL);
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v18);
  SetRarityDialogControl__DefaultBgSize(this, v19);
  allTitleLb = this->fields.allTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3464/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  if ( !allTitleLb )
    goto LABEL_63;
  UILabel__set_text(allTitleLb, (System_String_o *)allDispConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_63;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_63;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v23);
  if ( !selectedList )
    goto LABEL_63;
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  LODWORD(v24) = selectedList->max_length;
  v25 = *((float *)allDispConfirmInfo + 10);
  if ( (int)v24 >= 1 )
  {
    v26 = 0LL;
    v27 = 0;
    do
    {
      if ( v27 )
        goto LABEL_63;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
      allDispConfirmInfo = BaseMonoBehaviour__createObject(
                             (BaseMonoBehaviour_o *)this,
                             svtFaceInfo,
                             transform,
                             0LL,
                             0LL);
      if ( !allDispConfirmInfo )
        goto LABEL_63;
      allDispConfirmInfo = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                             (UnityEngine_GameObject_o *)allDispConfirmInfo,
                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v26 >= selectedList->max_length )
      {
        v52 = sub_B776C8(allDispConfirmInfo);
        sub_B77668(v52, 0LL);
      }
      if ( !allDispConfirmInfo )
        goto LABEL_63;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)allDispConfirmInfo,
        v26,
        baseData,
        selectedList->m_Items[v26],
        0,
        0,
        0LL,
        0LL);
      allDispConfirmInfo = this->fields.allSvtGrid;
      v24 = *(_QWORD *)&selectedList->max_length;
      ++v26;
      v27 = allDispConfirmInfo == 0LL;
    }
    while ( (__int64)v26 < (int)v24 );
    if ( !allDispConfirmInfo )
      goto LABEL_63;
  }
  y = this->fields.center.fields.y;
  v31 = *((_DWORD *)allDispConfirmInfo + 9);
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  if ( v31 >= (int)v24 )
    v32 = v24;
  else
    v32 = v31;
  v33 = 70.0;
  if ( v31 >= (int)v24 )
    v33 = y;
  v35 = (float)(this->fields.center.fields.x - (float)((float)(v25 * 0.5) * (float)(v32 - 1))) * 0.47;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v33 - 1),
    0LL);
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  v57.fields.x = 0.47;
  v57.fields.y = 0.47;
  v57.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v57, 0LL);
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  UIGrid__set_repositionNow((UIGrid_o *)allDispConfirmInfo, 1, 0LL);
  allSpendQpTxtLb = this->fields.allSpendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !allSpendQpTxtLb )
    goto LABEL_63;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !allHaveQpTxtLb )
    goto LABEL_63;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allSpendQpLb = this->fields.allSpendQpLb;
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  v56 = spendQp;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v40);
  allDispConfirmInfo = System_String__Format(v39, v41, 0LL);
  if ( !allSpendQpLb )
    goto LABEL_63;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpLb = this->fields.allHaveQpLb;
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  v55 = haveQp;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v44);
  allDispConfirmInfo = System_String__Format(v43, v45, 0LL);
  if ( !allHaveQpLb )
    goto LABEL_63;
  UILabel__set_text(allHaveQpLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allDispConfirmInfo = this->fields.allStatusUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 0, 0LL);
  allDispConfirmInfo = this->fields.allLimitUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 0, 0LL);
  allDispConfirmInfo = this->fields.allLimitRareLb;
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 0, 0LL);
  WrapControlText__textAdjust(this->fields.allStatusUpInfoLb, text, 22, 0, 0, 0LL);
  allDispConfirmInfo = this->fields.allStatusUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0LL);
  allRareMsgLb = this->fields.allRareMsgLb;
  if ( v54 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v47 = &StringLiteral_3293/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v47 = &StringLiteral_11223/*"RARE_MATERIAL_INFO_MSG"*/;
  }
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)*v47, 0LL);
  if ( !allRareMsgLb )
    goto LABEL_63;
  UILabel__set_text(allRareMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3439/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !allRareConfirmMsgLb
    || (UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_63:
    sub_B7769C(allDispConfirmInfo, v16);
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v50 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v50,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__151_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v50, 0LL, 0LL, v51);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  UIExtrusionLabel_o *appendSkillCurrentLvLabel; // x21
  UIExtrusionLabel_o *appendSkillResultLvLabel; // x21
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UILabel_o *v20; // x21
  UILabel_o *v21; // x21
  UILabel_o *v22; // x21
  System_String_o *v23; // x22
  __int64 v24; // x2
  Il2CppObject *v25; // x0
  UILabel_o *v26; // x21
  System_String_o *v27; // x22
  __int64 v28; // x2
  Il2CppObject *v29; // x0
  UILabel_o *appendSkillConfirmLabel; // x20
  __int64 *v31; // x8
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  UnityEngine_Transform_o *transform; // x0
  int v34; // s0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UILabel_o *appendSkillSpendTxtLabel; // x21
  UILabel_o *appendSkillHaveTxtLabel; // x21
  UILabel_o *appendSkillSpendLabel; // x21
  System_String_o *v42; // x22
  __int64 v43; // x2
  Il2CppObject *v44; // x0
  UILabel_o *appendSkillHaveLabel; // x21
  System_String_o *v46; // x22
  __int64 v47; // x2
  Il2CppObject *v48; // x0
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v52; // x20
  const MethodInfo *v53; // x5
  UnityEngine_Bounds_o v54; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Bounds_o v55; // [xsp+20h] [xbp-60h] BYREF
  int32_t haveSvtCoin; // [xsp+4Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438DAB5 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SetRarityDialogControl__SetAppendSkillCombineInfo_b__155_0__);
    sub_B775C4(&StringLiteral_9439/*"NEED_QP"*/);
    sub_B775C4(&StringLiteral_3294/*"COMBINE_HAVE_QP"*/);
    sub_B775C4(&StringLiteral_1785/*"APPEND_SKILL_OPEN_CONFIRM"*/);
    sub_B775C4(&StringLiteral_1788/*"APPEND_SKILL_OPEN_SPEND_COIN"*/);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_1786/*"APPEND_SKILL_OPEN_HAVE_COIN"*/);
    sub_B775C4(&StringLiteral_3326/*"COMBINE_SPEND_QP"*/);
    sub_B775C4(&StringLiteral_1776/*"APPEND_SKILL_COMBINE_CONFIRM"*/);
    byte_438DAB5 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)updata);
  appendSkillConfirmInfo = this->fields.appendSkillConfirmInfo;
  if ( !appendSkillConfirmInfo )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, 1, 0LL);
  appendSkillConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !appendSkillConfirmInfo )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v11);
  SetRarityDialogControl__DefaultBgSize(this, v12);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillTitleLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_64;
  UILabel__set_text((UILabel_o *)appendSkillConfirmInfo, titleMsg, 0LL);
  appendSkillConfirmInfo = this->fields.appendSkillIconInfo;
  if ( !appendSkillConfirmInfo )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, isOpen, 0LL);
  appendSkillConfirmInfo = this->fields.appendSkillLvUpInfo;
  if ( !appendSkillConfirmInfo )
    goto LABEL_64;
  v14 = ~isOpen;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, v14 & 1, 0LL);
  if ( (v14 & 1) == 0 )
  {
    if ( updata )
    {
      appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillIconComp;
      if ( appendSkillConfirmInfo )
      {
        SkillIconComponent__Set_26844016(
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
              ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                                    appendSkillConfirmInfo,
                                                                                    (const MethodInfo_1DEC070 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              appendSkillConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                     ComponentInChildren_Dropdown_DropdownItem,
                                                                     0LL,
                                                                     0LL);
              if ( ((unsigned __int8)appendSkillConfirmInfo & 1) != 0 )
              {
                if ( !ComponentInChildren_Dropdown_DropdownItem )
                  goto LABEL_64;
                UIScrollView__ResetPosition((UIScrollView_o *)ComponentInChildren_Dropdown_DropdownItem, 0LL);
                UIScrollView__UpdateScrollbars((UIScrollView_o *)ComponentInChildren_Dropdown_DropdownItem, 0LL);
              }
              else if ( !ComponentInChildren_Dropdown_DropdownItem )
              {
                goto LABEL_64;
              }
              appendSkillConfirmInfo = UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)ComponentInChildren_Dropdown_DropdownItem,
                                         0LL);
              if ( appendSkillConfirmInfo )
              {
                Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    appendSkillConfirmInfo,
                                                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
                {
                  appendSkillConfirmInfo = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)ComponentInChildren_Dropdown_DropdownItem,
                                             0LL);
                  if ( !appendSkillConfirmInfo )
                    goto LABEL_64;
                  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                                      appendSkillConfirmInfo,
                                                                      (const MethodInfo_1DEBEC8 *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
                }
                transform = UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)ComponentInChildren_Dropdown_DropdownItem,
                              0LL);
                NGUIMath__CalculateAbsoluteWidgetBounds(&v54, transform, 0LL);
                ((void (__fastcall *)(UnityEngine_Object_o *, const char *))ComponentInChildren_Dropdown_DropdownItem->klass[1]._1.gc_desc)(
                  ComponentInChildren_Dropdown_DropdownItem,
                  ComponentInChildren_Dropdown_DropdownItem->klass[1]._1.name);
                v55 = v54;
                *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Bounds__get_center(&v55, 0LL);
                if ( Component_srcLineSprite )
                {
                  UnityEngine_BoxCollider__set_center(
                    (UnityEngine_BoxCollider_o *)Component_srcLineSprite,
                    *(UnityEngine_Vector3_o *)&v34,
                    0LL);
                  ((void (__fastcall *)(UnityEngine_Object_o *, const char *))ComponentInChildren_Dropdown_DropdownItem->klass[1]._1.gc_desc)(
                    ComponentInChildren_Dropdown_DropdownItem,
                    ComponentInChildren_Dropdown_DropdownItem->klass[1]._1.name);
                  v55 = v54;
                  size = UnityEngine_Bounds__get_size(&v55, 0LL);
                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_srcLineSprite, size, 0LL);
                  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillSpendTxtLabel;
                  if ( appendSkillConfirmInfo )
                  {
                    v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
                    GameObjectExtensions__SetLocalPositionX(v37, 100.0, 0LL);
                    appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillHaveTxtLabel;
                    if ( appendSkillConfirmInfo )
                    {
                      v38 = UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)appendSkillConfirmInfo,
                              0LL);
                      GameObjectExtensions__SetLocalPositionX(v38, 100.0, 0LL);
                      appendSkillSpendTxtLabel = this->fields.appendSkillSpendTxtLabel;
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_1788/*"APPEND_SKILL_OPEN_SPEND_COIN"*/,
                                                                             0LL);
                      if ( appendSkillSpendTxtLabel )
                      {
                        UILabel__set_text(appendSkillSpendTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                        appendSkillHaveTxtLabel = this->fields.appendSkillHaveTxtLabel;
                        appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_1786/*"APPEND_SKILL_OPEN_HAVE_COIN"*/,
                                                                               0LL);
                        if ( appendSkillHaveTxtLabel )
                        {
                          UILabel__set_text(appendSkillHaveTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                          appendSkillSpendLabel = this->fields.appendSkillSpendLabel;
                          v42 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
                          LODWORD(v54.fields.m_Center.fields.x) = updata->fields.spendSvtCoin;
                          v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v43);
                          appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v42, v44, 0LL);
                          if ( appendSkillSpendLabel )
                          {
                            UILabel__set_text(appendSkillSpendLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                            appendSkillHaveLabel = this->fields.appendSkillHaveLabel;
                            v46 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
                            haveSvtCoin = updata->fields.haveSvtCoin;
                            v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveSvtCoin, v47);
                            appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v46, v48, 0LL);
                            if ( appendSkillHaveLabel )
                            {
                              UILabel__set_text(appendSkillHaveLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                              appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
                              v31 = &StringLiteral_1785/*"APPEND_SKILL_OPEN_CONFIRM"*/;
                              goto LABEL_54;
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
LABEL_64:
    sub_B7769C(appendSkillConfirmInfo, v9);
  }
  if ( !updata )
    goto LABEL_64;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillTargetRubyLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_64;
  UILabel__set_text((UILabel_o *)appendSkillConfirmInfo, updata->fields.targetRuby, 0LL);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillTargetNameLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_64;
  UILabel__set_text((UILabel_o *)appendSkillConfirmInfo, updata->fields.targetName, 0LL);
  appendSkillCurrentLvLabel = this->fields.appendSkillCurrentLvLabel;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)updata + 64, 0LL);
  if ( !appendSkillCurrentLvLabel )
    goto LABEL_64;
  UIExtrusionLabel__set_text(appendSkillCurrentLvLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
  appendSkillResultLvLabel = this->fields.appendSkillResultLvLabel;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)updata + 68, 0LL);
  if ( !appendSkillResultLvLabel )
    goto LABEL_64;
  UIExtrusionLabel__set_text(appendSkillResultLvLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillSpendTxtLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_64;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v18, -5.0, 0LL);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillHaveTxtLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_64;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v19, -5.0, 0LL);
  v20 = this->fields.appendSkillSpendTxtLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3326/*"COMBINE_SPEND_QP"*/,
                                                         0LL);
  if ( !v20 )
    goto LABEL_64;
  UILabel__set_text(v20, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v21 = this->fields.appendSkillHaveTxtLabel;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3294/*"COMBINE_HAVE_QP"*/,
                                                         0LL);
  if ( !v21 )
    goto LABEL_64;
  UILabel__set_text(v21, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v22 = this->fields.appendSkillSpendLabel;
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  LODWORD(v54.fields.m_Center.fields.x) = updata->fields.spendQp;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v24);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v23, v25, 0LL);
  if ( !v22 )
    goto LABEL_64;
  UILabel__set_text(v22, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v26 = this->fields.appendSkillHaveLabel;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  haveSvtCoin = updata->fields.haveQp;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveSvtCoin, v28);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v27, v29, 0LL);
  if ( !v26 )
    goto LABEL_64;
  UILabel__set_text(v26, (System_String_o *)appendSkillConfirmInfo, 0LL);
  appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
  v31 = &StringLiteral_1776/*"APPEND_SKILL_COMBINE_CONFIRM"*/;
LABEL_54:
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v31, 0LL);
  if ( !appendSkillConfirmLabel )
    goto LABEL_64;
  UILabel__set_text(appendSkillConfirmLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/,
                                                         0LL);
  if ( !cancelBtnLb )
    goto LABEL_64;
  UILabel__set_text(cancelBtnLb, (System_String_o *)appendSkillConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/,
                                                         0LL);
  if ( !decideBtnLb )
    goto LABEL_64;
  UILabel__set_text(decideBtnLb, (System_String_o *)appendSkillConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_64;
  if ( combineRootComponent->fields.state == 14 )
  {
    v52 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v52,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetAppendSkillCombineInfo_b__155_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v52, 0LL, 0LL, v53);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetCenter(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mPanel; // x0
  unsigned int klass; // w8
  float32x2_t *v5; // x20
  float *p_m_CachedPtr; // x21
  unsigned __int64 v7; // x22
  float v8; // s8
  float v9; // s9
  float v10; // s10
  int v11; // s0
  int v12; // s1
  int v13; // s2
  float32x2_t v14; // d8
  float v15; // s9
  float32x2_t v16; // d10
  float v17; // s11
  float v18; // s0
  __int64 v19; // x0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  mPanel = (UnityEngine_Component_o *)this->fields.mPanel;
  if ( !mPanel
    || (mPanel = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))mPanel->klass[1]._1.klass)(
                                              mPanel,
                                              mPanel->klass[1]._1.fields)) == 0LL )
  {
LABEL_11:
    sub_B7769C(mPanel, method);
  }
  klass = (unsigned int)mPanel[1].klass;
  v5 = (float32x2_t *)mPanel;
  p_m_CachedPtr = (float *)&mPanel[1].fields.m_CachedPtr;
  v7 = -1LL;
  do
  {
    if ( v7 + 1 >= klass )
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
    v20.fields.x = v8;
    v20.fields.y = v9;
    v20.fields.z = v10;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__InverseTransformPoint(
                                       (UnityEngine_Transform_o *)mPanel,
                                       v20,
                                       0LL);
    if ( v7 + 1 >= v5[3].n64_u32[0] )
      goto LABEL_12;
    *((_DWORD *)p_m_CachedPtr - 2) = v11;
    *((_DWORD *)p_m_CachedPtr - 1) = v12;
    *(_DWORD *)p_m_CachedPtr = v13;
    p_m_CachedPtr += 3;
    klass = v5[3].n64_u32[0];
    ++v7;
  }
  while ( v7 <= 2 );
  if ( klass < 3 )
  {
LABEL_12:
    v19 = sub_B776C8(mPanel);
    sub_B77668(v19, 0LL);
  }
  v14.n64_u64[0] = v5[4].n64_u64[0];
  v15 = v5[5].n64_f32[0];
  v16.n64_u64[0] = v5[7].n64_u64[0];
  v17 = v5[8].n64_f32[0];
  v18 = UnityEngine_Mathf__Clamp01(0.5, 0LL);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(v14, vmul_n_f32(vsub_f32(v16, v14), v18));
  this->fields.center.fields.z = v15 + (float)((float)(v17 - v15) * v18);
}


void __fastcall SetRarityDialogControl__SetClickDlgOkSeAndCallBack(
        SetRarityDialogControl_o *this,
        int32_t seKind,
        System_Action_o *callBack,
        System_Action_o *cancelCallBack,
        System_Action_o *closeCallBack,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  this->fields.onClickDlgOkSeKind = seKind;
  this->fields.onClickDlgOkCallBack = callBack;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.onClickDlgOkCallBack,
    (System_Int32_array **)callBack,
    (System_String_array **)callBack,
    (System_String_array **)cancelCallBack,
    (System_Boolean_array **)closeCallBack,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.onClickDlgCancelCallBack = cancelCallBack;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.onClickDlgCancelCallBack,
    (System_Int32_array **)cancelCallBack,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.onClickDlgCloseCallBack = closeCallBack;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.onClickDlgCloseCallBack,
    (System_Int32_array **)closeCallBack,
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
  float y; // s9
  int v29; // w24
  int v30; // w9
  float z; // s2
  float v32; // s1
  float v33; // s0
  UILabel_o *normalSpendQpTxtLb; // x24
  UILabel_o *normalHaveQpTxtLb; // x24
  UILabel_o *confirmSpendQpLb; // x24
  System_String_o *v37; // x25
  __int64 v38; // x2
  Il2CppObject *v39; // x0
  UILabel_o *confirmHaveQpLb; // x23
  System_String_o *v41; // x24
  __int64 v42; // x2
  Il2CppObject *v43; // x0
  UILabel_o *confirmMsgLb; // x22
  const MethodInfo *v45; // x4
  const MethodInfo *v46; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v48; // x20
  const MethodInfo *v49; // x5
  __int64 v50; // x0
  int32_t v51; // [xsp+0h] [xbp-70h] BYREF
  int32_t v52; // [xsp+4h] [xbp-6Ch] BYREF
  System_String_o *labelMsg; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438DAAF & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SetRarityDialogControl__SetConfirmCombine_b__149_0__);
    sub_B775C4(&StringLiteral_9439/*"NEED_QP"*/);
    sub_B775C4(&StringLiteral_3294/*"COMBINE_HAVE_QP"*/);
    sub_B775C4(&StringLiteral_3439/*"CONFIRM_COMBINE_MSG"*/);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_3326/*"COMBINE_SPEND_QP"*/);
    byte_438DAAF = 1;
  }
  labelMsg = 0LL;
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  normalConfirmInfo = this->fields.normalConfirmInfo;
  if ( !normalConfirmInfo )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 1, 0LL);
  this->fields.isStatusUp = isStatusUp;
  normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v17);
  SetRarityDialogControl__DefaultBgSize(this, v18);
  normalConfirmInfo = this->fields.normalTitleLb;
  if ( !normalConfirmInfo )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)normalConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_49;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_49;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v21);
  if ( !selectedList )
    goto LABEL_49;
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_49;
  LODWORD(v22) = selectedList->max_length;
  v23 = *((float *)normalConfirmInfo + 10);
  if ( (int)v22 >= 1 )
  {
    v24 = 0LL;
    v25 = 0;
    do
    {
      if ( v25 )
        goto LABEL_49;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
      normalConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !normalConfirmInfo )
        goto LABEL_49;
      normalConfirmInfo = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            (UnityEngine_GameObject_o *)normalConfirmInfo,
                            (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v24 >= selectedList->max_length )
      {
        v50 = sub_B776C8(normalConfirmInfo);
        sub_B77668(v50, 0LL);
      }
      if ( !normalConfirmInfo )
        goto LABEL_49;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)normalConfirmInfo,
        v24,
        baseData,
        selectedList->m_Items[v24],
        0,
        0,
        0LL,
        0LL);
      normalConfirmInfo = this->fields.materialSvtGrid;
      v22 = *(_QWORD *)&selectedList->max_length;
      ++v24;
      v25 = normalConfirmInfo == 0LL;
    }
    while ( (__int64)v24 < (int)v22 );
    if ( !normalConfirmInfo )
      goto LABEL_49;
  }
  y = this->fields.center.fields.y;
  v29 = *((_DWORD *)normalConfirmInfo + 9);
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_49;
  v30 = v29 >= (int)v22 ? v22 : v29;
  v32 = v29 >= (int)v22 ? y : 55.0;
  v33 = (float)(this->fields.center.fields.x - (float)((float)(v23 * 0.5) * (float)(v30 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v32 - 1),
    0LL);
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_49;
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_49;
  v54.fields.x = 0.5;
  v54.fields.y = 0.5;
  v54.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v54, 0LL);
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_49;
  UIGrid__set_repositionNow((UIGrid_o *)normalConfirmInfo, 1, 0LL);
  normalSpendQpTxtLb = this->fields.normalSpendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !normalSpendQpTxtLb )
    goto LABEL_49;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !normalHaveQpTxtLb )
    goto LABEL_49;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  v52 = spendQp;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v38);
  normalConfirmInfo = System_String__Format(v37, v39, 0LL);
  if ( !confirmSpendQpLb )
    goto LABEL_49;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  v51 = haveQp;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v42);
  normalConfirmInfo = System_String__Format(v41, v43, 0LL);
  if ( !confirmHaveQpLb )
    goto LABEL_49;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3439/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !confirmMsgLb )
    goto LABEL_49;
  UILabel__set_text(confirmMsgLb, (System_String_o *)normalConfirmInfo, 0LL);
  normalConfirmInfo = this->fields.statusUpInfoLb;
  if ( !normalConfirmInfo )
    goto LABEL_49;
  normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 0, 0LL);
  if ( !SetRarityDialogControl__CheckStatusUpInfo(this, baseData, selectedList, &labelMsg, v45) )
    goto LABEL_45;
  WrapControlText__textAdjust(this->fields.statusUpInfoLb, labelMsg, 22, 0, 0, 0LL);
  normalConfirmInfo = this->fields.statusUpInfoLb;
  if ( !normalConfirmInfo
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0LL)) == 0LL )
  {
LABEL_49:
    sub_B7769C(normalConfirmInfo, v15);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 1, 0LL);
LABEL_45:
  SetRarityDialogControl__CheckExceedSvt(this, selectedList, v46);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_49;
  if ( combineRootComponent->fields.state == 3 )
  {
    v48 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v48, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmCombine_b__149_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v48, 0LL, 0LL, v49);
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
  Il2CppObject *v24; // x0
  UILabel_o *haveQpCostumeTextLb; // x23
  UILabel_o *haveQpCostumeLb; // x23
  System_String_o *v27; // x24
  __int64 v28; // x2
  Il2CppObject *v29; // x0
  UILabel_o *costumeInfoLb; // x22
  const MethodInfo *v31; // x5
  struct CombineRootComponent_o *combineRootComponent; // x8
  int32_t v33; // [xsp+8h] [xbp-48h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_438DABC & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_9439/*"NEED_QP"*/);
    sub_B775C4(&StringLiteral_3456/*"CONFIRM_TITLE_COSTUME_COMBINE"*/);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_3526/*"COSTUME_NEED_QP_TEXT"*/);
    sub_B775C4(&StringLiteral_3523/*"COSTUME_CONFIRM_MSG"*/);
    sub_B775C4(&StringLiteral_3525/*"COSTUME_HAVE_QP_TEXT"*/);
    byte_438DABC = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)cosName);
  costumeConfirmInfo = this->fields.costumeConfirmInfo;
  if ( !costumeConfirmInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(costumeConfirmInfo, 1, 0LL);
  costumeConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !costumeConfirmInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(costumeConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v15);
  SetRarityDialogControl__DefaultBgSize(this, v16);
  costumeTitleLb = this->fields.costumeTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3456/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !costumeTitleLb )
    goto LABEL_21;
  UILabel__set_text(costumeTitleLb, (System_String_o *)costumeConfirmInfo, 0LL);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)this->fields.costumeNameLb;
  if ( !costumeConfirmInfo )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)costumeConfirmInfo, cosName, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_21;
  UILabel__set_text(cancelBtnLb, (System_String_o *)costumeConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_21;
  UILabel__set_text(decideBtnLb, (System_String_o *)costumeConfirmInfo, 0LL);
  needQpCostumeTextLb = this->fields.needQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3526/*"COSTUME_NEED_QP_TEXT"*/, 0LL);
  if ( !needQpCostumeTextLb )
    goto LABEL_21;
  UILabel__set_text(needQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0LL);
  needQpCostumeLb = this->fields.needQpCostumeLb;
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  v34 = needQp;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v23);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v22, v24, 0LL);
  if ( !needQpCostumeLb )
    goto LABEL_21;
  UILabel__set_text(needQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0LL);
  haveQpCostumeTextLb = this->fields.haveQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3525/*"COSTUME_HAVE_QP_TEXT"*/, 0LL);
  if ( !haveQpCostumeTextLb )
    goto LABEL_21;
  UILabel__set_text(haveQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0LL);
  haveQpCostumeLb = this->fields.haveQpCostumeLb;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  v33 = haveQp;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v28);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v27, v29, 0LL);
  if ( !haveQpCostumeLb
    || (UILabel__set_text(haveQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0LL),
        costumeInfoLb = this->fields.costumeInfoLb,
        costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3523/*"COSTUME_CONFIRM_MSG"*/,
                                                           0LL),
        !costumeInfoLb)
    || (UILabel__set_text(costumeInfoLb, (System_String_o *)costumeConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_21:
    sub_B7769C(costumeConfirmInfo, v13);
  }
  if ( combineRootComponent->fields.state == 8 )
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, callBack, cancelCallBack, 0LL, v31);
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

  if ( (byte_438DABB & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___);
    byte_438DABB = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)eventCombineCostumeEnt);
  costumeEventItemConfirmInfo = this->fields.costumeEventItemConfirmInfo;
  if ( !costumeEventItemConfirmInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(costumeEventItemConfirmInfo, 1, 0LL);
  costumeEventItemConfirmInfo = this->fields.costumeEventItemConfirmInfo;
  if ( !costumeEventItemConfirmInfo
    || (costumeEventItemConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    costumeEventItemConfirmInfo,
                                                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___)) == 0LL
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
    sub_B7769C(costumeEventItemConfirmInfo, v9);
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

  if ( (byte_438DABA & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SetRarityDialogControl_DefaultBgSize__);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    byte_438DABA = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)combineCostumeEnt);
  costumeEventItemOrNeedItemConfirmInfo = this->fields.costumeEventItemOrNeedItemConfirmInfo;
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(costumeEventItemOrNeedItemConfirmInfo, 1, 0LL);
  costumeEventItemOrNeedItemConfirmInfo = this->fields.costumeEventItemOrNeedItemConfirmInfo;
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_22;
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        costumeEventItemOrNeedItemConfirmInfo,
                                                                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___);
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_22;
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
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(costumeEventItemOrNeedItemConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v17);
  SetRarityDialogControl__DefaultBgSize(this, v18);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/,
                                                                        0LL);
  if ( !cancelBtnLb )
    goto LABEL_22;
  UILabel__set_text(cancelBtnLb, (System_String_o *)costumeEventItemOrNeedItemConfirmInfo, 0LL);
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)this->fields.cancelBtnLb;
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_22;
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                        (UnityEngine_Component_o *)costumeEventItemOrNeedItemConfirmInfo,
                                                                        0LL);
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_22;
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                                        (UnityEngine_Transform_o *)costumeEventItemOrNeedItemConfirmInfo,
                                                                        0LL);
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_22;
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
LABEL_22:
    sub_B7769C(costumeEventItemOrNeedItemConfirmInfo, v15);
  }
  if ( combineRootComponent->fields.state == 8 )
  {
    v22 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
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
  const MethodInfo *v17; // x4
  System_Int64_array *v18; // x2
  const MethodInfo *v19; // x7
  WebViewManager_o *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x9
  __int64 v23; // x9
  SetRarityDialogControl_o *v24; // x0
  System_Int64_array *v25; // x1
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // [xsp+0h] [xbp-50h]
  System_String_o *labelMsg; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_438DAAC & 1) == 0 )
  {
    sub_B775C4(&CombineRootComponent_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_438DAAC = 1;
  }
  labelMsg = 0LL;
  SetRarityDialogControl__CheckExceedSvt(this, selectedList, (const MethodInfo *)list);
  this->fields.isStatusUp = isStatusUp;
  if ( SetRarityDialogControl__CheckStatusUpInfo(this, baseData, selectedList, &labelMsg, v17) && isStatusUp )
    SetRarityDialogControl__SetAllDispConfirmCombine(
      this,
      baseData,
      v18,
      spendQp,
      haveQp,
      selectedList,
      labelMsg,
      isExceededMaterial,
      v27);
  else
    SetRarityDialogControl__SetConfirmRarityInfo(
      this,
      baseData,
      selectedList,
      msg,
      spendQp,
      haveQp,
      isExceededMaterial,
      v19);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (WebViewManager_o *)Instance->fields.basePanel;
  if ( !Instance )
    goto LABEL_18;
  v22 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v22
    || (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v22 - 1] != CombineRootComponent_TypeInfo )
  {
    goto LABEL_19;
  }
  if ( HIDWORD(Instance[5].fields.webView) != 7 )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (WebViewManager_o *)Instance->fields.basePanel) == 0LL )
LABEL_18:
    sub_B7769C(Instance, v21);
  v23 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v23
    || (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v23 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_19:
    sub_B77990(Instance);
    SetRarityDialogControl__CheckExceedSvt(v24, v25, v26);
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
  Il2CppObject *v24; // x0
  UILabel_o *lvExceedHaveQpLb; // x22
  System_String_o *v26; // x23
  __int64 v27; // x2
  Il2CppObject *v28; // x0
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v30; // x0
  System_Action_o *v31; // x21
  const MethodInfo *v32; // x5
  int32_t v33; // w1
  SetRarityDialogControl_o *v34; // x0
  int32_t v35; // [xsp+8h] [xbp-48h] BYREF
  int32_t v36; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_438DAB7 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__157_0__);
    sub_B775C4(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__157_1__);
    sub_B775C4(&StringLiteral_9439/*"NEED_QP"*/);
    sub_B775C4(&StringLiteral_3444/*"CONFIRM_EXCEED_COMBINE"*/);
    sub_B775C4(&StringLiteral_3294/*"COMBINE_HAVE_QP"*/);
    sub_B775C4(&StringLiteral_8616/*"LVEXCEED_COMBINE_SPEND_QP"*/);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    byte_438DAB7 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  lvExceedConfirmSimpleInfo = this->fields.lvExceedConfirmSimpleInfo;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 1, 0LL);
  lvExceedConfirmSimpleInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v14);
  SetRarityDialogControl__DefaultBgSize(this, v15);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)this->fields.lvExceedTitleLb;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_37;
  UILabel__set_text((UILabel_o *)lvExceedConfirmSimpleInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/,
                                                            0LL);
  if ( !cancelBtnLb )
    goto LABEL_37;
  UILabel__set_text(cancelBtnLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/,
                                                            0LL);
  if ( !decideBtnLb )
    goto LABEL_37;
  UILabel__set_text(decideBtnLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
  if ( !isCheck )
  {
    lvExceedSpendQpTxtLb = this->fields.lvExceedSpendQpTxtLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_8616/*"LVEXCEED_COMBINE_SPEND_QP"*/,
                                                              0LL);
    if ( lvExceedSpendQpTxtLb )
    {
      UILabel__set_text(lvExceedSpendQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
      lvExceedHaveQpTxtLb = this->fields.lvExceedHaveQpTxtLb;
      lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_3294/*"COMBINE_HAVE_QP"*/,
                                                                0LL);
      if ( lvExceedHaveQpTxtLb )
      {
        UILabel__set_text(lvExceedHaveQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
        lvExceedSpendQpLb = this->fields.lvExceedSpendQpLb;
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
        v36 = spendQp;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v23);
        lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)System_String__Format(v22, v24, 0LL);
        if ( lvExceedSpendQpLb )
        {
          UILabel__set_text(lvExceedSpendQpLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
          lvExceedHaveQpLb = this->fields.lvExceedHaveQpLb;
          v26 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
          v35 = haveQp;
          v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v27);
          lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)System_String__Format(v26, v28, 0LL);
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
                  goto LABEL_30;
              }
            }
          }
        }
      }
    }
LABEL_37:
    sub_B7769C(lvExceedConfirmSimpleInfo, v12);
  }
  lvExceedInfoLb = this->fields.lvExceedInfoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3444/*"CONFIRM_EXCEED_COMBINE"*/,
                                                            0LL);
  if ( !lvExceedInfoLb )
    goto LABEL_37;
  UILabel__set_text(lvExceedInfoLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)this->fields.lvExceedInfoLb;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_37;
  lvExceedConfirmSimpleInfo = UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)lvExceedConfirmSimpleInfo,
                                0LL);
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 1, 0LL);
  lvExceedConfirmSimpleInfo = this->fields.lvExceedQpInfo;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_37;
LABEL_30:
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_37;
  if ( combineRootComponent->fields.state == 6 )
  {
    v30 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    v31 = v30;
    if ( isCheck )
    {
      System_Action___ctor(v30, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmLvExceed_b__157_0__, 0LL);
      v33 = 8;
      v34 = this;
    }
    else
    {
      System_Action___ctor(v30, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmLvExceed_b__157_1__, 0LL);
      v34 = this;
      v33 = 0;
    }
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v34, v33, v31, 0LL, 0LL, v32);
  }
}


void __fastcall SetRarityDialogControl__SetConfirmLvExceed_29921676(
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
  Il2CppObject *v24; // x0
  UILabel_o *lvExceedHaveQpLabel; // x23
  System_String_o *v26; // x24
  __int64 v27; // x2
  Il2CppObject *v28; // x0
  UILabel_o *lvExceedConfirmLabel; // x22
  int32_t size; // w8
  unsigned __int64 v31; // x23
  signed __int64 v32; // x24
  UnityEngine_GameObject_o *v33; // x22
  UnityEngine_Transform_o *transform; // x0
  System_Action_o *v35; // x20
  const MethodInfo *v36; // x5
  __int64 v37; // x0
  int32_t v38; // [xsp+8h] [xbp-58h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_438DAB8 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__158_0__);
    sub_B775C4(&StringLiteral_9439/*"NEED_QP"*/);
    sub_B775C4(&StringLiteral_3457/*"CONFIRM_TITLE_EXCEED_COMBINE"*/);
    sub_B775C4(&StringLiteral_3294/*"COMBINE_HAVE_QP"*/);
    sub_B775C4(&StringLiteral_8615/*"LVEXCEED_COMBINE_SPEND_ITEM"*/);
    sub_B775C4(&StringLiteral_8616/*"LVEXCEED_COMBINE_SPEND_QP"*/);
    sub_B775C4(&StringLiteral_8617/*"LVEXCEED_EXE_CONFIRM"*/);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    this = (SetRarityDialogControl_o *)sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    byte_438DAB8 = 1;
  }
  combineRootComponent = v10->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_35;
  if ( combineRootComponent->fields.state == 6 )
  {
    SetRarityDialogControl__DisableConfirmInfo(v10, (const MethodInfo *)itemObjList);
    this = (SetRarityDialogControl_o *)v10->fields.lvExceedConfirmInfo;
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (SetRarityDialogControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
    if ( !this )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    SetRarityDialogControl__MoveAlpha(v10, v12);
    SetRarityDialogControl__DefaultBgSize(v10, v13);
    this = (SetRarityDialogControl_o *)v10->fields.mPanelBg;
    if ( !this )
      goto LABEL_35;
    UIWidget__set_height((UIWidget_o *)this, 501, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
    GameObjectExtensions__SetLocalPositionY(gameObject, -8.0, 0LL);
    GameObjectExtensions__SetLocalPositionY(v10->fields.confirmBtnInfo, -8.0, 0LL);
    cancelBtnLb = v10->fields.cancelBtnLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelBtnLb )
      goto LABEL_35;
    UILabel__set_text(cancelBtnLb, (System_String_o *)this, 0LL);
    decideBtnLb = v10->fields.decideBtnLb;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideBtnLb )
      goto LABEL_35;
    UILabel__set_text(decideBtnLb, (System_String_o *)this, 0LL);
    lvExceedTitleLabel = v10->fields.lvExceedTitleLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3457/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
    if ( !lvExceedTitleLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedTitleLabel, (System_String_o *)this, 0LL);
    lvExceedSpendItemLabel = v10->fields.lvExceedSpendItemLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8615/*"LVEXCEED_COMBINE_SPEND_ITEM"*/, 0LL);
    if ( !lvExceedSpendItemLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedSpendItemLabel, (System_String_o *)this, 0LL);
    lvExceedSpendQpTxtLabel = v10->fields.lvExceedSpendQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8616/*"LVEXCEED_COMBINE_SPEND_QP"*/, 0LL);
    if ( !lvExceedSpendQpTxtLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedSpendQpTxtLabel, (System_String_o *)this, 0LL);
    lvExceedHaveQpTxtLabel = v10->fields.lvExceedHaveQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMBINE_HAVE_QP"*/, 0LL);
    if ( !lvExceedHaveQpTxtLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedHaveQpTxtLabel, (System_String_o *)this, 0LL);
    lvExceedSpendQpLabel = v10->fields.lvExceedSpendQpLabel;
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
    v39 = spendQp;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v23);
    this = (SetRarityDialogControl_o *)System_String__Format(v22, v24, 0LL);
    if ( !lvExceedSpendQpLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedSpendQpLabel, (System_String_o *)this, 0LL);
    lvExceedHaveQpLabel = v10->fields.lvExceedHaveQpLabel;
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
    v38 = haveQp;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v27);
    this = (SetRarityDialogControl_o *)System_String__Format(v26, v28, 0LL);
    if ( !lvExceedHaveQpLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedHaveQpLabel, (System_String_o *)this, 0LL);
    lvExceedConfirmLabel = v10->fields.lvExceedConfirmLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8617/*"LVEXCEED_EXE_CONFIRM"*/, 0LL);
    if ( !lvExceedConfirmLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedConfirmLabel, (System_String_o *)this, 0LL);
    if ( !itemObjList )
      goto LABEL_35;
    size = itemObjList->fields._size;
    if ( size >= 1 )
    {
      v31 = 0LL;
      v32 = size;
      while ( 1 )
      {
        if ( v31 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        this = (SetRarityDialogControl_o *)v10->fields.lvExceedConsumeItemGrid;
        if ( !this )
          break;
        v33 = itemObjList->fields._items->m_Items[v31];
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        this = (SetRarityDialogControl_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v10,
                                             v33,
                                             transform,
                                             0LL,
                                             0LL);
        if ( !this )
          break;
        this = (SetRarityDialogControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
        if ( !itemList )
          break;
        if ( v31 >= itemList->max_length )
        {
          v37 = sub_B776C8(this);
          sub_B77668(v37, 0LL);
        }
        if ( !this )
          break;
        LimitCntUpItemComponent__SetItemEntity((LimitCntUpItemComponent_o *)this, itemList->m_Items[++v31], 0LL);
        if ( (__int64)v31 >= v32 )
          goto LABEL_32;
        size = itemObjList->fields._size;
      }
LABEL_35:
      sub_B7769C(this, itemObjList);
    }
LABEL_32:
    this = (SetRarityDialogControl_o *)v10->fields.lvExceedConsumeItemGrid;
    if ( !this )
      goto LABEL_35;
    ((void (__fastcall *)(SetRarityDialogControl_o *, Il2CppClass *))this->klass[1]._1.castClass)(
      this,
      this->klass[1]._1.declaringType);
    v35 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v35, (Il2CppObject *)v10, Method_SetRarityDialogControl__SetConfirmLvExceed_b__158_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v10, 8, v35, 0LL, 0LL, v36);
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
  float y; // s9
  int v29; // w20
  int v30; // w9
  float z; // s2
  float v32; // s1
  float v33; // s0
  UILabel_o *spendQpTxtLb; // x23
  UILabel_o *haveQpTxtLb; // x23
  UILabel_o *spendQpLb; // x23
  System_String_o *v37; // x24
  __int64 v38; // x2
  Il2CppObject *v39; // x0
  UILabel_o *haveQpLb; // x22
  System_String_o *v41; // x23
  __int64 v42; // x2
  Il2CppObject *v43; // x0
  UILabel_o *rareMaterialMsgLb; // x21
  __int64 *v45; // x8
  UILabel_o *rareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v48; // x20
  const MethodInfo *v49; // x5
  __int64 v50; // x0
  int32_t v51; // [xsp+8h] [xbp-68h] BYREF
  int32_t v52; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438DAAD & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SetRarityDialogControl__SetConfirmRarityInfo_b__147_0__);
    sub_B775C4(&StringLiteral_9439/*"NEED_QP"*/);
    sub_B775C4(&StringLiteral_3294/*"COMBINE_HAVE_QP"*/);
    sub_B775C4(&StringLiteral_3439/*"CONFIRM_COMBINE_MSG"*/);
    sub_B775C4(&StringLiteral_3293/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_11223/*"RARE_MATERIAL_INFO_MSG"*/);
    sub_B775C4(&StringLiteral_3326/*"COMBINE_SPEND_QP"*/);
    byte_438DAAD = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  rariryConfirmInfo = this->fields.rariryConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rariryConfirmInfo, 1, 0LL);
  rariryConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !rariryConfirmInfo )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rariryConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v17);
  SetRarityDialogControl__DefaultBgSize(this, v18);
  rariryConfirmInfo = this->fields.rarityTitleLb;
  if ( !rariryConfirmInfo )
    goto LABEL_56;
  UILabel__set_text((UILabel_o *)rariryConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_56;
  UILabel__set_text(cancelBtnLb, (System_String_o *)rariryConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_56;
  UILabel__set_text(decideBtnLb, (System_String_o *)rariryConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v21);
  if ( !list )
    goto LABEL_56;
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_56;
  LODWORD(v22) = list->max_length;
  v23 = *((float *)rariryConfirmInfo + 10);
  if ( (int)v22 >= 1 )
  {
    v24 = 0LL;
    v25 = 0;
    do
    {
      if ( v25 )
        goto LABEL_56;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
      rariryConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !rariryConfirmInfo )
        goto LABEL_56;
      rariryConfirmInfo = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            (UnityEngine_GameObject_o *)rariryConfirmInfo,
                            (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v24 >= list->max_length )
      {
        v50 = sub_B776C8(rariryConfirmInfo);
        sub_B77668(v50, 0LL);
      }
      if ( !rariryConfirmInfo )
        goto LABEL_56;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)rariryConfirmInfo,
        v24,
        baseData,
        list->m_Items[v24],
        0,
        0,
        0LL,
        0LL);
      rariryConfirmInfo = this->fields.raritySvtGrid;
      v22 = *(_QWORD *)&list->max_length;
      ++v24;
      v25 = rariryConfirmInfo == 0LL;
    }
    while ( (__int64)v24 < (int)v22 );
    if ( !rariryConfirmInfo )
      goto LABEL_56;
  }
  y = this->fields.center.fields.y;
  v29 = *((_DWORD *)rariryConfirmInfo + 9);
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
  if ( !rariryConfirmInfo )
    goto LABEL_56;
  v30 = v29 >= (int)v22 ? v22 : v29;
  v32 = v29 >= (int)v22 ? y : 55.0;
  v33 = (float)(this->fields.center.fields.x - (float)((float)(v23 * 0.5) * (float)(v30 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)rariryConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v32 - 1),
    0LL);
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_56;
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
  if ( !rariryConfirmInfo )
    goto LABEL_56;
  v53.fields.x = 0.5;
  v53.fields.y = 0.5;
  v53.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rariryConfirmInfo, v53, 0LL);
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_56;
  UIGrid__set_repositionNow((UIGrid_o *)rariryConfirmInfo, 1, 0LL);
  spendQpTxtLb = this->fields.spendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !spendQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(spendQpTxtLb, (System_String_o *)rariryConfirmInfo, 0LL);
  haveQpTxtLb = this->fields.haveQpTxtLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !haveQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(haveQpTxtLb, (System_String_o *)rariryConfirmInfo, 0LL);
  spendQpLb = this->fields.spendQpLb;
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  v52 = spendQp;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v38);
  rariryConfirmInfo = System_String__Format(v37, v39, 0LL);
  if ( !spendQpLb )
    goto LABEL_56;
  UILabel__set_text(spendQpLb, (System_String_o *)rariryConfirmInfo, 0LL);
  haveQpLb = this->fields.haveQpLb;
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  v51 = haveQp;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v42);
  rariryConfirmInfo = System_String__Format(v41, v43, 0LL);
  if ( !haveQpLb )
    goto LABEL_56;
  UILabel__set_text(haveQpLb, (System_String_o *)rariryConfirmInfo, 0LL);
  rareMaterialMsgLb = this->fields.rareMaterialMsgLb;
  if ( isExceededMaterial )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = &StringLiteral_3293/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v45 = &StringLiteral_11223/*"RARE_MATERIAL_INFO_MSG"*/;
  }
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)*v45, 0LL);
  if ( !rareMaterialMsgLb )
    goto LABEL_56;
  UILabel__set_text(rareMaterialMsgLb, (System_String_o *)rariryConfirmInfo, 0LL);
  rareConfirmMsgLb = this->fields.rareConfirmMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3439/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !rareConfirmMsgLb
    || (UILabel__set_text(rareConfirmMsgLb, (System_String_o *)rariryConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_56:
    sub_B7769C(rariryConfirmInfo, v15);
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v48 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v48, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmRarityInfo_b__147_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v48, 0LL, 0LL, v49);
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
  float v22; // s9
  int32_t v23; // w24
  UnityEngine_Component_o *v24; // x0
  Il2CppObject *key; // x25
  char value; // w27
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v30; // x1
  MaterialSvtInfo_o *Component_srcLineSprite; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  float y; // s10
  int32_t Count; // w23
  struct UIGrid_o *v36; // x8
  float cellWidth; // w20
  int v38; // w22
  int32_t v39; // w9
  float v40; // s1
  float z; // s2
  float v42; // s0
  UILabel_o *normalSpendQpTxtLb; // x22
  UILabel_o *normalHaveQpTxtLb; // x22
  UILabel_o *confirmSpendQpLb; // x22
  System_String_o *v46; // x23
  __int64 v47; // x2
  Il2CppObject *v48; // x0
  UILabel_o *confirmHaveQpLb; // x21
  System_String_o *v50; // x22
  __int64 v51; // x2
  Il2CppObject *v52; // x0
  UILabel_o *confirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v55; // x20
  const MethodInfo *v56; // x5
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v58; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v59; // [xsp+40h] [xbp-A0h] BYREF
  int32_t v60; // [xsp+78h] [xbp-68h]
  int32_t v61; // [xsp+7Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438DAB0 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__150_0__);
    sub_B775C4(&StringLiteral_9439/*"NEED_QP"*/);
    sub_B775C4(&StringLiteral_3294/*"COMBINE_HAVE_QP"*/);
    sub_B775C4(&StringLiteral_3439/*"CONFIRM_COMBINE_MSG"*/);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_3326/*"COMBINE_SPEND_QP"*/);
    byte_438DAB0 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  normalConfirmInfo = this->fields.normalConfirmInfo;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive(normalConfirmInfo, 1, 0LL);
  this->fields.isStatusUp = isStatusUp;
  normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive(normalConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v16);
  SetRarityDialogControl__DefaultBgSize(this, v17);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.normalTitleLb;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UILabel__set_text((UILabel_o *)normalConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_46;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_46;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v20);
  if ( !selectedList )
    goto LABEL_46;
  v60 = haveQp;
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_2FA7114 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  materialSvtGrid = this->fields.materialSvtGrid;
  if ( !materialSvtGrid )
    goto LABEL_46;
  v22 = materialSvtGrid->fields.cellHeight * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v58,
    selectedList,
    (const MethodInfo_2FA7ABC *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v59 = v58;
  v23 = 0;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v59,
            (const MethodInfo_27DBE38 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v24 = (UnityEngine_Component_o *)this->fields.materialSvtGrid;
    if ( !v24 )
      sub_B7769C(0LL, v33);
    key = v59.fields.current.fields.key;
    value = (char)v59.fields.current.fields.value;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v24, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Object )
      sub_B7769C(0LL, v30);
    Component_srcLineSprite = (MaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     Object,
                                                     (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_srcLineSprite )
      sub_B7769C(0LL, v32);
    MaterialSvtInfo__setMaterialSvtInfo_22773372(
      Component_srcLineSprite,
      v23++,
      baseData,
      (int64_t)key,
      0,
      0,
      value != 0,
      0LL,
      0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v59,
    (const MethodInfo_27DBF9C *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_2FA7114 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_2FA7114 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v36 = this->fields.materialSvtGrid;
  if ( !v36 )
    goto LABEL_46;
  cellWidth = v36->fields.cellWidth;
  v38 = (int)normalConfirmInfo;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.materialSvtGrid,
                                                    0LL);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  if ( v38 <= SLODWORD(cellWidth) )
    v39 = Count;
  else
    v39 = LODWORD(cellWidth);
  v40 = 55.0;
  if ( v38 <= SLODWORD(cellWidth) )
    v40 = y;
  v42 = (float)(this->fields.center.fields.x - (float)(v22 * (float)(v39 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v40 - 1),
    0LL);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)normalConfirmInfo,
                                                    0LL);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  v62.fields.x = 0.5;
  v62.fields.y = 0.5;
  v62.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v62, 0LL);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UIGrid__set_repositionNow((UIGrid_o *)normalConfirmInfo, 1, 0LL);
  normalSpendQpTxtLb = this->fields.normalSpendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !normalSpendQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !normalHaveQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  LODWORD(v58.fields.dictionary) = spendQp;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58, v47);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v46, v48, 0LL);
  if ( !confirmSpendQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  v61 = v60;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v51);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v50, v52, 0LL);
  if ( !confirmHaveQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3439/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !confirmMsgLb
    || (UILabel__set_text(confirmMsgLb, (System_String_o *)normalConfirmInfo, 0LL),
        (normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(normalConfirmInfo, 0, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_46:
    sub_B7769C(normalConfirmInfo, v14);
  }
  if ( combineRootComponent->fields.state == 4 )
  {
    v55 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v55,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__150_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v55, 0LL, 0LL, v56);
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
  float y; // s9
  int v27; // w22
  int v28; // w9
  float z; // s2
  float v30; // s1
  float v31; // s0
  UILabel_o *exceedConfirmSpendQpTxtLb; // x22
  UILabel_o *exceedConfirmHaveQpTxtLb; // x22
  UILabel_o *exceedConfirmSpendQpLb; // x22
  System_String_o *v35; // x23
  __int64 v36; // x2
  Il2CppObject *v37; // x0
  UILabel_o *exceedConfirmHaveQpLb; // x21
  System_String_o *v39; // x22
  __int64 v40; // x2
  Il2CppObject *v41; // x0
  UILabel_o *exceedMaterialMsgLb; // x20
  UILabel_o *exceedConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v45; // x20
  const MethodInfo *v46; // x5
  __int64 v47; // x0
  int32_t v48; // [xsp+8h] [xbp-68h] BYREF
  int32_t v49; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438DAAE & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SetRarityDialogControl__SetExceedMaterialInfo_b__148_0__);
    sub_B775C4(&StringLiteral_9439/*"NEED_QP"*/);
    sub_B775C4(&StringLiteral_3294/*"COMBINE_HAVE_QP"*/);
    sub_B775C4(&StringLiteral_3439/*"CONFIRM_COMBINE_MSG"*/);
    sub_B775C4(&StringLiteral_3293/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_3326/*"COMBINE_SPEND_QP"*/);
    byte_438DAAE = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  exceedConfirmInfo = this->fields.exceedConfirmInfo;
  if ( !exceedConfirmInfo )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exceedConfirmInfo, 1, 0LL);
  exceedConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !exceedConfirmInfo )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exceedConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v15);
  SetRarityDialogControl__DefaultBgSize(this, v16);
  exceedConfirmInfo = this->fields.exceedConfirmTitleLb;
  if ( !exceedConfirmInfo )
    goto LABEL_44;
  UILabel__set_text((UILabel_o *)exceedConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_44;
  UILabel__set_text(cancelBtnLb, (System_String_o *)exceedConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_44;
  UILabel__set_text(decideBtnLb, (System_String_o *)exceedConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v19);
  if ( !list )
    goto LABEL_44;
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_44;
  LODWORD(v20) = list->max_length;
  v21 = *((float *)exceedConfirmInfo + 10);
  if ( (int)v20 >= 1 )
  {
    v22 = 0LL;
    v23 = 0;
    do
    {
      if ( v23 )
        goto LABEL_44;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
      exceedConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !exceedConfirmInfo )
        goto LABEL_44;
      exceedConfirmInfo = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            (UnityEngine_GameObject_o *)exceedConfirmInfo,
                            (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v22 >= list->max_length )
      {
        v47 = sub_B776C8(exceedConfirmInfo);
        sub_B77668(v47, 0LL);
      }
      if ( !exceedConfirmInfo )
        goto LABEL_44;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)exceedConfirmInfo,
        v22,
        baseData,
        list->m_Items[v22],
        0,
        0,
        0LL,
        0LL);
      exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
      v20 = *(_QWORD *)&list->max_length;
      ++v22;
      v23 = exceedConfirmInfo == 0LL;
    }
    while ( (__int64)v22 < (int)v20 );
    if ( !exceedConfirmInfo )
      goto LABEL_44;
  }
  y = this->fields.center.fields.y;
  v27 = *((_DWORD *)exceedConfirmInfo + 9);
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
  if ( !exceedConfirmInfo )
    goto LABEL_44;
  v28 = v27 >= (int)v20 ? v20 : v27;
  v30 = v27 >= (int)v20 ? y : 55.0;
  v31 = (float)(this->fields.center.fields.x - (float)((float)(v21 * 0.5) * (float)(v28 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)exceedConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v30 - 1),
    0LL);
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_44;
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
  if ( !exceedConfirmInfo )
    goto LABEL_44;
  v50.fields.x = 0.5;
  v50.fields.y = 0.5;
  v50.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)exceedConfirmInfo, v50, 0LL);
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_44;
  UIGrid__set_repositionNow((UIGrid_o *)exceedConfirmInfo, 1, 0LL);
  exceedConfirmSpendQpTxtLb = this->fields.exceedConfirmSpendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !exceedConfirmSpendQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(exceedConfirmSpendQpTxtLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmHaveQpTxtLb = this->fields.exceedConfirmHaveQpTxtLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !exceedConfirmHaveQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(exceedConfirmHaveQpTxtLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmSpendQpLb = this->fields.exceedConfirmSpendQpLb;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  v49 = spendQp;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v36);
  exceedConfirmInfo = System_String__Format(v35, v37, 0LL);
  if ( !exceedConfirmSpendQpLb )
    goto LABEL_44;
  UILabel__set_text(exceedConfirmSpendQpLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmHaveQpLb = this->fields.exceedConfirmHaveQpLb;
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  v48 = haveQp;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v40);
  exceedConfirmInfo = System_String__Format(v39, v41, 0LL);
  if ( !exceedConfirmHaveQpLb )
    goto LABEL_44;
  UILabel__set_text(exceedConfirmHaveQpLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedMaterialMsgLb = this->fields.exceedMaterialMsgLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3293/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, 0LL);
  if ( !exceedMaterialMsgLb
    || (UILabel__set_text(exceedMaterialMsgLb, (System_String_o *)exceedConfirmInfo, 0LL),
        exceedConfirmMsgLb = this->fields.exceedConfirmMsgLb,
        exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3439/*"CONFIRM_COMBINE_MSG"*/, 0LL),
        !exceedConfirmMsgLb)
    || (UILabel__set_text(exceedConfirmMsgLb, (System_String_o *)exceedConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_44:
    sub_B7769C(exceedConfirmInfo, v13);
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v45 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v45,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetExceedMaterialInfo_b__148_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 0, v45, 0LL, 0LL, v46);
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
  Il2CppObject *v20; // x0
  UILabel_o *friendshipExceedHaveQpLb; // x21
  System_String_o *v22; // x22
  __int64 v23; // x2
  Il2CppObject *v24; // x0
  UILabel_o *friendshipExceedMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v27; // x20
  const MethodInfo *v28; // x5
  int32_t v29; // [xsp+8h] [xbp-38h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438DABD & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__163_0__);
    sub_B775C4(&StringLiteral_9439/*"NEED_QP"*/);
    sub_B775C4(&StringLiteral_3294/*"COMBINE_HAVE_QP"*/);
    sub_B775C4(&StringLiteral_6601/*"FRIENDSHIP_EXCEED_SPEND_QP"*/);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_3447/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/);
    byte_438DABD = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)msg);
  friendshipExceedConfirmInfo = this->fields.friendshipExceedConfirmInfo;
  if ( !friendshipExceedConfirmInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(friendshipExceedConfirmInfo, 1, 0LL);
  friendshipExceedConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !friendshipExceedConfirmInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(friendshipExceedConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v11);
  SetRarityDialogControl__DefaultBgSize(this, v12);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)this->fields.friendshipExceedTitleLb;
  if ( !friendshipExceedConfirmInfo )
    goto LABEL_22;
  UILabel__set_text((UILabel_o *)friendshipExceedConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0LL);
  if ( !cancelBtnLb )
    goto LABEL_22;
  UILabel__set_text(cancelBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0LL);
  if ( !decideBtnLb )
    goto LABEL_22;
  UILabel__set_text(decideBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedSpendQpTxtLb = this->fields.friendshipExceedSpendQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_6601/*"FRIENDSHIP_EXCEED_SPEND_QP"*/,
                                                              0LL);
  if ( !friendshipExceedSpendQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(friendshipExceedSpendQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedHaveQpTxtLb = this->fields.friendshipExceedHaveQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3294/*"COMBINE_HAVE_QP"*/,
                                                              0LL);
  if ( !friendshipExceedHaveQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(friendshipExceedHaveQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedSpendQpLb = this->fields.friendshipExceedSpendQpLb;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  v30 = spendQp;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v19);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v18, v20, 0LL);
  if ( !friendshipExceedSpendQpLb )
    goto LABEL_22;
  UILabel__set_text(friendshipExceedSpendQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedHaveQpLb = this->fields.friendshipExceedHaveQpLb;
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  v29 = haveQp;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v23);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v22, v24, 0LL);
  if ( !friendshipExceedHaveQpLb )
    goto LABEL_22;
  UILabel__set_text(friendshipExceedHaveQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedMsgLb = this->fields.friendshipExceedMsgLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3447/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/,
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
LABEL_22:
    sub_B7769C(friendshipExceedConfirmInfo, v9);
  }
  if ( combineRootComponent->fields.state == 12 )
  {
    v27 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v27,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__163_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v27, 0LL, 0LL, v28);
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  UILabel_o *cancelBtnLb; // x23
  UILabel_o *decideBtnLb; // x23
  UILabel_o *limitUpConfirmSpendQpTxtLb; // x23
  UILabel_o *limitUpConfirmHaveQpTxtLb; // x23
  UILabel_o *limitUpConfirmSpendQpLb; // x23
  System_String_o *v42; // x24
  __int64 v43; // x2
  Il2CppObject *v44; // x0
  UILabel_o *limitUpConfirmHaveQpLb; // x22
  System_String_o *v46; // x23
  __int64 v47; // x2
  Il2CppObject *v48; // x0
  UILabel_o *limitUpConfirmMsgLb; // x21
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v51; // x21
  const MethodInfo *v52; // x5
  int32_t v53; // [xsp+8h] [xbp-48h] BYREF
  int32_t v54; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_438DAB3 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SetRarityDialogControl___c__DisplayClass153_0__SetLimitUpInfo_b__0__);
    sub_B775C4(&SetRarityDialogControl___c__DisplayClass153_0_TypeInfo);
    sub_B775C4(&StringLiteral_9439/*"NEED_QP"*/);
    sub_B775C4(&StringLiteral_3294/*"COMBINE_HAVE_QP"*/);
    sub_B775C4(&StringLiteral_3439/*"CONFIRM_COMBINE_MSG"*/);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_3326/*"COMBINE_SPEND_QP"*/);
    byte_438DAB3 = 1;
  }
  v13 = sub_B77694(SetRarityDialogControl___c__DisplayClass153_0_TypeInfo);
  SetRarityDialogControl___c__DisplayClass153_0___ctor((SetRarityDialogControl___c__DisplayClass153_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_23;
  *(_QWORD *)(v13 + 16) = baseData;
  sub_B77560((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)baseData, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = combineLimitUpWarningDialog;
  sub_B77560(
    (BattleServantConfConponent_o *)(v13 + 24),
    (System_Int32_array **)combineLimitUpWarningDialog,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  *(_QWORD *)(v13 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  SetRarityDialogControl__DisableConfirmInfo(this, v34);
  limitUpConfirmInfo = this->fields.limitUpConfirmInfo;
  if ( !limitUpConfirmInfo )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0LL);
  limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !limitUpConfirmInfo )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v35);
  SetRarityDialogControl__DefaultBgSize(this, v36);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.limitUpTitleLb;
  if ( !limitUpConfirmInfo )
    goto LABEL_23;
  UILabel__set_text((UILabel_o *)limitUpConfirmInfo, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_23;
  UILabel__set_text(cancelBtnLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_23;
  UILabel__set_text(decideBtnLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmSpendQpTxtLb = this->fields.limitUpConfirmSpendQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !limitUpConfirmSpendQpTxtLb )
    goto LABEL_23;
  UILabel__set_text(limitUpConfirmSpendQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmHaveQpTxtLb = this->fields.limitUpConfirmHaveQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !limitUpConfirmHaveQpTxtLb )
    goto LABEL_23;
  UILabel__set_text(limitUpConfirmHaveQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmSpendQpLb = this->fields.limitUpConfirmSpendQpLb;
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  v54 = spendQp;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v43);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v42, v44, 0LL);
  if ( !limitUpConfirmSpendQpLb )
    goto LABEL_23;
  UILabel__set_text(limitUpConfirmSpendQpLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmHaveQpLb = this->fields.limitUpConfirmHaveQpLb;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  v53 = haveQp;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v47);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v46, v48, 0LL);
  if ( !limitUpConfirmHaveQpLb )
    goto LABEL_23;
  UILabel__set_text(limitUpConfirmHaveQpLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmMsgLb = this->fields.limitUpConfirmMsgLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3439/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !limitUpConfirmMsgLb
    || (UILabel__set_text(limitUpConfirmMsgLb, (System_String_o *)limitUpConfirmInfo, 0LL),
        (limitUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)limitUpConfirmInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 0, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_23:
    sub_B7769C(limitUpConfirmInfo, v15);
  }
  if ( combineRootComponent->fields.state == 5 )
  {
    v51 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v51,
      (Il2CppObject *)v13,
      Method_SetRarityDialogControl___c__DisplayClass153_0__SetLimitUpInfo_b__0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v51, 0LL, 0LL, v52);
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *npUpTitleLb; // x21
  __int64 *v41; // x8
  UILabel_o *cancelBtnLb; // x21
  UILabel_o *decideBtnLb; // x21
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v45; // x20
  System_Action_o *v46; // x21
  const MethodInfo *v47; // x5
  SetRarityDialogControl_o *v48; // x0
  int32_t v49; // w1

  if ( (byte_438DAB6 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SetRarityDialogControl_DefaultBgSize__);
    sub_B775C4(&Method_SetRarityDialogControl__SetNpCombineInfo_b__156_0__);
    sub_B775C4(&Method_SetRarityDialogControl__SetNpCombineInfo_b__156_1__);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_3467/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/);
    sub_B775C4(&StringLiteral_3465/*"CONFIRM_TITLE_TD_COMBINE"*/);
    byte_438DAB6 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  npUpConfirmInfo = this->fields.npUpConfirmInfo;
  if ( !npUpConfirmInfo )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0LL);
  this->fields.npBaseData = baseData;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.npBaseData,
    (System_Int32_array **)baseData,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.npSelectMtUsrSvtIdList = selectUsrSvtIdList;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.npSelectMtUsrSvtIdList,
    (System_Int32_array **)selectUsrSvtIdList,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.npLvUpData = updata;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.npLvUpData,
    (System_Int32_array **)updata,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.npIsExceedMaxLv = isExceedMaxLv;
  this->fields.npIsCombineSvt = isCombineSvt;
  this->fields.npIsExceededMaterial = isExceededMaterial;
  this->fields.reConfirmation = reConfirmation;
  npUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !npUpConfirmInfo )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v37);
  SetRarityDialogControl__DefaultBgSize(this, v38);
  npUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.mPanelBg;
  if ( !npUpConfirmInfo )
    goto LABEL_32;
  UIWidget__set_height((UIWidget_o *)npUpConfirmInfo, 500, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, -8.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnInfo, -23.0, 0LL);
  npUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.npUpInfoComp;
  if ( !npUpConfirmInfo )
    goto LABEL_32;
  NpUpConfirmComponent__setNpUpConfirmInfo(
    (NpUpConfirmComponent_o *)npUpConfirmInfo,
    baseData,
    selectUsrSvtIdList,
    updata,
    isExceedMaxLv,
    isCombineSvt,
    isExceededMaterial,
    reConfirmation,
    0LL);
  npUpTitleLb = this->fields.npUpTitleLb;
  if ( reConfirmation )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = &StringLiteral_3467/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v41 = &StringLiteral_3465/*"CONFIRM_TITLE_TD_COMBINE"*/;
  }
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v41, 0LL);
  if ( !npUpTitleLb )
    goto LABEL_32;
  UILabel__set_text(npUpTitleLb, (System_String_o *)npUpConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb
    || (UILabel__set_text(cancelBtnLb, (System_String_o *)npUpConfirmInfo, 0LL),
        decideBtnLb = this->fields.decideBtnLb,
        npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/,
                                                        0LL),
        !decideBtnLb)
    || (UILabel__set_text(decideBtnLb, (System_String_o *)npUpConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_32:
    sub_B7769C(npUpConfirmInfo, v17);
  }
  if ( combineRootComponent->fields.state == 11 )
  {
    if ( (this->fields.npIsExceedMaxLv || this->fields.npIsCombineSvt || this->fields.npIsExceededMaterial)
      && !reConfirmation )
    {
      v45 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v45, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__156_0__, 0LL);
      v46 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v46, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
      v48 = this;
      v49 = 0;
    }
    else
    {
      v45 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v45, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__156_1__, 0LL);
      v46 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v46, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
      v49 = 8;
      v48 = this;
    }
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v48, v49, v45, 0LL, v46, v47);
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
  SetLevelUpData_o *v11; // x24
  signed int max_length; // w21
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **upTargetSvtNameBef; // x22
  UnityEngine_GameObject_o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **upTargetSvtNameAft; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **upTargetSkillNameBef; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **upTargetSkillNameAft; // x22
  SetLevelUpData_o *v48; // x8
  UnityEngine_GameObject_o *v49; // x22
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x23
  SetLevelUpData_o *v57; // x8
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x23
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  SetLevelUpData_o *v71; // x8
  System_Int32_array **targetName; // x23
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  SetLevelUpData_o *v79; // x8
  System_Int32_array **v80; // x20
  UnityEngine_GameObject_c *klass; // x8
  __int64 v82; // x20
  UIExtrusionLabel_o *currentLvLb; // x20
  UIExtrusionLabel_o *resLvLb; // x20
  UILabel_o *upSpendQpTxtLb; // x20
  UILabel_o *upHaveQpTxtLb; // x20
  UILabel_o *upSpendQpLb; // x20
  System_String_o *v88; // x21
  __int64 v89; // x2
  Il2CppObject *v90; // x0
  UILabel_o *upHaveQpLb; // x20
  System_String_o *v92; // x21
  __int64 v93; // x2
  Il2CppObject *v94; // x0
  UILabel_o *upConfirmMsgLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v99; // x20
  const MethodInfo *v100; // x5
  __int64 v101; // x0
  __int64 v102; // x0
  int32_t haveQp; // [xsp+8h] [xbp-38h] BYREF
  int32_t spendQp; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438DAB4 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__154_0__);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&UILabel___TypeInfo);
    sub_B775C4(&StringLiteral_9439/*"NEED_QP"*/);
    sub_B775C4(&StringLiteral_3294/*"COMBINE_HAVE_QP"*/);
    sub_B775C4(&StringLiteral_3439/*"CONFIRM_COMBINE_MSG"*/);
    sub_B775C4(&StringLiteral_24467/*"："*/);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_3326/*"COMBINE_SPEND_QP"*/);
    byte_438DAB4 = 1;
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
LABEL_81:
    sub_B7769C(skillUpConfirmInfo, v7);
  }
  if ( !upDataList->max_length )
    goto LABEL_82;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTitleLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_81;
  v11 = upDataList->m_Items[0];
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, titleMsg, 0LL);
  if ( !v11 )
    goto LABEL_81;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetRubyLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_81;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, v11->fields.targetRuby, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetNameLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_81;
  max_length = upDataList->max_length;
  skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  if ( !skillUpConfirmInfo )
    goto LABEL_81;
  if ( max_length >= 2 )
  {
    UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 0, 0LL);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetSvtNameBef;
    if ( !skillUpConfirmInfo )
      goto LABEL_81;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
    if ( !skillUpConfirmInfo )
      goto LABEL_81;
    skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
    if ( !skillUpConfirmInfo )
      goto LABEL_81;
    UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0LL);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upSpendQpTxtLb;
    if ( !skillUpConfirmInfo )
      goto LABEL_81;
    v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
    GameObjectExtensions__SetLocalPositionX(v17, 11.0, 0LL);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upHaveQpTxtLb;
    if ( !skillUpConfirmInfo )
      goto LABEL_81;
    v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
    GameObjectExtensions__SetLocalPositionX(v18, 11.0, 0LL);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_B775DC(UILabel___TypeInfo, 4LL);
    if ( !skillUpConfirmInfo )
      goto LABEL_81;
    upTargetSvtNameBef = (System_Int32_array **)this->fields.upTargetSvtNameBef;
    v26 = skillUpConfirmInfo;
    if ( upTargetSvtNameBef )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_B77684(
                                                         this->fields.upTargetSvtNameBef,
                                                         skillUpConfirmInfo->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_83;
    }
    if ( !LODWORD(v26[1].klass) )
      goto LABEL_82;
    v26[1].monitor = upTargetSvtNameBef;
    sub_B77560((BattleServantConfConponent_o *)&v26[1].monitor, upTargetSvtNameBef, v19, v20, v21, v22, v23, v24);
    upTargetSvtNameAft = (System_Int32_array **)this->fields.upTargetSvtNameAft;
    if ( upTargetSvtNameAft )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_B77684(
                                                         this->fields.upTargetSvtNameAft,
                                                         v26->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_83;
    }
    if ( LODWORD(v26[1].klass) <= 1 )
      goto LABEL_82;
    *(_QWORD *)&v26[1].fields.m_CachedPtr = upTargetSvtNameAft;
    sub_B77560((BattleServantConfConponent_o *)&v26[1].fields, upTargetSvtNameAft, v27, v28, v29, v30, v31, v32);
    upTargetSkillNameBef = (System_Int32_array **)this->fields.upTargetSkillNameBef;
    if ( upTargetSkillNameBef )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_B77684(
                                                         this->fields.upTargetSkillNameBef,
                                                         v26->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_83;
    }
    if ( LODWORD(v26[1].klass) <= 2 )
      goto LABEL_82;
    v26[2].klass = (UnityEngine_GameObject_c *)upTargetSkillNameBef;
    sub_B77560((BattleServantConfConponent_o *)&v26[2], upTargetSkillNameBef, v34, v35, v36, v37, v38, v39);
    upTargetSkillNameAft = (System_Int32_array **)this->fields.upTargetSkillNameAft;
    if ( upTargetSkillNameAft )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_B77684(
                                                         this->fields.upTargetSkillNameAft,
                                                         v26->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_83;
    }
    if ( LODWORD(v26[1].klass) <= 3 )
      goto LABEL_82;
    v26[2].monitor = upTargetSkillNameAft;
    sub_B77560((BattleServantConfConponent_o *)&v26[2].monitor, upTargetSkillNameAft, v41, v42, v43, v44, v45, v46);
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_B775DC(string___TypeInfo, 4LL);
    if ( !upDataList->max_length )
      goto LABEL_82;
    v48 = upDataList->m_Items[0];
    if ( !v48 )
      goto LABEL_81;
    v49 = skillUpConfirmInfo;
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Concat_44901936(
                                                       v48->fields.displayText,
                                                       (System_String_o *)StringLiteral_24467/*"："*/,
                                                       0LL);
    if ( !v49 )
      goto LABEL_81;
    v56 = (System_Int32_array **)skillUpConfirmInfo;
    if ( skillUpConfirmInfo )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_B77684(skillUpConfirmInfo, v49->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_83;
    }
    if ( !LODWORD(v49[1].klass) )
      goto LABEL_82;
    v49[1].monitor = v56;
    sub_B77560((BattleServantConfConponent_o *)&v49[1].monitor, v56, v50, v51, v52, v53, v54, v55);
    if ( upDataList->max_length <= 1 )
      goto LABEL_82;
    v57 = upDataList->m_Items[1];
    if ( !v57 )
      goto LABEL_81;
    skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Concat_44901936(
                                                       v57->fields.displayText,
                                                       (System_String_o *)StringLiteral_24467/*"："*/,
                                                       0LL);
    v64 = (System_Int32_array **)skillUpConfirmInfo;
    if ( skillUpConfirmInfo )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_B77684(skillUpConfirmInfo, v49->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_83;
    }
    if ( LODWORD(v49[1].klass) <= 1 )
      goto LABEL_82;
    *(_QWORD *)&v49[1].fields.m_CachedPtr = v64;
    sub_B77560((BattleServantConfConponent_o *)&v49[1].fields, v64, v58, v59, v60, v61, v62, v63);
    if ( !upDataList->max_length )
      goto LABEL_82;
    v71 = upDataList->m_Items[0];
    if ( !v71 )
      goto LABEL_81;
    targetName = (System_Int32_array **)v71->fields.targetName;
    if ( targetName )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_B77684(targetName, v49->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
        goto LABEL_83;
    }
    if ( LODWORD(v49[1].klass) <= 2 )
      goto LABEL_82;
    v49[2].klass = (UnityEngine_GameObject_c *)targetName;
    sub_B77560((BattleServantConfConponent_o *)&v49[2], targetName, v65, v66, v67, v68, v69, v70);
    if ( upDataList->max_length <= 1 )
      goto LABEL_82;
    v79 = upDataList->m_Items[1];
    if ( !v79 )
      goto LABEL_81;
    v80 = (System_Int32_array **)v79->fields.targetName;
    if ( v80 )
    {
      skillUpConfirmInfo = (UnityEngine_GameObject_o *)sub_B77684(v80, v49->klass->_1.element_class);
      if ( !skillUpConfirmInfo )
      {
LABEL_83:
        v102 = sub_B776BC(skillUpConfirmInfo);
        sub_B77668(v102, 0LL);
      }
    }
    if ( LODWORD(v49[1].klass) > 3 )
    {
      v49[2].monitor = v80;
      sub_B77560((BattleServantConfConponent_o *)&v49[2].monitor, v80, v73, v74, v75, v76, v77, v78);
      klass = v26[1].klass;
      if ( (int)klass < 1 )
        goto LABEL_65;
      v82 = 0LL;
      while ( (unsigned int)v82 < (unsigned int)klass && (unsigned int)v82 < LODWORD(v49[1].klass) )
      {
        skillUpConfirmInfo = (UnityEngine_GameObject_o *)*((_QWORD *)&v26[1].monitor + v82);
        if ( !skillUpConfirmInfo )
          goto LABEL_81;
        UILabel__set_text((UILabel_o *)skillUpConfirmInfo, *((System_String_o **)&v49[1].monitor + v82), 0LL);
        klass = v26[1].klass;
        if ( (int)++v82 >= (int)klass )
          goto LABEL_65;
      }
    }
LABEL_82:
    v101 = sub_B776C8(skillUpConfirmInfo);
    sub_B77668(v101, 0LL);
  }
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetNameLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_81;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, v11->fields.targetName, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetSvtNameBef;
  if ( !skillUpConfirmInfo )
    goto LABEL_81;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v13, 0LL);
  if ( !skillUpConfirmInfo )
    goto LABEL_81;
  skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  if ( !skillUpConfirmInfo )
    goto LABEL_81;
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 0, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upSpendQpTxtLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_81;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v14, -5.0, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upHaveQpTxtLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_81;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)skillUpConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v15, -5.0, 0LL);
LABEL_65:
  currentLvLb = this->fields.currentLvLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v11 + 64, 0LL);
  if ( !currentLvLb )
    goto LABEL_81;
  UIExtrusionLabel__set_text(currentLvLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  resLvLb = this->fields.resLvLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v11 + 68, 0LL);
  if ( !resLvLb )
    goto LABEL_81;
  UIExtrusionLabel__set_text(resLvLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !upSpendQpTxtLb )
    goto LABEL_81;
  UILabel__set_text(upSpendQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !upHaveQpTxtLb )
    goto LABEL_81;
  UILabel__set_text(upHaveQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upSpendQpLb = this->fields.upSpendQpLb;
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  spendQp = v11->fields.spendQp;
  v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendQp, v89);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v88, v90, 0LL);
  if ( !upSpendQpLb )
    goto LABEL_81;
  UILabel__set_text(upSpendQpLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upHaveQpLb = this->fields.upHaveQpLb;
  v92 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  haveQp = v11->fields.haveQp;
  v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveQp, v93);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v92, v94, 0LL);
  if ( !upHaveQpLb )
    goto LABEL_81;
  UILabel__set_text(upHaveQpLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upConfirmMsgLb = this->fields.upConfirmMsgLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3439/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !upConfirmMsgLb )
    goto LABEL_81;
  UILabel__set_text(upConfirmMsgLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_81;
  UILabel__set_text(cancelBtnLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_81;
  UILabel__set_text(decideBtnLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_81;
  if ( combineRootComponent->fields.state == 10 )
  {
    v99 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v99,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__154_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v99, 0LL, 0LL, v100);
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
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  System_Action_o *v17; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x5
  SetRarityDialogControl_o *v21; // x0
  int32_t v22; // w1

  if ( (byte_438DABE & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SetRarityDialogControl__SetSpecialAscension_b__164_0__);
    sub_B775C4(&Method_SetRarityDialogControl__SetSpecialAscension_b__164_1__);
    sub_B775C4(&Method_SetRarityDialogControl__SetSpecialAscension_b__164_2__);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_12519/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/);
    sub_B775C4(&StringLiteral_12523/*"SPECIAL_ASCENSION_WARNING1_TXT"*/);
    sub_B775C4(&StringLiteral_12524/*"SPECIAL_ASCENSION_WARNING2_TXT"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DABE = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  specialAscensionConfirmInfo = this->fields.specialAscensionConfirmInfo;
  if ( !specialAscensionConfirmInfo )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 1, 0LL);
  specialAscensionConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !specialAscensionConfirmInfo )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v12);
  SetRarityDialogControl__DefaultBgSize(this, v13);
  this->fields.specialAscensionConfirm = confirm;
  this->fields.specialAscensionWarning1 = warning1;
  this->fields.specialAscensionWarning2 = warning2;
  if ( confirm )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12519/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/, 0LL);
    this->fields.specialAscensionConfirm = 0;
  }
  else if ( warning1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12523/*"SPECIAL_ASCENSION_WARNING1_TXT"*/, 0LL);
    this->fields.specialAscensionWarning1 = 0;
  }
  else if ( warning2 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12524/*"SPECIAL_ASCENSION_WARNING2_TXT"*/, 0LL);
    this->fields.specialAscensionWarning2 = 0;
  }
  else
  {
    v14 = (System_String_o *)StringLiteral_1/*""*/;
  }
  specialAscensionConfirmInfo = this->fields.specialAscensionConfirmInfo;
  if ( !specialAscensionConfirmInfo )
    goto LABEL_41;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              specialAscensionConfirmInfo,
                                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___);
  if ( !specialAscensionConfirmInfo )
    goto LABEL_41;
  SpecialAscensionConfirmInfo__SetSpecialAscensionConfirmInfo(
    (SpecialAscensionConfirmInfo_o *)specialAscensionConfirmInfo,
    v14,
    25,
    0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0LL);
  if ( !cancelBtnLb )
    goto LABEL_41;
  UILabel__set_text(cancelBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0LL);
  if ( !decideBtnLb
    || (UILabel__set_text(decideBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0LL),
        (specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (specialAscensionConfirmInfo = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)specialAscensionConfirmInfo,
                                        0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 0, 0LL),
        v17 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(
          v17,
          (Il2CppObject *)this,
          Method_SetRarityDialogControl__SetSpecialAscension_b__164_0__,
          0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_41:
    sub_B7769C(specialAscensionConfirmInfo, v10);
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
      v19 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        v19,
        (Il2CppObject *)this,
        Method_SetRarityDialogControl__SetSpecialAscension_b__164_1__,
        0LL);
      v22 = 8;
      v21 = this;
      goto LABEL_39;
    }
    v19 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__164_2__, 0LL);
    v21 = this;
    v22 = 0;
LABEL_39:
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v21, v22, v19, v17, 0LL, v20);
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
  __int64 v15; // x1
  UnityEngine_GameObject_o *allDispConfirmInfo; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  UILabel_o *cancelBtnLb; // x26
  UILabel_o *decideBtnLb; // x26
  const MethodInfo *v21; // x1
  struct UIGrid_o *allSvtGrid; // x8
  float v23; // s9
  int32_t v24; // w26
  UnityEngine_Component_o *v25; // x0
  char value; // w23
  Il2CppObject *key; // x27
  UnityEngine_GameObject_o *svtFaceInfo; // x28
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v31; // x1
  MaterialSvtInfo_o *Component_srcLineSprite; // x0
  __int64 v33; // x1
  __int64 v34; // x1
  float y; // s10
  int32_t Count; // w25
  struct UIGrid_o *v37; // x8
  float cellWidth; // w20
  int v39; // w24
  int32_t v40; // w10
  float v41; // s1
  float z; // s2
  float v43; // s0
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v47; // x25
  __int64 v48; // x2
  Il2CppObject *v49; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v51; // x24
  __int64 v52; // x2
  Il2CppObject *v53; // x0
  UILabel_o *allRareMsgLb; // x20
  UILabel_o *allLimitRareLb; // x20
  UILabel_o *allRareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v58; // x20
  const MethodInfo *v59; // x5
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v61; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v62; // [xsp+40h] [xbp-A0h] BYREF
  _BOOL4 v63; // [xsp+78h] [xbp-68h]
  int32_t v64; // [xsp+7Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  v63 = isRare;
  if ( (byte_438DAB9 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__159_0__);
    sub_B775C4(&StringLiteral_9439/*"NEED_QP"*/);
    sub_B775C4(&StringLiteral_3294/*"COMBINE_HAVE_QP"*/);
    sub_B775C4(&StringLiteral_3439/*"CONFIRM_COMBINE_MSG"*/);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_11223/*"RARE_MATERIAL_INFO_MSG"*/);
    sub_B775C4(&StringLiteral_3326/*"COMBINE_SPEND_QP"*/);
    byte_438DAB9 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v17);
  SetRarityDialogControl__DefaultBgSize(this, v18);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allTitleLb;
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  UILabel__set_text((UILabel_o *)allDispConfirmInfo, title, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_74;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_74;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v21);
  if ( !selectedList )
    goto LABEL_74;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_2FA7114 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allSvtGrid = this->fields.allSvtGrid;
  if ( !allSvtGrid )
    goto LABEL_74;
  v23 = allSvtGrid->fields.cellHeight * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v61,
    selectedList,
    (const MethodInfo_2FA7ABC *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v62 = v61;
  v24 = 0;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v62,
            (const MethodInfo_27DBE38 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v25 = (UnityEngine_Component_o *)this->fields.allSvtGrid;
    if ( !v25 )
      sub_B7769C(0LL, v34);
    key = v62.fields.current.fields.key;
    value = (char)v62.fields.current.fields.value;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v25, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Object )
      sub_B7769C(0LL, v31);
    Component_srcLineSprite = (MaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     Object,
                                                     (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_srcLineSprite )
      sub_B7769C(0LL, v33);
    MaterialSvtInfo__setMaterialSvtInfo_22773372(
      Component_srcLineSprite,
      v24++,
      baseData,
      (int64_t)key,
      0,
      0,
      value != 0,
      0LL,
      0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v62,
    (const MethodInfo_27DBF9C *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_2FA7114 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_2FA7114 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v37 = this->fields.allSvtGrid;
  if ( !v37 )
    goto LABEL_74;
  cellWidth = v37->fields.cellWidth;
  v39 = (int)allDispConfirmInfo;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this->fields.allSvtGrid,
                                                     0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  if ( v39 <= SLODWORD(cellWidth) )
    v40 = Count;
  else
    v40 = LODWORD(cellWidth);
  v41 = 70.0;
  if ( v39 <= SLODWORD(cellWidth) )
    v41 = y;
  v43 = (float)(this->fields.center.fields.x - (float)(v23 * (float)(v40 - 1))) * 0.47;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v41 - 1),
    0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)allDispConfirmInfo,
                                                     0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  v65.fields.x = 0.47;
  v65.fields.y = 0.47;
  v65.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v65, 0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  UIGrid__set_repositionNow((UIGrid_o *)allDispConfirmInfo, 1, 0LL);
  allSpendQpTxtLb = this->fields.allSpendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !allSpendQpTxtLb )
    goto LABEL_74;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3294/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !allHaveQpTxtLb )
    goto LABEL_74;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allSpendQpLb = this->fields.allSpendQpLb;
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  LODWORD(v61.fields.dictionary) = spendQp;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61, v48);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v47, v49, 0LL);
  if ( !allSpendQpLb )
    goto LABEL_74;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpLb = this->fields.allHaveQpLb;
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_9439/*"NEED_QP"*/, 0LL);
  v64 = haveQp;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v52);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v51, v53, 0LL);
  if ( !allHaveQpLb )
    goto LABEL_74;
  UILabel__set_text(allHaveQpLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allStatusUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 0, 0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allLimitUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 0, 0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allRareMsgLb;
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 0, 0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allLimitRareLb;
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 0, 0LL);
  if ( System_String__IsNullOrEmpty(limitWarningMsg, 0LL) )
  {
    if ( !v63 )
      goto LABEL_63;
    allRareMsgLb = this->fields.allRareMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11223/*"RARE_MATERIAL_INFO_MSG"*/,
                                                       0LL);
    if ( !allRareMsgLb )
      goto LABEL_74;
    UILabel__set_text(allRareMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
    allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allRareMsgLb;
    if ( !allDispConfirmInfo )
      goto LABEL_74;
    goto LABEL_61;
  }
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allLimitUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  UILabel__set_text((UILabel_o *)allDispConfirmInfo, limitWarningMsg, 0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allLimitUpInfoLb;
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
  if ( v63 )
  {
    allLimitRareLb = this->fields.allLimitRareLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11223/*"RARE_MATERIAL_INFO_MSG"*/,
                                                       0LL);
    if ( allLimitRareLb )
    {
      UILabel__set_text(allLimitRareLb, (System_String_o *)allDispConfirmInfo, 0LL);
      allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allLimitRareLb;
      if ( allDispConfirmInfo )
      {
LABEL_61:
        allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
        if ( !allDispConfirmInfo )
          goto LABEL_74;
        UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
        goto LABEL_63;
      }
    }
LABEL_74:
    sub_B7769C(allDispConfirmInfo, v15);
  }
LABEL_63:
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3439/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !allRareConfirmMsgLb )
    goto LABEL_74;
  UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_74;
  if ( combineRootComponent->fields.state == 4 )
  {
    v58 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v58,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__159_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v58, 0LL, 0LL, v59);
  }
}


void __fastcall SetRarityDialogControl___SetAllDispConfirmCombine_b__151_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B7769C(0LL, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetAppendSkillCombineInfo_b__155_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B7769C(0LL, method);
  CombineRootComponent__RequestAppendSkillCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmCombine_b__149_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B7769C(0LL, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__157_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B7769C(0LL, method);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__157_1(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.lvExceedCtr) == 0LL )
    sub_B7769C(this, method);
  LevelExceedControl__OnClickCheckLvExceed((LevelExceedControl_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__158_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B7769C(0LL, method);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmRarityInfo_b__147_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B7769C(0LL, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmSvtEqCombine_b__150_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B7769C(0LL, method);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetExceedMaterialInfo_b__148_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.svtCombineCtr) == 0LL )
    sub_B7769C(this, method);
  ServantCombineControl__CheckRareSvt((ServantCombineControl_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetFriendshipExceedInfo_b__163_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B7769C(0LL, method);
  CombineRootComponent__RequestFriendshipExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetNpCombineInfo_b__156_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // [xsp+0h] [xbp-10h]

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


void __fastcall SetRarityDialogControl___SetNpCombineInfo_b__156_1(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B7769C(0LL, method);
  CombineRootComponent__RequestTdCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetSkillNpCombineInfo_b__154_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B7769C(0LL, method);
  CombineRootComponent__RequestSkillCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__164_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8
  struct SpecialAscensionControl_o *specialAscensionCtr; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (specialAscensionCtr = combineRootComponent->fields.specialAscensionCtr) == 0LL )
    sub_B7769C(this, method);
  if ( specialAscensionCtr->fields.pushExeButton )
    specialAscensionCtr->fields.pushExeButton = 0;
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__164_1(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v6; // x21
  System_Action_o *v7; // x22

  if ( (byte_438DAC6 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&CombineRootComponent_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SetRarityDialogControl__SetSpecialAscension_b__164_3__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_12521/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DAC6 = 1;
  }
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
  }
  if ( CombineRootComponent__IsEnableSpecialAscension(0LL) )
  {
    combineRootComponent = this->fields.combineRootComponent;
    if ( combineRootComponent )
    {
      CombineRootComponent__RequestSpecialAscension(combineRootComponent, 0LL);
      return;
    }
LABEL_14:
    sub_B7769C(combineRootComponent, v3);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12521/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0LL);
  v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__164_3__, 0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__OpenNotificationDialog(
    Instance,
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
    0LL);
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__164_2(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *v3; // x1
  const MethodInfo *v4; // x5
  CommonUI_o *Instance; // x20
  System_String_o *v6; // x21
  System_Action_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_438DAC7 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&CombineRootComponent_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SetRarityDialogControl__SetSpecialAscension_b__164_4__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_12521/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DAC7 = 1;
  }
  if ( (BYTE3(CombineRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
  }
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_12521/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0LL);
    v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__164_4__, 0LL);
    if ( !Instance )
      sub_B7769C(v8, v9);
    CommonUI__OpenNotificationDialog(
      Instance,
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
      0LL);
  }
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__164_3(
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
    sub_B7769C(this, method);
  }
  CombineRootComponent__BackSpecialAscension((CombineRootComponent_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__164_4(
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
    sub_B7769C(this, method);
  }
  CombineRootComponent__BackSpecialAscension((CombineRootComponent_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetSvtEqLimitUpConfirmCombine_b__159_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B7769C(0LL, method);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4388E6E & 1) == 0 )
  {
    sub_B775C4(&SetRarityDialogControl___c_TypeInfo);
    byte_4388E6E = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(SetRarityDialogControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)SetRarityDialogControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall SetRarityDialogControl___c___ctor(SetRarityDialogControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SetRarityDialogControl___c___OnClickDlgOk_b__171_0(
        SetRarityDialogControl___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall SetRarityDialogControl___c___SetLimitUpInfo_b__153_1(
        SetRarityDialogControl___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  return NpCombineControl__CheckConfirm_26274620(x, 0LL);
}


void __fastcall SetRarityDialogControl___c__DisplayClass153_0___ctor(
        SetRarityDialogControl___c__DisplayClass153_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SetRarityDialogControl___c__DisplayClass153_0___SetLimitUpInfo_b__0(
        SetRarityDialogControl___c__DisplayClass153_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
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
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__153_1; // x21
  Il2CppObject *v22; // x22
  struct SetRarityDialogControl___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  CombineLimitUpWarningDialog_ClickDelegate_o *_9__2; // x21
  CombineLimitUpWarningDialog_o *combineLimitUpWarningDialog; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct SetRarityDialogControl_o *_4__this; // x8
  __int64 v39; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  if ( (byte_4388E6F & 1) == 0 )
  {
    sub_B775C4(&CombineLimitUpWarningDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Find__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_System_Predicate_UserServantEntity___ctor__);
    sub_B775C4(&System_Predicate_UserServantEntity__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SetRarityDialogControl___c__SetLimitUpInfo_b__153_1__);
    sub_B775C4(&Method_SetRarityDialogControl___c__DisplayClass153_0__SetLimitUpInfo_b__2__);
    sub_B775C4(&SetRarityDialogControl___c_TypeInfo);
    byte_4388E6F = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_50;
  v7 = *(_QWORD *)(Instance + 24);
  v8 = Instance;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    do
    {
      if ( v9 >= (unsigned int)v7 )
      {
        v39 = sub_B776C8(Instance);
        sub_B77668(v39, 0LL);
      }
      v10 = *(_QWORD *)(v8 + 32 + 8 * v9);
      if ( v10 )
      {
        v11 = *(_OWORD *)(v10 + 64);
        *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)(v10 + 48);
        *(_OWORD *)&v43.fields.fakeValue = v11;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v42 = v43;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v42, 0LL);
        if ( Instance == UserId )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v10, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v13 = *(_QWORD *)(v10 + 80);
            v12 = *(_QWORD *)(v10 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v44.fields.currentCryptoKey = v13;
            *(_QWORD *)&v44.fields.fakeValue = v12;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v44, 0LL);
            baseData = this->fields.baseData;
            if ( !baseData )
              goto LABEL_50;
            v15 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(baseData->fields.svtId, 0LL);
            if ( v15 == (_DWORD)Instance )
            {
              v16 = *(_OWORD *)(v10 + 32);
              *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)(v10 + 16);
              *(_OWORD *)&v43.fields.fakeValue = v16;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v41 = v43;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v41, 0LL);
              v17 = this->fields.baseData;
              if ( !v17 )
                goto LABEL_50;
              v18 = *(_OWORD *)&v17->fields.id.fields.fakeValue;
              v19 = Instance;
              *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&v17->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v40.fields.fakeValue = v18;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v40, 0LL);
              if ( v19 != Instance )
              {
                if ( !v3 )
                  goto LABEL_50;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v3,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
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
  if ( (BYTE3(SetRarityDialogControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetRarityDialogControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo);
    Instance = (int64_t)SetRarityDialogControl___c_TypeInfo;
  }
  static_fields = *(struct SetRarityDialogControl___c_StaticFields **)(Instance + 184);
  _9__153_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__153_1;
  if ( !_9__153_1 )
  {
    if ( (*(_BYTE *)(Instance + 307) & 4) != 0 && !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__153_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__153_1,
      v22,
      Method_SetRarityDialogControl___c__SetLimitUpInfo_b__153_1__,
      (const MethodInfo_2C3248C *)Method_System_Predicate_UserServantEntity___ctor__);
    v23 = SetRarityDialogControl___c_TypeInfo->static_fields;
    v23->__9__153_1 = (struct System_Predicate_UserServantEntity__o *)_9__153_1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v23->__9__153_1,
      (System_Int32_array **)_9__153_1,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  if ( !v3 )
    goto LABEL_50;
  Instance = (int64_t)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                        (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v3,
                        (System_Predicate_T__o *)_9__153_1,
                        (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_UserServantEntity__Find__);
  if ( Instance )
  {
    _9__2 = this->fields.__9__2;
    combineLimitUpWarningDialog = this->fields.combineLimitUpWarningDialog;
    if ( !_9__2 )
    {
      _9__2 = (CombineLimitUpWarningDialog_ClickDelegate_o *)sub_B77694(CombineLimitUpWarningDialog_ClickDelegate_TypeInfo);
      CombineLimitUpWarningDialog_ClickDelegate___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_SetRarityDialogControl___c__DisplayClass153_0__SetLimitUpInfo_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.__9__2,
        (System_Int32_array **)_9__2,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    if ( combineLimitUpWarningDialog )
    {
      CombineLimitUpWarningDialog__Open(combineLimitUpWarningDialog, _9__2, 0LL);
      return;
    }
LABEL_50:
    sub_B7769C(Instance, v6);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_50;
  Instance = (int64_t)_4__this->fields.combineRootComponent;
  if ( !Instance )
    goto LABEL_50;
  CombineRootComponent__RequestLimitUp((CombineRootComponent_o *)Instance, 0LL);
}


void __fastcall SetRarityDialogControl___c__DisplayClass153_0___SetLimitUpInfo_b__2(
        SetRarityDialogControl___c__DisplayClass153_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct SetRarityDialogControl_o *_4__this; // x8

  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (this = (SetRarityDialogControl___c__DisplayClass153_0_o *)_4__this->fields.combineRootComponent) == 0LL )
    {
      sub_B7769C(this, isDecide);
    }
    CombineRootComponent__RequestLimitUp((CombineRootComponent_o *)this, 0LL);
  }
}