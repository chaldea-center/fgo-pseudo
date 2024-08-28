void __fastcall ScriptMessageManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A21703 & 1) == 0 )
  {
    sub_1B715CC(&ScriptMessageManager_TypeInfo, v1);
    byte_4A21703 = 1;
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
  struct ScriptMessageWindow_o *defaultMessageWindow; // x8
  Il2CppObject *messageMainLabel; // x20
  struct ScriptMessageWindow_o *v15; // x8
  UILabel_o *v16; // x20
  UILabel_o *v17; // x21
  struct UnityEngine_Font_o *trueTypeFont; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  float v23; // s1
  float v24; // s1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v26; // x0
  ScriptMessageManager_c *v27; // x0

  if ( (byte_4A21702 & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    sub_1B715CC(&Method_UnityEngine_Object_Instantiate_UILabel___, v3);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v4);
    sub_1B715CC(&ScriptMessageLabel_TypeInfo, v5);
    sub_1B715CC(&ScriptMessageManager_TypeInfo, v6);
    sub_1B715CC(&StringLiteral_919/*"-"*/, v7);
    sub_1B715CC(&StringLiteral_25193/*"■"*/, v8);
    byte_4A21702 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.rootPanel = (struct UIPanel_o *)Component_object;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.rootPanel, (int32_t)Component_object, v11, v12);
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
                                             (const MethodInfo_2EDE770 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  v15 = this->fields.defaultMessageWindow;
  if ( !v15 )
    goto LABEL_15;
  v16 = (UILabel_o *)rootObject;
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             (Il2CppObject *)v15->fields.messageRubyLabel,
                                             (const MethodInfo_2EDE770 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !v16 )
    goto LABEL_15;
  v17 = (UILabel_o *)rootObject;
  trueTypeFont = UILabel__get_trueTypeFont(v16, 0LL);
  this->fields.defaultFontType = trueTypeFont;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.defaultFontType, (int32_t)trueTypeFont, v19, v20);
  this->fields.fontType = trueTypeFont;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.fontType, (int32_t)trueTypeFont, v21, v22);
  UILabel__set_fontSize(v16, this->fields.defaultFontSize, 0LL);
  UILabel__set_text(v16, (System_String_o *)StringLiteral_25193/*"■"*/, 0LL);
  rootObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v16->klass->vtable._22_get_localSize.method)(
                                             v16,
                                             v16->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.defaultTextOnlyLineHeight = v23;
  if ( !v17 )
LABEL_15:
    sub_1B71828(rootObject, method);
  this->fields.rubyFontSize = v17->fields.mFontSize;
  UILabel__set_text(v17, (System_String_o *)StringLiteral_25193/*"■"*/, 0LL);
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v17->klass->vtable._22_get_localSize.method)(
    v17,
    v17->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyLineHeight = v24;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
  UnityEngine_Object__Destroy_69257852(gameObject, 0LL);
  v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17, 0LL);
  UnityEngine_Object__Destroy_69257852(v26, 0LL);
  v27 = ScriptMessageManager_TypeInfo;
  if ( !ScriptMessageManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageManager_TypeInfo);
    v27 = ScriptMessageManager_TypeInfo;
  }
  *(struct ScriptMessageManager_StaticFields *)&this->fields.alignCenterBase = *v27->static_fields;
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__SetScreen((ScriptMessageCommonManager_o *)this, 0, 0, 0, 0, 1, 0LL);
}