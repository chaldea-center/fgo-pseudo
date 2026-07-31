void HeelPortraitDetailDialogComponent___ctor(HeelPortraitDetailDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593284A & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593284A = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void HeelPortraitDetailDialogComponent__Close(HeelPortraitDetailDialogComponent_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_5932848 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_HeelPortraitDetailDialogComponent__Close_b__12_0__);
    byte_5932848 = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_21FFEBC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_HeelPortraitDetailDialogComponent__Close_b__12_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void HeelPortraitDetailDialogComponent__EndOpen(HeelPortraitDetailDialogComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_openCallback; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *openCallback; // t1

  openCallback = this->fields.openCallback;
  p_openCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.openCallback;
  v9 = openCallback;
  p_openCallback[-1].fields._BoardType_k__BackingField = 2;
  if ( openCallback )
  {
    p_openCallback->klass = 0;
    sub_21FFBF4(p_openCallback, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void HeelPortraitDetailDialogComponent__Init(HeelPortraitDetailDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void HeelPortraitDetailDialogComponent__OnClickClose(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_5932847 & 1) == 0 )
  {
    sub_21FFC50(&Method_HeelPortraitDetailDialogComponent_OnClickClose__);
    byte_5932847 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_HeelPortraitDetailDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_HeelPortraitDetailDialogComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_HeelPortraitDetailDialogComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    HeelPortraitDetailDialogComponent__Close(this, v5);
  }
}


void HeelPortraitDetailDialogComponent__Open(
        HeelPortraitDetailDialogComponent_o *this,
        HeelPortraitEntity_o *heelPortraitEntity,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UILabel_o *svtName; // x21
  UISprite_o *heelPortraitSprite; // x21
  int32_t eventId; // w22
  int32_t imageId; // w23
  __int64 v22; // x1
  __int64 v23; // x2
  System_String_o *v24; // x23
  __int64 v25; // x1
  __int64 v26; // x2
  int32_t OverwriteImageId; // w21
  System_String_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  int32_t v31; // w21
  System_String_o *v32; // x20
  UISprite_o *v33; // x22
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v35; // x20

  if ( (byte_5932846 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_HeelPortraitDetailDialogComponent_EndOpen__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    byte_5932846 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    this->fields.openCallback = openCallback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.openCallback,
      (int32_t)openCallback,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    if ( heelPortraitEntity )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.svtName;
      if ( !gameObject )
        goto LABEL_24;
      UILabel__set_text((UILabel_o *)gameObject, heelPortraitEntity->fields.name, 0);
      if ( HeelPortraitEntity__IsSetOverwriteName(heelPortraitEntity, 0) )
      {
        svtName = this->fields.svtName;
        gameObject = (UnityEngine_GameObject_o *)HeelPortraitEntity__GetOverwriteName(
                                                   heelPortraitEntity,
                                                   heelPortraitEntity->fields.name,
                                                   0);
        if ( !svtName )
          goto LABEL_24;
        UILabel__set_text(svtName, (System_String_o *)gameObject, 0);
      }
      heelPortraitSprite = this->fields.heelPortraitSprite;
      imageId = heelPortraitEntity->fields.imageId;
      eventId = heelPortraitEntity->fields.eventId;
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v16, v17);
      v24 = System_Convert__ToString_76481856(imageId, 0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22, v23);
      AtlasManager__SetEventUI_47538316(eventId, heelPortraitSprite, v24, 0);
      if ( HeelPortraitEntity__IsSetOverwriteImageId(heelPortraitEntity, 0) )
      {
        OverwriteImageId = HeelPortraitEntity__GetOverwriteImageId(
                             heelPortraitEntity,
                             heelPortraitEntity->fields.imageId,
                             0);
        if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v25, v26);
        v28 = System_Convert__ToString_76481856(OverwriteImageId, 0);
        v31 = heelPortraitEntity->fields.eventId;
        v32 = v28;
        v33 = this->fields.heelPortraitSprite;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v29, v30);
        AtlasManager__SetEventUI_47538316(v31, v33, v32, 0);
      }
    }
    cancelButtonLb = this->fields.cancelButtonLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v15);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( cancelButtonLb )
    {
      UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0);
      this->fields.state = 1;
      v35 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v35, (Il2CppObject *)this, Method_HeelPortraitDetailDialogComponent_EndOpen__, 0);
      BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0, 0);
      return;
    }
LABEL_24:
    sub_21FFECC(gameObject, v8);
  }
}


void HeelPortraitDetailDialogComponent__SerializeFieldNotNullCheck(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


UnityEngine_GameObject_o *HeelPortraitDetailDialogComponent__get_closeBtnObject(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_5932849 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932849 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}