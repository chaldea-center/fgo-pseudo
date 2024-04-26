void __fastcall ClassBoardDisableOpenDialog___ctor(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.itemObjForEffect.fields.x = 0LL;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.z = 0LL;
  *(_OWORD *)&this->fields.itemLabelForEffect.fields.y = xmmword_32EBF70;
  *(_OWORD *)&this->fields.descriptionPosForEffect.fields.z = xmmword_32EBF80;
  *(_OWORD *)&this->fields.itemObjForLock.fields.x = xmmword_32EBF90;
  *(_OWORD *)&this->fields.itemLabelForLock.fields.y = xmmword_32EBFA0;
  *(_OWORD *)&this->fields.descriptionPosForLock.fields.z = xmmword_32EBF80;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, method);
}


void __fastcall ClassBoardDisableOpenDialog__Close(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4352BD8 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ClassBoardDisableOpenDialog_EndClose__);
    byte_4352BD8 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, method);
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v3, v4);
}


void __fastcall ClassBoardDisableOpenDialog__EndClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4352BD9 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352BD9 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
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

  if ( (byte_4352BD7 & 1) == 0 )
  {
    sub_B70694(&Method_ClassBoardDisableOpenDialog_OnClickClose__);
    byte_4352BD7 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardDisableOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardDisableOpenDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B7069C(Method_ClassBoardDisableOpenDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
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
  __int64 v21; // x1
  System_String_c *v22; // x8
  unsigned __int64 v23; // x22
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 v26; // x0
  const MethodInfo *v27; // x2
  struct IClassBoardSquareModel_o *v28; // x20
  IClassBoardSquareModel_c *v29; // x8
  unsigned __int64 v30; // x10
  IClassBoardSquareModel_c **v31; // x11
  __int64 v32; // x0
  System_String_c *v33; // x8
  unsigned __int64 v34; // x21
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v38; // x0
  const MethodInfo *v39; // x2
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  struct UILabel_o **p_descriptionLabel; // x20
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_GameObject_o *closeBtn; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  const MethodInfo *v48; // x0
  int32_t v49; // w1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v52; // x10
  IClassBoardSquareModel_c **v53; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v55; // x0
  const MethodInfo *v56; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  UILabel_o *v60; // x20
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v62; // x20
  const MethodInfo *v63; // x1
  ClassBoardCondData_o v64; // 0:x1.12

  if ( (byte_4352BD6 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ClassBoardDisableOpenDialog_EndOpen__);
    sub_B70694(&ClassBoardLock_TypeInfo);
    sub_B70694(&IClassBoardLockModel_TypeInfo);
    sub_B70694(&IClassBoardSquareModel_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3073/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/);
    sub_B70694(&StringLiteral_3075/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/);
    sub_B70694(&StringLiteral_3072/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/);
    sub_B70694(&StringLiteral_3074/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/);
    byte_4352BD6 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.classBoardSquare,
    (System_Int32_array **)square,
    (System_String_array **)closeFunc,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.closeFunc = closeFunc;
  sub_B70630(
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
    LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3075/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)LockModel, 0LL);
      LockModel = (unsigned __int64)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v18, 0LL);
      if ( LockModel )
      {
        v22 = *(System_String_c **)LockModel;
        v23 = LockModel;
        if ( *(_WORD *)(*(_QWORD *)LockModel + 298LL) )
        {
          v24 = 0LL;
          p_offset = &v22->_1.interfaceOffsets->offset;
          while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
          {
            ++v24;
            p_offset += 4;
            if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)LockModel + 298LL) )
              goto LABEL_19;
          }
          v26 = (__int64)(&v22->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_19:
          v26 = sub_B08590(LockModel, IClassBoardLockModel_TypeInfo, 0LL);
        }
        LockModel = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
        if ( HIDWORD(LockModel) )
        {
          LockModel = (unsigned __int64)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v18, 0LL);
          if ( !LockModel )
            goto LABEL_64;
          v33 = *(System_String_c **)LockModel;
          v34 = LockModel;
          if ( *(_WORD *)(*(_QWORD *)LockModel + 298LL) )
          {
            v35 = 0LL;
            v36 = &v33->_1.interfaceOffsets->offset;
            while ( *((IClassBoardLockModel_c **)v36 - 1) != IClassBoardLockModel_TypeInfo )
            {
              ++v35;
              v36 += 4;
              if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)LockModel + 298LL) )
                goto LABEL_38;
            }
            v37 = (__int64)(&v33->vtable._0_Equals.method + 2 * *v36);
          }
          else
          {
LABEL_38:
            v37 = sub_B08590(LockModel, IClassBoardLockModel_TypeInfo, 0LL);
          }
          v48 = (const MethodInfo *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
          v64.fields.Num = v49;
          *(_QWORD *)&v64.fields.Type = v48;
          ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v64, v48);
        }
        if ( square )
        {
          SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
          if ( SquareModel_k__BackingField )
          {
            klass = SquareModel_k__BackingField->klass;
            if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
            {
              v52 = 0LL;
              v53 = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(v53 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                ++v52;
                v53 += 2;
                if ( v52 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
                  goto LABEL_52;
              }
              p_method = (__int64)&klass->vtable[*(_DWORD *)v53 + 6].method;
            }
            else
            {
LABEL_52:
              p_method = sub_B08590(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
            }
            v55 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                              SquareModel_k__BackingField,
                                                                                              *(_QWORD *)(p_method + 8));
            ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v55, v56);
            LockModel = (unsigned __int64)this->fields.itemListObj;
            if ( LockModel )
            {
              gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0LL);
              GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemObjForLock, 0LL);
              LockModel = (unsigned __int64)this->fields.itemInfoLabel;
              if ( LockModel )
              {
                v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
                GameObjectExtensions__SetLocalPosition(v58, this->fields.itemLabelForLock, 0LL);
                LockModel = (unsigned __int64)this->fields.descriptionLabel;
                if ( LockModel )
                {
                  p_descriptionLabel = &this->fields.descriptionLabel;
                  v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
                  GameObjectExtensions__SetLocalPosition(v59, this->fields.descriptionPosForLock, 0LL);
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
    sub_B7076C(LockModel, v21);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3074/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0LL);
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
    v27);
  v28 = square->fields._SquareModel_k__BackingField;
  if ( !v28 )
    goto LABEL_64;
  v29 = v28->klass;
  if ( *(_WORD *)&v28->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = (IClassBoardSquareModel_c **)&v29->_1.interfaceOffsets->offset;
    while ( *(v31 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v30;
      v31 += 2;
      if ( v30 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v32 = (__int64)&v29->vtable[*(_DWORD *)v31 + 6].method;
  }
  else
  {
LABEL_30:
    v32 = sub_B08590(v28, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v38 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v32)(
                                                                                    v28,
                                                                                    *(_QWORD *)(v32 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v38, v39);
  LockModel = (unsigned __int64)this->fields.itemListObj;
  if ( !LockModel )
    goto LABEL_64;
  v40 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0LL);
  GameObjectExtensions__SetLocalPosition(v40, this->fields.itemObjForEffect, 0LL);
  LockModel = (unsigned __int64)this->fields.itemInfoLabel;
  if ( !LockModel )
    goto LABEL_64;
  v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
  GameObjectExtensions__SetLocalPosition(v41, this->fields.itemLabelForEffect, 0LL);
  LockModel = (unsigned __int64)this->fields.descriptionLabel;
  if ( !LockModel )
    goto LABEL_64;
  p_descriptionLabel = &this->fields.descriptionLabel;
  v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
  GameObjectExtensions__SetLocalPosition(v43, this->fields.descriptionPosForEffect, 0LL);
  closeBtn = this->fields.closeBtn;
  x = this->fields.closeBtnPosForEffect.fields.x;
  y = this->fields.closeBtnPosForEffect.fields.y;
  z = this->fields.closeBtnPosForEffect.fields.z;
LABEL_58:
  GameObjectExtensions__SetLocalPosition(closeBtn, *(UnityEngine_Vector3_o *)&x, 0LL);
  v60 = *p_descriptionLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3073/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, 0LL);
  if ( !v60 )
    goto LABEL_64;
  UILabel__set_text(v60, (System_String_o *)LockModel, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3072/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_64;
  UILabel__set_text(closeBtnLabel, (System_String_o *)LockModel, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v62 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v62, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v62, 0, 0LL);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, v63);
}


System_String_o *__fastcall ClassBoardDisableOpenDialog__get_closeBtnPath(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4352BDA & 1) == 0 )
  {
    sub_B70694(&StringLiteral_15699/*"Window/CloseBtn"*/);
    byte_4352BDA = 1;
  }
  return (System_String_o *)StringLiteral_15699/*"Window/CloseBtn"*/;
}