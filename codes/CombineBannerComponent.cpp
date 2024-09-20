void __fastcall CombineBannerComponent___ctor(CombineBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineBannerComponent__onOpenWebView(CombineBannerComponent_o *this, const MethodInfo *method)
{
  CombineBannerComponent_o *v2; // x19
  struct EventEntity_o *eventEntity; // x8
  System_String_o *linkBody; // x19
  System_String_o *WebViewAddress; // x19

  v2 = this;
  if ( (byte_4A5E72C & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&WebViewManager_TypeInfo);
    this = (CombineBannerComponent_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E72C = 1;
  }
  eventEntity = v2->fields.eventEntity;
  if ( !eventEntity )
    sub_1B8880C(this, method);
  linkBody = eventEntity->fields.linkBody;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  WebViewAddress = NetworkManager__getWebViewAddress(linkBody, 0LL);
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  WebViewManager__OpenView((System_String_o *)StringLiteral_1/*""*/, WebViewAddress, 0LL, 0LL);
}


void __fastcall CombineBannerComponent__setBannerInfo(
        CombineBannerComponent_o *this,
        EventEntity_o *eventData,
        const MethodInfo *method)
{
  UISprite_o *bannerSprite; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5E72B & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    byte_4A5E72B = 1;
  }
  bannerSprite = this->fields.bannerSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner_37857380(bannerSprite, eventData, 0LL);
  this->fields.eventEntity = eventData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventEntity, (int32_t)eventData, v6, v7);
}