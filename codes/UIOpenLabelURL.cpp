void __fastcall UIOpenLabelURL___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_421BF85 & 1) == 0 )
  {
    sub_B0D8A4(&UIOpenLabelURL_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_15490/*"WebView:"*/, v8);
    byte_421BF85 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UIOpenLabelURL_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_15490/*"WebView:"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15490/*"WebView:"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  WebViewObject_o *Component_WebViewObject; // x19
  void *v9; // x0
  System_String_o *UrlAtPosition; // x19
  int32_t m_stringLength; // w21
  struct System_String_o *BOOT_WEB_VIEW; // x8
  System_String_o *v13; // x19

  if ( (byte_421BF84 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UILabel___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&UICamera_TypeInfo, v4);
    sub_B0D8A4(&UIOpenLabelURL_TypeInfo, v5);
    sub_B0D8A4(&WebViewManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_421BF84 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    v9 = UICamera_TypeInfo;
    if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v9 = UICamera_TypeInfo;
    }
    if ( !Component_WebViewObject )
      goto LABEL_31;
    UrlAtPosition = UILabel__GetUrlAtPosition(
                      (UILabel_o *)Component_WebViewObject,
                      *(UnityEngine_Vector3_o *)(*((_QWORD *)v9 + 23) + 68LL),
                      0LL);
    if ( System_String__IsNullOrEmpty(UrlAtPosition, 0LL) )
      return;
    v9 = UIOpenLabelURL_TypeInfo;
    if ( (BYTE3(UIOpenLabelURL_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIOpenLabelURL_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIOpenLabelURL_TypeInfo);
    }
    if ( !UrlAtPosition )
      goto LABEL_31;
    if ( !System_String__StartsWith(UrlAtPosition, UIOpenLabelURL_TypeInfo->static_fields->BOOT_WEB_VIEW, 0LL) )
    {
      UnityEngine_Application__OpenURL(UrlAtPosition, 0LL);
      return;
    }
    v9 = UIOpenLabelURL_TypeInfo;
    m_stringLength = UrlAtPosition->fields.m_stringLength;
    if ( (BYTE3(UIOpenLabelURL_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIOpenLabelURL_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIOpenLabelURL_TypeInfo);
      v9 = UIOpenLabelURL_TypeInfo;
    }
    BOOT_WEB_VIEW = (struct System_String_o *)**((_QWORD **)v9 + 23);
    if ( !BOOT_WEB_VIEW )
      goto LABEL_31;
    if ( m_stringLength <= BOOT_WEB_VIEW->fields.m_stringLength )
      return;
    if ( (*((_BYTE *)v9 + 307) & 4) != 0 && !*((_DWORD *)v9 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v9);
      BOOT_WEB_VIEW = UIOpenLabelURL_TypeInfo->static_fields->BOOT_WEB_VIEW;
      if ( !BOOT_WEB_VIEW )
LABEL_31:
        sub_B0D97C(v9);
    }
    v13 = System_String__Substring(UrlAtPosition, BOOT_WEB_VIEW->fields.m_stringLength, 0LL);
    if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WebViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    }
    WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, v13, 0LL, 0LL);
  }
}