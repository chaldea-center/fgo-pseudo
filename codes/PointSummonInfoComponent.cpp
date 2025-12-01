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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x0
  struct GachaRqParamData_o *requestData; // x1
  struct GachaEntity_o *pointGachaData; // x8
  struct PointSummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4CC3848 & 1) == 0 )
  {
    sub_1C713B0(&GachaRqParamData_TypeInfo);
    sub_1C713B0(&Method_PointSummonInfoComponent_OnClickGacha__);
    byte_4CC3848 = 1;
  }
  v3 = Method_PointSummonInfoComponent_OnClickGacha__;
  if ( (*((_BYTE *)Method_PointSummonInfoComponent_OnClickGacha__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_PointSummonInfoComponent_OnClickGacha__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (Il2CppObject *)sub_1C715FC(GachaRqParamData_TypeInfo);
  System_Object___ctor(v5, 0);
  this->fields.requestData = (struct GachaRqParamData_o *)v5;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.requestData, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  requestData = this->fields.requestData;
  if ( !requestData || (requestData->fields.gachaType = 3, (pointGachaData = this->fields.pointGachaData) == 0) )
    sub_1C71608(v12, requestData);
  requestData->fields.gachaId = pointGachaData->fields.id;
  requestData->fields.warId = pointGachaData->fields.warId;
  requestData->fields.gachaTime = 1;
  requestData->fields.gachaResourceNum = this->fields.price;
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    ((void (__fastcall *)(intptr_t))clickCallbackFunc->fields.invoke_impl)(clickCallbackFunc->fields.method_code);
}


void PointSummonInfoComponent__OnClickMutiGacha(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x0
  struct GachaRqParamData_o *requestData; // x1
  struct GachaEntity_o *pointGachaData; // x8
  int32_t gachaTime; // w8
  struct PointSummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4CC3849 & 1) == 0 )
  {
    sub_1C713B0(&GachaRqParamData_TypeInfo);
    sub_1C713B0(&Method_PointSummonInfoComponent_OnClickMutiGacha__);
    byte_4CC3849 = 1;
  }
  v3 = Method_PointSummonInfoComponent_OnClickMutiGacha__;
  if ( (*((_BYTE *)Method_PointSummonInfoComponent_OnClickMutiGacha__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_PointSummonInfoComponent_OnClickMutiGacha__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (Il2CppObject *)sub_1C715FC(GachaRqParamData_TypeInfo);
  System_Object___ctor(v5, 0);
  this->fields.requestData = (struct GachaRqParamData_o *)v5;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.requestData, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  requestData = this->fields.requestData;
  if ( !requestData || (requestData->fields.gachaType = 3, (pointGachaData = this->fields.pointGachaData) == 0) )
    sub_1C71608(v12, requestData);
  requestData->fields.gachaId = pointGachaData->fields.id;
  requestData->fields.warId = pointGachaData->fields.warId;
  gachaTime = this->fields.gachaTime;
  requestData->fields.gachaTime = gachaTime;
  requestData->fields.gachaResourceNum = this->fields.price * gachaTime;
  clickCallbackFunc = this->fields.clickCallbackFunc;
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
    sub_1C71608(singleGachaBtnInfo, method);
  }
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 0, 0);
  this->fields.isFree = 0;
}


// local variable allocation has failed, the output may be wrong!
void PointSummonInfoComponent__setDispPointBtn(PointSummonInfoComponent_o *this, bool isDisp, const MethodInfo *method)
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
  UnityEngine_Behaviour__set_enabled(freeGachaBtn, isDisp, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.singleBtn;
  if ( !freeGachaBtn )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(freeGachaBtn, v5, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiBtn;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v7 = isDisp ? 1.0 : 0.5;
  UnityEngine_Behaviour__set_enabled(freeGachaBtn, isDisp, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.freeGachaBtnImg;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v8.fields.a = 1.0;
  v8.fields.r = v7;
  v8.fields.g = v7;
  v8.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v8, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.singleBtnImg;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v9.fields.a = 1.0;
  v9.fields.r = v7;
  v9.fields.g = v7;
  v9.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v9, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiBtnImg;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v10.fields.a = 1.0;
  v10.fields.r = v7;
  v10.fields.g = v7;
  v10.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v10, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.pointSummonBg;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v11.fields.a = 1.0;
  v11.fields.r = v7;
  v11.fields.g = v7;
  v11.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v11, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.pointGachaDetailLb;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v12.fields.a = 1.0;
  v12.fields.r = v7;
  v12.fields.g = v7;
  v12.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v12, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.pointNumLb;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v13.fields.a = 1.0;
  v13.fields.r = v7;
  v13.fields.g = v7;
  v13.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v13, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.freeGachaTxtImg;
  if ( !freeGachaBtn )
    goto LABEL_17;
  v14.fields.a = 1.0;
  v14.fields.r = v7;
  v14.fields.g = v7;
  v14.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v14, 0);
  freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.singleNumImg;
  if ( !freeGachaBtn
    || (v15.fields.a = 1.0,
        v15.fields.r = v7,
        v15.fields.g = v7,
        v15.fields.b = v7,
        UIWidget__set_color((UIWidget_o *)freeGachaBtn, v15, 0),
        (freeGachaBtn = (UnityEngine_Behaviour_o *)this->fields.multiNumImg) == 0) )
  {
LABEL_17:
    sub_1C71608(freeGachaBtn, isDisp);
  }
  v16.fields.a = 1.0;
  v16.fields.r = v7;
  v16.fields.g = v7;
  v16.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)freeGachaBtn, v16, 0);
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
  if ( (byte_4CC3847 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23952/*"summon_txt_f10"*/);
    sub_1C713B0(&StringLiteral_23950/*"summon_txt_f0"*/);
    sub_1C713B0(&StringLiteral_23951/*"summon_txt_f01"*/);
    byte_4CC3847 = 1;
  }
  v7 = usrFriendPoint / v5;
  this->fields.gachaTime = usrFriendPoint / v5;
  p_gachaTime = &this->fields.gachaTime;
  singleGachaBtnInfo = this->fields.singleGachaBtnInfo;
  if ( !singleGachaBtnInfo )
    goto LABEL_13;
  if ( v7 < 2 )
  {
    UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 1, 0);
    singleGachaBtnInfo = (UnityEngine_GameObject_o *)this->fields.freeGachaTxtImg;
    if ( singleGachaBtnInfo )
    {
      *(_QWORD *)&price = StringLiteral_23951/*"summon_txt_f01"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1C71608(singleGachaBtnInfo, *(_QWORD *)&price);
  }
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 0, 0);
  singleGachaBtnInfo = this->fields.multiGachaBtnInfo;
  if ( !singleGachaBtnInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(singleGachaBtnInfo, 1, 0);
  v10 = System_Int32__ToString((int)this + 164, 0);
  v11 = System_String__Concat_64031724((System_String_o *)StringLiteral_23950/*"summon_txt_f0"*/, v10, 0);
  if ( *p_gachaTime >= 10 )
  {
    *p_gachaTime = 10;
    *(_QWORD *)&price = StringLiteral_23952/*"summon_txt_f10"*/;
  }
  else
  {
    *(_QWORD *)&price = v11;
  }
  singleGachaBtnInfo = (UnityEngine_GameObject_o *)this->fields.multiNumImg;
  if ( !singleGachaBtnInfo )
    goto LABEL_13;
LABEL_12:
  UISprite__set_spriteName((UISprite_o *)singleGachaBtnInfo, *(System_String_o **)&price, 0);
}


void PointSummonInfoComponent__setPointSummonDispInfo(PointSummonInfoComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x21
  void *Instance; // x0
  const MethodInfo *v5; // x1
  struct GachaEntity_o *pointGachaData; // x8
  UserQuestEntity_o *Entity; // x0
  long double v8; // q0
  __int64 v9; // x0
  __int64 v10; // x0
  System_DateTime_o v11; // x20
  struct GachaEntity_o *v12; // x8
  UserGachaEntity_o *v13; // x0
  int64_t freeDrawAt; // x21
  System_DateTime_o v15; // x0
  int32_t Hour; // w22
  BalanceConfig_c *v17; // x8
  int64_t v18; // x25
  System_DateTime_o v19; // x0
  int32_t v20; // w0
  BalanceConfig_c *v21; // x8
  int32_t v22; // w21
  System_DateTime_o v23; // x0
  int32_t DailyFreeGachaResetTime; // w26
  int32_t Minute; // w22
  System_DateTime_o v26; // x0
  int64_t v27; // x21
  System_DateTime_o v28; // x0
  uint64_t dateData; // x21
  uint64_t v30; // x22
  System_DateTime_o v31; // x0
  System_DateTime_o v32; // x1
  System_DateTime_o v33; // x0
  System_DateTime_o v34; // x1
  _BOOL4 isFree; // w21
  UILabel_o *pointGachaDetailLb; // x20
  System_String_o *v37; // x21
  Il2CppObject *v38; // x0
  const MethodInfo *v39; // x3
  UILabel_o *pointNumLb; // x19
  System_DateTime_o t1; // [xsp+8h] [xbp-58h] BYREF
  int32_t price; // [xsp+18h] [xbp-48h] BYREF
  int32_t usrFriendPoint; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4CC3846 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserGachaMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C713B0(&System_DateTime_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_10404/*"POINT_SUMMON_DETAIL"*/);
    sub_1C713B0(&StringLiteral_4951/*"DAILY_SUMMON_DETAIL"*/);
    sub_1C713B0(&StringLiteral_23953/*"summon_txt_free"*/);
    byte_4CC3846 = 1;
  }
  t1.fields._dateData = 0;
  PointSummonInfoComponent__init(this, method);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !SelfUserGame )
    goto LABEL_58;
  pointGachaData = this->fields.pointGachaData;
  if ( !pointGachaData || !Instance )
    goto LABEL_58;
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
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C47444(v8);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C47444(v8);
  Instance = **(void ***)(v10 + 184);
  if ( !Instance )
    goto LABEL_58;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_TblUserMaster___);
  if ( !Instance )
    goto LABEL_58;
  Instance = TblUserMaster__getUserData((TblUserMaster_o *)Instance, SelfUserGame->fields.userId, 0);
  if ( !Instance )
    goto LABEL_58;
  usrFriendPoint = *((_DWORD *)Instance + 6);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v11.fields._dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_58;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserGachaMaster___);
  v12 = this->fields.pointGachaData;
  if ( !v12 || !Instance )
    goto LABEL_58;
  v13 = UserGachaMaster__GetEntity((UserGachaMaster_o *)Instance, SelfUserGame->fields.userId, v12->fields.id, 0);
  if ( !v13 )
    goto LABEL_44;
  freeDrawAt = v13->fields.freeDrawAt;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  t1.fields._dateData = NetworkManager__getServerDateTime_41644032(freeDrawAt, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v15.fields._dateData = (uint64_t)&t1;
  Hour = System_DateTime__get_Hour(v15, 0);
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  if ( Hour >= v17->static_fields->DailyFreeGachaResetTime )
    v18 = freeDrawAt + 86400;
  else
    v18 = freeDrawAt;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v19.fields._dateData = (uint64_t)&t1;
  v20 = System_DateTime__get_Hour(v19, 0);
  v21 = BalanceConfig_TypeInfo;
  v22 = v20;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  v23.fields._dateData = (uint64_t)&t1;
  DailyFreeGachaResetTime = v21->static_fields->DailyFreeGachaResetTime;
  Minute = System_DateTime__get_Minute(v23, 0);
  v26.fields._dateData = (uint64_t)&t1;
  v27 = v18 - (System_DateTime__get_Second(v26, 0) + 60 * (Minute + 60 * (v22 - DailyFreeGachaResetTime)));
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  v28.fields._dateData = NetworkManager__getServerDateTime_41644032(v27, 0).fields._dateData;
  if ( v27 <= 0 )
    goto LABEL_44;
  dateData = v28.fields._dateData;
  v30 = t1.fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v31.fields._dateData = v30;
  v32.fields._dateData = dateData;
  if ( System_DateTime__op_LessThanOrEqual(v31, v32, 0) )
  {
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v33.fields._dateData = dateData;
    v34.fields._dateData = v11.fields._dateData;
    if ( System_DateTime__op_LessThanOrEqual(v33, v34, 0) )
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
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_4951/*"DAILY_SUMMON_DETAIL"*/, 0);
      if ( pointGachaDetailLb )
      {
        UILabel__set_text(pointGachaDetailLb, (System_String_o *)Instance, 0);
        Instance = this->fields.freeGachaTxtImg;
        if ( Instance )
        {
          UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)StringLiteral_23953/*"summon_txt_free"*/, 0);
          Instance = this->fields.singleGachaBtnInfo;
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
            goto LABEL_55;
          }
        }
      }
LABEL_58:
      sub_1C71608(Instance, v5);
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isFree )
      goto LABEL_47;
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_10404/*"POINT_SUMMON_DETAIL"*/, 0);
  price = this->fields.price;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &price);
  Instance = System_String__Format(v37, v38, 0);
  if ( !pointGachaDetailLb )
    goto LABEL_58;
  UILabel__set_text(pointGachaDetailLb, (System_String_o *)Instance, 0);
  PointSummonInfoComponent__setMultiGachaNum(this, this->fields.price, usrFriendPoint, v39);
LABEL_55:
  pointNumLb = this->fields.pointNumLb;
  Instance = System_Int32__ToString((int32_t)&usrFriendPoint, 0);
  if ( !pointNumLb )
    goto LABEL_58;
  UILabel__set_text(pointNumLb, (System_String_o *)Instance, 0);
}


void PointSummonInfoComponent__setPointSummonInfo(
        PointSummonInfoComponent_o *this,
        GachaEntity_o *pointGachaEnt,
        PointSummonInfoComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x1

  PointSummonInfoComponent__init(this, (const MethodInfo *)pointGachaEnt);
  this->fields.clickCallbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickCallbackFunc,
    (int32_t)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.isFree = 0;
  if ( !pointGachaEnt )
    sub_1C71608(v13, v14);
  this->fields.price = GachaEntity__getPrice(pointGachaEnt, 0);
  this->fields.pointGachaData = pointGachaEnt;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.pointGachaData,
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AA2DBC;
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
        v15 = sub_1C71468(method);
        v16 = sub_1C719FC(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_1AA2EB8;
          else
            v13 = sub_1AA2E7C;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_1AA2DF8;
        }
        else
        {
          v13 = sub_1AA2DCC;
        }
      }
      else
      {
        v13 = sub_1AA2D9C;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AA2D54;
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
  return (System_IAsyncResult_o *)sub_1C71364(this, &v6, callback, object);
}


void PointSummonInfoComponent_ClickDelegate__EndInvoke(
        PointSummonInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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