void __fastcall ScriptMessageManager___cctor(const MethodInfo *method)
{
  if ( (byte_4390E80 & 1) == 0 )
  {
    sub_B775C4(&ScriptMessageManager_TypeInfo);
    byte_4390E80 = 1;
  }
  ScriptMessageManager_TypeInfo->static_fields->ALIGN_CENTER_BASE = 440.0;
  ScriptMessageManager_TypeInfo->static_fields->ALIGN_RIGHT_BASE = 840.0;
}


void __fastcall ScriptMessageManager__Start(ScriptMessageManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0
  struct UIPanel_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x2
  struct ScriptMessageWindow_o *defaultMessageWindow; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *messageMainLabel; // x20
  struct ScriptMessageWindow_o *v14; // x8
  UILabel_o *v15; // x20
  UILabel_o *v16; // x21
  struct UnityEngine_Font_o *trueTypeFont; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  float v30; // s1
  float v31; // s1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v33; // x0
  const MethodInfo *v34; // x1
  ScriptMessageManager_c *v35; // x0
  const MethodInfo *v36; // x6

  if ( (byte_4390E7F & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ScriptMessageLabel_TypeInfo);
    sub_B775C4(&ScriptMessageManager_TypeInfo);
    sub_B775C4(&StringLiteral_762/*"-"*/);
    sub_B775C4(&StringLiteral_24266/*"■"*/);
    byte_4390E7F = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_18;
  Component_srcLineSprite = (struct UIPanel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  rootObject,
                                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.rootPanel = Component_srcLineSprite;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.rootPanel,
    (System_Int32_array **)Component_srcLineSprite,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  rootObject = (UnityEngine_GameObject_o *)ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_762/*"-"*/, 0, v11);
  defaultMessageWindow = this->fields.defaultMessageWindow;
  this->fields.defaultFontSize = (int)rootObject;
  if ( !defaultMessageWindow )
    goto LABEL_18;
  messageMainLabel = (UnityEngine_UI_Dropdown_DropdownItem_o *)defaultMessageWindow->fields.messageMainLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             messageMainLabel,
                                             (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  v14 = this->fields.defaultMessageWindow;
  if ( !v14 )
    goto LABEL_18;
  v15 = (UILabel_o *)rootObject;
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)v14->fields.messageRubyLabel,
                                             (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !v15 )
    goto LABEL_18;
  v16 = (UILabel_o *)rootObject;
  trueTypeFont = UILabel__get_trueTypeFont(v15, 0LL);
  this->fields.defaultFontType = trueTypeFont;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.defaultFontType,
    (System_Int32_array **)trueTypeFont,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.fontType = trueTypeFont;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)trueTypeFont,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  UILabel__set_fontSize(v15, this->fields.defaultFontSize, 0LL);
  UILabel__set_text(v15, (System_String_o *)StringLiteral_24266/*"■"*/, 0LL);
  rootObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v15->klass->vtable._22_get_localSize.method)(
                                             v15,
                                             v15->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.defaultTextOnlyLineHeight = v30;
  if ( !v16 )
LABEL_18:
    sub_B7769C(rootObject, method);
  this->fields.rubyFontSize = v16->fields.mFontSize;
  UILabel__set_text(v16, (System_String_o *)StringLiteral_24266/*"■"*/, 0LL);
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v16->klass->vtable._22_get_localSize.method)(
    v16,
    v16->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyLineHeight = v31;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
  UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
  v33 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
  UnityEngine_Object__Destroy_36309980(v33, 0LL);
  v35 = ScriptMessageManager_TypeInfo;
  if ( (BYTE3(ScriptMessageManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageManager_TypeInfo);
    v35 = ScriptMessageManager_TypeInfo;
  }
  this->fields.alignCenterBase = v35->static_fields->ALIGN_CENTER_BASE;
  this->fields.alignRightBase = v35->static_fields->ALIGN_RIGHT_BASE;
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, v34);
  ScriptMessageCommonManager__SetScreen((ScriptMessageCommonManager_o *)this, 0, 0, 0, 0, 1, v36);
}