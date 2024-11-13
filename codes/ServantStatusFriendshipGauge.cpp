void __fastcall ServantStatusFriendshipGauge___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B12AA4 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusFriendshipGauge_TypeInfo, v1, v2);
    byte_4B12AA4 = 1;
  }
  *ServantStatusFriendshipGauge_TypeInfo->static_fields = (struct ServantStatusFriendshipGauge_StaticFields)0xC0000000C1A00000LL;
}


void __fastcall ServantStatusFriendshipGauge___ctor(ServantStatusFriendshipGauge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UISlider_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct UISlider_array *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B12AA3 & 1) == 0 )
  {
    sub_1BCA7E0(&UISlider___TypeInfo, method, v2);
    byte_4B12AA3 = 1;
  }
  v4 = (struct UISlider_array *)sub_1BCA888(UISlider___TypeInfo, 10LL);
  this->fields.gaugeSliderList = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.gaugeSliderList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (struct UISlider_array *)sub_1BCA888(UISlider___TypeInfo, 10LL);
  this->fields.overLimitGaugeSliderList = v11;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.overLimitGaugeSliderList,
    (int64_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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

  if ( (byte_4B12AA1 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&currentRank, *(_QWORD *)&maxRank);
    byte_4B12AA1 = 1;
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
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&currentRank);
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
    sub_1BCAA3C(this, *(_QWORD *)&currentRank);
  v8 = this;
  v10 = 0LL;
  while ( 1 )
  {
    max_length = gaugeSliderList->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
      sub_1BCAA44(this, *(_QWORD *)&currentRank);
    v13 = &gaugeSliderList->obj.klass + v10;
    v14 = (UnityEngine_Component_o *)v13[4];
    if ( !v14
      || (this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v13[4],
                                                     0LL)) == 0LL )
    {
LABEL_24:
      sub_1BCAA3C(this, *(_QWORD *)&currentRank);
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
  __int64 v17; // x1
  ServantStatusFriendshipGauge_c *v18; // x8
  UnityEngine_GameObject_o *v19; // x21
  struct ServantStatusFriendshipGauge_StaticFields *static_fields; // x8
  float POSITION_Y_DEFAULT; // s0

  v7 = currentRank;
  v8 = this;
  if ( (byte_4B12AA2 & 1) == 0 )
  {
    this = (ServantStatusFriendshipGauge_o *)sub_1BCA7E0(
                                               &ServantStatusFriendshipGauge_TypeInfo,
                                               *(_QWORD *)&currentRank,
                                               *(_QWORD *)&maxRank);
    byte_4B12AA2 = 1;
  }
  overLimitGaugeSliderList = v8->fields.overLimitGaugeSliderList;
  if ( !overLimitGaugeSliderList )
LABEL_22:
    sub_1BCAA3C(this, *(_QWORD *)&currentRank);
  v10 = 0LL;
  v11 = maxRank - 10;
  while ( 1 )
  {
    max_length = overLimitGaugeSliderList->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
      sub_1BCAA44(this, *(_QWORD *)&currentRank);
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
            v18 = ServantStatusFriendshipGauge_TypeInfo;
            v19 = gameObject;
            if ( !ServantStatusFriendshipGauge_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusFriendshipGauge_TypeInfo, v17);
              v18 = ServantStatusFriendshipGauge_TypeInfo;
            }
            static_fields = v18->static_fields;
            if ( v11 <= 5 )
              POSITION_Y_DEFAULT = static_fields->POSITION_Y_DEFAULT;
            else
              POSITION_Y_DEFAULT = static_fields->POSITION_Y_OTHER;
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
    goto LABEL_22;
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UISlider_array *gaugeSliderList; // x8
  __int64 v9; // x9
  int v10; // w10
  struct UISlider_array *overLimitGaugeSliderList; // x10
  int max_length; // w10
  int v13; // w11
  float v14; // s1
  struct UISlider_array *v15; // x8
  int v16; // w9
  BalanceConfig_c *v17; // x0
  UISprite_o *overLimitGaugeSprite; // x19

  v3 = this;
  if ( (byte_4B12A9F & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v4, v5);
    this = (ServantStatusFriendshipGauge_o *)sub_1BCA7E0(&StringLiteral_20486/*"img_bondsgage_11"*/, v6, v7);
    byte_4B12A9F = 1;
  }
  gaugeSliderList = v3->fields.gaugeSliderList;
  if ( !gaugeSliderList )
    goto LABEL_24;
  v9 = *(_QWORD *)&gaugeSliderList->max_length;
  v10 = -1;
  do
    ++v10;
  while ( v10 < (int)v9 );
  overLimitGaugeSliderList = v3->fields.overLimitGaugeSliderList;
  if ( !overLimitGaugeSliderList )
    goto LABEL_24;
  max_length = overLimitGaugeSliderList->max_length;
  v13 = -1;
  do
    ++v13;
  while ( v13 < max_length );
  if ( !(_DWORD)v9 )
    goto LABEL_25;
  this = (ServantStatusFriendshipGauge_o *)gaugeSliderList->m_Items[0];
  if ( !this
    || (this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v14 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL),
        v15 = v3->fields.gaugeSliderList,
        v3->fields.sy1 = v14,
        !v15) )
  {
LABEL_24:
    sub_1BCAA3C(this, method);
  }
  v16 = v15->max_length;
  if ( v16 < 5 )
    goto LABEL_18;
  if ( v16 == 5 )
LABEL_25:
    sub_1BCAA44(this, method);
  this = (ServantStatusFriendshipGauge_o *)v15->m_Items[5];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)(&v14 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
LABEL_18:
  v3->fields.sy2 = v14;
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v17 = BalanceConfig_TypeInfo;
  }
  if ( v17->static_fields->DisableFriendshipExceed <= 0 )
  {
    overLimitGaugeSprite = v3->fields.overLimitGaugeSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
    AtlasManager__SetBondAtlasImage(overLimitGaugeSprite, (System_String_o *)StringLiteral_20486/*"img_bondsgage_11"*/, 0LL);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  BalanceConfig_c *v17; // x0
  _BOOL4 v18; // w8
  UIExtrusionLabel_o *levelLabel; // x21
  System_String_o *NumberFormat; // x0
  System_String_o *v21; // x1
  UILabel_o *maxLevelLabel; // x21
  __int64 v23; // x1
  UILabel_o *latePointLabel; // x21
  const MethodInfo *v25; // x3
  int32_t v26; // [xsp+8h] [xbp-38h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-34h] BYREF

  v26 = maxRank;
  v27 = currentRank;
  if ( (byte_4B12AA0 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&currentRank, *(_QWORD *)&maxRank);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_14966/*"UNIT_REST_NONE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B12AA0 = 1;
  }
  if ( this->fields.isInit )
  {
    this->fields.isInit = 0;
    ServantStatusFriendshipGauge__Initialize(this, *(const MethodInfo **)&currentRank);
  }
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&currentRank);
    v17 = BalanceConfig_TypeInfo;
  }
  if ( v17->static_fields->DisableFriendshipExceed <= 0 )
  {
    v18 = late == -1 || maxRank != currentRank;
    if ( !v18 )
      fraction = 0.0;
    if ( !v18 )
      late = 0;
  }
  levelLabel = this->fields.levelLabel;
  NumberFormat = System_Int32__ToString((int32_t)&v27, 0LL);
  if ( !levelLabel )
    goto LABEL_22;
  UIExtrusionLabel__set_text(levelLabel, NumberFormat, 0LL);
  maxLevelLabel = this->fields.maxLevelLabel;
  NumberFormat = System_Int32__ToString((int32_t)&v26, 0LL);
  if ( !maxLevelLabel )
    goto LABEL_22;
  UILabel__set_text(maxLevelLabel, NumberFormat, 0LL);
  latePointLabel = this->fields.latePointLabel;
  if ( late > 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
    NumberFormat = LocalizationManager__GetNumberFormat(late, 0LL);
    goto LABEL_18;
  }
  if ( (late & 0x80000000) == 0 )
  {
    v21 = (System_String_o *)StringLiteral_1/*""*/;
    if ( latePointLabel )
      goto LABEL_19;
LABEL_22:
    sub_1BCAA3C(NumberFormat, v21);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
  NumberFormat = LocalizationManager__Get((System_String_o *)StringLiteral_14966/*"UNIT_REST_NONE"*/, 0LL);
LABEL_18:
  v21 = NumberFormat;
  if ( !latePointLabel )
    goto LABEL_22;
LABEL_19:
  UILabel__set_text(latePointLabel, v21, 0LL);
  ServantStatusFriendshipGauge__DisplayGauge(this, v27, v26, fraction, v25);
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
    sub_1BCAA3C(nomalGaugeContainer, isOverLimit);
  }
  UnityEngine_GameObject__SetActive(nomalGaugeContainer, isOverLimit, 0LL);
}