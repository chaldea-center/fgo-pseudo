void __fastcall LimitUpResultInfoRewardComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Color32_o c; // [xsp+8h] [xbp-8h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8

  if ( (byte_42E7D6E & 1) == 0 )
  {
    sub_B5D5C4(&LimitUpResultInfoRewardComponent_TypeInfo, v1, v2, v3);
    byte_42E7D6E = 1;
  }
  p_c = (UnityEngine_Color32_o)&c;
  c.fields.rgba = 0;
  UnityEngine_Color32___ctor(p_c, 0x36u, 0x3Au, 0x3Du, 0xFFu, 0LL);
  rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
  LimitUpResultInfoRewardComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR = UnityEngine_Color32__op_Implicit_41570788(rgba, 0LL);
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
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  UISprite_o *rewardInfoGetIcon; // x24
  __int64 v18; // x1
  void *rewardInfoIcon; // x0
  ItemIconComponent_o *v20; // x23
  int v21; // s0
  UIWidget_o *v25; // x22
  int v26; // s0
  UILabel_o *v30; // x22
  bool v31; // w1
  int v32; // s0
  UIWidget_o *detailLabel; // x22
  int v37; // s0
  UILabel_o *v41; // x22
  int v42; // s0
  const MethodInfo *v46; // x3

  if ( (byte_42E7D6D & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, iconImageId, isHaving, title);
    sub_B5D5C4(&LimitUpResultInfoRewardComponent_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19602/*"icon_reward_get"*/, v14, v15, v16);
    byte_42E7D6D = 1;
  }
  rewardInfoGetIcon = this->fields.rewardInfoGetIcon;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(rewardInfoGetIcon, (System_String_o *)StringLiteral_19602/*"icon_reward_get"*/, 0LL);
  rewardInfoIcon = this->fields.rewardInfoIcon;
  if ( !rewardInfoIcon )
    goto LABEL_24;
  ItemIconComponent__SetItem((ItemIconComponent_o *)rewardInfoIcon, iconImageId, -1, 0LL);
  v20 = this->fields.rewardInfoIcon;
  if ( !isHaving )
  {
    *(UnityEngine_Color_o *)&v32 = UnityEngine_Color__get_white(0LL);
    if ( v20 )
    {
      ItemIconComponent__SetColor(v20, *(UnityEngine_Color_o *)&v32, 0LL);
      detailLabel = (UIWidget_o *)this->fields.detailLabel;
      *(UnityEngine_Color_o *)&v37 = UnityEngine_Color__get_white(0LL);
      if ( detailLabel )
      {
        UIWidget__set_color(detailLabel, *(UnityEngine_Color_o *)&v37, 0LL);
        v41 = this->fields.detailLabel;
        *(UnityEngine_Color_o *)&v42 = UnityEngine_Color__get_black(0LL);
        if ( v41 )
        {
          UILabel__set_effectColor(v41, *(UnityEngine_Color_o *)&v42, 0LL);
          rewardInfoIcon = this->fields.rewardInfoGetIcon;
          if ( rewardInfoIcon )
          {
            rewardInfoIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardInfoIcon, 0LL);
            if ( rewardInfoIcon )
            {
              v31 = 0;
              goto LABEL_23;
            }
          }
        }
      }
    }
LABEL_24:
    sub_B5D69C(rewardInfoIcon, v18);
  }
  *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_gray(0LL);
  if ( !v20 )
    goto LABEL_24;
  ItemIconComponent__SetColor(v20, *(UnityEngine_Color_o *)&v21, 0LL);
  v25 = (UIWidget_o *)this->fields.detailLabel;
  *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_gray(0LL);
  if ( !v25 )
    goto LABEL_24;
  UIWidget__set_color(v25, *(UnityEngine_Color_o *)&v26, 0LL);
  v30 = this->fields.detailLabel;
  rewardInfoIcon = LimitUpResultInfoRewardComponent_TypeInfo;
  if ( (BYTE3(LimitUpResultInfoRewardComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LimitUpResultInfoRewardComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LimitUpResultInfoRewardComponent_TypeInfo);
    rewardInfoIcon = LimitUpResultInfoRewardComponent_TypeInfo;
  }
  if ( !v30 )
    goto LABEL_24;
  UILabel__set_effectColor(v30, *(UnityEngine_Color_o *)*((_QWORD *)rewardInfoIcon + 23), 0LL);
  rewardInfoIcon = this->fields.rewardInfoGetIcon;
  if ( !rewardInfoIcon )
    goto LABEL_24;
  rewardInfoIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rewardInfoIcon, 0LL);
  if ( !rewardInfoIcon )
    goto LABEL_24;
  v31 = 1;
LABEL_23:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rewardInfoIcon, v31, 0LL);
  LimitUpResultInfoComponent__Setup((LimitUpResultInfoComponent_o *)this, title, detail, v46);
}