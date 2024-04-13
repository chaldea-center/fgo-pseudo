void __fastcall SetRarityDialogControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  SetRarityDialogControl_c *v4; // x8

  if ( (byte_42EBAC9 & 1) == 0 )
  {
    sub_B5D5C4(&SetRarityDialogControl_TypeInfo, v1, v2, v3);
    byte_42EBAC9 = 1;
  }
  SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME = 0.26667;
  SetRarityDialogControl_TypeInfo->static_fields->CLOSE_TIME = 0.26667;
  v4 = SetRarityDialogControl_TypeInfo;
  SetRarityDialogControl_TypeInfo->static_fields->DIALOG_INITIAL_SCALE = 0.9;
  v4->static_fields->DIALOG_CLOSE_SCALE = 0.95;
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
  __int64 v3; // x3
  SetRarityDialogControl_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x22
  int64_t v14; // x21
  __int64 v15; // x1
  __int64 v16; // x0

  v5 = this;
  if ( (byte_42EBAC8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)selectedList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6, v7, v8);
    this = (SetRarityDialogControl_o *)sub_B5D5C4(
                                         &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                         v9,
                                         v10,
                                         v11);
    byte_42EBAC8 = 1;
  }
  v5->fields.isExceed = 0;
  if ( selectedList )
  {
    v12 = *(_QWORD *)&selectedList->max_length;
    if ( v12 )
    {
      if ( (int)v12 >= 1 )
      {
        v13 = 0LL;
        while ( 1 )
        {
          if ( v13 >= (unsigned int)v12 )
          {
            v16 = sub_B5D6C8(this);
            sub_B5D668(v16, 0LL);
          }
          v14 = selectedList->m_Items[v13];
          this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this
            || (this = (SetRarityDialogControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)this,
                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
            || (this = (SetRarityDialogControl_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                     (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                     v14,
                                                     (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0LL )
          {
            sub_B5D69C(this, v15);
          }
          if ( SLODWORD(this->fields.confirmHaveQpLb) >= 1 )
            break;
          LODWORD(v12) = selectedList->max_length;
          if ( (__int64)++v13 >= (int)v12 )
            return;
        }
        v5->fields.isExceed = 1;
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int32_t adjustHp; // w24
  int32_t adjustAtk; // w19
  _BOOL8 IsStatusUp; // x0
  __int64 v36; // x8
  unsigned __int64 v37; // x27
  int v38; // w26
  int v39; // w24
  int64_t v40; // x22
  UserServantEntity_o *v41; // x22
  System_String_o *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  int v49; // w19
  System_String_o *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  int v57; // w8
  System_String_o *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x0
  int32_t v67; // [xsp+8h] [xbp-78h]
  int32_t v68; // [xsp+Ch] [xbp-74h]
  int32_t secondMaxAdjustAtk[2]; // [xsp+18h] [xbp-68h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+20h] [xbp-60h] BYREF
  int32_t atkUp[2]; // [xsp+28h] [xbp-58h] BYREF

  v11 = this;
  if ( (byte_42EBAB6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserServantMaster___,
      (_DWORD)baseData,
      (_DWORD)selectUsrSvtIdList,
      labelMsg);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12517/*"STATUS_HP_OVER_DIALOG_MSG"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_12516/*"STATUS_ATK_OVER_DIALOG_MSG"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_12518/*"STATUS_OVER_DIALOG_MSG"*/, v27, v28, v29);
    this = (SetRarityDialogControl_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    byte_42EBAB6 = 1;
  }
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)atkUp = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  if ( !baseData )
LABEL_39:
    sub_B5D69C(this, baseData);
  adjustHp = baseData->fields.adjustHp;
  adjustAtk = baseData->fields.adjustAtk;
  *(_QWORD *)atkUp = 0LL;
  maxAjustAtk[1] = 0;
  maxAjustAtk[0] = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  *labelMsg = (System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
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
    v36 = *(_QWORD *)&selectUsrSvtIdList->max_length;
    if ( (int)v36 < 1 )
    {
      v49 = 0;
    }
    else
    {
      v67 = adjustHp;
      v68 = adjustAtk;
      v37 = 0LL;
      v38 = 0;
      v39 = 0;
      do
      {
        if ( v37 >= (unsigned int)v36 )
        {
          v65 = sub_B5D6C8(IsStatusUp);
          sub_B5D668(v65, 0LL);
        }
        v40 = selectUsrSvtIdList->m_Items[v37];
        this = (SetRarityDialogControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_39;
        this = (SetRarityDialogControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !this )
          goto LABEL_39;
        this = (SetRarityDialogControl_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                             v40,
                                             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !this )
          goto LABEL_39;
        v41 = (UserServantEntity_o *)this;
        IsStatusUp = UserServantEntity__IsStatusUp((UserServantEntity_o *)this, 0LL);
        if ( IsStatusUp )
        {
          *(_QWORD *)atkUp = 0LL;
          UserServantEntity__getStatusUpInfo(v41, &atkUp[1], atkUp, 0LL);
          v38 += atkUp[1] & ~(atkUp[1] >> 31);
          v39 += atkUp[0] & ~(atkUp[0] >> 31);
        }
        LODWORD(v36) = selectUsrSvtIdList->max_length;
        ++v37;
      }
      while ( (__int64)v37 < (int)v36 );
      if ( v38 < 1 || UserServantEntity__isAdjustHpMax(baseData, 0LL) || v38 + v67 <= maxAjustAtk[1] )
      {
        v49 = 0;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12517/*"STATUS_HP_OVER_DIALOG_MSG"*/, 0LL);
        *labelMsg = v42;
        sub_B5D560((BattleServantConfConponent_o *)labelMsg, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
        v49 = 1;
      }
      if ( v39 >= 1 && !UserServantEntity__isAdjustAtkMax(baseData, 0LL) && v39 + v68 > maxAjustAtk[0] )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12516/*"STATUS_ATK_OVER_DIALOG_MSG"*/, 0LL);
        *labelMsg = v50;
        sub_B5D560((BattleServantConfConponent_o *)labelMsg, (System_Int32_array **)v50, v51, v52, v53, v54, v55, v56);
        v57 = 1;
        goto LABEL_32;
      }
    }
    v57 = 0;
LABEL_32:
    if ( (v57 & v49) != 0 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v58 = LocalizationManager__Get((System_String_o *)StringLiteral_12518/*"STATUS_OVER_DIALOG_MSG"*/, 0LL);
      *labelMsg = v58;
      sub_B5D560((BattleServantConfConponent_o *)labelMsg, (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
    }
    LOBYTE(IsStatusUp) = 1;
  }
  return IsStatusUp;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__Close(SetRarityDialogControl_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *gameObject; // x20
  SetRarityDialogControl_c *v18; // x8
  void *npUpConfirmInfo; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *v21; // x0
  struct SetRarityDialogControl_StaticFields *static_fields; // x8
  TweenScale_o *v23; // x20
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Transform_o *transform; // x20
  int v39; // s0
  UnityEngine_Transform_o *v42; // x19
  UnityEngine_Vector3_o v43; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_42EBAC3 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SetRarityDialogControl_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_6019/*"EndCloseDlg"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_5413/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, v14, v15, v16);
    byte_42EBAC3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18 = SetRarityDialogControl_TypeInfo;
  if ( (BYTE3(SetRarityDialogControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetRarityDialogControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl_TypeInfo);
    v18 = SetRarityDialogControl_TypeInfo;
  }
  npUpConfirmInfo = TweenAlpha__Begin(gameObject, v18->static_fields->CLOSE_TIME, 0.0, 0LL);
  if ( !npUpConfirmInfo )
    goto LABEL_29;
  *((_DWORD *)npUpConfirmInfo + 6) = 6;
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  static_fields = SetRarityDialogControl_TypeInfo->static_fields;
  v43.fields.x = static_fields->DIALOG_CLOSE_SCALE;
  v43.fields.y = v43.fields.x;
  v43.fields.z = v43.fields.x;
  v23 = TweenScale__Begin(v21, static_fields->CLOSE_TIME, v43, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  npUpConfirmInfo = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL);
  if ( ((unsigned __int8)npUpConfirmInfo & 1) != 0 )
  {
    if ( !v23 )
      goto LABEL_29;
    v23->fields.style = 6;
    v24 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v23->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v24;
    sub_B5D560((BattleServantConfConponent_o *)&v23->fields.eventReceiver, v24, v25, v26, v27, v28, v29, v30);
    v31 = (System_Int32_array **)StringLiteral_6019/*"EndCloseDlg"*/;
    v23->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6019/*"EndCloseDlg"*/;
    sub_B5D560((BattleServantConfConponent_o *)&v23->fields.callWhenFinished, v31, v32, v33, v34, v35, v36, v37);
  }
  else
  {
    npUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !npUpConfirmInfo )
      goto LABEL_29;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)npUpConfirmInfo, 0LL);
    *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_29;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v39, 0LL);
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
    sub_B5D69C(npUpConfirmInfo, v20);
  }
  UIGrid__RemoveAllChild((UIGrid_o *)npUpConfirmInfo, 0LL);
  v42 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__RemoveBackBtn_21329016(v42, (System_String_o *)StringLiteral_5413/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0LL);
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
    sub_B5D69C(decideBtnLb, method);
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
    sub_B5D69C(rariryConfirmInfo, method);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.onClickDlgCloseCallBack, 0LL, v2, v3, v4, v5, v6, v7);
  if ( onClickDlgCloseCallBack )
    System_Action__Invoke(onClickDlgCloseCallBack, 0LL);
}


void __fastcall SetRarityDialogControl__EndOpen(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_42EBAC5 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_5413/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, v5, v6, v7);
    byte_42EBAC5 = 1;
  }
  this->fields.isButtonEnable = 1;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21237572(transform, (System_String_o *)StringLiteral_5413/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__MoveAlpha(SetRarityDialogControl_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x20
  SetRarityDialogControl_c *v20; // x8
  UnityEngine_GameObject_o *v21; // x20
  float OPEN_TIME; // s8
  float y; // s4
  float z; // s5
  float v25; // s3
  System_Action_o *v26; // x20
  System_String_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  TweenAlpha_o *v29; // x20
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EBAC4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SetRarityDialogControl_EndOpen__, v11, v12, v13);
    sub_B5D5C4(&SetRarityDialogControl_TypeInfo, v14, v15, v16);
    byte_42EBAC4 = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v19 = (UnityEngine_Transform_o *)gameObject;
  v20 = SetRarityDialogControl_TypeInfo;
  if ( (BYTE3(SetRarityDialogControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetRarityDialogControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl_TypeInfo);
    v20 = SetRarityDialogControl_TypeInfo;
  }
  if ( !v19 )
    goto LABEL_19;
  v37.fields.x = v20->static_fields->DIALOG_INITIAL_SCALE;
  v37.fields.y = v37.fields.x;
  v37.fields.z = v37.fields.x;
  UnityEngine_Transform__set_localScale(v19, v37, 0LL);
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  OPEN_TIME = SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME;
  one = UnityEngine_Vector3__get_one(0LL);
  y = one.fields.y;
  z = one.fields.z;
  one.fields.y = one.fields.x;
  one.fields.z = y;
  v25 = z;
  TweenScale__Begin(v21, OPEN_TIME, *(UnityEngine_Vector3_o *)&one.fields.y, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             gameObject,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !gameObject )
    goto LABEL_19;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gameObject->klass[1]._1.castClass)(
    gameObject,
    gameObject->klass[1]._1.declaringType,
    0.005);
  v26 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_SetRarityDialogControl_EndOpen__, 0LL);
  if ( !v26 )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)System_Delegate__get_Method((System_Delegate_o *)v26, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  v27 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))gameObject->klass[1]._1.castClass)(
                             gameObject,
                             gameObject->klass[1]._1.declaringType);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    v27,
    SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME,
    0LL);
  v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v29 = TweenAlpha__Begin(v28, SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME, 1.0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( v29 )
    {
      v29->fields.style = 6;
      v30 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v29->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v30;
      sub_B5D560((BattleServantConfConponent_o *)&v29->fields.eventReceiver, v30, v31, v32, v33, v34, v35, v36);
      return;
    }
LABEL_19:
    sub_B5D69C(gameObject, v18);
  }
}


void __fastcall SetRarityDialogControl__OnClickCancel(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  System_Action_o *onClickDlgCancelCallBack; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42EBAC7 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBAC7 = 1;
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
    SetRarityDialogControl__Close(this, v5);
    onClickDlgCancelCallBack = this->fields.onClickDlgCancelCallBack;
    this->fields.onClickDlgOkCallBack = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.onClickDlgOkCallBack, 0LL, v7, v8, v9, v10, v11, v12);
    this->fields.onClickDlgCancelCallBack = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.onClickDlgCancelCallBack,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    if ( onClickDlgCancelCallBack )
      System_Action__Invoke(onClickDlgCancelCallBack, 0LL);
  }
}


void __fastcall SetRarityDialogControl__OnClickDlgOk(SetRarityDialogControl_o *this, const MethodInfo *method)
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
  int32_t onClickDlgOkSeKind; // w20
  const MethodInfo *v24; // x1
  CombineRootComponent_o *Instance; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x9
  __int64 v34; // x9
  CommonUI_o *v35; // x20
  SetRarityDialogControl___c_c *v36; // x8
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x9
  System_Action_o *onClickDlgOkCallBack; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  SetRarityDialogControl_o *v45; // x0
  const MethodInfo *v46; // x1

  if ( (byte_42EBAC6 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CombineRootComponent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SetRarityDialogControl___c__OnClickDlgOk_b__166_0__, v17, v18, v19);
    sub_B5D5C4(&SetRarityDialogControl___c_TypeInfo, v20, v21, v22);
    byte_42EBAC6 = 1;
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
    SetRarityDialogControl__Close(this, v24);
    Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (CombineRootComponent_o *)Instance->fields.myFSM;
    if ( !Instance )
      goto LABEL_29;
    v33 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v33
      && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v33 - 1] == CombineRootComponent_TypeInfo )
    {
      if ( Instance->fields.combineTutorialProgress != 7 )
      {
LABEL_26:
        onClickDlgOkCallBack = this->fields.onClickDlgOkCallBack;
        this->fields.onClickDlgOkCallBack = 0LL;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.onClickDlgOkCallBack,
          0LL,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        this->fields.onClickDlgCancelCallBack = 0LL;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.onClickDlgCancelCallBack,
          0LL,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
        if ( onClickDlgOkCallBack )
        {
          System_Action__Invoke(onClickDlgOkCallBack, 0LL);
          return;
        }
LABEL_29:
        sub_B5D69C(Instance, v26);
      }
      Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_29;
      Instance = (CombineRootComponent_o *)Instance->fields.myFSM;
      if ( !Instance )
        goto LABEL_29;
      v34 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v34
        && (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v34 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__SetTutorialProgress(Instance, 8, 0LL);
        Instance = (CombineRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v35 = (CommonUI_o *)Instance;
        v36 = SetRarityDialogControl___c_TypeInfo;
        if ( (BYTE3(SetRarityDialogControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SetRarityDialogControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo);
          v36 = SetRarityDialogControl___c_TypeInfo;
        }
        static_fields = v36->static_fields;
        if ( !static_fields->__9__166_0 )
        {
          if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v36);
          JUMPOUT(0x1D877D4LL);
        }
        if ( !v35 )
          goto LABEL_29;
        CommonUI__CloseTutorialNotificationDialogArrow_18227360(v35, static_fields->__9__166_0, 0LL);
        goto LABEL_26;
      }
    }
    sub_B5D990(Instance);
    SetRarityDialogControl__OnClickCancel(v45, v46);
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  __int64 v55; // x1
  void *allDispConfirmInfo; // x0
  const MethodInfo *v57; // x1
  const MethodInfo *v58; // x1
  UILabel_o *allTitleLb; // x26
  UILabel_o *cancelBtnLb; // x26
  UILabel_o *decideBtnLb; // x26
  const MethodInfo *v62; // x1
  __int64 v63; // x27
  float v64; // s8
  unsigned __int64 v65; // x26
  bool v66; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x27
  UnityEngine_Transform_o *transform; // x0
  float y; // s9
  int v70; // w20
  int v71; // w8
  float v72; // s1
  float z; // s2
  float v74; // s0
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v78; // x25
  Il2CppObject *v79; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v81; // x24
  Il2CppObject *v82; // x0
  UILabel_o *allRareMsgLb; // x21
  __int64 *v84; // x8
  UILabel_o *allRareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v87; // x20
  const MethodInfo *v88; // x5
  __int64 v89; // x0
  System_String_o *text; // [xsp+8h] [xbp-78h]
  bool v91; // [xsp+14h] [xbp-6Ch]
  int32_t v92; // [xsp+18h] [xbp-68h] BYREF
  int32_t v93; // [xsp+1Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EBAB5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)baseData, (_DWORD)list, *(_QWORD *)&spendQp);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v16, v17, v18);
    sub_B5D5C4(&int_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__146_0__, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_9366/*"NEED_QP"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_3234/*"COMBINE_HAVE_QP"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_3379/*"CONFIRM_COMBINE_MSG"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_3233/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_11143/*"RARE_MATERIAL_INFO_MSG"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_3266/*"COMBINE_SPEND_QP"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_3404/*"CONFIRM_TITLE_SVT_COMBINE"*/, v52, v53, v54);
    byte_42EBAB5 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  text = statusLimitMessage;
  v91 = isExceededMaterial;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0LL);
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allDispConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v57);
  SetRarityDialogControl__DefaultBgSize(this, v58);
  allTitleLb = this->fields.allTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3404/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  if ( !allTitleLb )
    goto LABEL_63;
  UILabel__set_text(allTitleLb, (System_String_o *)allDispConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_63;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_63;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v62);
  if ( !selectedList )
    goto LABEL_63;
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  LODWORD(v63) = selectedList->max_length;
  v64 = *((float *)allDispConfirmInfo + 10);
  if ( (int)v63 >= 1 )
  {
    v65 = 0LL;
    v66 = 0;
    do
    {
      if ( v66 )
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
                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v65 >= selectedList->max_length )
      {
        v89 = sub_B5D6C8(allDispConfirmInfo);
        sub_B5D668(v89, 0LL);
      }
      if ( !allDispConfirmInfo )
        goto LABEL_63;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)allDispConfirmInfo,
        v65,
        baseData,
        selectedList->m_Items[v65],
        0,
        0,
        0LL,
        0LL);
      allDispConfirmInfo = this->fields.allSvtGrid;
      v63 = *(_QWORD *)&selectedList->max_length;
      ++v65;
      v66 = allDispConfirmInfo == 0LL;
    }
    while ( (__int64)v65 < (int)v63 );
    if ( !allDispConfirmInfo )
      goto LABEL_63;
  }
  y = this->fields.center.fields.y;
  v70 = *((_DWORD *)allDispConfirmInfo + 9);
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  if ( v70 >= (int)v63 )
    v71 = v63;
  else
    v71 = v70;
  v72 = 70.0;
  if ( v70 >= (int)v63 )
    v72 = y;
  v74 = (float)(this->fields.center.fields.x - (float)((float)(v64 * 0.5) * (float)(v71 - 1))) * 0.47;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v72 - 1),
    0LL);
  allDispConfirmInfo = this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  allDispConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allDispConfirmInfo, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  v94.fields.x = 0.47;
  v94.fields.y = 0.47;
  v94.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v94, 0LL);
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
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3266/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !allSpendQpTxtLb )
    goto LABEL_63;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3234/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !allHaveQpTxtLb )
    goto LABEL_63;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allSpendQpLb = this->fields.allSpendQpLb;
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  v93 = spendQp;
  v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v93);
  allDispConfirmInfo = System_String__Format(v78, v79, 0LL);
  if ( !allSpendQpLb )
    goto LABEL_63;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpLb = this->fields.allHaveQpLb;
  v81 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  v92 = haveQp;
  v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92);
  allDispConfirmInfo = System_String__Format(v81, v82, 0LL);
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
  if ( v91 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v84 = &StringLiteral_3233/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v84 = &StringLiteral_11143/*"RARE_MATERIAL_INFO_MSG"*/;
  }
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)*v84, 0LL);
  if ( !allRareMsgLb )
    goto LABEL_63;
  UILabel__set_text(allRareMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  allDispConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3379/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !allRareConfirmMsgLb
    || (UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_63:
    sub_B5D69C(allDispConfirmInfo, v55);
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v87 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v87,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__146_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v87, 0LL, 0LL, v88);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  __int64 v57; // x1
  UnityEngine_GameObject_o *appendSkillConfirmInfo; // x0
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  char v62; // w21
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  UIExtrusionLabel_o *appendSkillCurrentLvLabel; // x21
  UIExtrusionLabel_o *appendSkillResultLvLabel; // x21
  UnityEngine_GameObject_o *v66; // x0
  UnityEngine_GameObject_o *v67; // x0
  UILabel_o *v68; // x21
  UILabel_o *v69; // x21
  UILabel_o *v70; // x21
  System_String_o *v71; // x22
  Il2CppObject *v72; // x0
  UILabel_o *v73; // x21
  System_String_o *v74; // x22
  Il2CppObject *v75; // x0
  UILabel_o *appendSkillConfirmLabel; // x20
  __int64 *v77; // x8
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  UnityEngine_Transform_o *transform; // x0
  int v80; // s0
  UnityEngine_GameObject_o *v83; // x0
  UnityEngine_GameObject_o *v84; // x0
  UILabel_o *appendSkillSpendTxtLabel; // x21
  UILabel_o *appendSkillHaveTxtLabel; // x21
  UILabel_o *appendSkillSpendLabel; // x21
  System_String_o *v88; // x22
  Il2CppObject *v89; // x0
  UILabel_o *appendSkillHaveLabel; // x21
  System_String_o *v91; // x22
  Il2CppObject *v92; // x0
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v96; // x20
  const MethodInfo *v97; // x5
  UnityEngine_Bounds_o v98; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Bounds_o v99; // [xsp+20h] [xbp-60h] BYREF
  int32_t haveSvtCoin; // [xsp+4Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EBAB9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)updata, (_DWORD)titleMsg, isOpen);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v15, v16, v17);
    sub_B5D5C4(&int_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SetRarityDialogControl__SetAppendSkillCombineInfo_b__150_0__, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_9366/*"NEED_QP"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_3234/*"COMBINE_HAVE_QP"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_1734/*"APPEND_SKILL_OPEN_CONFIRM"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_1737/*"APPEND_SKILL_OPEN_SPEND_COIN"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_1735/*"APPEND_SKILL_OPEN_HAVE_COIN"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_3266/*"COMBINE_SPEND_QP"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_1725/*"APPEND_SKILL_COMBINE_CONFIRM"*/, v54, v55, v56);
    byte_42EBAB9 = 1;
  }
  memset(&v99, 0, sizeof(v99));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)updata);
  appendSkillConfirmInfo = this->fields.appendSkillConfirmInfo;
  if ( !appendSkillConfirmInfo )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, 1, 0LL);
  appendSkillConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !appendSkillConfirmInfo )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v59);
  SetRarityDialogControl__DefaultBgSize(this, v60);
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
  v62 = ~isOpen;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, v62 & 1, 0LL);
  if ( (v62 & 1) == 0 )
  {
    if ( updata )
    {
      appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillIconComp;
      if ( appendSkillConfirmInfo )
      {
        SkillIconComponent__Set_26822028(
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
                                                                                    (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
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
                                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
                                                                      (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
                }
                transform = UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)ComponentInChildren_Dropdown_DropdownItem,
                              0LL);
                NGUIMath__CalculateAbsoluteWidgetBounds(&v98, transform, 0LL);
                ((void (__fastcall *)(UnityEngine_Object_o *, const char *))ComponentInChildren_Dropdown_DropdownItem->klass[1]._1.gc_desc)(
                  ComponentInChildren_Dropdown_DropdownItem,
                  ComponentInChildren_Dropdown_DropdownItem->klass[1]._1.name);
                v99 = v98;
                *(UnityEngine_Vector3_o *)&v80 = UnityEngine_Bounds__get_center(&v99, 0LL);
                if ( Component_srcLineSprite )
                {
                  UnityEngine_BoxCollider__set_center(
                    (UnityEngine_BoxCollider_o *)Component_srcLineSprite,
                    *(UnityEngine_Vector3_o *)&v80,
                    0LL);
                  ((void (__fastcall *)(UnityEngine_Object_o *, const char *))ComponentInChildren_Dropdown_DropdownItem->klass[1]._1.gc_desc)(
                    ComponentInChildren_Dropdown_DropdownItem,
                    ComponentInChildren_Dropdown_DropdownItem->klass[1]._1.name);
                  v99 = v98;
                  size = UnityEngine_Bounds__get_size(&v99, 0LL);
                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_srcLineSprite, size, 0LL);
                  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillSpendTxtLabel;
                  if ( appendSkillConfirmInfo )
                  {
                    v83 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
                    GameObjectExtensions__SetLocalPositionX(v83, 100.0, 0LL);
                    appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillHaveTxtLabel;
                    if ( appendSkillConfirmInfo )
                    {
                      v84 = UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)appendSkillConfirmInfo,
                              0LL);
                      GameObjectExtensions__SetLocalPositionX(v84, 100.0, 0LL);
                      appendSkillSpendTxtLabel = this->fields.appendSkillSpendTxtLabel;
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_1737/*"APPEND_SKILL_OPEN_SPEND_COIN"*/,
                                                                             0LL);
                      if ( appendSkillSpendTxtLabel )
                      {
                        UILabel__set_text(appendSkillSpendTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                        appendSkillHaveTxtLabel = this->fields.appendSkillHaveTxtLabel;
                        appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_1735/*"APPEND_SKILL_OPEN_HAVE_COIN"*/,
                                                                               0LL);
                        if ( appendSkillHaveTxtLabel )
                        {
                          UILabel__set_text(appendSkillHaveTxtLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                          appendSkillSpendLabel = this->fields.appendSkillSpendLabel;
                          v88 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
                          LODWORD(v98.fields.m_Center.fields.x) = updata->fields.spendSvtCoin;
                          v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v98);
                          appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v88, v89, 0LL);
                          if ( appendSkillSpendLabel )
                          {
                            UILabel__set_text(appendSkillSpendLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                            appendSkillHaveLabel = this->fields.appendSkillHaveLabel;
                            v91 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
                            haveSvtCoin = updata->fields.haveSvtCoin;
                            v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveSvtCoin);
                            appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v91, v92, 0LL);
                            if ( appendSkillHaveLabel )
                            {
                              UILabel__set_text(appendSkillHaveLabel, (System_String_o *)appendSkillConfirmInfo, 0LL);
                              appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
                              v77 = &StringLiteral_1734/*"APPEND_SKILL_OPEN_CONFIRM"*/;
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
    sub_B5D69C(appendSkillConfirmInfo, v57);
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
  v66 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v66, -5.0, 0LL);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)this->fields.appendSkillHaveTxtLabel;
  if ( !appendSkillConfirmInfo )
    goto LABEL_64;
  v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)appendSkillConfirmInfo, 0LL);
  GameObjectExtensions__SetLocalPositionX(v67, -5.0, 0LL);
  v68 = this->fields.appendSkillSpendTxtLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3266/*"COMBINE_SPEND_QP"*/,
                                                         0LL);
  if ( !v68 )
    goto LABEL_64;
  UILabel__set_text(v68, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v69 = this->fields.appendSkillHaveTxtLabel;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3234/*"COMBINE_HAVE_QP"*/,
                                                         0LL);
  if ( !v69 )
    goto LABEL_64;
  UILabel__set_text(v69, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v70 = this->fields.appendSkillSpendLabel;
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  LODWORD(v98.fields.m_Center.fields.x) = updata->fields.spendQp;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v98);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v71, v72, 0LL);
  if ( !v70 )
    goto LABEL_64;
  UILabel__set_text(v70, (System_String_o *)appendSkillConfirmInfo, 0LL);
  v73 = this->fields.appendSkillHaveLabel;
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  haveSvtCoin = updata->fields.haveQp;
  v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveSvtCoin);
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v74, v75, 0LL);
  if ( !v73 )
    goto LABEL_64;
  UILabel__set_text(v73, (System_String_o *)appendSkillConfirmInfo, 0LL);
  appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
  v77 = &StringLiteral_1725/*"APPEND_SKILL_COMBINE_CONFIRM"*/;
LABEL_54:
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v77, 0LL);
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
                                                         (System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/,
                                                         0LL);
  if ( !cancelBtnLb )
    goto LABEL_64;
  UILabel__set_text(cancelBtnLb, (System_String_o *)appendSkillConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  appendSkillConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/,
                                                         0LL);
  if ( !decideBtnLb )
    goto LABEL_64;
  UILabel__set_text(decideBtnLb, (System_String_o *)appendSkillConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_64;
  if ( combineRootComponent->fields.state == 14 )
  {
    v96 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v96,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetAppendSkillCombineInfo_b__150_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v96, 0LL, 0LL, v97);
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
    sub_B5D69C(mPanel, method);
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
    v19 = sub_B5D6C8(mPanel);
    sub_B5D668(v19, 0LL);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onClickDlgOkCallBack,
    (System_Int32_array **)callBack,
    (System_String_array **)callBack,
    (System_String_array **)cancelCallBack,
    (System_Boolean_array **)closeCallBack,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.onClickDlgCancelCallBack = cancelCallBack;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onClickDlgCancelCallBack,
    (System_Int32_array **)cancelCallBack,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.onClickDlgCloseCallBack = closeCallBack;
  sub_B5D560(
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  __int64 v45; // x1
  void *normalConfirmInfo; // x0
  const MethodInfo *v47; // x1
  const MethodInfo *v48; // x1
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v51; // x1
  __int64 v52; // x25
  float v53; // s8
  unsigned __int64 v54; // x24
  bool v55; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x25
  UnityEngine_Transform_o *transform; // x0
  float y; // s9
  int v59; // w24
  int v60; // w9
  float z; // s2
  float v62; // s1
  float v63; // s0
  UILabel_o *normalSpendQpTxtLb; // x24
  UILabel_o *normalHaveQpTxtLb; // x24
  UILabel_o *confirmSpendQpLb; // x24
  System_String_o *v67; // x25
  Il2CppObject *v68; // x0
  UILabel_o *confirmHaveQpLb; // x23
  System_String_o *v70; // x24
  Il2CppObject *v71; // x0
  UILabel_o *confirmMsgLb; // x22
  const MethodInfo *v73; // x4
  const MethodInfo *v74; // x2
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v76; // x20
  const MethodInfo *v77; // x5
  __int64 v78; // x0
  int32_t v79; // [xsp+0h] [xbp-70h] BYREF
  int32_t v80; // [xsp+4h] [xbp-6Ch] BYREF
  System_String_o *labelMsg; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EBAB3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)baseData, (_DWORD)msg, *(_QWORD *)&spendQp);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v15, v16, v17);
    sub_B5D5C4(&int_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SetRarityDialogControl__SetConfirmCombine_b__144_0__, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_9366/*"NEED_QP"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_3234/*"COMBINE_HAVE_QP"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_3379/*"CONFIRM_COMBINE_MSG"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_3266/*"COMBINE_SPEND_QP"*/, v42, v43, v44);
    byte_42EBAB3 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v47);
  SetRarityDialogControl__DefaultBgSize(this, v48);
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
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_49;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_49;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v51);
  if ( !selectedList )
    goto LABEL_49;
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_49;
  LODWORD(v52) = selectedList->max_length;
  v53 = *((float *)normalConfirmInfo + 10);
  if ( (int)v52 >= 1 )
  {
    v54 = 0LL;
    v55 = 0;
    do
    {
      if ( v55 )
        goto LABEL_49;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
      normalConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !normalConfirmInfo )
        goto LABEL_49;
      normalConfirmInfo = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            (UnityEngine_GameObject_o *)normalConfirmInfo,
                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v54 >= selectedList->max_length )
      {
        v78 = sub_B5D6C8(normalConfirmInfo);
        sub_B5D668(v78, 0LL);
      }
      if ( !normalConfirmInfo )
        goto LABEL_49;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)normalConfirmInfo,
        v54,
        baseData,
        selectedList->m_Items[v54],
        0,
        0,
        0LL,
        0LL);
      normalConfirmInfo = this->fields.materialSvtGrid;
      v52 = *(_QWORD *)&selectedList->max_length;
      ++v54;
      v55 = normalConfirmInfo == 0LL;
    }
    while ( (__int64)v54 < (int)v52 );
    if ( !normalConfirmInfo )
      goto LABEL_49;
  }
  y = this->fields.center.fields.y;
  v59 = *((_DWORD *)normalConfirmInfo + 9);
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_49;
  v60 = v59 >= (int)v52 ? v52 : v59;
  v62 = v59 >= (int)v52 ? y : 55.0;
  v63 = (float)(this->fields.center.fields.x - (float)((float)(v53 * 0.5) * (float)(v60 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v62 - 1),
    0LL);
  normalConfirmInfo = this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_49;
  normalConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)normalConfirmInfo, 0LL);
  if ( !normalConfirmInfo )
    goto LABEL_49;
  v82.fields.x = 0.5;
  v82.fields.y = 0.5;
  v82.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v82, 0LL);
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
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3266/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !normalSpendQpTxtLb )
    goto LABEL_49;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3234/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !normalHaveQpTxtLb )
    goto LABEL_49;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  v80 = spendQp;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
  normalConfirmInfo = System_String__Format(v67, v68, 0LL);
  if ( !confirmSpendQpLb )
    goto LABEL_49;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  v79 = haveQp;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
  normalConfirmInfo = System_String__Format(v70, v71, 0LL);
  if ( !confirmHaveQpLb )
    goto LABEL_49;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3379/*"CONFIRM_COMBINE_MSG"*/, 0LL);
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
  if ( !SetRarityDialogControl__CheckStatusUpInfo(this, baseData, selectedList, &labelMsg, v73) )
    goto LABEL_45;
  WrapControlText__textAdjust(this->fields.statusUpInfoLb, labelMsg, 22, 0, 0, 0LL);
  normalConfirmInfo = this->fields.statusUpInfoLb;
  if ( !normalConfirmInfo
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0LL)) == 0LL )
  {
LABEL_49:
    sub_B5D69C(normalConfirmInfo, v45);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)normalConfirmInfo, 1, 0LL);
LABEL_45:
  SetRarityDialogControl__CheckExceedSvt(this, selectedList, v74);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_49;
  if ( combineRootComponent->fields.state == 3 )
  {
    v76 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v76, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmCombine_b__144_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v76, 0LL, 0LL, v77);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  __int64 v37; // x1
  UnityEngine_GameObject_o *costumeConfirmInfo; // x0
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1
  UILabel_o *costumeTitleLb; // x25
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  UILabel_o *needQpCostumeTextLb; // x24
  UILabel_o *needQpCostumeLb; // x24
  System_String_o *v46; // x25
  Il2CppObject *v47; // x0
  UILabel_o *haveQpCostumeTextLb; // x23
  UILabel_o *haveQpCostumeLb; // x23
  System_String_o *v50; // x24
  Il2CppObject *v51; // x0
  UILabel_o *costumeInfoLb; // x22
  const MethodInfo *v53; // x5
  struct CombineRootComponent_o *combineRootComponent; // x8
  int32_t v55; // [xsp+8h] [xbp-48h] BYREF
  int32_t v56; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42EBAC0 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)cosName, needQp, *(_QWORD *)&haveQp);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_9366/*"NEED_QP"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_3396/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_3466/*"COSTUME_NEED_QP_TEXT"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_3463/*"COSTUME_CONFIRM_MSG"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_3465/*"COSTUME_HAVE_QP_TEXT"*/, v34, v35, v36);
    byte_42EBAC0 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v39);
  SetRarityDialogControl__DefaultBgSize(this, v40);
  costumeTitleLb = this->fields.costumeTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3396/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !costumeTitleLb )
    goto LABEL_21;
  UILabel__set_text(costumeTitleLb, (System_String_o *)costumeConfirmInfo, 0LL);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)this->fields.costumeNameLb;
  if ( !costumeConfirmInfo )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)costumeConfirmInfo, cosName, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_21;
  UILabel__set_text(cancelBtnLb, (System_String_o *)costumeConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_21;
  UILabel__set_text(decideBtnLb, (System_String_o *)costumeConfirmInfo, 0LL);
  needQpCostumeTextLb = this->fields.needQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3466/*"COSTUME_NEED_QP_TEXT"*/, 0LL);
  if ( !needQpCostumeTextLb )
    goto LABEL_21;
  UILabel__set_text(needQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0LL);
  needQpCostumeLb = this->fields.needQpCostumeLb;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  v56 = needQp;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v46, v47, 0LL);
  if ( !needQpCostumeLb )
    goto LABEL_21;
  UILabel__set_text(needQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0LL);
  haveQpCostumeTextLb = this->fields.haveQpCostumeTextLb;
  costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3465/*"COSTUME_HAVE_QP_TEXT"*/, 0LL);
  if ( !haveQpCostumeTextLb )
    goto LABEL_21;
  UILabel__set_text(haveQpCostumeTextLb, (System_String_o *)costumeConfirmInfo, 0LL);
  haveQpCostumeLb = this->fields.haveQpCostumeLb;
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  v55 = haveQp;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
  costumeConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v50, v51, 0LL);
  if ( !haveQpCostumeLb
    || (UILabel__set_text(haveQpCostumeLb, (System_String_o *)costumeConfirmInfo, 0LL),
        costumeInfoLb = this->fields.costumeInfoLb,
        costumeConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3463/*"COSTUME_CONFIRM_MSG"*/,
                                                           0LL),
        !costumeInfoLb)
    || (UILabel__set_text(costumeInfoLb, (System_String_o *)costumeConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_21:
    sub_B5D69C(costumeConfirmInfo, v37);
  }
  if ( combineRootComponent->fields.state == 8 )
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, callBack, cancelCallBack, 0LL, v53);
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

  if ( (byte_42EBABF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___,
      (_DWORD)eventCombineCostumeEnt,
      (_DWORD)callBack,
      cancelCallBack);
    byte_42EBABF = 1;
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
                                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___)) == 0LL
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
    sub_B5D69C(costumeEventItemConfirmInfo, v9);
  }
  if ( combineRootComponent->fields.state == 8 )
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 0, callBack, cancelCallBack, 0LL, v13);
}


// local variable allocation has failed, the output may be wrong!
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 v27; // x1
  UnityEngine_GameObject_o *costumeEventItemOrNeedItemConfirmInfo; // x0
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  UILabel_o *cancelBtnLb; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v34; // x21
  const MethodInfo *v35; // x5

  if ( (byte_42EBABE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)combineCostumeEnt, (_DWORD)eventCombineCostumeEnt, isShortNeedItemOrQp);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SetRarityDialogControl_DefaultBgSize__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v24, v25, v26);
    byte_42EBABE = 1;
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
                                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___);
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
  SetRarityDialogControl__MoveAlpha(this, v29);
  SetRarityDialogControl__DefaultBgSize(this, v30);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  costumeEventItemOrNeedItemConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/,
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
    sub_B5D69C(costumeEventItemOrNeedItemConfirmInfo, v27);
  }
  if ( combineRootComponent->fields.state == 8 )
  {
    v34 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v34, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, 0LL, cancelCallBack, v34, v35);
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  const MethodInfo *v20; // x4
  System_Int64_array *v21; // x2
  const MethodInfo *v22; // x7
  WebViewManager_o *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x9
  __int64 v26; // x9
  SetRarityDialogControl_o *v27; // x0
  System_Int64_array *v28; // x1
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // [xsp+0h] [xbp-50h]
  System_String_o *labelMsg; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42EBAB0 & 1) == 0 )
  {
    sub_B5D5C4(&CombineRootComponent_TypeInfo, (_DWORD)baseData, (_DWORD)list, msg);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v17, v18, v19);
    byte_42EBAB0 = 1;
  }
  labelMsg = 0LL;
  SetRarityDialogControl__CheckExceedSvt(this, selectedList, (const MethodInfo *)list);
  this->fields.isStatusUp = isStatusUp;
  if ( SetRarityDialogControl__CheckStatusUpInfo(this, baseData, selectedList, &labelMsg, v20) && isStatusUp )
    SetRarityDialogControl__SetAllDispConfirmCombine(
      this,
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
      this,
      baseData,
      selectedList,
      msg,
      spendQp,
      haveQp,
      isExceededMaterial,
      v22);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (WebViewManager_o *)Instance->fields.basePanel;
  if ( !Instance )
    goto LABEL_18;
  v25 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v25
    || (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v25 - 1] != CombineRootComponent_TypeInfo )
  {
    goto LABEL_19;
  }
  if ( HIDWORD(Instance[5].fields.webView) != 7 )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance || (Instance = (WebViewManager_o *)Instance->fields.basePanel) == 0LL )
LABEL_18:
    sub_B5D69C(Instance, v24);
  v26 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v26
    || (CombineRootComponent_c *)Instance->klass->_2.typeHierarchy[v26 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_19:
    sub_B5D990(Instance);
    SetRarityDialogControl__CheckExceedSvt(v27, v28, v29);
    return;
  }
  CombineRootComponent__ShowTutorial((CombineRootComponent_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetConfirmLvExceed(
        SetRarityDialogControl_o *this,
        UserServantEntity_o *baseData,
        System_String_o *msg,
        int32_t spendQp,
        int32_t haveQp,
        bool isCheck,
        const MethodInfo *method)
{
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  __int64 v42; // x1
  UnityEngine_GameObject_o *lvExceedConfirmSimpleInfo; // x0
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  UILabel_o *cancelBtnLb; // x23
  UILabel_o *decideBtnLb; // x23
  UILabel_o *lvExceedInfoLb; // x21
  UILabel_o *lvExceedSpendQpTxtLb; // x23
  UILabel_o *lvExceedHaveQpTxtLb; // x23
  UILabel_o *lvExceedSpendQpLb; // x23
  System_String_o *v52; // x24
  Il2CppObject *v53; // x0
  UILabel_o *lvExceedHaveQpLb; // x22
  System_String_o *v55; // x23
  Il2CppObject *v56; // x0
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v58; // x0
  System_Action_o *v59; // x21
  const MethodInfo *v60; // x5
  int32_t v61; // w1
  SetRarityDialogControl_o *v62; // x0
  int32_t v63; // [xsp+8h] [xbp-48h] BYREF
  int32_t v64; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42EBABB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)baseData, (_DWORD)msg, *(_QWORD *)&spendQp);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__152_0__, v18, v19, v20);
    sub_B5D5C4(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__152_1__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_9366/*"NEED_QP"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_3384/*"CONFIRM_EXCEED_COMBINE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_3234/*"COMBINE_HAVE_QP"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_8545/*"LVEXCEED_COMBINE_SPEND_QP"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v39, v40, v41);
    byte_42EBABB = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v44);
  SetRarityDialogControl__DefaultBgSize(this, v45);
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
                                                            (System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/,
                                                            0LL);
  if ( !cancelBtnLb )
    goto LABEL_37;
  UILabel__set_text(cancelBtnLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/,
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
                                                              (System_String_o *)StringLiteral_8545/*"LVEXCEED_COMBINE_SPEND_QP"*/,
                                                              0LL);
    if ( lvExceedSpendQpTxtLb )
    {
      UILabel__set_text(lvExceedSpendQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
      lvExceedHaveQpTxtLb = this->fields.lvExceedHaveQpTxtLb;
      lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_3234/*"COMBINE_HAVE_QP"*/,
                                                                0LL);
      if ( lvExceedHaveQpTxtLb )
      {
        UILabel__set_text(lvExceedHaveQpTxtLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
        lvExceedSpendQpLb = this->fields.lvExceedSpendQpLb;
        v52 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
        v64 = spendQp;
        v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
        lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)System_String__Format(v52, v53, 0LL);
        if ( lvExceedSpendQpLb )
        {
          UILabel__set_text(lvExceedSpendQpLb, (System_String_o *)lvExceedConfirmSimpleInfo, 0LL);
          lvExceedHaveQpLb = this->fields.lvExceedHaveQpLb;
          v55 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
          v63 = haveQp;
          v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63);
          lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)System_String__Format(v55, v56, 0LL);
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
    sub_B5D69C(lvExceedConfirmSimpleInfo, v42);
  }
  lvExceedInfoLb = this->fields.lvExceedInfoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  lvExceedConfirmSimpleInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3384/*"CONFIRM_EXCEED_COMBINE"*/,
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
    v58 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v59 = v58;
    if ( isCheck )
    {
      System_Action___ctor(v58, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmLvExceed_b__152_0__, 0LL);
      v61 = 8;
      v62 = this;
    }
    else
    {
      System_Action___ctor(v58, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmLvExceed_b__152_1__, 0LL);
      v62 = this;
      v61 = 0;
    }
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v62, v61, v59, 0LL, 0LL, v60);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__SetConfirmLvExceed_30953692(
        SetRarityDialogControl_o *this,
        System_Collections_Generic_List_GameObject__o *itemObjList,
        System_Int32_array *itemList,
        int32_t spendQp,
        int32_t haveQp,
        const MethodInfo *method)
{
  SetRarityDialogControl_o *v10; // x19
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
  struct CombineRootComponent_o *combineRootComponent; // x8
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  UILabel_o *lvExceedTitleLabel; // x24
  UILabel_o *lvExceedSpendItemLabel; // x24
  UILabel_o *lvExceedSpendQpTxtLabel; // x24
  UILabel_o *lvExceedHaveQpTxtLabel; // x24
  UILabel_o *lvExceedSpendQpLabel; // x24
  System_String_o *v64; // x25
  Il2CppObject *v65; // x0
  UILabel_o *lvExceedHaveQpLabel; // x23
  System_String_o *v67; // x24
  Il2CppObject *v68; // x0
  UILabel_o *lvExceedConfirmLabel; // x22
  int32_t size; // w8
  unsigned __int64 v71; // x23
  signed __int64 v72; // x24
  UnityEngine_GameObject_o *v73; // x22
  UnityEngine_Transform_o *transform; // x0
  System_Action_o *v75; // x20
  const MethodInfo *v76; // x5
  __int64 v77; // x0
  int32_t v78; // [xsp+8h] [xbp-58h] BYREF
  int32_t v79; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_42EBABC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)itemObjList, (_DWORD)itemList, *(_QWORD *)&spendQp);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v11, v12, v13);
    sub_B5D5C4(&int_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v20, v21, v22);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__153_0__, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_9366/*"NEED_QP"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_3397/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_3234/*"COMBINE_HAVE_QP"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_8544/*"LVEXCEED_COMBINE_SPEND_ITEM"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_8545/*"LVEXCEED_COMBINE_SPEND_QP"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_8546/*"LVEXCEED_EXE_CONFIRM"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v47, v48, v49);
    this = (SetRarityDialogControl_o *)sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v50, v51, v52);
    byte_42EBABC = 1;
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
    SetRarityDialogControl__MoveAlpha(v10, v54);
    SetRarityDialogControl__DefaultBgSize(v10, v55);
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
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelBtnLb )
      goto LABEL_35;
    UILabel__set_text(cancelBtnLb, (System_String_o *)this, 0LL);
    decideBtnLb = v10->fields.decideBtnLb;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideBtnLb )
      goto LABEL_35;
    UILabel__set_text(decideBtnLb, (System_String_o *)this, 0LL);
    lvExceedTitleLabel = v10->fields.lvExceedTitleLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3397/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
    if ( !lvExceedTitleLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedTitleLabel, (System_String_o *)this, 0LL);
    lvExceedSpendItemLabel = v10->fields.lvExceedSpendItemLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8544/*"LVEXCEED_COMBINE_SPEND_ITEM"*/, 0LL);
    if ( !lvExceedSpendItemLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedSpendItemLabel, (System_String_o *)this, 0LL);
    lvExceedSpendQpTxtLabel = v10->fields.lvExceedSpendQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8545/*"LVEXCEED_COMBINE_SPEND_QP"*/, 0LL);
    if ( !lvExceedSpendQpTxtLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedSpendQpTxtLabel, (System_String_o *)this, 0LL);
    lvExceedHaveQpTxtLabel = v10->fields.lvExceedHaveQpTxtLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3234/*"COMBINE_HAVE_QP"*/, 0LL);
    if ( !lvExceedHaveQpTxtLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedHaveQpTxtLabel, (System_String_o *)this, 0LL);
    lvExceedSpendQpLabel = v10->fields.lvExceedSpendQpLabel;
    v64 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
    v79 = spendQp;
    v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
    this = (SetRarityDialogControl_o *)System_String__Format(v64, v65, 0LL);
    if ( !lvExceedSpendQpLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedSpendQpLabel, (System_String_o *)this, 0LL);
    lvExceedHaveQpLabel = v10->fields.lvExceedHaveQpLabel;
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
    v78 = haveQp;
    v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78);
    this = (SetRarityDialogControl_o *)System_String__Format(v67, v68, 0LL);
    if ( !lvExceedHaveQpLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedHaveQpLabel, (System_String_o *)this, 0LL);
    lvExceedConfirmLabel = v10->fields.lvExceedConfirmLabel;
    this = (SetRarityDialogControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8546/*"LVEXCEED_EXE_CONFIRM"*/, 0LL);
    if ( !lvExceedConfirmLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedConfirmLabel, (System_String_o *)this, 0LL);
    if ( !itemObjList )
      goto LABEL_35;
    size = itemObjList->fields._size;
    if ( size >= 1 )
    {
      v71 = 0LL;
      v72 = size;
      while ( 1 )
      {
        if ( v71 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        this = (SetRarityDialogControl_o *)v10->fields.lvExceedConsumeItemGrid;
        if ( !this )
          break;
        v73 = itemObjList->fields._items->m_Items[v71];
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        this = (SetRarityDialogControl_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v10,
                                             v73,
                                             transform,
                                             0LL,
                                             0LL);
        if ( !this )
          break;
        this = (SetRarityDialogControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
        if ( !itemList )
          break;
        if ( v71 >= itemList->max_length )
        {
          v77 = sub_B5D6C8(this);
          sub_B5D668(v77, 0LL);
        }
        if ( !this )
          break;
        LimitCntUpItemComponent__SetItemEntity((LimitCntUpItemComponent_o *)this, itemList->m_Items[++v71], 0LL);
        if ( (__int64)v71 >= v72 )
          goto LABEL_32;
        size = itemObjList->fields._size;
      }
LABEL_35:
      sub_B5D69C(this, itemObjList);
    }
LABEL_32:
    this = (SetRarityDialogControl_o *)v10->fields.lvExceedConsumeItemGrid;
    if ( !this )
      goto LABEL_35;
    ((void (__fastcall *)(SetRarityDialogControl_o *, Il2CppClass *))this->klass[1]._1.castClass)(
      this,
      this->klass[1]._1.declaringType);
    v75 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v75, (Il2CppObject *)v10, Method_SetRarityDialogControl__SetConfirmLvExceed_b__153_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v10, 8, v75, 0LL, 0LL, v76);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  __int64 v51; // x1
  void *rariryConfirmInfo; // x0
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x1
  UILabel_o *cancelBtnLb; // x25
  UILabel_o *decideBtnLb; // x25
  const MethodInfo *v57; // x1
  __int64 v58; // x26
  float v59; // s8
  unsigned __int64 v60; // x25
  bool v61; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x0
  float y; // s9
  int v65; // w20
  int v66; // w9
  float z; // s2
  float v68; // s1
  float v69; // s0
  UILabel_o *spendQpTxtLb; // x23
  UILabel_o *haveQpTxtLb; // x23
  UILabel_o *spendQpLb; // x23
  System_String_o *v73; // x24
  Il2CppObject *v74; // x0
  UILabel_o *haveQpLb; // x22
  System_String_o *v76; // x23
  Il2CppObject *v77; // x0
  UILabel_o *rareMaterialMsgLb; // x21
  __int64 *v79; // x8
  UILabel_o *rareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v82; // x20
  const MethodInfo *v83; // x5
  __int64 v84; // x0
  int32_t v85; // [xsp+8h] [xbp-68h] BYREF
  int32_t v86; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EBAB1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)baseData, (_DWORD)list, msg);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v15, v16, v17);
    sub_B5D5C4(&int_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SetRarityDialogControl__SetConfirmRarityInfo_b__142_0__, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_9366/*"NEED_QP"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_3234/*"COMBINE_HAVE_QP"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_3379/*"CONFIRM_COMBINE_MSG"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_3233/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_11143/*"RARE_MATERIAL_INFO_MSG"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_3266/*"COMBINE_SPEND_QP"*/, v48, v49, v50);
    byte_42EBAB1 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v53);
  SetRarityDialogControl__DefaultBgSize(this, v54);
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
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_56;
  UILabel__set_text(cancelBtnLb, (System_String_o *)rariryConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_56;
  UILabel__set_text(decideBtnLb, (System_String_o *)rariryConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v57);
  if ( !list )
    goto LABEL_56;
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_56;
  LODWORD(v58) = list->max_length;
  v59 = *((float *)rariryConfirmInfo + 10);
  if ( (int)v58 >= 1 )
  {
    v60 = 0LL;
    v61 = 0;
    do
    {
      if ( v61 )
        goto LABEL_56;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
      rariryConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !rariryConfirmInfo )
        goto LABEL_56;
      rariryConfirmInfo = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            (UnityEngine_GameObject_o *)rariryConfirmInfo,
                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v60 >= list->max_length )
      {
        v84 = sub_B5D6C8(rariryConfirmInfo);
        sub_B5D668(v84, 0LL);
      }
      if ( !rariryConfirmInfo )
        goto LABEL_56;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)rariryConfirmInfo,
        v60,
        baseData,
        list->m_Items[v60],
        0,
        0,
        0LL,
        0LL);
      rariryConfirmInfo = this->fields.raritySvtGrid;
      v58 = *(_QWORD *)&list->max_length;
      ++v60;
      v61 = rariryConfirmInfo == 0LL;
    }
    while ( (__int64)v60 < (int)v58 );
    if ( !rariryConfirmInfo )
      goto LABEL_56;
  }
  y = this->fields.center.fields.y;
  v65 = *((_DWORD *)rariryConfirmInfo + 9);
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
  if ( !rariryConfirmInfo )
    goto LABEL_56;
  v66 = v65 >= (int)v58 ? v58 : v65;
  v68 = v65 >= (int)v58 ? y : 55.0;
  v69 = (float)(this->fields.center.fields.x - (float)((float)(v59 * 0.5) * (float)(v66 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)rariryConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v68 - 1),
    0LL);
  rariryConfirmInfo = this->fields.raritySvtGrid;
  if ( !rariryConfirmInfo )
    goto LABEL_56;
  rariryConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)rariryConfirmInfo, 0LL);
  if ( !rariryConfirmInfo )
    goto LABEL_56;
  v87.fields.x = 0.5;
  v87.fields.y = 0.5;
  v87.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rariryConfirmInfo, v87, 0LL);
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
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3266/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !spendQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(spendQpTxtLb, (System_String_o *)rariryConfirmInfo, 0LL);
  haveQpTxtLb = this->fields.haveQpTxtLb;
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3234/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !haveQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(haveQpTxtLb, (System_String_o *)rariryConfirmInfo, 0LL);
  spendQpLb = this->fields.spendQpLb;
  v73 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  v86 = spendQp;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86);
  rariryConfirmInfo = System_String__Format(v73, v74, 0LL);
  if ( !spendQpLb )
    goto LABEL_56;
  UILabel__set_text(spendQpLb, (System_String_o *)rariryConfirmInfo, 0LL);
  haveQpLb = this->fields.haveQpLb;
  v76 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  v85 = haveQp;
  v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v85);
  rariryConfirmInfo = System_String__Format(v76, v77, 0LL);
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
    v79 = &StringLiteral_3233/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v79 = &StringLiteral_11143/*"RARE_MATERIAL_INFO_MSG"*/;
  }
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)*v79, 0LL);
  if ( !rareMaterialMsgLb )
    goto LABEL_56;
  UILabel__set_text(rareMaterialMsgLb, (System_String_o *)rariryConfirmInfo, 0LL);
  rareConfirmMsgLb = this->fields.rareConfirmMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  rariryConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3379/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !rareConfirmMsgLb
    || (UILabel__set_text(rareConfirmMsgLb, (System_String_o *)rariryConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_56:
    sub_B5D69C(rariryConfirmInfo, v51);
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v82 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v82, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmRarityInfo_b__142_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v82, 0LL, 0LL, v83);
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
  __int64 v65; // x1
  UnityEngine_GameObject_o *normalConfirmInfo; // x0
  const MethodInfo *v67; // x1
  const MethodInfo *v68; // x1
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v71; // x1
  struct UIGrid_o *materialSvtGrid; // x8
  float v73; // s9
  int32_t v74; // w24
  UnityEngine_Component_o *v75; // x0
  Il2CppObject *key; // x25
  char value; // w27
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v81; // x1
  MaterialSvtInfo_o *Component_srcLineSprite; // x0
  __int64 v83; // x1
  __int64 v84; // x1
  float y; // s10
  int32_t Count; // w23
  struct UIGrid_o *v87; // x8
  float cellWidth; // w20
  int v89; // w22
  int32_t v90; // w9
  float v91; // s1
  float z; // s2
  float v93; // s0
  UILabel_o *normalSpendQpTxtLb; // x22
  UILabel_o *normalHaveQpTxtLb; // x22
  UILabel_o *confirmSpendQpLb; // x22
  System_String_o *v97; // x23
  Il2CppObject *v98; // x0
  UILabel_o *confirmHaveQpLb; // x21
  System_String_o *v100; // x22
  Il2CppObject *v101; // x0
  UILabel_o *confirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v104; // x20
  const MethodInfo *v105; // x5
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v107; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v108; // [xsp+40h] [xbp-A0h] BYREF
  int32_t v109; // [xsp+78h] [xbp-68h]
  int32_t v110; // [xsp+7Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EBAB4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)baseData, (_DWORD)msg, *(_QWORD *)&spendQp);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__, v26, v27, v28);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v29, v30, v31);
    sub_B5D5C4(&int_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__, v38, v39, v40);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__145_0__, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_9366/*"NEED_QP"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_3234/*"COMBINE_HAVE_QP"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_3379/*"CONFIRM_COMBINE_MSG"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_3266/*"COMBINE_SPEND_QP"*/, v62, v63, v64);
    byte_42EBAB4 = 1;
  }
  memset(&v108, 0, sizeof(v108));
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
  SetRarityDialogControl__MoveAlpha(this, v67);
  SetRarityDialogControl__DefaultBgSize(this, v68);
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
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_46;
  UILabel__set_text(cancelBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_46;
  UILabel__set_text(decideBtnLb, (System_String_o *)normalConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v71);
  if ( !selectedList )
    goto LABEL_46;
  v109 = haveQp;
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_2F50E3C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  materialSvtGrid = this->fields.materialSvtGrid;
  if ( !materialSvtGrid )
    goto LABEL_46;
  v73 = materialSvtGrid->fields.cellHeight * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v107,
    selectedList,
    (const MethodInfo_2F517E4 *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v108 = v107;
  v74 = 0;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v108,
            (const MethodInfo_28A88FC *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v75 = (UnityEngine_Component_o *)this->fields.materialSvtGrid;
    if ( !v75 )
      sub_B5D69C(0LL, v84);
    key = v108.fields.current.fields.key;
    value = (char)v108.fields.current.fields.value;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v75, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Object )
      sub_B5D69C(0LL, v81);
    Component_srcLineSprite = (MaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     Object,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_srcLineSprite )
      sub_B5D69C(0LL, v83);
    MaterialSvtInfo__setMaterialSvtInfo_24973644(
      Component_srcLineSprite,
      v74++,
      baseData,
      (int64_t)key,
      0,
      0,
      value != 0,
      0LL,
      0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v108,
    (const MethodInfo_28A8A60 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_2F50E3C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                    selectedList,
                                                    (const MethodInfo_2F50E3C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v87 = this->fields.materialSvtGrid;
  if ( !v87 )
    goto LABEL_46;
  cellWidth = v87->fields.cellWidth;
  v89 = (int)normalConfirmInfo;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)this->fields.materialSvtGrid,
                                                    0LL);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  if ( v89 <= SLODWORD(cellWidth) )
    v90 = Count;
  else
    v90 = LODWORD(cellWidth);
  v91 = 55.0;
  if ( v89 <= SLODWORD(cellWidth) )
    v91 = y;
  v93 = (float)(this->fields.center.fields.x - (float)(v73 * (float)(v90 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)normalConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v91 - 1),
    0LL);
  normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.materialSvtGrid;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  normalConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                    (UnityEngine_Component_o *)normalConfirmInfo,
                                                    0LL);
  if ( !normalConfirmInfo )
    goto LABEL_46;
  v111.fields.x = 0.5;
  v111.fields.y = 0.5;
  v111.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)normalConfirmInfo, v111, 0LL);
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
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3266/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !normalSpendQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalSpendQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3234/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !normalHaveQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalHaveQpTxtLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v97 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  LODWORD(v107.fields.dictionary) = spendQp;
  v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v107);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v97, v98, 0LL);
  if ( !confirmSpendQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmSpendQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v100 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  v110 = v109;
  v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v110);
  normalConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v100, v101, 0LL);
  if ( !confirmHaveQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmHaveQpLb, (System_String_o *)normalConfirmInfo, 0LL);
  confirmMsgLb = this->fields.confirmMsgLb;
  normalConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3379/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !confirmMsgLb
    || (UILabel__set_text(confirmMsgLb, (System_String_o *)normalConfirmInfo, 0LL),
        (normalConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (normalConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)normalConfirmInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(normalConfirmInfo, 0, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_46:
    sub_B5D69C(normalConfirmInfo, v65);
  }
  if ( combineRootComponent->fields.state == 4 )
  {
    v104 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v104,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__145_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v104, 0LL, 0LL, v105);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  __int64 v46; // x1
  void *exceedConfirmInfo; // x0
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x1
  UILabel_o *cancelBtnLb; // x24
  UILabel_o *decideBtnLb; // x24
  const MethodInfo *v52; // x1
  __int64 v53; // x25
  float v54; // s8
  unsigned __int64 v55; // x24
  bool v56; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x25
  UnityEngine_Transform_o *transform; // x0
  float y; // s9
  int v60; // w22
  int v61; // w9
  float z; // s2
  float v63; // s1
  float v64; // s0
  UILabel_o *exceedConfirmSpendQpTxtLb; // x22
  UILabel_o *exceedConfirmHaveQpTxtLb; // x22
  UILabel_o *exceedConfirmSpendQpLb; // x22
  System_String_o *v68; // x23
  Il2CppObject *v69; // x0
  UILabel_o *exceedConfirmHaveQpLb; // x21
  System_String_o *v71; // x22
  Il2CppObject *v72; // x0
  UILabel_o *exceedMaterialMsgLb; // x20
  UILabel_o *exceedConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v76; // x20
  const MethodInfo *v77; // x5
  __int64 v78; // x0
  int32_t v79; // [xsp+8h] [xbp-68h] BYREF
  int32_t v80; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EBAB2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)baseData, (_DWORD)list, msg);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v13, v14, v15);
    sub_B5D5C4(&int_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SetRarityDialogControl__SetExceedMaterialInfo_b__143_0__, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_9366/*"NEED_QP"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_3234/*"COMBINE_HAVE_QP"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_3379/*"CONFIRM_COMBINE_MSG"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_3233/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_3266/*"COMBINE_SPEND_QP"*/, v43, v44, v45);
    byte_42EBAB2 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v48);
  SetRarityDialogControl__DefaultBgSize(this, v49);
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
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_44;
  UILabel__set_text(cancelBtnLb, (System_String_o *)exceedConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_44;
  UILabel__set_text(decideBtnLb, (System_String_o *)exceedConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v52);
  if ( !list )
    goto LABEL_44;
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_44;
  LODWORD(v53) = list->max_length;
  v54 = *((float *)exceedConfirmInfo + 10);
  if ( (int)v53 >= 1 )
  {
    v55 = 0LL;
    v56 = 0;
    do
    {
      if ( v56 )
        goto LABEL_44;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
      exceedConfirmInfo = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !exceedConfirmInfo )
        goto LABEL_44;
      exceedConfirmInfo = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            (UnityEngine_GameObject_o *)exceedConfirmInfo,
                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v55 >= list->max_length )
      {
        v78 = sub_B5D6C8(exceedConfirmInfo);
        sub_B5D668(v78, 0LL);
      }
      if ( !exceedConfirmInfo )
        goto LABEL_44;
      MaterialSvtInfo__setMaterialSvtInfo(
        (MaterialSvtInfo_o *)exceedConfirmInfo,
        v55,
        baseData,
        list->m_Items[v55],
        0,
        0,
        0LL,
        0LL);
      exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
      v53 = *(_QWORD *)&list->max_length;
      ++v55;
      v56 = exceedConfirmInfo == 0LL;
    }
    while ( (__int64)v55 < (int)v53 );
    if ( !exceedConfirmInfo )
      goto LABEL_44;
  }
  y = this->fields.center.fields.y;
  v60 = *((_DWORD *)exceedConfirmInfo + 9);
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
  if ( !exceedConfirmInfo )
    goto LABEL_44;
  v61 = v60 >= (int)v53 ? v53 : v60;
  v63 = v60 >= (int)v53 ? y : 55.0;
  v64 = (float)(this->fields.center.fields.x - (float)((float)(v54 * 0.5) * (float)(v61 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)exceedConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v63 - 1),
    0LL);
  exceedConfirmInfo = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmInfo )
    goto LABEL_44;
  exceedConfirmInfo = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmInfo, 0LL);
  if ( !exceedConfirmInfo )
    goto LABEL_44;
  v81.fields.x = 0.5;
  v81.fields.y = 0.5;
  v81.fields.z = 0.5;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)exceedConfirmInfo, v81, 0LL);
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
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3266/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !exceedConfirmSpendQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(exceedConfirmSpendQpTxtLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmHaveQpTxtLb = this->fields.exceedConfirmHaveQpTxtLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3234/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !exceedConfirmHaveQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(exceedConfirmHaveQpTxtLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmSpendQpLb = this->fields.exceedConfirmSpendQpLb;
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  v80 = spendQp;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
  exceedConfirmInfo = System_String__Format(v68, v69, 0LL);
  if ( !exceedConfirmSpendQpLb )
    goto LABEL_44;
  UILabel__set_text(exceedConfirmSpendQpLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedConfirmHaveQpLb = this->fields.exceedConfirmHaveQpLb;
  v71 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  v79 = haveQp;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
  exceedConfirmInfo = System_String__Format(v71, v72, 0LL);
  if ( !exceedConfirmHaveQpLb )
    goto LABEL_44;
  UILabel__set_text(exceedConfirmHaveQpLb, (System_String_o *)exceedConfirmInfo, 0LL);
  exceedMaterialMsgLb = this->fields.exceedMaterialMsgLb;
  exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3233/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, 0LL);
  if ( !exceedMaterialMsgLb
    || (UILabel__set_text(exceedMaterialMsgLb, (System_String_o *)exceedConfirmInfo, 0LL),
        exceedConfirmMsgLb = this->fields.exceedConfirmMsgLb,
        exceedConfirmInfo = LocalizationManager__Get((System_String_o *)StringLiteral_3379/*"CONFIRM_COMBINE_MSG"*/, 0LL),
        !exceedConfirmMsgLb)
    || (UILabel__set_text(exceedConfirmMsgLb, (System_String_o *)exceedConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_44:
    sub_B5D69C(exceedConfirmInfo, v46);
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v76 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v76,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetExceedMaterialInfo_b__143_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 0, v76, 0LL, 0LL, v77);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x1
  UnityEngine_GameObject_o *friendshipExceedConfirmInfo; // x0
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  UILabel_o *cancelBtnLb; // x22
  UILabel_o *decideBtnLb; // x22
  UILabel_o *friendshipExceedSpendQpTxtLb; // x22
  UILabel_o *friendshipExceedHaveQpTxtLb; // x22
  UILabel_o *friendshipExceedSpendQpLb; // x22
  System_String_o *v45; // x23
  Il2CppObject *v46; // x0
  UILabel_o *friendshipExceedHaveQpLb; // x21
  System_String_o *v48; // x22
  Il2CppObject *v49; // x0
  UILabel_o *friendshipExceedMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v52; // x20
  const MethodInfo *v53; // x5
  int32_t v54; // [xsp+8h] [xbp-38h] BYREF
  int32_t v55; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EBAC1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)msg, spendQp, *(_QWORD *)&haveQp);
    sub_B5D5C4(&int_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__158_0__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_9366/*"NEED_QP"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_3234/*"COMBINE_HAVE_QP"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_6532/*"FRIENDSHIP_EXCEED_SPEND_QP"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_3387/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/, v33, v34, v35);
    byte_42EBAC1 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v38);
  SetRarityDialogControl__DefaultBgSize(this, v39);
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
                                                              (System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0LL);
  if ( !cancelBtnLb )
    goto LABEL_22;
  UILabel__set_text(cancelBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0LL);
  if ( !decideBtnLb )
    goto LABEL_22;
  UILabel__set_text(decideBtnLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedSpendQpTxtLb = this->fields.friendshipExceedSpendQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_6532/*"FRIENDSHIP_EXCEED_SPEND_QP"*/,
                                                              0LL);
  if ( !friendshipExceedSpendQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(friendshipExceedSpendQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedHaveQpTxtLb = this->fields.friendshipExceedHaveQpTxtLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3234/*"COMBINE_HAVE_QP"*/,
                                                              0LL);
  if ( !friendshipExceedHaveQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(friendshipExceedHaveQpTxtLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedSpendQpLb = this->fields.friendshipExceedSpendQpLb;
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  v55 = spendQp;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v45, v46, 0LL);
  if ( !friendshipExceedSpendQpLb )
    goto LABEL_22;
  UILabel__set_text(friendshipExceedSpendQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedHaveQpLb = this->fields.friendshipExceedHaveQpLb;
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  v54 = haveQp;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v48, v49, 0LL);
  if ( !friendshipExceedHaveQpLb )
    goto LABEL_22;
  UILabel__set_text(friendshipExceedHaveQpLb, (System_String_o *)friendshipExceedConfirmInfo, 0LL);
  friendshipExceedMsgLb = this->fields.friendshipExceedMsgLb;
  friendshipExceedConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3387/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/,
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
    sub_B5D69C(friendshipExceedConfirmInfo, v36);
  }
  if ( combineRootComponent->fields.state == 12 )
  {
    v52 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v52,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__158_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v52, 0LL, 0LL, v53);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  __int64 v43; // x20
  UnityEngine_GameObject_o *limitUpConfirmInfo; // x0
  __int64 v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  const MethodInfo *v64; // x1
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x1
  UILabel_o *cancelBtnLb; // x23
  UILabel_o *decideBtnLb; // x23
  UILabel_o *limitUpConfirmSpendQpTxtLb; // x23
  UILabel_o *limitUpConfirmHaveQpTxtLb; // x23
  UILabel_o *limitUpConfirmSpendQpLb; // x23
  System_String_o *v72; // x24
  Il2CppObject *v73; // x0
  UILabel_o *limitUpConfirmHaveQpLb; // x22
  System_String_o *v75; // x23
  Il2CppObject *v76; // x0
  UILabel_o *limitUpConfirmMsgLb; // x21
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v79; // x21
  const MethodInfo *v80; // x5
  int32_t v81; // [xsp+8h] [xbp-48h] BYREF
  int32_t v82; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42EBAB7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)baseData, (_DWORD)combineLimitUpWarningDialog, msg);
    sub_B5D5C4(&int_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SetRarityDialogControl___c__DisplayClass148_0__SetLimitUpInfo_b__0__, v19, v20, v21);
    sub_B5D5C4(&SetRarityDialogControl___c__DisplayClass148_0_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_9366/*"NEED_QP"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_3234/*"COMBINE_HAVE_QP"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_3379/*"CONFIRM_COMBINE_MSG"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_3266/*"COMBINE_SPEND_QP"*/, v40, v41, v42);
    byte_42EBAB7 = 1;
  }
  v43 = sub_B5D694(SetRarityDialogControl___c__DisplayClass148_0_TypeInfo);
  SetRarityDialogControl___c__DisplayClass148_0___ctor((SetRarityDialogControl___c__DisplayClass148_0_o *)v43, 0LL);
  if ( !v43 )
    goto LABEL_23;
  *(_QWORD *)(v43 + 16) = baseData;
  sub_B5D560((BattleServantConfConponent_o *)(v43 + 16), (System_Int32_array **)baseData, v46, v47, v48, v49, v50, v51);
  *(_QWORD *)(v43 + 24) = combineLimitUpWarningDialog;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v43 + 24),
    (System_Int32_array **)combineLimitUpWarningDialog,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  *(_QWORD *)(v43 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v43 + 32), (System_Int32_array **)this, v58, v59, v60, v61, v62, v63);
  SetRarityDialogControl__DisableConfirmInfo(this, v64);
  limitUpConfirmInfo = this->fields.limitUpConfirmInfo;
  if ( !limitUpConfirmInfo )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0LL);
  limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !limitUpConfirmInfo )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v65);
  SetRarityDialogControl__DefaultBgSize(this, v66);
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
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_23;
  UILabel__set_text(cancelBtnLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_23;
  UILabel__set_text(decideBtnLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmSpendQpTxtLb = this->fields.limitUpConfirmSpendQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3266/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !limitUpConfirmSpendQpTxtLb )
    goto LABEL_23;
  UILabel__set_text(limitUpConfirmSpendQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmHaveQpTxtLb = this->fields.limitUpConfirmHaveQpTxtLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3234/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !limitUpConfirmHaveQpTxtLb )
    goto LABEL_23;
  UILabel__set_text(limitUpConfirmHaveQpTxtLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmSpendQpLb = this->fields.limitUpConfirmSpendQpLb;
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  v82 = spendQp;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v72, v73, 0LL);
  if ( !limitUpConfirmSpendQpLb )
    goto LABEL_23;
  UILabel__set_text(limitUpConfirmSpendQpLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmHaveQpLb = this->fields.limitUpConfirmHaveQpLb;
  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  v81 = haveQp;
  v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81);
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v75, v76, 0LL);
  if ( !limitUpConfirmHaveQpLb )
    goto LABEL_23;
  UILabel__set_text(limitUpConfirmHaveQpLb, (System_String_o *)limitUpConfirmInfo, 0LL);
  limitUpConfirmMsgLb = this->fields.limitUpConfirmMsgLb;
  limitUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3379/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !limitUpConfirmMsgLb
    || (UILabel__set_text(limitUpConfirmMsgLb, (System_String_o *)limitUpConfirmInfo, 0LL),
        (limitUpConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (limitUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)limitUpConfirmInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 0, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_23:
    sub_B5D69C(limitUpConfirmInfo, v45);
  }
  if ( combineRootComponent->fields.state == 5 )
  {
    v79 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v79,
      (Il2CppObject *)v43,
      Method_SetRarityDialogControl___c__DisplayClass148_0__SetLimitUpInfo_b__0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v79, 0LL, 0LL, v80);
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
  __int64 v41; // x1
  UnityEngine_GameObject_o *npUpConfirmInfo; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *npUpTitleLb; // x21
  __int64 *v65; // x8
  UILabel_o *cancelBtnLb; // x21
  UILabel_o *decideBtnLb; // x21
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v69; // x20
  System_Action_o *v70; // x21
  const MethodInfo *v71; // x5
  SetRarityDialogControl_o *v72; // x0
  int32_t v73; // w1

  if ( (byte_42EBABA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)baseData, (_DWORD)selectUsrSvtIdList, updata);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SetRarityDialogControl_DefaultBgSize__, v20, v21, v22);
    sub_B5D5C4(&Method_SetRarityDialogControl__SetNpCombineInfo_b__151_0__, v23, v24, v25);
    sub_B5D5C4(&Method_SetRarityDialogControl__SetNpCombineInfo_b__151_1__, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_3407/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_3405/*"CONFIRM_TITLE_TD_COMBINE"*/, v38, v39, v40);
    byte_42EBABA = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  npUpConfirmInfo = this->fields.npUpConfirmInfo;
  if ( !npUpConfirmInfo )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0LL);
  this->fields.npBaseData = baseData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.npBaseData,
    (System_Int32_array **)baseData,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.npSelectMtUsrSvtIdList = selectUsrSvtIdList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.npSelectMtUsrSvtIdList,
    (System_Int32_array **)selectUsrSvtIdList,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.npLvUpData = updata;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.npLvUpData,
    (System_Int32_array **)updata,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  this->fields.npIsExceedMaxLv = isExceedMaxLv;
  this->fields.npIsCombineSvt = isCombineSvt;
  this->fields.npIsExceededMaterial = isExceededMaterial;
  this->fields.reConfirmation = reConfirmation;
  npUpConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !npUpConfirmInfo )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v61);
  SetRarityDialogControl__DefaultBgSize(this, v62);
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
    v65 = &StringLiteral_3407/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v65 = &StringLiteral_3405/*"CONFIRM_TITLE_TD_COMBINE"*/;
  }
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v65, 0LL);
  if ( !npUpTitleLb )
    goto LABEL_32;
  UILabel__set_text(npUpTitleLb, (System_String_o *)npUpConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb
    || (UILabel__set_text(cancelBtnLb, (System_String_o *)npUpConfirmInfo, 0LL),
        decideBtnLb = this->fields.decideBtnLb,
        npUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/,
                                                        0LL),
        !decideBtnLb)
    || (UILabel__set_text(decideBtnLb, (System_String_o *)npUpConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_32:
    sub_B5D69C(npUpConfirmInfo, v41);
  }
  if ( combineRootComponent->fields.state == 11 )
  {
    if ( (this->fields.npIsExceedMaxLv || this->fields.npIsCombineSvt || this->fields.npIsExceededMaterial)
      && !reConfirmation )
    {
      v69 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v69, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__151_0__, 0LL);
      v70 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v70, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
      v72 = this;
      v73 = 0;
    }
    else
    {
      v69 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v69, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__151_1__, 0LL);
      v70 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v70, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
      v73 = 8;
      v72 = this;
    }
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v72, v73, v69, 0LL, v70, v71);
  }
}


void __fastcall SetRarityDialogControl__SetSkillNpCombineInfo(
        SetRarityDialogControl_o *this,
        SetLevelUpData_o *updata,
        System_String_o *titleMsg,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  __int64 v34; // x1
  UnityEngine_GameObject_o *skillUpConfirmInfo; // x0
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  UIExtrusionLabel_o *currentLvLb; // x21
  UIExtrusionLabel_o *resLvLb; // x21
  UILabel_o *upSpendQpTxtLb; // x21
  UILabel_o *upHaveQpTxtLb; // x21
  UILabel_o *upSpendQpLb; // x21
  System_String_o *v43; // x22
  Il2CppObject *v44; // x0
  UILabel_o *upHaveQpLb; // x21
  System_String_o *v46; // x22
  Il2CppObject *v47; // x0
  UILabel_o *upConfirmMsgLb; // x20
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v52; // x20
  const MethodInfo *v53; // x5
  int32_t haveQp; // [xsp+8h] [xbp-38h] BYREF
  int32_t spendQp; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EBAB8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)updata, (_DWORD)titleMsg, method);
    sub_B5D5C4(&int_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__149_0__, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_9366/*"NEED_QP"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_3234/*"COMBINE_HAVE_QP"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_3379/*"CONFIRM_COMBINE_MSG"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_3266/*"COMBINE_SPEND_QP"*/, v31, v32, v33);
    byte_42EBAB8 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v36);
  SetRarityDialogControl__DefaultBgSize(this, v37);
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
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3266/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !upSpendQpTxtLb )
    goto LABEL_25;
  UILabel__set_text(upSpendQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3234/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !upHaveQpTxtLb )
    goto LABEL_25;
  UILabel__set_text(upHaveQpTxtLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upSpendQpLb = this->fields.upSpendQpLb;
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  spendQp = updata->fields.spendQp;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendQp);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v43, v44, 0LL);
  if ( !upSpendQpLb )
    goto LABEL_25;
  UILabel__set_text(upSpendQpLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upHaveQpLb = this->fields.upHaveQpLb;
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  haveQp = updata->fields.haveQp;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveQp);
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v46, v47, 0LL);
  if ( !upHaveQpLb )
    goto LABEL_25;
  UILabel__set_text(upHaveQpLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  upConfirmMsgLb = this->fields.upConfirmMsgLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3379/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !upConfirmMsgLb )
    goto LABEL_25;
  UILabel__set_text(upConfirmMsgLb, (System_String_o *)skillUpConfirmInfo, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb
    || (UILabel__set_text(cancelBtnLb, (System_String_o *)skillUpConfirmInfo, 0LL),
        decideBtnLb = this->fields.decideBtnLb,
        skillUpConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/,
                                                           0LL),
        !decideBtnLb)
    || (UILabel__set_text(decideBtnLb, (System_String_o *)skillUpConfirmInfo, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_25:
    sub_B5D69C(skillUpConfirmInfo, v34);
  }
  if ( combineRootComponent->fields.state == 10 )
  {
    v52 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v52,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__149_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v52, 0LL, 0LL, v53);
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
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  __int64 v43; // x1
  UnityEngine_GameObject_o *specialAscensionConfirmInfo; // x0
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  System_String_o *v47; // x20
  UILabel_o *cancelBtnLb; // x20
  UILabel_o *decideBtnLb; // x20
  System_Action_o *v50; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v52; // x21
  const MethodInfo *v53; // x5
  SetRarityDialogControl_o *v54; // x0
  int32_t v55; // w1

  if ( (byte_42EBAC2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)baseData, confirm, warning1);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___, v10, v11, v12);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SetRarityDialogControl__SetSpecialAscension_b__159_0__, v16, v17, v18);
    sub_B5D5C4(&Method_SetRarityDialogControl__SetSpecialAscension_b__159_1__, v19, v20, v21);
    sub_B5D5C4(&Method_SetRarityDialogControl__SetSpecialAscension_b__159_2__, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_12434/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_12438/*"SPECIAL_ASCENSION_WARNING1_TXT"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_12439/*"SPECIAL_ASCENSION_WARNING2_TXT"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_1/*""*/, v40, v41, v42);
    byte_42EBAC2 = 1;
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
  SetRarityDialogControl__MoveAlpha(this, v45);
  SetRarityDialogControl__DefaultBgSize(this, v46);
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
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_12434/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/, 0LL);
    this->fields.specialAscensionConfirm = 0;
  }
  else if ( warning1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_12438/*"SPECIAL_ASCENSION_WARNING1_TXT"*/, 0LL);
    this->fields.specialAscensionWarning1 = 0;
  }
  else if ( warning2 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_12439/*"SPECIAL_ASCENSION_WARNING2_TXT"*/, 0LL);
    this->fields.specialAscensionWarning2 = 0;
  }
  else
  {
    v47 = (System_String_o *)StringLiteral_1/*""*/;
  }
  specialAscensionConfirmInfo = this->fields.specialAscensionConfirmInfo;
  if ( !specialAscensionConfirmInfo )
    goto LABEL_41;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              specialAscensionConfirmInfo,
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___);
  if ( !specialAscensionConfirmInfo )
    goto LABEL_41;
  SpecialAscensionConfirmInfo__SetSpecialAscensionConfirmInfo(
    (SpecialAscensionConfirmInfo_o *)specialAscensionConfirmInfo,
    v47,
    25,
    0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/,
                                                              0LL);
  if ( !cancelBtnLb )
    goto LABEL_41;
  UILabel__set_text(cancelBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/,
                                                              0LL);
  if ( !decideBtnLb
    || (UILabel__set_text(decideBtnLb, (System_String_o *)specialAscensionConfirmInfo, 0LL),
        (specialAscensionConfirmInfo = (UnityEngine_GameObject_o *)this->fields.statusUpInfoLb) == 0LL)
    || (specialAscensionConfirmInfo = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)specialAscensionConfirmInfo,
                                        0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 0, 0LL),
        v50 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v50,
          (Il2CppObject *)this,
          Method_SetRarityDialogControl__SetSpecialAscension_b__159_0__,
          0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_41:
    sub_B5D69C(specialAscensionConfirmInfo, v43);
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
      v52 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v52,
        (Il2CppObject *)this,
        Method_SetRarityDialogControl__SetSpecialAscension_b__159_1__,
        0LL);
      v55 = 8;
      v54 = this;
      goto LABEL_39;
    }
    v52 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v52, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__159_2__, 0LL);
    v54 = this;
    v55 = 0;
LABEL_39:
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v54, v55, v52, v50, 0LL, v53);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  __int64 v69; // x1
  UnityEngine_GameObject_o *allDispConfirmInfo; // x0
  const MethodInfo *v71; // x1
  const MethodInfo *v72; // x1
  UILabel_o *cancelBtnLb; // x26
  UILabel_o *decideBtnLb; // x26
  const MethodInfo *v75; // x1
  struct UIGrid_o *allSvtGrid; // x8
  float v77; // s9
  int32_t v78; // w26
  UnityEngine_Component_o *v79; // x0
  char value; // w23
  Il2CppObject *key; // x27
  UnityEngine_GameObject_o *svtFaceInfo; // x28
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  __int64 v85; // x1
  MaterialSvtInfo_o *Component_srcLineSprite; // x0
  __int64 v87; // x1
  __int64 v88; // x1
  float y; // s10
  int32_t Count; // w25
  struct UIGrid_o *v91; // x8
  float cellWidth; // w20
  int v93; // w24
  int32_t v94; // w10
  float v95; // s1
  float z; // s2
  float v97; // s0
  UILabel_o *allSpendQpTxtLb; // x24
  UILabel_o *allHaveQpTxtLb; // x24
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v101; // x25
  Il2CppObject *v102; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v104; // x24
  Il2CppObject *v105; // x0
  UILabel_o *allRareMsgLb; // x20
  UILabel_o *allLimitRareLb; // x20
  UILabel_o *allRareConfirmMsgLb; // x20
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v110; // x20
  const MethodInfo *v111; // x5
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v113; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v114; // [xsp+40h] [xbp-A0h] BYREF
  _BOOL4 v115; // [xsp+78h] [xbp-68h]
  int32_t v116; // [xsp+7Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4

  v115 = isRare;
  if ( (byte_42EBABD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)baseData, (_DWORD)selectedList, title);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__, v27, v28, v29);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v30, v31, v32);
    sub_B5D5C4(&int_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__, v39, v40, v41);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__154_0__, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_9366/*"NEED_QP"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_3234/*"COMBINE_HAVE_QP"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_3379/*"CONFIRM_COMBINE_MSG"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_11143/*"RARE_MATERIAL_INFO_MSG"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_3266/*"COMBINE_SPEND_QP"*/, v66, v67, v68);
    byte_42EBABD = 1;
  }
  memset(&v114, 0, sizeof(v114));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
  allDispConfirmInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v71);
  SetRarityDialogControl__DefaultBgSize(this, v72);
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
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_74;
  UILabel__set_text(cancelBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_74;
  UILabel__set_text(decideBtnLb, (System_String_o *)allDispConfirmInfo, 0LL);
  SetRarityDialogControl__SetCenter(this, v75);
  if ( !selectedList )
    goto LABEL_74;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_2F50E3C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allSvtGrid = this->fields.allSvtGrid;
  if ( !allSvtGrid )
    goto LABEL_74;
  v77 = allSvtGrid->fields.cellHeight * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v113,
    selectedList,
    (const MethodInfo_2F517E4 *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v114 = v113;
  v78 = 0;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v114,
            (const MethodInfo_28A88FC *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v79 = (UnityEngine_Component_o *)this->fields.allSvtGrid;
    if ( !v79 )
      sub_B5D69C(0LL, v88);
    key = v114.fields.current.fields.key;
    value = (char)v114.fields.current.fields.value;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v79, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Object )
      sub_B5D69C(0LL, v85);
    Component_srcLineSprite = (MaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     Object,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_srcLineSprite )
      sub_B5D69C(0LL, v87);
    MaterialSvtInfo__setMaterialSvtInfo_24973644(
      Component_srcLineSprite,
      v78++,
      baseData,
      (int64_t)key,
      0,
      0,
      value != 0,
      0LL,
      0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v114,
    (const MethodInfo_28A8A60 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_2F50E3C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_long__bool___get_Count(
                                                     selectedList,
                                                     (const MethodInfo_2F50E3C *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v91 = this->fields.allSvtGrid;
  if ( !v91 )
    goto LABEL_74;
  cellWidth = v91->fields.cellWidth;
  v93 = (int)allDispConfirmInfo;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this->fields.allSvtGrid,
                                                     0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  if ( v93 <= SLODWORD(cellWidth) )
    v94 = Count;
  else
    v94 = LODWORD(cellWidth);
  v95 = 70.0;
  if ( v93 <= SLODWORD(cellWidth) )
    v95 = y;
  v97 = (float)(this->fields.center.fields.x - (float)(v77 * (float)(v94 - 1))) * 0.47;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)allDispConfirmInfo,
    *(UnityEngine_Vector3_o *)(&v95 - 1),
    0LL);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)this->fields.allSvtGrid;
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)allDispConfirmInfo,
                                                     0LL);
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  v117.fields.x = 0.47;
  v117.fields.y = 0.47;
  v117.fields.z = 0.47;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)allDispConfirmInfo, v117, 0LL);
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
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3266/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !allSpendQpTxtLb )
    goto LABEL_74;
  UILabel__set_text(allSpendQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3234/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !allHaveQpTxtLb )
    goto LABEL_74;
  UILabel__set_text(allHaveQpTxtLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allSpendQpLb = this->fields.allSpendQpLb;
  v101 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  LODWORD(v113.fields.dictionary) = spendQp;
  v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v113);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v101, v102, 0LL);
  if ( !allSpendQpLb )
    goto LABEL_74;
  UILabel__set_text(allSpendQpLb, (System_String_o *)allDispConfirmInfo, 0LL);
  allHaveQpLb = this->fields.allHaveQpLb;
  v104 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NEED_QP"*/, 0LL);
  v116 = haveQp;
  v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v116);
  allDispConfirmInfo = (UnityEngine_GameObject_o *)System_String__Format(v104, v105, 0LL);
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
    if ( !v115 )
      goto LABEL_63;
    allRareMsgLb = this->fields.allRareMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11143/*"RARE_MATERIAL_INFO_MSG"*/,
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
  if ( v115 )
  {
    allLimitRareLb = this->fields.allLimitRareLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_11143/*"RARE_MATERIAL_INFO_MSG"*/,
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
    sub_B5D69C(allDispConfirmInfo, v69);
  }
LABEL_63:
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  allDispConfirmInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3379/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !allRareConfirmMsgLb )
    goto LABEL_74;
  UILabel__set_text(allRareConfirmMsgLb, (System_String_o *)allDispConfirmInfo, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_74;
  if ( combineRootComponent->fields.state == 4 )
  {
    v110 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v110,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__154_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v110, 0LL, 0LL, v111);
  }
}


void __fastcall SetRarityDialogControl___SetAllDispConfirmCombine_b__146_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B5D69C(0LL, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetAppendSkillCombineInfo_b__150_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B5D69C(0LL, method);
  CombineRootComponent__RequestAppendSkillCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmCombine_b__144_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B5D69C(0LL, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__152_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B5D69C(0LL, method);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__152_1(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.lvExceedCtr) == 0LL )
    sub_B5D69C(this, method);
  LevelExceedControl__OnClickCheckLvExceed((LevelExceedControl_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__153_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B5D69C(0LL, method);
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmRarityInfo_b__142_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B5D69C(0LL, method);
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmSvtEqCombine_b__145_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B5D69C(0LL, method);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetExceedMaterialInfo_b__143_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (this = (SetRarityDialogControl_o *)combineRootComponent->fields.svtCombineCtr) == 0LL )
    sub_B5D69C(this, method);
  ServantCombineControl__CheckRareSvt((ServantCombineControl_o *)this, 0LL);
}


void __fastcall SetRarityDialogControl___SetFriendshipExceedInfo_b__158_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
  CombineRootComponent__RequestTdCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetSkillNpCombineInfo_b__149_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, method);
  if ( specialAscensionCtr->fields.pushExeButton )
    specialAscensionCtr->fields.pushExeButton = 0;
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__159_1(
        SetRarityDialogControl_o *this,
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
  __int64 v23; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v26; // x21
  System_Action_o *v27; // x22

  if ( (byte_42EBACA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CombineRootComponent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SetRarityDialogControl__SetSpecialAscension_b__159_3__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_12436/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    byte_42EBACA = 1;
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
    sub_B5D69C(combineRootComponent, v23);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12436/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0LL);
  v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__159_3__, 0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__OpenNotificationDialog(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v26,
    v27,
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
  UserServantEntity_o *v23; // x1
  const MethodInfo *v24; // x5
  CommonUI_o *Instance; // x20
  System_String_o *v26; // x21
  System_Action_o *v27; // x22
  __int64 v28; // x0
  __int64 v29; // x1

  if ( (byte_42EBACB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CombineRootComponent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SetRarityDialogControl__SetSpecialAscension_b__159_4__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_12436/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    byte_42EBACB = 1;
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
      v23,
      this->fields.specialAscensionConfirm,
      this->fields.specialAscensionWarning1,
      this->fields.specialAscensionWarning2,
      v24);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12436/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0LL);
    v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__159_4__, 0LL);
    if ( !Instance )
      sub_B5D69C(v28, v29);
    CommonUI__OpenNotificationDialog(
      Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v26,
      v27,
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, method);
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x0

  if ( (byte_42E5DBB & 1) == 0 )
  {
    sub_B5D5C4(&SetRarityDialogControl___c_TypeInfo, v1, v2, v3);
    byte_42E5DBB = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SetRarityDialogControl___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SetRarityDialogControl___c_o *)v4;
  sub_B5D560(static_fields);
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
  return NpCombineControl__CheckConfirm_26143828(x, 0LL);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x20
  int64_t UserId; // x21
  int64_t Instance; // x0
  __int64 v50; // x1
  __int64 v51; // x8
  int64_t v52; // x22
  unsigned __int64 v53; // x26
  __int64 v54; // x23
  __int128 v55; // q0
  __int64 v56; // x24
  __int64 v57; // x25
  struct UserServantEntity_o *baseData; // x8
  int v59; // w24
  __int128 v60; // q0
  struct UserServantEntity_o *v61; // x8
  __int128 v62; // q0
  int64_t v63; // x24
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__148_1; // x21
  Il2CppObject *v66; // x22
  struct SetRarityDialogControl___c_StaticFields *v67; // x0
  CombineLimitUpWarningDialog_ClickDelegate_o *_9__2; // x21
  CombineLimitUpWarningDialog_o *combineLimitUpWarningDialog; // x20
  struct SetRarityDialogControl_o *_4__this; // x8
  __int64 v71; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_42E5DBC & 1) == 0 )
  {
    sub_B5D5C4(&CombineLimitUpWarningDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Predicate_UserServantEntity___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Predicate_UserServantEntity__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&Method_SetRarityDialogControl___c__SetLimitUpInfo_b__148_1__, v38, v39, v40);
    sub_B5D5C4(&Method_SetRarityDialogControl___c__DisplayClass148_0__SetLimitUpInfo_b__2__, v41, v42, v43);
    sub_B5D5C4(&SetRarityDialogControl___c_TypeInfo, v44, v45, v46);
    byte_42E5DBC = 1;
  }
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_50;
  Instance = (int64_t)UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_50;
  v51 = *(_QWORD *)(Instance + 24);
  v52 = Instance;
  if ( (int)v51 >= 1 )
  {
    v53 = 0LL;
    do
    {
      if ( v53 >= (unsigned int)v51 )
      {
        v71 = sub_B5D6C8(Instance);
        sub_B5D668(v71, 0LL);
      }
      v54 = *(_QWORD *)(v52 + 32 + 8 * v53);
      if ( v54 )
      {
        v55 = *(_OWORD *)(v54 + 64);
        *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)(v54 + 48);
        *(_OWORD *)&v75.fields.fakeValue = v55;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v74 = v75;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v74, 0LL);
        if ( Instance == UserId )
        {
          Instance = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v54, 0LL);
          if ( (Instance & 1) == 0 )
          {
            v57 = *(_QWORD *)(v54 + 80);
            v56 = *(_QWORD *)(v54 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v76.fields.currentCryptoKey = v57;
            *(_QWORD *)&v76.fields.fakeValue = v56;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v76, 0LL);
            baseData = this->fields.baseData;
            if ( !baseData )
              goto LABEL_50;
            v59 = Instance;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(baseData->fields.svtId, 0LL);
            if ( v59 == (_DWORD)Instance )
            {
              v60 = *(_OWORD *)(v54 + 32);
              *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)(v54 + 16);
              *(_OWORD *)&v75.fields.fakeValue = v60;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v73 = v75;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v73, 0LL);
              v61 = this->fields.baseData;
              if ( !v61 )
                goto LABEL_50;
              v62 = *(_OWORD *)&v61->fields.id.fields.fakeValue;
              v63 = Instance;
              *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)&v61->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v72.fields.fakeValue = v62;
              Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v72, 0LL);
              if ( v63 != Instance )
              {
                if ( !v47 )
                  goto LABEL_50;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v47,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      LODWORD(v51) = *(_DWORD *)(v52 + 24);
    }
    while ( (__int64)++v53 < (int)v51 );
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
    v66 = (Il2CppObject *)static_fields->__9;
    _9__148_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_UserServantEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__148_1,
      v66,
      Method_SetRarityDialogControl___c__SetLimitUpInfo_b__148_1__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_UserServantEntity___ctor__);
    v67 = SetRarityDialogControl___c_TypeInfo->static_fields;
    v67->__9__148_1 = (struct System_Predicate_UserServantEntity__o *)_9__148_1;
    sub_B5D560(&v67->__9__148_1);
  }
  if ( !v47 )
    goto LABEL_50;
  Instance = (int64_t)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                        (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v47,
                        (System_Predicate_T__o *)_9__148_1,
                        (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_UserServantEntity__Find__);
  if ( Instance )
  {
    _9__2 = this->fields.__9__2;
    combineLimitUpWarningDialog = this->fields.combineLimitUpWarningDialog;
    if ( !_9__2 )
    {
      _9__2 = (CombineLimitUpWarningDialog_ClickDelegate_o *)sub_B5D694(CombineLimitUpWarningDialog_ClickDelegate_TypeInfo);
      CombineLimitUpWarningDialog_ClickDelegate___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_SetRarityDialogControl___c__DisplayClass148_0__SetLimitUpInfo_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_B5D560(&this->fields.__9__2);
    }
    if ( combineLimitUpWarningDialog )
    {
      CombineLimitUpWarningDialog__Open(combineLimitUpWarningDialog, _9__2, 0LL);
      return;
    }
LABEL_50:
    sub_B5D69C(Instance, v50);
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
      sub_B5D69C(this, isDecide);
    }
    CombineRootComponent__RequestLimitUp((CombineRootComponent_o *)this, 0LL);
  }
}