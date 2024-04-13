void __fastcall ScriptMessageManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE452 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptMessageManager_TypeInfo, v1, v2, v3);
    byte_42EE452 = 1;
  }
  ScriptMessageManager_TypeInfo->static_fields->ALIGN_CENTER_BASE = 440.0;
  ScriptMessageManager_TypeInfo->static_fields->ALIGN_RIGHT_BASE = 840.0;
}


void __fastcall ScriptMessageManager__Start(ScriptMessageManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_GameObject_o *rootObject; // x0
  struct UIPanel_o *Component_srcLineSprite; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x2
  struct ScriptMessageWindow_o *defaultMessageWindow; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *messageMainLabel; // x20
  struct ScriptMessageWindow_o *v34; // x8
  UILabel_o *v35; // x20
  UILabel_o *v36; // x21
  struct UnityEngine_Font_o *trueTypeFont; // x22
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  float v50; // s1
  float v51; // s1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v53; // x0
  const MethodInfo *v54; // x1
  ScriptMessageManager_c *v55; // x0
  const MethodInfo *v56; // x6

  if ( (byte_42EE451 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_UILabel___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&ScriptMessageLabel_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&ScriptMessageManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_755/*"-"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_24090/*"■"*/, v20, v21, v22);
    byte_42EE451 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_18;
  Component_srcLineSprite = (struct UIPanel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  rootObject,
                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.rootPanel = Component_srcLineSprite;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rootPanel,
    (System_Int32_array **)Component_srcLineSprite,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  rootObject = (UnityEngine_GameObject_o *)ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_755/*"-"*/, 0, v31);
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
                                             (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  v34 = this->fields.defaultMessageWindow;
  if ( !v34 )
    goto LABEL_18;
  v35 = (UILabel_o *)rootObject;
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)v34->fields.messageRubyLabel,
                                             (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !v35 )
    goto LABEL_18;
  v36 = (UILabel_o *)rootObject;
  trueTypeFont = UILabel__get_trueTypeFont(v35, 0LL);
  this->fields.defaultFontType = trueTypeFont;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.defaultFontType,
    (System_Int32_array **)trueTypeFont,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.fontType = trueTypeFont;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)trueTypeFont,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  UILabel__set_fontSize(v35, this->fields.defaultFontSize, 0LL);
  UILabel__set_text(v35, (System_String_o *)StringLiteral_24090/*"■"*/, 0LL);
  rootObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v35->klass->vtable._22_get_localSize.method)(
                                             v35,
                                             v35->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.defaultTextOnlyLineHeight = v50;
  if ( !v36 )
LABEL_18:
    sub_B5D69C(rootObject, method);
  this->fields.rubyFontSize = v36->fields.mFontSize;
  UILabel__set_text(v36, (System_String_o *)StringLiteral_24090/*"■"*/, 0LL);
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v36->klass->vtable._22_get_localSize.method)(
    v36,
    v36->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyLineHeight = v51;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v35, 0LL);
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  v53 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v36, 0LL);
  UnityEngine_Object__Destroy_35620236(v53, 0LL);
  v55 = ScriptMessageManager_TypeInfo;
  if ( (BYTE3(ScriptMessageManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageManager_TypeInfo);
    v55 = ScriptMessageManager_TypeInfo;
  }
  this->fields.alignCenterBase = v55->static_fields->ALIGN_CENTER_BASE;
  this->fields.alignRightBase = v55->static_fields->ALIGN_RIGHT_BASE;
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, v54);
  ScriptMessageCommonManager__SetScreen((ScriptMessageCommonManager_o *)this, 0, 0, 0, 0, 1, v56);
}