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
  __int64 v5; // x1
  __int64 v6; // x2
  TweenAlpha_o *v7; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59348AD & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59348AD = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, target, method);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)target, 0, 0) )
  {
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    TweenScale__Begin(target, 0.2, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
  v7 = TweenAlpha__Begin(target, 0.2, 0.0, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0);
  if ( v8 )
  {
    if ( !v7 )
      sub_21FFECC(v8, v9);
    v7->fields.method = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v7->fields.eventReceiver = gameObject;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v7->fields.eventReceiver,
      (int32_t)gameObject,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
}


void PaySummonInfoComponent__MoveAlpha(
        PaySummonInfoComponent_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x19
  PaySummonInfoComponent_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  TweenAlpha_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  v4 = (UnityEngine_Component_o *)this;
  if ( (byte_59348AC & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    this = (PaySummonInfoComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59348AC = 1;
  }
  if ( !target )
    goto LABEL_18;
  this = (PaySummonInfoComponent_o *)UnityEngine_GameObject__get_transform(target, 0);
  v5 = this;
  if ( !byte_5931940 )
  {
    this = (PaySummonInfoComponent_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  if ( !v5 )
    goto LABEL_18;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v5,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  if ( !UnityEngine_GameObject__get_activeSelf(target, 0) )
    UnityEngine_GameObject__SetActive(target, 1, 0);
  if ( !byte_5931945 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  TweenScale__Begin(target, 0.2, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  this = (PaySummonInfoComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                       target,
                                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_18;
  ((void (__fastcall *)(PaySummonInfoComponent_o *, Il2CppClass *, double))this->klass[1]._1.element_class)(
    this,
    this->klass[1]._1.castClass,
    0.0);
  v8 = TweenAlpha__Begin(target, 0.2, 1.0, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  this = (PaySummonInfoComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v8 )
    {
      v8->fields.method = 3;
      gameObject = UnityEngine_Component__get_gameObject(v4, 0);
      v8->fields.eventReceiver = gameObject;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v8->fields.eventReceiver,
        (int32_t)gameObject,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      return;
    }
LABEL_18:
    sub_21FFECC(this, target);
  }
}


void PaySummonInfoComponent__OnClickGacha(PaySummonInfoComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *v5; // x21
  struct GachaRqParamData_o **p_requestData; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x0
  struct GachaRqParamData_o *v14; // x1
  struct VaildGachaInfo_o *currentGachaData; // x8
  int32_t id; // w9
  int32_t warId; // w11
  _BOOL4 isTicket; // w10
  int32_t ticketItemId; // w9
  int32_t gachaTime; // w8
  int v21; // w9
  struct PaySummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_59348AE & 1) == 0 )
  {
    sub_21FFC50(&GachaRqParamData_TypeInfo);
    sub_21FFC50(&Method_PaySummonInfoComponent_OnClickGacha__);
    byte_59348AE = 1;
  }
  v3 = Method_PaySummonInfoComponent_OnClickGacha__;
  if ( (*((_BYTE *)Method_PaySummonInfoComponent_OnClickGacha__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_PaySummonInfoComponent_OnClickGacha__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (Il2CppObject *)sub_21FFEBC(GachaRqParamData_TypeInfo);
  System_Object___ctor(v5, 0);
  this->fields.requestData = (struct GachaRqParamData_o *)v5;
  p_requestData = &this->fields.requestData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.requestData, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  currentGachaData = this->fields.currentGachaData;
  if ( !currentGachaData || (v14 = *p_requestData) == 0 )
    sub_21FFECC(v13, v14);
  id = currentGachaData->fields.id;
  warId = currentGachaData->fields.warId;
  v14->fields.gachaTime = 1;
  isTicket = this->fields.isTicket;
  v14->fields.gachaId = id;
  v14->fields.warId = warId;
  v14->fields.ticketItemId = 0;
  if ( isTicket )
  {
    ticketItemId = currentGachaData->fields.ticketItemId;
    gachaTime = this->fields.gachaTime;
    v14->fields.ticketItemId = ticketItemId;
    v21 = 5;
  }
  else
  {
    gachaTime = this->fields.price;
    v21 = 1;
  }
  v14->fields.gachaType = v21;
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
    sub_21FFECC(ticketTitle, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ticketTitle, 0, 0);
  this->fields.ticketNum = 0;
  *(_QWORD *)&this->fields.price = 0x100000000LL;
}


void PaySummonInfoComponent__setAlphaSummonBtn(PaySummonInfoComponent_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *payBtnInfo; // x1

  payBtnInfo = this->fields.payBtnInfo;
  if ( isDisp )
    PaySummonInfoComponent__MoveAlpha(this, payBtnInfo, method);
  else
    PaySummonInfoComponent__ClearAlpha(this, payBtnInfo, method);
}


void PaySummonInfoComponent__setCurrentBannerInfo(
        PaySummonInfoComponent_o *this,
        VaildGachaInfo_o *gachaData,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( !gachaData )
    sub_21FFECC(this, 0);
  PaySummonInfoComponent__setEnableSummonBtn(this, gachaData->fields.isOpen, method);
  this->fields.currentGachaData = gachaData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentGachaData,
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
  float v6; // s3 OVERLAPPED
  float v7; // s8
  float v8; // s0
  float v9; // s1
  float v10; // s2
  UnityEngine_Object_o *ticketTitle; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59348AB & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59348AB = 1;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBtn;
  if ( !paySummonBtn )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled(paySummonBtn, isDisp, 0);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBntImg;
  if ( !paySummonBtn )
    goto LABEL_22;
  v6 = 1.0;
  if ( isDisp )
    v7 = 1.0;
  else
    v7 = 0.5;
  v8 = v7;
  v9 = v7;
  v10 = v7;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, *(UnityEngine_Color_o *)(&v6 - 3), 0);
  if ( this->fields.isTicket )
  {
    ticketTitle = (UnityEngine_Object_o *)this->fields.ticketTitle;
    if ( !ticketTitle )
      goto LABEL_22;
    goto LABEL_19;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.payTitle;
  if ( !paySummonBtn )
    goto LABEL_22;
  v14.fields.r = v7;
  v14.fields.g = v7;
  v14.fields.b = v7;
  v14.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v14, 0);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonDetailLb;
  if ( !paySummonBtn )
    goto LABEL_22;
  v15.fields.r = v7;
  v15.fields.g = v7;
  v15.fields.b = v7;
  v15.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v15, 0);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneNumLb;
  if ( !paySummonBtn
    || (v16.fields.r = v7,
        v16.fields.g = v7,
        v16.fields.b = v7,
        v16.fields.a = 1.0,
        UIWidget__set_color((UIWidget_o *)paySummonBtn, v16, 0),
        (paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneInfo) == 0) )
  {
LABEL_22:
    sub_21FFECC(paySummonBtn, isDisp);
  }
  ticketTitle = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                          (UnityEngine_GameObject_o *)paySummonBtn,
                                          (const MethodInfo_3883C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
  paySummonBtn = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(ticketTitle, 0, 0);
  if ( ((unsigned __int8)paySummonBtn & 1) != 0 )
  {
    if ( !ticketTitle )
      goto LABEL_22;
LABEL_19:
    v17.fields.r = v7;
    v17.fields.g = v7;
    v17.fields.b = v7;
    v17.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)ticketTitle, v17, 0);
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBg;
  if ( !paySummonBtn )
    goto LABEL_22;
  v18.fields.a = 1.0;
  v18.fields.r = v7;
  v18.fields.g = v7;
  v18.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v18, 0);
}


// local variable allocation has failed, the output may be wrong!
void PaySummonInfoComponent__setEnableSummonBtn(PaySummonInfoComponent_o *this, bool isOpen, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *paySummonBtn; // x0
  float v6; // s3 OVERLAPPED
  float v7; // s8
  float v8; // s0
  float v9; // s1
  float v10; // s2
  UnityEngine_Object_o *ticketTitle; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59348AA & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59348AA = 1;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBtn;
  if ( !paySummonBtn )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled(paySummonBtn, isOpen, 0);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBntImg;
  if ( !paySummonBtn )
    goto LABEL_22;
  v6 = 1.0;
  if ( isOpen )
    v7 = 1.0;
  else
    v7 = 0.5;
  v8 = v7;
  v9 = v7;
  v10 = v7;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, *(UnityEngine_Color_o *)(&v6 - 3), 0);
  if ( this->fields.isTicket )
  {
    ticketTitle = (UnityEngine_Object_o *)this->fields.ticketTitle;
    if ( !ticketTitle )
      goto LABEL_22;
    goto LABEL_19;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.payTitle;
  if ( !paySummonBtn )
    goto LABEL_22;
  v14.fields.r = v7;
  v14.fields.g = v7;
  v14.fields.b = v7;
  v14.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v14, 0);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonDetailLb;
  if ( !paySummonBtn )
    goto LABEL_22;
  v15.fields.r = v7;
  v15.fields.g = v7;
  v15.fields.b = v7;
  v15.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v15, 0);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneNumLb;
  if ( !paySummonBtn
    || (v16.fields.r = v7,
        v16.fields.g = v7,
        v16.fields.b = v7,
        v16.fields.a = 1.0,
        UIWidget__set_color((UIWidget_o *)paySummonBtn, v16, 0),
        (paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneInfo) == 0) )
  {
LABEL_22:
    sub_21FFECC(paySummonBtn, isOpen);
  }
  ticketTitle = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                          (UnityEngine_GameObject_o *)paySummonBtn,
                                          (const MethodInfo_3883C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
  paySummonBtn = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(ticketTitle, 0, 0);
  if ( ((unsigned __int8)paySummonBtn & 1) != 0 )
  {
    if ( !ticketTitle )
      goto LABEL_22;
LABEL_19:
    v17.fields.r = v7;
    v17.fields.g = v7;
    v17.fields.b = v7;
    v17.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)ticketTitle, v17, 0);
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBg;
  if ( !paySummonBtn )
    goto LABEL_22;
  v18.fields.a = 1.0;
  v18.fields.r = v7;
  v18.fields.g = v7;
  v18.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v18, 0);
}


void PaySummonInfoComponent__setPaySummonDispInfo(PaySummonInfoComponent_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  struct VaildGachaInfo_o *currentGachaData; // x8
  UserItemEntity_o *Entity; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t num; // w8
  LocalizationManager_c *v11; // x0
  UILabel_o *paySummonDetailLb; // x20
  int v13; // w9
  UILabel_o *ticketNumLb; // x20
  System_String_o *v15; // x21
  Il2CppObject *v16; // x0
  LocalizationManager_c *v17; // x0
  int v18; // w8
  UILabel_o *v19; // x21
  System_String_o *v20; // x22
  Il2CppObject *v21; // x0
  UILabel_o *stoneNumLb; // x21
  int32_t price; // [xsp+8h] [xbp-28h] BYREF
  int32_t ticketNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59348A9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_10751/*"PAY_SUMMON_DETAIL"*/);
    sub_21FFC50(&StringLiteral_13912/*"TICKET_NUM"*/);
    sub_21FFC50(&StringLiteral_13913/*"TICKET_SUMMON_DETAIL"*/);
    byte_59348A9 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_31;
  currentGachaData = this->fields.currentGachaData;
  if ( !currentGachaData || !Instance )
    goto LABEL_31;
  Entity = UserItemMaster__GetEntity(
             (UserItemMaster_o *)Instance,
             SelfUserGame->fields.userId,
             currentGachaData->fields.ticketItemId,
             0);
  if ( Entity )
  {
    num = Entity->fields.num;
    if ( num >= 1 )
    {
      v11 = LocalizationManager_TypeInfo;
      paySummonDetailLb = this->fields.paySummonDetailLb;
      this->fields.ticketNum = num;
      v13 = *(&v11->_2.cctor_finished + 1);
      this->fields.isTicket = 1;
      if ( !v13 )
        j_il2cpp_runtime_class_init_0(v11, v8, v9);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13913/*"TICKET_SUMMON_DETAIL"*/, 0);
      if ( paySummonDetailLb )
      {
        UILabel__set_text(paySummonDetailLb, (System_String_o *)Instance, 0);
        Instance = (DataManager_o *)this->fields.ticketTitle;
        if ( Instance )
        {
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
            ticketNumLb = this->fields.ticketNumLb;
            v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13912/*"TICKET_NUM"*/, 0);
            ticketNum = this->fields.ticketNum;
            v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &ticketNum);
            Instance = (DataManager_o *)System_String__Format(v15, v16, 0);
            if ( ticketNumLb )
            {
              UILabel__set_text(ticketNumLb, (System_String_o *)Instance, 0);
              Instance = (DataManager_o *)this->fields.ticketInfo;
              if ( Instance )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
                Instance = (DataManager_o *)this->fields.payTitle;
                if ( Instance )
                {
                  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Instance,
                                                0);
                  if ( Instance )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
                    Instance = (DataManager_o *)this->fields.stoneInfo;
                    if ( Instance )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_31:
      sub_21FFECC(Instance, v5);
    }
  }
  v17 = LocalizationManager_TypeInfo;
  v18 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  v19 = this->fields.paySummonDetailLb;
  this->fields.isTicket = 0;
  if ( !v18 )
    j_il2cpp_runtime_class_init_0(v17, v8, v9);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_10751/*"PAY_SUMMON_DETAIL"*/, 0);
  price = this->fields.price;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &price);
  Instance = (DataManager_o *)System_String__Format(v20, v21, 0);
  if ( !v19 )
    goto LABEL_31;
  UILabel__set_text(v19, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.ticketTitle;
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.ticketInfo;
  if ( !Instance )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (DataManager_o *)this->fields.payTitle;
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (DataManager_o *)this->fields.stoneInfo;
  if ( !Instance )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  stoneNumLb = this->fields.stoneNumLb;
  this->fields.haveStoneNum = SelfUserGame->fields.stone;
  Instance = (DataManager_o *)System_Int32__ToString((int)SelfUserGame + 184, 0);
  if ( !stoneNumLb )
    goto LABEL_31;
  UILabel__set_text(stoneNumLb, (System_String_o *)Instance, 0);
}


void PaySummonInfoComponent__setPaySummonInfo(
        PaySummonInfoComponent_o *this,
        VaildGachaInfo_o *gachaData,
        PaySummonInfoComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x2
  bool isOpen; // w1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x1

  PaySummonInfoComponent__init(this, (const MethodInfo *)gachaData);
  this->fields.clickCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickCallbackFunc,
    (int32_t)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( gachaData )
  {
    isOpen = gachaData->fields.isOpen;
    this->fields.price = gachaData->fields.price;
    PaySummonInfoComponent__setEnableSummonBtn(this, isOpen, v13);
    this->fields.currentGachaData = gachaData;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.currentGachaData,
      (int32_t)gachaData,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    PaySummonInfoComponent__setPaySummonDispInfo(this, v21);
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1FF3108;
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
        v15 = sub_21FFD20(method);
        v16 = sub_22002A4(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_1FF3200;
          else
            v13 = sub_1FF31C4;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_1FF3140;
        }
        else
        {
          v13 = sub_1FF3118;
        }
      }
      else
      {
        v13 = sub_1FF30EC;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)&loc_1FF30A4;
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
  return (System_IAsyncResult_o *)sub_21FFC04(this, &v6, callback, object);
}


void PaySummonInfoComponent_ClickDelegate__EndInvoke(
        PaySummonInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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