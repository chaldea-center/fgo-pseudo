void __fastcall ScriptFaceMessageManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418BE99 & 1) == 0 )
  {
    sub_B2C35C(&ScriptFaceMessageManager_TypeInfo, v1);
    byte_418BE99 = 1;
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  int v14; // w8
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int v21; // w8
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int v28; // w8
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x20
  ScriptFaceMessageManager_c *v36; // x8
  int v37; // w9
  float FACE_IMAGE_WIDTH; // s0
  __int64 v39; // x0

  if ( (byte_418BE98 & 1) == 0 )
  {
    sub_B2C35C(&ScriptFaceMessageManager_TypeInfo, method);
    sub_B2C35C(&float___TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Vector2___TypeInfo, v4);
    sub_B2C35C(&UnityEngine_Vector3___TypeInfo, v5);
    byte_418BE98 = 1;
  }
  v6 = sub_B2C374(float___TypeInfo, 2LL);
  if ( !v6 )
    goto LABEL_20;
  v14 = *(_DWORD *)(v6 + 24);
  if ( !v14 )
    goto LABEL_19;
  *(_DWORD *)(v6 + 32) = 1133576192;
  if ( v14 == 1 )
    goto LABEL_19;
  *(_DWORD *)(v6 + 36) = 1138491392;
  this->fields.ALIGN_CENTER_BASE = (struct System_Single_array *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.ALIGN_CENTER_BASE,
    (System_Int32_array **)v6,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v6 = sub_B2C374(float___TypeInfo, 2LL);
  if ( !v6 )
    goto LABEL_20;
  v21 = *(_DWORD *)(v6 + 24);
  if ( !v21 )
    goto LABEL_19;
  *(_DWORD *)(v6 + 32) = 1143767040;
  if ( v21 == 1 )
    goto LABEL_19;
  *(_DWORD *)(v6 + 36) = 1146224640;
  this->fields.ALIGN_RIGHT_BASE = (struct System_Single_array *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.ALIGN_RIGHT_BASE,
    (System_Int32_array **)v6,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v6 = sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
  if ( !v6 )
    goto LABEL_20;
  v28 = *(_DWORD *)(v6 + 24);
  if ( !v28 || (*(_DWORD *)(v6 + 40) = 0, *(_QWORD *)(v6 + 32) = 0x4150000042200000LL, v28 == 1) )
  {
LABEL_19:
    v39 = sub_B2C460(v6);
    sub_B2C400(v39, 0LL);
  }
  *(_DWORD *)(v6 + 52) = 0;
  *(_QWORD *)(v6 + 44) = 0x41500000C2CE0000LL;
  this->fields.TALK_NAME_ANCHOR_POS = (struct UnityEngine_Vector3_array *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.TALK_NAME_ANCHOR_POS,
    (System_Int32_array **)v6,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v6 = sub_B2C374(UnityEngine_Vector2___TypeInfo, 2LL);
  v35 = v6;
  v36 = ScriptFaceMessageManager_TypeInfo;
  if ( (BYTE3(ScriptFaceMessageManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptFaceMessageManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptFaceMessageManager_TypeInfo);
    v36 = ScriptFaceMessageManager_TypeInfo;
  }
  if ( !v35 )
LABEL_20:
    sub_B2C434(v6, v7);
  v37 = *(_DWORD *)(v35 + 24);
  if ( !v37 )
    goto LABEL_19;
  FACE_IMAGE_WIDTH = v36->static_fields->FACE_IMAGE_WIDTH;
  *(_DWORD *)(v35 + 36) = 1065353216;
  *(float *)(v35 + 32) = -FACE_IMAGE_WIDTH;
  if ( v37 == 1 )
    goto LABEL_19;
  *(_QWORD *)(v35 + 40) = 0LL;
  this->fields.MESSAGE_SCROLL_POS = (struct UnityEngine_Vector2_array *)v35;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.MESSAGE_SCROLL_POS,
    (System_Int32_array **)v35,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
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
    sub_B2C434(faceIcon, method);
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
    sub_B2C434(faceIcon, *(_QWORD *)&width);
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
  UnityEngine_Transform_o *transform; // x20
  int v10; // s0
  struct UnityEngine_Vector2_array *MESSAGE_SCROLL_POS; // x8
  __int64 v14; // x0

  ALIGN_CENTER_BASE = this->fields.ALIGN_CENTER_BASE;
  if ( !ALIGN_CENTER_BASE )
    goto LABEL_13;
  talkMode_k__BackingField = this->fields._talkMode_k__BackingField;
  v4 = this;
  if ( (unsigned int)talkMode_k__BackingField >= ALIGN_CENTER_BASE->max_length )
    goto LABEL_14;
  v5 = ALIGN_CENTER_BASE->m_Items[talkMode_k__BackingField + 1];
  ALIGN_RIGHT_BASE = this->fields.ALIGN_RIGHT_BASE;
  this->fields.alignCenterBase = v5;
  if ( !ALIGN_RIGHT_BASE )
    goto LABEL_13;
  if ( (unsigned int)talkMode_k__BackingField >= ALIGN_RIGHT_BASE->max_length )
    goto LABEL_14;
  v7 = ALIGN_RIGHT_BASE->m_Items[talkMode_k__BackingField + 1];
  TALK_NAME_ANCHOR_POS = this->fields.TALK_NAME_ANCHOR_POS;
  this->fields.alignRightBase = v7;
  if ( !TALK_NAME_ANCHOR_POS )
    goto LABEL_13;
  if ( (unsigned int)talkMode_k__BackingField >= TALK_NAME_ANCHOR_POS->max_length )
    goto LABEL_14;
  this = (ScriptFaceMessageManager_o *)this->fields.talkNameAnchor;
  if ( !this
    || (UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)this,
          *(UnityEngine_Vector3_o *)&TALK_NAME_ANCHOR_POS->m_Items[talkMode_k__BackingField].fields.y,
          0LL),
        (this = (ScriptFaceMessageManager_o *)v4->fields.dispPanel) == 0LL)
    || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v10, 0LL),
        (MESSAGE_SCROLL_POS = v4->fields.MESSAGE_SCROLL_POS) == 0LL) )
  {
LABEL_13:
    sub_B2C434(this, method);
  }
  if ( (unsigned int)talkMode_k__BackingField >= MESSAGE_SCROLL_POS->max_length )
  {
LABEL_14:
    v14 = sub_B2C460(this);
    sub_B2C400(v14, 0LL);
  }
  v4->fields.dispSize = (struct UnityEngine_Vector2_o)vadd_f32(
                                                        (float32x2_t)v4->fields.defaultWindowDispSize,
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
  const MethodInfo *v5; // x1
  int32_t talkMode_k__BackingField; // w8
  WebViewManager_o *Instance; // x0

  if ( (byte_418BE97 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, *(_QWORD *)&mode);
    byte_418BE97 = 1;
  }
  this->fields._talkMode_k__BackingField = mode;
  ScriptMessageCommonManager__SetActiveBackLogButton((ScriptMessageCommonManager_o *)this, 0, 0LL);
  talkMode_k__BackingField = this->fields._talkMode_k__BackingField;
  if ( talkMode_k__BackingField == 1 )
  {
    ScriptMessageCommonManager__SetActiveAutoMessageButton((ScriptMessageCommonManager_o *)this, 1, 0LL);
  }
  else if ( !talkMode_k__BackingField )
  {
    ScriptMessageCommonManager__SetActiveAutoMessageButton((ScriptMessageCommonManager_o *)this, 0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v5);
    LOBYTE(Instance[8].fields.webViewScreen) = 0;
  }
  ScriptFaceMessageManager__SetMessageWindowLayout(this, v5);
}


void __fastcall ScriptFaceMessageManager__Start(ScriptFaceMessageManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *rootObject; // x0
  struct UIPanel_o *Component_srcLineSprite; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int32_t messageFontSize; // w0
  struct UnityEngine_GameObject_o *mainPrefab; // x20
  UILabel_o *v19; // x20
  UILabel_o *v20; // x21
  struct UnityEngine_Font_o *trueTypeFont; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  float v34; // s1
  float v35; // s1
  UnityEngine_Object_o *gameObject; // x0
  UnityEngine_Object_o *v37; // x0
  const MethodInfo *v38; // x1

  if ( (byte_418BE96 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UILabel___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v3);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&ScriptMessageLabel_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_747/*"-"*/, v7);
    sub_B2C35C(&StringLiteral_23777/*"■"*/, v8);
    byte_418BE96 = 1;
  }
  rootObject = this->fields.rootObject;
  if ( !rootObject )
    goto LABEL_17;
  Component_srcLineSprite = (struct UIPanel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  rootObject,
                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  this->fields.rootPanel = Component_srcLineSprite;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.rootPanel,
    (System_Int32_array **)Component_srcLineSprite,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  messageFontSize = this->fields.messageFontSize;
  if ( !messageFontSize )
  {
    if ( (BYTE3(ScriptMessageLabel_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
    }
    messageFontSize = ScriptMessageLabel__GetFontSize((System_String_o *)StringLiteral_747/*"-"*/, 0, 0LL);
  }
  this->fields.defaultFontSize = messageFontSize;
  mainPrefab = this->fields.mainPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)mainPrefab,
                                             (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !rootObject )
    goto LABEL_17;
  v19 = (UILabel_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                       rootObject,
                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)this->fields.rubyPrefab,
                                             (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !rootObject )
    goto LABEL_17;
  rootObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             rootObject,
                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !v19 )
    goto LABEL_17;
  v20 = (UILabel_o *)rootObject;
  trueTypeFont = UILabel__get_trueTypeFont(v19, 0LL);
  this->fields.defaultFontType = trueTypeFont;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.defaultFontType,
    (System_Int32_array **)trueTypeFont,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.fontType = trueTypeFont;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.fontType,
    (System_Int32_array **)trueTypeFont,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  UILabel__set_fontSize(v19, this->fields.defaultFontSize, 0LL);
  UILabel__set_text(v19, (System_String_o *)StringLiteral_23777/*"■"*/, 0LL);
  rootObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v19->klass->vtable._22_get_localSize.method)(
                                             v19,
                                             v19->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.defaultTextOnlyLineHeight = v34;
  if ( !v20 )
LABEL_17:
    sub_B2C434(rootObject, method);
  this->fields.rubyFontSize = v20->fields.mFontSize;
  UILabel__set_text(v20, (System_String_o *)StringLiteral_23777/*"■"*/, 0LL);
  ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))v20->klass->vtable._22_get_localSize.method)(
    v20,
    v20->klass->vtable._23_get_drawingDimensions.methodPtr);
  this->fields.rubyLineHeight = v35;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0LL);
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  v37 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0LL);
  UnityEngine_Object__Destroy_35314896(v37, 0LL);
  ScriptFaceMessageManager__SetMessageWindowLayout(this, v38);
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