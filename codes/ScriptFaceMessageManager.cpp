void __fastcall ScriptFaceMessageManager___cctor(const MethodInfo *method)
{
  if ( (byte_438FB9E & 1) == 0 )
  {
    sub_B775C4(&ScriptFaceMessageManager_TypeInfo);
    byte_438FB9E = 1;
  }
  LODWORD(ScriptFaceMessageManager_TypeInfo->static_fields->FACE_IMAGE_WIDTH) = (struct ScriptFaceMessageManager_StaticFields)1120403456;
}


void __fastcall ScriptFaceMessageManager___ctor(ScriptFaceMessageManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  int v11; // w8
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int v18; // w8
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int v25; // w8
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x20
  ScriptFaceMessageManager_c *v33; // x8
  int v34; // w9
  float FACE_IMAGE_WIDTH; // s0
  __int64 v36; // x0

  if ( (byte_438FB9D & 1) == 0 )
  {
    sub_B775C4(&ScriptFaceMessageManager_TypeInfo);
    sub_B775C4(&float___TypeInfo);
    sub_B775C4(&UnityEngine_Vector2___TypeInfo);
    sub_B775C4(&UnityEngine_Vector3___TypeInfo);
    byte_438FB9D = 1;
  }
  v3 = sub_B775DC(float___TypeInfo, 2LL);
  if ( !v3 )
    goto LABEL_20;
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11 )
    goto LABEL_19;
  *(_DWORD *)(v3 + 32) = 1133576192;
  if ( v11 == 1 )
    goto LABEL_19;
  *(_DWORD *)(v3 + 36) = 1138491392;
  this->fields.ALIGN_CENTER_BASE = (struct System_Single_array *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.ALIGN_CENTER_BASE,
    (System_Int32_array **)v3,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v3 = sub_B775DC(float___TypeInfo, 2LL);
  if ( !v3 )
    goto LABEL_20;
  v18 = *(_DWORD *)(v3 + 24);
  if ( !v18 )
    goto LABEL_19;
  *(_DWORD *)(v3 + 32) = 1143767040;
  if ( v18 == 1 )
    goto LABEL_19;
  *(_DWORD *)(v3 + 36) = 1146224640;
  this->fields.ALIGN_RIGHT_BASE = (struct System_Single_array *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.ALIGN_RIGHT_BASE,
    (System_Int32_array **)v3,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v3 = sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
  if ( !v3 )
    goto LABEL_20;
  v25 = *(_DWORD *)(v3 + 24);
  if ( !v25 || (*(_DWORD *)(v3 + 40) = 0, *(_QWORD *)(v3 + 32) = 0x4150000042200000LL, v25 == 1) )
  {
LABEL_19:
    v36 = sub_B776C8(v3);
    sub_B77668(v36, 0LL);
  }
  *(_DWORD *)(v3 + 52) = 0;
  *(_QWORD *)(v3 + 44) = 0x41500000C2CE0000LL;
  this->fields.TALK_NAME_ANCHOR_POS = (struct UnityEngine_Vector3_array *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.TALK_NAME_ANCHOR_POS,
    (System_Int32_array **)v3,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v3 = sub_B775DC(UnityEngine_Vector2___TypeInfo, 2LL);
  v32 = v3;
  v33 = ScriptFaceMessageManager_TypeInfo;
  if ( (BYTE3(ScriptFaceMessageManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptFaceMessageManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptFaceMessageManager_TypeInfo);
    v33 = ScriptFaceMessageManager_TypeInfo;
  }
  if ( !v32 )
LABEL_20:
    sub_B7769C(v3, v4);
  v34 = *(_DWORD *)(v32 + 24);
  if ( !v34 )
    goto LABEL_19;
  FACE_IMAGE_WIDTH = v33->static_fields->FACE_IMAGE_WIDTH;
  *(_DWORD *)(v32 + 36) = 1065353216;
  *(float *)(v32 + 32) = -FACE_IMAGE_WIDTH;
  if ( v34 == 1 )
    goto LABEL_19;
  *(_QWORD *)(v32 + 40) = 0LL;
  this->fields.MESSAGE_SCROLL_POS = (struct UnityEngine_Vector2_array *)v32;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.MESSAGE_SCROLL_POS,
    (System_Int32_array **)v32,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  ScriptMessageCommonManager___ctor((ScriptMessageCommonManager_o *)this, 0LL);
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
    sub_B7769C(faceIcon, method);
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
    sub_B7769C(faceIcon, *(_QWORD *)&width);
  UIWidget__set_height(faceIcon, height, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptFaceMessageManager__SetMessageWindowLayout(
        ScriptFaceMessageManager_o *this,
        const MethodInfo *method)
{
  struct System_Single_array *ALIGN_CENTER_BASE; // x8
  __int64 talkMode_k__BackingField; // x21
  ScriptFaceMessageManager_o *v4; // x19
  float v5; // w9
  struct System_Single_array *ALIGN_RIGHT_BASE; // x8
  float v7; // w9
  struct UnityEngine_Vector3_array *TALK_NAME_ANCHOR_POS; // x8
  struct ScriptMessageWindow_o *defaultMessageWindow; // x8
  UnityEngine_Transform_o *transform; // x20
  int v11; // s0
  float32x2_t *v14; // x8
  struct UnityEngine_Vector2_array *MESSAGE_SCROLL_POS; // x9
  __int64 v16; // x0

  ALIGN_CENTER_BASE = this->fields.ALIGN_CENTER_BASE;
  if ( !ALIGN_CENTER_BASE )
    goto LABEL_15;
  talkMode_k__BackingField = this->fields._talkMode_k__BackingField;
  v4 = this;
  if ( (unsigned int)talkMode_k__BackingField >= ALIGN_CENTER_BASE->max_length )
    goto LABEL_16;
  v5 = ALIGN_CENTER_BASE->m_Items[talkMode_k__BackingField + 1];
  ALIGN_RIGHT_BASE = this->fields.ALIGN_RIGHT_BASE;
  this->fields.alignCenterBase = v5;
  if ( !ALIGN_RIGHT_BASE )
    goto LABEL_15;
  if ( (unsigned int)talkMode_k__BackingField >= ALIGN_RIGHT_BASE->max_length )
    goto LABEL_16;
  v7 = ALIGN_RIGHT_BASE->m_Items[talkMode_k__BackingField + 1];
  TALK_NAME_ANCHOR_POS = this->fields.TALK_NAME_ANCHOR_POS;
  this->fields.alignRightBase = v7;
  if ( !TALK_NAME_ANCHOR_POS )
    goto LABEL_15;
  if ( (unsigned int)talkMode_k__BackingField >= TALK_NAME_ANCHOR_POS->max_length )
    goto LABEL_16;
  this = (ScriptFaceMessageManager_o *)this->fields.talkNameAnchor;
  if ( !this )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)this,
    *(UnityEngine_Vector3_o *)&TALK_NAME_ANCHOR_POS->m_Items[talkMode_k__BackingField].fields.y,
    0LL);
  defaultMessageWindow = v4->fields.defaultMessageWindow;
  if ( !defaultMessageWindow
    || (this = (ScriptFaceMessageManager_o *)defaultMessageWindow->fields.dispPanel) == 0LL
    || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v11, 0LL),
        (v14 = (float32x2_t *)v4->fields.defaultMessageWindow) == 0LL)
    || (MESSAGE_SCROLL_POS = v4->fields.MESSAGE_SCROLL_POS) == 0LL )
  {
LABEL_15:
    sub_B7769C(this, method);
  }
  if ( (unsigned int)talkMode_k__BackingField >= MESSAGE_SCROLL_POS->max_length )
  {
LABEL_16:
    v16 = sub_B776C8(this);
    sub_B77668(v16, 0LL);
  }
  v4->fields.dispSize = (struct UnityEngine_Vector2_o)vadd_f32(
                                                        v14[12],
                                                        vadd_f32(
                                                          *(float32x2_t *)&MESSAGE_SCROLL_POS->m_Items[talkMode_k__BackingField].fields.y,
                                                          *(float32x2_t *)&MESSAGE_SCROLL_POS->m_Items[talkMode_k__BackingField].fields.y)).n64_u64[0];
}


void __fastcall ScriptFaceMessageManager__SetTalkMode(
        ScriptFaceMessageManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t talkMode_k__BackingField; // w8
  WebViewManager_o *Instance; // x0

  if ( (byte_438FB9C & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_438FB9C = 1;
  }
  this->fields._talkMode_k__BackingField = mode;
  ScriptMessageCommonManager__SetActiveBackLogButton((ScriptMessageCommonManager_o *)this, 0, 1, 0LL);
  talkMode_k__BackingField = this->fields._talkMode_k__BackingField;
  if ( talkMode_k__BackingField == 1 )
  {
    ScriptMessageCommonManager__SetActiveAutoMessageButton((ScriptMessageCommonManager_o *)this, 1, 1, 0LL);
  }
  else if ( !talkMode_k__BackingField )
  {
    ScriptMessageCommonManager__SetActiveAutoMessageButton((ScriptMessageCommonManager_o *)this, 0, 1, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      sub_B7769C(0LL, v5);
    LOBYTE(Instance[8].fields.commonCamera) = 0;
  }
  ScriptFaceMessageManager__SetMessageWindowLayout(this, v5);
}


void __fastcall ScriptFaceMessageManager__Start(ScriptFaceMessageManager_o *this, const MethodInfo *method)
{
  unsigned __int64 rootObject; // x0
  struct UIPanel_o *Component_srcLineSprite; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct ScriptMessageWindow_o *defaultMessageWindow; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *messageMainLabel; // x20
  struct ScriptMessageWindow_o *v13; // x8
  UILabel_o *v14; // x20
  UILabel_o *v15; // x21
  struct UnityEngine_Font_o *trueTypeFont; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  float v29; // s1
  float v30; // s1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v32; // x0
  const MethodInfo *v33; // x1

  if ( (byte_438FB9B & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ScriptMessageLabel_TypeInfo);
    sub_B775C4(&StringLiteral_762/*"-"*/);
    sub_B775C4(&StringLiteral_24266/*"■"*/);
    byte_438FB9B = 1;
  }
  rootObject = (unsigned __int64)this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_17;
  Component_srcLineSprite = (struct UIPanel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)rootObject,
                                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.rootPanel = Component_srcLineSprite;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.rootPanel,
    (System_Int32_array **)Component_srcLineSprite,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  rootObject = (unsigned int)this->fields.messageFontSize;
  if ( !(_DWORD)rootObject )
  {
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    rootObject = ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_762/*"-"*/, 0, 0LL);
  }
  defaultMessageWindow = this->fields.defaultMessageWindow;
  this->fields.defaultFontSize = rootObject;
  if ( !defaultMessageWindow )
    goto LABEL_17;
  messageMainLabel = (UnityEngine_UI_Dropdown_DropdownItem_o *)defaultMessageWindow->fields.messageMainLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rootObject = (unsigned __int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   messageMainLabel,
                                   (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  v13 = this->fields.defaultMessageWindow;
  if ( !v13 )
    goto LABEL_17;
  v14 = (UILabel_o *)rootObject;
  rootObject = (unsigned __int64)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)v13->fields.messageRubyLabel,
                                   (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !v14 )
    goto LABEL_17;
  v15 = (UILabel_o *)rootObject;
  trueTypeFont = UILabel__get_trueTypeFont(v14, 0LL);
  this->fields.defaultFontType = trueTypeFont;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.defaultFontType,
    (System_Int32_array **)trueTypeFont,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.fontType = trueTypeFont;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)trueTypeFont,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  UILabel__set_fontSize(v14, this->fields.defaultFontSize, 0LL);
  UILabel__set_text(v14, (System_String_o *)StringLiteral_24266/*"■"*/, 0LL);
  rootObject = ((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v14->klass->vtable._22_get_localSize.method)(
                 v14,
                 v14->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.defaultTextOnlyLineHeight = v29;
  if ( !v15 )
LABEL_17:
    sub_B7769C(rootObject, method);
  this->fields.rubyFontSize = v15->fields.mFontSize;
  UILabel__set_text(v15, (System_String_o *)StringLiteral_24266/*"■"*/, 0LL);
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v15->klass->vtable._22_get_localSize.method)(
    v15,
    v15->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyLineHeight = v30;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
  UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
  v32 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
  UnityEngine_Object__Destroy_36309980(v32, 0LL);
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptFaceMessageManager__SetMessageWindowLayout(this, v33);
  ScriptMessageCommonManager__SetScreen((ScriptMessageCommonManager_o *)this, 0, 0, 0, 0, 1, 0LL);
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