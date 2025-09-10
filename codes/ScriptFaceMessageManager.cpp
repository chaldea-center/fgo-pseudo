void ScriptFaceMessageManager___cctor(const MethodInfo *method)
{
  if ( (byte_4C2920F & 1) == 0 )
  {
    sub_1C2D490(&ScriptFaceMessageManager_TypeInfo);
    byte_4C2920F = 1;
  }
  LODWORD(ScriptFaceMessageManager_TypeInfo->static_fields->FACE_IMAGE_WIDTH) = (struct ScriptFaceMessageManager_StaticFields)1120403456;
}


void ScriptFaceMessageManager___ctor(ScriptFaceMessageManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  int v7; // w8
  const MethodInfo *v8; // x3
  int v9; // w8
  const MethodInfo *v10; // x3
  int v11; // w8
  const MethodInfo *v12; // x3
  ScriptFaceMessageManager_c *v13; // x8
  __int64 v14; // x20
  int v15; // w9
  float FACE_IMAGE_WIDTH; // s0
  const MethodInfo *v17; // x1

  if ( (byte_4C2920E & 1) == 0 )
  {
    sub_1C2D490(&ScriptFaceMessageManager_TypeInfo);
    sub_1C2D490(&float___TypeInfo);
    sub_1C2D490(&UnityEngine_Vector2___TypeInfo);
    sub_1C2D490(&UnityEngine_Vector3___TypeInfo);
    byte_4C2920E = 1;
  }
  v3 = sub_1C2D538(float___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_19;
  v7 = *(_DWORD *)(v3 + 24);
  v4 = v3;
  if ( !v7 )
    goto LABEL_18;
  *(_DWORD *)(v3 + 32) = 1133576192;
  if ( v7 == 1 )
    goto LABEL_18;
  *(_DWORD *)(v3 + 36) = 1138491392;
  this->fields.ALIGN_CENTER_BASE = (struct System_Single_array *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.ALIGN_CENTER_BASE, v3, v5, v6);
  v3 = sub_1C2D538(float___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_19;
  v9 = *(_DWORD *)(v3 + 24);
  v4 = v3;
  if ( !v9 )
    goto LABEL_18;
  *(_DWORD *)(v3 + 32) = 1143767040;
  if ( v9 == 1 )
    goto LABEL_18;
  *(_DWORD *)(v3 + 36) = 1146224640;
  this->fields.ALIGN_RIGHT_BASE = (struct System_Single_array *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.ALIGN_RIGHT_BASE, v3, v5, v8);
  v3 = sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_19;
  v11 = *(_DWORD *)(v3 + 24);
  v4 = v3;
  if ( !v11 || (*(_DWORD *)(v3 + 40) = 0, *(_QWORD *)(v3 + 32) = 0x4150000042200000LL, v11 == 1) )
LABEL_18:
    sub_1C2D6F4(v3, v4, v5);
  *(_DWORD *)(v3 + 52) = 0;
  *(_QWORD *)(v3 + 44) = 0x41500000C2CE0000LL;
  this->fields.TALK_NAME_ANCHOR_POS = (struct UnityEngine_Vector3_array *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.TALK_NAME_ANCHOR_POS, v3, v5, v10);
  v3 = sub_1C2D538(UnityEngine_Vector2___TypeInfo, 2);
  v13 = ScriptFaceMessageManager_TypeInfo;
  v14 = v3;
  if ( !ScriptFaceMessageManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptFaceMessageManager_TypeInfo);
    v13 = ScriptFaceMessageManager_TypeInfo;
  }
  if ( !v14 )
LABEL_19:
    sub_1C2D6EC(v3, v4);
  v15 = *(_DWORD *)(v14 + 24);
  if ( !v15 )
    goto LABEL_18;
  FACE_IMAGE_WIDTH = v13->static_fields->FACE_IMAGE_WIDTH;
  *(_DWORD *)(v14 + 36) = 1065353216;
  *(float *)(v14 + 32) = -FACE_IMAGE_WIDTH;
  if ( v15 == 1 )
    goto LABEL_18;
  *(_QWORD *)(v14 + 40) = 0;
  this->fields.MESSAGE_SCROLL_POS = (struct UnityEngine_Vector2_array *)v14;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.MESSAGE_SCROLL_POS, v14, v5, v12);
  ScriptMessageCommonManager___ctor((ScriptMessageCommonManager_o *)this, v17);
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
    sub_1C2D6EC(faceIcon, method);
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
    sub_1C2D6EC(faceIcon, *(_QWORD *)&width);
  UIWidget__set_height(faceIcon, height, 0);
}


void ScriptFaceMessageManager__SetMessageWindowLayout(ScriptFaceMessageManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Single_array *ALIGN_CENTER_BASE; // x8
  __int64 talkMode_k__BackingField; // x21
  ScriptFaceMessageManager_o *v5; // x19
  float v6; // s0
  struct System_Single_array *ALIGN_RIGHT_BASE; // x8
  float v8; // s0
  struct UnityEngine_Vector3_array *TALK_NAME_ANCHOR_POS; // x8
  struct ScriptMessageWindow_o *defaultMessageWindow; // x8
  ScriptFaceMessageManager_o *v11; // x20
  float32x2_t *v12; // x8
  struct UnityEngine_Vector2_array *MESSAGE_SCROLL_POS; // x9

  ALIGN_CENTER_BASE = this->fields.ALIGN_CENTER_BASE;
  if ( !ALIGN_CENTER_BASE )
    goto LABEL_17;
  talkMode_k__BackingField = this->fields._talkMode_k__BackingField;
  v5 = this;
  if ( (unsigned int)talkMode_k__BackingField >= LODWORD(ALIGN_CENTER_BASE->max_length) )
    goto LABEL_18;
  v6 = ALIGN_CENTER_BASE->m_Items[talkMode_k__BackingField];
  ALIGN_RIGHT_BASE = this->fields.ALIGN_RIGHT_BASE;
  this->fields.alignCenterBase = v6;
  if ( !ALIGN_RIGHT_BASE )
    goto LABEL_17;
  if ( (unsigned int)talkMode_k__BackingField >= LODWORD(ALIGN_RIGHT_BASE->max_length) )
    goto LABEL_18;
  v8 = ALIGN_RIGHT_BASE->m_Items[talkMode_k__BackingField];
  TALK_NAME_ANCHOR_POS = this->fields.TALK_NAME_ANCHOR_POS;
  this->fields.alignRightBase = v8;
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
  defaultMessageWindow = v5->fields.defaultMessageWindow;
  if ( !defaultMessageWindow )
    goto LABEL_17;
  this = (ScriptFaceMessageManager_o *)defaultMessageWindow->fields.dispPanel;
  if ( !this )
    goto LABEL_17;
  this = (ScriptFaceMessageManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v11 = this;
  if ( !byte_4C20DA1 )
  {
    this = (ScriptFaceMessageManager_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v11
    || (UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v11,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0),
        (v12 = (float32x2_t *)v5->fields.defaultMessageWindow) == 0)
    || (MESSAGE_SCROLL_POS = v5->fields.MESSAGE_SCROLL_POS) == 0 )
  {
LABEL_17:
    sub_1C2D6EC(this, method);
  }
  if ( (unsigned int)talkMode_k__BackingField >= LODWORD(MESSAGE_SCROLL_POS->max_length) )
LABEL_18:
    sub_1C2D6F4(this, method, v2);
  v5->fields.dispSize = (struct UnityEngine_Vector2_o)vadd_f32(
                                                        v12[13],
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
  if ( (byte_4C2920D & 1) == 0 )
  {
    this = (ScriptFaceMessageManager_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4C2920D = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      sub_1C2D6EC(0, v8);
    LOBYTE(Instance[57].monitor) = 0;
  }
  ScriptFaceMessageManager__SetMessageWindowLayout(v5, v8);
}


void ScriptFaceMessageManager__Start(ScriptFaceMessageManager_o *this, const MethodInfo *method)
{
  unsigned __int64 rootObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct ScriptMessageWindow_o *defaultMessageWindow; // x8
  Il2CppObject *messageMainLabel; // x20
  struct ScriptMessageWindow_o *v9; // x8
  UILabel_o *v10; // x20
  UILabel_o *v11; // x21
  struct UnityEngine_Font_o *trueTypeFont; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  float v17; // s1
  float v18; // s1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x6

  if ( (byte_4C2920C & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ScriptMessageLabel_TypeInfo);
    sub_1C2D490(&StringLiteral_861/*"-"*/);
    sub_1C2D490(&StringLiteral_25333/*"■"*/);
    byte_4C2920C = 1;
  }
  rootObject = (unsigned __int64)this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)rootObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.rootPanel = (struct UIPanel_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rootPanel, (int32_t)Component_object, v5, v6);
  rootObject = (unsigned int)this->fields.messageFontSize;
  if ( !(_DWORD)rootObject )
  {
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    rootObject = ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_861/*"-"*/, 0, 0);
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
                                   (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  v9 = this->fields.defaultMessageWindow;
  if ( !v9 )
    goto LABEL_15;
  v10 = (UILabel_o *)rootObject;
  rootObject = (unsigned __int64)UnityEngine_Object__Instantiate_object_(
                                   (Il2CppObject *)v9->fields.messageRubyLabel,
                                   (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !v10 )
    goto LABEL_15;
  v11 = (UILabel_o *)rootObject;
  trueTypeFont = UILabel__get_trueTypeFont(v10, 0);
  this->fields.defaultFontType = trueTypeFont;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.defaultFontType, (int32_t)trueTypeFont, v13, v14);
  this->fields.fontType = trueTypeFont;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.fontType, (int32_t)trueTypeFont, v15, v16);
  UILabel__set_fontSize(v10, this->fields.defaultFontSize, 0);
  UILabel__set_text(v10, (System_String_o *)StringLiteral_25333/*"■"*/, 0);
  rootObject = ((__int64 (__fastcall *)(UILabel_o *, const MethodInfo *))v10->klass->vtable._22_get_localSize.methodPtr)(
                 v10,
                 v10->klass->vtable._22_get_localSize.method);
  this->fields.defaultTextOnlyLineHeight = v17;
  if ( !v11 )
LABEL_15:
    sub_1C2D6EC(rootObject, method);
  this->fields.rubyFontSize = v11->fields.mFontSize;
  UILabel__set_text(v11, (System_String_o *)StringLiteral_25333/*"■"*/, 0);
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *))v11->klass->vtable._22_get_localSize.methodPtr)(
    v11,
    v11->klass->vtable._22_get_localSize.method);
  this->fields.rubyLineHeight = v18;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
  UnityEngine_Object__Destroy_71163704(gameObject, 0);
  v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0);
  UnityEngine_Object__Destroy_71163704(v20, 0);
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, v21);
  ScriptFaceMessageManager__SetMessageWindowLayout(this, v22);
  ScriptMessageCommonManager__SetScreen((ScriptMessageCommonManager_o *)this, 0, 0, 0, 0, 1, v23);
}


int32_t ScriptFaceMessageManager__get_talkMode(ScriptFaceMessageManager_o *this, const MethodInfo *method)
{
  return this->fields._talkMode_k__BackingField;
}


void ScriptFaceMessageManager__set_talkMode(ScriptFaceMessageManager_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._talkMode_k__BackingField = value;
}