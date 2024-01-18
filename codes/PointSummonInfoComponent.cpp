void __fastcall PointSummonInfoComponent___ctor(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.gachaTime = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PointSummonInfoComponent__OnClickGacha(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  GachaRqParamData_o *v4; // x21
  GachaRqParamData_o **p_requestData; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  struct GachaEntity_o *pointGachaData; // x8
  struct GachaRqParamData_o *requestData; // x9
  struct GachaEntity_o *v16; // x8
  struct GachaRqParamData_o *v17; // x9
  PointSummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x0

  if ( (byte_4186B5A & 1) == 0 )
  {
    sub_B2C35C(&GachaRqParamData_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4186B5A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v4 = (GachaRqParamData_o *)sub_B2C42C(GachaRqParamData_TypeInfo);
  GachaRqParamData___ctor(v4, 0LL);
  this->fields.requestData = v4;
  p_requestData = &this->fields.requestData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.requestData,
    (System_Int32_array **)v4,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( !this->fields.requestData )
    goto LABEL_16;
  this->fields.requestData->fields.gachaType = 3;
  pointGachaData = this->fields.pointGachaData;
  if ( !pointGachaData
    || (requestData = this->fields.requestData) == 0LL
    || (requestData->fields.gachaId = pointGachaData->fields.id, (v16 = this->fields.pointGachaData) == 0LL)
    || (v17 = this->fields.requestData) == 0LL
    || (v17->fields.warId = v16->fields.warId, !*p_requestData)
    || ((*p_requestData)->fields.gachaTime = 1, !*p_requestData) )
  {
LABEL_16:
    sub_B2C434(v12, v13);
  }
  (*p_requestData)->fields.gachaResourceNum = this->fields.price;
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    PointSummonInfoComponent_ClickDelegate__Invoke(clickCallbackFunc, *p_requestData, 0LL);
}


void __fastcall PointSummonInfoComponent__OnClickMutiGacha(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  GachaRqParamData_o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x1
  struct GachaEntity_o *pointGachaData; // x8
  struct GachaRqParamData_o *requestData; // x9
  struct GachaEntity_o *v15; // x8
  struct GachaRqParamData_o *v16; // x9
  struct GachaRqParamData_o *v17; // x8
  struct GachaRqParamData_o *v18; // x8
  PointSummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x0

  if ( (byte_4186B5B & 1) == 0 )
  {
    sub_B2C35C(&GachaRqParamData_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4186B5B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v4 = (GachaRqParamData_o *)sub_B2C42C(GachaRqParamData_TypeInfo);
  GachaRqParamData___ctor(v4, 0LL);
  this->fields.requestData = v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.requestData,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( !this->fields.requestData )
    goto LABEL_16;
  this->fields.requestData->fields.gachaType = 3;
  pointGachaData = this->fields.pointGachaData;
  if ( !pointGachaData )
    goto LABEL_16;
  requestData = this->fields.requestData;
  if ( !requestData
    || (requestData->fields.gachaId = pointGachaData->fields.id, (v15 = this->fields.pointGachaData) == 0LL)
    || (v16 = this->fields.requestData) == 0LL
    || (v16->fields.warId = v15->fields.warId, (v17 = this->fields.requestData) == 0LL)
    || (v17->fields.gachaTime = this->fields.gachaTime, (v18 = this->fields.requestData) == 0LL) )
  {
LABEL_16:
    sub_B2C434(v11, v12);
  }
  v18->fields.gachaResourceNum = this->fields.price * this->fields.gachaTime;
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    PointSummonInfoComponent_ClickDelegate__Invoke(clickCallbackFunc, this->fields.requestData, 0LL);
}


bool __fastcall PointSummonInfoComponent__getIsFree(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.isFree;
}


GachaRqParamData_o *__fastcall PointSummonInfoComponent__getRequetParam(
        PointSummonInfoComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.requestData;
}


void __fastcall PointSummonInfoComponent__init(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *singleGachaBtnInfo; // x0

  singleGachaBtnInfo = this->fields.singleGachaBtnInfo;
  if ( !singleGachaBtnInfo
    || (UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 0, 0LL),
        (singleGachaBtnInfo = this->fields.multiGachaBtnInfo) == 0LL) )
  {
    sub_B2C434(singleGachaBtnInfo, method);
  }
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 0, 0LL);
  this->fields.isFree = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PointSummonInfoComponent__setDispPointBtn(
        PointSummonInfoComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *freeGachaBtn; // x0
  bool v5; // w21
  float v7; // s0
  float v8; // s1
  float v9; // s2
  float v10; // s3
  float v11; // s8
  float v12; // s9
  float v13; // s10
  float v14; // s11
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.freeGachaBtn;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v5 = isDisp;
  UnityEngine_Behaviour__set_enabled(freeGachaBtn, isDisp, 0LL);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.singleBtn;
  if ( !freeGachaBtn )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(freeGachaBtn, v5, 0LL);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiBtn;
  if ( !freeGachaBtn )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(freeGachaBtn, isDisp, 0LL);
  *(UnityEngine_Color_o *)&v7 = isDisp ? UnityEngine_Color__get_white(0LL) : UnityEngine_Color__get_gray(0LL);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.freeGachaBtnImg;
  v11 = v7;
  v12 = v8;
  v13 = v9;
  v14 = v10;
  if ( !freeGachaBtn )
    goto LABEL_17;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, *(UnityEngine_Color_o *)&v7, 0LL);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.singleBtnImg;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v15.fields.r = v11;
  v15.fields.g = v12;
  v15.fields.b = v13;
  v15.fields.a = v14;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v15, 0LL);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiBtnImg;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v16.fields.r = v11;
  v16.fields.g = v12;
  v16.fields.b = v13;
  v16.fields.a = v14;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v16, 0LL);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.pointSummonBg;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v17.fields.r = v11;
  v17.fields.g = v12;
  v17.fields.b = v13;
  v17.fields.a = v14;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v17, 0LL);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.pointGachaDetailLb;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v18.fields.r = v11;
  v18.fields.g = v12;
  v18.fields.b = v13;
  v18.fields.a = v14;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v18, 0LL);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.pointNumLb;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v19.fields.r = v11;
  v19.fields.g = v12;
  v19.fields.b = v13;
  v19.fields.a = v14;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v19, 0LL);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.freeGachaTxtImg;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v20.fields.r = v11;
  v20.fields.g = v12;
  v20.fields.b = v13;
  v20.fields.a = v14;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v20, 0LL);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.singleNumImg;
  if ( !freeGachaBtn
    || (v21.fields.r = v11,
        v21.fields.g = v12,
        v21.fields.b = v13,
        v21.fields.a = v14,
        UIWidget__set_color((UIWidget_o *)freeGachaBtn, v21, 0LL),
        (freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiNumImg) == 0LL) )
  {
LABEL_17:
    sub_B2C434(freeGachaBtn, isDisp);
  }
  v22.fields.r = v11;
  v22.fields.g = v12;
  v22.fields.b = v13;
  v22.fields.a = v14;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v22, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PointSummonInfoComponent__setMultiGachaNum(
        PointSummonInfoComponent_o *this,
        int32_t price,
        int32_t usrFriendPoint,
        const MethodInfo *method)
{
  int32_t v5; // w21
  __int64 v7; // x1
  __int64 v8; // x1
  int v9; // w8
  int32_t *p_gachaTime; // x20
  UnityEngine_GameObject_o *singleGachaBtnInfo; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x0

  v5 = price;
  if ( (byte_4186B59 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22439/*"summon_txt_f10"*/, *(_QWORD *)&price);
    sub_B2C35C(&StringLiteral_22437/*"summon_txt_f0"*/, v7);
    sub_B2C35C(&StringLiteral_22438/*"summon_txt_f01"*/, v8);
    byte_4186B59 = 1;
  }
  v9 = usrFriendPoint / v5;
  this->fields.gachaTime = usrFriendPoint / v5;
  p_gachaTime = &this->fields.gachaTime;
  singleGachaBtnInfo = this->fields.singleGachaBtnInfo;
  if ( !singleGachaBtnInfo )
    goto LABEL_13;
  if ( v9 < 2 )
  {
    UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 1, 0LL);
    singleGachaBtnInfo = (UnityEngine_GameObject_o *)this->fields.freeGachaTxtImg;
    if ( singleGachaBtnInfo )
    {
      *(_QWORD *)&price = StringLiteral_22438/*"summon_txt_f01"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_B2C434(singleGachaBtnInfo, *(_QWORD *)&price);
  }
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 0, 0LL);
  singleGachaBtnInfo = this->fields.multiGachaBtnInfo;
  if ( !singleGachaBtnInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 1, 0LL);
  v12 = System_Int32__ToString((int)this + 156, 0LL);
  v13 = System_String__Concat_44305532((System_String_o *)StringLiteral_22437/*"summon_txt_f0"*/, v12, 0LL);
  if ( *p_gachaTime >= 10 )
  {
    *p_gachaTime = 10;
    *(_QWORD *)&price = StringLiteral_22439/*"summon_txt_f10"*/;
  }
  else
  {
    *(_QWORD *)&price = v13;
  }
  singleGachaBtnInfo = (UnityEngine_GameObject_o *)this->fields.multiNumImg;
  if ( !singleGachaBtnInfo )
    goto LABEL_13;
LABEL_12:
  UISprite__set_spriteName((UISprite_o *)singleGachaBtnInfo, *(System_String_o **)&price, 0LL);
}


void __fastcall PointSummonInfoComponent__setPointSummonDispInfo(
        PointSummonInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  const MethodInfo *v17; // x1
  struct GachaEntity_o *pointGachaData; // x8
  UserQuestEntity_o *Entity; // x0
  __int64 v20; // x20
  __int64 v21; // x20
  uint64_t dateData; // x20
  struct GachaEntity_o *v23; // x8
  UserGachaEntity_o *v24; // x0
  int64_t freeDrawAt; // x21
  int32_t Hour; // w22
  BalanceConfig_c *v27; // x8
  int64_t v28; // x24
  int32_t v29; // w0
  BalanceConfig_c *v30; // x8
  int32_t v31; // w21
  int32_t DailyFreeGachaResetTime; // w25
  int32_t Minute; // w22
  int64_t v34; // x21
  System_DateTime_o v35; // x0
  uint64_t v36; // x21
  uint64_t v37; // x22
  UILabel_o *pointGachaDetailLb; // x20
  System_String_o *v39; // x21
  Il2CppObject *v40; // x0
  const MethodInfo *v41; // x3
  UILabel_o *pointNumLb; // x19
  System_DateTime_o t1; // [xsp+8h] [xbp-48h] BYREF
  int32_t price; // [xsp+18h] [xbp-38h] BYREF
  int32_t usrFriendPoint; // [xsp+1Ch] [xbp-34h] BYREF
  System_DateTime_o v46; // 0:x0.8
  System_DateTime_o v47; // 0:x0.8
  System_DateTime_o v48; // 0:x0.8
  System_DateTime_o v49; // 0:x0.8
  System_DateTime_o v50; // 0:x0.8
  System_DateTime_o v51; // 0:x0.8
  System_DateTime_o v52; // 0:x1.8
  System_DateTime_o v53; // 0:x1.8

  if ( (byte_4186B58 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_TblUserMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserGachaMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_B2C35C(&System_DateTime_TypeInfo, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&StringLiteral_10459/*"POINT_SUMMON_DETAIL"*/, v12);
    sub_B2C35C(&StringLiteral_4551/*"DAILY_SUMMON_DETAIL"*/, v13);
    sub_B2C35C(&StringLiteral_22440/*"summon_txt_free"*/, v14);
    byte_4186B58 = 1;
  }
  usrFriendPoint = 0;
  t1.fields.dateData = 0LL;
  PointSummonInfoComponent__init(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !SelfUserGame )
    goto LABEL_65;
  pointGachaData = this->fields.pointGachaData;
  if ( !pointGachaData || !Instance )
    goto LABEL_65;
  Entity = UserQuestMaster__GetEntity(
             (UserQuestMaster_o *)Instance,
             SelfUserGame->fields.userId,
             pointGachaData->fields.condQuestId,
             0LL);
  if ( !Entity || UserQuestEntity__getClearNum(Entity, 0LL) < 1 )
  {
    PointSummonInfoComponent__init(this, v17);
    return;
  }
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v21 = **(_QWORD **)(v20 + 192);
  if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
    sub_AC505C(v21);
  Instance = **(void ***)(v21 + 184);
  if ( !Instance )
    goto LABEL_65;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TblUserMaster___);
  if ( !Instance )
    goto LABEL_65;
  Instance = TblUserMaster__getUserData((TblUserMaster_o *)Instance, SelfUserGame->fields.userId, 0LL);
  if ( !Instance )
    goto LABEL_65;
  usrFriendPoint = *((_DWORD *)Instance + 6);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserGachaMaster___);
  v23 = this->fields.pointGachaData;
  if ( !v23 || !Instance )
    goto LABEL_65;
  v24 = UserGachaMaster__GetEntity((UserGachaMaster_o *)Instance, SelfUserGame->fields.userId, v23->fields.id, 0LL);
  if ( !v24 )
    goto LABEL_47;
  freeDrawAt = v24->fields.freeDrawAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  t1.fields.dateData = NetworkManager__getServerDateTime_26271756(freeDrawAt, 0LL).fields.dateData;
  v46.fields.dateData = (uint64_t)&t1;
  Hour = System_DateTime__get_Hour(v46, 0LL);
  v27 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v27 = BalanceConfig_TypeInfo;
  }
  v47.fields.dateData = (uint64_t)&t1;
  if ( Hour >= v27->static_fields->DailyFreeGachaResetTime )
    v28 = freeDrawAt + 86400;
  else
    v28 = freeDrawAt;
  v29 = System_DateTime__get_Hour(v47, 0LL);
  v30 = BalanceConfig_TypeInfo;
  v31 = v29;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  v48.fields.dateData = (uint64_t)&t1;
  DailyFreeGachaResetTime = v30->static_fields->DailyFreeGachaResetTime;
  Minute = System_DateTime__get_Minute(v48, 0LL);
  v49.fields.dateData = (uint64_t)&t1;
  v34 = v28 - (System_DateTime__get_Second(v49, 0LL) + 60 * (Minute + 60 * (v31 - DailyFreeGachaResetTime)));
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v35.fields.dateData = NetworkManager__getServerDateTime_26271756(v34, 0LL).fields.dateData;
  if ( v34 <= 0 )
    goto LABEL_47;
  v36 = v35.fields.dateData;
  v37 = t1.fields.dateData;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  v50.fields.dateData = v37;
  v52.fields.dateData = v36;
  if ( System_DateTime__op_LessThanOrEqual(v50, v52, 0LL) )
  {
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v51.fields.dateData = v36;
    v53.fields.dateData = dateData;
    if ( System_DateTime__op_LessThanOrEqual(v51, v53, 0LL) )
LABEL_47:
      this->fields.isFree = 1;
  }
  pointGachaDetailLb = this->fields.pointGachaDetailLb;
  if ( this->fields.isFree )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_4551/*"DAILY_SUMMON_DETAIL"*/, 0LL);
    if ( pointGachaDetailLb )
    {
      UILabel__set_text(pointGachaDetailLb, (System_String_o *)Instance, 0LL);
      Instance = this->fields.freeGachaTxtImg;
      if ( Instance )
      {
        UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_22440/*"summon_txt_free"*/, 0LL);
        Instance = this->fields.singleGachaBtnInfo;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          goto LABEL_62;
        }
      }
    }
LABEL_65:
    sub_B2C434(Instance, v17);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_10459/*"POINT_SUMMON_DETAIL"*/, 0LL);
  price = this->fields.price;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &price);
  Instance = System_String__Format(v39, v40, 0LL);
  if ( !pointGachaDetailLb )
    goto LABEL_65;
  UILabel__set_text(pointGachaDetailLb, (System_String_o *)Instance, 0LL);
  PointSummonInfoComponent__setMultiGachaNum(this, this->fields.price, usrFriendPoint, v41);
LABEL_62:
  pointNumLb = this->fields.pointNumLb;
  Instance = System_Int32__ToString((int32_t)&usrFriendPoint, 0LL);
  if ( !pointNumLb )
    goto LABEL_65;
  UILabel__set_text(pointNumLb, (System_String_o *)Instance, 0LL);
}


void __fastcall PointSummonInfoComponent__setPointSummonInfo(
        PointSummonInfoComponent_o *this,
        GachaEntity_o *pointGachaEnt,
        PointSummonInfoComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x1

  PointSummonInfoComponent__init(this, (const MethodInfo *)pointGachaEnt);
  this->fields.clickCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.clickCallbackFunc,
    (System_Int32_array **)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.isFree = 0;
  if ( !pointGachaEnt )
    sub_B2C434(v13, v14);
  this->fields.price = GachaEntity__getPrice(pointGachaEnt, 0LL);
  this->fields.pointGachaData = pointGachaEnt;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.pointGachaData,
    (System_Int32_array **)pointGachaEnt,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  PointSummonInfoComponent__setPointSummonDispInfo(this, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PointSummonInfoComponent_ClickDelegate___ctor(
        PointSummonInfoComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


System_IAsyncResult_o *__fastcall PointSummonInfoComponent_ClickDelegate__BeginInvoke(
        PointSummonInfoComponent_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)paramData;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall PointSummonInfoComponent_ClickDelegate__EndInvoke(
        PointSummonInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall PointSummonInfoComponent_ClickDelegate__Invoke(
        PointSummonInfoComponent_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  PointSummonInfoComponent_ClickDelegate_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  __int64 v12; // x3
  GachaRqParamData_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall **v27)(GachaRqParamData_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, GachaRqParamData_o *, _QWORD); // x0
  PointSummonInfoComponent_ClickDelegate_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(GachaRqParamData_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  GachaRqParamData_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  PointSummonInfoComponent_ClickDelegate_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PointSummonInfoComponent_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(GachaRqParamData_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, paramData, method, v3);
      v34 = sub_B2C38C(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B2C384(v31);
            v45 = sub_B2C788(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = paramData->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&paramData->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&paramData->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(paramData, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&paramData->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(GachaRqParamData_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(paramData, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = paramData->klass;
                if ( *(_WORD *)&paramData->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&paramData->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(paramData, class_0, v10, v12);
                }
                (*(void (__fastcall **)(GachaRqParamData_o *, _QWORD))v16)(paramData, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(GachaRqParamData_o *, _QWORD))&paramData->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  paramData,
                  *((_QWORD *)&paramData->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(paramData, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B2C384(v31);
          v37 = sub_B2C788(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AC5258(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, paramData, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AC5258(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))v24)(
                v32,
                paramData,
                *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))(*v32
                                                                              + 16LL * *(unsigned __int16 *)(v31 + 72)
                                                                              + 312))(
                v32,
                paramData,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, GachaRqParamData_o *, __int64))v33)(v32, paramData, v31);
    }
  }
}