void __fastcall ClassBoardDisableOpenDialog___ctor(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.itemObjForEffect.fields.x = 0LL;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.z = 0LL;
  *(_OWORD *)&this->fields.itemLabelForEffect.fields.y = xmmword_BA3250;
  *(_OWORD *)&this->fields.descriptionPosForEffect.fields.z = xmmword_BA2AF0;
  *(_OWORD *)&this->fields.itemInfoWindowBtnPosForEffect.fields.x = xmmword_BA29F0;
  *(_OWORD *)&this->fields.itemObjForLock.fields.y = xmmword_BA3560;
  *(_OWORD *)&this->fields.itemLabelForLock.fields.z = xmmword_BA2D30;
  *(_OWORD *)&this->fields.closeBtnPosForLock.fields.x = xmmword_BA3260;
  *(_QWORD *)&this->fields.itemInfoWindowBtnPosForLock.fields.y = 1113587712LL;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, method);
}


void __fastcall ClassBoardDisableOpenDialog__Close(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_49FF6A3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ClassBoardDisableOpenDialog_EndClose__, v3);
    byte_49FF6A3 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, method);
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v4, v5);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v6, v7);
}


void __fastcall ClassBoardDisableOpenDialog__EndClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49FF6A4 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF6A4 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
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

  if ( (byte_49FF6A2 & 1) == 0 )
  {
    sub_1B640C8(&Method_ClassBoardDisableOpenDialog_OnClickClose__, method);
    byte_49FF6A2 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardDisableOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardDisableOpenDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_ClassBoardDisableOpenDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCloseSeKind, 0LL);
    ClassBoardDisableOpenDialog__Close(this, v5);
  }
}


void __fastcall ClassBoardDisableOpenDialog__OnClickItemInfoListWindow(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_49FF6A5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__25_0__, v4);
    byte_49FF6A5 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__25_0__,
      0LL);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v5, v6);
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
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  ClassBoardSquare_o *v19; // x21
  UILabel_o *titleLabel; // x22
  System_String_o *itemListObj; // x0
  System_String_c *v22; // x8
  System_String_o *v23; // x22
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  const MethodInfo *v27; // x2
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v30; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  int v33; // w1
  const MethodInfo *v34; // x2
  System_String_c *v35; // x8
  System_String_o *v36; // x21
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v40; // x0
  const MethodInfo *v41; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_GameObject_o *itemInfoWindowBtn; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  const MethodInfo *v49; // x0
  int32_t v50; // w1
  struct IClassBoardSquareModel_o *v51; // x20
  IClassBoardSquareModel_c *v52; // x8
  __int64 v53; // x9
  IClassBoardSquareModel_c **v54; // x10
  __int64 v55; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v56; // x0
  const MethodInfo *v57; // x2
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_GameObject_o *v60; // x0
  UILabel_o *descriptionLabel; // x20
  UILabel_o *closeBtnLabel; // x20
  __int64 v63; // x1
  __int64 v64; // x2
  System_Action_o *v65; // x20
  const MethodInfo *v66; // x1
  __int64 v67; // [xsp+0h] [xbp-50h] BYREF
  int v68; // [xsp+8h] [xbp-48h]
  ClassBoardCondData_o v69; // 0:x0.12
  ClassBoardCondData_o v70; // 0:x1.12

  if ( (byte_49FF6A1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, square);
    sub_1B640C8(&Method_ClassBoardDisableOpenDialog_EndOpen__, v7);
    sub_1B640C8(&ClassBoardLock_TypeInfo, v8);
    sub_1B640C8(&IClassBoardLockModel_TypeInfo, v9);
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_3467/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, v12);
    sub_1B640C8(&StringLiteral_3469/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, v13);
    sub_1B640C8(&StringLiteral_3466/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, v14);
    sub_1B640C8(&StringLiteral_3468/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, v15);
    byte_49FF6A1 = 1;
  }
  v68 = 0;
  v67 = 0LL;
  this->fields.classBoardSquare = square;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    (int32_t)closeFunc,
    (int32_t)method);
  this->fields.closeFunc = closeFunc;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)closeFunc, v16, v17);
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
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3468/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0LL);
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
          v27);
        SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
        if ( SquareModel_k__BackingField )
        {
          klass = SquareModel_k__BackingField->klass;
          v30 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
          {
            p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v30;
              p_offset += 2;
              if ( !v30 )
                goto LABEL_26;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
          }
          else
          {
LABEL_26:
            p_method = sub_1BB60A8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
          }
          v40 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                            SquareModel_k__BackingField,
                                                                                            *(_QWORD *)(p_method + 8));
          ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v40, v41);
          itemListObj = (System_String_o *)this->fields.itemListObj;
          if ( itemListObj )
          {
            gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)itemListObj, 0LL);
            GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemObjForEffect, 0LL);
            itemListObj = (System_String_o *)this->fields.itemInfoLabel;
            if ( itemListObj )
            {
              v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
              GameObjectExtensions__SetLocalPosition(v43, this->fields.itemLabelForEffect, 0LL);
              itemListObj = (System_String_o *)this->fields.descriptionLabel;
              if ( itemListObj )
              {
                v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
                GameObjectExtensions__SetLocalPosition(v44, this->fields.descriptionPosForEffect, 0LL);
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
    sub_1B64324(itemListObj);
  }
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3469/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, itemListObj, 0LL);
  itemListObj = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v19, 0LL);
  if ( !itemListObj )
    goto LABEL_59;
  v22 = itemListObj->klass;
  v23 = itemListObj;
  v24 = *(unsigned __int16 *)(&itemListObj->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&itemListObj->klass->_2.bitflags2 + 3) )
  {
    v25 = &v22->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v25 - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_18;
    }
    v26 = (__int64)(&v22->vtable._0_Equals.method + 2 * *v25);
  }
  else
  {
LABEL_18:
    v26 = sub_1BB60A8(itemListObj, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v67 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  v68 = v33;
  *(_QWORD *)&v69.fields.Type = &v67;
  v69.fields.Num = 0;
  itemListObj = (System_String_o *)ClassBoardCondData__get_HasCond(v69, v34);
  if ( ((unsigned __int8)itemListObj & 1) != 0 )
  {
    itemListObj = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v19, 0LL);
    if ( !itemListObj )
      goto LABEL_59;
    v35 = itemListObj->klass;
    v36 = itemListObj;
    v37 = *(unsigned __int16 *)(&itemListObj->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&itemListObj->klass->_2.bitflags2 + 3) )
    {
      v38 = &v35->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)v38 - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_34;
      }
      v39 = (__int64)(&v35->vtable._0_Equals.method + 2 * *v38);
    }
    else
    {
LABEL_34:
      v39 = sub_1BB60A8(itemListObj, IClassBoardLockModel_TypeInfo, 0LL);
    }
    v49 = (const MethodInfo *)(*(__int64 (__fastcall **)(System_String_o *, _QWORD))v39)(v36, *(_QWORD *)(v39 + 8));
    v70.fields.Num = v50;
    *(_QWORD *)&v70.fields.Type = v49;
    ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v70, v49);
  }
  if ( !square )
    goto LABEL_59;
  v51 = square->fields._SquareModel_k__BackingField;
  if ( !v51 )
    goto LABEL_59;
  v52 = v51->klass;
  v53 = *(unsigned __int16 *)(&v51->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v51->klass->_2.bitflags2 + 3) )
  {
    v54 = (IClassBoardSquareModel_c **)&v52->_1.interfaceOffsets->offset;
    while ( *(v54 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v53;
      v54 += 2;
      if ( !v53 )
        goto LABEL_48;
    }
    v55 = (__int64)&v52->vtable[*(_DWORD *)v54 + 6].method;
  }
  else
  {
LABEL_48:
    v55 = sub_1BB60A8(v51, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v56 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v55)(
                                                                                    v51,
                                                                                    *(_QWORD *)(v55 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v56, v57);
  itemListObj = (System_String_o *)this->fields.itemListObj;
  if ( !itemListObj )
    goto LABEL_59;
  v58 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v58, this->fields.itemObjForLock, 0LL);
  itemListObj = (System_String_o *)this->fields.itemInfoLabel;
  if ( !itemListObj )
    goto LABEL_59;
  v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v59, this->fields.itemLabelForLock, 0LL);
  itemListObj = (System_String_o *)this->fields.descriptionLabel;
  if ( !itemListObj )
    goto LABEL_59;
  v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v60, this->fields.descriptionPosForLock, 0LL);
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
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3467/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, 0LL);
  if ( !descriptionLabel )
    goto LABEL_59;
  UILabel__set_text(descriptionLabel, itemListObj, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3466/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_59;
  UILabel__set_text(closeBtnLabel, itemListObj, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v65 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v63, v64);
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
  if ( (byte_49FF6A6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15574/*"Window/CloseBtn"*/, method);
    byte_49FF6A6 = 1;
  }
  return (System_String_o *)StringLiteral_15574/*"Window/CloseBtn"*/;
}