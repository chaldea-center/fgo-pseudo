void __fastcall SetRarityDialogControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  SetRarityDialogControl_c *v2; // x8

  if ( (byte_40FC414 & 1) == 0 )
  {
    sub_B16FFC(&SetRarityDialogControl_TypeInfo, v1);
    byte_40FC414 = 1;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0

  v4 = this;
  if ( (byte_40FC413 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, selectedList);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5);
    this = (SetRarityDialogControl_o *)sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FC413 = 1;
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
            sub_B17100(this, selectedList, method);
            sub_B170A0();
          }
          v9 = selectedList->m_Items[v8];
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance
            || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
            || (this = (SetRarityDialogControl_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                     MasterData_WarQuestSelectionMaster,
                                                     v9,
                                                     (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__)) == 0LL )
          {
            sub_B170D4();
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int32_t adjustHp; // w24
  int32_t adjustAtk; // w19
  __int64 v21; // x1
  __int64 v22; // x2
  _BOOL8 IsStatusUp; // x0
  __int64 v24; // x8
  unsigned __int64 v25; // x27
  int v26; // w26
  int v27; // w24
  int64_t v28; // x22
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  UserServantEntity_o *v32; // x22
  System_String_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  int v40; // w19
  System_String_o *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int v48; // w8
  System_String_o *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  int32_t v57; // [xsp+8h] [xbp-78h]
  int32_t v58; // [xsp+Ch] [xbp-74h]
  int32_t secondMaxAdjustAtk[2]; // [xsp+18h] [xbp-68h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+20h] [xbp-60h] BYREF
  int32_t atkUp[2]; // [xsp+28h] [xbp-58h] BYREF

  if ( (byte_40FC401 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, baseData);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B16FFC(&StringLiteral_12314/*"STATUS_HP_OVER_DIALOG_MSG"*/, v15);
    sub_B16FFC(&StringLiteral_12313/*"STATUS_ATK_OVER_DIALOG_MSG"*/, v16);
    sub_B16FFC(&StringLiteral_12315/*"STATUS_OVER_DIALOG_MSG"*/, v17);
    sub_B16FFC(&StringLiteral_1/*""*/, v18);
    byte_40FC401 = 1;
  }
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)atkUp = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  if ( !baseData )
LABEL_39:
    sub_B170D4();
  adjustHp = baseData->fields.adjustHp;
  adjustAtk = baseData->fields.adjustAtk;
  *(_QWORD *)atkUp = 0LL;
  maxAjustAtk[1] = 0;
  maxAjustAtk[0] = 0;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  *labelMsg = (System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98(
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
  if ( selectUsrSvtIdList && this->fields.isStatusUp )
  {
    v24 = *(_QWORD *)&selectUsrSvtIdList->max_length;
    if ( (int)v24 < 1 )
    {
      v40 = 0;
    }
    else
    {
      v57 = adjustHp;
      v58 = adjustAtk;
      v25 = 0LL;
      v26 = 0;
      v27 = 0;
      do
      {
        if ( v25 >= (unsigned int)v24 )
        {
          sub_B17100(IsStatusUp, v21, v22);
          sub_B170A0();
        }
        v28 = selectUsrSvtIdList->m_Items[v25];
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_39;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_39;
        Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   v28,
                   (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
        if ( !Entity )
          goto LABEL_39;
        v32 = Entity;
        IsStatusUp = UserServantEntity__IsStatusUp(Entity, 0LL);
        if ( IsStatusUp )
        {
          *(_QWORD *)atkUp = 0LL;
          UserServantEntity__getStatusUpInfo(v32, &atkUp[1], atkUp, 0LL);
          v26 += atkUp[1] & ~(atkUp[1] >> 31);
          v27 += atkUp[0] & ~(atkUp[0] >> 31);
        }
        LODWORD(v24) = selectUsrSvtIdList->max_length;
        ++v25;
      }
      while ( (__int64)v25 < (int)v24 );
      if ( v26 < 1 || UserServantEntity__isAdjustHpMax(baseData, 0LL) || v26 + v57 <= maxAjustAtk[1] )
      {
        v40 = 0;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_12314/*"STATUS_HP_OVER_DIALOG_MSG"*/, 0LL);
        *labelMsg = v33;
        sub_B16F98((BattleServantConfConponent_o *)labelMsg, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
        v40 = 1;
      }
      if ( v27 >= 1 && !UserServantEntity__isAdjustAtkMax(baseData, 0LL) && v27 + v58 > maxAjustAtk[0] )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_12313/*"STATUS_ATK_OVER_DIALOG_MSG"*/, 0LL);
        *labelMsg = v41;
        sub_B16F98((BattleServantConfConponent_o *)labelMsg, (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
        v48 = 1;
        goto LABEL_32;
      }
    }
    v48 = 0;
LABEL_32:
    if ( (v48 & v40) != 0 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_12315/*"STATUS_OVER_DIALOG_MSG"*/, 0LL);
      *labelMsg = v49;
      sub_B16F98((BattleServantConfConponent_o *)labelMsg, (System_Int32_array **)v49, v50, v51, v52, v53, v54, v55);
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
  TweenAlpha_o *v9; // x0
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
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_Transform_o *transform; // x20
  int v29; // s0
  UnityEngine_GameObject_o *npUpConfirmInfo; // x0
  NpUpConfirmComponent_o *npUpInfoComp; // x0
  UIGrid_o *raritySvtGrid; // x0
  UIGrid_o *allSvtGrid; // x0
  UIGrid_o *exceedConfirmSvtGrid; // x0
  UIGrid_o *materialSvtGrid; // x0
  UIGrid_o *lvExceedConsumeItemGrid; // x0
  UnityEngine_Transform_o *v39; // x19
  UnityEngine_Vector3_o v40; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_40FC40E & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&SetRarityDialogControl_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_5923/*"EndCloseDlg"*/, v5);
    sub_B16FFC(&StringLiteral_5318/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, v6);
    byte_40FC40E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v8 = SetRarityDialogControl_TypeInfo;
  if ( (BYTE3(SetRarityDialogControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetRarityDialogControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl_TypeInfo);
    v8 = SetRarityDialogControl_TypeInfo;
  }
  v9 = TweenAlpha__Begin(gameObject, v8->static_fields->CLOSE_TIME, 0.0, 0LL);
  if ( !v9 )
    goto LABEL_29;
  v9->fields.style = 6;
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  static_fields = SetRarityDialogControl_TypeInfo->static_fields;
  v40.fields.x = static_fields->DIALOG_CLOSE_SCALE;
  v40.fields.y = v40.fields.x;
  v40.fields.z = v40.fields.x;
  v12 = TweenScale__Begin(v10, static_fields->CLOSE_TIME, v40, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL) )
  {
    if ( !v12 )
      goto LABEL_29;
    v12->fields.style = 6;
    v13 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v12->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v13;
    sub_B16F98((BattleServantConfConponent_o *)&v12->fields.eventReceiver, v13, v14, v15, v16, v17, v18, v19);
    v20 = (System_Int32_array **)StringLiteral_5923/*"EndCloseDlg"*/;
    v12->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5923/*"EndCloseDlg"*/;
    sub_B16F98((BattleServantConfConponent_o *)&v12->fields.callWhenFinished, v20, v21, v22, v23, v24, v25, v26);
  }
  else
  {
    v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v27 )
      goto LABEL_29;
    transform = UnityEngine_GameObject__get_transform(v27, 0LL);
    *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_29;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v29, 0LL);
  }
  npUpConfirmInfo = this->fields.npUpConfirmInfo;
  if ( !npUpConfirmInfo )
    goto LABEL_29;
  if ( UnityEngine_GameObject__get_activeSelf(npUpConfirmInfo, 0LL) )
  {
    npUpInfoComp = this->fields.npUpInfoComp;
    if ( !npUpInfoComp )
      goto LABEL_29;
    NpUpConfirmComponent__DestroySvtInfo(npUpInfoComp, 0LL);
  }
  raritySvtGrid = this->fields.raritySvtGrid;
  if ( !raritySvtGrid )
    goto LABEL_29;
  UIGrid__RemoveAllChild(raritySvtGrid, 0LL);
  allSvtGrid = this->fields.allSvtGrid;
  if ( !allSvtGrid
    || (UIGrid__RemoveAllChild(allSvtGrid, 0LL), (exceedConfirmSvtGrid = this->fields.exceedConfirmSvtGrid) == 0LL)
    || (UIGrid__RemoveAllChild(exceedConfirmSvtGrid, 0LL), (materialSvtGrid = this->fields.materialSvtGrid) == 0LL)
    || (UIGrid__RemoveAllChild(materialSvtGrid, 0LL),
        (lvExceedConsumeItemGrid = this->fields.lvExceedConsumeItemGrid) == 0LL) )
  {
LABEL_29:
    sub_B170D4();
  }
  UIGrid__RemoveAllChild(lvExceedConsumeItemGrid, 0LL);
  v39 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__RemoveBackBtn_21201964(v39, (System_String_o *)StringLiteral_5318/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0LL);
}


void __fastcall SetRarityDialogControl__DefaultBgSize(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *decideBtnLb; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *cancelBtnLb; // x0
  UnityEngine_Transform_o *v8; // x0
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  UIWidget_o *mPanelBg; // x0
  UnityEngine_GameObject_o *v12; // x0

  decideBtnLb = (UnityEngine_Component_o *)this->fields.decideBtnLb;
  if ( !decideBtnLb )
    goto LABEL_10;
  transform = UnityEngine_Component__get_transform(decideBtnLb, 0LL);
  if ( !transform )
    goto LABEL_10;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_10;
  gameObject = UnityEngine_Component__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (cancelBtnLb = (UnityEngine_Component_o *)this->fields.cancelBtnLb) == 0LL)
    || (v8 = UnityEngine_Component__get_transform(cancelBtnLb, 0LL)) == 0LL
    || (v9 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v8, 0LL)) == 0LL
    || (v10 = UnityEngine_Component__get_gameObject(v9, 0LL),
        GameObjectExtensions__SetLocalPositionX(v10, -157.0, 0LL),
        (mPanelBg = (UIWidget_o *)this->fields.mPanelBg) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  UIWidget__set_height(mPanelBg, 480, 0LL);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v12, -20.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnInfo, 0.0, 0LL);
}


void __fastcall SetRarityDialogControl__DisableConfirmInfo(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rariryConfirmInfo; // x0
  UnityEngine_GameObject_o *normalConfirmInfo; // x0
  UnityEngine_GameObject_o *skillUpConfirmInfo; // x0
  UnityEngine_GameObject_o *allDispConfirmInfo; // x0
  UnityEngine_GameObject_o *npUpConfirmInfo; // x0
  UnityEngine_GameObject_o *lvExceedConfirmSimpleInfo; // x0
  UnityEngine_GameObject_o *lvExceedConfirmInfo; // x0
  UnityEngine_GameObject_o *exceedConfirmInfo; // x0
  UnityEngine_GameObject_o *limitUpConfirmInfo; // x0
  UnityEngine_GameObject_o *costumeConfirmInfo; // x0
  UnityEngine_GameObject_o *costumeEventItemConfirmInfo; // x0
  UnityEngine_GameObject_o *costumeEventItemOrNeedItemConfirmInfo; // x0
  UnityEngine_GameObject_o *friendshipExceedConfirmInfo; // x0
  UnityEngine_GameObject_o *specialAscensionConfirmInfo; // x0
  UnityEngine_GameObject_o *appendSkillConfirmInfo; // x0

  rariryConfirmInfo = this->fields.rariryConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 0, 0LL);
  normalConfirmInfo = this->fields.normalConfirmInfo;
  if ( !normalConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(normalConfirmInfo, 0, 0LL);
  skillUpConfirmInfo = this->fields.skillUpConfirmInfo;
  if ( !skillUpConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 0, 0LL);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 0, 0LL);
  npUpConfirmInfo = this->fields.npUpConfirmInfo;
  if ( !npUpConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 0, 0LL);
  lvExceedConfirmSimpleInfo = this->fields.lvExceedConfirmSimpleInfo;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 0, 0LL);
  lvExceedConfirmInfo = this->fields.lvExceedConfirmInfo;
  if ( !lvExceedConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(lvExceedConfirmInfo, 0, 0LL);
  exceedConfirmInfo = this->fields.exceedConfirmInfo;
  if ( !exceedConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(exceedConfirmInfo, 0, 0LL);
  limitUpConfirmInfo = this->fields.limitUpConfirmInfo;
  if ( !limitUpConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 0, 0LL);
  costumeConfirmInfo = this->fields.costumeConfirmInfo;
  if ( !costumeConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(costumeConfirmInfo, 0, 0LL);
  costumeEventItemConfirmInfo = this->fields.costumeEventItemConfirmInfo;
  if ( !costumeEventItemConfirmInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(costumeEventItemConfirmInfo, 0, 0LL);
  costumeEventItemOrNeedItemConfirmInfo = this->fields.costumeEventItemOrNeedItemConfirmInfo;
  if ( !costumeEventItemOrNeedItemConfirmInfo
    || (UnityEngine_GameObject__SetActive(costumeEventItemOrNeedItemConfirmInfo, 0, 0LL),
        (friendshipExceedConfirmInfo = this->fields.friendshipExceedConfirmInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(friendshipExceedConfirmInfo, 0, 0LL),
        (specialAscensionConfirmInfo = this->fields.specialAscensionConfirmInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 0, 0LL),
        (appendSkillConfirmInfo = this->fields.appendSkillConfirmInfo) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, 0, 0LL);
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.onClickDlgCloseCallBack, 0LL, v2, v3, v4, v5, v6, v7);
  if ( onClickDlgCloseCallBack )
    System_Action__Invoke(onClickDlgCloseCallBack, 0LL);
}


void __fastcall SetRarityDialogControl__EndOpen(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_40FC410 & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_5318/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, v3);
    byte_40FC410 = 1;
  }
  this->fields.isButtonEnable = 1;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21111220(transform, (System_String_o *)StringLiteral_5318/*"DlgPanel/ConfirmBtnInfo/CancleBtn"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SetRarityDialogControl__MoveAlpha(SetRarityDialogControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x20
  SetRarityDialogControl_c *v9; // x8
  UnityEngine_GameObject_o *v10; // x20
  float OPEN_TIME; // s8
  float y; // s4
  float z; // s5
  float v14; // s3
  UnityEngine_GameObject_o *v15; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Action_o *v21; // x20
  System_Reflection_MethodInfo_o *v22; // x0
  System_String_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  TweenAlpha_o *v25; // x20
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FC40F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_SetRarityDialogControl_EndOpen__, v5);
    sub_B16FFC(&SetRarityDialogControl_TypeInfo, v6);
    byte_40FC40F = 1;
  }
  this->fields.isButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v9 = SetRarityDialogControl_TypeInfo;
  if ( (BYTE3(SetRarityDialogControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetRarityDialogControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl_TypeInfo);
    v9 = SetRarityDialogControl_TypeInfo;
  }
  if ( !transform )
    goto LABEL_19;
  v33.fields.x = v9->static_fields->DIALOG_INITIAL_SCALE;
  v33.fields.y = v33.fields.x;
  v33.fields.z = v33.fields.x;
  UnityEngine_Transform__set_localScale(transform, v33, 0LL);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  OPEN_TIME = SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME;
  one = UnityEngine_Vector3__get_one(0LL);
  y = one.fields.y;
  z = one.fields.z;
  one.fields.y = one.fields.x;
  one.fields.z = y;
  v14 = z;
  TweenScale__Begin(v10, OPEN_TIME, *(UnityEngine_Vector3_o *)&one.fields.y, 0LL);
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v15 )
    goto LABEL_19;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v15,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Component_srcLineSprite )
    goto LABEL_19;
  ((void (__fastcall *)(srcLineSprite_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
    Component_srcLineSprite,
    Component_srcLineSprite->klass[1]._1.declaringType,
    0.005);
  v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v17, v18, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_SetRarityDialogControl_EndOpen__, 0LL);
  if ( !v21 )
    goto LABEL_19;
  v22 = System_Delegate__get_Method((System_Delegate_o *)v21, 0LL);
  if ( !v22 )
    goto LABEL_19;
  v23 = (System_String_o *)((__int64 (__fastcall *)(System_Reflection_MethodInfo_o *, Il2CppMethodPointer))v22->klass->vtable._8_unknown.method)(
                             v22,
                             v22->klass->vtable._9_unknown.methodPtr);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    v23,
    SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME,
    0LL);
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v25 = TweenAlpha__Begin(v24, SetRarityDialogControl_TypeInfo->static_fields->OPEN_TIME, 1.0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0LL, 0LL) )
  {
    if ( v25 )
    {
      v25->fields.style = 6;
      v26 = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v25->fields.eventReceiver = (struct UnityEngine_GameObject_o *)v26;
      sub_B16F98((BattleServantConfConponent_o *)&v25->fields.eventReceiver, v26, v27, v28, v29, v30, v31, v32);
      return;
    }
LABEL_19:
    sub_B170D4();
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

  if ( (byte_40FC412 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FC412 = 1;
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.onClickDlgOkCallBack, 0LL, v5, v6, v7, v8, v9, v10);
    this->fields.onClickDlgCancelCallBack = 0LL;
    sub_B16F98(
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
  WebViewManager_o *Instance; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  CombineRootComponent_o *basePanel; // x0
  __int64 v19; // x9
  WebViewManager_o *v20; // x0
  __int64 v21; // x9
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  CommonUI_o *v26; // x20
  SetRarityDialogControl___c_c *v27; // x8
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x9
  System_Action_o *_9__166_0; // x21
  Il2CppObject *v30; // x22
  struct SetRarityDialogControl___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Action_o *onClickDlgOkCallBack; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  SetRarityDialogControl_o *v45; // x0
  const MethodInfo *v46; // x1

  if ( (byte_40FC411 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&CombineRootComponent_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&Method_SetRarityDialogControl___c__OnClickDlgOk_b__166_0__, v7);
    sub_B16FFC(&SetRarityDialogControl___c_TypeInfo, v8);
    byte_40FC411 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    basePanel = (CombineRootComponent_o *)Instance->fields.basePanel;
    if ( !basePanel )
      goto LABEL_29;
    v19 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v19
      && (CombineRootComponent_c *)basePanel->klass->_2.typeHierarchy[v19 - 1] == CombineRootComponent_TypeInfo )
    {
      if ( basePanel->fields.combineTutorialProgress != 7 )
      {
LABEL_26:
        onClickDlgOkCallBack = this->fields.onClickDlgOkCallBack;
        this->fields.onClickDlgOkCallBack = 0LL;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.onClickDlgOkCallBack,
          0LL,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        this->fields.onClickDlgCancelCallBack = 0LL;
        sub_B16F98(
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
        sub_B170D4();
      }
      v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !v20 )
        goto LABEL_29;
      basePanel = (CombineRootComponent_o *)v20->fields.basePanel;
      if ( !basePanel )
        goto LABEL_29;
      v21 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&basePanel->klass->_2.bitflags2 + 1) >= (unsigned int)v21
        && (CombineRootComponent_c *)basePanel->klass->_2.typeHierarchy[v21 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__SetTutorialProgress(basePanel, 8, 0LL);
        v26 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v27 = SetRarityDialogControl___c_TypeInfo;
        if ( (BYTE3(SetRarityDialogControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SetRarityDialogControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo);
          v27 = SetRarityDialogControl___c_TypeInfo;
        }
        static_fields = v27->static_fields;
        _9__166_0 = static_fields->__9__166_0;
        if ( !_9__166_0 )
        {
          if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v27);
            static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
          }
          v30 = (Il2CppObject *)static_fields->__9;
          _9__166_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
          System_Action___ctor(_9__166_0, v30, Method_SetRarityDialogControl___c__OnClickDlgOk_b__166_0__, 0LL);
          v31 = SetRarityDialogControl___c_TypeInfo->static_fields;
          v31->__9__166_0 = _9__166_0;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v31->__9__166_0,
            (System_Int32_array **)_9__166_0,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37);
        }
        if ( !v26 )
          goto LABEL_29;
        CommonUI__CloseTutorialNotificationDialogArrow_18262716(v26, _9__166_0, 0LL);
        goto LABEL_26;
      }
    }
    sub_B173C8(basePanel);
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
  UnityEngine_GameObject_o *allDispConfirmInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  UILabel_o *allTitleLb; // x26
  System_String_o *v34; // x0
  UILabel_o *cancelBtnLb; // x26
  System_String_o *v36; // x0
  UILabel_o *decideBtnLb; // x26
  System_String_o *v38; // x0
  const MethodInfo *v39; // x1
  struct UIGrid_o *allSvtGrid; // x0
  __int64 v41; // x27
  float cellHeight; // s8
  unsigned __int64 v43; // x26
  bool v44; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x27
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  MaterialSvtInfo_o *Component_srcLineSprite; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  float y; // s9
  int cellWidth_low; // w20
  UnityEngine_Transform_o *v53; // x0
  int v54; // w8
  float v55; // s1
  float z; // s2
  float v57; // s0
  UnityEngine_Component_o *v58; // x0
  UnityEngine_Transform_o *v59; // x0
  UIGrid_o *v60; // x0
  UILabel_o *allSpendQpTxtLb; // x24
  System_String_o *v62; // x0
  UILabel_o *allHaveQpTxtLb; // x24
  System_String_o *v64; // x0
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v66; // x25
  Il2CppObject *v67; // x0
  System_String_o *v68; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v70; // x24
  Il2CppObject *v71; // x0
  System_String_o *v72; // x0
  UnityEngine_Component_o *allStatusUpInfoLb; // x0
  UnityEngine_GameObject_o *v74; // x0
  UnityEngine_Component_o *allLimitUpInfoLb; // x0
  UnityEngine_GameObject_o *v76; // x0
  UnityEngine_Component_o *allLimitRareLb; // x0
  UnityEngine_GameObject_o *v78; // x0
  UnityEngine_Component_o *v79; // x0
  UnityEngine_GameObject_o *v80; // x0
  UILabel_o *allRareMsgLb; // x21
  __int64 *v82; // x8
  System_String_o *v83; // x0
  UILabel_o *allRareConfirmMsgLb; // x20
  System_String_o *v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v91; // x20
  const MethodInfo *v92; // x5
  System_String_o *text; // [xsp+8h] [xbp-78h]
  bool v94; // [xsp+14h] [xbp-6Ch]
  int32_t v95; // [xsp+18h] [xbp-68h] BYREF
  int32_t v96; // [xsp+1Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC400 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, baseData);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v16);
    sub_B16FFC(&int_TypeInfo, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__146_0__, v19);
    sub_B16FFC(&StringLiteral_9241/*"NEED_QP"*/, v20);
    sub_B16FFC(&StringLiteral_3160/*"COMBINE_HAVE_QP"*/, v21);
    sub_B16FFC(&StringLiteral_3304/*"CONFIRM_COMBINE_MSG"*/, v22);
    sub_B16FFC(&StringLiteral_3159/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, v23);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v24);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v25);
    sub_B16FFC(&StringLiteral_10974/*"RARE_MATERIAL_INFO_MSG"*/, v26);
    sub_B16FFC(&StringLiteral_3192/*"COMBINE_SPEND_QP"*/, v27);
    sub_B16FFC(&StringLiteral_3329/*"CONFIRM_TITLE_SVT_COMBINE"*/, v28);
    byte_40FC400 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_63;
  text = statusLimitMessage;
  v94 = isExceededMaterial;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v31);
  SetRarityDialogControl__DefaultBgSize(this, v32);
  allTitleLb = this->fields.allTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3329/*"CONFIRM_TITLE_SVT_COMBINE"*/, 0LL);
  if ( !allTitleLb )
    goto LABEL_63;
  UILabel__set_text(allTitleLb, v34, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_63;
  UILabel__set_text(cancelBtnLb, v36, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_63;
  UILabel__set_text(decideBtnLb, v38, 0LL);
  SetRarityDialogControl__SetCenter(this, v39);
  if ( !selectedList )
    goto LABEL_63;
  allSvtGrid = this->fields.allSvtGrid;
  if ( !allSvtGrid )
    goto LABEL_63;
  LODWORD(v41) = selectedList->max_length;
  cellHeight = allSvtGrid->fields.cellHeight;
  if ( (int)v41 >= 1 )
  {
    v43 = 0LL;
    v44 = 0;
    do
    {
      if ( v44 )
        goto LABEL_63;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allSvtGrid, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !Object )
        goto LABEL_63;
      Component_srcLineSprite = (MaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       Object,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v43 >= selectedList->max_length )
      {
        sub_B17100(Component_srcLineSprite, v49, v50);
        sub_B170A0();
      }
      if ( !Component_srcLineSprite )
        goto LABEL_63;
      MaterialSvtInfo__setMaterialSvtInfo(
        Component_srcLineSprite,
        v43,
        baseData,
        selectedList->m_Items[v43],
        0,
        0,
        0LL,
        0LL);
      allSvtGrid = this->fields.allSvtGrid;
      v41 = *(_QWORD *)&selectedList->max_length;
      ++v43;
      v44 = allSvtGrid == 0LL;
    }
    while ( (__int64)v43 < (int)v41 );
    if ( !allSvtGrid )
      goto LABEL_63;
  }
  y = this->fields.center.fields.y;
  cellWidth_low = LODWORD(allSvtGrid->fields.cellWidth);
  v53 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)allSvtGrid, 0LL);
  if ( !v53 )
    goto LABEL_63;
  if ( cellWidth_low >= (int)v41 )
    v54 = v41;
  else
    v54 = cellWidth_low;
  v55 = 70.0;
  if ( cellWidth_low >= (int)v41 )
    v55 = y;
  v57 = (float)(this->fields.center.fields.x - (float)((float)(cellHeight * 0.5) * (float)(v54 - 1))) * 0.47;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(v53, *(UnityEngine_Vector3_o *)(&v55 - 1), 0LL);
  v58 = (UnityEngine_Component_o *)this->fields.allSvtGrid;
  if ( !v58 )
    goto LABEL_63;
  v59 = UnityEngine_Component__get_transform(v58, 0LL);
  if ( !v59 )
    goto LABEL_63;
  v97.fields.x = 0.47;
  v97.fields.y = 0.47;
  v97.fields.z = 0.47;
  UnityEngine_Transform__set_localScale(v59, v97, 0LL);
  v60 = this->fields.allSvtGrid;
  if ( !v60 )
    goto LABEL_63;
  UIGrid__set_repositionNow(v60, 1, 0LL);
  allSpendQpTxtLb = this->fields.allSpendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v62 = LocalizationManager__Get((System_String_o *)StringLiteral_3192/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !allSpendQpTxtLb )
    goto LABEL_63;
  UILabel__set_text(allSpendQpTxtLb, v62, 0LL);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_3160/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !allHaveQpTxtLb )
    goto LABEL_63;
  UILabel__set_text(allHaveQpTxtLb, v64, 0LL);
  allSpendQpLb = this->fields.allSpendQpLb;
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  v96 = spendQp;
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96);
  v68 = System_String__Format(v66, v67, 0LL);
  if ( !allSpendQpLb )
    goto LABEL_63;
  UILabel__set_text(allSpendQpLb, v68, 0LL);
  allHaveQpLb = this->fields.allHaveQpLb;
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  v95 = haveQp;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v95);
  v72 = System_String__Format(v70, v71, 0LL);
  if ( !allHaveQpLb )
    goto LABEL_63;
  UILabel__set_text(allHaveQpLb, v72, 0LL);
  allStatusUpInfoLb = (UnityEngine_Component_o *)this->fields.allStatusUpInfoLb;
  if ( !allStatusUpInfoLb )
    goto LABEL_63;
  v74 = UnityEngine_Component__get_gameObject(allStatusUpInfoLb, 0LL);
  if ( !v74 )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive(v74, 0, 0LL);
  allLimitUpInfoLb = (UnityEngine_Component_o *)this->fields.allLimitUpInfoLb;
  if ( !allLimitUpInfoLb )
    goto LABEL_63;
  v76 = UnityEngine_Component__get_gameObject(allLimitUpInfoLb, 0LL);
  if ( !v76 )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive(v76, 0, 0LL);
  allLimitRareLb = (UnityEngine_Component_o *)this->fields.allLimitRareLb;
  if ( !allLimitRareLb )
    goto LABEL_63;
  v78 = UnityEngine_Component__get_gameObject(allLimitRareLb, 0LL);
  if ( !v78 )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive(v78, 0, 0LL);
  WrapControlText__textAdjust(this->fields.allStatusUpInfoLb, text, 22, 0, 0, 0LL);
  v79 = (UnityEngine_Component_o *)this->fields.allStatusUpInfoLb;
  if ( !v79 )
    goto LABEL_63;
  v80 = UnityEngine_Component__get_gameObject(v79, 0LL);
  if ( !v80 )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive(v80, 1, 0LL);
  allRareMsgLb = this->fields.allRareMsgLb;
  if ( v94 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v82 = &StringLiteral_3159/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v82 = &StringLiteral_10974/*"RARE_MATERIAL_INFO_MSG"*/;
  }
  v83 = LocalizationManager__Get((System_String_o *)*v82, 0LL);
  if ( !allRareMsgLb )
    goto LABEL_63;
  UILabel__set_text(allRareMsgLb, v83, 0LL);
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v85 = LocalizationManager__Get((System_String_o *)StringLiteral_3304/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !allRareConfirmMsgLb
    || (UILabel__set_text(allRareConfirmMsgLb, v85, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_63:
    sub_B170D4();
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v91 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v86, v87, v88, v89);
    System_Action___ctor(
      v91,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetAllDispConfirmCombine_b__146_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v91, 0LL, 0LL, v92);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  UnityEngine_GameObject_o *v29; // x0
  UILabel_o *appendSkillTitleLabel; // x0
  UnityEngine_GameObject_o *appendSkillIconInfo; // x0
  UnityEngine_GameObject_o *appendSkillLvUpInfo; // x0
  char v33; // w21
  SkillIconComponent_o *appendSkillIconComp; // x0
  UILabel_o *appendSkillIconTitleLabel; // x0
  UILabel_o *appendSkillIconMessageLabel; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  UILabel_o *appendSkillTargetRubyLabel; // x0
  UILabel_o *appendSkillTargetNameLabel; // x0
  UIExtrusionLabel_o *appendSkillCurrentLvLabel; // x21
  System_String_o *v42; // x0
  UIExtrusionLabel_o *appendSkillResultLvLabel; // x21
  System_String_o *v44; // x0
  UnityEngine_Component_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Component_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  UILabel_o *v49; // x21
  System_String_o *v50; // x0
  UILabel_o *v51; // x21
  System_String_o *v52; // x0
  UILabel_o *v53; // x21
  System_String_o *v54; // x22
  Il2CppObject *v55; // x0
  System_String_o *v56; // x0
  UILabel_o *v57; // x21
  System_String_o *v58; // x22
  Il2CppObject *v59; // x0
  System_String_o *v60; // x0
  UILabel_o *appendSkillConfirmLabel; // x20
  __int64 *v62; // x8
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_Transform_o *transform; // x0
  int v67; // s0
  UnityEngine_Component_o *appendSkillSpendTxtLabel; // x0
  UnityEngine_GameObject_o *v71; // x0
  UnityEngine_Component_o *appendSkillHaveTxtLabel; // x0
  UnityEngine_GameObject_o *v73; // x0
  UILabel_o *v74; // x21
  System_String_o *v75; // x0
  UILabel_o *v76; // x21
  System_String_o *v77; // x0
  UILabel_o *appendSkillSpendLabel; // x21
  System_String_o *v79; // x22
  Il2CppObject *v80; // x0
  System_String_o *v81; // x0
  UILabel_o *appendSkillHaveLabel; // x21
  System_String_o *v83; // x22
  Il2CppObject *v84; // x0
  System_String_o *v85; // x0
  System_String_o *v86; // x0
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v88; // x0
  UILabel_o *decideBtnLb; // x20
  System_String_o *v90; // x0
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v96; // x20
  const MethodInfo *v97; // x5
  UnityEngine_Bounds_o v98; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Bounds_o v99; // [xsp+20h] [xbp-60h] BYREF
  int32_t haveSvtCoin; // [xsp+4Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC404 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, updata);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_BoxCollider___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_SetRarityDialogControl__SetAppendSkillCombineInfo_b__150_0__, v15);
    sub_B16FFC(&StringLiteral_9241/*"NEED_QP"*/, v16);
    sub_B16FFC(&StringLiteral_3160/*"COMBINE_HAVE_QP"*/, v17);
    sub_B16FFC(&StringLiteral_1711/*"APPEND_SKILL_OPEN_CONFIRM"*/, v18);
    sub_B16FFC(&StringLiteral_1714/*"APPEND_SKILL_OPEN_SPEND_COIN"*/, v19);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v20);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v21);
    sub_B16FFC(&StringLiteral_1712/*"APPEND_SKILL_OPEN_HAVE_COIN"*/, v22);
    sub_B16FFC(&StringLiteral_3192/*"COMBINE_SPEND_QP"*/, v23);
    sub_B16FFC(&StringLiteral_1702/*"APPEND_SKILL_COMBINE_CONFIRM"*/, v24);
    byte_40FC404 = 1;
  }
  memset(&v99, 0, sizeof(v99));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)updata);
  appendSkillConfirmInfo = this->fields.appendSkillConfirmInfo;
  if ( !appendSkillConfirmInfo )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive(appendSkillConfirmInfo, 1, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v27);
  SetRarityDialogControl__DefaultBgSize(this, v28);
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v29, 0.0, 0LL);
  appendSkillTitleLabel = this->fields.appendSkillTitleLabel;
  if ( !appendSkillTitleLabel )
    goto LABEL_64;
  UILabel__set_text(appendSkillTitleLabel, titleMsg, 0LL);
  appendSkillIconInfo = this->fields.appendSkillIconInfo;
  if ( !appendSkillIconInfo )
    goto LABEL_64;
  UnityEngine_GameObject__SetActive(appendSkillIconInfo, isOpen, 0LL);
  appendSkillLvUpInfo = this->fields.appendSkillLvUpInfo;
  if ( !appendSkillLvUpInfo )
    goto LABEL_64;
  v33 = ~isOpen;
  UnityEngine_GameObject__SetActive(appendSkillLvUpInfo, v33 & 1, 0LL);
  if ( (v33 & 1) == 0 )
  {
    if ( updata )
    {
      appendSkillIconComp = this->fields.appendSkillIconComp;
      if ( appendSkillIconComp )
      {
        SkillIconComponent__Set_23613360(appendSkillIconComp, updata->fields.currentId, updata->fields.nextLv, 0LL);
        appendSkillIconTitleLabel = this->fields.appendSkillIconTitleLabel;
        if ( appendSkillIconTitleLabel )
        {
          UILabel__set_text(appendSkillIconTitleLabel, updata->fields.targetName, 0LL);
          appendSkillIconMessageLabel = this->fields.appendSkillIconMessageLabel;
          if ( appendSkillIconMessageLabel )
          {
            UILabel__set_text(appendSkillIconMessageLabel, updata->fields.targetDetail, 0LL);
            v37 = this->fields.appendSkillIconInfo;
            if ( v37 )
            {
              ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                            v37,
                                                            (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIScrollView___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(
                     (UnityEngine_Object_o *)ComponentInChildren_Dropdown_DropdownItem,
                     0LL,
                     0LL) )
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
              v63 = UnityEngine_Component__get_gameObject(
                      (UnityEngine_Component_o *)ComponentInChildren_Dropdown_DropdownItem,
                      0LL);
              if ( v63 )
              {
                Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    v63,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
                {
                  v65 = UnityEngine_Component__get_gameObject(
                          (UnityEngine_Component_o *)ComponentInChildren_Dropdown_DropdownItem,
                          0LL);
                  if ( !v65 )
                    goto LABEL_64;
                  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                                      v65,
                                                                      (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_BoxCollider___);
                }
                transform = UnityEngine_Component__get_transform(
                              (UnityEngine_Component_o *)ComponentInChildren_Dropdown_DropdownItem,
                              0LL);
                NGUIMath__CalculateAbsoluteWidgetBounds(&v98, transform, 0LL);
                ((void (__fastcall *)(UnityEngine_UI_Dropdown_DropdownItem_o *, Il2CppMethodPointer))ComponentInChildren_Dropdown_DropdownItem->klass->vtable._4_unknown.method)(
                  ComponentInChildren_Dropdown_DropdownItem,
                  ComponentInChildren_Dropdown_DropdownItem->klass->vtable._5_unknown.methodPtr);
                v99 = v98;
                *(UnityEngine_Vector3_o *)&v67 = UnityEngine_Bounds__get_center(&v99, 0LL);
                if ( Component_srcLineSprite )
                {
                  UnityEngine_BoxCollider__set_center(
                    (UnityEngine_BoxCollider_o *)Component_srcLineSprite,
                    *(UnityEngine_Vector3_o *)&v67,
                    0LL);
                  ((void (__fastcall *)(UnityEngine_UI_Dropdown_DropdownItem_o *, Il2CppMethodPointer))ComponentInChildren_Dropdown_DropdownItem->klass->vtable._4_unknown.method)(
                    ComponentInChildren_Dropdown_DropdownItem,
                    ComponentInChildren_Dropdown_DropdownItem->klass->vtable._5_unknown.methodPtr);
                  v99 = v98;
                  size = UnityEngine_Bounds__get_size(&v99, 0LL);
                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_srcLineSprite, size, 0LL);
                  appendSkillSpendTxtLabel = (UnityEngine_Component_o *)this->fields.appendSkillSpendTxtLabel;
                  if ( appendSkillSpendTxtLabel )
                  {
                    v71 = UnityEngine_Component__get_gameObject(appendSkillSpendTxtLabel, 0LL);
                    GameObjectExtensions__SetLocalPositionX(v71, 100.0, 0LL);
                    appendSkillHaveTxtLabel = (UnityEngine_Component_o *)this->fields.appendSkillHaveTxtLabel;
                    if ( appendSkillHaveTxtLabel )
                    {
                      v73 = UnityEngine_Component__get_gameObject(appendSkillHaveTxtLabel, 0LL);
                      GameObjectExtensions__SetLocalPositionX(v73, 100.0, 0LL);
                      v74 = this->fields.appendSkillSpendTxtLabel;
                      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !LocalizationManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      }
                      v75 = LocalizationManager__Get((System_String_o *)StringLiteral_1714/*"APPEND_SKILL_OPEN_SPEND_COIN"*/, 0LL);
                      if ( v74 )
                      {
                        UILabel__set_text(v74, v75, 0LL);
                        v76 = this->fields.appendSkillHaveTxtLabel;
                        v77 = LocalizationManager__Get((System_String_o *)StringLiteral_1712/*"APPEND_SKILL_OPEN_HAVE_COIN"*/, 0LL);
                        if ( v76 )
                        {
                          UILabel__set_text(v76, v77, 0LL);
                          appendSkillSpendLabel = this->fields.appendSkillSpendLabel;
                          v79 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
                          LODWORD(v98.fields.m_Center.fields.x) = updata->fields.spendSvtCoin;
                          v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v98);
                          v81 = System_String__Format(v79, v80, 0LL);
                          if ( appendSkillSpendLabel )
                          {
                            UILabel__set_text(appendSkillSpendLabel, v81, 0LL);
                            appendSkillHaveLabel = this->fields.appendSkillHaveLabel;
                            v83 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
                            haveSvtCoin = updata->fields.haveSvtCoin;
                            v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveSvtCoin);
                            v85 = System_String__Format(v83, v84, 0LL);
                            if ( appendSkillHaveLabel )
                            {
                              UILabel__set_text(appendSkillHaveLabel, v85, 0LL);
                              appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
                              v62 = &StringLiteral_1711/*"APPEND_SKILL_OPEN_CONFIRM"*/;
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
    sub_B170D4();
  }
  if ( !updata )
    goto LABEL_64;
  appendSkillTargetRubyLabel = this->fields.appendSkillTargetRubyLabel;
  if ( !appendSkillTargetRubyLabel )
    goto LABEL_64;
  UILabel__set_text(appendSkillTargetRubyLabel, updata->fields.targetRuby, 0LL);
  appendSkillTargetNameLabel = this->fields.appendSkillTargetNameLabel;
  if ( !appendSkillTargetNameLabel )
    goto LABEL_64;
  UILabel__set_text(appendSkillTargetNameLabel, updata->fields.targetName, 0LL);
  appendSkillCurrentLvLabel = this->fields.appendSkillCurrentLvLabel;
  v42 = System_Int32__ToString((int)updata + 56, 0LL);
  if ( !appendSkillCurrentLvLabel )
    goto LABEL_64;
  UIExtrusionLabel__set_text(appendSkillCurrentLvLabel, v42, 0LL);
  appendSkillResultLvLabel = this->fields.appendSkillResultLvLabel;
  v44 = System_Int32__ToString((int)updata + 60, 0LL);
  if ( !appendSkillResultLvLabel )
    goto LABEL_64;
  UIExtrusionLabel__set_text(appendSkillResultLvLabel, v44, 0LL);
  v45 = (UnityEngine_Component_o *)this->fields.appendSkillSpendTxtLabel;
  if ( !v45 )
    goto LABEL_64;
  v46 = UnityEngine_Component__get_gameObject(v45, 0LL);
  GameObjectExtensions__SetLocalPositionX(v46, -5.0, 0LL);
  v47 = (UnityEngine_Component_o *)this->fields.appendSkillHaveTxtLabel;
  if ( !v47 )
    goto LABEL_64;
  v48 = UnityEngine_Component__get_gameObject(v47, 0LL);
  GameObjectExtensions__SetLocalPositionX(v48, -5.0, 0LL);
  v49 = this->fields.appendSkillSpendTxtLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_3192/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !v49 )
    goto LABEL_64;
  UILabel__set_text(v49, v50, 0LL);
  v51 = this->fields.appendSkillHaveTxtLabel;
  v52 = LocalizationManager__Get((System_String_o *)StringLiteral_3160/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !v51 )
    goto LABEL_64;
  UILabel__set_text(v51, v52, 0LL);
  v53 = this->fields.appendSkillSpendLabel;
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  LODWORD(v98.fields.m_Center.fields.x) = updata->fields.spendQp;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v98);
  v56 = System_String__Format(v54, v55, 0LL);
  if ( !v53 )
    goto LABEL_64;
  UILabel__set_text(v53, v56, 0LL);
  v57 = this->fields.appendSkillHaveLabel;
  v58 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  haveSvtCoin = updata->fields.haveQp;
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveSvtCoin);
  v60 = System_String__Format(v58, v59, 0LL);
  if ( !v57 )
    goto LABEL_64;
  UILabel__set_text(v57, v60, 0LL);
  appendSkillConfirmLabel = this->fields.appendSkillConfirmLabel;
  v62 = &StringLiteral_1702/*"APPEND_SKILL_COMBINE_CONFIRM"*/;
LABEL_54:
  v86 = LocalizationManager__Get((System_String_o *)*v62, 0LL);
  if ( !appendSkillConfirmLabel )
    goto LABEL_64;
  UILabel__set_text(appendSkillConfirmLabel, v86, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v88 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_64;
  UILabel__set_text(cancelBtnLb, v88, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  v90 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_64;
  UILabel__set_text(decideBtnLb, v90, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_64;
  if ( combineRootComponent->fields.state == 14 )
  {
    v96 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v91, v92, v93, v94);
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
  struct UIPanel_o *mPanel; // x0
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  unsigned int v7; // w8
  float32x2_t *v8; // x20
  float *v9; // x21
  unsigned __int64 v10; // x22
  UnityEngine_Component_o *v11; // x0
  float v12; // s8
  float v13; // s9
  float v14; // s10
  UnityEngine_Transform_o *transform; // x0
  int v16; // s0
  int v17; // s1
  int v18; // s2
  float32x2_t v19; // d8
  float v20; // s9
  float32x2_t v21; // d10
  float v22; // s11
  float v23; // s0
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  mPanel = this->fields.mPanel;
  if ( !mPanel
    || (v4 = ((__int64 (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer))mPanel->klass->vtable._11_get_worldCorners.method)(
               mPanel,
               mPanel->klass->vtable._12_Invalidate.methodPtr)) == 0 )
  {
LABEL_11:
    sub_B170D4();
  }
  v7 = *(_DWORD *)(v4 + 24);
  v8 = (float32x2_t *)v4;
  v9 = (float *)(v4 + 40);
  v10 = -1LL;
  do
  {
    if ( v10 + 1 >= v7 )
      goto LABEL_12;
    v11 = (UnityEngine_Component_o *)this->fields.mPanel;
    if ( !v11 )
      goto LABEL_11;
    v12 = *(v9 - 2);
    v13 = *(v9 - 1);
    v14 = *v9;
    transform = UnityEngine_Component__get_transform(v11, 0LL);
    if ( !transform )
      goto LABEL_11;
    v24.fields.x = v12;
    v24.fields.y = v13;
    v24.fields.z = v14;
    *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__InverseTransformPoint(transform, v24, 0LL);
    if ( v10 + 1 >= v8[3].n64_u32[0] )
      goto LABEL_12;
    *((_DWORD *)v9 - 2) = v16;
    *((_DWORD *)v9 - 1) = v17;
    *(_DWORD *)v9 = v18;
    v9 += 3;
    v7 = v8[3].n64_u32[0];
    ++v10;
  }
  while ( v10 <= 2 );
  if ( v7 < 3 )
  {
LABEL_12:
    sub_B17100(v4, v5, v6);
    sub_B170A0();
  }
  v19.n64_u64[0] = v8[4].n64_u64[0];
  v20 = v8[5].n64_f32[0];
  v21.n64_u64[0] = v8[7].n64_u64[0];
  v22 = v8[8].n64_f32[0];
  v23 = UnityEngine_Mathf__Clamp01(0.5, 0LL);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(v19, vmul_n_f32(vsub_f32(v21, v19), v23));
  this->fields.center.fields.z = v20 + (float)((float)(v22 - v20) * v23);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClickDlgOkCallBack,
    (System_Int32_array **)callBack,
    (System_String_array **)callBack,
    (System_String_array **)cancelCallBack,
    (System_Boolean_array **)closeCallBack,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.onClickDlgCancelCallBack = cancelCallBack;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClickDlgCancelCallBack,
    (System_Int32_array **)cancelCallBack,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.onClickDlgCloseCallBack = closeCallBack;
  sub_B16F98(
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
  UnityEngine_GameObject_o *normalConfirmInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  UILabel_o *normalTitleLb; // x0
  UILabel_o *cancelBtnLb; // x24
  System_String_o *v31; // x0
  UILabel_o *decideBtnLb; // x24
  System_String_o *v33; // x0
  const MethodInfo *v34; // x1
  struct UIGrid_o *materialSvtGrid; // x0
  __int64 v36; // x25
  float cellHeight; // s8
  unsigned __int64 v38; // x24
  bool v39; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  MaterialSvtInfo_o *Component_srcLineSprite; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  float y; // s9
  int cellWidth_low; // w24
  UnityEngine_Transform_o *v48; // x0
  int v49; // w9
  float z; // s2
  float v51; // s1
  float v52; // s0
  UnityEngine_Component_o *v53; // x0
  UnityEngine_Transform_o *v54; // x0
  UIGrid_o *v55; // x0
  UILabel_o *normalSpendQpTxtLb; // x24
  System_String_o *v57; // x0
  UILabel_o *normalHaveQpTxtLb; // x24
  System_String_o *v59; // x0
  UILabel_o *confirmSpendQpLb; // x24
  System_String_o *v61; // x25
  Il2CppObject *v62; // x0
  System_String_o *v63; // x0
  UILabel_o *confirmHaveQpLb; // x23
  System_String_o *v65; // x24
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  UILabel_o *confirmMsgLb; // x22
  System_String_o *v69; // x0
  UnityEngine_Component_o *statusUpInfoLb; // x0
  UnityEngine_GameObject_o *v71; // x0
  const MethodInfo *v72; // x4
  const MethodInfo *v73; // x2
  UnityEngine_Component_o *v74; // x0
  UnityEngine_GameObject_o *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v81; // x20
  const MethodInfo *v82; // x5
  int32_t v83; // [xsp+0h] [xbp-70h] BYREF
  int32_t v84; // [xsp+4h] [xbp-6Ch] BYREF
  System_String_o *labelMsg; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC3FE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, baseData);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v15);
    sub_B16FFC(&int_TypeInfo, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&Method_SetRarityDialogControl__SetConfirmCombine_b__144_0__, v18);
    sub_B16FFC(&StringLiteral_9241/*"NEED_QP"*/, v19);
    sub_B16FFC(&StringLiteral_3160/*"COMBINE_HAVE_QP"*/, v20);
    sub_B16FFC(&StringLiteral_3304/*"CONFIRM_COMBINE_MSG"*/, v21);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v22);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v23);
    sub_B16FFC(&StringLiteral_3192/*"COMBINE_SPEND_QP"*/, v24);
    byte_40FC3FE = 1;
  }
  labelMsg = 0LL;
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  normalConfirmInfo = this->fields.normalConfirmInfo;
  if ( !normalConfirmInfo )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(normalConfirmInfo, 1, 0LL);
  this->fields.isStatusUp = isStatusUp;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v27);
  SetRarityDialogControl__DefaultBgSize(this, v28);
  normalTitleLb = this->fields.normalTitleLb;
  if ( !normalTitleLb )
    goto LABEL_49;
  UILabel__set_text(normalTitleLb, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_49;
  UILabel__set_text(cancelBtnLb, v31, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_49;
  UILabel__set_text(decideBtnLb, v33, 0LL);
  SetRarityDialogControl__SetCenter(this, v34);
  if ( !selectedList )
    goto LABEL_49;
  materialSvtGrid = this->fields.materialSvtGrid;
  if ( !materialSvtGrid )
    goto LABEL_49;
  LODWORD(v36) = selectedList->max_length;
  cellHeight = materialSvtGrid->fields.cellHeight;
  if ( (int)v36 >= 1 )
  {
    v38 = 0LL;
    v39 = 0;
    do
    {
      if ( v39 )
        goto LABEL_49;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)materialSvtGrid, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !Object )
        goto LABEL_49;
      Component_srcLineSprite = (MaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       Object,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v38 >= selectedList->max_length )
      {
        sub_B17100(Component_srcLineSprite, v44, v45);
        sub_B170A0();
      }
      if ( !Component_srcLineSprite )
        goto LABEL_49;
      MaterialSvtInfo__setMaterialSvtInfo(
        Component_srcLineSprite,
        v38,
        baseData,
        selectedList->m_Items[v38],
        0,
        0,
        0LL,
        0LL);
      materialSvtGrid = this->fields.materialSvtGrid;
      v36 = *(_QWORD *)&selectedList->max_length;
      ++v38;
      v39 = materialSvtGrid == 0LL;
    }
    while ( (__int64)v38 < (int)v36 );
    if ( !materialSvtGrid )
      goto LABEL_49;
  }
  y = this->fields.center.fields.y;
  cellWidth_low = LODWORD(materialSvtGrid->fields.cellWidth);
  v48 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)materialSvtGrid, 0LL);
  if ( !v48 )
    goto LABEL_49;
  v49 = cellWidth_low >= (int)v36 ? v36 : cellWidth_low;
  v51 = cellWidth_low >= (int)v36 ? y : 55.0;
  v52 = (float)(this->fields.center.fields.x - (float)((float)(cellHeight * 0.5) * (float)(v49 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(v48, *(UnityEngine_Vector3_o *)(&v51 - 1), 0LL);
  v53 = (UnityEngine_Component_o *)this->fields.materialSvtGrid;
  if ( !v53 )
    goto LABEL_49;
  v54 = UnityEngine_Component__get_transform(v53, 0LL);
  if ( !v54 )
    goto LABEL_49;
  v86.fields.x = 0.5;
  v86.fields.y = 0.5;
  v86.fields.z = 0.5;
  UnityEngine_Transform__set_localScale(v54, v86, 0LL);
  v55 = this->fields.materialSvtGrid;
  if ( !v55 )
    goto LABEL_49;
  UIGrid__set_repositionNow(v55, 1, 0LL);
  normalSpendQpTxtLb = this->fields.normalSpendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_3192/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !normalSpendQpTxtLb )
    goto LABEL_49;
  UILabel__set_text(normalSpendQpTxtLb, v57, 0LL);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_3160/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !normalHaveQpTxtLb )
    goto LABEL_49;
  UILabel__set_text(normalHaveQpTxtLb, v59, 0LL);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  v84 = spendQp;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84);
  v63 = System_String__Format(v61, v62, 0LL);
  if ( !confirmSpendQpLb )
    goto LABEL_49;
  UILabel__set_text(confirmSpendQpLb, v63, 0LL);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  v83 = haveQp;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
  v67 = System_String__Format(v65, v66, 0LL);
  if ( !confirmHaveQpLb )
    goto LABEL_49;
  UILabel__set_text(confirmHaveQpLb, v67, 0LL);
  confirmMsgLb = this->fields.confirmMsgLb;
  v69 = LocalizationManager__Get((System_String_o *)StringLiteral_3304/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !confirmMsgLb )
    goto LABEL_49;
  UILabel__set_text(confirmMsgLb, v69, 0LL);
  statusUpInfoLb = (UnityEngine_Component_o *)this->fields.statusUpInfoLb;
  if ( !statusUpInfoLb )
    goto LABEL_49;
  v71 = UnityEngine_Component__get_gameObject(statusUpInfoLb, 0LL);
  if ( !v71 )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive(v71, 0, 0LL);
  if ( !SetRarityDialogControl__CheckStatusUpInfo(this, baseData, selectedList, &labelMsg, v72) )
    goto LABEL_45;
  WrapControlText__textAdjust(this->fields.statusUpInfoLb, labelMsg, 22, 0, 0, 0LL);
  v74 = (UnityEngine_Component_o *)this->fields.statusUpInfoLb;
  if ( !v74 || (v75 = UnityEngine_Component__get_gameObject(v74, 0LL)) == 0LL )
LABEL_49:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v75, 1, 0LL);
LABEL_45:
  SetRarityDialogControl__CheckExceedSvt(this, selectedList, v73);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_49;
  if ( combineRootComponent->fields.state == 3 )
  {
    v81 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v76, v77, v78, v79);
    System_Action___ctor(v81, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmCombine_b__144_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v81, 0LL, 0LL, v82);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  UILabel_o *costumeTitleLb; // x25
  System_String_o *v26; // x0
  UILabel_o *costumeNameLb; // x0
  UILabel_o *cancelBtnLb; // x24
  System_String_o *v29; // x0
  UILabel_o *decideBtnLb; // x24
  System_String_o *v31; // x0
  UILabel_o *needQpCostumeTextLb; // x24
  System_String_o *v33; // x0
  UILabel_o *needQpCostumeLb; // x24
  System_String_o *v35; // x25
  Il2CppObject *v36; // x0
  System_String_o *v37; // x0
  UILabel_o *haveQpCostumeTextLb; // x23
  System_String_o *v39; // x0
  UILabel_o *haveQpCostumeLb; // x23
  System_String_o *v41; // x24
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  UILabel_o *costumeInfoLb; // x22
  System_String_o *v45; // x0
  const MethodInfo *v46; // x5
  struct CombineRootComponent_o *combineRootComponent; // x8
  int32_t v48; // [xsp+8h] [xbp-48h] BYREF
  int32_t v49; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FC40B & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, cosName);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_9241/*"NEED_QP"*/, v14);
    sub_B16FFC(&StringLiteral_3321/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, v15);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v16);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v17);
    sub_B16FFC(&StringLiteral_3386/*"COSTUME_NEED_QP_TEXT"*/, v18);
    sub_B16FFC(&StringLiteral_3383/*"COSTUME_CONFIRM_MSG"*/, v19);
    sub_B16FFC(&StringLiteral_3385/*"COSTUME_HAVE_QP_TEXT"*/, v20);
    byte_40FC40B = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)cosName);
  costumeConfirmInfo = this->fields.costumeConfirmInfo;
  if ( !costumeConfirmInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(costumeConfirmInfo, 1, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v23);
  SetRarityDialogControl__DefaultBgSize(this, v24);
  costumeTitleLb = this->fields.costumeTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3321/*"CONFIRM_TITLE_COSTUME_COMBINE"*/, 0LL);
  if ( !costumeTitleLb )
    goto LABEL_21;
  UILabel__set_text(costumeTitleLb, v26, 0LL);
  costumeNameLb = this->fields.costumeNameLb;
  if ( !costumeNameLb )
    goto LABEL_21;
  UILabel__set_text(costumeNameLb, cosName, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_21;
  UILabel__set_text(cancelBtnLb, v29, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_21;
  UILabel__set_text(decideBtnLb, v31, 0LL);
  needQpCostumeTextLb = this->fields.needQpCostumeTextLb;
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COSTUME_NEED_QP_TEXT"*/, 0LL);
  if ( !needQpCostumeTextLb )
    goto LABEL_21;
  UILabel__set_text(needQpCostumeTextLb, v33, 0LL);
  needQpCostumeLb = this->fields.needQpCostumeLb;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  v49 = needQp;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
  v37 = System_String__Format(v35, v36, 0LL);
  if ( !needQpCostumeLb )
    goto LABEL_21;
  UILabel__set_text(needQpCostumeLb, v37, 0LL);
  haveQpCostumeTextLb = this->fields.haveQpCostumeTextLb;
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3385/*"COSTUME_HAVE_QP_TEXT"*/, 0LL);
  if ( !haveQpCostumeTextLb )
    goto LABEL_21;
  UILabel__set_text(haveQpCostumeTextLb, v39, 0LL);
  haveQpCostumeLb = this->fields.haveQpCostumeLb;
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  v48 = haveQp;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
  v43 = System_String__Format(v41, v42, 0LL);
  if ( !haveQpCostumeLb
    || (UILabel__set_text(haveQpCostumeLb, v43, 0LL),
        costumeInfoLb = this->fields.costumeInfoLb,
        v45 = LocalizationManager__Get((System_String_o *)StringLiteral_3383/*"COSTUME_CONFIRM_MSG"*/, 0LL),
        !costumeInfoLb)
    || (UILabel__set_text(costumeInfoLb, v45, 0LL), (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_21:
    sub_B170D4();
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
  UnityEngine_GameObject_o *costumeEventItemConfirmInfo; // x0
  UnityEngine_GameObject_o *v10; // x0
  CostumeEventItemConfirmInfo_o *Component_srcLineSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x5
  struct CombineRootComponent_o *combineRootComponent; // x8

  if ( (byte_40FC40A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___, eventCombineCostumeEnt);
    byte_40FC40A = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)eventCombineCostumeEnt);
  costumeEventItemConfirmInfo = this->fields.costumeEventItemConfirmInfo;
  if ( !costumeEventItemConfirmInfo )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(costumeEventItemConfirmInfo, 1, 0LL);
  v10 = this->fields.costumeEventItemConfirmInfo;
  if ( !v10
    || (Component_srcLineSprite = (CostumeEventItemConfirmInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     v10,
                                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemConfirmInfo___)) == 0LL
    || (CostumeEventItemConfirmInfo__Set(Component_srcLineSprite, eventCombineCostumeEnt, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        SetRarityDialogControl__MoveAlpha(this, v13),
        SetRarityDialogControl__DefaultBgSize(this, v14),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  if ( combineRootComponent->fields.state == 8 )
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 0, callBack, cancelCallBack, 0LL, v15);
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
  UnityEngine_GameObject_o *v20; // x0
  CostumeEventItemOrNeedItemConfirmInfo_o *Component_srcLineSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  UILabel_o *cancelBtnLb; // x21
  System_String_o *v26; // x0
  UnityEngine_Component_o *v27; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Component_o *decideBtnLb; // x0
  UnityEngine_Transform_o *v32; // x0
  UnityEngine_Component_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v40; // x21
  const MethodInfo *v41; // x5

  if ( (byte_40FC409 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, combineCostumeEnt);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&Method_SetRarityDialogControl_DefaultBgSize__, v17);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v18);
    byte_40FC409 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)combineCostumeEnt);
  costumeEventItemOrNeedItemConfirmInfo = this->fields.costumeEventItemOrNeedItemConfirmInfo;
  if ( !costumeEventItemOrNeedItemConfirmInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(costumeEventItemOrNeedItemConfirmInfo, 1, 0LL);
  v20 = this->fields.costumeEventItemOrNeedItemConfirmInfo;
  if ( !v20 )
    goto LABEL_22;
  Component_srcLineSprite = (CostumeEventItemOrNeedItemConfirmInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         v20,
                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CostumeEventItemOrNeedItemConfirmInfo___);
  if ( !Component_srcLineSprite )
    goto LABEL_22;
  CostumeEventItemOrNeedItemConfirmInfo__Set(
    Component_srcLineSprite,
    combineCostumeEnt,
    eventCombineCostumeEnt,
    isShortNeedItemOrQp,
    isShortEvemtItem,
    callBack,
    0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v23);
  SetRarityDialogControl__DefaultBgSize(this, v24);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_22;
  UILabel__set_text(cancelBtnLb, v26, 0LL);
  v27 = (UnityEngine_Component_o *)this->fields.cancelBtnLb;
  if ( !v27 )
    goto LABEL_22;
  transform = UnityEngine_Component__get_transform(v27, 0LL);
  if ( !transform )
    goto LABEL_22;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_22;
  v30 = UnityEngine_Component__get_gameObject(parent, 0LL);
  GameObjectExtensions__SetLocalPositionX(v30, 0.0, 0LL);
  decideBtnLb = (UnityEngine_Component_o *)this->fields.decideBtnLb;
  if ( !decideBtnLb
    || (v32 = UnityEngine_Component__get_transform(decideBtnLb, 0LL)) == 0LL
    || (v33 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v32, 0LL)) == 0LL
    || (v34 = UnityEngine_Component__get_gameObject(v33, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v34, 0, 0LL), (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_22:
    sub_B170D4();
  }
  if ( combineRootComponent->fields.state == 8 )
  {
    v40 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v35, v36, v37, v38);
    System_Action___ctor(v40, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, 0LL, cancelCallBack, v40, v41);
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
  CombineRootComponent_o *basePanel; // x0
  __int64 v23; // x9
  WebViewManager_o *v24; // x0
  __int64 v25; // x9
  SetRarityDialogControl_o *v26; // x0
  System_Int64_array *v27; // x1
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // [xsp+0h] [xbp-50h]
  System_String_o *labelMsg; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FC3FB & 1) == 0 )
  {
    sub_B16FFC(&CombineRootComponent_TypeInfo, baseData);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v17);
    byte_40FC3FB = 1;
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
      v29);
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  basePanel = (CombineRootComponent_o *)Instance->fields.basePanel;
  if ( !basePanel )
    goto LABEL_18;
  v23 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&basePanel->klass->_2.bitflags2 + 1) < (unsigned int)v23
    || (CombineRootComponent_c *)basePanel->klass->_2.typeHierarchy[v23 - 1] != CombineRootComponent_TypeInfo )
  {
    goto LABEL_19;
  }
  if ( basePanel->fields.combineTutorialProgress != 7 )
    return;
  v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v24 || (basePanel = (CombineRootComponent_o *)v24->fields.basePanel) == 0LL )
LABEL_18:
    sub_B170D4();
  v25 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&basePanel->klass->_2.bitflags2 + 1) < (unsigned int)v25
    || (CombineRootComponent_c *)basePanel->klass->_2.typeHierarchy[v25 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_19:
    sub_B173C8(basePanel);
    SetRarityDialogControl__CheckExceedSvt(v26, v27, v28);
    return;
  }
  CombineRootComponent__ShowTutorial(basePanel, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  UILabel_o *lvExceedTitleLb; // x0
  UILabel_o *cancelBtnLb; // x23
  System_String_o *v28; // x0
  UILabel_o *decideBtnLb; // x23
  System_String_o *v30; // x0
  UILabel_o *v31; // x21
  System_String_o *v32; // x0
  UnityEngine_Component_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UILabel_o *lvExceedSpendQpTxtLb; // x23
  System_String_o *v37; // x0
  UILabel_o *lvExceedHaveQpTxtLb; // x23
  System_String_o *v39; // x0
  UILabel_o *lvExceedSpendQpLb; // x23
  System_String_o *v41; // x24
  Il2CppObject *v42; // x0
  System_String_o *v43; // x0
  UILabel_o *lvExceedHaveQpLb; // x22
  System_String_o *v45; // x23
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  UnityEngine_GameObject_o *lvExceedQpInfo; // x0
  UnityEngine_Component_o *lvExceedInfoLb; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v55; // x0
  System_Action_o *v56; // x21
  const MethodInfo *v57; // x5
  int32_t v58; // w1
  SetRarityDialogControl_o *v59; // x0
  int32_t v60; // [xsp+8h] [xbp-48h] BYREF
  int32_t v61; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FC406 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, baseData);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__152_0__, v14);
    sub_B16FFC(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__152_1__, v15);
    sub_B16FFC(&StringLiteral_9241/*"NEED_QP"*/, v16);
    sub_B16FFC(&StringLiteral_3309/*"CONFIRM_EXCEED_COMBINE"*/, v17);
    sub_B16FFC(&StringLiteral_3160/*"COMBINE_HAVE_QP"*/, v18);
    sub_B16FFC(&StringLiteral_8431/*"LVEXCEED_COMBINE_SPEND_QP"*/, v19);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v20);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v21);
    byte_40FC406 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  lvExceedConfirmSimpleInfo = this->fields.lvExceedConfirmSimpleInfo;
  if ( !lvExceedConfirmSimpleInfo )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(lvExceedConfirmSimpleInfo, 1, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v24);
  SetRarityDialogControl__DefaultBgSize(this, v25);
  lvExceedTitleLb = this->fields.lvExceedTitleLb;
  if ( !lvExceedTitleLb )
    goto LABEL_37;
  UILabel__set_text(lvExceedTitleLb, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_37;
  UILabel__set_text(cancelBtnLb, v28, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_37;
  UILabel__set_text(decideBtnLb, v30, 0LL);
  if ( !isCheck )
  {
    lvExceedSpendQpTxtLb = this->fields.lvExceedSpendQpTxtLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_8431/*"LVEXCEED_COMBINE_SPEND_QP"*/, 0LL);
    if ( lvExceedSpendQpTxtLb )
    {
      UILabel__set_text(lvExceedSpendQpTxtLb, v37, 0LL);
      lvExceedHaveQpTxtLb = this->fields.lvExceedHaveQpTxtLb;
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3160/*"COMBINE_HAVE_QP"*/, 0LL);
      if ( lvExceedHaveQpTxtLb )
      {
        UILabel__set_text(lvExceedHaveQpTxtLb, v39, 0LL);
        lvExceedSpendQpLb = this->fields.lvExceedSpendQpLb;
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
        v61 = spendQp;
        v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
        v43 = System_String__Format(v41, v42, 0LL);
        if ( lvExceedSpendQpLb )
        {
          UILabel__set_text(lvExceedSpendQpLb, v43, 0LL);
          lvExceedHaveQpLb = this->fields.lvExceedHaveQpLb;
          v45 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
          v60 = haveQp;
          v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
          v47 = System_String__Format(v45, v46, 0LL);
          if ( lvExceedHaveQpLb )
          {
            UILabel__set_text(lvExceedHaveQpLb, v47, 0LL);
            lvExceedQpInfo = this->fields.lvExceedQpInfo;
            if ( lvExceedQpInfo )
            {
              UnityEngine_GameObject__SetActive(lvExceedQpInfo, 1, 0LL);
              lvExceedInfoLb = (UnityEngine_Component_o *)this->fields.lvExceedInfoLb;
              if ( lvExceedInfoLb )
              {
                v35 = UnityEngine_Component__get_gameObject(lvExceedInfoLb, 0LL);
                if ( v35 )
                  goto LABEL_30;
              }
            }
          }
        }
      }
    }
LABEL_37:
    sub_B170D4();
  }
  v31 = this->fields.lvExceedInfoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3309/*"CONFIRM_EXCEED_COMBINE"*/, 0LL);
  if ( !v31 )
    goto LABEL_37;
  UILabel__set_text(v31, v32, 0LL);
  v33 = (UnityEngine_Component_o *)this->fields.lvExceedInfoLb;
  if ( !v33 )
    goto LABEL_37;
  v34 = UnityEngine_Component__get_gameObject(v33, 0LL);
  if ( !v34 )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(v34, 1, 0LL);
  v35 = this->fields.lvExceedQpInfo;
  if ( !v35 )
    goto LABEL_37;
LABEL_30:
  UnityEngine_GameObject__SetActive(v35, 0, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_37;
  if ( combineRootComponent->fields.state == 6 )
  {
    v55 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v50, v51, v52, v53);
    v56 = v55;
    if ( isCheck )
    {
      System_Action___ctor(v55, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmLvExceed_b__152_0__, 0LL);
      v58 = 8;
      v59 = this;
    }
    else
    {
      System_Action___ctor(v55, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmLvExceed_b__152_1__, 0LL);
      v59 = this;
      v58 = 0;
    }
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v59, v58, v56, 0LL, 0LL, v57);
  }
}


void __fastcall SetRarityDialogControl__SetConfirmLvExceed_29181932(
        SetRarityDialogControl_o *this,
        System_Collections_Generic_List_GameObject__o *itemObjList,
        System_Int32_array *itemList,
        int32_t spendQp,
        int32_t haveQp,
        const MethodInfo *method)
{
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
  UnityEngine_GameObject_o *lvExceedConfirmInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  UIWidget_o *mPanelBg; // x0
  UnityEngine_GameObject_o *v31; // x0
  UILabel_o *cancelBtnLb; // x24
  System_String_o *v33; // x0
  UILabel_o *decideBtnLb; // x24
  System_String_o *v35; // x0
  UILabel_o *lvExceedTitleLabel; // x24
  System_String_o *v37; // x0
  UILabel_o *lvExceedSpendItemLabel; // x24
  System_String_o *v39; // x0
  UILabel_o *lvExceedSpendQpTxtLabel; // x24
  System_String_o *v41; // x0
  UILabel_o *lvExceedHaveQpTxtLabel; // x24
  System_String_o *v43; // x0
  UILabel_o *lvExceedSpendQpLabel; // x24
  System_String_o *v45; // x25
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  UILabel_o *lvExceedHaveQpLabel; // x23
  System_String_o *v49; // x24
  Il2CppObject *v50; // x0
  System_String_o *v51; // x0
  UILabel_o *lvExceedConfirmLabel; // x22
  System_String_o *v53; // x0
  int32_t size; // w8
  unsigned __int64 v55; // x23
  signed __int64 v56; // x24
  UnityEngine_Component_o *lvExceedConsumeItemGrid; // x0
  UnityEngine_GameObject_o *v58; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  LimitCntUpItemComponent_o *Component_srcLineSprite; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  struct UIGrid_o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_Action_o *v69; // x20
  const MethodInfo *v70; // x5
  int32_t v71; // [xsp+8h] [xbp-58h] BYREF
  int32_t v72; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FC407 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, itemObjList);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&Method_SetRarityDialogControl__SetConfirmLvExceed_b__153_0__, v16);
    sub_B16FFC(&StringLiteral_9241/*"NEED_QP"*/, v17);
    sub_B16FFC(&StringLiteral_3322/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, v18);
    sub_B16FFC(&StringLiteral_3160/*"COMBINE_HAVE_QP"*/, v19);
    sub_B16FFC(&StringLiteral_8430/*"LVEXCEED_COMBINE_SPEND_ITEM"*/, v20);
    sub_B16FFC(&StringLiteral_8431/*"LVEXCEED_COMBINE_SPEND_QP"*/, v21);
    sub_B16FFC(&StringLiteral_8432/*"LVEXCEED_EXE_CONFIRM"*/, v22);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v23);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v24);
    byte_40FC407 = 1;
  }
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_35;
  if ( combineRootComponent->fields.state == 6 )
  {
    SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)itemObjList);
    lvExceedConfirmInfo = this->fields.lvExceedConfirmInfo;
    if ( !lvExceedConfirmInfo )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(lvExceedConfirmInfo, 1, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    SetRarityDialogControl__MoveAlpha(this, v28);
    SetRarityDialogControl__DefaultBgSize(this, v29);
    mPanelBg = (UIWidget_o *)this->fields.mPanelBg;
    if ( !mPanelBg )
      goto LABEL_35;
    UIWidget__set_height(mPanelBg, 501, 0LL);
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPositionY(v31, -8.0, 0LL);
    GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnInfo, -8.0, 0LL);
    cancelBtnLb = this->fields.cancelBtnLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelBtnLb )
      goto LABEL_35;
    UILabel__set_text(cancelBtnLb, v33, 0LL);
    decideBtnLb = this->fields.decideBtnLb;
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideBtnLb )
      goto LABEL_35;
    UILabel__set_text(decideBtnLb, v35, 0LL);
    lvExceedTitleLabel = this->fields.lvExceedTitleLabel;
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3322/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
    if ( !lvExceedTitleLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedTitleLabel, v37, 0LL);
    lvExceedSpendItemLabel = this->fields.lvExceedSpendItemLabel;
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_8430/*"LVEXCEED_COMBINE_SPEND_ITEM"*/, 0LL);
    if ( !lvExceedSpendItemLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedSpendItemLabel, v39, 0LL);
    lvExceedSpendQpTxtLabel = this->fields.lvExceedSpendQpTxtLabel;
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_8431/*"LVEXCEED_COMBINE_SPEND_QP"*/, 0LL);
    if ( !lvExceedSpendQpTxtLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedSpendQpTxtLabel, v41, 0LL);
    lvExceedHaveQpTxtLabel = this->fields.lvExceedHaveQpTxtLabel;
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3160/*"COMBINE_HAVE_QP"*/, 0LL);
    if ( !lvExceedHaveQpTxtLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedHaveQpTxtLabel, v43, 0LL);
    lvExceedSpendQpLabel = this->fields.lvExceedSpendQpLabel;
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
    v72 = spendQp;
    v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72);
    v47 = System_String__Format(v45, v46, 0LL);
    if ( !lvExceedSpendQpLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedSpendQpLabel, v47, 0LL);
    lvExceedHaveQpLabel = this->fields.lvExceedHaveQpLabel;
    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
    v71 = haveQp;
    v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
    v51 = System_String__Format(v49, v50, 0LL);
    if ( !lvExceedHaveQpLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedHaveQpLabel, v51, 0LL);
    lvExceedConfirmLabel = this->fields.lvExceedConfirmLabel;
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_8432/*"LVEXCEED_EXE_CONFIRM"*/, 0LL);
    if ( !lvExceedConfirmLabel )
      goto LABEL_35;
    UILabel__set_text(lvExceedConfirmLabel, v53, 0LL);
    if ( !itemObjList )
      goto LABEL_35;
    size = itemObjList->fields._size;
    if ( size >= 1 )
    {
      v55 = 0LL;
      v56 = size;
      while ( 1 )
      {
        if ( v55 >= (unsigned int)size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        lvExceedConsumeItemGrid = (UnityEngine_Component_o *)this->fields.lvExceedConsumeItemGrid;
        if ( !lvExceedConsumeItemGrid )
          break;
        v58 = itemObjList->fields._items->m_Items[v55];
        transform = UnityEngine_Component__get_transform(lvExceedConsumeItemGrid, 0LL);
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v58, transform, 0LL, 0LL);
        if ( !Object )
          break;
        Component_srcLineSprite = (LimitCntUpItemComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 Object,
                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
        if ( !itemList )
          break;
        if ( v55 >= itemList->max_length )
        {
          sub_B17100(Component_srcLineSprite, v62, v63);
          sub_B170A0();
        }
        if ( !Component_srcLineSprite )
          break;
        LimitCntUpItemComponent__SetItemEntity(Component_srcLineSprite, itemList->m_Items[++v55], 0LL);
        if ( (__int64)v55 >= v56 )
          goto LABEL_32;
        size = itemObjList->fields._size;
      }
LABEL_35:
      sub_B170D4();
    }
LABEL_32:
    v64 = this->fields.lvExceedConsumeItemGrid;
    if ( !v64 )
      goto LABEL_35;
    ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v64->klass->vtable._8_Reposition.method)(
      v64,
      v64->klass->vtable._9_ResetPosition.methodPtr);
    v69 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v65, v66, v67, v68);
    System_Action___ctor(v69, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmLvExceed_b__153_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v69, 0LL, 0LL, v70);
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
  UnityEngine_GameObject_o *rariryConfirmInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  UILabel_o *rarityTitleLb; // x0
  UILabel_o *cancelBtnLb; // x25
  System_String_o *v33; // x0
  UILabel_o *decideBtnLb; // x25
  System_String_o *v35; // x0
  const MethodInfo *v36; // x1
  struct UIGrid_o *raritySvtGrid; // x0
  __int64 v38; // x26
  float cellHeight; // s8
  unsigned __int64 v40; // x25
  bool v41; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  MaterialSvtInfo_o *Component_srcLineSprite; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  float y; // s9
  int cellWidth_low; // w20
  UnityEngine_Transform_o *v50; // x0
  int v51; // w9
  float z; // s2
  float v53; // s1
  float v54; // s0
  UnityEngine_Component_o *v55; // x0
  UnityEngine_Transform_o *v56; // x0
  UIGrid_o *v57; // x0
  UILabel_o *spendQpTxtLb; // x23
  System_String_o *v59; // x0
  UILabel_o *haveQpTxtLb; // x23
  System_String_o *v61; // x0
  UILabel_o *spendQpLb; // x23
  System_String_o *v63; // x24
  Il2CppObject *v64; // x0
  System_String_o *v65; // x0
  UILabel_o *haveQpLb; // x22
  System_String_o *v67; // x23
  Il2CppObject *v68; // x0
  System_String_o *v69; // x0
  UILabel_o *rareMaterialMsgLb; // x21
  __int64 *v71; // x8
  System_String_o *v72; // x0
  UILabel_o *rareConfirmMsgLb; // x20
  System_String_o *v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v80; // x20
  const MethodInfo *v81; // x5
  int32_t v82; // [xsp+8h] [xbp-68h] BYREF
  int32_t v83; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC3FC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, baseData);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v15);
    sub_B16FFC(&int_TypeInfo, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&Method_SetRarityDialogControl__SetConfirmRarityInfo_b__142_0__, v18);
    sub_B16FFC(&StringLiteral_9241/*"NEED_QP"*/, v19);
    sub_B16FFC(&StringLiteral_3160/*"COMBINE_HAVE_QP"*/, v20);
    sub_B16FFC(&StringLiteral_3304/*"CONFIRM_COMBINE_MSG"*/, v21);
    sub_B16FFC(&StringLiteral_3159/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, v22);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v23);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v24);
    sub_B16FFC(&StringLiteral_10974/*"RARE_MATERIAL_INFO_MSG"*/, v25);
    sub_B16FFC(&StringLiteral_3192/*"COMBINE_SPEND_QP"*/, v26);
    byte_40FC3FC = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  rariryConfirmInfo = this->fields.rariryConfirmInfo;
  if ( !rariryConfirmInfo )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(rariryConfirmInfo, 1, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v29);
  SetRarityDialogControl__DefaultBgSize(this, v30);
  rarityTitleLb = this->fields.rarityTitleLb;
  if ( !rarityTitleLb )
    goto LABEL_56;
  UILabel__set_text(rarityTitleLb, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_56;
  UILabel__set_text(cancelBtnLb, v33, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_56;
  UILabel__set_text(decideBtnLb, v35, 0LL);
  SetRarityDialogControl__SetCenter(this, v36);
  if ( !list )
    goto LABEL_56;
  raritySvtGrid = this->fields.raritySvtGrid;
  if ( !raritySvtGrid )
    goto LABEL_56;
  LODWORD(v38) = list->max_length;
  cellHeight = raritySvtGrid->fields.cellHeight;
  if ( (int)v38 >= 1 )
  {
    v40 = 0LL;
    v41 = 0;
    do
    {
      if ( v41 )
        goto LABEL_56;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)raritySvtGrid, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !Object )
        goto LABEL_56;
      Component_srcLineSprite = (MaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       Object,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v40 >= list->max_length )
      {
        sub_B17100(Component_srcLineSprite, v46, v47);
        sub_B170A0();
      }
      if ( !Component_srcLineSprite )
        goto LABEL_56;
      MaterialSvtInfo__setMaterialSvtInfo(Component_srcLineSprite, v40, baseData, list->m_Items[v40], 0, 0, 0LL, 0LL);
      raritySvtGrid = this->fields.raritySvtGrid;
      v38 = *(_QWORD *)&list->max_length;
      ++v40;
      v41 = raritySvtGrid == 0LL;
    }
    while ( (__int64)v40 < (int)v38 );
    if ( !raritySvtGrid )
      goto LABEL_56;
  }
  y = this->fields.center.fields.y;
  cellWidth_low = LODWORD(raritySvtGrid->fields.cellWidth);
  v50 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)raritySvtGrid, 0LL);
  if ( !v50 )
    goto LABEL_56;
  v51 = cellWidth_low >= (int)v38 ? v38 : cellWidth_low;
  v53 = cellWidth_low >= (int)v38 ? y : 55.0;
  v54 = (float)(this->fields.center.fields.x - (float)((float)(cellHeight * 0.5) * (float)(v51 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(v50, *(UnityEngine_Vector3_o *)(&v53 - 1), 0LL);
  v55 = (UnityEngine_Component_o *)this->fields.raritySvtGrid;
  if ( !v55 )
    goto LABEL_56;
  v56 = UnityEngine_Component__get_transform(v55, 0LL);
  if ( !v56 )
    goto LABEL_56;
  v84.fields.x = 0.5;
  v84.fields.y = 0.5;
  v84.fields.z = 0.5;
  UnityEngine_Transform__set_localScale(v56, v84, 0LL);
  v57 = this->fields.raritySvtGrid;
  if ( !v57 )
    goto LABEL_56;
  UIGrid__set_repositionNow(v57, 1, 0LL);
  spendQpTxtLb = this->fields.spendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_3192/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !spendQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(spendQpTxtLb, v59, 0LL);
  haveQpTxtLb = this->fields.haveQpTxtLb;
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_3160/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !haveQpTxtLb )
    goto LABEL_56;
  UILabel__set_text(haveQpTxtLb, v61, 0LL);
  spendQpLb = this->fields.spendQpLb;
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  v83 = spendQp;
  v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
  v65 = System_String__Format(v63, v64, 0LL);
  if ( !spendQpLb )
    goto LABEL_56;
  UILabel__set_text(spendQpLb, v65, 0LL);
  haveQpLb = this->fields.haveQpLb;
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  v82 = haveQp;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
  v69 = System_String__Format(v67, v68, 0LL);
  if ( !haveQpLb )
    goto LABEL_56;
  UILabel__set_text(haveQpLb, v69, 0LL);
  rareMaterialMsgLb = this->fields.rareMaterialMsgLb;
  if ( isExceededMaterial )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v71 = &StringLiteral_3159/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v71 = &StringLiteral_10974/*"RARE_MATERIAL_INFO_MSG"*/;
  }
  v72 = LocalizationManager__Get((System_String_o *)*v71, 0LL);
  if ( !rareMaterialMsgLb )
    goto LABEL_56;
  UILabel__set_text(rareMaterialMsgLb, v72, 0LL);
  rareConfirmMsgLb = this->fields.rareConfirmMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_3304/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !rareConfirmMsgLb
    || (UILabel__set_text(rareConfirmMsgLb, v74, 0LL), (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_56:
    sub_B170D4();
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v80 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v75, v76, v77, v78);
    System_Action___ctor(v80, (Il2CppObject *)this, Method_SetRarityDialogControl__SetConfirmRarityInfo_b__142_0__, 0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v80, 0LL, 0LL, v81);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  UILabel_o *normalTitleLb; // x0
  UILabel_o *cancelBtnLb; // x24
  System_String_o *v37; // x0
  UILabel_o *decideBtnLb; // x24
  System_String_o *v39; // x0
  const MethodInfo *v40; // x1
  struct UIGrid_o *materialSvtGrid; // x8
  float v42; // s9
  int32_t v43; // w24
  UnityEngine_Component_o *v44; // x0
  Il2CppObject *key; // x25
  char value; // w27
  UnityEngine_GameObject_o *svtFaceInfo; // x26
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  MaterialSvtInfo_o *Component_srcLineSprite; // x0
  float y; // s10
  int32_t Count; // w23
  int32_t v53; // w0
  struct UIGrid_o *v54; // x8
  float cellWidth; // w20
  int32_t v56; // w22
  UnityEngine_Transform_o *v57; // x0
  int32_t v58; // w9
  float v59; // s1
  float z; // s2
  float v61; // s0
  UnityEngine_Component_o *v62; // x0
  UnityEngine_Transform_o *v63; // x0
  UIGrid_o *v64; // x0
  UILabel_o *normalSpendQpTxtLb; // x22
  System_String_o *v66; // x0
  UILabel_o *normalHaveQpTxtLb; // x22
  System_String_o *v68; // x0
  UILabel_o *confirmSpendQpLb; // x22
  System_String_o *v70; // x23
  Il2CppObject *v71; // x0
  System_String_o *v72; // x0
  UILabel_o *confirmHaveQpLb; // x21
  System_String_o *v74; // x22
  Il2CppObject *v75; // x0
  System_String_o *v76; // x0
  UILabel_o *confirmMsgLb; // x20
  System_String_o *v78; // x0
  UnityEngine_Component_o *statusUpInfoLb; // x0
  UnityEngine_GameObject_o *v80; // x0
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v86; // x20
  const MethodInfo *v87; // x5
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v89; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v90; // [xsp+40h] [xbp-A0h] BYREF
  int32_t v91; // [xsp+78h] [xbp-68h]
  int32_t v92; // [xsp+7Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC3FF & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, baseData);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__, v18);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v19);
    sub_B16FFC(&int_TypeInfo, v20);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__, v22);
    sub_B16FFC(&LocalizationManager_TypeInfo, v23);
    sub_B16FFC(&Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__145_0__, v24);
    sub_B16FFC(&StringLiteral_9241/*"NEED_QP"*/, v25);
    sub_B16FFC(&StringLiteral_3160/*"COMBINE_HAVE_QP"*/, v26);
    sub_B16FFC(&StringLiteral_3304/*"CONFIRM_COMBINE_MSG"*/, v27);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v28);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v29);
    sub_B16FFC(&StringLiteral_3192/*"COMBINE_SPEND_QP"*/, v30);
    byte_40FC3FF = 1;
  }
  memset(&v90, 0, sizeof(v90));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  normalConfirmInfo = this->fields.normalConfirmInfo;
  if ( !normalConfirmInfo )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive(normalConfirmInfo, 1, 0LL);
  this->fields.isStatusUp = isStatusUp;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v33);
  SetRarityDialogControl__DefaultBgSize(this, v34);
  normalTitleLb = this->fields.normalTitleLb;
  if ( !normalTitleLb )
    goto LABEL_46;
  UILabel__set_text(normalTitleLb, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_46;
  UILabel__set_text(cancelBtnLb, v37, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_46;
  UILabel__set_text(decideBtnLb, v39, 0LL);
  SetRarityDialogControl__SetCenter(this, v40);
  if ( !selectedList )
    goto LABEL_46;
  v91 = haveQp;
  System_Collections_Generic_Dictionary_long__bool___get_Count(
    selectedList,
    (const MethodInfo_2E07134 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  materialSvtGrid = this->fields.materialSvtGrid;
  if ( !materialSvtGrid )
    goto LABEL_46;
  v42 = materialSvtGrid->fields.cellHeight * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v89,
    selectedList,
    (const MethodInfo_2E07ADC *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v90 = v89;
  v43 = 0;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v90,
            (const MethodInfo_26B619C *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v44 = (UnityEngine_Component_o *)this->fields.materialSvtGrid;
    if ( !v44 )
      sub_B170D4();
    key = v90.fields.current.fields.key;
    value = (char)v90.fields.current.fields.value;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v44, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Object )
      sub_B170D4();
    Component_srcLineSprite = (MaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     Object,
                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_srcLineSprite )
      sub_B170D4();
    MaterialSvtInfo__setMaterialSvtInfo_20825284(
      Component_srcLineSprite,
      v43++,
      baseData,
      (int64_t)key,
      0,
      0,
      value != 0,
      0LL,
      0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v90,
    (const MethodInfo_26B6300 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_2E07134 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v53 = System_Collections_Generic_Dictionary_long__bool___get_Count(
          selectedList,
          (const MethodInfo_2E07134 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v54 = this->fields.materialSvtGrid;
  if ( !v54 )
    goto LABEL_46;
  cellWidth = v54->fields.cellWidth;
  v56 = v53;
  v57 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.materialSvtGrid, 0LL);
  if ( !v57 )
    goto LABEL_46;
  if ( v56 <= SLODWORD(cellWidth) )
    v58 = Count;
  else
    v58 = LODWORD(cellWidth);
  v59 = 55.0;
  if ( v56 <= SLODWORD(cellWidth) )
    v59 = y;
  v61 = (float)(this->fields.center.fields.x - (float)(v42 * (float)(v58 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(v57, *(UnityEngine_Vector3_o *)(&v59 - 1), 0LL);
  v62 = (UnityEngine_Component_o *)this->fields.materialSvtGrid;
  if ( !v62 )
    goto LABEL_46;
  v63 = UnityEngine_Component__get_transform(v62, 0LL);
  if ( !v63 )
    goto LABEL_46;
  v93.fields.x = 0.5;
  v93.fields.y = 0.5;
  v93.fields.z = 0.5;
  UnityEngine_Transform__set_localScale(v63, v93, 0LL);
  v64 = this->fields.materialSvtGrid;
  if ( !v64 )
    goto LABEL_46;
  UIGrid__set_repositionNow(v64, 1, 0LL);
  normalSpendQpTxtLb = this->fields.normalSpendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_3192/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !normalSpendQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalSpendQpTxtLb, v66, 0LL);
  normalHaveQpTxtLb = this->fields.normalHaveQpTxtLb;
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_3160/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !normalHaveQpTxtLb )
    goto LABEL_46;
  UILabel__set_text(normalHaveQpTxtLb, v68, 0LL);
  confirmSpendQpLb = this->fields.confirmSpendQpLb;
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  LODWORD(v89.fields.dictionary) = spendQp;
  v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v89);
  v72 = System_String__Format(v70, v71, 0LL);
  if ( !confirmSpendQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmSpendQpLb, v72, 0LL);
  confirmHaveQpLb = this->fields.confirmHaveQpLb;
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  v92 = v91;
  v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v92);
  v76 = System_String__Format(v74, v75, 0LL);
  if ( !confirmHaveQpLb )
    goto LABEL_46;
  UILabel__set_text(confirmHaveQpLb, v76, 0LL);
  confirmMsgLb = this->fields.confirmMsgLb;
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_3304/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !confirmMsgLb
    || (UILabel__set_text(confirmMsgLb, v78, 0LL),
        (statusUpInfoLb = (UnityEngine_Component_o *)this->fields.statusUpInfoLb) == 0LL)
    || (v80 = UnityEngine_Component__get_gameObject(statusUpInfoLb, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v80, 0, 0LL), (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_46:
    sub_B170D4();
  }
  if ( combineRootComponent->fields.state == 4 )
  {
    v86 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v81, v82, v83, v84);
    System_Action___ctor(
      v86,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetConfirmSvtEqCombine_b__145_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v86, 0LL, 0LL, v87);
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
  UnityEngine_GameObject_o *exceedConfirmInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  UILabel_o *exceedConfirmTitleLb; // x0
  UILabel_o *cancelBtnLb; // x24
  System_String_o *v30; // x0
  UILabel_o *decideBtnLb; // x24
  System_String_o *v32; // x0
  const MethodInfo *v33; // x1
  struct UIGrid_o *exceedConfirmSvtGrid; // x0
  __int64 v35; // x25
  float cellHeight; // s8
  unsigned __int64 v37; // x24
  bool v38; // w8
  UnityEngine_GameObject_o *svtFaceInfo; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  MaterialSvtInfo_o *Component_srcLineSprite; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  float y; // s9
  int cellWidth_low; // w22
  UnityEngine_Transform_o *v47; // x0
  int v48; // w9
  float z; // s2
  float v50; // s1
  float v51; // s0
  UnityEngine_Component_o *v52; // x0
  UnityEngine_Transform_o *v53; // x0
  UIGrid_o *v54; // x0
  UILabel_o *exceedConfirmSpendQpTxtLb; // x22
  System_String_o *v56; // x0
  UILabel_o *exceedConfirmHaveQpTxtLb; // x22
  System_String_o *v58; // x0
  UILabel_o *exceedConfirmSpendQpLb; // x22
  System_String_o *v60; // x23
  Il2CppObject *v61; // x0
  System_String_o *v62; // x0
  UILabel_o *exceedConfirmHaveQpLb; // x21
  System_String_o *v64; // x22
  Il2CppObject *v65; // x0
  System_String_o *v66; // x0
  UILabel_o *exceedMaterialMsgLb; // x20
  System_String_o *v68; // x0
  UILabel_o *exceedConfirmMsgLb; // x20
  System_String_o *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v76; // x20
  const MethodInfo *v77; // x5
  int32_t v78; // [xsp+8h] [xbp-68h] BYREF
  int32_t v79; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC3FD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, baseData);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v13);
    sub_B16FFC(&int_TypeInfo, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&Method_SetRarityDialogControl__SetExceedMaterialInfo_b__143_0__, v16);
    sub_B16FFC(&StringLiteral_9241/*"NEED_QP"*/, v17);
    sub_B16FFC(&StringLiteral_3160/*"COMBINE_HAVE_QP"*/, v18);
    sub_B16FFC(&StringLiteral_3304/*"CONFIRM_COMBINE_MSG"*/, v19);
    sub_B16FFC(&StringLiteral_3159/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, v20);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v21);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v22);
    sub_B16FFC(&StringLiteral_3192/*"COMBINE_SPEND_QP"*/, v23);
    byte_40FC3FD = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  exceedConfirmInfo = this->fields.exceedConfirmInfo;
  if ( !exceedConfirmInfo )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(exceedConfirmInfo, 1, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v26);
  SetRarityDialogControl__DefaultBgSize(this, v27);
  exceedConfirmTitleLb = this->fields.exceedConfirmTitleLb;
  if ( !exceedConfirmTitleLb )
    goto LABEL_44;
  UILabel__set_text(exceedConfirmTitleLb, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_44;
  UILabel__set_text(cancelBtnLb, v30, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_44;
  UILabel__set_text(decideBtnLb, v32, 0LL);
  SetRarityDialogControl__SetCenter(this, v33);
  if ( !list )
    goto LABEL_44;
  exceedConfirmSvtGrid = this->fields.exceedConfirmSvtGrid;
  if ( !exceedConfirmSvtGrid )
    goto LABEL_44;
  LODWORD(v35) = list->max_length;
  cellHeight = exceedConfirmSvtGrid->fields.cellHeight;
  if ( (int)v35 >= 1 )
  {
    v37 = 0LL;
    v38 = 0;
    do
    {
      if ( v38 )
        goto LABEL_44;
      svtFaceInfo = this->fields.svtFaceInfo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmSvtGrid, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
      if ( !Object )
        goto LABEL_44;
      Component_srcLineSprite = (MaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       Object,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
      if ( v37 >= list->max_length )
      {
        sub_B17100(Component_srcLineSprite, v43, v44);
        sub_B170A0();
      }
      if ( !Component_srcLineSprite )
        goto LABEL_44;
      MaterialSvtInfo__setMaterialSvtInfo(Component_srcLineSprite, v37, baseData, list->m_Items[v37], 0, 0, 0LL, 0LL);
      exceedConfirmSvtGrid = this->fields.exceedConfirmSvtGrid;
      v35 = *(_QWORD *)&list->max_length;
      ++v37;
      v38 = exceedConfirmSvtGrid == 0LL;
    }
    while ( (__int64)v37 < (int)v35 );
    if ( !exceedConfirmSvtGrid )
      goto LABEL_44;
  }
  y = this->fields.center.fields.y;
  cellWidth_low = LODWORD(exceedConfirmSvtGrid->fields.cellWidth);
  v47 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)exceedConfirmSvtGrid, 0LL);
  if ( !v47 )
    goto LABEL_44;
  v48 = cellWidth_low >= (int)v35 ? v35 : cellWidth_low;
  v50 = cellWidth_low >= (int)v35 ? y : 55.0;
  v51 = (float)(this->fields.center.fields.x - (float)((float)(cellHeight * 0.5) * (float)(v48 - 1))) * 0.5;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(v47, *(UnityEngine_Vector3_o *)(&v50 - 1), 0LL);
  v52 = (UnityEngine_Component_o *)this->fields.exceedConfirmSvtGrid;
  if ( !v52 )
    goto LABEL_44;
  v53 = UnityEngine_Component__get_transform(v52, 0LL);
  if ( !v53 )
    goto LABEL_44;
  v80.fields.x = 0.5;
  v80.fields.y = 0.5;
  v80.fields.z = 0.5;
  UnityEngine_Transform__set_localScale(v53, v80, 0LL);
  v54 = this->fields.exceedConfirmSvtGrid;
  if ( !v54 )
    goto LABEL_44;
  UIGrid__set_repositionNow(v54, 1, 0LL);
  exceedConfirmSpendQpTxtLb = this->fields.exceedConfirmSpendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v56 = LocalizationManager__Get((System_String_o *)StringLiteral_3192/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !exceedConfirmSpendQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(exceedConfirmSpendQpTxtLb, v56, 0LL);
  exceedConfirmHaveQpTxtLb = this->fields.exceedConfirmHaveQpTxtLb;
  v58 = LocalizationManager__Get((System_String_o *)StringLiteral_3160/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !exceedConfirmHaveQpTxtLb )
    goto LABEL_44;
  UILabel__set_text(exceedConfirmHaveQpTxtLb, v58, 0LL);
  exceedConfirmSpendQpLb = this->fields.exceedConfirmSpendQpLb;
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  v79 = spendQp;
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
  v62 = System_String__Format(v60, v61, 0LL);
  if ( !exceedConfirmSpendQpLb )
    goto LABEL_44;
  UILabel__set_text(exceedConfirmSpendQpLb, v62, 0LL);
  exceedConfirmHaveQpLb = this->fields.exceedConfirmHaveQpLb;
  v64 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  v78 = haveQp;
  v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78);
  v66 = System_String__Format(v64, v65, 0LL);
  if ( !exceedConfirmHaveQpLb )
    goto LABEL_44;
  UILabel__set_text(exceedConfirmHaveQpLb, v66, 0LL);
  exceedMaterialMsgLb = this->fields.exceedMaterialMsgLb;
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_3159/*"COMBINE_EXCEEDED_MATERIAL_INFO_MSG"*/, 0LL);
  if ( !exceedMaterialMsgLb
    || (UILabel__set_text(exceedMaterialMsgLb, v68, 0LL),
        exceedConfirmMsgLb = this->fields.exceedConfirmMsgLb,
        v70 = LocalizationManager__Get((System_String_o *)StringLiteral_3304/*"CONFIRM_COMBINE_MSG"*/, 0LL),
        !exceedConfirmMsgLb)
    || (UILabel__set_text(exceedConfirmMsgLb, v70, 0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_44:
    sub_B170D4();
  }
  if ( combineRootComponent->fields.state == 3 )
  {
    v76 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v71, v72, v73, v74);
    System_Action___ctor(
      v76,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetExceedMaterialInfo_b__143_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 0, v76, 0LL, 0LL, v77);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  UILabel_o *friendshipExceedTitleLb; // x0
  UILabel_o *cancelBtnLb; // x22
  System_String_o *v24; // x0
  UILabel_o *decideBtnLb; // x22
  System_String_o *v26; // x0
  UILabel_o *friendshipExceedSpendQpTxtLb; // x22
  System_String_o *v28; // x0
  UILabel_o *friendshipExceedHaveQpTxtLb; // x22
  System_String_o *v30; // x0
  UILabel_o *friendshipExceedSpendQpLb; // x22
  System_String_o *v32; // x23
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  UILabel_o *friendshipExceedHaveQpLb; // x21
  System_String_o *v36; // x22
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  UILabel_o *friendshipExceedMsgLb; // x20
  System_String_o *v40; // x0
  UnityEngine_Component_o *statusUpInfoLb; // x0
  UnityEngine_GameObject_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v48; // x20
  const MethodInfo *v49; // x5
  int32_t v50; // [xsp+8h] [xbp-38h] BYREF
  int32_t v51; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FC40C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, msg);
    sub_B16FFC(&int_TypeInfo, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__158_0__, v11);
    sub_B16FFC(&StringLiteral_9241/*"NEED_QP"*/, v12);
    sub_B16FFC(&StringLiteral_3160/*"COMBINE_HAVE_QP"*/, v13);
    sub_B16FFC(&StringLiteral_6429/*"FRIENDSHIP_EXCEED_SPEND_QP"*/, v14);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v15);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v16);
    sub_B16FFC(&StringLiteral_3312/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/, v17);
    byte_40FC40C = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)msg);
  friendshipExceedConfirmInfo = this->fields.friendshipExceedConfirmInfo;
  if ( !friendshipExceedConfirmInfo )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(friendshipExceedConfirmInfo, 1, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v20);
  SetRarityDialogControl__DefaultBgSize(this, v21);
  friendshipExceedTitleLb = this->fields.friendshipExceedTitleLb;
  if ( !friendshipExceedTitleLb )
    goto LABEL_22;
  UILabel__set_text(friendshipExceedTitleLb, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_22;
  UILabel__set_text(cancelBtnLb, v24, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_22;
  UILabel__set_text(decideBtnLb, v26, 0LL);
  friendshipExceedSpendQpTxtLb = this->fields.friendshipExceedSpendQpTxtLb;
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_6429/*"FRIENDSHIP_EXCEED_SPEND_QP"*/, 0LL);
  if ( !friendshipExceedSpendQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(friendshipExceedSpendQpTxtLb, v28, 0LL);
  friendshipExceedHaveQpTxtLb = this->fields.friendshipExceedHaveQpTxtLb;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3160/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !friendshipExceedHaveQpTxtLb )
    goto LABEL_22;
  UILabel__set_text(friendshipExceedHaveQpTxtLb, v30, 0LL);
  friendshipExceedSpendQpLb = this->fields.friendshipExceedSpendQpLb;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  v51 = spendQp;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
  v34 = System_String__Format(v32, v33, 0LL);
  if ( !friendshipExceedSpendQpLb )
    goto LABEL_22;
  UILabel__set_text(friendshipExceedSpendQpLb, v34, 0LL);
  friendshipExceedHaveQpLb = this->fields.friendshipExceedHaveQpLb;
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  v50 = haveQp;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  v38 = System_String__Format(v36, v37, 0LL);
  if ( !friendshipExceedHaveQpLb )
    goto LABEL_22;
  UILabel__set_text(friendshipExceedHaveQpLb, v38, 0LL);
  friendshipExceedMsgLb = this->fields.friendshipExceedMsgLb;
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_3312/*"CONFIRM_FRIENDSHIP_EXCEED_COMBINE"*/, 0LL);
  if ( !friendshipExceedMsgLb
    || (UILabel__set_text(friendshipExceedMsgLb, v40, 0LL),
        (statusUpInfoLb = (UnityEngine_Component_o *)this->fields.statusUpInfoLb) == 0LL)
    || (v42 = UnityEngine_Component__get_gameObject(statusUpInfoLb, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v42, 0, 0LL), (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_22:
    sub_B170D4();
  }
  if ( combineRootComponent->fields.state == 12 )
  {
    v48 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v43, v44, v45, v46);
    System_Action___ctor(
      v48,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetFriendshipExceedInfo_b__158_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v48, 0LL, 0LL, v49);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  const MethodInfo *v42; // x1
  UnityEngine_GameObject_o *limitUpConfirmInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  UILabel_o *limitUpTitleLb; // x0
  UILabel_o *cancelBtnLb; // x23
  System_String_o *v49; // x0
  UILabel_o *decideBtnLb; // x23
  System_String_o *v51; // x0
  UILabel_o *limitUpConfirmSpendQpTxtLb; // x23
  System_String_o *v53; // x0
  UILabel_o *limitUpConfirmHaveQpTxtLb; // x23
  System_String_o *v55; // x0
  UILabel_o *limitUpConfirmSpendQpLb; // x23
  System_String_o *v57; // x24
  Il2CppObject *v58; // x0
  System_String_o *v59; // x0
  UILabel_o *limitUpConfirmHaveQpLb; // x22
  System_String_o *v61; // x23
  Il2CppObject *v62; // x0
  System_String_o *v63; // x0
  UILabel_o *limitUpConfirmMsgLb; // x21
  System_String_o *v65; // x0
  UnityEngine_Component_o *statusUpInfoLb; // x0
  UnityEngine_GameObject_o *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v73; // x21
  const MethodInfo *v74; // x5
  int32_t v75; // [xsp+8h] [xbp-48h] BYREF
  int32_t v76; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FC402 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, baseData);
    sub_B16FFC(&int_TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&Method_SetRarityDialogControl___c__DisplayClass148_0__SetLimitUpInfo_b__0__, v15);
    sub_B16FFC(&SetRarityDialogControl___c__DisplayClass148_0_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_9241/*"NEED_QP"*/, v17);
    sub_B16FFC(&StringLiteral_3160/*"COMBINE_HAVE_QP"*/, v18);
    sub_B16FFC(&StringLiteral_3304/*"CONFIRM_COMBINE_MSG"*/, v19);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v20);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v21);
    sub_B16FFC(&StringLiteral_3192/*"COMBINE_SPEND_QP"*/, v22);
    byte_40FC402 = 1;
  }
  v23 = sub_B170CC(
          SetRarityDialogControl___c__DisplayClass148_0_TypeInfo,
          baseData,
          combineLimitUpWarningDialog,
          msg,
          *(_QWORD *)&spendQp);
  SetRarityDialogControl___c__DisplayClass148_0___ctor((SetRarityDialogControl___c__DisplayClass148_0_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_23;
  *(_QWORD *)(v23 + 16) = baseData;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)baseData, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v23 + 24) = combineLimitUpWarningDialog;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v23 + 24),
    (System_Int32_array **)combineLimitUpWarningDialog,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  *(_QWORD *)(v23 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 32), (System_Int32_array **)this, v36, v37, v38, v39, v40, v41);
  SetRarityDialogControl__DisableConfirmInfo(this, v42);
  limitUpConfirmInfo = this->fields.limitUpConfirmInfo;
  if ( !limitUpConfirmInfo )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(limitUpConfirmInfo, 1, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v45);
  SetRarityDialogControl__DefaultBgSize(this, v46);
  limitUpTitleLb = this->fields.limitUpTitleLb;
  if ( !limitUpTitleLb )
    goto LABEL_23;
  UILabel__set_text(limitUpTitleLb, msg, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v49 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_23;
  UILabel__set_text(cancelBtnLb, v49, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  v51 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_23;
  UILabel__set_text(decideBtnLb, v51, 0LL);
  limitUpConfirmSpendQpTxtLb = this->fields.limitUpConfirmSpendQpTxtLb;
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3192/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !limitUpConfirmSpendQpTxtLb )
    goto LABEL_23;
  UILabel__set_text(limitUpConfirmSpendQpTxtLb, v53, 0LL);
  limitUpConfirmHaveQpTxtLb = this->fields.limitUpConfirmHaveQpTxtLb;
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_3160/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !limitUpConfirmHaveQpTxtLb )
    goto LABEL_23;
  UILabel__set_text(limitUpConfirmHaveQpTxtLb, v55, 0LL);
  limitUpConfirmSpendQpLb = this->fields.limitUpConfirmSpendQpLb;
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  v76 = spendQp;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76);
  v59 = System_String__Format(v57, v58, 0LL);
  if ( !limitUpConfirmSpendQpLb )
    goto LABEL_23;
  UILabel__set_text(limitUpConfirmSpendQpLb, v59, 0LL);
  limitUpConfirmHaveQpLb = this->fields.limitUpConfirmHaveQpLb;
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  v75 = haveQp;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v75);
  v63 = System_String__Format(v61, v62, 0LL);
  if ( !limitUpConfirmHaveQpLb )
    goto LABEL_23;
  UILabel__set_text(limitUpConfirmHaveQpLb, v63, 0LL);
  limitUpConfirmMsgLb = this->fields.limitUpConfirmMsgLb;
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_3304/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !limitUpConfirmMsgLb
    || (UILabel__set_text(limitUpConfirmMsgLb, v65, 0LL),
        (statusUpInfoLb = (UnityEngine_Component_o *)this->fields.statusUpInfoLb) == 0LL)
    || (v67 = UnityEngine_Component__get_gameObject(statusUpInfoLb, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v67, 0, 0LL), (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_23:
    sub_B170D4();
  }
  if ( combineRootComponent->fields.state == 5 )
  {
    v73 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v68, v69, v70, v71);
    System_Action___ctor(
      v73,
      (Il2CppObject *)v23,
      Method_SetRarityDialogControl___c__DisplayClass148_0__SetLimitUpInfo_b__0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v73, 0LL, 0LL, v74);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  UIWidget_o *mPanelBg; // x0
  UnityEngine_GameObject_o *v48; // x0
  NpUpConfirmComponent_o *npUpInfoComp; // x0
  UILabel_o *npUpTitleLb; // x21
  __int64 *v51; // x8
  System_String_o *v52; // x0
  UILabel_o *cancelBtnLb; // x21
  System_String_o *v54; // x0
  UILabel_o *decideBtnLb; // x21
  System_String_o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v62; // x20
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  System_Action_o *v67; // x21
  const MethodInfo *v68; // x5
  SetRarityDialogControl_o *v69; // x0
  int32_t v70; // w1
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4

  if ( (byte_40FC405 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, baseData);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&Method_SetRarityDialogControl_DefaultBgSize__, v18);
    sub_B16FFC(&Method_SetRarityDialogControl__SetNpCombineInfo_b__151_0__, v19);
    sub_B16FFC(&Method_SetRarityDialogControl__SetNpCombineInfo_b__151_1__, v20);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v21);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v22);
    sub_B16FFC(&StringLiteral_3332/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/, v23);
    sub_B16FFC(&StringLiteral_3330/*"CONFIRM_TITLE_TD_COMBINE"*/, v24);
    byte_40FC405 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  npUpConfirmInfo = this->fields.npUpConfirmInfo;
  if ( !npUpConfirmInfo )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(npUpConfirmInfo, 1, 0LL);
  this->fields.npBaseData = baseData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.npBaseData,
    (System_Int32_array **)baseData,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.npSelectMtUsrSvtIdList = selectUsrSvtIdList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.npSelectMtUsrSvtIdList,
    (System_Int32_array **)selectUsrSvtIdList,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.npLvUpData = updata;
  sub_B16F98(
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
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v45);
  SetRarityDialogControl__DefaultBgSize(this, v46);
  mPanelBg = (UIWidget_o *)this->fields.mPanelBg;
  if ( !mPanelBg )
    goto LABEL_32;
  UIWidget__set_height(mPanelBg, 500, 0LL);
  v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v48, -8.0, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.confirmBtnInfo, -23.0, 0LL);
  npUpInfoComp = this->fields.npUpInfoComp;
  if ( !npUpInfoComp )
    goto LABEL_32;
  NpUpConfirmComponent__setNpUpConfirmInfo(
    npUpInfoComp,
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
    v51 = &StringLiteral_3332/*"CONFIRM_TITLE_TD_RECONFIRM_COMBINE"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v51 = &StringLiteral_3330/*"CONFIRM_TITLE_TD_COMBINE"*/;
  }
  v52 = LocalizationManager__Get((System_String_o *)*v51, 0LL);
  if ( !npUpTitleLb )
    goto LABEL_32;
  UILabel__set_text(npUpTitleLb, v52, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb
    || (UILabel__set_text(cancelBtnLb, v54, 0LL),
        decideBtnLb = this->fields.decideBtnLb,
        v56 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
        !decideBtnLb)
    || (UILabel__set_text(decideBtnLb, v56, 0LL), (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_32:
    sub_B170D4();
  }
  if ( combineRootComponent->fields.state == 11 )
  {
    if ( (this->fields.npIsExceedMaxLv || this->fields.npIsCombineSvt || this->fields.npIsExceededMaterial)
      && !reConfirmation )
    {
      v62 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v57, v58, v59, v60);
      System_Action___ctor(v62, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__151_0__, 0LL);
      v67 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v63, v64, v65, v66);
      System_Action___ctor(v67, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
      v69 = this;
      v70 = 0;
    }
    else
    {
      v62 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v57, v58, v59, v60);
      System_Action___ctor(v62, (Il2CppObject *)this, Method_SetRarityDialogControl__SetNpCombineInfo_b__151_1__, 0LL);
      v67 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v71, v72, v73, v74);
      System_Action___ctor(v67, (Il2CppObject *)this, Method_SetRarityDialogControl_DefaultBgSize__, 0LL);
      v70 = 8;
      v69 = this;
    }
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v69, v70, v62, 0LL, v67, v68);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  UILabel_o *upTitleLb; // x0
  UILabel_o *upTargetRubyLb; // x0
  UILabel_o *upTargetNameLb; // x0
  UIExtrusionLabel_o *currentLvLb; // x21
  System_String_o *v24; // x0
  UIExtrusionLabel_o *resLvLb; // x21
  System_String_o *v26; // x0
  UILabel_o *upSpendQpTxtLb; // x21
  System_String_o *v28; // x0
  UILabel_o *upHaveQpTxtLb; // x21
  System_String_o *v30; // x0
  UILabel_o *upSpendQpLb; // x21
  System_String_o *v32; // x22
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  UILabel_o *upHaveQpLb; // x21
  System_String_o *v36; // x22
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  UILabel_o *upConfirmMsgLb; // x20
  System_String_o *v40; // x0
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v42; // x0
  UILabel_o *decideBtnLb; // x20
  System_String_o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v50; // x20
  const MethodInfo *v51; // x5
  int32_t haveQp; // [xsp+8h] [xbp-38h] BYREF
  int32_t spendQp; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FC403 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, updata);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__149_0__, v9);
    sub_B16FFC(&StringLiteral_9241/*"NEED_QP"*/, v10);
    sub_B16FFC(&StringLiteral_3160/*"COMBINE_HAVE_QP"*/, v11);
    sub_B16FFC(&StringLiteral_3304/*"CONFIRM_COMBINE_MSG"*/, v12);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v13);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v14);
    sub_B16FFC(&StringLiteral_3192/*"COMBINE_SPEND_QP"*/, v15);
    byte_40FC403 = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)updata);
  skillUpConfirmInfo = this->fields.skillUpConfirmInfo;
  if ( !skillUpConfirmInfo )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(skillUpConfirmInfo, 1, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v18);
  SetRarityDialogControl__DefaultBgSize(this, v19);
  upTitleLb = this->fields.upTitleLb;
  if ( !upTitleLb )
    goto LABEL_25;
  UILabel__set_text(upTitleLb, titleMsg, 0LL);
  if ( !updata )
    goto LABEL_25;
  upTargetRubyLb = this->fields.upTargetRubyLb;
  if ( !upTargetRubyLb )
    goto LABEL_25;
  UILabel__set_text(upTargetRubyLb, updata->fields.targetRuby, 0LL);
  upTargetNameLb = this->fields.upTargetNameLb;
  if ( !upTargetNameLb )
    goto LABEL_25;
  UILabel__set_text(upTargetNameLb, updata->fields.targetName, 0LL);
  currentLvLb = this->fields.currentLvLb;
  v24 = System_Int32__ToString((int)updata + 56, 0LL);
  if ( !currentLvLb )
    goto LABEL_25;
  UIExtrusionLabel__set_text(currentLvLb, v24, 0LL);
  resLvLb = this->fields.resLvLb;
  v26 = System_Int32__ToString((int)updata + 60, 0LL);
  if ( !resLvLb )
    goto LABEL_25;
  UIExtrusionLabel__set_text(resLvLb, v26, 0LL);
  upSpendQpTxtLb = this->fields.upSpendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3192/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !upSpendQpTxtLb )
    goto LABEL_25;
  UILabel__set_text(upSpendQpTxtLb, v28, 0LL);
  upHaveQpTxtLb = this->fields.upHaveQpTxtLb;
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3160/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !upHaveQpTxtLb )
    goto LABEL_25;
  UILabel__set_text(upHaveQpTxtLb, v30, 0LL);
  upSpendQpLb = this->fields.upSpendQpLb;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  spendQp = updata->fields.spendQp;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &spendQp);
  v34 = System_String__Format(v32, v33, 0LL);
  if ( !upSpendQpLb )
    goto LABEL_25;
  UILabel__set_text(upSpendQpLb, v34, 0LL);
  upHaveQpLb = this->fields.upHaveQpLb;
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  haveQp = updata->fields.haveQp;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveQp);
  v38 = System_String__Format(v36, v37, 0LL);
  if ( !upHaveQpLb )
    goto LABEL_25;
  UILabel__set_text(upHaveQpLb, v38, 0LL);
  upConfirmMsgLb = this->fields.upConfirmMsgLb;
  v40 = LocalizationManager__Get((System_String_o *)StringLiteral_3304/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !upConfirmMsgLb )
    goto LABEL_25;
  UILabel__set_text(upConfirmMsgLb, v40, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb
    || (UILabel__set_text(cancelBtnLb, v42, 0LL),
        decideBtnLb = this->fields.decideBtnLb,
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
        !decideBtnLb)
    || (UILabel__set_text(decideBtnLb, v44, 0LL), (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_25:
    sub_B170D4();
  }
  if ( combineRootComponent->fields.state == 10 )
  {
    v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v45, v46, v47, v48);
    System_Action___ctor(
      v50,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetSkillNpCombineInfo_b__149_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v50, 0LL, 0LL, v51);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  System_String_o *v25; // x20
  UnityEngine_GameObject_o *v26; // x0
  SpecialAscensionConfirmInfo_o *Component_srcLineSprite; // x0
  UILabel_o *cancelBtnLb; // x20
  System_String_o *v29; // x0
  UILabel_o *decideBtnLb; // x20
  System_String_o *v31; // x0
  UnityEngine_Component_o *statusUpInfoLb; // x0
  UnityEngine_GameObject_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Action_o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v44; // x21
  const MethodInfo *v45; // x5
  SetRarityDialogControl_o *v46; // x0
  int32_t v47; // w1

  if ( (byte_40FC40D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, baseData);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&Method_SetRarityDialogControl__SetSpecialAscension_b__159_0__, v12);
    sub_B16FFC(&Method_SetRarityDialogControl__SetSpecialAscension_b__159_1__, v13);
    sub_B16FFC(&Method_SetRarityDialogControl__SetSpecialAscension_b__159_2__, v14);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v15);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v16);
    sub_B16FFC(&StringLiteral_12234/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/, v17);
    sub_B16FFC(&StringLiteral_12238/*"SPECIAL_ASCENSION_WARNING1_TXT"*/, v18);
    sub_B16FFC(&StringLiteral_12239/*"SPECIAL_ASCENSION_WARNING2_TXT"*/, v19);
    sub_B16FFC(&StringLiteral_1/*""*/, v20);
    byte_40FC40D = 1;
  }
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  specialAscensionConfirmInfo = this->fields.specialAscensionConfirmInfo;
  if ( !specialAscensionConfirmInfo )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(specialAscensionConfirmInfo, 1, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v23);
  SetRarityDialogControl__DefaultBgSize(this, v24);
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
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12234/*"SPECIAL_ASCENSION_CONFIRM_TXT"*/, 0LL);
    this->fields.specialAscensionConfirm = 0;
  }
  else if ( warning1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12238/*"SPECIAL_ASCENSION_WARNING1_TXT"*/, 0LL);
    this->fields.specialAscensionWarning1 = 0;
  }
  else if ( warning2 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_12239/*"SPECIAL_ASCENSION_WARNING2_TXT"*/, 0LL);
    this->fields.specialAscensionWarning2 = 0;
  }
  else
  {
    v25 = (System_String_o *)StringLiteral_1/*""*/;
  }
  v26 = this->fields.specialAscensionConfirmInfo;
  if ( !v26 )
    goto LABEL_41;
  Component_srcLineSprite = (SpecialAscensionConfirmInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v26,
                                                               (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SpecialAscensionConfirmInfo___);
  if ( !Component_srcLineSprite )
    goto LABEL_41;
  SpecialAscensionConfirmInfo__SetSpecialAscensionConfirmInfo(Component_srcLineSprite, v25, 25, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_41;
  UILabel__set_text(cancelBtnLb, v29, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb
    || (UILabel__set_text(decideBtnLb, v31, 0LL),
        (statusUpInfoLb = (UnityEngine_Component_o *)this->fields.statusUpInfoLb) == 0LL)
    || (v33 = UnityEngine_Component__get_gameObject(statusUpInfoLb, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(v33, 0, 0LL),
        v38 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v34, v35, v36, v37),
        System_Action___ctor(
          v38,
          (Il2CppObject *)this,
          Method_SetRarityDialogControl__SetSpecialAscension_b__159_0__,
          0LL),
        (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
  {
LABEL_41:
    sub_B170D4();
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
      v44 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v39, v40, v41, v42);
      System_Action___ctor(
        v44,
        (Il2CppObject *)this,
        Method_SetRarityDialogControl__SetSpecialAscension_b__159_1__,
        0LL);
      v47 = 8;
      v46 = this;
      goto LABEL_39;
    }
    v44 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v39, v40, v41, v42);
    System_Action___ctor(v44, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__159_2__, 0LL);
    v46 = this;
    v47 = 0;
LABEL_39:
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(v46, v47, v44, v38, 0LL, v45);
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
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1
  UILabel_o *allTitleLb; // x0
  UILabel_o *cancelBtnLb; // x26
  System_String_o *v39; // x0
  UILabel_o *decideBtnLb; // x26
  System_String_o *v41; // x0
  const MethodInfo *v42; // x1
  struct UIGrid_o *allSvtGrid; // x8
  float v44; // s9
  int32_t v45; // w26
  UnityEngine_Component_o *v46; // x0
  char value; // w23
  Il2CppObject *key; // x27
  UnityEngine_GameObject_o *svtFaceInfo; // x28
  UnityEngine_Transform_o *transform; // x2
  UnityEngine_GameObject_o *Object; // x0
  MaterialSvtInfo_o *Component_srcLineSprite; // x0
  float y; // s10
  int32_t Count; // w25
  int32_t v55; // w0
  struct UIGrid_o *v56; // x8
  float cellWidth; // w20
  int32_t v58; // w24
  UnityEngine_Transform_o *v59; // x0
  int32_t v60; // w10
  float v61; // s1
  float z; // s2
  float v63; // s0
  UnityEngine_Component_o *v64; // x0
  UnityEngine_Transform_o *v65; // x0
  UIGrid_o *v66; // x0
  UILabel_o *allSpendQpTxtLb; // x24
  System_String_o *v68; // x0
  UILabel_o *allHaveQpTxtLb; // x24
  System_String_o *v70; // x0
  UILabel_o *allSpendQpLb; // x24
  System_String_o *v72; // x25
  Il2CppObject *v73; // x0
  System_String_o *v74; // x0
  UILabel_o *allHaveQpLb; // x23
  System_String_o *v76; // x24
  Il2CppObject *v77; // x0
  System_String_o *v78; // x0
  UnityEngine_Component_o *allStatusUpInfoLb; // x0
  UnityEngine_GameObject_o *v80; // x0
  UnityEngine_Component_o *allLimitUpInfoLb; // x0
  UnityEngine_GameObject_o *v82; // x0
  UnityEngine_Component_o *allRareMsgLb; // x0
  UnityEngine_GameObject_o *v84; // x0
  UnityEngine_Component_o *allLimitRareLb; // x0
  UnityEngine_GameObject_o *v86; // x0
  UILabel_o *v87; // x20
  System_String_o *v88; // x0
  UnityEngine_Component_o *v89; // x0
  UILabel_o *v90; // x0
  UnityEngine_Component_o *v91; // x0
  UnityEngine_GameObject_o *v92; // x0
  UILabel_o *v93; // x20
  System_String_o *v94; // x0
  UnityEngine_GameObject_o *v95; // x0
  UILabel_o *allRareConfirmMsgLb; // x20
  System_String_o *v97; // x0
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  struct CombineRootComponent_o *combineRootComponent; // x8
  System_Action_o *v103; // x20
  const MethodInfo *v104; // x5
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v106; // [xsp+18h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v107; // [xsp+40h] [xbp-A0h] BYREF
  _BOOL4 v108; // [xsp+78h] [xbp-68h]
  int32_t v109; // [xsp+7Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4

  v108 = isRare;
  if ( (byte_40FC408 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, baseData);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__bool__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__get_Current__, v19);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___, v20);
    sub_B16FFC(&int_TypeInfo, v21);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Key__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_long__bool__get_Value__, v23);
    sub_B16FFC(&LocalizationManager_TypeInfo, v24);
    sub_B16FFC(&Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__154_0__, v25);
    sub_B16FFC(&StringLiteral_9241/*"NEED_QP"*/, v26);
    sub_B16FFC(&StringLiteral_3160/*"COMBINE_HAVE_QP"*/, v27);
    sub_B16FFC(&StringLiteral_3304/*"CONFIRM_COMBINE_MSG"*/, v28);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v29);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v30);
    sub_B16FFC(&StringLiteral_10974/*"RARE_MATERIAL_INFO_MSG"*/, v31);
    sub_B16FFC(&StringLiteral_3192/*"COMBINE_SPEND_QP"*/, v32);
    byte_40FC408 = 1;
  }
  memset(&v107, 0, sizeof(v107));
  SetRarityDialogControl__DisableConfirmInfo(this, (const MethodInfo *)baseData);
  allDispConfirmInfo = this->fields.allDispConfirmInfo;
  if ( !allDispConfirmInfo )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(allDispConfirmInfo, 1, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  SetRarityDialogControl__MoveAlpha(this, v35);
  SetRarityDialogControl__DefaultBgSize(this, v36);
  allTitleLb = this->fields.allTitleLb;
  if ( !allTitleLb )
    goto LABEL_74;
  UILabel__set_text(allTitleLb, title, 0LL);
  cancelBtnLb = this->fields.cancelBtnLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelBtnLb )
    goto LABEL_74;
  UILabel__set_text(cancelBtnLb, v39, 0LL);
  decideBtnLb = this->fields.decideBtnLb;
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !decideBtnLb )
    goto LABEL_74;
  UILabel__set_text(decideBtnLb, v41, 0LL);
  SetRarityDialogControl__SetCenter(this, v42);
  if ( !selectedList )
    goto LABEL_74;
  System_Collections_Generic_Dictionary_long__bool___get_Count(
    selectedList,
    (const MethodInfo_2E07134 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  allSvtGrid = this->fields.allSvtGrid;
  if ( !allSvtGrid )
    goto LABEL_74;
  v44 = allSvtGrid->fields.cellHeight * 0.5;
  System_Collections_Generic_Dictionary_long__bool___GetEnumerator(
    &v106,
    selectedList,
    (const MethodInfo_2E07ADC *)Method_System_Collections_Generic_Dictionary_long__bool__GetEnumerator__);
  v107 = v106;
  v45 = 0;
  while ( System_Collections_Generic_Dictionary_Enumerator_long__bool___MoveNext(
            &v107,
            (const MethodInfo_26B619C *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__MoveNext__) )
  {
    v46 = (UnityEngine_Component_o *)this->fields.allSvtGrid;
    if ( !v46 )
      sub_B170D4();
    key = v107.fields.current.fields.key;
    value = (char)v107.fields.current.fields.value;
    svtFaceInfo = this->fields.svtFaceInfo;
    transform = UnityEngine_Component__get_transform(v46, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, svtFaceInfo, transform, 0LL, 0LL);
    if ( !Object )
      sub_B170D4();
    Component_srcLineSprite = (MaterialSvtInfo_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     Object,
                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MaterialSvtInfo___);
    if ( !Component_srcLineSprite )
      sub_B170D4();
    MaterialSvtInfo__setMaterialSvtInfo_20825284(
      Component_srcLineSprite,
      v45++,
      baseData,
      (int64_t)key,
      0,
      0,
      value != 0,
      0LL,
      0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_long__bool___Dispose(
    &v107,
    (const MethodInfo_26B6300 *)Method_System_Collections_Generic_Dictionary_Enumerator_long__bool__Dispose__);
  y = this->fields.center.fields.y;
  Count = System_Collections_Generic_Dictionary_long__bool___get_Count(
            selectedList,
            (const MethodInfo_2E07134 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v55 = System_Collections_Generic_Dictionary_long__bool___get_Count(
          selectedList,
          (const MethodInfo_2E07134 *)Method_System_Collections_Generic_Dictionary_long__bool__get_Count__);
  v56 = this->fields.allSvtGrid;
  if ( !v56 )
    goto LABEL_74;
  cellWidth = v56->fields.cellWidth;
  v58 = v55;
  v59 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.allSvtGrid, 0LL);
  if ( !v59 )
    goto LABEL_74;
  if ( v58 <= SLODWORD(cellWidth) )
    v60 = Count;
  else
    v60 = LODWORD(cellWidth);
  v61 = 70.0;
  if ( v58 <= SLODWORD(cellWidth) )
    v61 = y;
  v63 = (float)(this->fields.center.fields.x - (float)(v44 * (float)(v60 - 1))) * 0.47;
  z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition(v59, *(UnityEngine_Vector3_o *)(&v61 - 1), 0LL);
  v64 = (UnityEngine_Component_o *)this->fields.allSvtGrid;
  if ( !v64 )
    goto LABEL_74;
  v65 = UnityEngine_Component__get_transform(v64, 0LL);
  if ( !v65 )
    goto LABEL_74;
  v110.fields.x = 0.47;
  v110.fields.y = 0.47;
  v110.fields.z = 0.47;
  UnityEngine_Transform__set_localScale(v65, v110, 0LL);
  v66 = this->fields.allSvtGrid;
  if ( !v66 )
    goto LABEL_74;
  UIGrid__set_repositionNow(v66, 1, 0LL);
  allSpendQpTxtLb = this->fields.allSpendQpTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_3192/*"COMBINE_SPEND_QP"*/, 0LL);
  if ( !allSpendQpTxtLb )
    goto LABEL_74;
  UILabel__set_text(allSpendQpTxtLb, v68, 0LL);
  allHaveQpTxtLb = this->fields.allHaveQpTxtLb;
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_3160/*"COMBINE_HAVE_QP"*/, 0LL);
  if ( !allHaveQpTxtLb )
    goto LABEL_74;
  UILabel__set_text(allHaveQpTxtLb, v70, 0LL);
  allSpendQpLb = this->fields.allSpendQpLb;
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  LODWORD(v106.fields.dictionary) = spendQp;
  v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v106);
  v74 = System_String__Format(v72, v73, 0LL);
  if ( !allSpendQpLb )
    goto LABEL_74;
  UILabel__set_text(allSpendQpLb, v74, 0LL);
  allHaveQpLb = this->fields.allHaveQpLb;
  v76 = LocalizationManager__Get((System_String_o *)StringLiteral_9241/*"NEED_QP"*/, 0LL);
  v109 = haveQp;
  v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v109);
  v78 = System_String__Format(v76, v77, 0LL);
  if ( !allHaveQpLb )
    goto LABEL_74;
  UILabel__set_text(allHaveQpLb, v78, 0LL);
  allStatusUpInfoLb = (UnityEngine_Component_o *)this->fields.allStatusUpInfoLb;
  if ( !allStatusUpInfoLb )
    goto LABEL_74;
  v80 = UnityEngine_Component__get_gameObject(allStatusUpInfoLb, 0LL);
  if ( !v80 )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(v80, 0, 0LL);
  allLimitUpInfoLb = (UnityEngine_Component_o *)this->fields.allLimitUpInfoLb;
  if ( !allLimitUpInfoLb )
    goto LABEL_74;
  v82 = UnityEngine_Component__get_gameObject(allLimitUpInfoLb, 0LL);
  if ( !v82 )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(v82, 0, 0LL);
  allRareMsgLb = (UnityEngine_Component_o *)this->fields.allRareMsgLb;
  if ( !allRareMsgLb )
    goto LABEL_74;
  v84 = UnityEngine_Component__get_gameObject(allRareMsgLb, 0LL);
  if ( !v84 )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(v84, 0, 0LL);
  allLimitRareLb = (UnityEngine_Component_o *)this->fields.allLimitRareLb;
  if ( !allLimitRareLb )
    goto LABEL_74;
  v86 = UnityEngine_Component__get_gameObject(allLimitRareLb, 0LL);
  if ( !v86 )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(v86, 0, 0LL);
  if ( System_String__IsNullOrEmpty(limitWarningMsg, 0LL) )
  {
    if ( !v108 )
      goto LABEL_63;
    v87 = this->fields.allRareMsgLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v88 = LocalizationManager__Get((System_String_o *)StringLiteral_10974/*"RARE_MATERIAL_INFO_MSG"*/, 0LL);
    if ( !v87 )
      goto LABEL_74;
    UILabel__set_text(v87, v88, 0LL);
    v89 = (UnityEngine_Component_o *)this->fields.allRareMsgLb;
    if ( !v89 )
      goto LABEL_74;
    goto LABEL_61;
  }
  v90 = this->fields.allLimitUpInfoLb;
  if ( !v90 )
    goto LABEL_74;
  UILabel__set_text(v90, limitWarningMsg, 0LL);
  v91 = (UnityEngine_Component_o *)this->fields.allLimitUpInfoLb;
  if ( !v91 )
    goto LABEL_74;
  v92 = UnityEngine_Component__get_gameObject(v91, 0LL);
  if ( !v92 )
    goto LABEL_74;
  UnityEngine_GameObject__SetActive(v92, 1, 0LL);
  if ( v108 )
  {
    v93 = this->fields.allLimitRareLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v94 = LocalizationManager__Get((System_String_o *)StringLiteral_10974/*"RARE_MATERIAL_INFO_MSG"*/, 0LL);
    if ( v93 )
    {
      UILabel__set_text(v93, v94, 0LL);
      v89 = (UnityEngine_Component_o *)this->fields.allLimitRareLb;
      if ( v89 )
      {
LABEL_61:
        v95 = UnityEngine_Component__get_gameObject(v89, 0LL);
        if ( !v95 )
          goto LABEL_74;
        UnityEngine_GameObject__SetActive(v95, 1, 0LL);
        goto LABEL_63;
      }
    }
LABEL_74:
    sub_B170D4();
  }
LABEL_63:
  allRareConfirmMsgLb = this->fields.allRareConfirmMsgLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v97 = LocalizationManager__Get((System_String_o *)StringLiteral_3304/*"CONFIRM_COMBINE_MSG"*/, 0LL);
  if ( !allRareConfirmMsgLb )
    goto LABEL_74;
  UILabel__set_text(allRareConfirmMsgLb, v97, 0LL);
  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_74;
  if ( combineRootComponent->fields.state == 4 )
  {
    v103 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v98, v99, v100, v101);
    System_Action___ctor(
      v103,
      (Il2CppObject *)this,
      Method_SetRarityDialogControl__SetSvtEqLimitUpConfirmCombine_b__154_0__,
      0LL);
    SetRarityDialogControl__SetClickDlgOkSeAndCallBack(this, 8, v103, 0LL, 0LL, v104);
  }
}


void __fastcall SetRarityDialogControl___SetAllDispConfirmCombine_b__146_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetAppendSkillCombineInfo_b__150_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
  CombineRootComponent__RequestAppendSkillCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmCombine_b__144_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__152_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__152_1(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8
  LevelExceedControl_o *lvExceedCtr; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (lvExceedCtr = combineRootComponent->fields.lvExceedCtr) == 0LL )
    sub_B170D4();
  LevelExceedControl__OnClickCheckLvExceed(lvExceedCtr, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmLvExceed_b__153_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
  CombineRootComponent__RequestLvExceed(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmRarityInfo_b__142_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
  CombineRootComponent__RequestSvtCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetConfirmSvtEqCombine_b__145_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetExceedMaterialInfo_b__143_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8
  ServantCombineControl_o *svtCombineCtr; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent || (svtCombineCtr = combineRootComponent->fields.svtCombineCtr) == 0LL )
    sub_B170D4();
  ServantCombineControl__CheckRareSvt(svtCombineCtr, 0LL);
}


void __fastcall SetRarityDialogControl___SetFriendshipExceedInfo_b__158_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
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
    sub_B170D4();
  CombineRootComponent__RequestTdCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___SetSkillNpCombineInfo_b__149_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_o *v16; // x22

  if ( (byte_40FC415 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&CombineRootComponent_TypeInfo, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_SetRarityDialogControl__SetSpecialAscension_b__159_3__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_12236/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, v7);
    sub_B16FFC(&StringLiteral_1/*""*/, v8);
    byte_40FC415 = 1;
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
    sub_B170D4();
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12236/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0LL);
  v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__159_3__, 0LL);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__OpenNotificationDialog(
    Instance,
    (System_String_o *)StringLiteral_1/*""*/,
    v11,
    v16,
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
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x22

  if ( (byte_40FC416 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&CombineRootComponent_TypeInfo, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_SetRarityDialogControl__SetSpecialAscension_b__159_4__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_12236/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, v7);
    sub_B16FFC(&StringLiteral_1/*""*/, v8);
    byte_40FC416 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_12236/*"SPECIAL_ASCENSION_TIME_OVER2_TXT"*/, 0LL);
    v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_SetRarityDialogControl__SetSpecialAscension_b__159_4__, 0LL);
    if ( !Instance )
      sub_B170D4();
    CommonUI__OpenNotificationDialog(
      Instance,
      (System_String_o *)StringLiteral_1/*""*/,
      v12,
      v17,
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
  CombineRootComponent_o *v4; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent
    || (combineRootComponent->fields.specialAscensionCheckedTimeOver = 1,
        SetRarityDialogControl__OnClickCancel(this, method),
        (v4 = this->fields.combineRootComponent) == 0LL) )
  {
    sub_B170D4();
  }
  CombineRootComponent__BackSpecialAscension(v4, 0LL);
}


void __fastcall SetRarityDialogControl___SetSpecialAscension_b__159_4(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  struct CombineRootComponent_o *combineRootComponent; // x8
  CombineRootComponent_o *v4; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent
    || (combineRootComponent->fields.specialAscensionCheckedTimeOver = 1,
        SetRarityDialogControl__OnClickCancel(this, method),
        (v4 = this->fields.combineRootComponent) == 0LL) )
  {
    sub_B170D4();
  }
  CombineRootComponent__BackSpecialAscension(v4, 0LL);
}


void __fastcall SetRarityDialogControl___SetSvtEqLimitUpConfirmCombine_b__154_0(
        SetRarityDialogControl_o *this,
        const MethodInfo *method)
{
  CombineRootComponent_o *combineRootComponent; // x0

  combineRootComponent = this->fields.combineRootComponent;
  if ( !combineRootComponent )
    sub_B170D4();
  CombineRootComponent__RequestSvtEqCombine(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7683 & 1) == 0 )
  {
    sub_B16FFC(&SetRarityDialogControl___c_TypeInfo, v1);
    byte_40F7683 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(SetRarityDialogControl___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)SetRarityDialogControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  return NpCombineControl__CheckConfirm_23749848(x, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  int64_t UserId; // x21
  WebViewManager_o *Instance; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int64_t AllList; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x8
  int64_t v30; // x22
  unsigned __int64 v31; // x26
  __int64 v32; // x23
  __int128 v33; // q0
  __int64 v34; // x24
  __int64 v35; // x25
  int32_t v36; // w0
  struct UserServantEntity_o *baseData; // x8
  int32_t v38; // w24
  __int128 v39; // q0
  int64_t v40; // x0
  struct UserServantEntity_o *v41; // x8
  __int128 v42; // q0
  int64_t v43; // x24
  SetRarityDialogControl___c_c *v44; // x0
  struct SetRarityDialogControl___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__148_1; // x21
  Il2CppObject *v47; // x22
  struct SetRarityDialogControl___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  CombineLimitUpWarningDialog_ClickDelegate_o *_9__2; // x21
  CombineLimitUpWarningDialog_o *combineLimitUpWarningDialog; // x20
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  struct SetRarityDialogControl_o *_4__this; // x8
  CombineRootComponent_o *combineRootComponent; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v71; // [xsp+40h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+60h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_40F7684 & 1) == 0 )
  {
    sub_B16FFC(&CombineLimitUpWarningDialog_ClickDelegate_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity__Find__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B16FFC(&Method_System_Predicate_UserServantEntity___ctor__, v14);
    sub_B16FFC(&System_Predicate_UserServantEntity__TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&Method_SetRarityDialogControl___c__SetLimitUpInfo_b__148_1__, v17);
    sub_B16FFC(&Method_SetRarityDialogControl___c__DisplayClass148_0__SetLimitUpInfo_b__2__, v18);
    sub_B16FFC(&SetRarityDialogControl___c_TypeInfo, v19);
    byte_40F7684 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_50;
  AllList = (int64_t)UserServantMaster__getAllList(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !AllList )
    goto LABEL_50;
  v29 = *(_QWORD *)(AllList + 24);
  v30 = AllList;
  if ( (int)v29 >= 1 )
  {
    v31 = 0LL;
    do
    {
      if ( v31 >= (unsigned int)v29 )
      {
        sub_B17100(AllList, v25, v26);
        sub_B170A0();
      }
      v32 = *(_QWORD *)(v30 + 32 + 8 * v31);
      if ( v32 )
      {
        v33 = *(_OWORD *)(v32 + 64);
        *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)(v32 + 48);
        *(_OWORD *)&v72.fields.fakeValue = v33;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v71 = v72;
        AllList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v71, 0LL);
        if ( AllList == UserId )
        {
          AllList = UserServantEntity__IsWithdrawal((UserServantEntity_o *)v32, 0LL);
          if ( (AllList & 1) == 0 )
          {
            v35 = *(_QWORD *)(v32 + 80);
            v34 = *(_QWORD *)(v32 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v73.fields.currentCryptoKey = v35;
            *(_QWORD *)&v73.fields.fakeValue = v34;
            v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v73, 0LL);
            baseData = this->fields.baseData;
            if ( !baseData )
              goto LABEL_50;
            v38 = v36;
            AllList = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(baseData->fields.svtId, 0LL);
            if ( v38 == (_DWORD)AllList )
            {
              v39 = *(_OWORD *)(v32 + 32);
              *(_OWORD *)&v72.fields.currentCryptoKey = *(_OWORD *)(v32 + 16);
              *(_OWORD *)&v72.fields.fakeValue = v39;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              }
              v70 = v72;
              v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v70, 0LL);
              v41 = this->fields.baseData;
              if ( !v41 )
                goto LABEL_50;
              v42 = *(_OWORD *)&v41->fields.id.fields.fakeValue;
              v43 = v40;
              *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&v41->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v69.fields.fakeValue = v42;
              AllList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v69, 0LL);
              if ( v43 != AllList )
              {
                if ( !v20 )
                  goto LABEL_50;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v20,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              }
            }
          }
        }
      }
      LODWORD(v29) = *(_DWORD *)(v30 + 24);
    }
    while ( (__int64)++v31 < (int)v29 );
  }
  v44 = SetRarityDialogControl___c_TypeInfo;
  if ( (BYTE3(SetRarityDialogControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SetRarityDialogControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SetRarityDialogControl___c_TypeInfo);
    v44 = SetRarityDialogControl___c_TypeInfo;
  }
  static_fields = v44->static_fields;
  _9__148_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__148_1;
  if ( !_9__148_1 )
  {
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      static_fields = SetRarityDialogControl___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__148_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_UserServantEntity__TypeInfo,
                                                                           v25,
                                                                           v26,
                                                                           v27,
                                                                           v28);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__148_1,
      v47,
      Method_SetRarityDialogControl___c__SetLimitUpInfo_b__148_1__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_UserServantEntity___ctor__);
    v48 = SetRarityDialogControl___c_TypeInfo->static_fields;
    v48->__9__148_1 = (struct System_Predicate_UserServantEntity__o *)_9__148_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v48->__9__148_1,
      (System_Int32_array **)_9__148_1,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  if ( !v20 )
    goto LABEL_50;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v20,
         (System_Predicate_T__o *)_9__148_1,
         (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_UserServantEntity__Find__) )
  {
    _9__2 = this->fields.__9__2;
    combineLimitUpWarningDialog = this->fields.combineLimitUpWarningDialog;
    if ( !_9__2 )
    {
      _9__2 = (CombineLimitUpWarningDialog_ClickDelegate_o *)sub_B170CC(
                                                               CombineLimitUpWarningDialog_ClickDelegate_TypeInfo,
                                                               v55,
                                                               v56,
                                                               v57,
                                                               v58);
      CombineLimitUpWarningDialog_ClickDelegate___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_SetRarityDialogControl___c__DisplayClass148_0__SetLimitUpInfo_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__9__2,
        (System_Int32_array **)_9__2,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
    }
    if ( combineLimitUpWarningDialog )
    {
      CombineLimitUpWarningDialog__Open(combineLimitUpWarningDialog, _9__2, 0LL);
      return;
    }
LABEL_50:
    sub_B170D4();
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_50;
  combineRootComponent = _4__this->fields.combineRootComponent;
  if ( !combineRootComponent )
    goto LABEL_50;
  CombineRootComponent__RequestLimitUp(combineRootComponent, 0LL);
}


void __fastcall SetRarityDialogControl___c__DisplayClass148_0___SetLimitUpInfo_b__2(
        SetRarityDialogControl___c__DisplayClass148_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct SetRarityDialogControl_o *_4__this; // x8
  CombineRootComponent_o *combineRootComponent; // x0

  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this || (combineRootComponent = _4__this->fields.combineRootComponent) == 0LL )
      sub_B170D4();
    CombineRootComponent__RequestLimitUp(combineRootComponent, 0LL);
  }
}