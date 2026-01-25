void ScriptFaceMessageManager___cctor(const MethodInfo *method)
{
  if ( (byte_4CF059D & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptFaceMessageManager_TypeInfo);
    byte_4CF059D = 1;
  }
  LODWORD(ScriptFaceMessageManager_TypeInfo->static_fields->FACE_IMAGE_WIDTH) = (struct ScriptFaceMessageManager_StaticFields)1120403456;
}


void ScriptFaceMessageManager___ctor(ScriptFaceMessageManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int v11; // w8
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int v18; // w8
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int v25; // w8
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  ScriptFaceMessageManager_c *v32; // x8
  __int64 v33; // x20
  int v34; // w9
  float FACE_IMAGE_WIDTH; // s0
  const MethodInfo *v36; // x1

  if ( (byte_4CF059C & 1) == 0 )
  {
    sub_1C7BAE8(&ScriptFaceMessageManager_TypeInfo);
    sub_1C7BAE8(&float___TypeInfo);
    sub_1C7BAE8(&UnityEngine_Vector2___TypeInfo);
    sub_1C7BAE8(&UnityEngine_Vector3___TypeInfo);
    byte_4CF059C = 1;
  }
  v3 = sub_1C7BB90(float___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_19;
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11 )
    goto LABEL_18;
  *(_DWORD *)(v3 + 32) = 1133576192;
  if ( v11 == 1 )
    goto LABEL_18;
  *(_DWORD *)(v3 + 36) = 1138491392;
  this->fields.ALIGN_CENTER_BASE = (struct System_Single_array *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.ALIGN_CENTER_BASE, v3, v5, v6, v7, v8, v9, v10);
  v3 = sub_1C7BB90(float___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_19;
  v18 = *(_DWORD *)(v3 + 24);
  if ( !v18 )
    goto LABEL_18;
  *(_DWORD *)(v3 + 32) = 1143767040;
  if ( v18 == 1 )
    goto LABEL_18;
  *(_DWORD *)(v3 + 36) = 1146224640;
  this->fields.ALIGN_RIGHT_BASE = (struct System_Single_array *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.ALIGN_RIGHT_BASE, v3, v12, v13, v14, v15, v16, v17);
  v3 = sub_1C7BB90(UnityEngine_Vector3___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_19;
  v25 = *(_DWORD *)(v3 + 24);
  if ( !v25 || (*(_DWORD *)(v3 + 40) = 0, *(_QWORD *)(v3 + 32) = 0x4150000042200000LL, v25 == 1) )
LABEL_18:
    sub_1C7BD48(v3);
  *(_DWORD *)(v3 + 52) = 0;
  *(_QWORD *)(v3 + 44) = 0x41500000C2CE0000LL;
  this->fields.TALK_NAME_ANCHOR_POS = (struct UnityEngine_Vector3_array *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.TALK_NAME_ANCHOR_POS, v3, v19, v20, v21, v22, v23, v24);
  v3 = sub_1C7BB90(UnityEngine_Vector2___TypeInfo, 2);
  v32 = ScriptFaceMessageManager_TypeInfo;
  v33 = v3;
  if ( !ScriptFaceMessageManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptFaceMessageManager_TypeInfo);
    v32 = ScriptFaceMessageManager_TypeInfo;
  }
  if ( !v33 )
LABEL_19:
    sub_1C7BD40(v3, v4);
  v34 = *(_DWORD *)(v33 + 24);
  if ( !v34 )
    goto LABEL_18;
  FACE_IMAGE_WIDTH = v32->static_fields->FACE_IMAGE_WIDTH;
  *(_DWORD *)(v33 + 36) = 1065353216;
  *(float *)(v33 + 32) = -FACE_IMAGE_WIDTH;
  if ( v34 == 1 )
    goto LABEL_18;
  *(_QWORD *)(v33 + 40) = 0;
  this->fields.MESSAGE_SCROLL_POS = (struct UnityEngine_Vector2_array *)v33;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.MESSAGE_SCROLL_POS, v33, v26, v27, v28, v29, v30, v31);
  ScriptMessageCommonManager___ctor((ScriptMessageCommonManager_o *)this, v36);
}


void ScriptFaceMessageManager__CloseDown(ScriptFaceMessageManager_o *this, bool isFast, const MethodInfo *method)
{
  ;
}


UnityEngine_Vector3_o ScriptFaceMessageManager__GetFaceIconPosition(
        ScriptFaceMessageManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *faceIcon; // x0

  faceIcon = (UnityEngine_Component_o *)this->fields.faceIcon;
  if ( !faceIcon || (faceIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(faceIcon, 0)) == 0 )
    sub_1C7BD40(faceIcon, method);
  return UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)faceIcon, 0);
}


bool ScriptFaceMessageManager__IsEnableCloseDown(ScriptFaceMessageManager_o *this, const MethodInfo *method)
{
  return 0;
}


bool ScriptFaceMessageManager__IsEnableOpenUp(ScriptFaceMessageManager_o *this, const MethodInfo *method)
{
  return 0;
}


void ScriptFaceMessageManager__OpenUp(ScriptFaceMessageManager_o *this, bool isFast, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void ScriptFaceMessageManager__SetFaceIconContentSize(
        ScriptFaceMessageManager_o *this,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  UIWidget_o *faceIcon; // x0

  faceIcon = this->fields.faceIcon;
  if ( !faceIcon || (UIWidget__set_width(faceIcon, width, 0), (faceIcon = this->fields.faceIcon) == 0) )
    sub_1C7BD40(faceIcon, *(_QWORD *)&width);
  UIWidget__set_height(faceIcon, height, 0);
}


void ScriptFaceMessageManager__SetMessageWindowLayout(ScriptFaceMessageManager_o *this, const MethodInfo *method)
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
  if ( (unsigned int)talkMode_k__BackingField >= LODWORD(ALIGN_CENTER_BASE->max_length) )
    goto LABEL_18;
  v5 = ALIGN_CENTER_BASE->m_Items[talkMode_k__BackingField];
  ALIGN_RIGHT_BASE = this->fields.ALIGN_RIGHT_BASE;
  this->fields.alignCenterBase = v5;
  if ( !ALIGN_RIGHT_BASE )
    goto LABEL_17;
  if ( (unsigned int)talkMode_k__BackingField >= LODWORD(ALIGN_RIGHT_BASE->max_length) )
    goto LABEL_18;
  v7 = ALIGN_RIGHT_BASE->m_Items[talkMode_k__BackingField];
  TALK_NAME_ANCHOR_POS = this->fields.TALK_NAME_ANCHOR_POS;
  this->fields.alignRightBase = v7;
  if ( !TALK_NAME_ANCHOR_POS )
    goto LABEL_17;
  if ( (unsigned int)talkMode_k__BackingField >= LODWORD(TALK_NAME_ANCHOR_POS->max_length) )
    goto LABEL_18;
  this = (ScriptFaceMessageManager_o *)this->fields.talkNameAnchor;
  if ( !this )
    goto LABEL_17;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)this,
    TALK_NAME_ANCHOR_POS->m_Items[talkMode_k__BackingField],
    0);
  defaultMessageWindow = v4->fields.defaultMessageWindow;
  if ( !defaultMessageWindow )
    goto LABEL_17;
  this = (ScriptFaceMessageManager_o *)defaultMessageWindow->fields.dispPanel;
  if ( !this )
    goto LABEL_17;
  this = (ScriptFaceMessageManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v10 = this;
  if ( !byte_4CE7E59 )
  {
    this = (ScriptFaceMessageManager_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  if ( !v10
    || (UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v10,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0),
        (v11 = (float32x2_t *)v4->fields.defaultMessageWindow) == 0)
    || (MESSAGE_SCROLL_POS = v4->fields.MESSAGE_SCROLL_POS) == 0 )
  {
LABEL_17:
    sub_1C7BD40(this, method);
  }
  if ( (unsigned int)talkMode_k__BackingField >= LODWORD(MESSAGE_SCROLL_POS->max_length) )
LABEL_18:
    sub_1C7BD48(this);
  v4->fields.dispSize = (struct UnityEngine_Vector2_o)vadd_f32(
                                                        v11[13],
                                                        vadd_f32(
                                                          (float32x2_t)MESSAGE_SCROLL_POS->m_Items[talkMode_k__BackingField],
                                                          (float32x2_t)MESSAGE_SCROLL_POS->m_Items[talkMode_k__BackingField])).n64_u64[0];
}


void ScriptFaceMessageManager__SetTalkMode(ScriptFaceMessageManager_o *this, int32_t mode, const MethodInfo *method)
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
  if ( (byte_4CF059B & 1) == 0 )
  {
    this = (ScriptFaceMessageManager_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4CF059B = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      sub_1C7BD40(0, v8);
    LOBYTE(Instance[58].klass) = 0;
  }
  ScriptFaceMessageManager__SetMessageWindowLayout(v5, v8);
}


void ScriptFaceMessageManager__Start(ScriptFaceMessageManager_o *this, const MethodInfo *method)
{
  unsigned __int64 rootObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct ScriptMessageWindow_o *defaultMessageWindow; // x8
  Il2CppObject *messageMainLabel; // x20
  struct ScriptMessageWindow_o *v13; // x8
  UILabel_o *v14; // x20
  UILabel_o *v15; // x21
  struct UnityEngine_Font_o *trueTypeFont; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  float v29; // s1
  float v30; // s1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v32; // x0
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x6

  if ( (byte_4CF059A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&ScriptMessageLabel_TypeInfo);
    sub_1C7BAE8(&StringLiteral_859/*"-"*/);
    sub_1C7BAE8(&StringLiteral_25611/*"■"*/);
    byte_4CF059A = 1;
  }
  rootObject = (unsigned __int64)this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)rootObject,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.rootPanel = (struct UIPanel_o *)Component_object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.rootPanel,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  rootObject = (unsigned int)this->fields.messageFontSize;
  if ( !(_DWORD)rootObject )
  {
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    rootObject = ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_859/*"-"*/, 0, 0);
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
                                   (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  v13 = this->fields.defaultMessageWindow;
  if ( !v13 )
    goto LABEL_15;
  v14 = (UILabel_o *)rootObject;
  rootObject = (unsigned __int64)UnityEngine_Object__Instantiate_object_(
                                   (Il2CppObject *)v13->fields.messageRubyLabel,
                                   (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !v14 )
    goto LABEL_15;
  v15 = (UILabel_o *)rootObject;
  trueTypeFont = UILabel__get_trueTypeFont(v14, 0);
  this->fields.defaultFontType = trueTypeFont;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.defaultFontType,
    (int32_t)trueTypeFont,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.fontType = trueTypeFont;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.fontType,
    (int32_t)trueTypeFont,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  UILabel__set_fontSize(v14, this->fields.defaultFontSize, 0);
  UILabel__set_text(v14, (System_String_o *)StringLiteral_25611/*"■"*/, 0);
  rootObject = ((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))v14->klass->vtable._22_get_localSize.methodPtr)(
                 v14,
                 v14->klass->vtable._22_get_localSize.method);
  this->fields.defaultTextOnlyLineHeight = v29;
  if ( !v15 )
LABEL_15:
    sub_1C7BD40(rootObject, method);
  this->fields.rubyFontSize = v15->fields.mFontSize;
  UILabel__set_text(v15, (System_String_o *)StringLiteral_25611/*"■"*/, 0);
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *))v15->klass->vtable._22_get_localSize.methodPtr)(
    v15,
    v15->klass->vtable._22_get_localSize.method);
  this->fields.rubyLineHeight = v30;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
  UnityEngine_Object__Destroy_71870148(gameObject, 0);
  v32 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0);
  UnityEngine_Object__Destroy_71870148(v32, 0);
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, v33);
  ScriptFaceMessageManager__SetMessageWindowLayout(this, v34);
  ScriptMessageCommonManager__SetScreen((ScriptMessageCommonManager_o *)this, 0, 0, 0, 0, 1, v35);
}


int32_t ScriptFaceMessageManager__get_talkMode(ScriptFaceMessageManager_o *this, const MethodInfo *method)
{
  return this->fields._talkMode_k__BackingField;
}


void ScriptFaceMessageManager__set_talkMode(ScriptFaceMessageManager_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._talkMode_k__BackingField = value;
}