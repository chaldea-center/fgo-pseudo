void CampaignNoticeObject___ctor(CampaignNoticeObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CampaignNoticeObject__Initialize(
        CampaignNoticeObject_o *this,
        int32_t id,
        System_Action_int__o *onClick,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_int__o **p_onClick; // x0

  this->fields.onClick = onClick;
  p_onClick = &this->fields.onClick;
  *((_DWORD *)p_onClick - 2) = id;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)p_onClick,
    (int32_t)onClick,
    (int32_t)onClick,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
}


void CampaignNoticeObject__OnClickNotice(CampaignNoticeObject_o *this, const MethodInfo *method)
{
  struct System_Action_int__o *onClick; // x8

  onClick = this->fields.onClick;
  if ( onClick )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onClick->fields.invoke_impl)(
      onClick->fields.method_code,
      (unsigned int)this->fields.gachaId,
      onClick->fields.method);
}


void CampaignNoticeObject__StartUpdateLimitTime(
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x1

  if ( (byte_4D2D36F & 1) == 0 )
  {
    sub_1C93AD4(&ShopNoticeRemainTimeLabel_TypeInfo);
    byte_4D2D36F = 1;
  }
  p_remainTimeLabelObject = &this->fields.remainTimeLabelObject;
  remainTimeLabelObject = this->fields.remainTimeLabelObject;
  if ( !remainTimeLabelObject )
  {
    campaignRemainingTimeLabel = this->fields.campaignRemainingTimeLabel;
    v10 = (ShopNoticeRemainTimeLabel_o *)sub_1C93D20(ShopNoticeRemainTimeLabel_TypeInfo);
    ShopNoticeRemainTimeLabel___ctor(v10, campaignRemainingTimeLabel, monoBehaviour, 0);
    this->fields.remainTimeLabelObject = v10;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.remainTimeLabelObject,
      (int32_t)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    remainTimeLabelObject = this->fields.remainTimeLabelObject;
    if ( !remainTimeLabelObject )
      goto LABEL_7;
  }
  ShopNoticeRemainTimeLabel__SetTimeLimit(remainTimeLabelObject, endedAt, 1, 0);
  remainTimeLabelObject = *p_remainTimeLabelObject;
  if ( !*p_remainTimeLabelObject )
LABEL_7:
    sub_1C93D2C(remainTimeLabelObject, v17);
  ShopNoticeRemainTimeLabel__Start(remainTimeLabelObject, 0);
}


UILabel_o *CampaignNoticeObject__get_CampaignRemainingTimeLabel(CampaignNoticeObject_o *this, const MethodInfo *method)
{
  return this->fields.campaignRemainingTimeLabel;
}


UISprite_o *CampaignNoticeObject__get_CampaignSprite(CampaignNoticeObject_o *this, const MethodInfo *method)
{
  return this->fields.campaignSprite;
}