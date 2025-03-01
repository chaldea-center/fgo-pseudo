void __fastcall ClassBoardDisableOpenDialog___ctor(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.itemObjForEffect.fields.x = 0LL;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.z = 0LL;
  *(_OWORD *)&this->fields.itemLabelForEffect.fields.y = xmmword_C065D0;
  *(_OWORD *)&this->fields.descriptionPosForEffect.fields.z = xmmword_C05ED0;
  *(_OWORD *)&this->fields.itemInfoWindowBtnPosForEffect.fields.x = xmmword_C05DE0;
  *(_OWORD *)&this->fields.itemObjForLock.fields.y = xmmword_C068F0;
  *(_OWORD *)&this->fields.itemLabelForLock.fields.z = xmmword_C06120;
  *(_OWORD *)&this->fields.closeBtnPosForLock.fields.x = xmmword_C065E0;
  *(_QWORD *)&this->fields.itemInfoWindowBtnPosForLock.fields.y = 1113587712LL;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, method);
}


void __fastcall ClassBoardDisableOpenDialog__Close(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4C00D83 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_ClassBoardDisableOpenDialog_EndClose__, v3);
    byte_4C00D83 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, method);
  v4 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v4, v5);
}


void __fastcall ClassBoardDisableOpenDialog__EndClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C00D84 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C00D84 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70989720(gameObject, 0LL);
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

  if ( (byte_4C00D82 & 1) == 0 )
  {
    sub_1C2E12C(&Method_ClassBoardDisableOpenDialog_OnClickClose__, method);
    byte_4C00D82 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardDisableOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardDisableOpenDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_ClassBoardDisableOpenDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
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

  if ( (byte_4C00D85 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__25_0__, v3);
    byte_4C00D85 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 methodPtr_low; // x10
  ClassBoardSquare_o *v27; // x21
  UILabel_o *titleLabel; // x22
  System_String_o *itemListObj; // x0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  System_String_c *v32; // x8
  System_String_o *v33; // x22
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  const MethodInfo *v37; // x2
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v40; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  int v43; // w1
  const MethodInfo *v44; // x2
  System_String_c *v45; // x8
  System_String_o *v46; // x21
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v50; // x0
  const MethodInfo *v51; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *itemInfoWindowBtn; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  const MethodInfo *v59; // x0
  int32_t v60; // w1
  struct IClassBoardSquareModel_o *v61; // x20
  IClassBoardSquareModel_c *v62; // x8
  __int64 v63; // x9
  IClassBoardSquareModel_c **v64; // x10
  __int64 v65; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v66; // x0
  const MethodInfo *v67; // x2
  UnityEngine_GameObject_o *v68; // x0
  UnityEngine_GameObject_o *v69; // x0
  UnityEngine_GameObject_o *v70; // x0
  UILabel_o *descriptionLabel; // x20
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v73; // x20
  const MethodInfo *v74; // x1
  __int64 v75; // [xsp+0h] [xbp-50h] BYREF
  int v76; // [xsp+8h] [xbp-48h]
  ClassBoardCondData_o v77; // 0:x0.12
  ClassBoardCondData_o v78; // 0:x1.12

  if ( (byte_4C00D81 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, square);
    sub_1C2E12C(&Method_ClassBoardDisableOpenDialog_EndOpen__, v11);
    sub_1C2E12C(&ClassBoardLock_TypeInfo, v12);
    sub_1C2E12C(&IClassBoardLockModel_TypeInfo, v13);
    sub_1C2E12C(&IClassBoardSquareModel_TypeInfo, v14);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v15);
    sub_1C2E12C(&StringLiteral_3527/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, v16);
    sub_1C2E12C(&StringLiteral_3529/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, v17);
    sub_1C2E12C(&StringLiteral_3526/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, v18);
    sub_1C2E12C(&StringLiteral_3528/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, v19);
    byte_4C00D81 = 1;
  }
  v76 = 0;
  v75 = 0LL;
  this->fields.classBoardSquare = square;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.classBoardSquare,
    (int64_t)square,
    (int64_t)closeFunc,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.closeFunc = closeFunc;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.closeFunc, (int64_t)closeFunc, v20, v21, v22, v23, v24, v25);
  if ( square
    && (methodPtr_low = LOBYTE(ClassBoardLock_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(square->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (ClassBoardLock_c *)square->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardLock_TypeInfo )
      v27 = square;
    else
      v27 = 0LL;
  }
  else
  {
    v27 = 0LL;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !v27 )
  {
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3528/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0LL);
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
          v37);
        SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
        if ( SquareModel_k__BackingField )
        {
          klass = SquareModel_k__BackingField->klass;
          v40 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
          {
            p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v40;
              p_offset += 2;
              if ( !v40 )
                goto LABEL_26;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
          }
          else
          {
LABEL_26:
            p_method = sub_1C8010C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
          }
          v50 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                            SquareModel_k__BackingField,
                                                                                            *(_QWORD *)(p_method + 8));
          ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v50, v51);
          itemListObj = (System_String_o *)this->fields.itemListObj;
          if ( itemListObj )
          {
            gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)itemListObj, 0LL);
            GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemObjForEffect, 0LL);
            itemListObj = (System_String_o *)this->fields.itemInfoLabel;
            if ( itemListObj )
            {
              v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
              GameObjectExtensions__SetLocalPosition(v53, this->fields.itemLabelForEffect, 0LL);
              itemListObj = (System_String_o *)this->fields.descriptionLabel;
              if ( itemListObj )
              {
                v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
                GameObjectExtensions__SetLocalPosition(v54, this->fields.descriptionPosForEffect, 0LL);
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
    sub_1C2E388(itemListObj, v30);
  }
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3529/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, itemListObj, 0LL);
  itemListObj = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v27, v31);
  if ( !itemListObj )
    goto LABEL_59;
  v32 = itemListObj->klass;
  v33 = itemListObj;
  v34 = *(unsigned __int16 *)(&itemListObj->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&itemListObj->klass->_2.bitflags2 + 3) )
  {
    v35 = &v32->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v35 - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_18;
    }
    v36 = (__int64)(&v32->vtable._0_Equals.method + 2 * *v35);
  }
  else
  {
LABEL_18:
    v36 = sub_1C8010C(itemListObj, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v75 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
  v76 = v43;
  *(_QWORD *)&v77.fields.Type = &v75;
  v77.fields.Num = 0;
  itemListObj = (System_String_o *)ClassBoardCondData__get_HasCond(v77, v44);
  if ( ((unsigned __int8)itemListObj & 1) != 0 )
  {
    itemListObj = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v27, v30);
    if ( !itemListObj )
      goto LABEL_59;
    v45 = itemListObj->klass;
    v46 = itemListObj;
    v47 = *(unsigned __int16 *)(&itemListObj->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&itemListObj->klass->_2.bitflags2 + 3) )
    {
      v48 = &v45->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)v48 - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_34;
      }
      v49 = (__int64)(&v45->vtable._0_Equals.method + 2 * *v48);
    }
    else
    {
LABEL_34:
      v49 = sub_1C8010C(itemListObj, IClassBoardLockModel_TypeInfo, 0LL);
    }
    v59 = (const MethodInfo *)(*(__int64 (__fastcall **)(System_String_o *, _QWORD))v49)(v46, *(_QWORD *)(v49 + 8));
    v78.fields.Num = v60;
    *(_QWORD *)&v78.fields.Type = v59;
    ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v78, v59);
  }
  if ( !square )
    goto LABEL_59;
  v61 = square->fields._SquareModel_k__BackingField;
  if ( !v61 )
    goto LABEL_59;
  v62 = v61->klass;
  v63 = *(unsigned __int16 *)(&v61->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v61->klass->_2.bitflags2 + 3) )
  {
    v64 = (IClassBoardSquareModel_c **)&v62->_1.interfaceOffsets->offset;
    while ( *(v64 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v63;
      v64 += 2;
      if ( !v63 )
        goto LABEL_48;
    }
    v65 = (__int64)&v62->vtable[*(_DWORD *)v64 + 6].method;
  }
  else
  {
LABEL_48:
    v65 = sub_1C8010C(v61, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v66 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v65)(
                                                                                    v61,
                                                                                    *(_QWORD *)(v65 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v66, v67);
  itemListObj = (System_String_o *)this->fields.itemListObj;
  if ( !itemListObj )
    goto LABEL_59;
  v68 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v68, this->fields.itemObjForLock, 0LL);
  itemListObj = (System_String_o *)this->fields.itemInfoLabel;
  if ( !itemListObj )
    goto LABEL_59;
  v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v69, this->fields.itemLabelForLock, 0LL);
  itemListObj = (System_String_o *)this->fields.descriptionLabel;
  if ( !itemListObj )
    goto LABEL_59;
  v70 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v70, this->fields.descriptionPosForLock, 0LL);
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
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3527/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, 0LL);
  if ( !descriptionLabel )
    goto LABEL_59;
  UILabel__set_text(descriptionLabel, itemListObj, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3526/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_59;
  UILabel__set_text(closeBtnLabel, itemListObj, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v73 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v73, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v73, 0, 0LL);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, v74);
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
  if ( (byte_4C00D86 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_15923/*"Window/CloseBtn"*/, method);
    byte_4C00D86 = 1;
  }
  return (System_String_o *)StringLiteral_15923/*"Window/CloseBtn"*/;
}