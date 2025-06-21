void __fastcall ScriptFaceMessageManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B1E2EE & 1) == 0 )
  {
    sub_1BCAFF8(&ScriptFaceMessageManager_TypeInfo, v1);
    byte_4B1E2EE = 1;
  }
  LODWORD(ScriptFaceMessageManager_TypeInfo->static_fields->FACE_IMAGE_WIDTH) = (struct ScriptFaceMessageManager_StaticFields)1120403456;
}


void __fastcall ScriptFaceMessageManager___ctor(ScriptFaceMessageManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  int v10; // w8
  const MethodInfo *v11; // x3
  int v12; // w8
  const MethodInfo *v13; // x3
  int v14; // w8
  const MethodInfo *v15; // x3
  ScriptFaceMessageManager_c *v16; // x8
  __int64 v17; // x20
  int v18; // w9
  float FACE_IMAGE_WIDTH; // s0
  const MethodInfo *v20; // x1

  if ( (byte_4B1E2ED & 1) == 0 )
  {
    sub_1BCAFF8(&ScriptFaceMessageManager_TypeInfo, method);
    sub_1BCAFF8(&float___TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_Vector2___TypeInfo, v4);
    sub_1BCAFF8(&UnityEngine_Vector3___TypeInfo, v5);
    byte_4B1E2ED = 1;
  }
  v6 = sub_1BCB0A0(float___TypeInfo, 2LL);
  if ( !v6 )
    goto LABEL_19;
  v10 = *(_DWORD *)(v6 + 24);
  v7 = v6;
  if ( !v10 )
    goto LABEL_18;
  *(_DWORD *)(v6 + 32) = 1133576192;
  if ( v10 == 1 )
    goto LABEL_18;
  *(_DWORD *)(v6 + 36) = 1138491392;
  this->fields.ALIGN_CENTER_BASE = (struct System_Single_array *)v6;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.ALIGN_CENTER_BASE, v6, v8, v9);
  v6 = sub_1BCB0A0(float___TypeInfo, 2LL);
  if ( !v6 )
    goto LABEL_19;
  v12 = *(_DWORD *)(v6 + 24);
  v7 = v6;
  if ( !v12 )
    goto LABEL_18;
  *(_DWORD *)(v6 + 32) = 1143767040;
  if ( v12 == 1 )
    goto LABEL_18;
  *(_DWORD *)(v6 + 36) = 1146224640;
  this->fields.ALIGN_RIGHT_BASE = (struct System_Single_array *)v6;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.ALIGN_RIGHT_BASE, v6, v8, v11);
  v6 = sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
  if ( !v6 )
    goto LABEL_19;
  v14 = *(_DWORD *)(v6 + 24);
  v7 = v6;
  if ( !v14 || (*(_DWORD *)(v6 + 40) = 0, *(_QWORD *)(v6 + 32) = 0x4150000042200000LL, v14 == 1) )
LABEL_18:
    sub_1BCB25C(v6, v7, v8);
  *(_DWORD *)(v6 + 52) = 0;
  *(_QWORD *)(v6 + 44) = 0x41500000C2CE0000LL;
  this->fields.TALK_NAME_ANCHOR_POS = (struct UnityEngine_Vector3_array *)v6;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.TALK_NAME_ANCHOR_POS, v6, v8, v13);
  v6 = sub_1BCB0A0(UnityEngine_Vector2___TypeInfo, 2LL);
  v16 = ScriptFaceMessageManager_TypeInfo;
  v17 = v6;
  if ( !ScriptFaceMessageManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptFaceMessageManager_TypeInfo);
    v16 = ScriptFaceMessageManager_TypeInfo;
  }
  if ( !v17 )
LABEL_19:
    sub_1BCB254(v6, v7);
  v18 = *(_DWORD *)(v17 + 24);
  if ( !v18 )
    goto LABEL_18;
  FACE_IMAGE_WIDTH = v16->static_fields->FACE_IMAGE_WIDTH;
  *(_DWORD *)(v17 + 36) = 1065353216;
  *(float *)(v17 + 32) = -FACE_IMAGE_WIDTH;
  if ( v18 == 1 )
    goto LABEL_18;
  *(_QWORD *)(v17 + 40) = 0LL;
  this->fields.MESSAGE_SCROLL_POS = (struct UnityEngine_Vector2_array *)v17;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.MESSAGE_SCROLL_POS, v17, v8, v15);
  ScriptMessageCommonManager___ctor((ScriptMessageCommonManager_o *)this, v20);
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
    sub_1BCB254(faceIcon, method);
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
    sub_1BCB254(faceIcon, *(_QWORD *)&width);
  UIWidget__set_height(faceIcon, height, 0LL);
}


void __fastcall ScriptFaceMessageManager__SetMessageWindowLayout(
        ScriptFaceMessageManager_o *this,
        const MethodInfo *method)
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
  if ( (unsigned int)talkMode_k__BackingField >= ALIGN_CENTER_BASE->max_length )
    goto LABEL_18;
  v6 = ALIGN_CENTER_BASE->m_Items[talkMode_k__BackingField + 1];
  ALIGN_RIGHT_BASE = this->fields.ALIGN_RIGHT_BASE;
  this->fields.alignCenterBase = v6;
  if ( !ALIGN_RIGHT_BASE )
    goto LABEL_17;
  if ( (unsigned int)talkMode_k__BackingField >= ALIGN_RIGHT_BASE->max_length )
    goto LABEL_18;
  v8 = ALIGN_RIGHT_BASE->m_Items[talkMode_k__BackingField + 1];
  TALK_NAME_ANCHOR_POS = this->fields.TALK_NAME_ANCHOR_POS;
  this->fields.alignRightBase = v8;
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
  defaultMessageWindow = v5->fields.defaultMessageWindow;
  if ( !defaultMessageWindow )
    goto LABEL_17;
  this = (ScriptFaceMessageManager_o *)defaultMessageWindow->fields.dispPanel;
  if ( !this )
    goto LABEL_17;
  this = (ScriptFaceMessageManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v11 = this;
  if ( !byte_4B16191 )
  {
    this = (ScriptFaceMessageManager_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, method);
    byte_4B16191 = 1;
  }
  if ( !v11
    || (UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v11,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL),
        (v12 = (float32x2_t *)v5->fields.defaultMessageWindow) == 0LL)
    || (MESSAGE_SCROLL_POS = v5->fields.MESSAGE_SCROLL_POS) == 0LL )
  {
LABEL_17:
    sub_1BCB254(this, method);
  }
  if ( (unsigned int)talkMode_k__BackingField >= MESSAGE_SCROLL_POS->max_length )
LABEL_18:
    sub_1BCB25C(this, method, v2);
  v5->fields.dispSize = (struct UnityEngine_Vector2_o)vadd_f32(
                                                        v12[13],
                                                        vadd_f32(
                                                          *(float32x2_t *)&MESSAGE_SCROLL_POS->m_Items[talkMode_k__BackingField].fields.y,
                                                          *(float32x2_t *)&MESSAGE_SCROLL_POS->m_Items[talkMode_k__BackingField].fields.y)).n64_u64[0];
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B1E2EC & 1) == 0 )
  {
    this = (ScriptFaceMessageManager_o *)sub_1BCAFF8(
                                           &Method_SingletonMonoBehaviour_ScriptManager__get_Instance__,
                                           *(_QWORD *)&mode);
    byte_4B1E2EC = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      sub_1BCB254(0LL, v8);
    LOBYTE(Instance[57].klass) = 0;
  }
  ScriptFaceMessageManager__SetMessageWindowLayout(v5, v8);
}


void __fastcall ScriptFaceMessageManager__Start(ScriptFaceMessageManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  unsigned __int64 rootObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct ScriptMessageWindow_o *defaultMessageWindow; // x8
  Il2CppObject *messageMainLabel; // x20
  struct ScriptMessageWindow_o *v14; // x8
  UILabel_o *v15; // x20
  UILabel_o *v16; // x21
  struct UnityEngine_Font_o *trueTypeFont; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  float v22; // s1
  float v23; // s1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v25; // x0
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x6

  if ( (byte_4B1E2EB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_UILabel___, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&ScriptMessageLabel_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_856/*"-"*/, v6);
    sub_1BCAFF8(&StringLiteral_25135/*"■"*/, v7);
    byte_4B1E2EB = 1;
  }
  rootObject = (unsigned __int64)this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)rootObject,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.rootPanel = (struct UIPanel_o *)Component_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.rootPanel, (int32_t)Component_object, v10, v11);
  rootObject = (unsigned int)this->fields.messageFontSize;
  if ( !(_DWORD)rootObject )
  {
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    rootObject = ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_856/*"-"*/, 0, 0LL);
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
                                   (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  v14 = this->fields.defaultMessageWindow;
  if ( !v14 )
    goto LABEL_15;
  v15 = (UILabel_o *)rootObject;
  rootObject = (unsigned __int64)UnityEngine_Object__Instantiate_object_(
                                   (Il2CppObject *)v14->fields.messageRubyLabel,
                                   (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !v15 )
    goto LABEL_15;
  v16 = (UILabel_o *)rootObject;
  trueTypeFont = UILabel__get_trueTypeFont(v15, 0LL);
  this->fields.defaultFontType = trueTypeFont;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.defaultFontType, (int32_t)trueTypeFont, v18, v19);
  this->fields.fontType = trueTypeFont;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.fontType, (int32_t)trueTypeFont, v20, v21);
  UILabel__set_fontSize(v15, this->fields.defaultFontSize, 0LL);
  UILabel__set_text(v15, (System_String_o *)StringLiteral_25135/*"■"*/, 0LL);
  rootObject = ((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v15->klass->vtable._22_get_localSize.method)(
                 v15,
                 v15->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.defaultTextOnlyLineHeight = v22;
  if ( !v16 )
LABEL_15:
    sub_1BCB254(rootObject, method);
  this->fields.rubyFontSize = v16->fields.mFontSize;
  UILabel__set_text(v16, (System_String_o *)StringLiteral_25135/*"■"*/, 0LL);
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v16->klass->vtable._22_get_localSize.method)(
    v16,
    v16->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyLineHeight = v23;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
  UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
  v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
  UnityEngine_Object__Destroy_70136076(v25, 0LL);
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, v26);
  ScriptFaceMessageManager__SetMessageWindowLayout(this, v27);
  ScriptMessageCommonManager__SetScreen((ScriptMessageCommonManager_o *)this, 0, 0, 0, 0, 1, v28);
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