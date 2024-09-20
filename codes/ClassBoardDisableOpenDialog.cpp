void __fastcall ClassBoardDisableOpenDialog___ctor(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.itemObjForEffect.fields.x = 0LL;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.z = 0LL;
  *(_OWORD *)&this->fields.itemLabelForEffect.fields.y = xmmword_BB4A40;
  *(_OWORD *)&this->fields.descriptionPosForEffect.fields.z = xmmword_BB42F0;
  *(_OWORD *)&this->fields.itemInfoWindowBtnPosForEffect.fields.x = xmmword_BB4200;
  *(_OWORD *)&this->fields.itemObjForLock.fields.y = xmmword_BB4D50;
  *(_OWORD *)&this->fields.itemLabelForLock.fields.z = xmmword_BB4530;
  *(_OWORD *)&this->fields.closeBtnPosForLock.fields.x = xmmword_BB4A50;
  *(_QWORD *)&this->fields.itemInfoWindowBtnPosForLock.fields.y = 1113587712LL;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardDisableOpenDialog__Close(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4A5E561 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardDisableOpenDialog_EndClose__);
    byte_4A5E561 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v3, 0LL);
}


void __fastcall ClassBoardDisableOpenDialog__EndClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A5E562 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E562 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
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

  if ( (byte_4A5E560 & 1) == 0 )
  {
    sub_1B885B0(&Method_ClassBoardDisableOpenDialog_OnClickClose__);
    byte_4A5E560 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardDisableOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardDisableOpenDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ClassBoardDisableOpenDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCloseSeKind, 0LL);
    ClassBoardDisableOpenDialog__Close(this, v5);
  }
}


void __fastcall ClassBoardDisableOpenDialog__OnClickItemInfoListWindow(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4A5E563 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__25_0__);
    byte_4A5E563 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__25_0__,
      0LL);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v3, 0LL);
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
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 methodPtr_low; // x10
  ClassBoardSquare_o *v10; // x21
  UILabel_o *titleLabel; // x22
  System_String_o *itemListObj; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  System_String_c *v15; // x8
  System_String_o *v16; // x22
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v22; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  int v25; // w1
  const MethodInfo *v26; // x2
  System_String_c *v27; // x8
  System_String_o *v28; // x21
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v32; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *itemInfoWindowBtn; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  __int64 v40; // x0
  int32_t v41; // w1
  struct IClassBoardSquareModel_o *v42; // x20
  IClassBoardSquareModel_c *v43; // x8
  __int64 v44; // x9
  IClassBoardSquareModel_c **v45; // x10
  __int64 v46; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  UILabel_o *descriptionLabel; // x20
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v53; // x20
  __int64 v54; // [xsp+0h] [xbp-50h] BYREF
  int v55; // [xsp+8h] [xbp-48h]
  ClassBoardCondData_o v56; // 0:x0.12
  ClassBoardCondData_o v57; // 0:x1.12

  if ( (byte_4A5E55F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardDisableOpenDialog_EndOpen__);
    sub_1B885B0(&ClassBoardLock_TypeInfo);
    sub_1B885B0(&IClassBoardLockModel_TypeInfo);
    sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3489/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/);
    sub_1B885B0(&StringLiteral_3491/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/);
    sub_1B885B0(&StringLiteral_3488/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/);
    sub_1B885B0(&StringLiteral_3490/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/);
    byte_4A5E55F = 1;
  }
  v55 = 0;
  v54 = 0LL;
  this->fields.classBoardSquare = square;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    (int32_t)closeFunc,
    (int32_t)method);
  this->fields.closeFunc = closeFunc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)closeFunc, v7, v8);
  if ( square
    && (methodPtr_low = LOBYTE(ClassBoardLock_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(square->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (ClassBoardLock_c *)square->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardLock_TypeInfo )
      v10 = square;
    else
      v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !v10 )
  {
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3490/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0LL);
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
          0LL);
        SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
        if ( SquareModel_k__BackingField )
        {
          klass = SquareModel_k__BackingField->klass;
          v22 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
          {
            p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v22;
              p_offset += 2;
              if ( !v22 )
                goto LABEL_26;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
          }
          else
          {
LABEL_26:
            p_method = sub_1BDA590(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
          }
          v32 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                            SquareModel_k__BackingField,
                                                                                            *(_QWORD *)(p_method + 8));
          ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v32, 0LL);
          itemListObj = (System_String_o *)this->fields.itemListObj;
          if ( itemListObj )
          {
            gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)itemListObj, 0LL);
            GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemObjForEffect, 0LL);
            itemListObj = (System_String_o *)this->fields.itemInfoLabel;
            if ( itemListObj )
            {
              v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
              GameObjectExtensions__SetLocalPosition(v34, this->fields.itemLabelForEffect, 0LL);
              itemListObj = (System_String_o *)this->fields.descriptionLabel;
              if ( itemListObj )
              {
                v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
                GameObjectExtensions__SetLocalPosition(v35, this->fields.descriptionPosForEffect, 0LL);
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
    sub_1B8880C(itemListObj, v13);
  }
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3491/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, itemListObj, 0LL);
  itemListObj = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v10, v14);
  if ( !itemListObj )
    goto LABEL_59;
  v15 = itemListObj->klass;
  v16 = itemListObj;
  v17 = *(unsigned __int16 *)(&itemListObj->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&itemListObj->klass->_2.bitflags2 + 3) )
  {
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v18 - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_18;
    }
    v19 = (__int64)(&v15->vtable._0_Equals.method + 2 * *v18);
  }
  else
  {
LABEL_18:
    v19 = sub_1BDA590(itemListObj, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v54 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
  v55 = v25;
  *(_QWORD *)&v56.fields.Type = &v54;
  v56.fields.Num = 0;
  itemListObj = (System_String_o *)ClassBoardCondData__get_HasCond(v56, v26);
  if ( ((unsigned __int8)itemListObj & 1) != 0 )
  {
    itemListObj = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v10, v13);
    if ( !itemListObj )
      goto LABEL_59;
    v27 = itemListObj->klass;
    v28 = itemListObj;
    v29 = *(unsigned __int16 *)(&itemListObj->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&itemListObj->klass->_2.bitflags2 + 3) )
    {
      v30 = &v27->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)v30 - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_34;
      }
      v31 = (__int64)(&v27->vtable._0_Equals.method + 2 * *v30);
    }
    else
    {
LABEL_34:
      v31 = sub_1BDA590(itemListObj, IClassBoardLockModel_TypeInfo, 0LL);
    }
    v40 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
    v57.fields.Num = v41;
    *(_QWORD *)&v57.fields.Type = v40;
    ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v57, 0LL);
  }
  if ( !square )
    goto LABEL_59;
  v42 = square->fields._SquareModel_k__BackingField;
  if ( !v42 )
    goto LABEL_59;
  v43 = v42->klass;
  v44 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
  {
    v45 = (IClassBoardSquareModel_c **)&v43->_1.interfaceOffsets->offset;
    while ( *(v45 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v44;
      v45 += 2;
      if ( !v44 )
        goto LABEL_48;
    }
    v46 = (__int64)&v43->vtable[*(_DWORD *)v45 + 6].method;
  }
  else
  {
LABEL_48:
    v46 = sub_1BDA590(v42, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v47 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v46)(
                                                                                    v42,
                                                                                    *(_QWORD *)(v46 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v47, 0LL);
  itemListObj = (System_String_o *)this->fields.itemListObj;
  if ( !itemListObj )
    goto LABEL_59;
  v48 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v48, this->fields.itemObjForLock, 0LL);
  itemListObj = (System_String_o *)this->fields.itemInfoLabel;
  if ( !itemListObj )
    goto LABEL_59;
  v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v49, this->fields.itemLabelForLock, 0LL);
  itemListObj = (System_String_o *)this->fields.descriptionLabel;
  if ( !itemListObj )
    goto LABEL_59;
  v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v50, this->fields.descriptionPosForLock, 0LL);
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
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3489/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, 0LL);
  if ( !descriptionLabel )
    goto LABEL_59;
  UILabel__set_text(descriptionLabel, itemListObj, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3488/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_59;
  UILabel__set_text(closeBtnLabel, itemListObj, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v53 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v53, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v53, 0, 0LL);
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
  if ( (byte_4A5E564 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15642/*"Window/CloseBtn"*/);
    byte_4A5E564 = 1;
  }
  return (System_String_o *)StringLiteral_15642/*"Window/CloseBtn"*/;
}