void __fastcall ScriptFaceMessageManager___cctor(const MethodInfo *method)
{
  if ( (byte_4BDE1C0 & 1) == 0 )
  {
    sub_1C21E38(&ScriptFaceMessageManager_TypeInfo);
    byte_4BDE1C0 = 1;
  }
  LODWORD(ScriptFaceMessageManager_TypeInfo->static_fields->FACE_IMAGE_WIDTH) = (struct ScriptFaceMessageManager_StaticFields)1120403456;
}


void __fastcall ScriptFaceMessageManager___ctor(ScriptFaceMessageManager_o *this, const MethodInfo *method)
{
  int64_t v3; // x0
  int64_t v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int v11; // w8
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int v18; // w8
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int v25; // w8
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  ScriptFaceMessageManager_c *v32; // x8
  int64_t v33; // x20
  int v34; // w9
  float FACE_IMAGE_WIDTH; // s0
  const MethodInfo *v36; // x1

  if ( (byte_4BDE1BF & 1) == 0 )
  {
    sub_1C21E38(&ScriptFaceMessageManager_TypeInfo);
    sub_1C21E38(&float___TypeInfo);
    sub_1C21E38(&UnityEngine_Vector2___TypeInfo);
    sub_1C21E38(&UnityEngine_Vector3___TypeInfo);
    byte_4BDE1BF = 1;
  }
  v3 = sub_1C21EE0(float___TypeInfo, 2LL);
  if ( !v3 )
    goto LABEL_19;
  v11 = *(_DWORD *)(v3 + 24);
  v4 = v3;
  if ( !v11 )
    goto LABEL_18;
  *(_DWORD *)(v3 + 32) = 1133576192;
  if ( v11 == 1 )
    goto LABEL_18;
  *(_DWORD *)(v3 + 36) = 1138491392;
  this->fields.ALIGN_CENTER_BASE = (struct System_Single_array *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.ALIGN_CENTER_BASE, v3, v5, v6, v7, v8, v9, v10);
  v3 = sub_1C21EE0(float___TypeInfo, 2LL);
  if ( !v3 )
    goto LABEL_19;
  v18 = *(_DWORD *)(v3 + 24);
  v4 = v3;
  if ( !v18 )
    goto LABEL_18;
  *(_DWORD *)(v3 + 32) = 1143767040;
  if ( v18 == 1 )
    goto LABEL_18;
  *(_DWORD *)(v3 + 36) = 1146224640;
  this->fields.ALIGN_RIGHT_BASE = (struct System_Single_array *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.ALIGN_RIGHT_BASE, v3, v12, v13, v14, v15, v16, v17);
  v3 = sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
  if ( !v3 )
    goto LABEL_19;
  v25 = *(_DWORD *)(v3 + 24);
  v4 = v3;
  if ( !v25 || (*(_DWORD *)(v3 + 40) = 0, *(_QWORD *)(v3 + 32) = 0x4150000042200000LL, v25 == 1) )
LABEL_18:
    sub_1C2209C(v3, v4);
  *(_DWORD *)(v3 + 52) = 0;
  *(_QWORD *)(v3 + 44) = 0x41500000C2CE0000LL;
  this->fields.TALK_NAME_ANCHOR_POS = (struct UnityEngine_Vector3_array *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.TALK_NAME_ANCHOR_POS, v3, v19, v20, v21, v22, v23, v24);
  v3 = sub_1C21EE0(UnityEngine_Vector2___TypeInfo, 2LL);
  v32 = ScriptFaceMessageManager_TypeInfo;
  v33 = v3;
  if ( !ScriptFaceMessageManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptFaceMessageManager_TypeInfo);
    v32 = ScriptFaceMessageManager_TypeInfo;
  }
  if ( !v33 )
LABEL_19:
    sub_1C22094(v3, v4);
  v34 = *(_DWORD *)(v33 + 24);
  if ( !v34 )
    goto LABEL_18;
  FACE_IMAGE_WIDTH = v32->static_fields->FACE_IMAGE_WIDTH;
  *(_DWORD *)(v33 + 36) = 1065353216;
  *(float *)(v33 + 32) = -FACE_IMAGE_WIDTH;
  if ( v34 == 1 )
    goto LABEL_18;
  *(_QWORD *)(v33 + 40) = 0LL;
  this->fields.MESSAGE_SCROLL_POS = (struct UnityEngine_Vector2_array *)v33;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.MESSAGE_SCROLL_POS, v33, v26, v27, v28, v29, v30, v31);
  ScriptMessageCommonManager___ctor((ScriptMessageCommonManager_o *)this, v36);
}


void __fastcall ScriptFaceMessageManager__CloseDown(
        ScriptFaceMessageManager_o *this,
        bool isFast,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall ScriptFaceMessageManager__GetFaceIconPosition(
        ScriptFaceMessageManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *faceIcon; // x0
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  faceIcon = (UnityEngine_Component_o *)this->fields.faceIcon;
  if ( !faceIcon || (faceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(faceIcon, 0LL)) == 0LL )
    sub_1C22094(faceIcon, method);
  *(UnityEngine_Vector3_o *)&v3 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)faceIcon, 0LL);
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


bool __fastcall ScriptFaceMessageManager__IsEnableCloseDown(ScriptFaceMessageManager_o *this, const MethodInfo *method)
{
  return 0;
}


bool __fastcall ScriptFaceMessageManager__IsEnableOpenUp(ScriptFaceMessageManager_o *this, const MethodInfo *method)
{
  return 0;
}


void __fastcall ScriptFaceMessageManager__OpenUp(
        ScriptFaceMessageManager_o *this,
        bool isFast,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptFaceMessageManager__SetFaceIconContentSize(
        ScriptFaceMessageManager_o *this,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  UIWidget_o *faceIcon; // x0

  faceIcon = this->fields.faceIcon;
  if ( !faceIcon || (UIWidget__set_width(faceIcon, width, 0LL), (faceIcon = this->fields.faceIcon) == 0LL) )
    sub_1C22094(faceIcon, *(_QWORD *)&width);
  UIWidget__set_height(faceIcon, height, 0LL);
}


void __fastcall ScriptFaceMessageManager__SetMessageWindowLayout(
        ScriptFaceMessageManager_o *this,
        const MethodInfo *method)
{
  struct System_Single_array *ALIGN_CENTER_BASE; // x8
  __int64 talkMode_k__BackingField; // x21
  ScriptFaceMessageManager_o *v4; // x19
  float v5; // s0
  struct System_Single_array *ALIGN_RIGHT_BASE; // x8
  float v7; // s0
  struct UnityEngine_Vector3_array *TALK_NAME_ANCHOR_POS; // x8
  struct ScriptMessageWindow_o *defaultMessageWindow; // x8
  ScriptFaceMessageManager_o *v10; // x20
  float32x2_t *v11; // x8
  struct UnityEngine_Vector2_array *MESSAGE_SCROLL_POS; // x9

  ALIGN_CENTER_BASE = this->fields.ALIGN_CENTER_BASE;
  if ( !ALIGN_CENTER_BASE )
    goto LABEL_17;
  talkMode_k__BackingField = this->fields._talkMode_k__BackingField;
  v4 = this;
  if ( (unsigned int)talkMode_k__BackingField >= ALIGN_CENTER_BASE->max_length )
    goto LABEL_18;
  v5 = ALIGN_CENTER_BASE->m_Items[talkMode_k__BackingField + 1];
  ALIGN_RIGHT_BASE = this->fields.ALIGN_RIGHT_BASE;
  this->fields.alignCenterBase = v5;
  if ( !ALIGN_RIGHT_BASE )
    goto LABEL_17;
  if ( (unsigned int)talkMode_k__BackingField >= ALIGN_RIGHT_BASE->max_length )
    goto LABEL_18;
  v7 = ALIGN_RIGHT_BASE->m_Items[talkMode_k__BackingField + 1];
  TALK_NAME_ANCHOR_POS = this->fields.TALK_NAME_ANCHOR_POS;
  this->fields.alignRightBase = v7;
  if ( !TALK_NAME_ANCHOR_POS )
    goto LABEL_17;
  if ( (unsigned int)talkMode_k__BackingField >= TALK_NAME_ANCHOR_POS->max_length )
    goto LABEL_18;
  this = (ScriptFaceMessageManager_o *)this->fields.talkNameAnchor;
  if ( !this )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)this,
    *(UnityEngine_Vector3_o *)&TALK_NAME_ANCHOR_POS->m_Items[talkMode_k__BackingField].fields.y,
    0LL);
  defaultMessageWindow = v4->fields.defaultMessageWindow;
  if ( !defaultMessageWindow )
    goto LABEL_17;
  this = (ScriptFaceMessageManager_o *)defaultMessageWindow->fields.dispPanel;
  if ( !this )
    goto LABEL_17;
  this = (ScriptFaceMessageManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v10 = this;
  if ( !byte_4BD6BB1 )
  {
    this = (ScriptFaceMessageManager_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v10
    || (UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v10,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL),
        (v11 = (float32x2_t *)v4->fields.defaultMessageWindow) == 0LL)
    || (MESSAGE_SCROLL_POS = v4->fields.MESSAGE_SCROLL_POS) == 0LL )
  {
LABEL_17:
    sub_1C22094(this, method);
  }
  if ( (unsigned int)talkMode_k__BackingField >= MESSAGE_SCROLL_POS->max_length )
LABEL_18:
    sub_1C2209C(this, method);
  v4->fields.dispSize = (struct UnityEngine_Vector2_o)vadd_f32(
                                                        v11[13],
                                                        vadd_f32(
                                                          *(float32x2_t *)&MESSAGE_SCROLL_POS->m_Items[talkMode_k__BackingField].fields.y,
                                                          *(float32x2_t *)&MESSAGE_SCROLL_POS->m_Items[talkMode_k__BackingField].fields.y)).n64_u64[0];
}


void __fastcall ScriptFaceMessageManager__SetTalkMode(
        ScriptFaceMessageManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  ScriptFaceMessageManager_o *v5; // x19
  UICommonButton_o *backLogButton; // x1
  ScriptMessageCommonManager_o *v7; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x4
  int32_t talkMode_k__BackingField; // w8
  Il2CppObject *Instance; // x0

  v5 = this;
  if ( (byte_4BDE1BE & 1) == 0 )
  {
    this = (ScriptFaceMessageManager_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4BDE1BE = 1;
  }
  backLogButton = v5->fields.backLogButton;
  v5->fields._talkMode_k__BackingField = mode;
  ScriptMessageCommonManager__SetActiveButton((ScriptMessageCommonManager_o *)this, backLogButton, 0, 1, v3);
  talkMode_k__BackingField = v5->fields._talkMode_k__BackingField;
  if ( talkMode_k__BackingField == 1 )
  {
    ScriptMessageCommonManager__SetActiveButton(v7, v5->fields.autoMessageButton, 1, 1, v9);
  }
  else if ( !talkMode_k__BackingField )
  {
    ScriptMessageCommonManager__SetActiveButton(v7, v5->fields.autoMessageButton, 0, 1, v9);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v8);
    LOBYTE(Instance[57].klass) = 0;
  }
  ScriptFaceMessageManager__SetMessageWindowLayout(v5, v8);
}


void __fastcall ScriptFaceMessageManager__Start(ScriptFaceMessageManager_o *this, const MethodInfo *method)
{
  unsigned __int64 rootObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct ScriptMessageWindow_o *defaultMessageWindow; // x8
  Il2CppObject *messageMainLabel; // x20
  struct ScriptMessageWindow_o *v13; // x8
  UILabel_o *v14; // x20
  UILabel_o *v15; // x21
  struct UnityEngine_Font_o *trueTypeFont; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  float v29; // s1
  float v30; // s1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v32; // x0
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x6

  if ( (byte_4BDE1BD & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ScriptMessageLabel_TypeInfo);
    sub_1C21E38(&StringLiteral_918/*"-"*/);
    sub_1C21E38(&StringLiteral_25701/*"■"*/);
    byte_4BDE1BD = 1;
  }
  rootObject = (unsigned __int64)this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)rootObject,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.rootPanel = (struct UIPanel_o *)Component_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.rootPanel, (int64_t)Component_object, v5, v6, v7, v8, v9, v10);
  rootObject = (unsigned int)this->fields.messageFontSize;
  if ( !(_DWORD)rootObject )
  {
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    rootObject = ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_918/*"-"*/, 0, 0LL);
  }
  defaultMessageWindow = this->fields.defaultMessageWindow;
  this->fields.defaultFontSize = rootObject;
  if ( !defaultMessageWindow )
    goto LABEL_15;
  messageMainLabel = (Il2CppObject *)defaultMessageWindow->fields.messageMainLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rootObject = (unsigned __int64)UnityEngine_Object__Instantiate_object_(
                                   messageMainLabel,
                                   (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_UILabel___);
  v13 = this->fields.defaultMessageWindow;
  if ( !v13 )
    goto LABEL_15;
  v14 = (UILabel_o *)rootObject;
  rootObject = (unsigned __int64)UnityEngine_Object__Instantiate_object_(
                                   (Il2CppObject *)v13->fields.messageRubyLabel,
                                   (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !v14 )
    goto LABEL_15;
  v15 = (UILabel_o *)rootObject;
  trueTypeFont = UILabel__get_trueTypeFont(v14, 0LL);
  this->fields.defaultFontType = trueTypeFont;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.defaultFontType,
    (int64_t)trueTypeFont,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.fontType = trueTypeFont;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.fontType, (int64_t)trueTypeFont, v23, v24, v25, v26, v27, v28);
  UILabel__set_fontSize(v14, this->fields.defaultFontSize, 0LL);
  UILabel__set_text(v14, (System_String_o *)StringLiteral_25701/*"■"*/, 0LL);
  rootObject = ((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v14->klass->vtable._22_get_localSize.method)(
                 v14,
                 v14->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.defaultTextOnlyLineHeight = v29;
  if ( !v15 )
LABEL_15:
    sub_1C22094(rootObject, method);
  this->fields.rubyFontSize = v15->fields.mFontSize;
  UILabel__set_text(v15, (System_String_o *)StringLiteral_25701/*"■"*/, 0LL);
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v15->klass->vtable._22_get_localSize.method)(
    v15,
    v15->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyLineHeight = v30;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
  UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
  v32 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
  UnityEngine_Object__Destroy_70869612(v32, 0LL);
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, v33);
  ScriptFaceMessageManager__SetMessageWindowLayout(this, v34);
  ScriptMessageCommonManager__SetScreen((ScriptMessageCommonManager_o *)this, 0, 0, 0, 0, 1, v35);
}


int32_t __fastcall ScriptFaceMessageManager__get_talkMode(ScriptFaceMessageManager_o *this, const MethodInfo *method)
{
  return this->fields._talkMode_k__BackingField;
}


void __fastcall ScriptFaceMessageManager__set_talkMode(
        ScriptFaceMessageManager_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._talkMode_k__BackingField = value;
}