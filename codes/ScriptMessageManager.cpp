void ScriptMessageManager___cctor(const MethodInfo *method)
{
  if ( (byte_4C399C7 & 1) == 0 )
  {
    sub_1C32C20(&ScriptMessageManager_TypeInfo);
    byte_4C399C7 = 1;
  }
  *ScriptMessageManager_TypeInfo->static_fields = (struct ScriptMessageManager_StaticFields)0x4452000043DC0000LL;
}


void ScriptMessageManager___ctor(ScriptMessageManager_o *this, const MethodInfo *method)
{
  ScriptMessageCommonManager___ctor((ScriptMessageCommonManager_o *)this, 0);
}


void ScriptMessageManager__Start(ScriptMessageManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *rootObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2
  struct ScriptMessageWindow_o *defaultMessageWindow; // x8
  Il2CppObject *messageMainLabel; // x20
  struct ScriptMessageWindow_o *v10; // x8
  UILabel_o *v11; // x20
  UILabel_o *v12; // x21
  struct UnityEngine_Font_o *trueTypeFont; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  float v18; // s1
  float v19; // s1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v21; // x0
  ScriptMessageManager_c *v22; // x0

  if ( (byte_4C399C6 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&ScriptMessageLabel_TypeInfo);
    sub_1C32C20(&ScriptMessageManager_TypeInfo);
    sub_1C32C20(&StringLiteral_861/*"-"*/);
    sub_1C32C20(&StringLiteral_25351/*"■"*/);
    byte_4C399C6 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.rootPanel = (struct UIPanel_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rootPanel, (int32_t)Component_object, v5, v6);
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  rootObject = (UnityEngine_GameObject_o *)ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_861/*"-"*/, 0, v7);
  defaultMessageWindow = this->fields.defaultMessageWindow;
  this->fields.defaultFontSize = (int)rootObject;
  if ( !defaultMessageWindow )
    goto LABEL_15;
  messageMainLabel = (Il2CppObject *)defaultMessageWindow->fields.messageMainLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             messageMainLabel,
                                             (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  v10 = this->fields.defaultMessageWindow;
  if ( !v10 )
    goto LABEL_15;
  v11 = (UILabel_o *)rootObject;
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             (Il2CppObject *)v10->fields.messageRubyLabel,
                                             (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !v11 )
    goto LABEL_15;
  v12 = (UILabel_o *)rootObject;
  trueTypeFont = UILabel__get_trueTypeFont(v11, 0);
  this->fields.defaultFontType = trueTypeFont;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.defaultFontType, (int32_t)trueTypeFont, v14, v15);
  this->fields.fontType = trueTypeFont;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.fontType, (int32_t)trueTypeFont, v16, v17);
  UILabel__set_fontSize(v11, this->fields.defaultFontSize, 0);
  UILabel__set_text(v11, (System_String_o *)StringLiteral_25351/*"■"*/, 0);
  rootObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))v11->klass->vtable._22_get_localSize.methodPtr)(
                                             v11,
                                             v11->klass->vtable._22_get_localSize.method);
  this->fields.defaultTextOnlyLineHeight = v18;
  if ( !v12 )
LABEL_15:
    sub_1C32E7C(rootObject);
  this->fields.rubyFontSize = v12->fields.mFontSize;
  UILabel__set_text(v12, (System_String_o *)StringLiteral_25351/*"■"*/, 0);
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *))v12->klass->vtable._22_get_localSize.methodPtr)(
    v12,
    v12->klass->vtable._22_get_localSize.method);
  this->fields.rubyLineHeight = v19;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0);
  UnityEngine_Object__Destroy_71223640(gameObject, 0);
  v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0);
  UnityEngine_Object__Destroy_71223640(v21, 0);
  v22 = ScriptMessageManager_TypeInfo;
  if ( !ScriptMessageManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageManager_TypeInfo);
    v22 = ScriptMessageManager_TypeInfo;
  }
  *(struct ScriptMessageManager_StaticFields *)&this->fields.alignCenterBase = *v22->static_fields;
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, 0);
  ScriptMessageCommonManager__SetScreen((ScriptMessageCommonManager_o *)this, 0, 0, 0, 0, 1, 0);
}