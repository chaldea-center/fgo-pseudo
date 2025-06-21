void __fastcall CampaignNoticeObject___ctor(CampaignNoticeObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CampaignNoticeObject__StartUpdateLimitTime(
        CampaignNoticeObject_o *this,
        int64_t endedAt,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  ShopNoticeRemainTimeLabel_o *remainTimeLabelObject; // x0
  struct ShopNoticeRemainTimeLabel_o **p_remainTimeLabelObject; // x20
  UILabel_o *campaignRemainingTimeLabel; // x23
  ShopNoticeRemainTimeLabel_o *v10; // x24
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x1

  if ( (byte_4B18FEF & 1) == 0 )
  {
    sub_1BCAFF8(&ShopNoticeRemainTimeLabel_TypeInfo, endedAt);
    byte_4B18FEF = 1;
  }
  p_remainTimeLabelObject = &this->fields.remainTimeLabelObject;
  remainTimeLabelObject = this->fields.remainTimeLabelObject;
  if ( !remainTimeLabelObject )
  {
    campaignRemainingTimeLabel = this->fields.campaignRemainingTimeLabel;
    v10 = (ShopNoticeRemainTimeLabel_o *)sub_1BCB244(ShopNoticeRemainTimeLabel_TypeInfo);
    ShopNoticeRemainTimeLabel___ctor(v10, campaignRemainingTimeLabel, monoBehaviour, 0LL);
    this->fields.remainTimeLabelObject = v10;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.remainTimeLabelObject, (int32_t)v10, v11, v12);
    remainTimeLabelObject = this->fields.remainTimeLabelObject;
    if ( !remainTimeLabelObject )
      goto LABEL_7;
  }
  ShopNoticeRemainTimeLabel__SetTimeLimit(remainTimeLabelObject, endedAt, 1, 0LL);
  remainTimeLabelObject = *p_remainTimeLabelObject;
  if ( !*p_remainTimeLabelObject )
LABEL_7:
    sub_1BCB254(remainTimeLabelObject, v13);
  ShopNoticeRemainTimeLabel__Start(remainTimeLabelObject, 0LL);
}


UILabel_o *__fastcall CampaignNoticeObject__get_CampaignRemainingTimeLabel(
        CampaignNoticeObject_o *this,
        const MethodInfo *method)
{
  return this->fields.campaignRemainingTimeLabel;
}


UISprite_o *__fastcall CampaignNoticeObject__get_CampaignSprite(CampaignNoticeObject_o *this, const MethodInfo *method)
{
  return this->fields.campaignSprite;
}