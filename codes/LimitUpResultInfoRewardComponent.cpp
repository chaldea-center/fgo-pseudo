void __fastcall LimitUpResultInfoRewardComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FFC92 & 1) == 0 )
  {
    sub_1B640C8(&LimitUpResultInfoRewardComponent_TypeInfo, v1);
    byte_49FFC92 = 1;
  }
  *LimitUpResultInfoRewardComponent_TypeInfo->static_fields = (struct LimitUpResultInfoRewardComponent_StaticFields)xmmword_BA3440;
}


void __fastcall LimitUpResultInfoRewardComponent___ctor(
        LimitUpResultInfoRewardComponent_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall LimitUpResultInfoRewardComponent__Awake(
        LimitUpResultInfoRewardComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitUpResultInfoRewardComponent__Setup(
        LimitUpResultInfoRewardComponent_o *this,
        int32_t iconImageId,
        bool isHaving,
        System_String_o *title,
        System_String_o *detail,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  UISprite_o *rewardInfoGetIcon; // x24
  void *rewardInfoIcon; // x0
  UILabel_o *detailLabel; // x22
  bool v16; // w1
  const MethodInfo *v17; // x3
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FFC91 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&iconImageId);
    sub_1B640C8(&LimitUpResultInfoRewardComponent_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_20091/*"icon_reward_get"*/, v12);
    byte_49FFC91 = 1;
  }
  rewardInfoGetIcon = this->fields.rewardInfoGetIcon;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(rewardInfoGetIcon, (System_String_o *)StringLiteral_20091/*"icon_reward_get"*/, 0LL);
  rewardInfoIcon = this->fields.rewardInfoIcon;
  if ( !rewardInfoIcon )
    goto LABEL_22;
  ItemIconComponent__SetItem((ItemIconComponent_o *)rewardInfoIcon, iconImageId, -1, 0LL);
  rewardInfoIcon = this->fields.rewardInfoIcon;
  if ( !isHaving )
  {
    if ( rewardInfoIcon )
    {
      v20.fields.r = 1.0;
      v20.fields.g = 1.0;
      v20.fields.b = 1.0;
      v20.fields.a = 1.0;
      ItemIconComponent__SetColor((ItemIconComponent_o *)rewardInfoIcon, v20, 0LL);
      rewardInfoIcon = this->fields.detailLabel;
      if ( rewardInfoIcon )
      {
        v21.fields.r = 1.0;
        v21.fields.g = 1.0;
        v21.fields.b = 1.0;
        v21.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)rewardInfoIcon, v21, 0LL);
        rewardInfoIcon = this->fields.detailLabel;
        if ( rewardInfoIcon )
        {
          v22.fields.r = 0.0;
          v22.fields.g = 0.0;
          v22.fields.b = 0.0;
          v22.fields.a = 1.0;
          UILabel__set_effectColor((UILabel_o *)rewardInfoIcon, v22, 0LL);
          rewardInfoIcon = this->fields.rewardInfoGetIcon;
          if ( rewardInfoIcon )
          {
            rewardInfoIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardInfoIcon, 0LL);
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
    sub_1B64324(rewardInfoIcon);
  }
  if ( !rewardInfoIcon )
    goto LABEL_22;
  v18.fields.r = 0.5;
  v18.fields.g = 0.5;
  v18.fields.b = 0.5;
  v18.fields.a = 1.0;
  ItemIconComponent__SetColor((ItemIconComponent_o *)rewardInfoIcon, v18, 0LL);
  rewardInfoIcon = this->fields.detailLabel;
  if ( !rewardInfoIcon )
    goto LABEL_22;
  v19.fields.r = 0.5;
  v19.fields.g = 0.5;
  v19.fields.b = 0.5;
  v19.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)rewardInfoIcon, v19, 0LL);
  detailLabel = this->fields.detailLabel;
  rewardInfoIcon = LimitUpResultInfoRewardComponent_TypeInfo;
  if ( !LimitUpResultInfoRewardComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultInfoRewardComponent_TypeInfo);
    rewardInfoIcon = LimitUpResultInfoRewardComponent_TypeInfo;
  }
  if ( !detailLabel )
    goto LABEL_22;
  UILabel__set_effectColor(detailLabel, *(UnityEngine_Color_o *)*((_QWORD *)rewardInfoIcon + 23), 0LL);
  rewardInfoIcon = this->fields.rewardInfoGetIcon;
  if ( !rewardInfoIcon )
    goto LABEL_22;
  rewardInfoIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardInfoIcon, 0LL);
  if ( !rewardInfoIcon )
    goto LABEL_22;
  v16 = 1;
LABEL_21:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardInfoIcon, v16, 0LL);
  LimitUpResultInfoComponent__Setup((LimitUpResultInfoComponent_o *)this, title, detail, v17);
}