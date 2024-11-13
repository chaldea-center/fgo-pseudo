void __fastcall HeelPortraitDetailDialogComponent___ctor(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A2D7 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1A2D7 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall HeelPortraitDetailDialogComponent__Close(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B1A2D5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_HeelPortraitDetailDialogComponent__Close_b__12_0__, v5, v6);
    byte_4B1A2D5 = 1;
  }
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_HeelPortraitDetailDialogComponent__Close_b__12_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall HeelPortraitDetailDialogComponent__EndOpen(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_openCallback; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *openCallback; // t1

  openCallback = this->fields.openCallback;
  p_openCallback = (PartyOrganizationUtility_o *)&this->fields.openCallback;
  v9 = openCallback;
  *(_DWORD *)&p_openCallback[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
  if ( openCallback )
  {
    p_openCallback->klass = 0LL;
    sub_1BCA784(p_openCallback, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
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
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall HeelPortraitDetailDialogComponent__OnClickClose(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B1A2D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_HeelPortraitDetailDialogComponent_OnClickClose__, method, v2);
    byte_4B1A2D4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_HeelPortraitDetailDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_HeelPortraitDetailDialogComponent_OnClickClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_HeelPortraitDetailDialogComponent_OnClickClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    HeelPortraitDetailDialogComponent__Close(this, v6);
  }
}


void __fastcall HeelPortraitDetailDialogComponent__Open(
        HeelPortraitDetailDialogComponent_o *this,
        HeelPortraitEntity_o *heelPortraitEntity,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  UILabel_o *svtName; // x21
  UISprite_o *heelPortraitSprite; // x21
  int32_t eventId; // w22
  int32_t imageId; // w23
  __int64 v30; // x1
  System_String_o *v31; // x23
  __int64 v32; // x1
  int32_t OverwriteImageId; // w21
  System_String_o *v34; // x0
  __int64 v35; // x1
  int32_t v36; // w22
  UISprite_o *v37; // x21
  System_String_o *v38; // x20
  UILabel_o *cancelButtonLb; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Action_o *v43; // x20

  if ( (byte_4B1A2D3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, heelPortraitEntity, openCallback);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Convert_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_HeelPortraitDetailDialogComponent_EndOpen__, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v15, v16);
    byte_4B1A2D3 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.openCallback = openCallback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.openCallback,
      (int64_t)openCallback,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    if ( heelPortraitEntity )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.svtName;
      if ( !gameObject )
        goto LABEL_24;
      UILabel__set_text((UILabel_o *)gameObject, heelPortraitEntity->fields.name, 0LL);
      if ( HeelPortraitEntity__IsSetOverwriteName(heelPortraitEntity, 0LL) )
      {
        svtName = this->fields.svtName;
        gameObject = (UnityEngine_GameObject_o *)HeelPortraitEntity__GetOverwriteName(
                                                   heelPortraitEntity,
                                                   heelPortraitEntity->fields.name,
                                                   0LL);
        if ( !svtName )
          goto LABEL_24;
        UILabel__set_text(svtName, (System_String_o *)gameObject, 0LL);
      }
      heelPortraitSprite = this->fields.heelPortraitSprite;
      imageId = heelPortraitEntity->fields.imageId;
      eventId = heelPortraitEntity->fields.eventId;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v25);
      v31 = System_Convert__ToString_63067128(imageId, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v30);
      AtlasManager__SetEventUI_38574572(eventId, heelPortraitSprite, v31, 0LL);
      if ( HeelPortraitEntity__IsSetOverwriteImageId(heelPortraitEntity, 0LL) )
      {
        OverwriteImageId = HeelPortraitEntity__GetOverwriteImageId(
                             heelPortraitEntity,
                             heelPortraitEntity->fields.imageId,
                             0LL);
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v32);
        v34 = System_Convert__ToString_63067128(OverwriteImageId, 0LL);
        v36 = heelPortraitEntity->fields.eventId;
        v37 = this->fields.heelPortraitSprite;
        v38 = v34;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v35);
        AtlasManager__SetEventUI_38574572(v36, v37, v38, 0LL);
      }
    }
    cancelButtonLb = this->fields.cancelButtonLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( cancelButtonLb )
    {
      UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0LL);
      this->fields.state = 1;
      v43 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v40, v41, v42);
      System_Action___ctor(v43, (Il2CppObject *)this, Method_HeelPortraitDetailDialogComponent_EndOpen__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0LL);
      return;
    }
LABEL_24:
    sub_1BCAA3C(gameObject, v18);
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
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1A2D6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A2D6 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}