void ScriptMessageManager___cctor(const MethodInfo *method)
{
  if ( (byte_4D329E4 & 1) == 0 )
  {
    sub_1C93AD4(&ScriptMessageManager_TypeInfo);
    byte_4D329E4 = 1;
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  const MethodInfo *v11; // x2
  struct ScriptMessageWindow_o *defaultMessageWindow; // x8
  Il2CppObject *messageMainLabel; // x20
  struct ScriptMessageWindow_o *v14; // x8
  UILabel_o *v15; // x20
  UILabel_o *v16; // x21
  struct UnityEngine_Font_o *trueTypeFont; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  float v30; // s1
  float v31; // s1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v33; // x0
  ScriptMessageManager_c *v34; // x0

  if ( (byte_4D329E3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&ScriptMessageLabel_TypeInfo);
    sub_1C93AD4(&ScriptMessageManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_859/*"-"*/);
    sub_1C93AD4(&StringLiteral_25682/*"■"*/);
    byte_4D329E3 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.rootPanel = (struct UIPanel_o *)Component_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.rootPanel,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  rootObject = (UnityEngine_GameObject_o *)ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_859/*"-"*/, 0, v11);
  defaultMessageWindow = this->fields.defaultMessageWindow;
  this->fields.defaultFontSize = (int)rootObject;
  if ( !defaultMessageWindow )
    goto LABEL_15;
  messageMainLabel = (Il2CppObject *)defaultMessageWindow->fields.messageMainLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             messageMainLabel,
                                             (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_UILabel___);
  v14 = this->fields.defaultMessageWindow;
  if ( !v14 )
    goto LABEL_15;
  v15 = (UILabel_o *)rootObject;
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             (Il2CppObject *)v14->fields.messageRubyLabel,
                                             (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !v15 )
    goto LABEL_15;
  v16 = (UILabel_o *)rootObject;
  trueTypeFont = UILabel__get_trueTypeFont(v15, 0);
  this->fields.defaultFontType = trueTypeFont;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.defaultFontType,
    (int32_t)trueTypeFont,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.fontType = trueTypeFont;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.fontType,
    (int32_t)trueTypeFont,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  UILabel__set_fontSize(v15, this->fields.defaultFontSize, 0);
  UILabel__set_text(v15, (System_String_o *)StringLiteral_25682/*"■"*/, 0);
  rootObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))v15->klass->vtable._22_get_localSize.methodPtr)(
                                             v15,
                                             v15->klass->vtable._22_get_localSize.method);
  this->fields.defaultTextOnlyLineHeight = v30;
  if ( !v16 )
LABEL_15:
    sub_1C93D2C(rootObject, method);
  this->fields.rubyFontSize = v16->fields.mFontSize;
  UILabel__set_text(v16, (System_String_o *)StringLiteral_25682/*"■"*/, 0);
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *))v16->klass->vtable._22_get_localSize.methodPtr)(
    v16,
    v16->klass->vtable._22_get_localSize.method);
  this->fields.rubyLineHeight = v31;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0);
  UnityEngine_Object__Destroy_72119908(gameObject, 0);
  v33 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0);
  UnityEngine_Object__Destroy_72119908(v33, 0);
  v34 = ScriptMessageManager_TypeInfo;
  if ( !ScriptMessageManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageManager_TypeInfo);
    v34 = ScriptMessageManager_TypeInfo;
  }
  *(struct ScriptMessageManager_StaticFields *)&this->fields.alignCenterBase = *v34->static_fields;
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, 0);
  ScriptMessageCommonManager__SetScreen((ScriptMessageCommonManager_o *)this, 0, 0, 0, 0, 1, 0);
}