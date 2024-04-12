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

  if ( (byte_42ADDE3 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADDE3 = 1;
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
    sub_B52A5C(iconSprite, *(_QWORD *)&addDepth);
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

  if ( (byte_42ADDDF & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADDDF = 1;
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
        sub_B52A5C(0LL, buffId);
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

  if ( (byte_42ADDE0 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADDE0 = 1;
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
    sub_B52A5C(v5, v4);
  }
}


void __fastcall BattleServantBuffIconComponent__SetInterval(
        BattleServantBuffIconComponent_o *this,
        BattleBuffData_IntervalData_o *interval,
        const MethodInfo *method)
{
  UnityEngine_Object_o *intervalLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0
  int32_t IntervalVal; // w0
  int v9; // w21
  System_String_o **v10; // x8
  System_String_o *v11; // x20
  UILabel_o *v12; // x19
  System_String_o *v13; // x20
  Il2CppObject *v14; // x0
  int v15; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42ADDE1 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_2409/*"BATTLE_BUFF_ICON_INTERVAL_TURN"*/);
    sub_B52984(&StringLiteral_2408/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42ADDE1 = 1;
  }
  intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(intervalLabel, 0LL, 0LL) )
  {
    v7 = this->fields.intervalLabel;
    if ( !v7 )
      goto LABEL_19;
    UILabel__set_text(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( interval )
    {
      IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0LL);
      if ( IntervalVal >= 1 )
      {
        v9 = IntervalVal;
        if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0LL) )
          v10 = (System_String_o **)&StringLiteral_2409/*"BATTLE_BUFF_ICON_INTERVAL_TURN"*/;
        else
          v10 = (System_String_o **)&StringLiteral_2408/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/;
        v11 = *v10;
        v12 = this->fields.intervalLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v13 = LocalizationManager__Get(v11, 0LL);
        v15 = v9;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
        v7 = (UILabel_o *)System_String__Format(v13, v14, 0LL);
        if ( v12 )
        {
          UILabel__set_text(v12, (System_String_o *)v7, 0LL);
          return;
        }
LABEL_19:
        sub_B52A5C(v7, v6);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantBuffIconComponent__ShowHighLight(
        BattleServantBuffIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *flashEffectObj; // x20
  UnityEngine_GameObject_o *v4; // x0
  __int64 v5; // x1
  struct BattleBuffData_ShowBuffData_o *oldBuff; // x8
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x9
  struct UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *transform; // x21
  struct UnityEngine_GameObject_o **p_flashEffectObjInstance; // x19
  UnityEngine_Transform_o *v11; // x20
  int v12; // s0
  UnityEngine_Transform_o *v15; // x20
  int v16; // s0
  UnityEngine_Transform_o *v19; // x19
  int v20; // s0

  if ( (byte_42ADDE2 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADDE2 = 1;
  }
  flashEffectObj = (UnityEngine_Object_o *)this->fields.flashEffectObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(flashEffectObj, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) == 0 )
  {
    oldBuff = this->fields.oldBuff;
    if ( oldBuff )
    {
      nowBuff = this->fields.nowBuff;
      if ( nowBuff )
      {
        if ( !nowBuff->fields.isReady || oldBuff->fields.isReady )
          return;
        v8 = this->fields.flashEffectObj;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this->fields.flashEffectObjInstance = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                                                   (UILabel_o *)v8,
                                                                                   transform,
                                                                                   (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_GameObject____68654656);
        p_flashEffectObjInstance = &this->fields.flashEffectObjInstance;
        sub_B52920(p_flashEffectObjInstance);
        v4 = *p_flashEffectObjInstance;
        if ( *p_flashEffectObjInstance )
        {
          v11 = UnityEngine_GameObject__get_transform(v4, 0LL);
          *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL);
          if ( v11 )
          {
            UnityEngine_Transform__set_localPosition(v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
            v4 = *p_flashEffectObjInstance;
            if ( *p_flashEffectObjInstance )
            {
              v15 = UnityEngine_GameObject__get_transform(v4, 0LL);
              *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_one(0LL);
              if ( v15 )
              {
                UnityEngine_Transform__set_localScale(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
                v4 = *p_flashEffectObjInstance;
                if ( *p_flashEffectObjInstance )
                {
                  v19 = UnityEngine_GameObject__get_transform(v4, 0LL);
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
      sub_B52A5C(v4, v5);
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
    sub_B52A5C(this, method);
  }
  *(UnityEngine_Color_o *)&v4 = UnityEngine_Color__get_white(0LL);
  if ( !iconSprite )
    goto LABEL_6;
LABEL_4:
  UIWidget__set_color(iconSprite, *(UnityEngine_Color_o *)&v4, 0LL);
}


void __fastcall BattleServantBuffIconComponent__setIcon(
        BattleServantBuffIconComponent_o *this,
        int32_t buffId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UISprite_o *iconSprite; // x20
  int32_t v8; // w19

  if ( (byte_42ADDDC & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    byte_42ADDDC = 1;
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
    sub_B52A5C(gameObject, v6);
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
void __fastcall BattleServantBuffIconComponent__setIcon_21059808(
        BattleServantBuffIconComponent_o *this,
        BattleBuffData_ShowBuffData_o *buff,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UISprite_o *iconSprite; // x21
  int32_t buffId; // w22
  UIWidget_o *v9; // x21
  int v10; // s0
  UnityEngine_Object_o *flashEffectObjInstance; // x20
  UnityEngine_Object_o *v15; // x19
  UnityEngine_Object_o *backSprite; // x21
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1

  if ( (byte_42ADDDD & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADDDD = 1;
  }
  if ( buff )
  {
    this->fields.oldBuff = this->fields.nowBuff;
    sub_B52920(&this->fields.oldBuff);
    this->fields.nowBuff = buff;
    sub_B52920(&this->fields.nowBuff);
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
    v9 = (UIWidget_o *)this->fields.iconSprite;
    if ( buff->fields.isReady )
    {
      *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_white(0LL);
      if ( !v9 )
        goto LABEL_34;
    }
    else
    {
      *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_gray(0LL);
      if ( !v9 )
        goto LABEL_34;
    }
    UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v10, 0LL);
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
        sub_B52A5C(gameObject, v6);
      (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppClass *))&gameObject->klass[2]._1.this_arg.bits)(
        gameObject,
        gameObject->klass[2]._1.element_class);
    }
    BattleServantBuffIconComponent__SetInterval(this, buff->fields._IntervalData_k__BackingField, v17);
    BattleServantBuffIconComponent__ShowHighLight(this, v18);
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    this->fields.oldBuff = 0LL;
    sub_B52920(&this->fields.oldBuff);
    this->fields.nowBuff = 0LL;
    sub_B52920(&this->fields.nowBuff);
    flashEffectObjInstance = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(flashEffectObjInstance, 0LL, 0LL) )
    {
      v15 = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956(v15, 0LL);
    }
  }
}


void __fastcall BattleServantBuffIconComponent__setImageId(
        BattleServantBuffIconComponent_o *this,
        int32_t iconId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UISprite_o *iconSprite; // x21
  UnityEngine_Object_o *backSprite; // x20

  if ( (byte_42ADDDE & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ADDDE = 1;
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
      sub_B52A5C(gameObject, v6);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}