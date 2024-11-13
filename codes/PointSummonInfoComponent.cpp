void __fastcall PointSummonInfoComponent___ctor(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.gachaTime = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PointSummonInfoComponent__OnClickGacha(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  Il2CppObject *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x0
  struct GachaRqParamData_o *requestData; // x1
  struct GachaEntity_o *pointGachaData; // x8
  struct PointSummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4B128B2 & 1) == 0 )
  {
    sub_1BCA7E0(&GachaRqParamData_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PointSummonInfoComponent_OnClickGacha__, v4, v5);
    byte_4B128B2 = 1;
  }
  v6 = Method_PointSummonInfoComponent_OnClickGacha__;
  if ( (*((_BYTE *)Method_PointSummonInfoComponent_OnClickGacha__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_PointSummonInfoComponent_OnClickGacha__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  v11 = (Il2CppObject *)sub_1BCAA2C(GachaRqParamData_TypeInfo, v8, v9, v10);
  System_Object___ctor(v11, 0LL);
  this->fields.requestData = (struct GachaRqParamData_o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.requestData, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  requestData = this->fields.requestData;
  if ( !requestData || (requestData->fields.gachaType = 3, (pointGachaData = this->fields.pointGachaData) == 0LL) )
    sub_1BCAA3C(v18, requestData);
  requestData->fields.gachaId = pointGachaData->fields.id;
  requestData->fields.warId = pointGachaData->fields.warId;
  requestData->fields.gachaTime = 1;
  requestData->fields.gachaResourceNum = this->fields.price;
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *))clickCallbackFunc->fields.m_target)(clickCallbackFunc->fields.original_method_info);
}


void __fastcall PointSummonInfoComponent__OnClickMutiGacha(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  Il2CppObject *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x0
  struct GachaRqParamData_o *requestData; // x1
  struct GachaEntity_o *pointGachaData; // x8
  int32_t gachaTime; // w8
  struct PointSummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4B128B3 & 1) == 0 )
  {
    sub_1BCA7E0(&GachaRqParamData_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PointSummonInfoComponent_OnClickMutiGacha__, v4, v5);
    byte_4B128B3 = 1;
  }
  v6 = Method_PointSummonInfoComponent_OnClickMutiGacha__;
  if ( (*((_BYTE *)Method_PointSummonInfoComponent_OnClickMutiGacha__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_PointSummonInfoComponent_OnClickMutiGacha__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  v11 = (Il2CppObject *)sub_1BCAA2C(GachaRqParamData_TypeInfo, v8, v9, v10);
  System_Object___ctor(v11, 0LL);
  this->fields.requestData = (struct GachaRqParamData_o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.requestData, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  requestData = this->fields.requestData;
  if ( !requestData || (requestData->fields.gachaType = 3, (pointGachaData = this->fields.pointGachaData) == 0LL) )
    sub_1BCAA3C(v18, requestData);
  requestData->fields.gachaId = pointGachaData->fields.id;
  requestData->fields.warId = pointGachaData->fields.warId;
  gachaTime = this->fields.gachaTime;
  requestData->fields.gachaTime = gachaTime;
  requestData->fields.gachaResourceNum = this->fields.price * gachaTime;
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *))clickCallbackFunc->fields.m_target)(clickCallbackFunc->fields.original_method_info);
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
    sub_1BCAA3C(singleGachaBtnInfo, method);
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
  float v7; // s8
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

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
  v7 = isDisp ? 1.0 : 0.5;
  UnityEngine_Behaviour__set_enabled(freeGachaBtn, isDisp, 0LL);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.freeGachaBtnImg;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v8.fields.a = 1.0;
  v8.fields.r = v7;
  v8.fields.g = v7;
  v8.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v8, 0LL);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.singleBtnImg;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v9.fields.a = 1.0;
  v9.fields.r = v7;
  v9.fields.g = v7;
  v9.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v9, 0LL);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiBtnImg;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v10.fields.a = 1.0;
  v10.fields.r = v7;
  v10.fields.g = v7;
  v10.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v10, 0LL);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.pointSummonBg;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v11.fields.a = 1.0;
  v11.fields.r = v7;
  v11.fields.g = v7;
  v11.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v11, 0LL);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.pointGachaDetailLb;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v12.fields.a = 1.0;
  v12.fields.r = v7;
  v12.fields.g = v7;
  v12.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v12, 0LL);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.pointNumLb;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v13.fields.a = 1.0;
  v13.fields.r = v7;
  v13.fields.g = v7;
  v13.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v13, 0LL);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.freeGachaTxtImg;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v14.fields.a = 1.0;
  v14.fields.r = v7;
  v14.fields.g = v7;
  v14.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v14, 0LL);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.singleNumImg;
  if ( !freeGachaBtn
    || (v15.fields.a = 1.0,
        v15.fields.r = v7,
        v15.fields.g = v7,
        v15.fields.b = v7,
        UIWidget__set_color((UIWidget_o *)freeGachaBtn, v15, 0LL),
        (freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiNumImg) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(freeGachaBtn, isDisp);
  }
  v16.fields.a = 1.0;
  v16.fields.r = v7;
  v16.fields.g = v7;
  v16.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v16, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int v11; // w8
  int32_t *p_gachaTime; // x20
  UnityEngine_GameObject_o *singleGachaBtnInfo; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x0

  v5 = price;
  if ( (byte_4B128B1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23925/*"summon_txt_f10"*/, *(_QWORD *)&price, *(_QWORD *)&usrFriendPoint);
    sub_1BCA7E0(&StringLiteral_23923/*"summon_txt_f0"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_23924/*"summon_txt_f01"*/, v9, v10);
    byte_4B128B1 = 1;
  }
  v11 = usrFriendPoint / v5;
  this->fields.gachaTime = usrFriendPoint / v5;
  p_gachaTime = &this->fields.gachaTime;
  singleGachaBtnInfo = this->fields.singleGachaBtnInfo;
  if ( !singleGachaBtnInfo )
    goto LABEL_13;
  if ( v11 < 2 )
  {
    UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 1, 0LL);
    singleGachaBtnInfo = (UnityEngine_GameObject_o *)this->fields.freeGachaTxtImg;
    if ( singleGachaBtnInfo )
    {
      *(_QWORD *)&price = StringLiteral_23924/*"summon_txt_f01"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1BCAA3C(singleGachaBtnInfo, *(_QWORD *)&price);
  }
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 0, 0LL);
  singleGachaBtnInfo = this->fields.multiGachaBtnInfo;
  if ( !singleGachaBtnInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 1, 0LL);
  v14 = System_Int32__ToString((int)this + 164, 0LL);
  v15 = System_String__Concat_62401220((System_String_o *)StringLiteral_23923/*"summon_txt_f0"*/, v14, 0LL);
  if ( *p_gachaTime >= 10 )
  {
    *p_gachaTime = 10;
    *(_QWORD *)&price = StringLiteral_23925/*"summon_txt_f10"*/;
  }
  else
  {
    *(_QWORD *)&price = v15;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  const MethodInfo *v30; // x1
  struct GachaEntity_o *pointGachaData; // x8
  UserQuestEntity_o *Entity; // x0
  long double v33; // q0
  __int64 v34; // x0
  __int64 v35; // x0
  uint64_t dateData; // x20
  struct GachaEntity_o *v37; // x8
  UserGachaEntity_o *v38; // x0
  __int64 v39; // x1
  int64_t freeDrawAt; // x21
  __int64 v41; // x1
  __int64 v42; // x1
  int32_t Hour; // w22
  BalanceConfig_c *v44; // x8
  int64_t v45; // x25
  int32_t v46; // w0
  __int64 v47; // x1
  BalanceConfig_c *v48; // x8
  int32_t v49; // w21
  int32_t DailyFreeGachaResetTime; // w26
  int32_t Minute; // w22
  __int64 v52; // x1
  int64_t v53; // x21
  System_DateTime_o v54; // x0
  uint64_t v55; // x21
  uint64_t v56; // x22
  _BOOL4 isFree; // w21
  UILabel_o *pointGachaDetailLb; // x20
  System_String_o *v59; // x21
  Il2CppObject *v60; // x0
  const MethodInfo *v61; // x3
  UILabel_o *pointNumLb; // x19
  System_DateTime_o t1; // [xsp+8h] [xbp-58h] BYREF
  int32_t price; // [xsp+18h] [xbp-48h] BYREF
  int32_t usrFriendPoint; // [xsp+1Ch] [xbp-44h] BYREF
  System_DateTime_o v66; // 0:x0.8
  System_DateTime_o v67; // 0:x0.8
  System_DateTime_o v68; // 0:x0.8
  System_DateTime_o v69; // 0:x0.8
  System_DateTime_o v70; // 0:x0.8
  System_DateTime_o v71; // 0:x0.8
  System_DateTime_o v72; // 0:x1.8
  System_DateTime_o v73; // 0:x1.8

  if ( (byte_4B128B0 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblUserMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserGachaMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, v8, v9);
    sub_1BCA7E0(&System_DateTime_TypeInfo, v10, v11);
    sub_1BCA7E0(&int_TypeInfo, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&StringLiteral_10533/*"POINT_SUMMON_DETAIL"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_5065/*"DAILY_SUMMON_DETAIL"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_23926/*"summon_txt_free"*/, v26, v27);
    byte_4B128B0 = 1;
  }
  t1.fields._dateData = 0LL;
  PointSummonInfoComponent__init(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !SelfUserGame )
    goto LABEL_58;
  pointGachaData = this->fields.pointGachaData;
  if ( !pointGachaData || !Instance )
    goto LABEL_58;
  Entity = UserQuestMaster__GetEntity(
             (UserQuestMaster_o *)Instance,
             SelfUserGame->fields.userId,
             pointGachaData->fields.condQuestId,
             0LL);
  if ( !Entity || UserQuestEntity__getClearNum(Entity, 0LL) < 1 )
  {
    PointSummonInfoComponent__init(this, v30);
    return;
  }
  v34 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
    v34 = sub_1C1C6BC(v33);
  v35 = *(_QWORD *)(*(_QWORD *)(v34 + 192) + 16LL);
  if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
    v35 = sub_1C1C6BC(v33);
  Instance = **(void ***)(v35 + 184);
  if ( !Instance )
    goto LABEL_58;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblUserMaster___);
  if ( !Instance )
    goto LABEL_58;
  Instance = TblUserMaster__getUserData((TblUserMaster_o *)Instance, SelfUserGame->fields.userId, 0LL);
  if ( !Instance )
    goto LABEL_58;
  usrFriendPoint = *((_DWORD *)Instance + 6);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v30);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  v37 = this->fields.pointGachaData;
  if ( !v37 || !Instance )
    goto LABEL_58;
  v38 = UserGachaMaster__GetEntity((UserGachaMaster_o *)Instance, SelfUserGame->fields.userId, v37->fields.id, 0LL);
  if ( !v38 )
    goto LABEL_44;
  freeDrawAt = v38->fields.freeDrawAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v39);
  t1.fields._dateData = NetworkManager__getServerDateTime_39270492(freeDrawAt, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v41);
  v66.fields._dateData = (uint64_t)&t1;
  Hour = System_DateTime__get_Hour(v66, 0LL);
  v44 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v42);
    v44 = BalanceConfig_TypeInfo;
  }
  if ( Hour >= v44->static_fields->DailyFreeGachaResetTime )
    v45 = freeDrawAt + 86400;
  else
    v45 = freeDrawAt;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v42);
  v67.fields._dateData = (uint64_t)&t1;
  v46 = System_DateTime__get_Hour(v67, 0LL);
  v48 = BalanceConfig_TypeInfo;
  v49 = v46;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v47);
    v48 = BalanceConfig_TypeInfo;
  }
  v68.fields._dateData = (uint64_t)&t1;
  DailyFreeGachaResetTime = v48->static_fields->DailyFreeGachaResetTime;
  Minute = System_DateTime__get_Minute(v68, 0LL);
  v69.fields._dateData = (uint64_t)&t1;
  v53 = v45 - (System_DateTime__get_Second(v69, 0LL) + 60 * (Minute + 60 * (v49 - DailyFreeGachaResetTime)));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v52);
  v54.fields._dateData = NetworkManager__getServerDateTime_39270492(v53, 0LL).fields._dateData;
  if ( v53 <= 0 )
    goto LABEL_44;
  v55 = v54.fields._dateData;
  v56 = t1.fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v39);
  v70.fields._dateData = v56;
  v72.fields._dateData = v55;
  if ( System_DateTime__op_LessThanOrEqual(v70, v72, 0LL) )
  {
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v39);
    v71.fields._dateData = v55;
    v73.fields._dateData = dateData;
    if ( System_DateTime__op_LessThanOrEqual(v71, v73, 0LL) )
LABEL_44:
      this->fields.isFree = 1;
  }
  isFree = this->fields.isFree;
  pointGachaDetailLb = this->fields.pointGachaDetailLb;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( this->fields.isFree )
    {
LABEL_47:
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_5065/*"DAILY_SUMMON_DETAIL"*/, 0LL);
      if ( pointGachaDetailLb )
      {
        UILabel__set_text(pointGachaDetailLb, (System_String_o *)Instance, 0LL);
        Instance = this->fields.freeGachaTxtImg;
        if ( Instance )
        {
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_23926/*"summon_txt_free"*/, 0LL);
          Instance = this->fields.singleGachaBtnInfo;
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            goto LABEL_55;
          }
        }
      }
LABEL_58:
      sub_1BCAA3C(Instance, v30);
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
    if ( isFree )
      goto LABEL_47;
  }
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_10533/*"POINT_SUMMON_DETAIL"*/, 0LL);
  price = this->fields.price;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &price);
  Instance = System_String__Format(v59, v60, 0LL);
  if ( !pointGachaDetailLb )
    goto LABEL_58;
  UILabel__set_text(pointGachaDetailLb, (System_String_o *)Instance, 0LL);
  PointSummonInfoComponent__setMultiGachaNum(this, this->fields.price, usrFriendPoint, v61);
LABEL_55:
  pointNumLb = this->fields.pointNumLb;
  Instance = System_Int32__ToString((int32_t)&usrFriendPoint, 0LL);
  if ( !pointNumLb )
    goto LABEL_58;
  UILabel__set_text(pointNumLb, (System_String_o *)Instance, 0LL);
}


void __fastcall PointSummonInfoComponent__setPointSummonInfo(
        PointSummonInfoComponent_o *this,
        GachaEntity_o *pointGachaEnt,
        PointSummonInfoComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x1

  PointSummonInfoComponent__init(this, (const MethodInfo *)pointGachaEnt);
  this->fields.clickCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.clickCallbackFunc,
    (int64_t)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.isFree = 0;
  if ( !pointGachaEnt )
    sub_1BCAA3C(v13, v14);
  this->fields.price = GachaEntity__getPrice(pointGachaEnt, 0LL);
  this->fields.pointGachaData = pointGachaEnt;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.pointGachaData,
    (int64_t)pointGachaEnt,
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A08B94;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v15 = sub_1BCA898(v10);
        v16 = sub_1BCAD54(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A08C90;
          else
            v13 = (Il2CppObject *)sub_1A08C54;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A08BD0;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A08BA4;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A08B74;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A08B2C;
}


System_IAsyncResult_o *__fastcall PointSummonInfoComponent_ClickDelegate__BeginInvoke(
        PointSummonInfoComponent_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  GachaRqParamData_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = paramData;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


void __fastcall PointSummonInfoComponent_ClickDelegate__EndInvoke(
        PointSummonInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall PointSummonInfoComponent_ClickDelegate__Invoke(
        PointSummonInfoComponent_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, GachaRqParamData_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    paramData,
    *(_QWORD *)&this->fields.extra_arg);
}