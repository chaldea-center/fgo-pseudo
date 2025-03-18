void __fastcall CombineBannerComponent___ctor(CombineBannerComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineBannerComponent__onOpenWebView(CombineBannerComponent_o *this, const MethodInfo *method)
{
  CombineBannerComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct EventEntity_o *eventEntity; // x8
  System_String_o *linkBody; // x19
  System_String_o *WebViewAddress; // x19

  v2 = this;
  if ( (byte_4C2589A & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&WebViewManager_TypeInfo, v3);
    this = (CombineBannerComponent_o *)sub_1C3B764(&StringLiteral_1/*""*/, v4);
    byte_4C2589A = 1;
  }
  eventEntity = v2->fields.eventEntity;
  if ( !eventEntity )
    sub_1C3B9C0(this, method);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4C25899 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, eventData);
    byte_4C25899 = 1;
  }
  bannerSprite = this->fields.bannerSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner_39280400(bannerSprite, eventData, 0LL);
  this->fields.eventEntity = eventData;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.eventEntity, (int64_t)eventData, v6, v7, v8, v9, v10, v11);
}