void __fastcall PaySummonInfoComponent___ctor(PaySummonInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.gachaTime = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PaySummonInfoComponent__ClearAlpha(
        PaySummonInfoComponent_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  __int64 v5; // x1
  TweenAlpha_o *v6; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B6320F & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, target);
    byte_4B6320F = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)target, 0LL, 0LL) )
  {
    if ( !byte_4B612E1 )
    {
      sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v5);
      byte_4B612E1 = 1;
    }
    TweenScale__Begin(target, 0.2, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  }
  v6 = TweenAlpha__Begin(target, 0.2, 0.0, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( v7 )
  {
    if ( !v6 )
      sub_1BE4D28(v7, v8);
    v6->fields.method = 3;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v6->fields.eventReceiver = gameObject;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&v6->fields.eventReceiver,
      (int64_t)gameObject,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
}


void __fastcall PaySummonInfoComponent__MoveAlpha(
        PaySummonInfoComponent_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x19
  __int64 v5; // x1
  PaySummonInfoComponent_o *v6; // x21
  __int64 v7; // x1
  TweenAlpha_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v4 = (UnityEngine_Component_o *)this;
  if ( (byte_4B6320E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, target);
    this = (PaySummonInfoComponent_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    byte_4B6320E = 1;
  }
  if ( !target )
    goto LABEL_18;
  this = (PaySummonInfoComponent_o *)UnityEngine_GameObject__get_transform(target, 0LL);
  v6 = this;
  if ( !byte_4B612E1 )
  {
    this = (PaySummonInfoComponent_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, target);
    byte_4B612E1 = 1;
  }
  if ( !v6 )
    goto LABEL_18;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v6,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  if ( !UnityEngine_GameObject__get_activeSelf(target, 0LL) )
    UnityEngine_GameObject__SetActive(target, 1, 0LL);
  if ( !byte_4B612E6 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v7);
    byte_4B612E6 = 1;
  }
  TweenScale__Begin(target, 0.2, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  this = (PaySummonInfoComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                       target,
                                       (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_18;
  ((void (__fastcall *)(PaySummonInfoComponent_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  v8 = TweenAlpha__Begin(target, 0.2, 1.0, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (PaySummonInfoComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v8 )
    {
      v8->fields.method = 3;
      gameObject = UnityEngine_Component__get_gameObject(v4, 0LL);
      v8->fields.eventReceiver = gameObject;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&v8->fields.eventReceiver,
        (int64_t)gameObject,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      return;
    }
LABEL_18:
    sub_1BE4D28(this, target);
  }
}


void __fastcall PaySummonInfoComponent__OnClickGacha(PaySummonInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *v6; // x21
  struct GachaRqParamData_o **p_requestData; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x0
  struct GachaRqParamData_o *v15; // x1
  struct VaildGachaInfo_o *currentGachaData; // x8
  int32_t warId; // w10
  int32_t ticketItemId; // w9
  int32_t gachaTime; // w8
  struct PaySummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4B63210 & 1) == 0 )
  {
    sub_1BE4ACC(&GachaRqParamData_TypeInfo, method);
    sub_1BE4ACC(&Method_PaySummonInfoComponent_OnClickGacha__, v3);
    byte_4B63210 = 1;
  }
  v4 = Method_PaySummonInfoComponent_OnClickGacha__;
  if ( (*((_BYTE *)Method_PaySummonInfoComponent_OnClickGacha__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BE4AE4(Method_PaySummonInfoComponent_OnClickGacha__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  v6 = (Il2CppObject *)sub_1BE4D18(GachaRqParamData_TypeInfo);
  System_Object___ctor(v6, 0LL);
  this->fields.requestData = (struct GachaRqParamData_o *)v6;
  p_requestData = &this->fields.requestData;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.requestData, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  currentGachaData = this->fields.currentGachaData;
  if ( !currentGachaData || (v15 = *p_requestData) == 0LL )
    sub_1BE4D28(v14, v15);
  v15->fields.gachaId = currentGachaData->fields.id;
  warId = currentGachaData->fields.warId;
  v15->fields.ticketItemId = 0;
  v15->fields.warId = warId;
  v15->fields.gachaTime = 1;
  if ( this->fields.isTicket )
  {
    v15->fields.gachaType = 5;
    ticketItemId = currentGachaData->fields.ticketItemId;
    gachaTime = this->fields.gachaTime;
    v15->fields.ticketItemId = ticketItemId;
  }
  else
  {
    v15->fields.gachaType = 1;
    gachaTime = this->fields.price;
  }
  v15->fields.gachaResourceNum = gachaTime;
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *))clickCallbackFunc->fields.m_target)(clickCallbackFunc->fields.original_method_info);
}


int32_t __fastcall PaySummonInfoComponent__getSummonPrice(PaySummonInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.price;
}


int32_t __fastcall PaySummonInfoComponent__getUsrStoneNum(PaySummonInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.haveStoneNum;
}


int32_t __fastcall PaySummonInfoComponent__getUsrTicketNum(PaySummonInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.ticketNum;
}


void __fastcall PaySummonInfoComponent__init(PaySummonInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *ticketTitle; // x0

  ticketTitle = (UnityEngine_Component_o *)this->fields.ticketTitle;
  if ( !ticketTitle
    || (ticketTitle = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(ticketTitle, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ticketTitle, 0, 0LL),
        (ticketTitle = (UnityEngine_Component_o *)this->fields.ticketInfo) == 0LL) )
  {
    sub_1BE4D28(ticketTitle, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ticketTitle, 0, 0LL);
  this->fields.ticketNum = 0;
  *(_QWORD *)&this->fields.price = 0x100000000LL;
}


void __fastcall PaySummonInfoComponent__setAlphaSummonBtn(
        PaySummonInfoComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  if ( isDisp )
    PaySummonInfoComponent__MoveAlpha(this, this->fields.payBtnInfo, method);
  else
    PaySummonInfoComponent__ClearAlpha(this, this->fields.payBtnInfo, method);
}


void __fastcall PaySummonInfoComponent__setCurrentBannerInfo(
        PaySummonInfoComponent_o *this,
        VaildGachaInfo_o *gachaData,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( !gachaData )
    sub_1BE4D28(this, 0LL);
  PaySummonInfoComponent__setEnableSummonBtn(this, gachaData->fields.isOpen, method);
  this->fields.currentGachaData = gachaData;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.currentGachaData, (int64_t)gachaData, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PaySummonInfoComponent__setDispSummonBtn(
        PaySummonInfoComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *paySummonBtn; // x0
  float v7; // s8
  float v8; // s3
  Il2CppObject *ComponentInChildren_object; // x20
  float v10; // s0
  float v11; // s1
  float v12; // s2
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B6320D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, isDisp);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    byte_4B6320D = 1;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBtn;
  if ( !paySummonBtn )
    goto LABEL_23;
  v7 = isDisp ? 1.0 : 0.5;
  UnityEngine_Behaviour__set_enabled(paySummonBtn, isDisp, 0LL);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBntImg;
  if ( !paySummonBtn )
    goto LABEL_23;
  v13.fields.a = 1.0;
  v13.fields.r = v7;
  v13.fields.g = v7;
  v13.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v13, 0LL);
  if ( this->fields.isTicket )
  {
    paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.ticketTitle;
    if ( !paySummonBtn )
      goto LABEL_23;
    v8 = 1.0;
LABEL_20:
    v10 = v7;
    v11 = v7;
    v12 = v7;
    UIWidget__set_color((UIWidget_o *)paySummonBtn, *(UnityEngine_Color_o *)(&v8 - 3), 0LL);
    goto LABEL_21;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.payTitle;
  if ( !paySummonBtn )
    goto LABEL_23;
  v14.fields.a = 1.0;
  v14.fields.r = v7;
  v14.fields.g = v7;
  v14.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v14, 0LL);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonDetailLb;
  if ( !paySummonBtn )
    goto LABEL_23;
  v15.fields.a = 1.0;
  v15.fields.r = v7;
  v15.fields.g = v7;
  v15.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v15, 0LL);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneNumLb;
  if ( !paySummonBtn
    || (v16.fields.a = 1.0,
        v16.fields.r = v7,
        v16.fields.g = v7,
        v16.fields.b = v7,
        UIWidget__set_color((UIWidget_o *)paySummonBtn, v16, 0LL),
        (paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneInfo) == 0LL) )
  {
LABEL_23:
    sub_1BE4D28(paySummonBtn, isDisp);
  }
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)paySummonBtn,
                                 (const MethodInfo_2FA9A00 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  paySummonBtn = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)ComponentInChildren_object,
                                              0LL,
                                              0LL);
  if ( ((unsigned __int8)paySummonBtn & 1) != 0 )
  {
    if ( !ComponentInChildren_object )
      goto LABEL_23;
    v8 = 1.0;
    paySummonBtn = (UnityEngine_Behaviour_o *)ComponentInChildren_object;
    goto LABEL_20;
  }
LABEL_21:
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBg;
  if ( !paySummonBtn )
    goto LABEL_23;
  v17.fields.a = 1.0;
  v17.fields.r = v7;
  v17.fields.g = v7;
  v17.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PaySummonInfoComponent__setEnableSummonBtn(
        PaySummonInfoComponent_o *this,
        bool isOpen,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *paySummonBtn; // x0
  float v7; // s8
  float v8; // s3
  Il2CppObject *ComponentInChildren_object; // x20
  float v10; // s0
  float v11; // s1
  float v12; // s2
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B6320C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, isOpen);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v5);
    byte_4B6320C = 1;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBtn;
  if ( !paySummonBtn )
    goto LABEL_23;
  v7 = isOpen ? 1.0 : 0.5;
  UnityEngine_Behaviour__set_enabled(paySummonBtn, isOpen, 0LL);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBntImg;
  if ( !paySummonBtn )
    goto LABEL_23;
  v13.fields.a = 1.0;
  v13.fields.r = v7;
  v13.fields.g = v7;
  v13.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v13, 0LL);
  if ( this->fields.isTicket )
  {
    paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.ticketTitle;
    if ( !paySummonBtn )
      goto LABEL_23;
    v8 = 1.0;
LABEL_20:
    v10 = v7;
    v11 = v7;
    v12 = v7;
    UIWidget__set_color((UIWidget_o *)paySummonBtn, *(UnityEngine_Color_o *)(&v8 - 3), 0LL);
    goto LABEL_21;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.payTitle;
  if ( !paySummonBtn )
    goto LABEL_23;
  v14.fields.a = 1.0;
  v14.fields.r = v7;
  v14.fields.g = v7;
  v14.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v14, 0LL);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonDetailLb;
  if ( !paySummonBtn )
    goto LABEL_23;
  v15.fields.a = 1.0;
  v15.fields.r = v7;
  v15.fields.g = v7;
  v15.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v15, 0LL);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneNumLb;
  if ( !paySummonBtn
    || (v16.fields.a = 1.0,
        v16.fields.r = v7,
        v16.fields.g = v7,
        v16.fields.b = v7,
        UIWidget__set_color((UIWidget_o *)paySummonBtn, v16, 0LL),
        (paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneInfo) == 0LL) )
  {
LABEL_23:
    sub_1BE4D28(paySummonBtn, isOpen);
  }
  ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)paySummonBtn,
                                 (const MethodInfo_2FA9A00 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  paySummonBtn = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)ComponentInChildren_object,
                                              0LL,
                                              0LL);
  if ( ((unsigned __int8)paySummonBtn & 1) != 0 )
  {
    if ( !ComponentInChildren_object )
      goto LABEL_23;
    v8 = 1.0;
    paySummonBtn = (UnityEngine_Behaviour_o *)ComponentInChildren_object;
    goto LABEL_20;
  }
LABEL_21:
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBg;
  if ( !paySummonBtn )
    goto LABEL_23;
  v17.fields.a = 1.0;
  v17.fields.r = v7;
  v17.fields.g = v7;
  v17.fields.b = v7;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v17, 0LL);
}


void __fastcall PaySummonInfoComponent__setPaySummonDispInfo(PaySummonInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  struct VaildGachaInfo_o *currentGachaData; // x8
  UserItemEntity_o *Entity; // x0
  int32_t num; // w8
  char v15; // w22
  bool v16; // w8
  UILabel_o *paySummonDetailLb; // x21
  System_String_o *v18; // x22
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  UILabel_o *stoneNumLb; // x21
  UILabel_o *ticketNumLb; // x20
  System_String_o *v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  int32_t price; // [xsp+8h] [xbp-28h] BYREF
  int32_t ticketNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B6320B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_1BE4ACC(&int_TypeInfo, v3);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BE4ACC(&StringLiteral_10523/*"PAY_SUMMON_DETAIL"*/, v6);
    sub_1BE4ACC(&StringLiteral_13496/*"TICKET_NUM"*/, v7);
    sub_1BE4ACC(&StringLiteral_13497/*"TICKET_SUMMON_DETAIL"*/, v8);
    byte_4B6320B = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_32;
  currentGachaData = this->fields.currentGachaData;
  if ( !currentGachaData || !Instance )
    goto LABEL_32;
  Entity = UserItemMaster__GetEntity(
             (UserItemMaster_o *)Instance,
             SelfUserGame->fields.userId,
             currentGachaData->fields.ticketItemId,
             0LL);
  if ( Entity && (num = Entity->fields.num, num >= 1) )
  {
    v15 = 0;
    this->fields.ticketNum = num;
    v16 = 1;
  }
  else
  {
    v16 = 0;
    v15 = 1;
  }
  this->fields.isTicket = v16;
  paySummonDetailLb = this->fields.paySummonDetailLb;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( (v15 & 1) != 0 )
    {
LABEL_13:
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10523/*"PAY_SUMMON_DETAIL"*/, 0LL);
      price = this->fields.price;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &price, v19, v20, v21);
      Instance = (DataManager_o *)System_String__Format(v18, v22, 0LL);
      if ( paySummonDetailLb )
      {
        UILabel__set_text(paySummonDetailLb, (System_String_o *)Instance, 0LL);
        Instance = (DataManager_o *)this->fields.ticketTitle;
        if ( Instance )
        {
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
            Instance = (DataManager_o *)this->fields.ticketInfo;
            if ( Instance )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
              Instance = (DataManager_o *)this->fields.payTitle;
              if ( Instance )
              {
                Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Instance,
                                              0LL);
                if ( Instance )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                  Instance = (DataManager_o *)this->fields.stoneInfo;
                  if ( Instance )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                    stoneNumLb = this->fields.stoneNumLb;
                    this->fields.haveStoneNum = SelfUserGame->fields.stone;
                    Instance = (DataManager_o *)System_Int32__ToString((int)SelfUserGame + 176, 0LL);
                    if ( stoneNumLb )
                    {
                      UILabel__set_text(stoneNumLb, (System_String_o *)Instance, 0LL);
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
      sub_1BE4D28(Instance, v11);
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( (v15 & 1) != 0 )
      goto LABEL_13;
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13497/*"TICKET_SUMMON_DETAIL"*/, 0LL);
  if ( !paySummonDetailLb )
    goto LABEL_32;
  UILabel__set_text(paySummonDetailLb, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.ticketTitle;
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  ticketNumLb = this->fields.ticketNumLb;
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_13496/*"TICKET_NUM"*/, 0LL);
  ticketNum = this->fields.ticketNum;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ticketNum, v26, v27, v28);
  Instance = (DataManager_o *)System_String__Format(v25, v29, 0LL);
  if ( !ticketNumLb )
    goto LABEL_32;
  UILabel__set_text(ticketNumLb, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.ticketInfo;
  if ( !Instance )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.payTitle;
  if ( !Instance )
    goto LABEL_32;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.stoneInfo;
  if ( !Instance )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
}


void __fastcall PaySummonInfoComponent__setPaySummonInfo(
        PaySummonInfoComponent_o *this,
        VaildGachaInfo_o *gachaData,
        PaySummonInfoComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x2
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x1

  PaySummonInfoComponent__init(this, (const MethodInfo *)gachaData);
  this->fields.clickCallbackFunc = callback;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.clickCallbackFunc,
    (int64_t)callback,
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
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.currentGachaData,
      (int64_t)gachaData,
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


// local variable allocation has failed, the output may be wrong!
void __fastcall PaySummonInfoComponent_ClickDelegate___ctor(
        PaySummonInfoComponent_ClickDelegate_o *this,
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
  sub_1BE4A70(
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
  if ( (sub_1BE4B8C(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A22774;
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
        v15 = sub_1BE4B84(v10);
        v16 = sub_1BE5040(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A22870;
          else
            v13 = (Il2CppObject *)sub_1A22834;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A227B0;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A22784;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A22754;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A2270C;
}


System_IAsyncResult_o *__fastcall PaySummonInfoComponent_ClickDelegate__BeginInvoke(
        PaySummonInfoComponent_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  GachaRqParamData_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = paramData;
  return (System_IAsyncResult_o *)sub_1BE4A80(this, &v6, callback, object);
}


void __fastcall PaySummonInfoComponent_ClickDelegate__EndInvoke(
        PaySummonInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall PaySummonInfoComponent_ClickDelegate__Invoke(
        PaySummonInfoComponent_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, GachaRqParamData_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    paramData,
    *(_QWORD *)&this->fields.extra_arg);
}