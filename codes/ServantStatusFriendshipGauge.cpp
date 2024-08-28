void __fastcall ServantStatusFriendshipGauge___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A1BFD3 & 1) == 0 )
  {
    sub_1B715CC(&ServantStatusFriendshipGauge_TypeInfo, v1);
    byte_4A1BFD3 = 1;
  }
  *ServantStatusFriendshipGauge_TypeInfo->static_fields = (struct ServantStatusFriendshipGauge_StaticFields)0xC0000000C1A00000LL;
}


void __fastcall ServantStatusFriendshipGauge___ctor(ServantStatusFriendshipGauge_o *this, const MethodInfo *method)
{
  struct UISlider_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  struct UISlider_array *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A1BFD2 & 1) == 0 )
  {
    sub_1B715CC(&UISlider___TypeInfo, method);
    byte_4A1BFD2 = 1;
  }
  v3 = (struct UISlider_array *)sub_1B71674(UISlider___TypeInfo, 10LL);
  this->fields.gaugeSliderList = v3;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.gaugeSliderList, (int32_t)v3, v4, v5);
  v6 = (struct UISlider_array *)sub_1B71674(UISlider___TypeInfo, 10LL);
  this->fields.overLimitGaugeSliderList = v6;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.overLimitGaugeSliderList, (int32_t)v6, v7, v8);
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

  if ( (byte_4A1BFD0 & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, *(_QWORD *)&currentRank);
    byte_4A1BFD0 = 1;
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
    sub_1B71828(this, *(_QWORD *)&currentRank);
  v8 = this;
  v10 = 0LL;
  while ( 1 )
  {
    max_length = gaugeSliderList->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
      sub_1B71830(this, *(_QWORD *)&currentRank);
    v13 = &gaugeSliderList->obj.klass + v10;
    v14 = (UnityEngine_Component_o *)v13[4];
    if ( !v14
      || (this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v13[4],
                                                     0LL)) == 0LL )
    {
LABEL_24:
      sub_1B71828(this, *(_QWORD *)&currentRank);
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
  if ( (byte_4A1BFD1 & 1) == 0 )
  {
    this = (ServantStatusFriendshipGauge_o *)sub_1B715CC(
                                               &ServantStatusFriendshipGauge_TypeInfo,
                                               *(_QWORD *)&currentRank);
    byte_4A1BFD1 = 1;
  }
  overLimitGaugeSliderList = v8->fields.overLimitGaugeSliderList;
  if ( !overLimitGaugeSliderList )
LABEL_22:
    sub_1B71828(this, *(_QWORD *)&currentRank);
  v10 = 0LL;
  v11 = maxRank - 10;
  while ( 1 )
  {
    max_length = overLimitGaugeSliderList->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
      sub_1B71830(this, *(_QWORD *)&currentRank);
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

  v2 = this;
  if ( (byte_4A1BFCE & 1) == 0 )
  {
    sub_1B715CC(&AtlasManager_TypeInfo, method);
    sub_1B715CC(&BalanceConfig_TypeInfo, v3);
    this = (ServantStatusFriendshipGauge_o *)sub_1B715CC(&StringLiteral_20219/*"img_bondsgage_11"*/, v4);
    byte_4A1BFCE = 1;
  }
  gaugeSliderList = v2->fields.gaugeSliderList;
  if ( !gaugeSliderList )
    goto LABEL_24;
  v6 = *(_QWORD *)&gaugeSliderList->max_length;
  v7 = -1;
  do
    ++v7;
  while ( v7 < (int)v6 );
  overLimitGaugeSliderList = v2->fields.overLimitGaugeSliderList;
  if ( !overLimitGaugeSliderList )
    goto LABEL_24;
  max_length = overLimitGaugeSliderList->max_length;
  v10 = -1;
  do
    ++v10;
  while ( v10 < max_length );
  if ( !(_DWORD)v6 )
    goto LABEL_25;
  this = (ServantStatusFriendshipGauge_o *)gaugeSliderList->m_Items[0];
  if ( !this
    || (this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v11 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)this,
                                                 0LL),
        v12 = v2->fields.gaugeSliderList,
        v2->fields.sy1 = v11,
        !v12) )
  {
LABEL_24:
    sub_1B71828(this, method);
  }
  v13 = v12->max_length;
  if ( v13 < 5 )
    goto LABEL_18;
  if ( v13 == 5 )
LABEL_25:
    sub_1B71830(this, method);
  this = (ServantStatusFriendshipGauge_o *)v12->m_Items[5];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFriendshipGauge_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)(&v11 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
LABEL_18:
  v2->fields.sy2 = v11;
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  if ( v14->static_fields->DisableFriendshipExceed <= 0 )
  {
    overLimitGaugeSprite = v2->fields.overLimitGaugeSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBondAtlasImage(overLimitGaugeSprite, (System_String_o *)StringLiteral_20219/*"img_bondsgage_11"*/, 0LL);
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
  System_String_o *v18; // x1
  UILabel_o *maxLevelLabel; // x21
  UILabel_o *latePointLabel; // x21
  const MethodInfo *v21; // x3
  int32_t v22; // [xsp+8h] [xbp-38h] BYREF
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  v22 = maxRank;
  v23 = currentRank;
  if ( (byte_4A1BFCF & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, *(_QWORD *)&currentRank);
    sub_1B715CC(&LocalizationManager_TypeInfo, v11);
    sub_1B715CC(&StringLiteral_14752/*"UNIT_REST_NONE"*/, v12);
    sub_1B715CC(&StringLiteral_1/*""*/, v13);
    byte_4A1BFCF = 1;
  }
  if ( this->fields.isInit )
  {
    this->fields.isInit = 0;
    ServantStatusFriendshipGauge__Initialize(this, *(const MethodInfo **)&currentRank);
  }
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
    goto LABEL_22;
  UIExtrusionLabel__set_text(levelLabel, NumberFormat, 0LL);
  maxLevelLabel = this->fields.maxLevelLabel;
  NumberFormat = System_Int32__ToString((int32_t)&v22, 0LL);
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
    v18 = (System_String_o *)StringLiteral_1/*""*/;
    if ( latePointLabel )
      goto LABEL_19;
LABEL_22:
    sub_1B71828(NumberFormat, v18);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  NumberFormat = LocalizationManager__Get((System_String_o *)StringLiteral_14752/*"UNIT_REST_NONE"*/, 0LL);
LABEL_18:
  v18 = NumberFormat;
  if ( !latePointLabel )
    goto LABEL_22;
LABEL_19:
  UILabel__set_text(latePointLabel, v18, 0LL);
  ServantStatusFriendshipGauge__DisplayGauge(this, v23, v22, fraction, v21);
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
    sub_1B71828(nomalGaugeContainer, isOverLimit);
  }
  UnityEngine_GameObject__SetActive(nomalGaugeContainer, isOverLimit, 0LL);
}