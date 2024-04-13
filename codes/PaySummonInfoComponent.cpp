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
  __int64 v3; // x3
  float y; // s4
  float z; // s5
  float v8; // s3
  TweenAlpha_o *v9; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  System_Int32_array **gameObject; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E8381 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)target, (_DWORD)method, v3);
    byte_42E8381 = 1;
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
    v8 = z;
    TweenScale__Begin(target, 0.2, *(UnityEngine_Vector3_o *)&zero.fields.y, 0LL);
  }
  v9 = TweenAlpha__Begin(target, 0.2, 0.0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( v10 )
  {
    if ( !v9 )
      sub_B5D69C(v10, v11);
    v9->fields.style = 3;
    gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v9->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
    sub_B5D560((BattleServantConfConponent_o *)&v9->fields.eventReceiver, gameObject, v13, v14, v15, v16, v17, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PaySummonInfoComponent__MoveAlpha(
        PaySummonInfoComponent_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Component_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Transform_o *transform; // x21
  int v10; // s0
  float y; // s4
  float z; // s5
  float v15; // s3
  TweenAlpha_o *v16; // x20
  System_Int32_array **gameObject; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  v5 = (UnityEngine_Component_o *)this;
  if ( (byte_42E8380 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, (_DWORD)target, (_DWORD)method, v3);
    this = (PaySummonInfoComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E8380 = 1;
  }
  if ( !target )
    goto LABEL_15;
  transform = UnityEngine_GameObject__get_transform(target, 0LL);
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v10, 0LL);
  if ( !UnityEngine_GameObject__get_activeSelf(target, 0LL) )
    UnityEngine_GameObject__SetActive(target, 1, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  y = one.fields.y;
  z = one.fields.z;
  one.fields.y = one.fields.x;
  one.fields.z = y;
  v15 = z;
  TweenScale__Begin(target, 0.2, *(UnityEngine_Vector3_o *)&one.fields.y, 0LL);
  this = (PaySummonInfoComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       target,
                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_15;
  ((void (__fastcall *)(PaySummonInfoComponent_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  v16 = TweenAlpha__Begin(target, 0.2, 1.0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (PaySummonInfoComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v16 )
    {
      v16->fields.style = 3;
      gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject(v5, 0LL);
      v16->fields.eventReceiver = (struct UnityEngine_GameObject_o *)gameObject;
      sub_B5D560((BattleServantConfConponent_o *)&v16->fields.eventReceiver, gameObject, v18, v19, v20, v21, v22, v23);
      return;
    }
LABEL_15:
    sub_B5D69C(this, target);
  }
}


void __fastcall PaySummonInfoComponent__OnClickGacha(PaySummonInfoComponent_o *this, const MethodInfo *method)
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
  struct VaildGachaInfo_o *currentGachaData; // x8
  struct VaildGachaInfo_o *v19; // x8
  struct GachaRqParamData_o *requestData; // x9
  GachaRqParamData_o *v21; // x8
  struct VaildGachaInfo_o *v22; // x8
  struct GachaRqParamData_o *v23; // x9
  PaySummonInfoComponent_ClickDelegate_o *clickCallbackFunc; // x0

  if ( (byte_42E8382 & 1) == 0 )
  {
    sub_B5D5C4(&GachaRqParamData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E8382 = 1;
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
  currentGachaData = this->fields.currentGachaData;
  if ( !currentGachaData )
    goto LABEL_23;
  if ( !*p_requestData )
    goto LABEL_23;
  (*p_requestData)->fields.gachaId = currentGachaData->fields.id;
  v19 = this->fields.currentGachaData;
  if ( !v19 )
    goto LABEL_23;
  requestData = this->fields.requestData;
  if ( !requestData )
    goto LABEL_23;
  requestData->fields.warId = v19->fields.warId;
  if ( !*p_requestData )
    goto LABEL_23;
  (*p_requestData)->fields.gachaTime = 1;
  if ( !*p_requestData )
    goto LABEL_23;
  (*p_requestData)->fields.ticketItemId = 0;
  v21 = *p_requestData;
  if ( !*p_requestData )
    goto LABEL_23;
  if ( this->fields.isTicket )
  {
    v21->fields.gachaType = 5;
    if ( *p_requestData )
    {
      (*p_requestData)->fields.gachaResourceNum = this->fields.gachaTime;
      v22 = this->fields.currentGachaData;
      if ( v22 )
      {
        v23 = this->fields.requestData;
        if ( v23 )
        {
          v23->fields.ticketItemId = v22->fields.ticketItemId;
          goto LABEL_20;
        }
      }
    }
LABEL_23:
    sub_B5D69C(v16, v17);
  }
  v21->fields.gachaType = 1;
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
    sub_B5D69C(ticketTitle, method);
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
    sub_B5D69C(this, 0LL);
  PaySummonInfoComponent__setEnableSummonBtn(this, gachaData->fields.isOpen, method);
  this->fields.currentGachaData = gachaData;
  sub_B5D560(
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Behaviour_o *paySummonBtn; // x0
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s3
  float v14; // s8
  float v15; // s9
  float v16; // s10
  float v17; // s11
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x20
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E837F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, isDisp, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E837F = 1;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBtn;
  if ( !paySummonBtn )
    goto LABEL_24;
  UnityEngine_Behaviour__set_enabled(paySummonBtn, isDisp, 0LL);
  *(UnityEngine_Color_o *)&v10 = isDisp ? UnityEngine_Color__get_white(0LL) : UnityEngine_Color__get_gray(0LL);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBntImg;
  v14 = v10;
  v15 = v11;
  v16 = v12;
  v17 = v13;
  if ( !paySummonBtn )
    goto LABEL_24;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, *(UnityEngine_Color_o *)&v10, 0LL);
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
  v19.fields.r = v14;
  v19.fields.g = v15;
  v19.fields.b = v16;
  v19.fields.a = v17;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v19, 0LL);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonDetailLb;
  if ( !paySummonBtn )
    goto LABEL_24;
  v20.fields.r = v14;
  v20.fields.g = v15;
  v20.fields.b = v16;
  v20.fields.a = v17;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v20, 0LL);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneNumLb;
  if ( !paySummonBtn
    || (v21.fields.r = v14,
        v21.fields.g = v15,
        v21.fields.b = v16,
        v21.fields.a = v17,
        UIWidget__set_color((UIWidget_o *)paySummonBtn, v21, 0LL),
        (paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneInfo) == 0LL) )
  {
LABEL_24:
    sub_B5D69C(paySummonBtn, isDisp);
  }
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        (UnityEngine_GameObject_o *)paySummonBtn,
                                                                        (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
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
    v22.fields.r = v14;
    v22.fields.g = v15;
    v22.fields.b = v16;
    v22.fields.a = v17;
    UIWidget__set_color((UIWidget_o *)paySummonBtn, v22, 0LL);
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBg;
  if ( !paySummonBtn )
    goto LABEL_24;
  v23.fields.r = v14;
  v23.fields.g = v15;
  v23.fields.b = v16;
  v23.fields.a = v17;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PaySummonInfoComponent__setEnableSummonBtn(
        PaySummonInfoComponent_o *this,
        bool isOpen,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Behaviour_o *paySummonBtn; // x0
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s3
  float v14; // s8
  float v15; // s9
  float v16; // s10
  float v17; // s11
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x20
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E837E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, isOpen, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E837E = 1;
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBtn;
  if ( !paySummonBtn )
    goto LABEL_24;
  UnityEngine_Behaviour__set_enabled(paySummonBtn, isOpen, 0LL);
  *(UnityEngine_Color_o *)&v10 = isOpen ? UnityEngine_Color__get_white(0LL) : UnityEngine_Color__get_gray(0LL);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBntImg;
  v14 = v10;
  v15 = v11;
  v16 = v12;
  v17 = v13;
  if ( !paySummonBtn )
    goto LABEL_24;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, *(UnityEngine_Color_o *)&v10, 0LL);
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
  v19.fields.r = v14;
  v19.fields.g = v15;
  v19.fields.b = v16;
  v19.fields.a = v17;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v19, 0LL);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonDetailLb;
  if ( !paySummonBtn )
    goto LABEL_24;
  v20.fields.r = v14;
  v20.fields.g = v15;
  v20.fields.b = v16;
  v20.fields.a = v17;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v20, 0LL);
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneNumLb;
  if ( !paySummonBtn
    || (v21.fields.r = v14,
        v21.fields.g = v15,
        v21.fields.b = v16,
        v21.fields.a = v17,
        UIWidget__set_color((UIWidget_o *)paySummonBtn, v21, 0LL),
        (paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.stoneInfo) == 0LL) )
  {
LABEL_24:
    sub_B5D69C(paySummonBtn, isOpen);
  }
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                        (UnityEngine_GameObject_o *)paySummonBtn,
                                                                        (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
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
    v22.fields.r = v14;
    v22.fields.g = v15;
    v22.fields.b = v16;
    v22.fields.a = v17;
    UIWidget__set_color((UIWidget_o *)paySummonBtn, v22, 0LL);
  }
  paySummonBtn = (UnityEngine_Behaviour_o *)this->fields.paySummonBg;
  if ( !paySummonBtn )
    goto LABEL_24;
  v23.fields.r = v14;
  v23.fields.g = v15;
  v23.fields.b = v16;
  v23.fields.a = v17;
  UIWidget__set_color((UIWidget_o *)paySummonBtn, v23, 0LL);
}


void __fastcall PaySummonInfoComponent__setPaySummonDispInfo(PaySummonInfoComponent_o *this, const MethodInfo *method)
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
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  struct VaildGachaInfo_o *currentGachaData; // x8
  UserItemEntity_o *Entity; // x0
  int32_t num; // w9
  char v29; // w8
  bool v30; // w9
  UILabel_o *paySummonDetailLb; // x21
  System_String_o *v32; // x22
  Il2CppObject *v33; // x0
  UILabel_o *stoneNumLb; // x21
  UILabel_o *ticketNumLb; // x20
  System_String_o *v36; // x21
  Il2CppObject *v37; // x0
  int32_t price; // [xsp+8h] [xbp-28h] BYREF
  int32_t ticketNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E837D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10539/*"PAY_SUMMON_DETAIL"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_13520/*"TICKET_NUM"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_13521/*"TICKET_SUMMON_DETAIL"*/, v20, v21, v22);
    byte_42E837D = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    v29 = 0;
    this->fields.ticketNum = num;
    v30 = 1;
  }
  else
  {
    v30 = 0;
    v29 = 1;
  }
  this->fields.isTicket = v30;
  paySummonDetailLb = this->fields.paySummonDetailLb;
  if ( (v29 & 1) != 0 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_10539/*"PAY_SUMMON_DETAIL"*/, 0LL);
    price = this->fields.price;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &price);
    Instance = (DataManager_o *)System_String__Format(v32, v33, 0LL);
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
    sub_B5D69C(Instance, v25);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13521/*"TICKET_SUMMON_DETAIL"*/, 0LL);
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
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_13520/*"TICKET_NUM"*/, 0LL);
  ticketNum = this->fields.ticketNum;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ticketNum);
  Instance = (DataManager_o *)System_String__Format(v36, v37, 0LL);
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
  sub_B5D560(
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
    sub_B5D560(
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
  sub_B5D560(p_method);
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
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


void __fastcall PaySummonInfoComponent_ClickDelegate__EndInvoke(
        PaySummonInfoComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  PaySummonInfoComponent_ClickDelegate_o *v29; // x8
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
  PaySummonInfoComponent_ClickDelegate_o *v51; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (PaySummonInfoComponent_ClickDelegate_o **)(v3 + 32);
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