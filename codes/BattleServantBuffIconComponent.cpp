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

  if ( (byte_4BB7818 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, *(_QWORD *)&addDepth);
    byte_4BB7818 = 1;
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
    sub_1C13F80(iconSprite, *(_QWORD *)&addDepth);
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

  if ( (byte_4BB7814 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB7814 = 1;
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
        sub_1C13F80(0LL, buffId);
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

  if ( (byte_4BB7815 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB7815 = 1;
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
    sub_1C13F80(v5, v4);
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
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  int v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BB7816 & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, interval);
    sub_1C13D24(&LocalizationManager_TypeInfo, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    sub_1C13D24(&StringLiteral_2849/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/, v7);
    sub_1C13D24(&StringLiteral_2848/*"BATTLE_BUFF_COUNT"*/, v8);
    sub_1C13D24(&StringLiteral_1/*""*/, v9);
    byte_4BB7816 = 1;
  }
  intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(intervalLabel, 0LL, 0LL) )
  {
    v12 = this->fields.intervalLabel;
    if ( !v12 )
      goto LABEL_17;
    UILabel__set_text(v12, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( interval )
    {
      IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0LL);
      if ( IntervalVal >= 1 )
      {
        v14 = IntervalVal;
        if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0LL) )
          v15 = (System_String_o **)&StringLiteral_2849/*"BATTLE_BUFF_ICON_INTERVAL_COUNT"*/;
        else
          v15 = (System_String_o **)&StringLiteral_2848/*"BATTLE_BUFF_COUNT"*/;
        v16 = *v15;
        v17 = this->fields.intervalLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v18 = LocalizationManager__Get(v16, 0LL);
        v23 = v14;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v19, v20, v21);
        v12 = (UILabel_o *)System_String__Format(v18, v22, 0LL);
        if ( v17 )
        {
          UILabel__set_text(v17, (System_String_o *)v12, 0LL);
          return;
        }
LABEL_17:
        sub_1C13F80(v12, v11);
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
  __int64 v6; // x1
  struct BattleBuffData_ShowBuffData_o *oldBuff; // x8
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x9
  Il2CppObject *v9; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v11; // x0
  struct UnityEngine_GameObject_o **p_flashEffectObjInstance; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UnityEngine_Transform_o *v19; // x20
  UnityEngine_Transform_o *v20; // x20
  UnityEngine_Transform_o *v21; // x19

  if ( (byte_4BB7817 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject____77555680, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    byte_4BB7817 = 1;
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
        v9 = (Il2CppObject *)this->fields.flashEffectObj;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v11 = UnityEngine_Object__Instantiate_object__50417328(
                v9,
                transform,
                (const MethodInfo_3014EB0 *)Method_UnityEngine_Object_Instantiate_GameObject____77555680);
        this->fields.flashEffectObjInstance = (struct UnityEngine_GameObject_o *)v11;
        p_flashEffectObjInstance = &this->fields.flashEffectObjInstance;
        sub_1C13CC8((PartyOrganizationUtility_o *)p_flashEffectObjInstance, (int64_t)v11, v13, v14, v15, v16, v17, v18);
        v5 = (__int64)*p_flashEffectObjInstance;
        if ( *p_flashEffectObjInstance )
        {
          v5 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0LL);
          v19 = (UnityEngine_Transform_o *)v5;
          if ( !byte_4BAEDA1 )
          {
            v5 = sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v6);
            byte_4BAEDA1 = 1;
          }
          if ( v19 )
          {
            UnityEngine_Transform__set_localPosition(v19, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
            v5 = (__int64)*p_flashEffectObjInstance;
            if ( *p_flashEffectObjInstance )
            {
              v5 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0LL);
              v20 = (UnityEngine_Transform_o *)v5;
              if ( !byte_4BAEDA6 )
              {
                v5 = sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v6);
                byte_4BAEDA6 = 1;
              }
              if ( v20 )
              {
                UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
                v5 = (__int64)*p_flashEffectObjInstance;
                if ( *p_flashEffectObjInstance )
                {
                  v5 = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v5, 0LL);
                  v21 = (UnityEngine_Transform_o *)v5;
                  if ( !byte_4BAEDA7 )
                  {
                    v5 = sub_1C13D24(&UnityEngine_Quaternion_TypeInfo, v6);
                    byte_4BAEDA7 = 1;
                  }
                  if ( v21 )
                  {
                    UnityEngine_Transform__set_localRotation(
                      v21,
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
      sub_1C13F80(v5, v6);
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
    sub_1C13F80(this, method);
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
  UISprite_o *iconSprite; // x20
  int32_t v8; // w19

  if ( (byte_4BB7811 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, *(_QWORD *)&buffId);
    byte_4BB7811 = 1;
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
    sub_1C13F80(gameObject, v6);
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
void __fastcall BattleServantBuffIconComponent__setIcon_45219680(
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
  struct BattleBuffData_ShowBuffData_o *nowBuff; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  UISprite_o *iconSprite; // x21
  int32_t buffId; // w22
  float v22; // s0
  float v23; // s3
  float v24; // s1
  float v25; // s2
  UnityEngine_Object_o *backSprite; // x21
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  UnityEngine_Object_o *flashEffectObjInstance; // x20
  UnityEngine_Object_o *v42; // x19

  if ( (byte_4BB7812 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, buff);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v10);
    byte_4BB7812 = 1;
  }
  if ( buff )
  {
    nowBuff = this->fields.nowBuff;
    this->fields.oldBuff = nowBuff;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.oldBuff,
      (int64_t)nowBuff,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.nowBuff = buff;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.nowBuff, (int64_t)buff, v12, v13, v14, v15, v16, v17);
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
      v22 = 1.0;
      if ( !buff->fields.isReady )
        v22 = 0.5;
      if ( gameObject )
      {
        v23 = 1.0;
        v24 = v22;
        v25 = v22;
        UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)&v22, 0LL);
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
              BattleServantBuffIconComponent__SetInterval(this, buff->fields._IntervalData_k__BackingField, v27);
              BattleServantBuffIconComponent__ShowHighLight(this, v28);
              return;
            }
          }
        }
      }
    }
LABEL_29:
    sub_1C13F80(gameObject, v19);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.oldBuff = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.oldBuff, 0LL, v29, v30, v31, v32, v33, v34);
  this->fields.nowBuff = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.nowBuff, 0LL, v35, v36, v37, v38, v39, v40);
  flashEffectObjInstance = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(flashEffectObjInstance, 0LL, 0LL) )
  {
    v42 = (UnityEngine_Object_o *)this->fields.flashEffectObjInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988(v42, 0LL);
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

  if ( (byte_4BB7813 & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, *(_QWORD *)&iconId);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    byte_4BB7813 = 1;
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
      sub_1C13F80(gameObject, v7);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}