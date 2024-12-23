void __fastcall HeelPortraitDetailDialogComponent___ctor(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B6AD6E & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B6AD6E = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall HeelPortraitDetailDialogComponent__Close(
        HeelPortraitDetailDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B6AD6C & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_HeelPortraitDetailDialogComponent__Close_b__12_0__, v3);
    byte_4B6AD6C = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_HeelPortraitDetailDialogComponent__Close_b__12_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
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
    sub_1BE4A70(p_openCallback, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_1BE4D28(0LL, v4);
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

  if ( (byte_4B6AD6B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_HeelPortraitDetailDialogComponent_OnClickClose__, method);
    byte_4B6AD6B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_HeelPortraitDetailDialogComponent_OnClickClose__;
    if ( (*((_BYTE *)Method_HeelPortraitDetailDialogComponent_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_HeelPortraitDetailDialogComponent_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
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
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UILabel_o *svtName; // x21
  UISprite_o *heelPortraitSprite; // x21
  int32_t eventId; // w22
  int32_t imageId; // w23
  System_String_o *v24; // x23
  int32_t OverwriteImageId; // w21
  System_String_o *v26; // x0
  int32_t v27; // w22
  UISprite_o *v28; // x21
  System_String_o *v29; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v31; // x20

  if ( (byte_4B6AD6A & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, heelPortraitEntity);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v7);
    sub_1BE4ACC(&System_Convert_TypeInfo, v8);
    sub_1BE4ACC(&Method_HeelPortraitDetailDialogComponent_EndOpen__, v9);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v10);
    sub_1BE4ACC(&StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, v11);
    byte_4B6AD6A = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.openCallback = openCallback;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.openCallback,
      (int64_t)openCallback,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
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
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v24 = System_Convert__ToString_63364716(imageId, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI_38766888(eventId, heelPortraitSprite, v24, 0LL);
      if ( HeelPortraitEntity__IsSetOverwriteImageId(heelPortraitEntity, 0LL) )
      {
        OverwriteImageId = HeelPortraitEntity__GetOverwriteImageId(
                             heelPortraitEntity,
                             heelPortraitEntity->fields.imageId,
                             0LL);
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        v26 = System_Convert__ToString_63364716(OverwriteImageId, 0LL);
        v27 = heelPortraitEntity->fields.eventId;
        v28 = this->fields.heelPortraitSprite;
        v29 = v26;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI_38766888(v27, v28, v29, 0LL);
      }
    }
    cancelButtonLb = this->fields.cancelButtonLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( cancelButtonLb )
    {
      UILabel__set_text(cancelButtonLb, (System_String_o *)gameObject, 0LL);
      this->fields.state = 1;
      v31 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_HeelPortraitDetailDialogComponent_EndOpen__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v31, 0, 0LL);
      return;
    }
LABEL_24:
    sub_1BE4D28(gameObject, v13);
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
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B6AD6D & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6AD6D = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BE4D28(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}