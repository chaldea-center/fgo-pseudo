void LimitUpResultInfoRewardComponent___cctor(const MethodInfo *method)
{
  if ( (byte_5932076 & 1) == 0 )
  {
    sub_21FFC50(&LimitUpResultInfoRewardComponent_TypeInfo);
    byte_5932076 = 1;
  }
  *LimitUpResultInfoRewardComponent_TypeInfo->static_fields = (struct LimitUpResultInfoRewardComponent_StaticFields)xmmword_E92B40;
}


void LimitUpResultInfoRewardComponent___ctor(LimitUpResultInfoRewardComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void LimitUpResultInfoRewardComponent__Awake(LimitUpResultInfoRewardComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void LimitUpResultInfoRewardComponent__Setup(
        LimitUpResultInfoRewardComponent_o *this,
        int32_t iconImageId,
        bool isHaving,
        System_String_o *title,
        System_String_o *detail,
        const MethodInfo *method)
{
  UISprite_o *rewardInfoGetIcon; // x24
  __int64 v12; // x1
  ItemIconComponent_o *rewardInfoIcon; // x0
  __int64 v14; // x2
  UILabel_o *detailLabel; // x22
  bool v16; // w1
  const MethodInfo *v17; // x3
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5932075 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&LimitUpResultInfoRewardComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_21157/*"icon_reward_get"*/);
    byte_5932075 = 1;
  }
  rewardInfoGetIcon = this->fields.rewardInfoGetIcon;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&iconImageId, isHaving);
  AtlasManager__SetEventUI(rewardInfoGetIcon, (System_String_o *)StringLiteral_21157/*"icon_reward_get"*/, 0);
  rewardInfoIcon = this->fields.rewardInfoIcon;
  if ( !rewardInfoIcon )
    goto LABEL_22;
  ItemIconComponent__SetItem(rewardInfoIcon, iconImageId, -1, 1, 0);
  rewardInfoIcon = this->fields.rewardInfoIcon;
  if ( !isHaving )
  {
    if ( rewardInfoIcon )
    {
      v20.fields.r = 1.0;
      v20.fields.g = 1.0;
      v20.fields.b = 1.0;
      v20.fields.a = 1.0;
      ItemIconComponent__SetColor(rewardInfoIcon, v20, 0);
      rewardInfoIcon = (ItemIconComponent_o *)this->fields.detailLabel;
      if ( rewardInfoIcon )
      {
        v21.fields.r = 1.0;
        v21.fields.g = 1.0;
        v21.fields.b = 1.0;
        v21.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)rewardInfoIcon, v21, 0);
        rewardInfoIcon = (ItemIconComponent_o *)this->fields.detailLabel;
        if ( rewardInfoIcon )
        {
          v22.fields.r = 0.0;
          v22.fields.g = 0.0;
          v22.fields.b = 0.0;
          v22.fields.a = 1.0;
          UILabel__set_effectColor((UILabel_o *)rewardInfoIcon, v22, 0);
          rewardInfoIcon = (ItemIconComponent_o *)this->fields.rewardInfoGetIcon;
          if ( rewardInfoIcon )
          {
            rewardInfoIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)rewardInfoIcon,
                                                      0);
            if ( rewardInfoIcon )
            {
              v16 = 0;
              goto LABEL_21;
            }
          }
        }
      }
    }
LABEL_22:
    sub_21FFECC(rewardInfoIcon, v12);
  }
  if ( !rewardInfoIcon )
    goto LABEL_22;
  v18.fields.r = 0.5;
  v18.fields.g = 0.5;
  v18.fields.b = 0.5;
  v18.fields.a = 1.0;
  ItemIconComponent__SetColor(rewardInfoIcon, v18, 0);
  rewardInfoIcon = (ItemIconComponent_o *)this->fields.detailLabel;
  if ( !rewardInfoIcon )
    goto LABEL_22;
  v19.fields.r = 0.5;
  v19.fields.g = 0.5;
  v19.fields.b = 0.5;
  v19.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)rewardInfoIcon, v19, 0);
  detailLabel = this->fields.detailLabel;
  rewardInfoIcon = (ItemIconComponent_o *)LimitUpResultInfoRewardComponent_TypeInfo;
  if ( !*(&LimitUpResultInfoRewardComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LimitUpResultInfoRewardComponent_TypeInfo, v12, v14);
  if ( !detailLabel )
    goto LABEL_22;
  UILabel__set_effectColor(
    detailLabel,
    LimitUpResultInfoRewardComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR,
    0);
  rewardInfoIcon = (ItemIconComponent_o *)this->fields.rewardInfoGetIcon;
  if ( !rewardInfoIcon )
    goto LABEL_22;
  rewardInfoIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)rewardInfoIcon,
                                            0);
  if ( !rewardInfoIcon )
    goto LABEL_22;
  v16 = 1;
LABEL_21:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardInfoIcon, v16, 0);
  LimitUpResultInfoComponent__Setup((LimitUpResultInfoComponent_o *)this, title, detail, v17);
}