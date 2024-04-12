void __fastcall BattleInformationComponent___cctor(const MethodInfo *method)
{
  struct BattleInformationComponent_StaticFields *static_fields; // x0

  if ( (byte_42AD205 & 1) == 0 )
  {
    sub_B52984(&BattleInformationComponent_TypeInfo);
    sub_B52984(&StringLiteral_9652/*"NobleLevel"*/);
    byte_42AD205 = 1;
  }
  static_fields = BattleInformationComponent_TypeInfo->static_fields;
  static_fields->NobleInfoAnimPrefix = (struct System_String_o *)StringLiteral_9652/*"NobleLevel"*/;
  sub_B52920(static_fields);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInformationComponent___ctor(BattleInformationComponent_o *this, const MethodInfo *method)
{
  BaseBattleInfoPosData_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct System_String_array *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  int v10; // s0
  int v11; // s1
  int v12; // s2
  int v13; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  struct System_String_array *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x0
  __int64 v21; // x0

  if ( (byte_42AD204 & 1) == 0 )
  {
    sub_B52984(&BaseBattleInfoPosData_TypeInfo);
    sub_B52984(&bool___TypeInfo);
    sub_B52984(&UnityEngine_GameObject___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&float___TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&UnityEngine_Vector3___TypeInfo);
    sub_B52984(&StringLiteral_23841/*"{0}th Attack"*/);
    sub_B52984(&StringLiteral_1186/*"3rd Attack"*/);
    sub_B52984(&StringLiteral_21516/*"overkill_"*/);
    sub_B52984(&StringLiteral_1119/*"1st Attack"*/);
    sub_B52984(&StringLiteral_1167/*"2nd Attack"*/);
    sub_B52984(&StringLiteral_21515/*"overgauge_"*/);
    byte_42AD204 = 1;
  }
  v3 = (BaseBattleInfoPosData_o *)sub_B52A54(BaseBattleInfoPosData_TypeInfo);
  BaseBattleInfoPosData___ctor(v3, 0LL);
  this->fields.infoPosData = v3;
  sub_B52920(&this->fields.infoPosData);
  v4 = sub_B5299C(string___TypeInfo, 2LL);
  if ( !v4 )
    goto LABEL_41;
  v6 = (struct System_String_array *)v4;
  v4 = StringLiteral_21516/*"overkill_"*/;
  if ( StringLiteral_21516/*"overkill_"*/ )
  {
    v4 = sub_B52A44(StringLiteral_21516/*"overkill_"*/, v6->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_40;
    v7 = StringLiteral_21516/*"overkill_"*/;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v6->max_length )
    goto LABEL_39;
  v6->m_Items[0] = (System_String_o *)v7;
  sub_B52920(v6->m_Items);
  v4 = StringLiteral_21515/*"overgauge_"*/;
  if ( StringLiteral_21515/*"overgauge_"*/ )
  {
    v4 = sub_B52A44(StringLiteral_21515/*"overgauge_"*/, v6->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_40;
    v8 = StringLiteral_21515/*"overgauge_"*/;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v6->max_length <= 1 )
    goto LABEL_39;
  v6->m_Items[1] = (System_String_o *)v8;
  sub_B52920(&v6->m_Items[1]);
  this->fields.overLabel = v6;
  sub_B52920(&this->fields.overLabel);
  this->fields.overObjectList = (struct UnityEngine_GameObject_array *)sub_B5299C(
                                                                         UnityEngine_GameObject___TypeInfo,
                                                                         2LL);
  sub_B52920(&this->fields.overObjectList);
  this->fields.isAlreadyOverKill = (struct System_Boolean_array *)sub_B5299C(bool___TypeInfo, 2LL);
  sub_B52920(&this->fields.isAlreadyOverKill);
  this->fields.timeStartOverKill = (struct System_Single_array *)sub_B5299C(float___TypeInfo, 2LL);
  sub_B52920(&this->fields.timeStartOverKill);
  v9 = sub_B5299C(UnityEngine_Vector3___TypeInfo, 2LL);
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v9 )
    goto LABEL_41;
  v13 = *(_DWORD *)(v9 + 24);
  if ( !v13 || (*(_DWORD *)(v9 + 32) = v10, *(_DWORD *)(v9 + 36) = v11, *(_DWORD *)(v9 + 40) = v12, v13 == 1) )
  {
LABEL_39:
    v20 = sub_B52A88(v4);
    sub_B52A28(v20, 0LL);
  }
  *(_DWORD *)(v9 + 52) = 0;
  *(_QWORD *)(v9 + 44) = 0xC24C000000000000LL;
  this->fields.showPositions = (struct UnityEngine_Vector3_array *)v9;
  sub_B52920(&this->fields.showPositions);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.motionMessageObjList = (struct System_Collections_Generic_List_GameObject__o *)v14;
  sub_B52920(&this->fields.motionMessageObjList);
  v4 = sub_B5299C(string___TypeInfo, 4LL);
  if ( !v4 )
LABEL_41:
    sub_B52A5C(v4, v5);
  v15 = (struct System_String_array *)v4;
  v4 = StringLiteral_1119/*"1st Attack"*/;
  if ( StringLiteral_1119/*"1st Attack"*/ )
  {
    v4 = sub_B52A44(StringLiteral_1119/*"1st Attack"*/, v15->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_40;
    v16 = StringLiteral_1119/*"1st Attack"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v15->max_length )
    goto LABEL_39;
  v15->m_Items[0] = (System_String_o *)v16;
  sub_B52920(v15->m_Items);
  v4 = StringLiteral_1167/*"2nd Attack"*/;
  if ( StringLiteral_1167/*"2nd Attack"*/ )
  {
    v4 = sub_B52A44(StringLiteral_1167/*"2nd Attack"*/, v15->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_40;
    v17 = StringLiteral_1167/*"2nd Attack"*/;
  }
  else
  {
    v17 = 0LL;
  }
  if ( v15->max_length <= 1 )
    goto LABEL_39;
  v15->m_Items[1] = (System_String_o *)v17;
  sub_B52920(&v15->m_Items[1]);
  v4 = StringLiteral_1186/*"3rd Attack"*/;
  if ( StringLiteral_1186/*"3rd Attack"*/ )
  {
    v4 = sub_B52A44(StringLiteral_1186/*"3rd Attack"*/, v15->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_40;
    v18 = StringLiteral_1186/*"3rd Attack"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v15->max_length <= 2 )
    goto LABEL_39;
  v15->m_Items[2] = (System_String_o *)v18;
  sub_B52920(&v15->m_Items[2]);
  v4 = StringLiteral_23841/*"{0}th Attack"*/;
  if ( StringLiteral_23841/*"{0}th Attack"*/ )
  {
    v4 = sub_B52A44(StringLiteral_23841/*"{0}th Attack"*/, v15->obj.klass->_1.element_class);
    if ( v4 )
    {
      v19 = StringLiteral_23841/*"{0}th Attack"*/;
      goto LABEL_37;
    }
LABEL_40:
    v21 = sub_B52A7C();
    sub_B52A28(v21, 0LL);
  }
  v19 = 0LL;
LABEL_37:
  if ( v15->max_length <= 3 )
    goto LABEL_39;
  v15->m_Items[3] = (System_String_o *)v19;
  sub_B52920(&v15->m_Items[3]);
  this->fields.attackCount = v15;
  sub_B52920(&this->fields.attackCount);
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
  System_String_o *MessageObjectAssetName; // x21
  System_String_array *v9; // x22
  System_String_o *EffectAssetName; // x0
  __int64 v11; // x1
  System_String_o *v12; // x23
  System_String_o *v13; // x23
  BattleInformationComponent_o *v14; // x0
  const MethodInfo *v15; // x3
  UnityEngine_GameObject_o *TargetPrefab; // x0
  const MethodInfo *v17; // x4
  __int64 v19; // x0
  __int64 v20; // x0

  if ( (byte_42AD1F4 & 1) == 0 )
  {
    sub_B52984(&BattleDataDefine_TypeInfo);
    sub_B52984(&BattleEffectUtility_TypeInfo);
    this = (BattleInformationComponent_o *)sub_B52984(&string___TypeInfo);
    byte_42AD1F4 = 1;
  }
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(
                             this,
                             messageType,
                             *(const MethodInfo **)&messageType);
  v9 = (System_String_array *)sub_B5299C(string___TypeInfo, 2LL);
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  EffectAssetName = BattleEffectUtility__get_EffectAssetName(0LL);
  if ( !v9 )
    sub_B52A5C(EffectAssetName, v11);
  v12 = EffectAssetName;
  if ( EffectAssetName )
  {
    EffectAssetName = (System_String_o *)sub_B52A44(EffectAssetName, v9->obj.klass->_1.element_class);
    if ( !EffectAssetName )
      goto LABEL_18;
  }
  if ( !v9->max_length )
    goto LABEL_17;
  v9->m_Items[0] = v12;
  sub_B52920(v9->m_Items);
  EffectAssetName = (System_String_o *)BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    EffectAssetName = (System_String_o *)BattleDataDefine_TypeInfo;
  }
  v13 = *(System_String_o **)(*(_QWORD *)&EffectAssetName[7].fields + 40LL);
  if ( v13 )
  {
    EffectAssetName = (System_String_o *)sub_B52A44(v13, v9->obj.klass->_1.element_class);
    if ( !EffectAssetName )
    {
LABEL_18:
      v20 = sub_B52A7C();
      sub_B52A28(v20, 0LL);
    }
  }
  if ( v9->max_length <= 1 )
  {
LABEL_17:
    v19 = sub_B52A88(EffectAssetName);
    sub_B52A28(v19, 0LL);
  }
  v9->m_Items[1] = v13;
  sub_B52920(&v9->m_Items[1]);
  TargetPrefab = BattleInformationComponent__GetTargetPrefab(v14, MessageObjectAssetName, v9, v15);
  return BattleInformationComponent__CreateBattleMessageObject_19557584(
           (BattleInformationComponent_o *)TargetPrefab,
           messages,
           TargetPrefab,
           parentTransform,
           v17);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateBattleMessageObject_19557584(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        UnityEngine_GameObject_o *msgPrefab,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v8; // x22
  UILabel_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42AD1F5 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD1F5 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)msgPrefab, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = UnityEngine_Object__Instantiate_UILabel_(
           (UILabel_o *)msgPrefab,
           parentTransform,
           (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    if ( !v9 )
      goto LABEL_15;
    v8 = (UnityEngine_GameObject_o *)v9;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)v9,
                                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___);
    v9 = (UILabel_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      if ( Component_srcLineSprite )
      {
        BattleConcatLabelMessageComponent__SetTexts(
          (BattleConcatLabelMessageComponent_o *)Component_srcLineSprite,
          messages,
          0LL);
        return v8;
      }
LABEL_15:
      sub_B52A5C(v9, v10);
    }
  }
  return v8;
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateDefaultBattleMessageObject(
        BattleInformationComponent_o *this,
        System_String_o *message,
        UnityEngine_Transform_o *parentTransform,
        float lifeTime,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x1
  BattleInformationComponent_o *v10; // x0
  const MethodInfo *v11; // x2
  BattleLogic_o *logic; // x0
  System_String_array *v13; // x20
  System_String_o *MessageObjectAssetName; // x21
  System_String_array *v15; // x22
  BattleDataDefine_c *v16; // x8
  System_String_o *ASSET_BATTLE_COMMON; // x23
  BattleInformationComponent_o *v18; // x0
  const MethodInfo *v19; // x3
  UnityEngine_GameObject_o *TargetPrefab; // x0
  const MethodInfo *v21; // x4
  UnityEngine_GameObject_o *v22; // x19
  __int64 v24; // x0
  __int64 v25; // x0

  if ( (byte_42AD1F3 & 1) == 0 )
  {
    sub_B52984(&BattleDataDefine_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___);
    sub_B52984(&string___TypeInfo);
    byte_42AD1F3 = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
  {
    v10 = (BattleInformationComponent_o *)sub_B5299C(string___TypeInfo, 0LL);
  }
  else
  {
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_18;
    logic = (BattleLogic_o *)BattleLogic__get_ParseBattleMsg(logic, v9);
    if ( !logic )
      goto LABEL_18;
    v10 = (BattleInformationComponent_o *)ParseBattleMessage__Replace((ParseBattleMessage_o *)logic, message, 0LL);
  }
  v13 = (System_String_array *)v10;
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(v10, 0, v11);
  logic = (BattleLogic_o *)sub_B5299C(string___TypeInfo, 1LL);
  v15 = (System_String_array *)logic;
  v16 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v16 = BattleDataDefine_TypeInfo;
  }
  if ( !v15 )
    goto LABEL_18;
  ASSET_BATTLE_COMMON = v16->static_fields->ASSET_BATTLE_COMMON;
  if ( ASSET_BATTLE_COMMON )
  {
    logic = (BattleLogic_o *)sub_B52A44(ASSET_BATTLE_COMMON, v15->obj.klass->_1.element_class);
    if ( !logic )
    {
      v25 = sub_B52A7C();
      sub_B52A28(v25, 0LL);
    }
  }
  if ( !v15->max_length )
  {
    v24 = sub_B52A88(logic);
    sub_B52A28(v24, 0LL);
  }
  v15->m_Items[0] = ASSET_BATTLE_COMMON;
  sub_B52920(v15->m_Items);
  TargetPrefab = BattleInformationComponent__GetTargetPrefab(v18, MessageObjectAssetName, v15, v19);
  logic = (BattleLogic_o *)BattleInformationComponent__CreateBattleMessageObject_19557584(
                             (BattleInformationComponent_o *)TargetPrefab,
                             v13,
                             TargetPrefab,
                             parentTransform,
                             v21);
  if ( !logic
    || (v22 = (UnityEngine_GameObject_o *)logic,
        (logic = (BattleLogic_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                    (UnityEngine_GameObject_o *)logic,
                                    (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___)) == 0LL) )
  {
LABEL_18:
    sub_B52A5C(logic, v9);
  }
  CommonEffectComponent__SetTime((CommonEffectComponent_o *)logic, lifeTime, 0.0, 0LL);
  return v22;
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateDefaultSkillMessageObject(
        BattleInformationComponent_o *this,
        bool isPlayer,
        System_String_o *message,
        bool showSkillSprite,
        const MethodInfo *method)
{
  __int64 v9; // x8
  UnityEngine_GameObject_o *Object; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x19
  const MethodInfo *v13; // x2
  UnityEngine_GameObject_o *v14; // x22
  UnityEngine_Object_o *v15; // x20

  if ( (byte_42AD1F6 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD1F6 = 1;
  }
  v9 = 128LL;
  if ( isPlayer )
    v9 = 120LL;
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             *(UnityEngine_GameObject_o **)((char *)&this->klass + v9),
             this->fields.skillInfoRoot,
             0LL,
             0LL);
  if ( !Object )
    goto LABEL_16;
  v12 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         Object,
                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
  if ( !Object )
    goto LABEL_16;
  v14 = Object;
  BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Object, message, v13);
  if ( !showSkillSprite )
  {
    v15 = *(UnityEngine_Object_o **)&v14[2].fields.m_CachedPtr;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
    {
      Object = *(UnityEngine_GameObject_o **)&v14[2].fields.m_CachedPtr;
      if ( Object )
      {
        Object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object, 0LL);
        if ( Object )
        {
          UnityEngine_GameObject__SetActive(Object, 0, 0LL);
          return v12;
        }
      }
LABEL_16:
      sub_B52A5C(Object, v11);
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
  UnityEngine_GameObject_o *v11; // x19
  UnityEngine_GameObject_o *skillInfoPrefab; // x1
  UnityEngine_GameObject_o *Object; // x0
  System_String_o *v14; // x19
  Il2CppObject *v15; // x0
  UnityEngine_Component_o *gameObject; // x0
  __int64 v17; // x1
  srcLineSprite_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *mcTweenScaleP; // x21
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  v21 = skillLevel;
  if ( (byte_42AD1F7 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_2557/*"BATTLE_SKILL_NAME_LEVEL"*/);
    byte_42AD1F7 = 1;
  }
  v11 = 0LL;
  switch ( overWriteSkillInfoId )
  {
    case 0:
      return v11;
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
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2557/*"BATTLE_SKILL_NAME_LEVEL"*/, 0LL);
        v15 = (Il2CppObject *)System_Int32__ToString((int32_t)&v21, 0LL);
        message = System_String__Format_44563852(v14, (Il2CppObject *)message, v15, 0LL);
      }
      Object = BattleInformationComponent__CreateDefaultBattleMessageObject(
                 this,
                 message,
                 this->fields.skillInfoRoot,
                 2.0,
                 (const MethodInfo *)isPlayer);
LABEL_14:
      v11 = Object;
      break;
    default:
      break;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v11 )
      goto LABEL_33;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v11,
                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)Component_srcLineSprite,
                                              0LL,
                                              0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
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
        gameObject = (UnityEngine_Component_o *)Component_srcLineSprite->fields.mcTweenScaleP;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
            return v11;
          }
        }
LABEL_33:
        sub_B52A5C(gameObject, v17);
      }
    }
  }
  return v11;
}


void __fastcall BattleInformationComponent__CreateSkillSkip(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *skillSkipRoot; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *infoPosData; // x0
  UnityEngine_GameObject_o *v6; // x20
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *skillSkipPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_o *Object; // x0
  struct UnityEngine_GameObject_o **p_skillSkipObj; // x20
  UnityEngine_Object_o *skillSkipObj; // x19
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AD202 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD202 = 1;
  }
  skillSkipRoot = (UnityEngine_Object_o *)this->fields.skillSkipRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillSkipRoot, 0LL, 0LL) )
  {
    infoPosData = (UnityEngine_GameObject_o *)this->fields.infoPosData;
    if ( !infoPosData )
      goto LABEL_16;
    v6 = this->fields.skillSkipRoot;
    v13.fields.x = ((float (__fastcall *)(UnityEngine_GameObject_o *, const char *))infoPosData->klass[1]._1.gc_desc)(
                     infoPosData,
                     infoPosData->klass[1]._1.name);
    GameObjectExtensions__SetLocalPosition(v6, v13, 0LL);
    BattleInformationComponent__DeleteSkillSkip(this, v7);
    infoPosData = this->fields.skillSkipRoot;
    if ( !infoPosData )
      goto LABEL_16;
    skillSkipPrefab = this->fields.skillSkipPrefab;
    transform = UnityEngine_GameObject__get_transform(infoPosData, 0LL);
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, skillSkipPrefab, transform, 0LL, 0LL);
    p_skillSkipObj = &this->fields.skillSkipObj;
    this->fields.skillSkipObj = Object;
    sub_B52920(&this->fields.skillSkipObj);
    skillSkipObj = (UnityEngine_Object_o *)this->fields.skillSkipObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillSkipObj, 0LL, 0LL) )
    {
      infoPosData = *p_skillSkipObj;
      if ( *p_skillSkipObj )
      {
        UnityEngine_GameObject__SetActive(infoPosData, 1, 0LL);
        return;
      }
LABEL_16:
      sub_B52A5C(infoPosData, v4);
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

  if ( (byte_42AD203 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD203 = 1;
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
    UnityEngine_Object__Destroy_35616956(v6, 0LL);
    *p_skillSkipObj = 0LL;
    sub_B52920(p_skillSkipObj);
  }
}


void __fastcall BattleInformationComponent__DestroyDisplayingMessage(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *commonMessageObject; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x20
  struct System_Collections_Generic_List_GameObject__o *motionMessageObjList; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AD1FC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD1FC = 1;
  }
  memset(&v8, 0, sizeof(v8));
  commonMessageObject = (UnityEngine_Object_o *)this->fields.commonMessageObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(commonMessageObject, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Object_o *)this->fields.commonMessageObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(v5, 0LL);
  }
  motionMessageObjList = this->fields.motionMessageObjList;
  if ( !motionMessageObjList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)motionMessageObjList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v8.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  motionMessageObjList = this->fields.motionMessageObjList;
  if ( !motionMessageObjList )
LABEL_20:
    sub_B52A5C(motionMessageObjList, v4);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)motionMessageObjList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_GameObject__Clear__);
}


System_String_o *__fastcall BattleInformationComponent__GetMessageObjectAssetName(
        BattleInformationComponent_o *this,
        int32_t messageType,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42AD1F2 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_16776/*"battle_message_{0}"*/);
    byte_42AD1F2 = 1;
  }
  v6 = messageType;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format((System_String_o *)StringLiteral_16776/*"battle_message_{0}"*/, v4, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__GetTargetPrefab(
        BattleInformationComponent_o *this,
        System_String_o *prefabName,
        System_String_array *assetNames,
        const MethodInfo *method)
{
  __int64 v6; // x8
  unsigned __int64 v7; // x22
  System_String_o *v8; // x21
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  __int64 v11; // x0

  if ( (byte_42AD201 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&AssetManager_TypeInfo);
    this = (BattleInformationComponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD201 = 1;
  }
  if ( !assetNames )
    goto LABEL_20;
  v6 = *(_QWORD *)&assetNames->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)v6 )
      {
        v11 = sub_B52A88(this);
        sub_B52A28(v11, 0LL);
      }
      v8 = assetNames->m_Items[v7];
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v8, 0LL);
      if ( !this )
        break;
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 (AssetData_o *)this,
                                                                 prefabName,
                                                                 (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        LODWORD(v6) = assetNames->max_length;
        if ( (__int64)++v7 < (int)v6 )
          continue;
      }
      return (UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
    }
LABEL_20:
    sub_B52A5C(this, prefabName);
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
  UnityEngine_Object_o *playerAttackInfoPrefab; // x20
  __int64 v10; // x1
  __int64 overRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_array *overObjectList; // x21
  UnityEngine_GameObject_o *v14; // x20
  struct UnityEngine_GameObject_array *v15; // x8
  struct System_Boolean_array *isAlreadyOverKill; // x8
  struct System_Single_array *timeStartOverKill; // x8
  AssetData_o *v18; // x20
  struct UnityEngine_GameObject_array *v19; // x21
  UnityEngine_GameObject_o *v20; // x22
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x22
  struct UnityEngine_GameObject_array *v23; // x8
  struct System_Boolean_array *v24; // x8
  struct System_Single_array *v25; // x8
  UnityEngine_Object_o *fieldParam; // x20
  struct BattleData_o *data; // x8
  __int64 v28; // x0
  __int64 v29; // x0

  if ( (byte_42AD1ED & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_18333/*"ef_overgauge01"*/);
    sub_B52984(&StringLiteral_2786/*"Battle/Common"*/);
    sub_B52984(&StringLiteral_18340/*"ef_skillskip"*/);
    sub_B52984(&StringLiteral_18389/*"effect/ef_overkill01"*/);
    byte_42AD1ED = 1;
  }
  this->fields.perf = inperf;
  sub_B52920(&this->fields.perf);
  this->fields.data = indata;
  sub_B52920(&this->fields.data);
  this->fields.logic = inlogic;
  sub_B52920(&this->fields.logic);
  playerAttackInfoPrefab = (UnityEngine_Object_o *)this->fields.playerAttackInfoPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(playerAttackInfoPrefab, 0LL, 0LL) )
  {
    overRoot = (__int64)this->fields.playerAttackInfoPrefab;
    if ( !overRoot )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)overRoot, 0, 0LL);
  }
  overRoot = (__int64)this->fields.overRoot;
  if ( !overRoot
    || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)overRoot, 0LL),
        overRoot = (__int64)BaseMonoBehaviour__createObject_19346208(
                              (BaseMonoBehaviour_o *)this,
                              (System_String_o *)StringLiteral_18389/*"effect/ef_overkill01"*/,
                              transform,
                              0LL,
                              0LL),
        (overObjectList = this->fields.overObjectList) == 0LL) )
  {
LABEL_45:
    sub_B52A5C(overRoot, v10);
  }
  v14 = (UnityEngine_GameObject_o *)overRoot;
  if ( overRoot )
  {
    overRoot = sub_B52A44(overRoot, overObjectList->obj.klass->_1.element_class);
    if ( !overRoot )
      goto LABEL_47;
  }
  if ( !overObjectList->max_length )
    goto LABEL_46;
  overObjectList->m_Items[0] = v14;
  sub_B52920(overObjectList->m_Items);
  v15 = this->fields.overObjectList;
  if ( !v15 )
    goto LABEL_45;
  if ( !v15->max_length )
    goto LABEL_46;
  overRoot = (__int64)v15->m_Items[0];
  if ( !overRoot )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)overRoot, 0, 0LL);
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
    v28 = sub_B52A88(overRoot);
    sub_B52A28(v28, 0LL);
  }
  timeStartOverKill->m_Items[1] = 0.0;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  overRoot = (__int64)AssetManager__getAssetStorage((System_String_o *)StringLiteral_2786/*"Battle/Common"*/, 0LL);
  if ( !overRoot )
    goto LABEL_45;
  v18 = (AssetData_o *)overRoot;
  overRoot = (__int64)AssetData__GetObject_WarBoardWaitTimeSetting_(
                        (AssetData_o *)overRoot,
                        (System_String_o *)StringLiteral_18333/*"ef_overgauge01"*/,
                        (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( !this->fields.overRoot )
    goto LABEL_45;
  v19 = this->fields.overObjectList;
  v20 = (UnityEngine_GameObject_o *)overRoot;
  v21 = UnityEngine_GameObject__get_transform(this->fields.overRoot, 0LL);
  overRoot = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v20, v21, 0LL, 0LL);
  if ( !v19 )
    goto LABEL_45;
  v22 = (UnityEngine_GameObject_o *)overRoot;
  if ( overRoot )
  {
    overRoot = sub_B52A44(overRoot, v19->obj.klass->_1.element_class);
    if ( !overRoot )
    {
LABEL_47:
      v29 = sub_B52A7C();
      sub_B52A28(v29, 0LL);
    }
  }
  if ( v19->max_length <= 1 )
    goto LABEL_46;
  v19->m_Items[1] = v22;
  sub_B52920(&v19->m_Items[1]);
  v23 = this->fields.overObjectList;
  if ( !v23 )
    goto LABEL_45;
  if ( v23->max_length <= 1 )
    goto LABEL_46;
  overRoot = (__int64)v23->m_Items[1];
  if ( !overRoot )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)overRoot, 0, 0LL);
  v24 = this->fields.isAlreadyOverKill;
  if ( !v24 )
    goto LABEL_45;
  if ( v24->max_length <= 1 )
    goto LABEL_46;
  v24->m_Items[5] = 0;
  v25 = this->fields.timeStartOverKill;
  if ( !v25 )
    goto LABEL_45;
  if ( v25->max_length <= 1 )
    goto LABEL_46;
  v25->m_Items[2] = 0.0;
  this->fields.skillSkipPrefab = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                      v18,
                                                                      (System_String_o *)StringLiteral_18340/*"ef_skillskip"*/,
                                                                      (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  sub_B52920(&this->fields.skillSkipPrefab);
  GameObjectExtensions__SafeSetParent_32091088(this->fields.overRoot, this->fields.fsOffsetRoot, 0LL);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  overRoot = UnityEngine_Object__op_Inequality(fieldParam, 0LL, 0LL);
  if ( (overRoot & 1) != 0 )
  {
    data = this->fields.data;
    if ( data )
    {
      overRoot = (__int64)this->fields.fieldParam;
      if ( overRoot )
      {
        (*(void (__fastcall **)(__int64, struct BattleFieldEnvironmentData_o *, _QWORD))(*(_QWORD *)overRoot + 376LL))(
          overRoot,
          data->fields._FieldEnvData_k__BackingField,
          *(_QWORD *)(*(_QWORD *)overRoot + 384LL));
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
  UnityEngine_Object_o *fieldParam; // x20
  const MethodInfo *v4; // x1
  BattleFieldParamComponent_o *v5; // x0

  if ( (byte_42AD1EE & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD1EE = 1;
  }
  this->fields.infoPosData = BattleInformationComponent__MakeBattleInfoPosData(this, method);
  sub_B52920(&this->fields.infoPosData);
  fieldParam = (UnityEngine_Object_o *)this->fields.fieldParam;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(fieldParam, 0LL, 0LL) )
  {
    v5 = this->fields.fieldParam;
    if ( !v5 )
      sub_B52A5C(0LL, v4);
    BattleFieldParamComponent__UpdateView(v5, v4);
  }
}


BaseBattleInfoPosData_o *__fastcall BattleInformationComponent__MakeBattleInfoPosData(
        BattleInformationComponent_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  int v4; // w20
  PosCountSpBattleInfoPosData_o *v5; // x20

  if ( (byte_42AD1EF & 1) == 0 )
  {
    sub_B52984(&NormalRaidTypeBossBattleInfoPosData_TypeInfo);
    sub_B52984(&PosCountNormalBattleInfoPosData_TypeInfo);
    sub_B52984(&PosCountSpBattleInfoPosData_TypeInfo);
    byte_42AD1EF = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  data = (BattleData_o *)BattleData__GetRaidType(data, 0LL);
  if ( !this->fields.data )
    goto LABEL_15;
  v4 = (int)data;
  if ( !BattleData__get_IsEnemyPosCountNormal(this->fields.data, 0LL) )
  {
    v5 = (PosCountSpBattleInfoPosData_o *)sub_B52A54(PosCountSpBattleInfoPosData_TypeInfo);
    PosCountSpBattleInfoPosData___ctor(v5, 0LL);
    if ( !v5 )
      goto LABEL_15;
    goto LABEL_13;
  }
  if ( !v4 )
    goto LABEL_10;
  data = this->fields.data;
  if ( !data || (data = (BattleData_o *)BattleData__getStageEntity(data, 0LL)) == 0LL )
LABEL_15:
    sub_B52A5C(data, method);
  if ( !StageEntity__IsForceSetNormalEnemyStatusUI((StageEntity_o *)data, 0LL) )
  {
    v5 = (PosCountSpBattleInfoPosData_o *)sub_B52A54(NormalRaidTypeBossBattleInfoPosData_TypeInfo);
    NormalRaidTypeBossBattleInfoPosData___ctor((NormalRaidTypeBossBattleInfoPosData_o *)v5, 0LL);
    if ( !v5 )
      goto LABEL_15;
    goto LABEL_13;
  }
LABEL_10:
  v5 = (PosCountSpBattleInfoPosData_o *)sub_B52A54(PosCountNormalBattleInfoPosData_TypeInfo);
  PosCountNormalBattleInfoPosData___ctor((PosCountNormalBattleInfoPosData_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_15;
LABEL_13:
  ((void (__fastcall *)(PosCountSpBattleInfoPosData_o *, struct BattlePerformance_o *, void *))v5->klass->vtable._6_Init.method)(
    v5,
    this->fields.perf,
    v5->klass[1]._1.image);
  return (BaseBattleInfoPosData_o *)v5;
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
  BattleInformationComponent_o *v3; // x19
  bool isPlayerID; // w0
  const MethodInfo *v6; // x5

  if ( !actionData || (v3 = this, (this = (BattleInformationComponent_o *)this->fields.data) == 0LL) )
    sub_B52A5C(this, actionData);
  isPlayerID = BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0LL);
  v3->fields.commonMessageObject = BattleInformationComponent__showSkillName(
                                     v3,
                                     isPlayerID,
                                     actionData->fields.skillMessage,
                                     0,
                                     actionData->fields.skillInfo,
                                     v6);
  sub_B52920(&v3->fields.commonMessageObject);
}


void __fastcall BattleInformationComponent__ShowBattleMessage(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        int32_t messageType,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *motionMessageObjList; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  UnityEngine_Object_o *BattleMessageObject; // x20

  if ( (byte_42AD200 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD200 = 1;
  }
  BattleInformationComponent__DestroyDisplayingMessage(this, (const MethodInfo *)messages);
  if ( !messages )
    goto LABEL_13;
  if ( *(_QWORD *)&messages->max_length )
  {
    BattleMessageObject = (UnityEngine_Object_o *)BattleInformationComponent__CreateBattleMessageObject(
                                                    (BattleInformationComponent_o *)motionMessageObjList,
                                                    messages,
                                                    messageType,
                                                    this->fields.skillInfoRoot,
                                                    v9);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    motionMessageObjList = (struct System_Collections_Generic_List_GameObject__o *)UnityEngine_Object__op_Inequality(
                                                                                     BattleMessageObject,
                                                                                     0LL,
                                                                                     0LL);
    if ( ((unsigned __int8)motionMessageObjList & 1) != 0 )
    {
      if ( BattleMessageObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BattleMessageObject, 1, 0LL);
        motionMessageObjList = this->fields.motionMessageObjList;
        if ( motionMessageObjList )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)motionMessageObjList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)BattleMessageObject,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
          return;
        }
      }
LABEL_13:
      sub_B52A5C(motionMessageObjList, v8);
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
  GameObjectExtensions__SafeSetParent_32091088(this->fields.overRoot, fsOffsetRoot, 0LL);
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
  struct System_Boolean_array *isAlreadyOverKill; // x8
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v7; // x8
  UnityEngine_Object_o *v8; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  struct System_String_array *overLabel; // x8
  System_String_o *v11; // x0
  struct System_String_array *v12; // x8
  System_String_o *v13; // x0
  struct System_Boolean_array *v14; // x8
  __int64 v15; // x0

  v4 = this;
  if ( (byte_42AD1FE & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (BattleInformationComponent_o *)sub_B52984(&StringLiteral_21499/*"out"*/);
    byte_42AD1FE = 1;
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
  this = (BattleInformationComponent_o *)overObjectList->m_Items[type];
  if ( !this )
    goto LABEL_32;
  this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v7 = v4->fields.overObjectList;
  if ( !v7 )
    goto LABEL_32;
  if ( v7->max_length <= type )
    goto LABEL_33;
  v8 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v7->m_Items[type];
  if ( !this )
    goto LABEL_32;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v8 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, 0, 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8, 1, 0LL);
      overLabel = v4->fields.overLabel;
      if ( overLabel )
      {
        if ( overLabel->max_length <= type )
          goto LABEL_33;
        v11 = System_String__Concat_44568316(overLabel->m_Items[type], (System_String_o *)StringLiteral_21499/*"out"*/, 0LL);
        this = (BattleInformationComponent_o *)SimpleAnimation__Play_16625408((SimpleAnimation_o *)v8, v11, 0LL);
        goto LABEL_28;
      }
    }
LABEL_32:
    sub_B52A5C(this, *(_QWORD *)&type);
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
  v12 = v4->fields.overLabel;
  if ( !v12 )
    goto LABEL_32;
  if ( v12->max_length <= type )
    goto LABEL_33;
  v13 = System_String__Concat_44568316(v12->m_Items[type], (System_String_o *)StringLiteral_21499/*"out"*/, 0LL);
  this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_51067744(
                                           (UnityEngine_Animation_o *)Component_srcLineSprite,
                                           v13,
                                           0LL);
LABEL_28:
  v14 = v4->fields.isAlreadyOverKill;
  if ( !v14 )
    goto LABEL_32;
  if ( v14->max_length <= type )
  {
LABEL_33:
    v15 = sub_B52A88(this);
    sub_B52A28(v15, 0LL);
  }
  v14->m_Items[type + 4] = 0;
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
  struct UnityEngine_Vector3_array *showPositions; // x8
  __int64 v8; // x0

  overObjectList = this->fields.overObjectList;
  if ( !overObjectList )
    goto LABEL_8;
  if ( overObjectList->max_length <= type )
    goto LABEL_9;
  v5 = this;
  this = (BattleInformationComponent_o *)overObjectList->m_Items[type];
  if ( !this
    || (this = (BattleInformationComponent_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL),
        (showPositions = v5->fields.showPositions) == 0LL) )
  {
LABEL_8:
    sub_B52A5C(this, *(_QWORD *)&type);
  }
  if ( showPositions->max_length <= zureIndex )
  {
LABEL_9:
    v8 = sub_B52A88(this);
    sub_B52A28(v8, 0LL);
  }
  if ( !this )
    goto LABEL_8;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)this,
    *(UnityEngine_Vector3_o *)&showPositions->m_Items[zureIndex].fields.y,
    0LL);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__showBoostSkillName(
        BattleInformationComponent_o *this,
        int32_t imageId,
        System_String_o *message,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *Object; // x21
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  BattleInfoMessageComponent_o *v14; // x22
  const MethodInfo *v15; // x3
  UnityEngine_GameObject_o *result; // x0
  BattleInformationComponent_o *v17; // x0
  BattleActionData_o *v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_42AD1F9 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_B52984(&UnityEngine_GameObject_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_18372/*"effect/ef_boostitem01"*/);
    byte_42AD1F9 = 1;
  }
  if ( !message || message->fields.m_stringLength < 1 )
    return 0LL;
  v7 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_18372/*"effect/ef_boostitem01"*/, 0LL);
  v8 = (UnityEngine_GameObject_o *)v7;
  if ( !v7 || (UnityEngine_GameObject_c *)v7->klass == UnityEngine_GameObject_TypeInfo )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)this,
                                       v8,
                                       transform,
                                       0LL,
                                       0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_srcLineSprite = (srcLineSprite_o *)UnityEngine_Object__op_Inequality(Object, 0LL, 0LL);
    if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
    {
      if ( !Object
        || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)Object,
                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___)) == 0LL )
      {
        sub_B52A5C(Component_srcLineSprite, v12);
      }
      v14 = (BattleInfoMessageComponent_o *)Component_srcLineSprite;
      BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_srcLineSprite, message, v13);
      BattleInfoMessageComponent__setItemSprite(v14, imageId, 0, v15);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0LL);
    }
    return (UnityEngine_GameObject_o *)Object;
  }
  v17 = (BattleInformationComponent_o *)sub_B52D50(v7);
  BattleInformationComponent__showSpecialName(v17, v18, v19);
  return result;
}


void __fastcall BattleInformationComponent__showCommonMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleActionData_o *v3; // x20
  BattleInformationComponent_o *v4; // x19
  const MethodInfo *v5; // x4
  int v6; // w23
  UnityEngine_GameObject_o *v7; // x21
  BattleInfoMessageComponent_o *v8; // x22
  const MethodInfo *v9; // x3
  __int64 actionIndex; // x8
  struct System_String_array *attackCount; // x9
  System_String_o *motionMessage; // x1
  struct BattleSkillInfoData_o *skillInfo; // x8
  int32_t type; // w9
  int32_t skilllv; // w21
  const MethodInfo *v16; // x3
  struct BattleSkillInfoData_o *v17; // x8
  UnityEngine_GameObject_o *v18; // x0
  System_String_o *v19; // x24
  Il2CppObject *v20; // x0
  System_String_o **v21; // x8
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *BattleCommandCardObject; // x23
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v25; // x3
  bool isPlayerID; // w0
  const MethodInfo *v27; // x5
  System_String_o *skillMessage; // x2
  BattleSkillInfoData_o *v29; // x4
  bool v30; // w1
  BattleInformationComponent_o *v31; // x0
  int32_t v32; // w3
  bool v33; // w0
  __int64 v34; // x0
  int v35; // [xsp+Ch] [xbp-34h] BYREF

  v3 = actionData;
  v4 = this;
  if ( (byte_42AD1FB & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_2926/*"Buster!"*/);
    sub_B52984(&StringLiteral_11077/*"Quick!"*/);
    sub_B52984(&StringLiteral_2110/*"Arts!"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    this = (BattleInformationComponent_o *)sub_B52984(&StringLiteral_6354/*"Extra!"*/);
    byte_42AD1FB = 1;
  }
  if ( !v3 )
    goto LABEL_62;
  if ( v3->fields.IsDontUpdateMessage )
    return;
  BattleInformationComponent__DestroyDisplayingMessage(v4, (const MethodInfo *)actionData);
  if ( BattleCommand__isShowCommandAction(v3->fields.type, 0LL) )
  {
    this = (BattleInformationComponent_o *)v4->fields.data;
    if ( !this )
      goto LABEL_62;
    if ( BattleData__isPlayerID((BattleData_o *)this, v3->fields.actorId, 0LL) )
    {
      this = (BattleInformationComponent_o *)BattleCommand__getType(v3->fields.type, 0LL);
      if ( !v4->fields.data )
        goto LABEL_62;
      v6 = (int)this;
      this = (BattleInformationComponent_o *)BattleData__isPlayerID(v4->fields.data, v3->fields.actorId, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_62;
      this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                               (BaseMonoBehaviour_o *)v4,
                                               v4->fields.playerAttackInfoPrefab,
                                               v4->fields.attackMessageRoot,
                                               0LL,
                                               0LL);
      if ( !this )
        goto LABEL_62;
      v7 = (UnityEngine_GameObject_o *)this;
      this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
      if ( !v4->fields.data )
        goto LABEL_62;
      v8 = (BattleInfoMessageComponent_o *)this;
      this = (BattleInformationComponent_o *)BattleData__isPlayerID(v4->fields.data, v3->fields.actorId, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_48:
        UnityEngine_GameObject__SetActive(v7, 1, 0LL);
        goto LABEL_54;
      }
      actionIndex = v3->fields.actionIndex;
      attackCount = v4->fields.attackCount;
      if ( (int)actionIndex >= 3 )
      {
        if ( !attackCount )
          goto LABEL_62;
        if ( attackCount->max_length > 3 )
        {
          v19 = attackCount->m_Items[3];
          v35 = actionIndex + 1;
          v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
          this = (BattleInformationComponent_o *)System_String__Format(v19, v20, 0LL);
          actionData = (BattleActionData_o *)this;
          goto LABEL_34;
        }
      }
      else
      {
        if ( !attackCount )
          goto LABEL_62;
        if ( (unsigned int)actionIndex < attackCount->max_length )
        {
          actionData = (BattleActionData_o *)attackCount->m_Items[actionIndex];
LABEL_34:
          if ( (unsigned int)(v6 - 1) > 3 )
          {
            v21 = (System_String_o **)&StringLiteral_1/*""*/;
            if ( !v8 )
              goto LABEL_62;
          }
          else
          {
            v21 = (System_String_o **)*(&off_3EE3AB0 + v6 - 1);
            if ( !v8 )
              goto LABEL_62;
          }
          BattleInfoMessageComponent__setText_19551364(v8, (System_String_o *)actionData, *v21, v9);
          perf = v4->fields.perf;
          if ( perf )
          {
            this = (BattleInformationComponent_o *)perf->fields.commandPerf;
            if ( this )
            {
              BattleCommandCardObject = (UnityEngine_Object_o *)BattlePerformanceCommandCard__getBattleCommandCardObject(
                                                                  (BattlePerformanceCommandCard_o *)this,
                                                                  v3->fields.actionIndex,
                                                                  0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(BattleCommandCardObject, 0LL, 0LL) )
                goto LABEL_48;
              this = (BattleInformationComponent_o *)v4->fields.data;
              if ( this )
              {
                ServantData = BattleData__getServantData((BattleData_o *)this, v3->fields.targetId, 0LL);
                BattleInfoMessageComponent__setCommandObject(
                  v8,
                  (UnityEngine_GameObject_o *)BattleCommandCardObject,
                  ServantData,
                  v25);
                if ( BattleCommandCardObject )
                {
                  this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)BattleCommandCardObject,
                                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
                  if ( this )
                  {
                    BattleCommandComponent__hideOutCard((BattleCommandComponent_o *)this, 0LL);
                    goto LABEL_48;
                  }
                }
              }
            }
          }
LABEL_62:
          sub_B52A5C(this, actionData);
        }
      }
      v34 = sub_B52A88(this);
      sub_B52A28(v34, 0LL);
    }
  }
  motionMessage = v3->fields.motionMessage;
  if ( motionMessage )
  {
    BattleInformationComponent__showMotionMessage(
      v4,
      motionMessage,
      v3->fields.actorId,
      v3->fields._MessageType_k__BackingField,
      v5);
    goto LABEL_19;
  }
  v7 = 0LL;
  if ( BattleActionData__IsGimmick(v3, 0LL) )
    goto LABEL_54;
  this = (BattleInformationComponent_o *)BattleActionData__isSkill(v3, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    skillInfo = v3->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_62;
    type = skillInfo->fields.type;
    if ( type == 11 || type == 1 )
      skilllv = skillInfo->fields.skilllv;
    else
      skilllv = 0;
    this = (BattleInformationComponent_o *)v4->fields.data;
    if ( !this )
      goto LABEL_62;
    isPlayerID = BattleData__isPlayerID((BattleData_o *)this, v3->fields.actorId, 0LL);
    skillMessage = v3->fields.skillMessage;
    v29 = v3->fields.skillInfo;
    v30 = isPlayerID;
    v31 = v4;
    v32 = skilllv;
    goto LABEL_52;
  }
  this = (BattleInformationComponent_o *)BattleActionData__isBoostSkill(v3, 0LL);
  v7 = 0LL;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_54;
  if ( v3->fields.noOperation )
  {
LABEL_19:
    v7 = 0LL;
    goto LABEL_54;
  }
  v17 = v3->fields.skillInfo;
  if ( !v17 )
    goto LABEL_62;
  if ( v17->fields.itemImageId == -1 )
  {
    this = (BattleInformationComponent_o *)v4->fields.data;
    if ( !this )
      goto LABEL_62;
    v33 = BattleData__isPlayerID((BattleData_o *)this, v3->fields.actorId, 0LL);
    skillMessage = v3->fields.skillMessage;
    v29 = v3->fields.skillInfo;
    v30 = v33;
    v31 = v4;
    v32 = 0;
LABEL_52:
    v18 = BattleInformationComponent__showSkillName(v31, v30, skillMessage, v32, v29, v27);
    goto LABEL_53;
  }
  v18 = BattleInformationComponent__showBoostSkillName(v4, v3->fields.imageId, v3->fields.skillMessage, v16);
LABEL_53:
  v7 = v18;
LABEL_54:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL) )
  {
    v4->fields.commonMessageObject = v7;
    sub_B52920(&v4->fields.commonMessageObject);
  }
}


void __fastcall BattleInformationComponent__showCommonMessage_19565508(
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
  BattleInformationComponent_o *v8; // x19
  Il2CppObject *current; // x23
  bool HasRubyFormat; // w24
  const MethodInfo *v11; // x3
  BattleInformationComponent_o *v12; // x23
  UnityEngine_GameObject_o *v13; // x21
  const MethodInfo *v14; // x2
  bool isPlayerID; // w0
  const MethodInfo *v16; // x4
  BattleEffectUtility_c *v17; // x0
  System_String_o *v18; // x0
  System_String_o *v19; // x20
  AssetData_o *v20; // x20
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x20
  __int64 v22; // x0
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-60h] BYREF

  v8 = this;
  if ( (byte_42AD1FF & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&BattleEffectUtility_TypeInfo);
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_16787/*"battle_states_popup"*/);
    this = (BattleInformationComponent_o *)sub_B52984(&StringLiteral_2790/*"Battle/Effect/"*/);
    byte_42AD1FF = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( !motionMessage )
    goto LABEL_49;
  if ( motionMessage->fields.m_stringLength < 1 )
    return;
  this = (BattleInformationComponent_o *)v8->fields.motionMessageObjList;
  if ( !this )
    goto LABEL_49;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  this = (BattleInformationComponent_o *)v8->fields.motionMessageObjList;
  if ( !this )
    goto LABEL_49;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_GameObject__Clear__);
  HasRubyFormat = ScriptLineMessage__HasRubyFormat(motionMessage, 0LL);
  this = (BattleInformationComponent_o *)sub_B5299C(char___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_49;
  if ( !LODWORD(this->fields.perf) )
    goto LABEL_50;
  LOWORD(this->fields.data) = 58;
  this = (BattleInformationComponent_o *)System_String__Split(motionMessage, (System_Char_array *)this, 0LL);
  if ( HasRubyFormat )
    goto LABEL_18;
  v12 = this;
  if ( !this )
    goto LABEL_49;
  if ( SLODWORD(this->fields.perf) < 2 )
  {
LABEL_18:
    if ( messageType == 2 )
    {
      this = (BattleInformationComponent_o *)v8->fields.data;
      if ( !this )
        goto LABEL_49;
      isPlayerID = BattleData__isPlayerID((BattleData_o *)this, actorId, 0LL);
      this = (BattleInformationComponent_o *)BattleInformationComponent__CreateDefaultSkillMessageObject(
                                               v8,
                                               isPlayerID,
                                               motionMessage,
                                               0,
                                               v16);
      if ( !this )
        goto LABEL_49;
    }
    else
    {
      if ( messageType == 1 )
      {
        this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                                 (BaseMonoBehaviour_o *)v8,
                                                 v8->fields.commonLabelPrefab,
                                                 v8->fields.commonMessageRoot,
                                                 0LL,
                                                 0LL);
        if ( this )
        {
          v13 = (UnityEngine_GameObject_o *)this;
          this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
          if ( this )
          {
            BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)this, motionMessage, v14);
LABEL_45:
            UnityEngine_GameObject__SetActive(v13, 1, 0LL);
            goto LABEL_46;
          }
        }
LABEL_49:
        sub_B52A5C(this, motionMessage);
      }
      this = (BattleInformationComponent_o *)BattleInformationComponent__CreateDefaultBattleMessageObject(
                                               v8,
                                               motionMessage,
                                               v8->fields.skillInfoRoot,
                                               1.5,
                                               v11);
      if ( !this )
        goto LABEL_49;
    }
    v13 = (UnityEngine_GameObject_o *)this;
    goto LABEL_45;
  }
  this = (BattleInformationComponent_o *)v8->fields.perf;
  if ( !this )
    goto LABEL_49;
  BattlePerformance__setStateString((BattlePerformance_o *)this, actorId, motionMessage, 0LL);
  v17 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v17 = BattleEffectUtility_TypeInfo;
  }
  v18 = System_Int32__ToString((unsigned int)v17->static_fields + 24, 0LL);
  v19 = System_String__Concat_44568316((System_String_o *)StringLiteral_2790/*"Battle/Effect/"*/, v18, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v19, 0LL);
  if ( !LODWORD(v12->fields.perf) )
  {
LABEL_50:
    v22 = sub_B52A88(this);
    sub_B52A28(v22, 0LL);
  }
  v20 = (AssetData_o *)this;
  this = (BattleInformationComponent_o *)System_String__Concat_44568316(
                                           (System_String_o *)StringLiteral_16787/*"battle_states_popup"*/,
                                           (System_String_o *)v12->fields.data,
                                           0LL);
  if ( !v20 )
    goto LABEL_49;
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 v20,
                                                                 (System_String_o *)this,
                                                                 (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = 0LL;
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
  {
    this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v8,
                                             Object_WarBoardWaitTimeSetting,
                                             v8->fields.commonMessageRoot,
                                             0LL,
                                             0LL);
    if ( !this )
      goto LABEL_49;
    v13 = (UnityEngine_GameObject_o *)this;
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( LODWORD(v12->fields.perf) > 1 )
    {
      if ( !this )
        goto LABEL_49;
      EffectComponent__setLabel((EffectComponent_o *)this, (System_String_o *)v12->fields.logic, 0LL);
      goto LABEL_45;
    }
    goto LABEL_50;
  }
LABEL_46:
  this = (BattleInformationComponent_o *)v8->fields.motionMessageObjList;
  if ( !this )
    goto LABEL_49;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


void __fastcall BattleInformationComponent__showNoblePhantasmInfo(
        BattleInformationComponent_o *this,
        int32_t tresureDeviceId,
        int32_t treasureDeviceLevel,
        int32_t treasureDevicePer,
        bool isHideInfo,
        System_String_array *overrideTd,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v15; // x26
  UnityEngine_GameObject_o *v16; // x21
  UnityEngine_Transform_o *transform; // x0
  WebViewObject_o *Component_WebViewObject; // x23
  UnityEngine_Transform_o *v19; // x0
  WebViewObject_o *v20; // x28
  UnityEngine_Transform_o *v21; // x0
  WebViewObject_o *v22; // x27
  UnityEngine_Transform_o *v23; // x0
  WebViewObject_o *v24; // x24
  UnityEngine_Transform_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x25
  __int64 v27; // x0
  System_String_o *age; // x26
  il2cpp_array_size_t max_length; // w8
  System_String_o *v30; // x1
  System_String_o *v31; // x1
  System_String_o *v32; // x22
  Il2CppObject *v33; // x0
  int v34; // w8
  SimpleAnimation_o *Component_srcLineSprite; // x20
  UnityEngine_Animation_o *v36; // x19
  BattleInformationComponent_c *v37; // x0
  System_String_o *NobleInfoAnimPrefix; // x19
  System_String_o *v39; // x0
  BattleInformationComponent_c *v40; // x0
  System_String_o *v41; // x20
  System_String_o *v42; // x0
  __int64 v43; // x0
  int v44; // [xsp+4h] [xbp-5Ch] BYREF
  int v45; // [xsp+8h] [xbp-58h] BYREF
  int32_t v46; // [xsp+Ch] [xbp-54h] BYREF

  v46 = treasureDeviceLevel;
  if ( (byte_42AD1F1 & 1) == 0 )
  {
    sub_B52984(&BattleInformationComponent_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_B52984(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B52984(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_9363/*"NOBLEINFO_NP_PER"*/);
    sub_B52984(&StringLiteral_22053/*"rubyLabel"*/);
    sub_B52984(&StringLiteral_10709/*"PerLabel"*/);
    sub_B52984(&StringLiteral_8564/*"LevelLabel"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_9763/*"NpLevelBase"*/);
    sub_B52984(&StringLiteral_20513/*"mainLabel"*/);
    byte_42AD1F1 = 1;
  }
  v45 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_57;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             tresureDeviceId,
             (const MethodInfo_23E22D8 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( Entity )
  {
    v15 = Entity;
    Instance = (DataManager_o *)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.nobleInfoPrefab,
                                  this->fields.nobleInfoRoot,
                                  0LL,
                                  0LL);
    if ( !Instance )
      goto LABEL_57;
    v16 = (UnityEngine_GameObject_o *)Instance;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(
                                  transform,
                                  (System_String_o *)StringLiteral_20513/*"mainLabel"*/,
                                  0,
                                  0LL);
    if ( !Instance )
      goto LABEL_57;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)Instance,
                                (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v19 = UnityEngine_GameObject__get_transform(v16, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v19, (System_String_o *)StringLiteral_22053/*"rubyLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_57;
    v20 = UnityEngine_Component__GetComponent_WebViewObject_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v21 = UnityEngine_GameObject__get_transform(v16, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v21, (System_String_o *)StringLiteral_8564/*"LevelLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_57;
    v22 = UnityEngine_Component__GetComponent_WebViewObject_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v23 = UnityEngine_GameObject__get_transform(v16, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v23, (System_String_o *)StringLiteral_10709/*"PerLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_57;
    v24 = UnityEngine_Component__GetComponent_WebViewObject_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v25 = UnityEngine_GameObject__get_transform(v16, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v25, (System_String_o *)StringLiteral_9763/*"NpLevelBase"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_57;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v20 )
      goto LABEL_57;
    v26 = (UnityEngine_GameObject_o *)Instance;
    UILabel__set_text((UILabel_o *)v20, v15->fields.name, 0LL);
    age = v15->fields.age;
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
        v43 = sub_B52A88(v27);
        sub_B52A28(v43, 0LL);
      }
      v30 = overrideTd->m_Items[1];
      if ( v30 )
        UILabel__set_text((UILabel_o *)v20, v30, 0LL);
    }
    Instance = (DataManager_o *)System_String__IsNullOrEmpty(age, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject(v16, 0LL);
      if ( !Instance )
        goto LABEL_57;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    if ( !Component_WebViewObject )
      goto LABEL_57;
    UILabel__set_text((UILabel_o *)Component_WebViewObject, age, 0LL);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v46, 0LL);
    if ( !v22 )
      goto LABEL_57;
    if ( Instance )
      v31 = (System_String_o *)Instance;
    else
      v31 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)v22, v31, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_9363/*"NOBLEINFO_NP_PER"*/, 0LL);
    v44 = 100 * (treasureDevicePer / 100);
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
    Instance = (DataManager_o *)System_String__Format(v32, v33, 0LL);
    if ( !v24 || (UILabel__set_text((UILabel_o *)v24, (System_String_o *)Instance, 0LL), !v26) )
LABEL_57:
      sub_B52A5C(Instance, v13);
    UnityEngine_GameObject__SetActive(v26, !isHideInfo, 0LL);
    if ( treasureDevicePer / 100 >= 5 )
      v34 = 5;
    else
      v34 = treasureDevicePer / 100;
    if ( treasureDevicePer < 100 || isHideInfo )
      v34 = 1;
    v45 = v34;
    Component_srcLineSprite = (SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v16,
                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    v36 = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v16,
                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      v37 = BattleInformationComponent_TypeInfo;
      if ( (BYTE3(BattleInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v37 = BattleInformationComponent_TypeInfo;
      }
      NobleInfoAnimPrefix = v37->static_fields->NobleInfoAnimPrefix;
      v39 = System_Int32__ToString((int32_t)&v45, 0LL);
      Instance = (DataManager_o *)System_String__Concat_44568316(NobleInfoAnimPrefix, v39, 0LL);
      if ( Component_srcLineSprite )
      {
        SimpleAnimation__Play_16625408(Component_srcLineSprite, (System_String_o *)Instance, 0LL);
        return;
      }
      goto LABEL_57;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v36, 0LL, 0LL) )
    {
      v40 = BattleInformationComponent_TypeInfo;
      if ( (BYTE3(BattleInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v40 = BattleInformationComponent_TypeInfo;
      }
      v41 = v40->static_fields->NobleInfoAnimPrefix;
      v42 = System_Int32__ToString((int32_t)&v45, 0LL);
      Instance = (DataManager_o *)System_String__Concat_44568316(v41, v42, 0LL);
      if ( !v36 )
        goto LABEL_57;
      UnityEngine_Animation__Play_51067744(v36, (System_String_o *)Instance, 0LL);
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
  __int64 v7; // x0

  isAlreadyOverKill = this->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    sub_B52A5C(this, actionData);
  if ( !isAlreadyOverKill->max_length )
  {
    v7 = sub_B52A88(this);
    sub_B52A28(v7, 0LL);
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
  __int64 v8; // x0

  isAlreadyOverKill = this->fields.isAlreadyOverKill;
  if ( !isAlreadyOverKill )
    sub_B52A5C(this, actionData);
  if ( isAlreadyOverKill->max_length <= 1 )
  {
    v8 = sub_B52A88(this);
    sub_B52A28(v8, 0LL);
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
  BattleInformationComponent_o *v6; // x20
  UnityEngine_Object_o *overRoot; // x21
  UnityEngine_GameObject_o *v8; // x21
  float v9; // s0
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v11; // x8
  struct UnityEngine_GameObject_array *v12; // x8
  UnityEngine_Object_o *v13; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Behaviour_o *v15; // x0
  struct System_Boolean_array *isAlreadyOverKill; // x8
  float v17; // s0
  struct System_Single_array *v18; // x8
  struct System_String_array *v19; // x8
  struct System_String_array *overLabel; // x8
  struct System_String_array *v21; // x8
  struct System_Boolean_array *v22; // x8
  struct System_Single_array *timeStartOverKill; // x20
  float time; // s0
  struct System_String_array *v25; // x8
  __int64 v26; // x0

  v6 = this;
  if ( (byte_42AD1FD & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_19906/*"in"*/);
    this = (BattleInformationComponent_o *)sub_B52984(&StringLiteral_18901/*"flash"*/);
    byte_42AD1FD = 1;
  }
  if ( !actionData )
    goto LABEL_78;
  this = (BattleInformationComponent_o *)v6->fields.data;
  if ( !this )
    goto LABEL_78;
  if ( !BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0LL) )
    return;
  overRoot = (UnityEngine_Object_o *)v6->fields.overRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(overRoot, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (BattleInformationComponent_o *)v6->fields.infoPosData;
    if ( !this )
      goto LABEL_78;
    v8 = v6->fields.overRoot;
    v9 = ((float (__fastcall *)(BattleInformationComponent_o *, void *))this->klass[1]._1.namespaze)(
           this,
           this->klass[1]._1.byval_arg.data);
    GameObjectExtensions__SetLocalPositionY(v8, v9, 0LL);
  }
  overObjectList = v6->fields.overObjectList;
  if ( !overObjectList )
LABEL_78:
    sub_B52A5C(this, actionData);
  if ( overObjectList->max_length <= inOverType )
    goto LABEL_79;
  this = (BattleInformationComponent_o *)overObjectList->m_Items[inOverType];
  if ( !this )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v11 = v6->fields.overObjectList;
  if ( !v11 )
    goto LABEL_78;
  if ( v11->max_length <= inOverType )
    goto LABEL_79;
  this = (BattleInformationComponent_o *)v11->m_Items[inOverType];
  if ( !this )
    goto LABEL_78;
  this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v12 = v6->fields.overObjectList;
  if ( !v12 )
    goto LABEL_78;
  if ( v12->max_length <= inOverType )
  {
LABEL_79:
    v26 = sub_B52A88(this);
    sub_B52A28(v26, 0LL);
  }
  v13 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v12->m_Items[inOverType];
  if ( !this )
    goto LABEL_78;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_78;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v13, 0, 0LL);
    v15 = (UnityEngine_Behaviour_o *)v13;
LABEL_33:
    UnityEngine_Behaviour__set_enabled(v15, 1, 0LL);
    goto LABEL_34;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_78;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_srcLineSprite, 0, 0LL);
    v15 = (UnityEngine_Behaviour_o *)Component_srcLineSprite;
    goto LABEL_33;
  }
LABEL_34:
  isAlreadyOverKill = v6->fields.isAlreadyOverKill;
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
    this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      overLabel = v6->fields.overLabel;
      if ( !overLabel )
        goto LABEL_78;
      if ( overLabel->max_length <= inOverType )
        goto LABEL_79;
      this = (BattleInformationComponent_o *)System_String__Concat_44568316(
                                               overLabel->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_19906/*"in"*/,
                                               0LL);
      if ( !v13 )
        goto LABEL_78;
      this = (BattleInformationComponent_o *)SimpleAnimation__Play_16625408(
                                               (SimpleAnimation_o *)v13,
                                               (System_String_o *)this,
                                               0LL);
    }
    else
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v21 = v6->fields.overLabel;
        if ( !v21 )
          goto LABEL_78;
        if ( v21->max_length <= inOverType )
          goto LABEL_79;
        this = (BattleInformationComponent_o *)System_String__Concat_44568316(
                                                 v21->m_Items[inOverType],
                                                 (System_String_o *)StringLiteral_19906/*"in"*/,
                                                 0LL);
        if ( !Component_srcLineSprite )
          goto LABEL_78;
        this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_51067744(
                                                 (UnityEngine_Animation_o *)Component_srcLineSprite,
                                                 (System_String_o *)this,
                                                 0LL);
      }
    }
    v22 = v6->fields.isAlreadyOverKill;
    if ( !v22 )
      goto LABEL_78;
    if ( v22->max_length > inOverType )
    {
      v22->m_Items[inOverType + 4] = 1;
      timeStartOverKill = v6->fields.timeStartOverKill;
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
  v17 = UnityEngine_Time__get_time(0LL);
  v18 = v6->fields.timeStartOverKill;
  if ( !v18 )
    goto LABEL_78;
  if ( v18->max_length <= inOverType )
    goto LABEL_79;
  if ( (float)(v17 - v18->m_Items[inOverType + 1]) > 0.2 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v19 = v6->fields.overLabel;
      if ( !v19 )
        goto LABEL_78;
      if ( v19->max_length > inOverType )
      {
        this = (BattleInformationComponent_o *)System_String__Concat_44568316(
                                                 v19->m_Items[inOverType],
                                                 (System_String_o *)StringLiteral_18901/*"flash"*/,
                                                 0LL);
        if ( v13 )
        {
          SimpleAnimation__Play_16625408((SimpleAnimation_o *)v13, (System_String_o *)this, 0LL);
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
    this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v25 = v6->fields.overLabel;
      if ( !v25 )
        goto LABEL_78;
      if ( v25->max_length <= inOverType )
        goto LABEL_79;
      this = (BattleInformationComponent_o *)System_String__Concat_44568316(
                                               v25->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_18901/*"flash"*/,
                                               0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_78;
      UnityEngine_Animation__Play_51067744(
        (UnityEngine_Animation_o *)Component_srcLineSprite,
        (System_String_o *)this,
        0LL);
    }
  }
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__showSkillName(
        BattleInformationComponent_o *this,
        bool isPlayer,
        System_String_o *message,
        int32_t skillLevel,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x24
  WarEntity_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // w0
  const MethodInfo *v15; // x5
  __int64 v16; // x8
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x3
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AD1F8 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD1F8 = 1;
  }
  entity = 0LL;
  if ( !message || message->fields.m_stringLength < 1 )
    return 0LL;
  if ( skillInfo )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SkillMaster___);
    v12 = (WarEntity_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                           skillInfo,
                           skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_38;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           Master_WarQuestSelectionMaster,
           &entity,
           (int32_t)v12,
           (const MethodInfo_23E2334 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      v12 = entity;
      if ( !entity )
        goto LABEL_38;
      v14 = SkillEntity__GetOverWriteSkillInfoId((SkillEntity_o *)entity, 0LL);
      skillInfo = (BattleSkillInfoData_o *)BattleInformationComponent__CreateOverWriteSkillInfoObject(
                                             this,
                                             v14,
                                             message,
                                             isPlayer,
                                             skillLevel,
                                             v15);
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
    v16 = 128LL;
    if ( isPlayer )
      v16 = 120LL;
    skillInfo = (BattleSkillInfoData_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)this,
                                           *(UnityEngine_GameObject_o **)((char *)&this->klass + v16),
                                           this->fields.skillInfoRoot,
                                           0LL,
                                           0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = (WarEntity_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)skillInfo, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    if ( skillInfo )
    {
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)skillInfo,
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v12 = (WarEntity_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)v12 & 1) == 0 )
        goto LABEL_36;
      if ( Component_srcLineSprite )
      {
        if ( skillLevel >= 1 && isPlayer )
          BattleInfoMessageComponent__setSkillText(
            (BattleInfoMessageComponent_o *)Component_srcLineSprite,
            message,
            skillLevel,
            v19);
        else
          BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_srcLineSprite, message, v18);
LABEL_36:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 1, 0LL);
        return (UnityEngine_GameObject_o *)skillInfo;
      }
    }
LABEL_38:
    sub_B52A5C(v12, v13);
  }
  return (UnityEngine_GameObject_o *)skillInfo;
}


void __fastcall BattleInformationComponent__showSpecialName(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v8; // x22
  bool isPlayerID; // w0
  __int64 v10; // x8
  UnityEngine_GameObject_o *v11; // x21
  BattleInfoMessageComponent_o *v12; // x23
  UnityEngine_Object_o *v13; // x24
  System_String_o *age; // x20
  System_String_o *OverrideTDName; // x0
  System_String_o *v16; // x19
  const MethodInfo *v17; // x2
  UnityEngine_GameObject_o *v18; // x0
  bool v19; // w1

  if ( (byte_42AD1FA & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B52984(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AD1FA = 1;
  }
  if ( actionData )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   actionData->fields.treasureDvcId,
                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !Entity )
          return;
        v8 = Entity;
        Instance = this->fields.data;
        if ( Instance )
        {
          isPlayerID = BattleData__isPlayerID((BattleData_o *)Instance, actionData->fields.actorId, 0LL);
          v10 = 128LL;
          if ( isPlayerID )
            v10 = 120LL;
          Instance = BaseMonoBehaviour__createObject(
                       (BaseMonoBehaviour_o *)this,
                       *(UnityEngine_GameObject_o **)((char *)&this->klass + v10),
                       this->fields.skillInfoRoot,
                       0LL,
                       0LL);
          if ( Instance )
          {
            v11 = (UnityEngine_GameObject_o *)Instance;
            Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
            if ( Instance )
            {
              v12 = (BattleInfoMessageComponent_o *)Instance;
              v13 = (UnityEngine_Object_o *)*((_QWORD *)Instance + 8);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
              {
                Instance = v12->fields.skillSprite;
                if ( !Instance )
                  goto LABEL_29;
                Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                if ( !Instance )
                  goto LABEL_29;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
              }
              Instance = this->fields.data;
              if ( Instance )
              {
                age = v8->fields.age;
                Instance = BattleData__getServantData((BattleData_o *)Instance, actionData->fields.actorId, 0LL);
                if ( Instance )
                {
                  OverrideTDName = BattleServantData__getOverrideTDName((BattleServantData_o *)Instance, 0LL);
                  if ( OverrideTDName )
                    v16 = OverrideTDName;
                  else
                    v16 = age;
                  if ( System_String__IsNullOrEmpty(v16, 0LL) )
                  {
                    v18 = v11;
                    v19 = 0;
                  }
                  else
                  {
                    BattleInfoMessageComponent__setText(v12, v16, v17);
                    v19 = 1;
                    v18 = v11;
                  }
                  UnityEngine_GameObject__SetActive(v18, v19, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_B52A5C(Instance, v6);
  }
}


void __fastcall BattleInformationComponent__showTotalDamage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v4; // x20
  int32_t TotalDamage; // w0
  int v6; // w19
  int perf; // w8
  BattleInformationComponent_o *v8; // x20
  __int64 v9; // x22
  UILabel_o *v10; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x0
  int v14; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_42AD1F0 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_20383/*"line1"*/);
    sub_B52984(&StringLiteral_14628/*"Total {0:#,0}"*/);
    this = (BattleInformationComponent_o *)sub_B52984(&StringLiteral_20384/*"line2"*/);
    byte_42AD1F0 = 1;
  }
  if ( !actionData )
    goto LABEL_20;
  TotalDamage = BattleActionData__getTotalDamage(actionData, 0LL);
  if ( TotalDamage >= 1 )
  {
    v6 = TotalDamage;
    this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v4,
                                             v4->fields.totalLabelPrefab,
                                             v4->fields.totalMessageRoot,
                                             0LL,
                                             0LL);
    if ( !this )
      goto LABEL_20;
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28816884(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_1B7B5F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    if ( this )
    {
      perf = (int)this->fields.perf;
      v8 = this;
      if ( perf >= 1 )
      {
        v9 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= perf )
          {
            v13 = sub_B52A88(this);
            sub_B52A28(v13, 0LL);
          }
          v10 = (UILabel_o *)*((_QWORD *)&v8->fields.data + v9);
          if ( !v10 )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Component__get_gameObject(
                                                   *((UnityEngine_Component_o **)&v8->fields.data + v9),
                                                   0LL);
          if ( !this )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          if ( !this )
            break;
          if ( System_String__Equals_44555656((System_String_o *)this, (System_String_o *)StringLiteral_20383/*"line1"*/, 0LL) )
          {
            v14 = v6;
            v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
            v12 = System_String__Format((System_String_o *)StringLiteral_14628/*"Total {0:#,0}"*/, v11, 0LL);
            UILabel__set_text(v10, v12, 0LL);
          }
          else
          {
            this = (BattleInformationComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v10,
                                                     0LL);
            if ( !this )
              break;
            this = (BattleInformationComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            if ( !this )
              break;
            this = (BattleInformationComponent_o *)System_String__Equals_44555656(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_20384/*"line2"*/,
                                                     0LL);
          }
          perf = (int)v8->fields.perf;
          if ( (int)++v9 >= perf )
            return;
        }
LABEL_20:
        sub_B52A5C(this, actionData);
      }
    }
  }
}