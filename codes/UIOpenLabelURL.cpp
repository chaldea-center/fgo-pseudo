void __fastcall UIOpenLabelURL___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_49B9BCA & 1) == 0 )
  {
    sub_1B4CF90(&UIOpenLabelURL_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_15308/*"WebView:"*/, v4);
    byte_49B9BCA = 1;
  }
  UIOpenLabelURL_TypeInfo->static_fields->BOOT_WEB_VIEW = (struct System_String_o *)StringLiteral_15308/*"WebView:"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)UIOpenLabelURL_TypeInfo->static_fields, StringLiteral_15308/*"WebView:"*/, v2, v3);
}


void __fastcall UIOpenLabelURL___ctor(UIOpenLabelURL_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UIOpenLabelURL__OnClick(UIOpenLabelURL_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Component_object; // x19
  __int64 v10; // x1
  void *v11; // x0
  System_String_o *UrlAtPosition; // x19
  int32_t stringLength; // w21
  struct System_String_o *BOOT_WEB_VIEW; // x8
  System_String_o *v15; // x19

  if ( (byte_49B9BC9 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Application_TypeInfo, method);
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UILabel___, v3);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    sub_1B4CF90(&UICamera_TypeInfo, v5);
    sub_1B4CF90(&UIOpenLabelURL_TypeInfo, v6);
    sub_1B4CF90(&WebViewManager_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_1/*""*/, v8);
    byte_49B9BC9 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    v11 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v11 = UICamera_TypeInfo;
    }
    if ( !Component_object )
      goto LABEL_27;
    UrlAtPosition = UILabel__GetUrlAtPosition(
                      (UILabel_o *)Component_object,
                      *(UnityEngine_Vector3_o *)(*((_QWORD *)v11 + 23) + 68LL),
                      0LL);
    if ( System_String__IsNullOrEmpty(UrlAtPosition, 0LL) )
      return;
    v11 = UIOpenLabelURL_TypeInfo;
    if ( !UIOpenLabelURL_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIOpenLabelURL_TypeInfo);
    if ( !UrlAtPosition )
      goto LABEL_27;
    if ( System_String__StartsWith(UrlAtPosition, UIOpenLabelURL_TypeInfo->static_fields->BOOT_WEB_VIEW, 0LL) )
    {
      v11 = UIOpenLabelURL_TypeInfo;
      stringLength = UrlAtPosition->fields._stringLength;
      if ( !UIOpenLabelURL_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIOpenLabelURL_TypeInfo);
        v11 = UIOpenLabelURL_TypeInfo;
      }
      BOOT_WEB_VIEW = (struct System_String_o *)**((_QWORD **)v11 + 23);
      if ( BOOT_WEB_VIEW )
      {
        if ( stringLength <= BOOT_WEB_VIEW->fields._stringLength )
          return;
        if ( *((_DWORD *)v11 + 56)
          || (j_il2cpp_runtime_class_init_0(v11),
              (BOOT_WEB_VIEW = UIOpenLabelURL_TypeInfo->static_fields->BOOT_WEB_VIEW) != 0LL) )
        {
          v15 = System_String__Substring(UrlAtPosition, BOOT_WEB_VIEW->fields._stringLength, 0LL);
          if ( !WebViewManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
          WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, v15, 0LL, 0LL);
          return;
        }
      }
LABEL_27:
      sub_1B4D1EC(v11, v10);
    }
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__OpenURL(UrlAtPosition, 0LL);
  }
}