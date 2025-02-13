void __fastcall ServantStatusFriendshipGauge___cctor(const MethodInfo *method)
{
  if ( (byte_4BD8D13 & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusFriendshipGauge_TypeInfo);
    byte_4BD8D13 = 1;
  }
  *ServantStatusFriendshipGauge_TypeInfo->static_fields = (struct ServantStatusFriendshipGauge_StaticFields)0xC0000000C1A00000LL;
}


void __fastcall ServantStatusFriendshipGauge___ctor(ServantStatusFriendshipGauge_o *this, const MethodInfo *method)
{
  struct UISlider_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  struct UISlider_array *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BD8D12 & 1) == 0 )
  {
    sub_1C21E38(&UISlider___TypeInfo);
    byte_4BD8D12 = 1;
  }
  v3 = (struct UISlider_array *)sub_1C21EE0(UISlider___TypeInfo, 10LL);
  this->fields.gaugeSliderList = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.gaugeSliderList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (struct UISlider_array *)sub_1C21EE0(UISlider___TypeInfo, 10LL);
  this->fields.overLimitGaugeSliderList = v10;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.overLimitGaugeSliderList,
    (int64_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.isInit = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFriendshipGauge__DisplayGauge(
        ServantStatusFriendshipGauge_o *this,
        int32_t currentRank,
        int32_t maxRank,
        float fraction,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  BalanceConfig_c *v10; // x0
  int DisableFriendshipExceed; // w22

  if ( (byte_4BD8D10 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD8D10 = 1;
  }
  if ( maxRank <= 10 )
  {
    ServantStatusFriendshipGauge__SetActiveContainer(this, 0, *(const MethodInfo **)&maxRank);
LABEL_8:
    ServantStatusFriendshipGauge__DisplayNomalGauge(this, currentRank, maxRank, fraction, v9);
    return;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  DisableFriendshipExceed = v10->static_fields->DisableFriendshipExceed;
  ServantStatusFriendshipGauge__SetActiveContainer(this, DisableFriendshipExceed < 1, *(const MethodInfo **)&maxRank);
  if ( DisableFriendshipExceed > 0 )
    goto LABEL_8;
  ServantStatusFriendshipGauge__DisplayOverLimitGauge(this, currentRank, maxRank, fraction, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFriendshipGauge__DisplayNomalGauge(
        ServantStatusFriendshipGauge_o *this,
        int32_t currentRank,
        int32_t maxRank,
        float fraction,
        const MethodInfo *method)
{
  struct UISlider_array *gaugeSliderList; // x8
  ServantStatusFriendshipGauge_o *v8; // x20
  __int64 v10; // x23
  int max_length; // w9
  Il2CppClass **v13; // x8
  UnityEngine_Component_o *v14; // x22
  float sy1; // s9
  float x; // s11
  float z; // s10
  float v18; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  gaugeSliderList = this->fields.gaugeSliderList;
  if ( !gaugeSliderList )
LABEL_22:
    sub_1C22094(this, *(_QWORD *)&currentRank);
  v8 = this;
  v10 = 0LL;
  while ( 1 )
  {
    max_length = gaugeSliderList->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
      sub_1C2209C(this, *(_QWORD *)&currentRank);
    v13 = &gaugeSliderList->obj.klass + v10;
    v14 = (UnityEngine_Component_o *)v13[4];
    if ( !v14
      || (this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v13[4],
                                                     0LL)) == 0LL )
    {
LABEL_24:
      sub_1C22094(this, *(_QWORD *)&currentRank);
    }
    if ( (int)v10 >= maxRank )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      if ( (unsigned int)v10 <= 4 )
      {
        this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_transform(v14, 0LL);
        if ( !this )
          goto LABEL_24;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        sy1 = v8->fields.sy1;
        x = localPosition.fields.x;
        z = localPosition.fields.z;
        if ( maxRank <= 5 )
          sy1 = (float)(sy1 + v8->fields.sy2) * 0.5;
        this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_transform(v14, 0LL);
        if ( !this )
          goto LABEL_24;
        v20.fields.x = x;
        v20.fields.y = sy1;
        v20.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v20, 0LL);
      }
      if ( currentRank == (_DWORD)v10 )
        v18 = fraction;
      else
        v18 = 0.0;
      if ( (int)v10 < currentRank )
        v18 = 1.0;
      UIProgressBar__set_value((UIProgressBar_o *)v14, v18, 0LL);
    }
    gaugeSliderList = v8->fields.gaugeSliderList;
    ++v10;
    if ( !gaugeSliderList )
      goto LABEL_22;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFriendshipGauge__DisplayOverLimitGauge(
        ServantStatusFriendshipGauge_o *this,
        int32_t currentRank,
        int32_t maxRank,
        float fraction,
        const MethodInfo *method)
{
  int32_t v7; // w19
  ServantStatusFriendshipGauge_o *v8; // x20
  struct UISlider_array *overLimitGaugeSliderList; // x8
  __int64 v10; // x22
  int v11; // w24
  int max_length; // w9
  Il2CppClass **v13; // x8
  UIProgressBar_o *v14; // x21
  float v15; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  ServantStatusFriendshipGauge_c *v17; // x8
  UnityEngine_GameObject_o *v18; // x21
  struct ServantStatusFriendshipGauge_StaticFields *static_fields; // x8
  float POSITION_Y_DEFAULT; // s0

  v7 = currentRank;
  v8 = this;
  if ( (byte_4BD8D11 & 1) == 0 )
  {
    this = (ServantStatusFriendshipGauge_o *)sub_1C21E38(&ServantStatusFriendshipGauge_TypeInfo);
    byte_4BD8D11 = 1;
  }
  overLimitGaugeSliderList = v8->fields.overLimitGaugeSliderList;
  if ( !overLimitGaugeSliderList )
LABEL_22:
    sub_1C22094(this, *(_QWORD *)&currentRank);
  v10 = 0LL;
  v11 = maxRank - 10;
  while ( 1 )
  {
    max_length = overLimitGaugeSliderList->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
      sub_1C2209C(this, *(_QWORD *)&currentRank);
    v13 = &overLimitGaugeSliderList->obj.klass + v10;
    v14 = (UIProgressBar_o *)v13[4];
    if ( v14 )
    {
      this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v13[4],
                                                 0LL);
      if ( this )
      {
        if ( (int)v10 >= v11 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          if ( v7 <= 10 )
            v15 = fraction;
          else
            v15 = 1.0;
          UIProgressBar__set_value(v14, v15, 0LL);
          if ( (unsigned int)v10 <= 4 )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
            v17 = ServantStatusFriendshipGauge_TypeInfo;
            v18 = gameObject;
            if ( !ServantStatusFriendshipGauge_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusFriendshipGauge_TypeInfo);
              v17 = ServantStatusFriendshipGauge_TypeInfo;
            }
            static_fields = v17->static_fields;
            if ( v11 <= 5 )
              POSITION_Y_DEFAULT = static_fields->POSITION_Y_DEFAULT;
            else
              POSITION_Y_DEFAULT = static_fields->POSITION_Y_OTHER;
            GameObjectExtensions__SetLocalPositionY(v18, POSITION_Y_DEFAULT, 0LL);
          }
        }
        overLimitGaugeSliderList = v8->fields.overLimitGaugeSliderList;
        ++v10;
        --v7;
        if ( overLimitGaugeSliderList )
          continue;
      }
    }
    goto LABEL_22;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFriendshipGauge__Initialize(
        ServantStatusFriendshipGauge_o *this,
        const MethodInfo *method)
{
  ServantStatusFriendshipGauge_o *v2; // x19
  struct UISlider_array *gaugeSliderList; // x8
  __int64 v4; // x9
  int v5; // w10
  struct UISlider_array *overLimitGaugeSliderList; // x10
  int max_length; // w10
  int v8; // w11
  float v9; // s1
  struct UISlider_array *v10; // x8
  int v11; // w9
  BalanceConfig_c *v12; // x0
  UISprite_o *overLimitGaugeSprite; // x19

  v2 = this;
  if ( (byte_4BD8D0E & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    this = (ServantStatusFriendshipGauge_o *)sub_1C21E38(&StringLiteral_20631/*"img_bondsgage_11"*/);
    byte_4BD8D0E = 1;
  }
  gaugeSliderList = v2->fields.gaugeSliderList;
  if ( !gaugeSliderList )
    goto LABEL_24;
  v4 = *(_QWORD *)&gaugeSliderList->max_length;
  v5 = -1;
  do
    ++v5;
  while ( v5 < (int)v4 );
  overLimitGaugeSliderList = v2->fields.overLimitGaugeSliderList;
  if ( !overLimitGaugeSliderList )
    goto LABEL_24;
  max_length = overLimitGaugeSliderList->max_length;
  v8 = -1;
  do
    ++v8;
  while ( v8 < max_length );
  if ( !(_DWORD)v4 )
    goto LABEL_25;
  this = (ServantStatusFriendshipGauge_o *)gaugeSliderList->m_Items[0];
  if ( !this
    || (this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)this,
                                                0LL),
        v10 = v2->fields.gaugeSliderList,
        v2->fields.sy1 = v9,
        !v10) )
  {
LABEL_24:
    sub_1C22094(this, method);
  }
  v11 = v10->max_length;
  if ( v11 < 5 )
    goto LABEL_18;
  if ( v11 == 5 )
LABEL_25:
    sub_1C2209C(this, method);
  this = (ServantStatusFriendshipGauge_o *)v10->m_Items[5];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
LABEL_18:
  v2->fields.sy2 = v9;
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  if ( v12->static_fields->DisableFriendshipExceed <= 0 )
  {
    overLimitGaugeSprite = v2->fields.overLimitGaugeSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBondAtlasImage(overLimitGaugeSprite, (System_String_o *)StringLiteral_20631/*"img_bondsgage_11"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFriendshipGauge__Set(
        ServantStatusFriendshipGauge_o *this,
        int32_t currentRank,
        int32_t maxRank,
        int32_t late,
        float fraction,
        const MethodInfo *method)
{
  BalanceConfig_c *v11; // x0
  _BOOL4 v12; // w8
  UIExtrusionLabel_o *levelLabel; // x21
  System_String_o *NumberFormat; // x0
  System_String_o *v15; // x1
  UILabel_o *maxLevelLabel; // x21
  UILabel_o *latePointLabel; // x21
  const MethodInfo *v18; // x3
  int32_t v19; // [xsp+8h] [xbp-38h] BYREF
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  v19 = maxRank;
  v20 = currentRank;
  if ( (byte_4BD8D0F & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_15062/*"UNIT_REST_NONE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8D0F = 1;
  }
  if ( this->fields.isInit )
  {
    this->fields.isInit = 0;
    ServantStatusFriendshipGauge__Initialize(this, *(const MethodInfo **)&currentRank);
  }
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  if ( v11->static_fields->DisableFriendshipExceed <= 0 )
  {
    v12 = late == -1 || maxRank != currentRank;
    if ( !v12 )
      fraction = 0.0;
    if ( !v12 )
      late = 0;
  }
  levelLabel = this->fields.levelLabel;
  NumberFormat = System_Int32__ToString((int32_t)&v20, 0LL);
  if ( !levelLabel )
    goto LABEL_22;
  UIExtrusionLabel__set_text(levelLabel, NumberFormat, 0LL);
  maxLevelLabel = this->fields.maxLevelLabel;
  NumberFormat = System_Int32__ToString((int32_t)&v19, 0LL);
  if ( !maxLevelLabel )
    goto LABEL_22;
  UILabel__set_text(maxLevelLabel, NumberFormat, 0LL);
  latePointLabel = this->fields.latePointLabel;
  if ( late > 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    NumberFormat = LocalizationManager__GetNumberFormat(late, 0LL);
    goto LABEL_18;
  }
  if ( (late & 0x80000000) == 0 )
  {
    v15 = (System_String_o *)StringLiteral_1/*""*/;
    if ( latePointLabel )
      goto LABEL_19;
LABEL_22:
    sub_1C22094(NumberFormat, v15);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__Get((System_String_o *)StringLiteral_15062/*"UNIT_REST_NONE"*/, 0LL);
LABEL_18:
  v15 = NumberFormat;
  if ( !latePointLabel )
    goto LABEL_22;
LABEL_19:
  UILabel__set_text(latePointLabel, v15, 0LL);
  ServantStatusFriendshipGauge__DisplayGauge(this, v20, v19, fraction, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFriendshipGauge__SetActiveContainer(
        ServantStatusFriendshipGauge_o *this,
        bool isOverLimit,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *nomalGaugeContainer; // x0

  nomalGaugeContainer = this->fields.nomalGaugeContainer;
  if ( !nomalGaugeContainer
    || (UnityEngine_GameObject__SetActive(nomalGaugeContainer, !isOverLimit, 0LL),
        (nomalGaugeContainer = this->fields.overLimitGaugeContainer) == 0LL) )
  {
    sub_1C22094(nomalGaugeContainer, isOverLimit);
  }
  UnityEngine_GameObject__SetActive(nomalGaugeContainer, isOverLimit, 0LL);
}