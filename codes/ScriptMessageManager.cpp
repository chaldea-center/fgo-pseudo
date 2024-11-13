void __fastcall ScriptMessageManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B17E74 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptMessageManager_TypeInfo, v1, v2);
    byte_4B17E74 = 1;
  }
  *ScriptMessageManager_TypeInfo->static_fields = (struct ScriptMessageManager_StaticFields)0x4452000043DC0000LL;
}


void __fastcall ScriptMessageManager___ctor(ScriptMessageManager_o *this, const MethodInfo *method)
{
  ScriptMessageCommonManager___ctor((ScriptMessageCommonManager_o *)this, 0LL);
}


void __fastcall ScriptMessageManager__Start(ScriptMessageManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_GameObject_o *rootObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  struct ScriptMessageWindow_o *defaultMessageWindow; // x8
  Il2CppObject *messageMainLabel; // x20
  struct ScriptMessageWindow_o *v28; // x8
  UILabel_o *v29; // x20
  UILabel_o *v30; // x21
  struct UnityEngine_Font_o *trueTypeFont; // x22
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  float v44; // s1
  float v45; // s1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v47; // x0
  __int64 v48; // x1
  ScriptMessageManager_c *v49; // x0

  if ( (byte_4B17E73 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_UILabel___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&ScriptMessageLabel_TypeInfo, v8, v9);
    sub_1BCA7E0(&ScriptMessageManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_25507/*"■"*/, v14, v15);
    byte_4B17E73 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       rootObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.rootPanel = (struct UIPanel_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.rootPanel,
    (int64_t)Component_object,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo, v24);
  rootObject = (UnityEngine_GameObject_o *)ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_915/*"-"*/, 0, v25);
  defaultMessageWindow = this->fields.defaultMessageWindow;
  this->fields.defaultFontSize = (int)rootObject;
  if ( !defaultMessageWindow )
    goto LABEL_15;
  messageMainLabel = (Il2CppObject *)defaultMessageWindow->fields.messageMainLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             messageMainLabel,
                                             (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_UILabel___);
  v28 = this->fields.defaultMessageWindow;
  if ( !v28 )
    goto LABEL_15;
  v29 = (UILabel_o *)rootObject;
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             (Il2CppObject *)v28->fields.messageRubyLabel,
                                             (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !v29 )
    goto LABEL_15;
  v30 = (UILabel_o *)rootObject;
  trueTypeFont = UILabel__get_trueTypeFont(v29, 0LL);
  this->fields.defaultFontType = trueTypeFont;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.defaultFontType,
    (int64_t)trueTypeFont,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.fontType = trueTypeFont;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fontType, (int64_t)trueTypeFont, v38, v39, v40, v41, v42, v43);
  UILabel__set_fontSize(v29, this->fields.defaultFontSize, 0LL);
  UILabel__set_text(v29, (System_String_o *)StringLiteral_25507/*"■"*/, 0LL);
  rootObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v29->klass->vtable._22_get_localSize.method)(
                                             v29,
                                             v29->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.defaultTextOnlyLineHeight = v44;
  if ( !v30 )
LABEL_15:
    sub_1BCAA3C(rootObject, method);
  this->fields.rubyFontSize = v30->fields.mFontSize;
  UILabel__set_text(v30, (System_String_o *)StringLiteral_25507/*"■"*/, 0LL);
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v30->klass->vtable._22_get_localSize.method)(
    v30,
    v30->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyLineHeight = v45;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v29, 0LL);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  v47 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0LL);
  UnityEngine_Object__Destroy_70154244(v47, 0LL);
  v49 = ScriptMessageManager_TypeInfo;
  if ( !ScriptMessageManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptMessageManager_TypeInfo, v48);
    v49 = ScriptMessageManager_TypeInfo;
  }
  *(struct ScriptMessageManager_StaticFields *)&this->fields.alignCenterBase = *v49->static_fields;
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__SetScreen((ScriptMessageCommonManager_o *)this, 0, 0, 0, 0, 1, 0LL);
}