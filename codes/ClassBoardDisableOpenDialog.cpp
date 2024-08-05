void __fastcall ClassBoardDisableOpenDialog___ctor(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.itemObjForEffect.fields.x = 0LL;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.z = 0LL;
  *(_OWORD *)&this->fields.itemLabelForEffect.fields.y = xmmword_BA35C0;
  *(_OWORD *)&this->fields.descriptionPosForEffect.fields.z = xmmword_BA2E60;
  *(_OWORD *)&this->fields.itemInfoWindowBtnPosForEffect.fields.x = xmmword_BA2D60;
  *(_OWORD *)&this->fields.itemObjForLock.fields.y = xmmword_BA38D0;
  *(_OWORD *)&this->fields.itemLabelForLock.fields.z = xmmword_BA30A0;
  *(_OWORD *)&this->fields.closeBtnPosForLock.fields.x = xmmword_BA35D0;
  *(_QWORD *)&this->fields.itemInfoWindowBtnPosForLock.fields.y = 1113587712LL;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, method);
}


void __fastcall ClassBoardDisableOpenDialog__Close(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4A017A1 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_ClassBoardDisableOpenDialog_EndClose__, v3);
    byte_4A017A1 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, method);
  v4 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v4, v5);
}


void __fastcall ClassBoardDisableOpenDialog__EndClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A017A2 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_4A017A2 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69135916(gameObject, 0LL);
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

  if ( (byte_4A017A0 & 1) == 0 )
  {
    sub_1B64870(&Method_ClassBoardDisableOpenDialog_OnClickClose__, method);
    byte_4A017A0 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardDisableOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardDisableOpenDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_ClassBoardDisableOpenDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
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
  const MethodInfo *v5; // x2

  if ( (byte_4A017A3 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__25_0__, v3);
    byte_4A017A3 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
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
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  ClassBoardSquare_o *v19; // x21
  UILabel_o *titleLabel; // x22
  System_String_o *itemListObj; // x0
  __int64 v22; // x1
  System_String_c *v23; // x8
  System_String_o *v24; // x22
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  const MethodInfo *v28; // x2
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v31; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  int v34; // w1
  const MethodInfo *v35; // x2
  System_String_c *v36; // x8
  System_String_o *v37; // x21
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v41; // x0
  const MethodInfo *v42; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *itemInfoWindowBtn; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  const MethodInfo *v50; // x0
  int32_t v51; // w1
  struct IClassBoardSquareModel_o *v52; // x20
  IClassBoardSquareModel_c *v53; // x8
  __int64 v54; // x9
  IClassBoardSquareModel_c **v55; // x10
  __int64 v56; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v57; // x0
  const MethodInfo *v58; // x2
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_GameObject_o *v60; // x0
  UnityEngine_GameObject_o *v61; // x0
  UILabel_o *descriptionLabel; // x20
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v64; // x20
  const MethodInfo *v65; // x1
  __int64 v66; // [xsp+0h] [xbp-50h] BYREF
  int v67; // [xsp+8h] [xbp-48h]
  ClassBoardCondData_o v68; // 0:x0.12
  ClassBoardCondData_o v69; // 0:x1.12

  if ( (byte_4A0179F & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, square);
    sub_1B64870(&Method_ClassBoardDisableOpenDialog_EndOpen__, v7);
    sub_1B64870(&ClassBoardLock_TypeInfo, v8);
    sub_1B64870(&IClassBoardLockModel_TypeInfo, v9);
    sub_1B64870(&IClassBoardSquareModel_TypeInfo, v10);
    sub_1B64870(&LocalizationManager_TypeInfo, v11);
    sub_1B64870(&StringLiteral_3466/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, v12);
    sub_1B64870(&StringLiteral_3468/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, v13);
    sub_1B64870(&StringLiteral_3465/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, v14);
    sub_1B64870(&StringLiteral_3467/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, v15);
    byte_4A0179F = 1;
  }
  v67 = 0;
  v66 = 0LL;
  this->fields.classBoardSquare = square;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    (int32_t)closeFunc,
    (int32_t)method);
  this->fields.closeFunc = closeFunc;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)closeFunc, v16, v17);
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
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3467/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0LL);
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
          v28);
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
            p_method = sub_1BB6850(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
          }
          v41 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                            SquareModel_k__BackingField,
                                                                                            *(_QWORD *)(p_method + 8));
          ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v41, v42);
          itemListObj = (System_String_o *)this->fields.itemListObj;
          if ( itemListObj )
          {
            gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)itemListObj, 0LL);
            GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemObjForEffect, 0LL);
            itemListObj = (System_String_o *)this->fields.itemInfoLabel;
            if ( itemListObj )
            {
              v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
              GameObjectExtensions__SetLocalPosition(v44, this->fields.itemLabelForEffect, 0LL);
              itemListObj = (System_String_o *)this->fields.descriptionLabel;
              if ( itemListObj )
              {
                v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
                GameObjectExtensions__SetLocalPosition(v45, this->fields.descriptionPosForEffect, 0LL);
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
    sub_1B64ACC(itemListObj, v22);
  }
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3468/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, itemListObj, 0LL);
  itemListObj = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v19, 0LL);
  if ( !itemListObj )
    goto LABEL_59;
  v23 = itemListObj->klass;
  v24 = itemListObj;
  v25 = *(unsigned __int16 *)(&itemListObj->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&itemListObj->klass->_2.bitflags2 + 3) )
  {
    v26 = &v23->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v26 - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_18;
    }
    v27 = (__int64)(&v23->vtable._0_Equals.method + 2 * *v26);
  }
  else
  {
LABEL_18:
    v27 = sub_1BB6850(itemListObj, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v66 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  v67 = v34;
  *(_QWORD *)&v68.fields.Type = &v66;
  v68.fields.Num = 0;
  itemListObj = (System_String_o *)ClassBoardCondData__get_HasCond(v68, v35);
  if ( ((unsigned __int8)itemListObj & 1) != 0 )
  {
    itemListObj = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v19, 0LL);
    if ( !itemListObj )
      goto LABEL_59;
    v36 = itemListObj->klass;
    v37 = itemListObj;
    v38 = *(unsigned __int16 *)(&itemListObj->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&itemListObj->klass->_2.bitflags2 + 3) )
    {
      v39 = &v36->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)v39 - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_34;
      }
      v40 = (__int64)(&v36->vtable._0_Equals.method + 2 * *v39);
    }
    else
    {
LABEL_34:
      v40 = sub_1BB6850(itemListObj, IClassBoardLockModel_TypeInfo, 0LL);
    }
    v50 = (const MethodInfo *)(*(__int64 (__fastcall **)(System_String_o *, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8));
    v69.fields.Num = v51;
    *(_QWORD *)&v69.fields.Type = v50;
    ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v69, v50);
  }
  if ( !square )
    goto LABEL_59;
  v52 = square->fields._SquareModel_k__BackingField;
  if ( !v52 )
    goto LABEL_59;
  v53 = v52->klass;
  v54 = *(unsigned __int16 *)(&v52->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v52->klass->_2.bitflags2 + 3) )
  {
    v55 = (IClassBoardSquareModel_c **)&v53->_1.interfaceOffsets->offset;
    while ( *(v55 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v54;
      v55 += 2;
      if ( !v54 )
        goto LABEL_48;
    }
    v56 = (__int64)&v53->vtable[*(_DWORD *)v55 + 6].method;
  }
  else
  {
LABEL_48:
    v56 = sub_1BB6850(v52, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v57 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v56)(
                                                                                    v52,
                                                                                    *(_QWORD *)(v56 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v57, v58);
  itemListObj = (System_String_o *)this->fields.itemListObj;
  if ( !itemListObj )
    goto LABEL_59;
  v59 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v59, this->fields.itemObjForLock, 0LL);
  itemListObj = (System_String_o *)this->fields.itemInfoLabel;
  if ( !itemListObj )
    goto LABEL_59;
  v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v60, this->fields.itemLabelForLock, 0LL);
  itemListObj = (System_String_o *)this->fields.descriptionLabel;
  if ( !itemListObj )
    goto LABEL_59;
  v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v61, this->fields.descriptionPosForLock, 0LL);
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
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3466/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, 0LL);
  if ( !descriptionLabel )
    goto LABEL_59;
  UILabel__set_text(descriptionLabel, itemListObj, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3465/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_59;
  UILabel__set_text(closeBtnLabel, itemListObj, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v64 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v64, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v64, 0, 0LL);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, v65);
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
  if ( (byte_4A017A4 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_15576/*"Window/CloseBtn"*/, method);
    byte_4A017A4 = 1;
  }
  return (System_String_o *)StringLiteral_15576/*"Window/CloseBtn"*/;
}