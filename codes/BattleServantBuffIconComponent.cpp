void __fastcall BattleServantBuffIconComponent___ctor(BattleServantBuffIconComponent_o *this, const MethodInfo *method)
{
  this->fields.buffId = -1;
  this->fields.isReady = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantBuffIconComponent__AddDepth(
        BattleServantBuffIconComponent_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  UIWidget_o *iconSprite; // x0
  UnityEngine_Object_o *intervalLabel; // x21
  UIWidget_o *v7; // x0

  if ( (byte_40F8A01 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&addDepth);
    byte_40F8A01 = 1;
  }
  iconSprite = (UIWidget_o *)this->fields.iconSprite;
  if ( !iconSprite )
    goto LABEL_11;
  UIWidget__set_depth(iconSprite, iconSprite->fields.mDepth + addDepth, 0LL);
  intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(intervalLabel, 0LL, 0LL) )
  {
    v7 = (UIWidget_o *)this->fields.intervalLabel;
    if ( v7 )
    {
      UIWidget__set_depth(v7, v7->fields.mDepth + addDepth, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
}


BattleBuffData_ShowBuffData_o *__fastcall BattleServantBuffIconComponent__GetNowBuff(
        BattleServantBuffIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.nowBuff;
}


void __fastcall BattleServantBuffIconComponent__OnClick(
        BattleServantBuffIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetPerf; // x20
  int buffId; // w1
  BattlePerformanceStatus_o *v5; // x0

  if ( (byte_40F89FD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F89FD = 1;
  }
  targetPerf = (UnityEngine_Object_o *)this->fields.targetPerf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetPerf, 0LL, 0LL) )
  {
    buffId = this->fields.buffId;
    if ( buffId >= 1 )
    {
      v5 = this->fields.targetPerf;
      if ( !v5 )
        sub_B170D4();
      BattlePerformanceStatus__OpenBuffConf(v5, buffId, 0LL);
    }
  }
}


void __fastcall BattleServantBuffIconComponent__ParentHasChanged(
        BattleServantBuffIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  struct UISprite_o *v4; // x0
  UnityEngine_Object_o *backSprite; // x20
  struct UISprite_o *v6; // x0

  if ( (byte_40F89FE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F89FE = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v4 = this->fields.iconSprite;
    if ( !v4 )
      goto LABEL_16;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v4->klass->vtable._19_ParentHasChanged.method)(
      v4,
      v4->klass->vtable._20_OnStart.methodPtr);
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    v6 = this->fields.backSprite;
    if ( v6 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._19_ParentHasChanged.method)(
        v6,
        v6->klass->vtable._20_OnStart.methodPtr);
      return;
    }
LABEL_16:
    sub_B170D4();
  }
}


void __fastcall BattleServantBuffIconComponent__SetInterval(
        BattleServantBuffIconComponent_o *this,
        BattleBuffData_IntervalData_o *interval,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *intervalLabel; // x21
  UILabel_o *v11; // x0
  int32_t IntervalVal; // w0
  int v13; // w21
  System_String_o **v14; // x8
  System_String_o *v15; // x20
  UILabel_o *v16; // x19
  System_String_o *v17; // x20
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  int v20; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F89FF & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, interval);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_2368, v7);
    sub_B16FFC(&StringLiteral_2367, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    byte_40F89FF = 1;
  }
  intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(intervalLabel, 0LL, 0LL) )
  {
    v11 = this->fields.intervalLabel;
    if ( !v11 )
      goto LABEL_19;
    UILabel__set_text(v11, (System_String_o *)StringLiteral_1, 0LL);
    if ( interval )
    {
      IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0LL);
      if ( IntervalVal >= 1 )
      {
        v13 = IntervalVal;
        if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0LL) )
          v14 = (System_String_o **)&StringLiteral_2368;
        else
          v14 = (System_String_o **)&StringLiteral_2367;
        v15 = *v14;
        v16 = this->fields.intervalLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = LocalizationManager__Get(v15, 0LL);
        v20 = v13;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
        v19 = System_String__Format(v17, v18, 0LL);
        if ( v16 )
        {
          UILabel__set_text(v16, v19, 0LL);
          return;
        }
LABEL_19:
        sub_B170D4();
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantBuffIconComponent__ShowHighLight(
        BattleServantBuffIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *flashEffectObj; // x20
  struct BattleBuffData_ShowBuffData_o *oldBuff; // x8
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x9
  struct UnityEngine_GameObject_o *v7; // x20
  UnityEngine_Transform_o *transform; // x21
  struct UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o **p_flashEffectObjInstance; // x19
  UnityEngine_Transform_o *v11; // x20
  int v12; // s0
  UnityEngine_Transform_o *v15; // x20
  int v16; // s0
  UnityEngine_Transform_o *v19; // x19
  int v20; // s0

  if ( (byte_40F8A00 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F8A00 = 1;
  }
  flashEffectObj = (UnityEngine_Object_o *)this->fields.flashEffectObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(flashEffectObj, 0LL, 0LL) )
  {
    oldBuff = this->fields.oldBuff;
    if ( oldBuff )
    {
      nowBuff = this->fields.nowBuff;
      if ( nowBuff )
      {
        if ( !nowBuff->fields.isReady || oldBuff->fields.isReady )
          return;
        v7 = this->fields.flashEffectObj;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v9 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                  (UILabel_o *)v7,
                                                  transform,
                                                  (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
        this->fields.flashEffectObjInstance = v9;
        p_flashEffectObjInstance = &this->fields.flashEffectObjInstance;
        sub_B16F98(p_flashEffectObjInstance, v9);
        if ( *p_flashEffectObjInstance )
        {
          v11 = UnityEngine_GameObject__get_transform(*p_flashEffectObjInstance, 0LL);
          *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL);
          if ( v11 )
          {
            UnityEngine_Transform__set_localPosition(v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
            if ( *p_flashEffectObjInstance )
            {
              v15 = UnityEngine_GameObject__get_transform(*p_flashEffectObjInstance, 0LL);
              *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL);
              if ( v15 )
              {
                UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
                if ( *p_flashEffectObjInstance )
                {
                  v19 = UnityEngine_GameObject__get_transform(*p_flashEffectObjInstance, 0LL);
                  *(UnityEngine_Quaternion_o *)&v20 = UnityEngine_Quaternion__get_identity(0LL);
                  if ( v19 )
                  {
                    UnityEngine_Transform__set_localRotation(v19, *(UnityEngine_Quaternion_o *)&v20, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantBuffIconComponent__UpdateActiveBuff(
        BattleServantBuffIconComponent_o *this,
        const MethodInfo *method)
{
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x8
  UIWidget_o *iconSprite; // x19
  int v4; // s0

  nowBuff = this->fields.nowBuff;
  if ( !nowBuff )
    goto LABEL_6;
  iconSprite = (UIWidget_o *)this->fields.iconSprite;
  if ( !nowBuff->fields.isReady )
  {
    *(UnityEngine_Color_o *)&v4 = UnityEngine_Color__get_gray(0LL);
    if ( iconSprite )
      goto LABEL_4;
LABEL_6:
    sub_B170D4();
  }
  *(UnityEngine_Color_o *)&v4 = UnityEngine_Color__get_white(0LL);
  if ( !iconSprite )
    goto LABEL_6;
LABEL_4:
  UIWidget__set_color(iconSprite, *(UnityEngine_Color_o *)&v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantBuffIconComponent__setIcon(
        BattleServantBuffIconComponent_o *this,
        int32_t buffId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v5; // x0
  UISprite_o *iconSprite; // x20
  int32_t v7; // w19
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F89FA & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&buffId);
    byte_40F89FA = 1;
  }
  if ( buffId == -1 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
  this->fields.buffId = buffId;
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v5 )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(v5, 1, 0LL);
  iconSprite = this->fields.iconSprite;
  v7 = this->fields.buffId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSBuffIcon(iconSprite, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantBuffIconComponent__setIcon_22678936(
        BattleServantBuffIconComponent_o *this,
        BattleBuffData_ShowBuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *iconSprite; // x21
  int32_t buffId; // w22
  UIWidget_o *v10; // x21
  int v11; // s0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Object_o *flashEffectObjInstance; // x20
  UnityEngine_Object_o *v17; // x19
  struct UISprite_o *v18; // x0
  UnityEngine_Object_o *backSprite; // x21
  const MethodInfo *v20; // x2
  UnityEngine_Behaviour_o *v21; // x0
  UnityEngine_Behaviour_o *v22; // x0
  struct UISprite_o *v23; // x0
  const MethodInfo *v24; // x1

  if ( (byte_40F89FB & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, buff);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F89FB = 1;
  }
  if ( buff )
  {
    nowBuff = this->fields.nowBuff;
    this->fields.oldBuff = nowBuff;
    sub_B16F98(&this->fields.oldBuff, nowBuff);
    this->fields.nowBuff = buff;
    sub_B16F98(&this->fields.nowBuff, buff);
    this->fields.buffId = buff->fields.buffId;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    iconSprite = this->fields.iconSprite;
    buffId = this->fields.buffId;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetSBuffIcon(iconSprite, buffId, 0LL);
    v10 = (UIWidget_o *)this->fields.iconSprite;
    if ( buff->fields.isReady )
    {
      *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
      if ( !v10 )
        goto LABEL_34;
    }
    else
    {
      *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_gray(0LL);
      if ( !v10 )
        goto LABEL_34;
    }
    UIWidget__set_color(v10, *(UnityEngine_Color_o *)&v11, 0LL);
    v18 = this->fields.iconSprite;
    if ( !v18 )
      goto LABEL_34;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v18->klass->vtable._30_MarkAsChanged.method)(
      v18,
      v18->klass->vtable._31_Awake.methodPtr);
    backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
    {
      v21 = (UnityEngine_Behaviour_o *)this->fields.backSprite;
      if ( !v21 )
        goto LABEL_34;
      UnityEngine_Behaviour__set_enabled(v21, buff->fields.isPassive, 0LL);
      if ( buff->fields.isFrame )
      {
        v22 = (UnityEngine_Behaviour_o *)this->fields.backSprite;
        if ( !v22 )
          goto LABEL_34;
        UnityEngine_Behaviour__set_enabled(v22, 1, 0LL);
      }
      v23 = this->fields.backSprite;
      if ( !v23 )
LABEL_34:
        sub_B170D4();
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v23->klass->vtable._30_MarkAsChanged.method)(
        v23,
        v23->klass->vtable._31_Awake.methodPtr);
    }
    BattleServantBuffIconComponent__SetInterval(this, buff->fields._IntervalData_k__BackingField, v20);
    BattleServantBuffIconComponent__ShowHighLight(this, v24);
  }
  else
  {
    v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v15 )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(v15, 0, 0LL);
    this->fields.oldBuff = 0LL;
    sub_B16F98(&this->fields.oldBuff, 0LL);
    this->fields.nowBuff = 0LL;
    sub_B16F98(&this->fields.nowBuff, 0LL);
    flashEffectObjInstance = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(flashEffectObjInstance, 0LL, 0LL) )
    {
      v17 = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v17, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantBuffIconComponent__setImageId(
        BattleServantBuffIconComponent_o *this,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *iconSprite; // x21
  UnityEngine_Object_o *backSprite; // x20
  UnityEngine_Behaviour_o *v9; // x0

  if ( (byte_40F89FC & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&iconId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F89FC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  if ( iconId )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    iconSprite = this->fields.iconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetSBuffIconByIconId(iconSprite, iconId, 0LL);
    backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
    {
      v9 = (UnityEngine_Behaviour_o *)this->fields.backSprite;
      if ( v9 )
      {
        UnityEngine_Behaviour__set_enabled(v9, 0, 0LL);
        return;
      }
LABEL_16:
      sub_B170D4();
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}