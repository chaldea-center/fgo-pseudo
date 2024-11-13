void __fastcall CampaignInfoItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B10DBB & 1) == 0 )
  {
    sub_1BCA7E0(&CampaignInfoItem_TypeInfo, v1, v2);
    byte_4B10DBB = 1;
  }
  CampaignInfoItem_TypeInfo->static_fields->baseWidth = 900;
}


void __fastcall CampaignInfoItem___ctor(CampaignInfoItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CampaignInfoItem__OnClick(CampaignInfoItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CampaignInfoItem_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct CampaignInformation_o *target; // x8
  int32_t urlOpenType; // w8
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  struct CampaignInformation_o *v14; // x8
  System_String_o *url; // x19
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  struct CampaignInformation_o *v18; // x8
  System_String_o *v19; // x19

  v3 = this;
  if ( (byte_4B10DBA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CampaignInfoItem_OnClick__, v4, v5);
    sub_1BCA7E0(&WebViewManager_TypeInfo, v6, v7);
    this = (CampaignInfoItem_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B10DBA = 1;
  }
  target = v3->fields.target;
  if ( !target )
    goto LABEL_19;
  urlOpenType = target->fields.urlOpenType;
  if ( urlOpenType != 2 )
  {
    if ( urlOpenType != 1 )
      return;
    v12 = Method_CampaignInfoItem_OnClick__;
    if ( (*((_BYTE *)Method_CampaignInfoItem_OnClick__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BCA7F8();
    v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    v14 = v3->fields.target;
    if ( v14 )
    {
      url = v14->fields.url;
      if ( !WebViewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, method);
      WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, url, 0LL, 0LL);
      return;
    }
LABEL_19:
    sub_1BCAA3C(this, method);
  }
  v16 = Method_CampaignInfoItem_OnClick__;
  if ( (*((_BYTE *)Method_CampaignInfoItem_OnClick__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1BCA7F8();
  v17 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
  v18 = v3->fields.target;
  if ( !v18 )
    goto LABEL_19;
  v19 = v18->fields.url;
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  UnityEngine_Application__OpenURL(v19, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  UnityEngine_Shader_o *v19; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  UnityEngine_Material_o *v23; // x23
  UIWidget_o *baseText; // x22
  UITexture_o *v25; // x22
  int v26; // w23
  int v27; // w24
  int32_t baseWidth; // w27
  int v29; // w25
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B10DB9 & 1) == 0 )
  {
    sub_1BCA7E0(&CampaignInfoItem_TypeInfo, info, tex);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_5048/*"Custom/SpriteWithMask"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_16436/*"_MaskTex"*/, v15, v16);
    byte_4B10DB9 = 1;
  }
  this->fields.target = info;
  sub_1BCA784(&this->fields.target, info);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  v19 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5048/*"Custom/SpriteWithMask"*/, 0LL);
  v23 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v20, v21, v22);
  UnityEngine_Material___ctor(v23, v19, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseText;
  if ( !gameObject )
    goto LABEL_15;
  gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, UnityEngine_Material_o *, Il2CppMethodPointer))gameObject->klass[1].vtable._2_GetHashCode.method)(
                                             gameObject,
                                             v23,
                                             gameObject->klass[1].vtable._3_ToString.methodPtr);
  if ( !v23 )
    goto LABEL_15;
  UnityEngine_Material__set_mainTexture(v23, (UnityEngine_Texture_o *)tex, 0LL);
  UnityEngine_Material__SetTexture(v23, (System_String_o *)StringLiteral_16436/*"_MaskTex"*/, (UnityEngine_Texture_o *)maskTex, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseText;
  if ( !gameObject )
    goto LABEL_15;
  UIWidget__set_height((UIWidget_o *)gameObject, height, 0LL);
  gameObject = (UnityEngine_GameObject_o *)CampaignInfoItem_TypeInfo;
  baseText = (UIWidget_o *)this->fields.baseText;
  if ( !CampaignInfoItem_TypeInfo->_2.cctor_finished )
    gameObject = (UnityEngine_GameObject_o *)j_il2cpp_runtime_class_init_0(CampaignInfoItem_TypeInfo, v18);
  if ( !baseText )
    goto LABEL_15;
  UIWidget__set_width(baseText, CampaignInfoItem_TypeInfo->static_fields->baseWidth, 0LL);
  if ( !tex )
    goto LABEL_15;
  v25 = this->fields.baseText;
  v26 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
          tex,
          tex->klass->vtable._7_set_height.methodPtr);
  v27 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
          tex,
          tex->klass->vtable._7_set_height.methodPtr);
  baseWidth = CampaignInfoItem_TypeInfo->static_fields->baseWidth;
  v29 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._4_get_width.method)(
          tex,
          tex->klass->vtable._5_set_width.methodPtr);
  gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))tex->klass->vtable._6_get_height.method)(
                                             tex,
                                             tex->klass->vtable._7_set_height.methodPtr);
  if ( !v25 )
    goto LABEL_15;
  v32.fields.m_Height = (float)height / (float)(int)gameObject;
  v32.fields.m_Width = (float)baseWidth / (float)v29;
  v32.fields.m_YMin = (float)(v26 - height) / (float)v27;
  v32.fields.m_XMin = 0.0;
  UITexture__set_uvRect(v25, v32, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.collider;
  if ( !gameObject
    || (v30.fields.z = 1.0,
        v30.fields.y = (float)height,
        v30.fields.x = (float)CampaignInfoItem_TypeInfo->static_fields->baseWidth,
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v30, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.collider) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(gameObject, v18);
  }
  v31.fields.x = 0.0;
  v31.fields.y = (float)-height * 0.5;
  v31.fields.z = 0.0;
  UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)gameObject, v31, 0LL);
}