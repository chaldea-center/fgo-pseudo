void __fastcall PointSummonInfoComponent___ctor(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.gachaTime = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PointSummonInfoComponent__OnClickGacha(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  GachaRqParamData_o *v8; // x21
  GachaRqParamData_o **p_requestData; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct GachaEntity_o *pointGachaData; // x8
  struct GachaRqParamData_o *requestData; // x9
  struct GachaEntity_o *v18; // x8
  struct GachaRqParamData_o *v19; // x9
  PointSummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x0

  if ( (byte_40F8FBF & 1) == 0 )
  {
    sub_B16FFC(&GachaRqParamData_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F8FBF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v8 = (GachaRqParamData_o *)sub_B170CC(GachaRqParamData_TypeInfo, v4, v5, v6, v7);
  GachaRqParamData___ctor(v8, 0LL);
  this->fields.requestData = v8;
  p_requestData = &this->fields.requestData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.requestData,
    (System_Int32_array **)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !this->fields.requestData )
    goto LABEL_16;
  this->fields.requestData->fields.gachaType = 3;
  pointGachaData = this->fields.pointGachaData;
  if ( !pointGachaData
    || (requestData = this->fields.requestData) == 0LL
    || (requestData->fields.gachaId = pointGachaData->fields.id, (v18 = this->fields.pointGachaData) == 0LL)
    || (v19 = this->fields.requestData) == 0LL
    || (v19->fields.warId = v18->fields.warId, !*p_requestData)
    || ((*p_requestData)->fields.gachaTime = 1, !*p_requestData) )
  {
LABEL_16:
    sub_B170D4();
  }
  (*p_requestData)->fields.gachaResourceNum = this->fields.price;
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    PointSummonInfoComponent_ClickDelegate__Invoke(clickCallbackFunc, *p_requestData, 0LL);
}


void __fastcall PointSummonInfoComponent__OnClickMutiGacha(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  GachaRqParamData_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct GachaEntity_o *pointGachaData; // x8
  struct GachaRqParamData_o *requestData; // x9
  struct GachaEntity_o *v17; // x8
  struct GachaRqParamData_o *v18; // x9
  struct GachaRqParamData_o *v19; // x8
  struct GachaRqParamData_o *v20; // x8
  PointSummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x0

  if ( (byte_40F8FC0 & 1) == 0 )
  {
    sub_B16FFC(&GachaRqParamData_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F8FC0 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v8 = (GachaRqParamData_o *)sub_B170CC(GachaRqParamData_TypeInfo, v4, v5, v6, v7);
  GachaRqParamData___ctor(v8, 0LL);
  this->fields.requestData = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.requestData,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( !this->fields.requestData )
    goto LABEL_16;
  this->fields.requestData->fields.gachaType = 3;
  pointGachaData = this->fields.pointGachaData;
  if ( !pointGachaData )
    goto LABEL_16;
  requestData = this->fields.requestData;
  if ( !requestData
    || (requestData->fields.gachaId = pointGachaData->fields.id, (v17 = this->fields.pointGachaData) == 0LL)
    || (v18 = this->fields.requestData) == 0LL
    || (v18->fields.warId = v17->fields.warId, (v19 = this->fields.requestData) == 0LL)
    || (v19->fields.gachaTime = this->fields.gachaTime, (v20 = this->fields.requestData) == 0LL) )
  {
LABEL_16:
    sub_B170D4();
  }
  v20->fields.gachaResourceNum = this->fields.price * this->fields.gachaTime;
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
  UnityEngine_GameObject_o *multiGachaBtnInfo; // x0

  singleGachaBtnInfo = this->fields.singleGachaBtnInfo;
  if ( !singleGachaBtnInfo
    || (UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 0, 0LL),
        (multiGachaBtnInfo = this->fields.multiGachaBtnInfo) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(multiGachaBtnInfo, 0, 0LL);
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
  UnityEngine_Behaviour_o *singleBtn; // x0
  UnityEngine_Behaviour_o *multiBtn; // x0
  float v9; // s0
  float v10; // s1
  float v11; // s2
  float v12; // s3
  UIWidget_o *freeGachaBtnImg; // x0
  float v14; // s8
  float v15; // s9
  float v16; // s10
  float v17; // s11
  UIWidget_o *singleBtnImg; // x0
  UIWidget_o *multiBtnImg; // x0
  UIWidget_o *pointSummonBg; // x0
  UIWidget_o *pointGachaDetailLb; // x0
  UIWidget_o *pointNumLb; // x0
  UIWidget_o *freeGachaTxtImg; // x0
  UIWidget_o *singleNumImg; // x0
  UIWidget_o *multiNumImg; // x0
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.freeGachaBtn;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v5 = isDisp;
  UnityEngine_Behaviour__set_enabled(freeGachaBtn, isDisp, 0LL);
  singleBtn = (UnityEngine_Behaviour_o *)this->fields.singleBtn;
  if ( !singleBtn )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(singleBtn, v5, 0LL);
  multiBtn = (UnityEngine_Behaviour_o *)this->fields.multiBtn;
  if ( !multiBtn )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(multiBtn, isDisp, 0LL);
  *(UnityEngine_Color_o *)&v9 = isDisp ? UnityEngine_Color__get_white(0LL) : UnityEngine_Color__get_gray(0LL);
  freeGachaBtnImg = (UIWidget_o *)this->fields.freeGachaBtnImg;
  v14 = v9;
  v15 = v10;
  v16 = v11;
  v17 = v12;
  if ( !freeGachaBtnImg )
    goto LABEL_17;
  UIWidget__set_color(freeGachaBtnImg, *(UnityEngine_Color_o *)&v9, 0LL);
  singleBtnImg = (UIWidget_o *)this->fields.singleBtnImg;
  if ( !singleBtnImg )
    goto LABEL_17;
  v26.fields.r = v14;
  v26.fields.g = v15;
  v26.fields.b = v16;
  v26.fields.a = v17;
  UIWidget__set_color(singleBtnImg, v26, 0LL);
  multiBtnImg = (UIWidget_o *)this->fields.multiBtnImg;
  if ( !multiBtnImg )
    goto LABEL_17;
  v27.fields.r = v14;
  v27.fields.g = v15;
  v27.fields.b = v16;
  v27.fields.a = v17;
  UIWidget__set_color(multiBtnImg, v27, 0LL);
  pointSummonBg = (UIWidget_o *)this->fields.pointSummonBg;
  if ( !pointSummonBg )
    goto LABEL_17;
  v28.fields.r = v14;
  v28.fields.g = v15;
  v28.fields.b = v16;
  v28.fields.a = v17;
  UIWidget__set_color(pointSummonBg, v28, 0LL);
  pointGachaDetailLb = (UIWidget_o *)this->fields.pointGachaDetailLb;
  if ( !pointGachaDetailLb )
    goto LABEL_17;
  v29.fields.r = v14;
  v29.fields.g = v15;
  v29.fields.b = v16;
  v29.fields.a = v17;
  UIWidget__set_color(pointGachaDetailLb, v29, 0LL);
  pointNumLb = (UIWidget_o *)this->fields.pointNumLb;
  if ( !pointNumLb )
    goto LABEL_17;
  v30.fields.r = v14;
  v30.fields.g = v15;
  v30.fields.b = v16;
  v30.fields.a = v17;
  UIWidget__set_color(pointNumLb, v30, 0LL);
  freeGachaTxtImg = (UIWidget_o *)this->fields.freeGachaTxtImg;
  if ( !freeGachaTxtImg )
    goto LABEL_17;
  v31.fields.r = v14;
  v31.fields.g = v15;
  v31.fields.b = v16;
  v31.fields.a = v17;
  UIWidget__set_color(freeGachaTxtImg, v31, 0LL);
  singleNumImg = (UIWidget_o *)this->fields.singleNumImg;
  if ( !singleNumImg
    || (v32.fields.r = v14,
        v32.fields.g = v15,
        v32.fields.b = v16,
        v32.fields.a = v17,
        UIWidget__set_color(singleNumImg, v32, 0LL),
        (multiNumImg = (UIWidget_o *)this->fields.multiNumImg) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  v33.fields.r = v14;
  v33.fields.g = v15;
  v33.fields.b = v16;
  v33.fields.a = v17;
  UIWidget__set_color(multiNumImg, v33, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PointSummonInfoComponent__setMultiGachaNum(
        PointSummonInfoComponent_o *this,
        int32_t price,
        int32_t usrFriendPoint,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  int v9; // w8
  int32_t *p_gachaTime; // x20
  UnityEngine_GameObject_o *singleGachaBtnInfo; // x0
  UISprite_o *freeGachaTxtImg; // x0
  System_String_o *v13; // x1
  UnityEngine_GameObject_o *multiGachaBtnInfo; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x0

  if ( (byte_40F8FBE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22347, *(_QWORD *)&price);
    sub_B16FFC(&StringLiteral_22345, v7);
    sub_B16FFC(&StringLiteral_22346, v8);
    byte_40F8FBE = 1;
  }
  v9 = usrFriendPoint / price;
  this->fields.gachaTime = usrFriendPoint / price;
  p_gachaTime = &this->fields.gachaTime;
  singleGachaBtnInfo = this->fields.singleGachaBtnInfo;
  if ( !singleGachaBtnInfo )
    goto LABEL_13;
  if ( v9 < 2 )
  {
    UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 1, 0LL);
    freeGachaTxtImg = this->fields.freeGachaTxtImg;
    if ( freeGachaTxtImg )
    {
      v13 = (System_String_o *)StringLiteral_22346;
      goto LABEL_12;
    }
LABEL_13:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 0, 0LL);
  multiGachaBtnInfo = this->fields.multiGachaBtnInfo;
  if ( !multiGachaBtnInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(multiGachaBtnInfo, 1, 0LL);
  v15 = System_Int32__ToString((int)this + 156, 0LL);
  v16 = System_String__Concat_43743732((System_String_o *)StringLiteral_22345, v15, 0LL);
  if ( *p_gachaTime >= 10 )
  {
    *p_gachaTime = 10;
    v13 = (System_String_o *)StringLiteral_22347;
  }
  else
  {
    v13 = v16;
  }
  freeGachaTxtImg = this->fields.multiNumImg;
  if ( !freeGachaTxtImg )
    goto LABEL_13;
LABEL_12:
  UISprite__set_spriteName(freeGachaTxtImg, v13, 0LL);
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
  WebViewManager_o *Instance; // x0
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct GachaEntity_o *pointGachaData; // x8
  UserQuestEntity_o *Entity; // x0
  const MethodInfo *v20; // x1
  __int64 v21; // x20
  __int64 v22; // x20
  DataManager_o *v23; // x0
  TblUserMaster_o *v24; // x0
  TblUserEntity_o *UserData; // x0
  uint64_t dateData; // x20
  WebViewManager_o *v27; // x0
  UserGachaMaster_o *v28; // x0
  struct GachaEntity_o *v29; // x8
  UserGachaEntity_o *v30; // x0
  int64_t freeDrawAt; // x21
  int32_t Hour; // w22
  BalanceConfig_c *v33; // x8
  int64_t v34; // x24
  int32_t v35; // w0
  BalanceConfig_c *v36; // x8
  int32_t v37; // w21
  int32_t DailyFreeGachaResetTime; // w25
  int32_t Minute; // w22
  int64_t v40; // x21
  System_DateTime_o v41; // x0
  uint64_t v42; // x21
  uint64_t v43; // x22
  UILabel_o *pointGachaDetailLb; // x20
  System_String_o *v45; // x0
  UISprite_o *freeGachaTxtImg; // x0
  UnityEngine_GameObject_o *singleGachaBtnInfo; // x0
  System_String_o *v48; // x21
  Il2CppObject *v49; // x0
  System_String_o *v50; // x0
  const MethodInfo *v51; // x3
  UILabel_o *pointNumLb; // x19
  System_String_o *v53; // x0
  System_DateTime_o t1; // [xsp+8h] [xbp-48h] BYREF
  int32_t price; // [xsp+18h] [xbp-38h] BYREF
  int32_t usrFriendPoint; // [xsp+1Ch] [xbp-34h] BYREF
  System_DateTime_o v57; // 0:x0.8
  System_DateTime_o v58; // 0:x0.8
  System_DateTime_o v59; // 0:x0.8
  System_DateTime_o v60; // 0:x0.8
  System_DateTime_o v61; // 0:x0.8
  System_DateTime_o v62; // 0:x0.8
  System_DateTime_o v63; // 0:x1.8
  System_DateTime_o v64; // 0:x1.8

  if ( (byte_40F8FBD & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_TblUserMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserGachaMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_B16FFC(&System_DateTime_TypeInfo, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_10426, v12);
    sub_B16FFC(&StringLiteral_4537, v13);
    sub_B16FFC(&StringLiteral_22348, v14);
    byte_40F8FBD = 1;
  }
  usrFriendPoint = 0;
  t1.fields.dateData = 0LL;
  PointSummonInfoComponent__init(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !SelfUserGame )
    goto LABEL_65;
  pointGachaData = this->fields.pointGachaData;
  if ( !pointGachaData || !MasterData_WarQuestSelectionMaster )
    goto LABEL_65;
  Entity = UserQuestMaster__GetEntity(
             MasterData_WarQuestSelectionMaster,
             SelfUserGame->fields.userId,
             pointGachaData->fields.condQuestId,
             0LL);
  if ( !Entity || UserQuestEntity__getClearNum(Entity, 0LL) < 1 )
  {
    PointSummonInfoComponent__init(this, v20);
    return;
  }
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v22 = **(_QWORD **)(v21 + 192);
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    sub_AAFCFC(v22);
  v23 = **(DataManager_o ***)(v22 + 184);
  if ( !v23 )
    goto LABEL_65;
  v24 = (TblUserMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             v23,
                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TblUserMaster___);
  if ( !v24 )
    goto LABEL_65;
  UserData = TblUserMaster__getUserData(v24, SelfUserGame->fields.userId, 0LL);
  if ( !UserData )
    goto LABEL_65;
  usrFriendPoint = UserData->fields.friendPoint;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v27 )
    goto LABEL_65;
  v28 = (UserGachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)v27,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  v29 = this->fields.pointGachaData;
  if ( !v29 || !v28 )
    goto LABEL_65;
  v30 = UserGachaMaster__GetEntity(v28, SelfUserGame->fields.userId, v29->fields.id, 0LL);
  if ( !v30 )
    goto LABEL_47;
  freeDrawAt = v30->fields.freeDrawAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  t1.fields.dateData = NetworkManager__getServerDateTime_23685560(freeDrawAt, 0LL).fields.dateData;
  v57.fields.dateData = (uint64_t)&t1;
  Hour = System_DateTime__get_Hour(v57, 0LL);
  v33 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v33 = BalanceConfig_TypeInfo;
  }
  v58.fields.dateData = (uint64_t)&t1;
  if ( Hour >= v33->static_fields->DailyFreeGachaResetTime )
    v34 = freeDrawAt + 86400;
  else
    v34 = freeDrawAt;
  v35 = System_DateTime__get_Hour(v58, 0LL);
  v36 = BalanceConfig_TypeInfo;
  v37 = v35;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v36 = BalanceConfig_TypeInfo;
  }
  v59.fields.dateData = (uint64_t)&t1;
  DailyFreeGachaResetTime = v36->static_fields->DailyFreeGachaResetTime;
  Minute = System_DateTime__get_Minute(v59, 0LL);
  v60.fields.dateData = (uint64_t)&t1;
  v40 = v34 - (System_DateTime__get_Second(v60, 0LL) + 60 * (Minute + 60 * (v37 - DailyFreeGachaResetTime)));
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v41.fields.dateData = NetworkManager__getServerDateTime_23685560(v40, 0LL).fields.dateData;
  if ( v40 <= 0 )
    goto LABEL_47;
  v42 = v41.fields.dateData;
  v43 = t1.fields.dateData;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  v61.fields.dateData = v43;
  v63.fields.dateData = v42;
  if ( System_DateTime__op_LessThanOrEqual(v61, v63, 0LL) )
  {
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v62.fields.dateData = v42;
    v64.fields.dateData = dateData;
    if ( System_DateTime__op_LessThanOrEqual(v62, v64, 0LL) )
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
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_4537, 0LL);
    if ( pointGachaDetailLb )
    {
      UILabel__set_text(pointGachaDetailLb, v45, 0LL);
      freeGachaTxtImg = this->fields.freeGachaTxtImg;
      if ( freeGachaTxtImg )
      {
        UISprite__set_spriteName(freeGachaTxtImg, (System_String_o *)StringLiteral_22348, 0LL);
        singleGachaBtnInfo = this->fields.singleGachaBtnInfo;
        if ( singleGachaBtnInfo )
        {
          UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 1, 0LL);
          goto LABEL_62;
        }
      }
    }
LABEL_65:
    sub_B170D4();
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_10426, 0LL);
  price = this->fields.price;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &price);
  v50 = System_String__Format(v48, v49, 0LL);
  if ( !pointGachaDetailLb )
    goto LABEL_65;
  UILabel__set_text(pointGachaDetailLb, v50, 0LL);
  PointSummonInfoComponent__setMultiGachaNum(this, this->fields.price, usrFriendPoint, v51);
LABEL_62:
  pointNumLb = this->fields.pointNumLb;
  v53 = System_Int32__ToString((int32_t)&usrFriendPoint, 0LL);
  if ( !pointNumLb )
    goto LABEL_65;
  UILabel__set_text(pointNumLb, v53, 0LL);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1

  PointSummonInfoComponent__init(this, (const MethodInfo *)pointGachaEnt);
  this->fields.clickCallbackFunc = callback;
  sub_B16F98(
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
    sub_B170D4();
  this->fields.price = GachaEntity__getPrice(pointGachaEnt, 0LL);
  this->fields.pointGachaData = pointGachaEnt;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.pointGachaData,
    (System_Int32_array **)pointGachaEnt,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  PointSummonInfoComponent__setPointSummonDispInfo(this, v19);
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
  sub_B16F98(
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object);
}


void __fastcall PointSummonInfoComponent_ClickDelegate__EndInvoke(
        PointSummonInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v27->fields.extra_arg, paramData, method);
      v31 = sub_B1702C(v28);
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
            v40 = sub_B17024(v28);
            v41 = sub_B17428(v28);
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
                  v23 = sub_AAFEF8(paramData, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&paramData->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(GachaRqParamData_o *, _QWORD))sub_B170AC(v15, v28);
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
                  v14 = sub_AAFEF8(paramData, class_0, v9);
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
          v33 = sub_B17024(v28);
          v34 = sub_B17428(v28);
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
                v25 = sub_AAFEF8(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))sub_B170AC(v22, v28);
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
                v21 = sub_AAFEF8(v29, v17, v16);
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