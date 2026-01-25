void PaySummonInfoComponent___ctor(PaySummonInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.gachaTime = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PaySummonInfoComponent__ClearAlpha(
        PaySummonInfoComponent_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  TweenAlpha_o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CEA9E0 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA9E0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)target, 0, 0) )
  {
    if ( !byte_4CE7E59 )
    {
      sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E59 = 1;
    }
    TweenScale__Begin(target, 0.2, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
  v5 = TweenAlpha__Begin(target, 0.2, 0.0, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v5, 0, 0);
  if ( v6 )
  {
    if ( !v5 )
      sub_1C7BD40(v6, v7);
    v5->fields.method = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v5->fields.eventReceiver = gameObject;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&v5->fields.eventReceiver,
      (int32_t)gameObject,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
}


void PaySummonInfoComponent__MoveAlpha(
        PaySummonInfoComponent_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x19
  PaySummonInfoComponent_o *v5; // x21
  TweenAlpha_o *v6; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  v4 = (UnityEngine_Component_o *)this;
  if ( (byte_4CEA9DF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this = (PaySummonInfoComponent_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA9DF = 1;
  }
  if ( !target )
    goto LABEL_18;
  this = (PaySummonInfoComponent_o *)UnityEngine_GameObject__get_transform(target, 0);
  v5 = this;
  if ( !byte_4CE7E59 )
  {
    this = (PaySummonInfoComponent_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  if ( !v5 )
    goto LABEL_18;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v5,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  if ( !UnityEngine_GameObject__get_activeSelf(target, 0) )
    UnityEngine_GameObject__SetActive(target, 1, 0);
  if ( !byte_4CE7E5E )
  {
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  TweenScale__Begin(target, 0.2, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  this = (PaySummonInfoComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                       target,
                                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_18;
  ((void (__fastcall *)(PaySummonInfoComponent_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
    this,
    this->klass[1]._1.castClass,
    0.0);
  v6 = TweenAlpha__Begin(target, 0.2, 1.0, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PaySummonInfoComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v6 )
    {
      v6->fields.method = 3;
      gameObject = UnityEngine_Component__get_gameObject(v4, 0);
      v6->fields.eventReceiver = gameObject;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v6->fields.eventReceiver,
        (int32_t)gameObject,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      return;
    }
LABEL_18:
    sub_1C7BD40(this, target);
  }
}


void PaySummonInfoComponent__OnClickGacha(PaySummonInfoComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *v5; // x21
  struct GachaRqParamData_o **p_requestData; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x0
  struct GachaRqParamData_o *v14; // x1
  struct VaildGachaInfo_o *currentGachaData; // x8
  int32_t warId; // w10
  int32_t ticketItemId; // w9
  int32_t gachaTime; // w8
  struct PaySummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4CEA9E1 & 1) == 0 )
  {
    sub_1C7BAE8(&GachaRqParamData_TypeInfo);
    sub_1C7BAE8(&Method_PaySummonInfoComponent_OnClickGacha__);
    byte_4CEA9E1 = 1;
  }
  v3 = Method_PaySummonInfoComponent_OnClickGacha__;
  if ( (*((_BYTE *)Method_PaySummonInfoComponent_OnClickGacha__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_PaySummonInfoComponent_OnClickGacha__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (Il2CppObject *)sub_1C7BD34(GachaRqParamData_TypeInfo);
  System_Object___ctor(v5, 0);
  this->fields.requestData = (struct GachaRqParamData_o *)v5;
  p_requestData = &this->fields.requestData;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.requestData, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  currentGachaData = this->fields.currentGachaData;
  if ( !currentGachaData || (v14 = *p_requestData) == 0 )
    sub_1C7BD40(v13, v14);
  v14->fields.gachaId = currentGachaData->fields.id;
  warId = currentGachaData->fields.warId;
  v14->fields.ticketItemId = 0;
  v14->fields.warId = warId;
  v14->fields.gachaTime = 1;
  if ( this->fields.isTicket )
  {
    v14->fields.gachaType = 5;
    ticketItemId = currentGachaData->fields.ticketItemId;
    gachaTime = this->fields.gachaTime;
    v14->fields.ticketItemId = ticketItemId;
  }
  else
  {
    v14->fields.gachaType = 1;
    gachaTime = this->fields.price;
  }
  v14->fields.gachaResourceNum = gachaTime;
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    ((void (__fastcall *)(intptr_t))clickCallbackFunc->fields.invoke_impl)(clickCallbackFunc->fields.method_code);
}


int32_t PaySummonInfoComponent__getSummonPrice(PaySummonInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.price;
}


int32_t PaySummonInfoComponent__getUsrStoneNum(PaySummonInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.haveStoneNum;
}


int32_t PaySummonInfoComponent__getUsrTicketNum(PaySummonInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.ticketNum;
}


void PaySummonInfoComponent__init(PaySummonInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *ticketTitle; // x0

  ticketTitle = (UnityEngine_Component_o *)this->fields.ticketTitle;
  if ( !ticketTitle
    || (ticketTitle = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(ticketTitle, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ticketTitle, 0, 0),
        (ticketTitle = (UnityEngine_Component_o *)this->fields.ticketInfo) == 0) )
  {
    sub_1C7BD40(ticketTitle, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ticketTitle, 0, 0);
  this->fields.ticketNum = 0;
  *(_QWORD *)&this->fields.price = 0x100000000LL;
}


void PaySummonInfoComponent__setAlphaSummonBtn(PaySummonInfoComponent_o *this, bool isDisp, const MethodInfo *method)
{
  if ( isDisp )
    PaySummonInfoComponent__MoveAlpha(this, this->fields.payBtnInfo, method);
  else
    PaySummonInfoComponent__ClearAlpha(this, this->fields.payBtnInfo, method);
}


void PaySummonInfoComponent__setCurrentBannerInfo(
        PaySummonInfoComponent_o *this,
        VaildGachaInfo_o *gachaData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( !gachaData )
    sub_1C7BD40(this, 0);
  PaySummonInfoComponent__setEnableSummonBtn(this, gachaData->fields.isOpen, method);
  this->fields.currentGachaData = gachaData;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.currentGachaData,
    (int32_t)gachaData,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void PaySummonInfoComponent__setDispSummonBtn(PaySummonInfoComponent_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *paySummonBtn; // x0
  float v6; // s8
  float v7; // s3 OVERLAPPED
  Il2CppObject *ComponentInChildren_object; // x20
  float v9; // s0
  float v10; // s1
  float v11; // s2
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CEA9DE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA9DE = 1;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBtn;
  if ( !paySummonBtn )
    goto LABEL_23;
  v6 = isDisp ? 1.0 : 0.5;
  UnityEngine_Behaviour__set_enabled(paySummonBtn, isDisp, 0);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBntImg;
  if ( !paySummonBtn )
    goto LABEL_23;
  v12.fields.a = 1.0;
  v12.fields.r = v6;
  v12.fields.g = v6;
  v12.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v12, 0);
  if ( this->fields.isTicket )
  {
    paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.ticketTitle;
    if ( !paySummonBtn )
      goto LABEL_23;
    v7 = 1.0;
LABEL_20:
    v9 = v6;
    v10 = v6;
    v11 = v6;
    UIWidget__set_color((UIWidget_o *)paySummonBtn, *(UnityEngine_Color_o *)(&v7 - 3), 0);
    goto LABEL_21;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.payTitle;
  if ( !paySummonBtn )
    goto LABEL_23;
  v13.fields.a = 1.0;
  v13.fields.r = v6;
  v13.fields.g = v6;
  v13.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v13, 0);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonDetailLb;
  if ( !paySummonBtn )
    goto LABEL_23;
  v14.fields.a = 1.0;
  v14.fields.r = v6;
  v14.fields.g = v6;
  v14.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v14, 0);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneNumLb;
  if ( !paySummonBtn
    || (v15.fields.a = 1.0,
        v15.fields.r = v6,
        v15.fields.g = v6,
        v15.fields.b = v6,
        UIWidget__set_color((UIWidget_o *)paySummonBtn, v15, 0),
        (paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneInfo) == 0) )
  {
LABEL_23:
    sub_1C7BD40(paySummonBtn, isDisp);
  }
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)paySummonBtn,
                                 (const MethodInfo_31C732C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  paySummonBtn = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)ComponentInChildren_object,
                                              0,
                                              0);
  if ( ((unsigned __int8)paySummonBtn & 1) != 0 )
  {
    if ( !ComponentInChildren_object )
      goto LABEL_23;
    v7 = 1.0;
    paySummonBtn = (UnityEngine_Behaviour_o *)ComponentInChildren_object;
    goto LABEL_20;
  }
LABEL_21:
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBg;
  if ( !paySummonBtn )
    goto LABEL_23;
  v16.fields.a = 1.0;
  v16.fields.r = v6;
  v16.fields.g = v6;
  v16.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v16, 0);
}


// local variable allocation has failed, the output may be wrong!
void PaySummonInfoComponent__setEnableSummonBtn(PaySummonInfoComponent_o *this, bool isOpen, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *paySummonBtn; // x0
  float v6; // s8
  float v7; // s3 OVERLAPPED
  Il2CppObject *ComponentInChildren_object; // x20
  float v9; // s0
  float v10; // s1
  float v11; // s2
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CEA9DD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA9DD = 1;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBtn;
  if ( !paySummonBtn )
    goto LABEL_23;
  v6 = isOpen ? 1.0 : 0.5;
  UnityEngine_Behaviour__set_enabled(paySummonBtn, isOpen, 0);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBntImg;
  if ( !paySummonBtn )
    goto LABEL_23;
  v12.fields.a = 1.0;
  v12.fields.r = v6;
  v12.fields.g = v6;
  v12.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v12, 0);
  if ( this->fields.isTicket )
  {
    paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.ticketTitle;
    if ( !paySummonBtn )
      goto LABEL_23;
    v7 = 1.0;
LABEL_20:
    v9 = v6;
    v10 = v6;
    v11 = v6;
    UIWidget__set_color((UIWidget_o *)paySummonBtn, *(UnityEngine_Color_o *)(&v7 - 3), 0);
    goto LABEL_21;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.payTitle;
  if ( !paySummonBtn )
    goto LABEL_23;
  v13.fields.a = 1.0;
  v13.fields.r = v6;
  v13.fields.g = v6;
  v13.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v13, 0);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonDetailLb;
  if ( !paySummonBtn )
    goto LABEL_23;
  v14.fields.a = 1.0;
  v14.fields.r = v6;
  v14.fields.g = v6;
  v14.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v14, 0);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneNumLb;
  if ( !paySummonBtn
    || (v15.fields.a = 1.0,
        v15.fields.r = v6,
        v15.fields.g = v6,
        v15.fields.b = v6,
        UIWidget__set_color((UIWidget_o *)paySummonBtn, v15, 0),
        (paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneInfo) == 0) )
  {
LABEL_23:
    sub_1C7BD40(paySummonBtn, isOpen);
  }
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)paySummonBtn,
                                 (const MethodInfo_31C732C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  paySummonBtn = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)ComponentInChildren_object,
                                              0,
                                              0);
  if ( ((unsigned __int8)paySummonBtn & 1) != 0 )
  {
    if ( !ComponentInChildren_object )
      goto LABEL_23;
    v7 = 1.0;
    paySummonBtn = (UnityEngine_Behaviour_o *)ComponentInChildren_object;
    goto LABEL_20;
  }
LABEL_21:
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBg;
  if ( !paySummonBtn )
    goto LABEL_23;
  v16.fields.a = 1.0;
  v16.fields.r = v6;
  v16.fields.g = v6;
  v16.fields.b = v6;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v16, 0);
}


void PaySummonInfoComponent__setPaySummonDispInfo(PaySummonInfoComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  struct VaildGachaInfo_o *currentGachaData; // x8
  UserItemEntity_o *Entity; // x0
  int32_t num; // w8
  char v9; // w22
  bool v10; // w8
  UILabel_o *paySummonDetailLb; // x21
  System_String_o *v12; // x22
  Il2CppObject *v13; // x0
  UILabel_o *stoneNumLb; // x21
  UILabel_o *ticketNumLb; // x20
  System_String_o *v16; // x21
  Il2CppObject *v17; // x0
  int32_t price; // [xsp+8h] [xbp-28h] BYREF
  int32_t ticketNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEA9DC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_10383/*"PAY_SUMMON_DETAIL"*/);
    sub_1C7BAE8(&StringLiteral_13443/*"TICKET_NUM"*/);
    sub_1C7BAE8(&StringLiteral_13444/*"TICKET_SUMMON_DETAIL"*/);
    byte_4CEA9DC = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_32;
  currentGachaData = this->fields.currentGachaData;
  if ( !currentGachaData || !Instance )
    goto LABEL_32;
  Entity = UserItemMaster__GetEntity(
             (UserItemMaster_o *)Instance,
             SelfUserGame->fields.userId,
             currentGachaData->fields.ticketItemId,
             0);
  if ( Entity && (num = Entity->fields.num, num >= 1) )
  {
    v9 = 0;
    this->fields.ticketNum = num;
    v10 = 1;
  }
  else
  {
    v10 = 0;
    v9 = 1;
  }
  this->fields.isTicket = v10;
  paySummonDetailLb = this->fields.paySummonDetailLb;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( (v9 & 1) != 0 )
    {
LABEL_13:
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_10383/*"PAY_SUMMON_DETAIL"*/, 0);
      price = this->fields.price;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &price);
      Instance = (DataManager_o *)System_String__Format(v12, v13, 0);
      if ( paySummonDetailLb )
      {
        UILabel__set_text(paySummonDetailLb, (System_String_o *)Instance, 0);
        Instance = (DataManager_o *)this->fields.ticketTitle;
        if ( Instance )
        {
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
            Instance = (DataManager_o *)this->fields.ticketInfo;
            if ( Instance )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
              Instance = (DataManager_o *)this->fields.payTitle;
              if ( Instance )
              {
                Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Instance,
                                              0);
                if ( Instance )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
                  Instance = (DataManager_o *)this->fields.stoneInfo;
                  if ( Instance )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
                    stoneNumLb = this->fields.stoneNumLb;
                    this->fields.haveStoneNum = SelfUserGame->fields.stone;
                    Instance = (DataManager_o *)System_Int32__ToString((int)SelfUserGame + 184, 0);
                    if ( stoneNumLb )
                    {
                      UILabel__set_text(stoneNumLb, (System_String_o *)Instance, 0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_32:
      sub_1C7BD40(Instance, v5);
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( (v9 & 1) != 0 )
      goto LABEL_13;
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13444/*"TICKET_SUMMON_DETAIL"*/, 0);
  if ( !paySummonDetailLb )
    goto LABEL_32;
  UILabel__set_text(paySummonDetailLb, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.ticketTitle;
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  ticketNumLb = this->fields.ticketNumLb;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_13443/*"TICKET_NUM"*/, 0);
  ticketNum = this->fields.ticketNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ticketNum);
  Instance = (DataManager_o *)System_String__Format(v16, v17, 0);
  if ( !ticketNumLb )
    goto LABEL_32;
  UILabel__set_text(ticketNumLb, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.ticketInfo;
  if ( !Instance )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (DataManager_o *)this->fields.payTitle;
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.stoneInfo;
  if ( !Instance )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
}


void PaySummonInfoComponent__setPaySummonInfo(
        PaySummonInfoComponent_o *this,
        VaildGachaInfo_o *gachaData,
        PaySummonInfoComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x1

  PaySummonInfoComponent__init(this, (const MethodInfo *)gachaData);
  this->fields.clickCallbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickCallbackFunc,
    (int32_t)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( gachaData )
  {
    this->fields.price = gachaData->fields.price;
    PaySummonInfoComponent__setEnableSummonBtn(this, gachaData->fields.isOpen, v13);
    this->fields.currentGachaData = gachaData;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.currentGachaData,
      (int32_t)gachaData,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    PaySummonInfoComponent__setPaySummonDispInfo(this, v20);
  }
  else
  {
    PaySummonInfoComponent__setEnableSummonBtn(this, 0, v13);
  }
}


void PaySummonInfoComponent_ClickDelegate___ctor(
        PaySummonInfoComponent_ClickDelegate_o *this,
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
  sub_1C7BA8C(
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
  if ( (sub_1C7BBA8(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AAD30C;
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
        v15 = sub_1C7BBA0(method);
        v16 = sub_1C7C134(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_1AAD408;
          else
            v13 = sub_1AAD3CC;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_1AAD348;
        }
        else
        {
          v13 = sub_1AAD31C;
        }
      }
      else
      {
        v13 = sub_1AAD2EC;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AAD2A4;
}


System_IAsyncResult_o *PaySummonInfoComponent_ClickDelegate__BeginInvoke(
        PaySummonInfoComponent_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  GachaRqParamData_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = paramData;
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, &v6, callback, object);
}


void PaySummonInfoComponent_ClickDelegate__EndInvoke(
        PaySummonInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void PaySummonInfoComponent_ClickDelegate__Invoke(
        PaySummonInfoComponent_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, GachaRqParamData_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    paramData,
    this->fields.method);
}