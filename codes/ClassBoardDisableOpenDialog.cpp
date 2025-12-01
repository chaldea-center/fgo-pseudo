void ClassBoardDisableOpenDialog___ctor(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.itemLabelForEffect.fields.y = xmmword_CEF380;
  *(_OWORD *)&this->fields.descriptionPosForEffect.fields.z = xmmword_CEEBC0;
  *(_OWORD *)&this->fields.itemLabelForLock.fields.z = xmmword_CEEE40;
  *(_OWORD *)&this->fields.closeBtnPosForLock.fields.x = xmmword_CEF390;
  *(_QWORD *)&this->fields.itemInfoWindowBtnPosForLock.fields.y = 1113587712;
  this->fields.windowHeightForGrand = 570;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.x = 0;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.z = 0;
  *(_OWORD *)&this->fields.itemInfoWindowBtnPosForEffect.fields.x = xmmword_CEEAB0;
  *(_OWORD *)&this->fields.itemObjForLock.fields.y = xmmword_CEF6D0;
  *(_OWORD *)&this->fields.titleLabelPosYForGrand = xmmword_CEE790;
  *(_QWORD *)&this->fields.confirmTextPosYForGrand = 0xC34C0000C30C0000LL;
  this->fields.itemInfoListBtnPosYForGrand = 60.0;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, 0);
}


void ClassBoardDisableOpenDialog__Close(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4CCAFAD & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardDisableOpenDialog_EndClose__);
    byte_4CCAFAD = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0);
  v3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndClose__, 0);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v3, 0);
}


void ClassBoardDisableOpenDialog__EndClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CCAFAE & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAFAE = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71724608(gameObject, 0);
}


void ClassBoardDisableOpenDialog__EndOpen(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void ClassBoardDisableOpenDialog__Init(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0);
}


void ClassBoardDisableOpenDialog__OnClickClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4CCAFAC & 1) == 0 )
  {
    sub_1C713B0(&Method_ClassBoardDisableOpenDialog_OnClickClose__);
    byte_4CCAFAC = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardDisableOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardDisableOpenDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ClassBoardDisableOpenDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCloseSeKind, 0, 0);
    ClassBoardDisableOpenDialog__Close(this, v5);
  }
}


void ClassBoardDisableOpenDialog__OnClickItemInfoListWindow(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4CCAFAF & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__33_0__);
    byte_4CCAFAF = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__33_0__,
      0);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v3, 0);
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
  const MethodInfo *v20; // x1
  System_String_o *v21; // x21
  __int64 naturalAligment; // x10
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *v24; // x8
  __int64 v25; // x9
  IClassBoardSquareModel_c **v26; // x10
  __int64 v27; // x0
  char v28; // w0
  UILabel_o *v29; // x22
  char v30; // w23
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *itemInfoWindowBtn; // x0
  float x; // s0 OVERLAPPED
  float y; // s1
  float z; // s2
  UILabel_o *titleLabel; // x22
  const MethodInfo *v39; // x1
  System_String_c *klass; // x8
  System_String_o *v41; // x22
  __int64 v42; // x9
  int32_t *p_offset; // x10
  __int64 v44; // x0
  int v45; // w1
  const MethodInfo *v46; // x2
  System_String_c *v47; // x8
  System_String_o *v48; // x22
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  int32_t v53; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  struct IClassBoardSquareModel_o *v57; // x20
  IClassBoardSquareModel_c *v58; // x8
  __int64 v59; // x9
  IClassBoardSquareModel_c **v60; // x10
  __int64 v61; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v62; // x0
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v64; // x20
  __int64 v65; // [xsp+0h] [xbp-50h] BYREF
  int v66; // [xsp+8h] [xbp-48h]
  ClassBoardCondData_o v67; // 0:x0.12
  ClassBoardCondData_o v68; // 0:x1.12

  if ( (byte_4CCAFAB & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardDisableOpenDialog_EndOpen__);
    sub_1C713B0(&ClassBoardLock_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&IClassBoardLockModel_TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_3378/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/);
    sub_1C713B0(&StringLiteral_3379/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL_GRAND"*/);
    sub_1C713B0(&StringLiteral_3381/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/);
    sub_1C713B0(&StringLiteral_3377/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/);
    sub_1C713B0(&StringLiteral_3380/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/);
    sub_1C713B0(&StringLiteral_3392/*"CLASS_BOARD_GRAND_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/);
    byte_4CCAFAB = 1;
  }
  v66 = 0;
  v65 = 0;
  this->fields.classBoardSquare = square;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    (int32_t)closeFunc,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.closeFunc = closeFunc;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.closeFunc, (int32_t)closeFunc, v11, v12, v13, v14, v15, v16);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
  if ( Master_object )
    ClassStatisticsInfos = UserClassStatisticsMaster__GetClassStatisticsInfos(
                             (UserClassStatisticsMaster_o *)Master_object,
                             0);
  else
    ClassStatisticsInfos = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3378/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, 0);
  if ( !square )
    goto LABEL_67;
  v21 = LockModel;
  naturalAligment = ClassBoardLock_TypeInfo->_2.naturalAligment;
  if ( square->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (ClassBoardLock_c *)square->klass->_2.typeHierarchy[naturalAligment - 1] == ClassBoardLock_TypeInfo )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3381/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, 0);
    if ( !titleLabel )
      goto LABEL_67;
    UILabel__set_text(titleLabel, LockModel, 0);
    LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v39);
    if ( !LockModel )
      goto LABEL_67;
    klass = LockModel->klass;
    v41 = LockModel;
    v42 = *(unsigned __int16 *)&LockModel->klass->_2.rank;
    if ( *(_WORD *)&LockModel->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v42;
        p_offset += 4;
        if ( !v42 )
          goto LABEL_39;
      }
      v44 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_39:
      v44 = sub_1C47738(LockModel, IClassBoardLockModel_TypeInfo, 0);
    }
    v65 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v44)(v41, *(_QWORD *)(v44 + 8));
    v66 = v45;
    *(_QWORD *)&v67.fields.Type = &v65;
    v67.fields.Num = 0;
    if ( ClassBoardCondData__get_HasCond(v67, v46) )
    {
      LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v20);
      if ( !LockModel )
        goto LABEL_67;
      v47 = LockModel->klass;
      v48 = LockModel;
      v49 = *(unsigned __int16 *)&LockModel->klass->_2.rank;
      if ( *(_WORD *)&LockModel->klass->_2.rank )
      {
        v50 = &v47->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLockModel_c **)v50 - 1) != IClassBoardLockModel_TypeInfo )
        {
          --v49;
          v50 += 4;
          if ( !v49 )
            goto LABEL_47;
        }
        v51 = (__int64)&v47->vtable + 16 * *v50;
      }
      else
      {
LABEL_47:
        v51 = sub_1C47738(LockModel, IClassBoardLockModel_TypeInfo, 0);
      }
      v52 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v51)(v48, *(_QWORD *)(v51 + 8));
      v68.fields.Num = v53;
      *(_QWORD *)&v68.fields.Type = v52;
      ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v68, 0);
    }
    LockModel = (System_String_o *)this->fields.itemListObj;
    if ( !LockModel
      || (gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0),
          GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemObjForLock, 0),
          (LockModel = (System_String_o *)this->fields.itemInfoLabel) == 0)
      || (v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0),
          GameObjectExtensions__SetLocalPosition(v55, this->fields.itemLabelForLock, 0),
          (LockModel = (System_String_o *)this->fields.descriptionLabel) == 0) )
    {
LABEL_67:
      sub_1C71608(LockModel, v20);
    }
    v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0);
    GameObjectExtensions__SetLocalPosition(v56, this->fields.descriptionPosForLock, 0);
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
    0);
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_67;
  v24 = SquareModel_k__BackingField->klass;
  v25 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    v26 = (IClassBoardSquareModel_c **)&v24->_1.interfaceOffsets->offset;
    while ( *(v26 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v25;
      v26 += 2;
      if ( !v25 )
        goto LABEL_18;
    }
    v27 = (__int64)&(&v24->rgctx_data)[2 * *(_DWORD *)v26 + 39];
  }
  else
  {
LABEL_18:
    v27 = sub_1C47738(square->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12);
  }
  v28 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v27)(
          SquareModel_k__BackingField,
          *(_QWORD *)(v27 + 8));
  v29 = this->fields.titleLabel;
  v30 = v28;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( (v28 & 1) != 0 )
      goto LABEL_22;
    goto LABEL_26;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( (v30 & 1) == 0 )
  {
LABEL_26:
    LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3380/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0);
    if ( !v29 )
      goto LABEL_67;
    UILabel__set_text(v29, LockModel, 0);
    LockModel = (System_String_o *)this->fields.itemListObj;
    if ( !LockModel )
      goto LABEL_67;
    v31 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0);
    GameObjectExtensions__SetLocalPosition(v31, this->fields.itemObjForEffect, 0);
    LockModel = (System_String_o *)this->fields.itemInfoLabel;
    if ( !LockModel )
      goto LABEL_67;
    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0);
    GameObjectExtensions__SetLocalPosition(v32, this->fields.itemLabelForEffect, 0);
    LockModel = (System_String_o *)this->fields.descriptionLabel;
    if ( !LockModel )
      goto LABEL_67;
    v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0);
    GameObjectExtensions__SetLocalPosition(v33, this->fields.descriptionPosForEffect, 0);
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
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3392/*"CLASS_BOARD_GRAND_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0);
  if ( !v29 )
    goto LABEL_67;
  UILabel__set_text(v29, LockModel, 0);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3379/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL_GRAND"*/, 0);
  if ( !this->fields.baseWindowSprite )
    goto LABEL_67;
  v21 = LockModel;
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
  v57 = square->fields._SquareModel_k__BackingField;
  if ( !v57 )
    goto LABEL_67;
  v58 = v57->klass;
  v59 = *(unsigned __int16 *)&v57->klass->_2.rank;
  if ( *(_WORD *)&v57->klass->_2.rank )
  {
    v60 = (IClassBoardSquareModel_c **)&v58->_1.interfaceOffsets->offset;
    while ( *(v60 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v59;
      v60 += 2;
      if ( !v59 )
        goto LABEL_60;
    }
    v61 = (__int64)&v58->vtable[*(_DWORD *)v60 + 6];
  }
  else
  {
LABEL_60:
    v61 = sub_1C47738(v57, IClassBoardSquareModel_TypeInfo, 6);
  }
  v62 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v61)(
                                                                                    v57,
                                                                                    *(_QWORD *)(v61 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v62, 0);
  LockModel = (System_String_o *)this->fields.descriptionLabel;
  if ( !LockModel )
    goto LABEL_67;
  UILabel__set_text((UILabel_o *)LockModel, v21, 0);
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3377/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, 0);
  if ( !closeBtnLabel )
    goto LABEL_67;
  UILabel__set_text(closeBtnLabel, LockModel, 0);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v64 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v64, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v64, 0, 0, 0);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, 0);
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
  if ( (byte_4CCAFB0 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_15646/*"Window/CloseBtn"*/);
    byte_4CCAFB0 = 1;
  }
  return (System_String_o *)StringLiteral_15646/*"Window/CloseBtn"*/;
}