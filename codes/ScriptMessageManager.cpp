void __fastcall ScriptMessageManager___cctor(const MethodInfo *method)
{
  if ( (byte_4BDE268 & 1) == 0 )
  {
    sub_1C21E38(&ScriptMessageManager_TypeInfo);
    byte_4BDE268 = 1;
  }
  *ScriptMessageManager_TypeInfo->static_fields = (struct ScriptMessageManager_StaticFields)0x4452000043DC0000LL;
}


void __fastcall ScriptMessageManager___ctor(ScriptMessageManager_o *this, const MethodInfo *method)
{
  ScriptMessageCommonManager___ctor((ScriptMessageCommonManager_o *)this, 0LL);
}


void __fastcall ScriptMessageManager__Start(ScriptMessageManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x2
  struct ScriptMessageWindow_o *defaultMessageWindow; // x8
  Il2CppObject *messageMainLabel; // x20
  struct ScriptMessageWindow_o *v14; // x8
  UILabel_o *v15; // x20
  UILabel_o *v16; // x21
  struct UnityEngine_Font_o *trueTypeFont; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  float v30; // s1
  float v31; // s1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v33; // x0
  ScriptMessageManager_c *v34; // x0

  if ( (byte_4BDE267 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ScriptMessageLabel_TypeInfo);
    sub_1C21E38(&ScriptMessageManager_TypeInfo);
    sub_1C21E38(&StringLiteral_918/*"-"*/);
    sub_1C21E38(&StringLiteral_25701/*"■"*/);
    byte_4BDE267 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.rootPanel = (struct UIPanel_o *)Component_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.rootPanel, (int64_t)Component_object, v5, v6, v7, v8, v9, v10);
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  rootObject = (UnityEngine_GameObject_o *)ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_918/*"-"*/, 0, v11);
  defaultMessageWindow = this->fields.defaultMessageWindow;
  this->fields.defaultFontSize = (int)rootObject;
  if ( !defaultMessageWindow )
    goto LABEL_15;
  messageMainLabel = (Il2CppObject *)defaultMessageWindow->fields.messageMainLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             messageMainLabel,
                                             (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_UILabel___);
  v14 = this->fields.defaultMessageWindow;
  if ( !v14 )
    goto LABEL_15;
  v15 = (UILabel_o *)rootObject;
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             (Il2CppObject *)v14->fields.messageRubyLabel,
                                             (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !v15 )
    goto LABEL_15;
  v16 = (UILabel_o *)rootObject;
  trueTypeFont = UILabel__get_trueTypeFont(v15, 0LL);
  this->fields.defaultFontType = trueTypeFont;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.defaultFontType,
    (int64_t)trueTypeFont,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.fontType = trueTypeFont;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.fontType, (int64_t)trueTypeFont, v24, v25, v26, v27, v28, v29);
  UILabel__set_fontSize(v15, this->fields.defaultFontSize, 0LL);
  UILabel__set_text(v15, (System_String_o *)StringLiteral_25701/*"■"*/, 0LL);
  rootObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v15->klass->vtable._22_get_localSize.method)(
                                             v15,
                                             v15->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.defaultTextOnlyLineHeight = v30;
  if ( !v16 )
LABEL_15:
    sub_1C22094(rootObject, method);
  this->fields.rubyFontSize = v16->fields.mFontSize;
  UILabel__set_text(v16, (System_String_o *)StringLiteral_25701/*"■"*/, 0LL);
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v16->klass->vtable._22_get_localSize.method)(
    v16,
    v16->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyLineHeight = v31;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
  UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
  v33 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
  UnityEngine_Object__Destroy_70869612(v33, 0LL);
  v34 = ScriptMessageManager_TypeInfo;
  if ( !ScriptMessageManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageManager_TypeInfo);
    v34 = ScriptMessageManager_TypeInfo;
  }
  *(struct ScriptMessageManager_StaticFields *)&this->fields.alignCenterBase = *v34->static_fields;
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__SetScreen((ScriptMessageCommonManager_o *)this, 0, 0, 0, 0, 1, 0LL);
}