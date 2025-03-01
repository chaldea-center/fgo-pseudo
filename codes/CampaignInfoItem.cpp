void __fastcall CampaignInfoItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BF8197 & 1) == 0 )
  {
    sub_1C2E12C(&CampaignInfoItem_TypeInfo, v1);
    byte_4BF8197 = 1;
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
  __int64 v5; // x1
  struct CampaignInformation_o *target; // x8
  int32_t urlOpenType; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct CampaignInformation_o *v10; // x8
  System_String_o *url; // x19
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  struct CampaignInformation_o *v14; // x8
  System_String_o *v15; // x19

  v2 = this;
  if ( (byte_4BF8196 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Application_TypeInfo, method);
    sub_1C2E12C(&Method_CampaignInfoItem_OnClick__, v3);
    sub_1C2E12C(&WebViewManager_TypeInfo, v4);
    this = (CampaignInfoItem_o *)sub_1C2E12C(&StringLiteral_1/*""*/, v5);
    byte_4BF8196 = 1;
  }
  target = v2->fields.target;
  if ( !target )
    goto LABEL_19;
  urlOpenType = target->fields.urlOpenType;
  if ( urlOpenType != 2 )
  {
    if ( urlOpenType != 1 )
      return;
    v8 = Method_CampaignInfoItem_OnClick__;
    if ( (*((_BYTE *)Method_CampaignInfoItem_OnClick__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C2E144();
    v9 = (System_Reflection_MethodBase_o *)sub_1C2E110(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
    v10 = v2->fields.target;
    if ( v10 )
    {
      url = v10->fields.url;
      if ( !WebViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
      WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, url, 0LL, 0LL);
      return;
    }
LABEL_19:
    sub_1C2E388(this, method);
  }
  v12 = Method_CampaignInfoItem_OnClick__;
  if ( (*((_BYTE *)Method_CampaignInfoItem_OnClick__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1C2E144();
  v13 = (System_Reflection_MethodBase_o *)sub_1C2E110(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
  v14 = v2->fields.target;
  if ( !v14 )
    goto LABEL_19;
  v15 = v14->fields.url;
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  UnityEngine_Application__OpenURL(v15, 0LL);
}


void __fastcall CampaignInfoItem__SetCampaignInfo(
        CampaignInfoItem_o *this,
        CampaignInformation_o *info,
        UnityEngine_Texture2D_o *tex,
        UnityEngine_Texture2D_o *maskTex,
        int32_t height,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  UnityEngine_Shader_o *v16; // x24
  UnityEngine_Material_o *v17; // x23
  UIWidget_o *baseText; // x22
  UITexture_o *v19; // x22
  int v20; // w23
  int v21; // w24
  int32_t baseWidth; // w27
  int v23; // w25
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BF8195 & 1) == 0 )
  {
    sub_1C2E12C(&CampaignInfoItem_TypeInfo, info);
    sub_1C2E12C(&UnityEngine_Material_TypeInfo, v11);
    sub_1C2E12C(&StringLiteral_5069/*"Custom/SpriteWithMask"*/, v12);
    sub_1C2E12C(&StringLiteral_16556/*"_MaskTex"*/, v13);
    byte_4BF8195 = 1;
  }
  this->fields.target = info;
  sub_1C2E0D0(&this->fields.target);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v16 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5069/*"Custom/SpriteWithMask"*/, 0LL);
  v17 = (UnityEngine_Material_o *)sub_1C2E378(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v17, v16, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseText;
  if ( !gameObject )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))gameObject->klass[1].vtable._2_GetHashCode.method)(
                                             gameObject,
                                             v17,
                                             gameObject->klass[1].vtable._3_ToString.methodPtr);
  if ( !v17 )
    goto LABEL_15;
  UnityEngine_Material__set_mainTexture(v17, (UnityEngine_Texture_o *)tex, 0LL);
  UnityEngine_Material__SetTexture(v17, (System_String_o *)StringLiteral_16556/*"_MaskTex"*/, (UnityEngine_Texture_o *)maskTex, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseText;
  if ( !gameObject )
    goto LABEL_15;
  UIWidget__set_height((UIWidget_o *)gameObject, height, 0LL);
  gameObject = (UnityEngine_GameObject_o *)CampaignInfoItem_TypeInfo;
  baseText = (UIWidget_o *)this->fields.baseText;
  if ( !CampaignInfoItem_TypeInfo->_2.cctor_finished )
    gameObject = (UnityEngine_GameObject_o *)j_il2cpp_runtime_class_init_0(CampaignInfoItem_TypeInfo);
  if ( !baseText )
    goto LABEL_15;
  UIWidget__set_width(baseText, CampaignInfoItem_TypeInfo->static_fields->baseWidth, 0LL);
  if ( !tex )
    goto LABEL_15;
  v19 = this->fields.baseText;
  v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
          tex,
          tex->klass->vtable._7_set_height.methodPtr);
  v21 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
          tex,
          tex->klass->vtable._7_set_height.methodPtr);
  baseWidth = CampaignInfoItem_TypeInfo->static_fields->baseWidth;
  v23 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._4_get_width.method)(
          tex,
          tex->klass->vtable._5_set_width.methodPtr);
  gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
                                             tex,
                                             tex->klass->vtable._7_set_height.methodPtr);
  if ( !v19 )
    goto LABEL_15;
  v26.fields.m_Height = (float)height / (float)(int)gameObject;
  v26.fields.m_Width = (float)baseWidth / (float)v23;
  v26.fields.m_YMin = (float)(v20 - height) / (float)v21;
  v26.fields.m_XMin = 0.0;
  UITexture__set_uvRect(v19, v26, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.collider;
  if ( !gameObject
    || (v24.fields.z = 1.0,
        v24.fields.y = (float)height,
        v24.fields.x = (float)CampaignInfoItem_TypeInfo->static_fields->baseWidth,
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v24, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.collider) == 0LL) )
  {
LABEL_15:
    sub_1C2E388(gameObject, v15);
  }
  v25.fields.x = 0.0;
  v25.fields.y = (float)-height * 0.5;
  v25.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)gameObject, v25, 0LL);
}