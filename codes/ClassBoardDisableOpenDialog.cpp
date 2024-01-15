void __fastcall ClassBoardDisableOpenDialog___ctor(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.itemObjForEffect.fields.x = 0LL;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.z = 0LL;
  *(_OWORD *)&this->fields.itemLabelForEffect.fields.y = xmmword_31376D0;
  *(_OWORD *)&this->fields.descriptionPosForEffect.fields.z = xmmword_31376E0;
  *(_OWORD *)&this->fields.itemObjForLock.fields.x = xmmword_31376F0;
  *(_OWORD *)&this->fields.itemLabelForLock.fields.y = xmmword_3137700;
  *(_OWORD *)&this->fields.descriptionPosForLock.fields.z = xmmword_31376E0;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardDisableOpenDialog__Close(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  System_Action_o *v8; // x20

  if ( (byte_40FB92F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ClassBoardDisableOpenDialog_EndClose__, v3);
    byte_40FB92F = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v4, v5, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v8, 0LL);
}


void __fastcall ClassBoardDisableOpenDialog__EndClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40FB930 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB930 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
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

  if ( (byte_40FB92E & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardDisableOpenDialog_OnClickClose__, method);
    byte_40FB92E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardDisableOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardDisableOpenDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_ClassBoardDisableOpenDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCloseSeKind, 0LL);
    ClassBoardDisableOpenDialog__Close(this, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardDisableOpenDialog__Open(
        ClassBoardDisableOpenDialog_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *closeFunc,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x10
  ClassBoardSquare_o *v27; // x21
  UILabel_o *titleLabel; // x22
  System_String_o *v29; // x0
  const MethodInfo *v30; // x1
  IClassBoardLockModel_o *LockModel; // x0
  IClassBoardLockModel_c *klass; // x8
  IClassBoardLockModel_o *v33; // x22
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_String_o *v37; // x0
  struct IClassBoardSquareModel_o *v38; // x20
  IClassBoardSquareModel_c *v39; // x8
  unsigned __int64 v40; // x10
  IClassBoardSquareModel_c **v41; // x11
  __int64 v42; // x0
  int v43; // w1
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x1
  IClassBoardLockModel_o *v46; // x0
  IClassBoardLockModel_c *v47; // x8
  IClassBoardLockModel_o *v48; // x21
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_Component_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_Component_o *v57; // x0
  struct UILabel_o **p_descriptionLabel; // x20
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_GameObject_o *closeBtn; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  __int64 v64; // x0
  int32_t v65; // w1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *v67; // x8
  unsigned __int64 v68; // x10
  IClassBoardSquareModel_c **v69; // x11
  __int64 v70; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v71; // x0
  UnityEngine_GameObject_o *itemListObj; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *itemInfoLabel; // x0
  UnityEngine_GameObject_o *v75; // x0
  UnityEngine_Component_o *descriptionLabel; // x0
  UnityEngine_GameObject_o *v77; // x0
  UILabel_o *v78; // x20
  System_String_o *v79; // x0
  UILabel_o *closeBtnLabel; // x20
  System_String_o *v81; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  System_Action_o *v86; // x20
  __int64 v87; // [xsp+0h] [xbp-40h] BYREF
  int v88; // [xsp+8h] [xbp-38h]
  ClassBoardCondData_o v89; // 0:x0.12
  ClassBoardCondData_o v90; // 0:x1.12

  if ( (byte_40FB92D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, square);
    sub_B16FFC(&Method_ClassBoardDisableOpenDialog_EndOpen__, v11);
    sub_B16FFC(&ClassBoardLock_TypeInfo, v12);
    sub_B16FFC(&IClassBoardLockModel_TypeInfo, v13);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_2996/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, v16);
    sub_B16FFC(&StringLiteral_2998/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, v17);
    sub_B16FFC(&StringLiteral_2995/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, v18);
    sub_B16FFC(&StringLiteral_2997/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, v19);
    byte_40FB92D = 1;
  }
  v88 = 0;
  v87 = 0LL;
  this->fields.classBoardSquare = square;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.classBoardSquare,
    (System_Int32_array **)square,
    (System_String_array **)closeFunc,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.closeFunc = closeFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeFunc,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( square
    && (v26 = *(&ClassBoardLock_TypeInfo->_2.bitflags2 + 1), *(&square->klass->_2.bitflags2 + 1) >= (unsigned int)v26) )
  {
    if ( (ClassBoardLock_c *)square->klass->_2.typeHierarchy[v26 - 1] == ClassBoardLock_TypeInfo )
      v27 = square;
    else
      v27 = 0LL;
  }
  else
  {
    v27 = 0LL;
  }
  titleLabel = this->fields.titleLabel;
  if ( v27 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_2998/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, v29, 0LL);
      LockModel = ClassBoardLock__get_LockModel((ClassBoardLock_o *)v27, v30);
      if ( LockModel )
      {
        klass = LockModel->klass;
        v33 = LockModel;
        if ( *(_WORD *)&LockModel->klass->_2.bitflags1 )
        {
          v34 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
          {
            ++v34;
            p_offset += 4;
            if ( v34 >= *(unsigned __int16 *)&LockModel->klass->_2.bitflags1 )
              goto LABEL_19;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_19:
          p_method = sub_AAFEF8(LockModel, IClassBoardLockModel_TypeInfo, 0LL);
        }
        v87 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(v33, *(_QWORD *)(p_method + 8));
        v88 = v43;
        *(_QWORD *)&v89.fields.Type = &v87;
        v89.fields.Num = 0;
        if ( ClassBoardCondData__get_HasCond(v89, v44) )
        {
          v46 = ClassBoardLock__get_LockModel((ClassBoardLock_o *)v27, v45);
          if ( !v46 )
            goto LABEL_64;
          v47 = v46->klass;
          v48 = v46;
          if ( *(_WORD *)&v46->klass->_2.bitflags1 )
          {
            v49 = 0LL;
            v50 = &v47->_1.interfaceOffsets->offset;
            while ( *((IClassBoardLockModel_c **)v50 - 1) != IClassBoardLockModel_TypeInfo )
            {
              ++v49;
              v50 += 4;
              if ( v49 >= *(unsigned __int16 *)&v46->klass->_2.bitflags1 )
                goto LABEL_38;
            }
            v51 = (__int64)&v47->vtable[*v50].method;
          }
          else
          {
LABEL_38:
            v51 = sub_AAFEF8(v46, IClassBoardLockModel_TypeInfo, 0LL);
          }
          v64 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v51)(v48, *(_QWORD *)(v51 + 8));
          v90.fields.Num = v65;
          *(_QWORD *)&v90.fields.Type = v64;
          ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v90, 0LL);
        }
        if ( square )
        {
          SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
          if ( SquareModel_k__BackingField )
          {
            v67 = SquareModel_k__BackingField->klass;
            if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
            {
              v68 = 0LL;
              v69 = (IClassBoardSquareModel_c **)&v67->_1.interfaceOffsets->offset;
              while ( *(v69 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                ++v68;
                v69 += 2;
                if ( v68 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
                  goto LABEL_52;
              }
              v70 = (__int64)&v67->vtable[*(_DWORD *)v69 + 6].method;
            }
            else
            {
LABEL_52:
              v70 = sub_AAFEF8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
            }
            v71 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v70)(
                                                                                              SquareModel_k__BackingField,
                                                                                              *(_QWORD *)(v70 + 8));
            ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v71, 0LL);
            itemListObj = this->fields.itemListObj;
            if ( itemListObj )
            {
              gameObject = UnityEngine_GameObject__get_gameObject(itemListObj, 0LL);
              GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemObjForLock, 0LL);
              itemInfoLabel = (UnityEngine_Component_o *)this->fields.itemInfoLabel;
              if ( itemInfoLabel )
              {
                v75 = UnityEngine_Component__get_gameObject(itemInfoLabel, 0LL);
                GameObjectExtensions__SetLocalPosition(v75, this->fields.itemLabelForLock, 0LL);
                descriptionLabel = (UnityEngine_Component_o *)this->fields.descriptionLabel;
                if ( descriptionLabel )
                {
                  p_descriptionLabel = &this->fields.descriptionLabel;
                  v77 = UnityEngine_Component__get_gameObject(descriptionLabel, 0LL);
                  GameObjectExtensions__SetLocalPosition(v77, this->fields.descriptionPosForLock, 0LL);
                  closeBtn = this->fields.closeBtn;
                  x = this->fields.closeBtnPosForLock.fields.x;
                  y = this->fields.closeBtnPosForLock.fields.y;
                  z = this->fields.closeBtnPosForLock.fields.z;
                  goto LABEL_58;
                }
              }
            }
          }
        }
      }
    }
LABEL_64:
    sub_B170D4();
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_2997/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_64;
  UILabel__set_text(titleLabel, v37, 0LL);
  if ( !square )
    goto LABEL_64;
  ClassBoardBaseDialog__SetUpEffectDetail(
    (ClassBoardBaseDialog_o *)this,
    square->fields._SquareModel_k__BackingField,
    0.0,
    0.0,
    0LL);
  v38 = square->fields._SquareModel_k__BackingField;
  if ( !v38 )
    goto LABEL_64;
  v39 = v38->klass;
  if ( *(_WORD *)&v38->klass->_2.bitflags1 )
  {
    v40 = 0LL;
    v41 = (IClassBoardSquareModel_c **)&v39->_1.interfaceOffsets->offset;
    while ( *(v41 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v40;
      v41 += 2;
      if ( v40 >= *(unsigned __int16 *)&v38->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v42 = (__int64)&v39->vtable[*(_DWORD *)v41 + 6].method;
  }
  else
  {
LABEL_30:
    v42 = sub_AAFEF8(v38, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v52 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v42)(
                                                                                    v38,
                                                                                    *(_QWORD *)(v42 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v52, 0LL);
  v53 = this->fields.itemListObj;
  if ( !v53 )
    goto LABEL_64;
  v54 = UnityEngine_GameObject__get_gameObject(v53, 0LL);
  GameObjectExtensions__SetLocalPosition(v54, this->fields.itemObjForEffect, 0LL);
  v55 = (UnityEngine_Component_o *)this->fields.itemInfoLabel;
  if ( !v55 )
    goto LABEL_64;
  v56 = UnityEngine_Component__get_gameObject(v55, 0LL);
  GameObjectExtensions__SetLocalPosition(v56, this->fields.itemLabelForEffect, 0LL);
  v57 = (UnityEngine_Component_o *)this->fields.descriptionLabel;
  if ( !v57 )
    goto LABEL_64;
  p_descriptionLabel = &this->fields.descriptionLabel;
  v59 = UnityEngine_Component__get_gameObject(v57, 0LL);
  GameObjectExtensions__SetLocalPosition(v59, this->fields.descriptionPosForEffect, 0LL);
  closeBtn = this->fields.closeBtn;
  x = this->fields.closeBtnPosForEffect.fields.x;
  y = this->fields.closeBtnPosForEffect.fields.y;
  z = this->fields.closeBtnPosForEffect.fields.z;
LABEL_58:
  GameObjectExtensions__SetLocalPosition(closeBtn, *(UnityEngine_Vector3_o *)&x, 0LL);
  v78 = *p_descriptionLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v79 = LocalizationManager__Get((System_String_o *)StringLiteral_2996/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, 0LL);
  if ( !v78 )
    goto LABEL_64;
  UILabel__set_text(v78, v79, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  v81 = LocalizationManager__Get((System_String_o *)StringLiteral_2995/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_64;
  UILabel__set_text(closeBtnLabel, v81, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v86 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v82, v83, v84, v85);
  System_Action___ctor(v86, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v86, 0, 0LL);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, 0LL);
}


System_String_o *__fastcall ClassBoardDisableOpenDialog__get_closeBtnPath(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB931 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15415/*"Window/CloseBtn"*/, method);
    byte_40FB931 = 1;
  }
  return (System_String_o *)StringLiteral_15415/*"Window/CloseBtn"*/;
}