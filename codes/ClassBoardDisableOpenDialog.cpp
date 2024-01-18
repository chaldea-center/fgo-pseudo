void __fastcall ClassBoardDisableOpenDialog___ctor(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.itemObjForEffect.fields.x = 0LL;
  *(_QWORD *)&this->fields.itemObjForEffect.fields.z = 0LL;
  *(_OWORD *)&this->fields.itemLabelForEffect.fields.y = xmmword_31A3BA0;
  *(_OWORD *)&this->fields.descriptionPosForEffect.fields.z = xmmword_31A3BB0;
  *(_OWORD *)&this->fields.itemObjForLock.fields.x = xmmword_31A3BC0;
  *(_OWORD *)&this->fields.itemLabelForLock.fields.y = xmmword_31A3BD0;
  *(_OWORD *)&this->fields.descriptionPosForLock.fields.z = xmmword_31A3BB0;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardDisableOpenDialog__Close(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_41894B5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ClassBoardDisableOpenDialog_EndClose__, v3);
    byte_41894B5 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v4, 0LL);
}


void __fastcall ClassBoardDisableOpenDialog__EndClose(ClassBoardDisableOpenDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_41894B6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41894B6 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
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

  if ( (byte_41894B4 & 1) == 0 )
  {
    sub_B2C35C(&Method_ClassBoardDisableOpenDialog_OnClickClose__, method);
    byte_41894B4 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardDisableOpenDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardDisableOpenDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_ClassBoardDisableOpenDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
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
  System_String_o *LockModel; // x0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  __int64 v32; // x3
  System_String_c *klass; // x8
  System_String_o *v34; // x22
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 v37; // x0
  __int64 v38; // x3
  struct IClassBoardSquareModel_o *v39; // x20
  IClassBoardSquareModel_c *v40; // x8
  unsigned __int64 v41; // x10
  IClassBoardSquareModel_c **v42; // x11
  __int64 v43; // x0
  int v44; // w1
  const MethodInfo *v45; // x2
  __int64 v46; // x3
  __int64 v47; // x3
  System_String_c *v48; // x8
  System_String_o *v49; // x21
  unsigned __int64 v50; // x10
  int32_t *v51; // x11
  __int64 v52; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  struct UILabel_o **p_descriptionLabel; // x20
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_GameObject_o *closeBtn; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  __int64 v62; // x0
  int32_t v63; // w1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *v65; // x8
  unsigned __int64 v66; // x10
  IClassBoardSquareModel_c **v67; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v69; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v71; // x0
  UnityEngine_GameObject_o *v72; // x0
  UILabel_o *v73; // x20
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v75; // x20
  __int64 v76; // [xsp+0h] [xbp-40h] BYREF
  int v77; // [xsp+8h] [xbp-38h]
  ClassBoardCondData_o v78; // 0:x0.12
  ClassBoardCondData_o v79; // 0:x1.12

  if ( (byte_41894B3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, square);
    sub_B2C35C(&Method_ClassBoardDisableOpenDialog_EndOpen__, v11);
    sub_B2C35C(&ClassBoardLock_TypeInfo, v12);
    sub_B2C35C(&IClassBoardLockModel_TypeInfo, v13);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v14);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_3005/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, v16);
    sub_B2C35C(&StringLiteral_3007/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, v17);
    sub_B2C35C(&StringLiteral_3004/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, v18);
    sub_B2C35C(&StringLiteral_3006/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, v19);
    byte_41894B3 = 1;
  }
  v77 = 0;
  v76 = 0LL;
  this->fields.classBoardSquare = square;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.classBoardSquare,
    (System_Int32_array **)square,
    (System_String_array **)closeFunc,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.closeFunc = closeFunc;
  sub_B2C2F8(
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
    LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3007/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_LOCK"*/, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, LockModel, 0LL);
      LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v27, v31);
      if ( LockModel )
      {
        klass = LockModel->klass;
        v34 = LockModel;
        if ( *(_WORD *)&LockModel->klass->_2.bitflags1 )
        {
          v35 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
          {
            ++v35;
            p_offset += 4;
            if ( v35 >= *(unsigned __int16 *)&LockModel->klass->_2.bitflags1 )
              goto LABEL_19;
          }
          v37 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
        }
        else
        {
LABEL_19:
          v37 = sub_AC5258(LockModel, IClassBoardLockModel_TypeInfo, 0LL, v32);
        }
        v76 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
        v77 = v44;
        *(_QWORD *)&v78.fields.Type = &v76;
        v78.fields.Num = 0;
        LockModel = (System_String_o *)ClassBoardCondData__get_HasCond(v78, v45);
        if ( ((unsigned __int8)LockModel & 1) != 0 )
        {
          LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)v27, v30);
          if ( !LockModel )
            goto LABEL_64;
          v48 = LockModel->klass;
          v49 = LockModel;
          if ( *(_WORD *)&LockModel->klass->_2.bitflags1 )
          {
            v50 = 0LL;
            v51 = &v48->_1.interfaceOffsets->offset;
            while ( *((IClassBoardLockModel_c **)v51 - 1) != IClassBoardLockModel_TypeInfo )
            {
              ++v50;
              v51 += 4;
              if ( v50 >= *(unsigned __int16 *)&LockModel->klass->_2.bitflags1 )
                goto LABEL_38;
            }
            v52 = (__int64)(&v48->vtable._0_Equals.method + 2 * *v51);
          }
          else
          {
LABEL_38:
            v52 = sub_AC5258(LockModel, IClassBoardLockModel_TypeInfo, 0LL, v47);
          }
          v62 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v52)(v49, *(_QWORD *)(v52 + 8));
          v79.fields.Num = v63;
          *(_QWORD *)&v79.fields.Type = v62;
          ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v79, 0LL);
        }
        if ( square )
        {
          SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
          if ( SquareModel_k__BackingField )
          {
            v65 = SquareModel_k__BackingField->klass;
            if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
            {
              v66 = 0LL;
              v67 = (IClassBoardSquareModel_c **)&v65->_1.interfaceOffsets->offset;
              while ( *(v67 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                ++v66;
                v67 += 2;
                if ( v66 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
                  goto LABEL_52;
              }
              p_method = (__int64)&v65->vtable[*(_DWORD *)v67 + 6].method;
            }
            else
            {
LABEL_52:
              p_method = sub_AC5258(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL, v46);
            }
            v69 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                              SquareModel_k__BackingField,
                                                                                              *(_QWORD *)(p_method + 8));
            ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v69, 0LL);
            LockModel = (System_String_o *)this->fields.itemListObj;
            if ( LockModel )
            {
              gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0LL);
              GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemObjForLock, 0LL);
              LockModel = (System_String_o *)this->fields.itemInfoLabel;
              if ( LockModel )
              {
                v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
                GameObjectExtensions__SetLocalPosition(v71, this->fields.itemLabelForLock, 0LL);
                LockModel = (System_String_o *)this->fields.descriptionLabel;
                if ( LockModel )
                {
                  p_descriptionLabel = &this->fields.descriptionLabel;
                  v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
                  GameObjectExtensions__SetLocalPosition(v72, this->fields.descriptionPosForLock, 0LL);
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
    sub_B2C434(LockModel, v30);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3006/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_TITLE_EFFECT"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_64;
  UILabel__set_text(titleLabel, LockModel, 0LL);
  if ( !square )
    goto LABEL_64;
  ClassBoardBaseDialog__SetUpEffectDetail(
    (ClassBoardBaseDialog_o *)this,
    square->fields._SquareModel_k__BackingField,
    0.0,
    0.0,
    0LL);
  v39 = square->fields._SquareModel_k__BackingField;
  if ( !v39 )
    goto LABEL_64;
  v40 = v39->klass;
  if ( *(_WORD *)&v39->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    v42 = (IClassBoardSquareModel_c **)&v40->_1.interfaceOffsets->offset;
    while ( *(v42 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v41;
      v42 += 2;
      if ( v41 >= *(unsigned __int16 *)&v39->klass->_2.bitflags1 )
        goto LABEL_30;
    }
    v43 = (__int64)&v40->vtable[*(_DWORD *)v42 + 6].method;
  }
  else
  {
LABEL_30:
    v43 = sub_AC5258(v39, IClassBoardSquareModel_TypeInfo, 6LL, v38);
  }
  v53 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v43)(
                                                                                    v39,
                                                                                    *(_QWORD *)(v43 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v53, 0LL);
  LockModel = (System_String_o *)this->fields.itemListObj;
  if ( !LockModel )
    goto LABEL_64;
  v54 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)LockModel, 0LL);
  GameObjectExtensions__SetLocalPosition(v54, this->fields.itemObjForEffect, 0LL);
  LockModel = (System_String_o *)this->fields.itemInfoLabel;
  if ( !LockModel )
    goto LABEL_64;
  v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
  GameObjectExtensions__SetLocalPosition(v55, this->fields.itemLabelForEffect, 0LL);
  LockModel = (System_String_o *)this->fields.descriptionLabel;
  if ( !LockModel )
    goto LABEL_64;
  p_descriptionLabel = &this->fields.descriptionLabel;
  v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
  GameObjectExtensions__SetLocalPosition(v57, this->fields.descriptionPosForEffect, 0LL);
  closeBtn = this->fields.closeBtn;
  x = this->fields.closeBtnPosForEffect.fields.x;
  y = this->fields.closeBtnPosForEffect.fields.y;
  z = this->fields.closeBtnPosForEffect.fields.z;
LABEL_58:
  GameObjectExtensions__SetLocalPosition(closeBtn, *(UnityEngine_Vector3_o *)&x, 0LL);
  v73 = *p_descriptionLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3005/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_DETAIL"*/, 0LL);
  if ( !v73 )
    goto LABEL_64;
  UILabel__set_text(v73, LockModel, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3004/*"CLASS_BOARD_DISABLE_OPEN_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_64;
  UILabel__set_text(closeBtnLabel, LockModel, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v75 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v75, (Il2CppObject *)this, Method_ClassBoardDisableOpenDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v75, 0, 0LL);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, 0LL);
}


System_String_o *__fastcall ClassBoardDisableOpenDialog__get_closeBtnPath(
        ClassBoardDisableOpenDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_41894B7 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15478/*"Window/CloseBtn"*/, method);
    byte_41894B7 = 1;
  }
  return (System_String_o *)StringLiteral_15478/*"Window/CloseBtn"*/;
}