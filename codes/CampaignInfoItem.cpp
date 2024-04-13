void __fastcall CampaignInfoItem___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB63F & 1) == 0 )
  {
    sub_B5D5C4(&CampaignInfoItem_TypeInfo, v1, v2, v3);
    byte_42EB63F = 1;
  }
  CampaignInfoItem_TypeInfo->static_fields->baseWidth = 900;
}


void __fastcall CampaignInfoItem___ctor(CampaignInfoItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CampaignInfoItem__OnClick(CampaignInfoItem_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CampaignInfoItem_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct CampaignInformation_o *target; // x8
  int32_t urlOpenType; // w8
  struct CampaignInformation_o *v13; // x8
  System_String_o *url; // x19
  struct CampaignInformation_o *v15; // x8

  v4 = this;
  if ( (byte_42EB63E & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&WebViewManager_TypeInfo, v5, v6, v7);
    this = (CampaignInfoItem_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EB63E = 1;
  }
  target = v4->fields.target;
  if ( !target )
    goto LABEL_20;
  urlOpenType = target->fields.urlOpenType;
  if ( urlOpenType == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v15 = v4->fields.target;
    if ( v15 )
    {
      UnityEngine_Application__OpenURL(v15->fields.url, 0LL);
      return;
    }
    goto LABEL_20;
  }
  if ( urlOpenType != 1 )
    return;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v13 = v4->fields.target;
  if ( !v13 )
LABEL_20:
    sub_B5D69C(this, method);
  url = v13->fields.url;
  if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WebViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  }
  WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, url, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CampaignInfoItem__SetCampaignInfo(
        CampaignInfoItem_o *this,
        CampaignInformation_o *info,
        UnityEngine_Texture2D_o *tex,
        UnityEngine_Texture2D_o *maskTex,
        int32_t height,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  UnityEngine_Shader_o *v24; // x24
  UnityEngine_Material_o *v25; // x23
  UIWidget_o *baseText; // x22
  UITexture_o *v27; // x22
  int v28; // w23
  int v29; // w24
  int32_t baseWidth; // s8
  int v31; // w25
  int v32; // w0
  float v33; // s4
  float v34; // s5
  float v35; // s6
  float v36; // s7
  MethodInfo v37; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EB63D & 1) == 0 )
  {
    sub_B5D5C4(&CampaignInfoItem_TypeInfo, (_DWORD)info, (_DWORD)tex, maskTex);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_4609/*"Custom/SpriteWithMask"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_16207/*"_MaskTex"*/, v19, v20, v21);
    byte_42EB63D = 1;
  }
  this->fields.target = info;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.target,
    (System_Int32_array **)info,
    (System_String_array **)tex,
    (System_String_array **)maskTex,
    *(System_Boolean_array ***)&height,
    (System_Int32_array **)method,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v24 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4609/*"Custom/SpriteWithMask"*/, 0LL);
  v25 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v25, v24, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseText;
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))gameObject->klass[1].vtable._2_GetHashCode.method)(
                                             gameObject,
                                             v25,
                                             gameObject->klass[1].vtable._3_ToString.methodPtr);
  if ( !v25 )
    goto LABEL_16;
  UnityEngine_Material__set_mainTexture(v25, (UnityEngine_Texture_o *)tex, 0LL);
  UnityEngine_Material__SetTexture(v25, (System_String_o *)StringLiteral_16207/*"_MaskTex"*/, (UnityEngine_Texture_o *)maskTex, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseText;
  if ( !gameObject )
    goto LABEL_16;
  UIWidget__set_height((UIWidget_o *)gameObject, height, 0LL);
  baseText = (UIWidget_o *)this->fields.baseText;
  gameObject = (UnityEngine_GameObject_o *)CampaignInfoItem_TypeInfo;
  if ( (BYTE3(CampaignInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CampaignInfoItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CampaignInfoItem_TypeInfo);
  }
  if ( !baseText )
    goto LABEL_16;
  UIWidget__set_width(baseText, CampaignInfoItem_TypeInfo->static_fields->baseWidth, 0LL);
  if ( !tex )
    goto LABEL_16;
  v27 = this->fields.baseText;
  v28 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
          tex,
          tex->klass->vtable._7_set_height.methodPtr);
  v29 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
          tex,
          tex->klass->vtable._7_set_height.methodPtr);
  baseWidth = CampaignInfoItem_TypeInfo->static_fields->baseWidth;
  v31 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._4_get_width.method)(
          tex,
          tex->klass->vtable._5_set_width.methodPtr);
  v32 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
          tex,
          tex->klass->vtable._7_set_height.methodPtr);
  v33 = (float)(v28 - height);
  v40.fields.m_Width = (float)baseWidth / (float)v31;
  v40.fields.m_YMin = v33 / (float)v29;
  v40.fields.m_Height = (float)height / (float)v32;
  v40.fields.m_XMin = 0.0;
  v37.methodPointer = 0LL;
  v37.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v40, v33, v34, v35, v36, &v37);
  if ( !v27 )
    goto LABEL_16;
  *(_QWORD *)&v41.fields.m_XMin = v37.methodPointer;
  *(_QWORD *)&v41.fields.m_Width = v37.invoker_method;
  UITexture__set_uvRect(v27, v41, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.collider;
  if ( !gameObject
    || (v38.fields.z = 1.0,
        v38.fields.y = (float)height,
        v38.fields.x = (float)CampaignInfoItem_TypeInfo->static_fields->baseWidth,
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v38, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.collider) == 0LL) )
  {
LABEL_16:
    sub_B5D69C(gameObject, v23);
  }
  v39.fields.y = (float)-height * 0.5;
  v39.fields.x = 0.0;
  v39.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)gameObject, v39, 0LL);
}