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

  if ( (byte_4A5E151 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E151 = 1;
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
    sub_1B8880C(iconSprite, *(_QWORD *)&addDepth);
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
  __int64 buffId; // x1
  BattlePerformanceStatus_o *v6; // x0

  if ( (byte_4A5E14D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E14D = 1;
  }
  targetPerf = (UnityEngine_Object_o *)this->fields.targetPerf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetPerf, 0LL, 0LL) )
  {
    buffId = (unsigned int)this->fields.buffId;
    if ( (int)buffId >= 1 )
    {
      v6 = this->fields.targetPerf;
      if ( !v6 )
        sub_1B8880C(0LL, buffId);
      BattlePerformanceStatus__OpenBuffConf(v6, buffId, v4);
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

  if ( (byte_4A5E14E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E14E = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v5 = this->fields.iconSprite;
    if ( !v5 )
      goto LABEL_14;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v5->klass->vtable._19_ParentHasChanged.method)(
      v5,
      v5->klass->vtable._20_OnStart.methodPtr);
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_14:
    sub_1B8880C(v5, v4);
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  int v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5E14F & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_2819/*"BATTLE_BUFF_ICON_INTERVAL_TURN"*/);
    sub_1B885B0(&StringLiteral_2818/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E14F = 1;
  }
  intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(intervalLabel, 0LL, 0LL) )
  {
    v7 = this->fields.intervalLabel;
    if ( !v7 )
      goto LABEL_17;
    UILabel__set_text(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( interval )
    {
      IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0LL);
      if ( IntervalVal >= 1 )
      {
        v9 = IntervalVal;
        if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0LL) )
          v10 = (System_String_o **)&StringLiteral_2819/*"BATTLE_BUFF_ICON_INTERVAL_TURN"*/;
        else
          v10 = (System_String_o **)&StringLiteral_2818/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/;
        v11 = *v10;
        v12 = this->fields.intervalLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = LocalizationManager__Get(v11, 0LL);
        v18 = v9;
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v14, v15, v16);
        v7 = (UILabel_o *)System_String__Format(v13, v17, 0LL);
        if ( v12 )
        {
          UILabel__set_text(v12, (System_String_o *)v7, 0LL);
          return;
        }
LABEL_17:
        sub_1B8880C(v7, v6);
      }
    }
  }
}


void __fastcall BattleServantBuffIconComponent__ShowHighLight(
        BattleServantBuffIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *flashEffectObj; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct BattleBuffData_ShowBuffData_o *oldBuff; // x8
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x9
  Il2CppObject *v8; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v10; // x0
  struct UnityEngine_GameObject_o **p_flashEffectObjInstance; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Transform_o *v14; // x20
  UnityEngine_Transform_o *v15; // x20
  UnityEngine_Transform_o *v16; // x19

  if ( (byte_4A5E150 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E150 = 1;
  }
  flashEffectObj = (UnityEngine_Object_o *)this->fields.flashEffectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(flashEffectObj, 0LL, 0LL);
  if ( (v4 & 1) == 0 )
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
        v10 = UnityEngine_Object__Instantiate_object__49297800(
                v8,
                transform,
                (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
        this->fields.flashEffectObjInstance = (struct UnityEngine_GameObject_o *)v10;
        p_flashEffectObjInstance = &this->fields.flashEffectObjInstance;
        sub_1B88554((ServantStatusBattleListViewItem_o *)p_flashEffectObjInstance, (int32_t)v10, v12, v13);
        v4 = (__int64)*p_flashEffectObjInstance;
        if ( *p_flashEffectObjInstance )
        {
          v4 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v4, 0LL);
          v14 = (UnityEngine_Transform_o *)v4;
          if ( !byte_4A55CE1 )
          {
            v4 = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE1 = 1;
          }
          if ( v14 )
          {
            UnityEngine_Transform__set_localPosition(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
            v4 = (__int64)*p_flashEffectObjInstance;
            if ( *p_flashEffectObjInstance )
            {
              v4 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v4, 0LL);
              v15 = (UnityEngine_Transform_o *)v4;
              if ( !byte_4A55CE6 )
              {
                v4 = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                byte_4A55CE6 = 1;
              }
              if ( v15 )
              {
                UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
                v4 = (__int64)*p_flashEffectObjInstance;
                if ( *p_flashEffectObjInstance )
                {
                  v4 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v4, 0LL);
                  v16 = (UnityEngine_Transform_o *)v4;
                  if ( !byte_4A55CE7 )
                  {
                    v4 = sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
                    byte_4A55CE7 = 1;
                  }
                  if ( v16 )
                  {
                    UnityEngine_Transform__set_localRotation(
                      v16,
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
      sub_1B8880C(v4, v5);
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
    sub_1B8880C(this, method);
  v4 = 1.0;
  v5 = v3;
  v6 = v3;
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v3, 0LL);
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

  if ( (byte_4A5E14A & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    byte_4A5E14A = 1;
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
    sub_1B8880C(gameObject, v6);
  }
  this->fields.buffId = buffId;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  iconSprite = this->fields.iconSprite;
  v8 = this->fields.buffId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSBuffIcon(iconSprite, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantBuffIconComponent__setIcon_43967732(
        BattleServantBuffIconComponent_o *this,
        BattleBuffData_ShowBuffData_o *buff,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
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

  if ( (byte_4A5E14B & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E14B = 1;
  }
  if ( buff )
  {
    nowBuff = this->fields.nowBuff;
    this->fields.oldBuff = nowBuff;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.oldBuff, (int32_t)nowBuff, (int32_t)method, v3);
    this->fields.nowBuff = buff;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.nowBuff, (int32_t)buff, v7, v8);
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
    sub_1B8880C(gameObject, v10);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.oldBuff = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.oldBuff, 0, v20, v21);
  this->fields.nowBuff = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.nowBuff, 0, v22, v23);
  flashEffectObjInstance = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(flashEffectObjInstance, 0LL, 0LL) )
  {
    v25 = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v25, 0LL);
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

  if ( (byte_4A5E14C & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E14C = 1;
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
      sub_1B8880C(gameObject, v6);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}