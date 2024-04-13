void __fastcall HeelPortraitDetailDialogComponent___ctor(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA49E & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA49E = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall HeelPortraitDetailDialogComponent__Close(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42EA49C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_HeelPortraitDetailDialogComponent__Close_b__12_0__, v5, v6, v7);
    byte_42EA49C = 1;
  }
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_HeelPortraitDetailDialogComponent__Close_b__12_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall HeelPortraitDetailDialogComponent__EndOpen(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_openCallback; // x0
  System_Action_o *v9; // x19
  struct System_Action_o *openCallback; // t1

  openCallback = this->fields.openCallback;
  p_openCallback = (BattleServantConfConponent_o *)&this->fields.openCallback;
  v9 = openCallback;
  *(_DWORD *)&p_openCallback[-1].fields.isOpenAfter = 2;
  if ( openCallback )
  {
    p_openCallback->klass = 0LL;
    sub_B5D560(p_openCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall HeelPortraitDetailDialogComponent__Init(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall HeelPortraitDetailDialogComponent__OnClickClose(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42EA49B & 1) == 0 )
  {
    sub_B5D5C4(&Method_HeelPortraitDetailDialogComponent_OnClickClose__, (_DWORD)method, v2, v3);
    byte_42EA49B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_HeelPortraitDetailDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_HeelPortraitDetailDialogComponent_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_HeelPortraitDetailDialogComponent_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    HeelPortraitDetailDialogComponent__Close(this, v7);
  }
}


void __fastcall HeelPortraitDetailDialogComponent__Open(
        HeelPortraitDetailDialogComponent_o *this,
        HeelPortraitEntity_o *heelPortraitEntity,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x2
  UILabel_o *svtName; // x21
  int32_t eventId; // w21
  int32_t imageId; // w23
  UISprite_o *heelPortraitSprite; // x22
  System_String_o *v36; // x23
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x2
  int32_t OverwriteImageId; // w21
  System_String_o *v40; // x0
  int32_t v41; // w22
  UISprite_o *v42; // x21
  System_String_o *v43; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v45; // x20

  if ( (byte_42EA49A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)heelPortraitEntity, (_DWORD)openCallback, method);
    sub_B5D5C4(&AtlasManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Convert_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_HeelPortraitDetailDialogComponent_EndOpen__, v13, v14, v15);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v19, v20, v21);
    byte_42EA49A = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.openCallback = openCallback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.openCallback,
      (System_Int32_array **)openCallback,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    if ( heelPortraitEntity )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.svtName;
      if ( !gameObject )
        goto LABEL_29;
      UILabel__set_text((UILabel_o *)gameObject, heelPortraitEntity->fields.name, 0LL);
      if ( HeelPortraitEntity__IsSetOverwriteName(heelPortraitEntity, v30) )
      {
        svtName = this->fields.svtName;
        gameObject = (UnityEngine_GameObject_o *)HeelPortraitEntity__GetOverwriteName(
                                                   heelPortraitEntity,
                                                   heelPortraitEntity->fields.name,
                                                   v31);
        if ( !svtName )
          goto LABEL_29;
        UILabel__set_text(svtName, (System_String_o *)gameObject, 0LL);
      }
      imageId = heelPortraitEntity->fields.imageId;
      eventId = heelPortraitEntity->fields.eventId;
      heelPortraitSprite = this->fields.heelPortraitSprite;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v36 = System_Convert__ToString_42796160(imageId, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI_31190412(eventId, heelPortraitSprite, v36, 0LL);
      if ( HeelPortraitEntity__IsSetOverwriteImageId(heelPortraitEntity, v37) )
      {
        OverwriteImageId = HeelPortraitEntity__GetOverwriteImageId(
                             heelPortraitEntity,
                             heelPortraitEntity->fields.imageId,
                             v38);
        if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Convert_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        }
        v40 = System_Convert__ToString_42796160(OverwriteImageId, 0LL);
        v41 = heelPortraitEntity->fields.eventId;
        v42 = this->fields.heelPortraitSprite;
        v43 = v40;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI_31190412(v41, v42, v43, 0LL);
      }
    }
    cancelButtonLb = this->fields.cancelButtonLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( cancelButtonLb )
    {
      UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0LL);
      this->fields.state = 1;
      v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v45, (Il2CppObject *)this, Method_HeelPortraitDetailDialogComponent_EndOpen__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v45, 0, 0LL);
      return;
    }
LABEL_29:
    sub_B5D69C(gameObject, v23);
  }
}


void __fastcall HeelPortraitDetailDialogComponent__SerializeFieldNotNullCheck(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


UnityEngine_GameObject_o *__fastcall HeelPortraitDetailDialogComponent__get_closeBtnObject(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42EA49D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA49D = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}