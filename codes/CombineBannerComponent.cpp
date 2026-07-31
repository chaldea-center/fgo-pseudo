void CombineBannerComponent___ctor(CombineBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CombineBannerComponent__onOpenWebView(CombineBannerComponent_o *this, const MethodInfo *method)
{
  CombineBannerComponent_o *v2; // x19
  struct EventEntity_o *eventEntity; // x8
  System_String_o *linkBody; // x19
  __int64 v5; // x1
  System_String_o *WebViewAddress; // x19

  v2 = this;
  if ( (byte_593C772 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&WebViewManager_TypeInfo);
    this = (CombineBannerComponent_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C772 = 1;
  }
  eventEntity = v2->fields.eventEntity;
  if ( !eventEntity )
    sub_21FFECC(this, method);
  linkBody = eventEntity->fields.linkBody;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  WebViewAddress = NetworkManager__getWebViewAddress(linkBody, 0);
  if ( !*(&WebViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v5);
  WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, WebViewAddress, 0, 0);
}


void CombineBannerComponent__setBannerInfo(
        CombineBannerComponent_o *this,
        EventEntity_o *eventData,
        const MethodInfo *method)
{
  UISprite_o *bannerSprite; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_593C771 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    byte_593C771 = 1;
  }
  bannerSprite = this->fields.bannerSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, eventData);
  AtlasManager__SetBanner_47536076(bannerSprite, eventData, 0);
  this->fields.eventEntity = eventData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventEntity,
    (int32_t)eventData,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}