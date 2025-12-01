void BattleServantBuffIconComponent___ctor(BattleServantBuffIconComponent_o *this, const MethodInfo *method)
{
  this->fields.buffId = -1;
  this->fields.isReady = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantBuffIconComponent__AddDepth(
        BattleServantBuffIconComponent_o *this,
        int32_t addDepth,
        const MethodInfo *method)
{
  UIWidget_o *iconSprite; // x0
  UnityEngine_Object_o *intervalLabel; // x21

  if ( (byte_4CCAB14 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAB14 = 1;
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
    sub_1C71608(iconSprite, *(_QWORD *)&addDepth);
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
  __int64 buffId; // x1
  BattlePerformanceStatus_o *v5; // x0

  if ( (byte_4CCAB10 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAB10 = 1;
  }
  targetPerf = (UnityEngine_Object_o *)this->fields.targetPerf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetPerf, 0, 0) )
  {
    buffId = (unsigned int)this->fields.buffId;
    if ( (int)buffId >= 1 )
    {
      v5 = this->fields.targetPerf;
      if ( !v5 )
        sub_1C71608(0, buffId);
      BattlePerformanceStatus__OpenBuffConf(v5, buffId, 0);
    }
  }
}


void BattleServantBuffIconComponent__ParentHasChanged(BattleServantBuffIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v4; // x1
  struct UISprite_o *v5; // x0
  UnityEngine_Object_o *backSprite; // x20

  if ( (byte_4CCAB11 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAB11 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v5 = this->fields.iconSprite;
    if ( !v5 )
      goto LABEL_14;
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v5->klass->vtable._19_ParentHasChanged.methodPtr)(
      v5,
      v5->klass->vtable._19_ParentHasChanged.method);
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(backSprite, 0, 0) )
  {
    v5 = this->fields.backSprite;
    if ( v5 )
    {
      ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v5->klass->vtable._19_ParentHasChanged.methodPtr)(
        v5,
        v5->klass->vtable._19_ParentHasChanged.method);
      return;
    }
LABEL_14:
    sub_1C71608(v5, v4);
  }
}


void BattleServantBuffIconComponent__SetInterval(
        BattleServantBuffIconComponent_o *this,
        BattleBuffData_IntervalData_o *interval,
        const MethodInfo *method)
{
  UnityEngine_Object_o *intervalLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0
  int32_t IntervalVal; // w0
  int32_t v9; // w21
  System_String_o **v10; // x8
  System_String_o *v11; // x20
  UILabel_o *v12; // x19
  System_String_o *v13; // x20
  Il2CppObject *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CCAB12 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_2696/*"BATTLE_BUFF_ICON_INTERVAL_TURN"*/);
    sub_1C713B0(&StringLiteral_2695/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCAB12 = 1;
  }
  intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(intervalLabel, 0, 0) )
  {
    v7 = this->fields.intervalLabel;
    if ( !v7 )
      goto LABEL_17;
    UILabel__set_text(v7, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( interval )
    {
      IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0);
      if ( IntervalVal >= 1 )
      {
        v9 = IntervalVal;
        if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0) )
          v10 = (System_String_o **)&StringLiteral_2696/*"BATTLE_BUFF_ICON_INTERVAL_TURN"*/;
        else
          v10 = (System_String_o **)&StringLiteral_2695/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/;
        v11 = *v10;
        v12 = this->fields.intervalLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v13 = LocalizationManager__Get(v11, 0);
        v15 = v9;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
        v7 = (UILabel_o *)System_String__Format(v13, v14, 0);
        if ( v12 )
        {
          UILabel__set_text(v12, (System_String_o *)v7, 0);
          return;
        }
LABEL_17:
        sub_1C71608(v7, v6);
      }
    }
  }
}


void BattleServantBuffIconComponent__ShowHighLight(BattleServantBuffIconComponent_o *this, const MethodInfo *method)
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
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  UnityEngine_Transform_o *v18; // x20
  UnityEngine_Transform_o *v19; // x20
  UnityEngine_Transform_o *v20; // x19

  if ( (byte_4CCAB13 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject____78725064);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAB13 = 1;
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
        v8 = (Il2CppObject *)this->fields.flashEffectObj;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v10 = UnityEngine_Object__Instantiate_object__52264420(
                v8,
                transform,
                (const MethodInfo_31D7DE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78725064);
        this->fields.flashEffectObjInstance = (struct UnityEngine_GameObject_o *)v10;
        p_flashEffectObjInstance = &this->fields.flashEffectObjInstance;
        sub_1C71354((GrandQuestFolderBoardItem_o *)p_flashEffectObjInstance, (int32_t)v10, v12, v13, v14, v15, v16, v17);
        v4 = (__int64)*p_flashEffectObjInstance;
        if ( *p_flashEffectObjInstance )
        {
          v4 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v4, 0);
          v18 = (UnityEngine_Transform_o *)v4;
          if ( !byte_4CC0D09 )
          {
            v4 = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
            byte_4CC0D09 = 1;
          }
          if ( v18 )
          {
            UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
            v4 = (__int64)*p_flashEffectObjInstance;
            if ( *p_flashEffectObjInstance )
            {
              v4 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v4, 0);
              v19 = (UnityEngine_Transform_o *)v4;
              if ( !byte_4CC0D0E )
              {
                v4 = sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
                byte_4CC0D0E = 1;
              }
              if ( v19 )
              {
                UnityEngine_Transform__set_localScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
                v4 = (__int64)*p_flashEffectObjInstance;
                if ( *p_flashEffectObjInstance )
                {
                  v4 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v4, 0);
                  v20 = (UnityEngine_Transform_o *)v4;
                  if ( !byte_4CC0D0F )
                  {
                    v4 = sub_1C713B0(&UnityEngine_Quaternion_TypeInfo);
                    byte_4CC0D0F = 1;
                  }
                  if ( v20 )
                  {
                    UnityEngine_Transform__set_localRotation(
                      v20,
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
      sub_1C71608(v4, v5);
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
  struct BattleBuffData_ShowBuffData_o *v10; // x8

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
        (v10 = v4->fields.nowBuff) == 0) )
  {
LABEL_9:
    sub_1C71608(this, isPlayFlashEffect);
  }
  if ( isPlayFlashEffect && v10->fields.isReady )
    BattleServantBuffIconComponent__ShowHighLight(v4, (const MethodInfo *)isPlayFlashEffect);
}


void BattleServantBuffIconComponent__UpdateShowBuffDataReady(
        BattleServantBuffIconComponent_o *this,
        BattleBuffData_ShowBuffData_o *showBuffData,
        const MethodInfo *method)
{
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x8
  struct BattleBuffData_ShowBuffData_o *oldBuff; // x9

  if ( !showBuffData || (nowBuff = this->fields.nowBuff) == 0 )
    sub_1C71608(this, showBuffData);
  if ( showBuffData->fields.addOrder == nowBuff->fields.addOrder )
  {
    oldBuff = this->fields.oldBuff;
    if ( oldBuff )
      oldBuff->fields.isReady = nowBuff->fields.isReady;
    nowBuff->fields.isReady = showBuffData->fields.isReady;
  }
}


void BattleServantBuffIconComponent__setIcon(
        BattleServantBuffIconComponent_o *this,
        int32_t buffId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UISprite_o *iconSprite; // x20
  int32_t v8; // w19

  if ( (byte_4CCAB0D & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    byte_4CCAB0D = 1;
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
    sub_1C71608(gameObject, v6);
  }
  this->fields.buffId = buffId;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  iconSprite = this->fields.iconSprite;
  v8 = this->fields.buffId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSBuffIcon(iconSprite, v8, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantBuffIconComponent__setIcon_47822156(
        BattleServantBuffIconComponent_o *this,
        BattleBuffData_ShowBuffData_o *buff,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  UISprite_o *iconSprite; // x21
  int32_t buffId; // w22
  float v21; // s0 OVERLAPPED
  float v22; // s3
  float v23; // s1
  float v24; // s2
  UnityEngine_Object_o *backSprite; // x21
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  UnityEngine_Object_o *flashEffectObjInstance; // x20
  UnityEngine_Object_o *v41; // x19

  if ( (byte_4CCAB0E & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAB0E = 1;
  }
  if ( buff )
  {
    nowBuff = this->fields.nowBuff;
    this->fields.oldBuff = nowBuff;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.oldBuff,
      (int32_t)nowBuff,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.nowBuff = buff;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.nowBuff, (int32_t)buff, v11, v12, v13, v14, v15, v16);
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
      v21 = 1.0;
      if ( !buff->fields.isReady )
        v21 = 0.5;
      if ( gameObject )
      {
        v22 = 1.0;
        v23 = v21;
        v24 = v21;
        UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)&v21, 0);
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
              BattleServantBuffIconComponent__SetInterval(this, buff->fields._IntervalData_k__BackingField, v26);
              BattleServantBuffIconComponent__ShowHighLight(this, v27);
              return;
            }
          }
        }
      }
    }
LABEL_29:
    sub_1C71608(gameObject, v18);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.oldBuff = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.oldBuff, 0, v28, v29, v30, v31, v32, v33);
  this->fields.nowBuff = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.nowBuff, 0, v34, v35, v36, v37, v38, v39);
  flashEffectObjInstance = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(flashEffectObjInstance, 0, 0) )
  {
    v41 = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(v41, 0);
  }
}


void BattleServantBuffIconComponent__setImageId(
        BattleServantBuffIconComponent_o *this,
        int32_t iconId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UISprite_o *iconSprite; // x21
  UnityEngine_Object_o *backSprite; // x20

  if ( (byte_4CCAB0F & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAB0F = 1;
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
      sub_1C71608(gameObject, v6);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
}