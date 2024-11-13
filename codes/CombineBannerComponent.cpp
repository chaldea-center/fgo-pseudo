void __fastcall CombineBannerComponent___ctor(CombineBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineBannerComponent__onOpenWebView(CombineBannerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CombineBannerComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct EventEntity_o *eventEntity; // x8
  System_String_o *linkBody; // x19
  __int64 v10; // x1
  System_String_o *WebViewAddress; // x19

  v3 = this;
  if ( (byte_4B19976 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&WebViewManager_TypeInfo, v4, v5);
    this = (CombineBannerComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B19976 = 1;
  }
  eventEntity = v3->fields.eventEntity;
  if ( !eventEntity )
    sub_1BCAA3C(this, method);
  linkBody = eventEntity->fields.linkBody;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  WebViewAddress = NetworkManager__getWebViewAddress(linkBody, 0LL);
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v10);
  WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, WebViewAddress, 0LL, 0LL);
}


void __fastcall CombineBannerComponent__setBannerInfo(
        CombineBannerComponent_o *this,
        EventEntity_o *eventData,
        const MethodInfo *method)
{
  UISprite_o *bannerSprite; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B19975 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, eventData, method);
    byte_4B19975 = 1;
  }
  bannerSprite = this->fields.bannerSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, eventData);
  AtlasManager__SetBanner_38572588(bannerSprite, eventData, 0LL);
  this->fields.eventEntity = eventData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventEntity, (int64_t)eventData, v6, v7, v8, v9, v10, v11);
}