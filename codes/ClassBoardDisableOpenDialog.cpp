void ClassBoardDisableOpenDialog___ctor(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.itemLabelForEffect.fields.y = xmmword_D00EA0;
  *(_OWORD *)&this->fields.descriptionPosForEffect.fields.z = xmmword_D006D0;
  *(_OWORD *)&this->fields.itemLabelForLock.fields.z = xmmword_D00950;
  *(_OWORD *)&this->fields.closeBtnPosForLock.fields.x = xmmword_D00EB0;
  *(_QWORD *)&this->fields.itemInfoWindowBtnPosForLock.fields.y = 1113587712;
  this->fields.windowHeightForGrand = 570;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.x = 0;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.z = 0;
  *(_OWORD *)&this->fields.itemInfoWindowBtnPosForEffect.fields.x = xmmword_D005C0;
  *(_OWORD *)&this->fields.itemObjForLock.fields.y = xmmword_D01210;
  *(_OWORD *)&this->fields.titleLabelPosYForGrand = xmmword_D002B0;
  *(_QWORD *)&this->fields.confirmTextPosYForGrand = 0xC34C0000C30C0000LL;
  this->fields.itemInfoListBtnPosYForGrand = 60.0;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, method);
}


void ClassBoardDisableOpenDialog__Close(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4D345FB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardDisableOpenDialog_EndClose__);
    byte_4D345FB = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, method);
  v3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndClose__, 0);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v3, v4);
}


void ClassBoardDisableOpenDialog__EndClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4D345FC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D345FC = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(gameObject, 0);
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

  if ( (byte_4D345FA & 1) == 0 )
  {
    sub_1C93AD4(&Method_ClassBoardDisableOpenDialog_OnClickClose__);
    byte_4D345FA = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardDisableOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardDisableOpenDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ClassBoardDisableOpenDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
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

  if ( (byte_4D345FD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__33_0__);
    byte_4D345FD = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *Master_object; // x0
  ClassStatisticsInfo_array *ClassStatisticsInfos; // x22
  System_String_o *LockModel; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_String_o *v22; // x21
  __int64 naturalAligment; // x10
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *v25; // x8
  __int64 v26; // x9
  IClassBoardSquareModel_c **v27; // x10
  __int64 v28; // x0
  char v29; // w0
  UILabel_o *v30; // x22
  char v31; // w23
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *itemInfoWindowBtn; // x0
  UILabel_o *titleLabel; // x22
  System_String_c *klass; // x8
  System_String_o *v40; // x22
  __int64 v41; // x9
  int32_t *p_offset; // x10
  __int64 v43; // x0
  int v44; // w1
  const MethodInfo *v45; // x2
  System_String_c *v46; // x8
  System_String_o *v47; // x22
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  const MethodInfo *v51; // x0
  int32_t v52; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  struct IClassBoardSquareModel_o *v56; // x20
  IClassBoardSquareModel_c *v57; // x8
  __int64 v58; // x9
  IClassBoardSquareModel_c **v59; // x10
  __int64 v60; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v61; // x0
  const MethodInfo *v62; // x2
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v64; // x20
  const MethodInfo *v65; // x1
  __int64 v66; // [xsp+0h] [xbp-50h] BYREF
  int v67; // [xsp+8h] [xbp-48h]
  ClassBoardCondData_o v68; // 0:x0.12
  ClassBoardCondData_o v69; // 0:x1.12
  UnityEngine_Vector3_o itemInfoWindowBtnPosForLock; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D345F9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardDisableOpenDialog_EndOpen__);
    sub_1C93AD4(&ClassBoardLock_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&IClassBoardLockModel_TypeInfo);
    sub_1C93AD4(&IClassBoardSquareModel_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_3403/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/);
    sub_1C93AD4(&StringLiteral_3404/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL_GRAND"*/);
    sub_1C93AD4(&StringLiteral_3406/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/);
    sub_1C93AD4(&StringLiteral_3402/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_3405/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/);
    sub_1C93AD4(&StringLiteral_3417/*"CLASS_BOARD_GRAND_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/);
    byte_4D345F9 = 1;
  }
  v67 = 0;
  v66 = 0;
  this->fields.classBoardSquare = square;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    (int32_t)closeFunc,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.closeFunc = closeFunc;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.closeFunc, (int32_t)closeFunc, v11, v12, v13, v14, v15, v16);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
  if ( Master_object )
    ClassStatisticsInfos = UserClassStatisticsMaster__GetClassStatisticsInfos(
                             (UserClassStatisticsMaster_o *)Master_object,
                             0);
  else
    ClassStatisticsInfos = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3403/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, 0);
  if ( !square )
    goto LABEL_67;
  v22 = LockModel;
  naturalAligment = ClassBoardLock_TypeInfo->_2.naturalAligment;
  if ( square->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (ClassBoardLock_c *)square->klass->_2.typeHierarchy[naturalAligment - 1] == ClassBoardLock_TypeInfo )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3406/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, 0);
    if ( !titleLabel )
      goto LABEL_67;
    UILabel__set_text(titleLabel, LockModel, 0);
    LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, 0);
    if ( !LockModel )
      goto LABEL_67;
    klass = LockModel->klass;
    v40 = LockModel;
    v41 = *(unsigned __int16 *)&LockModel->klass->_2.rank;
    if ( *(_WORD *)&LockModel->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v41;
        p_offset += 4;
        if ( !v41 )
          goto LABEL_39;
      }
      v43 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_39:
      v43 = sub_1C69E5C(LockModel, IClassBoardLockModel_TypeInfo, 0);
    }
    v66 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v43)(v40, *(_QWORD *)(v43 + 8));
    v67 = v44;
    *(_QWORD *)&v68.fields.Type = &v66;
    v68.fields.Num = 0;
    if ( ClassBoardCondData__get_HasCond(v68, v45) )
    {
      LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, 0);
      if ( !LockModel )
        goto LABEL_67;
      v46 = LockModel->klass;
      v47 = LockModel;
      v48 = *(unsigned __int16 *)&LockModel->klass->_2.rank;
      if ( *(_WORD *)&LockModel->klass->_2.rank )
      {
        v49 = &v46->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLockModel_c **)v49 - 1) != IClassBoardLockModel_TypeInfo )
        {
          --v48;
          v49 += 4;
          if ( !v48 )
            goto LABEL_47;
        }
        v50 = (__int64)&v46->vtable + 16 * *v49;
      }
      else
      {
LABEL_47:
        v50 = sub_1C69E5C(LockModel, IClassBoardLockModel_TypeInfo, 0);
      }
      v51 = (const MethodInfo *)(*(__int64 (__fastcall **)(System_String_o *, _QWORD))v50)(v47, *(_QWORD *)(v50 + 8));
      v69.fields.Num = v52;
      *(_QWORD *)&v69.fields.Type = v51;
      ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v69, v51);
    }
    LockModel = (System_String_o *)this->fields.itemListObj;
    if ( !LockModel
      || (gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0),
          GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemObjForLock, 0),
          (LockModel = (System_String_o *)this->fields.itemInfoLabel) == 0)
      || (v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0),
          GameObjectExtensions__SetLocalPosition(v54, this->fields.itemLabelForLock, 0),
          (LockModel = (System_String_o *)this->fields.descriptionLabel) == 0) )
    {
LABEL_67:
      sub_1C93D2C(LockModel, v20);
    }
    v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0);
    GameObjectExtensions__SetLocalPosition(v55, this->fields.descriptionPosForLock, 0);
    GameObjectExtensions__SetLocalPosition(this->fields.closeBtn, this->fields.closeBtnPosForLock, 0);
    itemInfoWindowBtn = this->fields.itemInfoWindowBtn;
    itemInfoWindowBtnPosForLock = this->fields.itemInfoWindowBtnPosForLock;
    goto LABEL_54;
  }
  ClassBoardBaseDialog__SetUpEffectDetail(
    (ClassBoardBaseDialog_o *)this,
    square->fields._SquareModel_k__BackingField,
    0.0,
    0.0,
    ClassStatisticsInfos,
    v21);
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_67;
  v25 = SquareModel_k__BackingField->klass;
  v26 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    v27 = (IClassBoardSquareModel_c **)&v25->_1.interfaceOffsets->offset;
    while ( *(v27 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v26;
      v27 += 2;
      if ( !v26 )
        goto LABEL_18;
    }
    v28 = (__int64)&(&v25->rgctx_data)[2 * *(_DWORD *)v27 + 39];
  }
  else
  {
LABEL_18:
    v28 = sub_1C69E5C(square->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12);
  }
  v29 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v28)(
          SquareModel_k__BackingField,
          *(_QWORD *)(v28 + 8));
  v30 = this->fields.titleLabel;
  v31 = v29;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( (v29 & 1) != 0 )
      goto LABEL_22;
    goto LABEL_26;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( (v31 & 1) == 0 )
  {
LABEL_26:
    LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3405/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0);
    if ( !v30 )
      goto LABEL_67;
    UILabel__set_text(v30, LockModel, 0);
    LockModel = (System_String_o *)this->fields.itemListObj;
    if ( !LockModel )
      goto LABEL_67;
    v32 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0);
    GameObjectExtensions__SetLocalPosition(v32, this->fields.itemObjForEffect, 0);
    LockModel = (System_String_o *)this->fields.itemInfoLabel;
    if ( !LockModel )
      goto LABEL_67;
    v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0);
    GameObjectExtensions__SetLocalPosition(v33, this->fields.itemLabelForEffect, 0);
    LockModel = (System_String_o *)this->fields.descriptionLabel;
    if ( !LockModel )
      goto LABEL_67;
    v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0);
    GameObjectExtensions__SetLocalPosition(v34, this->fields.descriptionPosForEffect, 0);
    GameObjectExtensions__SetLocalPosition(this->fields.closeBtn, this->fields.closeBtnPosForEffect, 0);
    itemInfoWindowBtn = this->fields.itemInfoWindowBtn;
    itemInfoWindowBtnPosForLock = this->fields.itemInfoWindowBtnPosForEffect;
LABEL_54:
    GameObjectExtensions__SetLocalPosition(itemInfoWindowBtn, itemInfoWindowBtnPosForLock, 0);
    goto LABEL_55;
  }
LABEL_22:
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3417/*"CLASS_BOARD_GRAND_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0);
  if ( !v30 )
    goto LABEL_67;
  UILabel__set_text(v30, LockModel, 0);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3404/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL_GRAND"*/, 0);
  if ( !this->fields.baseWindowSprite )
    goto LABEL_67;
  v22 = LockModel;
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
LABEL_55:
  v56 = square->fields._SquareModel_k__BackingField;
  if ( !v56 )
    goto LABEL_67;
  v57 = v56->klass;
  v58 = *(unsigned __int16 *)&v56->klass->_2.rank;
  if ( *(_WORD *)&v56->klass->_2.rank )
  {
    v59 = (IClassBoardSquareModel_c **)&v57->_1.interfaceOffsets->offset;
    while ( *(v59 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v58;
      v59 += 2;
      if ( !v58 )
        goto LABEL_60;
    }
    v60 = (__int64)&v57->vtable[*(_DWORD *)v59 + 6];
  }
  else
  {
LABEL_60:
    v60 = sub_1C69E5C(v56, IClassBoardSquareModel_TypeInfo, 6);
  }
  v61 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v60)(
                                                                                    v56,
                                                                                    *(_QWORD *)(v60 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v61, v62);
  LockModel = (System_String_o *)this->fields.descriptionLabel;
  if ( !LockModel )
    goto LABEL_67;
  UILabel__set_text((UILabel_o *)LockModel, v22, 0);
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3402/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, 0);
  if ( !closeBtnLabel )
    goto LABEL_67;
  UILabel__set_text(closeBtnLabel, LockModel, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v64 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v64, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v64, 0, 0, 0);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, v65);
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
  if ( (byte_4D345FE & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15742/*"Window/CloseBtn"*/);
    byte_4D345FE = 1;
  }
  return (System_String_o *)StringLiteral_15742/*"Window/CloseBtn"*/;
}