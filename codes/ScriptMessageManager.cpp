void __fastcall ScriptMessageManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AB79A9 & 1) == 0 )
  {
    sub_1BAB41C(&ScriptMessageManager_TypeInfo, v1);
    byte_4AB79A9 = 1;
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
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2
  struct ScriptMessageWindow_o *defaultMessageWindow; // x8
  Il2CppObject *messageMainLabel; // x20
  struct ScriptMessageWindow_o *v16; // x8
  UILabel_o *v17; // x20
  UILabel_o *v18; // x21
  struct UnityEngine_Font_o *trueTypeFont; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  float v24; // s1
  float v25; // s1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v27; // x0
  ScriptMessageManager_c *v28; // x0

  if ( (byte_4AB79A8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    sub_1BAB41C(&Method_UnityEngine_Object_Instantiate_UILabel___, v3);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v4);
    sub_1BAB41C(&ScriptMessageLabel_TypeInfo, v5);
    sub_1BAB41C(&ScriptMessageManager_TypeInfo, v6);
    sub_1BAB41C(&StringLiteral_915/*"-"*/, v7);
    sub_1BAB41C(&StringLiteral_25295/*"■"*/, v8);
    byte_4AB79A8 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.rootPanel = (struct UIPanel_o *)Component_object;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.rootPanel, (int32_t)Component_object, v11, v12);
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  rootObject = (UnityEngine_GameObject_o *)ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_915/*"-"*/, 0, v13);
  defaultMessageWindow = this->fields.defaultMessageWindow;
  this->fields.defaultFontSize = (int)rootObject;
  if ( !defaultMessageWindow )
    goto LABEL_15;
  messageMainLabel = (Il2CppObject *)defaultMessageWindow->fields.messageMainLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             messageMainLabel,
                                             (const MethodInfo_2F483D8 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  v16 = this->fields.defaultMessageWindow;
  if ( !v16 )
    goto LABEL_15;
  v17 = (UILabel_o *)rootObject;
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             (Il2CppObject *)v16->fields.messageRubyLabel,
                                             (const MethodInfo_2F483D8 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !v17 )
    goto LABEL_15;
  v18 = (UILabel_o *)rootObject;
  trueTypeFont = UILabel__get_trueTypeFont(v17, 0LL);
  this->fields.defaultFontType = trueTypeFont;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.defaultFontType, (int32_t)trueTypeFont, v20, v21);
  this->fields.fontType = trueTypeFont;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.fontType, (int32_t)trueTypeFont, v22, v23);
  UILabel__set_fontSize(v17, this->fields.defaultFontSize, 0LL);
  UILabel__set_text(v17, (System_String_o *)StringLiteral_25295/*"■"*/, 0LL);
  rootObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v17->klass->vtable._22_get_localSize.method)(
                                             v17,
                                             v17->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.defaultTextOnlyLineHeight = v24;
  if ( !v18 )
LABEL_15:
    sub_1BAB678(rootObject, method);
  this->fields.rubyFontSize = v18->fields.mFontSize;
  UILabel__set_text(v18, (System_String_o *)StringLiteral_25295/*"■"*/, 0LL);
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v18->klass->vtable._22_get_localSize.method)(
    v18,
    v18->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyLineHeight = v25;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17, 0LL);
  UnityEngine_Object__Destroy_69800620(gameObject, 0LL);
  v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
  UnityEngine_Object__Destroy_69800620(v27, 0LL);
  v28 = ScriptMessageManager_TypeInfo;
  if ( !ScriptMessageManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageManager_TypeInfo);
    v28 = ScriptMessageManager_TypeInfo;
  }
  *(struct ScriptMessageManager_StaticFields *)&this->fields.alignCenterBase = *v28->static_fields;
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__SetScreen((ScriptMessageCommonManager_o *)this, 0, 0, 0, 0, 1, 0LL);
}