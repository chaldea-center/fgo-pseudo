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
  __int64 v3; // x3
  UIWidget_o *iconSprite; // x0
  UnityEngine_Object_o *intervalLabel; // x21

  if ( (byte_42E6669 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, addDepth, (_DWORD)method, v3);
    byte_42E6669 = 1;
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
    sub_B5D69C(iconSprite, *(_QWORD *)&addDepth);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *targetPerf; // x20
  __int64 buffId; // x1
  BattlePerformanceStatus_o *v7; // x0

  if ( (byte_42E6665 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6665 = 1;
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
      v7 = this->fields.targetPerf;
      if ( !v7 )
        sub_B5D69C(0LL, buffId);
      BattlePerformanceStatus__OpenBuffConf(v7, buffId, 0LL);
    }
  }
}


void __fastcall BattleServantBuffIconComponent__ParentHasChanged(
        BattleServantBuffIconComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v6; // x1
  struct UISprite_o *v7; // x0
  UnityEngine_Object_o *backSprite; // x20

  if ( (byte_42E6666 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6666 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v7 = this->fields.iconSprite;
    if ( !v7 )
      goto LABEL_16;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._19_ParentHasChanged.method)(
      v7,
      v7->klass->vtable._20_OnStart.methodPtr);
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    v7 = this->fields.backSprite;
    if ( v7 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v7->klass->vtable._19_ParentHasChanged.method)(
        v7,
        v7->klass->vtable._20_OnStart.methodPtr);
      return;
    }
LABEL_16:
    sub_B5D69C(v7, v6);
  }
}


void __fastcall BattleServantBuffIconComponent__SetInterval(
        BattleServantBuffIconComponent_o *this,
        BattleBuffData_IntervalData_o *interval,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_Object_o *intervalLabel; // x21
  __int64 v22; // x1
  UILabel_o *v23; // x0
  int32_t IntervalVal; // w0
  int v25; // w21
  System_String_o **v26; // x8
  System_String_o *v27; // x20
  UILabel_o *v28; // x19
  System_String_o *v29; // x20
  Il2CppObject *v30; // x0
  int v31; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E6667 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)interval, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_2417/*"BATTLE_BUFF_ICON_INTERVAL_TURN"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_2416/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    byte_42E6667 = 1;
  }
  intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(intervalLabel, 0LL, 0LL) )
  {
    v23 = this->fields.intervalLabel;
    if ( !v23 )
      goto LABEL_19;
    UILabel__set_text(v23, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( interval )
    {
      IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0LL);
      if ( IntervalVal >= 1 )
      {
        v25 = IntervalVal;
        if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0LL) )
          v26 = (System_String_o **)&StringLiteral_2417/*"BATTLE_BUFF_ICON_INTERVAL_TURN"*/;
        else
          v26 = (System_String_o **)&StringLiteral_2416/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/;
        v27 = *v26;
        v28 = this->fields.intervalLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v29 = LocalizationManager__Get(v27, 0LL);
        v31 = v25;
        v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
        v23 = (UILabel_o *)System_String__Format(v29, v30, 0LL);
        if ( v28 )
        {
          UILabel__set_text(v28, (System_String_o *)v23, 0LL);
          return;
        }
LABEL_19:
        sub_B5D69C(v23, v22);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantBuffIconComponent__ShowHighLight(
        BattleServantBuffIconComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *flashEffectObj; // x20
  UnityEngine_GameObject_o *v9; // x0
  __int64 v10; // x1
  struct BattleBuffData_ShowBuffData_o *oldBuff; // x8
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x9
  struct UnityEngine_GameObject_o *v13; // x20
  UnityEngine_Transform_o *transform; // x21
  struct UnityEngine_GameObject_o **p_flashEffectObjInstance; // x19
  UnityEngine_Transform_o *v16; // x20
  int v17; // s0
  UnityEngine_Transform_o *v20; // x20
  int v21; // s0
  UnityEngine_Transform_o *v24; // x19
  int v25; // s0

  if ( (byte_42E6668 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E6668 = 1;
  }
  flashEffectObj = (UnityEngine_Object_o *)this->fields.flashEffectObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(flashEffectObj, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) == 0 )
  {
    oldBuff = this->fields.oldBuff;
    if ( oldBuff )
    {
      nowBuff = this->fields.nowBuff;
      if ( nowBuff )
      {
        if ( !nowBuff->fields.isReady || oldBuff->fields.isReady )
          return;
        v13 = this->fields.flashEffectObj;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this->fields.flashEffectObjInstance = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                                                   (UILabel_o *)v13,
                                                                                   transform,
                                                                                   (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
        p_flashEffectObjInstance = &this->fields.flashEffectObjInstance;
        sub_B5D560(p_flashEffectObjInstance);
        v9 = *p_flashEffectObjInstance;
        if ( *p_flashEffectObjInstance )
        {
          v16 = UnityEngine_GameObject__get_transform(v9, 0LL);
          *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
          if ( v16 )
          {
            UnityEngine_Transform__set_localPosition(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
            v9 = *p_flashEffectObjInstance;
            if ( *p_flashEffectObjInstance )
            {
              v20 = UnityEngine_GameObject__get_transform(v9, 0LL);
              *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_one(0LL);
              if ( v20 )
              {
                UnityEngine_Transform__set_localScale(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
                v9 = *p_flashEffectObjInstance;
                if ( *p_flashEffectObjInstance )
                {
                  v24 = UnityEngine_GameObject__get_transform(v9, 0LL);
                  *(UnityEngine_Quaternion_o *)&v25 = UnityEngine_Quaternion__get_identity(0LL);
                  if ( v24 )
                  {
                    UnityEngine_Transform__set_localRotation(v24, *(UnityEngine_Quaternion_o *)&v25, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      sub_B5D69C(v9, v10);
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
    sub_B5D69C(this, method);
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
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UISprite_o *iconSprite; // x20
  int32_t v9; // w19

  if ( (byte_42E6662 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, buffId, (_DWORD)method, v3);
    byte_42E6662 = 1;
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
    sub_B5D69C(gameObject, v7);
  }
  this->fields.buffId = buffId;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  iconSprite = this->fields.iconSprite;
  v9 = this->fields.buffId;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSBuffIcon(iconSprite, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantBuffIconComponent__setIcon_21093468(
        BattleServantBuffIconComponent_o *this,
        BattleBuffData_ShowBuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UISprite_o *iconSprite; // x21
  int32_t buffId; // w22
  UIWidget_o *v13; // x21
  int v14; // s0
  UnityEngine_Object_o *flashEffectObjInstance; // x20
  UnityEngine_Object_o *v19; // x19
  UnityEngine_Object_o *backSprite; // x21
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x1

  if ( (byte_42E6663 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)buff, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E6663 = 1;
  }
  if ( buff )
  {
    this->fields.oldBuff = this->fields.nowBuff;
    sub_B5D560(&this->fields.oldBuff);
    this->fields.nowBuff = buff;
    sub_B5D560(&this->fields.nowBuff);
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
    v13 = (UIWidget_o *)this->fields.iconSprite;
    if ( buff->fields.isReady )
    {
      *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
      if ( !v13 )
        goto LABEL_34;
    }
    else
    {
      *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_gray(0LL);
      if ( !v13 )
        goto LABEL_34;
    }
    UIWidget__set_color(v13, *(UnityEngine_Color_o *)&v14, 0LL);
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
        sub_B5D69C(gameObject, v10);
      (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppClass *))&gameObject->klass[2]._1.this_arg.bits)(
        gameObject,
        gameObject->klass[2]._1.element_class);
    }
    BattleServantBuffIconComponent__SetInterval(this, buff->fields._IntervalData_k__BackingField, v21);
    BattleServantBuffIconComponent__ShowHighLight(this, v22);
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    this->fields.oldBuff = 0LL;
    sub_B5D560(&this->fields.oldBuff);
    this->fields.nowBuff = 0LL;
    sub_B5D560(&this->fields.nowBuff);
    flashEffectObjInstance = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(flashEffectObjInstance, 0LL, 0LL) )
    {
      v19 = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v19, 0LL);
    }
  }
}


void __fastcall BattleServantBuffIconComponent__setImageId(
        BattleServantBuffIconComponent_o *this,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UISprite_o *iconSprite; // x21
  UnityEngine_Object_o *backSprite; // x20

  if ( (byte_42E6664 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, iconId, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E6664 = 1;
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
      sub_B5D69C(gameObject, v10);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}