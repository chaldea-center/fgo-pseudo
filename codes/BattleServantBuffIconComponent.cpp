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
  __int64 v6; // x1
  UnityEngine_Object_o *backSprite; // x21
  UnityEngine_Object_o *sideBgSprite; // x21
  UnityEngine_Object_o *intervalLabel; // x21

  if ( (byte_593BF61 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BF61 = 1;
  }
  iconSprite = (UIWidget_o *)this->fields.iconSprite;
  if ( !iconSprite )
    goto LABEL_20;
  UIWidget__set_depth(iconSprite, iconSprite->fields.mDepth + addDepth, 0);
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(backSprite, 0, 0) )
  {
    iconSprite = (UIWidget_o *)this->fields.backSprite;
    if ( !iconSprite )
      goto LABEL_20;
    UIWidget__set_depth(iconSprite, iconSprite->fields.mDepth + addDepth, 0);
  }
  sideBgSprite = (UnityEngine_Object_o *)this->fields.sideBgSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&addDepth);
  if ( UnityEngine_Object__op_Inequality(sideBgSprite, 0, 0) )
  {
    iconSprite = (UIWidget_o *)this->fields.sideBgSprite;
    if ( !iconSprite )
      goto LABEL_20;
    UIWidget__set_depth(iconSprite, iconSprite->fields.mDepth + addDepth, 0);
  }
  intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&addDepth);
  if ( UnityEngine_Object__op_Inequality(intervalLabel, 0, 0) )
  {
    iconSprite = (UIWidget_o *)this->fields.intervalLabel;
    if ( iconSprite )
    {
      UIWidget__set_depth(iconSprite, iconSprite->fields.mDepth + addDepth, 0);
      return;
    }
LABEL_20:
    sub_21FFECC(iconSprite, *(_QWORD *)&addDepth);
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
  const MethodInfo *v4; // x2
  __int64 buffId; // x1
  BattlePerformanceStatus_o *v6; // x0

  if ( (byte_593BF5D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BF5D = 1;
  }
  targetPerf = (UnityEngine_Object_o *)this->fields.targetPerf;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(targetPerf, 0, 0) )
  {
    buffId = (unsigned int)this->fields.buffId;
    if ( (int)buffId >= 1 )
    {
      v6 = this->fields.targetPerf;
      if ( !v6 )
        sub_21FFECC(0, buffId);
      BattlePerformanceStatus__OpenBuffConf(v6, buffId, v4);
    }
  }
}


void BattleServantBuffIconComponent__ParentHasChanged(BattleServantBuffIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v4; // x1
  struct UISprite_o *v5; // x0
  UnityEngine_Object_o *backSprite; // x20
  UnityEngine_Object_o *sideBgSprite; // x20

  if ( (byte_593BF5E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BF5E = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0, 0) )
  {
    v5 = this->fields.iconSprite;
    if ( !v5 )
      goto LABEL_19;
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v5->klass->vtable._19_ParentHasChanged.methodPtr)(
      v5,
      v5->klass->vtable._19_ParentHasChanged.method);
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(backSprite, 0, 0) )
  {
    v5 = this->fields.backSprite;
    if ( !v5 )
      goto LABEL_19;
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v5->klass->vtable._19_ParentHasChanged.methodPtr)(
      v5,
      v5->klass->vtable._19_ParentHasChanged.method);
  }
  sideBgSprite = (UnityEngine_Object_o *)this->fields.sideBgSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(sideBgSprite, 0, 0) )
  {
    v5 = this->fields.sideBgSprite;
    if ( v5 )
    {
      ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v5->klass->vtable._19_ParentHasChanged.methodPtr)(
        v5,
        v5->klass->vtable._19_ParentHasChanged.method);
      return;
    }
LABEL_19:
    sub_21FFECC(v5, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantBuffIconComponent__SetEnableVisual(
        BattleServantBuffIconComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x21
  __int64 v6; // x1
  UIWidget_o *v7; // x0
  float v8; // s0 OVERLAPPED
  float v9; // s3
  float v10; // s1
  float v11; // s2
  const MethodInfo *v12; // x1

  if ( (byte_593BF58 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BF58 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnable);
  if ( !UnityEngine_Object__op_Equality(iconSprite, 0, 0) )
  {
    v7 = (UIWidget_o *)this->fields.iconSprite;
    if ( !v7 )
      goto LABEL_11;
    v8 = 0.5;
    v9 = 1.0;
    if ( isEnable )
      v8 = 1.0;
    v10 = v8;
    v11 = v8;
    UIWidget__set_color(v7, *(UnityEngine_Color_o *)&v8, 0);
    v7 = (UIWidget_o *)this->fields.iconSprite;
    if ( !v7 )
LABEL_11:
      sub_21FFECC(v7, v6);
    ((void (__fastcall *)(UIWidget_o *, const MethodInfo *))v7->klass->vtable._30_MarkAsChanged.methodPtr)(
      v7,
      v7->klass->vtable._30_MarkAsChanged.method);
    BattleServantBuffIconComponent__SyncBackgroundColorWithIcon(this, v12);
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
  bool v10; // zf
  __int64 v11; // x1
  UILabel_o *v12; // x19
  System_String_o **v13; // x8
  System_String_o *v14; // x20
  System_String_o *v15; // x20
  Il2CppObject *v16; // x0
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593BF5F & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_2814/*"BATTLE_BUFF_ICON_INTERVAL_TURN"*/);
    sub_21FFC50(&StringLiteral_2813/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593BF5F = 1;
  }
  intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, interval);
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
        v10 = !BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0);
        v12 = this->fields.intervalLabel;
        if ( v10 )
          v13 = (System_String_o **)&StringLiteral_2813/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/;
        else
          v13 = (System_String_o **)&StringLiteral_2814/*"BATTLE_BUFF_ICON_INTERVAL_TURN"*/;
        v14 = *v13;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
        v15 = LocalizationManager__Get(v14, 0);
        v17 = v9;
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v17);
        v7 = (UILabel_o *)System_String__Format(v15, v16, 0);
        if ( v12 )
        {
          UILabel__set_text(v12, (System_String_o *)v7, 0);
          return;
        }
LABEL_17:
        sub_21FFECC(v7, v6);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantBuffIconComponent__SetSideBg(
        BattleServantBuffIconComponent_o *this,
        bool isSetPlayerSideBg,
        bool isSetEnemySideBg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *sideBgSprite; // x22
  __int64 v8; // x1
  UnityEngine_Behaviour_o *v9; // x0

  if ( (byte_593BF59 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18369/*"bufficon_bg2"*/);
    sub_21FFC50(&StringLiteral_18368/*"bufficon_bg1"*/);
    byte_593BF59 = 1;
  }
  sideBgSprite = (UnityEngine_Object_o *)this->fields.sideBgSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isSetPlayerSideBg);
  if ( !UnityEngine_Object__op_Equality(sideBgSprite, 0, 0) )
  {
    v9 = (UnityEngine_Behaviour_o *)this->fields.sideBgSprite;
    if ( !v9 )
      goto LABEL_17;
    UnityEngine_Behaviour__set_enabled(v9, 0, 0);
    if ( isSetPlayerSideBg )
    {
      v9 = (UnityEngine_Behaviour_o *)this->fields.sideBgSprite;
      if ( !v9 )
        goto LABEL_17;
      UISprite__set_spriteName((UISprite_o *)v9, (System_String_o *)StringLiteral_18369/*"bufficon_bg2"*/, 0);
      v9 = (UnityEngine_Behaviour_o *)this->fields.sideBgSprite;
      if ( !v9 )
        goto LABEL_17;
      UnityEngine_Behaviour__set_enabled(v9, 1, 0);
    }
    if ( isSetEnemySideBg )
    {
      v9 = (UnityEngine_Behaviour_o *)this->fields.sideBgSprite;
      if ( !v9 )
        goto LABEL_17;
      UISprite__set_spriteName((UISprite_o *)v9, (System_String_o *)StringLiteral_18368/*"bufficon_bg1"*/, 0);
      v9 = (UnityEngine_Behaviour_o *)this->fields.sideBgSprite;
      if ( !v9 )
        goto LABEL_17;
      UnityEngine_Behaviour__set_enabled(v9, 1, 0);
    }
    v9 = (UnityEngine_Behaviour_o *)this->fields.sideBgSprite;
    if ( v9 )
    {
      (*(void (__fastcall **)(UnityEngine_Behaviour_o *, void *))&v9->klass[2]._1.byval_arg.bits)(
        v9,
        v9->klass[2]._1.this_arg.data);
      return;
    }
LABEL_17:
    sub_21FFECC(v9, v8);
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
  __int64 v9; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v11; // x0
  struct UnityEngine_GameObject_o **p_flashEffectObjInstance; // x19
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_Transform_o *v19; // x20
  UnityEngine_Transform_o *v20; // x20
  UnityEngine_Transform_o *v21; // x19

  if ( (byte_593BF60 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BF60 = 1;
  }
  flashEffectObj = (UnityEngine_Object_o *)this->fields.flashEffectObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
        v11 = UnityEngine_Object__Instantiate_object__59506996(
                v8,
                transform,
                (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
        this->fields.flashEffectObjInstance = (struct UnityEngine_GameObject_o *)v11;
        p_flashEffectObjInstance = &this->fields.flashEffectObjInstance;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)p_flashEffectObjInstance,
          (int32_t)v11,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        v4 = (__int64)*p_flashEffectObjInstance;
        if ( *p_flashEffectObjInstance )
        {
          v4 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v4, 0);
          v19 = (UnityEngine_Transform_o *)v4;
          if ( !byte_5931940 )
          {
            v4 = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
            byte_5931940 = 1;
          }
          if ( v19 )
          {
            UnityEngine_Transform__set_localPosition(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
            v4 = (__int64)*p_flashEffectObjInstance;
            if ( *p_flashEffectObjInstance )
            {
              v4 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v4, 0);
              v20 = (UnityEngine_Transform_o *)v4;
              if ( !byte_5931945 )
              {
                v4 = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
                byte_5931945 = 1;
              }
              if ( v20 )
              {
                UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
                v4 = (__int64)*p_flashEffectObjInstance;
                if ( *p_flashEffectObjInstance )
                {
                  v4 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v4, 0);
                  v21 = (UnityEngine_Transform_o *)v4;
                  if ( !byte_5931946 )
                  {
                    v4 = sub_21FFC50(&UnityEngine_Quaternion_TypeInfo);
                    byte_5931946 = 1;
                  }
                  if ( v21 )
                  {
                    UnityEngine_Transform__set_localRotation(
                      v21,
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
      sub_21FFECC(v4, v5);
    }
  }
}


void BattleServantBuffIconComponent__SyncBackgroundColorWithIcon(
        BattleServantBuffIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *iconSprite; // x20
  struct UISprite_o *v4; // x0
  __int64 v5; // x1
  struct UISprite_o *v6; // x8
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  UnityEngine_Object_o *backSprite; // x20
  UnityEngine_Object_o *sideBgSprite; // x20
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593BF57 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BF57 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = (struct UISprite_o *)UnityEngine_Object__op_Equality(iconSprite, 0, 0);
  if ( ((unsigned __int8)v4 & 1) == 0 )
  {
    v6 = this->fields.iconSprite;
    if ( !v6 )
      goto LABEL_20;
    r = v6->fields.mColor.fields.r;
    g = v6->fields.mColor.fields.g;
    b = v6->fields.mColor.fields.b;
    a = v6->fields.mColor.fields.a;
    backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(backSprite, 0, 0) )
    {
      v4 = this->fields.backSprite;
      if ( !v4 )
        goto LABEL_20;
      v13.fields.r = r;
      v13.fields.g = g;
      v13.fields.b = b;
      v13.fields.a = a;
      UIWidget__set_color((UIWidget_o *)v4, v13, 0);
      v4 = this->fields.backSprite;
      if ( !v4 )
        goto LABEL_20;
      ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v4->klass->vtable._30_MarkAsChanged.methodPtr)(
        v4,
        v4->klass->vtable._30_MarkAsChanged.method);
    }
    sideBgSprite = (UnityEngine_Object_o *)this->fields.sideBgSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(sideBgSprite, 0, 0) )
    {
      v4 = this->fields.sideBgSprite;
      if ( v4 )
      {
        v14.fields.r = r;
        v14.fields.g = g;
        v14.fields.b = b;
        v14.fields.a = a;
        UIWidget__set_color((UIWidget_o *)v4, v14, 0);
        v4 = this->fields.sideBgSprite;
        if ( v4 )
        {
          ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v4->klass->vtable._30_MarkAsChanged.methodPtr)(
            v4,
            v4->klass->vtable._30_MarkAsChanged.method);
          return;
        }
      }
LABEL_20:
      sub_21FFECC(v4, v5);
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
  struct BattleBuffData_ShowBuffData_o *v6; // x8

  nowBuff = this->fields.nowBuff;
  if ( !nowBuff
    || (BattleServantBuffIconComponent__SetEnableVisual(this, nowBuff->fields.isReady, method),
        (v6 = this->fields.nowBuff) == 0) )
  {
    sub_21FFECC(this, isPlayFlashEffect);
  }
  if ( v6->fields.isReady && isPlayFlashEffect )
    BattleServantBuffIconComponent__ShowHighLight(this, (const MethodInfo *)isPlayFlashEffect);
}


void BattleServantBuffIconComponent__UpdateShowBuffDataReady(
        BattleServantBuffIconComponent_o *this,
        BattleBuffData_ShowBuffData_o *showBuffData,
        const MethodInfo *method)
{
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x8
  struct BattleBuffData_ShowBuffData_o *oldBuff; // x9

  if ( !showBuffData || (nowBuff = this->fields.nowBuff) == 0 )
    sub_21FFECC(this, showBuffData);
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
  __int64 v7; // x1
  UISprite_o *iconSprite; // x20
  int32_t v9; // w21
  const MethodInfo *v10; // x3

  if ( (byte_593BF5A & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    byte_593BF5A = 1;
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
    sub_21FFECC(gameObject, v6);
  }
  this->fields.buffId = buffId;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  iconSprite = this->fields.iconSprite;
  v9 = this->fields.buffId;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7);
  AtlasManager__SetSBuffIcon(iconSprite, v9, 0);
  BattleServantBuffIconComponent__SetSideBg(this, 0, 0, v10);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantBuffIconComponent__setIcon_54623472(
        BattleServantBuffIconComponent_o *this,
        int32_t buffId,
        bool isSetPlayerSideBg,
        bool isSetEnemySideBg,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3

  BattleServantBuffIconComponent__setIcon(this, buffId, (const MethodInfo *)isSetPlayerSideBg);
  BattleServantBuffIconComponent__SetSideBg(this, isSetPlayerSideBg, isSetEnemySideBg, v8);
}


void BattleServantBuffIconComponent__setIcon_54623520(
        BattleServantBuffIconComponent_o *this,
        BattleBuffData_ShowBuffData_o *buff,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  UISprite_o *iconSprite; // x21
  int32_t buffId; // w22
  __int64 v22; // x1
  UnityEngine_Object_o *backSprite; // x21
  const MethodInfo *v24; // x3
  __int64 *v25; // x8
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x1
  UnityEngine_Object_o *flashEffectObjInstance; // x20
  __int64 v40; // x1
  UnityEngine_Object_o *v41; // x19
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x1

  if ( (byte_593BF5B & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_21436/*"img_passivebg"*/);
    sub_21FFC50(&StringLiteral_21437/*"img_passiveframe"*/);
    byte_593BF5B = 1;
  }
  if ( buff )
  {
    nowBuff = this->fields.nowBuff;
    this->fields.oldBuff = nowBuff;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.oldBuff,
      (int32_t)nowBuff,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.nowBuff = buff;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.nowBuff, (int32_t)buff, v11, v12, v13, v14, v15, v16);
    this->fields.buffId = buff->fields.buffId;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    iconSprite = this->fields.iconSprite;
    buffId = this->fields.buffId;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19);
    AtlasManager__SetSBuffIcon(iconSprite, buffId, 0);
    backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    if ( !UnityEngine_Object__op_Inequality(backSprite, 0, 0) )
      goto LABEL_31;
    if ( buff->fields.isFrame )
    {
      if ( buff->fields.isSetPlayerSideBg || buff->fields.isSetEnemySideBg )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
        if ( !gameObject )
          goto LABEL_34;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
        if ( !gameObject )
          goto LABEL_34;
        v25 = &StringLiteral_21437/*"img_passiveframe"*/;
LABEL_28:
        UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v25, 0);
LABEL_29:
        gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
        if ( gameObject )
        {
          (*(void (__fastcall **)(UnityEngine_GameObject_o *, void *))&gameObject->klass[2]._1.byval_arg.bits)(
            gameObject,
            gameObject->klass[2]._1.this_arg.data);
LABEL_31:
          BattleServantBuffIconComponent__SetSideBg(
            this,
            buff->fields.isSetPlayerSideBg,
            buff->fields.isSetEnemySideBg,
            v24);
          BattleServantBuffIconComponent__SetEnableVisual(this, buff->fields.isReady, v42);
          BattleServantBuffIconComponent__SetInterval(this, buff->fields._IntervalData_k__BackingField, v43);
          BattleServantBuffIconComponent__ShowHighLight(this, v44);
          return;
        }
LABEL_34:
        sub_21FFECC(gameObject, v18);
      }
    }
    else if ( !buff->fields.isPassive )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
      if ( !gameObject )
        goto LABEL_34;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
      goto LABEL_29;
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
    if ( !gameObject )
      goto LABEL_34;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
    if ( !gameObject )
      goto LABEL_34;
    v25 = &StringLiteral_21436/*"img_passivebg"*/;
    goto LABEL_28;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.oldBuff = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.oldBuff, 0, v26, v27, v28, v29, v30, v31);
  this->fields.nowBuff = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.nowBuff, 0, v32, v33, v34, v35, v36, v37);
  flashEffectObjInstance = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
  if ( UnityEngine_Object__op_Inequality(flashEffectObjInstance, 0, 0) )
  {
    v41 = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
    UnityEngine_Object__Destroy_83246496(v41, 0);
  }
}


void BattleServantBuffIconComponent__setImageId(
        BattleServantBuffIconComponent_o *this,
        int32_t iconId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  UISprite_o *iconSprite; // x21
  __int64 v9; // x1
  UnityEngine_Object_o *backSprite; // x20
  const MethodInfo *v11; // x3

  if ( (byte_593BF5C & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BF5C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( iconId )
  {
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      iconSprite = this->fields.iconSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7);
      AtlasManager__SetSBuffIconByIconId(iconSprite, iconId, 0);
      backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      if ( !UnityEngine_Object__op_Inequality(backSprite, 0, 0) )
        goto LABEL_12;
      gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
      if ( gameObject )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
LABEL_12:
        BattleServantBuffIconComponent__SetSideBg(this, 0, 0, v11);
        return;
      }
    }
LABEL_15:
    sub_21FFECC(gameObject, v6);
  }
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantBuffIconComponent__setImageId_54625336(
        BattleServantBuffIconComponent_o *this,
        int32_t iconId,
        bool isSetPlayerSideBg,
        bool isSetEnemySideBg,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3

  BattleServantBuffIconComponent__setImageId(this, iconId, (const MethodInfo *)isSetPlayerSideBg);
  BattleServantBuffIconComponent__SetSideBg(this, isSetPlayerSideBg, isSetEnemySideBg, v8);
}