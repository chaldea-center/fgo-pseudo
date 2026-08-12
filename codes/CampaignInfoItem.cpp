void CampaignInfoItem___cctor(const MethodInfo *method)
{
  if ( (byte_5969EB3 & 1) == 0 )
  {
    sub_2213A60(&CampaignInfoItem_TypeInfo);
    byte_5969EB3 = 1;
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
  __int64 v7; // x2
  struct CampaignInformation_o *v8; // x8
  System_String_o *url; // x19
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  __int64 v12; // x2
  struct CampaignInformation_o *v13; // x8
  System_String_o *v14; // x19

  v2 = this;
  if ( (byte_5969EB2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&Method_CampaignInfoItem_OnClick__);
    sub_2213A60(&WebViewManager_TypeInfo);
    this = (CampaignInfoItem_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5969EB2 = 1;
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
      v5 = (_QWORD *)sub_2213A78();
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    v8 = v2->fields.target;
    if ( v8 )
    {
      url = v8->fields.url;
      if ( !*(&WebViewManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, method, v7);
      WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, url, 0, 0);
      return;
    }
LABEL_19:
    sub_2213CDC(this, method);
  }
  v10 = Method_CampaignInfoItem_OnClick__;
  if ( (*((_BYTE *)Method_CampaignInfoItem_OnClick__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_2213A78();
  v11 = (System_Reflection_MethodBase_o *)sub_2213A44(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
  v13 = v2->fields.target;
  if ( !v13 )
    goto LABEL_19;
  v14 = v13->fields.url;
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method, v12);
  UnityEngine_Application__OpenURL(v14, 0);
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
  __int64 v15; // x2
  UIWidget_o *baseText; // x22
  UITexture_o *v17; // x22
  int v18; // w23
  int v19; // w24
  int32_t baseWidth; // w27
  int v21; // w25
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5969EB1 & 1) == 0 )
  {
    sub_2213A60(&CampaignInfoItem_TypeInfo);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&StringLiteral_5128/*"Custom/SpriteWithMask"*/);
    sub_2213A60(&StringLiteral_16919/*"_MaskTex"*/);
    byte_5969EB1 = 1;
  }
  this->fields.target = info;
  sub_2213A04(&this->fields.target, info);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v13 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5128/*"Custom/SpriteWithMask"*/, 0);
  v14 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
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
  UnityEngine_Material__SetTexture(v14, (System_String_o *)StringLiteral_16919/*"_MaskTex"*/, (UnityEngine_Texture_o *)maskTex, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseText;
  if ( !gameObject )
    goto LABEL_15;
  UIWidget__set_height((UIWidget_o *)gameObject, height, 0);
  gameObject = (UnityEngine_GameObject_o *)CampaignInfoItem_TypeInfo;
  baseText = (UIWidget_o *)this->fields.baseText;
  if ( !*(&CampaignInfoItem_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CampaignInfoItem_TypeInfo, v12, v15);
  if ( !baseText )
    goto LABEL_15;
  UIWidget__set_width(baseText, CampaignInfoItem_TypeInfo->static_fields->baseWidth, 0);
  if ( !tex )
    goto LABEL_15;
  v17 = this->fields.baseText;
  v18 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))tex->klass->vtable._6_get_height.methodPtr)(
          tex,
          tex->klass->vtable._6_get_height.method);
  v19 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))tex->klass->vtable._6_get_height.methodPtr)(
          tex,
          tex->klass->vtable._6_get_height.method);
  baseWidth = CampaignInfoItem_TypeInfo->static_fields->baseWidth;
  v21 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))tex->klass->vtable._4_get_width.methodPtr)(
          tex,
          tex->klass->vtable._4_get_width.method);
  gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))tex->klass->vtable._6_get_height.methodPtr)(
                                             tex,
                                             tex->klass->vtable._6_get_height.method);
  if ( !v17 )
    goto LABEL_15;
  v24.fields.m_Height = (float)height / (float)(int)gameObject;
  v24.fields.m_Width = (float)baseWidth / (float)v21;
  v24.fields.m_YMin = (float)(v18 - height) / (float)v19;
  v24.fields.m_XMin = 0.0;
  UITexture__set_uvRect(v17, v24, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.collider;
  if ( !gameObject
    || (v22.fields.y = (float)height,
        v22.fields.z = 1.0,
        v22.fields.x = (float)CampaignInfoItem_TypeInfo->static_fields->baseWidth,
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v22, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.collider) == 0) )
  {
LABEL_15:
    sub_2213CDC(gameObject, v12);
  }
  v23.fields.y = vcvts_n_f32_s32(-height, 1u);
  v23.fields.x = 0.0;
  v23.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)gameObject, v23, 0);
}