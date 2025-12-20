void LinkableObject___ctor(LinkableObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void LinkableObject__OnClick(LinkableObject_o *this, const MethodInfo *method)
{
  int32_t linkType; // w8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_String_o *v6; // x19
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  System_String_o *linkUrl; // x19

  if ( (byte_4D2F064 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Application_TypeInfo);
    sub_1C94098(&Method_LinkableObject_OnClick__);
    sub_1C94098(&WebViewManager_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2F064 = 1;
  }
  linkType = this->fields.linkType;
  if ( linkType == 2 )
  {
    v7 = Method_LinkableObject_OnClick__;
    if ( (*((_BYTE *)Method_LinkableObject_OnClick__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C940B0(Method_LinkableObject_OnClick__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C9407C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    linkUrl = this->fields.linkUrl;
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__OpenURL(linkUrl, 0);
  }
  else if ( linkType == 1 )
  {
    v4 = Method_LinkableObject_OnClick__;
    if ( (*((_BYTE *)Method_LinkableObject_OnClick__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C940B0(Method_LinkableObject_OnClick__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C9407C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    v6 = this->fields.linkUrl;
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, v6, 0, 0);
  }
}


void LinkableObject__SetUp(LinkableObject_o *this, int32_t lnkType, System_String_o *lnkUrl, const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_o **p_linkUrl; // x0

  this->fields.linkUrl = lnkUrl;
  p_linkUrl = &this->fields.linkUrl;
  *((_DWORD *)p_linkUrl - 2) = lnkType;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)p_linkUrl,
    (int32_t)lnkUrl,
    (int32_t)lnkUrl,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
}