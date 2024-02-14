void __fastcall ServantStatusFriendshipGauge___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4219D32 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusFriendshipGauge_TypeInfo, v1);
    byte_4219D32 = 1;
  }
  ServantStatusFriendshipGauge_TypeInfo->static_fields->POSITION_Y_DEFAULT = -20.0;
  ServantStatusFriendshipGauge_TypeInfo->static_fields->POSITION_Y_OTHER = -2.0;
}


void __fastcall ServantStatusFriendshipGauge___ctor(ServantStatusFriendshipGauge_o *this, const MethodInfo *method)
{
  struct UISlider_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct UISlider_array *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4219D31 & 1) == 0 )
  {
    sub_B0D8A4(&UISlider___TypeInfo, method);
    byte_4219D31 = 1;
  }
  v3 = (struct UISlider_array *)sub_B0D8BC(UISlider___TypeInfo, 10LL);
  this->fields.gaugeSliderList = v3;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.gaugeSliderList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (struct UISlider_array *)sub_B0D8BC(UISlider___TypeInfo, 10LL);
  this->fields.overLimitGaugeSliderList = v10;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.overLimitGaugeSliderList,
    (System_Int32_array **)v10,
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

  if ( (byte_4219D2F & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&currentRank);
    byte_4219D2F = 1;
  }
  if ( maxRank <= 10 )
  {
    ServantStatusFriendshipGauge__SetActiveContainer(this, 0, *(const MethodInfo **)&maxRank);
LABEL_9:
    ServantStatusFriendshipGauge__DisplayNomalGauge(this, currentRank, maxRank, fraction, v9);
    return;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  DisableFriendshipExceed = v10->static_fields->DisableFriendshipExceed;
  ServantStatusFriendshipGauge__SetActiveContainer(this, DisableFriendshipExceed < 1, *(const MethodInfo **)&maxRank);
  if ( DisableFriendshipExceed > 0 )
    goto LABEL_9;
  ServantStatusFriendshipGauge__DisplayOverLimitGauge(this, currentRank, maxRank, fraction, v9);
}


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
  float sy1; // s11
  float x; // s9
  float z; // s10
  float v18; // s0
  __int64 v19; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  gaugeSliderList = this->fields.gaugeSliderList;
  if ( !gaugeSliderList )
LABEL_22:
    sub_B0D97C(this);
  v8 = this;
  v10 = 0LL;
  while ( 1 )
  {
    max_length = gaugeSliderList->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
    {
      v19 = sub_B0D9A8(this);
      sub_B0D948(v19, 0LL);
    }
    v13 = &gaugeSliderList->obj.klass + v10;
    v14 = (UnityEngine_Component_o *)v13[4];
    if ( !v14 )
      goto LABEL_22;
    this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v13[4],
                                               0LL);
    if ( !this )
      goto LABEL_22;
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
          goto LABEL_22;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        sy1 = v8->fields.sy1;
        x = localPosition.fields.x;
        z = localPosition.fields.z;
        if ( maxRank <= 5 )
          sy1 = (float)(sy1 + v8->fields.sy2) * 0.5;
        this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_transform(v14, 0LL);
        if ( !this )
          goto LABEL_22;
        v21.fields.x = x;
        v21.fields.y = sy1;
        v21.fields.z = z;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v21, 0LL);
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
  int v11; // w23
  int max_length; // w9
  Il2CppClass **v13; // x8
  UIProgressBar_o *v14; // x21
  float v15; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  ServantStatusFriendshipGauge_c *v17; // x8
  UnityEngine_GameObject_o *v18; // x21
  float POSITION_Y_DEFAULT; // s0
  __int64 v20; // x0

  v7 = currentRank;
  v8 = this;
  if ( (byte_4219D30 & 1) == 0 )
  {
    this = (ServantStatusFriendshipGauge_o *)sub_B0D8A4(&ServantStatusFriendshipGauge_TypeInfo, *(_QWORD *)&currentRank);
    byte_4219D30 = 1;
  }
  overLimitGaugeSliderList = v8->fields.overLimitGaugeSliderList;
  if ( !overLimitGaugeSliderList )
LABEL_26:
    sub_B0D97C(this);
  v10 = 0LL;
  v11 = maxRank - 10;
  while ( 1 )
  {
    max_length = overLimitGaugeSliderList->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
    {
      v20 = sub_B0D9A8(this);
      sub_B0D948(v20, 0LL);
    }
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
          if ( v7 < 11 )
            v15 = fraction;
          else
            v15 = 1.0;
          UIProgressBar__set_value(v14, v15, 0LL);
          if ( (unsigned int)v10 <= 4 )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
            v17 = ServantStatusFriendshipGauge_TypeInfo;
            v18 = gameObject;
            if ( v11 <= 5 )
            {
              if ( (WORD1(ServantStatusFriendshipGauge_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !ServantStatusFriendshipGauge_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusFriendshipGauge_TypeInfo);
                v17 = ServantStatusFriendshipGauge_TypeInfo;
              }
              POSITION_Y_DEFAULT = v17->static_fields->POSITION_Y_DEFAULT;
            }
            else
            {
              if ( (WORD1(ServantStatusFriendshipGauge_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !ServantStatusFriendshipGauge_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusFriendshipGauge_TypeInfo);
                v17 = ServantStatusFriendshipGauge_TypeInfo;
              }
              POSITION_Y_DEFAULT = v17->static_fields->POSITION_Y_OTHER;
            }
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
    goto LABEL_26;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFriendshipGauge__Initialize(
        ServantStatusFriendshipGauge_o *this,
        const MethodInfo *method)
{
  ServantStatusFriendshipGauge_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct UISlider_array *gaugeSliderList; // x8
  __int64 v6; // x9
  int v7; // w10
  struct UISlider_array *overLimitGaugeSliderList; // x10
  int max_length; // w10
  int v10; // w11
  float v11; // s1
  struct UISlider_array *v12; // x8
  int v13; // w9
  BalanceConfig_c *v14; // x0
  UISprite_o *overLimitGaugeSprite; // x19
  __int64 v16; // x0

  v2 = this;
  if ( (byte_4219D2D & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v3);
    this = (ServantStatusFriendshipGauge_o *)sub_B0D8A4(&StringLiteral_19512/*"img_bondsgage_11"*/, v4);
    byte_4219D2D = 1;
  }
  gaugeSliderList = v2->fields.gaugeSliderList;
  if ( !gaugeSliderList )
    goto LABEL_26;
  v6 = *(_QWORD *)&gaugeSliderList->max_length;
  v7 = -1;
  do
    ++v7;
  while ( v7 < (int)v6 );
  overLimitGaugeSliderList = v2->fields.overLimitGaugeSliderList;
  if ( !overLimitGaugeSliderList )
    goto LABEL_26;
  max_length = overLimitGaugeSliderList->max_length;
  v10 = -1;
  do
    ++v10;
  while ( v10 < max_length );
  if ( !(_DWORD)v6 )
  {
LABEL_27:
    v16 = sub_B0D9A8(this);
    sub_B0D948(v16, 0LL);
  }
  this = (ServantStatusFriendshipGauge_o *)gaugeSliderList->m_Items[0];
  if ( !this )
    goto LABEL_26;
  this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)(&v11 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v12 = v2->fields.gaugeSliderList;
  v2->fields.sy1 = v11;
  if ( !v12 )
    goto LABEL_26;
  v13 = v12->max_length;
  if ( v13 >= 5 )
  {
    if ( v13 != 5 )
    {
      this = (ServantStatusFriendshipGauge_o *)v12->m_Items[5];
      if ( this )
      {
        this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( this )
        {
          *(UnityEngine_Vector3_o *)(&v11 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)this,
                                                   0LL);
          goto LABEL_18;
        }
      }
LABEL_26:
      sub_B0D97C(this);
    }
    goto LABEL_27;
  }
LABEL_18:
  v2->fields.sy2 = v11;
  v14 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  if ( v14->static_fields->DisableFriendshipExceed <= 0 )
  {
    overLimitGaugeSprite = v2->fields.overLimitGaugeSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBondAtlasImage(overLimitGaugeSprite, (System_String_o *)StringLiteral_19512/*"img_bondsgage_11"*/, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BalanceConfig_c *v14; // x0
  _BOOL4 v15; // w8
  UIExtrusionLabel_o *levelLabel; // x21
  System_String_o *NumberFormat; // x0
  UILabel_o *maxLevelLabel; // x21
  UILabel_o *latePointLabel; // x21
  System_String_o *v20; // x1
  const MethodInfo *v21; // x3
  int32_t v22; // [xsp+8h] [xbp-38h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  v22 = maxRank;
  v23 = currentRank;
  if ( (byte_4219D2E & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&currentRank);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_14761/*"UNIT_REST_NONE"*/, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_4219D2E = 1;
  }
  if ( this->fields.isInit )
  {
    this->fields.isInit = 0;
    ServantStatusFriendshipGauge__Initialize(this, *(const MethodInfo **)&currentRank);
  }
  v14 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  if ( v14->static_fields->DisableFriendshipExceed <= 0 )
  {
    v15 = late == -1 || maxRank != currentRank;
    if ( !v15 )
      fraction = 0.0;
    if ( !v15 )
      late = 0;
  }
  levelLabel = this->fields.levelLabel;
  NumberFormat = System_Int32__ToString((int32_t)&v23, 0LL);
  if ( !levelLabel )
    goto LABEL_24;
  UIExtrusionLabel__set_text(levelLabel, NumberFormat, 0LL);
  maxLevelLabel = this->fields.maxLevelLabel;
  NumberFormat = System_Int32__ToString((int32_t)&v22, 0LL);
  if ( !maxLevelLabel )
    goto LABEL_24;
  UILabel__set_text(maxLevelLabel, NumberFormat, 0LL);
  latePointLabel = this->fields.latePointLabel;
  if ( late > 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    NumberFormat = LocalizationManager__GetNumberFormat(late, 0LL);
    goto LABEL_20;
  }
  if ( (late & 0x80000000) == 0 )
  {
    v20 = (System_String_o *)StringLiteral_1/*""*/;
    if ( latePointLabel )
      goto LABEL_21;
LABEL_24:
    sub_B0D97C(NumberFormat);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__Get((System_String_o *)StringLiteral_14761/*"UNIT_REST_NONE"*/, 0LL);
LABEL_20:
  v20 = NumberFormat;
  if ( !latePointLabel )
    goto LABEL_24;
LABEL_21:
  UILabel__set_text(latePointLabel, v20, 0LL);
  ServantStatusFriendshipGauge__DisplayGauge(this, v23, v22, fraction, v21);
}


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
    sub_B0D97C(nomalGaugeContainer);
  }
  UnityEngine_GameObject__SetActive(nomalGaugeContainer, isOverLimit, 0LL);
}