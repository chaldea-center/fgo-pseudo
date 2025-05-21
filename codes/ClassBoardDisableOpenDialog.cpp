void __fastcall ClassBoardDisableOpenDialog___ctor(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.itemLabelForEffect.fields.y = xmmword_BEAFC0;
  *(_OWORD *)&this->fields.descriptionPosForEffect.fields.z = xmmword_BEA870;
  *(_OWORD *)&this->fields.itemLabelForLock.fields.z = xmmword_BEAAC0;
  *(_OWORD *)&this->fields.closeBtnPosForLock.fields.x = xmmword_BEAFD0;
  *(_QWORD *)&this->fields.itemInfoWindowBtnPosForLock.fields.y = 1113587712LL;
  this->fields.windowHeightForGrand = 570;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.x = 0LL;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.z = 0LL;
  *(_OWORD *)&this->fields.itemInfoWindowBtnPosForEffect.fields.x = xmmword_BEA780;
  *(_OWORD *)&this->fields.itemObjForLock.fields.y = xmmword_BEB300;
  *(_OWORD *)&this->fields.titleLabelPosYForGrand = xmmword_BEA490;
  *(_QWORD *)&this->fields.confirmTextPosYForGrand = 0xC34C0000C30C0000LL;
  this->fields.itemInfoListBtnPosYForGrand = 60.0;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, method);
}


void __fastcall ClassBoardDisableOpenDialog__Close(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4B4828E & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_ClassBoardDisableOpenDialog_EndClose__, v3);
    byte_4B4828E = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, method);
  v4 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v4, v5);
}


void __fastcall ClassBoardDisableOpenDialog__EndClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B4828F & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B4828F = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
}


void __fastcall ClassBoardDisableOpenDialog__EndOpen(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall ClassBoardDisableOpenDialog__Init(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, method);
}


void __fastcall ClassBoardDisableOpenDialog__OnClickClose(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B4828D & 1) == 0 )
  {
    sub_1BDB878(&Method_ClassBoardDisableOpenDialog_OnClickClose__, method);
    byte_4B4828D = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardDisableOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardDisableOpenDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ClassBoardDisableOpenDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCloseSeKind, 0, 0LL);
    ClassBoardDisableOpenDialog__Close(this, v5);
  }
}


void __fastcall ClassBoardDisableOpenDialog__OnClickItemInfoListWindow(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4B48290 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__33_0__, v3);
    byte_4B48290 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__33_0__,
      0LL);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v4, v5);
    this->fields.isButtonEnable = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardDisableOpenDialog__Open(
        ClassBoardDisableOpenDialog_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *closeFunc,
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
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *Master_object; // x0
  ClassStatisticsInfo_array *ClassStatisticsInfos; // x22
  System_String_o *LockModel; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  System_String_o *v27; // x21
  __int64 methodPtr_low; // x10
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *v30; // x8
  __int64 v31; // x9
  IClassBoardSquareModel_c **v32; // x10
  __int64 v33; // x0
  char v34; // w0
  UILabel_o *v35; // x22
  char v36; // w23
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *itemInfoWindowBtn; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  UILabel_o *titleLabel; // x22
  System_String_c *klass; // x8
  System_String_o *v46; // x22
  __int64 v47; // x9
  int32_t *p_offset; // x10
  __int64 v49; // x0
  int v50; // w1
  const MethodInfo *v51; // x2
  System_String_c *v52; // x8
  System_String_o *v53; // x22
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0
  const MethodInfo *v57; // x0
  int32_t v58; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v60; // x0
  UnityEngine_GameObject_o *v61; // x0
  struct IClassBoardSquareModel_o *v62; // x20
  IClassBoardSquareModel_c *v63; // x8
  __int64 v64; // x9
  IClassBoardSquareModel_c **v65; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v67; // x0
  const MethodInfo *v68; // x2
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v70; // x20
  const MethodInfo *v71; // x1
  __int64 v72; // [xsp+0h] [xbp-50h] BYREF
  int v73; // [xsp+8h] [xbp-48h]
  ClassBoardCondData_o v74; // 0:x0.12
  ClassBoardCondData_o v75; // 0:x1.12

  if ( (byte_4B4828C & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, square);
    sub_1BDB878(&Method_ClassBoardDisableOpenDialog_EndOpen__, v7);
    sub_1BDB878(&ClassBoardLock_TypeInfo, v8);
    sub_1BDB878(&Method_DataManager_GetMaster_UserClassStatisticsMaster___, v9);
    sub_1BDB878(&DataManager_TypeInfo, v10);
    sub_1BDB878(&IClassBoardLockModel_TypeInfo, v11);
    sub_1BDB878(&IClassBoardSquareModel_TypeInfo, v12);
    sub_1BDB878(&LocalizationManager_TypeInfo, v13);
    sub_1BDB878(&StringLiteral_3421/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, v14);
    sub_1BDB878(&StringLiteral_3422/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL_GRAND"*/, v15);
    sub_1BDB878(&StringLiteral_3424/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, v16);
    sub_1BDB878(&StringLiteral_3420/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, v17);
    sub_1BDB878(&StringLiteral_3423/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, v18);
    sub_1BDB878(&StringLiteral_3435/*"CLASS_BOARD_GRAND_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, v19);
    byte_4B4828C = 1;
  }
  v73 = 0;
  v72 = 0LL;
  this->fields.classBoardSquare = square;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.classBoardSquare, (int32_t)square, (int32_t)closeFunc, method);
  this->fields.closeFunc = closeFunc;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeFunc, v20, v21);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
  if ( Master_object )
    ClassStatisticsInfos = UserClassStatisticsMaster__GetClassStatisticsInfos(
                             (UserClassStatisticsMaster_o *)Master_object,
                             0LL);
  else
    ClassStatisticsInfos = 0LL;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3421/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, 0LL);
  if ( !square )
    goto LABEL_67;
  v27 = LockModel;
  methodPtr_low = LOBYTE(ClassBoardLock_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(square->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (ClassBoardLock_c *)square->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardLock_TypeInfo )
  {
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3424/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_67;
    UILabel__set_text(titleLabel, LockModel, 0LL);
    LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, 0LL);
    if ( !LockModel )
      goto LABEL_67;
    klass = LockModel->klass;
    v46 = LockModel;
    v47 = *(unsigned __int16 *)(&LockModel->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&LockModel->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v47;
        p_offset += 4;
        if ( !v47 )
          goto LABEL_39;
      }
      v49 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_39:
      v49 = sub_1C2C00C(LockModel, IClassBoardLockModel_TypeInfo, 0LL);
    }
    v72 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v49)(v46, *(_QWORD *)(v49 + 8));
    v73 = v50;
    *(_QWORD *)&v74.fields.Type = &v72;
    v74.fields.Num = 0;
    if ( ClassBoardCondData__get_HasCond(v74, v51) )
    {
      LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, 0LL);
      if ( !LockModel )
        goto LABEL_67;
      v52 = LockModel->klass;
      v53 = LockModel;
      v54 = *(unsigned __int16 *)(&LockModel->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&LockModel->klass->_2.bitflags2 + 3) )
      {
        v55 = &v52->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLockModel_c **)v55 - 1) != IClassBoardLockModel_TypeInfo )
        {
          --v54;
          v55 += 4;
          if ( !v54 )
            goto LABEL_47;
        }
        v56 = (__int64)(&v52->vtable._0_Equals.method + 2 * *v55);
      }
      else
      {
LABEL_47:
        v56 = sub_1C2C00C(LockModel, IClassBoardLockModel_TypeInfo, 0LL);
      }
      v57 = (const MethodInfo *)(*(__int64 (__fastcall **)(System_String_o *, _QWORD))v56)(v53, *(_QWORD *)(v56 + 8));
      v75.fields.Num = v58;
      *(_QWORD *)&v75.fields.Type = v57;
      ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v75, v57);
    }
    LockModel = (System_String_o *)this->fields.itemListObj;
    if ( !LockModel
      || (gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0LL),
          GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemObjForLock, 0LL),
          (LockModel = (System_String_o *)this->fields.itemInfoLabel) == 0LL)
      || (v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL),
          GameObjectExtensions__SetLocalPosition(v60, this->fields.itemLabelForLock, 0LL),
          (LockModel = (System_String_o *)this->fields.descriptionLabel) == 0LL) )
    {
LABEL_67:
      sub_1BDBAD4(LockModel, v25);
    }
    v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
    GameObjectExtensions__SetLocalPosition(v61, this->fields.descriptionPosForLock, 0LL);
    GameObjectExtensions__SetLocalPosition(this->fields.closeBtn, this->fields.closeBtnPosForLock, 0LL);
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
    v26);
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_67;
  v30 = SquareModel_k__BackingField->klass;
  v31 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    v32 = (IClassBoardSquareModel_c **)&v30->_1.interfaceOffsets->offset;
    while ( *(v32 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v31;
      v32 += 2;
      if ( !v31 )
        goto LABEL_18;
    }
    v33 = (__int64)&(&v30->rgctx_data)[2 * *(_DWORD *)v32 + 39];
  }
  else
  {
LABEL_18:
    v33 = sub_1C2C00C(square->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  v34 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v33)(
          SquareModel_k__BackingField,
          *(_QWORD *)(v33 + 8));
  v35 = this->fields.titleLabel;
  v36 = v34;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( (v34 & 1) != 0 )
      goto LABEL_22;
    goto LABEL_26;
  }
  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( (v36 & 1) == 0 )
  {
LABEL_26:
    LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3423/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0LL);
    if ( !v35 )
      goto LABEL_67;
    UILabel__set_text(v35, LockModel, 0LL);
    LockModel = (System_String_o *)this->fields.itemListObj;
    if ( !LockModel )
      goto LABEL_67;
    v37 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0LL);
    GameObjectExtensions__SetLocalPosition(v37, this->fields.itemObjForEffect, 0LL);
    LockModel = (System_String_o *)this->fields.itemInfoLabel;
    if ( !LockModel )
      goto LABEL_67;
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
    GameObjectExtensions__SetLocalPosition(v38, this->fields.itemLabelForEffect, 0LL);
    LockModel = (System_String_o *)this->fields.descriptionLabel;
    if ( !LockModel )
      goto LABEL_67;
    v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
    GameObjectExtensions__SetLocalPosition(v39, this->fields.descriptionPosForEffect, 0LL);
    GameObjectExtensions__SetLocalPosition(this->fields.closeBtn, this->fields.closeBtnPosForEffect, 0LL);
    itemInfoWindowBtn = this->fields.itemInfoWindowBtn;
    x = this->fields.itemInfoWindowBtnPosForEffect.fields.x;
    y = this->fields.itemInfoWindowBtnPosForEffect.fields.y;
    z = this->fields.itemInfoWindowBtnPosForEffect.fields.z;
LABEL_54:
    GameObjectExtensions__SetLocalPosition(itemInfoWindowBtn, *(UnityEngine_Vector3_o *)&x, 0LL);
    goto LABEL_55;
  }
LABEL_22:
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3435/*"CLASS_BOARD_GRAND_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0LL);
  if ( !v35 )
    goto LABEL_67;
  UILabel__set_text(v35, LockModel, 0LL);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3422/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL_GRAND"*/, 0LL);
  if ( !this->fields.baseWindowSprite )
    goto LABEL_67;
  v27 = LockModel;
  UIWidget__set_height((UIWidget_o *)this->fields.baseWindowSprite, this->fields.windowHeightForGrand, 0LL);
  ComponentHelper__SetLocalPositionY(
    (UnityEngine_Component_o *)this->fields.titleLabel,
    this->fields.titleLabelPosYForGrand,
    0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.effectObj, this->fields.effectDetailPosYForGrand, 0LL);
  ComponentHelper__SetLocalPositionY(
    (UnityEngine_Component_o *)this->fields.itemInfoLabel,
    this->fields.itemLabelPosYForGrand,
    0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.itemListObj, this->fields.itemGridPosYForGrand, 0LL);
  ComponentHelper__SetLocalPositionY(
    (UnityEngine_Component_o *)this->fields.descriptionLabel,
    this->fields.confirmTextPosYForGrand,
    0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.closeBtn, this->fields.closeBtnPosYForGrand, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.itemInfoWindowBtn, this->fields.itemInfoListBtnPosYForGrand, 0LL);
LABEL_55:
  v62 = square->fields._SquareModel_k__BackingField;
  if ( !v62 )
    goto LABEL_67;
  v63 = v62->klass;
  v64 = *(unsigned __int16 *)(&v62->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v62->klass->_2.bitflags2 + 3) )
  {
    v65 = (IClassBoardSquareModel_c **)&v63->_1.interfaceOffsets->offset;
    while ( *(v65 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v64;
      v65 += 2;
      if ( !v64 )
        goto LABEL_60;
    }
    p_method = (__int64)&v63->vtable[*(_DWORD *)v65 + 6].method;
  }
  else
  {
LABEL_60:
    p_method = sub_1C2C00C(v62, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v67 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    v62,
                                                                                    *(_QWORD *)(p_method + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v67, v68);
  LockModel = (System_String_o *)this->fields.descriptionLabel;
  if ( !LockModel )
    goto LABEL_67;
  UILabel__set_text((UILabel_o *)LockModel, v27, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3420/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_67;
  UILabel__set_text(closeBtnLabel, LockModel, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v70 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v70, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v70, 0, 0LL);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, v71);
}


void __fastcall ClassBoardDisableOpenDialog___OnClickItemInfoListWindow_b__33_0(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


System_String_o *__fastcall ClassBoardDisableOpenDialog__get_closeBtnPath(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B48291 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_15617/*"Window/CloseBtn"*/, method);
    byte_4B48291 = 1;
  }
  return (System_String_o *)StringLiteral_15617/*"Window/CloseBtn"*/;
}