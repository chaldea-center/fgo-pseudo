void __fastcall LimitUpResultInfoRewardComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  UnityEngine_Color32_o c; // [xsp+8h] [xbp-8h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8

  if ( (byte_4213EE9 & 1) == 0 )
  {
    sub_B0D8A4(&LimitUpResultInfoRewardComponent_TypeInfo, v1);
    byte_4213EE9 = 1;
  }
  p_c = (UnityEngine_Color32_o)&c;
  c.fields.rgba = 0;
  UnityEngine_Color32___ctor(p_c, 0x36u, 0x3Au, 0x3Du, 0xFFu, 0LL);
  rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
  LimitUpResultInfoRewardComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR = UnityEngine_Color32__op_Implicit_40760496(rgba, 0LL);
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
  ItemIconComponent_o *v15; // x23
  int v16; // s0
  UIWidget_o *v20; // x22
  int v21; // s0
  UILabel_o *v25; // x22
  bool v26; // w1
  int v27; // s0
  UIWidget_o *detailLabel; // x22
  int v32; // s0
  UILabel_o *v36; // x22
  int v37; // s0
  const MethodInfo *v41; // x3

  if ( (byte_4213EE8 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&iconImageId);
    sub_B0D8A4(&LimitUpResultInfoRewardComponent_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_19419/*"icon_reward_get"*/, v12);
    byte_4213EE8 = 1;
  }
  rewardInfoGetIcon = this->fields.rewardInfoGetIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(rewardInfoGetIcon, (System_String_o *)StringLiteral_19419/*"icon_reward_get"*/, 0LL);
  rewardInfoIcon = this->fields.rewardInfoIcon;
  if ( !rewardInfoIcon )
    goto LABEL_24;
  ItemIconComponent__SetItem((ItemIconComponent_o *)rewardInfoIcon, iconImageId, -1, 0LL);
  v15 = this->fields.rewardInfoIcon;
  if ( !isHaving )
  {
    *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_white(0LL);
    if ( v15 )
    {
      ItemIconComponent__SetColor(v15, *(UnityEngine_Color_o *)&v27, 0LL);
      detailLabel = (UIWidget_o *)this->fields.detailLabel;
      *(UnityEngine_Color_o *)&v32 = UnityEngine_Color__get_white(0LL);
      if ( detailLabel )
      {
        UIWidget__set_color(detailLabel, *(UnityEngine_Color_o *)&v32, 0LL);
        v36 = this->fields.detailLabel;
        *(UnityEngine_Color_o *)&v37 = UnityEngine_Color__get_black(0LL);
        if ( v36 )
        {
          UILabel__set_effectColor(v36, *(UnityEngine_Color_o *)&v37, 0LL);
          rewardInfoIcon = this->fields.rewardInfoGetIcon;
          if ( rewardInfoIcon )
          {
            rewardInfoIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardInfoIcon, 0LL);
            if ( rewardInfoIcon )
            {
              v26 = 0;
              goto LABEL_23;
            }
          }
        }
      }
    }
LABEL_24:
    sub_B0D97C(rewardInfoIcon);
  }
  *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_gray(0LL);
  if ( !v15 )
    goto LABEL_24;
  ItemIconComponent__SetColor(v15, *(UnityEngine_Color_o *)&v16, 0LL);
  v20 = (UIWidget_o *)this->fields.detailLabel;
  *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_gray(0LL);
  if ( !v20 )
    goto LABEL_24;
  UIWidget__set_color(v20, *(UnityEngine_Color_o *)&v21, 0LL);
  v25 = this->fields.detailLabel;
  rewardInfoIcon = LimitUpResultInfoRewardComponent_TypeInfo;
  if ( (BYTE3(LimitUpResultInfoRewardComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LimitUpResultInfoRewardComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultInfoRewardComponent_TypeInfo);
    rewardInfoIcon = LimitUpResultInfoRewardComponent_TypeInfo;
  }
  if ( !v25 )
    goto LABEL_24;
  UILabel__set_effectColor(v25, *(UnityEngine_Color_o *)*((_QWORD *)rewardInfoIcon + 23), 0LL);
  rewardInfoIcon = this->fields.rewardInfoGetIcon;
  if ( !rewardInfoIcon )
    goto LABEL_24;
  rewardInfoIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardInfoIcon, 0LL);
  if ( !rewardInfoIcon )
    goto LABEL_24;
  v26 = 1;
LABEL_23:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardInfoIcon, v26, 0LL);
  LimitUpResultInfoComponent__Setup((LimitUpResultInfoComponent_o *)this, title, detail, v41);
}