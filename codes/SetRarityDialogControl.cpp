void __fastcall SetRarityDialogControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  SetRarityDialogControl_c *v2; // x8

  if ( (byte_42178D8 & 1) == 0 )
  {
    sub_B0D8A4(&SetRarityDialogControl_TypeInfo, v1);
    byte_42178D8 = 1;
  }
  SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME = 0.26667;
  SetRarityDialogControl_TypeInfo->static_fields->CLOSE_TIME = 0.26667;
  v2 = SetRarityDialogControl_TypeInfo;
  SetRarityDialogControl_TypeInfo->static_fields->DIALOG_INITIAL_SCALE = 0.9;
  v2->static_fields->DIALOG_CLOSE_SCALE = 0.95;
}


void __fastcall SetRarityDialogControl___ctor(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl__CheckExceedSvt(
        SetRarityDialogControl_o *this,
        System_Int64_array *selectedList,
        const MethodInfo *method)
{
  SetRarityDialogControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x8
  unsigned __int64 v8; // x22
  int64_t v9; // x21
  __int64 v10; // x0

  v4 = this;
  if ( (byte_42178D7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, selectedList);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    this = (SetRarityDialogControl_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_42178D7 = 1;
  }
  v4->fields.isExceed = 0;
  if ( selectedList )
  {
    v7 = *(_QWORD *)&selectedList->max_length;
    if ( v7 )
    {
      if ( (int)v7 >= 1 )
      {
        v8 = 0LL;
        while ( 1 )
        {
          if ( v8 >= (unsigned int)v7 )
          {
            v10 = sub_B0D9A8(this);
            sub_B0D948(v10, 0LL);
          }
          v9 = selectedList->m_Items[v8];
          this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this
            || (this = (SetRarityDialogControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
            || (this = (SetRarityDialogControl_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                     (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                     v9,
                                                     (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0LL )
          {
            sub_B0D97C(this);
          }
          if ( SLODWORD(this->fields.confirmHaveQpLb) >= 1 )
            break;
          LODWORD(v7) = selectedList->max_length;
          if ( (__int64)++v8 >= (int)v7 )
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int32_t adjustHp; // w24
  int32_t adjustAtk; // w19
  _BOOL8 IsStatusUp; // x0
  __int64 v22; // x8
  unsigned __int64 v23; // x27
  int v24; // w26
  int v25; // w24
  int64_t v26; // x22
  UserServantEntity_o *v27; // x22
  System_String_o *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int v35; // w19
  System_String_o *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int v43; // w8
  System_String_o *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x0
  int32_t v53; // [xsp+8h] [xbp-78h]
  int32_t v54; // [xsp+Ch] [xbp-74h]
  int32_t secondMaxAdjustAtk[2]; // [xsp+18h] [xbp-68h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+20h] [xbp-60h] BYREF
  int32_t atkUp[2]; // [xsp+28h] [xbp-58h] BYREF

  v11 = this;
  if ( (byte_42178C5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, baseData);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&StringLiteral_12407/*"STATUS_HP_OVER_DIALOG_MSG"*/, v15);
    sub_B0D8A4(&StringLiteral_12406/*"STATUS_ATK_OVER_DIALOG_MSG"*/, v16);
    sub_B0D8A4(&StringLiteral_12408/*"STATUS_OVER_DIALOG_MSG"*/, v17);
    this = (SetRarityDialogControl_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v18);
    byte_42178C5 = 1;
  }
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)atkUp = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  if ( !baseData )
LABEL_39:
    sub_B0D97C(this);
  adjustHp = baseData->fields.adjustHp;
  adjustAtk = baseData->fields.adjustAtk;
  *(_QWORD *)atkUp = 0LL;
  maxAjustAtk[1] = 0;
  maxAjustAtk[0] = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  *labelMsg = (System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(
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
    v22 = *(_QWORD *)&selectUsrSvtIdList->max_length;
    if ( (int)v22 < 1 )
    {
      v35 = 0;
    }
    else
    {
      v53 = adjustHp;
      v54 = adjustAtk;
      v23 = 0LL;
      v24 = 0;
      v25 = 0;
      do
      {
        if ( v23 >= (unsigned int)v22 )
        {
          v51 = sub_B0D9A8(IsStatusUp);
          sub_B0D948(v51, 0LL);
        }
        v26 = selectUsrSvtIdList->m_Items[v23];
        this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_39;
        this = (SetRarityDialogControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !this )
          goto LABEL_39;
        this = (SetRarityDialogControl_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                             v26,
                                             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !this )
          goto LABEL_39;
        v27 = (UserServantEntity_o *)this;
        IsStatusUp = UserServantEntity__IsStatusUp((UserServantEntity_o *)this, 0LL);
        if ( IsStatusUp )
        {
          *(_QWORD *)atkUp = 0LL;
          UserServantEntity__getStatusUpInfo(v27, &atkUp[1], atkUp, 0LL);
          v24 += atkUp[1] & ~(atkUp[1] >> 31);
          v25 += atkUp[0] & ~(atkUp[0] >> 31);
        }
        LODWORD(v22) = selectUsrSvtIdList->max_length;
        ++v23;
      }
      while ( (__int64)v23 < (int)v22 );
      if ( v24 < 1 || UserServantEntity__isAdjustHpMax(baseData, 0LL) || v24 + v53 <= maxAjustAtk[1] )
      {
        v35 = 0;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_12407/*"STATUS_HP_OVER_DIALOG_MSG"*/, 0LL);
        *labelMsg = v28;
        sub_B0D840((BattleServantConfConponent_o *)labelMsg, (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
        v35 = 1;
      }
      if ( v25 >= 1 && !UserServantEntity__isAdjustAtkMax(baseData, 0LL) && v25 + v54 > maxAjustAtk[0] )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12406/*"STATUS_ATK_OVER_DIALOG_MSG"*/, 0LL);
        *labelMsg = v36;
        sub_B0D840((BattleServantConfConponent_o *)labelMsg, (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
        v43 = 1;
        goto LABEL_32;
      }
    }
    v43 = 0;
LABEL_32:
    if ( (v43 & v35) != 0 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12408/*"STATUS_OVER_DIALOG_MSG"*/, 0LL);
      *labelMsg = v44;
      sub_B0D840((BattleServantConfConponent_o *)labelMsg, (System_Int32_array **)v44, v45, v46, v47, v48, v49, v50);
    }
    LOBYTE(IsStatusUp) = 1;
  }
  return IsStatusUp;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__Close(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  SetRarityDialogControl_c *v8; // x8
  void *npUpConfirmInfo; // x0
  UnityEngine_GameObject_o *v10; // x0
  struct SetRarityDialogControl_StaticFields *static_fields; // x8
  TweenScale_o *v12; // x20
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Transform_o *transform; // x20
  int v28; // s0
  UnityEngine_Transform_o *v31; // x19
  UnityEngine_Vector3_o v32; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42178D2 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&SetRarityDialogControl_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_5957/*"EndCloseDlg"*/, v5);
    sub_B0D8A4(&StringLiteral_5353/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, v6);
    byte_42178D2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = SetRarityDialogControl_TypeInfo;
  if ( (BYTE3(SetRarityDialogControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetRarityDialogControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl_TypeInfo);
    v8 = SetRarityDialogControl_TypeInfo;
  }
  npUpConfirmInfo = TweenAlpha__Begin(gameObject, v8->static_fields->CLOSE_TIME, 0.0, 0LL);
  if ( !npUpConfirmInfo )
    goto LABEL_29;
  *((_DWORD *)npUpConfirmInfo + 6) = 6;
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  static_fields = SetRarityDialogControl_TypeInfo->static_fields;
  v32.fields.x = static_fields->DIALOG_CLOSE_SCALE;
  v32.fields.y = v32.fields.x;
  v32.fields.z = v32.fields.x;
  v12 = TweenScale__Begin(v10, static_fields->CLOSE_TIME, v32, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  npUpConfirmInfo = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL);
  if ( ((unsigned __int8)npUpConfirmInfo & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_29;
    v12->fields.style = 6;
    v13 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v12->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v13;
    sub_B0D840((BattleServantConfConponent_o *)&v12->fields.eventReceiver, v13, v14, v15, v16, v17, v18, v19);
    v20 = (System_Int32_array **)StringLiteral_5957/*"EndCloseDlg"*/;
    v12->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5957/*"EndCloseDlg"*/;
    sub_B0D840((BattleServantConfConponent_o *)&v12->fields.callWhenFinished, v20, v21, v22, v23, v24, v25, v26);
  }
  else
  {
    npUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !npUpConfirmInfo )
      goto LABEL_29;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)npUpConfirmInfo, 0LL);
    *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_29;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v28, 0LL);
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
    sub_B0D97C(npUpConfirmInfo);
  }
  UIGrid__RemoveAllChild((UIGrid_o *)npUpConfirmInfo, 0LL);
  v31 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__RemoveBackBtn_20924548(v31, (System_String_o *)StringLiteral_5353/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0LL);
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
    sub_B0D97C(decideBtnLb);
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
    sub_B0D97C(rariryConfirmInfo);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.onClickDlgCloseCallBack, 0LL, v2, v3, v4, v5, v6, v7);
  if ( onClickDlgCloseCallBack )
    System_Action__Invoke(onClickDlgCloseCallBack, 0LL);
}


void __fastcall SetRarityDialogControl__EndOpen(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_42178D4 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_5353/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, v3);
    byte_42178D4 = 1;
  }
  this->fields.isButtonEnable = 1;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_20833784(transform, (System_String_o *)StringLiteral_5353/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__MoveAlpha(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v8; // x20
  SetRarityDialogControl_c *v9; // x8
  UnityEngine_GameObject_o *v10; // x20
  float OPEN_TIME; // s8
  float y; // s4
  float z; // s5
  float v14; // s3
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x20
  System_String_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  TweenAlpha_o *v20; // x20
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42178D3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_SetRarityDialogControl_EndOpen__, v5);
    sub_B0D8A4(&SetRarityDialogControl_TypeInfo, v6);
    byte_42178D3 = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v8 = (UnityEngine_Transform_o *)gameObject;
  v9 = SetRarityDialogControl_TypeInfo;
  if ( (BYTE3(SetRarityDialogControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetRarityDialogControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl_TypeInfo);
    v9 = SetRarityDialogControl_TypeInfo;
  }
  if ( !v8 )
    goto LABEL_19;
  v28.fields.x = v9->static_fields->DIALOG_INITIAL_SCALE;
  v28.fields.y = v28.fields.x;
  v28.fields.z = v28.fields.x;
  UnityEngine_Transform__set_localScale(v8, v28, 0LL);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  OPEN_TIME = SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME;
  one = UnityEngine_Vector3__get_one(0LL);
  y = one.fields.y;
  z = one.fields.z;
  one.fields.y = one.fields.x;
  one.fields.z = y;
  v14 = z;
  TweenScale__Begin(v10, OPEN_TIME, *(UnityEngine_Vector3_o *)&one.fields.y, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             gameObject,
                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !gameObject )
    goto LABEL_19;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gameObject->klass[1]._1.castClass)(
    gameObject,
    gameObject->klass[1]._1.declaringType,
    0.005);
  v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SetRarityDialogControl_EndOpen__, 0LL);
  if ( !v17 )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)System_Delegate__get_Method((System_Delegate_o *)v17, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  v18 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))gameObject->klass[1]._1.castClass)(
                             gameObject,
                             gameObject->klass[1]._1.declaringType);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    v18,
    SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME,
    0LL);
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v20 = TweenAlpha__Begin(v19, SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME, 1.0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( v20 )
    {
      v20->fields.style = 6;
      v21 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v20->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v21;
      sub_B0D840((BattleServantConfConponent_o *)&v20->fields.eventReceiver, v21, v22, v23, v24, v25, v26, v27);
      return;
    }
LABEL_19:
    sub_B0D97C(gameObject);
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

  if ( (byte_42178D6 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42178D6 = 1;
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
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.onClickDlgOkCallBack, 0LL, v5, v6, v7, v8, v9, v10);
    this->fields.onClickDlgCancelCallBack = 0LL;
    sub_B0D840(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t onClickDlgOkSeKind; // w20
  const MethodInfo *v10; // x1
  CombineRootComponent_o *Instance; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x9
  __int64 v19; // x9
  __int64 v20; // x1
  __int64 v21; // x2
  CommonUI_o *v22; // x20
  SetRarityDialogControl___c_c *v23; // x8
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__166_0; // x21
  Il2CppObject *v26; // x22
  struct SetRarityDialogControl___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Action_o *onClickDlgOkCallBack; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  SetRarityDialogControl_o *v41; // x0
  const MethodInfo *v42; // x1

  if ( (byte_42178D5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&CombineRootComponent_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SetRarityDialogControl___c__OnClickDlgOk_b__166_0__, v7);
    sub_B0D8A4(&SetRarityDialogControl___c_TypeInfo, v8);
    byte_42178D5 = 1;
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
    SetRarityDialogControl__Close(this, v10);
    Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (CombineRootComponent_o *)Instance->fields.myFSM;
    if ( !Instance )
      goto LABEL_29;
    v18 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v18
      && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v18 - 1] == CombineRootComponent_TypeInfo )
    {
      if ( Instance->fields.combineTutorialProgress != 7 )
      {
LABEL_26:
        onClickDlgOkCallBack = this->fields.onClickDlgOkCallBack;
        this->fields.onClickDlgOkCallBack = 0LL;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.onClickDlgOkCallBack,
          0LL,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        this->fields.onClickDlgCancelCallBack = 0LL;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.onClickDlgCancelCallBack,
          0LL,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        if ( onClickDlgOkCallBack )
        {
          System_Action__Invoke(onClickDlgOkCallBack, 0LL);
          return;
        }
LABEL_29:
        sub_B0D97C(Instance);
      }
      Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_29;
      Instance = (CombineRootComponent_o *)Instance->fields.myFSM;
      if ( !Instance )
        goto LABEL_29;
      v19 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v19
        && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v19 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__SetTutorialProgress(Instance, 8, 0LL);
        Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v22 = (CommonUI_o *)Instance;
        v23 = SetRarityDialogControl___c_TypeInfo;
        if ( (BYTE3(SetRarityDialogControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SetRarityDialogControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo);
          v23 = SetRarityDialogControl___c_TypeInfo;
        }
        static_fields = v23->static_fields;
        _9__166_0 = static_fields->__9__166_0;
        if ( !_9__166_0 )
        {
          if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v23);
            static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
          }
          v26 = (Il2CppObject *)static_fields->__9;
          _9__166_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v20, v21);
          System_Action___ctor(_9__166_0, v26, Method_SetRarityDialogControl___c__OnClickDlgOk_b__166_0__, 0LL);
          v27 = SetRarityDialogControl___c_TypeInfo->static_fields;
          v27->__9__166_0 = _9__166_0;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v27->__9__166_0,
            (System_Int32_array **)_9__166_0,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
        }
        if ( !v22 )
          goto LABEL_29;
        CommonUI__CloseTutorialNotificationDialogArrow_17042172(v22, _9__166_0, 0LL);
        goto LABEL_26;
      }
    }
    sub_B0DC70(Instance);
    SetRarityDialogControl__OnClickCancel(v41, v42);
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
  float y; // s9
  int v43; // w20
  int v44; // w8
  float v45; // s1
  float z; // s2
  float v47; // s0
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v51; // x25
  Il2CppObject *v52; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v54; // x24
  Il2CppObject *v55; // x0
  UILabel_o *allRareMsgLb; // x21
  __int64 *v57; // x8
  UILabel_o *allRareConfirmMsgLb; // x20
  __int64 v59; // x1
  __int64 v60; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v62; // x20
  const MethodInfo *v63; // x5
  __int64 v64; // x0
  System_String_o *text; // [xsp+8h] [xbp-78h]
  bool v66; // [xsp+14h] [xbp-6Ch]
  int32_t v67; // [xsp+18h] [xbp-68h] BYREF
  int32_t v68; // [xsp+1Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42178C4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, baseData);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v16);
    sub_B0D8A4(&int_TypeInfo, v17);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v18);
    sub_B0D8A4(&Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__146_0__, v19);
    sub_B0D8A4(&StringLiteral_9294/*"NEED_QP"*/, v20);
    sub_B0D8A4(&StringLiteral_3181/*"COMBINE_HAVE_QP"*/, v21);
    sub_B0D8A4(&StringLiteral_3326/*"CONFIRM_COMBINE_MSG"*/, v22);
    sub_B0D8A4(&StringLiteral_3180/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, v23);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v24);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v25);
    sub_B0D8A4(&StringLiteral_11037/*"RARE_MATERIAL_INFO_MSG"*/, v26);
    sub_B0D8A4(&StringLiteral_3213/*"COMBINE_SPEND_QP"*/, v27);
    sub_B0D8A4(&StringLiteral_3351/*"CONFIRM_TITLE_SVT_COMBINE"*/, v28);
    byte_42178C4 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  text = statusLimitMessage;
  v66 = isExceededMaterial;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0LL);
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v30);
  SetRarityDialogControl__DefaultBgSize(this, v31);
  allTitleLb = this->fields.allTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3351/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  if ( !allTitleLb )
    goto LABEL_63;
  UILabel__set_text(allTitleLb, (System_String_o *)allDispConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_63;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_63;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v35);
  if ( !selectedList )
    goto LABEL_63;
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  LODWORD(v36) = selectedList->max_length;
  v37 = *((float *)allDispConfirmInfo + 10);
  if ( (int)v36 >= 1 )
  {
    v38 = 0LL;
    v39 = 0;
    do
    {
      if ( v39 )
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
                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v38 >= selectedList->max_length )
      {
        v64 = sub_B0D9A8(allDispConfirmInfo);
        sub_B0D948(v64, 0LL);
      }
      if ( !allDispConfirmInfo )
        goto LABEL_63;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)allDispConfirmInfo,
        v38,
        baseData,
        selectedList->m_Items[v38],
        0,
        0,
        0LL,
        0LL);
      allDispConfirmInfo = this->fields.allSvtGrid;
      v36 = *(_QWORD *)&selectedList->max_length;
      ++v38;
      v39 = allDispConfirmInfo == 0LL;
    }
    while ( (__int64)v38 < (int)v36 );
    if ( !allDispConfirmInfo )
      goto LABEL_63;
  }
  y = this->fields.center.fields.y;
  v43 = *((_DWORD *)allDispConfirmInfo + 9);
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  if ( v43 >= (int)v36 )
    v44 = v36;
  else
    v44 = v43;
  v45 = 70.0;
  if ( v43 >= (int)v36 )
    v45 = y;
  v47 = (float)(this->fields.center.fields.x - (float)((float)(v37 * 0.5) * (float)(v44 - 1))) * 0.47;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v45 - 1),
    0LL);
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  v69.fields.x = 0.47;
  v69.fields.y = 0.47;
  v69.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v69, 0LL);
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
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3213/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !allSpendQpTxtLb )
    goto LABEL_63;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3181/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !allHaveQpTxtLb )
    goto LABEL_63;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allSpendQpLb = this->fields.allSpendQpLb;
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  v68 = spendQp;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68);
  allDispConfirmInfo = System_String__Format(v51, v52, 0LL);
  if ( !allSpendQpLb )
    goto LABEL_63;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpLb = this->fields.allHaveQpLb;
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  v67 = haveQp;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
  allDispConfirmInfo = System_String__Format(v54, v55, 0LL);
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
  if ( v66 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v57 = &StringLiteral_3180/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v57 = &StringLiteral_11037/*"RARE_MATERIAL_INFO_MSG"*/;
  }
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)*v57, 0LL);
  if ( !allRareMsgLb )
    goto LABEL_63;
  UILabel__set_text(allRareMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !allRareConfirmMsgLb
    || (UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_63:
    sub_B0D97C(allDispConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v62 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v59, v60);
    System_Action___ctor(
      v62,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__146_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v62, 0LL, 0LL, v63);
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
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x21
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
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  UnityEngine_Transform_o *transform; // x0
  int v47; // s0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  UILabel_o *appendSkillSpendTxtLabel; // x21
  UILabel_o *appendSkillHaveTxtLabel; // x21
  UILabel_o *appendSkillSpendLabel; // x21
  System_String_o *v55; // x22
  Il2CppObject *v56; // x0
  UILabel_o *appendSkillHaveLabel; // x21
  System_String_o *v58; // x22
  Il2CppObject *v59; // x0
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  __int64 v62; // x1
  __int64 v63; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v65; // x20
  const MethodInfo *v66; // x5
  UnityEngine_Bounds_o v67; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Bounds_o v68; // [xsp+20h] [xbp-60h] BYREF
  int32_t haveSvtCoin; // [xsp+4Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42178C8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, updata);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___, v9);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___, v10);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v11);
    sub_B0D8A4(&int_TypeInfo, v12);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v14);
    sub_B0D8A4(&Method_SetRarityDialogControl__SetAppendSkillCombineInfo_b__150_0__, v15);
    sub_B0D8A4(&StringLiteral_9294/*"NEED_QP"*/, v16);
    sub_B0D8A4(&StringLiteral_3181/*"COMBINE_HAVE_QP"*/, v17);
    sub_B0D8A4(&StringLiteral_1717/*"APPEND_SKILL_OPEN_CONFIRM"*/, v18);
    sub_B0D8A4(&StringLiteral_1720/*"APPEND_SKILL_OPEN_SPEND_COIN"*/, v19);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v20);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v21);
    sub_B0D8A4(&StringLiteral_1718/*"APPEND_SKILL_OPEN_HAVE_COIN"*/, v22);
    sub_B0D8A4(&StringLiteral_3213/*"COMBINE_SPEND_QP"*/, v23);
    sub_B0D8A4(&StringLiteral_1708/*"APPEND_SKILL_COMBINE_CONFIRM"*/, v24);
    byte_42178C8 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)updata);
  appendSkillConfirmInfo = this->fields.appendSkillConfirmInfo;
  if ( !appendSkillConfirmInfo )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, 1, 0LL);
  appendSkillConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !appendSkillConfirmInfo )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v26);
  SetRarityDialogControl__DefaultBgSize(this, v27);
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
  v29 = ~isOpen;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, v29 & 1, 0LL);
  if ( (v29 & 1) == 0 )
  {
    if ( updata )
    {
      appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillIconComp;
      if ( appendSkillConfirmInfo )
      {
        SkillIconComponent__Set_26129364(
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
                                                                                    (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
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
                                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                                                      (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
                }
                transform = UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)ComponentInChildren_Dropdown_DropdownItem,
                              0LL);
                NGUIMath__CalculateAbsoluteWidgetBounds(&v67, transform, 0LL);
                ((void (__fastcall *)(UnityEngine_Object_o *, const char *))ComponentInChildren_Dropdown_DropdownItem->klass[1]._1.gc_desc)(
                  ComponentInChildren_Dropdown_DropdownItem,
                  ComponentInChildren_Dropdown_DropdownItem->klass[1]._1.name);
                v68 = v67;
                *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Bounds__get_center(&v68, 0LL);
                if ( Component_srcLineSprite )
                {
                  UnityEngine_BoxCollider__set_center(
                    (UnityEngine_BoxCollider_o *)Component_srcLineSprite,
                    *(UnityEngine_Vector3_o *)&v47,
                    0LL);
                  ((void (__fastcall *)(UnityEngine_Object_o *, const char *))ComponentInChildren_Dropdown_DropdownItem->klass[1]._1.gc_desc)(
                    ComponentInChildren_Dropdown_DropdownItem,
                    ComponentInChildren_Dropdown_DropdownItem->klass[1]._1.name);
                  v68 = v67;
                  size = UnityEngine_Bounds__get_size(&v68, 0LL);
                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_srcLineSprite, size, 0LL);
                  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillSpendTxtLabel;
                  if ( appendSkillConfirmInfo )
                  {
                    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
                    GameObjectExtensions__SetLocalPositionX(v50, 100.0, 0LL);
                    appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillHaveTxtLabel;
                    if ( appendSkillConfirmInfo )
                    {
                      v51 = UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)appendSkillConfirmInfo,
                              0LL);
                      GameObjectExtensions__SetLocalPositionX(v51, 100.0, 0LL);
                      appendSkillSpendTxtLabel = this->fields.appendSkillSpendTxtLabel;
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_1720/*"APPEND_SKILL_OPEN_SPEND_COIN"*/,
                                                                             0LL);
                      if ( appendSkillSpendTxtLabel )
                      {
                        UILabel__set_text(appendSkillSpendTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                        appendSkillHaveTxtLabel = this->fields.appendSkillHaveTxtLabel;
                        appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_1718/*"APPEND_SKILL_OPEN_HAVE_COIN"*/,
                                                                               0LL);
                        if ( appendSkillHaveTxtLabel )
                        {
                          UILabel__set_text(appendSkillHaveTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                          appendSkillSpendLabel = this->fields.appendSkillSpendLabel;
                          v55 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
                          LODWORD(v67.fields.m_Center.fields.x) = updata->fields.spendSvtCoin;
                          v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
                          appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v55, v56, 0LL);
                          if ( appendSkillSpendLabel )
                          {
                            UILabel__set_text(appendSkillSpendLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                            appendSkillHaveLabel = this->fields.appendSkillHaveLabel;
                            v58 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
                            haveSvtCoin = updata->fields.haveSvtCoin;
                            v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveSvtCoin);
                            appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v58, v59, 0LL);
                            if ( appendSkillHaveLabel )
                            {
                              UILabel__set_text(appendSkillHaveLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                              appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
                              v44 = &StringLiteral_1717/*"APPEND_SKILL_OPEN_CONFIRM"*/;
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
    sub_B0D97C(appendSkillConfirmInfo);
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
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)updata + 56, 0LL);
  if ( !appendSkillCurrentLvLabel )
    goto LABEL_64;
  UIExtrusionLabel__set_text(appendSkillCurrentLvLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
  appendSkillResultLvLabel = this->fields.appendSkillResultLvLabel;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)updata + 60, 0LL);
  if ( !appendSkillResultLvLabel )
    goto LABEL_64;
  UIExtrusionLabel__set_text(appendSkillResultLvLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillSpendTxtLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_64;
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v33, -5.0, 0LL);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillHaveTxtLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_64;
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v34, -5.0, 0LL);
  v35 = this->fields.appendSkillSpendTxtLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3213/*"COMBINE_SPEND_QP"*/,
                                                         0LL);
  if ( !v35 )
    goto LABEL_64;
  UILabel__set_text(v35, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v36 = this->fields.appendSkillHaveTxtLabel;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3181/*"COMBINE_HAVE_QP"*/,
                                                         0LL);
  if ( !v36 )
    goto LABEL_64;
  UILabel__set_text(v36, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v37 = this->fields.appendSkillSpendLabel;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  LODWORD(v67.fields.m_Center.fields.x) = updata->fields.spendQp;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v38, v39, 0LL);
  if ( !v37 )
    goto LABEL_64;
  UILabel__set_text(v37, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v40 = this->fields.appendSkillHaveLabel;
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  haveSvtCoin = updata->fields.haveQp;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveSvtCoin);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v41, v42, 0LL);
  if ( !v40 )
    goto LABEL_64;
  UILabel__set_text(v40, (System_String_o *)appendSkillConfirmInfo, 0LL);
  appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
  v44 = &StringLiteral_1708/*"APPEND_SKILL_COMBINE_CONFIRM"*/;
LABEL_54:
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v44, 0LL);
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
                                                         (System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/,
                                                         0LL);
  if ( !cancelBtnLb )
    goto LABEL_64;
  UILabel__set_text(cancelBtnLb, (System_String_o *)appendSkillConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/,
                                                         0LL);
  if ( !decideBtnLb )
    goto LABEL_64;
  UILabel__set_text(decideBtnLb, (System_String_o *)appendSkillConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_64;
  if ( combineRootComponent->fields.state == 14 )
  {
    v65 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v62, v63);
    System_Action___ctor(
      v65,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetAppendSkillCombineInfo_b__150_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v65, 0LL, 0LL, v66);
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
    sub_B0D97C(mPanel);
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
    v19 = sub_B0D9A8(mPanel);
    sub_B0D948(v19, 0LL);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.onClickDlgOkCallBack,
    (System_Int32_array **)callBack,
    (System_String_array **)callBack,
    (System_String_array **)cancelCallBack,
    (System_Boolean_array **)closeCallBack,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.onClickDlgCancelCallBack = cancelCallBack;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.onClickDlgCancelCallBack,
    (System_Int32_array **)cancelCallBack,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.onClickDlgCloseCallBack = closeCallBack;
  sub_B0D840(
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
  float y; // s9
  int v38; // w24
  int v39; // w9
  float z; // s2
  float v41; // s1
  float v42; // s0
  UILabel_o *normalSpendQpTxtLb; // x24
  UILabel_o *normalHaveQpTxtLb; // x24
  UILabel_o *confirmSpendQpLb; // x24
  System_String_o *v46; // x25
  Il2CppObject *v47; // x0
  UILabel_o *confirmHaveQpLb; // x23
  System_String_o *v49; // x24
  Il2CppObject *v50; // x0
  UILabel_o *confirmMsgLb; // x22
  const MethodInfo *v52; // x4
  const MethodInfo *v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v57; // x20
  const MethodInfo *v58; // x5
  __int64 v59; // x0
  int32_t v60; // [xsp+0h] [xbp-70h] BYREF
  int32_t v61; // [xsp+4h] [xbp-6Ch] BYREF
  System_String_o *labelMsg; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42178C2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, baseData);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v15);
    sub_B0D8A4(&int_TypeInfo, v16);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v17);
    sub_B0D8A4(&Method_SetRarityDialogControl__SetConfirmCombine_b__144_0__, v18);
    sub_B0D8A4(&StringLiteral_9294/*"NEED_QP"*/, v19);
    sub_B0D8A4(&StringLiteral_3181/*"COMBINE_HAVE_QP"*/, v20);
    sub_B0D8A4(&StringLiteral_3326/*"CONFIRM_COMBINE_MSG"*/, v21);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v22);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v23);
    sub_B0D8A4(&StringLiteral_3213/*"COMBINE_SPEND_QP"*/, v24);
    byte_42178C2 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v26);
  SetRarityDialogControl__DefaultBgSize(this, v27);
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
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_49;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_49;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v30);
  if ( !selectedList )
    goto LABEL_49;
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_49;
  LODWORD(v31) = selectedList->max_length;
  v32 = *((float *)normalConfirmInfo + 10);
  if ( (int)v31 >= 1 )
  {
    v33 = 0LL;
    v34 = 0;
    do
    {
      if ( v34 )
        goto LABEL_49;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
      normalConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !normalConfirmInfo )
        goto LABEL_49;
      normalConfirmInfo = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            (UnityEngine_GameObject_o *)normalConfirmInfo,
                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v33 >= selectedList->max_length )
      {
        v59 = sub_B0D9A8(normalConfirmInfo);
        sub_B0D948(v59, 0LL);
      }
      if ( !normalConfirmInfo )
        goto LABEL_49;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)normalConfirmInfo,
        v33,
        baseData,
        selectedList->m_Items[v33],
        0,
        0,
        0LL,
        0LL);
      normalConfirmInfo = this->fields.materialSvtGrid;
      v31 = *(_QWORD *)&selectedList->max_length;
      ++v33;
      v34 = normalConfirmInfo == 0LL;
    }
    while ( (__int64)v33 < (int)v31 );
    if ( !normalConfirmInfo )
      goto LABEL_49;
  }
  y = this->fields.center.fields.y;
  v38 = *((_DWORD *)normalConfirmInfo + 9);
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_49;
  v39 = v38 >= (int)v31 ? v31 : v38;
  v41 = v38 >= (int)v31 ? y : 55.0;
  v42 = (float)(this->fields.center.fields.x - (float)((float)(v32 * 0.5) * (float)(v39 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v41 - 1),
    0LL);
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_49;
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_49;
  v63.fields.x = 0.5;
  v63.fields.y = 0.5;
  v63.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v63, 0LL);
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
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3213/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !normalSpendQpTxtLb )
    goto LABEL_49;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3181/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !normalHaveQpTxtLb )
    goto LABEL_49;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  v61 = spendQp;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
  normalConfirmInfo = System_String__Format(v46, v47, 0LL);
  if ( !confirmSpendQpLb )
    goto LABEL_49;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  v60 = haveQp;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
  normalConfirmInfo = System_String__Format(v49, v50, 0LL);
  if ( !confirmHaveQpLb )
    goto LABEL_49;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"CONFIRM_COMBINE_MSG"*/, 0LL);
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
  if ( !SetRarityDialogControl__CheckStatusUpInfo(this, baseData, selectedList, &labelMsg, v52) )
    goto LABEL_45;
  WrapControlText__textAdjust(this->fields.statusUpInfoLb, labelMsg, 22, 0, 0, 0LL);
  normalConfirmInfo = this->fields.statusUpInfoLb;
  if ( !normalConfirmInfo
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0LL)) == 0LL )
  {
LABEL_49:
    sub_B0D97C(normalConfirmInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 1, 0LL);
LABEL_45:
  SetRarityDialogControl__CheckExceedSvt(this, selectedList, v53);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_49;
  if ( combineRootComponent->fields.state == 3 )
  {
    v57 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v54, v55);
    System_Action___ctor(v57, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmCombine_b__144_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v57, 0LL, 0LL, v58);
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
  int32_t v38; // [xsp+8h] [xbp-48h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42178CF & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, cosName);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_9294/*"NEED_QP"*/, v14);
    sub_B0D8A4(&StringLiteral_3343/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v15);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v16);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v17);
    sub_B0D8A4(&StringLiteral_3413/*"COSTUME_NEED_QP_TEXT"*/, v18);
    sub_B0D8A4(&StringLiteral_3410/*"COSTUME_CONFIRM_MSG"*/, v19);
    sub_B0D8A4(&StringLiteral_3412/*"COSTUME_HAVE_QP_TEXT"*/, v20);
    byte_42178CF = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v22);
  SetRarityDialogControl__DefaultBgSize(this, v23);
  costumeTitleLb = this->fields.costumeTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3343/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !costumeTitleLb )
    goto LABEL_21;
  UILabel__set_text(costumeTitleLb, (System_String_o *)costumeConfirmInfo, 0LL);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)this->fields.costumeNameLb;
  if ( !costumeConfirmInfo )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)costumeConfirmInfo, cosName, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_21;
  UILabel__set_text(cancelBtnLb, (System_String_o *)costumeConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_21;
  UILabel__set_text(decideBtnLb, (System_String_o *)costumeConfirmInfo, 0LL);
  needQpCostumeTextLb = this->fields.needQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3413/*"COSTUME_NEED_QP_TEXT"*/, 0LL);
  if ( !needQpCostumeTextLb )
    goto LABEL_21;
  UILabel__set_text(needQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0LL);
  needQpCostumeLb = this->fields.needQpCostumeLb;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  v39 = needQp;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v29, v30, 0LL);
  if ( !needQpCostumeLb )
    goto LABEL_21;
  UILabel__set_text(needQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0LL);
  haveQpCostumeTextLb = this->fields.haveQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3412/*"COSTUME_HAVE_QP_TEXT"*/, 0LL);
  if ( !haveQpCostumeTextLb )
    goto LABEL_21;
  UILabel__set_text(haveQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0LL);
  haveQpCostumeLb = this->fields.haveQpCostumeLb;
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  v38 = haveQp;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v33, v34, 0LL);
  if ( !haveQpCostumeLb
    || (UILabel__set_text(haveQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0LL),
        costumeInfoLb = this->fields.costumeInfoLb,
        costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3410/*"COSTUME_CONFIRM_MSG"*/,
                                                           0LL),
        !costumeInfoLb)
    || (UILabel__set_text(costumeInfoLb, (System_String_o *)costumeConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_21:
    sub_B0D97C(costumeConfirmInfo);
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

  if ( (byte_42178CE & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___, eventCombineCostumeEnt);
    byte_42178CE = 1;
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
                                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___)) == 0LL
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
    sub_B0D97C(costumeEventItemConfirmInfo);
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

  if ( (byte_42178CD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, combineCostumeEnt);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___, v15);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    sub_B0D8A4(&Method_SetRarityDialogControl_DefaultBgSize__, v17);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v18);
    byte_42178CD = 1;
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
                                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___);
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
  SetRarityDialogControl__MoveAlpha(this, v20);
  SetRarityDialogControl__DefaultBgSize(this, v21);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/,
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
    sub_B0D97C(costumeEventItemOrNeedItemConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 8 )
  {
    v27 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25);
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
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  System_Int64_array *v19; // x2
  const MethodInfo *v20; // x7
  WebViewManager_o *Instance; // x0
  __int64 v22; // x9
  __int64 v23; // x9
  SetRarityDialogControl_o *v24; // x0
  System_Int64_array *v25; // x1
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // [xsp+0h] [xbp-50h]
  System_String_o *labelMsg; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42178BF & 1) == 0 )
  {
    sub_B0D8A4(&CombineRootComponent_TypeInfo, baseData);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v17);
    byte_42178BF = 1;
  }
  labelMsg = 0LL;
  SetRarityDialogControl__CheckExceedSvt(this, selectedList, (const MethodInfo *)list);
  this->fields.isStatusUp = isStatusUp;
  if ( SetRarityDialogControl__CheckStatusUpInfo(this, baseData, selectedList, &labelMsg, v18) && isStatusUp )
    SetRarityDialogControl__SetAllDispConfirmCombine(
      this,
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
      this,
      baseData,
      selectedList,
      msg,
      spendQp,
      haveQp,
      isExceededMaterial,
      v20);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (WebViewManager_o *)Instance->fields.basePanel) == 0LL )
LABEL_18:
    sub_B0D97C(Instance);
  v23 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v23
    || (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v23 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_19:
    sub_B0DC70(Instance);
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
  System_Action_o *v40; // x21
  const MethodInfo *v41; // x5
  int32_t v42; // w1
  SetRarityDialogControl_o *v43; // x0
  int32_t v44; // [xsp+8h] [xbp-48h] BYREF
  int32_t v45; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42178CA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, baseData);
    sub_B0D8A4(&int_TypeInfo, v12);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__152_0__, v14);
    sub_B0D8A4(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__152_1__, v15);
    sub_B0D8A4(&StringLiteral_9294/*"NEED_QP"*/, v16);
    sub_B0D8A4(&StringLiteral_3331/*"CONFIRM_EXCEED_COMBINE"*/, v17);
    sub_B0D8A4(&StringLiteral_3181/*"COMBINE_HAVE_QP"*/, v18);
    sub_B0D8A4(&StringLiteral_8481/*"LVEXCEED_COMBINE_SPEND_QP"*/, v19);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v20);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v21);
    byte_42178CA = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v23);
  SetRarityDialogControl__DefaultBgSize(this, v24);
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
                                                            (System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/,
                                                            0LL);
  if ( !cancelBtnLb )
    goto LABEL_37;
  UILabel__set_text(cancelBtnLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/,
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
                                                              (System_String_o *)StringLiteral_8481/*"LVEXCEED_COMBINE_SPEND_QP"*/,
                                                              0LL);
    if ( lvExceedSpendQpTxtLb )
    {
      UILabel__set_text(lvExceedSpendQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
      lvExceedHaveQpTxtLb = this->fields.lvExceedHaveQpTxtLb;
      lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_3181/*"COMBINE_HAVE_QP"*/,
                                                                0LL);
      if ( lvExceedHaveQpTxtLb )
      {
        UILabel__set_text(lvExceedHaveQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
        lvExceedSpendQpLb = this->fields.lvExceedSpendQpLb;
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
        v45 = spendQp;
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
        lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)System_String__Format(v31, v32, 0LL);
        if ( lvExceedSpendQpLb )
        {
          UILabel__set_text(lvExceedSpendQpLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
          lvExceedHaveQpLb = this->fields.lvExceedHaveQpLb;
          v34 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
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
                  goto LABEL_30;
              }
            }
          }
        }
      }
    }
LABEL_37:
    sub_B0D97C(lvExceedConfirmSimpleInfo);
  }
  lvExceedInfoLb = this->fields.lvExceedInfoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3331/*"CONFIRM_EXCEED_COMBINE"*/,
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
    v39 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v36, v37);
    v40 = v39;
    if ( isCheck )
    {
      System_Action___ctor(v39, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmLvExceed_b__152_0__, 0LL);
      v42 = 8;
      v43 = this;
    }
    else
    {
      System_Action___ctor(v39, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmLvExceed_b__152_1__, 0LL);
      v43 = this;
      v42 = 0;
    }
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v43, v42, v40, 0LL, 0LL, v41);
  }
}


void __fastcall SetRarityDialogControl__SetConfirmLvExceed_30068208(
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
  int32_t size; // w8
  unsigned __int64 v43; // x23
  signed __int64 v44; // x24
  UnityEngine_GameObject_o *v45; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  System_Action_o *v49; // x20
  const MethodInfo *v50; // x5
  __int64 v51; // x0
  int32_t v52; // [xsp+8h] [xbp-58h] BYREF
  int32_t v53; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_42178CB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, itemObjList);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v11);
    sub_B0D8A4(&int_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v15);
    sub_B0D8A4(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__153_0__, v16);
    sub_B0D8A4(&StringLiteral_9294/*"NEED_QP"*/, v17);
    sub_B0D8A4(&StringLiteral_3344/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, v18);
    sub_B0D8A4(&StringLiteral_3181/*"COMBINE_HAVE_QP"*/, v19);
    sub_B0D8A4(&StringLiteral_8480/*"LVEXCEED_COMBINE_SPEND_ITEM"*/, v20);
    sub_B0D8A4(&StringLiteral_8481/*"LVEXCEED_COMBINE_SPEND_QP"*/, v21);
    sub_B0D8A4(&StringLiteral_8482/*"LVEXCEED_EXE_CONFIRM"*/, v22);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v23);
    this = (SetRarityDialogControl_o *)sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v24);
    byte_42178CB = 1;
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
    SetRarityDialogControl__MoveAlpha(v10, v26);
    SetRarityDialogControl__DefaultBgSize(v10, v27);
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
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelBtnLb )
      goto LABEL_35;
    UILabel__set_text(cancelBtnLb, (System_String_o *)this, 0LL);
    decideBtnLb = v10->fields.decideBtnLb;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideBtnLb )
      goto LABEL_35;
    UILabel__set_text(decideBtnLb, (System_String_o *)this, 0LL);
    lvExceedTitleLabel = v10->fields.lvExceedTitleLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3344/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
    if ( !lvExceedTitleLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedTitleLabel, (System_String_o *)this, 0LL);
    lvExceedSpendItemLabel = v10->fields.lvExceedSpendItemLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8480/*"LVEXCEED_COMBINE_SPEND_ITEM"*/, 0LL);
    if ( !lvExceedSpendItemLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedSpendItemLabel, (System_String_o *)this, 0LL);
    lvExceedSpendQpTxtLabel = v10->fields.lvExceedSpendQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8481/*"LVEXCEED_COMBINE_SPEND_QP"*/, 0LL);
    if ( !lvExceedSpendQpTxtLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedSpendQpTxtLabel, (System_String_o *)this, 0LL);
    lvExceedHaveQpTxtLabel = v10->fields.lvExceedHaveQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3181/*"COMBINE_HAVE_QP"*/, 0LL);
    if ( !lvExceedHaveQpTxtLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedHaveQpTxtLabel, (System_String_o *)this, 0LL);
    lvExceedSpendQpLabel = v10->fields.lvExceedSpendQpLabel;
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
    v53 = spendQp;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
    this = (SetRarityDialogControl_o *)System_String__Format(v36, v37, 0LL);
    if ( !lvExceedSpendQpLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedSpendQpLabel, (System_String_o *)this, 0LL);
    lvExceedHaveQpLabel = v10->fields.lvExceedHaveQpLabel;
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
    v52 = haveQp;
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
    this = (SetRarityDialogControl_o *)System_String__Format(v39, v40, 0LL);
    if ( !lvExceedHaveQpLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedHaveQpLabel, (System_String_o *)this, 0LL);
    lvExceedConfirmLabel = v10->fields.lvExceedConfirmLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8482/*"LVEXCEED_EXE_CONFIRM"*/, 0LL);
    if ( !lvExceedConfirmLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedConfirmLabel, (System_String_o *)this, 0LL);
    if ( !itemObjList )
      goto LABEL_35;
    size = itemObjList->fields._size;
    if ( size >= 1 )
    {
      v43 = 0LL;
      v44 = size;
      while ( 1 )
      {
        if ( v43 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        this = (SetRarityDialogControl_o *)v10->fields.lvExceedConsumeItemGrid;
        if ( !this )
          break;
        v45 = itemObjList->fields._items->m_Items[v43];
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        this = (SetRarityDialogControl_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v10,
                                             v45,
                                             transform,
                                             0LL,
                                             0LL);
        if ( !this )
          break;
        this = (SetRarityDialogControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
        if ( !itemList )
          break;
        if ( v43 >= itemList->max_length )
        {
          v51 = sub_B0D9A8(this);
          sub_B0D948(v51, 0LL);
        }
        if ( !this )
          break;
        LimitCntUpItemComponent__SetItemEntity((LimitCntUpItemComponent_o *)this, itemList->m_Items[++v43], 0LL);
        if ( (__int64)v43 >= v44 )
          goto LABEL_32;
        size = itemObjList->fields._size;
      }
LABEL_35:
      sub_B0D97C(this);
    }
LABEL_32:
    this = (SetRarityDialogControl_o *)v10->fields.lvExceedConsumeItemGrid;
    if ( !this )
      goto LABEL_35;
    ((void (__fastcall *)(SetRarityDialogControl_o *, Il2CppClass *))this->klass[1]._1.castClass)(
      this,
      this->klass[1]._1.declaringType);
    v49 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v47, v48);
    System_Action___ctor(v49, (Il2CppObject *)v10, Method_SetRarityDialogControl__SetConfirmLvExceed_b__153_0__, 0LL);
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
  float y; // s9
  int v40; // w20
  int v41; // w9
  float z; // s2
  float v43; // s1
  float v44; // s0
  UILabel_o *spendQpTxtLb; // x23
  UILabel_o *haveQpTxtLb; // x23
  UILabel_o *spendQpLb; // x23
  System_String_o *v48; // x24
  Il2CppObject *v49; // x0
  UILabel_o *haveQpLb; // x22
  System_String_o *v51; // x23
  Il2CppObject *v52; // x0
  UILabel_o *rareMaterialMsgLb; // x21
  __int64 *v54; // x8
  UILabel_o *rareConfirmMsgLb; // x20
  __int64 v56; // x1
  __int64 v57; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v59; // x20
  const MethodInfo *v60; // x5
  __int64 v61; // x0
  int32_t v62; // [xsp+8h] [xbp-68h] BYREF
  int32_t v63; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42178C0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, baseData);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v15);
    sub_B0D8A4(&int_TypeInfo, v16);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v17);
    sub_B0D8A4(&Method_SetRarityDialogControl__SetConfirmRarityInfo_b__142_0__, v18);
    sub_B0D8A4(&StringLiteral_9294/*"NEED_QP"*/, v19);
    sub_B0D8A4(&StringLiteral_3181/*"COMBINE_HAVE_QP"*/, v20);
    sub_B0D8A4(&StringLiteral_3326/*"CONFIRM_COMBINE_MSG"*/, v21);
    sub_B0D8A4(&StringLiteral_3180/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, v22);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v23);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v24);
    sub_B0D8A4(&StringLiteral_11037/*"RARE_MATERIAL_INFO_MSG"*/, v25);
    sub_B0D8A4(&StringLiteral_3213/*"COMBINE_SPEND_QP"*/, v26);
    byte_42178C0 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v28);
  SetRarityDialogControl__DefaultBgSize(this, v29);
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
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_56;
  UILabel__set_text(cancelBtnLb, (System_String_o *)rariryConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_56;
  UILabel__set_text(decideBtnLb, (System_String_o *)rariryConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v32);
  if ( !list )
    goto LABEL_56;
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_56;
  LODWORD(v33) = list->max_length;
  v34 = *((float *)rariryConfirmInfo + 10);
  if ( (int)v33 >= 1 )
  {
    v35 = 0LL;
    v36 = 0;
    do
    {
      if ( v36 )
        goto LABEL_56;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
      rariryConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !rariryConfirmInfo )
        goto LABEL_56;
      rariryConfirmInfo = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            (UnityEngine_GameObject_o *)rariryConfirmInfo,
                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v35 >= list->max_length )
      {
        v61 = sub_B0D9A8(rariryConfirmInfo);
        sub_B0D948(v61, 0LL);
      }
      if ( !rariryConfirmInfo )
        goto LABEL_56;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)rariryConfirmInfo,
        v35,
        baseData,
        list->m_Items[v35],
        0,
        0,
        0LL,
        0LL);
      rariryConfirmInfo = this->fields.raritySvtGrid;
      v33 = *(_QWORD *)&list->max_length;
      ++v35;
      v36 = rariryConfirmInfo == 0LL;
    }
    while ( (__int64)v35 < (int)v33 );
    if ( !rariryConfirmInfo )
      goto LABEL_56;
  }
  y = this->fields.center.fields.y;
  v40 = *((_DWORD *)rariryConfirmInfo + 9);
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
  if ( !rariryConfirmInfo )
    goto LABEL_56;
  v41 = v40 >= (int)v33 ? v33 : v40;
  v43 = v40 >= (int)v33 ? y : 55.0;
  v44 = (float)(this->fields.center.fields.x - (float)((float)(v34 * 0.5) * (float)(v41 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)rariryConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v43 - 1),
    0LL);
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_56;
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
  if ( !rariryConfirmInfo )
    goto LABEL_56;
  v64.fields.x = 0.5;
  v64.fields.y = 0.5;
  v64.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rariryConfirmInfo, v64, 0LL);
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
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3213/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !spendQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(spendQpTxtLb, (System_String_o *)rariryConfirmInfo, 0LL);
  haveQpTxtLb = this->fields.haveQpTxtLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3181/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !haveQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(haveQpTxtLb, (System_String_o *)rariryConfirmInfo, 0LL);
  spendQpLb = this->fields.spendQpLb;
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  v63 = spendQp;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63);
  rariryConfirmInfo = System_String__Format(v48, v49, 0LL);
  if ( !spendQpLb )
    goto LABEL_56;
  UILabel__set_text(spendQpLb, (System_String_o *)rariryConfirmInfo, 0LL);
  haveQpLb = this->fields.haveQpLb;
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  v62 = haveQp;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
  rariryConfirmInfo = System_String__Format(v51, v52, 0LL);
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
    v54 = &StringLiteral_3180/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v54 = &StringLiteral_11037/*"RARE_MATERIAL_INFO_MSG"*/;
  }
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)*v54, 0LL);
  if ( !rareMaterialMsgLb )
    goto LABEL_56;
  UILabel__set_text(rareMaterialMsgLb, (System_String_o *)rariryConfirmInfo, 0LL);
  rareConfirmMsgLb = this->fields.rareConfirmMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !rareConfirmMsgLb
    || (UILabel__set_text(rareConfirmMsgLb, (System_String_o *)rariryConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_56:
    sub_B0D97C(rariryConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v59 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v56, v57);
    System_Action___ctor(v59, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmRarityInfo_b__142_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v59, 0LL, 0LL, v60);
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
  float v38; // s9
  int32_t v39; // w24
  UnityEngine_Component_o *v40; // x0
  Il2CppObject *key; // x25
  char value; // w27
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  MaterialSvtInfo_o *Component_srcLineSprite; // x0
  float y; // s10
  int32_t Count; // w23
  struct UIGrid_o *v49; // x8
  float cellWidth; // w20
  int v51; // w22
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
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v71; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v72; // [xsp+40h] [xbp-A0h] BYREF
  int32_t v73; // [xsp+78h] [xbp-68h]
  int32_t v74; // [xsp+7Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42178C3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, baseData);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__, v18);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v19);
    sub_B0D8A4(&int_TypeInfo, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__, v22);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v23);
    sub_B0D8A4(&Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__145_0__, v24);
    sub_B0D8A4(&StringLiteral_9294/*"NEED_QP"*/, v25);
    sub_B0D8A4(&StringLiteral_3181/*"COMBINE_HAVE_QP"*/, v26);
    sub_B0D8A4(&StringLiteral_3326/*"CONFIRM_COMBINE_MSG"*/, v27);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v28);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v29);
    sub_B0D8A4(&StringLiteral_3213/*"COMBINE_SPEND_QP"*/, v30);
    byte_42178C3 = 1;
  }
  memset(&v72, 0, sizeof(v72));
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
  SetRarityDialogControl__MoveAlpha(this, v32);
  SetRarityDialogControl__DefaultBgSize(this, v33);
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
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_46;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_46;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v36);
  if ( !selectedList )
    goto LABEL_46;
  v73 = haveQp;
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_2EAE1A0 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  materialSvtGrid = this->fields.materialSvtGrid;
  if ( !materialSvtGrid )
    goto LABEL_46;
  v38 = materialSvtGrid->fields.cellHeight * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v71,
    selectedList,
    (const MethodInfo_2EAEB48 *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v72 = v71;
  v39 = 0;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v72,
            (const MethodInfo_281742C *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v40 = (UnityEngine_Component_o *)this->fields.materialSvtGrid;
    if ( !v40 )
      sub_B0D97C(0LL);
    key = v72.fields.current.fields.key;
    value = (char)v72.fields.current.fields.value;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v40, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Object )
      sub_B0D97C(0LL);
    Component_srcLineSprite = (MaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     Object,
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_srcLineSprite )
      sub_B0D97C(0LL);
    MaterialSvtInfo__setMaterialSvtInfo_25310496(
      Component_srcLineSprite,
      v39++,
      baseData,
      (int64_t)key,
      0,
      0,
      value != 0,
      0LL,
      0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v72,
    (const MethodInfo_2817590 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_2EAE1A0 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_2EAE1A0 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v49 = this->fields.materialSvtGrid;
  if ( !v49 )
    goto LABEL_46;
  cellWidth = v49->fields.cellWidth;
  v51 = (int)normalConfirmInfo;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.materialSvtGrid,
                                                    0LL);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  if ( v51 <= SLODWORD(cellWidth) )
    v52 = Count;
  else
    v52 = LODWORD(cellWidth);
  v53 = 55.0;
  if ( v51 <= SLODWORD(cellWidth) )
    v53 = y;
  v55 = (float)(this->fields.center.fields.x - (float)(v38 * (float)(v52 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v53 - 1),
    0LL);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)normalConfirmInfo,
                                                    0LL);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  v75.fields.x = 0.5;
  v75.fields.y = 0.5;
  v75.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v75, 0LL);
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
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3213/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !normalSpendQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3181/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !normalHaveQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  LODWORD(v71.fields.dictionary) = spendQp;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v59, v60, 0LL);
  if ( !confirmSpendQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  v74 = v73;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v62, v63, 0LL);
  if ( !confirmHaveQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !confirmMsgLb
    || (UILabel__set_text(confirmMsgLb, (System_String_o *)normalConfirmInfo, 0LL),
        (normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(normalConfirmInfo, 0, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_46:
    sub_B0D97C(normalConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 4 )
  {
    v68 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v65, v66);
    System_Action___ctor(
      v68,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__145_0__,
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
  float y; // s9
  int v37; // w22
  int v38; // w9
  float z; // s2
  float v40; // s1
  float v41; // s0
  UILabel_o *exceedConfirmSpendQpTxtLb; // x22
  UILabel_o *exceedConfirmHaveQpTxtLb; // x22
  UILabel_o *exceedConfirmSpendQpLb; // x22
  System_String_o *v45; // x23
  Il2CppObject *v46; // x0
  UILabel_o *exceedConfirmHaveQpLb; // x21
  System_String_o *v48; // x22
  Il2CppObject *v49; // x0
  UILabel_o *exceedMaterialMsgLb; // x20
  UILabel_o *exceedConfirmMsgLb; // x20
  __int64 v52; // x1
  __int64 v53; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v55; // x20
  const MethodInfo *v56; // x5
  __int64 v57; // x0
  int32_t v58; // [xsp+8h] [xbp-68h] BYREF
  int32_t v59; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42178C1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, baseData);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v13);
    sub_B0D8A4(&int_TypeInfo, v14);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v15);
    sub_B0D8A4(&Method_SetRarityDialogControl__SetExceedMaterialInfo_b__143_0__, v16);
    sub_B0D8A4(&StringLiteral_9294/*"NEED_QP"*/, v17);
    sub_B0D8A4(&StringLiteral_3181/*"COMBINE_HAVE_QP"*/, v18);
    sub_B0D8A4(&StringLiteral_3326/*"CONFIRM_COMBINE_MSG"*/, v19);
    sub_B0D8A4(&StringLiteral_3180/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, v20);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v21);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v22);
    sub_B0D8A4(&StringLiteral_3213/*"COMBINE_SPEND_QP"*/, v23);
    byte_42178C1 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v25);
  SetRarityDialogControl__DefaultBgSize(this, v26);
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
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_44;
  UILabel__set_text(cancelBtnLb, (System_String_o *)exceedConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_44;
  UILabel__set_text(decideBtnLb, (System_String_o *)exceedConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v29);
  if ( !list )
    goto LABEL_44;
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_44;
  LODWORD(v30) = list->max_length;
  v31 = *((float *)exceedConfirmInfo + 10);
  if ( (int)v30 >= 1 )
  {
    v32 = 0LL;
    v33 = 0;
    do
    {
      if ( v33 )
        goto LABEL_44;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
      exceedConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !exceedConfirmInfo )
        goto LABEL_44;
      exceedConfirmInfo = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            (UnityEngine_GameObject_o *)exceedConfirmInfo,
                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v32 >= list->max_length )
      {
        v57 = sub_B0D9A8(exceedConfirmInfo);
        sub_B0D948(v57, 0LL);
      }
      if ( !exceedConfirmInfo )
        goto LABEL_44;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)exceedConfirmInfo,
        v32,
        baseData,
        list->m_Items[v32],
        0,
        0,
        0LL,
        0LL);
      exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
      v30 = *(_QWORD *)&list->max_length;
      ++v32;
      v33 = exceedConfirmInfo == 0LL;
    }
    while ( (__int64)v32 < (int)v30 );
    if ( !exceedConfirmInfo )
      goto LABEL_44;
  }
  y = this->fields.center.fields.y;
  v37 = *((_DWORD *)exceedConfirmInfo + 9);
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
  if ( !exceedConfirmInfo )
    goto LABEL_44;
  v38 = v37 >= (int)v30 ? v30 : v37;
  v40 = v37 >= (int)v30 ? y : 55.0;
  v41 = (float)(this->fields.center.fields.x - (float)((float)(v31 * 0.5) * (float)(v38 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)exceedConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v40 - 1),
    0LL);
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_44;
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
  if ( !exceedConfirmInfo )
    goto LABEL_44;
  v60.fields.x = 0.5;
  v60.fields.y = 0.5;
  v60.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)exceedConfirmInfo, v60, 0LL);
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
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3213/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !exceedConfirmSpendQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(exceedConfirmSpendQpTxtLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmHaveQpTxtLb = this->fields.exceedConfirmHaveQpTxtLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3181/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !exceedConfirmHaveQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(exceedConfirmHaveQpTxtLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmSpendQpLb = this->fields.exceedConfirmSpendQpLb;
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  v59 = spendQp;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
  exceedConfirmInfo = System_String__Format(v45, v46, 0LL);
  if ( !exceedConfirmSpendQpLb )
    goto LABEL_44;
  UILabel__set_text(exceedConfirmSpendQpLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmHaveQpLb = this->fields.exceedConfirmHaveQpLb;
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  v58 = haveQp;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v58);
  exceedConfirmInfo = System_String__Format(v48, v49, 0LL);
  if ( !exceedConfirmHaveQpLb )
    goto LABEL_44;
  UILabel__set_text(exceedConfirmHaveQpLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedMaterialMsgLb = this->fields.exceedMaterialMsgLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3180/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, 0LL);
  if ( !exceedMaterialMsgLb
    || (UILabel__set_text(exceedMaterialMsgLb, (System_String_o *)exceedConfirmInfo, 0LL),
        exceedConfirmMsgLb = this->fields.exceedConfirmMsgLb,
        exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"CONFIRM_COMBINE_MSG"*/, 0LL),
        !exceedConfirmMsgLb)
    || (UILabel__set_text(exceedConfirmMsgLb, (System_String_o *)exceedConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_44:
    sub_B0D97C(exceedConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v55 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v52, v53);
    System_Action___ctor(
      v55,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetExceedMaterialInfo_b__143_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 0, v55, 0LL, 0LL, v56);
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
  int32_t v37; // [xsp+8h] [xbp-38h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42178D0 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, msg);
    sub_B0D8A4(&int_TypeInfo, v9);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__158_0__, v11);
    sub_B0D8A4(&StringLiteral_9294/*"NEED_QP"*/, v12);
    sub_B0D8A4(&StringLiteral_3181/*"COMBINE_HAVE_QP"*/, v13);
    sub_B0D8A4(&StringLiteral_6470/*"FRIENDSHIP_EXCEED_SPEND_QP"*/, v14);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v15);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v16);
    sub_B0D8A4(&StringLiteral_3334/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/, v17);
    byte_42178D0 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v19);
  SetRarityDialogControl__DefaultBgSize(this, v20);
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
                                                              (System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0LL);
  if ( !cancelBtnLb )
    goto LABEL_22;
  UILabel__set_text(cancelBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0LL);
  if ( !decideBtnLb )
    goto LABEL_22;
  UILabel__set_text(decideBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedSpendQpTxtLb = this->fields.friendshipExceedSpendQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_6470/*"FRIENDSHIP_EXCEED_SPEND_QP"*/,
                                                              0LL);
  if ( !friendshipExceedSpendQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(friendshipExceedSpendQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedHaveQpTxtLb = this->fields.friendshipExceedHaveQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3181/*"COMBINE_HAVE_QP"*/,
                                                              0LL);
  if ( !friendshipExceedHaveQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(friendshipExceedHaveQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedSpendQpLb = this->fields.friendshipExceedSpendQpLb;
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  v38 = spendQp;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v26, v27, 0LL);
  if ( !friendshipExceedSpendQpLb )
    goto LABEL_22;
  UILabel__set_text(friendshipExceedSpendQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedHaveQpLb = this->fields.friendshipExceedHaveQpLb;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  v37 = haveQp;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v29, v30, 0LL);
  if ( !friendshipExceedHaveQpLb )
    goto LABEL_22;
  UILabel__set_text(friendshipExceedHaveQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedMsgLb = this->fields.friendshipExceedMsgLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3334/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/,
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
    sub_B0D97C(friendshipExceedConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 12 )
  {
    v35 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v32, v33);
    System_Action___ctor(
      v35,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__158_0__,
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
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  UILabel_o *cancelBtnLb; // x23
  UILabel_o *decideBtnLb; // x23
  UILabel_o *limitUpConfirmSpendQpTxtLb; // x23
  UILabel_o *limitUpConfirmHaveQpTxtLb; // x23
  UILabel_o *limitUpConfirmSpendQpLb; // x23
  System_String_o *v51; // x24
  Il2CppObject *v52; // x0
  UILabel_o *limitUpConfirmHaveQpLb; // x22
  System_String_o *v54; // x23
  Il2CppObject *v55; // x0
  UILabel_o *limitUpConfirmMsgLb; // x21
  __int64 v57; // x1
  __int64 v58; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v60; // x21
  const MethodInfo *v61; // x5
  int32_t v62; // [xsp+8h] [xbp-48h] BYREF
  int32_t v63; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42178C6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, baseData);
    sub_B0D8A4(&int_TypeInfo, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&Method_SetRarityDialogControl___c__DisplayClass148_0__SetLimitUpInfo_b__0__, v15);
    sub_B0D8A4(&SetRarityDialogControl___c__DisplayClass148_0_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_9294/*"NEED_QP"*/, v17);
    sub_B0D8A4(&StringLiteral_3181/*"COMBINE_HAVE_QP"*/, v18);
    sub_B0D8A4(&StringLiteral_3326/*"CONFIRM_COMBINE_MSG"*/, v19);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v20);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v21);
    sub_B0D8A4(&StringLiteral_3213/*"COMBINE_SPEND_QP"*/, v22);
    byte_42178C6 = 1;
  }
  v23 = sub_B0D974(SetRarityDialogControl___c__DisplayClass148_0_TypeInfo, baseData, combineLimitUpWarningDialog);
  SetRarityDialogControl___c__DisplayClass148_0___ctor((SetRarityDialogControl___c__DisplayClass148_0_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_23;
  *(_QWORD *)(v23 + 16) = baseData;
  sub_B0D840((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)baseData, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v23 + 24) = combineLimitUpWarningDialog;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v23 + 24),
    (System_Int32_array **)combineLimitUpWarningDialog,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  *(_QWORD *)(v23 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v23 + 32), (System_Int32_array **)this, v37, v38, v39, v40, v41, v42);
  SetRarityDialogControl__DisableConfirmInfo(this, v43);
  limitUpConfirmInfo = this->fields.limitUpConfirmInfo;
  if ( !limitUpConfirmInfo )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0LL);
  limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !limitUpConfirmInfo )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v44);
  SetRarityDialogControl__DefaultBgSize(this, v45);
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
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_23;
  UILabel__set_text(cancelBtnLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_23;
  UILabel__set_text(decideBtnLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmSpendQpTxtLb = this->fields.limitUpConfirmSpendQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3213/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !limitUpConfirmSpendQpTxtLb )
    goto LABEL_23;
  UILabel__set_text(limitUpConfirmSpendQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmHaveQpTxtLb = this->fields.limitUpConfirmHaveQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3181/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !limitUpConfirmHaveQpTxtLb )
    goto LABEL_23;
  UILabel__set_text(limitUpConfirmHaveQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmSpendQpLb = this->fields.limitUpConfirmSpendQpLb;
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  v63 = spendQp;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v51, v52, 0LL);
  if ( !limitUpConfirmSpendQpLb )
    goto LABEL_23;
  UILabel__set_text(limitUpConfirmSpendQpLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmHaveQpLb = this->fields.limitUpConfirmHaveQpLb;
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  v62 = haveQp;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v54, v55, 0LL);
  if ( !limitUpConfirmHaveQpLb )
    goto LABEL_23;
  UILabel__set_text(limitUpConfirmHaveQpLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmMsgLb = this->fields.limitUpConfirmMsgLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !limitUpConfirmMsgLb
    || (UILabel__set_text(limitUpConfirmMsgLb, (System_String_o *)limitUpConfirmInfo, 0LL),
        (limitUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)limitUpConfirmInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 0, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_23:
    sub_B0D97C(limitUpConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 5 )
  {
    v60 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v57, v58);
    System_Action___ctor(
      v60,
      (Il2CppObject *)v23,
      Method_SetRarityDialogControl___c__DisplayClass148_0__SetLimitUpInfo_b__0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v60, 0LL, 0LL, v61);
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
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *npUpTitleLb; // x21
  __int64 *v48; // x8
  UILabel_o *cancelBtnLb; // x21
  UILabel_o *decideBtnLb; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v54; // x20
  __int64 v55; // x1
  __int64 v56; // x2
  System_Action_o *v57; // x21
  const MethodInfo *v58; // x5
  SetRarityDialogControl_o *v59; // x0
  int32_t v60; // w1
  __int64 v61; // x1
  __int64 v62; // x2

  if ( (byte_42178C9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, baseData);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v17);
    sub_B0D8A4(&Method_SetRarityDialogControl_DefaultBgSize__, v18);
    sub_B0D8A4(&Method_SetRarityDialogControl__SetNpCombineInfo_b__151_0__, v19);
    sub_B0D8A4(&Method_SetRarityDialogControl__SetNpCombineInfo_b__151_1__, v20);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v21);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v22);
    sub_B0D8A4(&StringLiteral_3354/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/, v23);
    sub_B0D8A4(&StringLiteral_3352/*"CONFIRM_TITLE_TD_COMBINE"*/, v24);
    byte_42178C9 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  npUpConfirmInfo = this->fields.npUpConfirmInfo;
  if ( !npUpConfirmInfo )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0LL);
  this->fields.npBaseData = baseData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.npBaseData,
    (System_Int32_array **)baseData,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.npSelectMtUsrSvtIdList = selectUsrSvtIdList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.npSelectMtUsrSvtIdList,
    (System_Int32_array **)selectUsrSvtIdList,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.npLvUpData = updata;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.npLvUpData,
    (System_Int32_array **)updata,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.npIsExceedMaxLv = isExceedMaxLv;
  this->fields.npIsCombineSvt = isCombineSvt;
  this->fields.npIsExceededMaterial = isExceededMaterial;
  this->fields.reConfirmation = reConfirmation;
  npUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !npUpConfirmInfo )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v44);
  SetRarityDialogControl__DefaultBgSize(this, v45);
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
    v48 = &StringLiteral_3354/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v48 = &StringLiteral_3352/*"CONFIRM_TITLE_TD_COMBINE"*/;
  }
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v48, 0LL);
  if ( !npUpTitleLb )
    goto LABEL_32;
  UILabel__set_text(npUpTitleLb, (System_String_o *)npUpConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb
    || (UILabel__set_text(cancelBtnLb, (System_String_o *)npUpConfirmInfo, 0LL),
        decideBtnLb = this->fields.decideBtnLb,
        npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/,
                                                        0LL),
        !decideBtnLb)
    || (UILabel__set_text(decideBtnLb, (System_String_o *)npUpConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_32:
    sub_B0D97C(npUpConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 11 )
  {
    if ( (this->fields.npIsExceedMaxLv || this->fields.npIsCombineSvt || this->fields.npIsExceededMaterial)
      && !reConfirmation )
    {
      v54 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v51, v52);
      System_Action___ctor(v54, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__151_0__, 0LL);
      v57 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v55, v56);
      System_Action___ctor(v57, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
      v59 = this;
      v60 = 0;
    }
    else
    {
      v54 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v51, v52);
      System_Action___ctor(v54, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__151_1__, 0LL);
      v57 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v61, v62);
      System_Action___ctor(v57, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
      v60 = 8;
      v59 = this;
    }
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v59, v60, v54, 0LL, v57, v58);
  }
}


void __fastcall SetRarityDialogControl__SetSkillNpCombineInfo(
        SetRarityDialogControl_o *this,
        SetLevelUpData_o *updata,
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
  UnityEngine_GameObject_o *skillUpConfirmInfo; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  UIExtrusionLabel_o *currentLvLb; // x21
  UIExtrusionLabel_o *resLvLb; // x21
  UILabel_o *upSpendQpTxtLb; // x21
  UILabel_o *upHaveQpTxtLb; // x21
  UILabel_o *upSpendQpLb; // x21
  System_String_o *v24; // x22
  Il2CppObject *v25; // x0
  UILabel_o *upHaveQpLb; // x21
  System_String_o *v27; // x22
  Il2CppObject *v28; // x0
  UILabel_o *upConfirmMsgLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v35; // x20
  const MethodInfo *v36; // x5
  int32_t haveQp; // [xsp+8h] [xbp-38h] BYREF
  int32_t spendQp; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42178C7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, updata);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__149_0__, v9);
    sub_B0D8A4(&StringLiteral_9294/*"NEED_QP"*/, v10);
    sub_B0D8A4(&StringLiteral_3181/*"COMBINE_HAVE_QP"*/, v11);
    sub_B0D8A4(&StringLiteral_3326/*"CONFIRM_COMBINE_MSG"*/, v12);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v13);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v14);
    sub_B0D8A4(&StringLiteral_3213/*"COMBINE_SPEND_QP"*/, v15);
    byte_42178C7 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)updata);
  skillUpConfirmInfo = this->fields.skillUpConfirmInfo;
  if ( !skillUpConfirmInfo )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0LL);
  skillUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !skillUpConfirmInfo )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v17);
  SetRarityDialogControl__DefaultBgSize(this, v18);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTitleLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, titleMsg, 0LL);
  if ( !updata )
    goto LABEL_25;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetRubyLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, updata->fields.targetRuby, 0LL);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.upTargetNameLb;
  if ( !skillUpConfirmInfo )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)skillUpConfirmInfo, updata->fields.targetName, 0LL);
  currentLvLb = this->fields.currentLvLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)updata + 56, 0LL);
  if ( !currentLvLb )
    goto LABEL_25;
  UIExtrusionLabel__set_text(currentLvLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  resLvLb = this->fields.resLvLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)updata + 60, 0LL);
  if ( !resLvLb )
    goto LABEL_25;
  UIExtrusionLabel__set_text(resLvLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3213/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !upSpendQpTxtLb )
    goto LABEL_25;
  UILabel__set_text(upSpendQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3181/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !upHaveQpTxtLb )
    goto LABEL_25;
  UILabel__set_text(upHaveQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upSpendQpLb = this->fields.upSpendQpLb;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  spendQp = updata->fields.spendQp;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendQp);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v24, v25, 0LL);
  if ( !upSpendQpLb )
    goto LABEL_25;
  UILabel__set_text(upSpendQpLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upHaveQpLb = this->fields.upHaveQpLb;
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  haveQp = updata->fields.haveQp;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveQp);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v27, v28, 0LL);
  if ( !upHaveQpLb )
    goto LABEL_25;
  UILabel__set_text(upHaveQpLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upConfirmMsgLb = this->fields.upConfirmMsgLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !upConfirmMsgLb )
    goto LABEL_25;
  UILabel__set_text(upConfirmMsgLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb
    || (UILabel__set_text(cancelBtnLb, (System_String_o *)skillUpConfirmInfo, 0LL),
        decideBtnLb = this->fields.decideBtnLb,
        skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/,
                                                           0LL),
        !decideBtnLb)
    || (UILabel__set_text(decideBtnLb, (System_String_o *)skillUpConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_25:
    sub_B0D97C(skillUpConfirmInfo);
  }
  if ( combineRootComponent->fields.state == 10 )
  {
    v35 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v32, v33);
    System_Action___ctor(
      v35,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__149_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v35, 0LL, 0LL, v36);
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
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v33; // x21
  const MethodInfo *v34; // x5
  SetRarityDialogControl_o *v35; // x0
  int32_t v36; // w1

  if ( (byte_42178D1 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, baseData);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&Method_SetRarityDialogControl__SetSpecialAscension_b__159_0__, v12);
    sub_B0D8A4(&Method_SetRarityDialogControl__SetSpecialAscension_b__159_1__, v13);
    sub_B0D8A4(&Method_SetRarityDialogControl__SetSpecialAscension_b__159_2__, v14);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v15);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v16);
    sub_B0D8A4(&StringLiteral_12325/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/, v17);
    sub_B0D8A4(&StringLiteral_12329/*"SPECIAL_ASCENSION_WARNING1_TXT"*/, v18);
    sub_B0D8A4(&StringLiteral_12330/*"SPECIAL_ASCENSION_WARNING2_TXT"*/, v19);
    sub_B0D8A4(&StringLiteral_1/*""*/, v20);
    byte_42178D1 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v22);
  SetRarityDialogControl__DefaultBgSize(this, v23);
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
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12325/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/, 0LL);
    this->fields.specialAscensionConfirm = 0;
  }
  else if ( warning1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12329/*"SPECIAL_ASCENSION_WARNING1_TXT"*/, 0LL);
    this->fields.specialAscensionWarning1 = 0;
  }
  else if ( warning2 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12330/*"SPECIAL_ASCENSION_WARNING2_TXT"*/, 0LL);
    this->fields.specialAscensionWarning2 = 0;
  }
  else
  {
    v24 = (System_String_o *)StringLiteral_1/*""*/;
  }
  specialAscensionConfirmInfo = this->fields.specialAscensionConfirmInfo;
  if ( !specialAscensionConfirmInfo )
    goto LABEL_41;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              specialAscensionConfirmInfo,
                                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___);
  if ( !specialAscensionConfirmInfo )
    goto LABEL_41;
  SpecialAscensionConfirmInfo__SetSpecialAscensionConfirmInfo(
    (SpecialAscensionConfirmInfo_o *)specialAscensionConfirmInfo,
    v24,
    25,
    0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0LL);
  if ( !cancelBtnLb )
    goto LABEL_41;
  UILabel__set_text(cancelBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0LL);
  if ( !decideBtnLb
    || (UILabel__set_text(decideBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0LL),
        (specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (specialAscensionConfirmInfo = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)specialAscensionConfirmInfo,
                                        0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 0, 0LL),
        v29 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v27, v28),
        System_Action___ctor(
          v29,
          (Il2CppObject *)this,
          Method_SetRarityDialogControl__SetSpecialAscension_b__159_0__,
          0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_41:
    sub_B0D97C(specialAscensionConfirmInfo);
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
      v33 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v30, v31);
      System_Action___ctor(
        v33,
        (Il2CppObject *)this,
        Method_SetRarityDialogControl__SetSpecialAscension_b__159_1__,
        0LL);
      v36 = 8;
      v35 = this;
      goto LABEL_39;
    }
    v33 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v30, v31);
    System_Action___ctor(v33, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__159_2__, 0LL);
    v35 = this;
    v36 = 0;
LABEL_39:
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v35, v36, v33, v29, 0LL, v34);
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
  UnityEngine_GameObject_o *allDispConfirmInfo; // x0
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  UILabel_o *cancelBtnLb; // x26
  UILabel_o *decideBtnLb; // x26
  const MethodInfo *v38; // x1
  struct UIGrid_o *allSvtGrid; // x8
  float v40; // s9
  int32_t v41; // w26
  UnityEngine_Component_o *v42; // x0
  char value; // w23
  Il2CppObject *key; // x27
  UnityEngine_GameObject_o *svtFaceInfo; // x28
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  MaterialSvtInfo_o *Component_srcLineSprite; // x0
  float y; // s10
  int32_t Count; // w25
  struct UIGrid_o *v51; // x8
  float cellWidth; // w20
  int v53; // w24
  int32_t v54; // w10
  float v55; // s1
  float z; // s2
  float v57; // s0
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v61; // x25
  Il2CppObject *v62; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v64; // x24
  Il2CppObject *v65; // x0
  UILabel_o *allRareMsgLb; // x20
  UILabel_o *allLimitRareLb; // x20
  UILabel_o *allRareConfirmMsgLb; // x20
  __int64 v69; // x1
  __int64 v70; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v72; // x20
  const MethodInfo *v73; // x5
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v75; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v76; // [xsp+40h] [xbp-A0h] BYREF
  _BOOL4 v77; // [xsp+78h] [xbp-68h]
  int32_t v78; // [xsp+7Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4

  v77 = isRare;
  if ( (byte_42178CC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, baseData);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__, v19);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v20);
    sub_B0D8A4(&int_TypeInfo, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__, v23);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v24);
    sub_B0D8A4(&Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__154_0__, v25);
    sub_B0D8A4(&StringLiteral_9294/*"NEED_QP"*/, v26);
    sub_B0D8A4(&StringLiteral_3181/*"COMBINE_HAVE_QP"*/, v27);
    sub_B0D8A4(&StringLiteral_3326/*"CONFIRM_COMBINE_MSG"*/, v28);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v29);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v30);
    sub_B0D8A4(&StringLiteral_11037/*"RARE_MATERIAL_INFO_MSG"*/, v31);
    sub_B0D8A4(&StringLiteral_3213/*"COMBINE_SPEND_QP"*/, v32);
    byte_42178CC = 1;
  }
  memset(&v76, 0, sizeof(v76));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v34);
  SetRarityDialogControl__DefaultBgSize(this, v35);
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
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_74;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_74;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v38);
  if ( !selectedList )
    goto LABEL_74;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_2EAE1A0 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allSvtGrid = this->fields.allSvtGrid;
  if ( !allSvtGrid )
    goto LABEL_74;
  v40 = allSvtGrid->fields.cellHeight * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v75,
    selectedList,
    (const MethodInfo_2EAEB48 *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v76 = v75;
  v41 = 0;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v76,
            (const MethodInfo_281742C *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v42 = (UnityEngine_Component_o *)this->fields.allSvtGrid;
    if ( !v42 )
      sub_B0D97C(0LL);
    key = v76.fields.current.fields.key;
    value = (char)v76.fields.current.fields.value;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v42, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Object )
      sub_B0D97C(0LL);
    Component_srcLineSprite = (MaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     Object,
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_srcLineSprite )
      sub_B0D97C(0LL);
    MaterialSvtInfo__setMaterialSvtInfo_25310496(
      Component_srcLineSprite,
      v41++,
      baseData,
      (int64_t)key,
      0,
      0,
      value != 0,
      0LL,
      0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v76,
    (const MethodInfo_2817590 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_2EAE1A0 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_2EAE1A0 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v51 = this->fields.allSvtGrid;
  if ( !v51 )
    goto LABEL_74;
  cellWidth = v51->fields.cellWidth;
  v53 = (int)allDispConfirmInfo;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this->fields.allSvtGrid,
                                                     0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  if ( v53 <= SLODWORD(cellWidth) )
    v54 = Count;
  else
    v54 = LODWORD(cellWidth);
  v55 = 70.0;
  if ( v53 <= SLODWORD(cellWidth) )
    v55 = y;
  v57 = (float)(this->fields.center.fields.x - (float)(v40 * (float)(v54 - 1))) * 0.47;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v55 - 1),
    0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)allDispConfirmInfo,
                                                     0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  v79.fields.x = 0.47;
  v79.fields.y = 0.47;
  v79.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v79, 0LL);
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
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3213/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !allSpendQpTxtLb )
    goto LABEL_74;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3181/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !allHaveQpTxtLb )
    goto LABEL_74;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allSpendQpLb = this->fields.allSpendQpLb;
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  LODWORD(v75.fields.dictionary) = spendQp;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v75);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v61, v62, 0LL);
  if ( !allSpendQpLb )
    goto LABEL_74;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpLb = this->fields.allHaveQpLb;
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_9294/*"NEED_QP"*/, 0LL);
  v78 = haveQp;
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v64, v65, 0LL);
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
    if ( !v77 )
      goto LABEL_63;
    allRareMsgLb = this->fields.allRareMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11037/*"RARE_MATERIAL_INFO_MSG"*/,
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
  if ( v77 )
  {
    allLimitRareLb = this->fields.allLimitRareLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11037/*"RARE_MATERIAL_INFO_MSG"*/,
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
    sub_B0D97C(allDispConfirmInfo);
  }
LABEL_63:
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !allRareConfirmMsgLb )
    goto LABEL_74;
  UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_74;
  if ( combineRootComponent->fields.state == 4 )
  {
    v72 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v69, v70);
    System_Action___ctor(
      v72,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__154_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v72, 0LL, 0LL, v73);
  }
}


void __fastcall SetRarityDialogControl___SetAllDispConfirmCombine_b__146_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B0D97C(0LL);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetAppendSkillCombineInfo_b__150_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B0D97C(0LL);
  CombineRootComponent__RequestAppendSkillCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmCombine_b__144_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B0D97C(0LL);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__152_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B0D97C(0LL);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__152_1(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.lvExceedCtr) == 0LL )
    sub_B0D97C(this);
  LevelExceedControl__OnClickCheckLvExceed((LevelExceedControl_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__153_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B0D97C(0LL);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmRarityInfo_b__142_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B0D97C(0LL);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmSvtEqCombine_b__145_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B0D97C(0LL);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetExceedMaterialInfo_b__143_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.svtCombineCtr) == 0LL )
    sub_B0D97C(this);
  ServantCombineControl__CheckRareSvt((ServantCombineControl_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetFriendshipExceedInfo_b__158_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B0D97C(0LL);
  CombineRootComponent__RequestFriendshipExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetNpCombineInfo_b__151_0(
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


void __fastcall SetRarityDialogControl___SetNpCombineInfo_b__151_1(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B0D97C(0LL);
  CombineRootComponent__RequestTdCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetSkillNpCombineInfo_b__149_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B0D97C(0LL);
  CombineRootComponent__RequestSkillCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__159_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8
  struct SpecialAscensionControl_o *specialAscensionCtr; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (specialAscensionCtr = combineRootComponent->fields.specialAscensionCtr) == 0LL )
    sub_B0D97C(this);
  if ( specialAscensionCtr->fields.pushExeButton )
    specialAscensionCtr->fields.pushExeButton = 0;
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__159_1(
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
  CommonUI_o *Instance; // x20
  System_String_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x22

  if ( (byte_42178D9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&CombineRootComponent_TypeInfo, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SetRarityDialogControl__SetSpecialAscension_b__159_3__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&StringLiteral_12327/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, v7);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_42178D9 = 1;
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
    sub_B0D97C(combineRootComponent);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12327/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0LL);
  v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__159_3__, 0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__OpenNotificationDialog(
    Instance,
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
    0LL);
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__159_2(
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
  CommonUI_o *Instance; // x20
  System_String_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x22
  __int64 v16; // x0

  if ( (byte_42178DA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&CombineRootComponent_TypeInfo, v3);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SetRarityDialogControl__SetSpecialAscension_b__159_4__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&StringLiteral_12327/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, v7);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_42178DA = 1;
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
      v9,
      this->fields.specialAscensionConfirm,
      this->fields.specialAscensionWarning1,
      this->fields.specialAscensionWarning2,
      v10);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12327/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0LL);
    v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__159_4__, 0LL);
    if ( !Instance )
      sub_B0D97C(v16);
    CommonUI__OpenNotificationDialog(
      Instance,
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
      0LL);
  }
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__159_3(
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
    sub_B0D97C(this);
  }
  CombineRootComponent__BackSpecialAscension((CombineRootComponent_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__159_4(
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
    sub_B0D97C(this);
  }
  CombineRootComponent__BackSpecialAscension((CombineRootComponent_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetSvtEqLimitUpConfirmCombine_b__154_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B0D97C(0LL);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x0

  if ( (byte_4212288 & 1) == 0 )
  {
    sub_B0D8A4(&SetRarityDialogControl___c_TypeInfo, v1);
    byte_4212288 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(SetRarityDialogControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SetRarityDialogControl___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall SetRarityDialogControl___c___ctor(SetRarityDialogControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SetRarityDialogControl___c___OnClickDlgOk_b__166_0(
        SetRarityDialogControl___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall SetRarityDialogControl___c___SetLimitUpInfo_b__148_1(
        SetRarityDialogControl___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  return NpCombineControl__CheckConfirm_25570972(x, 0LL);
}


void __fastcall SetRarityDialogControl___c__DisplayClass148_0___ctor(
        SetRarityDialogControl___c__DisplayClass148_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SetRarityDialogControl___c__DisplayClass148_0___SetLimitUpInfo_b__0(
        SetRarityDialogControl___c__DisplayClass148_0_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  int64_t UserId; // x21
  int64_t Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x8
  int64_t v24; // x22
  unsigned __int64 v25; // x26
  __int64 v26; // x23
  __int128 v27; // q0
  __int64 v28; // x24
  __int64 v29; // x25
  struct UserServantEntity_o *baseData; // x8
  int v31; // w24
  __int128 v32; // q0
  struct UserServantEntity_o *v33; // x8
  __int128 v34; // q0
  int64_t v35; // x24
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__148_1; // x21
  Il2CppObject *v38; // x22
  struct SetRarityDialogControl___c_StaticFields *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  CombineLimitUpWarningDialog_ClickDelegate_o *_9__2; // x21
  CombineLimitUpWarningDialog_o *combineLimitUpWarningDialog; // x20
  struct SetRarityDialogControl_o *_4__this; // x8
  __int64 v45; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_4212289 & 1) == 0 )
  {
    sub_B0D8A4(&CombineLimitUpWarningDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v8);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Predicate_UserServantEntity___ctor__, v12);
    sub_B0D8A4(&System_Predicate_UserServantEntity__TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B0D8A4(&Method_SetRarityDialogControl___c__SetLimitUpInfo_b__148_1__, v15);
    sub_B0D8A4(&Method_SetRarityDialogControl___c__DisplayClass148_0__SetLimitUpInfo_b__2__, v16);
    sub_B0D8A4(&SetRarityDialogControl___c_TypeInfo, v17);
    byte_4212289 = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_50;
  v23 = *(_QWORD *)(Instance + 24);
  v24 = Instance;
  if ( (int)v23 >= 1 )
  {
    v25 = 0LL;
    do
    {
      if ( v25 >= (unsigned int)v23 )
      {
        v45 = sub_B0D9A8(Instance);
        sub_B0D948(v45, 0LL);
      }
      v26 = *(_QWORD *)(v24 + 32 + 8 * v25);
      if ( v26 )
      {
        v27 = *(_OWORD *)(v26 + 64);
        *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)(v26 + 48);
        *(_OWORD *)&v49.fields.fakeValue = v27;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v48 = v49;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v48, 0LL);
        if ( Instance == UserId )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v26, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v29 = *(_QWORD *)(v26 + 80);
            v28 = *(_QWORD *)(v26 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v50.fields.currentCryptoKey = v29;
            *(_QWORD *)&v50.fields.fakeValue = v28;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v50, 0LL);
            baseData = this->fields.baseData;
            if ( !baseData )
              goto LABEL_50;
            v31 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(baseData->fields.svtId, 0LL);
            if ( v31 == (_DWORD)Instance )
            {
              v32 = *(_OWORD *)(v26 + 32);
              *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)(v26 + 16);
              *(_OWORD *)&v49.fields.fakeValue = v32;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v47 = v49;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v47, 0LL);
              v33 = this->fields.baseData;
              if ( !v33 )
                goto LABEL_50;
              v34 = *(_OWORD *)&v33->fields.id.fields.fakeValue;
              v35 = Instance;
              *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&v33->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v46.fields.fakeValue = v34;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v46, 0LL);
              if ( v35 != Instance )
              {
                if ( !v18 )
                  goto LABEL_50;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v18,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
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
  if ( (BYTE3(SetRarityDialogControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetRarityDialogControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo);
    Instance = (int64_t)SetRarityDialogControl___c_TypeInfo;
  }
  static_fields = *(struct SetRarityDialogControl___c_StaticFields **)(Instance + 184);
  _9__148_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__148_1;
  if ( !_9__148_1 )
  {
    if ( (*(_BYTE *)(Instance + 307) & 4) != 0 && !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__148_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_UserServantEntity__TypeInfo,
                                                                           v21,
                                                                           v22);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__148_1,
      v38,
      Method_SetRarityDialogControl___c__SetLimitUpInfo_b__148_1__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_UserServantEntity___ctor__);
    v39 = SetRarityDialogControl___c_TypeInfo->static_fields;
    v39->__9__148_1 = (struct System_Predicate_UserServantEntity__o *)_9__148_1;
    sub_B0D840(&v39->__9__148_1, _9__148_1);
  }
  if ( !v18 )
    goto LABEL_50;
  Instance = (int64_t)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                        (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v18,
                        (System_Predicate_T__o *)_9__148_1,
                        (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_UserServantEntity__Find__);
  if ( Instance )
  {
    _9__2 = this->fields.__9__2;
    combineLimitUpWarningDialog = this->fields.combineLimitUpWarningDialog;
    if ( !_9__2 )
    {
      _9__2 = (CombineLimitUpWarningDialog_ClickDelegate_o *)sub_B0D974(
                                                               CombineLimitUpWarningDialog_ClickDelegate_TypeInfo,
                                                               v40,
                                                               v41);
      CombineLimitUpWarningDialog_ClickDelegate___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_SetRarityDialogControl___c__DisplayClass148_0__SetLimitUpInfo_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_B0D840(&this->fields.__9__2, _9__2);
    }
    if ( combineLimitUpWarningDialog )
    {
      CombineLimitUpWarningDialog__Open(combineLimitUpWarningDialog, _9__2, 0LL);
      return;
    }
LABEL_50:
    sub_B0D97C(Instance);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_50;
  Instance = (int64_t)_4__this->fields.combineRootComponent;
  if ( !Instance )
    goto LABEL_50;
  CombineRootComponent__RequestLimitUp((CombineRootComponent_o *)Instance, 0LL);
}


void __fastcall SetRarityDialogControl___c__DisplayClass148_0___SetLimitUpInfo_b__2(
        SetRarityDialogControl___c__DisplayClass148_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct SetRarityDialogControl_o *_4__this; // x8

  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (this = (SetRarityDialogControl___c__DisplayClass148_0_o *)_4__this->fields.combineRootComponent) == 0LL )
    {
      sub_B0D97C(this);
    }
    CombineRootComponent__RequestLimitUp((CombineRootComponent_o *)this, 0LL);
  }
}