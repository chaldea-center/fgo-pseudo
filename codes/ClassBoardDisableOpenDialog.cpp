void ClassBoardDisableOpenDialog___ctor(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.itemObjForEffect.fields.x = 0;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.z = 0;
  *(_OWORD *)&this->fields.itemLabelForEffect.fields.y = xmmword_E9BBB0;
  *(_OWORD *)&this->fields.descriptionPosForEffect.fields.z = xmmword_E9C270;
  *(_OWORD *)&this->fields.itemInfoWindowBtnPosForEffect.fields.x = xmmword_E9C560;
  *(_OWORD *)&this->fields.itemObjForLock.fields.y = xmmword_E9BBC0;
  this->fields.windowHeightForGrand = 570;
  *(_OWORD *)&this->fields.itemLabelForLock.fields.z = xmmword_E9CD30;
  *(_OWORD *)&this->fields.closeBtnPosForLock.fields.x = xmmword_E9D9B0;
  *(_QWORD *)&this->fields.itemInfoWindowBtnPosForLock.fields.y = 1113587712;
  *(_OWORD *)&this->fields.titleLabelPosYForGrand = xmmword_E9C280;
  this->fields.confirmTextPosYForGrand = -140.0;
  *(_QWORD *)&this->fields.closeBtnPosYForGrand = 0x42700000C34C0000LL;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, method);
}


void ClassBoardDisableOpenDialog__Close(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_597466D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardDisableOpenDialog_EndClose__);
    byte_597466D = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, method);
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndClose__, 0);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v3, v4);
}


void ClassBoardDisableOpenDialog__EndClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_597466E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597466E = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}


void ClassBoardDisableOpenDialog__EndOpen(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void ClassBoardDisableOpenDialog__Init(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, method);
}


void ClassBoardDisableOpenDialog__OnClickClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_597466C & 1) == 0 )
  {
    sub_2213A60(&Method_ClassBoardDisableOpenDialog_OnClickClose__);
    byte_597466C = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardDisableOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardDisableOpenDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ClassBoardDisableOpenDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCloseSeKind, 0, 0);
    ClassBoardDisableOpenDialog__Close(this, v5);
  }
}


void ClassBoardDisableOpenDialog__OnClickItemInfoListWindow(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_597466F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__33_0__);
    byte_597466F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__33_0__,
      0);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v3, v4);
    this->fields.isButtonEnable = 0;
  }
}


void ClassBoardDisableOpenDialog__Open(
        ClassBoardDisableOpenDialog_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *closeFunc,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  Il2CppObject *Master_object; // x0
  __int64 v19; // x1
  ClassStatisticsInfo_array *ClassStatisticsInfos; // x22
  System_String_o *LockModel; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  System_String_o *v24; // x21
  __int64 naturalAligment; // x10
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *v27; // x8
  __int64 v28; // x9
  IClassBoardSquareModel_c **v29; // x10
  __int64 v30; // x0
  __int64 v31; // x1
  char v32; // w8
  UILabel_o *v33; // x22
  int v34; // w9
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *itemInfoWindowBtn; // x0
  UILabel_o *titleLabel; // x22
  System_String_c *klass; // x8
  System_String_o *v43; // x22
  __int64 v44; // x9
  int32_t *p_offset; // x10
  __int64 v46; // x0
  int v47; // w1
  const MethodInfo *v48; // x2
  System_String_c *v49; // x8
  System_String_o *v50; // x22
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  const MethodInfo *v54; // x0
  int32_t v55; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  struct IClassBoardSquareModel_o *v59; // x20
  IClassBoardSquareModel_c *v60; // x8
  __int64 v61; // x9
  IClassBoardSquareModel_c **v62; // x10
  __int64 v63; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v64; // x0
  const MethodInfo *v65; // x2
  __int64 v66; // x1
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v68; // x20
  const MethodInfo *v69; // x1
  __int64 v70; // [xsp+0h] [xbp-50h] BYREF
  int v71; // [xsp+8h] [xbp-48h]
  ClassBoardCondData_o v72; // 0:x0.12
  ClassBoardCondData_o v73; // 0:x1.12
  UnityEngine_Vector3_o itemInfoWindowBtnPosForLock; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_597466B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardDisableOpenDialog_EndOpen__);
    sub_2213A60(&ClassBoardLock_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&IClassBoardLockModel_TypeInfo);
    sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3522/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/);
    sub_2213A60(&StringLiteral_3523/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL_GRAND"*/);
    sub_2213A60(&StringLiteral_3525/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/);
    sub_2213A60(&StringLiteral_3521/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/);
    sub_2213A60(&StringLiteral_3524/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/);
    sub_2213A60(&StringLiteral_3536/*"CLASS_BOARD_GRAND_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/);
    byte_597466B = 1;
  }
  v71 = 0;
  v70 = 0;
  this->fields.classBoardSquare = square;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    (System_String_o *)closeFunc,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.closeFunc = closeFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeFunc,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
  if ( Master_object )
    ClassStatisticsInfos = UserClassStatisticsMaster__GetClassStatisticsInfos(
                             (UserClassStatisticsMaster_o *)Master_object,
                             0);
  else
    ClassStatisticsInfos = 0;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3522/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, 0);
  if ( !square )
    goto LABEL_69;
  v24 = LockModel;
  naturalAligment = ClassBoardLock_TypeInfo->_2.naturalAligment;
  if ( square->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (ClassBoardLock_c *)square->klass->_2.typeHierarchy[naturalAligment - 1] == ClassBoardLock_TypeInfo )
  {
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
    LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3525/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, 0);
    if ( !titleLabel )
      goto LABEL_69;
    UILabel__set_text(titleLabel, LockModel, 0);
    LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, 0);
    if ( !LockModel )
      goto LABEL_69;
    klass = LockModel->klass;
    v43 = LockModel;
    v44 = *(unsigned __int16 *)&LockModel->klass->_2.rank;
    if ( *(_WORD *)&LockModel->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v44;
        p_offset += 4;
        if ( !v44 )
          goto LABEL_41;
      }
      v46 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_41:
      v46 = sub_224BC3C(LockModel, IClassBoardLockModel_TypeInfo, 0);
    }
    v70 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v46)(v43, *(_QWORD *)(v46 + 8));
    *(_QWORD *)&v72.fields.Type = &v70;
    v71 = v47;
    v72.fields.Num = 0;
    if ( ClassBoardCondData__get_HasCond(v72, v48) )
    {
      LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, 0);
      if ( !LockModel )
        goto LABEL_69;
      v49 = LockModel->klass;
      v50 = LockModel;
      v51 = *(unsigned __int16 *)&LockModel->klass->_2.rank;
      if ( *(_WORD *)&LockModel->klass->_2.rank )
      {
        v52 = &v49->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLockModel_c **)v52 - 1) != IClassBoardLockModel_TypeInfo )
        {
          --v51;
          v52 += 4;
          if ( !v51 )
            goto LABEL_49;
        }
        v53 = (__int64)&v49->vtable + 16 * *v52;
      }
      else
      {
LABEL_49:
        v53 = sub_224BC3C(LockModel, IClassBoardLockModel_TypeInfo, 0);
      }
      v54 = (const MethodInfo *)(*(__int64 (__fastcall **)(System_String_o *, _QWORD))v53)(v50, *(_QWORD *)(v53 + 8));
      v73.fields.Num = v55;
      *(_QWORD *)&v73.fields.Type = v54;
      ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v73, v54);
    }
    LockModel = (System_String_o *)this->fields.itemListObj;
    if ( !LockModel
      || (gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0),
          GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemObjForLock, 0),
          (LockModel = (System_String_o *)this->fields.itemInfoLabel) == 0)
      || (v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0),
          GameObjectExtensions__SetLocalPosition(v57, this->fields.itemLabelForLock, 0),
          (LockModel = (System_String_o *)this->fields.descriptionLabel) == 0) )
    {
LABEL_69:
      sub_2213CDC(LockModel, v22);
    }
    v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0);
    GameObjectExtensions__SetLocalPosition(v58, this->fields.descriptionPosForLock, 0);
    GameObjectExtensions__SetLocalPosition(this->fields.closeBtn, this->fields.closeBtnPosForLock, 0);
    itemInfoWindowBtn = this->fields.itemInfoWindowBtn;
    itemInfoWindowBtnPosForLock = this->fields.itemInfoWindowBtnPosForLock;
    goto LABEL_56;
  }
  ClassBoardBaseDialog__SetUpEffectDetail(
    (ClassBoardBaseDialog_o *)this,
    square->fields._SquareModel_k__BackingField,
    0.0,
    0.0,
    ClassStatisticsInfos,
    v23);
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_69;
  v27 = SquareModel_k__BackingField->klass;
  v28 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    v29 = (IClassBoardSquareModel_c **)&v27->_1.interfaceOffsets->offset;
    while ( *(v29 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v28;
      v29 += 2;
      if ( !v28 )
        goto LABEL_18;
    }
    v30 = (__int64)&(&v27->rgctx_data)[2 * *(_DWORD *)v29 + 39];
  }
  else
  {
LABEL_18:
    v30 = sub_224BC3C(square->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12);
  }
  v32 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v30)(
          SquareModel_k__BackingField,
          *(_QWORD *)(v30 + 8));
  v33 = this->fields.titleLabel;
  v34 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( (v32 & 1) == 0 )
  {
    if ( !v34 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
    LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3524/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0);
    if ( !v33 )
      goto LABEL_69;
    UILabel__set_text(v33, LockModel, 0);
    LockModel = (System_String_o *)this->fields.itemListObj;
    if ( !LockModel )
      goto LABEL_69;
    v35 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0);
    GameObjectExtensions__SetLocalPosition(v35, this->fields.itemObjForEffect, 0);
    LockModel = (System_String_o *)this->fields.itemInfoLabel;
    if ( !LockModel )
      goto LABEL_69;
    v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0);
    GameObjectExtensions__SetLocalPosition(v36, this->fields.itemLabelForEffect, 0);
    LockModel = (System_String_o *)this->fields.descriptionLabel;
    if ( !LockModel )
      goto LABEL_69;
    v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0);
    GameObjectExtensions__SetLocalPosition(v37, this->fields.descriptionPosForEffect, 0);
    GameObjectExtensions__SetLocalPosition(this->fields.closeBtn, this->fields.closeBtnPosForEffect, 0);
    itemInfoWindowBtn = this->fields.itemInfoWindowBtn;
    itemInfoWindowBtnPosForLock = this->fields.itemInfoWindowBtnPosForEffect;
LABEL_56:
    GameObjectExtensions__SetLocalPosition(itemInfoWindowBtn, itemInfoWindowBtnPosForLock, 0);
    goto LABEL_57;
  }
  if ( !v34 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3536/*"CLASS_BOARD_GRAND_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0);
  if ( !v33 )
    goto LABEL_69;
  UILabel__set_text(v33, LockModel, 0);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3523/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL_GRAND"*/, 0);
  if ( !this->fields.baseWindowSprite )
    goto LABEL_69;
  v24 = LockModel;
  UIWidget__set_height((UIWidget_o *)this->fields.baseWindowSprite, this->fields.windowHeightForGrand, 0);
  ComponentHelper__SetLocalPositionY(
    (UnityEngine_Component_o *)this->fields.titleLabel,
    this->fields.titleLabelPosYForGrand,
    0);
  GameObjectExtensions__SetLocalPositionY(this->fields.effectObj, this->fields.effectDetailPosYForGrand, 0);
  ComponentHelper__SetLocalPositionY(
    (UnityEngine_Component_o *)this->fields.itemInfoLabel,
    this->fields.itemLabelPosYForGrand,
    0);
  GameObjectExtensions__SetLocalPositionY(this->fields.itemListObj, this->fields.itemGridPosYForGrand, 0);
  ComponentHelper__SetLocalPositionY(
    (UnityEngine_Component_o *)this->fields.descriptionLabel,
    this->fields.confirmTextPosYForGrand,
    0);
  GameObjectExtensions__SetLocalPositionY(this->fields.closeBtn, this->fields.closeBtnPosYForGrand, 0);
  GameObjectExtensions__SetLocalPositionY(this->fields.itemInfoWindowBtn, this->fields.itemInfoListBtnPosYForGrand, 0);
LABEL_57:
  v59 = square->fields._SquareModel_k__BackingField;
  if ( !v59 )
    goto LABEL_69;
  v60 = v59->klass;
  v61 = *(unsigned __int16 *)&v59->klass->_2.rank;
  if ( *(_WORD *)&v59->klass->_2.rank )
  {
    v62 = (IClassBoardSquareModel_c **)&v60->_1.interfaceOffsets->offset;
    while ( *(v62 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v61;
      v62 += 2;
      if ( !v61 )
        goto LABEL_62;
    }
    v63 = (__int64)&v60->vtable[*(_DWORD *)v62 + 6];
  }
  else
  {
LABEL_62:
    v63 = sub_224BC3C(v59, IClassBoardSquareModel_TypeInfo, 6);
  }
  v64 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v63)(
                                                                                    v59,
                                                                                    *(_QWORD *)(v63 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v64, v65);
  LockModel = (System_String_o *)this->fields.descriptionLabel;
  if ( !LockModel )
    goto LABEL_69;
  UILabel__set_text((UILabel_o *)LockModel, v24, 0);
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v66);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3521/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, 0);
  if ( !closeBtnLabel )
    goto LABEL_69;
  UILabel__set_text(closeBtnLabel, LockModel, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v68 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v68, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v68, 0, 0, 0);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, v69);
}


void ClassBoardDisableOpenDialog___OnClickItemInfoListWindow_b__33_0(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


System_String_o *ClassBoardDisableOpenDialog__get_closeBtnPath(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_5974670 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16260/*"Window/CloseBtn"*/);
    byte_5974670 = 1;
  }
  return (System_String_o *)StringLiteral_16260/*"Window/CloseBtn"*/;
}