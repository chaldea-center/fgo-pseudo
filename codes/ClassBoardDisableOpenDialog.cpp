void ClassBoardDisableOpenDialog___ctor(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.itemLabelForEffect.fields.y = xmmword_C09AB0;
  *(_OWORD *)&this->fields.descriptionPosForEffect.fields.z = xmmword_C092F0;
  *(_OWORD *)&this->fields.itemLabelForLock.fields.z = xmmword_C09570;
  *(_OWORD *)&this->fields.closeBtnPosForLock.fields.x = xmmword_C09AC0;
  *(_QWORD *)&this->fields.itemInfoWindowBtnPosForLock.fields.y = 1113587712;
  this->fields.windowHeightForGrand = 570;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.x = 0;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.z = 0;
  *(_OWORD *)&this->fields.itemInfoWindowBtnPosForEffect.fields.x = xmmword_C091F0;
  *(_OWORD *)&this->fields.itemObjForLock.fields.y = xmmword_C09E10;
  *(_OWORD *)&this->fields.titleLabelPosYForGrand = xmmword_C08ED0;
  *(_QWORD *)&this->fields.confirmTextPosYForGrand = 0xC34C0000C30C0000LL;
  this->fields.itemInfoListBtnPosYForGrand = 60.0;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, method);
}


void ClassBoardDisableOpenDialog__Close(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C2ACA2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ClassBoardDisableOpenDialog_EndClose__);
    byte_4C2ACA2 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, method);
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndClose__, 0);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v3, v4);
}


void ClassBoardDisableOpenDialog__EndClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C2ACA3 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2ACA3 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71163704(gameObject, 0);
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

  if ( (byte_4C2ACA1 & 1) == 0 )
  {
    sub_1C2D490(&Method_ClassBoardDisableOpenDialog_OnClickClose__);
    byte_4C2ACA1 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardDisableOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardDisableOpenDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_ClassBoardDisableOpenDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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

  if ( (byte_4C2ACA4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__33_0__);
    byte_4C2ACA4 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__33_0__,
      0);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v3, v4);
    this->fields.isButtonEnable = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardDisableOpenDialog__Open(
        ClassBoardDisableOpenDialog_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *closeFunc,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Master_object; // x0
  ClassStatisticsInfo_array *ClassStatisticsInfos; // x22
  System_String_o *LockModel; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  System_String_o *v14; // x21
  __int64 naturalAligment; // x10
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *v17; // x8
  __int64 v18; // x9
  IClassBoardSquareModel_c **v19; // x10
  __int64 v20; // x0
  char v21; // w0
  UILabel_o *v22; // x22
  char v23; // w23
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *itemInfoWindowBtn; // x0
  float x; // s0 OVERLAPPED
  float y; // s1
  float z; // s2
  UILabel_o *titleLabel; // x22
  System_String_c *klass; // x8
  System_String_o *v33; // x22
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0
  int v37; // w1
  const MethodInfo *v38; // x2
  System_String_c *v39; // x8
  System_String_o *v40; // x22
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  const MethodInfo *v44; // x0
  int32_t v45; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  struct IClassBoardSquareModel_o *v49; // x20
  IClassBoardSquareModel_c *v50; // x8
  __int64 v51; // x9
  IClassBoardSquareModel_c **v52; // x10
  __int64 v53; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v54; // x0
  const MethodInfo *v55; // x2
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v57; // x20
  const MethodInfo *v58; // x1
  __int64 v59; // [xsp+0h] [xbp-50h] BYREF
  int v60; // [xsp+8h] [xbp-48h]
  ClassBoardCondData_o v61; // 0:x0.12
  ClassBoardCondData_o v62; // 0:x1.12

  if ( (byte_4C2ACA0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ClassBoardDisableOpenDialog_EndOpen__);
    sub_1C2D490(&ClassBoardLock_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&IClassBoardLockModel_TypeInfo);
    sub_1C2D490(&IClassBoardSquareModel_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_3380/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/);
    sub_1C2D490(&StringLiteral_3381/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL_GRAND"*/);
    sub_1C2D490(&StringLiteral_3383/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/);
    sub_1C2D490(&StringLiteral_3379/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/);
    sub_1C2D490(&StringLiteral_3382/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/);
    sub_1C2D490(&StringLiteral_3394/*"CLASS_BOARD_GRAND_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/);
    byte_4C2ACA0 = 1;
  }
  v60 = 0;
  v59 = 0;
  this->fields.classBoardSquare = square;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.classBoardSquare, (int32_t)square, (int32_t)closeFunc, method);
  this->fields.closeFunc = closeFunc;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeFunc, v7, v8);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
  if ( Master_object )
    ClassStatisticsInfos = UserClassStatisticsMaster__GetClassStatisticsInfos(
                             (UserClassStatisticsMaster_o *)Master_object,
                             0);
  else
    ClassStatisticsInfos = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3380/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, 0);
  if ( !square )
    goto LABEL_67;
  v14 = LockModel;
  naturalAligment = ClassBoardLock_TypeInfo->_2.naturalAligment;
  if ( square->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (ClassBoardLock_c *)square->klass->_2.typeHierarchy[naturalAligment - 1] == ClassBoardLock_TypeInfo )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3383/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, 0);
    if ( !titleLabel )
      goto LABEL_67;
    UILabel__set_text(titleLabel, LockModel, 0);
    LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, 0);
    if ( !LockModel )
      goto LABEL_67;
    klass = LockModel->klass;
    v33 = LockModel;
    v34 = *(unsigned __int16 *)&LockModel->klass->_2.rank;
    if ( *(_WORD *)&LockModel->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v34;
        p_offset += 4;
        if ( !v34 )
          goto LABEL_39;
      }
      v36 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_39:
      v36 = sub_1C7DCA8(LockModel, IClassBoardLockModel_TypeInfo, 0);
    }
    v59 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
    v60 = v37;
    *(_QWORD *)&v61.fields.Type = &v59;
    v61.fields.Num = 0;
    if ( ClassBoardCondData__get_HasCond(v61, v38) )
    {
      LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, 0);
      if ( !LockModel )
        goto LABEL_67;
      v39 = LockModel->klass;
      v40 = LockModel;
      v41 = *(unsigned __int16 *)&LockModel->klass->_2.rank;
      if ( *(_WORD *)&LockModel->klass->_2.rank )
      {
        v42 = &v39->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLockModel_c **)v42 - 1) != IClassBoardLockModel_TypeInfo )
        {
          --v41;
          v42 += 4;
          if ( !v41 )
            goto LABEL_47;
        }
        v43 = (__int64)&v39->vtable + 16 * *v42;
      }
      else
      {
LABEL_47:
        v43 = sub_1C7DCA8(LockModel, IClassBoardLockModel_TypeInfo, 0);
      }
      v44 = (const MethodInfo *)(*(__int64 (__fastcall **)(System_String_o *, _QWORD))v43)(v40, *(_QWORD *)(v43 + 8));
      v62.fields.Num = v45;
      *(_QWORD *)&v62.fields.Type = v44;
      ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v62, v44);
    }
    LockModel = (System_String_o *)this->fields.itemListObj;
    if ( !LockModel
      || (gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0),
          GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemObjForLock, 0),
          (LockModel = (System_String_o *)this->fields.itemInfoLabel) == 0)
      || (v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0),
          GameObjectExtensions__SetLocalPosition(v47, this->fields.itemLabelForLock, 0),
          (LockModel = (System_String_o *)this->fields.descriptionLabel) == 0) )
    {
LABEL_67:
      sub_1C2D6EC(LockModel, v12);
    }
    v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0);
    GameObjectExtensions__SetLocalPosition(v48, this->fields.descriptionPosForLock, 0);
    GameObjectExtensions__SetLocalPosition(this->fields.closeBtn, this->fields.closeBtnPosForLock, 0);
    itemInfoWindowBtn = this->fields.itemInfoWindowBtn;
    x = this->fields.itemInfoWindowBtnPosForLock.fields.x;
    y = this->fields.itemInfoWindowBtnPosForLock.fields.y;
    z = this->fields.itemInfoWindowBtnPosForLock.fields.z;
    goto LABEL_54;
  }
  ClassBoardBaseDialog__SetUpEffectDetail(
    (ClassBoardBaseDialog_o *)this,
    square->fields._SquareModel_k__BackingField,
    0.0,
    0.0,
    ClassStatisticsInfos,
    v13);
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_67;
  v17 = SquareModel_k__BackingField->klass;
  v18 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    v19 = (IClassBoardSquareModel_c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_18;
    }
    v20 = (__int64)&(&v17->rgctx_data)[2 * *(_DWORD *)v19 + 39];
  }
  else
  {
LABEL_18:
    v20 = sub_1C7DCA8(square->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12);
  }
  v21 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v20)(
          SquareModel_k__BackingField,
          *(_QWORD *)(v20 + 8));
  v22 = this->fields.titleLabel;
  v23 = v21;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( (v21 & 1) != 0 )
      goto LABEL_22;
    goto LABEL_26;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( (v23 & 1) == 0 )
  {
LABEL_26:
    LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3382/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0);
    if ( !v22 )
      goto LABEL_67;
    UILabel__set_text(v22, LockModel, 0);
    LockModel = (System_String_o *)this->fields.itemListObj;
    if ( !LockModel )
      goto LABEL_67;
    v24 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0);
    GameObjectExtensions__SetLocalPosition(v24, this->fields.itemObjForEffect, 0);
    LockModel = (System_String_o *)this->fields.itemInfoLabel;
    if ( !LockModel )
      goto LABEL_67;
    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0);
    GameObjectExtensions__SetLocalPosition(v25, this->fields.itemLabelForEffect, 0);
    LockModel = (System_String_o *)this->fields.descriptionLabel;
    if ( !LockModel )
      goto LABEL_67;
    v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0);
    GameObjectExtensions__SetLocalPosition(v26, this->fields.descriptionPosForEffect, 0);
    GameObjectExtensions__SetLocalPosition(this->fields.closeBtn, this->fields.closeBtnPosForEffect, 0);
    itemInfoWindowBtn = this->fields.itemInfoWindowBtn;
    x = this->fields.itemInfoWindowBtnPosForEffect.fields.x;
    y = this->fields.itemInfoWindowBtnPosForEffect.fields.y;
    z = this->fields.itemInfoWindowBtnPosForEffect.fields.z;
LABEL_54:
    GameObjectExtensions__SetLocalPosition(itemInfoWindowBtn, *(UnityEngine_Vector3_o *)&x, 0);
    goto LABEL_55;
  }
LABEL_22:
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3394/*"CLASS_BOARD_GRAND_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0);
  if ( !v22 )
    goto LABEL_67;
  UILabel__set_text(v22, LockModel, 0);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3381/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL_GRAND"*/, 0);
  if ( !this->fields.baseWindowSprite )
    goto LABEL_67;
  v14 = LockModel;
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
  v49 = square->fields._SquareModel_k__BackingField;
  if ( !v49 )
    goto LABEL_67;
  v50 = v49->klass;
  v51 = *(unsigned __int16 *)&v49->klass->_2.rank;
  if ( *(_WORD *)&v49->klass->_2.rank )
  {
    v52 = (IClassBoardSquareModel_c **)&v50->_1.interfaceOffsets->offset;
    while ( *(v52 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v51;
      v52 += 2;
      if ( !v51 )
        goto LABEL_60;
    }
    v53 = (__int64)&v50->vtable[*(_DWORD *)v52 + 6];
  }
  else
  {
LABEL_60:
    v53 = sub_1C7DCA8(v49, IClassBoardSquareModel_TypeInfo, 6);
  }
  v54 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v53)(
                                                                                    v49,
                                                                                    *(_QWORD *)(v53 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v54, v55);
  LockModel = (System_String_o *)this->fields.descriptionLabel;
  if ( !LockModel )
    goto LABEL_67;
  UILabel__set_text((UILabel_o *)LockModel, v14, 0);
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3379/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, 0);
  if ( !closeBtnLabel )
    goto LABEL_67;
  UILabel__set_text(closeBtnLabel, LockModel, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v57 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v57, 0, 0);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, v58);
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
  if ( (byte_4C2ACA5 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15639/*"Window/CloseBtn"*/);
    byte_4C2ACA5 = 1;
  }
  return (System_String_o *)StringLiteral_15639/*"Window/CloseBtn"*/;
}