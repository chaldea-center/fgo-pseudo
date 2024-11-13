void __fastcall LinkableObject___ctor(LinkableObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall LinkableObject__OnClick(LinkableObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t linkType; // w8
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x19
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  __int64 v17; // x1
  System_String_o *linkUrl; // x19

  if ( (byte_4B18B4B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_LinkableObject_OnClick__, v4, v5);
    sub_1BCA7E0(&WebViewManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B18B4B = 1;
  }
  linkType = this->fields.linkType;
  if ( linkType == 2 )
  {
    v15 = Method_LinkableObject_OnClick__;
    if ( (*((_BYTE *)Method_LinkableObject_OnClick__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1BCA7F8(Method_LinkableObject_OnClick__);
    v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
    linkUrl = this->fields.linkUrl;
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v17);
    UnityEngine_Application__OpenURL(linkUrl, 0LL);
  }
  else if ( linkType == 1 )
  {
    v11 = Method_LinkableObject_OnClick__;
    if ( (*((_BYTE *)Method_LinkableObject_OnClick__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BCA7F8(Method_LinkableObject_OnClick__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    v14 = this->fields.linkUrl;
    if ( !WebViewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v13);
    WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, v14, 0LL, 0LL);
  }
}


void __fastcall LinkableObject__SetUp(
        LinkableObject_o *this,
        int32_t lnkType,
        System_String_o *lnkUrl,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_linkUrl; // x0

  this->fields.linkUrl = lnkUrl;
  p_linkUrl = &this->fields.linkUrl;
  *((_DWORD *)p_linkUrl - 2) = lnkType;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)p_linkUrl,
    (int64_t)lnkUrl,
    (int64_t)lnkUrl,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
}