void __fastcall PointSummonInfoComponent___ctor(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.gachaTime = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PointSummonInfoComponent__OnClickGacha(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  GachaRqParamData_o *v8; // x21
  GachaRqParamData_o **p_requestData; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x1
  struct GachaEntity_o *pointGachaData; // x8
  struct GachaRqParamData_o *requestData; // x9
  struct GachaEntity_o *v20; // x8
  struct GachaRqParamData_o *v21; // x9
  PointSummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x0

  if ( (byte_42E8437 & 1) == 0 )
  {
    sub_B5D5C4(&GachaRqParamData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E8437 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v8 = (GachaRqParamData_o *)sub_B5D694(GachaRqParamData_TypeInfo);
  GachaRqParamData___ctor(v8, 0LL);
  this->fields.requestData = v8;
  p_requestData = &this->fields.requestData;
  sub_B5D560(
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
    || (requestData->fields.gachaId = pointGachaData->fields.id, (v20 = this->fields.pointGachaData) == 0LL)
    || (v21 = this->fields.requestData) == 0LL
    || (v21->fields.warId = v20->fields.warId, !*p_requestData)
    || ((*p_requestData)->fields.gachaTime = 1, !*p_requestData) )
  {
LABEL_16:
    sub_B5D69C(v16, v17);
  }
  (*p_requestData)->fields.gachaResourceNum = this->fields.price;
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    PointSummonInfoComponent_ClickDelegate__Invoke(clickCallbackFunc, *p_requestData, 0LL);
}


void __fastcall PointSummonInfoComponent__OnClickMutiGacha(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  GachaRqParamData_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1
  struct GachaEntity_o *pointGachaData; // x8
  struct GachaRqParamData_o *requestData; // x9
  struct GachaEntity_o *v19; // x8
  struct GachaRqParamData_o *v20; // x9
  struct GachaRqParamData_o *v21; // x8
  struct GachaRqParamData_o *v22; // x8
  PointSummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x0

  if ( (byte_42E8438 & 1) == 0 )
  {
    sub_B5D5C4(&GachaRqParamData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E8438 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v8 = (GachaRqParamData_o *)sub_B5D694(GachaRqParamData_TypeInfo);
  GachaRqParamData___ctor(v8, 0LL);
  this->fields.requestData = v8;
  sub_B5D560(
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
    || (requestData->fields.gachaId = pointGachaData->fields.id, (v19 = this->fields.pointGachaData) == 0LL)
    || (v20 = this->fields.requestData) == 0LL
    || (v20->fields.warId = v19->fields.warId, (v21 = this->fields.requestData) == 0LL)
    || (v21->fields.gachaTime = this->fields.gachaTime, (v22 = this->fields.requestData) == 0LL) )
  {
LABEL_16:
    sub_B5D69C(v15, v16);
  }
  v22->fields.gachaResourceNum = this->fields.price * this->fields.gachaTime;
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
    sub_B5D69C(singleGachaBtnInfo, method);
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
    sub_B5D69C(freeGachaBtn, isDisp);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w8
  int32_t *p_gachaTime; // x20
  UnityEngine_GameObject_o *singleGachaBtnInfo; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x0

  v5 = price;
  if ( (byte_42E8436 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22743/*"summon_txt_f10"*/, price, usrFriendPoint, method);
    sub_B5D5C4(&StringLiteral_22741/*"summon_txt_f0"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_22742/*"summon_txt_f01"*/, v10, v11, v12);
    byte_42E8436 = 1;
  }
  v13 = usrFriendPoint / v5;
  this->fields.gachaTime = usrFriendPoint / v5;
  p_gachaTime = &this->fields.gachaTime;
  singleGachaBtnInfo = this->fields.singleGachaBtnInfo;
  if ( !singleGachaBtnInfo )
    goto LABEL_13;
  if ( v13 < 2 )
  {
    UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 1, 0LL);
    singleGachaBtnInfo = (UnityEngine_GameObject_o *)this->fields.freeGachaTxtImg;
    if ( singleGachaBtnInfo )
    {
      *(_QWORD *)&price = StringLiteral_22742/*"summon_txt_f01"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_B5D69C(singleGachaBtnInfo, *(_QWORD *)&price);
  }
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 0, 0LL);
  singleGachaBtnInfo = this->fields.multiGachaBtnInfo;
  if ( !singleGachaBtnInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 1, 0LL);
  v16 = System_Int32__ToString((int)this + 156, 0LL);
  v17 = System_String__Concat_44577788((System_String_o *)StringLiteral_22741/*"summon_txt_f0"*/, v16, 0LL);
  if ( *p_gachaTime >= 10 )
  {
    *p_gachaTime = 10;
    *(_QWORD *)&price = StringLiteral_22743/*"summon_txt_f10"*/;
  }
  else
  {
    *(_QWORD *)&price = v17;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  const MethodInfo *v43; // x1
  struct GachaEntity_o *pointGachaData; // x8
  UserQuestEntity_o *Entity; // x0
  __int64 v46; // x20
  __int64 v47; // x20
  uint64_t dateData; // x20
  struct GachaEntity_o *v49; // x8
  UserGachaEntity_o *v50; // x0
  int64_t freeDrawAt; // x21
  int32_t Hour; // w22
  BalanceConfig_c *v53; // x8
  int64_t v54; // x24
  int32_t v55; // w0
  BalanceConfig_c *v56; // x8
  int32_t v57; // w21
  int32_t DailyFreeGachaResetTime; // w25
  int32_t Minute; // w22
  int64_t v60; // x21
  System_DateTime_o v61; // x0
  uint64_t v62; // x21
  uint64_t v63; // x22
  UILabel_o *pointGachaDetailLb; // x20
  System_String_o *v65; // x21
  Il2CppObject *v66; // x0
  const MethodInfo *v67; // x3
  UILabel_o *pointNumLb; // x19
  System_DateTime_o t1; // [xsp+8h] [xbp-48h] BYREF
  int32_t price; // [xsp+18h] [xbp-38h] BYREF
  int32_t usrFriendPoint; // [xsp+1Ch] [xbp-34h] BYREF
  System_DateTime_o v72; // 0:x0.8
  System_DateTime_o v73; // 0:x0.8
  System_DateTime_o v74; // 0:x0.8
  System_DateTime_o v75; // 0:x0.8
  System_DateTime_o v76; // 0:x0.8
  System_DateTime_o v77; // 0:x0.8
  System_DateTime_o v78; // 0:x1.8
  System_DateTime_o v79; // 0:x1.8

  if ( (byte_42E8435 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblUserMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserGachaMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v11, v12, v13);
    sub_B5D5C4(&System_DateTime_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&int_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&NetworkManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_10576/*"POINT_SUMMON_DETAIL"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_4624/*"DAILY_SUMMON_DETAIL"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_22744/*"summon_txt_free"*/, v38, v39, v40);
    byte_42E8435 = 1;
  }
  usrFriendPoint = 0;
  t1.fields.dateData = 0LL;
  PointSummonInfoComponent__init(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    PointSummonInfoComponent__init(this, v43);
    return;
  }
  v46 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v46 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v47 = **(_QWORD **)(v46 + 192);
  if ( (*(_BYTE *)(v47 + 306) & 1) == 0 )
    sub_AF52C4(v47);
  Instance = **(void ***)(v47 + 184);
  if ( !Instance )
    goto LABEL_65;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblUserMaster___);
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserGachaMaster___);
  v49 = this->fields.pointGachaData;
  if ( !v49 || !Instance )
    goto LABEL_65;
  v50 = UserGachaMaster__GetEntity((UserGachaMaster_o *)Instance, SelfUserGame->fields.userId, v49->fields.id, 0LL);
  if ( !v50 )
    goto LABEL_47;
  freeDrawAt = v50->fields.freeDrawAt;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  t1.fields.dateData = NetworkManager__getServerDateTime_26077756(freeDrawAt, 0LL).fields.dateData;
  v72.fields.dateData = (uint64_t)&t1;
  Hour = System_DateTime__get_Hour(v72, 0LL);
  v53 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v53 = BalanceConfig_TypeInfo;
  }
  v73.fields.dateData = (uint64_t)&t1;
  if ( Hour >= v53->static_fields->DailyFreeGachaResetTime )
    v54 = freeDrawAt + 86400;
  else
    v54 = freeDrawAt;
  v55 = System_DateTime__get_Hour(v73, 0LL);
  v56 = BalanceConfig_TypeInfo;
  v57 = v55;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v56 = BalanceConfig_TypeInfo;
  }
  v74.fields.dateData = (uint64_t)&t1;
  DailyFreeGachaResetTime = v56->static_fields->DailyFreeGachaResetTime;
  Minute = System_DateTime__get_Minute(v74, 0LL);
  v75.fields.dateData = (uint64_t)&t1;
  v60 = v54 - (System_DateTime__get_Second(v75, 0LL) + 60 * (Minute + 60 * (v57 - DailyFreeGachaResetTime)));
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v61.fields.dateData = NetworkManager__getServerDateTime_26077756(v60, 0LL).fields.dateData;
  if ( v60 <= 0 )
    goto LABEL_47;
  v62 = v61.fields.dateData;
  v63 = t1.fields.dateData;
  if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_DateTime_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  }
  v76.fields.dateData = v63;
  v78.fields.dateData = v62;
  if ( System_DateTime__op_LessThanOrEqual(v76, v78, 0LL) )
  {
    if ( (BYTE3(System_DateTime_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !System_DateTime_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    }
    v77.fields.dateData = v62;
    v79.fields.dateData = dateData;
    if ( System_DateTime__op_LessThanOrEqual(v77, v79, 0LL) )
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
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_4624/*"DAILY_SUMMON_DETAIL"*/, 0LL);
    if ( pointGachaDetailLb )
    {
      UILabel__set_text(pointGachaDetailLb, (System_String_o *)Instance, 0LL);
      Instance = this->fields.freeGachaTxtImg;
      if ( Instance )
      {
        UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_22744/*"summon_txt_free"*/, 0LL);
        Instance = this->fields.singleGachaBtnInfo;
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          goto LABEL_62;
        }
      }
    }
LABEL_65:
    sub_B5D69C(Instance, v43);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_10576/*"POINT_SUMMON_DETAIL"*/, 0LL);
  price = this->fields.price;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &price);
  Instance = System_String__Format(v65, v66, 0LL);
  if ( !pointGachaDetailLb )
    goto LABEL_65;
  UILabel__set_text(pointGachaDetailLb, (System_String_o *)Instance, 0LL);
  PointSummonInfoComponent__setMultiGachaNum(this, this->fields.price, usrFriendPoint, v67);
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
  sub_B5D560(
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
    sub_B5D69C(v13, v14);
  this->fields.price = GachaEntity__getPrice(pointGachaEnt, 0LL);
  this->fields.pointGachaData = pointGachaEnt;
  sub_B5D560(
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
  sub_B5D560(p_method);
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
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


void __fastcall PointSummonInfoComponent_ClickDelegate__EndInvoke(
        PointSummonInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  GachaRqParamData_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(GachaRqParamData_o *, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, GachaRqParamData_o *, _QWORD); // x0
  PointSummonInfoComponent_ClickDelegate_o *v29; // x8
  __int64 v30; // x21
  __int64 *v31; // x22
  void (__fastcall *v32)(GachaRqParamData_o *, __int64); // x23
  char v33; // w0
  int v34; // w8
  char v35; // w23
  char v36; // w0
  __int64 v37; // x3
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x10
  _DWORD *v42; // x11
  char v43; // w22
  char v44; // w0
  __int64 v45; // x3
  GachaRqParamData_c *klass; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  PointSummonInfoComponent_ClickDelegate_o *v51; // [xsp+8h] [xbp-48h] BYREF

  v51 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v51;
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
      v29 = v7[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(GachaRqParamData_o *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v29->fields.extra_arg, paramData, method);
      v33 = sub_B5D5F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 1 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v43 = sub_B5D5EC(v30);
            v44 = sub_B5D9F0(v30);
            if ( (v43 & 1) != 0 )
            {
              if ( (v44 & 1) != 0 )
              {
                klass = paramData->klass;
                v47 = *(_QWORD *)(v30 + 24);
                v48 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&paramData->klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v47 )
                  {
                    ++v49;
                    p_offset += 4;
                    if ( v49 >= *(unsigned __int16 *)&paramData->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v48);
                }
                else
                {
LABEL_57:
                  v25 = sub_AF54C0(paramData, v47, v48, v45);
                }
                v16 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&paramData->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(GachaRqParamData_o *, _QWORD))sub_B5D674(v16, v30);
              (*v26)(paramData, v26);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v30 + 72);
              if ( (v44 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
                v12 = paramData->klass;
                if ( *(_WORD *)&paramData->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&paramData->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v9));
                }
                else
                {
LABEL_11:
                  v15 = sub_AF54C0(paramData, class_0, v9, v11);
                }
                (*(void (__fastcall **)(GachaRqParamData_o *, _QWORD))v15)(paramData, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(GachaRqParamData_o *, _QWORD))&paramData->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  paramData,
                  *((_QWORD *)&paramData->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(paramData, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B5D5EC(v30);
          v36 = sub_B5D9F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v38 = *v31;
              v39 = *(_QWORD *)(v30 + 24);
              v40 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v41 = 0LL;
                v42 = (_DWORD *)(*(_QWORD *)(v38 + 176) + 8LL);
                while ( *((_QWORD *)v42 - 1) != v39 )
                {
                  ++v41;
                  v42 += 4;
                  if ( v41 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v38 + 16LL * (*v42 + (int)v40) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AF54C0(v31, v39, v40, v37);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))sub_B5D674(v24, v30);
            (*v28)(v31, paramData, v28);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v18 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v17) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AF54C0(v31, v18, v17, v19);
              }
              (*(void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))v23)(
                v31,
                paramData,
                *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))(*v31
                                                                              + 16LL * *(unsigned __int16 *)(v30 + 72)
                                                                              + 312))(
                v31,
                paramData,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, GachaRqParamData_o *, __int64))v32)(v31, paramData, v30);
    }
  }
}