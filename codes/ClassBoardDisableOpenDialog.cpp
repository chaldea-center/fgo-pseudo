void __fastcall ClassBoardDisableOpenDialog___ctor(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.itemObjForEffect.fields.x = 0LL;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.z = 0LL;
  *(_OWORD *)&this->fields.itemLabelForEffect.fields.y = xmmword_32156B0;
  *(_OWORD *)&this->fields.descriptionPosForEffect.fields.z = xmmword_32156C0;
  *(_OWORD *)&this->fields.itemObjForLock.fields.x = xmmword_32156D0;
  *(_OWORD *)&this->fields.itemLabelForLock.fields.y = xmmword_32156E0;
  *(_OWORD *)&this->fields.descriptionPosForLock.fields.z = xmmword_32156C0;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, method);
}


void __fastcall ClassBoardDisableOpenDialog__Close(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4217AE4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ClassBoardDisableOpenDialog_EndClose__, v3);
    byte_4217AE4 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, method);
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v4, v5);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v6, v7);
}


void __fastcall ClassBoardDisableOpenDialog__EndClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4217AE5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217AE5 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
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

  if ( (byte_4217AE3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ClassBoardDisableOpenDialog_OnClickClose__, method);
    byte_4217AE3 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardDisableOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardDisableOpenDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_ClassBoardDisableOpenDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
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
  unsigned __int64 LockModel; // x0
  const MethodInfo *v30; // x1
  System_String_c *v31; // x8
  unsigned __int64 v32; // x22
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 v35; // x0
  const MethodInfo *v36; // x2
  struct IClassBoardSquareModel_o *v37; // x20
  IClassBoardSquareModel_c *v38; // x8
  unsigned __int64 v39; // x10
  IClassBoardSquareModel_c **v40; // x11
  __int64 v41; // x0
  const MethodInfo *v42; // x1
  System_String_c *v43; // x8
  unsigned __int64 v44; // x21
  unsigned __int64 v45; // x10
  int32_t *v46; // x11
  __int64 v47; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v48; // x0
  const MethodInfo *v49; // x2
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  struct UILabel_o **p_descriptionLabel; // x20
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_GameObject_o *closeBtn; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  const MethodInfo *v58; // x0
  int32_t v59; // w1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v62; // x10
  IClassBoardSquareModel_c **v63; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v65; // x0
  const MethodInfo *v66; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v68; // x0
  UnityEngine_GameObject_o *v69; // x0
  UILabel_o *v70; // x20
  UILabel_o *closeBtnLabel; // x20
  __int64 v72; // x1
  __int64 v73; // x2
  System_Action_o *v74; // x20
  const MethodInfo *v75; // x1
  ClassBoardCondData_o v76; // 0:x1.12

  if ( (byte_4217AE2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, square);
    sub_B0D8A4(&Method_ClassBoardDisableOpenDialog_EndOpen__, v11);
    sub_B0D8A4(&ClassBoardLock_TypeInfo, v12);
    sub_B0D8A4(&IClassBoardLockModel_TypeInfo, v13);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v14);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_3017/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, v16);
    sub_B0D8A4(&StringLiteral_3019/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, v17);
    sub_B0D8A4(&StringLiteral_3016/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, v18);
    sub_B0D8A4(&StringLiteral_3018/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, v19);
    byte_4217AE2 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.classBoardSquare,
    (System_Int32_array **)square,
    (System_String_array **)closeFunc,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.closeFunc = closeFunc;
  sub_B0D840(
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
    LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3019/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)LockModel, 0LL);
      LockModel = (unsigned __int64)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v27, v30);
      if ( LockModel )
      {
        v31 = *(System_String_c **)LockModel;
        v32 = LockModel;
        if ( *(_WORD *)(*(_QWORD *)LockModel + 298LL) )
        {
          v33 = 0LL;
          p_offset = &v31->_1.interfaceOffsets->offset;
          while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
          {
            ++v33;
            p_offset += 4;
            if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)LockModel + 298LL) )
              goto LABEL_19;
          }
          v35 = (__int64)(&v31->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_19:
          v35 = sub_AA67A0(LockModel, IClassBoardLockModel_TypeInfo, 0LL);
        }
        LockModel = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
        if ( HIDWORD(LockModel) )
        {
          LockModel = (unsigned __int64)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v27, v42);
          if ( !LockModel )
            goto LABEL_64;
          v43 = *(System_String_c **)LockModel;
          v44 = LockModel;
          if ( *(_WORD *)(*(_QWORD *)LockModel + 298LL) )
          {
            v45 = 0LL;
            v46 = &v43->_1.interfaceOffsets->offset;
            while ( *((IClassBoardLockModel_c **)v46 - 1) != IClassBoardLockModel_TypeInfo )
            {
              ++v45;
              v46 += 4;
              if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)LockModel + 298LL) )
                goto LABEL_38;
            }
            v47 = (__int64)(&v43->vtable._0_Equals.method + 2 * *v46);
          }
          else
          {
LABEL_38:
            v47 = sub_AA67A0(LockModel, IClassBoardLockModel_TypeInfo, 0LL);
          }
          v58 = (const MethodInfo *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v47)(v44, *(_QWORD *)(v47 + 8));
          v76.fields.Num = v59;
          *(_QWORD *)&v76.fields.Type = v58;
          ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v76, v58);
        }
        if ( square )
        {
          SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
          if ( SquareModel_k__BackingField )
          {
            klass = SquareModel_k__BackingField->klass;
            if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
            {
              v62 = 0LL;
              v63 = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
              while ( *(v63 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                ++v62;
                v63 += 2;
                if ( v62 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
                  goto LABEL_52;
              }
              p_method = (__int64)&klass->vtable[*(_DWORD *)v63 + 6].method;
            }
            else
            {
LABEL_52:
              p_method = sub_AA67A0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
            }
            v65 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                              SquareModel_k__BackingField,
                                                                                              *(_QWORD *)(p_method + 8));
            ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v65, v66);
            LockModel = (unsigned __int64)this->fields.itemListObj;
            if ( LockModel )
            {
              gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0LL);
              GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemObjForLock, 0LL);
              LockModel = (unsigned __int64)this->fields.itemInfoLabel;
              if ( LockModel )
              {
                v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
                GameObjectExtensions__SetLocalPosition(v68, this->fields.itemLabelForLock, 0LL);
                LockModel = (unsigned __int64)this->fields.descriptionLabel;
                if ( LockModel )
                {
                  p_descriptionLabel = &this->fields.descriptionLabel;
                  v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
                  GameObjectExtensions__SetLocalPosition(v69, this->fields.descriptionPosForLock, 0LL);
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
    sub_B0D97C(LockModel);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3018/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0LL);
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
    v36);
  v37 = square->fields._SquareModel_k__BackingField;
  if ( !v37 )
    goto LABEL_64;
  v38 = v37->klass;
  if ( *(_WORD *)&v37->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    v40 = (IClassBoardSquareModel_c **)&v38->_1.interfaceOffsets->offset;
    while ( *(v40 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v39;
      v40 += 2;
      if ( v39 >= *(unsigned __int16 *)&v37->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v41 = (__int64)&v38->vtable[*(_DWORD *)v40 + 6].method;
  }
  else
  {
LABEL_30:
    v41 = sub_AA67A0(v37, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v48 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v41)(
                                                                                    v37,
                                                                                    *(_QWORD *)(v41 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v48, v49);
  LockModel = (unsigned __int64)this->fields.itemListObj;
  if ( !LockModel )
    goto LABEL_64;
  v50 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0LL);
  GameObjectExtensions__SetLocalPosition(v50, this->fields.itemObjForEffect, 0LL);
  LockModel = (unsigned __int64)this->fields.itemInfoLabel;
  if ( !LockModel )
    goto LABEL_64;
  v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
  GameObjectExtensions__SetLocalPosition(v51, this->fields.itemLabelForEffect, 0LL);
  LockModel = (unsigned __int64)this->fields.descriptionLabel;
  if ( !LockModel )
    goto LABEL_64;
  p_descriptionLabel = &this->fields.descriptionLabel;
  v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
  GameObjectExtensions__SetLocalPosition(v53, this->fields.descriptionPosForEffect, 0LL);
  closeBtn = this->fields.closeBtn;
  x = this->fields.closeBtnPosForEffect.fields.x;
  y = this->fields.closeBtnPosForEffect.fields.y;
  z = this->fields.closeBtnPosForEffect.fields.z;
LABEL_58:
  GameObjectExtensions__SetLocalPosition(closeBtn, *(UnityEngine_Vector3_o *)&x, 0LL);
  v70 = *p_descriptionLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3017/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, 0LL);
  if ( !v70 )
    goto LABEL_64;
  UILabel__set_text(v70, (System_String_o *)LockModel, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3016/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_64;
  UILabel__set_text(closeBtnLabel, (System_String_o *)LockModel, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v74 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v72, v73);
  System_Action___ctor(v74, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v74, 0, 0LL);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, v75);
}


System_String_o *__fastcall ClassBoardDisableOpenDialog__get_closeBtnPath(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4217AE6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15525/*"Window/CloseBtn"*/, method);
    byte_4217AE6 = 1;
  }
  return (System_String_o *)StringLiteral_15525/*"Window/CloseBtn"*/;
}