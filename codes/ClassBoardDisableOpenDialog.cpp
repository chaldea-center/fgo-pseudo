void __fastcall ClassBoardDisableOpenDialog___ctor(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.itemObjForEffect.fields.x = 0LL;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.z = 0LL;
  *(_OWORD *)&this->fields.itemLabelForEffect.fields.y = xmmword_BD2C10;
  *(_OWORD *)&this->fields.descriptionPosForEffect.fields.z = xmmword_BD24C0;
  *(_OWORD *)&this->fields.itemInfoWindowBtnPosForEffect.fields.x = xmmword_BD23D0;
  *(_OWORD *)&this->fields.itemObjForLock.fields.y = xmmword_BD2F10;
  *(_OWORD *)&this->fields.itemLabelForLock.fields.z = xmmword_BD2710;
  *(_OWORD *)&this->fields.closeBtnPosForLock.fields.x = xmmword_BD2C20;
  *(_QWORD *)&this->fields.itemInfoWindowBtnPosForLock.fields.y = 1113587712LL;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardDisableOpenDialog__Close(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  System_Action_o *v9; // x20

  if ( (byte_4B1968F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardDisableOpenDialog_EndClose__, v4, v5);
    byte_4B1968F = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
  v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v6, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v9, 0LL);
}


void __fastcall ClassBoardDisableOpenDialog__EndClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B19690 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19690 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B1968E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ClassBoardDisableOpenDialog_OnClickClose__, method, v2);
    byte_4B1968E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_ClassBoardDisableOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardDisableOpenDialog_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ClassBoardDisableOpenDialog_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, this->fields.onClickCloseSeKind, 0LL);
    ClassBoardDisableOpenDialog__Close(this, v6);
  }
}


void __fastcall ClassBoardDisableOpenDialog__OnClickItemInfoListWindow(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B19691 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__25_0__, v5, v6);
    byte_4B19691 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__25_0__,
      0LL);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v7, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  __int64 methodPtr_low; // x10
  ClassBoardSquare_o *v37; // x21
  UILabel_o *titleLabel; // x22
  System_String_o *itemListObj; // x0
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  System_String_c *v42; // x8
  System_String_o *v43; // x22
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v49; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  int v52; // w1
  const MethodInfo *v53; // x2
  System_String_c *v54; // x8
  System_String_o *v55; // x21
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v59; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_GameObject_o *itemInfoWindowBtn; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  __int64 v67; // x0
  int32_t v68; // w1
  struct IClassBoardSquareModel_o *v69; // x20
  IClassBoardSquareModel_c *v70; // x8
  __int64 v71; // x9
  IClassBoardSquareModel_c **v72; // x10
  __int64 v73; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v74; // x0
  UnityEngine_GameObject_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x0
  UnityEngine_GameObject_o *v77; // x0
  __int64 v78; // x1
  UILabel_o *descriptionLabel; // x20
  UILabel_o *closeBtnLabel; // x20
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  System_Action_o *v84; // x20
  __int64 v85; // [xsp+0h] [xbp-50h] BYREF
  int v86; // [xsp+8h] [xbp-48h]
  ClassBoardCondData_o v87; // 0:x0.12
  ClassBoardCondData_o v88; // 0:x1.12

  if ( (byte_4B1968D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, square, closeFunc);
    sub_1BCA7E0(&Method_ClassBoardDisableOpenDialog_EndOpen__, v11, v12);
    sub_1BCA7E0(&ClassBoardLock_TypeInfo, v13, v14);
    sub_1BCA7E0(&IClassBoardLockModel_TypeInfo, v15, v16);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_3515/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_3517/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3514/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3516/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, v27, v28);
    byte_4B1968D = 1;
  }
  v86 = 0;
  v85 = 0LL;
  this->fields.classBoardSquare = square;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.classBoardSquare,
    (int64_t)square,
    (int64_t)closeFunc,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.closeFunc = closeFunc;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeFunc, (int64_t)closeFunc, v29, v30, v31, v32, v33, v34);
  if ( square
    && (methodPtr_low = LOBYTE(ClassBoardLock_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(square->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (ClassBoardLock_c *)square->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardLock_TypeInfo )
      v37 = square;
    else
      v37 = 0LL;
  }
  else
  {
    v37 = 0LL;
  }
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
  if ( !v37 )
  {
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3516/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0LL);
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
          v49 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
          {
            p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v49;
              p_offset += 2;
              if ( !v49 )
                goto LABEL_26;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
          }
          else
          {
LABEL_26:
            p_method = sub_1C1C7C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
          }
          v59 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                            SquareModel_k__BackingField,
                                                                                            *(_QWORD *)(p_method + 8));
          ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v59, 0LL);
          itemListObj = (System_String_o *)this->fields.itemListObj;
          if ( itemListObj )
          {
            gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)itemListObj, 0LL);
            GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemObjForEffect, 0LL);
            itemListObj = (System_String_o *)this->fields.itemInfoLabel;
            if ( itemListObj )
            {
              v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
              GameObjectExtensions__SetLocalPosition(v61, this->fields.itemLabelForEffect, 0LL);
              itemListObj = (System_String_o *)this->fields.descriptionLabel;
              if ( itemListObj )
              {
                v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
                GameObjectExtensions__SetLocalPosition(v62, this->fields.descriptionPosForEffect, 0LL);
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
    sub_1BCAA3C(itemListObj, v40);
  }
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3517/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_59;
  UILabel__set_text(titleLabel, itemListObj, 0LL);
  itemListObj = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v37, v41);
  if ( !itemListObj )
    goto LABEL_59;
  v42 = itemListObj->klass;
  v43 = itemListObj;
  v44 = *(unsigned __int16 *)(&itemListObj->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&itemListObj->klass->_2.bitflags2 + 3) )
  {
    v45 = &v42->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v45 - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_18;
    }
    v46 = (__int64)(&v42->vtable._0_Equals.method + 2 * *v45);
  }
  else
  {
LABEL_18:
    v46 = sub_1C1C7C0(itemListObj, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v85 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v46)(v43, *(_QWORD *)(v46 + 8));
  v86 = v52;
  *(_QWORD *)&v87.fields.Type = &v85;
  v87.fields.Num = 0;
  itemListObj = (System_String_o *)ClassBoardCondData__get_HasCond(v87, v53);
  if ( ((unsigned __int8)itemListObj & 1) != 0 )
  {
    itemListObj = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v37, v40);
    if ( !itemListObj )
      goto LABEL_59;
    v54 = itemListObj->klass;
    v55 = itemListObj;
    v56 = *(unsigned __int16 *)(&itemListObj->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&itemListObj->klass->_2.bitflags2 + 3) )
    {
      v57 = &v54->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)v57 - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v56;
        v57 += 4;
        if ( !v56 )
          goto LABEL_34;
      }
      v58 = (__int64)(&v54->vtable._0_Equals.method + 2 * *v57);
    }
    else
    {
LABEL_34:
      v58 = sub_1C1C7C0(itemListObj, IClassBoardLockModel_TypeInfo, 0LL);
    }
    v67 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v58)(v55, *(_QWORD *)(v58 + 8));
    v88.fields.Num = v68;
    *(_QWORD *)&v88.fields.Type = v67;
    ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v88, 0LL);
  }
  if ( !square )
    goto LABEL_59;
  v69 = square->fields._SquareModel_k__BackingField;
  if ( !v69 )
    goto LABEL_59;
  v70 = v69->klass;
  v71 = *(unsigned __int16 *)(&v69->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v69->klass->_2.bitflags2 + 3) )
  {
    v72 = (IClassBoardSquareModel_c **)&v70->_1.interfaceOffsets->offset;
    while ( *(v72 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v71;
      v72 += 2;
      if ( !v71 )
        goto LABEL_48;
    }
    v73 = (__int64)&v70->vtable[*(_DWORD *)v72 + 6].method;
  }
  else
  {
LABEL_48:
    v73 = sub_1C1C7C0(v69, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v74 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v73)(
                                                                                    v69,
                                                                                    *(_QWORD *)(v73 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v74, 0LL);
  itemListObj = (System_String_o *)this->fields.itemListObj;
  if ( !itemListObj )
    goto LABEL_59;
  v75 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v75, this->fields.itemObjForLock, 0LL);
  itemListObj = (System_String_o *)this->fields.itemInfoLabel;
  if ( !itemListObj )
    goto LABEL_59;
  v76 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v76, this->fields.itemLabelForLock, 0LL);
  itemListObj = (System_String_o *)this->fields.descriptionLabel;
  if ( !itemListObj )
    goto LABEL_59;
  v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v77, this->fields.descriptionPosForLock, 0LL);
  GameObjectExtensions__SetLocalPosition(this->fields.closeBtn, this->fields.closeBtnPosForLock, 0LL);
  itemInfoWindowBtn = this->fields.itemInfoWindowBtn;
  x = this->fields.itemInfoWindowBtnPosForLock.fields.x;
  y = this->fields.itemInfoWindowBtnPosForLock.fields.y;
  z = this->fields.itemInfoWindowBtnPosForLock.fields.z;
LABEL_54:
  GameObjectExtensions__SetLocalPosition(itemInfoWindowBtn, *(UnityEngine_Vector3_o *)&x, 0LL);
  descriptionLabel = this->fields.descriptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v78);
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3515/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, 0LL);
  if ( !descriptionLabel )
    goto LABEL_59;
  UILabel__set_text(descriptionLabel, itemListObj, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3514/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_59;
  UILabel__set_text(closeBtnLabel, itemListObj, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v84 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v81, v82, v83);
  System_Action___ctor(v84, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v84, 0, 0LL);
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
  __int64 v2; // x2

  if ( (byte_4B19692 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15809/*"Window/CloseBtn"*/, method, v2);
    byte_4B19692 = 1;
  }
  return (System_String_o *)StringLiteral_15809/*"Window/CloseBtn"*/;
}