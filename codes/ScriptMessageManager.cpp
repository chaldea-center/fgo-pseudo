void __fastcall ScriptMessageManager___cctor(const MethodInfo *method)
{
  if ( (byte_4A5CDAA & 1) == 0 )
  {
    sub_1B885B0(&ScriptMessageManager_TypeInfo);
    byte_4A5CDAA = 1;
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
  int32_t v5; // w2
  int32_t v6; // w3
  struct ScriptMessageWindow_o *defaultMessageWindow; // x8
  Il2CppObject *messageMainLabel; // x20
  struct ScriptMessageWindow_o *v9; // x8
  UILabel_o *v10; // x20
  UILabel_o *v11; // x21
  struct UnityEngine_Font_o *trueTypeFont; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  float v17; // s1
  float v18; // s1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v20; // x0
  ScriptMessageManager_c *v21; // x0

  if ( (byte_4A5CDA9 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    sub_1B885B0(&ScriptMessageManager_TypeInfo);
    sub_1B885B0(&StringLiteral_919/*"-"*/);
    sub_1B885B0(&StringLiteral_25252/*"■"*/);
    byte_4A5CDA9 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.rootPanel = (struct UIPanel_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rootPanel, (int32_t)Component_object, v5, v6);
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  rootObject = (UnityEngine_GameObject_o *)ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_919/*"-"*/, 0, 0LL);
  defaultMessageWindow = this->fields.defaultMessageWindow;
  this->fields.defaultFontSize = (int)rootObject;
  if ( !defaultMessageWindow )
    goto LABEL_15;
  messageMainLabel = (Il2CppObject *)defaultMessageWindow->fields.messageMainLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             messageMainLabel,
                                             (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_UILabel___);
  v9 = this->fields.defaultMessageWindow;
  if ( !v9 )
    goto LABEL_15;
  v10 = (UILabel_o *)rootObject;
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             (Il2CppObject *)v9->fields.messageRubyLabel,
                                             (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !v10 )
    goto LABEL_15;
  v11 = (UILabel_o *)rootObject;
  trueTypeFont = UILabel__get_trueTypeFont(v10, 0LL);
  this->fields.defaultFontType = trueTypeFont;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.defaultFontType, (int32_t)trueTypeFont, v13, v14);
  this->fields.fontType = trueTypeFont;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fontType, (int32_t)trueTypeFont, v15, v16);
  UILabel__set_fontSize(v10, this->fields.defaultFontSize, 0LL);
  UILabel__set_text(v10, (System_String_o *)StringLiteral_25252/*"■"*/, 0LL);
  rootObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v10->klass->vtable._22_get_localSize.method)(
                                             v10,
                                             v10->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.defaultTextOnlyLineHeight = v17;
  if ( !v11 )
LABEL_15:
    sub_1B8880C(rootObject, method);
  this->fields.rubyFontSize = v11->fields.mFontSize;
  UILabel__set_text(v11, (System_String_o *)StringLiteral_25252/*"■"*/, 0LL);
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v11->klass->vtable._22_get_localSize.method)(
    v11,
    v11->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyLineHeight = v18;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
  v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
  UnityEngine_Object__Destroy_69459380(v20, 0LL);
  v21 = ScriptMessageManager_TypeInfo;
  if ( !ScriptMessageManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageManager_TypeInfo);
    v21 = ScriptMessageManager_TypeInfo;
  }
  *(struct ScriptMessageManager_StaticFields *)&this->fields.alignCenterBase = *v21->static_fields;
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__SetScreen((ScriptMessageCommonManager_o *)this, 0, 0, 0, 0, 1, 0LL);
}