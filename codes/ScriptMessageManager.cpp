void ScriptMessageManager___cctor(const MethodInfo *method)
{
  if ( (byte_593A702 & 1) == 0 )
  {
    sub_21FFC50(&ScriptMessageManager_TypeInfo);
    byte_593A702 = 1;
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct ScriptMessageWindow_o *defaultMessageWindow; // x8
  Il2CppObject *messageMainLabel; // x20
  struct ScriptMessageWindow_o *v15; // x8
  UILabel_o *v16; // x20
  UILabel_o *v17; // x21
  struct UnityEngine_Font_o *trueTypeFont; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  float v31; // s1
  System_String_o *v32; // x1
  float v33; // s1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v35; // x0
  __int64 v36; // x1
  ScriptMessageManager_c *v37; // x0

  if ( (byte_593A701 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ScriptMessageLabel_TypeInfo);
    sub_21FFC50(&ScriptMessageManager_TypeInfo);
    sub_21FFC50(&StringLiteral_923/*"-"*/);
    sub_21FFC50(&StringLiteral_26705/*"■"*/);
    byte_593A701 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.rootPanel = (struct UIPanel_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.rootPanel,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( !*(&ScriptMessageLabel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v11);
  rootObject = (UnityEngine_GameObject_o *)ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_923/*"-"*/, 0, v12);
  defaultMessageWindow = this->fields.defaultMessageWindow;
  this->fields.defaultFontSize = (int)rootObject;
  if ( !defaultMessageWindow )
    goto LABEL_15;
  messageMainLabel = (Il2CppObject *)defaultMessageWindow->fields.messageMainLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             messageMainLabel,
                                             (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  v15 = this->fields.defaultMessageWindow;
  if ( !v15 )
    goto LABEL_15;
  v16 = (UILabel_o *)rootObject;
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             (Il2CppObject *)v15->fields.messageRubyLabel,
                                             (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !v16 )
    goto LABEL_15;
  v17 = (UILabel_o *)rootObject;
  trueTypeFont = UILabel__get_trueTypeFont(v16, 0);
  this->fields.defaultFontType = trueTypeFont;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.defaultFontType,
    (int32_t)trueTypeFont,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.fontType = trueTypeFont;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fontType,
    (int32_t)trueTypeFont,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  UILabel__set_fontSize(v16, this->fields.defaultFontSize, 0);
  UILabel__set_text(v16, (System_String_o *)StringLiteral_26705/*"■"*/, 0);
  rootObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))v16->klass->vtable._22_get_localSize.methodPtr)(
                                             v16,
                                             v16->klass->vtable._22_get_localSize.method);
  this->fields.defaultTextOnlyLineHeight = v31;
  if ( !v17 )
LABEL_15:
    sub_21FFECC(rootObject, method);
  v32 = (System_String_o *)StringLiteral_26705/*"■"*/;
  this->fields.rubyFontSize = v17->fields.mFontSize;
  UILabel__set_text(v17, v32, 0);
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *))v17->klass->vtable._22_get_localSize.methodPtr)(
    v17,
    v17->klass->vtable._22_get_localSize.method);
  this->fields.rubyLineHeight = v33;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
  v35 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v17, 0);
  UnityEngine_Object__Destroy_83246496(v35, 0);
  v37 = ScriptMessageManager_TypeInfo;
  if ( !*(&ScriptMessageManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageManager_TypeInfo, v36);
    v37 = ScriptMessageManager_TypeInfo;
  }
  *(struct ScriptMessageManager_StaticFields *)&this->fields.alignCenterBase = *v37->static_fields;
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, 0);
  ScriptMessageCommonManager__SetScreen((ScriptMessageCommonManager_o *)this, 0, 0, 0, 0, 1, 0);
}