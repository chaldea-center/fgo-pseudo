void BattleServantBuffIconComponent___ctor(BattleServantBuffIconComponent_o *this, const MethodInfo *method)
{
  this->fields.buffId = -1;
  this->fields.isReady = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleServantBuffIconComponent__AddDepth(
        BattleServantBuffIconComponent_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  UIWidget_o *iconSprite; // x0
  UnityEngine_Object_o *intervalLabel; // x21

  if ( (byte_4C465FE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C465FE = 1;
  }
  iconSprite = (UIWidget_o *)this->fields.iconSprite;
  if ( !iconSprite )
    goto LABEL_10;
  UIWidget__set_depth(iconSprite, iconSprite->fields.mDepth + addDepth, 0);
  intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(intervalLabel, 0, 0) )
  {
    iconSprite = (UIWidget_o *)this->fields.intervalLabel;
    if ( iconSprite )
    {
      UIWidget__set_depth(iconSprite, iconSprite->fields.mDepth + addDepth, 0);
      return;
    }
LABEL_10:
    sub_1C372B4(iconSprite);
  }
}


BattleBuffData_ShowBuffData_o *BattleServantBuffIconComponent__GetNowBuff(
        BattleServantBuffIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.nowBuff;
}


void BattleServantBuffIconComponent__OnClick(BattleServantBuffIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetPerf; // x20
  int buffId; // w1
  BattlePerformanceStatus_o *v5; // x0

  if ( (byte_4C465FA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C465FA = 1;
  }
  targetPerf = (UnityEngine_Object_o *)this->fields.targetPerf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetPerf, 0, 0) )
  {
    buffId = this->fields.buffId;
    if ( buffId >= 1 )
    {
      v5 = this->fields.targetPerf;
      if ( !v5 )
        sub_1C372B4(0);
      BattlePerformanceStatus__OpenBuffConf(v5, buffId, 0);
    }
  }
}


void BattleServantBuffIconComponent__ParentHasChanged(BattleServantBuffIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  struct UISprite_o *v4; // x0
  UnityEngine_Object_o *backSprite; // x20

  if ( (byte_4C465FB & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C465FB = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v4 = this->fields.iconSprite;
    if ( !v4 )
      goto LABEL_14;
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v4->klass->vtable._19_ParentHasChanged.methodPtr)(
      v4,
      v4->klass->vtable._19_ParentHasChanged.method);
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backSprite, 0, 0) )
  {
    v4 = this->fields.backSprite;
    if ( v4 )
    {
      ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v4->klass->vtable._19_ParentHasChanged.methodPtr)(
        v4,
        v4->klass->vtable._19_ParentHasChanged.method);
      return;
    }
LABEL_14:
    sub_1C372B4(v4);
  }
}


void BattleServantBuffIconComponent__SetInterval(
        BattleServantBuffIconComponent_o *this,
        BattleBuffData_IntervalData_o *interval,
        const MethodInfo *method)
{
  UnityEngine_Object_o *intervalLabel; // x21
  UILabel_o *v6; // x0
  int32_t IntervalVal; // w0
  int32_t v8; // w21
  System_String_o **v9; // x8
  System_String_o *v10; // x20
  UILabel_o *v11; // x19
  System_String_o *v12; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  Il2CppObject *v19; // x0
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C465FC & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_2702/*"BATTLE_BUFF_ICON_INTERVAL_TURN"*/);
    sub_1C37058(&StringLiteral_2701/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C465FC = 1;
  }
  intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(intervalLabel, 0, 0) )
  {
    v6 = this->fields.intervalLabel;
    if ( !v6 )
      goto LABEL_17;
    UILabel__set_text(v6, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( interval )
    {
      IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0);
      if ( IntervalVal >= 1 )
      {
        v8 = IntervalVal;
        if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0) )
          v9 = (System_String_o **)&StringLiteral_2702/*"BATTLE_BUFF_ICON_INTERVAL_TURN"*/;
        else
          v9 = (System_String_o **)&StringLiteral_2701/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/;
        v10 = *v9;
        v11 = this->fields.intervalLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v12 = LocalizationManager__Get(v10, 0);
        v20 = v8;
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v13, v14, v15, v16, v17, v18);
        v6 = (UILabel_o *)System_String__Format(v12, v19, 0);
        if ( v11 )
        {
          UILabel__set_text(v11, (System_String_o *)v6, 0);
          return;
        }
LABEL_17:
        sub_1C372B4(v6);
      }
    }
  }
}


void BattleServantBuffIconComponent__ShowHighLight(BattleServantBuffIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *flashEffectObj; // x20
  __int64 v4; // x0
  struct BattleBuffData_ShowBuffData_o *oldBuff; // x8
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x9
  Il2CppObject *v7; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v9; // x0
  struct UnityEngine_GameObject_o **p_flashEffectObjInstance; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Transform_o *v13; // x20
  UnityEngine_Transform_o *v14; // x20
  UnityEngine_Transform_o *v15; // x19

  if ( (byte_4C465FD & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C465FD = 1;
  }
  flashEffectObj = (UnityEngine_Object_o *)this->fields.flashEffectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(flashEffectObj, 0, 0);
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
        v7 = (Il2CppObject *)this->fields.flashEffectObj;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v9 = UnityEngine_Object__Instantiate_object__51855596(
               v7,
               transform,
               (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
        this->fields.flashEffectObjInstance = (struct UnityEngine_GameObject_o *)v9;
        p_flashEffectObjInstance = &this->fields.flashEffectObjInstance;
        sub_1C36FFC((CGThumbnailListItem_o *)p_flashEffectObjInstance, (int32_t)v9, v11, v12);
        v4 = (__int64)*p_flashEffectObjInstance;
        if ( *p_flashEffectObjInstance )
        {
          v4 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v4, 0);
          v13 = (UnityEngine_Transform_o *)v4;
          if ( !byte_4C3C921 )
          {
            v4 = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
            byte_4C3C921 = 1;
          }
          if ( v13 )
          {
            UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
            v4 = (__int64)*p_flashEffectObjInstance;
            if ( *p_flashEffectObjInstance )
            {
              v4 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v4, 0);
              v14 = (UnityEngine_Transform_o *)v4;
              if ( !byte_4C3C926 )
              {
                v4 = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
                byte_4C3C926 = 1;
              }
              if ( v14 )
              {
                UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
                v4 = (__int64)*p_flashEffectObjInstance;
                if ( *p_flashEffectObjInstance )
                {
                  v4 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v4, 0);
                  v15 = (UnityEngine_Transform_o *)v4;
                  if ( !byte_4C3C927 )
                  {
                    v4 = sub_1C37058(&UnityEngine_Quaternion_TypeInfo);
                    byte_4C3C927 = 1;
                  }
                  if ( v15 )
                  {
                    UnityEngine_Transform__set_localRotation(
                      v15,
                      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                      0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      sub_1C372B4(v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantBuffIconComponent__UpdateActiveBuff(
        BattleServantBuffIconComponent_o *this,
        bool isPlayFlashEffect,
        const MethodInfo *method)
{
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x8
  BattleServantBuffIconComponent_o *v4; // x19
  float v5; // s0 OVERLAPPED
  float v7; // s3
  float v8; // s1
  float v9; // s2
  const MethodInfo *v10; // x1
  struct BattleBuffData_ShowBuffData_o *v11; // x8

  nowBuff = this->fields.nowBuff;
  if ( !nowBuff )
    goto LABEL_9;
  v4 = this;
  this = (BattleServantBuffIconComponent_o *)this->fields.iconSprite;
  v5 = 1.0;
  if ( !nowBuff->fields.isReady )
    v5 = 0.5;
  if ( !this
    || (v7 = 1.0,
        v8 = v5,
        v9 = v5,
        UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v5, 0),
        (v11 = v4->fields.nowBuff) == 0) )
  {
LABEL_9:
    sub_1C372B4(this);
  }
  if ( isPlayFlashEffect && v11->fields.isReady )
    BattleServantBuffIconComponent__ShowHighLight(v4, v10);
}


void BattleServantBuffIconComponent__UpdateShowBuffDataReady(
        BattleServantBuffIconComponent_o *this,
        BattleBuffData_ShowBuffData_o *showBuffData,
        const MethodInfo *method)
{
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x8
  struct BattleBuffData_ShowBuffData_o *oldBuff; // x9

  if ( !showBuffData )
    goto LABEL_7;
  nowBuff = this->fields.nowBuff;
  if ( !nowBuff )
    goto LABEL_7;
  if ( showBuffData->fields.addOrder != nowBuff->fields.addOrder )
    return;
  oldBuff = this->fields.oldBuff;
  if ( !oldBuff )
LABEL_7:
    sub_1C372B4(this);
  oldBuff->fields.isReady = nowBuff->fields.isReady;
  nowBuff->fields.isReady = showBuffData->fields.isReady;
}


void BattleServantBuffIconComponent__setIcon(
        BattleServantBuffIconComponent_o *this,
        int32_t buffId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *iconSprite; // x20
  int32_t v7; // w19

  if ( (byte_4C465F7 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    byte_4C465F7 = 1;
  }
  if ( buffId == -1 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      return;
    }
LABEL_10:
    sub_1C372B4(gameObject);
  }
  this->fields.buffId = buffId;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  iconSprite = this->fields.iconSprite;
  v7 = this->fields.buffId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSBuffIcon(iconSprite, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantBuffIconComponent__setIcon_47458360(
        BattleServantBuffIconComponent_o *this,
        BattleBuffData_ShowBuffData_o *buff,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *iconSprite; // x21
  int32_t buffId; // w22
  float v12; // s0 OVERLAPPED
  float v13; // s3
  float v14; // s1
  float v15; // s2
  UnityEngine_Object_o *backSprite; // x21
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UnityEngine_Object_o *flashEffectObjInstance; // x20
  UnityEngine_Object_o *v24; // x19

  if ( (byte_4C465F8 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C465F8 = 1;
  }
  if ( buff )
  {
    nowBuff = this->fields.nowBuff;
    this->fields.oldBuff = nowBuff;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.oldBuff, (int32_t)nowBuff, (int32_t)method, v3);
    this->fields.nowBuff = buff;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.nowBuff, (int32_t)buff, v7, v8);
    this->fields.buffId = buff->fields.buffId;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      iconSprite = this->fields.iconSprite;
      buffId = this->fields.buffId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetSBuffIcon(iconSprite, buffId, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.iconSprite;
      v12 = 1.0;
      if ( !buff->fields.isReady )
        v12 = 0.5;
      if ( gameObject )
      {
        v13 = 1.0;
        v14 = v12;
        v15 = v12;
        UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)&v12, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.iconSprite;
        if ( gameObject )
        {
          (*(void (__fastcall **)(UnityEngine_GameObject_o *, void *))&gameObject->klass[2]._1.byval_arg.bits)(
            gameObject,
            gameObject->klass[2]._1.this_arg.data);
          backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(backSprite, 0, 0) )
            goto LABEL_20;
          gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
          if ( gameObject )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, buff->fields.isPassive, 0);
            if ( buff->fields.isFrame )
            {
              gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
              if ( !gameObject )
                goto LABEL_29;
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0);
            }
            gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
            if ( gameObject )
            {
              (*(void (__fastcall **)(UnityEngine_GameObject_o *, void *))&gameObject->klass[2]._1.byval_arg.bits)(
                gameObject,
                gameObject->klass[2]._1.this_arg.data);
LABEL_20:
              BattleServantBuffIconComponent__SetInterval(this, buff->fields._IntervalData_k__BackingField, v17);
              BattleServantBuffIconComponent__ShowHighLight(this, v18);
              return;
            }
          }
        }
      }
    }
LABEL_29:
    sub_1C372B4(gameObject);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.oldBuff = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.oldBuff, 0, v19, v20);
  this->fields.nowBuff = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.nowBuff, 0, v21, v22);
  flashEffectObjInstance = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(flashEffectObjInstance, 0, 0) )
  {
    v24 = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v24, 0);
  }
}


void BattleServantBuffIconComponent__setImageId(
        BattleServantBuffIconComponent_o *this,
        int32_t iconId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *iconSprite; // x21
  UnityEngine_Object_o *backSprite; // x20

  if ( (byte_4C465F9 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C465F9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_14;
  if ( iconId )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    iconSprite = this->fields.iconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetSBuffIconByIconId(iconSprite, iconId, 0);
    backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(backSprite, 0, 0) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
      if ( gameObject )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
        return;
      }
LABEL_14:
      sub_1C372B4(gameObject);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
}