void CampaignInfoItem___cctor(const MethodInfo *method)
{
  if ( (byte_4C50AA3 & 1) == 0 )
  {
    sub_1C3E564(&CampaignInfoItem_TypeInfo);
    byte_4C50AA3 = 1;
  }
  CampaignInfoItem_TypeInfo->static_fields->baseWidth = 900;
}


void CampaignInfoItem___ctor(CampaignInfoItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CampaignInfoItem__OnClick(CampaignInfoItem_o *this, const MethodInfo *method)
{
  CampaignInfoItem_o *v2; // x19
  struct CampaignInformation_o *target; // x8
  int32_t urlOpenType; // w8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct CampaignInformation_o *v7; // x8
  System_String_o *url; // x19
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  struct CampaignInformation_o *v11; // x8
  System_String_o *v12; // x19

  v2 = this;
  if ( (byte_4C50AA2 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    sub_1C3E564(&Method_CampaignInfoItem_OnClick__);
    sub_1C3E564(&WebViewManager_TypeInfo);
    this = (CampaignInfoItem_o *)sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C50AA2 = 1;
  }
  target = v2->fields.target;
  if ( !target )
    goto LABEL_19;
  urlOpenType = target->fields.urlOpenType;
  if ( urlOpenType != 2 )
  {
    if ( urlOpenType != 1 )
      return;
    v5 = Method_CampaignInfoItem_OnClick__;
    if ( (*((_BYTE *)Method_CampaignInfoItem_OnClick__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3E57C();
    v6 = (System_Reflection_MethodBase_o *)sub_1C3E548(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    v7 = v2->fields.target;
    if ( v7 )
    {
      url = v7->fields.url;
      if ( !WebViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
      WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, url, 0, 0);
      return;
    }
LABEL_19:
    sub_1C3E7C0(this, method);
  }
  v9 = Method_CampaignInfoItem_OnClick__;
  if ( (*((_BYTE *)Method_CampaignInfoItem_OnClick__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C3E57C();
  v10 = (System_Reflection_MethodBase_o *)sub_1C3E548(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
  v11 = v2->fields.target;
  if ( !v11 )
    goto LABEL_19;
  v12 = v11->fields.url;
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__OpenURL(v12, 0);
}


void CampaignInfoItem__SetCampaignInfo(
        CampaignInfoItem_o *this,
        CampaignInformation_o *info,
        UnityEngine_Texture2D_o *tex,
        UnityEngine_Texture2D_o *maskTex,
        int32_t height,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UnityEngine_Shader_o *v13; // x24
  UnityEngine_Material_o *v14; // x23
  UIWidget_o *baseText; // x22
  UITexture_o *v16; // x22
  int v17; // w23
  int v18; // w24
  int32_t baseWidth; // w27
  int v20; // w25
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C50AA1 & 1) == 0 )
  {
    sub_1C3E564(&CampaignInfoItem_TypeInfo);
    sub_1C3E564(&UnityEngine_Material_TypeInfo);
    sub_1C3E564(&StringLiteral_4940/*"Custom/SpriteWithMask"*/);
    sub_1C3E564(&StringLiteral_16279/*"_MaskTex"*/);
    byte_4C50AA1 = 1;
  }
  this->fields.target = info;
  sub_1C3E508(&this->fields.target, info);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v13 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4940/*"Custom/SpriteWithMask"*/, 0);
  v14 = (UnityEngine_Material_o *)sub_1C3E7B0(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v14, v13, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseText;
  if ( !gameObject )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))gameObject->klass[1].vtable._1_Finalize.method)(
                                             gameObject,
                                             v14,
                                             gameObject->klass[1].vtable._2_GetHashCode.methodPtr);
  if ( !v14 )
    goto LABEL_15;
  UnityEngine_Material__set_mainTexture(v14, (UnityEngine_Texture_o *)tex, 0);
  UnityEngine_Material__SetTexture(v14, (System_String_o *)StringLiteral_16279/*"_MaskTex"*/, (UnityEngine_Texture_o *)maskTex, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseText;
  if ( !gameObject )
    goto LABEL_15;
  UIWidget__set_height((UIWidget_o *)gameObject, height, 0);
  gameObject = (UnityEngine_GameObject_o *)CampaignInfoItem_TypeInfo;
  baseText = (UIWidget_o *)this->fields.baseText;
  if ( !CampaignInfoItem_TypeInfo->_2.cctor_finished )
    gameObject = (UnityEngine_GameObject_o *)j_il2cpp_runtime_class_init_0(CampaignInfoItem_TypeInfo);
  if ( !baseText )
    goto LABEL_15;
  UIWidget__set_width(baseText, CampaignInfoItem_TypeInfo->static_fields->baseWidth, 0);
  if ( !tex )
    goto LABEL_15;
  v16 = this->fields.baseText;
  v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))tex->klass->vtable._6_get_height.methodPtr)(
          tex,
          tex->klass->vtable._6_get_height.method);
  v18 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))tex->klass->vtable._6_get_height.methodPtr)(
          tex,
          tex->klass->vtable._6_get_height.method);
  baseWidth = CampaignInfoItem_TypeInfo->static_fields->baseWidth;
  v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))tex->klass->vtable._4_get_width.methodPtr)(
          tex,
          tex->klass->vtable._4_get_width.method);
  gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))tex->klass->vtable._6_get_height.methodPtr)(
                                             tex,
                                             tex->klass->vtable._6_get_height.method);
  if ( !v16 )
    goto LABEL_15;
  v23.fields.m_Height = (float)height / (float)(int)gameObject;
  v23.fields.m_Width = (float)baseWidth / (float)v20;
  v23.fields.m_YMin = (float)(v17 - height) / (float)v18;
  v23.fields.m_XMin = 0.0;
  UITexture__set_uvRect(v16, v23, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.collider;
  if ( !gameObject
    || (v21.fields.z = 1.0,
        v21.fields.y = (float)height,
        v21.fields.x = (float)CampaignInfoItem_TypeInfo->static_fields->baseWidth,
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v21, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.collider) == 0) )
  {
LABEL_15:
    sub_1C3E7C0(gameObject, v12);
  }
  v22.fields.x = 0.0;
  v22.fields.y = (float)-height * 0.5;
  v22.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)gameObject, v22, 0);
}