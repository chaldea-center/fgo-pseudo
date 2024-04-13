void __fastcall CombineBannerComponent___ctor(CombineBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineBannerComponent__onOpenWebView(CombineBannerComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CombineBannerComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct EventEntity_o *eventEntity; // x8
  System_String_o *linkBody; // x19
  System_String_o *WebViewAddress; // x19

  v4 = this;
  if ( (byte_42E8D6C & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&WebViewManager_TypeInfo, v5, v6, v7);
    this = (CombineBannerComponent_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E8D6C = 1;
  }
  eventEntity = v4->fields.eventEntity;
  if ( !eventEntity )
    sub_B5D69C(this, method);
  linkBody = eventEntity->fields.linkBody;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  WebViewAddress = NetworkManager__getWebViewAddress(linkBody, 0LL);
  if ( (BYTE3(WebViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WebViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  }
  WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, WebViewAddress, 0LL, 0LL);
}


void __fastcall CombineBannerComponent__setBannerInfo(
        CombineBannerComponent_o *this,
        EventEntity_o *eventData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UISprite_o *bannerSprite; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42E8D6B & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)eventData, (_DWORD)method, v3);
    byte_42E8D6B = 1;
  }
  bannerSprite = this->fields.bannerSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner_31188388(bannerSprite, eventData, 0LL);
  this->fields.eventEntity = eventData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventEntity,
    (System_Int32_array **)eventData,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}