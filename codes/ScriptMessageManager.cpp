void __fastcall ScriptMessageManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4219FF3 & 1) == 0 )
  {
    sub_B0D8A4(&ScriptMessageManager_TypeInfo, v1);
    byte_4219FF3 = 1;
  }
  ScriptMessageManager_TypeInfo->static_fields->ALIGN_CENTER_BASE = 440.0;
  ScriptMessageManager_TypeInfo->static_fields->ALIGN_RIGHT_BASE = 840.0;
}


void __fastcall ScriptMessageManager__Start(ScriptMessageManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *rootObject; // x0
  struct UIPanel_o *Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2
  struct UnityEngine_GameObject_o *mainPrefab; // x20
  UILabel_o *v20; // x20
  UILabel_o *v21; // x21
  struct UnityEngine_Font_o *trueTypeFont; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  float v35; // s1
  float v36; // s1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v38; // x0
  const MethodInfo *v39; // x6
  ScriptMessageManager_c *v40; // x0

  if ( (byte_4219FF2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v3);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&ScriptMessageLabel_TypeInfo, v6);
    sub_B0D8A4(&ScriptMessageManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_753/*"-"*/, v8);
    sub_B0D8A4(&StringLiteral_23855/*"■"*/, v9);
    byte_4219FF2 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_18;
  Component_srcLineSprite = (struct UIPanel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  rootObject,
                                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.rootPanel = Component_srcLineSprite;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.rootPanel,
    (System_Int32_array **)Component_srcLineSprite,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  }
  this->fields.defaultFontSize = ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_753/*"-"*/, 0, v18);
  mainPrefab = this->fields.mainPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)mainPrefab,
                                             (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !rootObject )
    goto LABEL_18;
  v20 = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                       rootObject,
                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.rubyPrefab,
                                             (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !rootObject )
    goto LABEL_18;
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             rootObject,
                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !v20 )
    goto LABEL_18;
  v21 = (UILabel_o *)rootObject;
  trueTypeFont = UILabel__get_trueTypeFont(v20, 0LL);
  this->fields.defaultFontType = trueTypeFont;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.defaultFontType,
    (System_Int32_array **)trueTypeFont,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.fontType = trueTypeFont;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)trueTypeFont,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  UILabel__set_fontSize(v20, this->fields.defaultFontSize, 0LL);
  UILabel__set_text(v20, (System_String_o *)StringLiteral_23855/*"■"*/, 0LL);
  rootObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v20->klass->vtable._22_get_localSize.method)(
                                             v20,
                                             v20->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.defaultTextOnlyLineHeight = v35;
  if ( !v21 )
LABEL_18:
    sub_B0D97C(rootObject);
  this->fields.rubyFontSize = v21->fields.mFontSize;
  UILabel__set_text(v21, (System_String_o *)StringLiteral_23855/*"■"*/, 0LL);
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v21->klass->vtable._22_get_localSize.method)(
    v21,
    v21->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyLineHeight = v36;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0LL);
  UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
  v38 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0LL);
  UnityEngine_Object__Destroy_34935276(v38, 0LL);
  v40 = ScriptMessageManager_TypeInfo;
  if ( (BYTE3(ScriptMessageManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptMessageManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageManager_TypeInfo);
    v40 = ScriptMessageManager_TypeInfo;
  }
  this->fields.alignCenterBase = v40->static_fields->ALIGN_CENTER_BASE;
  this->fields.alignRightBase = v40->static_fields->ALIGN_RIGHT_BASE;
  ScriptMessageCommonManager__SetScreen((ScriptMessageCommonManager_o *)this, 0, 0, 0, 0, 1, v39);
}