void __fastcall ServantStatusFriendshipGauge___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4101945 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusFriendshipGauge_TypeInfo, v1);
    byte_4101945 = 1;
  }
  ServantStatusFriendshipGauge_TypeInfo->static_fields->POSITION_Y_DEFAULT = -20.0;
  ServantStatusFriendshipGauge_TypeInfo->static_fields->POSITION_Y_OTHER = -2.0;
}


void __fastcall ServantStatusFriendshipGauge___ctor(ServantStatusFriendshipGauge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UISlider_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x2
  struct UISlider_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4101944 & 1) == 0 )
  {
    sub_B16FFC(&UISlider___TypeInfo, method);
    byte_4101944 = 1;
  }
  v4 = (struct UISlider_array *)sub_B17014(UISlider___TypeInfo, 10LL, v2);
  this->fields.gaugeSliderList = v4;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.gaugeSliderList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = (struct UISlider_array *)sub_B17014(UISlider___TypeInfo, 10LL, v11);
  this->fields.overLimitGaugeSliderList = v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.overLimitGaugeSliderList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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

  if ( (byte_4101942 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&currentRank);
    byte_4101942 = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFriendshipGauge__DisplayNomalGauge(
        ServantStatusFriendshipGauge_o *this,
        int32_t currentRank,
        int32_t maxRank,
        float fraction,
        const MethodInfo *method)
{
  struct UISlider_array *gaugeSliderList; // x8
  __int64 v10; // x23
  int max_length; // w9
  Il2CppClass **v13; // x8
  UnityEngine_Component_o *v14; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  float sy1; // s11
  float x; // s9
  float z; // s10
  UnityEngine_Transform_o *v20; // x0
  float v21; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  gaugeSliderList = this->fields.gaugeSliderList;
  if ( !gaugeSliderList )
LABEL_22:
    sub_B170D4();
  v10 = 0LL;
  while ( 1 )
  {
    max_length = gaugeSliderList->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
    {
      sub_B17100(this, *(_QWORD *)&currentRank, *(_QWORD *)&maxRank);
      sub_B170A0();
    }
    v13 = &gaugeSliderList->obj.klass + v10;
    v14 = (UnityEngine_Component_o *)v13[4];
    if ( !v14 )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13[4], 0LL);
    if ( !gameObject )
      goto LABEL_22;
    if ( (int)v10 >= maxRank )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      if ( (unsigned int)v10 <= 4 )
      {
        transform = UnityEngine_Component__get_transform(v14, 0LL);
        if ( !transform )
          goto LABEL_22;
        localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
        sy1 = this->fields.sy1;
        x = localPosition.fields.x;
        z = localPosition.fields.z;
        if ( maxRank <= 5 )
          sy1 = (float)(sy1 + this->fields.sy2) * 0.5;
        v20 = UnityEngine_Component__get_transform(v14, 0LL);
        if ( !v20 )
          goto LABEL_22;
        v23.fields.x = x;
        v23.fields.y = sy1;
        v23.fields.z = z;
        UnityEngine_Transform__set_localPosition(v20, v23, 0LL);
      }
      if ( currentRank == (_DWORD)v10 )
        v21 = fraction;
      else
        v21 = 0.0;
      if ( (int)v10 < currentRank )
        v21 = 1.0;
      UIProgressBar__set_value((UIProgressBar_o *)v14, v21, 0LL);
    }
    gaugeSliderList = this->fields.gaugeSliderList;
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
  UnityEngine_GameObject_o *gameObject; // x0
  float v16; // s0
  UnityEngine_GameObject_o *v17; // x0
  ServantStatusFriendshipGauge_c *v18; // x8
  UnityEngine_GameObject_o *v19; // x21
  float POSITION_Y_DEFAULT; // s0

  v7 = currentRank;
  v8 = this;
  if ( (byte_4101943 & 1) == 0 )
  {
    this = (ServantStatusFriendshipGauge_o *)sub_B16FFC(&ServantStatusFriendshipGauge_TypeInfo, *(_QWORD *)&currentRank);
    byte_4101943 = 1;
  }
  overLimitGaugeSliderList = v8->fields.overLimitGaugeSliderList;
  if ( !overLimitGaugeSliderList )
LABEL_26:
    sub_B170D4();
  v10 = 0LL;
  v11 = maxRank - 10;
  while ( 1 )
  {
    max_length = overLimitGaugeSliderList->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
    {
      sub_B17100(this, *(_QWORD *)&currentRank, *(_QWORD *)&maxRank);
      sub_B170A0();
    }
    v13 = &overLimitGaugeSliderList->obj.klass + v10;
    v14 = (UIProgressBar_o *)v13[4];
    if ( v14 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13[4], 0LL);
      if ( gameObject )
      {
        if ( (int)v10 >= v11 )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        }
        else
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          if ( v7 < 11 )
            v16 = fraction;
          else
            v16 = 1.0;
          UIProgressBar__set_value(v14, v16, 0LL);
          if ( (unsigned int)v10 <= 4 )
          {
            v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
            v18 = ServantStatusFriendshipGauge_TypeInfo;
            v19 = v17;
            if ( v11 <= 5 )
            {
              if ( (WORD1(ServantStatusFriendshipGauge_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !ServantStatusFriendshipGauge_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusFriendshipGauge_TypeInfo);
                v18 = ServantStatusFriendshipGauge_TypeInfo;
              }
              POSITION_Y_DEFAULT = v18->static_fields->POSITION_Y_DEFAULT;
            }
            else
            {
              if ( (WORD1(ServantStatusFriendshipGauge_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !ServantStatusFriendshipGauge_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantStatusFriendshipGauge_TypeInfo);
                v18 = ServantStatusFriendshipGauge_TypeInfo;
              }
              POSITION_Y_DEFAULT = v18->static_fields->POSITION_Y_OTHER;
            }
            GameObjectExtensions__SetLocalPositionY(v19, POSITION_Y_DEFAULT, 0LL);
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
  __int64 v2; // x2
  ServantStatusFriendshipGauge_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct UISlider_array *gaugeSliderList; // x8
  __int64 v7; // x9
  int v8; // w10
  struct UISlider_array *overLimitGaugeSliderList; // x10
  int max_length; // w10
  int v11; // w11
  UnityEngine_Component_o *v12; // x0
  UnityEngine_Transform_o *transform; // x0
  float v14; // s1
  struct UISlider_array *v15; // x8
  int v16; // w9
  UnityEngine_Component_o *v17; // x0
  UnityEngine_Transform_o *v18; // x0
  BalanceConfig_c *v19; // x0
  UISprite_o *overLimitGaugeSprite; // x19

  v3 = this;
  if ( (byte_4101940 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&BalanceConfig_TypeInfo, v4);
    this = (ServantStatusFriendshipGauge_o *)sub_B16FFC(&StringLiteral_19376, v5);
    byte_4101940 = 1;
  }
  gaugeSliderList = v3->fields.gaugeSliderList;
  if ( !gaugeSliderList )
    goto LABEL_26;
  v7 = *(_QWORD *)&gaugeSliderList->max_length;
  v8 = -1;
  do
    ++v8;
  while ( v8 < (int)v7 );
  overLimitGaugeSliderList = v3->fields.overLimitGaugeSliderList;
  if ( !overLimitGaugeSliderList )
    goto LABEL_26;
  max_length = overLimitGaugeSliderList->max_length;
  v11 = -1;
  do
    ++v11;
  while ( v11 < max_length );
  if ( !(_DWORD)v7 )
  {
LABEL_27:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  v12 = (UnityEngine_Component_o *)gaugeSliderList->m_Items[0];
  if ( !v12 )
    goto LABEL_26;
  transform = UnityEngine_Component__get_transform(v12, 0LL);
  if ( !transform )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)(&v14 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v15 = v3->fields.gaugeSliderList;
  v3->fields.sy1 = v14;
  if ( !v15 )
    goto LABEL_26;
  v16 = v15->max_length;
  if ( v16 >= 5 )
  {
    if ( v16 != 5 )
    {
      v17 = (UnityEngine_Component_o *)v15->m_Items[5];
      if ( v17 )
      {
        v18 = UnityEngine_Component__get_transform(v17, 0LL);
        if ( v18 )
        {
          *(UnityEngine_Vector3_o *)(&v14 - 1) = UnityEngine_Transform__get_localPosition(v18, 0LL);
          goto LABEL_18;
        }
      }
LABEL_26:
      sub_B170D4();
    }
    goto LABEL_27;
  }
LABEL_18:
  v3->fields.sy2 = v14;
  v19 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  if ( v19->static_fields->DisableFriendshipExceed <= 0 )
  {
    overLimitGaugeSprite = v3->fields.overLimitGaugeSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBondAtlasImage(overLimitGaugeSprite, (System_String_o *)StringLiteral_19376, 0LL);
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
  System_String_o *v17; // x0
  UILabel_o *maxLevelLabel; // x21
  System_String_o *v19; // x0
  UILabel_o *latePointLabel; // x21
  System_String_o *NumberFormat; // x0
  System_String_o *v22; // x1
  const MethodInfo *v23; // x3
  int32_t v24; // [xsp+8h] [xbp-38h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  v24 = maxRank;
  v25 = currentRank;
  if ( (byte_4101941 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&currentRank);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_14656, v12);
    sub_B16FFC(&StringLiteral_1, v13);
    byte_4101941 = 1;
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
  v17 = System_Int32__ToString((int32_t)&v25, 0LL);
  if ( !levelLabel )
    goto LABEL_24;
  UIExtrusionLabel__set_text(levelLabel, v17, 0LL);
  maxLevelLabel = this->fields.maxLevelLabel;
  v19 = System_Int32__ToString((int32_t)&v24, 0LL);
  if ( !maxLevelLabel )
    goto LABEL_24;
  UILabel__set_text(maxLevelLabel, v19, 0LL);
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
    v22 = (System_String_o *)StringLiteral_1;
    if ( latePointLabel )
      goto LABEL_21;
LABEL_24:
    sub_B170D4();
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__Get((System_String_o *)StringLiteral_14656, 0LL);
LABEL_20:
  v22 = NumberFormat;
  if ( !latePointLabel )
    goto LABEL_24;
LABEL_21:
  UILabel__set_text(latePointLabel, v22, 0LL);
  ServantStatusFriendshipGauge__DisplayGauge(this, v25, v24, fraction, v23);
}


void __fastcall ServantStatusFriendshipGauge__SetActiveContainer(
        ServantStatusFriendshipGauge_o *this,
        bool isOverLimit,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *nomalGaugeContainer; // x0
  UnityEngine_GameObject_o *overLimitGaugeContainer; // x0

  nomalGaugeContainer = this->fields.nomalGaugeContainer;
  if ( !nomalGaugeContainer
    || (UnityEngine_GameObject__SetActive(nomalGaugeContainer, !isOverLimit, 0LL),
        (overLimitGaugeContainer = this->fields.overLimitGaugeContainer) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(overLimitGaugeContainer, isOverLimit, 0LL);
}