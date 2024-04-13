void __fastcall UIOpenLabelURL___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42EFFE3 & 1) == 0 )
  {
    sub_B5D5C4(&UIOpenLabelURL_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_15633/*"WebView:"*/, v8, v9, v10);
    byte_42EFFE3 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UIOpenLabelURL_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_15633/*"WebView:"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15633/*"WebView:"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall UIOpenLabelURL___ctor(UIOpenLabelURL_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall UIOpenLabelURL__OnClick(UIOpenLabelURL_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  WebViewObject_o *Component_WebViewObject; // x19
  __int64 v21; // x1
  void *v22; // x0
  System_String_o *UrlAtPosition; // x19
  int32_t m_stringLength; // w21
  struct System_String_o *BOOT_WEB_VIEW; // x8
  System_String_o *v26; // x19

  if ( (byte_42EFFE2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UILabel___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UICamera_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UIOpenLabelURL_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&WebViewManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1/*""*/, v17, v18, v19);
    byte_42EFFE2 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    v22 = UICamera_TypeInfo;
    if ( (BYTE3(UICamera_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !UICamera_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
      v22 = UICamera_TypeInfo;
    }
    if ( !Component_WebViewObject )
      goto LABEL_31;
    UrlAtPosition = UILabel__GetUrlAtPosition(
                      (UILabel_o *)Component_WebViewObject,
                      *(UnityEngine_Vector3_o *)(*((_QWORD *)v22 + 23) + 68LL),
                      0LL);
    if ( System_String__IsNullOrEmpty(UrlAtPosition, 0LL) )
      return;
    v22 = UIOpenLabelURL_TypeInfo;
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
    v22 = UIOpenLabelURL_TypeInfo;
    m_stringLength = UrlAtPosition->fields.m_stringLength;
    if ( (BYTE3(UIOpenLabelURL_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIOpenLabelURL_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIOpenLabelURL_TypeInfo);
      v22 = UIOpenLabelURL_TypeInfo;
    }
    BOOT_WEB_VIEW = (struct System_String_o *)**((_QWORD **)v22 + 23);
    if ( !BOOT_WEB_VIEW )
      goto LABEL_31;
    if ( m_stringLength <= BOOT_WEB_VIEW->fields.m_stringLength )
      return;
    if ( (*((_BYTE *)v22 + 307) & 4) != 0 && !*((_DWORD *)v22 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v22);
      BOOT_WEB_VIEW = UIOpenLabelURL_TypeInfo->static_fields->BOOT_WEB_VIEW;
      if ( !BOOT_WEB_VIEW )
LABEL_31:
        sub_B5D69C(v22, v21);
    }
    v26 = System_String__Substring(UrlAtPosition, BOOT_WEB_VIEW->fields.m_stringLength, 0LL);
    if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WebViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
    }
    WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, v26, 0LL, 0LL);
  }
}