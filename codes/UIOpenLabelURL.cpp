void UIOpenLabelURL___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596F42B & 1) == 0 )
  {
    sub_2213A60(&UIOpenLabelURL_TypeInfo);
    sub_2213A60(&StringLiteral_16220/*"WebView:"*/);
    byte_596F42B = 1;
  }
  v7 = StringLiteral_16220/*"WebView:"*/;
  UIOpenLabelURL_TypeInfo->static_fields->BOOT_WEB_VIEW = (struct System_String_o *)StringLiteral_16220/*"WebView:"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)UIOpenLabelURL_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
}


void UIOpenLabelURL___ctor(UIOpenLabelURL_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIOpenLabelURL__OnClick(UIOpenLabelURL_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Component_object; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  void *v8; // x0
  System_String_o *UrlAtPosition; // x19
  __int64 v10; // x2
  __int64 v11; // x2
  int32_t stringLength; // w21
  struct System_String_o *BOOT_WEB_VIEW; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x19

  if ( (byte_596F42A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&UIOpenLabelURL_TypeInfo);
    sub_2213A60(&WebViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F42A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    v8 = UICamera_TypeInfo;
    if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v6, v7);
    if ( !Component_object )
      goto LABEL_27;
    UrlAtPosition = UILabel__GetUrlAtPosition(
                      (UILabel_o *)Component_object,
                      UICamera_TypeInfo->static_fields->lastWorldPosition,
                      0);
    if ( System_String__IsNullOrEmpty(UrlAtPosition, 0) )
      return;
    v8 = UIOpenLabelURL_TypeInfo;
    if ( !*(&UIOpenLabelURL_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UIOpenLabelURL_TypeInfo, v6, v10);
    if ( !UrlAtPosition )
      goto LABEL_27;
    if ( System_String__StartsWith(UrlAtPosition, UIOpenLabelURL_TypeInfo->static_fields->BOOT_WEB_VIEW, 0) )
    {
      v8 = UIOpenLabelURL_TypeInfo;
      stringLength = UrlAtPosition->fields._stringLength;
      if ( !*(&UIOpenLabelURL_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIOpenLabelURL_TypeInfo, v6, v11);
        v8 = UIOpenLabelURL_TypeInfo;
      }
      BOOT_WEB_VIEW = (struct System_String_o *)**((_QWORD **)v8 + 23);
      if ( BOOT_WEB_VIEW )
      {
        if ( stringLength <= BOOT_WEB_VIEW->fields._stringLength )
          return;
        if ( *((_DWORD *)v8 + 57)
          || (j_il2cpp_runtime_class_init_0(v8, v6, v11),
              (BOOT_WEB_VIEW = UIOpenLabelURL_TypeInfo->static_fields->BOOT_WEB_VIEW) != 0) )
        {
          v16 = System_String__Substring(UrlAtPosition, BOOT_WEB_VIEW->fields._stringLength, 0);
          if ( !*(&WebViewManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v14, v15);
          WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, v16, 0, 0);
          return;
        }
      }
LABEL_27:
      sub_2213CDC(v8, v6);
    }
    if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v6, v11);
    UnityEngine_Application__OpenURL(UrlAtPosition, 0);
  }
}