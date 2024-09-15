void __fastcall ClassBoardDisableOpenDialog___ctor(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.itemObjForEffect.fields.x = 0LL;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.z = 0LL;
  *(_OWORD *)&this->fields.itemLabelForEffect.fields.y = xmmword_BAD2D0;
  *(_OWORD *)&this->fields.descriptionPosForEffect.fields.z = xmmword_BACB80;
  *(_OWORD *)&this->fields.itemInfoWindowBtnPosForEffect.fields.x = xmmword_BACA80;
  *(_OWORD *)&this->fields.itemObjForLock.fields.y = xmmword_BAD5E0;
  *(_OWORD *)&this->fields.itemLabelForLock.fields.z = xmmword_BACDC0;
  *(_OWORD *)&this->fields.closeBtnPosForLock.fields.x = xmmword_BAD2E0;
  *(_QWORD *)&this->fields.itemInfoWindowBtnPosForLock.fields.y = 1113587712LL;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardDisableOpenDialog__Close(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4A31307 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_ClassBoardDisableOpenDialog_EndClose__, v3);
    byte_4A31307 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
  v4 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v4, 0LL);
}


void __fastcall ClassBoardDisableOpenDialog__EndClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A31308 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A31308 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69287408(gameObject, 0LL);
}


void __fastcall ClassBoardDisableOpenDialog__EndOpen(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall ClassBoardDisableOpenDialog__Init(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardDisableOpenDialog__OnClickClose(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A31306 & 1) == 0 )
  {
    sub_1B761C0(&Method_ClassBoardDisableOpenDialog_OnClickClose__, method);
    byte_4A31306 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardDisableOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardDisableOpenDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B761D8(Method_ClassBoardDisableOpenDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B761A4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCloseSeKind, 0LL);
    ClassBoardDisableOpenDialog__Close(this, v5);
  }
}


void __fastcall ClassBoardDisableOpenDialog__OnClickItemInfoListWindow(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4A31309 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__25_0__, v3);
    byte_4A31309 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__25_0__,
      0LL);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v4, 0LL);
    this->fields.isButtonEnable = 0;
  }
}


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
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  ClassBoardSquare_o *v19; // x21
  UILabel_o *titleLabel; // x22
  unsigned __int64 itemListObj; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  System_String_c *v24; // x8
  unsigned __int64 v25; // x22
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v31; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  System_String_c *v34; // x8
  unsigned __int64 v35; // x21
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v39; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  struct UnityEngine_Vector3_o *p_itemInfoWindowBtnPosForEffect; // x8
  float *p_y; // x9
  float *p_z; // x10
  __int64 v46; // x0
  int32_t v47; // w1
  struct IClassBoardSquareModel_o *v48; // x20
  IClassBoardSquareModel_c *v49; // x8
  __int64 v50; // x9
  IClassBoardSquareModel_c **v51; // x10
  __int64 v52; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UILabel_o *descriptionLabel; // x20
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v59; // x20
  ClassBoardCondData_o v60; // 0:x1.12
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A31305 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, square);
    sub_1B761C0(&Method_ClassBoardDisableOpenDialog_EndOpen__, v7);
    sub_1B761C0(&ClassBoardLock_TypeInfo, v8);
    sub_1B761C0(&IClassBoardLockModel_TypeInfo, v9);
    sub_1B761C0(&IClassBoardSquareModel_TypeInfo, v10);
    sub_1B761C0(&LocalizationManager_TypeInfo, v11);
    sub_1B761C0(&StringLiteral_3488/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, v12);
    sub_1B761C0(&StringLiteral_3490/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, v13);
    sub_1B761C0(&StringLiteral_3487/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, v14);
    sub_1B761C0(&StringLiteral_3489/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, v15);
    byte_4A31305 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    (int32_t)closeFunc,
    (int32_t)method);
  this->fields.closeFunc = closeFunc;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)closeFunc, v16, v17);
  if ( square
    && (methodPtr_low = LOBYTE(ClassBoardLock_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(square->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (ClassBoardLock_c *)square->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardLock_TypeInfo )
      v19 = square;
    else
      v19 = 0LL;
  }
  else
  {
    v19 = 0LL;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !v19 )
  {
    itemListObj = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3489/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)itemListObj, 0LL);
      if ( square )
      {
        ClassBoardBaseDialog__SetUpEffectDetail(
          (ClassBoardBaseDialog_o *)this,
          square->fields._SquareModel_k__BackingField,
          0.0,
          0.0,
          0LL);
        SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
        if ( SquareModel_k__BackingField )
        {
          klass = SquareModel_k__BackingField->klass;
          v31 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
          {
            p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v31;
              p_offset += 2;
              if ( !v31 )
                goto LABEL_26;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
          }
          else
          {
LABEL_26:
            p_method = sub_1BC81A0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
          }
          v39 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                            SquareModel_k__BackingField,
                                                                                            *(_QWORD *)(p_method + 8));
          ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v39, 0LL);
          itemListObj = (unsigned __int64)this->fields.itemListObj;
          if ( itemListObj )
          {
            gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)itemListObj, 0LL);
            GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemObjForEffect, 0LL);
            itemListObj = (unsigned __int64)this->fields.itemInfoLabel;
            if ( itemListObj )
            {
              v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
              GameObjectExtensions__SetLocalPosition(v41, this->fields.itemLabelForEffect, 0LL);
              itemListObj = (unsigned __int64)this->fields.descriptionLabel;
              if ( itemListObj )
              {
                v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
                GameObjectExtensions__SetLocalPosition(v42, this->fields.descriptionPosForEffect, 0LL);
                GameObjectExtensions__SetLocalPosition(this->fields.closeBtn, this->fields.closeBtnPosForEffect, 0LL);
                p_itemInfoWindowBtnPosForEffect = &this->fields.itemInfoWindowBtnPosForEffect;
                p_y = &this->fields.itemInfoWindowBtnPosForEffect.fields.y;
                p_z = &this->fields.itemInfoWindowBtnPosForEffect.fields.z;
                goto LABEL_54;
              }
            }
          }
        }
      }
    }
LABEL_59:
    sub_1B7641C(itemListObj, v22);
  }
  itemListObj = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3490/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, (System_String_o *)itemListObj, 0LL);
  itemListObj = (unsigned __int64)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v19, v23);
  if ( !itemListObj )
    goto LABEL_59;
  v24 = *(System_String_c **)itemListObj;
  v25 = itemListObj;
  v26 = *(unsigned __int16 *)(*(_QWORD *)itemListObj + 302LL);
  if ( *(_WORD *)(*(_QWORD *)itemListObj + 302LL) )
  {
    v27 = &v24->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v27 - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_18;
    }
    v28 = (__int64)(&v24->vtable._0_Equals.method + 2 * *v27);
  }
  else
  {
LABEL_18:
    v28 = sub_1BC81A0(itemListObj, IClassBoardLockModel_TypeInfo, 0LL);
  }
  itemListObj = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
  if ( HIDWORD(itemListObj) )
  {
    itemListObj = (unsigned __int64)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v19, v22);
    if ( !itemListObj )
      goto LABEL_59;
    v34 = *(System_String_c **)itemListObj;
    v35 = itemListObj;
    v36 = *(unsigned __int16 *)(*(_QWORD *)itemListObj + 302LL);
    if ( *(_WORD *)(*(_QWORD *)itemListObj + 302LL) )
    {
      v37 = &v34->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)v37 - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_34;
      }
      v38 = (__int64)(&v34->vtable._0_Equals.method + 2 * *v37);
    }
    else
    {
LABEL_34:
      v38 = sub_1BC81A0(itemListObj, IClassBoardLockModel_TypeInfo, 0LL);
    }
    v46 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
    v60.fields.Num = v47;
    *(_QWORD *)&v60.fields.Type = v46;
    ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v60, 0LL);
  }
  if ( !square )
    goto LABEL_59;
  v48 = square->fields._SquareModel_k__BackingField;
  if ( !v48 )
    goto LABEL_59;
  v49 = v48->klass;
  v50 = *(unsigned __int16 *)(&v48->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v48->klass->_2.bitflags2 + 3) )
  {
    v51 = (IClassBoardSquareModel_c **)&v49->_1.interfaceOffsets->offset;
    while ( *(v51 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v50;
      v51 += 2;
      if ( !v50 )
        goto LABEL_48;
    }
    v52 = (__int64)&v49->vtable[*(_DWORD *)v51 + 6].method;
  }
  else
  {
LABEL_48:
    v52 = sub_1BC81A0(v48, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v53 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v52)(
                                                                                    v48,
                                                                                    *(_QWORD *)(v52 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v53, 0LL);
  itemListObj = (unsigned __int64)this->fields.itemListObj;
  if ( !itemListObj )
    goto LABEL_59;
  v54 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v54, this->fields.itemObjForLock, 0LL);
  itemListObj = (unsigned __int64)this->fields.itemInfoLabel;
  if ( !itemListObj )
    goto LABEL_59;
  v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v55, this->fields.itemLabelForLock, 0LL);
  itemListObj = (unsigned __int64)this->fields.descriptionLabel;
  if ( !itemListObj )
    goto LABEL_59;
  v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v56, this->fields.descriptionPosForLock, 0LL);
  GameObjectExtensions__SetLocalPosition(this->fields.closeBtn, this->fields.closeBtnPosForLock, 0LL);
  p_itemInfoWindowBtnPosForEffect = &this->fields.itemInfoWindowBtnPosForLock;
  p_y = &this->fields.itemInfoWindowBtnPosForLock.fields.y;
  p_z = &this->fields.itemInfoWindowBtnPosForLock.fields.z;
LABEL_54:
  v61.fields.z = *p_z;
  v61.fields.y = *p_y;
  v61.fields.x = p_itemInfoWindowBtnPosForEffect->fields.x;
  GameObjectExtensions__SetLocalPosition(this->fields.itemInfoWindowBtn, v61, 0LL);
  descriptionLabel = this->fields.descriptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  itemListObj = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3488/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, 0LL);
  if ( !descriptionLabel )
    goto LABEL_59;
  UILabel__set_text(descriptionLabel, (System_String_o *)itemListObj, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  itemListObj = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3487/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_59;
  UILabel__set_text(closeBtnLabel, (System_String_o *)itemListObj, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v59 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v59, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v59, 0, 0LL);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardDisableOpenDialog___OnClickItemInfoListWindow_b__25_0(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


System_String_o *__fastcall ClassBoardDisableOpenDialog__get_closeBtnPath(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A3130A & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_15636/*"Window/CloseBtn"*/, method);
    byte_4A3130A = 1;
  }
  return (System_String_o *)StringLiteral_15636/*"Window/CloseBtn"*/;
}