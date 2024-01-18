void __fastcall BattleInformationComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct BattleInformationComponent_StaticFields *static_fields; // x0
  __int64 v4; // x1

  if ( (byte_4184BE0 & 1) == 0 )
  {
    sub_B2C35C(&BattleInformationComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_9594/*"NobleLevel"*/, v2);
    byte_4184BE0 = 1;
  }
  static_fields = BattleInformationComponent_TypeInfo->static_fields;
  v4 = StringLiteral_9594/*"NobleLevel"*/;
  static_fields->NobleInfoAnimPrefix = (struct System_String_o *)StringLiteral_9594/*"NobleLevel"*/;
  sub_B2C2F8(static_fields, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleInformationComponent___ctor(BattleInformationComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
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
  BaseBattleInfoPosData_o *v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  struct System_String_array *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x1
  struct UnityEngine_GameObject_array *v22; // x0
  struct System_Boolean_array *v23; // x0
  struct System_Single_array *v24; // x0
  __int64 v25; // x20
  int v26; // s0
  int v27; // s1
  int v28; // s2
  int v29; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x20
  struct System_String_array *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x0
  __int64 v37; // x0

  if ( (byte_4184BDF & 1) == 0 )
  {
    sub_B2C35C(&BaseBattleInfoPosData_TypeInfo, method);
    sub_B2C35C(&bool___TypeInfo, v3);
    sub_B2C35C(&UnityEngine_GameObject___TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    sub_B2C35C(&float___TypeInfo, v7);
    sub_B2C35C(&string___TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Vector3___TypeInfo, v9);
    sub_B2C35C(&StringLiteral_23647/*"{0}th Attack"*/, v10);
    sub_B2C35C(&StringLiteral_1171/*"3rd Attack"*/, v11);
    sub_B2C35C(&StringLiteral_21346/*"overkill_"*/, v12);
    sub_B2C35C(&StringLiteral_1103/*"1st Attack"*/, v13);
    sub_B2C35C(&StringLiteral_1152/*"2nd Attack"*/, v14);
    sub_B2C35C(&StringLiteral_21345/*"overgauge_"*/, v15);
    byte_4184BDF = 1;
  }
  v16 = (BaseBattleInfoPosData_o *)sub_B2C42C(BaseBattleInfoPosData_TypeInfo);
  BaseBattleInfoPosData___ctor(v16, 0LL);
  this->fields.infoPosData = v16;
  sub_B2C2F8(&this->fields.infoPosData, v16);
  v17 = sub_B2C374(string___TypeInfo, 2LL);
  if ( !v17 )
    goto LABEL_41;
  v19 = (struct System_String_array *)v17;
  v17 = StringLiteral_21346/*"overkill_"*/;
  if ( StringLiteral_21346/*"overkill_"*/ )
  {
    v17 = sub_B2C41C(StringLiteral_21346/*"overkill_"*/, v19->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_40;
    v20 = StringLiteral_21346/*"overkill_"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !v19->max_length )
    goto LABEL_39;
  v19->m_Items[0] = (System_String_o *)v20;
  sub_B2C2F8(v19->m_Items, v20);
  v17 = StringLiteral_21345/*"overgauge_"*/;
  if ( StringLiteral_21345/*"overgauge_"*/ )
  {
    v17 = sub_B2C41C(StringLiteral_21345/*"overgauge_"*/, v19->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_40;
    v21 = StringLiteral_21345/*"overgauge_"*/;
  }
  else
  {
    v21 = 0LL;
  }
  if ( v19->max_length <= 1 )
    goto LABEL_39;
  v19->m_Items[1] = (System_String_o *)v21;
  sub_B2C2F8(&v19->m_Items[1], v21);
  this->fields.overLabel = v19;
  sub_B2C2F8(&this->fields.overLabel, v19);
  v22 = (struct UnityEngine_GameObject_array *)sub_B2C374(UnityEngine_GameObject___TypeInfo, 2LL);
  this->fields.overObjectList = v22;
  sub_B2C2F8(&this->fields.overObjectList, v22);
  v23 = (struct System_Boolean_array *)sub_B2C374(bool___TypeInfo, 2LL);
  this->fields.isAlreadyOverKill = v23;
  sub_B2C2F8(&this->fields.isAlreadyOverKill, v23);
  v24 = (struct System_Single_array *)sub_B2C374(float___TypeInfo, 2LL);
  this->fields.timeStartOverKill = v24;
  sub_B2C2F8(&this->fields.timeStartOverKill, v24);
  v25 = sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
  *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v25 )
    goto LABEL_41;
  v29 = *(_DWORD *)(v25 + 24);
  if ( !v29 || (*(_DWORD *)(v25 + 32) = v26, *(_DWORD *)(v25 + 36) = v27, *(_DWORD *)(v25 + 40) = v28, v29 == 1) )
  {
LABEL_39:
    v36 = sub_B2C460(v17);
    sub_B2C400(v36, 0LL);
  }
  *(_DWORD *)(v25 + 52) = 0;
  *(_QWORD *)(v25 + 44) = 0xC24C000000000000LL;
  this->fields.showPositions = (struct UnityEngine_Vector3_array *)v25;
  sub_B2C2F8(&this->fields.showPositions, v25);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.motionMessageObjList = (struct System_Collections_Generic_List_GameObject__o *)v30;
  sub_B2C2F8(&this->fields.motionMessageObjList, v30);
  v17 = sub_B2C374(string___TypeInfo, 4LL);
  if ( !v17 )
LABEL_41:
    sub_B2C434(v17, v18);
  v31 = (struct System_String_array *)v17;
  v17 = StringLiteral_1103/*"1st Attack"*/;
  if ( StringLiteral_1103/*"1st Attack"*/ )
  {
    v17 = sub_B2C41C(StringLiteral_1103/*"1st Attack"*/, v31->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_40;
    v32 = StringLiteral_1103/*"1st Attack"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( !v31->max_length )
    goto LABEL_39;
  v31->m_Items[0] = (System_String_o *)v32;
  sub_B2C2F8(v31->m_Items, v32);
  v17 = StringLiteral_1152/*"2nd Attack"*/;
  if ( StringLiteral_1152/*"2nd Attack"*/ )
  {
    v17 = sub_B2C41C(StringLiteral_1152/*"2nd Attack"*/, v31->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_40;
    v33 = StringLiteral_1152/*"2nd Attack"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v31->max_length <= 1 )
    goto LABEL_39;
  v31->m_Items[1] = (System_String_o *)v33;
  sub_B2C2F8(&v31->m_Items[1], v33);
  v17 = StringLiteral_1171/*"3rd Attack"*/;
  if ( StringLiteral_1171/*"3rd Attack"*/ )
  {
    v17 = sub_B2C41C(StringLiteral_1171/*"3rd Attack"*/, v31->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_40;
    v34 = StringLiteral_1171/*"3rd Attack"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v31->max_length <= 2 )
    goto LABEL_39;
  v31->m_Items[2] = (System_String_o *)v34;
  sub_B2C2F8(&v31->m_Items[2], v34);
  v17 = StringLiteral_23647/*"{0}th Attack"*/;
  if ( StringLiteral_23647/*"{0}th Attack"*/ )
  {
    v17 = sub_B2C41C(StringLiteral_23647/*"{0}th Attack"*/, v31->obj.klass->_1.element_class);
    if ( v17 )
    {
      v35 = StringLiteral_23647/*"{0}th Attack"*/;
      goto LABEL_37;
    }
LABEL_40:
    v37 = sub_B2C454();
    sub_B2C400(v37, 0LL);
  }
  v35 = 0LL;
LABEL_37:
  if ( v31->max_length <= 3 )
    goto LABEL_39;
  v31->m_Items[3] = (System_String_o *)v35;
  sub_B2C2F8(&v31->m_Items[3], v35);
  this->fields.attackCount = v31;
  sub_B2C2F8(&this->fields.attackCount, v31);
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
  System_String_array *v11; // x22
  System_String_o *EffectAssetName; // x0
  __int64 v13; // x1
  System_String_o *v14; // x23
  System_String_o *v15; // x23
  BattleInformationComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  UnityEngine_GameObject_o *TargetPrefab; // x0
  const MethodInfo *v19; // x4
  __int64 v21; // x0
  __int64 v22; // x0

  if ( (byte_4184BCF & 1) == 0 )
  {
    sub_B2C35C(&BattleDataDefine_TypeInfo, messages);
    sub_B2C35C(&BattleEffectUtility_TypeInfo, v8);
    this = (BattleInformationComponent_o *)sub_B2C35C(&string___TypeInfo, v9);
    byte_4184BCF = 1;
  }
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(
                             this,
                             messageType,
                             *(const MethodInfo **)&messageType);
  v11 = (System_String_array *)sub_B2C374(string___TypeInfo, 2LL);
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  EffectAssetName = BattleEffectUtility__get_EffectAssetName(0LL);
  if ( !v11 )
    sub_B2C434(EffectAssetName, v13);
  v14 = EffectAssetName;
  if ( EffectAssetName )
  {
    EffectAssetName = (System_String_o *)sub_B2C41C(EffectAssetName, v11->obj.klass->_1.element_class);
    if ( !EffectAssetName )
      goto LABEL_18;
  }
  if ( !v11->max_length )
    goto LABEL_17;
  v11->m_Items[0] = v14;
  sub_B2C2F8(v11->m_Items, v14);
  EffectAssetName = (System_String_o *)BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    EffectAssetName = (System_String_o *)BattleDataDefine_TypeInfo;
  }
  v15 = *(System_String_o **)(*(_QWORD *)&EffectAssetName[7].fields + 40LL);
  if ( v15 )
  {
    EffectAssetName = (System_String_o *)sub_B2C41C(v15, v11->obj.klass->_1.element_class);
    if ( !EffectAssetName )
    {
LABEL_18:
      v22 = sub_B2C454();
      sub_B2C400(v22, 0LL);
    }
  }
  if ( v11->max_length <= 1 )
  {
LABEL_17:
    v21 = sub_B2C460(EffectAssetName);
    sub_B2C400(v21, 0LL);
  }
  v11->m_Items[1] = v15;
  sub_B2C2F8(&v11->m_Items[1], v15);
  TargetPrefab = BattleInformationComponent__GetTargetPrefab(v16, MessageObjectAssetName, v11, v17);
  return BattleInformationComponent__CreateBattleMessageObject_19385740(
           (BattleInformationComponent_o *)TargetPrefab,
           messages,
           TargetPrefab,
           parentTransform,
           v19);
}


UnityEngine_GameObject_o *__fastcall BattleInformationComponent__CreateBattleMessageObject_19385740(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        UnityEngine_GameObject_o *msgPrefab,
        UnityEngine_Transform_o *parentTransform,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x22
  UILabel_o *v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_4184BD0 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___, messages);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4184BD0 = 1;
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
    v11 = UnityEngine_Object__Instantiate_UILabel_(
            (UILabel_o *)msgPrefab,
            parentTransform,
            (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
    if ( !v11 )
      goto LABEL_15;
    v10 = (UnityEngine_GameObject_o *)v11;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)v11,
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleConcatLabelMessageComponent___);
    v11 = (UILabel_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)v11 & 1) != 0 )
    {
      if ( Component_srcLineSprite )
      {
        BattleConcatLabelMessageComponent__SetTexts(
          (BattleConcatLabelMessageComponent_o *)Component_srcLineSprite,
          messages,
          0LL);
        return v10;
      }
LABEL_15:
      sub_B2C434(v11, v12);
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
  BattleInformationComponent_o *v12; // x0
  const MethodInfo *v13; // x2
  BattleLogic_o *logic; // x0
  System_String_array *v15; // x20
  System_String_o *MessageObjectAssetName; // x21
  System_String_array *v17; // x22
  BattleDataDefine_c *v18; // x8
  System_String_o *ASSET_BATTLE_COMMON; // x23
  BattleInformationComponent_o *v20; // x0
  const MethodInfo *v21; // x3
  UnityEngine_GameObject_o *TargetPrefab; // x0
  const MethodInfo *v23; // x4
  UnityEngine_GameObject_o *v24; // x19
  __int64 v26; // x0
  __int64 v27; // x0

  if ( (byte_4184BCE & 1) == 0 )
  {
    sub_B2C35C(&BattleDataDefine_TypeInfo, message);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___, v9);
    sub_B2C35C(&string___TypeInfo, v10);
    byte_4184BCE = 1;
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
  {
    v12 = (BattleInformationComponent_o *)sub_B2C374(string___TypeInfo, 0LL);
  }
  else
  {
    logic = this->fields.logic;
    if ( !logic )
      goto LABEL_18;
    logic = (BattleLogic_o *)BattleLogic__get_ParseBattleMsg(logic, v11);
    if ( !logic )
      goto LABEL_18;
    v12 = (BattleInformationComponent_o *)ParseBattleMessage__Replace((ParseBattleMessage_o *)logic, message, 0LL);
  }
  v15 = (System_String_array *)v12;
  MessageObjectAssetName = BattleInformationComponent__GetMessageObjectAssetName(v12, 0, v13);
  logic = (BattleLogic_o *)sub_B2C374(string___TypeInfo, 1LL);
  v17 = (System_String_array *)logic;
  v18 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v18 = BattleDataDefine_TypeInfo;
  }
  if ( !v17 )
    goto LABEL_18;
  ASSET_BATTLE_COMMON = v18->static_fields->ASSET_BATTLE_COMMON;
  if ( ASSET_BATTLE_COMMON )
  {
    logic = (BattleLogic_o *)sub_B2C41C(ASSET_BATTLE_COMMON, v17->obj.klass->_1.element_class);
    if ( !logic )
    {
      v27 = sub_B2C454();
      sub_B2C400(v27, 0LL);
    }
  }
  if ( !v17->max_length )
  {
    v26 = sub_B2C460(logic);
    sub_B2C400(v26, 0LL);
  }
  v17->m_Items[0] = ASSET_BATTLE_COMMON;
  sub_B2C2F8(v17->m_Items, ASSET_BATTLE_COMMON);
  TargetPrefab = BattleInformationComponent__GetTargetPrefab(v20, MessageObjectAssetName, v17, v21);
  logic = (BattleLogic_o *)BattleInformationComponent__CreateBattleMessageObject_19385740(
                             (BattleInformationComponent_o *)TargetPrefab,
                             v15,
                             TargetPrefab,
                             parentTransform,
                             v23);
  if ( !logic
    || (v24 = (UnityEngine_GameObject_o *)logic,
        (logic = (BattleLogic_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                    (UnityEngine_GameObject_o *)logic,
                                    (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_CommonEffectComponent___)) == 0LL) )
  {
LABEL_18:
    sub_B2C434(logic, v11);
  }
  CommonEffectComponent__SetTime((CommonEffectComponent_o *)logic, lifeTime, 0.0, 0LL);
  return v24;
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
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x19
  const MethodInfo *v14; // x2
  UnityEngine_GameObject_o *v15; // x22
  UnityEngine_Object_o *v16; // x20

  if ( (byte_4184BD1 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, isPlayer);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4184BD1 = 1;
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
  v13 = Object;
  Object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         Object,
                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
  if ( !Object )
    goto LABEL_16;
  v15 = Object;
  BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Object, message, v14);
  if ( !showSkillSprite )
  {
    v16 = *(UnityEngine_Object_o **)&v15[2].fields.m_CachedPtr;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
    {
      Object = *(UnityEngine_GameObject_o **)&v15[2].fields.m_CachedPtr;
      if ( Object )
      {
        Object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Object, 0LL);
        if ( Object )
        {
          UnityEngine_GameObject__SetActive(Object, 0, 0LL);
          return v13;
        }
      }
LABEL_16:
      sub_B2C434(Object, v12);
    }
  }
  return v13;
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
  UnityEngine_Component_o *gameObject; // x0
  __int64 v20; // x1
  srcLineSprite_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *mcTweenScaleP; // x21
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  v24 = skillLevel;
  if ( (byte_4184BD2 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___,
      *(_QWORD *)&overWriteSkillInfoId);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_2525/*"BATTLE_SKILL_NAME_LEVEL"*/, v13);
    byte_4184BD2 = 1;
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
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_2525/*"BATTLE_SKILL_NAME_LEVEL"*/, 0LL);
        v18 = (Il2CppObject *)System_Int32__ToString((int32_t)&v24, 0LL);
        message = System_String__Format_44301068(v17, (Il2CppObject *)message, v18, 0LL);
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
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_33;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v14,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
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
            return v14;
          }
        }
LABEL_33:
        sub_B2C434(gameObject, v20);
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

  if ( (byte_4184BDD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4184BDD = 1;
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
    sub_B2C2F8(&this->fields.skillSkipObj, Object);
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
      sub_B2C434(infoPosData, v4);
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

  if ( (byte_4184BDE & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4184BDE = 1;
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
    UnityEngine_Object__Destroy_35314896(v6, 0LL);
    *p_skillSkipObj = 0LL;
    sub_B2C2F8(p_skillSkipObj, 0LL);
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
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20
  struct System_Collections_Generic_List_GameObject__o *motionMessageObjList; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4184BD7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4184BD7 = 1;
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
    v10 = (UnityEngine_Object_o *)this->fields.commonMessageObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(v10, 0LL);
  }
  motionMessageObjList = this->fields.motionMessageObjList;
  if ( !motionMessageObjList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)motionMessageObjList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v13.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  motionMessageObjList = this->fields.motionMessageObjList;
  if ( !motionMessageObjList )
LABEL_20:
    sub_B2C434(motionMessageObjList, v9);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)motionMessageObjList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
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

  if ( (byte_4184BCD & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&messageType);
    sub_B2C35C(&StringLiteral_16661/*"battle_message_{0}"*/, v4);
    byte_4184BCD = 1;
  }
  v7 = messageType;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Format((System_String_o *)StringLiteral_16661/*"battle_message_{0}"*/, v5, 0LL);
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
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x21
  __int64 v13; // x0

  if ( (byte_4184BDC & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, prefabName);
    sub_B2C35C(&AssetManager_TypeInfo, v6);
    this = (BattleInformationComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4184BDC = 1;
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
        v13 = sub_B2C460(this);
        sub_B2C400(v13, 0LL);
      }
      v10 = assetNames->m_Items[v9];
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v10, 0LL);
      if ( !this )
        break;
      Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 (AssetData_o *)this,
                                                                 prefabName,
                                                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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
    sub_B2C434(this, prefabName);
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
  __int64 v16; // x1
  __int64 overRoot; // x0
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_GameObject_array *overObjectList; // x21
  UnityEngine_GameObject_o *v20; // x20
  struct UnityEngine_GameObject_array *v21; // x8
  struct System_Boolean_array *isAlreadyOverKill; // x8
  struct System_Single_array *timeStartOverKill; // x8
  AssetData_o *v24; // x20
  struct UnityEngine_GameObject_array *v25; // x21
  UnityEngine_GameObject_o *v26; // x22
  UnityEngine_Transform_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x22
  struct UnityEngine_GameObject_array *v29; // x8
  struct System_Boolean_array *v30; // x8
  struct System_Single_array *v31; // x8
  struct UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  UnityEngine_Object_o *fieldParam; // x20
  struct BattleData_o *data; // x8
  __int64 v35; // x0
  __int64 v36; // x0

  if ( (byte_4184BC8 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, inperf);
    sub_B2C35C(&AssetManager_TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_18198/*"ef_overgauge01"*/, v11);
    sub_B2C35C(&StringLiteral_2755/*"Battle/Common"*/, v12);
    sub_B2C35C(&StringLiteral_18205/*"ef_skillskip"*/, v13);
    sub_B2C35C(&StringLiteral_18255/*"effect/ef_overkill01"*/, v14);
    byte_4184BC8 = 1;
  }
  this->fields.perf = inperf;
  sub_B2C2F8(&this->fields.perf, inperf);
  this->fields.data = indata;
  sub_B2C2F8(&this->fields.data, indata);
  this->fields.logic = inlogic;
  sub_B2C2F8(&this->fields.logic, inlogic);
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
        overRoot = (__int64)BaseMonoBehaviour__createObject_19214240(
                              (BaseMonoBehaviour_o *)this,
                              (System_String_o *)StringLiteral_18255/*"effect/ef_overkill01"*/,
                              transform,
                              0LL,
                              0LL),
        (overObjectList = this->fields.overObjectList) == 0LL) )
  {
LABEL_45:
    sub_B2C434(overRoot, v16);
  }
  v20 = (UnityEngine_GameObject_o *)overRoot;
  if ( overRoot )
  {
    overRoot = sub_B2C41C(overRoot, overObjectList->obj.klass->_1.element_class);
    if ( !overRoot )
      goto LABEL_47;
  }
  if ( !overObjectList->max_length )
    goto LABEL_46;
  overObjectList->m_Items[0] = v20;
  sub_B2C2F8(overObjectList->m_Items, v20);
  v21 = this->fields.overObjectList;
  if ( !v21 )
    goto LABEL_45;
  if ( !v21->max_length )
    goto LABEL_46;
  overRoot = (__int64)v21->m_Items[0];
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
    v35 = sub_B2C460(overRoot);
    sub_B2C400(v35, 0LL);
  }
  timeStartOverKill->m_Items[1] = 0.0;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  overRoot = (__int64)AssetManager__getAssetStorage((System_String_o *)StringLiteral_2755/*"Battle/Common"*/, 0LL);
  if ( !overRoot )
    goto LABEL_45;
  v24 = (AssetData_o *)overRoot;
  overRoot = (__int64)AssetData__GetObject_WarBoardWaitTimeSetting_(
                        (AssetData_o *)overRoot,
                        (System_String_o *)StringLiteral_18198/*"ef_overgauge01"*/,
                        (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !this->fields.overRoot )
    goto LABEL_45;
  v25 = this->fields.overObjectList;
  v26 = (UnityEngine_GameObject_o *)overRoot;
  v27 = UnityEngine_GameObject__get_transform(this->fields.overRoot, 0LL);
  overRoot = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v26, v27, 0LL, 0LL);
  if ( !v25 )
    goto LABEL_45;
  v28 = (UnityEngine_GameObject_o *)overRoot;
  if ( overRoot )
  {
    overRoot = sub_B2C41C(overRoot, v25->obj.klass->_1.element_class);
    if ( !overRoot )
    {
LABEL_47:
      v36 = sub_B2C454();
      sub_B2C400(v36, 0LL);
    }
  }
  if ( v25->max_length <= 1 )
    goto LABEL_46;
  v25->m_Items[1] = v28;
  sub_B2C2F8(&v25->m_Items[1], v28);
  v29 = this->fields.overObjectList;
  if ( !v29 )
    goto LABEL_45;
  if ( v29->max_length <= 1 )
    goto LABEL_46;
  overRoot = (__int64)v29->m_Items[1];
  if ( !overRoot )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)overRoot, 0, 0LL);
  v30 = this->fields.isAlreadyOverKill;
  if ( !v30 )
    goto LABEL_45;
  if ( v30->max_length <= 1 )
    goto LABEL_46;
  v30->m_Items[5] = 0;
  v31 = this->fields.timeStartOverKill;
  if ( !v31 )
    goto LABEL_45;
  if ( v31->max_length <= 1 )
    goto LABEL_46;
  v31->m_Items[2] = 0.0;
  Object_WarBoardWaitTimeSetting = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                        v24,
                                                                        (System_String_o *)StringLiteral_18205/*"ef_skillskip"*/,
                                                                        (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  this->fields.skillSkipPrefab = Object_WarBoardWaitTimeSetting;
  sub_B2C2F8(&this->fields.skillSkipPrefab, Object_WarBoardWaitTimeSetting);
  GameObjectExtensions__SafeSetParent_31331952(this->fields.overRoot, this->fields.fsOffsetRoot, 0LL);
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
  struct BaseBattleInfoPosData_o *BattleInfoPosData; // x0
  UnityEngine_Object_o *fieldParam; // x20
  const MethodInfo *v5; // x1
  BattleFieldParamComponent_o *v6; // x0

  if ( (byte_4184BC9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4184BC9 = 1;
  }
  BattleInfoPosData = BattleInformationComponent__MakeBattleInfoPosData(this, method);
  this->fields.infoPosData = BattleInfoPosData;
  sub_B2C2F8(&this->fields.infoPosData, BattleInfoPosData);
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
      sub_B2C434(0LL, v5);
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
  int v6; // w20
  PosCountSpBattleInfoPosData_o *v7; // x20

  if ( (byte_4184BCA & 1) == 0 )
  {
    sub_B2C35C(&NormalRaidTypeBossBattleInfoPosData_TypeInfo, method);
    sub_B2C35C(&PosCountNormalBattleInfoPosData_TypeInfo, v3);
    sub_B2C35C(&PosCountSpBattleInfoPosData_TypeInfo, v4);
    byte_4184BCA = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_15;
  data = (BattleData_o *)BattleData__GetRaidType(data, 0LL);
  if ( !this->fields.data )
    goto LABEL_15;
  v6 = (int)data;
  if ( !BattleData__get_IsEnemyPosCountNormal(this->fields.data, 0LL) )
  {
    v7 = (PosCountSpBattleInfoPosData_o *)sub_B2C42C(PosCountSpBattleInfoPosData_TypeInfo);
    PosCountSpBattleInfoPosData___ctor(v7, 0LL);
    if ( !v7 )
      goto LABEL_15;
    goto LABEL_13;
  }
  if ( !v6 )
    goto LABEL_10;
  data = this->fields.data;
  if ( !data || (data = (BattleData_o *)BattleData__getStageEntity(data, 0LL)) == 0LL )
LABEL_15:
    sub_B2C434(data, method);
  if ( !StageEntity__IsForceSetNormalEnemyStatusUI((StageEntity_o *)data, 0LL) )
  {
    v7 = (PosCountSpBattleInfoPosData_o *)sub_B2C42C(NormalRaidTypeBossBattleInfoPosData_TypeInfo);
    NormalRaidTypeBossBattleInfoPosData___ctor((NormalRaidTypeBossBattleInfoPosData_o *)v7, 0LL);
    if ( !v7 )
      goto LABEL_15;
    goto LABEL_13;
  }
LABEL_10:
  v7 = (PosCountSpBattleInfoPosData_o *)sub_B2C42C(PosCountNormalBattleInfoPosData_TypeInfo);
  PosCountNormalBattleInfoPosData___ctor((PosCountNormalBattleInfoPosData_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_15;
LABEL_13:
  ((void (__fastcall *)(PosCountSpBattleInfoPosData_o *, struct BattlePerformance_o *, void *))v7->klass->vtable._6_Init.method)(
    v7,
    this->fields.perf,
    v7->klass[1]._1.image);
  return (BaseBattleInfoPosData_o *)v7;
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
  UnityEngine_GameObject_o *v7; // x1

  if ( !actionData || (v3 = this, (this = (BattleInformationComponent_o *)this->fields.data) == 0LL) )
    sub_B2C434(this, actionData);
  isPlayerID = BattleData__isPlayerID((BattleData_o *)this, actionData->fields.actorId, 0LL);
  v7 = BattleInformationComponent__showSkillName(
         v3,
         isPlayerID,
         actionData->fields.skillMessage,
         0,
         actionData->fields.skillInfo,
         v6);
  v3->fields.commonMessageObject = v7;
  sub_B2C2F8(&v3->fields.commonMessageObject, v7);
}


void __fastcall BattleInformationComponent__ShowBattleMessage(
        BattleInformationComponent_o *this,
        System_String_array *messages,
        int32_t messageType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *motionMessageObjList; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  UnityEngine_Object_o *BattleMessageObject; // x20

  if ( (byte_4184BDB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, messages);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4184BDB = 1;
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
                                                    v10);
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
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
          return;
        }
      }
LABEL_13:
      sub_B2C434(motionMessageObjList, v9);
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
  GameObjectExtensions__SafeSetParent_31331952(this->fields.overRoot, fsOffsetRoot, 0LL);
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
  struct UnityEngine_GameObject_array *v10; // x8
  UnityEngine_Object_o *v11; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  struct System_String_array *overLabel; // x8
  System_String_o *v14; // x0
  struct System_String_array *v15; // x8
  System_String_o *v16; // x0
  struct System_Boolean_array *v17; // x8
  __int64 v18; // x0

  v4 = this;
  if ( (byte_4184BD9 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, *(_QWORD *)&type);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    this = (BattleInformationComponent_o *)sub_B2C35C(&StringLiteral_21329/*"out"*/, v7);
    byte_4184BD9 = 1;
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
                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v10 = v4->fields.overObjectList;
  if ( !v10 )
    goto LABEL_32;
  if ( v10->max_length <= type )
    goto LABEL_33;
  v11 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v10->m_Items[type];
  if ( !this )
    goto LABEL_32;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v11 )
    {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, 0, 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11, 1, 0LL);
      overLabel = v4->fields.overLabel;
      if ( overLabel )
      {
        if ( overLabel->max_length <= type )
          goto LABEL_33;
        v14 = System_String__Concat_44305532(overLabel->m_Items[type], (System_String_o *)StringLiteral_21329/*"out"*/, 0LL);
        this = (BattleInformationComponent_o *)SimpleAnimation__Play_16486620((SimpleAnimation_o *)v11, v14, 0LL);
        goto LABEL_28;
      }
    }
LABEL_32:
    sub_B2C434(this, *(_QWORD *)&type);
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
  v15 = v4->fields.overLabel;
  if ( !v15 )
    goto LABEL_32;
  if ( v15->max_length <= type )
    goto LABEL_33;
  v16 = System_String__Concat_44305532(v15->m_Items[type], (System_String_o *)StringLiteral_21329/*"out"*/, 0LL);
  this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_50201580(
                                           (UnityEngine_Animation_o *)Component_srcLineSprite,
                                           v16,
                                           0LL);
LABEL_28:
  v17 = v4->fields.isAlreadyOverKill;
  if ( !v17 )
    goto LABEL_32;
  if ( v17->max_length <= type )
  {
LABEL_33:
    v18 = sub_B2C460(this);
    sub_B2C400(v18, 0LL);
  }
  v17->m_Items[type + 4] = 0;
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
    sub_B2C434(this, *(_QWORD *)&type);
  }
  if ( showPositions->max_length <= zureIndex )
  {
LABEL_9:
    v8 = sub_B2C460(this);
    sub_B2C400(v8, 0LL);
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
  UnityEngine_Object_o *Object; // x21
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  BattleInfoMessageComponent_o *v17; // x22
  const MethodInfo *v18; // x3
  UnityEngine_GameObject_o *result; // x0
  BattleInformationComponent_o *v20; // x0
  BattleActionData_o *v21; // x1
  const MethodInfo *v22; // x2

  if ( (byte_4184BD4 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, *(_QWORD *)&imageId);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_18237/*"effect/ef_boostitem01"*/, v9);
    byte_4184BD4 = 1;
  }
  if ( !message || message->fields.m_stringLength < 1 )
    return 0LL;
  v10 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_18237/*"effect/ef_boostitem01"*/, 0LL);
  v11 = (UnityEngine_GameObject_o *)v10;
  if ( !v10 || (UnityEngine_GameObject_c *)v10->klass == UnityEngine_GameObject_TypeInfo )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                       (BaseMonoBehaviour_o *)this,
                                       v11,
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
                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___)) == 0LL )
      {
        sub_B2C434(Component_srcLineSprite, v15);
      }
      v17 = (BattleInfoMessageComponent_o *)Component_srcLineSprite;
      BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_srcLineSprite, message, v16);
      BattleInfoMessageComponent__setItemSprite(v17, imageId, 0, v18);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0LL);
    }
    return (UnityEngine_GameObject_o *)Object;
  }
  v20 = (BattleInformationComponent_o *)sub_B2C728(v10);
  BattleInformationComponent__showSpecialName(v20, v21, v22);
  return result;
}


void __fastcall BattleInformationComponent__showCommonMessage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleActionData_o *v3; // x20
  BattleInformationComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  int v14; // w23
  UnityEngine_GameObject_o *v15; // x21
  BattleInfoMessageComponent_o *v16; // x22
  const MethodInfo *v17; // x3
  __int64 actionIndex; // x8
  struct System_String_array *attackCount; // x9
  System_String_o *motionMessage; // x1
  struct BattleSkillInfoData_o *skillInfo; // x8
  int32_t type; // w9
  int32_t skilllv; // w21
  const MethodInfo *v24; // x3
  struct BattleSkillInfoData_o *v25; // x8
  UnityEngine_GameObject_o *v26; // x0
  System_String_o *v27; // x24
  Il2CppObject *v28; // x0
  System_String_o **v29; // x8
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *BattleCommandCardObject; // x23
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v33; // x3
  bool isPlayerID; // w0
  const MethodInfo *v35; // x5
  System_String_o *skillMessage; // x2
  BattleSkillInfoData_o *v37; // x4
  bool v38; // w1
  BattleInformationComponent_o *v39; // x0
  int32_t v40; // w3
  bool v41; // w0
  __int64 v42; // x0
  int v43; // [xsp+Ch] [xbp-34h] BYREF

  v3 = actionData;
  v4 = this;
  if ( (byte_4184BD6 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___, actionData);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v5);
    sub_B2C35C(&int_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_2895/*"Buster!"*/, v8);
    sub_B2C35C(&StringLiteral_10990/*"Quick!"*/, v9);
    sub_B2C35C(&StringLiteral_2086/*"Arts!"*/, v10);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    this = (BattleInformationComponent_o *)sub_B2C35C(&StringLiteral_6311/*"Extra!"*/, v12);
    byte_4184BD6 = 1;
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
      v14 = (int)this;
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
      v15 = (UnityEngine_GameObject_o *)this;
      this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                               (UnityEngine_GameObject_o *)this,
                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
      if ( !v4->fields.data )
        goto LABEL_62;
      v16 = (BattleInfoMessageComponent_o *)this;
      this = (BattleInformationComponent_o *)BattleData__isPlayerID(v4->fields.data, v3->fields.actorId, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_48:
        UnityEngine_GameObject__SetActive(v15, 1, 0LL);
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
          v27 = attackCount->m_Items[3];
          v43 = actionIndex + 1;
          v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
          this = (BattleInformationComponent_o *)System_String__Format(v27, v28, 0LL);
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
          if ( (unsigned int)(v14 - 1) > 3 )
          {
            v29 = (System_String_o **)&StringLiteral_1/*""*/;
            if ( !v16 )
              goto LABEL_62;
          }
          else
          {
            v29 = (System_String_o **)*(&off_3DCB6B0 + v14 - 1);
            if ( !v16 )
              goto LABEL_62;
          }
          BattleInfoMessageComponent__setText_19379520(v16, (System_String_o *)actionData, *v29, v17);
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
                  v16,
                  (UnityEngine_GameObject_o *)BattleCommandCardObject,
                  ServantData,
                  v33);
                if ( BattleCommandCardObject )
                {
                  this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)BattleCommandCardObject,
                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleCommandComponent___);
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
          sub_B2C434(this, actionData);
        }
      }
      v42 = sub_B2C460(this);
      sub_B2C400(v42, 0LL);
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
      v13);
    goto LABEL_19;
  }
  v15 = 0LL;
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
    v37 = v3->fields.skillInfo;
    v38 = isPlayerID;
    v39 = v4;
    v40 = skilllv;
    goto LABEL_52;
  }
  this = (BattleInformationComponent_o *)BattleActionData__isBoostSkill(v3, 0LL);
  v15 = 0LL;
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_54;
  if ( v3->fields.noOperation )
  {
LABEL_19:
    v15 = 0LL;
    goto LABEL_54;
  }
  v25 = v3->fields.skillInfo;
  if ( !v25 )
    goto LABEL_62;
  if ( v25->fields.itemImageId == -1 )
  {
    this = (BattleInformationComponent_o *)v4->fields.data;
    if ( !this )
      goto LABEL_62;
    v41 = BattleData__isPlayerID((BattleData_o *)this, v3->fields.actorId, 0LL);
    skillMessage = v3->fields.skillMessage;
    v37 = v3->fields.skillInfo;
    v38 = v41;
    v39 = v4;
    v40 = 0;
LABEL_52:
    v26 = BattleInformationComponent__showSkillName(v39, v38, skillMessage, v40, v37, v35);
    goto LABEL_53;
  }
  v26 = BattleInformationComponent__showBoostSkillName(v4, v3->fields.imageId, v3->fields.skillMessage, v24);
LABEL_53:
  v15 = v26;
LABEL_54:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
  {
    v4->fields.commonMessageObject = v15;
    sub_B2C2F8(&v4->fields.commonMessageObject, v15);
  }
}


void __fastcall BattleInformationComponent__showCommonMessage_19393664(
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
  Il2CppObject *current; // x23
  bool HasRubyFormat; // w24
  const MethodInfo *v25; // x3
  BattleInformationComponent_o *v26; // x23
  UnityEngine_GameObject_o *v27; // x21
  const MethodInfo *v28; // x2
  bool isPlayerID; // w0
  const MethodInfo *v30; // x4
  BattleEffectUtility_c *v31; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x20
  AssetData_o *v34; // x20
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x20
  __int64 v36; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-60h] BYREF

  v8 = this;
  if ( (byte_4184BDA & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, motionMessage);
    sub_B2C35C(&AssetManager_TypeInfo, v9);
    sub_B2C35C(&BattleEffectUtility_TypeInfo, v10);
    sub_B2C35C(&char___TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v14);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v15);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v19);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v20);
    sub_B2C35C(&StringLiteral_16672/*"battle_states_popup"*/, v21);
    this = (BattleInformationComponent_o *)sub_B2C35C(&StringLiteral_2759/*"Battle/Effect/"*/, v22);
    byte_4184BDA = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( !motionMessage )
    goto LABEL_49;
  if ( motionMessage->fields.m_stringLength < 1 )
    return;
  this = (BattleInformationComponent_o *)v8->fields.motionMessageObjList;
  if ( !this )
    goto LABEL_49;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  this = (BattleInformationComponent_o *)v8->fields.motionMessageObjList;
  if ( !this )
    goto LABEL_49;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  HasRubyFormat = ScriptLineMessage__HasRubyFormat(motionMessage, 0LL);
  this = (BattleInformationComponent_o *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_49;
  if ( !LODWORD(this->fields.perf) )
    goto LABEL_50;
  LOWORD(this->fields.data) = 58;
  this = (BattleInformationComponent_o *)System_String__Split(motionMessage, (System_Char_array *)this, 0LL);
  if ( HasRubyFormat )
    goto LABEL_18;
  v26 = this;
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
                                               v30);
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
          v27 = (UnityEngine_GameObject_o *)this;
          this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
          if ( this )
          {
            BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)this, motionMessage, v28);
LABEL_45:
            UnityEngine_GameObject__SetActive(v27, 1, 0LL);
            goto LABEL_46;
          }
        }
LABEL_49:
        sub_B2C434(this, motionMessage);
      }
      this = (BattleInformationComponent_o *)BattleInformationComponent__CreateDefaultBattleMessageObject(
                                               v8,
                                               motionMessage,
                                               v8->fields.skillInfoRoot,
                                               1.5,
                                               v25);
      if ( !this )
        goto LABEL_49;
    }
    v27 = (UnityEngine_GameObject_o *)this;
    goto LABEL_45;
  }
  this = (BattleInformationComponent_o *)v8->fields.perf;
  if ( !this )
    goto LABEL_49;
  BattlePerformance__setStateString((BattlePerformance_o *)this, actorId, motionMessage, 0LL);
  v31 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v31 = BattleEffectUtility_TypeInfo;
  }
  v32 = System_Int32__ToString((unsigned int)v31->static_fields + 24, 0LL);
  v33 = System_String__Concat_44305532((System_String_o *)StringLiteral_2759/*"Battle/Effect/"*/, v32, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  this = (BattleInformationComponent_o *)AssetManager__getAssetStorage(v33, 0LL);
  if ( !LODWORD(v26->fields.perf) )
  {
LABEL_50:
    v36 = sub_B2C460(this);
    sub_B2C400(v36, 0LL);
  }
  v34 = (AssetData_o *)this;
  this = (BattleInformationComponent_o *)System_String__Concat_44305532(
                                           (System_String_o *)StringLiteral_16672/*"battle_states_popup"*/,
                                           (System_String_o *)v26->fields.data,
                                           0LL);
  if ( !v34 )
    goto LABEL_49;
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 v34,
                                                                 (System_String_o *)this,
                                                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v27 = 0LL;
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
    v27 = (UnityEngine_GameObject_o *)this;
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( LODWORD(v26->fields.perf) > 1 )
    {
      if ( !this )
        goto LABEL_49;
      EffectComponent__setLabel((EffectComponent_o *)this, (System_String_o *)v26->fields.logic, 0LL);
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
    (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
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
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v31; // x26
  UnityEngine_GameObject_o *v32; // x21
  UnityEngine_Transform_o *transform; // x0
  WebViewObject_o *Component_WebViewObject; // x23
  UnityEngine_Transform_o *v35; // x0
  WebViewObject_o *v36; // x28
  UnityEngine_Transform_o *v37; // x0
  WebViewObject_o *v38; // x27
  UnityEngine_Transform_o *v39; // x0
  WebViewObject_o *v40; // x24
  UnityEngine_Transform_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x25
  __int64 v43; // x0
  System_String_o *age; // x26
  il2cpp_array_size_t max_length; // w8
  System_String_o *v46; // x1
  System_String_o *v47; // x1
  System_String_o *v48; // x22
  Il2CppObject *v49; // x0
  int v50; // w8
  SimpleAnimation_o *Component_srcLineSprite; // x20
  UnityEngine_Animation_o *v52; // x19
  BattleInformationComponent_c *v53; // x0
  System_String_o *NobleInfoAnimPrefix; // x19
  System_String_o *v55; // x0
  BattleInformationComponent_c *v56; // x0
  System_String_o *v57; // x20
  System_String_o *v58; // x0
  __int64 v59; // x0
  int v60; // [xsp+4h] [xbp-5Ch] BYREF
  int v61; // [xsp+8h] [xbp-58h] BYREF
  int32_t v62; // [xsp+Ch] [xbp-54h] BYREF

  v62 = treasureDeviceLevel;
  if ( (byte_4184BCC & 1) == 0 )
  {
    sub_B2C35C(&BattleInformationComponent_TypeInfo, *(_QWORD *)&tresureDeviceId);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UILabel___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v13);
    sub_B2C35C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v14);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, v15);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v16);
    sub_B2C35C(&int_TypeInfo, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&StringLiteral_9306/*"NOBLEINFO_NP_PER"*/, v21);
    sub_B2C35C(&StringLiteral_21869/*"rubyLabel"*/, v22);
    sub_B2C35C(&StringLiteral_10635/*"PerLabel"*/, v23);
    sub_B2C35C(&StringLiteral_8515/*"LevelLabel"*/, v24);
    sub_B2C35C(&StringLiteral_1/*""*/, v25);
    sub_B2C35C(&StringLiteral_9705/*"NpLevelBase"*/, v26);
    sub_B2C35C(&StringLiteral_20359/*"mainLabel"*/, v27);
    byte_4184BCC = 1;
  }
  v61 = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !Instance )
    goto LABEL_57;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             tresureDeviceId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( Entity )
  {
    v31 = Entity;
    Instance = (DataManager_o *)BaseMonoBehaviour__createObject(
                                  (BaseMonoBehaviour_o *)this,
                                  this->fields.nobleInfoPrefab,
                                  this->fields.nobleInfoRoot,
                                  0LL,
                                  0LL);
    if ( !Instance )
      goto LABEL_57;
    v32 = (UnityEngine_GameObject_o *)Instance;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(
                                  transform,
                                  (System_String_o *)StringLiteral_20359/*"mainLabel"*/,
                                  0,
                                  0LL);
    if ( !Instance )
      goto LABEL_57;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                (UnityEngine_Component_o *)Instance,
                                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v35 = UnityEngine_GameObject__get_transform(v32, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v35, (System_String_o *)StringLiteral_21869/*"rubyLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_57;
    v36 = UnityEngine_Component__GetComponent_WebViewObject_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v37 = UnityEngine_GameObject__get_transform(v32, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v37, (System_String_o *)StringLiteral_8515/*"LevelLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_57;
    v38 = UnityEngine_Component__GetComponent_WebViewObject_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v39 = UnityEngine_GameObject__get_transform(v32, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v39, (System_String_o *)StringLiteral_10635/*"PerLabel"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_57;
    v40 = UnityEngine_Component__GetComponent_WebViewObject_(
            (UnityEngine_Component_o *)Instance,
            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    v41 = UnityEngine_GameObject__get_transform(v32, 0LL);
    Instance = (DataManager_o *)TransformHelper__getNodeFromName(v41, (System_String_o *)StringLiteral_9705/*"NpLevelBase"*/, 0, 0LL);
    if ( !Instance )
      goto LABEL_57;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !v36 )
      goto LABEL_57;
    v42 = (UnityEngine_GameObject_o *)Instance;
    UILabel__set_text((UILabel_o *)v36, v31->fields.name, 0LL);
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
        v59 = sub_B2C460(v43);
        sub_B2C400(v59, 0LL);
      }
      v46 = overrideTd->m_Items[1];
      if ( v46 )
        UILabel__set_text((UILabel_o *)v36, v46, 0LL);
    }
    Instance = (DataManager_o *)System_String__IsNullOrEmpty(age, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      Instance = (DataManager_o *)UnityEngine_GameObject__get_gameObject(v32, 0LL);
      if ( !Instance )
        goto LABEL_57;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    if ( !Component_WebViewObject )
      goto LABEL_57;
    UILabel__set_text((UILabel_o *)Component_WebViewObject, age, 0LL);
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v62, 0LL);
    if ( !v38 )
      goto LABEL_57;
    if ( Instance )
      v47 = (System_String_o *)Instance;
    else
      v47 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text((UILabel_o *)v38, v47, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_9306/*"NOBLEINFO_NP_PER"*/, 0LL);
    v60 = 100 * (treasureDevicePer / 100);
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
    Instance = (DataManager_o *)System_String__Format(v48, v49, 0LL);
    if ( !v40 || (UILabel__set_text((UILabel_o *)v40, (System_String_o *)Instance, 0LL), !v42) )
LABEL_57:
      sub_B2C434(Instance, v29);
    UnityEngine_GameObject__SetActive(v42, !isHideInfo, 0LL);
    if ( treasureDevicePer / 100 >= 5 )
      v50 = 5;
    else
      v50 = treasureDevicePer / 100;
    if ( treasureDevicePer < 100 || isHideInfo )
      v50 = 1;
    v61 = v50;
    Component_srcLineSprite = (SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v32,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    v52 = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v32,
                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      v53 = BattleInformationComponent_TypeInfo;
      if ( (BYTE3(BattleInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v53 = BattleInformationComponent_TypeInfo;
      }
      NobleInfoAnimPrefix = v53->static_fields->NobleInfoAnimPrefix;
      v55 = System_Int32__ToString((int32_t)&v61, 0LL);
      Instance = (DataManager_o *)System_String__Concat_44305532(NobleInfoAnimPrefix, v55, 0LL);
      if ( Component_srcLineSprite )
      {
        SimpleAnimation__Play_16486620(Component_srcLineSprite, (System_String_o *)Instance, 0LL);
        return;
      }
      goto LABEL_57;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v52, 0LL, 0LL) )
    {
      v56 = BattleInformationComponent_TypeInfo;
      if ( (BYTE3(BattleInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleInformationComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleInformationComponent_TypeInfo);
        v56 = BattleInformationComponent_TypeInfo;
      }
      v57 = v56->static_fields->NobleInfoAnimPrefix;
      v58 = System_Int32__ToString((int32_t)&v61, 0LL);
      Instance = (DataManager_o *)System_String__Concat_44305532(v57, v58, 0LL);
      if ( !v52 )
        goto LABEL_57;
      UnityEngine_Animation__Play_50201580(v52, (System_String_o *)Instance, 0LL);
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
    sub_B2C434(this, actionData);
  if ( !isAlreadyOverKill->max_length )
  {
    v7 = sub_B2C460(this);
    sub_B2C400(v7, 0LL);
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
    sub_B2C434(this, actionData);
  if ( isAlreadyOverKill->max_length <= 1 )
  {
    v8 = sub_B2C460(this);
    sub_B2C400(v8, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *overRoot; // x21
  UnityEngine_GameObject_o *v12; // x21
  float v13; // s0
  struct UnityEngine_GameObject_array *overObjectList; // x8
  struct UnityEngine_GameObject_array *v15; // x8
  struct UnityEngine_GameObject_array *v16; // x8
  UnityEngine_Object_o *v17; // x22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Behaviour_o *v19; // x0
  struct System_Boolean_array *isAlreadyOverKill; // x8
  float v21; // s0
  struct System_Single_array *v22; // x8
  struct System_String_array *v23; // x8
  struct System_String_array *overLabel; // x8
  struct System_String_array *v25; // x8
  struct System_Boolean_array *v26; // x8
  struct System_Single_array *timeStartOverKill; // x20
  float time; // s0
  struct System_String_array *v29; // x8
  __int64 v30; // x0

  v6 = this;
  if ( (byte_4184BD8 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, actionData);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_19759/*"in"*/, v9);
    this = (BattleInformationComponent_o *)sub_B2C35C(&StringLiteral_18760/*"flash"*/, v10);
    byte_4184BD8 = 1;
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
    v12 = v6->fields.overRoot;
    v13 = ((float (__fastcall *)(BattleInformationComponent_o *, void *))this->klass[1]._1.namespaze)(
            this,
            this->klass[1]._1.byval_arg.data);
    GameObjectExtensions__SetLocalPositionY(v12, v13, 0LL);
  }
  overObjectList = v6->fields.overObjectList;
  if ( !overObjectList )
LABEL_78:
    sub_B2C434(this, actionData);
  if ( overObjectList->max_length <= inOverType )
    goto LABEL_79;
  this = (BattleInformationComponent_o *)overObjectList->m_Items[inOverType];
  if ( !this )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v15 = v6->fields.overObjectList;
  if ( !v15 )
    goto LABEL_78;
  if ( v15->max_length <= inOverType )
    goto LABEL_79;
  this = (BattleInformationComponent_o *)v15->m_Items[inOverType];
  if ( !this )
    goto LABEL_78;
  this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                           (UnityEngine_GameObject_o *)this,
                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v16 = v6->fields.overObjectList;
  if ( !v16 )
    goto LABEL_78;
  if ( v16->max_length <= inOverType )
  {
LABEL_79:
    v30 = sub_B2C460(this);
    sub_B2C400(v30, 0LL);
  }
  v17 = (UnityEngine_Object_o *)this;
  this = (BattleInformationComponent_o *)v16->m_Items[inOverType];
  if ( !this )
    goto LABEL_78;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)this,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_78;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v17, 0, 0LL);
    v19 = (UnityEngine_Behaviour_o *)v17;
LABEL_33:
    UnityEngine_Behaviour__set_enabled(v19, 1, 0LL);
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
    v19 = (UnityEngine_Behaviour_o *)Component_srcLineSprite;
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
    this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      overLabel = v6->fields.overLabel;
      if ( !overLabel )
        goto LABEL_78;
      if ( overLabel->max_length <= inOverType )
        goto LABEL_79;
      this = (BattleInformationComponent_o *)System_String__Concat_44305532(
                                               overLabel->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_19759/*"in"*/,
                                               0LL);
      if ( !v17 )
        goto LABEL_78;
      this = (BattleInformationComponent_o *)SimpleAnimation__Play_16486620(
                                               (SimpleAnimation_o *)v17,
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
        v25 = v6->fields.overLabel;
        if ( !v25 )
          goto LABEL_78;
        if ( v25->max_length <= inOverType )
          goto LABEL_79;
        this = (BattleInformationComponent_o *)System_String__Concat_44305532(
                                                 v25->m_Items[inOverType],
                                                 (System_String_o *)StringLiteral_19759/*"in"*/,
                                                 0LL);
        if ( !Component_srcLineSprite )
          goto LABEL_78;
        this = (BattleInformationComponent_o *)UnityEngine_Animation__Play_50201580(
                                                 (UnityEngine_Animation_o *)Component_srcLineSprite,
                                                 (System_String_o *)this,
                                                 0LL);
      }
    }
    v26 = v6->fields.isAlreadyOverKill;
    if ( !v26 )
      goto LABEL_78;
    if ( v26->max_length > inOverType )
    {
      v26->m_Items[inOverType + 4] = 1;
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
  v21 = UnityEngine_Time__get_time(0LL);
  v22 = v6->fields.timeStartOverKill;
  if ( !v22 )
    goto LABEL_78;
  if ( v22->max_length <= inOverType )
    goto LABEL_79;
  if ( (float)(v21 - v22->m_Items[inOverType + 1]) > 0.2 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleInformationComponent_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v23 = v6->fields.overLabel;
      if ( !v23 )
        goto LABEL_78;
      if ( v23->max_length > inOverType )
      {
        this = (BattleInformationComponent_o *)System_String__Concat_44305532(
                                                 v23->m_Items[inOverType],
                                                 (System_String_o *)StringLiteral_18760/*"flash"*/,
                                                 0LL);
        if ( v17 )
        {
          SimpleAnimation__Play_16486620((SimpleAnimation_o *)v17, (System_String_o *)this, 0LL);
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
      v29 = v6->fields.overLabel;
      if ( !v29 )
        goto LABEL_78;
      if ( v29->max_length <= inOverType )
        goto LABEL_79;
      this = (BattleInformationComponent_o *)System_String__Concat_44305532(
                                               v29->m_Items[inOverType],
                                               (System_String_o *)StringLiteral_18760/*"flash"*/,
                                               0LL);
      if ( !Component_srcLineSprite )
        goto LABEL_78;
      UnityEngine_Animation__Play_50201580(
        (UnityEngine_Animation_o *)Component_srcLineSprite,
        (System_String_o *)this,
        0LL);
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
  WarEntity_o *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w0
  const MethodInfo *v19; // x5
  __int64 v20; // x8
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x3
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4184BD3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, isPlayer);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v12);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    byte_4184BD3 = 1;
  }
  entity = 0LL;
  if ( !message || message->fields.m_stringLength < 1 )
    return 0LL;
  if ( skillInfo )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
    v16 = (WarEntity_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                           skillInfo,
                           skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_38;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           Master_WarQuestSelectionMaster,
           &entity,
           (int32_t)v16,
           (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      v16 = entity;
      if ( !entity )
        goto LABEL_38;
      v18 = SkillEntity__GetOverWriteSkillInfoId((SkillEntity_o *)entity, 0LL);
      skillInfo = (BattleSkillInfoData_o *)BattleInformationComponent__CreateOverWriteSkillInfoObject(
                                             this,
                                             v18,
                                             message,
                                             isPlayer,
                                             skillLevel,
                                             v19);
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
    v20 = 128LL;
    if ( isPlayer )
      v20 = 120LL;
    skillInfo = (BattleSkillInfoData_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)this,
                                           *(UnityEngine_GameObject_o **)((char *)&this->klass + v20),
                                           this->fields.skillInfoRoot,
                                           0LL,
                                           0LL);
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = (WarEntity_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)skillInfo, 0LL, 0LL);
  if ( ((unsigned __int8)v16 & 1) != 0 )
  {
    if ( skillInfo )
    {
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)skillInfo,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v16 = (WarEntity_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)v16 & 1) == 0 )
        goto LABEL_36;
      if ( Component_srcLineSprite )
      {
        if ( skillLevel >= 1 && isPlayer )
          BattleInfoMessageComponent__setSkillText(
            (BattleInfoMessageComponent_o *)Component_srcLineSprite,
            message,
            skillLevel,
            v23);
        else
          BattleInfoMessageComponent__setText((BattleInfoMessageComponent_o *)Component_srcLineSprite, message, v22);
LABEL_36:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillInfo, 1, 0LL);
        return (UnityEngine_GameObject_o *)skillInfo;
      }
    }
LABEL_38:
    sub_B2C434(v16, v17);
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
  void *Instance; // x0
  __int64 v10; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v12; // x22
  bool isPlayerID; // w0
  __int64 v14; // x8
  UnityEngine_GameObject_o *v15; // x21
  BattleInfoMessageComponent_o *v16; // x23
  UnityEngine_Object_o *v17; // x24
  System_String_o *age; // x20
  System_String_o *OverrideTDName; // x0
  System_String_o *v20; // x19
  const MethodInfo *v21; // x2
  UnityEngine_GameObject_o *v22; // x0
  bool v23; // w1

  if ( (byte_4184BD5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcMaster___, actionData);
    sub_B2C35C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4184BD5 = 1;
  }
  if ( actionData )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
      if ( Instance )
      {
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   actionData->fields.treasureDvcId,
                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
        if ( !Entity )
          return;
        v12 = Entity;
        Instance = this->fields.data;
        if ( Instance )
        {
          isPlayerID = BattleData__isPlayerID((BattleData_o *)Instance, actionData->fields.actorId, 0LL);
          v14 = 128LL;
          if ( isPlayerID )
            v14 = 120LL;
          Instance = BaseMonoBehaviour__createObject(
                       (BaseMonoBehaviour_o *)this,
                       *(UnityEngine_GameObject_o **)((char *)&this->klass + v14),
                       this->fields.skillInfoRoot,
                       0LL,
                       0LL);
          if ( Instance )
          {
            v15 = (UnityEngine_GameObject_o *)Instance;
            Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleInfoMessageComponent___);
            if ( Instance )
            {
              v16 = (BattleInfoMessageComponent_o *)Instance;
              v17 = (UnityEngine_Object_o *)*((_QWORD *)Instance + 8);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
              {
                Instance = v16->fields.skillSprite;
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
                age = v12->fields.age;
                Instance = BattleData__getServantData((BattleData_o *)Instance, actionData->fields.actorId, 0LL);
                if ( Instance )
                {
                  OverrideTDName = BattleServantData__getOverrideTDName((BattleServantData_o *)Instance, 0LL);
                  if ( OverrideTDName )
                    v20 = OverrideTDName;
                  else
                    v20 = age;
                  if ( System_String__IsNullOrEmpty(v20, 0LL) )
                  {
                    v22 = v15;
                    v23 = 0;
                  }
                  else
                  {
                    BattleInfoMessageComponent__setText(v16, v20, v21);
                    v23 = 1;
                    v22 = v15;
                  }
                  UnityEngine_GameObject__SetActive(v22, v23, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_B2C434(Instance, v10);
  }
}


void __fastcall BattleInformationComponent__showTotalDamage(
        BattleInformationComponent_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleInformationComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t TotalDamage; // w0
  int v10; // w19
  int perf; // w8
  BattleInformationComponent_o *v12; // x20
  __int64 v13; // x22
  UILabel_o *v14; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x0
  int v18; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4184BCB & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___, actionData);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_20230/*"line1"*/, v6);
    sub_B2C35C(&StringLiteral_14530/*"Total {0:#,0}"*/, v7);
    this = (BattleInformationComponent_o *)sub_B2C35C(&StringLiteral_20231/*"line2"*/, v8);
    byte_4184BCB = 1;
  }
  if ( !actionData )
    goto LABEL_20;
  TotalDamage = BattleActionData__getTotalDamage(actionData, 0LL);
  if ( TotalDamage >= 1 )
  {
    v10 = TotalDamage;
    this = (BattleInformationComponent_o *)BaseMonoBehaviour__createObject(
                                             (BaseMonoBehaviour_o *)v4,
                                             v4->fields.totalLabelPrefab,
                                             v4->fields.totalMessageRoot,
                                             0LL,
                                             0LL);
    if ( !this )
      goto LABEL_20;
    this = (BattleInformationComponent_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                             (UnityEngine_GameObject_o *)this,
                                             (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UILabel___);
    if ( this )
    {
      perf = (int)this->fields.perf;
      v12 = this;
      if ( perf >= 1 )
      {
        v13 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v13 >= perf )
          {
            v17 = sub_B2C460(this);
            sub_B2C400(v17, 0LL);
          }
          v14 = (UILabel_o *)*((_QWORD *)&v12->fields.data + v13);
          if ( !v14 )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Component__get_gameObject(
                                                   *((UnityEngine_Component_o **)&v12->fields.data + v13),
                                                   0LL);
          if ( !this )
            break;
          this = (BattleInformationComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
          if ( !this )
            break;
          if ( System_String__Equals_44292872((System_String_o *)this, (System_String_o *)StringLiteral_20230/*"line1"*/, 0LL) )
          {
            v18 = v10;
            v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
            v16 = System_String__Format((System_String_o *)StringLiteral_14530/*"Total {0:#,0}"*/, v15, 0LL);
            UILabel__set_text(v14, v16, 0LL);
          }
          else
          {
            this = (BattleInformationComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v14,
                                                     0LL);
            if ( !this )
              break;
            this = (BattleInformationComponent_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
            if ( !this )
              break;
            this = (BattleInformationComponent_o *)System_String__Equals_44292872(
                                                     (System_String_o *)this,
                                                     (System_String_o *)StringLiteral_20231/*"line2"*/,
                                                     0LL);
          }
          perf = (int)v12->fields.perf;
          if ( (int)++v13 >= perf )
            return;
        }
LABEL_20:
        sub_B2C434(this, actionData);
      }
    }
  }
}