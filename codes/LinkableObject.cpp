void LinkableObject___ctor(LinkableObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void LinkableObject__OnClick(LinkableObject_o *this, const MethodInfo *method)
{
  int32_t linkType; // w8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x19
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  System_String_o *linkUrl; // x19

  if ( (byte_5973B17 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&Method_LinkableObject_OnClick__);
    sub_2213A60(&WebViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973B17 = 1;
  }
  linkType = this->fields.linkType;
  if ( linkType == 2 )
  {
    v8 = Method_LinkableObject_OnClick__;
    if ( (*((_BYTE *)Method_LinkableObject_OnClick__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_2213A78(Method_LinkableObject_OnClick__);
    v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    linkUrl = this->fields.linkUrl;
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v10);
    UnityEngine_Application__OpenURL(linkUrl, 0);
  }
  else if ( linkType == 1 )
  {
    v4 = Method_LinkableObject_OnClick__;
    if ( (*((_BYTE *)Method_LinkableObject_OnClick__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_LinkableObject_OnClick__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    v7 = this->fields.linkUrl;
    if ( !*(&WebViewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v6);
    WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, v7, 0, 0);
  }
}


void LinkableObject__SetUp(LinkableObject_o *this, int32_t lnkType, System_String_o *lnkUrl, const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **p_linkUrl; // x0

  this->fields.linkUrl = lnkUrl;
  p_linkUrl = &this->fields.linkUrl;
  *((_DWORD *)p_linkUrl - 2) = lnkType;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_linkUrl,
    (int32_t)lnkUrl,
    lnkUrl,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
}