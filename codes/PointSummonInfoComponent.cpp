void __fastcall PointSummonInfoComponent___ctor(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.gachaTime = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PointSummonInfoComponent__OnClickGacha(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  GachaRqParamData_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  struct GachaRqParamData_o *requestData; // x1
  struct GachaEntity_o *pointGachaData; // x8
  struct PointSummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4A4AA35 & 1) == 0 )
  {
    sub_1B863B8(&GachaRqParamData_TypeInfo, method);
    sub_1B863B8(&Method_PointSummonInfoComponent_OnClickGacha__, v3);
    byte_4A4AA35 = 1;
  }
  v4 = Method_PointSummonInfoComponent_OnClickGacha__;
  if ( (*((_BYTE *)Method_PointSummonInfoComponent_OnClickGacha__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B863D0(Method_PointSummonInfoComponent_OnClickGacha__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B8639C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  v6 = (GachaRqParamData_o *)sub_1B86604(GachaRqParamData_TypeInfo);
  GachaRqParamData___ctor(v6, 0LL);
  this->fields.requestData = v6;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.requestData, (int32_t)v6, v7, v8);
  requestData = this->fields.requestData;
  if ( !requestData || (requestData->fields.gachaType = 3, (pointGachaData = this->fields.pointGachaData) == 0LL) )
    sub_1B86614(v9, requestData);
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
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  GachaRqParamData_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  struct GachaRqParamData_o *requestData; // x1
  struct GachaEntity_o *pointGachaData; // x8
  int32_t gachaTime; // w8
  struct PointSummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4A4AA36 & 1) == 0 )
  {
    sub_1B863B8(&GachaRqParamData_TypeInfo, method);
    sub_1B863B8(&Method_PointSummonInfoComponent_OnClickMutiGacha__, v3);
    byte_4A4AA36 = 1;
  }
  v4 = Method_PointSummonInfoComponent_OnClickMutiGacha__;
  if ( (*((_BYTE *)Method_PointSummonInfoComponent_OnClickMutiGacha__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B863D0(Method_PointSummonInfoComponent_OnClickMutiGacha__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B8639C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  v6 = (GachaRqParamData_o *)sub_1B86604(GachaRqParamData_TypeInfo);
  GachaRqParamData___ctor(v6, 0LL);
  this->fields.requestData = v6;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.requestData, (int32_t)v6, v7, v8);
  requestData = this->fields.requestData;
  if ( !requestData || (requestData->fields.gachaType = 3, (pointGachaData = this->fields.pointGachaData) == 0LL) )
    sub_1B86614(v9, requestData);
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
    sub_1B86614(singleGachaBtnInfo, method);
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
    sub_1B86614(freeGachaBtn, isDisp);
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
  __int64 v8; // x1
  int v9; // w8
  int32_t *p_gachaTime; // x20
  UnityEngine_GameObject_o *singleGachaBtnInfo; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x0

  v5 = price;
  if ( (byte_4A4AA34 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_23518/*"summon_txt_f10"*/, *(_QWORD *)&price);
    sub_1B863B8(&StringLiteral_23516/*"summon_txt_f0"*/, v7);
    sub_1B863B8(&StringLiteral_23517/*"summon_txt_f01"*/, v8);
    byte_4A4AA34 = 1;
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
      *(_QWORD *)&price = StringLiteral_23517/*"summon_txt_f01"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1B86614(singleGachaBtnInfo, *(_QWORD *)&price);
  }
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 0, 0LL);
  singleGachaBtnInfo = this->fields.multiGachaBtnInfo;
  if ( !singleGachaBtnInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 1, 0LL);
  v12 = System_Int32__ToString((int)this + 164, 0LL);
  v13 = System_String__Concat_61645176((System_String_o *)StringLiteral_23516/*"summon_txt_f0"*/, v12, 0LL);
  if ( *p_gachaTime >= 10 )
  {
    *p_gachaTime = 10;
    *(_QWORD *)&price = StringLiteral_23518/*"summon_txt_f10"*/;
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
  long double v20; // q0
  __int64 v21; // x0
  __int64 v22; // x0
  uint64_t dateData; // x20
  struct GachaEntity_o *v24; // x8
  UserGachaEntity_o *v25; // x0
  int64_t freeDrawAt; // x21
  int32_t Hour; // w22
  BalanceConfig_c *v28; // x8
  int64_t v29; // x25
  int32_t v30; // w0
  BalanceConfig_c *v31; // x8
  int32_t v32; // w21
  int32_t DailyFreeGachaResetTime; // w26
  int32_t Minute; // w22
  int64_t v35; // x21
  System_DateTime_o v36; // x0
  uint64_t v37; // x21
  uint64_t v38; // x22
  _BOOL4 isFree; // w21
  UILabel_o *pointGachaDetailLb; // x20
  System_String_o *v41; // x21
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x0
  const MethodInfo *v46; // x3
  UILabel_o *pointNumLb; // x19
  System_DateTime_o t1; // [xsp+8h] [xbp-58h] BYREF
  int32_t price; // [xsp+18h] [xbp-48h] BYREF
  int32_t usrFriendPoint; // [xsp+1Ch] [xbp-44h] BYREF
  System_DateTime_o v51; // 0:x0.8
  System_DateTime_o v52; // 0:x0.8
  System_DateTime_o v53; // 0:x0.8
  System_DateTime_o v54; // 0:x0.8
  System_DateTime_o v55; // 0:x0.8
  System_DateTime_o v56; // 0:x0.8
  System_DateTime_o v57; // 0:x1.8
  System_DateTime_o v58; // 0:x1.8

  if ( (byte_4A4AA33 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_TblUserMaster___, v3);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserGachaMaster___, v4);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserQuestMaster___, v5);
    sub_1B863B8(&System_DateTime_TypeInfo, v6);
    sub_1B863B8(&int_TypeInfo, v7);
    sub_1B863B8(&LocalizationManager_TypeInfo, v8);
    sub_1B863B8(&NetworkManager_TypeInfo, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B863B8(&StringLiteral_10245/*"POINT_SUMMON_DETAIL"*/, v12);
    sub_1B863B8(&StringLiteral_4927/*"DAILY_SUMMON_DETAIL"*/, v13);
    sub_1B863B8(&StringLiteral_23519/*"summon_txt_free"*/, v14);
    byte_4A4AA33 = 1;
  }
  t1.fields._dateData = 0LL;
  PointSummonInfoComponent__init(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    PointSummonInfoComponent__init(this, v17);
    return;
  }
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1BD6A48(v20);
  v22 = *(_QWORD *)(*(_QWORD *)(v21 + 192) + 16LL);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1BD6A48(v20);
  Instance = **(void ***)(v22 + 184);
  if ( !Instance )
    goto LABEL_58;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_TblUserMaster___);
  if ( !Instance )
    goto LABEL_58;
  Instance = TblUserMaster__getUserData((TblUserMaster_o *)Instance, SelfUserGame->fields.userId, 0LL);
  if ( !Instance )
    goto LABEL_58;
  usrFriendPoint = *((_DWORD *)Instance + 6);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  v24 = this->fields.pointGachaData;
  if ( !v24 || !Instance )
    goto LABEL_58;
  v25 = UserGachaMaster__GetEntity((UserGachaMaster_o *)Instance, SelfUserGame->fields.userId, v24->fields.id, 0LL);
  if ( !v25 )
    goto LABEL_44;
  freeDrawAt = v25->fields.freeDrawAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  t1.fields._dateData = NetworkManager__getServerDateTime_39522968(freeDrawAt, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v51.fields._dateData = (uint64_t)&t1;
  Hour = System_DateTime__get_Hour(v51, 0LL);
  v28 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v28 = BalanceConfig_TypeInfo;
  }
  if ( Hour >= v28->static_fields->DailyFreeGachaResetTime )
    v29 = freeDrawAt + 86400;
  else
    v29 = freeDrawAt;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v52.fields._dateData = (uint64_t)&t1;
  v30 = System_DateTime__get_Hour(v52, 0LL);
  v31 = BalanceConfig_TypeInfo;
  v32 = v30;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v31 = BalanceConfig_TypeInfo;
  }
  v53.fields._dateData = (uint64_t)&t1;
  DailyFreeGachaResetTime = v31->static_fields->DailyFreeGachaResetTime;
  Minute = System_DateTime__get_Minute(v53, 0LL);
  v54.fields._dateData = (uint64_t)&t1;
  v35 = v29 - (System_DateTime__get_Second(v54, 0LL) + 60 * (Minute + 60 * (v32 - DailyFreeGachaResetTime)));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v36.fields._dateData = NetworkManager__getServerDateTime_39522968(v35, 0LL).fields._dateData;
  if ( v35 <= 0 )
    goto LABEL_44;
  v37 = v36.fields._dateData;
  v38 = t1.fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v55.fields._dateData = v38;
  v57.fields._dateData = v37;
  if ( System_DateTime__op_LessThanOrEqual(v55, v57, 0LL) )
  {
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v56.fields._dateData = v37;
    v58.fields._dateData = dateData;
    if ( System_DateTime__op_LessThanOrEqual(v56, v58, 0LL) )
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
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_4927/*"DAILY_SUMMON_DETAIL"*/, 0LL);
      if ( pointGachaDetailLb )
      {
        UILabel__set_text(pointGachaDetailLb, (System_String_o *)Instance, 0LL);
        Instance = this->fields.freeGachaTxtImg;
        if ( Instance )
        {
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_23519/*"summon_txt_free"*/, 0LL);
          Instance = this->fields.singleGachaBtnInfo;
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            goto LABEL_55;
          }
        }
      }
LABEL_58:
      sub_1B86614(Instance, v17);
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isFree )
      goto LABEL_47;
  }
  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_10245/*"POINT_SUMMON_DETAIL"*/, 0LL);
  price = this->fields.price;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &price, v42, v43, v44);
  Instance = System_String__Format(v41, v45, 0LL);
  if ( !pointGachaDetailLb )
    goto LABEL_58;
  UILabel__set_text(pointGachaDetailLb, (System_String_o *)Instance, 0LL);
  PointSummonInfoComponent__setMultiGachaNum(this, this->fields.price, usrFriendPoint, v46);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  PointSummonInfoComponent__init(this, (const MethodInfo *)pointGachaEnt);
  this->fields.clickCallbackFunc = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.clickCallbackFunc, (int32_t)callback, v7, v8);
  this->fields.isFree = 0;
  if ( !pointGachaEnt )
    sub_1B86614(v9, v10);
  this->fields.price = GachaEntity__getPrice(pointGachaEnt, 0LL);
  this->fields.pointGachaData = pointGachaEnt;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.pointGachaData, (int32_t)pointGachaEnt, v11, v12);
  PointSummonInfoComponent__setPointSummonDispInfo(this, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PointSummonInfoComponent_ClickDelegate___ctor(
        PointSummonInfoComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19CE860;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v11 = sub_1B86470(v6);
        v12 = sub_1B8692C(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19CE95C;
          else
            v9 = (Il2CppObject *)sub_19CE920;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19CE89C;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19CE870;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19CE840;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CE7F8;
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
  return (System_IAsyncResult_o *)sub_1B8636C(this, &v6, callback, object);
}


void __fastcall PointSummonInfoComponent_ClickDelegate__EndInvoke(
        PointSummonInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
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