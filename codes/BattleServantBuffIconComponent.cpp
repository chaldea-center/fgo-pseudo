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

  if ( (byte_4185AC6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&addDepth);
    byte_4185AC6 = 1;
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
    iconSprite = (UIWidget_o *)this->fields.intervalLabel;
    if ( iconSprite )
    {
      UIWidget__set_depth(iconSprite, iconSprite->fields.mDepth + addDepth, 0LL);
      return;
    }
LABEL_11:
    sub_B2C434(iconSprite, *(_QWORD *)&addDepth);
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
  __int64 buffId; // x1
  BattlePerformanceStatus_o *v5; // x0

  if ( (byte_4185AC2 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185AC2 = 1;
  }
  targetPerf = (UnityEngine_Object_o *)this->fields.targetPerf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetPerf, 0LL, 0LL) )
  {
    buffId = (unsigned int)this->fields.buffId;
    if ( (int)buffId >= 1 )
    {
      v5 = this->fields.targetPerf;
      if ( !v5 )
        sub_B2C434(0LL, buffId);
      BattlePerformanceStatus__OpenBuffConf(v5, buffId, 0LL);
    }
  }
}


void __fastcall BattleServantBuffIconComponent__ParentHasChanged(
        BattleServantBuffIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v4; // x1
  struct UISprite_o *v5; // x0
  UnityEngine_Object_o *backSprite; // x20

  if ( (byte_4185AC3 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185AC3 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v5 = this->fields.iconSprite;
    if ( !v5 )
      goto LABEL_16;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v5->klass->vtable._19_ParentHasChanged.method)(
      v5,
      v5->klass->vtable._20_OnStart.methodPtr);
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    v5 = this->fields.backSprite;
    if ( v5 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v5->klass->vtable._19_ParentHasChanged.method)(
        v5,
        v5->klass->vtable._20_OnStart.methodPtr);
      return;
    }
LABEL_16:
    sub_B2C434(v5, v4);
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
  __int64 v11; // x1
  UILabel_o *v12; // x0
  int32_t IntervalVal; // w0
  int v14; // w21
  System_String_o **v15; // x8
  System_String_o *v16; // x20
  UILabel_o *v17; // x19
  System_String_o *v18; // x20
  Il2CppObject *v19; // x0
  int v20; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4185AC4 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, interval);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_2378/*"BATTLE_BUFF_ICON_INTERVAL_TURN"*/, v7);
    sub_B2C35C(&StringLiteral_2377/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_4185AC4 = 1;
  }
  intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(intervalLabel, 0LL, 0LL) )
  {
    v12 = this->fields.intervalLabel;
    if ( !v12 )
      goto LABEL_19;
    UILabel__set_text(v12, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( interval )
    {
      IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0LL);
      if ( IntervalVal >= 1 )
      {
        v14 = IntervalVal;
        if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0LL) )
          v15 = (System_String_o **)&StringLiteral_2378/*"BATTLE_BUFF_ICON_INTERVAL_TURN"*/;
        else
          v15 = (System_String_o **)&StringLiteral_2377/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/;
        v16 = *v15;
        v17 = this->fields.intervalLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v18 = LocalizationManager__Get(v16, 0LL);
        v20 = v14;
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
        v12 = (UILabel_o *)System_String__Format(v18, v19, 0LL);
        if ( v17 )
        {
          UILabel__set_text(v17, (System_String_o *)v12, 0LL);
          return;
        }
LABEL_19:
        sub_B2C434(v12, v11);
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
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  struct BattleBuffData_ShowBuffData_o *oldBuff; // x8
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x9
  struct UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Transform_o *transform; // x21
  struct UnityEngine_GameObject_o *v11; // x0
  struct UnityEngine_GameObject_o **p_flashEffectObjInstance; // x19
  UnityEngine_Transform_o *v13; // x20
  int v14; // s0
  UnityEngine_Transform_o *v17; // x20
  int v18; // s0
  UnityEngine_Transform_o *v21; // x19
  int v22; // s0

  if ( (byte_4185AC5 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4185AC5 = 1;
  }
  flashEffectObj = (UnityEngine_Object_o *)this->fields.flashEffectObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(flashEffectObj, 0LL, 0LL);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    oldBuff = this->fields.oldBuff;
    if ( oldBuff )
    {
      nowBuff = this->fields.nowBuff;
      if ( nowBuff )
      {
        if ( !nowBuff->fields.isReady || oldBuff->fields.isReady )
          return;
        v9 = this->fields.flashEffectObj;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v11 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                   (UILabel_o *)v9,
                                                   transform,
                                                   (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
        this->fields.flashEffectObjInstance = v11;
        p_flashEffectObjInstance = &this->fields.flashEffectObjInstance;
        sub_B2C2F8(p_flashEffectObjInstance, v11);
        v5 = *p_flashEffectObjInstance;
        if ( *p_flashEffectObjInstance )
        {
          v13 = UnityEngine_GameObject__get_transform(v5, 0LL);
          *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL);
          if ( v13 )
          {
            UnityEngine_Transform__set_localPosition(v13, *(UnityEngine_Vector3_o *)&v14, 0LL);
            v5 = *p_flashEffectObjInstance;
            if ( *p_flashEffectObjInstance )
            {
              v17 = UnityEngine_GameObject__get_transform(v5, 0LL);
              *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_one(0LL);
              if ( v17 )
              {
                UnityEngine_Transform__set_localScale(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
                v5 = *p_flashEffectObjInstance;
                if ( *p_flashEffectObjInstance )
                {
                  v21 = UnityEngine_GameObject__get_transform(v5, 0LL);
                  *(UnityEngine_Quaternion_o *)&v22 = UnityEngine_Quaternion__get_identity(0LL);
                  if ( v21 )
                  {
                    UnityEngine_Transform__set_localRotation(v21, *(UnityEngine_Quaternion_o *)&v22, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      sub_B2C434(v5, v6);
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
    sub_B2C434(this, method);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UISprite_o *iconSprite; // x20
  int32_t v8; // w19

  if ( (byte_4185ABF & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&buffId);
    byte_4185ABF = 1;
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
    sub_B2C434(gameObject, v6);
  }
  this->fields.buffId = buffId;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  iconSprite = this->fields.iconSprite;
  v8 = this->fields.buffId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSBuffIcon(iconSprite, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantBuffIconComponent__setIcon_21208020(
        BattleServantBuffIconComponent_o *this,
        BattleBuffData_ShowBuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  UISprite_o *iconSprite; // x21
  int32_t buffId; // w22
  UIWidget_o *v11; // x21
  int v12; // s0
  UnityEngine_Object_o *flashEffectObjInstance; // x20
  UnityEngine_Object_o *v17; // x19
  UnityEngine_Object_o *backSprite; // x21
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1

  if ( (byte_4185AC0 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, buff);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4185AC0 = 1;
  }
  if ( buff )
  {
    nowBuff = this->fields.nowBuff;
    this->fields.oldBuff = nowBuff;
    sub_B2C2F8(&this->fields.oldBuff, nowBuff);
    this->fields.nowBuff = buff;
    sub_B2C2F8(&this->fields.nowBuff, buff);
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
    v11 = (UIWidget_o *)this->fields.iconSprite;
    if ( buff->fields.isReady )
    {
      *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
      if ( !v11 )
        goto LABEL_34;
    }
    else
    {
      *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_gray(0LL);
      if ( !v11 )
        goto LABEL_34;
    }
    UIWidget__set_color(v11, *(UnityEngine_Color_o *)&v12, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.iconSprite;
    if ( !gameObject )
      goto LABEL_34;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppClass *))&gameObject->klass[2]._1.this_arg.bits)(
      gameObject,
      gameObject->klass[2]._1.element_class);
    backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
      if ( !gameObject )
        goto LABEL_34;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, buff->fields.isPassive, 0LL);
      if ( buff->fields.isFrame )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
        if ( !gameObject )
          goto LABEL_34;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
      if ( !gameObject )
LABEL_34:
        sub_B2C434(gameObject, v8);
      (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppClass *))&gameObject->klass[2]._1.this_arg.bits)(
        gameObject,
        gameObject->klass[2]._1.element_class);
    }
    BattleServantBuffIconComponent__SetInterval(this, buff->fields._IntervalData_k__BackingField, v19);
    BattleServantBuffIconComponent__ShowHighLight(this, v20);
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    this->fields.oldBuff = 0LL;
    sub_B2C2F8(&this->fields.oldBuff, 0LL);
    this->fields.nowBuff = 0LL;
    sub_B2C2F8(&this->fields.nowBuff, 0LL);
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
      UnityEngine_Object__Destroy_35314896(v17, 0LL);
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
  __int64 v7; // x1
  UISprite_o *iconSprite; // x21
  UnityEngine_Object_o *backSprite; // x20

  if ( (byte_4185AC1 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&iconId);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4185AC1 = 1;
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
      gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
      if ( gameObject )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
        return;
      }
LABEL_16:
      sub_B2C434(gameObject, v7);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}