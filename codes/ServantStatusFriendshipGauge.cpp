void ServantStatusFriendshipGauge___cctor(const MethodInfo *method)
{
  if ( (byte_596CB8E & 1) == 0 )
  {
    sub_2213A60(&ServantStatusFriendshipGauge_TypeInfo);
    byte_596CB8E = 1;
  }
  *ServantStatusFriendshipGauge_TypeInfo->static_fields = (struct ServantStatusFriendshipGauge_StaticFields)0xC0000000C1A00000LL;
}


void ServantStatusFriendshipGauge___ctor(ServantStatusFriendshipGauge_o *this, const MethodInfo *method)
{
  struct UISlider_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct UISlider_array *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596CB8D & 1) == 0 )
  {
    sub_2213A60(&UISlider___TypeInfo);
    byte_596CB8D = 1;
  }
  v3 = (struct UISlider_array *)sub_2213B20(UISlider___TypeInfo, 10);
  this->fields.gaugeSliderList = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.gaugeSliderList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (struct UISlider_array *)sub_2213B20(UISlider___TypeInfo, 10);
  this->fields.overLimitGaugeSliderList = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.overLimitGaugeSliderList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.isInit = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFriendshipGauge__DisplayGauge(
        ServantStatusFriendshipGauge_o *this,
        int32_t currentRank,
        int32_t maxRank,
        float fraction,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  BalanceConfig_c *v10; // x0
  int DisableFriendshipExceed; // w22

  if ( (byte_596CB8B & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596CB8B = 1;
  }
  if ( maxRank < 11 )
  {
    ServantStatusFriendshipGauge__SetActiveContainer(this, 0, *(const MethodInfo **)&maxRank);
LABEL_8:
    ServantStatusFriendshipGauge__DisplayNomalGauge(this, currentRank, maxRank, fraction, v9);
    return;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&currentRank, *(_QWORD *)&maxRank);
    v10 = BalanceConfig_TypeInfo;
  }
  DisableFriendshipExceed = v10->static_fields->DisableFriendshipExceed;
  ServantStatusFriendshipGauge__SetActiveContainer(this, DisableFriendshipExceed < 1, *(const MethodInfo **)&maxRank);
  if ( DisableFriendshipExceed > 0 )
    goto LABEL_8;
  ServantStatusFriendshipGauge__DisplayOverLimitGauge(this, currentRank, maxRank, fraction, v9);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFriendshipGauge__DisplayNomalGauge(
        ServantStatusFriendshipGauge_o *this,
        int32_t currentRank,
        int32_t maxRank,
        float fraction,
        const MethodInfo *method)
{
  struct UISlider_array *gaugeSliderList; // x8
  ServantStatusFriendshipGauge_o *v8; // x20
  signed __int64 v9; // x22
  signed __int64 v10; // x23
  signed __int64 v11; // x24
  __int64 v12; // x25
  unsigned __int64 max_length_low; // x9
  Il2CppClass **v14; // x8
  UnityEngine_Component_o *v15; // x21
  float sy1; // s11
  float v17; // s0
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  gaugeSliderList = this->fields.gaugeSliderList;
  if ( !gaugeSliderList )
LABEL_24:
    sub_2213CDC(this, *(_QWORD *)&currentRank);
  v8 = this;
  v9 = 0;
  v10 = currentRank;
  v11 = maxRank;
  v12 = (unsigned int)currentRank;
  while ( 1 )
  {
    max_length_low = LODWORD(gaugeSliderList->max_length);
    if ( v9 >= (int)max_length_low )
      break;
    if ( v9 >= max_length_low )
      sub_2213CE4(this);
    v14 = &gaugeSliderList->obj.klass + v9;
    v15 = (UnityEngine_Component_o *)v14[4];
    if ( v9 >= v11 )
    {
      if ( !v15 )
        goto LABEL_24;
      this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v14[4],
                                                 0);
      if ( !this )
        goto LABEL_24;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    else
    {
      if ( !v15 )
        goto LABEL_24;
      this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v14[4],
                                                 0);
      if ( !this )
        goto LABEL_24;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      if ( (unsigned __int64)v9 <= 4 )
      {
        this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_transform(v15, 0);
        if ( !this )
          goto LABEL_24;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        sy1 = v8->fields.sy1;
        if ( maxRank <= 5 )
          sy1 = (float)(sy1 + v8->fields.sy2) * 0.5;
        this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_transform(v15, 0);
        if ( !this )
          goto LABEL_24;
        v19.fields.x = localPosition.fields.x;
        v19.fields.y = sy1;
        v19.fields.z = localPosition.fields.z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v19, 0);
      }
      if ( v12 == v9 )
        v17 = fraction;
      else
        v17 = 0.0;
      if ( v9 < v10 )
        v17 = 1.0;
      UIProgressBar__set_value((UIProgressBar_o *)v15, v17, 0);
    }
    gaugeSliderList = v8->fields.gaugeSliderList;
    ++v9;
    if ( !gaugeSliderList )
      goto LABEL_24;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFriendshipGauge__DisplayOverLimitGauge(
        ServantStatusFriendshipGauge_o *this,
        int32_t currentRank,
        int32_t maxRank,
        float fraction,
        const MethodInfo *method)
{
  int32_t v7; // w19
  ServantStatusFriendshipGauge_o *v8; // x20
  struct UISlider_array *overLimitGaugeSliderList; // x8
  signed __int64 v10; // x23
  unsigned __int64 v11; // x24
  unsigned __int64 max_length_low; // x9
  Il2CppClass **v13; // x8
  UIProgressBar_o *v14; // x21
  float v15; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  ServantStatusFriendshipGauge_c *v19; // x8
  UnityEngine_GameObject_o *v20; // x21
  int v21; // w9
  float POSITION_Y_DEFAULT; // s0

  v7 = currentRank;
  v8 = this;
  if ( (byte_596CB8C & 1) == 0 )
  {
    this = (ServantStatusFriendshipGauge_o *)sub_2213A60(&ServantStatusFriendshipGauge_TypeInfo);
    byte_596CB8C = 1;
  }
  overLimitGaugeSliderList = v8->fields.overLimitGaugeSliderList;
  if ( !overLimitGaugeSliderList )
LABEL_26:
    sub_2213CDC(this, *(_QWORD *)&currentRank);
  v10 = maxRank - 10;
  v11 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(overLimitGaugeSliderList->max_length);
    if ( (__int64)v11 >= (int)max_length_low )
      break;
    if ( v11 >= max_length_low )
      sub_2213CE4(this);
    v13 = &overLimitGaugeSliderList->obj.klass + v11;
    v14 = (UIProgressBar_o *)v13[4];
    if ( (__int64)v11 >= v10 )
    {
      if ( !v14 )
        goto LABEL_26;
      this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v13[4],
                                                 0);
      if ( !this )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    }
    else
    {
      if ( !v14 )
        goto LABEL_26;
      this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v13[4],
                                                 0);
      if ( !this )
        goto LABEL_26;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      if ( v7 <= 10 )
        v15 = fraction;
      else
        v15 = 1.0;
      UIProgressBar__set_value(v14, v15, 0);
      if ( v11 <= 4 )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
        v19 = ServantStatusFriendshipGauge_TypeInfo;
        v20 = gameObject;
        v21 = *(&ServantStatusFriendshipGauge_TypeInfo->_2.cctor_finished + 1);
        if ( (int)v10 <= 5 )
        {
          if ( !v21 )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusFriendshipGauge_TypeInfo, v17, v18);
            v19 = ServantStatusFriendshipGauge_TypeInfo;
          }
          POSITION_Y_DEFAULT = v19->static_fields->POSITION_Y_DEFAULT;
        }
        else
        {
          if ( !v21 )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusFriendshipGauge_TypeInfo, v17, v18);
            v19 = ServantStatusFriendshipGauge_TypeInfo;
          }
          POSITION_Y_DEFAULT = v19->static_fields->POSITION_Y_OTHER;
        }
        GameObjectExtensions__SetLocalPositionY(v20, POSITION_Y_DEFAULT, 0);
      }
    }
    overLimitGaugeSliderList = v8->fields.overLimitGaugeSliderList;
    ++v11;
    --v7;
    if ( !overLimitGaugeSliderList )
      goto LABEL_26;
  }
}


void ServantStatusFriendshipGauge__Initialize(ServantStatusFriendshipGauge_o *this, const MethodInfo *method)
{
  ServantStatusFriendshipGauge_o *v2; // x19
  struct UISlider_array *gaugeSliderList; // x8
  struct UISlider_array *v4; // x8
  int max_length; // w9
  BalanceConfig_c *v6; // x0
  UISprite_o *overLimitGaugeSprite; // x19
  __int64 v8; // x2
  float y; // s1

  v2 = this;
  if ( (byte_596CB89 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    this = (ServantStatusFriendshipGauge_o *)sub_2213A60(&StringLiteral_21324/*"img_bondsgage_11"*/);
    byte_596CB89 = 1;
  }
  gaugeSliderList = v2->fields.gaugeSliderList;
  if ( !gaugeSliderList || !v2->fields.overLimitGaugeSliderList )
    goto LABEL_20;
  if ( !LODWORD(gaugeSliderList->max_length) )
    goto LABEL_21;
  this = (ServantStatusFriendshipGauge_o *)gaugeSliderList->m_Items[0];
  if ( !this
    || (this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0)) == 0
    || (y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y,
        v4 = v2->fields.gaugeSliderList,
        v2->fields.sy1 = y,
        !v4) )
  {
LABEL_20:
    sub_2213CDC(this, method);
  }
  max_length = v4->max_length;
  if ( max_length < 5 )
    goto LABEL_14;
  if ( max_length == 5 )
LABEL_21:
    sub_2213CE4(this);
  this = (ServantStatusFriendshipGauge_o *)v4->m_Items[5];
  if ( !this )
    goto LABEL_20;
  this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_20;
  y = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0).fields.y;
LABEL_14:
  v2->fields.sy2 = y;
  v6 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v8);
    v6 = BalanceConfig_TypeInfo;
  }
  if ( v6->static_fields->DisableFriendshipExceed <= 0 )
  {
    overLimitGaugeSprite = v2->fields.overLimitGaugeSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method, v8);
    AtlasManager__SetBondAtlasImage(overLimitGaugeSprite, (System_String_o *)StringLiteral_21324/*"img_bondsgage_11"*/, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFriendshipGauge__Set(
        ServantStatusFriendshipGauge_o *this,
        int32_t currentRank,
        int32_t maxRank,
        int32_t late,
        float fraction,
        const MethodInfo *method)
{
  BalanceConfig_c *v11; // x0
  bool v12; // zf
  UIExtrusionLabel_o *levelLabel; // x21
  System_String_o *NumberFormat; // x0
  System_String_o *v15; // x1
  UILabel_o *maxLevelLabel; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  UILabel_o *latePointLabel; // x21
  const MethodInfo *v20; // x3
  int32_t v21; // [xsp+8h] [xbp-38h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-34h] BYREF

  v21 = maxRank;
  v22 = currentRank;
  if ( (byte_596CB8A & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_15416/*"UNIT_REST_NONE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CB8A = 1;
  }
  if ( this->fields.isInit )
  {
    this->fields.isInit = 0;
    ServantStatusFriendshipGauge__Initialize(this, *(const MethodInfo **)&currentRank);
  }
  v11 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&currentRank, *(_QWORD *)&maxRank);
    v11 = BalanceConfig_TypeInfo;
  }
  if ( v11->static_fields->DisableFriendshipExceed <= 0 )
  {
    v12 = late != -1 && maxRank == currentRank;
    if ( v12 )
      late = 0;
    if ( v12 )
      fraction = 0.0;
  }
  levelLabel = this->fields.levelLabel;
  NumberFormat = System_Int32__ToString((int32_t)&v22, 0);
  if ( !levelLabel )
    goto LABEL_27;
  UIExtrusionLabel__set_text(levelLabel, NumberFormat, 0);
  maxLevelLabel = this->fields.maxLevelLabel;
  NumberFormat = System_Int32__ToString((int32_t)&v21, 0);
  if ( !maxLevelLabel )
    goto LABEL_27;
  UILabel__set_text(maxLevelLabel, NumberFormat, 0);
  latePointLabel = this->fields.latePointLabel;
  if ( late > 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
    NumberFormat = LocalizationManager__GetNumberFormat(late, 0);
    goto LABEL_23;
  }
  if ( (late & 0x80000000) == 0 )
  {
    v15 = (System_String_o *)StringLiteral_1/*""*/;
    if ( latePointLabel )
      goto LABEL_24;
LABEL_27:
    sub_2213CDC(NumberFormat, v15);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
  NumberFormat = LocalizationManager__Get((System_String_o *)StringLiteral_15416/*"UNIT_REST_NONE"*/, 0);
LABEL_23:
  v15 = NumberFormat;
  if ( !latePointLabel )
    goto LABEL_27;
LABEL_24:
  UILabel__set_text(latePointLabel, v15, 0);
  ServantStatusFriendshipGauge__DisplayGauge(this, v22, v21, fraction, v20);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusFriendshipGauge__SetActiveContainer(
        ServantStatusFriendshipGauge_o *this,
        bool isOverLimit,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *nomalGaugeContainer; // x0

  nomalGaugeContainer = this->fields.nomalGaugeContainer;
  if ( !nomalGaugeContainer
    || (UnityEngine_GameObject__SetActive(nomalGaugeContainer, !isOverLimit, 0),
        (nomalGaugeContainer = this->fields.overLimitGaugeContainer) == 0) )
  {
    sub_2213CDC(nomalGaugeContainer, isOverLimit);
  }
  UnityEngine_GameObject__SetActive(nomalGaugeContainer, isOverLimit, 0);
}