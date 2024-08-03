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

  if ( (byte_49FF38A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&addDepth);
    byte_49FF38A = 1;
  }
  iconSprite = (UIWidget_o *)this->fields.iconSprite;
  if ( !iconSprite )
    goto LABEL_10;
  UIWidget__set_depth(iconSprite, iconSprite->fields.mDepth + addDepth, 0LL);
  intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(intervalLabel, 0LL, 0LL) )
  {
    iconSprite = (UIWidget_o *)this->fields.intervalLabel;
    if ( iconSprite )
    {
      UIWidget__set_depth(iconSprite, iconSprite->fields.mDepth + addDepth, 0LL);
      return;
    }
LABEL_10:
    sub_1B64324(iconSprite);
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
  const MethodInfo *v4; // x2
  int buffId; // w1
  BattlePerformanceStatus_o *v6; // x0

  if ( (byte_49FF386 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF386 = 1;
  }
  targetPerf = (UnityEngine_Object_o *)this->fields.targetPerf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetPerf, 0LL, 0LL) )
  {
    buffId = this->fields.buffId;
    if ( buffId >= 1 )
    {
      v6 = this->fields.targetPerf;
      if ( !v6 )
        sub_1B64324(0LL);
      BattlePerformanceStatus__OpenBuffConf(v6, buffId, v4);
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

  if ( (byte_49FF387 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF387 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v4 = this->fields.iconSprite;
    if ( !v4 )
      goto LABEL_14;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v4->klass->vtable._19_ParentHasChanged.method)(
      v4,
      v4->klass->vtable._20_OnStart.methodPtr);
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
  {
    v4 = this->fields.backSprite;
    if ( v4 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v4->klass->vtable._19_ParentHasChanged.method)(
        v4,
        v4->klass->vtable._20_OnStart.methodPtr);
      return;
    }
LABEL_14:
    sub_1B64324(v4);
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
  int v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FF388 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, interval);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_2802/*"BATTLE_BUFF_ICON_INTERVAL_TURN"*/, v7);
    sub_1B640C8(&StringLiteral_2801/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/, v8);
    sub_1B640C8(&StringLiteral_1/*""*/, v9);
    byte_49FF388 = 1;
  }
  intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(intervalLabel, 0LL, 0LL) )
  {
    v11 = this->fields.intervalLabel;
    if ( !v11 )
      goto LABEL_17;
    UILabel__set_text(v11, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( interval )
    {
      IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0LL);
      if ( IntervalVal >= 1 )
      {
        v13 = IntervalVal;
        if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0LL) )
          v14 = (System_String_o **)&StringLiteral_2802/*"BATTLE_BUFF_ICON_INTERVAL_TURN"*/;
        else
          v14 = (System_String_o **)&StringLiteral_2801/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/;
        v15 = *v14;
        v16 = this->fields.intervalLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v17 = LocalizationManager__Get(v15, 0LL);
        v19 = v13;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
        v11 = (UILabel_o *)System_String__Format(v17, v18, 0LL);
        if ( v16 )
        {
          UILabel__set_text(v16, (System_String_o *)v11, 0LL);
          return;
        }
LABEL_17:
        sub_1B64324(v11);
      }
    }
  }
}


void __fastcall BattleServantBuffIconComponent__ShowHighLight(
        BattleServantBuffIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *flashEffectObj; // x20
  __int64 v5; // x0
  struct BattleBuffData_ShowBuffData_o *oldBuff; // x8
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x9
  Il2CppObject *v8; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v10; // x0
  struct UnityEngine_GameObject_o **p_flashEffectObjInstance; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  UnityEngine_Transform_o *v15; // x20
  __int64 v16; // x1
  UnityEngine_Transform_o *v17; // x20
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x19

  if ( (byte_49FF389 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FF389 = 1;
  }
  flashEffectObj = (UnityEngine_Object_o *)this->fields.flashEffectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality(flashEffectObj, 0LL, 0LL);
  if ( (v5 & 1) == 0 )
  {
    oldBuff = this->fields.oldBuff;
    if ( oldBuff )
    {
      nowBuff = this->fields.nowBuff;
      if ( nowBuff )
      {
        if ( !nowBuff->fields.isReady || oldBuff->fields.isReady )
          return;
        v8 = (Il2CppObject *)this->fields.flashEffectObj;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v10 = UnityEngine_Object__Instantiate_object__49003980(
                v8,
                transform,
                (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
        this->fields.flashEffectObjInstance = (struct UnityEngine_GameObject_o *)v10;
        p_flashEffectObjInstance = &this->fields.flashEffectObjInstance;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)p_flashEffectObjInstance, (int32_t)v10, v12, v13);
        v5 = (__int64)*p_flashEffectObjInstance;
        if ( *p_flashEffectObjInstance )
        {
          v5 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0LL);
          v15 = (UnityEngine_Transform_o *)v5;
          if ( !byte_49F7111 )
          {
            v5 = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v14);
            byte_49F7111 = 1;
          }
          if ( v15 )
          {
            UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
            v5 = (__int64)*p_flashEffectObjInstance;
            if ( *p_flashEffectObjInstance )
            {
              v5 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0LL);
              v17 = (UnityEngine_Transform_o *)v5;
              if ( !byte_49F7116 )
              {
                v5 = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v16);
                byte_49F7116 = 1;
              }
              if ( v17 )
              {
                UnityEngine_Transform__set_localScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
                v5 = (__int64)*p_flashEffectObjInstance;
                if ( *p_flashEffectObjInstance )
                {
                  v5 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0LL);
                  v19 = (UnityEngine_Transform_o *)v5;
                  if ( !byte_49F7117 )
                  {
                    v5 = sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v18);
                    byte_49F7117 = 1;
                  }
                  if ( v19 )
                  {
                    UnityEngine_Transform__set_localRotation(
                      v19,
                      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                      0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      sub_1B64324(v5);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantBuffIconComponent__UpdateActiveBuff(
        BattleServantBuffIconComponent_o *this,
        const MethodInfo *method)
{
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x8
  float v3; // s0
  float v4; // s3
  float v5; // s1
  float v6; // s2

  nowBuff = this->fields.nowBuff;
  if ( !nowBuff )
    goto LABEL_6;
  this = (BattleServantBuffIconComponent_o *)this->fields.iconSprite;
  v3 = 1.0;
  if ( !nowBuff->fields.isReady )
    v3 = 0.5;
  if ( !this )
LABEL_6:
    sub_1B64324(this);
  v4 = 1.0;
  v5 = v3;
  v6 = v3;
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantBuffIconComponent__setIcon(
        BattleServantBuffIconComponent_o *this,
        int32_t buffId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *iconSprite; // x20
  int32_t v7; // w19

  if ( (byte_49FF383 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&buffId);
    byte_49FF383 = 1;
  }
  if ( buffId == -1 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      return;
    }
LABEL_10:
    sub_1B64324(gameObject);
  }
  this->fields.buffId = buffId;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  iconSprite = this->fields.iconSprite;
  v7 = this->fields.buffId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSBuffIcon(iconSprite, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantBuffIconComponent__setIcon_43602588(
        BattleServantBuffIconComponent_o *this,
        BattleBuffData_ShowBuffData_o *buff,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *iconSprite; // x21
  int32_t buffId; // w22
  float v13; // s0
  float v14; // s3
  float v15; // s1
  float v16; // s2
  UnityEngine_Object_o *backSprite; // x21
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  UnityEngine_Object_o *flashEffectObjInstance; // x20
  UnityEngine_Object_o *v25; // x19

  if ( (byte_49FF384 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, buff);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49FF384 = 1;
  }
  if ( buff )
  {
    nowBuff = this->fields.nowBuff;
    this->fields.oldBuff = nowBuff;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.oldBuff, (int32_t)nowBuff, (int32_t)method, v3);
    this->fields.nowBuff = buff;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.nowBuff, (int32_t)buff, v8, v9);
    this->fields.buffId = buff->fields.buffId;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      iconSprite = this->fields.iconSprite;
      buffId = this->fields.buffId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetSBuffIcon(iconSprite, buffId, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.iconSprite;
      v13 = 1.0;
      if ( !buff->fields.isReady )
        v13 = 0.5;
      if ( gameObject )
      {
        v14 = 1.0;
        v15 = v13;
        v16 = v13;
        UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)&v13, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.iconSprite;
        if ( gameObject )
        {
          (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppClass *))&gameObject->klass[2]._1.this_arg.bits)(
            gameObject,
            gameObject->klass[2]._1.element_class);
          backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
            goto LABEL_20;
          gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
          if ( gameObject )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, buff->fields.isPassive, 0LL);
            if ( buff->fields.isFrame )
            {
              gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
              if ( !gameObject )
                goto LABEL_29;
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0LL);
            }
            gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
            if ( gameObject )
            {
              (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppClass *))&gameObject->klass[2]._1.this_arg.bits)(
                gameObject,
                gameObject->klass[2]._1.element_class);
LABEL_20:
              BattleServantBuffIconComponent__SetInterval(this, buff->fields._IntervalData_k__BackingField, v18);
              BattleServantBuffIconComponent__ShowHighLight(this, v19);
              return;
            }
          }
        }
      }
    }
LABEL_29:
    sub_1B64324(gameObject);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.oldBuff = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.oldBuff, 0, v20, v21);
  this->fields.nowBuff = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.nowBuff, 0, v22, v23);
  flashEffectObjInstance = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(flashEffectObjInstance, 0LL, 0LL) )
  {
    v25 = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v25, 0LL);
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

  if ( (byte_49FF385 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&iconId);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FF385 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  if ( iconId )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    iconSprite = this->fields.iconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetSBuffIconByIconId(iconSprite, iconId, 0LL);
    backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
      if ( gameObject )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
        return;
      }
LABEL_14:
      sub_1B64324(gameObject);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}