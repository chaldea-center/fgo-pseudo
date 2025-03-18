void __fastcall ScriptMessageManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C23CD6 & 1) == 0 )
  {
    sub_1C3B764(&ScriptMessageManager_TypeInfo, v1);
    byte_4C23CD6 = 1;
  }
  *ScriptMessageManager_TypeInfo->static_fields = (struct ScriptMessageManager_StaticFields)0x4452000043DC0000LL;
}


void __fastcall ScriptMessageManager___ctor(ScriptMessageManager_o *this, const MethodInfo *method)
{
  ScriptMessageCommonManager___ctor((ScriptMessageCommonManager_o *)this, 0LL);
}


void __fastcall ScriptMessageManager__Start(ScriptMessageManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *rootObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x2
  struct ScriptMessageWindow_o *defaultMessageWindow; // x8
  Il2CppObject *messageMainLabel; // x20
  struct ScriptMessageWindow_o *v20; // x8
  UILabel_o *v21; // x20
  UILabel_o *v22; // x21
  struct UnityEngine_Font_o *trueTypeFont; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  float v36; // s1
  float v37; // s1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v39; // x0
  ScriptMessageManager_c *v40; // x0

  if ( (byte_4C23CD5 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_UILabel___, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    sub_1C3B764(&ScriptMessageLabel_TypeInfo, v5);
    sub_1C3B764(&ScriptMessageManager_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_897/*"--MM--Z"*/, v7);
    sub_1C3B764(&StringLiteral_25771, v8);
    byte_4C23CD5 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.rootPanel = (struct UIPanel_o *)Component_object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.rootPanel,
    (int64_t)Component_object,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  rootObject = (UnityEngine_GameObject_o *)ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_897/*"--MM--Z"*/, 0, v17);
  defaultMessageWindow = this->fields.defaultMessageWindow;
  this->fields.defaultFontSize = (int)rootObject;
  if ( !defaultMessageWindow )
    goto LABEL_15;
  messageMainLabel = (Il2CppObject *)defaultMessageWindow->fields.messageMainLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             messageMainLabel,
                                             (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  v20 = this->fields.defaultMessageWindow;
  if ( !v20 )
    goto LABEL_15;
  v21 = (UILabel_o *)rootObject;
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             (Il2CppObject *)v20->fields.messageRubyLabel,
                                             (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !v21 )
    goto LABEL_15;
  v22 = (UILabel_o *)rootObject;
  trueTypeFont = UILabel__get_trueTypeFont(v21, 0LL);
  this->fields.defaultFontType = trueTypeFont;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.defaultFontType,
    (int64_t)trueTypeFont,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.fontType = trueTypeFont;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.fontType, (int64_t)trueTypeFont, v30, v31, v32, v33, v34, v35);
  UILabel__set_fontSize(v21, this->fields.defaultFontSize, 0LL);
  UILabel__set_text(v21, (System_String_o *)StringLiteral_25771, 0LL);
  rootObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v21->klass->vtable._22_get_localSize.method)(
                                             v21,
                                             v21->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.defaultTextOnlyLineHeight = v36;
  if ( !v22 )
LABEL_15:
    sub_1C3B9C0(rootObject, method);
  this->fields.rubyFontSize = v22->fields.mFontSize;
  UILabel__set_text(v22, (System_String_o *)StringLiteral_25771, 0LL);
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v22->klass->vtable._22_get_localSize.method)(
    v22,
    v22->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyLineHeight = v37;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0LL);
  UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
  v39 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
  UnityEngine_Object__Destroy_71122748(v39, 0LL);
  v40 = ScriptMessageManager_TypeInfo;
  if ( !ScriptMessageManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageManager_TypeInfo);
    v40 = ScriptMessageManager_TypeInfo;
  }
  *(struct ScriptMessageManager_StaticFields *)&this->fields.alignCenterBase = *v40->static_fields;
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__SetScreen((ScriptMessageCommonManager_o *)this, 0, 0, 0, 0, 1, 0LL);
}