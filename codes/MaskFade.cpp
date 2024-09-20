void __fastcall MaskFade___ctor(MaskFade_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MaskFade__EndFadein(MaskFade_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0
  Il2CppObject *Component_object; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4A5DBD3 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DBD3 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_14;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       maskSprite,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0LL,
                                            0LL);
  if ( ((unsigned __int8)maskSprite & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  this->fields.maskKind = 0;
  if ( !maskSprite
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))maskSprite->klass[1]._1.castClass)(
          maskSprite,
          maskSprite->klass[1]._1.declaringType,
          0.0),
        (maskSprite = (UnityEngine_Component_o *)this->fields.colliderBase) == 0LL) )
  {
LABEL_14:
    sub_1B8880C(maskSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v8 = callbackFunc;
  *(&p_callbackFunc[-1].fields.isMine + 4) = 0;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
  }
}


void __fastcall MaskFade__EndFadeout(MaskFade_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UISprite_o *maskSprite; // x0
  Il2CppObject *Component_object; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x19
  struct System_Action_o *v9; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4A5DBD0 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DBD0 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  if ( v3->static_fields->IsEnableFadeRerunSkipped )
  {
    maskSprite = this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_16;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)maskSprite,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    maskSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
    if ( ((unsigned __int8)maskSprite & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_16;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
    }
  }
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
LABEL_16:
    sub_1B8880C(maskSprite, method);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))maskSprite->klass->vtable._8_set_alpha.method)(
    maskSprite,
    maskSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  *(&p_callbackFunc[-1].fields.isMine + 4) = 0;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaskFade__FadeChangeColor(
        MaskFade_o *this,
        int32_t kind,
        float duration,
        System_Action_o *callback,
        const MethodInfo *method)
{
  void *maskSprite; // x0
  Il2CppObject *Component_object; // x22
  UnityEngine_GameObject_o *v11; // x19
  float v12; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  TweenColor_o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x1
  BalanceConfig_c *v22; // x0
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4A5DBD1 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_1B885B0(&FadeLogger_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_5969/*"EndFadeout"*/);
    sub_1B885B0(&StringLiteral_25354/*"実行中"*/);
    sub_1B885B0(&StringLiteral_6556/*"FadeChangeColor"*/);
    byte_4A5DBD1 = 1;
  }
  if ( !this->fields.isExecuteMask )
    goto LABEL_13;
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_34;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskSprite,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)maskSprite & 1) == 0 )
    goto LABEL_13;
  if ( !Component_object )
    goto LABEL_34;
  if ( *((float *)&Component_object[9].monitor + 1) != 0.0 )
  {
LABEL_13:
    this->fields.callbackFunc = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method);
    if ( kind == 1 )
    {
      v12 = 0.0;
    }
    else
    {
      if ( kind != 2 )
      {
        v22 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v22 = BalanceConfig_TypeInfo;
        }
        if ( !v22->static_fields->IsEnableFadeRerunSkipped )
          return 0;
        goto LABEL_32;
      }
      v12 = 1.0;
    }
    maskSprite = this->fields.colliderBase;
    this->fields.maskKind = kind;
    if ( maskSprite )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
      if ( duration <= 0.0 )
        goto LABEL_26;
      maskSprite = this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_34;
      UIWidget__set_color((UIWidget_o *)maskSprite, *(UnityEngine_Color_o *)((char *)maskSprite + 148), 0LL);
      maskSprite = this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_34;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
      v24.fields.a = 1.0;
      v24.fields.r = v12;
      v24.fields.g = v12;
      v24.fields.b = v12;
      v14 = TweenColor__Begin(gameObject, duration, v24, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
      {
        this->fields.isExecuteMask = 1;
        maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v14 )
        {
          v14->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskSprite;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->fields.eventReceiver, (int32_t)maskSprite, v15, v16);
          v17 = StringLiteral_5969/*"EndFadeout"*/;
          v14->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5969/*"EndFadeout"*/;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->fields.callWhenFinished, v17, v18, v19);
          return 1;
        }
      }
      else
      {
LABEL_26:
        maskSprite = this->fields.maskSprite;
        if ( maskSprite )
        {
          v23.fields.a = 1.0;
          v23.fields.r = v12;
          v23.fields.g = v12;
          v23.fields.b = v12;
          UIWidget__set_color((UIWidget_o *)maskSprite, v23, 0LL);
          MaskFade__EndFadeout(this, v20);
          return 1;
        }
      }
    }
LABEL_34:
    sub_1B8880C(maskSprite, *(_QWORD *)&kind);
  }
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  FadeLogger__CreateFadeLogText(
    (System_String_o *)StringLiteral_6556/*"FadeChangeColor"*/,
    kind,
    (System_String_o *)StringLiteral_25354/*"実行中"*/,
    duration,
    v11,
    0LL);
LABEL_32:
  ActionExtensions__Call(callback, 0LL);
  return 0;
}


bool __fastcall MaskFade__Fadein(MaskFade_o *this, float duration, System_Action_o *callback, const MethodInfo *method)
{
  void *maskSprite; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Component_object; // x21
  int32_t maskKind; // w21
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 *v13; // x9
  BalanceConfig_c *v14; // x0
  float v15; // s9
  float v16; // s10
  float v17; // s11
  UnityEngine_GameObject_o *v18; // x0
  TweenColor_o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  bool result; // w0
  UnityEngine_Color_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4A5DBD2 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_1B885B0(&FadeLogger_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_6562/*"Fadein"*/);
    sub_1B885B0(&StringLiteral_25354/*"実行中"*/);
    sub_1B885B0(&StringLiteral_5968/*"EndFadein"*/);
    sub_1B885B0(&StringLiteral_25352/*"完了状態"*/);
    byte_4A5DBD2 = 1;
  }
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_33;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskSprite,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !this->fields.isExecuteMask )
  {
    v14 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    if ( v14->static_fields->IsEnableFadeRerunSkipped )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)maskSprite & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_33;
        value = TweenColor__get_value((TweenColor_o *)Component_object, 0LL);
        if ( value.fields.a <= 0.0 )
        {
          maskKind = this->fields.maskKind;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !FadeLogger_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
          v13 = &StringLiteral_25352/*"完了状態"*/;
          goto LABEL_32;
        }
      }
    }
LABEL_21:
    this->fields.callbackFunc = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v8, v9);
    this->fields.maskKind = 0;
    if ( duration <= 0.0 )
      goto LABEL_28;
    maskSprite = this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_33;
    v15 = *((float *)maskSprite + 37);
    v16 = *((float *)maskSprite + 38);
    v17 = *((float *)maskSprite + 39);
    v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
    v27.fields.a = 0.0;
    v27.fields.r = v15;
    v27.fields.g = v16;
    v27.fields.b = v17;
    v19 = TweenColor__Begin(v18, duration, v27, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
    {
LABEL_28:
      MaskFade__EndFadein(this, (const MethodInfo *)callback);
      return 1;
    }
    maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( v19 )
    {
      v19->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskSprite;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->fields.eventReceiver, (int32_t)maskSprite, v20, v21);
      v22 = StringLiteral_5968/*"EndFadein"*/;
      v19->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5968/*"EndFadein"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->fields.callWhenFinished, v22, v23, v24);
      result = 1;
      this->fields.isExecuteMask = 1;
      return result;
    }
LABEL_33:
    sub_1B8880C(maskSprite, callback);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)maskSprite & 1) == 0 )
    goto LABEL_21;
  if ( !Component_object )
    goto LABEL_33;
  if ( *((float *)&Component_object[9].monitor + 1) != 0.0 )
    goto LABEL_21;
  maskKind = this->fields.maskKind;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  v13 = &StringLiteral_25354/*"実行中"*/;
LABEL_32:
  FadeLogger__CreateFadeLogText(
    (System_String_o *)StringLiteral_6562/*"Fadein"*/,
    maskKind,
    (System_String_o *)*v13,
    duration,
    gameObject,
    0LL);
  ActionExtensions__Call(callback, 0LL);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaskFade__Fadeout(
        MaskFade_o *this,
        int32_t kind,
        float duration,
        System_Action_o *callback,
        const MethodInfo *method)
{
  void *maskSprite; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *Component_object; // x22
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 *v14; // x9
  BalanceConfig_c *v15; // x0
  float v16; // s9
  UnityEngine_GameObject_o *v17; // x0
  TweenColor_o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x1
  BalanceConfig_c *v26; // x0
  UnityEngine_Color_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4A5DBCF & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_1B885B0(&FadeLogger_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_6564/*"Fadeout"*/);
    sub_1B885B0(&StringLiteral_5969/*"EndFadeout"*/);
    sub_1B885B0(&StringLiteral_25354/*"実行中"*/);
    sub_1B885B0(&StringLiteral_25352/*"完了状態"*/);
    byte_4A5DBCF = 1;
  }
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_47;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskSprite,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !this->fields.isExecuteMask )
  {
    v15 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    if ( v15->static_fields->IsEnableFadeRerunSkipped )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)maskSprite & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_47;
        value = TweenColor__get_value((TweenColor_o *)Component_object, 0LL);
        if ( value.fields.a >= 1.0 )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !FadeLogger_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
          v14 = &StringLiteral_25352/*"完了状態"*/;
          goto LABEL_44;
        }
      }
    }
LABEL_21:
    this->fields.callbackFunc = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v10, v11);
    if ( kind == 1 )
    {
      v16 = 0.0;
    }
    else
    {
      if ( kind != 2 )
      {
        v26 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v26 = BalanceConfig_TypeInfo;
        }
        if ( !v26->static_fields->IsEnableFadeRerunSkipped )
          return 0;
        goto LABEL_45;
      }
      v16 = 1.0;
    }
    maskSprite = this->fields.colliderBase;
    this->fields.maskKind = kind;
    if ( maskSprite )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
      if ( duration <= 0.0 )
        goto LABEL_34;
      maskSprite = this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_47;
      v28.fields.a = *((float *)maskSprite + 40);
      v28.fields.r = v16;
      v28.fields.g = v16;
      v28.fields.b = v16;
      UIWidget__set_color((UIWidget_o *)maskSprite, v28, 0LL);
      maskSprite = this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_47;
      v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
      v30.fields.a = 1.0;
      v30.fields.r = v16;
      v30.fields.g = v16;
      v30.fields.b = v16;
      v18 = TweenColor__Begin(v17, duration, v30, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL) )
      {
        this->fields.isExecuteMask = 1;
        maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v18 )
        {
          v18->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskSprite;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->fields.eventReceiver, (int32_t)maskSprite, v19, v20);
          v21 = StringLiteral_5969/*"EndFadeout"*/;
          v18->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5969/*"EndFadeout"*/;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->fields.callWhenFinished, v21, v22, v23);
          return 1;
        }
      }
      else
      {
LABEL_34:
        maskSprite = this->fields.maskSprite;
        if ( maskSprite )
        {
          v29.fields.a = 1.0;
          v29.fields.r = v16;
          v29.fields.g = v16;
          v29.fields.b = v16;
          UIWidget__set_color((UIWidget_o *)maskSprite, v29, 0LL);
          MaskFade__EndFadeout(this, v24);
          return 1;
        }
      }
    }
LABEL_47:
    sub_1B8880C(maskSprite, *(_QWORD *)&kind);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)maskSprite & 1) == 0 )
    goto LABEL_21;
  if ( !Component_object )
    goto LABEL_47;
  if ( *((float *)&Component_object[9].monitor + 1) != 1.0 )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  v14 = &StringLiteral_25354/*"実行中"*/;
LABEL_44:
  FadeLogger__CreateFadeLogText(
    (System_String_o *)StringLiteral_6564/*"Fadeout"*/,
    kind,
    (System_String_o *)*v14,
    duration,
    gameObject,
    0LL);
LABEL_45:
  ActionExtensions__Call(callback, 0LL);
  return 0;
}


int32_t __fastcall MaskFade__GetFadeoutKind(MaskFade_o *this, const MethodInfo *method)
{
  if ( this->fields.isExecuteMask )
    return 0;
  else
    return this->fields.maskKind;
}


void __fastcall MaskFade__Init(MaskFade_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4A5DBCE & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DBCE = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_15;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         maskSprite,
                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0LL,
                                              0LL);
    if ( ((unsigned __int8)maskSprite & 1) != 0 )
    {
      if ( !Component_object || (maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite) == 0LL )
LABEL_15:
        sub_1B8880C(maskSprite, method);
      UIWidget__set_color((UIWidget_o *)maskSprite, (UnityEngine_Color_o)Component_object[9], 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
    }
    this->fields.isExecuteMask = 0;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  this->fields.maskKind = 0;
  if ( !maskSprite )
    goto LABEL_15;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))maskSprite->klass[1]._1.castClass)(
    maskSprite,
    maskSprite->klass[1]._1.declaringType,
    0.0);
  maskSprite = (UnityEngine_Component_o *)this->fields.colliderBase;
  if ( !maskSprite )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
}


bool __fastcall MaskFade__IsBusy(MaskFade_o *this, const MethodInfo *method)
{
  return this->fields.isExecuteMask;
}


bool __fastcall MaskFade__IsDisp(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x0

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_1B8880C(0LL, method);
  return ((float (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))maskSprite->klass->vtable._7_get_alpha.method)(
           maskSprite,
           maskSprite->klass->vtable._8_set_alpha.methodPtr) > 0.0;
}


bool __fastcall MaskFade__IsOnTop(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x0

  if ( this->fields.isExecuteMask )
    return 0;
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_1B8880C(0LL, method);
  return ((float (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))maskSprite->klass->vtable._7_get_alpha.method)(
           maskSprite,
           maskSprite->klass->vtable._8_set_alpha.methodPtr) >= 1.0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaskFade__SetInitColor(MaskFade_o *this, int32_t kind, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x0
  float a; // s3
  float r; // s0
  float g; // s1
  float b; // s2

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_1B8880C(0LL, kind);
  if ( kind == 1 )
  {
    r = 0.0;
    g = 0.0;
    b = 0.0;
  }
  else if ( kind == 2 )
  {
    r = 1.0;
    g = 1.0;
    b = 1.0;
  }
  else
  {
    g = maskSprite->fields.mColor.fields.g;
    b = maskSprite->fields.mColor.fields.b;
    r = maskSprite->fields.mColor.fields.r;
  }
  a = maskSprite->fields.mColor.fields.a;
  UIWidget__set_color((UIWidget_o *)maskSprite, *(UnityEngine_Color_o *)&r, 0LL);
}


void __fastcall MaskFade__SetMaskCollider(MaskFade_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_GameObject_o *colliderBase; // x0

  colliderBase = this->fields.colliderBase;
  if ( !colliderBase )
    sub_1B8880C(0LL, isEnable);
  UnityEngine_GameObject__SetActive(colliderBase, isEnable, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaskFade__TryGetColorByMaskFade(
        UnityEngine_Color_o *color,
        int32_t kind,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  bool v4; // w8

  if ( kind == 1 )
  {
    v4 = 1;
    defaultColor.fields.a = 1.0;
    defaultColor.fields.r = 0.0;
    defaultColor.fields.g = 0.0;
    defaultColor.fields.b = 0.0;
  }
  else if ( kind == 2 )
  {
    v4 = 1;
    defaultColor.fields.r = 1.0;
    defaultColor.fields.g = 1.0;
    defaultColor.fields.b = 1.0;
    defaultColor.fields.a = 1.0;
  }
  else
  {
    v4 = 0;
  }
  *color = defaultColor;
  return v4;
}


int32_t __fastcall MaskFade__get_Depth(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x8

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_1B8880C(this, method);
  return maskSprite->fields.mDepth;
}


void __fastcall MaskFade__set_Depth(MaskFade_o *this, int32_t value, const MethodInfo *method)
{
  UIWidget_o *maskSprite; // x0

  maskSprite = (UIWidget_o *)this->fields.maskSprite;
  if ( !maskSprite )
    sub_1B8880C(0LL, value);
  UIWidget__set_depth(maskSprite, value, 0LL);
}