void __fastcall UIOpenLabelURL___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B14EA3 & 1) == 0 )
  {
    sub_1BCA7E0(&UIOpenLabelURL_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_15775/*"WebView:"*/, v8, v9);
    byte_4B14EA3 = 1;
  }
  UIOpenLabelURL_TypeInfo->static_fields->BOOT_WEB_VIEW = (struct System_String_o *)StringLiteral_15775/*"WebView:"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UIOpenLabelURL_TypeInfo->static_fields,
    StringLiteral_15775/*"WebView:"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall UIOpenLabelURL___ctor(UIOpenLabelURL_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UIOpenLabelURL__OnClick(UIOpenLabelURL_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  Il2CppObject *Component_object; // x19
  __int64 v18; // x1
  void *v19; // x0
  System_String_o *UrlAtPosition; // x19
  int32_t stringLength; // w21
  struct System_String_o *BOOT_WEB_VIEW; // x8
  __int64 v23; // x1
  System_String_o *v24; // x19

  if ( (byte_4B14EA2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Application_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UILabel___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&UICamera_TypeInfo, v8, v9);
    sub_1BCA7E0(&UIOpenLabelURL_TypeInfo, v10, v11);
    sub_1BCA7E0(&WebViewManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B14EA2 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    v19 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v18);
      v19 = UICamera_TypeInfo;
    }
    if ( !Component_object )
      goto LABEL_27;
    UrlAtPosition = UILabel__GetUrlAtPosition(
                      (UILabel_o *)Component_object,
                      *(UnityEngine_Vector3_o *)(*((_QWORD *)v19 + 23) + 68LL),
                      0LL);
    if ( System_String__IsNullOrEmpty(UrlAtPosition, 0LL) )
      return;
    v19 = UIOpenLabelURL_TypeInfo;
    if ( !UIOpenLabelURL_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIOpenLabelURL_TypeInfo, v18);
    if ( !UrlAtPosition )
      goto LABEL_27;
    if ( System_String__StartsWith(UrlAtPosition, UIOpenLabelURL_TypeInfo->static_fields->BOOT_WEB_VIEW, 0LL) )
    {
      v19 = UIOpenLabelURL_TypeInfo;
      stringLength = UrlAtPosition->fields._stringLength;
      if ( !UIOpenLabelURL_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIOpenLabelURL_TypeInfo, v18);
        v19 = UIOpenLabelURL_TypeInfo;
      }
      BOOT_WEB_VIEW = (struct System_String_o *)**((_QWORD **)v19 + 23);
      if ( BOOT_WEB_VIEW )
      {
        if ( stringLength <= BOOT_WEB_VIEW->fields._stringLength )
          return;
        if ( *((_DWORD *)v19 + 56)
          || (j_il2cpp_runtime_class_init_0(v19, v18),
              (BOOT_WEB_VIEW = UIOpenLabelURL_TypeInfo->static_fields->BOOT_WEB_VIEW) != 0LL) )
        {
          v24 = System_String__Substring(UrlAtPosition, BOOT_WEB_VIEW->fields._stringLength, 0LL);
          if ( !WebViewManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v23);
          WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, v24, 0LL, 0LL);
          return;
        }
      }
LABEL_27:
      sub_1BCAA3C(v19, v18);
    }
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v18);
    UnityEngine_Application__OpenURL(UrlAtPosition, 0LL);
  }
}