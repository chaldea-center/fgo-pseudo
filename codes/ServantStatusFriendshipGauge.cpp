void __fastcall ServantStatusFriendshipGauge___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED328 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusFriendshipGauge_TypeInfo, v1, v2, v3);
    byte_42ED328 = 1;
  }
  ServantStatusFriendshipGauge_TypeInfo->static_fields->POSITION_Y_DEFAULT = -20.0;
  ServantStatusFriendshipGauge_TypeInfo->static_fields->POSITION_Y_OTHER = -2.0;
}


void __fastcall ServantStatusFriendshipGauge___ctor(ServantStatusFriendshipGauge_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UISlider_array *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UISlider_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42ED327 & 1) == 0 )
  {
    sub_B5D5C4(&UISlider___TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED327 = 1;
  }
  v5 = (struct UISlider_array *)sub_B5D5DC(UISlider___TypeInfo, 10LL);
  this->fields.gaugeSliderList = v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.gaugeSliderList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (struct UISlider_array *)sub_B5D5DC(UISlider___TypeInfo, 10LL);
  this->fields.overLimitGaugeSliderList = v12;
  sub_B5D560(
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

  if ( (byte_42ED325 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, currentRank, maxRank, method);
    byte_42ED325 = 1;
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
    sub_B5D69C(this, *(_QWORD *)&currentRank);
  v8 = this;
  v10 = 0LL;
  while ( 1 )
  {
    max_length = gaugeSliderList->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
    {
      v19 = sub_B5D6C8(this);
      sub_B5D668(v19, 0LL);
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
  if ( (byte_42ED326 & 1) == 0 )
  {
    this = (ServantStatusFriendshipGauge_o *)sub_B5D5C4(
                                               &ServantStatusFriendshipGauge_TypeInfo,
                                               currentRank,
                                               maxRank,
                                               method);
    byte_42ED326 = 1;
  }
  overLimitGaugeSliderList = v8->fields.overLimitGaugeSliderList;
  if ( !overLimitGaugeSliderList )
LABEL_26:
    sub_B5D69C(this, *(_QWORD *)&currentRank);
  v10 = 0LL;
  v11 = maxRank - 10;
  while ( 1 )
  {
    max_length = overLimitGaugeSliderList->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
    {
      v20 = sub_B5D6C8(this);
      sub_B5D668(v20, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  ServantStatusFriendshipGauge_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UISlider_array *gaugeSliderList; // x8
  __int64 v12; // x9
  int v13; // w10
  struct UISlider_array *overLimitGaugeSliderList; // x10
  int max_length; // w10
  int v16; // w11
  float v17; // s1
  struct UISlider_array *v18; // x8
  int v19; // w9
  BalanceConfig_c *v20; // x0
  UISprite_o *overLimitGaugeSprite; // x19
  __int64 v22; // x0

  v4 = this;
  if ( (byte_42ED323 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v5, v6, v7);
    this = (ServantStatusFriendshipGauge_o *)sub_B5D5C4(&StringLiteral_19695/*"img_bondsgage_11"*/, v8, v9, v10);
    byte_42ED323 = 1;
  }
  gaugeSliderList = v4->fields.gaugeSliderList;
  if ( !gaugeSliderList )
    goto LABEL_26;
  v12 = *(_QWORD *)&gaugeSliderList->max_length;
  v13 = -1;
  do
    ++v13;
  while ( v13 < (int)v12 );
  overLimitGaugeSliderList = v4->fields.overLimitGaugeSliderList;
  if ( !overLimitGaugeSliderList )
    goto LABEL_26;
  max_length = overLimitGaugeSliderList->max_length;
  v16 = -1;
  do
    ++v16;
  while ( v16 < max_length );
  if ( !(_DWORD)v12 )
  {
LABEL_27:
    v22 = sub_B5D6C8(this);
    sub_B5D668(v22, 0LL);
  }
  this = (ServantStatusFriendshipGauge_o *)gaugeSliderList->m_Items[0];
  if ( !this )
    goto LABEL_26;
  this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_26;
  *(UnityEngine_Vector3_o *)(&v17 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v18 = v4->fields.gaugeSliderList;
  v4->fields.sy1 = v17;
  if ( !v18 )
    goto LABEL_26;
  v19 = v18->max_length;
  if ( v19 >= 5 )
  {
    if ( v19 != 5 )
    {
      this = (ServantStatusFriendshipGauge_o *)v18->m_Items[5];
      if ( this )
      {
        this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
        if ( this )
        {
          *(UnityEngine_Vector3_o *)(&v17 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)this,
                                                   0LL);
          goto LABEL_18;
        }
      }
LABEL_26:
      sub_B5D69C(this, method);
    }
    goto LABEL_27;
  }
LABEL_18:
  v4->fields.sy2 = v17;
  v20 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  if ( v20->static_fields->DisableFriendshipExceed <= 0 )
  {
    overLimitGaugeSprite = v4->fields.overLimitGaugeSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBondAtlasImage(overLimitGaugeSprite, (System_String_o *)StringLiteral_19695/*"img_bondsgage_11"*/, 0LL);
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
  int v7; // w20
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  BalanceConfig_c *v20; // x0
  _BOOL4 v21; // w8
  UIExtrusionLabel_o *levelLabel; // x21
  System_String_o *NumberFormat; // x0
  System_String_o *v24; // x1
  UILabel_o *maxLevelLabel; // x21
  UILabel_o *latePointLabel; // x21
  const MethodInfo *v27; // x3
  int32_t v28; // [xsp+8h] [xbp-38h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF

  v7 = late;
  v28 = maxRank;
  v29 = currentRank;
  if ( (byte_42ED324 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, currentRank, maxRank, *(_QWORD *)&late);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_14873/*"UNIT_REST_NONE"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1/*""*/, v17, v18, v19);
    byte_42ED324 = 1;
  }
  if ( this->fields.isInit )
  {
    this->fields.isInit = 0;
    ServantStatusFriendshipGauge__Initialize(this, *(const MethodInfo **)&currentRank);
  }
  v20 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  if ( v20->static_fields->DisableFriendshipExceed <= 0 )
  {
    v21 = v7 == -1 || maxRank != currentRank;
    if ( !v21 )
      fraction = 0.0;
    if ( !v21 )
      v7 = 0;
  }
  levelLabel = this->fields.levelLabel;
  NumberFormat = System_Int32__ToString((int32_t)&v29, 0LL);
  if ( !levelLabel )
    goto LABEL_24;
  UIExtrusionLabel__set_text(levelLabel, NumberFormat, 0LL);
  maxLevelLabel = this->fields.maxLevelLabel;
  NumberFormat = System_Int32__ToString((int32_t)&v28, 0LL);
  if ( !maxLevelLabel )
    goto LABEL_24;
  UILabel__set_text(maxLevelLabel, NumberFormat, 0LL);
  latePointLabel = this->fields.latePointLabel;
  if ( v7 > 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    NumberFormat = LocalizationManager__GetNumberFormat(v7, 0LL);
    goto LABEL_20;
  }
  if ( (v7 & 0x80000000) == 0 )
  {
    v24 = (System_String_o *)StringLiteral_1/*""*/;
    if ( latePointLabel )
      goto LABEL_21;
LABEL_24:
    sub_B5D69C(NumberFormat, v24);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormat = LocalizationManager__Get((System_String_o *)StringLiteral_14873/*"UNIT_REST_NONE"*/, 0LL);
LABEL_20:
  v24 = NumberFormat;
  if ( !latePointLabel )
    goto LABEL_24;
LABEL_21:
  UILabel__set_text(latePointLabel, v24, 0LL);
  ServantStatusFriendshipGauge__DisplayGauge(this, v29, v28, fraction, v27);
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
    sub_B5D69C(nomalGaugeContainer, isOverLimit);
  }
  UnityEngine_GameObject__SetActive(nomalGaugeContainer, isOverLimit, 0LL);
}