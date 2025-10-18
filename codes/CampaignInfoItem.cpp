void CampaignInfoItem___cctor(const MethodInfo *method)
{
  if ( (byte_4C3CD23 & 1) == 0 )
  {
    sub_1C37058(&CampaignInfoItem_TypeInfo);
    byte_4C3CD23 = 1;
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
  if ( (byte_4C3CD22 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Application_TypeInfo);
    sub_1C37058(&Method_CampaignInfoItem_OnClick__);
    sub_1C37058(&WebViewManager_TypeInfo);
    this = (CampaignInfoItem_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3CD22 = 1;
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
      v5 = (_QWORD *)sub_1C37070();
    v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
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
    sub_1C372B4(this);
  }
  v9 = Method_CampaignInfoItem_OnClick__;
  if ( (*((_BYTE *)Method_CampaignInfoItem_OnClick__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C37070();
  v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
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
  UnityEngine_Shader_o *v12; // x24
  UnityEngine_Material_o *v13; // x23
  UIWidget_o *baseText; // x22
  UITexture_o *v15; // x22
  int v16; // w23
  int v17; // w24
  int32_t baseWidth; // w27
  int v19; // w25
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3CD21 & 1) == 0 )
  {
    sub_1C37058(&CampaignInfoItem_TypeInfo);
    sub_1C37058(&UnityEngine_Material_TypeInfo);
    sub_1C37058(&StringLiteral_4940/*"Custom/SpriteWithMask"*/);
    sub_1C37058(&StringLiteral_16269/*"_MaskTex"*/);
    byte_4C3CD21 = 1;
  }
  this->fields.target = info;
  sub_1C36FFC(&this->fields.target, info);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4940/*"Custom/SpriteWithMask"*/, 0);
  v13 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v13, v12, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseText;
  if ( !gameObject )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))gameObject->klass[1].vtable._1_Finalize.method)(
                                             gameObject,
                                             v13,
                                             gameObject->klass[1].vtable._2_GetHashCode.methodPtr);
  if ( !v13 )
    goto LABEL_15;
  UnityEngine_Material__set_mainTexture(v13, (UnityEngine_Texture_o *)tex, 0);
  UnityEngine_Material__SetTexture(v13, (System_String_o *)StringLiteral_16269/*"_MaskTex"*/, (UnityEngine_Texture_o *)maskTex, 0);
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
  v15 = this->fields.baseText;
  v16 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))tex->klass->vtable._6_get_height.methodPtr)(
          tex,
          tex->klass->vtable._6_get_height.method);
  v17 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))tex->klass->vtable._6_get_height.methodPtr)(
          tex,
          tex->klass->vtable._6_get_height.method);
  baseWidth = CampaignInfoItem_TypeInfo->static_fields->baseWidth;
  v19 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))tex->klass->vtable._4_get_width.methodPtr)(
          tex,
          tex->klass->vtable._4_get_width.method);
  gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))tex->klass->vtable._6_get_height.methodPtr)(
                                             tex,
                                             tex->klass->vtable._6_get_height.method);
  if ( !v15 )
    goto LABEL_15;
  v22.fields.m_Height = (float)height / (float)(int)gameObject;
  v22.fields.m_Width = (float)baseWidth / (float)v19;
  v22.fields.m_YMin = (float)(v16 - height) / (float)v17;
  v22.fields.m_XMin = 0.0;
  UITexture__set_uvRect(v15, v22, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.collider;
  if ( !gameObject
    || (v20.fields.z = 1.0,
        v20.fields.y = (float)height,
        v20.fields.x = (float)CampaignInfoItem_TypeInfo->static_fields->baseWidth,
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v20, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.collider) == 0) )
  {
LABEL_15:
    sub_1C372B4(gameObject);
  }
  v21.fields.x = 0.0;
  v21.fields.y = (float)-height * 0.5;
  v21.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)gameObject, v21, 0);
}