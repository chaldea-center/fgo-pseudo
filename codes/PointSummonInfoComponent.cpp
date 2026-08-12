void PointSummonInfoComponent___ctor(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.gachaTime = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PointSummonInfoComponent__OnClickGacha(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x0
  struct GachaRqParamData_o *requestData; // x1
  struct GachaEntity_o *pointGachaData; // x8
  int32_t id; // w9
  int32_t warId; // w10
  struct PointSummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x8
  int32_t price; // w9

  if ( (byte_596C9E0 & 1) == 0 )
  {
    sub_2213A60(&GachaRqParamData_TypeInfo);
    sub_2213A60(&Method_PointSummonInfoComponent_OnClickGacha__);
    byte_596C9E0 = 1;
  }
  v3 = Method_PointSummonInfoComponent_OnClickGacha__;
  if ( (*((_BYTE *)Method_PointSummonInfoComponent_OnClickGacha__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_PointSummonInfoComponent_OnClickGacha__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (Il2CppObject *)sub_2213CCC(GachaRqParamData_TypeInfo);
  System_Object___ctor(v5, 0);
  this->fields.requestData = (struct GachaRqParamData_o *)v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.requestData, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  requestData = this->fields.requestData;
  if ( !requestData
    || (pointGachaData = this->fields.pointGachaData, requestData->fields.gachaType = 3, !pointGachaData) )
  {
    sub_2213CDC(v12, requestData);
  }
  id = pointGachaData->fields.id;
  warId = pointGachaData->fields.warId;
  clickCallbackFunc = this->fields.clickCallbackFunc;
  requestData->fields.gachaId = id;
  price = this->fields.price;
  requestData->fields.warId = warId;
  requestData->fields.gachaTime = 1;
  requestData->fields.gachaResourceNum = price;
  if ( clickCallbackFunc )
    ((void (__fastcall *)(intptr_t))clickCallbackFunc->fields.invoke_impl)(clickCallbackFunc->fields.method_code);
}


void PointSummonInfoComponent__OnClickMutiGacha(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x0
  struct GachaRqParamData_o *requestData; // x1
  struct GachaEntity_o *pointGachaData; // x8
  int32_t gachaTime; // w10
  int32_t id; // w9
  int32_t warId; // w8
  int v18; // w11
  struct PointSummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_596C9E1 & 1) == 0 )
  {
    sub_2213A60(&GachaRqParamData_TypeInfo);
    sub_2213A60(&Method_PointSummonInfoComponent_OnClickMutiGacha__);
    byte_596C9E1 = 1;
  }
  v3 = Method_PointSummonInfoComponent_OnClickMutiGacha__;
  if ( (*((_BYTE *)Method_PointSummonInfoComponent_OnClickMutiGacha__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_PointSummonInfoComponent_OnClickMutiGacha__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (Il2CppObject *)sub_2213CCC(GachaRqParamData_TypeInfo);
  System_Object___ctor(v5, 0);
  this->fields.requestData = (struct GachaRqParamData_o *)v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.requestData, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  requestData = this->fields.requestData;
  if ( !requestData
    || (pointGachaData = this->fields.pointGachaData, requestData->fields.gachaType = 3, !pointGachaData) )
  {
    sub_2213CDC(v12, requestData);
  }
  gachaTime = this->fields.gachaTime;
  id = pointGachaData->fields.id;
  warId = pointGachaData->fields.warId;
  v18 = this->fields.price * gachaTime;
  requestData->fields.gachaId = id;
  requestData->fields.warId = warId;
  clickCallbackFunc = this->fields.clickCallbackFunc;
  requestData->fields.gachaTime = gachaTime;
  requestData->fields.gachaResourceNum = v18;
  if ( clickCallbackFunc )
    ((void (__fastcall *)(intptr_t))clickCallbackFunc->fields.invoke_impl)(clickCallbackFunc->fields.method_code);
}


bool PointSummonInfoComponent__getIsFree(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.isFree;
}


GachaRqParamData_o *PointSummonInfoComponent__getRequetParam(
        PointSummonInfoComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.requestData;
}


void PointSummonInfoComponent__init(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *singleGachaBtnInfo; // x0

  singleGachaBtnInfo = this->fields.singleGachaBtnInfo;
  if ( !singleGachaBtnInfo
    || (UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 0, 0),
        (singleGachaBtnInfo = this->fields.multiGachaBtnInfo) == 0) )
  {
    sub_2213CDC(singleGachaBtnInfo, method);
  }
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 0, 0);
  this->fields.isFree = 0;
}


// local variable allocation has failed, the output may be wrong!
void PointSummonInfoComponent__setDispPointBtn(PointSummonInfoComponent_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *freeGachaBtn; // x0
  float v6; // s8
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.freeGachaBtn;
  if ( !freeGachaBtn )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(freeGachaBtn, isDisp, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.singleBtn;
  if ( !freeGachaBtn )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(freeGachaBtn, isDisp, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiBtn;
  if ( !freeGachaBtn )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(freeGachaBtn, isDisp, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.freeGachaBtnImg;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v7.fields.a = 1.0;
  v6 = isDisp ? 1.0 : 0.5;
  v7.fields.r = v6;
  v7.fields.g = v6;
  v7.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v7, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.singleBtnImg;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v8.fields.r = v6;
  v8.fields.g = v6;
  v8.fields.b = v6;
  v8.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v8, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiBtnImg;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v9.fields.r = v6;
  v9.fields.g = v6;
  v9.fields.b = v6;
  v9.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v9, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.pointSummonBg;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v10.fields.r = v6;
  v10.fields.g = v6;
  v10.fields.b = v6;
  v10.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v10, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.pointGachaDetailLb;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v11.fields.r = v6;
  v11.fields.g = v6;
  v11.fields.b = v6;
  v11.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v11, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.pointNumLb;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v12.fields.r = v6;
  v12.fields.g = v6;
  v12.fields.b = v6;
  v12.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v12, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.freeGachaTxtImg;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v13.fields.r = v6;
  v13.fields.g = v6;
  v13.fields.b = v6;
  v13.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v13, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.singleNumImg;
  if ( !freeGachaBtn
    || (v14.fields.r = v6,
        v14.fields.g = v6,
        v14.fields.b = v6,
        v14.fields.a = 1.0,
        UIWidget__set_color((UIWidget_o *)freeGachaBtn, v14, 0),
        (freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiNumImg) == 0) )
  {
LABEL_17:
    sub_2213CDC(freeGachaBtn, isDisp);
  }
  v15.fields.a = 1.0;
  v15.fields.r = v6;
  v15.fields.g = v6;
  v15.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v15, 0);
}


// local variable allocation has failed, the output may be wrong!
void PointSummonInfoComponent__setMultiGachaNum(
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
  if ( (byte_596C9DF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25105/*"summon_txt_f10"*/);
    sub_2213A60(&StringLiteral_25103/*"summon_txt_f0"*/);
    sub_2213A60(&StringLiteral_25104/*"summon_txt_f01"*/);
    byte_596C9DF = 1;
  }
  v7 = usrFriendPoint / v5;
  this->fields.gachaTime = usrFriendPoint / v5;
  p_gachaTime = &this->fields.gachaTime;
  singleGachaBtnInfo = this->fields.singleGachaBtnInfo;
  if ( v7 < 2 )
  {
    if ( singleGachaBtnInfo )
    {
      UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 1, 0);
      singleGachaBtnInfo = (UnityEngine_GameObject_o *)this->fields.freeGachaTxtImg;
      if ( singleGachaBtnInfo )
      {
        *(_QWORD *)&price = StringLiteral_25104/*"summon_txt_f01"*/;
        goto LABEL_13;
      }
    }
LABEL_14:
    sub_2213CDC(singleGachaBtnInfo, *(_QWORD *)&price);
  }
  if ( !singleGachaBtnInfo )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 0, 0);
  singleGachaBtnInfo = this->fields.multiGachaBtnInfo;
  if ( !singleGachaBtnInfo )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 1, 0);
  v10 = System_Int32__ToString((int)this + 164, 0);
  v11 = System_String__Concat_75651716((System_String_o *)StringLiteral_25103/*"summon_txt_f0"*/, v10, 0);
  if ( *p_gachaTime >= 10 )
  {
    *p_gachaTime = 10;
    *(_QWORD *)&price = StringLiteral_25105/*"summon_txt_f10"*/;
  }
  else
  {
    *(_QWORD *)&price = v11;
  }
  singleGachaBtnInfo = (UnityEngine_GameObject_o *)this->fields.multiNumImg;
  if ( !singleGachaBtnInfo )
    goto LABEL_14;
LABEL_13:
  UISprite__set_spriteName((UISprite_o *)singleGachaBtnInfo, *(System_String_o **)&price, 0);
}


void PointSummonInfoComponent__setPointSummonDispInfo(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x22
  void *Instance; // x0
  const MethodInfo *v5; // x1
  struct GachaEntity_o *pointGachaData; // x8
  UserQuestEntity_o *Entity; // x0
  long double v8; // q0
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x2
  int32_t v12; // w20
  System_DateTime_o v13; // x21
  struct GachaEntity_o *v14; // x8
  UserGachaEntity_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  int64_t freeDrawAt; // x22
  System_DateTime_o v19; // x1
  System_DateTime_o v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t Hour; // w23
  BalanceConfig_c *v24; // x8
  int64_t v25; // x26
  int32_t v26; // w0
  __int64 v27; // x1
  __int64 v28; // x2
  BalanceConfig_c *v29; // x8
  int32_t v30; // w22
  int32_t DailyFreeGachaResetTime; // w27
  int32_t Minute; // w23
  __int64 v33; // x1
  __int64 v34; // x2
  int64_t v35; // x22
  System_DateTime_o v36; // x0
  uint64_t dateData; // x22
  uint64_t v38; // x23
  UILabel_o *pointGachaDetailLb; // x21
  int v40; // w8
  System_String_o *v41; // x22
  Il2CppObject *v42; // x0
  const MethodInfo *v43; // x3
  UILabel_o *pointNumLb; // x19
  int32_t price; // [xsp+Ch] [xbp-64h] BYREF
  System_DateTime_o t1; // [xsp+10h] [xbp-60h] BYREF
  int32_t v47; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_596C9DE & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_10833/*"POINT_SUMMON_DETAIL"*/);
    sub_2213A60(&StringLiteral_5147/*"DAILY_SUMMON_DETAIL"*/);
    sub_2213A60(&StringLiteral_25106/*"summon_txt_free"*/);
    byte_596C9DE = 1;
  }
  v47 = 0;
  t1.fields._dateData = 0;
  PointSummonInfoComponent__init(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !SelfUserGame )
    goto LABEL_59;
  pointGachaData = this->fields.pointGachaData;
  if ( !pointGachaData || !Instance )
    goto LABEL_59;
  Entity = UserQuestMaster__GetEntity(
             (UserQuestMaster_o *)Instance,
             SelfUserGame->fields.userId,
             pointGachaData->fields.condQuestId,
             0);
  if ( !Entity || UserQuestEntity__getClearNum(Entity, 0) < 1 )
  {
    PointSummonInfoComponent__init(this, v5);
    return;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
    v9 = sub_224B908(v8);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_224B908(v8);
  Instance = **(void ***)(v10 + 184);
  if ( !Instance )
    goto LABEL_59;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TblUserMaster___);
  if ( !Instance )
    goto LABEL_59;
  Instance = TblUserMaster__getUserData((TblUserMaster_o *)Instance, SelfUserGame->fields.userId, 0);
  if ( !Instance )
    goto LABEL_59;
  v12 = *((_DWORD *)Instance + 6);
  v47 = v12;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v11);
  v13.fields._dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_59;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserGachaMaster___);
  v14 = this->fields.pointGachaData;
  if ( !v14 || !Instance )
    goto LABEL_59;
  v15 = UserGachaMaster__GetEntity((UserGachaMaster_o *)Instance, SelfUserGame->fields.userId, v14->fields.id, 0);
  if ( !v15 )
    goto LABEL_44;
  freeDrawAt = v15->fields.freeDrawAt;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16, v17);
  t1.fields._dateData = NetworkManager__getServerDateTime_48347596(freeDrawAt, 0).fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v19.fields._dateData, v20.fields._dateData);
  Hour = System_DateTime__get_Hour((System_DateTime_o)&t1, 0);
  v24 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v21, v22);
    v24 = BalanceConfig_TypeInfo;
  }
  if ( Hour >= v24->static_fields->DailyFreeGachaResetTime )
    v25 = freeDrawAt + 86400;
  else
    v25 = freeDrawAt;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v21, v22);
  v26 = System_DateTime__get_Hour((System_DateTime_o)&t1, 0);
  v29 = BalanceConfig_TypeInfo;
  v30 = v26;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v27, v28);
    v29 = BalanceConfig_TypeInfo;
  }
  DailyFreeGachaResetTime = v29->static_fields->DailyFreeGachaResetTime;
  Minute = System_DateTime__get_Minute((System_DateTime_o)&t1, 0);
  v35 = v25
      - (System_DateTime__get_Second((System_DateTime_o)&t1, 0)
       + 60 * (Minute + 60 * (v30 - DailyFreeGachaResetTime)));
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v33, v34);
  v36.fields._dateData = NetworkManager__getServerDateTime_48347596(v35, 0).fields._dateData;
  if ( v35 < 1 )
    goto LABEL_44;
  dateData = v36.fields._dateData;
  v38 = t1.fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v16, v17);
  if ( System_DateTime__op_LessThanOrEqual((System_DateTime_o)v38, (System_DateTime_o)dateData, 0) )
  {
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v16, v17);
    if ( System_DateTime__op_LessThanOrEqual((System_DateTime_o)dateData, v13, 0) )
LABEL_44:
      this->fields.isFree = 1;
  }
  pointGachaDetailLb = this->fields.pointGachaDetailLb;
  v40 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( this->fields.isFree )
  {
    if ( !v40 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5147/*"DAILY_SUMMON_DETAIL"*/, 0);
    if ( pointGachaDetailLb )
    {
      UILabel__set_text(pointGachaDetailLb, (System_String_o *)Instance, 0);
      Instance = this->fields.freeGachaTxtImg;
      if ( Instance )
      {
        UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_25106/*"summon_txt_free"*/, 0);
        Instance = this->fields.singleGachaBtnInfo;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
          goto LABEL_57;
        }
      }
    }
LABEL_59:
    sub_2213CDC(Instance, v5);
  }
  if ( !v40 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_10833/*"POINT_SUMMON_DETAIL"*/, 0);
  price = this->fields.price;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &price);
  Instance = System_String__Format(v41, v42, 0);
  if ( !pointGachaDetailLb )
    goto LABEL_59;
  UILabel__set_text(pointGachaDetailLb, (System_String_o *)Instance, 0);
  PointSummonInfoComponent__setMultiGachaNum(this, this->fields.price, v12, v43);
LABEL_57:
  pointNumLb = this->fields.pointNumLb;
  Instance = System_Int32__ToString((int32_t)&v47, 0);
  if ( !pointNumLb )
    goto LABEL_59;
  UILabel__set_text(pointNumLb, (System_String_o *)Instance, 0);
}


void PointSummonInfoComponent__setPointSummonInfo(
        PointSummonInfoComponent_o *this,
        GachaEntity_o *pointGachaEnt,
        PointSummonInfoComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x1

  PointSummonInfoComponent__init(this, (const MethodInfo *)pointGachaEnt);
  this->fields.clickCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickCallbackFunc,
    (int32_t)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.isFree = 0;
  if ( !pointGachaEnt )
    sub_2213CDC(v13, v14);
  this->fields.price = GachaEntity__getPrice(pointGachaEnt, 0);
  this->fields.pointGachaData = pointGachaEnt;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.pointGachaData,
    (int32_t)pointGachaEnt,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  PointSummonInfoComponent__setPointSummonDispInfo(this, v21);
}


void PointSummonInfoComponent_ClickDelegate___ctor(
        PointSummonInfoComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_20062CC;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( this->fields.method_is_virtual )
      {
        v15 = sub_2213B30(method);
        v16 = sub_22140B4(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_20063C4;
          else
            v13 = sub_2006388;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_2006304;
        }
        else
        {
          v13 = sub_20062DC;
        }
      }
      else
      {
        v13 = sub_20062B0;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_2006268;
}


System_IAsyncResult_o *PointSummonInfoComponent_ClickDelegate__BeginInvoke(
        PointSummonInfoComponent_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  GachaRqParamData_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = paramData;
  return sub_2213A14(this, &v6, callback, object);
}


void PointSummonInfoComponent_ClickDelegate__EndInvoke(
        PointSummonInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void PointSummonInfoComponent_ClickDelegate__Invoke(
        PointSummonInfoComponent_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, GachaRqParamData_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    paramData,
    this->fields.method);
}