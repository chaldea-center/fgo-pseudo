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
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_Int32_array **gameObject; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4186AB1 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, target);
    byte_4186AB1 = 1;
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
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
  if ( v9 )
  {
    if ( !v8 )
      sub_B2C434(v9, v10);
    v8->fields.style = 3;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v8->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
    sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.eventReceiver, gameObject, v12, v13, v14, v15, v16, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PaySummonInfoComponent__MoveAlpha(
        PaySummonInfoComponent_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x19
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x21
  int v7; // s0
  float y; // s4
  float z; // s5
  float v12; // s3
  TweenAlpha_o *v13; // x20
  System_Int32_array **gameObject; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  v4 = (UnityEngine_Component_o *)this;
  if ( (byte_4186AB0 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, target);
    this = (PaySummonInfoComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4186AB0 = 1;
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
  this = (PaySummonInfoComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       target,
                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_15;
  ((void (__fastcall *)(PaySummonInfoComponent_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  v13 = TweenAlpha__Begin(target, 0.2, 1.0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PaySummonInfoComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v13 )
    {
      v13->fields.style = 3;
      gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(v4, 0LL);
      v13->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
      sub_B2C2F8((BattleServantConfConponent_o *)&v13->fields.eventReceiver, gameObject, v15, v16, v17, v18, v19, v20);
      return;
    }
LABEL_15:
    sub_B2C434(this, target);
  }
}


void __fastcall PaySummonInfoComponent__OnClickGacha(PaySummonInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  GachaRqParamData_o *v4; // x21
  GachaRqParamData_o **p_requestData; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  struct VaildGachaInfo_o *currentGachaData; // x8
  struct VaildGachaInfo_o *v15; // x8
  struct GachaRqParamData_o *requestData; // x9
  GachaRqParamData_o *v17; // x8
  struct VaildGachaInfo_o *v18; // x8
  struct GachaRqParamData_o *v19; // x9
  PaySummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x0

  if ( (byte_4186AB2 & 1) == 0 )
  {
    sub_B2C35C(&GachaRqParamData_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4186AB2 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  v4 = (GachaRqParamData_o *)sub_B2C42C(GachaRqParamData_TypeInfo);
  GachaRqParamData___ctor(v4, 0LL);
  this->fields.requestData = v4;
  p_requestData = &this->fields.requestData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.requestData,
    (System_Int32_array **)v4,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  currentGachaData = this->fields.currentGachaData;
  if ( !currentGachaData )
    goto LABEL_23;
  if ( !*p_requestData )
    goto LABEL_23;
  (*p_requestData)->fields.gachaId = currentGachaData->fields.id;
  v15 = this->fields.currentGachaData;
  if ( !v15 )
    goto LABEL_23;
  requestData = this->fields.requestData;
  if ( !requestData )
    goto LABEL_23;
  requestData->fields.warId = v15->fields.warId;
  if ( !*p_requestData )
    goto LABEL_23;
  (*p_requestData)->fields.gachaTime = 1;
  if ( !*p_requestData )
    goto LABEL_23;
  (*p_requestData)->fields.ticketItemId = 0;
  v17 = *p_requestData;
  if ( !*p_requestData )
    goto LABEL_23;
  if ( this->fields.isTicket )
  {
    v17->fields.gachaType = 5;
    if ( *p_requestData )
    {
      (*p_requestData)->fields.gachaResourceNum = this->fields.gachaTime;
      v18 = this->fields.currentGachaData;
      if ( v18 )
      {
        v19 = this->fields.requestData;
        if ( v19 )
        {
          v19->fields.ticketItemId = v18->fields.ticketItemId;
          goto LABEL_20;
        }
      }
    }
LABEL_23:
    sub_B2C434(v12, v13);
  }
  v17->fields.gachaType = 1;
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

  ticketTitle = (UnityEngine_Component_o *)this->fields.ticketTitle;
  if ( !ticketTitle
    || (ticketTitle = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(ticketTitle, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)ticketTitle, 0, 0LL),
        (ticketTitle = (UnityEngine_Component_o *)this->fields.ticketInfo) == 0LL) )
  {
    sub_B2C434(ticketTitle, method);
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( !gachaData )
    sub_B2C434(this, 0LL);
  PaySummonInfoComponent__setEnableSummonBtn(this, gachaData->fields.isOpen, method);
  this->fields.currentGachaData = gachaData;
  sub_B2C2F8(
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
  float v11; // s8
  float v12; // s9
  float v13; // s10
  float v14; // s11
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x20
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4186AAF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, isDisp);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4186AAF = 1;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBtn;
  if ( !paySummonBtn )
    goto LABEL_24;
  UnityEngine_Behaviour__set_enabled(paySummonBtn, isDisp, 0LL);
  *(UnityEngine_Color_o *)&v7 = isDisp ? UnityEngine_Color__get_white(0LL) : UnityEngine_Color__get_gray(0LL);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBntImg;
  v11 = v7;
  v12 = v8;
  v13 = v9;
  v14 = v10;
  if ( !paySummonBtn )
    goto LABEL_24;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, *(UnityEngine_Color_o *)&v7, 0LL);
  if ( this->fields.isTicket )
  {
    paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.ticketTitle;
    if ( !paySummonBtn )
      goto LABEL_24;
    goto LABEL_21;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.payTitle;
  if ( !paySummonBtn )
    goto LABEL_24;
  v16.fields.r = v11;
  v16.fields.g = v12;
  v16.fields.b = v13;
  v16.fields.a = v14;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v16, 0LL);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonDetailLb;
  if ( !paySummonBtn )
    goto LABEL_24;
  v17.fields.r = v11;
  v17.fields.g = v12;
  v17.fields.b = v13;
  v17.fields.a = v14;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v17, 0LL);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneNumLb;
  if ( !paySummonBtn
    || (v18.fields.r = v11,
        v18.fields.g = v12,
        v18.fields.b = v13,
        v18.fields.a = v14,
        UIWidget__set_color((UIWidget_o *)paySummonBtn, v18, 0LL),
        (paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneInfo) == 0LL) )
  {
LABEL_24:
    sub_B2C434(paySummonBtn, isDisp);
  }
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        (UnityEngine_GameObject_o *)paySummonBtn,
                                                                        (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(
                                              ComponentInChildren_Dropdown_DropdownItem,
                                              0LL,
                                              0LL);
  if ( ((unsigned __int8)paySummonBtn & 1) != 0 )
  {
    if ( !ComponentInChildren_Dropdown_DropdownItem )
      goto LABEL_24;
    paySummonBtn = (UnityEngine_Behaviour_o *)ComponentInChildren_Dropdown_DropdownItem;
LABEL_21:
    v19.fields.r = v11;
    v19.fields.g = v12;
    v19.fields.b = v13;
    v19.fields.a = v14;
    UIWidget__set_color((UIWidget_o *)paySummonBtn, v19, 0LL);
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBg;
  if ( !paySummonBtn )
    goto LABEL_24;
  v20.fields.r = v11;
  v20.fields.g = v12;
  v20.fields.b = v13;
  v20.fields.a = v14;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v20, 0LL);
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
  float v11; // s8
  float v12; // s9
  float v13; // s10
  float v14; // s11
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x20
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4186AAE & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, isOpen);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4186AAE = 1;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBtn;
  if ( !paySummonBtn )
    goto LABEL_24;
  UnityEngine_Behaviour__set_enabled(paySummonBtn, isOpen, 0LL);
  *(UnityEngine_Color_o *)&v7 = isOpen ? UnityEngine_Color__get_white(0LL) : UnityEngine_Color__get_gray(0LL);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBntImg;
  v11 = v7;
  v12 = v8;
  v13 = v9;
  v14 = v10;
  if ( !paySummonBtn )
    goto LABEL_24;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, *(UnityEngine_Color_o *)&v7, 0LL);
  if ( this->fields.isTicket )
  {
    paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.ticketTitle;
    if ( !paySummonBtn )
      goto LABEL_24;
    goto LABEL_21;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.payTitle;
  if ( !paySummonBtn )
    goto LABEL_24;
  v16.fields.r = v11;
  v16.fields.g = v12;
  v16.fields.b = v13;
  v16.fields.a = v14;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v16, 0LL);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonDetailLb;
  if ( !paySummonBtn )
    goto LABEL_24;
  v17.fields.r = v11;
  v17.fields.g = v12;
  v17.fields.b = v13;
  v17.fields.a = v14;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v17, 0LL);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneNumLb;
  if ( !paySummonBtn
    || (v18.fields.r = v11,
        v18.fields.g = v12,
        v18.fields.b = v13,
        v18.fields.a = v14,
        UIWidget__set_color((UIWidget_o *)paySummonBtn, v18, 0LL),
        (paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneInfo) == 0LL) )
  {
LABEL_24:
    sub_B2C434(paySummonBtn, isOpen);
  }
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        (UnityEngine_GameObject_o *)paySummonBtn,
                                                                        (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)UnityEngine_Object__op_Inequality(
                                              ComponentInChildren_Dropdown_DropdownItem,
                                              0LL,
                                              0LL);
  if ( ((unsigned __int8)paySummonBtn & 1) != 0 )
  {
    if ( !ComponentInChildren_Dropdown_DropdownItem )
      goto LABEL_24;
    paySummonBtn = (UnityEngine_Behaviour_o *)ComponentInChildren_Dropdown_DropdownItem;
LABEL_21:
    v19.fields.r = v11;
    v19.fields.g = v12;
    v19.fields.b = v13;
    v19.fields.a = v14;
    UIWidget__set_color((UIWidget_o *)paySummonBtn, v19, 0LL);
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBg;
  if ( !paySummonBtn )
    goto LABEL_24;
  v20.fields.r = v11;
  v20.fields.g = v12;
  v20.fields.b = v13;
  v20.fields.a = v14;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v20, 0LL);
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
  int32_t num; // w9
  char v15; // w8
  bool v16; // w9
  UILabel_o *paySummonDetailLb; // x21
  System_String_o *v18; // x22
  Il2CppObject *v19; // x0
  UILabel_o *stoneNumLb; // x21
  UILabel_o *ticketNumLb; // x20
  System_String_o *v22; // x21
  Il2CppObject *v23; // x0
  int32_t price; // [xsp+8h] [xbp-28h] BYREF
  int32_t ticketNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4186AAD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_10430/*"PAY_SUMMON_DETAIL"*/, v6);
    sub_B2C35C(&StringLiteral_13364/*"TICKET_NUM"*/, v7);
    sub_B2C35C(&StringLiteral_13365/*"TICKET_SUMMON_DETAIL"*/, v8);
    byte_4186AAD = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !SelfUserGame )
    goto LABEL_37;
  currentGachaData = this->fields.currentGachaData;
  if ( !currentGachaData || !Instance )
    goto LABEL_37;
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
  if ( (v15 & 1) != 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_10430/*"PAY_SUMMON_DETAIL"*/, 0LL);
    price = this->fields.price;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &price);
    Instance = (DataManager_o *)System_String__Format(v18, v19, 0LL);
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
                  Instance = (DataManager_o *)System_Int32__ToString((int)SelfUserGame + 168, 0LL);
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
LABEL_37:
    sub_B2C434(Instance, v11);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13365/*"TICKET_SUMMON_DETAIL"*/, 0LL);
  if ( !paySummonDetailLb )
    goto LABEL_37;
  UILabel__set_text(paySummonDetailLb, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.ticketTitle;
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  ticketNumLb = this->fields.ticketNumLb;
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_13364/*"TICKET_NUM"*/, 0LL);
  ticketNum = this->fields.ticketNum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ticketNum);
  Instance = (DataManager_o *)System_String__Format(v22, v23, 0LL);
  if ( !ticketNumLb )
    goto LABEL_37;
  UILabel__set_text(ticketNumLb, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.ticketInfo;
  if ( !Instance )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (DataManager_o *)this->fields.payTitle;
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (DataManager_o *)this->fields.stoneInfo;
  if ( !Instance )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
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
  sub_B2C2F8(
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
    sub_B2C2F8(
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
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
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall PaySummonInfoComponent_ClickDelegate__EndInvoke(
        PaySummonInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall PaySummonInfoComponent_ClickDelegate__Invoke(
        PaySummonInfoComponent_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  PaySummonInfoComponent_ClickDelegate_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  __int64 v12; // x3
  GachaRqParamData_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall **v27)(GachaRqParamData_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, GachaRqParamData_o *, _QWORD); // x0
  PaySummonInfoComponent_ClickDelegate_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(GachaRqParamData_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  GachaRqParamData_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  PaySummonInfoComponent_ClickDelegate_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PaySummonInfoComponent_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(GachaRqParamData_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, paramData, method, v3);
      v34 = sub_B2C38C(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B2C384(v31);
            v45 = sub_B2C788(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = paramData->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&paramData->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&paramData->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(paramData, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&paramData->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(GachaRqParamData_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(paramData, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = paramData->klass;
                if ( *(_WORD *)&paramData->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&paramData->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(paramData, class_0, v10, v12);
                }
                (*(void (__fastcall **)(GachaRqParamData_o *, _QWORD))v16)(paramData, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(GachaRqParamData_o *, _QWORD))&paramData->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  paramData,
                  *((_QWORD *)&paramData->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(paramData, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B2C384(v31);
          v37 = sub_B2C788(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AC5258(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, paramData, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AC5258(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))v24)(
                v32,
                paramData,
                *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, GachaRqParamData_o *, _QWORD))(*v32
                                                                              + 16LL * *(unsigned __int16 *)(v31 + 72)
                                                                              + 312))(
                v32,
                paramData,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, GachaRqParamData_o *, __int64))v33)(v32, paramData, v31);
    }
  }
}