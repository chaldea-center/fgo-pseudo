void __fastcall BattleInformationComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct BattleInformationComponent_StaticFields *static_fields; // x0
  __int64 v4; // x1

  if ( (byte_40F7349 & 1) == 0 )
  {
    sub_B16FFC(&BattleInformationComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_9564, v2);
    byte_40F7349 = 1;
  }
  static_fields = BattleInformationComponent_TypeInfo->static_fields;
  v4 = StringLiteral_9564;
  static_fields->NobleInfoAnimPrefix = (struct System_String_o *)StringLiteral_9564;
  sub_B16F98(static_fields, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInformationComponent___ctor(BattleInformationComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  BaseBattleInfoPosData_o *v19; // x20
  __int64 v20; // x2
  __int64 v21; // x0
  __int64 v22; // x2
  struct System_String_array *v23; // x20
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  struct UnityEngine_GameObject_array *v27; // x0
  __int64 v28; // x2
  struct System_Boolean_array *v29; // x0
  __int64 v30; // x2
  struct System_Single_array *v31; // x0
  __int64 v32; // x2
  __int64 v33; // x20
  int v34; // s0
  int v35; // s1
  int v36; // s2
  int v37; // w8
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x20
  __int64 v43; // x2
  __int64 v44; // x0
  struct System_String_array *v45; // x20

  if ( (byte_40F7348 & 1) == 0 )
  {
    sub_B16FFC(&BaseBattleInfoPosData_TypeInfo, method);
    sub_B16FFC(&bool___TypeInfo, v6);
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v9);
    sub_B16FFC(&float___TypeInfo, v10);
    sub_B16FFC(&string___TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Vector3___TypeInfo, v12);
    sub_B16FFC(&StringLiteral_23553, v13);
    sub_B16FFC(&StringLiteral_1168, v14);
    sub_B16FFC(&StringLiteral_21256, v15);
    sub_B16FFC(&StringLiteral_1101, v16);
    sub_B16FFC(&StringLiteral_1149, v17);
    sub_B16FFC(&StringLiteral_21255, v18);
    byte_40F7348 = 1;
  }
  v19 = (BaseBattleInfoPosData_o *)sub_B170CC(BaseBattleInfoPosData_TypeInfo, method, v2, v3, v4);
  BaseBattleInfoPosData___ctor(v19, 0LL);
  this->fields.infoPosData = v19;
  sub_B16F98(&this->fields.infoPosData, v19);
  v21 = sub_B17014(string___TypeInfo, 2LL, v20);
  if ( !v21 )
    goto LABEL_41;
  v23 = (struct System_String_array *)v21;
  v24 = StringLiteral_21256;
  if ( StringLiteral_21256 )
  {
    v24 = sub_B170BC(StringLiteral_21256, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_40;
    v25 = StringLiteral_21256;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v23->max_length )
    goto LABEL_39;
  v23->m_Items[0] = (System_String_o *)v25;
  sub_B16F98(v23->m_Items, v25);
  v24 = StringLiteral_21255;
  if ( StringLiteral_21255 )
  {
    v24 = sub_B170BC(StringLiteral_21255, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_40;
    v25 = StringLiteral_21255;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_39;
  v23->m_Items[1] = (System_String_o *)v25;
  sub_B16F98(&v23->m_Items[1], v25);
  this->fields.overLabel = v23;
  sub_B16F98(&this->fields.overLabel, v23);
  v27 = (struct UnityEngine_GameObject_array *)sub_B17014(UnityEngine_GameObject___TypeInfo, 2LL, v26);
  this->fields.overObjectList = v27;
  sub_B16F98(&this->fields.overObjectList, v27);
  v29 = (struct System_Boolean_array *)sub_B17014(bool___TypeInfo, 2LL, v28);
  this->fields.isAlreadyOverKill = v29;
  sub_B16F98(&this->fields.isAlreadyOverKill, v29);
  v31 = (struct System_Single_array *)sub_B17014(float___TypeInfo, 2LL, v30);
  this->fields.timeStartOverKill = v31;
  sub_B16F98(&this->fields.timeStartOverKill, v31);
  v33 = sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v32);
  *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v33 )
    goto LABEL_41;
  v37 = *(_DWORD *)(v33 + 24);
  if ( !v37 || (*(_DWORD *)(v33 + 32) = v34, *(_DWORD *)(v33 + 36) = v35, *(_DWORD *)(v33 + 40) = v36, v37 == 1) )
  {
LABEL_39:
    sub_B17100(v24, v25, v22);
    sub_B170A0();
  }
  *(_DWORD *)(v33 + 52) = 0;
  *(_QWORD *)(v33 + 44) = 0xC24C000000000000LL;
  this->fields.showPositions = (struct UnityEngine_Vector3_array *)v33;
  sub_B16F98(&this->fields.showPositions, v33);
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v38,
                                                                                                  v39,
                                                                                                  v40,
                                                                                                  v41);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.motionMessageObjList = (struct System_Collections_Generic_List_GameObject__o *)v42;
  sub_B16F98(&this->fields.motionMessageObjList, v42);
  v44 = sub_B17014(string___TypeInfo, 4LL, v43);
  if ( !v44 )
LABEL_41:
    sub_B170D4();
  v45 = (struct System_String_array *)v44;
  v24 = StringLiteral_1101;
  if ( StringLiteral_1101 )
  {
    v24 = sub_B170BC(StringLiteral_1101, v45->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_40;
    v25 = StringLiteral_1101;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v45->max_length )
    goto LABEL_39;
  v45->m_Items[0] = (System_String_o *)v25;
  sub_B16F98(v45->m_Items, v25);
  v24 = StringLiteral_1149;
  if ( StringLiteral_1149 )
  {
    v24 = sub_B170BC(StringLiteral_1149, v45->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_40;
    v25 = StringLiteral_1149;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v45->max_length <= 1 )
    goto LABEL_39;
  v45->m_Items[1] = (System_String_o *)v25;
  sub_B16F98(&v45->m_Items[1], v25);
  v24 = StringLiteral_1168;
  if ( StringLiteral_1168 )
  {
    v24 = sub_B170BC(StringLiteral_1168, v45->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_40;
    v25 = StringLiteral_1168;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v45->max_length <= 2 )
    goto LABEL_39;
  v45->m_Items[2] = (System_String_o *)v25;
  sub_B16F98(&v45->m_Items[2], v25);
  v24 = StringLiteral_23553;
  if ( StringLiteral_23553 )
  {
    v24 = sub_B170BC(StringLiteral_23553, v45->obj.klass->_1.element_class);
    if ( v24 )
    {
      v25 = StringLiteral_23553;
      goto LABEL_37;
    }
LABEL_40:
    sub_B170F4();
    sub_B170A0();
  }
  v25 = 0LL;
LABEL_37:
  if ( v45->max_length <= 3 )
    goto LABEL_39;
  v45->m_Items[3] = (System_String_o *)v25;
  sub_B16F98(&v45->m_Items[3], v25);
  this->fields.attackCount = v45;
  sub_B16F98(&this->fields.attackCount, v45);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateBattleMessageObject(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        int32_t messageType,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *MessageObjectAssetName; // x21
  __int64 v11; // x2
  System_String_array *v12; // x22
  System_String_o *EffectAssetName; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x23
  System_String_o *v17; // x23
  BattleInformationComponent_o *v18; // x0
  const MethodInfo *v19; // x3
  UnityEngine_GameObject_o *TargetPrefab; // x0
  const MethodInfo *v21; // x4

  if ( (byte_40F7338 & 1) == 0 )
  {
    sub_B16FFC(&BattleDataDefine_TypeInfo, messages);
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v8);
    this = (BattleInformationComponent_o *)sub_B16FFC(&string___TypeInfo, v9);
    byte_40F7338 = 1;
  }
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(
                             this,
                             messageType,
                             *(const MethodInfo **)&messageType);
  v12 = (System_String_array *)sub_B17014(string___TypeInfo, 2LL, v11);
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  EffectAssetName = BattleEffectUtility__get_EffectAssetName(0LL);
  if ( !v12 )
    sub_B170D4();
  v16 = EffectAssetName;
  if ( EffectAssetName )
  {
    EffectAssetName = (System_String_o *)sub_B170BC(EffectAssetName, v12->obj.klass->_1.element_class);
    if ( !EffectAssetName )
      goto LABEL_18;
  }
  if ( !v12->max_length )
    goto LABEL_17;
  v12->m_Items[0] = v16;
  sub_B16F98(v12->m_Items, v16);
  EffectAssetName = (System_String_o *)BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    EffectAssetName = (System_String_o *)BattleDataDefine_TypeInfo;
  }
  v17 = *(System_String_o **)(*(_QWORD *)&EffectAssetName[7].fields + 32LL);
  if ( v17 )
  {
    EffectAssetName = (System_String_o *)sub_B170BC(v17, v12->obj.klass->_1.element_class);
    if ( !EffectAssetName )
    {
LABEL_18:
      sub_B170F4();
      sub_B170A0();
    }
  }
  if ( v12->max_length <= 1 )
  {
LABEL_17:
    sub_B17100(EffectAssetName, v14, v15);
    sub_B170A0();
  }
  v12->m_Items[1] = v17;
  sub_B16F98(&v12->m_Items[1], v17);
  TargetPrefab = BattleInformationComponent__GetTargetPrefab(v18, MessageObjectAssetName, v12, v19);
  return BattleInformationComponent__CreateBattleMessageObject_19747388(
           (BattleInformationComponent_o *)TargetPrefab,
           messages,
           TargetPrefab,
           parentTransform,
           v21);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateBattleMessageObject_19747388(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        UnityEngine_GameObject_o *msgPrefab,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x22
  UnityEngine_GameObject_o *v11; // x0
  BattleConcatLabelMessageComponent_o *Component_srcLineSprite; // x20

  if ( (byte_40F7339 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___, messages);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40F7339 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)msgPrefab, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                        (UILabel_o *)msgPrefab,
                                        parentTransform,
                                        (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
    if ( !v11 )
      goto LABEL_15;
    v10 = v11;
    Component_srcLineSprite = (BattleConcatLabelMessageComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       v11,
                                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( Component_srcLineSprite )
      {
        BattleConcatLabelMessageComponent__SetTexts(Component_srcLineSprite, messages, 0LL);
        return v10;
      }
LABEL_15:
      sub_B170D4();
    }
  }
  return v10;
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateDefaultBattleMessageObject(
        BattleInformationComponent_o *this,
        System_String_o *message,
        UnityEngine_Transform_o *parentTransform,
        float lifeTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  __int64 v12; // x2
  BattleInformationComponent_o *v13; // x0
  const MethodInfo *v14; // x2
  BattleLogic_o *logic; // x0
  ParseBattleMessage_o *ParseBattleMsg; // x0
  System_String_array *v17; // x20
  System_String_o *MessageObjectAssetName; // x21
  __int64 v19; // x2
  __int64 inited; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  System_String_array *v23; // x22
  BattleDataDefine_c *v24; // x8
  System_String_o *ASSET_BATTLE_COMMON; // x23
  BattleInformationComponent_o *v26; // x0
  const MethodInfo *v27; // x3
  UnityEngine_GameObject_o *TargetPrefab; // x0
  const MethodInfo *v29; // x4
  UnityEngine_GameObject_o *BattleMessageObject_19747388; // x0
  UnityEngine_GameObject_o *v31; // x19
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v32; // x0

  if ( (byte_40F7337 & 1) == 0 )
  {
    sub_B16FFC(&BattleDataDefine_TypeInfo, message);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___, v9);
    sub_B16FFC(&string___TypeInfo, v10);
    byte_40F7337 = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
  {
    v13 = (BattleInformationComponent_o *)sub_B17014(string___TypeInfo, 0LL, v12);
  }
  else
  {
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_18;
    ParseBattleMsg = BattleLogic__get_ParseBattleMsg(logic, v11);
    if ( !ParseBattleMsg )
      goto LABEL_18;
    v13 = (BattleInformationComponent_o *)ParseBattleMessage__Replace(ParseBattleMsg, message, 0LL);
  }
  v17 = (System_String_array *)v13;
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(v13, 0, v14);
  inited = sub_B17014(string___TypeInfo, 1LL, v19);
  v23 = (System_String_array *)inited;
  v24 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v24 = BattleDataDefine_TypeInfo;
  }
  if ( !v23 )
    goto LABEL_18;
  ASSET_BATTLE_COMMON = v24->static_fields->ASSET_BATTLE_COMMON;
  if ( ASSET_BATTLE_COMMON )
  {
    inited = sub_B170BC(ASSET_BATTLE_COMMON, v23->obj.klass->_1.element_class);
    if ( !inited )
    {
      sub_B170F4();
      sub_B170A0();
    }
  }
  if ( !v23->max_length )
  {
    sub_B17100(inited, v21, v22);
    sub_B170A0();
  }
  v23->m_Items[0] = ASSET_BATTLE_COMMON;
  sub_B16F98(v23->m_Items, ASSET_BATTLE_COMMON);
  TargetPrefab = BattleInformationComponent__GetTargetPrefab(v26, MessageObjectAssetName, v23, v27);
  BattleMessageObject_19747388 = BattleInformationComponent__CreateBattleMessageObject_19747388(
                                   (BattleInformationComponent_o *)TargetPrefab,
                                   v17,
                                   TargetPrefab,
                                   parentTransform,
                                   v29);
  if ( !BattleMessageObject_19747388
    || (v31 = BattleMessageObject_19747388,
        (v32 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                 BattleMessageObject_19747388,
                 (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___)) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  CommonEffectComponent__SetTime((CommonEffectComponent_o *)v32, lifeTime, 0.0, 0LL);
  return v31;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateDefaultSkillMessageObject(
        BattleInformationComponent_o *this,
        bool isPlayer,
        System_String_o *message,
        bool showSkillSprite,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x8
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v12; // x19
  BattleInfoMessageComponent_o *Component_srcLineSprite; // x0
  const MethodInfo *v14; // x2
  BattleInfoMessageComponent_o *v15; // x22
  UnityEngine_Object_o *skillSprite; // x20
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F733A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, isPlayer);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40F733A = 1;
  }
  v10 = 128LL;
  if ( isPlayer )
    v10 = 120LL;
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             *(UnityEngine_GameObject_o **)((char *)&this->klass + v10),
             this->fields.skillInfoRoot,
             0LL,
             0LL);
  if ( !Object )
    goto LABEL_16;
  v12 = Object;
  Component_srcLineSprite = (BattleInfoMessageComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              Object,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
  if ( !Component_srcLineSprite )
    goto LABEL_16;
  v15 = Component_srcLineSprite;
  BattleInfoMessageComponent__setText(Component_srcLineSprite, message, v14);
  if ( !showSkillSprite )
  {
    skillSprite = (UnityEngine_Object_o *)v15->fields.skillSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillSprite, 0LL, 0LL) )
    {
      v17 = (UnityEngine_Component_o *)v15->fields.skillSprite;
      if ( v17 )
      {
        gameObject = UnityEngine_Component__get_gameObject(v17, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          return v12;
        }
      }
LABEL_16:
      sub_B170D4();
    }
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateOverWriteSkillInfoObject(
        BattleInformationComponent_o *this,
        int32_t overWriteSkillInfoId,
        System_String_o *message,
        bool isPlayer,
        int32_t skillLevel,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x19
  UnityEngine_GameObject_o *skillInfoPrefab; // x1
  UnityEngine_GameObject_o *Object; // x0
  System_String_o *v17; // x19
  Il2CppObject *v18; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *mcTweenScaleP; // x21
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  v24 = skillLevel;
  if ( (byte_40F733B & 1) == 0 )
  {
    sub_B16FFC(
      &Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___,
      *(_QWORD *)&overWriteSkillInfoId);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_2515, v13);
    byte_40F733B = 1;
  }
  v14 = 0LL;
  switch ( overWriteSkillInfoId )
  {
    case 0:
      return v14;
    case 1:
      skillInfoPrefab = this->fields.skillInfoPrefab;
      goto LABEL_6;
    case 2:
      skillInfoPrefab = this->fields.skillInfoEnemyPrefab;
LABEL_6:
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)this,
                 skillInfoPrefab,
                 this->fields.skillInfoRoot,
                 0LL,
                 0LL);
      goto LABEL_14;
    case 3:
      if ( skillLevel >= 1 && isPlayer )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2515, 0LL);
        v18 = (Il2CppObject *)System_Int32__ToString((int32_t)&v24, 0LL);
        message = System_String__Format_43739268(v17, (Il2CppObject *)message, v18, 0LL);
      }
      Object = BattleInformationComponent__CreateDefaultBattleMessageObject(
                 this,
                 message,
                 this->fields.skillInfoRoot,
                 2.0,
                 (const MethodInfo *)isPlayer);
LABEL_14:
      v14 = Object;
      break;
    default:
      break;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
  {
    if ( !v14 )
      goto LABEL_33;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v14,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_33;
      mcTweenScaleP = (UnityEngine_Object_o *)Component_srcLineSprite->fields.mcTweenScaleP;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(mcTweenScaleP, 0LL, 0LL) )
      {
        v21 = (UnityEngine_Component_o *)Component_srcLineSprite->fields.mcTweenScaleP;
        if ( v21 )
        {
          gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            return v14;
          }
        }
LABEL_33:
        sub_B170D4();
      }
    }
  }
  return v14;
}


void __fastcall BattleInformationComponent__CreateSkillSkip(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *skillSkipRoot; // x20
  struct BaseBattleInfoPosData_o *infoPosData; // x0
  UnityEngine_GameObject_o *v5; // x20
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *skillSkipPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o **p_skillSkipObj; // x20
  UnityEngine_Object_o *skillSkipObj; // x19
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F7346 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7346 = 1;
  }
  skillSkipRoot = (UnityEngine_Object_o *)this->fields.skillSkipRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillSkipRoot, 0LL, 0LL) )
  {
    infoPosData = this->fields.infoPosData;
    if ( !infoPosData )
      goto LABEL_16;
    v5 = this->fields.skillSkipRoot;
    v13.fields.x = ((float (__fastcall *)(struct BaseBattleInfoPosData_o *, Il2CppMethodPointer))infoPosData->klass->vtable._4_get_SkillSkipTrLocalPos.method)(
                     infoPosData,
                     infoPosData->klass->vtable._5_get_OverTrLocalPosY.methodPtr);
    GameObjectExtensions__SetLocalPosition(v5, v13, 0LL);
    BattleInformationComponent__DeleteSkillSkip(this, v6);
    v7 = this->fields.skillSkipRoot;
    if ( !v7 )
      goto LABEL_16;
    skillSkipPrefab = this->fields.skillSkipPrefab;
    transform = UnityEngine_GameObject__get_transform(v7, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillSkipPrefab, transform, 0LL, 0LL);
    p_skillSkipObj = &this->fields.skillSkipObj;
    this->fields.skillSkipObj = Object;
    sub_B16F98(&this->fields.skillSkipObj, Object);
    skillSkipObj = (UnityEngine_Object_o *)this->fields.skillSkipObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillSkipObj, 0LL, 0LL) )
    {
      if ( *p_skillSkipObj )
      {
        UnityEngine_GameObject__SetActive(*p_skillSkipObj, 1, 0LL);
        return;
      }
LABEL_16:
      sub_B170D4();
    }
  }
}


void __fastcall BattleInformationComponent__DeleteSkillSkip(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o **p_skillSkipObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *skillSkipObj; // t1
  UnityEngine_Object_o *v6; // x20

  if ( (byte_40F7347 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7347 = 1;
  }
  skillSkipObj = this->fields.skillSkipObj;
  p_skillSkipObj = &this->fields.skillSkipObj;
  v4 = (UnityEngine_Object_o *)skillSkipObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)*p_skillSkipObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v6, 0LL);
    *p_skillSkipObj = 0LL;
    sub_B16F98(p_skillSkipObj, 0LL);
  }
}


void __fastcall BattleInformationComponent__DestroyDisplayingMessage(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *commonMessageObject; // x20
  UnityEngine_Object_o *v9; // x20
  struct System_Collections_Generic_List_GameObject__o *motionMessageObjList; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v12; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F7340 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F7340 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  commonMessageObject = (UnityEngine_Object_o *)this->fields.commonMessageObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(commonMessageObject, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Object_o *)this->fields.commonMessageObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v9, 0LL);
  }
  motionMessageObjList = this->fields.motionMessageObjList;
  if ( !motionMessageObjList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)motionMessageObjList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v13.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v12 = this->fields.motionMessageObjList;
  if ( !v12 )
LABEL_20:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v12,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleInformationComponent__GetMessageObjectAssetName(
        BattleInformationComponent_o *this,
        int32_t messageType,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F7336 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&messageType);
    sub_B16FFC(&StringLiteral_16597, v4);
    byte_40F7336 = 1;
  }
  v7 = messageType;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Format((System_String_o *)StringLiteral_16597, v5, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__GetTargetPrefab(
        BattleInformationComponent_o *this,
        System_String_o *prefabName,
        System_String_array *assetNames,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x22
  System_String_o *v10; // x21
  AssetData_o *AssetStorage; // x0
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21

  if ( (byte_40F7345 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, prefabName);
    sub_B16FFC(&AssetManager_TypeInfo, v6);
    this = (BattleInformationComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F7345 = 1;
  }
  if ( !assetNames )
    goto LABEL_20;
  v8 = *(_QWORD *)&assetNames->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v8 )
      {
        sub_B17100(this, prefabName, assetNames);
        sub_B170A0();
      }
      v10 = assetNames->m_Items[v9];
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetStorage = AssetManager__getAssetStorage(v10, 0LL);
      if ( !AssetStorage )
        break;
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 AssetStorage,
                                                                 prefabName,
                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        LODWORD(v8) = assetNames->max_length;
        if ( (__int64)++v9 < (int)v8 )
          continue;
      }
      return (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
    }
LABEL_20:
    sub_B170D4();
  }
  return 0LL;
}


void __fastcall BattleInformationComponent__Initialize(
        BattleInformationComponent_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *playerAttackInfoPrefab; // x20
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *overRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object_19257936; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct UnityEngine_GameObject_array *overObjectList; // x21
  UnityEngine_GameObject_o *v23; // x20
  struct UnityEngine_GameObject_array *v24; // x8
  UnityEngine_GameObject_o *v25; // x0
  struct System_Boolean_array *isAlreadyOverKill; // x8
  struct System_Single_array *timeStartOverKill; // x8
  AssetData_o *AssetStorage; // x0
  AssetData_o *v29; // x20
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  struct UnityEngine_GameObject_array *v31; // x21
  UnityEngine_GameObject_o *v32; // x22
  UnityEngine_Transform_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x22
  struct UnityEngine_GameObject_array *v35; // x8
  UnityEngine_GameObject_o *v36; // x0
  struct System_Boolean_array *v37; // x8
  struct System_Single_array *v38; // x8
  struct UnityEngine_GameObject_o *v39; // x0
  UnityEngine_Object_o *fieldParam; // x20
  struct BattleData_o *data; // x8
  struct BattleFieldParamComponent_o *v42; // x0

  if ( (byte_40F7331 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, inperf);
    sub_B16FFC(&AssetManager_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_18130, v11);
    sub_B16FFC(&StringLiteral_2743, v12);
    sub_B16FFC(&StringLiteral_18137, v13);
    sub_B16FFC(&StringLiteral_18187, v14);
    byte_40F7331 = 1;
  }
  this->fields.perf = inperf;
  sub_B16F98(&this->fields.perf, inperf);
  this->fields.data = indata;
  sub_B16F98(&this->fields.data, indata);
  this->fields.logic = inlogic;
  sub_B16F98(&this->fields.logic, inlogic);
  playerAttackInfoPrefab = (UnityEngine_Object_o *)this->fields.playerAttackInfoPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(playerAttackInfoPrefab, 0LL, 0LL) )
  {
    v16 = this->fields.playerAttackInfoPrefab;
    if ( !v16 )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive(v16, 0, 0LL);
  }
  overRoot = this->fields.overRoot;
  if ( !overRoot
    || (transform = UnityEngine_GameObject__get_transform(overRoot, 0LL),
        Object_19257936 = BaseMonoBehaviour__createObject_19257936(
                            (BaseMonoBehaviour_o *)this,
                            (System_String_o *)StringLiteral_18187,
                            transform,
                            0LL,
                            0LL),
        (overObjectList = this->fields.overObjectList) == 0LL) )
  {
LABEL_45:
    sub_B170D4();
  }
  v23 = Object_19257936;
  if ( Object_19257936 )
  {
    Object_19257936 = (UnityEngine_GameObject_o *)sub_B170BC(
                                                    Object_19257936,
                                                    overObjectList->obj.klass->_1.element_class);
    if ( !Object_19257936 )
      goto LABEL_47;
  }
  if ( !overObjectList->max_length )
    goto LABEL_46;
  overObjectList->m_Items[0] = v23;
  sub_B16F98(overObjectList->m_Items, v23);
  v24 = this->fields.overObjectList;
  if ( !v24 )
    goto LABEL_45;
  if ( !v24->max_length )
    goto LABEL_46;
  v25 = v24->m_Items[0];
  if ( !v25 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v25, 0, 0LL);
  isAlreadyOverKill = this->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_45;
  if ( !isAlreadyOverKill->max_length )
    goto LABEL_46;
  isAlreadyOverKill->m_Items[4] = 0;
  timeStartOverKill = this->fields.timeStartOverKill;
  if ( !timeStartOverKill )
    goto LABEL_45;
  if ( !timeStartOverKill->max_length )
  {
LABEL_46:
    sub_B17100(Object_19257936, v20, v21);
    sub_B170A0();
  }
  timeStartOverKill->m_Items[1] = 0.0;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2743, 0LL);
  if ( !AssetStorage )
    goto LABEL_45;
  v29 = AssetStorage;
  Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                     AssetStorage,
                                     (System_String_o *)StringLiteral_18130,
                                     (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( !this->fields.overRoot )
    goto LABEL_45;
  v31 = this->fields.overObjectList;
  v32 = (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
  v33 = UnityEngine_GameObject__get_transform(this->fields.overRoot, 0LL);
  Object_19257936 = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v32, v33, 0LL, 0LL);
  if ( !v31 )
    goto LABEL_45;
  v34 = Object_19257936;
  if ( Object_19257936 )
  {
    Object_19257936 = (UnityEngine_GameObject_o *)sub_B170BC(Object_19257936, v31->obj.klass->_1.element_class);
    if ( !Object_19257936 )
    {
LABEL_47:
      sub_B170F4();
      sub_B170A0();
    }
  }
  if ( v31->max_length <= 1 )
    goto LABEL_46;
  v31->m_Items[1] = v34;
  sub_B16F98(&v31->m_Items[1], v34);
  v35 = this->fields.overObjectList;
  if ( !v35 )
    goto LABEL_45;
  if ( v35->max_length <= 1 )
    goto LABEL_46;
  v36 = v35->m_Items[1];
  if ( !v36 )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive(v36, 0, 0LL);
  v37 = this->fields.isAlreadyOverKill;
  if ( !v37 )
    goto LABEL_45;
  if ( v37->max_length <= 1 )
    goto LABEL_46;
  v37->m_Items[5] = 0;
  v38 = this->fields.timeStartOverKill;
  if ( !v38 )
    goto LABEL_45;
  if ( v38->max_length <= 1 )
    goto LABEL_46;
  v38->m_Items[2] = 0.0;
  v39 = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                             v29,
                                             (System_String_o *)StringLiteral_18137,
                                             (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  this->fields.skillSkipPrefab = v39;
  sub_B16F98(&this->fields.skillSkipPrefab, v39);
  GameObjectExtensions__SafeSetParent_27425996(this->fields.overRoot, this->fields.fsOffsetRoot, 0LL);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldParam, 0LL, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      v42 = this->fields.fieldParam;
      if ( v42 )
      {
        ((void (__fastcall *)(struct BattleFieldParamComponent_o *, struct BattleFieldEnvironmentData_o *, void *))v42->klass->vtable._4_SetData.method)(
          v42,
          data->fields._FieldEnvData_k__BackingField,
          v42->klass[1]._1.image);
        return;
      }
    }
    goto LABEL_45;
  }
}


void __fastcall BattleInformationComponent__InitializeEachWave(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  struct BaseBattleInfoPosData_o *BattleInfoPosData; // x0
  UnityEngine_Object_o *fieldParam; // x20
  const MethodInfo *v5; // x1
  BattleFieldParamComponent_o *v6; // x0

  if ( (byte_40F7332 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7332 = 1;
  }
  BattleInfoPosData = BattleInformationComponent__MakeBattleInfoPosData(this, method);
  this->fields.infoPosData = BattleInfoPosData;
  sub_B16F98(&this->fields.infoPosData, BattleInfoPosData);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldParam, 0LL, 0LL) )
  {
    v6 = this->fields.fieldParam;
    if ( !v6 )
      sub_B170D4();
    BattleFieldParamComponent__UpdateView(v6, v5);
  }
}


BaseBattleInfoPosData_o *__fastcall BattleInformationComponent__MakeBattleInfoPosData(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleData_o *data; // x0
  int32_t RaidType; // w0
  int32_t v7; // w20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  BattleData_o *v12; // x0
  StageEntity_o *StageEntity; // x0
  PosCountSpBattleInfoPosData_o *v14; // x20

  if ( (byte_40F7333 & 1) == 0 )
  {
    sub_B16FFC(&NormalRaidTypeBossBattleInfoPosData_TypeInfo, method);
    sub_B16FFC(&PosCountNormalBattleInfoPosData_TypeInfo, v3);
    sub_B16FFC(&PosCountSpBattleInfoPosData_TypeInfo, v4);
    byte_40F7333 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  RaidType = BattleData__GetRaidType(data, 0LL);
  if ( !this->fields.data )
    goto LABEL_15;
  v7 = RaidType;
  if ( !BattleData__get_IsEnemyPosCountNormal(this->fields.data, 0LL) )
  {
    v14 = (PosCountSpBattleInfoPosData_o *)sub_B170CC(PosCountSpBattleInfoPosData_TypeInfo, v8, v9, v10, v11);
    PosCountSpBattleInfoPosData___ctor(v14, 0LL);
    if ( !v14 )
      goto LABEL_15;
    goto LABEL_13;
  }
  if ( !v7 )
    goto LABEL_10;
  v12 = this->fields.data;
  if ( !v12 || (StageEntity = BattleData__getStageEntity(v12, 0LL)) == 0LL )
LABEL_15:
    sub_B170D4();
  if ( !StageEntity__IsForceSetNormalEnemyStatusUI(StageEntity, 0LL) )
  {
    v14 = (PosCountSpBattleInfoPosData_o *)sub_B170CC(NormalRaidTypeBossBattleInfoPosData_TypeInfo, v8, v9, v10, v11);
    NormalRaidTypeBossBattleInfoPosData___ctor((NormalRaidTypeBossBattleInfoPosData_o *)v14, 0LL);
    if ( !v14 )
      goto LABEL_15;
    goto LABEL_13;
  }
LABEL_10:
  v14 = (PosCountSpBattleInfoPosData_o *)sub_B170CC(PosCountNormalBattleInfoPosData_TypeInfo, v8, v9, v10, v11);
  PosCountNormalBattleInfoPosData___ctor((PosCountNormalBattleInfoPosData_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_15;
LABEL_13:
  ((void (__fastcall *)(PosCountSpBattleInfoPosData_o *, struct BattlePerformance_o *, void *))v14->klass->vtable._6_Init.method)(
    v14,
    this->fields.perf,
    v14->klass[1]._1.image);
  return (BaseBattleInfoPosData_o *)v14;
}


void __fastcall BattleInformationComponent__SerializeFieldNotNullCheck(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleInformationComponent__ShowActionMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  bool isPlayerID; // w0
  const MethodInfo *v7; // x5
  struct UnityEngine_GameObject_o *v8; // x1

  if ( !actionData || (data = this->fields.data) == 0LL )
    sub_B170D4();
  isPlayerID = BattleData__isPlayerID(data, actionData->fields.actorId, 0LL);
  v8 = BattleInformationComponent__showSkillName(
         this,
         isPlayerID,
         actionData->fields.skillMessage,
         0,
         actionData->fields.skillInfo,
         v7);
  this->fields.commonMessageObject = v8;
  sub_B16F98(&this->fields.commonMessageObject, v8);
}


void __fastcall BattleInformationComponent__ShowBattleMessage(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        int32_t messageType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BattleInformationComponent_o *v8; // x0
  const MethodInfo *v9; // x4
  UnityEngine_GameObject_o *BattleMessageObject; // x20
  struct System_Collections_Generic_List_GameObject__o *motionMessageObjList; // x0

  if ( (byte_40F7344 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, messages);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F7344 = 1;
  }
  BattleInformationComponent__DestroyDisplayingMessage(this, (const MethodInfo *)messages);
  if ( !messages )
    goto LABEL_13;
  if ( *(_QWORD *)&messages->max_length )
  {
    BattleMessageObject = BattleInformationComponent__CreateBattleMessageObject(
                            v8,
                            messages,
                            messageType,
                            this->fields.skillInfoRoot,
                            v9);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)BattleMessageObject, 0LL, 0LL) )
    {
      if ( BattleMessageObject )
      {
        UnityEngine_GameObject__SetActive(BattleMessageObject, 1, 0LL);
        motionMessageObjList = this->fields.motionMessageObjList;
        if ( motionMessageObjList )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)motionMessageObjList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)BattleMessageObject,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          return;
        }
      }
LABEL_13:
      sub_B170D4();
    }
  }
}


void __fastcall BattleInformationComponent__SwitchPopupFullScreen(
        BattleInformationComponent_o *this,
        bool isFullScreen,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *fsOffsetRoot; // x1

  if ( isFullScreen )
    fsOffsetRoot = this->fields.fsOffsetRoot;
  else
    fsOffsetRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SafeSetParent_27425996(this->fields.overRoot, fsOffsetRoot, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__get_CommonMessageObject(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.commonMessageObject;
}


System_Collections_Generic_List_GameObject__o *__fastcall BattleInformationComponent__get_MotionMessageObjList(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.motionMessageObjList;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInformationComponent__hideOverBase(
        BattleInformationComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Boolean_array *isAlreadyOverKill; // x8
  struct UnityEngine_GameObject_array *overObjectList; // x8
  UnityEngine_GameObject_o *v10; // x0
  struct UnityEngine_GameObject_array *v11; // x8
  UnityEngine_Behaviour_o *v12; // x21
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  struct System_String_array *overLabel; // x8
  System_String_o *v16; // x0
  struct System_String_array *v17; // x8
  System_String_o *v18; // x0
  struct System_Boolean_array *v19; // x8

  v4 = this;
  if ( (byte_40F7342 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, *(_QWORD *)&type);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    this = (BattleInformationComponent_o *)sub_B16FFC(&StringLiteral_21239, v7);
    byte_40F7342 = 1;
  }
  isAlreadyOverKill = v4->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_32;
  if ( isAlreadyOverKill->max_length <= type )
    goto LABEL_33;
  if ( !isAlreadyOverKill->m_Items[type + 4] )
    return;
  overObjectList = v4->fields.overObjectList;
  if ( !overObjectList )
    goto LABEL_32;
  if ( overObjectList->max_length <= type )
    goto LABEL_33;
  v10 = overObjectList->m_Items[type];
  if ( !v10 )
    goto LABEL_32;
  this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           v10,
                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v11 = v4->fields.overObjectList;
  if ( !v11 )
    goto LABEL_32;
  if ( v11->max_length <= type )
    goto LABEL_33;
  v12 = (UnityEngine_Behaviour_o *)this;
  v13 = v11->m_Items[type];
  if ( !v13 )
    goto LABEL_32;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v13,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL) )
  {
    if ( v12 )
    {
      UnityEngine_Behaviour__set_enabled(v12, 0, 0LL);
      UnityEngine_Behaviour__set_enabled(v12, 1, 0LL);
      overLabel = v4->fields.overLabel;
      if ( overLabel )
      {
        if ( overLabel->max_length <= type )
          goto LABEL_33;
        v16 = System_String__Concat_43743732(overLabel->m_Items[type], (System_String_o *)StringLiteral_21239, 0LL);
        this = (BattleInformationComponent_o *)SimpleAnimation__Play_16380456((SimpleAnimation_o *)v12, v16, 0LL);
        goto LABEL_28;
      }
    }
LABEL_32:
    sub_B170D4();
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_28;
  if ( !Component_srcLineSprite )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0, 0LL);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 1, 0LL);
  v17 = v4->fields.overLabel;
  if ( !v17 )
    goto LABEL_32;
  if ( v17->max_length <= type )
    goto LABEL_33;
  v18 = System_String__Concat_43743732(v17->m_Items[type], (System_String_o *)StringLiteral_21239, 0LL);
  this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_49744236(
                                           (UnityEngine_Animation_o *)Component_srcLineSprite,
                                           v18,
                                           0LL);
LABEL_28:
  v19 = v4->fields.isAlreadyOverKill;
  if ( !v19 )
    goto LABEL_32;
  if ( v19->max_length <= type )
  {
LABEL_33:
    sub_B17100(this, *(_QWORD *)&type, method);
    sub_B170A0();
  }
  v19->m_Items[type + 4] = 0;
}


void __fastcall BattleInformationComponent__hideOverGaugeMessage(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleInformationComponent__hideOverBase(this, 1, v2);
}


void __fastcall BattleInformationComponent__hideOverKillMessage(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleInformationComponent__hideOverBase(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInformationComponent__shiftOverMessage(
        BattleInformationComponent_o *this,
        int32_t type,
        int32_t zureIndex,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *overObjectList; // x8
  BattleInformationComponent_o *v5; // x20
  UnityEngine_GameObject_o *v6; // x0
  struct UnityEngine_Vector3_array *showPositions; // x8

  overObjectList = this->fields.overObjectList;
  if ( !overObjectList )
    goto LABEL_8;
  if ( overObjectList->max_length <= type )
    goto LABEL_9;
  v5 = this;
  v6 = overObjectList->m_Items[type];
  if ( !v6
    || (this = (BattleInformationComponent_o *)UnityEngine_GameObject__get_transform(v6, 0LL),
        (showPositions = v5->fields.showPositions) == 0LL) )
  {
LABEL_8:
    sub_B170D4();
  }
  if ( showPositions->max_length <= zureIndex )
  {
LABEL_9:
    sub_B17100(this, *(_QWORD *)&type, *(_QWORD *)&zureIndex);
    sub_B170A0();
  }
  if ( !this )
    goto LABEL_8;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)this,
    *(UnityEngine_Vector3_o *)&showPositions->m_Items[zureIndex].fields.y,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleInformationComponent__showBoostSkillName(
        BattleInformationComponent_o *this,
        int32_t imageId,
        System_String_o *message,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x21
  BattleInfoMessageComponent_o *Component_srcLineSprite; // x0
  const MethodInfo *v15; // x2
  BattleInfoMessageComponent_o *v16; // x22
  const MethodInfo *v17; // x3
  UnityEngine_GameObject_o *result; // x0
  BattleInformationComponent_o *v19; // x0
  BattleActionData_o *v20; // x1
  const MethodInfo *v21; // x2

  if ( (byte_40F733D & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, *(_QWORD *)&imageId);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_18169, v9);
    byte_40F733D = 1;
  }
  if ( !message || message->fields.m_stringLength < 1 )
    return 0LL;
  v10 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_18169, 0LL);
  v11 = (UnityEngine_GameObject_o *)v10;
  if ( !v10 || (UnityEngine_GameObject_c *)v10->klass == UnityEngine_GameObject_TypeInfo )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v11, transform, 0LL, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object, 0LL, 0LL) )
    {
      if ( !Object
        || (Component_srcLineSprite = (BattleInfoMessageComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        Object,
                                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___)) == 0LL )
      {
        sub_B170D4();
      }
      v16 = Component_srcLineSprite;
      BattleInfoMessageComponent__setText(Component_srcLineSprite, message, v15);
      BattleInfoMessageComponent__setItemSprite(v16, imageId, 0, v17);
      UnityEngine_GameObject__SetActive(Object, 1, 0LL);
    }
    return Object;
  }
  v19 = (BattleInformationComponent_o *)sub_B173C8(v10);
  BattleInformationComponent__showSpecialName(v19, v20, v21);
  return result;
}


void __fastcall BattleInformationComponent__showCommonMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  BattleData_o *data; // x0
  int32_t Type; // w0
  int32_t v16; // w23
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v18; // x21
  srcLineSprite_o *Component_srcLineSprite; // x0
  BattleInfoMessageComponent_o *v20; // x22
  _BOOL8 isPlayerID; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  const MethodInfo *v24; // x3
  __int64 actionIndex; // x8
  struct System_String_array *attackCount; // x9
  System_String_o *v27; // x1
  System_String_o *motionMessage; // x1
  struct BattleSkillInfoData_o *skillInfo; // x8
  int32_t v30; // w9
  int32_t skilllv; // w21
  const MethodInfo *v32; // x3
  struct BattleSkillInfoData_o *v33; // x8
  UnityEngine_GameObject_o *v34; // x0
  System_String_o *v35; // x24
  Il2CppObject *v36; // x0
  System_String_o **v37; // x8
  struct BattlePerformance_o *perf; // x8
  BattlePerformanceCommandCard_o *commandPerf; // x0
  UnityEngine_Object_o *BattleCommandCardObject; // x23
  BattleData_o *v41; // x0
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v43; // x3
  BattleCommandComponent_o *v44; // x0
  BattleData_o *v45; // x0
  bool v46; // w0
  const MethodInfo *v47; // x5
  System_String_o *skillMessage; // x2
  BattleSkillInfoData_o *v49; // x4
  bool v50; // w1
  BattleInformationComponent_o *v51; // x0
  int32_t v52; // w3
  BattleData_o *v53; // x0
  bool v54; // w0
  int v55; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F733F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, actionData);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v5);
    sub_B16FFC(&int_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_2883, v8);
    sub_B16FFC(&StringLiteral_10954, v9);
    sub_B16FFC(&StringLiteral_2080, v10);
    sub_B16FFC(&StringLiteral_1, v11);
    sub_B16FFC(&StringLiteral_6293, v12);
    byte_40F733F = 1;
  }
  if ( !actionData )
    goto LABEL_62;
  if ( actionData->fields.IsDontUpdateMessage )
    return;
  BattleInformationComponent__DestroyDisplayingMessage(this, (const MethodInfo *)actionData);
  if ( BattleCommand__isShowCommandAction(actionData->fields.type, 0LL) )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_62;
    if ( BattleData__isPlayerID(data, actionData->fields.actorId, 0LL) )
    {
      Type = BattleCommand__getType(actionData->fields.type, 0LL);
      if ( !this->fields.data )
        goto LABEL_62;
      v16 = Type;
      if ( !BattleData__isPlayerID(this->fields.data, actionData->fields.actorId, 0LL) )
        goto LABEL_62;
      Object = BaseMonoBehaviour__createObject(
                 (BaseMonoBehaviour_o *)this,
                 this->fields.playerAttackInfoPrefab,
                 this->fields.attackMessageRoot,
                 0LL,
                 0LL);
      if ( !Object )
        goto LABEL_62;
      v18 = Object;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  Object,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
      if ( !this->fields.data )
        goto LABEL_62;
      v20 = (BattleInfoMessageComponent_o *)Component_srcLineSprite;
      isPlayerID = BattleData__isPlayerID(this->fields.data, actionData->fields.actorId, 0LL);
      if ( !isPlayerID )
      {
LABEL_48:
        UnityEngine_GameObject__SetActive(v18, 1, 0LL);
        goto LABEL_54;
      }
      actionIndex = actionData->fields.actionIndex;
      attackCount = this->fields.attackCount;
      if ( (int)actionIndex >= 3 )
      {
        if ( !attackCount )
          goto LABEL_62;
        if ( attackCount->max_length > 3 )
        {
          v35 = attackCount->m_Items[3];
          v55 = actionIndex + 1;
          v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
          v27 = System_String__Format(v35, v36, 0LL);
          goto LABEL_34;
        }
      }
      else
      {
        if ( !attackCount )
          goto LABEL_62;
        if ( (unsigned int)actionIndex < attackCount->max_length )
        {
          v27 = attackCount->m_Items[actionIndex];
LABEL_34:
          if ( (unsigned int)(v16 - 1) > 3 )
          {
            v37 = (System_String_o **)&StringLiteral_1;
            if ( !v20 )
              goto LABEL_62;
          }
          else
          {
            v37 = (System_String_o **)*(&off_3D448E0 + v16 - 1);
            if ( !v20 )
              goto LABEL_62;
          }
          BattleInfoMessageComponent__setText_19741168(v20, v27, *v37, v24);
          perf = this->fields.perf;
          if ( perf )
          {
            commandPerf = perf->fields.commandPerf;
            if ( commandPerf )
            {
              BattleCommandCardObject = (UnityEngine_Object_o *)BattlePerformanceCommandCard__getBattleCommandCardObject(
                                                                  commandPerf,
                                                                  actionData->fields.actionIndex,
                                                                  0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(BattleCommandCardObject, 0LL, 0LL) )
                goto LABEL_48;
              v41 = this->fields.data;
              if ( v41 )
              {
                ServantData = BattleData__getServantData(v41, actionData->fields.targetId, 0LL);
                BattleInfoMessageComponent__setCommandObject(
                  v20,
                  (UnityEngine_GameObject_o *)BattleCommandCardObject,
                  ServantData,
                  v43);
                if ( BattleCommandCardObject )
                {
                  v44 = (BattleCommandComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)BattleCommandCardObject,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
                  if ( v44 )
                  {
                    BattleCommandComponent__hideOutCard(v44, 0LL);
                    goto LABEL_48;
                  }
                }
              }
            }
          }
LABEL_62:
          sub_B170D4();
        }
      }
      sub_B17100(isPlayerID, v22, v23);
      sub_B170A0();
    }
  }
  motionMessage = actionData->fields.motionMessage;
  if ( motionMessage )
  {
    BattleInformationComponent__showMotionMessage(
      this,
      motionMessage,
      actionData->fields.actorId,
      actionData->fields._MessageType_k__BackingField,
      v13);
    goto LABEL_19;
  }
  v18 = 0LL;
  if ( BattleActionData__IsGimmick(actionData, 0LL) )
    goto LABEL_54;
  if ( BattleActionData__isSkill(actionData, 0LL) )
  {
    skillInfo = actionData->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_62;
    v30 = skillInfo->fields.type;
    if ( v30 == 11 || v30 == 1 )
      skilllv = skillInfo->fields.skilllv;
    else
      skilllv = 0;
    v45 = this->fields.data;
    if ( !v45 )
      goto LABEL_62;
    v46 = BattleData__isPlayerID(v45, actionData->fields.actorId, 0LL);
    skillMessage = actionData->fields.skillMessage;
    v49 = actionData->fields.skillInfo;
    v50 = v46;
    v51 = this;
    v52 = skilllv;
    goto LABEL_52;
  }
  v18 = 0LL;
  if ( !BattleActionData__isBoostSkill(actionData, 0LL) )
    goto LABEL_54;
  if ( actionData->fields.noOperation )
  {
LABEL_19:
    v18 = 0LL;
    goto LABEL_54;
  }
  v33 = actionData->fields.skillInfo;
  if ( !v33 )
    goto LABEL_62;
  if ( v33->fields.itemImageId == -1 )
  {
    v53 = this->fields.data;
    if ( !v53 )
      goto LABEL_62;
    v54 = BattleData__isPlayerID(v53, actionData->fields.actorId, 0LL);
    skillMessage = actionData->fields.skillMessage;
    v49 = actionData->fields.skillInfo;
    v50 = v54;
    v51 = this;
    v52 = 0;
LABEL_52:
    v34 = BattleInformationComponent__showSkillName(v51, v50, skillMessage, v52, v49, v47);
    goto LABEL_53;
  }
  v34 = BattleInformationComponent__showBoostSkillName(
          this,
          actionData->fields.imageId,
          actionData->fields.skillMessage,
          v32);
LABEL_53:
  v18 = v34;
LABEL_54:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL) )
  {
    this->fields.commonMessageObject = v18;
    sub_B16F98(&this->fields.commonMessageObject, v18);
  }
}


void __fastcall BattleInformationComponent__showCommonMessage_19755312(
        BattleInformationComponent_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleInformationComponent__showMotionMessage(
        BattleInformationComponent_o *this,
        System_String_o *motionMessage,
        int32_t actorId,
        int32_t messageType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *motionMessageObjList; // x0
  Il2CppObject *current; // x23
  struct System_Collections_Generic_List_GameObject__o *v25; // x0
  bool HasRubyFormat; // w24
  __int64 v27; // x2
  System_Char_array *AssetStorage; // x0
  __int64 v29; // x2
  System_Char_array *v30; // x1
  System_String_array *v31; // x0
  const MethodInfo *v32; // x3
  System_String_array *v33; // x23
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v35; // x21
  BattleInfoMessageComponent_o *Component_srcLineSprite; // x0
  const MethodInfo *v37; // x2
  BattleData_o *data; // x0
  bool isPlayerID; // w0
  const MethodInfo *v40; // x4
  UnityEngine_GameObject_o *DefaultSkillMessageObject; // x0
  BattlePerformance_o *perf; // x0
  BattleEffectUtility_c *v43; // x0
  System_String_o *v44; // x0
  System_String_o *v45; // x20
  AssetData_o *v46; // x20
  System_String_o *v47; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v49; // x0
  struct System_Collections_Generic_List_GameObject__o *v50; // x0
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F7343 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, motionMessage);
    sub_B16FFC(&AssetManager_TypeInfo, v9);
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v10);
    sub_B16FFC(&char___TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v15);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v19);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v20);
    sub_B16FFC(&StringLiteral_16608, v21);
    sub_B16FFC(&StringLiteral_2747, v22);
    byte_40F7343 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  if ( !motionMessage )
    goto LABEL_49;
  if ( motionMessage->fields.m_stringLength < 1 )
    return;
  motionMessageObjList = this->fields.motionMessageObjList;
  if ( !motionMessageObjList )
    goto LABEL_49;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v51,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)motionMessageObjList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v52 = v51;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v52,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v52.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v25 = this->fields.motionMessageObjList;
  if ( !v25 )
    goto LABEL_49;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v25,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  HasRubyFormat = ScriptLineMessage__HasRubyFormat(motionMessage, 0LL);
  AssetStorage = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v27);
  if ( !AssetStorage )
    goto LABEL_49;
  v30 = AssetStorage;
  if ( !AssetStorage->max_length )
    goto LABEL_50;
  AssetStorage->m_Items[2] = 58;
  v31 = System_String__Split(motionMessage, AssetStorage, 0LL);
  if ( HasRubyFormat )
    goto LABEL_18;
  v33 = v31;
  if ( !v31 )
    goto LABEL_49;
  if ( (int)v31->max_length < 2 )
  {
LABEL_18:
    if ( messageType == 2 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_49;
      isPlayerID = BattleData__isPlayerID(data, actorId, 0LL);
      DefaultSkillMessageObject = BattleInformationComponent__CreateDefaultSkillMessageObject(
                                    this,
                                    isPlayerID,
                                    motionMessage,
                                    0,
                                    v40);
      if ( !DefaultSkillMessageObject )
        goto LABEL_49;
    }
    else
    {
      if ( messageType == 1 )
      {
        Object = BaseMonoBehaviour__createObject(
                   (BaseMonoBehaviour_o *)this,
                   this->fields.commonLabelPrefab,
                   this->fields.commonMessageRoot,
                   0LL,
                   0LL);
        if ( Object )
        {
          v35 = Object;
          Component_srcLineSprite = (BattleInfoMessageComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      Object,
                                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
          if ( Component_srcLineSprite )
          {
            BattleInfoMessageComponent__setText(Component_srcLineSprite, motionMessage, v37);
LABEL_45:
            UnityEngine_GameObject__SetActive(v35, 1, 0LL);
            goto LABEL_46;
          }
        }
LABEL_49:
        sub_B170D4();
      }
      DefaultSkillMessageObject = BattleInformationComponent__CreateDefaultBattleMessageObject(
                                    this,
                                    motionMessage,
                                    this->fields.skillInfoRoot,
                                    1.5,
                                    v32);
      if ( !DefaultSkillMessageObject )
        goto LABEL_49;
    }
    v35 = DefaultSkillMessageObject;
    goto LABEL_45;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_49;
  BattlePerformance__setStateString(perf, actorId, motionMessage, 0LL);
  v43 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v43 = BattleEffectUtility_TypeInfo;
  }
  v44 = System_Int32__ToString((unsigned int)v43->static_fields + 24, 0LL);
  v45 = System_String__Concat_43743732((System_String_o *)StringLiteral_2747, v44, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = (System_Char_array *)AssetManager__getAssetStorage(v45, 0LL);
  if ( !v33->max_length )
  {
LABEL_50:
    sub_B17100(AssetStorage, v30, v29);
    sub_B170A0();
  }
  v46 = (AssetData_o *)AssetStorage;
  v47 = System_String__Concat_43743732((System_String_o *)StringLiteral_16608, v33->m_Items[0], 0LL);
  if ( !v46 )
    goto LABEL_49;
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 v46,
                                                                 v47,
                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v35 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
  {
    v49 = BaseMonoBehaviour__createObject(
            (BaseMonoBehaviour_o *)this,
            Object_WarBoardWaitTimeSetting,
            this->fields.commonMessageRoot,
            0LL,
            0LL);
    if ( !v49 )
      goto LABEL_49;
    v35 = v49;
    AssetStorage = (System_Char_array *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v49,
                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( v33->max_length > 1 )
    {
      if ( !AssetStorage )
        goto LABEL_49;
      EffectComponent__setLabel((EffectComponent_o *)AssetStorage, v33->m_Items[1], 0LL);
      goto LABEL_45;
    }
    goto LABEL_50;
  }
LABEL_46:
  v50 = this->fields.motionMessageObjList;
  if ( !v50 )
    goto LABEL_49;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v50,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInformationComponent__showNoblePhantasmInfo(
        BattleInformationComponent_o *this,
        int32_t tresureDeviceId,
        int32_t treasureDeviceLevel,
        int32_t treasureDevicePer,
        bool isHideInfo,
        System_String_array *overrideTd,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v31; // x26
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v33; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *NodeFromName; // x0
  WebViewObject_o *Component_WebViewObject; // x23
  UnityEngine_Transform_o *v37; // x0
  UnityEngine_Component_o *v38; // x0
  WebViewObject_o *v39; // x28
  UnityEngine_Transform_o *v40; // x0
  UnityEngine_Component_o *v41; // x0
  WebViewObject_o *v42; // x27
  UnityEngine_Transform_o *v43; // x0
  UnityEngine_Component_o *v44; // x0
  WebViewObject_o *v45; // x24
  UnityEngine_Transform_o *v46; // x0
  UnityEngine_Component_o *v47; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v49; // x25
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  System_String_o *age; // x26
  il2cpp_array_size_t max_length; // w8
  System_String_o *v55; // x1
  UnityEngine_GameObject_o *v56; // x0
  System_String_o *v57; // x0
  System_String_o *v58; // x1
  System_String_o *v59; // x22
  Il2CppObject *v60; // x0
  System_String_o *v61; // x0
  int v62; // w8
  SimpleAnimation_o *Component_srcLineSprite; // x20
  UnityEngine_Animation_o *v64; // x19
  BattleInformationComponent_c *v65; // x0
  System_String_o *NobleInfoAnimPrefix; // x19
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  BattleInformationComponent_c *v69; // x0
  System_String_o *v70; // x20
  System_String_o *v71; // x0
  System_String_o *v72; // x0
  int v73; // [xsp+4h] [xbp-5Ch] BYREF
  int v74; // [xsp+8h] [xbp-58h] BYREF
  int32_t v75; // [xsp+Ch] [xbp-54h] BYREF

  v75 = treasureDeviceLevel;
  if ( (byte_40F7335 & 1) == 0 )
  {
    sub_B16FFC(&BattleInformationComponent_TypeInfo, *(_QWORD *)&tresureDeviceId);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UILabel___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v14);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v15);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v16);
    sub_B16FFC(&int_TypeInfo, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&StringLiteral_9276, v21);
    sub_B16FFC(&StringLiteral_21777, v22);
    sub_B16FFC(&StringLiteral_10601, v23);
    sub_B16FFC(&StringLiteral_8486, v24);
    sub_B16FFC(&StringLiteral_1, v25);
    sub_B16FFC(&StringLiteral_9675, v26);
    sub_B16FFC(&StringLiteral_20276, v27);
    byte_40F7335 = 1;
  }
  v74 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_57;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             tresureDeviceId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( Entity )
  {
    v31 = Entity;
    Object = BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)this,
               this->fields.nobleInfoPrefab,
               this->fields.nobleInfoRoot,
               0LL,
               0LL);
    if ( !Object )
      goto LABEL_57;
    v33 = Object;
    transform = UnityEngine_GameObject__get_transform(Object, 0LL);
    NodeFromName = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(
                                                transform,
                                                (System_String_o *)StringLiteral_20276,
                                                0,
                                                0LL);
    if ( !NodeFromName )
      goto LABEL_57;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                NodeFromName,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v37 = UnityEngine_GameObject__get_transform(v33, 0LL);
    v38 = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(
                                       v37,
                                       (System_String_o *)StringLiteral_21777,
                                       0,
                                       0LL);
    if ( !v38 )
      goto LABEL_57;
    v39 = UnityEngine_Component__GetComponent_WebViewObject_(
            v38,
            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v40 = UnityEngine_GameObject__get_transform(v33, 0LL);
    v41 = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(
                                       v40,
                                       (System_String_o *)StringLiteral_8486,
                                       0,
                                       0LL);
    if ( !v41 )
      goto LABEL_57;
    v42 = UnityEngine_Component__GetComponent_WebViewObject_(
            v41,
            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v43 = UnityEngine_GameObject__get_transform(v33, 0LL);
    v44 = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(
                                       v43,
                                       (System_String_o *)StringLiteral_10601,
                                       0,
                                       0LL);
    if ( !v44 )
      goto LABEL_57;
    v45 = UnityEngine_Component__GetComponent_WebViewObject_(
            v44,
            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v46 = UnityEngine_GameObject__get_transform(v33, 0LL);
    v47 = (UnityEngine_Component_o *)TransformHelper__getNodeFromName(
                                       v46,
                                       (System_String_o *)StringLiteral_9675,
                                       0,
                                       0LL);
    if ( !v47 )
      goto LABEL_57;
    gameObject = UnityEngine_Component__get_gameObject(v47, 0LL);
    if ( !v39 )
      goto LABEL_57;
    v49 = gameObject;
    UILabel__set_text((UILabel_o *)v39, v31->fields.name, 0LL);
    age = v31->fields.age;
    if ( overrideTd )
    {
      max_length = overrideTd->max_length;
      if ( !max_length )
        goto LABEL_58;
      if ( overrideTd->m_Items[0] )
        age = overrideTd->m_Items[0];
      if ( max_length == 1 )
      {
LABEL_58:
        sub_B17100(v50, v51, v52);
        sub_B170A0();
      }
      v55 = overrideTd->m_Items[1];
      if ( v55 )
        UILabel__set_text((UILabel_o *)v39, v55, 0LL);
    }
    if ( System_String__IsNullOrEmpty(age, 0LL) )
    {
      v56 = UnityEngine_GameObject__get_gameObject(v33, 0LL);
      if ( !v56 )
        goto LABEL_57;
      UnityEngine_GameObject__SetActive(v56, 0, 0LL);
    }
    if ( !Component_WebViewObject )
      goto LABEL_57;
    UILabel__set_text((UILabel_o *)Component_WebViewObject, age, 0LL);
    v57 = System_Int32__ToString((int32_t)&v75, 0LL);
    if ( !v42 )
      goto LABEL_57;
    if ( v57 )
      v58 = v57;
    else
      v58 = (System_String_o *)StringLiteral_1;
    UILabel__set_text((UILabel_o *)v42, v58, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v59 = LocalizationManager__Get((System_String_o *)StringLiteral_9276, 0LL);
    v73 = 100 * (treasureDevicePer / 100);
    v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73);
    v61 = System_String__Format(v59, v60, 0LL);
    if ( !v45 || (UILabel__set_text((UILabel_o *)v45, v61, 0LL), !v49) )
LABEL_57:
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v49, !isHideInfo, 0LL);
    if ( treasureDevicePer / 100 >= 5 )
      v62 = 5;
    else
      v62 = treasureDevicePer / 100;
    if ( treasureDevicePer < 100 || isHideInfo )
      v62 = 1;
    v74 = v62;
    Component_srcLineSprite = (SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v33,
                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    v64 = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v33,
                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      v65 = BattleInformationComponent_TypeInfo;
      if ( (BYTE3(BattleInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v65 = BattleInformationComponent_TypeInfo;
      }
      NobleInfoAnimPrefix = v65->static_fields->NobleInfoAnimPrefix;
      v67 = System_Int32__ToString((int32_t)&v74, 0LL);
      v68 = System_String__Concat_43743732(NobleInfoAnimPrefix, v67, 0LL);
      if ( Component_srcLineSprite )
      {
        SimpleAnimation__Play_16380456(Component_srcLineSprite, v68, 0LL);
        return;
      }
      goto LABEL_57;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v64, 0LL, 0LL) )
    {
      v69 = BattleInformationComponent_TypeInfo;
      if ( (BYTE3(BattleInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v69 = BattleInformationComponent_TypeInfo;
      }
      v70 = v69->static_fields->NobleInfoAnimPrefix;
      v71 = System_Int32__ToString((int32_t)&v74, 0LL);
      v72 = System_String__Concat_43743732(v70, v71, 0LL);
      if ( !v64 )
        goto LABEL_57;
      UnityEngine_Animation__Play_49744236(v64, v72, 0LL);
    }
  }
}


void __fastcall BattleInformationComponent__showOverGaugeMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Boolean_array *isAlreadyOverKill; // x8

  isAlreadyOverKill = this->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    sub_B170D4();
  if ( !isAlreadyOverKill->max_length )
  {
    sub_B17100(this, actionData, method);
    sub_B170A0();
  }
  if ( isAlreadyOverKill->m_Items[4] )
    BattleInformationComponent__shiftOverMessage(this, 0, 1, v3);
  BattleInformationComponent__showOverMessageBase(this, actionData, 1, v3);
}


void __fastcall BattleInformationComponent__showOverKillMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Boolean_array *isAlreadyOverKill; // x8
  const MethodInfo *v7; // x3

  isAlreadyOverKill = this->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    sub_B170D4();
  if ( isAlreadyOverKill->max_length <= 1 )
  {
    sub_B17100(this, actionData, method);
    sub_B170A0();
  }
  BattleInformationComponent__shiftOverMessage(this, 0, isAlreadyOverKill->m_Items[5], v3);
  BattleInformationComponent__showOverMessageBase(this, actionData, 0, v7);
}


void __fastcall BattleInformationComponent__showOverMessageBase(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        int32_t inOverType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleData_o *data; // x0
  UnityEngine_Object_o *overRoot; // x21
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct BaseBattleInfoPosData_o *infoPosData; // x0
  UnityEngine_GameObject_o *v17; // x21
  float v18; // s0
  struct UnityEngine_GameObject_array *overObjectList; // x8
  UnityEngine_GameObject_o *v20; // x0
  struct UnityEngine_GameObject_array *v21; // x8
  UnityEngine_GameObject_o *v22; // x0
  struct UnityEngine_GameObject_array *v23; // x8
  UnityEngine_Behaviour_o *v24; // x22
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Object_o *v26; // x21
  UnityEngine_Behaviour_o *v27; // x0
  struct System_Boolean_array *isAlreadyOverKill; // x8
  float v29; // s0
  struct System_Single_array *v30; // x8
  struct System_String_array *v31; // x8
  System_String_o *v32; // x0
  struct System_String_array *overLabel; // x8
  System_String_o *v34; // x0
  struct System_String_array *v35; // x8
  System_String_o *v36; // x0
  struct System_Boolean_array *v37; // x8
  struct System_Single_array *timeStartOverKill; // x20
  float time; // s0
  struct System_String_array *v40; // x8
  System_String_o *v41; // x0

  if ( (byte_40F7341 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, actionData);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_19685, v9);
    sub_B16FFC(&StringLiteral_18688, v10);
    byte_40F7341 = 1;
  }
  if ( !actionData )
    goto LABEL_78;
  data = this->fields.data;
  if ( !data )
    goto LABEL_78;
  if ( !BattleData__isPlayerID(data, actionData->fields.actorId, 0LL) )
    return;
  overRoot = (UnityEngine_Object_o *)this->fields.overRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(overRoot, 0LL, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
  {
    infoPosData = this->fields.infoPosData;
    if ( !infoPosData )
      goto LABEL_78;
    v17 = this->fields.overRoot;
    v18 = ((float (__fastcall *)(struct BaseBattleInfoPosData_o *, Il2CppMethodPointer))infoPosData->klass->vtable._5_get_OverTrLocalPosY.method)(
            infoPosData,
            infoPosData->klass->vtable._6_Init.methodPtr);
    GameObjectExtensions__SetLocalPositionY(v17, v18, 0LL);
  }
  overObjectList = this->fields.overObjectList;
  if ( !overObjectList )
LABEL_78:
    sub_B170D4();
  if ( overObjectList->max_length <= inOverType )
    goto LABEL_79;
  v20 = overObjectList->m_Items[inOverType];
  if ( !v20 )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive(v20, 1, 0LL);
  v21 = this->fields.overObjectList;
  if ( !v21 )
    goto LABEL_78;
  if ( v21->max_length <= inOverType )
    goto LABEL_79;
  v22 = v21->m_Items[inOverType];
  if ( !v22 )
    goto LABEL_78;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v22,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v23 = this->fields.overObjectList;
  if ( !v23 )
    goto LABEL_78;
  if ( v23->max_length <= inOverType )
  {
LABEL_79:
    sub_B17100(Component_srcLineSprite, v14, v15);
    sub_B170A0();
  }
  v24 = (UnityEngine_Behaviour_o *)Component_srcLineSprite;
  v25 = v23->m_Items[inOverType];
  if ( !v25 )
    goto LABEL_78;
  v26 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v25,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL) )
  {
    if ( !v24 )
      goto LABEL_78;
    UnityEngine_Behaviour__set_enabled(v24, 0, 0LL);
    v27 = v24;
LABEL_33:
    UnityEngine_Behaviour__set_enabled(v27, 1, 0LL);
    goto LABEL_34;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
  {
    if ( !v26 )
      goto LABEL_78;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v26, 0, 0LL);
    v27 = (UnityEngine_Behaviour_o *)v26;
    goto LABEL_33;
  }
LABEL_34:
  isAlreadyOverKill = this->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    goto LABEL_78;
  if ( isAlreadyOverKill->max_length <= inOverType )
    goto LABEL_79;
  if ( !isAlreadyOverKill->m_Items[inOverType + 4] )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v24,
                                                   0LL,
                                                   0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
    {
      overLabel = this->fields.overLabel;
      if ( !overLabel )
        goto LABEL_78;
      if ( overLabel->max_length <= inOverType )
        goto LABEL_79;
      v34 = System_String__Concat_43743732(overLabel->m_Items[inOverType], (System_String_o *)StringLiteral_19685, 0LL);
      if ( !v24 )
        goto LABEL_78;
      Component_srcLineSprite = (srcLineSprite_o *)SimpleAnimation__Play_16380456((SimpleAnimation_o *)v24, v34, 0LL);
    }
    else
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
      if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
      {
        v35 = this->fields.overLabel;
        if ( !v35 )
          goto LABEL_78;
        if ( v35->max_length <= inOverType )
          goto LABEL_79;
        v36 = System_String__Concat_43743732(v35->m_Items[inOverType], (System_String_o *)StringLiteral_19685, 0LL);
        if ( !v26 )
          goto LABEL_78;
        Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Animation__Play_49744236(
                                                       (UnityEngine_Animation_o *)v26,
                                                       v36,
                                                       0LL);
      }
    }
    v37 = this->fields.isAlreadyOverKill;
    if ( !v37 )
      goto LABEL_78;
    if ( v37->max_length > inOverType )
    {
      v37->m_Items[inOverType + 4] = 1;
      timeStartOverKill = this->fields.timeStartOverKill;
      time = UnityEngine_Time__get_time(0LL);
      if ( !timeStartOverKill )
        goto LABEL_78;
      if ( timeStartOverKill->max_length > inOverType )
      {
        timeStartOverKill->m_Items[inOverType + 1] = time;
        return;
      }
    }
    goto LABEL_79;
  }
  v29 = UnityEngine_Time__get_time(0LL);
  v30 = this->fields.timeStartOverKill;
  if ( !v30 )
    goto LABEL_78;
  if ( v30->max_length <= inOverType )
    goto LABEL_79;
  if ( (float)(v29 - v30->m_Items[inOverType + 1]) > 0.2 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)v24,
                                                   0LL,
                                                   0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
    {
      v31 = this->fields.overLabel;
      if ( !v31 )
        goto LABEL_78;
      if ( v31->max_length > inOverType )
      {
        v32 = System_String__Concat_43743732(v31->m_Items[inOverType], (System_String_o *)StringLiteral_18688, 0LL);
        if ( v24 )
        {
          SimpleAnimation__Play_16380456((SimpleAnimation_o *)v24, v32, 0LL);
          return;
        }
        goto LABEL_78;
      }
      goto LABEL_79;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
    {
      v40 = this->fields.overLabel;
      if ( !v40 )
        goto LABEL_78;
      if ( v40->max_length <= inOverType )
        goto LABEL_79;
      v41 = System_String__Concat_43743732(v40->m_Items[inOverType], (System_String_o *)StringLiteral_18688, 0LL);
      if ( !v26 )
        goto LABEL_78;
      UnityEngine_Animation__Play_49744236((UnityEngine_Animation_o *)v26, v41, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleInformationComponent__showSkillName(
        BattleInformationComponent_o *this,
        bool isPlayer,
        System_String_o *message,
        int32_t skillLevel,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x24
  int32_t v16; // w0
  int32_t v17; // w0
  const MethodInfo *v18; // x5
  __int64 v19; // x8
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F733C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, isPlayer);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    byte_40F733C = 1;
  }
  entity = 0LL;
  if ( !message || message->fields.m_stringLength < 1 )
    return 0LL;
  if ( skillInfo )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
    v16 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
            skillInfo,
            skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_38;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           Master_WarQuestSelectionMaster,
           &entity,
           v16,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      if ( !entity )
        goto LABEL_38;
      v17 = SkillEntity__GetOverWriteSkillInfoId((SkillEntity_o *)entity, 0LL);
      skillInfo = (BattleSkillInfoData_o *)BattleInformationComponent__CreateOverWriteSkillInfoObject(
                                             this,
                                             v17,
                                             message,
                                             isPlayer,
                                             skillLevel,
                                             v18);
    }
    else
    {
      skillInfo = 0LL;
    }
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)skillInfo, 0LL, 0LL) )
  {
    v19 = 128LL;
    if ( isPlayer )
      v19 = 120LL;
    skillInfo = (BattleSkillInfoData_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)this,
                                           *(UnityEngine_GameObject_o **)((char *)&this->klass + v19),
                                           this->fields.skillInfoRoot,
                                           0LL,
                                           0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)skillInfo, 0LL, 0LL) )
  {
    if ( skillInfo )
    {
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)skillInfo,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
        goto LABEL_36;
      if ( Component_srcLineSprite )
      {
        if ( skillLevel >= 1 && isPlayer )
          BattleInfoMessageComponent__setSkillText(
            (BattleInfoMessageComponent_o *)Component_srcLineSprite,
            message,
            skillLevel,
            v22);
        else
          BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_srcLineSprite, message, v21);
LABEL_36:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 1, 0LL);
        return (UnityEngine_GameObject_o *)skillInfo;
      }
    }
LABEL_38:
    sub_B170D4();
  }
  return (UnityEngine_GameObject_o *)skillInfo;
}


void __fastcall BattleInformationComponent__showSpecialName(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v12; // x22
  BattleData_o *data; // x0
  bool isPlayerID; // w0
  __int64 v15; // x8
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v17; // x21
  srcLineSprite_o *Component_srcLineSprite; // x0
  BattleInfoMessageComponent_o *v19; // x23
  UnityEngine_Object_o *mcTweenScaleP; // x24
  UnityEngine_Component_o *skillSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  BattleData_o *v23; // x0
  System_String_o *age; // x20
  BattleServantData_o *ServantData; // x0
  System_String_o *OverrideTDName; // x0
  System_String_o *v27; // x19
  const MethodInfo *v28; // x2
  UnityEngine_GameObject_o *v29; // x0
  bool v30; // w1

  if ( (byte_40F733E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, actionData);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F733E = 1;
  }
  if ( actionData )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   actionData->fields.treasureDvcId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !Entity )
          return;
        v12 = Entity;
        data = this->fields.data;
        if ( data )
        {
          isPlayerID = BattleData__isPlayerID(data, actionData->fields.actorId, 0LL);
          v15 = 128LL;
          if ( isPlayerID )
            v15 = 120LL;
          Object = BaseMonoBehaviour__createObject(
                     (BaseMonoBehaviour_o *)this,
                     *(UnityEngine_GameObject_o **)((char *)&this->klass + v15),
                     this->fields.skillInfoRoot,
                     0LL,
                     0LL);
          if ( Object )
          {
            v17 = Object;
            Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        Object,
                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
            if ( Component_srcLineSprite )
            {
              v19 = (BattleInfoMessageComponent_o *)Component_srcLineSprite;
              mcTweenScaleP = (UnityEngine_Object_o *)Component_srcLineSprite->fields.mcTweenScaleP;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(mcTweenScaleP, 0LL, 0LL) )
              {
                skillSprite = (UnityEngine_Component_o *)v19->fields.skillSprite;
                if ( !skillSprite )
                  goto LABEL_29;
                gameObject = UnityEngine_Component__get_gameObject(skillSprite, 0LL);
                if ( !gameObject )
                  goto LABEL_29;
                UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
              }
              v23 = this->fields.data;
              if ( v23 )
              {
                age = v12->fields.age;
                ServantData = BattleData__getServantData(v23, actionData->fields.actorId, 0LL);
                if ( ServantData )
                {
                  OverrideTDName = BattleServantData__getOverrideTDName(ServantData, 0LL);
                  if ( OverrideTDName )
                    v27 = OverrideTDName;
                  else
                    v27 = age;
                  if ( System_String__IsNullOrEmpty(v27, 0LL) )
                  {
                    v29 = v17;
                    v30 = 0;
                  }
                  else
                  {
                    BattleInfoMessageComponent__setText(v19, v27, v28);
                    v30 = 1;
                    v29 = v17;
                  }
                  UnityEngine_GameObject__SetActive(v29, v30, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_B170D4();
  }
}


void __fastcall BattleInformationComponent__showTotalDamage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t TotalDamage; // w0
  int v10; // w19
  UnityEngine_GameObject_o *Object; // x0
  changeVColor_array *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int max_length; // w8
  changeVColor_array *v16; // x20
  __int64 v17; // x22
  UILabel_o *v18; // x21
  UnityEngine_Object_o *gameObject; // x0
  System_String_o *name; // x0
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  UnityEngine_Object_o *v23; // x0
  System_String_o *v24; // x0
  int v25; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40F7334 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___, actionData);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_20147, v6);
    sub_B16FFC(&StringLiteral_14470, v7);
    sub_B16FFC(&StringLiteral_20148, v8);
    byte_40F7334 = 1;
  }
  if ( !actionData )
    goto LABEL_20;
  TotalDamage = BattleActionData__getTotalDamage(actionData, 0LL);
  if ( TotalDamage >= 1 )
  {
    v10 = TotalDamage;
    Object = BaseMonoBehaviour__createObject(
               (BaseMonoBehaviour_o *)this,
               this->fields.totalLabelPrefab,
               this->fields.totalMessageRoot,
               0LL,
               0LL);
    if ( !Object )
      goto LABEL_20;
    v12 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
            Object,
            (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    if ( v12 )
    {
      max_length = v12->max_length;
      v16 = v12;
      if ( max_length >= 1 )
      {
        v17 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v17 >= max_length )
          {
            sub_B17100(v12, v13, v14);
            sub_B170A0();
          }
          v18 = (UILabel_o *)v16->m_Items[v17];
          if ( !v18 )
            break;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)v16->m_Items[v17],
                                                 0LL);
          if ( !gameObject )
            break;
          name = UnityEngine_Object__get_name(gameObject, 0LL);
          if ( !name )
            break;
          if ( System_String__Equals_43731072(name, (System_String_o *)StringLiteral_20147, 0LL) )
          {
            v25 = v10;
            v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
            v22 = System_String__Format((System_String_o *)StringLiteral_14470, v21, 0LL);
            UILabel__set_text(v18, v22, 0LL);
          }
          else
          {
            v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18, 0LL);
            if ( !v23 )
              break;
            v24 = UnityEngine_Object__get_name(v23, 0LL);
            if ( !v24 )
              break;
            v12 = (changeVColor_array *)System_String__Equals_43731072(v24, (System_String_o *)StringLiteral_20148, 0LL);
          }
          max_length = v16->max_length;
          if ( (int)++v17 >= max_length )
            return;
        }
LABEL_20:
        sub_B170D4();
      }
    }
  }
}