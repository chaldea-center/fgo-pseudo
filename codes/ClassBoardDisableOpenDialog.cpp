void __fastcall ClassBoardDisableOpenDialog___ctor(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.itemObjForEffect.fields.x = 0LL;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.z = 0LL;
  *(_OWORD *)&this->fields.itemLabelForEffect.fields.y = xmmword_BE2180;
  *(_OWORD *)&this->fields.descriptionPosForEffect.fields.z = xmmword_BE1A40;
  *(_OWORD *)&this->fields.itemInfoWindowBtnPosForEffect.fields.x = xmmword_BE1950;
  *(_OWORD *)&this->fields.itemObjForLock.fields.y = xmmword_BE24A0;
  *(_OWORD *)&this->fields.itemLabelForLock.fields.z = xmmword_BE1CA0;
  *(_OWORD *)&this->fields.closeBtnPosForLock.fields.x = xmmword_BE2190;
  *(_QWORD *)&this->fields.itemInfoWindowBtnPosForLock.fields.y = 1113587712LL;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardDisableOpenDialog__Close(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B6A10C & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_ClassBoardDisableOpenDialog_EndClose__, v3);
    byte_4B6A10C = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
  v4 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v4, 0LL);
}


void __fastcall ClassBoardDisableOpenDialog__EndClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B6A10D & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6A10D = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
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

  if ( (byte_4B6A10B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ClassBoardDisableOpenDialog_OnClickClose__, method);
    byte_4B6A10B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardDisableOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardDisableOpenDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_ClassBoardDisableOpenDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
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

  if ( (byte_4B6A10E & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__25_0__, v3);
    byte_4B6A10E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ClassBoardDisableOpenDialog__OnClickItemInfoListWindow_b__25_0__,
      0LL);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v4, 0LL);
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
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v39; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  int v42; // w1
  const MethodInfo *v43; // x2
  System_String_c *v44; // x8
  System_String_o *v45; // x21
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v49; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *itemInfoWindowBtn; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  __int64 v57; // x0
  int32_t v58; // w1
  struct IClassBoardSquareModel_o *v59; // x20
  IClassBoardSquareModel_c *v60; // x8
  __int64 v61; // x9
  IClassBoardSquareModel_c **v62; // x10
  __int64 v63; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  UnityEngine_GameObject_o *v67; // x0
  UILabel_o *descriptionLabel; // x20
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v70; // x20
  __int64 v71; // [xsp+0h] [xbp-50h] BYREF
  int v72; // [xsp+8h] [xbp-48h]
  ClassBoardCondData_o v73; // 0:x0.12
  ClassBoardCondData_o v74; // 0:x1.12

  if ( (byte_4B6A10A & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, square);
    sub_1BE4ACC(&Method_ClassBoardDisableOpenDialog_EndOpen__, v11);
    sub_1BE4ACC(&ClassBoardLock_TypeInfo, v12);
    sub_1BE4ACC(&IClassBoardLockModel_TypeInfo, v13);
    sub_1BE4ACC(&IClassBoardSquareModel_TypeInfo, v14);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v15);
    sub_1BE4ACC(&StringLiteral_3524/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, v16);
    sub_1BE4ACC(&StringLiteral_3526/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, v17);
    sub_1BE4ACC(&StringLiteral_3523/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, v18);
    sub_1BE4ACC(&StringLiteral_3525/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, v19);
    byte_4B6A10A = 1;
  }
  v72 = 0;
  v71 = 0LL;
  this->fields.classBoardSquare = square;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.classBoardSquare,
    (int64_t)square,
    (int64_t)closeFunc,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.closeFunc = closeFunc;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.closeFunc, (int64_t)closeFunc, v20, v21, v22, v23, v24, v25);
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
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3525/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0LL);
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
          v39 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
          {
            p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
            {
              --v39;
              p_offset += 2;
              if ( !v39 )
                goto LABEL_26;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
          }
          else
          {
LABEL_26:
            p_method = sub_1C36AAC(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
          }
          v49 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                            SquareModel_k__BackingField,
                                                                                            *(_QWORD *)(p_method + 8));
          ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v49, 0LL);
          itemListObj = (System_String_o *)this->fields.itemListObj;
          if ( itemListObj )
          {
            gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)itemListObj, 0LL);
            GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemObjForEffect, 0LL);
            itemListObj = (System_String_o *)this->fields.itemInfoLabel;
            if ( itemListObj )
            {
              v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
              GameObjectExtensions__SetLocalPosition(v51, this->fields.itemLabelForEffect, 0LL);
              itemListObj = (System_String_o *)this->fields.descriptionLabel;
              if ( itemListObj )
              {
                v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
                GameObjectExtensions__SetLocalPosition(v52, this->fields.descriptionPosForEffect, 0LL);
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
    sub_1BE4D28(itemListObj, v30);
  }
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3526/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, 0LL);
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
    v36 = sub_1C36AAC(itemListObj, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v71 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
  v72 = v42;
  *(_QWORD *)&v73.fields.Type = &v71;
  v73.fields.Num = 0;
  itemListObj = (System_String_o *)ClassBoardCondData__get_HasCond(v73, v43);
  if ( ((unsigned __int8)itemListObj & 1) != 0 )
  {
    itemListObj = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v27, v30);
    if ( !itemListObj )
      goto LABEL_59;
    v44 = itemListObj->klass;
    v45 = itemListObj;
    v46 = *(unsigned __int16 *)(&itemListObj->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&itemListObj->klass->_2.bitflags2 + 3) )
    {
      v47 = &v44->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)v47 - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_34;
      }
      v48 = (__int64)(&v44->vtable._0_Equals.method + 2 * *v47);
    }
    else
    {
LABEL_34:
      v48 = sub_1C36AAC(itemListObj, IClassBoardLockModel_TypeInfo, 0LL);
    }
    v57 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v48)(v45, *(_QWORD *)(v48 + 8));
    v74.fields.Num = v58;
    *(_QWORD *)&v74.fields.Type = v57;
    ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v74, 0LL);
  }
  if ( !square )
    goto LABEL_59;
  v59 = square->fields._SquareModel_k__BackingField;
  if ( !v59 )
    goto LABEL_59;
  v60 = v59->klass;
  v61 = *(unsigned __int16 *)(&v59->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v59->klass->_2.bitflags2 + 3) )
  {
    v62 = (IClassBoardSquareModel_c **)&v60->_1.interfaceOffsets->offset;
    while ( *(v62 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v61;
      v62 += 2;
      if ( !v61 )
        goto LABEL_48;
    }
    v63 = (__int64)&v60->vtable[*(_DWORD *)v62 + 6].method;
  }
  else
  {
LABEL_48:
    v63 = sub_1C36AAC(v59, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v64 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v63)(
                                                                                    v59,
                                                                                    *(_QWORD *)(v63 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v64, 0LL);
  itemListObj = (System_String_o *)this->fields.itemListObj;
  if ( !itemListObj )
    goto LABEL_59;
  v65 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v65, this->fields.itemObjForLock, 0LL);
  itemListObj = (System_String_o *)this->fields.itemInfoLabel;
  if ( !itemListObj )
    goto LABEL_59;
  v66 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v66, this->fields.itemLabelForLock, 0LL);
  itemListObj = (System_String_o *)this->fields.descriptionLabel;
  if ( !itemListObj )
    goto LABEL_59;
  v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemListObj, 0LL);
  GameObjectExtensions__SetLocalPosition(v67, this->fields.descriptionPosForLock, 0LL);
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
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3524/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, 0LL);
  if ( !descriptionLabel )
    goto LABEL_59;
  UILabel__set_text(descriptionLabel, itemListObj, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3523/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_59;
  UILabel__set_text(closeBtnLabel, itemListObj, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v70 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v70, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v70, 0, 0LL);
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
  if ( (byte_4B6A10F & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_15849/*"Window/CloseBtn"*/, method);
    byte_4B6A10F = 1;
  }
  return (System_String_o *)StringLiteral_15849/*"Window/CloseBtn"*/;
}