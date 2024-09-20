void __fastcall PointSummonInfoComponent___ctor(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.gachaTime = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PointSummonInfoComponent__OnClickGacha(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x0
  struct GachaRqParamData_o *requestData; // x1
  struct GachaEntity_o *pointGachaData; // x8
  struct PointSummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4A57925 & 1) == 0 )
  {
    sub_1B885B0(&GachaRqParamData_TypeInfo);
    sub_1B885B0(&Method_PointSummonInfoComponent_OnClickGacha__);
    byte_4A57925 = 1;
  }
  v3 = Method_PointSummonInfoComponent_OnClickGacha__;
  if ( (*((_BYTE *)Method_PointSummonInfoComponent_OnClickGacha__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_PointSummonInfoComponent_OnClickGacha__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  v5 = (Il2CppObject *)sub_1B887FC(GachaRqParamData_TypeInfo);
  System_Object___ctor(v5, 0LL);
  this->fields.requestData = (struct GachaRqParamData_o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestData, (int32_t)v5, v6, v7);
  requestData = this->fields.requestData;
  if ( !requestData || (requestData->fields.gachaType = 3, (pointGachaData = this->fields.pointGachaData) == 0LL) )
    sub_1B8880C(v8, requestData);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x0
  struct GachaRqParamData_o *requestData; // x1
  struct GachaEntity_o *pointGachaData; // x8
  int32_t gachaTime; // w8
  struct PointSummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4A57926 & 1) == 0 )
  {
    sub_1B885B0(&GachaRqParamData_TypeInfo);
    sub_1B885B0(&Method_PointSummonInfoComponent_OnClickMutiGacha__);
    byte_4A57926 = 1;
  }
  v3 = Method_PointSummonInfoComponent_OnClickMutiGacha__;
  if ( (*((_BYTE *)Method_PointSummonInfoComponent_OnClickMutiGacha__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_PointSummonInfoComponent_OnClickMutiGacha__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  v5 = (Il2CppObject *)sub_1B887FC(GachaRqParamData_TypeInfo);
  System_Object___ctor(v5, 0LL);
  this->fields.requestData = (struct GachaRqParamData_o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestData, (int32_t)v5, v6, v7);
  requestData = this->fields.requestData;
  if ( !requestData || (requestData->fields.gachaType = 3, (pointGachaData = this->fields.pointGachaData) == 0LL) )
    sub_1B8880C(v8, requestData);
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
    sub_1B8880C(singleGachaBtnInfo, method);
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
    sub_1B8880C(freeGachaBtn, isDisp);
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
  int v7; // w8
  int32_t *p_gachaTime; // x20
  UnityEngine_GameObject_o *singleGachaBtnInfo; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x0

  v5 = price;
  if ( (byte_4A57924 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23677/*"summon_txt_f10"*/);
    sub_1B885B0(&StringLiteral_23675/*"summon_txt_f0"*/);
    sub_1B885B0(&StringLiteral_23676/*"summon_txt_f01"*/);
    byte_4A57924 = 1;
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
      *(_QWORD *)&price = StringLiteral_23676/*"summon_txt_f01"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1B8880C(singleGachaBtnInfo, *(_QWORD *)&price);
  }
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 0, 0LL);
  singleGachaBtnInfo = this->fields.multiGachaBtnInfo;
  if ( !singleGachaBtnInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 1, 0LL);
  v10 = System_Int32__ToString((int)this + 164, 0LL);
  v11 = System_String__Concat_61707032((System_String_o *)StringLiteral_23675/*"summon_txt_f0"*/, v10, 0LL);
  if ( *p_gachaTime >= 10 )
  {
    *p_gachaTime = 10;
    *(_QWORD *)&price = StringLiteral_23677/*"summon_txt_f10"*/;
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
  __int64 v8; // x0
  __int64 v9; // x0
  uint64_t dateData; // x20
  struct GachaEntity_o *v11; // x8
  UserGachaEntity_o *v12; // x0
  int64_t freeDrawAt; // x21
  int32_t Hour; // w22
  BalanceConfig_c *v15; // x8
  int64_t v16; // x25
  int32_t v17; // w0
  BalanceConfig_c *v18; // x8
  int32_t v19; // w21
  int32_t DailyFreeGachaResetTime; // w26
  int32_t Minute; // w22
  int64_t v22; // x21
  System_DateTime_o v23; // x0
  uint64_t v24; // x21
  uint64_t v25; // x22
  _BOOL4 isFree; // w21
  UILabel_o *pointGachaDetailLb; // x20
  System_String_o *v28; // x21
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x0
  const MethodInfo *v33; // x3
  UILabel_o *pointNumLb; // x19
  System_DateTime_o t1; // [xsp+8h] [xbp-58h] BYREF
  int32_t price; // [xsp+18h] [xbp-48h] BYREF
  int32_t usrFriendPoint; // [xsp+1Ch] [xbp-44h] BYREF
  System_DateTime_o v38; // 0:x0.8
  System_DateTime_o v39; // 0:x0.8
  System_DateTime_o v40; // 0:x0.8
  System_DateTime_o v41; // 0:x0.8
  System_DateTime_o v42; // 0:x0.8
  System_DateTime_o v43; // 0:x0.8
  System_DateTime_o v44; // 0:x1.8
  System_DateTime_o v45; // 0:x1.8

  if ( (byte_4A57923 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_10400/*"POINT_SUMMON_DETAIL"*/);
    sub_1B885B0(&StringLiteral_4992/*"DAILY_SUMMON_DETAIL"*/);
    sub_1B885B0(&StringLiteral_23678/*"summon_txt_free"*/);
    byte_4A57923 = 1;
  }
  t1.fields._dateData = 0LL;
  PointSummonInfoComponent__init(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    PointSummonInfoComponent__init(this, v5);
    return;
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(v8);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BDA48C(v9);
  Instance = **(void ***)(v9 + 184);
  if ( !Instance )
    goto LABEL_58;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TblUserMaster___);
  if ( !Instance )
    goto LABEL_58;
  Instance = TblUserMaster__getUserData((TblUserMaster_o *)Instance, SelfUserGame->fields.userId, 0LL);
  if ( !Instance )
    goto LABEL_58;
  usrFriendPoint = *((_DWORD *)Instance + 6);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserGachaMaster___);
  v11 = this->fields.pointGachaData;
  if ( !v11 || !Instance )
    goto LABEL_58;
  v12 = UserGachaMaster__GetEntity((UserGachaMaster_o *)Instance, SelfUserGame->fields.userId, v11->fields.id, 0LL);
  if ( !v12 )
    goto LABEL_44;
  freeDrawAt = v12->fields.freeDrawAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  t1.fields._dateData = NetworkManager__getServerDateTime_38479168(freeDrawAt, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v38.fields._dateData = (uint64_t)&t1;
  Hour = System_DateTime__get_Hour(v38, 0LL);
  v15 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  if ( Hour >= v15->static_fields->DailyFreeGachaResetTime )
    v16 = freeDrawAt + 86400;
  else
    v16 = freeDrawAt;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v39.fields._dateData = (uint64_t)&t1;
  v17 = System_DateTime__get_Hour(v39, 0LL);
  v18 = BalanceConfig_TypeInfo;
  v19 = v17;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  v40.fields._dateData = (uint64_t)&t1;
  DailyFreeGachaResetTime = v18->static_fields->DailyFreeGachaResetTime;
  Minute = System_DateTime__get_Minute(v40, 0LL);
  v41.fields._dateData = (uint64_t)&t1;
  v22 = v16 - (System_DateTime__get_Second(v41, 0LL) + 60 * (Minute + 60 * (v19 - DailyFreeGachaResetTime)));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v23.fields._dateData = NetworkManager__getServerDateTime_38479168(v22, 0LL).fields._dateData;
  if ( v22 <= 0 )
    goto LABEL_44;
  v24 = v23.fields._dateData;
  v25 = t1.fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v42.fields._dateData = v25;
  v44.fields._dateData = v24;
  if ( System_DateTime__op_LessThanOrEqual(v42, v44, 0LL) )
  {
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v43.fields._dateData = v24;
    v45.fields._dateData = dateData;
    if ( System_DateTime__op_LessThanOrEqual(v43, v45, 0LL) )
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
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_4992/*"DAILY_SUMMON_DETAIL"*/, 0LL);
      if ( pointGachaDetailLb )
      {
        UILabel__set_text(pointGachaDetailLb, (System_String_o *)Instance, 0LL);
        Instance = this->fields.freeGachaTxtImg;
        if ( Instance )
        {
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_23678/*"summon_txt_free"*/, 0LL);
          Instance = this->fields.singleGachaBtnInfo;
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            goto LABEL_55;
          }
        }
      }
LABEL_58:
      sub_1B8880C(Instance, v5);
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isFree )
      goto LABEL_47;
  }
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_10400/*"POINT_SUMMON_DETAIL"*/, 0LL);
  price = this->fields.price;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &price, v29, v30, v31);
  Instance = System_String__Format(v28, v32, 0LL);
  if ( !pointGachaDetailLb )
    goto LABEL_58;
  UILabel__set_text(pointGachaDetailLb, (System_String_o *)Instance, 0LL);
  PointSummonInfoComponent__setMultiGachaNum(this, this->fields.price, usrFriendPoint, v33);
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
  int32_t v8; // w3
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x1

  PointSummonInfoComponent__init(this, (const MethodInfo *)pointGachaEnt);
  this->fields.clickCallbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clickCallbackFunc, (int32_t)callback, v7, v8);
  this->fields.isFree = 0;
  if ( !pointGachaEnt )
    sub_1B8880C(v9, v10);
  this->fields.price = GachaEntity__getPrice(pointGachaEnt, 0LL);
  this->fields.pointGachaData = pointGachaEnt;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.pointGachaData, (int32_t)pointGachaEnt, v11, v12);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19CA878;
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
        v11 = sub_1B88668(v6);
        v12 = sub_1B88B24(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19CA974;
          else
            v9 = (Il2CppObject *)sub_19CA938;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19CA8B4;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19CA888;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19CA858;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CA810;
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
  return (System_IAsyncResult_o *)sub_1B88564(this, &v6, callback, object);
}


void __fastcall PointSummonInfoComponent_ClickDelegate__EndInvoke(
        PointSummonInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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