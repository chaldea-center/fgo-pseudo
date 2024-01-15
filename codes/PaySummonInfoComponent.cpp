void __fastcall PaySummonInfoComponent___ctor(PaySummonInfoComponent_o *this, const MethodInfo *method)
{
  this->fields.gachaTime = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PaySummonInfoComponent__ClearAlpha(
        PaySummonInfoComponent_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  float y; // s4
  float z; // s5
  float v7; // s3
  TweenAlpha_o *v8; // x20
  System_Int32_array **gameObject; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F8F16 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, target);
    byte_40F8F16 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)target, 0LL, 0LL) )
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    y = zero.fields.y;
    z = zero.fields.z;
    zero.fields.y = zero.fields.x;
    zero.fields.z = y;
    v7 = z;
    TweenScale__Begin(target, 0.2, *(UnityEngine_Vector3_o *)&zero.fields.y, 0LL);
  }
  v8 = TweenAlpha__Begin(target, 0.2, 0.0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL) )
  {
    if ( !v8 )
      sub_B170D4();
    v8->fields.style = 3;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v8->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
    sub_B16F98((BattleServantConfConponent_o *)&v8->fields.eventReceiver, gameObject, v10, v11, v12, v13, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PaySummonInfoComponent__MoveAlpha(
        PaySummonInfoComponent_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x21
  int v7; // s0
  float y; // s4
  float z; // s5
  float v12; // s3
  srcLineSprite_o *Component_srcLineSprite; // x0
  TweenAlpha_o *v14; // x20
  System_Int32_array **gameObject; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F8F15 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, target);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F8F15 = 1;
  }
  if ( !target )
    goto LABEL_15;
  transform = UnityEngine_GameObject__get_transform(target, 0LL);
  *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v7, 0LL);
  if ( !UnityEngine_GameObject__get_activeSelf(target, 0LL) )
    UnityEngine_GameObject__SetActive(target, 1, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  y = one.fields.y;
  z = one.fields.z;
  one.fields.y = one.fields.x;
  one.fields.z = y;
  v12 = z;
  TweenScale__Begin(target, 0.2, *(UnityEngine_Vector3_o *)&one.fields.y, 0LL);
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              target,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !Component_srcLineSprite )
    goto LABEL_15;
  ((void (__fastcall *)(srcLineSprite_o *, Il2CppClass *, float))Component_srcLineSprite->klass[1]._1.castClass)(
    Component_srcLineSprite,
    Component_srcLineSprite->klass[1]._1.declaringType,
    0.0);
  v14 = TweenAlpha__Begin(target, 0.2, 1.0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
  {
    if ( v14 )
    {
      v14->fields.style = 3;
      gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v14->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
      sub_B16F98((BattleServantConfConponent_o *)&v14->fields.eventReceiver, gameObject, v16, v17, v18, v19, v20, v21);
      return;
    }
LABEL_15:
    sub_B170D4();
  }
}


void __fastcall PaySummonInfoComponent__OnClickGacha(PaySummonInfoComponent_o *this, const MethodInfo *method)
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
  struct VaildGachaInfo_o *currentGachaData; // x8
  struct VaildGachaInfo_o *v17; // x8
  struct GachaRqParamData_o *requestData; // x9
  GachaRqParamData_o *v19; // x8
  struct VaildGachaInfo_o *v20; // x8
  struct GachaRqParamData_o *v21; // x9
  PaySummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x0

  if ( (byte_40F8F17 & 1) == 0 )
  {
    sub_B16FFC(&GachaRqParamData_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F8F17 = 1;
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
  currentGachaData = this->fields.currentGachaData;
  if ( !currentGachaData )
    goto LABEL_23;
  if ( !*p_requestData )
    goto LABEL_23;
  (*p_requestData)->fields.gachaId = currentGachaData->fields.id;
  v17 = this->fields.currentGachaData;
  if ( !v17 )
    goto LABEL_23;
  requestData = this->fields.requestData;
  if ( !requestData )
    goto LABEL_23;
  requestData->fields.warId = v17->fields.warId;
  if ( !*p_requestData )
    goto LABEL_23;
  (*p_requestData)->fields.gachaTime = 1;
  if ( !*p_requestData )
    goto LABEL_23;
  (*p_requestData)->fields.ticketItemId = 0;
  v19 = *p_requestData;
  if ( !*p_requestData )
    goto LABEL_23;
  if ( this->fields.isTicket )
  {
    v19->fields.gachaType = 5;
    if ( *p_requestData )
    {
      (*p_requestData)->fields.gachaResourceNum = this->fields.gachaTime;
      v20 = this->fields.currentGachaData;
      if ( v20 )
      {
        v21 = this->fields.requestData;
        if ( v21 )
        {
          v21->fields.ticketItemId = v20->fields.ticketItemId;
          goto LABEL_20;
        }
      }
    }
LABEL_23:
    sub_B170D4();
  }
  v19->fields.gachaType = 1;
  if ( !*p_requestData )
    goto LABEL_23;
  (*p_requestData)->fields.gachaResourceNum = this->fields.price;
LABEL_20:
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    PaySummonInfoComponent_ClickDelegate__Invoke(clickCallbackFunc, *p_requestData, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *ticketInfo; // x0

  ticketTitle = (UnityEngine_Component_o *)this->fields.ticketTitle;
  if ( !ticketTitle
    || (gameObject = UnityEngine_Component__get_gameObject(ticketTitle, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (ticketInfo = this->fields.ticketInfo) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(ticketInfo, 0, 0LL);
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( !gachaData )
    sub_B170D4();
  PaySummonInfoComponent__setEnableSummonBtn(this, gachaData->fields.isOpen, method);
  this->fields.currentGachaData = gachaData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.currentGachaData,
    (System_Int32_array **)gachaData,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PaySummonInfoComponent__setDispSummonBtn(
        PaySummonInfoComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *paySummonBtn; // x0
  float v7; // s0
  float v8; // s1
  float v9; // s2
  float v10; // s3
  UIWidget_o *paySummonBntImg; // x0
  float v12; // s8
  float v13; // s9
  float v14; // s10
  float v15; // s11
  UIWidget_o *ticketTitle; // x0
  UIWidget_o *payTitle; // x0
  UIWidget_o *paySummonDetailLb; // x0
  UIWidget_o *stoneNumLb; // x0
  UnityEngine_GameObject_o *stoneInfo; // x0
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x20
  UIWidget_o *paySummonBg; // x0
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F8F14 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, isDisp);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F8F14 = 1;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBtn;
  if ( !paySummonBtn )
    goto LABEL_24;
  UnityEngine_Behaviour__set_enabled(paySummonBtn, isDisp, 0LL);
  *(UnityEngine_Color_o *)&v7 = isDisp ? UnityEngine_Color__get_white(0LL) : UnityEngine_Color__get_gray(0LL);
  paySummonBntImg = (UIWidget_o *)this->fields.paySummonBntImg;
  v12 = v7;
  v13 = v8;
  v14 = v9;
  v15 = v10;
  if ( !paySummonBntImg )
    goto LABEL_24;
  UIWidget__set_color(paySummonBntImg, *(UnityEngine_Color_o *)&v7, 0LL);
  if ( this->fields.isTicket )
  {
    ticketTitle = (UIWidget_o *)this->fields.ticketTitle;
    if ( !ticketTitle )
      goto LABEL_24;
    goto LABEL_21;
  }
  payTitle = (UIWidget_o *)this->fields.payTitle;
  if ( !payTitle )
    goto LABEL_24;
  v23.fields.r = v12;
  v23.fields.g = v13;
  v23.fields.b = v14;
  v23.fields.a = v15;
  UIWidget__set_color(payTitle, v23, 0LL);
  paySummonDetailLb = (UIWidget_o *)this->fields.paySummonDetailLb;
  if ( !paySummonDetailLb )
    goto LABEL_24;
  v24.fields.r = v12;
  v24.fields.g = v13;
  v24.fields.b = v14;
  v24.fields.a = v15;
  UIWidget__set_color(paySummonDetailLb, v24, 0LL);
  stoneNumLb = (UIWidget_o *)this->fields.stoneNumLb;
  if ( !stoneNumLb
    || (v25.fields.r = v12,
        v25.fields.g = v13,
        v25.fields.b = v14,
        v25.fields.a = v15,
        UIWidget__set_color(stoneNumLb, v25, 0LL),
        (stoneInfo = this->fields.stoneInfo) == 0LL) )
  {
LABEL_24:
    sub_B170D4();
  }
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        stoneInfo,
                                                                        (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ComponentInChildren_Dropdown_DropdownItem, 0LL, 0LL) )
  {
    if ( !ComponentInChildren_Dropdown_DropdownItem )
      goto LABEL_24;
    ticketTitle = (UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem;
LABEL_21:
    v26.fields.r = v12;
    v26.fields.g = v13;
    v26.fields.b = v14;
    v26.fields.a = v15;
    UIWidget__set_color(ticketTitle, v26, 0LL);
  }
  paySummonBg = (UIWidget_o *)this->fields.paySummonBg;
  if ( !paySummonBg )
    goto LABEL_24;
  v27.fields.r = v12;
  v27.fields.g = v13;
  v27.fields.b = v14;
  v27.fields.a = v15;
  UIWidget__set_color(paySummonBg, v27, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PaySummonInfoComponent__setEnableSummonBtn(
        PaySummonInfoComponent_o *this,
        bool isOpen,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Behaviour_o *paySummonBtn; // x0
  float v7; // s0
  float v8; // s1
  float v9; // s2
  float v10; // s3
  UIWidget_o *paySummonBntImg; // x0
  float v12; // s8
  float v13; // s9
  float v14; // s10
  float v15; // s11
  UIWidget_o *ticketTitle; // x0
  UIWidget_o *payTitle; // x0
  UIWidget_o *paySummonDetailLb; // x0
  UIWidget_o *stoneNumLb; // x0
  UnityEngine_GameObject_o *stoneInfo; // x0
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x20
  UIWidget_o *paySummonBg; // x0
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F8F13 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, isOpen);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F8F13 = 1;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBtn;
  if ( !paySummonBtn )
    goto LABEL_24;
  UnityEngine_Behaviour__set_enabled(paySummonBtn, isOpen, 0LL);
  *(UnityEngine_Color_o *)&v7 = isOpen ? UnityEngine_Color__get_white(0LL) : UnityEngine_Color__get_gray(0LL);
  paySummonBntImg = (UIWidget_o *)this->fields.paySummonBntImg;
  v12 = v7;
  v13 = v8;
  v14 = v9;
  v15 = v10;
  if ( !paySummonBntImg )
    goto LABEL_24;
  UIWidget__set_color(paySummonBntImg, *(UnityEngine_Color_o *)&v7, 0LL);
  if ( this->fields.isTicket )
  {
    ticketTitle = (UIWidget_o *)this->fields.ticketTitle;
    if ( !ticketTitle )
      goto LABEL_24;
    goto LABEL_21;
  }
  payTitle = (UIWidget_o *)this->fields.payTitle;
  if ( !payTitle )
    goto LABEL_24;
  v23.fields.r = v12;
  v23.fields.g = v13;
  v23.fields.b = v14;
  v23.fields.a = v15;
  UIWidget__set_color(payTitle, v23, 0LL);
  paySummonDetailLb = (UIWidget_o *)this->fields.paySummonDetailLb;
  if ( !paySummonDetailLb )
    goto LABEL_24;
  v24.fields.r = v12;
  v24.fields.g = v13;
  v24.fields.b = v14;
  v24.fields.a = v15;
  UIWidget__set_color(paySummonDetailLb, v24, 0LL);
  stoneNumLb = (UIWidget_o *)this->fields.stoneNumLb;
  if ( !stoneNumLb
    || (v25.fields.r = v12,
        v25.fields.g = v13,
        v25.fields.b = v14,
        v25.fields.a = v15,
        UIWidget__set_color(stoneNumLb, v25, 0LL),
        (stoneInfo = this->fields.stoneInfo) == 0LL) )
  {
LABEL_24:
    sub_B170D4();
  }
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        stoneInfo,
                                                                        (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ComponentInChildren_Dropdown_DropdownItem, 0LL, 0LL) )
  {
    if ( !ComponentInChildren_Dropdown_DropdownItem )
      goto LABEL_24;
    ticketTitle = (UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem;
LABEL_21:
    v26.fields.r = v12;
    v26.fields.g = v13;
    v26.fields.b = v14;
    v26.fields.a = v15;
    UIWidget__set_color(ticketTitle, v26, 0LL);
  }
  paySummonBg = (UIWidget_o *)this->fields.paySummonBg;
  if ( !paySummonBg )
    goto LABEL_24;
  v27.fields.r = v12;
  v27.fields.g = v13;
  v27.fields.b = v14;
  v27.fields.a = v15;
  UIWidget__set_color(paySummonBg, v27, 0LL);
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
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct VaildGachaInfo_o *currentGachaData; // x8
  UserItemEntity_o *Entity; // x0
  int32_t num; // w9
  char v15; // w8
  bool v16; // w9
  UILabel_o *paySummonDetailLb; // x21
  System_String_o *v18; // x22
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  UnityEngine_Component_o *ticketTitle; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *ticketInfo; // x0
  UnityEngine_Component_o *payTitle; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *stoneInfo; // x0
  UILabel_o *stoneNumLb; // x21
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  UILabel_o *ticketNumLb; // x20
  System_String_o *v33; // x21
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Component_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  int32_t price; // [xsp+8h] [xbp-28h] BYREF
  int32_t ticketNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F8F12 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_10397/*"PAY_SUMMON_DETAIL"*/, v6);
    sub_B16FFC(&StringLiteral_13308/*"TICKET_NUM"*/, v7);
    sub_B16FFC(&StringLiteral_13309/*"TICKET_SUMMON_DETAIL"*/, v8);
    byte_40F8F12 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_37;
  currentGachaData = this->fields.currentGachaData;
  if ( !currentGachaData || !MasterData_WarQuestSelectionMaster )
    goto LABEL_37;
  Entity = UserItemMaster__GetEntity(
             MasterData_WarQuestSelectionMaster,
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
  if ( (v15 & 1) != 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10397/*"PAY_SUMMON_DETAIL"*/, 0LL);
    price = this->fields.price;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &price);
    v20 = System_String__Format(v18, v19, 0LL);
    if ( paySummonDetailLb )
    {
      UILabel__set_text(paySummonDetailLb, v20, 0LL);
      ticketTitle = (UnityEngine_Component_o *)this->fields.ticketTitle;
      if ( ticketTitle )
      {
        gameObject = UnityEngine_Component__get_gameObject(ticketTitle, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          ticketInfo = this->fields.ticketInfo;
          if ( ticketInfo )
          {
            UnityEngine_GameObject__SetActive(ticketInfo, 0, 0LL);
            payTitle = (UnityEngine_Component_o *)this->fields.payTitle;
            if ( payTitle )
            {
              v25 = UnityEngine_Component__get_gameObject(payTitle, 0LL);
              if ( v25 )
              {
                UnityEngine_GameObject__SetActive(v25, 1, 0LL);
                stoneInfo = this->fields.stoneInfo;
                if ( stoneInfo )
                {
                  UnityEngine_GameObject__SetActive(stoneInfo, 1, 0LL);
                  stoneNumLb = this->fields.stoneNumLb;
                  this->fields.haveStoneNum = SelfUserGame->fields.stone;
                  v28 = System_Int32__ToString((int)SelfUserGame + 168, 0LL);
                  if ( stoneNumLb )
                  {
                    UILabel__set_text(stoneNumLb, v28, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_37:
    sub_B170D4();
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_13309/*"TICKET_SUMMON_DETAIL"*/, 0LL);
  if ( !paySummonDetailLb )
    goto LABEL_37;
  UILabel__set_text(paySummonDetailLb, v29, 0LL);
  v30 = (UnityEngine_Component_o *)this->fields.ticketTitle;
  if ( !v30 )
    goto LABEL_37;
  v31 = UnityEngine_Component__get_gameObject(v30, 0LL);
  if ( !v31 )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(v31, 1, 0LL);
  ticketNumLb = this->fields.ticketNumLb;
  v33 = LocalizationManager__Get((System_String_o *)StringLiteral_13308/*"TICKET_NUM"*/, 0LL);
  ticketNum = this->fields.ticketNum;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ticketNum);
  v35 = System_String__Format(v33, v34, 0LL);
  if ( !ticketNumLb )
    goto LABEL_37;
  UILabel__set_text(ticketNumLb, v35, 0LL);
  v36 = this->fields.ticketInfo;
  if ( !v36 )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(v36, 1, 0LL);
  v37 = (UnityEngine_Component_o *)this->fields.payTitle;
  if ( !v37 )
    goto LABEL_37;
  v38 = UnityEngine_Component__get_gameObject(v37, 0LL);
  if ( !v38 )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(v38, 0, 0LL);
  v39 = this->fields.stoneInfo;
  if ( !v39 )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(v39, 0, 0LL);
}


void __fastcall PaySummonInfoComponent__setPaySummonInfo(
        PaySummonInfoComponent_o *this,
        VaildGachaInfo_o *gachaData,
        PaySummonInfoComponent_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1

  PaySummonInfoComponent__init(this, (const MethodInfo *)gachaData);
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
  if ( gachaData )
  {
    this->fields.price = gachaData->fields.price;
    PaySummonInfoComponent__setEnableSummonBtn(this, gachaData->fields.isOpen, v13);
    this->fields.currentGachaData = gachaData;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.currentGachaData,
      (System_Int32_array **)gachaData,
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


System_IAsyncResult_o *__fastcall PaySummonInfoComponent_ClickDelegate__BeginInvoke(
        PaySummonInfoComponent_ClickDelegate_o *this,
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


void __fastcall PaySummonInfoComponent_ClickDelegate__EndInvoke(
        PaySummonInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall PaySummonInfoComponent_ClickDelegate__Invoke(
        PaySummonInfoComponent_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PaySummonInfoComponent_ClickDelegate_o **v7; // x25
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
  PaySummonInfoComponent_ClickDelegate_o *v27; // x8
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
  PaySummonInfoComponent_ClickDelegate_o *v47; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (PaySummonInfoComponent_ClickDelegate_o **)(v3 + 32);
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