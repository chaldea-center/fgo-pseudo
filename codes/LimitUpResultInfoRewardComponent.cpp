void LimitUpResultInfoRewardComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C3BA4F & 1) == 0 )
  {
    sub_1C32C20(&LimitUpResultInfoRewardComponent_TypeInfo);
    byte_4C3BA4F = 1;
  }
  *LimitUpResultInfoRewardComponent_TypeInfo->static_fields = (struct LimitUpResultInfoRewardComponent_StaticFields)xmmword_C0D0A0;
}


void LimitUpResultInfoRewardComponent___ctor(LimitUpResultInfoRewardComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void LimitUpResultInfoRewardComponent__Awake(LimitUpResultInfoRewardComponent_o *this, const MethodInfo *method)
{
  ;
}


void LimitUpResultInfoRewardComponent__Setup(
        LimitUpResultInfoRewardComponent_o *this,
        int32_t iconImageId,
        bool isHaving,
        System_String_o *title,
        System_String_o *detail,
        const MethodInfo *method)
{
  UISprite_o *rewardInfoGetIcon; // x24
  void *rewardInfoIcon; // x0
  UILabel_o *detailLabel; // x22
  bool v14; // w1
  const MethodInfo *v15; // x3
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3BA4E & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&LimitUpResultInfoRewardComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_20219/*"icon_reward_get"*/);
    byte_4C3BA4E = 1;
  }
  rewardInfoGetIcon = this->fields.rewardInfoGetIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(rewardInfoGetIcon, (System_String_o *)StringLiteral_20219/*"icon_reward_get"*/, 0);
  rewardInfoIcon = this->fields.rewardInfoIcon;
  if ( !rewardInfoIcon )
    goto LABEL_22;
  ItemIconComponent__SetItem((ItemIconComponent_o *)rewardInfoIcon, iconImageId, -1, 1, 0);
  rewardInfoIcon = this->fields.rewardInfoIcon;
  if ( !isHaving )
  {
    if ( rewardInfoIcon )
    {
      v18.fields.r = 1.0;
      v18.fields.g = 1.0;
      v18.fields.b = 1.0;
      v18.fields.a = 1.0;
      ItemIconComponent__SetColor((ItemIconComponent_o *)rewardInfoIcon, v18, 0);
      rewardInfoIcon = this->fields.detailLabel;
      if ( rewardInfoIcon )
      {
        v19.fields.r = 1.0;
        v19.fields.g = 1.0;
        v19.fields.b = 1.0;
        v19.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)rewardInfoIcon, v19, 0);
        rewardInfoIcon = this->fields.detailLabel;
        if ( rewardInfoIcon )
        {
          v20.fields.r = 0.0;
          v20.fields.g = 0.0;
          v20.fields.b = 0.0;
          v20.fields.a = 1.0;
          UILabel__set_effectColor((UILabel_o *)rewardInfoIcon, v20, 0);
          rewardInfoIcon = this->fields.rewardInfoGetIcon;
          if ( rewardInfoIcon )
          {
            rewardInfoIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardInfoIcon, 0);
            if ( rewardInfoIcon )
            {
              v14 = 0;
              goto LABEL_21;
            }
          }
        }
      }
    }
LABEL_22:
    sub_1C32E7C(rewardInfoIcon);
  }
  if ( !rewardInfoIcon )
    goto LABEL_22;
  v16.fields.r = 0.5;
  v16.fields.g = 0.5;
  v16.fields.b = 0.5;
  v16.fields.a = 1.0;
  ItemIconComponent__SetColor((ItemIconComponent_o *)rewardInfoIcon, v16, 0);
  rewardInfoIcon = this->fields.detailLabel;
  if ( !rewardInfoIcon )
    goto LABEL_22;
  v17.fields.r = 0.5;
  v17.fields.g = 0.5;
  v17.fields.b = 0.5;
  v17.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)rewardInfoIcon, v17, 0);
  detailLabel = this->fields.detailLabel;
  rewardInfoIcon = LimitUpResultInfoRewardComponent_TypeInfo;
  if ( !LimitUpResultInfoRewardComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultInfoRewardComponent_TypeInfo);
    rewardInfoIcon = LimitUpResultInfoRewardComponent_TypeInfo;
  }
  if ( !detailLabel )
    goto LABEL_22;
  UILabel__set_effectColor(detailLabel, *(UnityEngine_Color_o *)*((_QWORD *)rewardInfoIcon + 23), 0);
  rewardInfoIcon = this->fields.rewardInfoGetIcon;
  if ( !rewardInfoIcon )
    goto LABEL_22;
  rewardInfoIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardInfoIcon, 0);
  if ( !rewardInfoIcon )
    goto LABEL_22;
  v14 = 1;
LABEL_21:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardInfoIcon, v14, 0);
  LimitUpResultInfoComponent__Setup((LimitUpResultInfoComponent_o *)this, title, detail, v15);
}