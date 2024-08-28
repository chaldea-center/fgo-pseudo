void __fastcall ScriptFaceMessageManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A2166D & 1) == 0 )
  {
    sub_1B715CC(&ScriptFaceMessageManager_TypeInfo, v1);
    byte_4A2166D = 1;
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
  int32_t v8; // w2
  int32_t v9; // w3
  int v10; // w8
  int32_t v11; // w2
  int32_t v12; // w3
  int v13; // w8
  int32_t v14; // w2
  int32_t v15; // w3
  int v16; // w8
  int32_t v17; // w2
  int32_t v18; // w3
  ScriptFaceMessageManager_c *v19; // x8
  __int64 v20; // x20
  int v21; // w9
  float FACE_IMAGE_WIDTH; // s0
  const MethodInfo *v23; // x1

  if ( (byte_4A2166C & 1) == 0 )
  {
    sub_1B715CC(&ScriptFaceMessageManager_TypeInfo, method);
    sub_1B715CC(&float___TypeInfo, v3);
    sub_1B715CC(&UnityEngine_Vector2___TypeInfo, v4);
    sub_1B715CC(&UnityEngine_Vector3___TypeInfo, v5);
    byte_4A2166C = 1;
  }
  v6 = sub_1B71674(float___TypeInfo, 2LL);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.ALIGN_CENTER_BASE, v6, v8, v9);
  v6 = sub_1B71674(float___TypeInfo, 2LL);
  if ( !v6 )
    goto LABEL_19;
  v13 = *(_DWORD *)(v6 + 24);
  v7 = v6;
  if ( !v13 )
    goto LABEL_18;
  *(_DWORD *)(v6 + 32) = 1143767040;
  if ( v13 == 1 )
    goto LABEL_18;
  *(_DWORD *)(v6 + 36) = 1146224640;
  this->fields.ALIGN_RIGHT_BASE = (struct System_Single_array *)v6;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.ALIGN_RIGHT_BASE, v6, v11, v12);
  v6 = sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
  if ( !v6 )
    goto LABEL_19;
  v16 = *(_DWORD *)(v6 + 24);
  v7 = v6;
  if ( !v16 || (*(_DWORD *)(v6 + 40) = 0, *(_QWORD *)(v6 + 32) = 0x4150000042200000LL, v16 == 1) )
LABEL_18:
    sub_1B71830(v6, v7);
  *(_DWORD *)(v6 + 52) = 0;
  *(_QWORD *)(v6 + 44) = 0x41500000C2CE0000LL;
  this->fields.TALK_NAME_ANCHOR_POS = (struct UnityEngine_Vector3_array *)v6;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.TALK_NAME_ANCHOR_POS, v6, v14, v15);
  v6 = sub_1B71674(UnityEngine_Vector2___TypeInfo, 2LL);
  v19 = ScriptFaceMessageManager_TypeInfo;
  v20 = v6;
  if ( !ScriptFaceMessageManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptFaceMessageManager_TypeInfo);
    v19 = ScriptFaceMessageManager_TypeInfo;
  }
  if ( !v20 )
LABEL_19:
    sub_1B71828(v6, v7);
  v21 = *(_DWORD *)(v20 + 24);
  if ( !v21 )
    goto LABEL_18;
  FACE_IMAGE_WIDTH = v19->static_fields->FACE_IMAGE_WIDTH;
  *(_DWORD *)(v20 + 36) = 1065353216;
  *(float *)(v20 + 32) = -FACE_IMAGE_WIDTH;
  if ( v21 == 1 )
    goto LABEL_18;
  *(_QWORD *)(v20 + 40) = 0LL;
  this->fields.MESSAGE_SCROLL_POS = (struct UnityEngine_Vector2_array *)v20;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.MESSAGE_SCROLL_POS, v20, v17, v18);
  ScriptMessageCommonManager___ctor((ScriptMessageCommonManager_o *)this, v23);
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
    sub_1B71828(faceIcon, method);
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
    sub_1B71828(faceIcon, *(_QWORD *)&width);
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
  if ( !byte_4A1A751 )
  {
    this = (ScriptFaceMessageManager_o *)sub_1B715CC(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A1A751 = 1;
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
    sub_1B71828(this, method);
  }
  if ( (unsigned int)talkMode_k__BackingField >= MESSAGE_SCROLL_POS->max_length )
LABEL_18:
    sub_1B71830(this, method);
  v4->fields.dispSize = (struct UnityEngine_Vector2_o)vadd_f32(
                                                        v11[13],
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
  if ( (byte_4A2166B & 1) == 0 )
  {
    this = (ScriptFaceMessageManager_o *)sub_1B715CC(
                                           &Method_SingletonMonoBehaviour_ScriptManager__get_Instance__,
                                           *(_QWORD *)&mode);
    byte_4A2166B = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      sub_1B71828(0LL, v8);
    LOBYTE(Instance[56].monitor) = 0;
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
  int32_t v11; // w3
  const MethodInfo *v12; // x2
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
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x6

  if ( (byte_4A2166A & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, method);
    sub_1B715CC(&Method_UnityEngine_Object_Instantiate_UILabel___, v3);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v4);
    sub_1B715CC(&ScriptMessageLabel_TypeInfo, v5);
    sub_1B715CC(&StringLiteral_919/*"-"*/, v6);
    sub_1B715CC(&StringLiteral_25193/*"■"*/, v7);
    byte_4A2166A = 1;
  }
  rootObject = (unsigned __int64)this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)rootObject,
                       (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.rootPanel = (struct UIPanel_o *)Component_object;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.rootPanel, (int32_t)Component_object, v10, v11);
  rootObject = (unsigned int)this->fields.messageFontSize;
  if ( !(_DWORD)rootObject )
  {
    if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    rootObject = ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_919/*"-"*/, 0, v12);
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
                                   (const MethodInfo_2EDE770 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  v15 = this->fields.defaultMessageWindow;
  if ( !v15 )
    goto LABEL_15;
  v16 = (UILabel_o *)rootObject;
  rootObject = (unsigned __int64)UnityEngine_Object__Instantiate_object_(
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
  rootObject = ((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v16->klass->vtable._22_get_localSize.method)(
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
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, v27);
  ScriptFaceMessageManager__SetMessageWindowLayout(this, v28);
  ScriptMessageCommonManager__SetScreen((ScriptMessageCommonManager_o *)this, 0, 0, 0, 0, 1, v29);
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