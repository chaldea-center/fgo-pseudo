void __fastcall ClassBoardDisableOpenDialog___ctor(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.itemObjForEffect.fields.x = 0LL;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.z = 0LL;
  *(_OWORD *)&this->fields.itemLabelForEffect.fields.y = xmmword_32A4320;
  *(_OWORD *)&this->fields.descriptionPosForEffect.fields.z = xmmword_32A4330;
  *(_OWORD *)&this->fields.itemObjForLock.fields.x = xmmword_32A4340;
  *(_OWORD *)&this->fields.itemLabelForLock.fields.y = xmmword_32A4350;
  *(_OWORD *)&this->fields.descriptionPosForLock.fields.z = xmmword_32A4330;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, method);
}


void __fastcall ClassBoardDisableOpenDialog__Close(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42E9C11 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardDisableOpenDialog_EndClose__, v5, v6, v7);
    byte_42E9C11 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, method);
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v8, v9);
}


void __fastcall ClassBoardDisableOpenDialog__EndClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E9C12 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9C12 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42E9C10 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ClassBoardDisableOpenDialog_OnClickClose__, (_DWORD)method, v2, v3);
    byte_42E9C10 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v5 = Method_ClassBoardDisableOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardDisableOpenDialog_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_ClassBoardDisableOpenDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, this->fields.onClickCloseSeKind, 0LL);
    ClassBoardDisableOpenDialog__Close(this, v7);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x10
  ClassBoardSquare_o *v45; // x21
  UILabel_o *titleLabel; // x22
  unsigned __int64 LockModel; // x0
  __int64 v48; // x1
  __int64 v49; // x3
  System_String_c *v50; // x8
  unsigned __int64 v51; // x22
  unsigned __int64 v52; // x10
  int32_t *p_offset; // x11
  __int64 v54; // x0
  const MethodInfo *v55; // x2
  __int64 v56; // x3
  struct IClassBoardSquareModel_o *v57; // x20
  IClassBoardSquareModel_c *v58; // x8
  unsigned __int64 v59; // x10
  IClassBoardSquareModel_c **v60; // x11
  __int64 v61; // x0
  __int64 v62; // x3
  __int64 v63; // x3
  System_String_c *v64; // x8
  unsigned __int64 v65; // x21
  unsigned __int64 v66; // x10
  int32_t *v67; // x11
  __int64 v68; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v69; // x0
  const MethodInfo *v70; // x2
  UnityEngine_GameObject_o *v71; // x0
  UnityEngine_GameObject_o *v72; // x0
  struct UILabel_o **p_descriptionLabel; // x20
  UnityEngine_GameObject_o *v74; // x0
  UnityEngine_GameObject_o *closeBtn; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  const MethodInfo *v79; // x0
  int32_t v80; // w1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v83; // x10
  IClassBoardSquareModel_c **v84; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v86; // x0
  const MethodInfo *v87; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v89; // x0
  UnityEngine_GameObject_o *v90; // x0
  UILabel_o *v91; // x20
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v93; // x20
  const MethodInfo *v94; // x1
  ClassBoardCondData_o v95; // 0:x1.12

  if ( (byte_42E9C0F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)square, (_DWORD)closeFunc, method);
    sub_B5D5C4(&Method_ClassBoardDisableOpenDialog_EndOpen__, v11, v12, v13);
    sub_B5D5C4(&ClassBoardLock_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&IClassBoardLockModel_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_3064/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_3066/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_3063/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_3065/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, v35, v36, v37);
    byte_42E9C0F = 1;
  }
  this->fields.classBoardSquare = square;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.classBoardSquare,
    (System_Int32_array **)square,
    (System_String_array **)closeFunc,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.closeFunc = closeFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeFunc,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  if ( square
    && (v44 = *(&ClassBoardLock_TypeInfo->_2.bitflags2 + 1), *(&square->klass->_2.bitflags2 + 1) >= (unsigned int)v44) )
  {
    if ( (ClassBoardLock_c *)square->klass->_2.typeHierarchy[v44 - 1] == ClassBoardLock_TypeInfo )
      v45 = square;
    else
      v45 = 0LL;
  }
  else
  {
    v45 = 0LL;
  }
  titleLabel = this->fields.titleLabel;
  if ( v45 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3066/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)LockModel, 0LL);
      LockModel = (unsigned __int64)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v45, 0LL);
      if ( LockModel )
      {
        v50 = *(System_String_c **)LockModel;
        v51 = LockModel;
        if ( *(_WORD *)(*(_QWORD *)LockModel + 298LL) )
        {
          v52 = 0LL;
          p_offset = &v50->_1.interfaceOffsets->offset;
          while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
          {
            ++v52;
            p_offset += 4;
            if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)LockModel + 298LL) )
              goto LABEL_19;
          }
          v54 = (__int64)(&v50->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_19:
          v54 = sub_AF54C0(LockModel, IClassBoardLockModel_TypeInfo, 0LL, v49);
        }
        LockModel = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v54)(v51, *(_QWORD *)(v54 + 8));
        if ( HIDWORD(LockModel) )
        {
          LockModel = (unsigned __int64)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v45, 0LL);
          if ( !LockModel )
            goto LABEL_64;
          v64 = *(System_String_c **)LockModel;
          v65 = LockModel;
          if ( *(_WORD *)(*(_QWORD *)LockModel + 298LL) )
          {
            v66 = 0LL;
            v67 = &v64->_1.interfaceOffsets->offset;
            while ( *((IClassBoardLockModel_c **)v67 - 1) != IClassBoardLockModel_TypeInfo )
            {
              ++v66;
              v67 += 4;
              if ( v66 >= *(unsigned __int16 *)(*(_QWORD *)LockModel + 298LL) )
                goto LABEL_38;
            }
            v68 = (__int64)(&v64->vtable._0_Equals.method + 2 * *v67);
          }
          else
          {
LABEL_38:
            v68 = sub_AF54C0(LockModel, IClassBoardLockModel_TypeInfo, 0LL, v63);
          }
          v79 = (const MethodInfo *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v68)(v65, *(_QWORD *)(v68 + 8));
          v95.fields.Num = v80;
          *(_QWORD *)&v95.fields.Type = v79;
          ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v95, v79);
        }
        if ( square )
        {
          SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
          if ( SquareModel_k__BackingField )
          {
            klass = SquareModel_k__BackingField->klass;
            if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
            {
              v83 = 0LL;
              v84 = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(v84 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                ++v83;
                v84 += 2;
                if ( v83 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
                  goto LABEL_52;
              }
              p_method = (__int64)&klass->vtable[*(_DWORD *)v84 + 6].method;
            }
            else
            {
LABEL_52:
              p_method = sub_AF54C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL, v62);
            }
            v86 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                              SquareModel_k__BackingField,
                                                                                              *(_QWORD *)(p_method + 8));
            ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v86, v87);
            LockModel = (unsigned __int64)this->fields.itemListObj;
            if ( LockModel )
            {
              gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0LL);
              GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemObjForLock, 0LL);
              LockModel = (unsigned __int64)this->fields.itemInfoLabel;
              if ( LockModel )
              {
                v89 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
                GameObjectExtensions__SetLocalPosition(v89, this->fields.itemLabelForLock, 0LL);
                LockModel = (unsigned __int64)this->fields.descriptionLabel;
                if ( LockModel )
                {
                  p_descriptionLabel = &this->fields.descriptionLabel;
                  v90 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
                  GameObjectExtensions__SetLocalPosition(v90, this->fields.descriptionPosForLock, 0LL);
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
    sub_B5D69C(LockModel, v48);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3065/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0LL);
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
    v55);
  v57 = square->fields._SquareModel_k__BackingField;
  if ( !v57 )
    goto LABEL_64;
  v58 = v57->klass;
  if ( *(_WORD *)&v57->klass->_2.bitflags1 )
  {
    v59 = 0LL;
    v60 = (IClassBoardSquareModel_c **)&v58->_1.interfaceOffsets->offset;
    while ( *(v60 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v59;
      v60 += 2;
      if ( v59 >= *(unsigned __int16 *)&v57->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v61 = (__int64)&v58->vtable[*(_DWORD *)v60 + 6].method;
  }
  else
  {
LABEL_30:
    v61 = sub_AF54C0(v57, IClassBoardSquareModel_TypeInfo, 6LL, v56);
  }
  v69 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v61)(
                                                                                    v57,
                                                                                    *(_QWORD *)(v61 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v69, v70);
  LockModel = (unsigned __int64)this->fields.itemListObj;
  if ( !LockModel )
    goto LABEL_64;
  v71 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0LL);
  GameObjectExtensions__SetLocalPosition(v71, this->fields.itemObjForEffect, 0LL);
  LockModel = (unsigned __int64)this->fields.itemInfoLabel;
  if ( !LockModel )
    goto LABEL_64;
  v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
  GameObjectExtensions__SetLocalPosition(v72, this->fields.itemLabelForEffect, 0LL);
  LockModel = (unsigned __int64)this->fields.descriptionLabel;
  if ( !LockModel )
    goto LABEL_64;
  p_descriptionLabel = &this->fields.descriptionLabel;
  v74 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
  GameObjectExtensions__SetLocalPosition(v74, this->fields.descriptionPosForEffect, 0LL);
  closeBtn = this->fields.closeBtn;
  x = this->fields.closeBtnPosForEffect.fields.x;
  y = this->fields.closeBtnPosForEffect.fields.y;
  z = this->fields.closeBtnPosForEffect.fields.z;
LABEL_58:
  GameObjectExtensions__SetLocalPosition(closeBtn, *(UnityEngine_Vector3_o *)&x, 0LL);
  v91 = *p_descriptionLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3064/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, 0LL);
  if ( !v91 )
    goto LABEL_64;
  UILabel__set_text(v91, (System_String_o *)LockModel, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3063/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_64;
  UILabel__set_text(closeBtnLabel, (System_String_o *)LockModel, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v93 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v93, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v93, 0, 0LL);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, v94);
}


System_String_o *__fastcall ClassBoardDisableOpenDialog__get_closeBtnPath(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9C13 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15668/*"Window/CloseBtn"*/, (_DWORD)method, v2, v3);
    byte_42E9C13 = 1;
  }
  return (System_String_o *)StringLiteral_15668/*"Window/CloseBtn"*/;
}