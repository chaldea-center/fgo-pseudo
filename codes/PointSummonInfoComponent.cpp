void __fastcall PointSummonInfoComponent___ctor(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.gachaTime = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PointSummonInfoComponent__OnClickGacha(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  GachaRqParamData_o *v3; // x21
  GachaRqParamData_o **p_requestData; // x20
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
  PointSummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x0

  if ( (byte_438B383 & 1) == 0 )
  {
    sub_B775C4(&GachaRqParamData_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B383 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v3 = (GachaRqParamData_o *)sub_B77694(GachaRqParamData_TypeInfo);
  GachaRqParamData___ctor(v3, 0LL);
  this->fields.requestData = v3;
  p_requestData = &this->fields.requestData;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.requestData,
    (System_Int32_array **)v3,
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
  if ( !pointGachaData
    || (requestData = this->fields.requestData) == 0LL
    || (requestData->fields.gachaId = pointGachaData->fields.id, (v15 = this->fields.pointGachaData) == 0LL)
    || (v16 = this->fields.requestData) == 0LL
    || (v16->fields.warId = v15->fields.warId, !*p_requestData)
    || ((*p_requestData)->fields.gachaTime = 1, !*p_requestData) )
  {
LABEL_16:
    sub_B7769C(v11, v12);
  }
  (*p_requestData)->fields.gachaResourceNum = this->fields.price;
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    PointSummonInfoComponent_ClickDelegate__Invoke(clickCallbackFunc, *p_requestData, 0LL);
}


void __fastcall PointSummonInfoComponent__OnClickMutiGacha(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  GachaRqParamData_o *v3; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  __int64 v10; // x0
  __int64 v11; // x1
  struct GachaEntity_o *pointGachaData; // x8
  struct GachaRqParamData_o *requestData; // x9
  struct GachaEntity_o *v14; // x8
  struct GachaRqParamData_o *v15; // x9
  struct GachaRqParamData_o *v16; // x8
  struct GachaRqParamData_o *v17; // x8
  PointSummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x0

  if ( (byte_438B384 & 1) == 0 )
  {
    sub_B775C4(&GachaRqParamData_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B384 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v3 = (GachaRqParamData_o *)sub_B77694(GachaRqParamData_TypeInfo);
  GachaRqParamData___ctor(v3, 0LL);
  this->fields.requestData = v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.requestData,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  if ( !this->fields.requestData )
    goto LABEL_16;
  this->fields.requestData->fields.gachaType = 3;
  pointGachaData = this->fields.pointGachaData;
  if ( !pointGachaData )
    goto LABEL_16;
  requestData = this->fields.requestData;
  if ( !requestData
    || (requestData->fields.gachaId = pointGachaData->fields.id, (v14 = this->fields.pointGachaData) == 0LL)
    || (v15 = this->fields.requestData) == 0LL
    || (v15->fields.warId = v14->fields.warId, (v16 = this->fields.requestData) == 0LL)
    || (v16->fields.gachaTime = this->fields.gachaTime, (v17 = this->fields.requestData) == 0LL) )
  {
LABEL_16:
    sub_B7769C(v10, v11);
  }
  v17->fields.gachaResourceNum = this->fields.price * this->fields.gachaTime;
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
    sub_B7769C(singleGachaBtnInfo, method);
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
    sub_B7769C(freeGachaBtn, isDisp);
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
  int v7; // w8
  int32_t *p_gachaTime; // x20
  UnityEngine_GameObject_o *singleGachaBtnInfo; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x0

  v5 = price;
  if ( (byte_438B382 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22915/*"summon_txt_f10"*/);
    sub_B775C4(&StringLiteral_22913/*"summon_txt_f0"*/);
    sub_B775C4(&StringLiteral_22914/*"summon_txt_f01"*/);
    byte_438B382 = 1;
  }
  v7 = usrFriendPoint / v5;
  this->fields.gachaTime = usrFriendPoint / v5;
  p_gachaTime = &this->fields.gachaTime;
  singleGachaBtnInfo = this->fields.singleGachaBtnInfo;
  if ( !singleGachaBtnInfo )
    goto LABEL_13;
  if ( v7 < 2 )
  {
    UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 1, 0LL);
    singleGachaBtnInfo = (UnityEngine_GameObject_o *)this->fields.freeGachaTxtImg;
    if ( singleGachaBtnInfo )
    {
      *(_QWORD *)&price = StringLiteral_22914/*"summon_txt_f01"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_B7769C(singleGachaBtnInfo, *(_QWORD *)&price);
  }
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 0, 0LL);
  singleGachaBtnInfo = this->fields.multiGachaBtnInfo;
  if ( !singleGachaBtnInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 1, 0LL);
  v10 = System_Int32__ToString((int)this + 156, 0LL);
  v11 = System_String__Concat_44901936((System_String_o *)StringLiteral_22913/*"summon_txt_f0"*/, v10, 0LL);
  if ( *p_gachaTime >= 10 )
  {
    *p_gachaTime = 10;
    *(_QWORD *)&price = StringLiteral_22915/*"summon_txt_f10"*/;
  }
  else
  {
    *(_QWORD *)&price = v11;
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
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  const MethodInfo *v5; // x1
  struct GachaEntity_o *pointGachaData; // x8
  UserQuestEntity_o *Entity; // x0
  __int64 v8; // x20
  __int64 v9; // x20
  uint64_t dateData; // x20
  struct GachaEntity_o *v11; // x8
  UserGachaEntity_o *v12; // x0
  int64_t freeDrawAt; // x21
  int32_t Hour; // w22
  BalanceConfig_c *v15; // x8
  int64_t v16; // x24
  int32_t v17; // w0
  BalanceConfig_c *v18; // x8
  int32_t v19; // w21
  int32_t DailyFreeGachaResetTime; // w25
  int32_t Minute; // w22
  int64_t v22; // x21
  System_DateTime_o v23; // x0
  uint64_t v24; // x21
  uint64_t v25; // x22
  UILabel_o *pointGachaDetailLb; // x20
  System_String_o *v27; // x21
  __int64 v28; // x2
  Il2CppObject *v29; // x0
  const MethodInfo *v30; // x3
  UILabel_o *pointNumLb; // x19
  System_DateTime_o t1; // [xsp+8h] [xbp-48h] BYREF
  int32_t price; // [xsp+18h] [xbp-38h] BYREF
  int32_t usrFriendPoint; // [xsp+1Ch] [xbp-34h] BYREF
  System_DateTime_o v35; // 0:x0.8
  System_DateTime_o v36; // 0:x0.8
  System_DateTime_o v37; // 0:x0.8
  System_DateTime_o v38; // 0:x0.8
  System_DateTime_o v39; // 0:x0.8
  System_DateTime_o v40; // 0:x0.8
  System_DateTime_o v41; // 0:x1.8
  System_DateTime_o v42; // 0:x1.8

  if ( (byte_438B381 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B775C4(&System_DateTime_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_10656/*"POINT_SUMMON_DETAIL"*/);
    sub_B775C4(&StringLiteral_4686/*"DAILY_SUMMON_DETAIL"*/);
    sub_B775C4(&StringLiteral_22916/*"summon_txt_free"*/);
    byte_438B381 = 1;
  }
  usrFriendPoint = 0;
  t1.fields.dateData = 0LL;
  PointSummonInfoComponent__init(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    PointSummonInfoComponent__init(this, v5);
    return;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v9 = **(_QWORD **)(v8 + 192);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_B0F2C4(v9);
  Instance = **(void ***)(v9 + 184);
  if ( !Instance )
    goto LABEL_65;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TblUserMaster___);
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  v11 = this->fields.pointGachaData;
  if ( !v11 || !Instance )
    goto LABEL_65;
  v12 = UserGachaMaster__GetEntity((UserGachaMaster_o *)Instance, SelfUserGame->fields.userId, v11->fields.id, 0LL);
  if ( !v12 )
    goto LABEL_47;
  freeDrawAt = v12->fields.freeDrawAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  t1.fields.dateData = NetworkManager__getServerDateTime_26207672(freeDrawAt, 0LL).fields.dateData;
  v35.fields.dateData = (uint64_t)&t1;
  Hour = System_DateTime__get_Hour(v35, 0LL);
  v15 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v36.fields.dateData = (uint64_t)&t1;
  if ( Hour >= v15->static_fields->DailyFreeGachaResetTime )
    v16 = freeDrawAt + 86400;
  else
    v16 = freeDrawAt;
  v17 = System_DateTime__get_Hour(v36, 0LL);
  v18 = BalanceConfig_TypeInfo;
  v19 = v17;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  v37.fields.dateData = (uint64_t)&t1;
  DailyFreeGachaResetTime = v18->static_fields->DailyFreeGachaResetTime;
  Minute = System_DateTime__get_Minute(v37, 0LL);
  v38.fields.dateData = (uint64_t)&t1;
  v22 = v16 - (System_DateTime__get_Second(v38, 0LL) + 60 * (Minute + 60 * (v19 - DailyFreeGachaResetTime)));
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v23.fields.dateData = NetworkManager__getServerDateTime_26207672(v22, 0LL).fields.dateData;
  if ( v22 <= 0 )
    goto LABEL_47;
  v24 = v23.fields.dateData;
  v25 = t1.fields.dateData;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  v39.fields.dateData = v25;
  v41.fields.dateData = v24;
  if ( System_DateTime__op_LessThanOrEqual(v39, v41, 0LL) )
  {
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v40.fields.dateData = v24;
    v42.fields.dateData = dateData;
    if ( System_DateTime__op_LessThanOrEqual(v40, v42, 0LL) )
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
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_4686/*"DAILY_SUMMON_DETAIL"*/, 0LL);
    if ( pointGachaDetailLb )
    {
      UILabel__set_text(pointGachaDetailLb, (System_String_o *)Instance, 0LL);
      Instance = this->fields.freeGachaTxtImg;
      if ( Instance )
      {
        UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_22916/*"summon_txt_free"*/, 0LL);
        Instance = this->fields.singleGachaBtnInfo;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          goto LABEL_62;
        }
      }
    }
LABEL_65:
    sub_B7769C(Instance, v5);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_10656/*"POINT_SUMMON_DETAIL"*/, 0LL);
  price = this->fields.price;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &price, v28);
  Instance = System_String__Format(v27, v29, 0LL);
  if ( !pointGachaDetailLb )
    goto LABEL_65;
  UILabel__set_text(pointGachaDetailLb, (System_String_o *)Instance, 0LL);
  PointSummonInfoComponent__setMultiGachaNum(this, this->fields.price, usrFriendPoint, v30);
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
  sub_B77560(
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
    sub_B7769C(v13, v14);
  this->fields.price = GachaEntity__getPrice(pointGachaEnt, 0LL);
  this->fields.pointGachaData = pointGachaEnt;
  sub_B77560(
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  return (System_IAsyncResult_o *)sub_B77568(this, v6, callback, object);
}


void __fastcall PointSummonInfoComponent_ClickDelegate__EndInvoke(
        PointSummonInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


void __fastcall PointSummonInfoComponent_ClickDelegate__Invoke(
        PointSummonInfoComponent_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PointSummonInfoComponent_ClickDelegate_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  GachaRqParamData_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  unsigned int v16; // w23
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  void (__fastcall **v24)(GachaRqParamData_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, GachaRqParamData_o *, _QWORD); // x0
  PointSummonInfoComponent_ClickDelegate_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(GachaRqParamData_o *, __int64); // x23
  char v31; // w0
  int v32; // w8
  char v33; // w23
  char v34; // w0
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  unsigned __int64 v38; // x10
  _DWORD *v39; // x11
  char v40; // w22
  char v41; // w0
  GachaRqParamData_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  PointSummonInfoComponent_ClickDelegate_o *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v47;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (PointSummonInfoComponent_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(GachaRqParamData_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v27->fields.extra_arg, paramData);
      v31 = sub_B775F4(v28);
      v32 = *(unsigned __int8 *)(v28 + 74);
      if ( (v31 & 1) != 0 )
      {
        if ( v32 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v32 != 1 )
        {
          if ( *(__int16 *)(v28 + 72) != -1 && this->fields.m_target )
          {
            v40 = sub_B775EC(v28);
            v41 = sub_B779F0(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = paramData->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&paramData->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&paramData->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_B0F4C0(paramData, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&paramData->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(GachaRqParamData_o *, _QWORD))sub_B77674(v15, v28);
              (*v24)(paramData, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = paramData->klass;
                if ( *(_WORD *)&paramData->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&paramData->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_B0F4C0(paramData, class_0, v9);
                }
                (*(void (__fastcall **)(GachaRqParamData_o *, _QWORD))v14)(paramData, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(GachaRqParamData_o *, _QWORD))&paramData->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  paramData,
                  *((_QWORD *)&paramData->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(paramData, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B775EC(v28);
          v34 = sub_B779F0(v28);
          if ( (v33 & 1) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *v29;
              v36 = *(_QWORD *)(v28 + 24);
              v37 = *(unsigned __int16 *)(v28 + 72);
              if ( *(_WORD *)(*v29 + 298) )
              {
                v38 = 0LL;
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *((_QWORD *)v39 - 1) != v36 )
                {
                  ++v38;
                  v39 += 4;
                  if ( v38 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_48;
                }
                v25 = v35 + 16LL * (*v39 + (int)v37) + 312;
              }
              else
              {
LABEL_48:
                v25 = sub_B0F4C0(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))sub_B77674(v22, v28);
            (*v26)(v29, paramData, v26);
          }
          else
          {
            v16 = *(unsigned __int16 *)(v28 + 72);
            if ( (v34 & 1) != 0 )
            {
              v17 = j_il2cpp_method_get_class_0(v28);
              v18 = *v29;
              if ( *(_WORD *)(*v29 + 298) )
              {
                v19 = 0LL;
                v20 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
                while ( *((_QWORD *)v20 - 1) != v17 )
                {
                  ++v19;
                  v20 += 4;
                  if ( v19 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_19;
                }
                v21 = v18 + 16LL * (int)(*v20 + v16) + 312;
              }
              else
              {
LABEL_19:
                v21 = sub_B0F4C0(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))v21)(
                v29,
                paramData,
                *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))(*v29
                                                                              + 16LL * *(unsigned __int16 *)(v28 + 72)
                                                                              + 312))(
                v29,
                paramData,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, GachaRqParamData_o *, __int64))v30)(v29, paramData, v28);
    }
  }
}