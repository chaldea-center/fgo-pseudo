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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_int__o **p_onClick; // x0

  this->fields.onClick = onClick;
  p_onClick = &this->fields.onClick;
  *((_DWORD *)p_onClick - 2) = id;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)p_onClick,
    (int32_t)onClick,
    (System_String_o *)onClick,
    (System_String_o *)method,
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1

  if ( (byte_5934F00 & 1) == 0 )
  {
    sub_21FFC50(&ShopNoticeRemainTimeLabel_TypeInfo);
    byte_5934F00 = 1;
  }
  p_remainTimeLabelObject = &this->fields.remainTimeLabelObject;
  remainTimeLabelObject = this->fields.remainTimeLabelObject;
  if ( !remainTimeLabelObject )
  {
    campaignRemainingTimeLabel = this->fields.campaignRemainingTimeLabel;
    v10 = (ShopNoticeRemainTimeLabel_o *)sub_21FFEBC(ShopNoticeRemainTimeLabel_TypeInfo);
    ShopNoticeRemainTimeLabel___ctor(v10, campaignRemainingTimeLabel, monoBehaviour, 0);
    this->fields.remainTimeLabelObject = v10;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.remainTimeLabelObject,
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
    sub_21FFECC(remainTimeLabelObject, v17);
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