void __fastcall UIOpenLabelURL___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FB11C & 1) == 0 )
  {
    sub_1B640C8(&UIOpenLabelURL_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_15540/*"WebView:"*/, v4);
    byte_49FB11C = 1;
  }
  UIOpenLabelURL_TypeInfo->static_fields->BOOT_WEB_VIEW = (struct System_String_o *)StringLiteral_15540/*"WebView:"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)UIOpenLabelURL_TypeInfo->static_fields, StringLiteral_15540/*"WebView:"*/, v2, v3);
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
  void *v10; // x0
  System_String_o *UrlAtPosition; // x19
  int32_t stringLength; // w21
  struct System_String_o *BOOT_WEB_VIEW; // x8
  System_String_o *v14; // x19

  if ( (byte_49FB11B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UILabel___, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&UICamera_TypeInfo, v5);
    sub_1B640C8(&UIOpenLabelURL_TypeInfo, v6);
    sub_1B640C8(&WebViewManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49FB11B = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    v10 = UICamera_TypeInfo;
    if ( !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v10 = UICamera_TypeInfo;
    }
    if ( !Component_object )
      goto LABEL_27;
    UrlAtPosition = UILabel__GetUrlAtPosition(
                      (UILabel_o *)Component_object,
                      *(UnityEngine_Vector3_o *)(*((_QWORD *)v10 + 23) + 68LL),
                      0LL);
    if ( System_String__IsNullOrEmpty(UrlAtPosition, 0LL) )
      return;
    v10 = UIOpenLabelURL_TypeInfo;
    if ( !UIOpenLabelURL_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIOpenLabelURL_TypeInfo);
    if ( !UrlAtPosition )
      goto LABEL_27;
    if ( System_String__StartsWith(UrlAtPosition, UIOpenLabelURL_TypeInfo->static_fields->BOOT_WEB_VIEW, 0LL) )
    {
      v10 = UIOpenLabelURL_TypeInfo;
      stringLength = UrlAtPosition->fields._stringLength;
      if ( !UIOpenLabelURL_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIOpenLabelURL_TypeInfo);
        v10 = UIOpenLabelURL_TypeInfo;
      }
      BOOT_WEB_VIEW = (struct System_String_o *)**((_QWORD **)v10 + 23);
      if ( BOOT_WEB_VIEW )
      {
        if ( stringLength <= BOOT_WEB_VIEW->fields._stringLength )
          return;
        if ( *((_DWORD *)v10 + 56)
          || (j_il2cpp_runtime_class_init_0(v10),
              (BOOT_WEB_VIEW = UIOpenLabelURL_TypeInfo->static_fields->BOOT_WEB_VIEW) != 0LL) )
        {
          v14 = System_String__Substring(UrlAtPosition, BOOT_WEB_VIEW->fields._stringLength, 0LL);
          if ( !WebViewManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
          WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, v14, 0LL, 0LL);
          return;
        }
      }
LABEL_27:
      sub_1B64324(v10);
    }
    if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
    UnityEngine_Application__OpenURL(UrlAtPosition, 0LL);
  }
}