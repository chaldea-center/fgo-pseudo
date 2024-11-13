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
  __int64 v6; // x1
  UnityEngine_Object_o *intervalLabel; // x21

  if ( (byte_4B19275 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&addDepth, method);
    byte_4B19275 = 1;
  }
  iconSprite = (UIWidget_o *)this->fields.iconSprite;
  if ( !iconSprite )
    goto LABEL_10;
  UIWidget__set_depth(iconSprite, iconSprite->fields.mDepth + addDepth, 0LL);
  intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(intervalLabel, 0LL, 0LL) )
  {
    iconSprite = (UIWidget_o *)this->fields.intervalLabel;
    if ( iconSprite )
    {
      UIWidget__set_depth(iconSprite, iconSprite->fields.mDepth + addDepth, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(iconSprite, *(_QWORD *)&addDepth);
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
  __int64 v2; // x2
  UnityEngine_Object_o *targetPerf; // x20
  const MethodInfo *v5; // x2
  __int64 buffId; // x1
  BattlePerformanceStatus_o *v7; // x0

  if ( (byte_4B19271 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19271 = 1;
  }
  targetPerf = (UnityEngine_Object_o *)this->fields.targetPerf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(targetPerf, 0LL, 0LL) )
  {
    buffId = (unsigned int)this->fields.buffId;
    if ( (int)buffId >= 1 )
    {
      v7 = this->fields.targetPerf;
      if ( !v7 )
        sub_1BCAA3C(0LL, buffId);
      BattlePerformanceStatus__OpenBuffConf(v7, buffId, v5);
    }
  }
}


void __fastcall BattleServantBuffIconComponent__ParentHasChanged(
        BattleServantBuffIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v5; // x1
  struct UISprite_o *v6; // x0
  UnityEngine_Object_o *backSprite; // x20

  if ( (byte_4B19272 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19272 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v6 = this->fields.iconSprite;
    if ( !v6 )
      goto LABEL_14;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._19_ParentHasChanged.method)(
      v6,
      v6->klass->vtable._20_OnStart.methodPtr);
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
LABEL_14:
    sub_1BCAA3C(v6, v5);
  }
}


void __fastcall BattleServantBuffIconComponent__SetInterval(
        BattleServantBuffIconComponent_o *this,
        BattleBuffData_IntervalData_o *interval,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *intervalLabel; // x21
  __int64 v16; // x1
  UILabel_o *v17; // x0
  int32_t IntervalVal; // w0
  int v19; // w21
  __int64 v20; // x1
  System_String_o **v21; // x8
  System_String_o *v22; // x20
  UILabel_o *v23; // x19
  System_String_o *v24; // x20
  Il2CppObject *v25; // x0
  int v26; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B19273 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, interval, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_2840/*"BATTLE_BUFF_ICON_INTERVAL_TURN"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_2839/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B19273 = 1;
  }
  intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, interval);
  if ( !UnityEngine_Object__op_Equality(intervalLabel, 0LL, 0LL) )
  {
    v17 = this->fields.intervalLabel;
    if ( !v17 )
      goto LABEL_17;
    UILabel__set_text(v17, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( interval )
    {
      IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0LL);
      if ( IntervalVal >= 1 )
      {
        v19 = IntervalVal;
        if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0LL) )
          v21 = (System_String_o **)&StringLiteral_2840/*"BATTLE_BUFF_ICON_INTERVAL_TURN"*/;
        else
          v21 = (System_String_o **)&StringLiteral_2839/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/;
        v22 = *v21;
        v23 = this->fields.intervalLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
        v24 = LocalizationManager__Get(v22, 0LL);
        v26 = v19;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
        v17 = (UILabel_o *)System_String__Format(v24, v25, 0LL);
        if ( v23 )
        {
          UILabel__set_text(v23, (System_String_o *)v17, 0LL);
          return;
        }
LABEL_17:
        sub_1BCAA3C(v17, v16);
      }
    }
  }
}


void __fastcall BattleServantBuffIconComponent__ShowHighLight(
        BattleServantBuffIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *flashEffectObj; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  struct BattleBuffData_ShowBuffData_o *oldBuff; // x8
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x9
  Il2CppObject *v11; // x20
  __int64 v12; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v14; // x0
  struct UnityEngine_GameObject_o **p_flashEffectObjInstance; // x19
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x2
  UnityEngine_Transform_o *v23; // x20
  __int64 v24; // x2
  UnityEngine_Transform_o *v25; // x20
  __int64 v26; // x2
  UnityEngine_Transform_o *v27; // x19

  if ( (byte_4B19274 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B19274 = 1;
  }
  flashEffectObj = (UnityEngine_Object_o *)this->fields.flashEffectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = UnityEngine_Object__op_Equality(flashEffectObj, 0LL, 0LL);
  if ( (v7 & 1) == 0 )
  {
    oldBuff = this->fields.oldBuff;
    if ( oldBuff )
    {
      nowBuff = this->fields.nowBuff;
      if ( nowBuff )
      {
        if ( !nowBuff->fields.isReady || oldBuff->fields.isReady )
          return;
        v11 = (Il2CppObject *)this->fields.flashEffectObj;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
        v14 = UnityEngine_Object__Instantiate_object__49903816(
                v11,
                transform,
                (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
        this->fields.flashEffectObjInstance = (struct UnityEngine_GameObject_o *)v14;
        p_flashEffectObjInstance = &this->fields.flashEffectObjInstance;
        sub_1BCA784((PartyOrganizationUtility_o *)p_flashEffectObjInstance, (int64_t)v14, v16, v17, v18, v19, v20, v21);
        v7 = (__int64)*p_flashEffectObjInstance;
        if ( *p_flashEffectObjInstance )
        {
          v7 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
          v23 = (UnityEngine_Transform_o *)v7;
          if ( !byte_4B109C1 )
          {
            v7 = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v8, v22);
            byte_4B109C1 = 1;
          }
          if ( v23 )
          {
            UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
            v7 = (__int64)*p_flashEffectObjInstance;
            if ( *p_flashEffectObjInstance )
            {
              v7 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
              v25 = (UnityEngine_Transform_o *)v7;
              if ( !byte_4B109C6 )
              {
                v7 = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v8, v24);
                byte_4B109C6 = 1;
              }
              if ( v25 )
              {
                UnityEngine_Transform__set_localScale(v25, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
                v7 = (__int64)*p_flashEffectObjInstance;
                if ( *p_flashEffectObjInstance )
                {
                  v7 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
                  v27 = (UnityEngine_Transform_o *)v7;
                  if ( !byte_4B109C7 )
                  {
                    v7 = sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v8, v26);
                    byte_4B109C7 = 1;
                  }
                  if ( v27 )
                  {
                    UnityEngine_Transform__set_localRotation(
                      v27,
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
      sub_1BCAA3C(v7, v8);
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
    sub_1BCAA3C(this, method);
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
  __int64 v6; // x1
  __int64 v7; // x1
  UISprite_o *iconSprite; // x20
  int32_t v9; // w19

  if ( (byte_4B1926E & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&buffId, method);
    byte_4B1926E = 1;
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
    sub_1BCAA3C(gameObject, v6);
  }
  this->fields.buffId = buffId;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  iconSprite = this->fields.iconSprite;
  v9 = this->fields.buffId;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7);
  AtlasManager__SetSBuffIcon(iconSprite, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantBuffIconComponent__setIcon_44753512(
        BattleServantBuffIconComponent_o *this,
        BattleBuffData_ShowBuffData_o *buff,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  UISprite_o *iconSprite; // x21
  int32_t buffId; // w22
  float v24; // s0
  float v25; // s3
  float v26; // s1
  float v27; // s2
  __int64 v28; // x1
  UnityEngine_Object_o *backSprite; // x21
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x1
  UnityEngine_Object_o *flashEffectObjInstance; // x20
  __int64 v46; // x1
  UnityEngine_Object_o *v47; // x19

  if ( (byte_4B1926F & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, buff, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B1926F = 1;
  }
  if ( buff )
  {
    nowBuff = this->fields.nowBuff;
    this->fields.oldBuff = nowBuff;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.oldBuff,
      (int64_t)nowBuff,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.nowBuff = buff;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.nowBuff, (int64_t)buff, v13, v14, v15, v16, v17, v18);
    this->fields.buffId = buff->fields.buffId;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      iconSprite = this->fields.iconSprite;
      buffId = this->fields.buffId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21);
      AtlasManager__SetSBuffIcon(iconSprite, buffId, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.iconSprite;
      v24 = 1.0;
      if ( !buff->fields.isReady )
        v24 = 0.5;
      if ( gameObject )
      {
        v25 = 1.0;
        v26 = v24;
        v27 = v24;
        UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)&v24, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.iconSprite;
        if ( gameObject )
        {
          (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppClass *))&gameObject->klass[2]._1.this_arg.bits)(
            gameObject,
            gameObject->klass[2]._1.element_class);
          backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
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
              BattleServantBuffIconComponent__SetInterval(this, buff->fields._IntervalData_k__BackingField, v30);
              BattleServantBuffIconComponent__ShowHighLight(this, v31);
              return;
            }
          }
        }
      }
    }
LABEL_29:
    sub_1BCAA3C(gameObject, v20);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.oldBuff = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.oldBuff, 0LL, v32, v33, v34, v35, v36, v37);
  this->fields.nowBuff = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.nowBuff, 0LL, v38, v39, v40, v41, v42, v43);
  flashEffectObjInstance = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
  if ( UnityEngine_Object__op_Inequality(flashEffectObjInstance, 0LL, 0LL) )
  {
    v47 = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
    UnityEngine_Object__Destroy_70154244(v47, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantBuffIconComponent__setImageId(
        BattleServantBuffIconComponent_o *this,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  UISprite_o *iconSprite; // x21
  __int64 v11; // x1
  UnityEngine_Object_o *backSprite; // x20

  if ( (byte_4B19270 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&iconId, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B19270 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  if ( iconId )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    iconSprite = this->fields.iconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9);
    AtlasManager__SetSBuffIconByIconId(iconSprite, iconId, 0LL);
    backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(backSprite, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.backSprite;
      if ( gameObject )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
        return;
      }
LABEL_14:
      sub_1BCAA3C(gameObject, v8);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}