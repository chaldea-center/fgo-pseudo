void __fastcall ClassBoardDisableOpenDialog___ctor(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.itemLabelForEffect.fields.y = xmmword_BAA3B0;
  *(_OWORD *)&this->fields.descriptionPosForEffect.fields.z = xmmword_BA9CB0;
  *(_OWORD *)&this->fields.itemInfoWindowBtnPosForEffect.fields.x = xmmword_BA9BC0;
  *(_OWORD *)&this->fields.itemObjForLock.fields.y = xmmword_BAA6D0;
  *(_OWORD *)&this->fields.itemLabelForLock.fields.z = xmmword_BA9EF0;
  *(_OWORD *)&this->fields.closeBtnPosForLock.fields.x = xmmword_BAA3C0;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.x = 0LL;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.z = 0LL;
  *(_QWORD *)&this->fields.itemInfoWindowBtnPosForLock.fields.y = 1113587712LL;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, method);
}


void __fastcall ClassBoardDisableOpenDialog__Close(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_49BE4EE & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_ClassBoardDisableOpenDialog_EndClose__, v3);
    byte_49BE4EE = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, method);
  v4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v4, v5);
}


void __fastcall ClassBoardDisableOpenDialog__EndClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49BE4EF & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BE4EF = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_68804456(gameObject, 0LL);
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

  if ( (byte_49BE4ED & 1) == 0 )
  {
    sub_1B4CF90(&Method_ClassBoardDisableOpenDialog_OnClickClose__, method);
    byte_49BE4ED = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardDisableOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardDisableOpenDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_ClassBoardDisableOpenDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
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

  if ( (byte_49BE4F0 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__25_0__, v3);
    byte_49BE4F0 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__25_0__,
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 methodPtr_low; // x10
  ClassBoardSquare_o *v19; // x21
  UILabel_o *titleLabel; // x22
  System_String_o *itemListObj; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  System_String_c *v24; // x8
  System_String_o *v25; // x22
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  const MethodInfo *v29; // x2
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v32; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  int v35; // w1
  const MethodInfo *v36; // x2
  System_String_c *v37; // x8
  System_String_o *v38; // x21
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v42; // x0
  const MethodInfo *v43; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_GameObject_o *itemInfoWindowBtn; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  const MethodInfo *v51; // x0
  int32_t v52; // w1
  struct IClassBoardSquareModel_o *v53; // x20
  IClassBoardSquareModel_c *v54; // x8
  __int64 v55; // x9
  IClassBoardSquareModel_c **v56; // x10
  __int64 v57; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v58; // x0
  const MethodInfo *v59; // x2
  UnityEngine_GameObject_o *v60; // x0
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  UILabel_o *descriptionLabel; // x20
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v65; // x20
  const MethodInfo *v66; // x1
  __int64 v67; // [xsp+0h] [xbp-50h] BYREF
  int v68; // [xsp+8h] [xbp-48h]
  ClassBoardCondData_o v69; // 0:x0.12
  ClassBoardCondData_o v70; // 0:x1.12

  if ( (byte_49BE4EC & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, square);
    sub_1B4CF90(&Method_ClassBoardDisableOpenDialog_EndOpen__, v7);
    sub_1B4CF90(&ClassBoardLock_TypeInfo, v8);
    sub_1B4CF90(&IClassBoardLockModel_TypeInfo, v9);
    sub_1B4CF90(&IClassBoardSquareModel_TypeInfo, v10);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v11);
    sub_1B4CF90(&StringLiteral_3382/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, v12);
    sub_1B4CF90(&StringLiteral_3384/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, v13);
    sub_1B4CF90(&StringLiteral_3381/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, v14);
    sub_1B4CF90(&StringLiteral_3383/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, v15);
    byte_49BE4EC = 1;
  }
  v68 = 0;
  v67 = 0LL;
  this->fields.classBoardSquare = square;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.classBoardSquare, (int32_t)square, (int32_t)closeFunc, method);
  this->fields.closeFunc = closeFunc;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeFunc, v16, v17);
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
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3383/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, itemListObj, 0LL);
      if ( square )
      {
        ClassBoardBaseDialog__SetUpEffectDetail(
          (ClassBoardBaseDialog_o *)this,
          square->fields._SquareModel_k__BackingField,
          0.0,
          0.0,
          v29);
        SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
        if ( SquareModel_k__BackingField )
        {
          klass = SquareModel_k__BackingField->klass;
          v32 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
          {
            p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v32;
              p_offset += 2;
              if ( !v32 )
                goto LABEL_26;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
          }
          else
          {
LABEL_26:
            p_method = sub_1B9D724(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
          }
          v42 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                            SquareModel_k__BackingField,
                                                                                            *(_QWORD *)(p_method + 8));
          ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v42, v43);
          itemListObj = (System_String_o *)this->fields.itemListObj;
          if ( itemListObj )
          {
            gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)itemListObj, 0LL);
            GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemObjForEffect, 0LL);
            itemListObj = (System_String_o *)this->fields.itemInfoLabel;
            if ( itemListObj )
            {
              v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
              GameObjectExtensions__SetLocalPosition(v45, this->fields.itemLabelForEffect, 0LL);
              itemListObj = (System_String_o *)this->fields.descriptionLabel;
              if ( itemListObj )
              {
                v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
                GameObjectExtensions__SetLocalPosition(v46, this->fields.descriptionPosForEffect, 0LL);
                GameObjectExtensions__SetLocalPosition(this->fields.closeBtn, this->fields.closeBtnPosForEffect, 0LL);
                itemInfoWindowBtn = this->fields.itemInfoWindowBtn;
                x = this->fields.itemInfoWindowBtnPosForEffect.fields.x;
                y = this->fields.itemInfoWindowBtnPosForEffect.fields.y;
                z = this->fields.itemInfoWindowBtnPosForEffect.fields.z;
                goto LABEL_54;
              }
            }
          }
        }
      }
    }
LABEL_59:
    sub_1B4D1EC(itemListObj, v22);
  }
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3384/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, itemListObj, 0LL);
  itemListObj = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v19, v23);
  if ( !itemListObj )
    goto LABEL_59;
  v24 = itemListObj->klass;
  v25 = itemListObj;
  v26 = *(unsigned __int16 *)(&itemListObj->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&itemListObj->klass->_2.bitflags2 + 3) )
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
    v28 = sub_1B9D724(itemListObj, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v67 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
  v68 = v35;
  *(_QWORD *)&v69.fields.Type = &v67;
  v69.fields.Num = 0;
  itemListObj = (System_String_o *)ClassBoardCondData__get_HasCond(v69, v36);
  if ( ((unsigned __int8)itemListObj & 1) != 0 )
  {
    itemListObj = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v19, v22);
    if ( !itemListObj )
      goto LABEL_59;
    v37 = itemListObj->klass;
    v38 = itemListObj;
    v39 = *(unsigned __int16 *)(&itemListObj->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&itemListObj->klass->_2.bitflags2 + 3) )
    {
      v40 = &v37->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)v40 - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_34;
      }
      v41 = (__int64)(&v37->vtable._0_Equals.method + 2 * *v40);
    }
    else
    {
LABEL_34:
      v41 = sub_1B9D724(itemListObj, IClassBoardLockModel_TypeInfo, 0LL);
    }
    v51 = (const MethodInfo *)(*(__int64 (__fastcall **)(System_String_o *, _QWORD))v41)(v38, *(_QWORD *)(v41 + 8));
    v70.fields.Num = v52;
    *(_QWORD *)&v70.fields.Type = v51;
    ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v70, v51);
  }
  if ( !square )
    goto LABEL_59;
  v53 = square->fields._SquareModel_k__BackingField;
  if ( !v53 )
    goto LABEL_59;
  v54 = v53->klass;
  v55 = *(unsigned __int16 *)(&v53->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v53->klass->_2.bitflags2 + 3) )
  {
    v56 = (IClassBoardSquareModel_c **)&v54->_1.interfaceOffsets->offset;
    while ( *(v56 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v55;
      v56 += 2;
      if ( !v55 )
        goto LABEL_48;
    }
    v57 = (__int64)&v54->vtable[*(_DWORD *)v56 + 6].method;
  }
  else
  {
LABEL_48:
    v57 = sub_1B9D724(v53, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v58 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v57)(
                                                                                    v53,
                                                                                    *(_QWORD *)(v57 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v58, v59);
  itemListObj = (System_String_o *)this->fields.itemListObj;
  if ( !itemListObj )
    goto LABEL_59;
  v60 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v60, this->fields.itemObjForLock, 0LL);
  itemListObj = (System_String_o *)this->fields.itemInfoLabel;
  if ( !itemListObj )
    goto LABEL_59;
  v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v61, this->fields.itemLabelForLock, 0LL);
  itemListObj = (System_String_o *)this->fields.descriptionLabel;
  if ( !itemListObj )
    goto LABEL_59;
  v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v62, this->fields.descriptionPosForLock, 0LL);
  GameObjectExtensions__SetLocalPosition(this->fields.closeBtn, this->fields.closeBtnPosForLock, 0LL);
  itemInfoWindowBtn = this->fields.itemInfoWindowBtn;
  x = this->fields.itemInfoWindowBtnPosForLock.fields.x;
  y = this->fields.itemInfoWindowBtnPosForLock.fields.y;
  z = this->fields.itemInfoWindowBtnPosForLock.fields.z;
LABEL_54:
  GameObjectExtensions__SetLocalPosition(itemInfoWindowBtn, *(UnityEngine_Vector3_o *)&x, 0LL);
  descriptionLabel = this->fields.descriptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3382/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, 0LL);
  if ( !descriptionLabel )
    goto LABEL_59;
  UILabel__set_text(descriptionLabel, itemListObj, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3381/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_59;
  UILabel__set_text(closeBtnLabel, itemListObj, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v65 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v65, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v65, 0, 0LL);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, v66);
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
  if ( (byte_49BE4F1 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_15342/*"Window/CloseBtn"*/, method);
    byte_49BE4F1 = 1;
  }
  return (System_String_o *)StringLiteral_15342/*"Window/CloseBtn"*/;
}