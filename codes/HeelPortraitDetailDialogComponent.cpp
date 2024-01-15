void __fastcall HeelPortraitDetailDialogComponent___ctor(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FC158 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FC158 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall HeelPortraitDetailDialogComponent__Close(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40FC156 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_HeelPortraitDetailDialogComponent__Close_b__12_0__, v6);
    byte_40FC156 = 1;
  }
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_HeelPortraitDetailDialogComponent__Close_b__12_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
    sub_B16F98(p_openCallback, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(v9, 0LL);
  }
}


void __fastcall HeelPortraitDetailDialogComponent__Init(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall HeelPortraitDetailDialogComponent__OnClickClose(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40FC155 & 1) == 0 )
  {
    sub_B16FFC(&Method_HeelPortraitDetailDialogComponent_OnClickClose__, method);
    byte_40FC155 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_HeelPortraitDetailDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_HeelPortraitDetailDialogComponent_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_HeelPortraitDetailDialogComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    HeelPortraitDetailDialogComponent__Close(this, v5);
  }
}


void __fastcall HeelPortraitDetailDialogComponent__Open(
        HeelPortraitDetailDialogComponent_o *this,
        HeelPortraitEntity_o *heelPortraitEntity,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UILabel_o *svtName; // x0
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  UILabel_o *v22; // x21
  System_String_o *OverwriteName; // x0
  int32_t eventId; // w21
  int32_t imageId; // w23
  UISprite_o *heelPortraitSprite; // x22
  System_String_o *v27; // x23
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x2
  int32_t OverwriteImageId; // w21
  System_String_o *v31; // x0
  int32_t v32; // w22
  UISprite_o *v33; // x21
  System_String_o *v34; // x20
  UILabel_o *cancelButtonLb; // x20
  System_String_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Action_o *v41; // x20

  if ( (byte_40FC154 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, heelPortraitEntity);
    sub_B16FFC(&AtlasManager_TypeInfo, v7);
    sub_B16FFC(&System_Convert_TypeInfo, v8);
    sub_B16FFC(&Method_HeelPortraitDetailDialogComponent_EndOpen__, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v11);
    byte_40FC154 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.openCallback = openCallback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.openCallback,
      (System_Int32_array **)openCallback,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    if ( heelPortraitEntity )
    {
      svtName = this->fields.svtName;
      if ( !svtName )
        goto LABEL_29;
      UILabel__set_text(svtName, heelPortraitEntity->fields.name, 0LL);
      if ( HeelPortraitEntity__IsSetOverwriteName(heelPortraitEntity, v20) )
      {
        v22 = this->fields.svtName;
        OverwriteName = HeelPortraitEntity__GetOverwriteName(heelPortraitEntity, heelPortraitEntity->fields.name, v21);
        if ( !v22 )
          goto LABEL_29;
        UILabel__set_text(v22, OverwriteName, 0LL);
      }
      imageId = heelPortraitEntity->fields.imageId;
      eventId = heelPortraitEntity->fields.eventId;
      heelPortraitSprite = this->fields.heelPortraitSprite;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v27 = System_Convert__ToString_41756656(imageId, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI_28584872(eventId, heelPortraitSprite, v27, 0LL);
      if ( HeelPortraitEntity__IsSetOverwriteImageId(heelPortraitEntity, v28) )
      {
        OverwriteImageId = HeelPortraitEntity__GetOverwriteImageId(
                             heelPortraitEntity,
                             heelPortraitEntity->fields.imageId,
                             v29);
        if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Convert_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        }
        v31 = System_Convert__ToString_41756656(OverwriteImageId, 0LL);
        v32 = heelPortraitEntity->fields.eventId;
        v33 = this->fields.heelPortraitSprite;
        v34 = v31;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI_28584872(v32, v33, v34, 0LL);
      }
    }
    cancelButtonLb = this->fields.cancelButtonLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( cancelButtonLb )
    {
      UILabel__set_text(cancelButtonLb, v36, 0LL);
      this->fields.state = 1;
      v41 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40);
      System_Action___ctor(v41, (Il2CppObject *)this, Method_HeelPortraitDetailDialogComponent_EndOpen__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
      return;
    }
LABEL_29:
    sub_B170D4();
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
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FC157 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC157 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}