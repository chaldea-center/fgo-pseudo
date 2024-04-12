void __fastcall ClassBoardDisableOpenDialog___ctor(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.itemObjForEffect.fields.x = 0LL;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.z = 0LL;
  *(_OWORD *)&this->fields.itemLabelForEffect.fields.y = xmmword_328E100;
  *(_OWORD *)&this->fields.descriptionPosForEffect.fields.z = xmmword_328E110;
  *(_OWORD *)&this->fields.itemObjForLock.fields.x = xmmword_328E120;
  *(_OWORD *)&this->fields.itemLabelForLock.fields.y = xmmword_328E130;
  *(_OWORD *)&this->fields.descriptionPosForLock.fields.z = xmmword_328E110;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, method);
}


void __fastcall ClassBoardDisableOpenDialog__Close(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_42B382F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardDisableOpenDialog_EndClose__);
    byte_42B382F = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, method);
  v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v3, v4);
}


void __fastcall ClassBoardDisableOpenDialog__EndClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42B3830 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3830 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
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

  if ( (byte_42B382E & 1) == 0 )
  {
    sub_B52984(&Method_ClassBoardDisableOpenDialog_OnClickClose__);
    byte_42B382E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardDisableOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardDisableOpenDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_ClassBoardDisableOpenDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x10
  ClassBoardSquare_o *v18; // x21
  UILabel_o *titleLabel; // x22
  unsigned __int64 LockModel; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  __int64 v23; // x3
  System_String_c *v24; // x8
  unsigned __int64 v25; // x22
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 v28; // x0
  const MethodInfo *v29; // x2
  __int64 v30; // x3
  struct IClassBoardSquareModel_o *v31; // x20
  IClassBoardSquareModel_c *v32; // x8
  unsigned __int64 v33; // x10
  IClassBoardSquareModel_c **v34; // x11
  __int64 v35; // x0
  __int64 v36; // x3
  __int64 v37; // x3
  System_String_c *v38; // x8
  unsigned __int64 v39; // x21
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v43; // x0
  const MethodInfo *v44; // x2
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  struct UILabel_o **p_descriptionLabel; // x20
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_GameObject_o *closeBtn; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  const MethodInfo *v53; // x0
  int32_t v54; // w1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v57; // x10
  IClassBoardSquareModel_c **v58; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v60; // x0
  const MethodInfo *v61; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  UILabel_o *v65; // x20
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v67; // x20
  const MethodInfo *v68; // x1
  ClassBoardCondData_o v69; // 0:x1.12

  if ( (byte_42B382D & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardDisableOpenDialog_EndOpen__);
    sub_B52984(&ClassBoardLock_TypeInfo);
    sub_B52984(&IClassBoardLockModel_TypeInfo);
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3037/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/);
    sub_B52984(&StringLiteral_3039/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/);
    sub_B52984(&StringLiteral_3036/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/);
    sub_B52984(&StringLiteral_3038/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/);
    byte_42B382D = 1;
  }
  this->fields.classBoardSquare = square;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.classBoardSquare,
    (System_Int32_array **)square,
    (System_String_array **)closeFunc,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.closeFunc = closeFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeFunc,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( square
    && (v17 = *(&ClassBoardLock_TypeInfo->_2.bitflags2 + 1), *(&square->klass->_2.bitflags2 + 1) >= (unsigned int)v17) )
  {
    if ( (ClassBoardLock_c *)square->klass->_2.typeHierarchy[v17 - 1] == ClassBoardLock_TypeInfo )
      v18 = square;
    else
      v18 = 0LL;
  }
  else
  {
    v18 = 0LL;
  }
  titleLabel = this->fields.titleLabel;
  if ( v18 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3039/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)LockModel, 0LL);
      LockModel = (unsigned __int64)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v18, v22);
      if ( LockModel )
      {
        v24 = *(System_String_c **)LockModel;
        v25 = LockModel;
        if ( *(_WORD *)(*(_QWORD *)LockModel + 298LL) )
        {
          v26 = 0LL;
          p_offset = &v24->_1.interfaceOffsets->offset;
          while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
          {
            ++v26;
            p_offset += 4;
            if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)LockModel + 298LL) )
              goto LABEL_19;
          }
          v28 = (__int64)(&v24->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_19:
          v28 = sub_AEB880(LockModel, IClassBoardLockModel_TypeInfo, 0LL, v23);
        }
        LockModel = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
        if ( HIDWORD(LockModel) )
        {
          LockModel = (unsigned __int64)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v18, v21);
          if ( !LockModel )
            goto LABEL_64;
          v38 = *(System_String_c **)LockModel;
          v39 = LockModel;
          if ( *(_WORD *)(*(_QWORD *)LockModel + 298LL) )
          {
            v40 = 0LL;
            v41 = &v38->_1.interfaceOffsets->offset;
            while ( *((IClassBoardLockModel_c **)v41 - 1) != IClassBoardLockModel_TypeInfo )
            {
              ++v40;
              v41 += 4;
              if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)LockModel + 298LL) )
                goto LABEL_38;
            }
            v42 = (__int64)(&v38->vtable._0_Equals.method + 2 * *v41);
          }
          else
          {
LABEL_38:
            v42 = sub_AEB880(LockModel, IClassBoardLockModel_TypeInfo, 0LL, v37);
          }
          v53 = (const MethodInfo *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v42)(v39, *(_QWORD *)(v42 + 8));
          v69.fields.Num = v54;
          *(_QWORD *)&v69.fields.Type = v53;
          ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v69, v53);
        }
        if ( square )
        {
          SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
          if ( SquareModel_k__BackingField )
          {
            klass = SquareModel_k__BackingField->klass;
            if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
            {
              v57 = 0LL;
              v58 = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(v58 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                ++v57;
                v58 += 2;
                if ( v57 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
                  goto LABEL_52;
              }
              p_method = (__int64)&klass->vtable[*(_DWORD *)v58 + 6].method;
            }
            else
            {
LABEL_52:
              p_method = sub_AEB880(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL, v36);
            }
            v60 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                              SquareModel_k__BackingField,
                                                                                              *(_QWORD *)(p_method + 8));
            ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v60, v61);
            LockModel = (unsigned __int64)this->fields.itemListObj;
            if ( LockModel )
            {
              gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0LL);
              GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemObjForLock, 0LL);
              LockModel = (unsigned __int64)this->fields.itemInfoLabel;
              if ( LockModel )
              {
                v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
                GameObjectExtensions__SetLocalPosition(v63, this->fields.itemLabelForLock, 0LL);
                LockModel = (unsigned __int64)this->fields.descriptionLabel;
                if ( LockModel )
                {
                  p_descriptionLabel = &this->fields.descriptionLabel;
                  v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
                  GameObjectExtensions__SetLocalPosition(v64, this->fields.descriptionPosForLock, 0LL);
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
    sub_B52A5C(LockModel, v21);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3038/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_64;
  UILabel__set_text(titleLabel, (System_String_o *)LockModel, 0LL);
  if ( !square )
    goto LABEL_64;
  ClassBoardBaseDialog__SetUpEffectDetail(
    (ClassBoardBaseDialog_o *)this,
    square->fields._SquareModel_k__BackingField,
    0.0,
    0.0,
    v29);
  v31 = square->fields._SquareModel_k__BackingField;
  if ( !v31 )
    goto LABEL_64;
  v32 = v31->klass;
  if ( *(_WORD *)&v31->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = (IClassBoardSquareModel_c **)&v32->_1.interfaceOffsets->offset;
    while ( *(v34 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v33;
      v34 += 2;
      if ( v33 >= *(unsigned __int16 *)&v31->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v35 = (__int64)&v32->vtable[*(_DWORD *)v34 + 6].method;
  }
  else
  {
LABEL_30:
    v35 = sub_AEB880(v31, IClassBoardSquareModel_TypeInfo, 6LL, v30);
  }
  v43 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v35)(
                                                                                    v31,
                                                                                    *(_QWORD *)(v35 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v43, v44);
  LockModel = (unsigned __int64)this->fields.itemListObj;
  if ( !LockModel )
    goto LABEL_64;
  v45 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0LL);
  GameObjectExtensions__SetLocalPosition(v45, this->fields.itemObjForEffect, 0LL);
  LockModel = (unsigned __int64)this->fields.itemInfoLabel;
  if ( !LockModel )
    goto LABEL_64;
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
  GameObjectExtensions__SetLocalPosition(v46, this->fields.itemLabelForEffect, 0LL);
  LockModel = (unsigned __int64)this->fields.descriptionLabel;
  if ( !LockModel )
    goto LABEL_64;
  p_descriptionLabel = &this->fields.descriptionLabel;
  v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
  GameObjectExtensions__SetLocalPosition(v48, this->fields.descriptionPosForEffect, 0LL);
  closeBtn = this->fields.closeBtn;
  x = this->fields.closeBtnPosForEffect.fields.x;
  y = this->fields.closeBtnPosForEffect.fields.y;
  z = this->fields.closeBtnPosForEffect.fields.z;
LABEL_58:
  GameObjectExtensions__SetLocalPosition(closeBtn, *(UnityEngine_Vector3_o *)&x, 0LL);
  v65 = *p_descriptionLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3037/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, 0LL);
  if ( !v65 )
    goto LABEL_64;
  UILabel__set_text(v65, (System_String_o *)LockModel, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3036/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_64;
  UILabel__set_text(closeBtnLabel, (System_String_o *)LockModel, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v67 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v67, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v67, 0, 0LL);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, v68);
}


System_String_o *__fastcall ClassBoardDisableOpenDialog__get_closeBtnPath(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B3831 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15583/*"Window/CloseBtn"*/);
    byte_42B3831 = 1;
  }
  return (System_String_o *)StringLiteral_15583/*"Window/CloseBtn"*/;
}