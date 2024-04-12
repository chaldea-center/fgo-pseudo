void __fastcall CampaignInfoItem___cctor(const MethodInfo *method)
{
  if ( (byte_42B1678 & 1) == 0 )
  {
    sub_B52984(&CampaignInfoItem_TypeInfo);
    byte_42B1678 = 1;
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
  struct CampaignInformation_o *target; // x8
  int32_t urlOpenType; // w8
  struct CampaignInformation_o *v5; // x8
  System_String_o *url; // x19
  struct CampaignInformation_o *v7; // x8

  v2 = this;
  if ( (byte_42B1677 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&WebViewManager_TypeInfo);
    this = (CampaignInfoItem_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B1677 = 1;
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
    v7 = v2->fields.target;
    if ( v7 )
    {
      UnityEngine_Application__OpenURL(v7->fields.url, 0LL);
      return;
    }
    goto LABEL_20;
  }
  if ( urlOpenType != 1 )
    return;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v5 = v2->fields.target;
  if ( !v5 )
LABEL_20:
    sub_B52A5C(this, method);
  url = v5->fields.url;
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  UnityEngine_Shader_o *v15; // x24
  UnityEngine_Material_o *v16; // x23
  UIWidget_o *baseText; // x22
  UITexture_o *v18; // x22
  int v19; // w23
  int v20; // w24
  int32_t baseWidth; // s8
  int v22; // w25
  int v23; // w0
  float v24; // s4
  float v25; // s5
  float v26; // s6
  float v27; // s7
  MethodInfo v28; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B1676 & 1) == 0 )
  {
    sub_B52984(&CampaignInfoItem_TypeInfo);
    sub_B52984(&UnityEngine_Material_TypeInfo);
    sub_B52984(&StringLiteral_4576/*"Custom/SpriteWithMask"*/);
    sub_B52984(&StringLiteral_16122/*"_MaskTex"*/);
    byte_42B1676 = 1;
  }
  this->fields.target = info;
  sub_B52920(
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
  v15 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4576/*"Custom/SpriteWithMask"*/, 0LL);
  v16 = (UnityEngine_Material_o *)sub_B52A54(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v16, v15, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseText;
  if ( !gameObject )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))gameObject->klass[1].vtable._2_GetHashCode.method)(
                                             gameObject,
                                             v16,
                                             gameObject->klass[1].vtable._3_ToString.methodPtr);
  if ( !v16 )
    goto LABEL_16;
  UnityEngine_Material__set_mainTexture(v16, (UnityEngine_Texture_o *)tex, 0LL);
  UnityEngine_Material__SetTexture(v16, (System_String_o *)StringLiteral_16122/*"_MaskTex"*/, (UnityEngine_Texture_o *)maskTex, 0LL);
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
  v18 = this->fields.baseText;
  v19 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
          tex,
          tex->klass->vtable._7_set_height.methodPtr);
  v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
          tex,
          tex->klass->vtable._7_set_height.methodPtr);
  baseWidth = CampaignInfoItem_TypeInfo->static_fields->baseWidth;
  v22 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._4_get_width.method)(
          tex,
          tex->klass->vtable._5_set_width.methodPtr);
  v23 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
          tex,
          tex->klass->vtable._7_set_height.methodPtr);
  v24 = (float)(v19 - height);
  v31.fields.m_Width = (float)baseWidth / (float)v22;
  v31.fields.m_YMin = v24 / (float)v20;
  v31.fields.m_Height = (float)height / (float)v23;
  v31.fields.m_XMin = 0.0;
  v28.methodPointer = 0LL;
  v28.invoker_method = 0LL;
  UnityEngine_Rect___ctor(v31, v24, v25, v26, v27, &v28);
  if ( !v18 )
    goto LABEL_16;
  *(_QWORD *)&v32.fields.m_XMin = v28.methodPointer;
  *(_QWORD *)&v32.fields.m_Width = v28.invoker_method;
  UITexture__set_uvRect(v18, v32, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.collider;
  if ( !gameObject
    || (v29.fields.z = 1.0,
        v29.fields.y = (float)height,
        v29.fields.x = (float)CampaignInfoItem_TypeInfo->static_fields->baseWidth,
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v29, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.collider) == 0LL) )
  {
LABEL_16:
    sub_B52A5C(gameObject, v14);
  }
  v30.fields.y = (float)-height * 0.5;
  v30.fields.x = 0.0;
  v30.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)gameObject, v30, 0LL);
}