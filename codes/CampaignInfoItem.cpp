void __fastcall CampaignInfoItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4215D83 & 1) == 0 )
  {
    sub_B0D8A4(&CampaignInfoItem_TypeInfo, v1);
    byte_4215D83 = 1;
  }
  CampaignInfoItem_TypeInfo->static_fields->baseWidth = 900;
}


void __fastcall CampaignInfoItem___ctor(CampaignInfoItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CampaignInfoItem__OnClick(CampaignInfoItem_o *this, const MethodInfo *method)
{
  CampaignInfoItem_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct CampaignInformation_o *target; // x8
  int32_t urlOpenType; // w8
  struct CampaignInformation_o *v7; // x8
  System_String_o *url; // x19
  struct CampaignInformation_o *v9; // x8

  v2 = this;
  if ( (byte_4215D82 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    sub_B0D8A4(&WebViewManager_TypeInfo, v3);
    this = (CampaignInfoItem_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4215D82 = 1;
  }
  target = v2->fields.target;
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
    v9 = v2->fields.target;
    if ( v9 )
    {
      UnityEngine_Application__OpenURL(v9->fields.url, 0LL);
      return;
    }
    goto LABEL_20;
  }
  if ( urlOpenType != 1 )
    return;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v7 = v2->fields.target;
  if ( !v7 )
LABEL_20:
    sub_B0D97C(this);
  url = v7->fields.url;
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Shader_o *v17; // x24
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Material_o *v20; // x23
  UIWidget_o *baseText; // x22
  UITexture_o *v22; // x22
  int v23; // w23
  int v24; // w24
  int32_t baseWidth; // s8
  int v26; // w25
  int v27; // w0
  float v28; // s4
  float v29; // s5
  float v30; // s6
  float v31; // s7
  MethodInfo v32; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4215D81 & 1) == 0 )
  {
    sub_B0D8A4(&CampaignInfoItem_TypeInfo, info);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_4552/*"Custom/SpriteWithMask"*/, v14);
    sub_B0D8A4(&StringLiteral_16063/*"_MaskTex"*/, v15);
    byte_4215D81 = 1;
  }
  this->fields.target = info;
  sub_B0D840(
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
  v17 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4552/*"Custom/SpriteWithMask"*/, 0LL);
  v20 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v18, v19);
  UnityEngine_Material___ctor(v20, v17, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseText;
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))gameObject->klass[1].vtable._2_GetHashCode.method)(
                                             gameObject,
                                             v20,
                                             gameObject->klass[1].vtable._3_ToString.methodPtr);
  if ( !v20 )
    goto LABEL_16;
  UnityEngine_Material__set_mainTexture(v20, (UnityEngine_Texture_o *)tex, 0LL);
  UnityEngine_Material__SetTexture(v20, (System_String_o *)StringLiteral_16063/*"_MaskTex"*/, (UnityEngine_Texture_o *)maskTex, 0LL);
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
  v22 = this->fields.baseText;
  v23 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
          tex,
          tex->klass->vtable._7_set_height.methodPtr);
  v24 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
          tex,
          tex->klass->vtable._7_set_height.methodPtr);
  baseWidth = CampaignInfoItem_TypeInfo->static_fields->baseWidth;
  v26 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._4_get_width.method)(
          tex,
          tex->klass->vtable._5_set_width.methodPtr);
  v27 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
          tex,
          tex->klass->vtable._7_set_height.methodPtr);
  v28 = (float)(v23 - height);
  v35.fields.m_Width = (float)baseWidth / (float)v26;
  v35.fields.m_YMin = v28 / (float)v24;
  v35.fields.m_Height = (float)height / (float)v27;
  v35.fields.m_XMin = 0.0;
  v32.methodPointer = 0LL;
  v32.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v35, v28, v29, v30, v31, &v32);
  if ( !v22 )
    goto LABEL_16;
  *(_QWORD *)&v36.fields.m_XMin = v32.methodPointer;
  *(_QWORD *)&v36.fields.m_Width = v32.invoker_method;
  UITexture__set_uvRect(v22, v36, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.collider;
  if ( !gameObject
    || (v33.fields.z = 1.0,
        v33.fields.y = (float)height,
        v33.fields.x = (float)CampaignInfoItem_TypeInfo->static_fields->baseWidth,
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v33, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.collider) == 0LL) )
  {
LABEL_16:
    sub_B0D97C(gameObject);
  }
  v34.fields.y = (float)-height * 0.5;
  v34.fields.x = 0.0;
  v34.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)gameObject, v34, 0LL);
}